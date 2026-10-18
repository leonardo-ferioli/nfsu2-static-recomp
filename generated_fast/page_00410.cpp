#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_407(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x410,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x410,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_410(u8* __restrict R,Cpu& c);
u32 page_410(Cpu& c){return body_410(c.regs.data(),c);}
__attribute__((noinline)) u32 body_410(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x410000:goto L410000;
case 0x410006:c.instructions+=1;goto B410006;
case 0x410010:goto L410010;
case 0x410014:c.instructions+=3;goto B410014;
case 0x410016:c.instructions+=2;goto B410016;
case 0x41001c:c.instructions+=1;goto B41001c;
case 0x41001e:goto L41001e;
case 0x410020:c.instructions+=1;goto B410020;
case 0x410023:goto L410023;
case 0x410030:goto L410030;
case 0x41003a:c.instructions+=1;goto B41003a;
case 0x410040:goto L410040;
case 0x410041:c.instructions+=5;goto B410041;
case 0x410042:c.instructions+=4;goto B410042;
case 0x410044:c.instructions+=3;goto B410044;
case 0x41004a:c.instructions+=2;goto B41004a;
case 0x41004d:c.instructions+=1;goto B41004d;
case 0x410052:goto L410052;
case 0x410058:c.instructions+=3;goto B410058;
case 0x41005b:c.instructions+=2;goto B41005b;
case 0x41005d:c.instructions+=1;goto B41005d;
case 0x41005f:goto L41005f;
case 0x410064:c.instructions+=1;goto B410064;
case 0x410066:goto L410066;
case 0x41006b:c.instructions+=8;goto B41006b;
case 0x41006e:c.instructions+=7;goto B41006e;
case 0x410072:c.instructions+=6;goto B410072;
case 0x410076:c.instructions+=5;goto B410076;
case 0x41007c:c.instructions+=4;goto B41007c;
case 0x410082:c.instructions+=3;goto B410082;
case 0x410084:c.instructions+=2;goto B410084;
case 0x410087:c.instructions+=1;goto B410087;
case 0x410089:goto L410089;
case 0x41008b:c.instructions+=1;goto B41008b;
case 0x41008d:goto L41008d;
case 0x41008f:goto L41008f;
case 0x410095:c.instructions+=9;goto B410095;
case 0x41009b:c.instructions+=8;goto B41009b;
case 0x41009f:c.instructions+=7;goto B41009f;
case 0x4100a5:c.instructions+=6;goto B4100a5;
case 0x4100ab:c.instructions+=5;goto B4100ab;
case 0x4100ad:c.instructions+=4;goto B4100ad;
case 0x4100af:c.instructions+=3;goto B4100af;
case 0x4100b1:c.instructions+=2;goto B4100b1;
case 0x4100b4:c.instructions+=1;goto B4100b4;
case 0x4100b6:goto L4100b6;
case 0x4100b8:c.instructions+=1;goto B4100b8;
case 0x4100ba:goto L4100ba;
case 0x4100be:c.instructions+=4;goto B4100be;
case 0x4100c0:c.instructions+=3;goto B4100c0;
case 0x4100c2:c.instructions+=2;goto B4100c2;
case 0x4100c5:c.instructions+=1;goto B4100c5;
case 0x4100c7:goto L4100c7;
case 0x4100c9:c.instructions+=1;goto B4100c9;
case 0x4100cd:goto L4100cd;
case 0x4100cf:c.instructions+=5;goto B4100cf;
case 0x4100d1:c.instructions+=4;goto B4100d1;
case 0x4100d3:c.instructions+=3;goto B4100d3;
case 0x4100d5:c.instructions+=2;goto B4100d5;
case 0x4100d8:c.instructions+=1;goto B4100d8;
case 0x4100da:goto L4100da;
case 0x4100dc:c.instructions+=1;goto B4100dc;
case 0x4100de:goto L4100de;
case 0x4100e0:goto L4100e0;
case 0x4100e6:c.instructions+=2;goto B4100e6;
case 0x4100e8:c.instructions+=1;goto B4100e8;
case 0x4100ea:goto L4100ea;
case 0x4100f0:c.instructions+=3;goto B4100f0;
case 0x4100f3:c.instructions+=2;goto B4100f3;
case 0x4100f7:c.instructions+=1;goto B4100f7;
case 0x4100f9:goto L4100f9;
case 0x4100fb:c.instructions+=1;goto B4100fb;
case 0x4100fd:goto L4100fd;
case 0x4100ff:c.instructions+=1;goto B4100ff;
case 0x410101:goto L410101;
case 0x410104:c.instructions+=2;goto B410104;
case 0x410106:c.instructions+=1;goto B410106;
case 0x410108:goto L410108;
case 0x41010d:c.instructions+=1;goto B41010d;
case 0x41010f:goto L41010f;
case 0x410114:c.instructions+=3;goto B410114;
case 0x410115:c.instructions+=2;goto B410115;
case 0x410116:c.instructions+=1;goto B410116;
case 0x410117:goto L410117;
case 0x410119:c.instructions+=3;goto B410119;
case 0x41011a:c.instructions+=2;goto B41011a;
case 0x41011b:c.instructions+=1;goto B41011b;
case 0x410120:goto L410120;
case 0x410121:c.instructions+=5;goto B410121;
case 0x410123:c.instructions+=4;goto B410123;
case 0x410129:c.instructions+=3;goto B410129;
case 0x41012b:c.instructions+=2;goto B41012b;
case 0x41012c:c.instructions+=1;goto B41012c;
case 0x41012e:goto L41012e;
case 0x410131:c.instructions+=2;goto B410131;
case 0x410133:c.instructions+=1;goto B410133;
case 0x410135:goto L410135;
case 0x410137:c.instructions+=1;goto B410137;
case 0x41013c:goto L41013c;
case 0x41013e:c.instructions+=1;goto B41013e;
case 0x410140:goto L410140;
case 0x410145:c.instructions+=1;goto B410145;
case 0x41014b:goto L41014b;
case 0x410151:c.instructions+=2;goto B410151;
case 0x410153:c.instructions+=1;goto B410153;
case 0x410155:goto L410155;
case 0x41015d:c.instructions+=1;goto B41015d;
case 0x41015f:goto L41015f;
case 0x410165:c.instructions+=3;goto B410165;
case 0x410166:c.instructions+=2;goto B410166;
case 0x410168:c.instructions+=1;goto B410168;
case 0x41016d:goto L41016d;
case 0x410173:c.instructions+=3;goto B410173;
case 0x410175:c.instructions+=2;goto B410175;
case 0x410178:c.instructions+=1;goto B410178;
case 0x41017d:goto L41017d;
case 0x41017f:c.instructions+=1;goto B41017f;
case 0x410181:goto L410181;
case 0x410187:c.instructions+=5;goto B410187;
case 0x41018a:c.instructions+=4;goto B41018a;
case 0x41018c:c.instructions+=3;goto B41018c;
case 0x41018d:c.instructions+=2;goto B41018d;
case 0x41018f:c.instructions+=1;goto B41018f;
case 0x410194:goto L410194;
case 0x41019a:c.instructions+=3;goto B41019a;
case 0x41019c:c.instructions+=2;goto B41019c;
case 0x41019f:c.instructions+=1;goto B41019f;
case 0x4101a1:goto L4101a1;
case 0x4101a6:c.instructions+=2;goto B4101a6;
case 0x4101ad:c.instructions+=1;goto B4101ad;
case 0x4101ae:goto L4101ae;
case 0x4101b5:c.instructions+=3;goto B4101b5;
case 0x4101b6:c.instructions+=2;goto B4101b6;
case 0x4101b7:c.instructions+=1;goto B4101b7;
case 0x4101b8:goto L4101b8;
case 0x4101ba:c.instructions+=1;goto B4101ba;
case 0x4101bc:goto L4101bc;
case 0x4101bd:c.instructions+=5;goto B4101bd;
case 0x4101c2:c.instructions+=4;goto B4101c2;
case 0x4101c3:c.instructions+=3;goto B4101c3;
case 0x4101ca:c.instructions+=2;goto B4101ca;
case 0x4101cb:c.instructions+=1;goto B4101cb;
case 0x4101cc:goto L4101cc;
case 0x4101cd:c.instructions+=3;goto B4101cd;
case 0x4101d0:c.instructions+=2;goto B4101d0;
case 0x4101d1:c.instructions+=1;goto B4101d1;
case 0x4101d9:goto L4101d9;
case 0x4101da:c.instructions+=21;goto B4101da;
case 0x4101db:c.instructions+=20;goto B4101db;
case 0x4101dc:c.instructions+=19;goto B4101dc;
case 0x4101dd:c.instructions+=18;goto B4101dd;
case 0x4101de:c.instructions+=17;goto B4101de;
case 0x4101df:c.instructions+=16;goto B4101df;
case 0x4101e0:c.instructions+=15;goto B4101e0;
case 0x4101e2:c.instructions+=14;goto B4101e2;
case 0x4101e7:c.instructions+=13;goto B4101e7;
case 0x4101ed:c.instructions+=12;goto B4101ed;
case 0x4101ee:c.instructions+=11;goto B4101ee;
case 0x4101f5:c.instructions+=10;goto B4101f5;
case 0x4101f6:c.instructions+=9;goto B4101f6;
case 0x4101f7:c.instructions+=8;goto B4101f7;
case 0x4101f9:c.instructions+=7;goto B4101f9;
case 0x4101fa:c.instructions+=6;goto B4101fa;
case 0x4101fe:c.instructions+=5;goto B4101fe;
case 0x410204:c.instructions+=4;goto B410204;
case 0x41020a:c.instructions+=3;goto B41020a;
case 0x41020c:c.instructions+=2;goto B41020c;
case 0x410214:c.instructions+=1;goto B410214;
case 0x410216:goto L410216;
case 0x410218:c.instructions+=1;goto B410218;
case 0x41021d:goto L41021d;
case 0x410222:c.instructions+=3;goto B410222;
case 0x410223:c.instructions+=2;goto B410223;
case 0x410224:c.instructions+=1;goto B410224;
case 0x410229:goto L410229;
case 0x41022c:goto L41022c;
case 0x410232:c.instructions+=2;goto B410232;
case 0x410234:c.instructions+=1;goto B410234;
case 0x410236:goto L410236;
case 0x410238:c.instructions+=1;goto B410238;
case 0x41023d:goto L41023d;
case 0x410243:c.instructions+=3;goto B410243;
case 0x410244:c.instructions+=2;goto B410244;
case 0x410245:c.instructions+=1;goto B410245;
case 0x41024a:goto L41024a;
case 0x41024d:goto L41024d;
case 0x410253:c.instructions+=2;goto B410253;
case 0x410255:c.instructions+=1;goto B410255;
case 0x410257:goto L410257;
case 0x410259:c.instructions+=1;goto B410259;
case 0x41025e:goto L41025e;
case 0x410264:c.instructions+=3;goto B410264;
case 0x410265:c.instructions+=2;goto B410265;
case 0x410266:c.instructions+=1;goto B410266;
case 0x41026b:goto L41026b;
case 0x41026e:goto L41026e;
case 0x410274:c.instructions+=2;goto B410274;
case 0x410276:c.instructions+=1;goto B410276;
case 0x410278:goto L410278;
case 0x41027a:c.instructions+=1;goto B41027a;
case 0x41027f:goto L41027f;
case 0x410284:c.instructions+=3;goto B410284;
case 0x410285:c.instructions+=2;goto B410285;
case 0x410286:c.instructions+=1;goto B410286;
case 0x41028b:goto L41028b;
case 0x41028e:goto L41028e;
case 0x410292:c.instructions+=6;goto B410292;
case 0x410298:c.instructions+=5;goto B410298;
case 0x410299:c.instructions+=4;goto B410299;
case 0x41029a:c.instructions+=3;goto B41029a;
case 0x4102a1:c.instructions+=2;goto B4102a1;
case 0x4102a4:c.instructions+=1;goto B4102a4;
case 0x4102b0:goto L4102b0;
case 0x4102b4:c.instructions+=10;goto B4102b4;
case 0x4102ba:c.instructions+=9;goto B4102ba;
case 0x4102bd:c.instructions+=8;goto B4102bd;
case 0x4102be:c.instructions+=7;goto B4102be;
case 0x4102c2:c.instructions+=6;goto B4102c2;
case 0x4102c4:c.instructions+=5;goto B4102c4;
case 0x4102c5:c.instructions+=4;goto B4102c5;
case 0x4102c9:c.instructions+=3;goto B4102c9;
case 0x4102cc:c.instructions+=2;goto B4102cc;
case 0x4102d2:c.instructions+=1;goto B4102d2;
case 0x4102d4:goto L4102d4;
case 0x4102da:c.instructions+=1;goto B4102da;
case 0x4102dc:goto L4102dc;
case 0x4102e2:c.instructions+=1;goto B4102e2;
case 0x4102e4:goto L4102e4;
case 0x4102ea:c.instructions+=1;goto B4102ea;
case 0x4102f0:goto L4102f0;
case 0x4102f6:c.instructions+=1;goto B4102f6;
case 0x4102fc:goto L4102fc;
case 0x410302:c.instructions+=1;goto B410302;
case 0x410304:goto L410304;
case 0x41030a:c.instructions+=1;goto B41030a;
case 0x41030c:goto L41030c;
case 0x410312:goto L410312;
case 0x410318:c.instructions+=2;goto B410318;
case 0x41031b:c.instructions+=1;goto B41031b;
case 0x41031d:goto L41031d;
case 0x410324:goto L410324;
case 0x410326:c.instructions+=1;goto B410326;
case 0x410328:goto L410328;
case 0x41032e:c.instructions+=2;goto B41032e;
case 0x410330:c.instructions+=1;goto B410330;
case 0x410332:goto L410332;
case 0x41033c:c.instructions+=1;goto B41033c;
case 0x41033e:goto L41033e;
case 0x410340:c.instructions+=1;goto B410340;
case 0x410342:goto L410342;
case 0x410348:c.instructions+=3;goto B410348;
case 0x41034d:c.instructions+=2;goto B41034d;
case 0x41034f:c.instructions+=1;goto B41034f;
case 0x410351:goto L410351;
case 0x410357:goto L410357;
case 0x41035c:c.instructions+=6;goto B41035c;
case 0x41035d:c.instructions+=5;goto B41035d;
case 0x410363:c.instructions+=4;goto B410363;
case 0x410369:c.instructions+=3;goto B410369;
case 0x410370:c.instructions+=2;goto B410370;
case 0x410371:c.instructions+=1;goto B410371;
case 0x410372:goto L410372;
case 0x410379:c.instructions+=2;goto B410379;
case 0x410383:c.instructions+=1;goto B410383;
case 0x41038a:goto L41038a;
case 0x41038b:c.instructions+=2;goto B41038b;
case 0x41038c:c.instructions+=1;goto B41038c;
case 0x4103a0:goto L4103a0;
case 0x4103a2:c.instructions+=14;goto B4103a2;
case 0x4103a7:c.instructions+=13;goto B4103a7;
case 0x4103ad:c.instructions+=12;goto B4103ad;
case 0x4103ae:c.instructions+=11;goto B4103ae;
case 0x4103b5:c.instructions+=10;goto B4103b5;
case 0x4103b6:c.instructions+=9;goto B4103b6;
case 0x4103b7:c.instructions+=8;goto B4103b7;
case 0x4103b9:c.instructions+=7;goto B4103b9;
case 0x4103bd:c.instructions+=6;goto B4103bd;
case 0x4103c3:c.instructions+=5;goto B4103c3;
case 0x4103c9:c.instructions+=4;goto B4103c9;
case 0x4103cc:c.instructions+=3;goto B4103cc;
case 0x4103ce:c.instructions+=2;goto B4103ce;
case 0x4103d6:c.instructions+=1;goto B4103d6;
case 0x4103d8:goto L4103d8;
case 0x4103db:c.instructions+=2;goto B4103db;
case 0x4103dc:c.instructions+=1;goto B4103dc;
case 0x4103e1:goto L4103e1;
case 0x4103e4:goto L4103e4;
case 0x4103e6:c.instructions+=1;goto B4103e6;
case 0x4103eb:goto L4103eb;
case 0x4103f1:c.instructions+=2;goto B4103f1;
case 0x4103f6:c.instructions+=1;goto B4103f6;
case 0x4103fb:goto L4103fb;
case 0x4103ff:c.instructions+=5;goto B4103ff;
case 0x410405:c.instructions+=4;goto B410405;
case 0x410406:c.instructions+=3;goto B410406;
case 0x41040d:c.instructions+=2;goto B41040d;
case 0x410410:c.instructions+=1;goto B410410;
case 0x410420:goto L410420;
case 0x410424:c.instructions+=2;goto B410424;
case 0x41042a:c.instructions+=1;goto B41042a;
case 0x410430:goto L410430;
case 0x410434:c.instructions+=3;goto B410434;
case 0x410436:c.instructions+=2;goto B410436;
case 0x41043c:c.instructions+=1;goto B41043c;
case 0x41043e:goto L41043e;
case 0x410440:c.instructions+=1;goto B410440;
case 0x410443:goto L410443;
case 0x410450:goto L410450;
case 0x410456:c.instructions+=2;goto B410456;
case 0x41045a:c.instructions+=1;goto B41045a;
case 0x410460:goto L410460;
case 0x410466:c.instructions+=1;goto B410466;
case 0x410470:goto L410470;
case 0x410476:c.instructions+=4;goto B410476;
case 0x410478:c.instructions+=3;goto B410478;
case 0x41047a:c.instructions+=2;goto B41047a;
case 0x41047d:c.instructions+=1;goto B41047d;
case 0x410480:goto L410480;
case 0x410481:c.instructions+=7;goto B410481;
case 0x410483:c.instructions+=6;goto B410483;
case 0x410489:c.instructions+=5;goto B410489;
case 0x41048a:c.instructions+=4;goto B41048a;
case 0x41048f:c.instructions+=3;goto B41048f;
case 0x410494:c.instructions+=2;goto B410494;
case 0x410495:c.instructions+=1;goto B410495;
case 0x41049a:goto L41049a;
case 0x4104a0:c.instructions+=5;goto B4104a0;
case 0x4104a1:c.instructions+=4;goto B4104a1;
case 0x4104a6:c.instructions+=3;goto B4104a6;
case 0x4104ab:c.instructions+=2;goto B4104ab;
case 0x4104ac:c.instructions+=1;goto B4104ac;
case 0x4104b1:goto L4104b1;
case 0x4104b7:c.instructions+=5;goto B4104b7;
case 0x4104b8:c.instructions+=4;goto B4104b8;
case 0x4104bd:c.instructions+=3;goto B4104bd;
case 0x4104c2:c.instructions+=2;goto B4104c2;
case 0x4104c3:c.instructions+=1;goto B4104c3;
case 0x4104c8:goto L4104c8;
case 0x4104ce:c.instructions+=5;goto B4104ce;
case 0x4104cf:c.instructions+=4;goto B4104cf;
case 0x4104d4:c.instructions+=3;goto B4104d4;
case 0x4104d9:c.instructions+=2;goto B4104d9;
case 0x4104da:c.instructions+=1;goto B4104da;
case 0x4104df:goto L4104df;
case 0x4104e5:c.instructions+=6;goto B4104e5;
case 0x4104e8:c.instructions+=5;goto B4104e8;
case 0x4104e9:c.instructions+=4;goto B4104e9;
case 0x4104ee:c.instructions+=3;goto B4104ee;
case 0x4104f3:c.instructions+=2;goto B4104f3;
case 0x4104f4:c.instructions+=1;goto B4104f4;
case 0x4104f9:goto L4104f9;
case 0x4104ff:c.instructions+=5;goto B4104ff;
case 0x410500:c.instructions+=4;goto B410500;
case 0x410505:c.instructions+=3;goto B410505;
case 0x41050a:c.instructions+=2;goto B41050a;
case 0x41050b:c.instructions+=1;goto B41050b;
case 0x410510:goto L410510;
case 0x410516:c.instructions+=5;goto B410516;
case 0x410517:c.instructions+=4;goto B410517;
case 0x41051c:c.instructions+=3;goto B41051c;
case 0x410521:c.instructions+=2;goto B410521;
case 0x410522:c.instructions+=1;goto B410522;
case 0x410527:goto L410527;
case 0x41052d:c.instructions+=5;goto B41052d;
case 0x41052e:c.instructions+=4;goto B41052e;
case 0x410533:c.instructions+=3;goto B410533;
case 0x410538:c.instructions+=2;goto B410538;
case 0x410539:c.instructions+=1;goto B410539;
case 0x41053e:goto L41053e;
case 0x410544:c.instructions+=6;goto B410544;
case 0x410547:c.instructions+=5;goto B410547;
case 0x410548:c.instructions+=4;goto B410548;
case 0x41054d:c.instructions+=3;goto B41054d;
case 0x410552:c.instructions+=2;goto B410552;
case 0x410553:c.instructions+=1;goto B410553;
case 0x410558:goto L410558;
case 0x41055e:c.instructions+=5;goto B41055e;
case 0x41055f:c.instructions+=4;goto B41055f;
case 0x410564:c.instructions+=3;goto B410564;
case 0x410569:c.instructions+=2;goto B410569;
case 0x41056a:c.instructions+=1;goto B41056a;
case 0x41056f:goto L41056f;
case 0x410572:c.instructions+=2;goto B410572;
case 0x410573:c.instructions+=1;goto B410573;
case 0x410580:goto L410580;
case 0x410585:c.instructions+=2;goto B410585;
case 0x410587:c.instructions+=1;goto B410587;
case 0x410589:goto L410589;
case 0x41058d:c.instructions+=4;goto B41058d;
case 0x410590:c.instructions+=3;goto B410590;
case 0x410593:c.instructions+=2;goto B410593;
case 0x410596:c.instructions+=1;goto B410596;
case 0x410598:goto L410598;
case 0x41059e:c.instructions+=3;goto B41059e;
case 0x4105a1:c.instructions+=2;goto B4105a1;
case 0x4105a4:c.instructions+=1;goto B4105a4;
case 0x4105aa:goto L4105aa;
case 0x4105b0:goto L4105b0;
case 0x4105b5:c.instructions+=6;goto B4105b5;
case 0x4105b7:c.instructions+=5;goto B4105b7;
case 0x4105b8:c.instructions+=4;goto B4105b8;
case 0x4105b9:c.instructions+=3;goto B4105b9;
case 0x4105bd:c.instructions+=2;goto B4105bd;
case 0x4105bf:c.instructions+=1;goto B4105bf;
case 0x4105c1:goto L4105c1;
case 0x4105c4:c.instructions+=3;goto B4105c4;
case 0x4105c6:c.instructions+=2;goto B4105c6;
case 0x4105c8:c.instructions+=1;goto B4105c8;
case 0x4105ca:goto L4105ca;
case 0x4105d0:c.instructions+=3;goto B4105d0;
case 0x4105d6:c.instructions+=2;goto B4105d6;
case 0x4105dc:c.instructions+=1;goto B4105dc;
case 0x4105e1:goto L4105e1;
case 0x4105e7:goto L4105e7;
case 0x4105ec:c.instructions+=7;goto B4105ec;
case 0x4105ee:c.instructions+=6;goto B4105ee;
case 0x4105f0:c.instructions+=5;goto B4105f0;
case 0x4105f6:c.instructions+=4;goto B4105f6;
case 0x4105f9:c.instructions+=3;goto B4105f9;
case 0x4105fc:c.instructions+=2;goto B4105fc;
case 0x4105fe:c.instructions+=1;goto B4105fe;
case 0x410600:goto L410600;
case 0x41060a:goto L41060a;
case 0x41060d:c.instructions+=8;goto B41060d;
case 0x410610:c.instructions+=7;goto B410610;
case 0x410613:c.instructions+=6;goto B410613;
case 0x410615:c.instructions+=5;goto B410615;
case 0x410617:c.instructions+=4;goto B410617;
case 0x410618:c.instructions+=3;goto B410618;
case 0x41061b:c.instructions+=2;goto B41061b;
case 0x41061c:c.instructions+=1;goto B41061c;
case 0x410620:goto L410620;
case 0x410621:c.instructions+=6;goto B410621;
case 0x410625:c.instructions+=5;goto B410625;
case 0x410627:c.instructions+=4;goto B410627;
case 0x410628:c.instructions+=3;goto B410628;
case 0x410629:c.instructions+=2;goto B410629;
case 0x41062b:c.instructions+=1;goto B41062b;
case 0x410631:goto L410631;
case 0x410634:c.instructions+=2;goto B410634;
case 0x410636:c.instructions+=1;goto B410636;
case 0x410638:goto L410638;
case 0x41063b:c.instructions+=4;goto B41063b;
case 0x410640:c.instructions+=3;goto B410640;
case 0x410647:c.instructions+=2;goto B410647;
case 0x410649:c.instructions+=1;goto B410649;
case 0x41064b:goto L41064b;
case 0x41064f:c.instructions+=1;goto B41064f;
case 0x410651:goto L410651;
case 0x410654:goto L410654;
case 0x410656:c.instructions+=2;goto B410656;
case 0x410658:c.instructions+=1;goto B410658;
case 0x41065a:goto L41065a;
case 0x41065c:c.instructions+=1;goto B41065c;
case 0x410661:goto L410661;
case 0x410664:c.instructions+=2;goto B410664;
case 0x410666:c.instructions+=1;goto B410666;
case 0x410668:goto L410668;
case 0x41066c:c.instructions+=2;goto B41066c;
case 0x41066f:c.instructions+=1;goto B41066f;
case 0x410671:goto L410671;
case 0x410673:c.instructions+=1;goto B410673;
case 0x410675:goto L410675;
case 0x41067c:c.instructions+=1;goto B41067c;
case 0x41067e:goto L41067e;
case 0x410680:goto L410680;
case 0x410684:c.instructions+=1;goto B410684;
case 0x410687:goto L410687;
case 0x410689:c.instructions+=7;goto B410689;
case 0x41068b:c.instructions+=6;goto B41068b;
case 0x41068c:c.instructions+=5;goto B41068c;
case 0x41068f:c.instructions+=4;goto B41068f;
case 0x410690:c.instructions+=3;goto B410690;
case 0x410692:c.instructions+=2;goto B410692;
case 0x410693:c.instructions+=1;goto B410693;
case 0x410696:goto L410696;
case 0x41069a:c.instructions+=2;goto B41069a;
case 0x41069d:c.instructions+=1;goto B41069d;
case 0x41069f:goto L41069f;
case 0x4106a4:goto L4106a4;
case 0x4106a6:c.instructions+=7;goto B4106a6;
case 0x4106a8:c.instructions+=6;goto B4106a8;
case 0x4106a9:c.instructions+=5;goto B4106a9;
case 0x4106ac:c.instructions+=4;goto B4106ac;
case 0x4106ad:c.instructions+=3;goto B4106ad;
case 0x4106af:c.instructions+=2;goto B4106af;
case 0x4106b0:c.instructions+=1;goto B4106b0;
case 0x4106b3:goto L4106b3;
case 0x4106b4:c.instructions+=4;goto B4106b4;
case 0x4106b5:c.instructions+=3;goto B4106b5;
case 0x4106b7:c.instructions+=2;goto B4106b7;
case 0x4106b8:c.instructions+=1;goto B4106b8;
case 0x4106c0:goto L4106c0;
case 0x4106c4:c.instructions+=4;goto B4106c4;
case 0x4106c6:c.instructions+=3;goto B4106c6;
case 0x4106c7:c.instructions+=2;goto B4106c7;
case 0x4106c9:c.instructions+=1;goto B4106c9;
case 0x4106cb:goto L4106cb;
case 0x4106cc:c.instructions+=3;goto B4106cc;
case 0x4106d0:c.instructions+=2;goto B4106d0;
case 0x4106d2:c.instructions+=1;goto B4106d2;
case 0x4106d4:goto L4106d4;
case 0x4106d7:c.instructions+=2;goto B4106d7;
case 0x4106d9:c.instructions+=1;goto B4106d9;
case 0x4106db:goto L4106db;
case 0x4106de:c.instructions+=4;goto B4106de;
case 0x4106e3:c.instructions+=3;goto B4106e3;
case 0x4106ea:c.instructions+=2;goto B4106ea;
case 0x4106ec:c.instructions+=1;goto B4106ec;
case 0x4106ee:goto L4106ee;
case 0x4106f2:c.instructions+=2;goto B4106f2;
case 0x4106f9:c.instructions+=1;goto B4106f9;
case 0x4106fb:goto L4106fb;
case 0x410704:goto L410704;
case 0x410708:c.instructions+=2;goto B410708;
case 0x41070b:c.instructions+=1;goto B41070b;
case 0x41070d:goto L41070d;
case 0x410710:c.instructions+=12;goto B410710;
case 0x410713:c.instructions+=11;goto B410713;
case 0x410715:c.instructions+=10;goto B410715;
case 0x410717:c.instructions+=9;goto B410717;
case 0x41071a:c.instructions+=8;goto B41071a;
case 0x41071f:c.instructions+=7;goto B41071f;
case 0x410724:c.instructions+=6;goto B410724;
case 0x410727:c.instructions+=5;goto B410727;
case 0x410728:c.instructions+=4;goto B410728;
case 0x410729:c.instructions+=3;goto B410729;
case 0x41072a:c.instructions+=2;goto B41072a;
case 0x41072b:c.instructions+=1;goto B41072b;
case 0x410730:goto L410730;
case 0x410733:c.instructions+=2;goto B410733;
case 0x410735:c.instructions+=1;goto B410735;
case 0x410737:goto L410737;
case 0x410739:goto L410739;
case 0x41073a:c.instructions+=3;goto B41073a;
case 0x410740:c.instructions+=2;goto B410740;
case 0x410743:c.instructions+=1;goto B410743;
case 0x410748:goto L410748;
case 0x410749:goto L410749;
case 0x41074a:c.instructions+=1;goto B41074a;
case 0x410750:goto L410750;
case 0x410751:c.instructions+=9;goto B410751;
case 0x410752:c.instructions+=8;goto B410752;
case 0x410753:c.instructions+=7;goto B410753;
case 0x410757:c.instructions+=6;goto B410757;
case 0x410758:c.instructions+=5;goto B410758;
case 0x41075d:c.instructions+=4;goto B41075d;
case 0x41075f:c.instructions+=3;goto B41075f;
case 0x410761:c.instructions+=2;goto B410761;
case 0x410763:c.instructions+=1;goto B410763;
case 0x410768:goto L410768;
case 0x41076a:c.instructions+=6;goto B41076a;
case 0x41076c:c.instructions+=5;goto B41076c;
case 0x41076e:c.instructions+=4;goto B41076e;
case 0x410771:c.instructions+=3;goto B410771;
case 0x410772:c.instructions+=2;goto B410772;
case 0x410774:c.instructions+=1;goto B410774;
case 0x410779:goto L410779;
case 0x41077b:c.instructions+=1;goto B41077b;
case 0x410780:goto L410780;
case 0x410784:c.instructions+=3;goto B410784;
case 0x410785:c.instructions+=2;goto B410785;
case 0x410787:c.instructions+=1;goto B410787;
case 0x41078c:goto L41078c;
case 0x41078d:c.instructions+=2;goto B41078d;
case 0x410790:c.instructions+=1;goto B410790;
case 0x410792:goto L410792;
case 0x410795:c.instructions+=2;goto B410795;
case 0x41079a:c.instructions+=1;goto B41079a;
case 0x4107a0:goto L4107a0;
case 0x4107a5:c.instructions+=3;goto B4107a5;
case 0x4107a7:c.instructions+=2;goto B4107a7;
case 0x4107a9:c.instructions+=1;goto B4107a9;
case 0x4107ae:goto L4107ae;
case 0x4107b1:c.instructions+=3;goto B4107b1;
case 0x4107b2:c.instructions+=2;goto B4107b2;
case 0x4107b4:c.instructions+=1;goto B4107b4;
case 0x4107b9:goto L4107b9;
case 0x4107bc:c.instructions+=1;goto B4107bc;
case 0x4107be:goto L4107be;
case 0x4107c0:c.instructions+=6;goto B4107c0;
case 0x4107c2:c.instructions+=5;goto B4107c2;
case 0x4107c4:c.instructions+=4;goto B4107c4;
case 0x4107c7:c.instructions+=3;goto B4107c7;
case 0x4107c8:c.instructions+=2;goto B4107c8;
case 0x4107ca:c.instructions+=1;goto B4107ca;
case 0x4107cf:goto L4107cf;
case 0x4107d0:c.instructions+=2;goto B4107d0;
case 0x4107d2:c.instructions+=1;goto B4107d2;
case 0x4107d7:goto L4107d7;
case 0x4107da:c.instructions+=3;goto B4107da;
case 0x4107db:c.instructions+=2;goto B4107db;
case 0x4107dd:c.instructions+=1;goto B4107dd;
case 0x4107e2:goto L4107e2;
case 0x4107e4:c.instructions+=1;goto B4107e4;
case 0x4107e9:goto L4107e9;
case 0x4107ec:c.instructions+=2;goto B4107ec;
case 0x4107ed:c.instructions+=1;goto B4107ed;
case 0x4107ef:goto L4107ef;
case 0x4107f1:c.instructions+=1;goto B4107f1;
case 0x4107f6:goto L4107f6;
case 0x4107f7:c.instructions+=4;goto B4107f7;
case 0x4107f8:c.instructions+=3;goto B4107f8;
case 0x4107f9:c.instructions+=2;goto B4107f9;
case 0x4107fa:c.instructions+=1;goto B4107fa;
case 0x410800:goto L410800;
case 0x410803:c.instructions+=6;goto B410803;
case 0x410804:c.instructions+=5;goto B410804;
case 0x410808:c.instructions+=4;goto B410808;
case 0x410809:c.instructions+=3;goto B410809;
case 0x41080b:c.instructions+=2;goto B41080b;
case 0x41080e:c.instructions+=1;goto B41080e;
case 0x410810:goto L410810;
case 0x410813:c.instructions+=2;goto B410813;
case 0x410815:c.instructions+=1;goto B410815;
case 0x410817:goto L410817;
case 0x410818:c.instructions+=3;goto B410818;
case 0x41081b:c.instructions+=2;goto B41081b;
case 0x41081e:c.instructions+=1;goto B41081e;
case 0x410820:goto L410820;
case 0x410826:c.instructions+=4;goto B410826;
case 0x410827:c.instructions+=3;goto B410827;
case 0x410828:c.instructions+=2;goto B410828;
case 0x41082b:c.instructions+=1;goto B41082b;
case 0x41082e:goto L41082e;
case 0x410831:c.instructions+=1;goto B410831;
case 0x410833:goto L410833;
case 0x410835:c.instructions+=1;goto B410835;
case 0x410837:goto L410837;
case 0x41083e:c.instructions+=1;goto B41083e;
case 0x410840:goto L410840;
case 0x410842:goto L410842;
case 0x410847:c.instructions+=9;goto B410847;
case 0x41084a:c.instructions+=8;goto B41084a;
case 0x410851:c.instructions+=7;goto B410851;
case 0x410853:c.instructions+=6;goto B410853;
case 0x410855:c.instructions+=5;goto B410855;
case 0x410858:c.instructions+=4;goto B410858;
case 0x41085a:c.instructions+=3;goto B41085a;
case 0x41085f:c.instructions+=2;goto B41085f;
case 0x410861:c.instructions+=1;goto B410861;
case 0x410863:goto L410863;
case 0x41086a:c.instructions+=1;goto B41086a;
case 0x41086c:goto L41086c;
case 0x41086e:goto L41086e;
case 0x410873:c.instructions+=15;goto B410873;
case 0x410876:c.instructions+=14;goto B410876;
case 0x41087e:c.instructions+=13;goto B41087e;
case 0x410885:c.instructions+=12;goto B410885;
case 0x410888:c.instructions+=11;goto B410888;
case 0x41088c:c.instructions+=10;goto B41088c;
case 0x41088d:c.instructions+=9;goto B41088d;
case 0x410891:c.instructions+=8;goto B410891;
case 0x410895:c.instructions+=7;goto B410895;
case 0x410897:c.instructions+=6;goto B410897;
case 0x41089d:c.instructions+=5;goto B41089d;
case 0x41089f:c.instructions+=4;goto B41089f;
case 0x4108a2:c.instructions+=3;goto B4108a2;
case 0x4108a4:c.instructions+=2;goto B4108a4;
case 0x4108a5:c.instructions+=1;goto B4108a5;
case 0x4108aa:goto L4108aa;
case 0x4108ae:c.instructions+=11;goto B4108ae;
case 0x4108b1:c.instructions+=10;goto B4108b1;
case 0x4108b5:c.instructions+=9;goto B4108b5;
case 0x4108b6:c.instructions+=8;goto B4108b6;
case 0x4108ba:c.instructions+=7;goto B4108ba;
case 0x4108be:c.instructions+=6;goto B4108be;
case 0x4108c4:c.instructions+=5;goto B4108c4;
case 0x4108c7:c.instructions+=4;goto B4108c7;
case 0x4108c9:c.instructions+=3;goto B4108c9;
case 0x4108ca:c.instructions+=2;goto B4108ca;
case 0x4108cc:c.instructions+=1;goto B4108cc;
case 0x4108d1:goto L4108d1;
case 0x4108d5:c.instructions+=2;goto B4108d5;
case 0x4108d7:c.instructions+=1;goto B4108d7;
case 0x4108d9:goto L4108d9;
case 0x4108dd:c.instructions+=24;goto B4108dd;
case 0x4108e1:c.instructions+=23;goto B4108e1;
case 0x4108e5:c.instructions+=22;goto B4108e5;
case 0x4108e9:c.instructions+=21;goto B4108e9;
case 0x4108ed:c.instructions+=20;goto B4108ed;
case 0x4108f3:c.instructions+=19;goto B4108f3;
case 0x4108f7:c.instructions+=18;goto B4108f7;
case 0x4108fb:c.instructions+=17;goto B4108fb;
case 0x410901:c.instructions+=16;goto B410901;
case 0x410903:c.instructions+=15;goto B410903;
case 0x410907:c.instructions+=14;goto B410907;
case 0x41090a:c.instructions+=13;goto B41090a;
case 0x41090c:c.instructions+=12;goto B41090c;
case 0x410910:c.instructions+=11;goto B410910;
case 0x410912:c.instructions+=10;goto B410912;
case 0x410916:c.instructions+=9;goto B410916;
case 0x410918:c.instructions+=8;goto B410918;
case 0x41091c:c.instructions+=7;goto B41091c;
case 0x41091e:c.instructions+=6;goto B41091e;
case 0x410920:c.instructions+=5;goto B410920;
case 0x410924:c.instructions+=4;goto B410924;
case 0x410928:c.instructions+=3;goto B410928;
case 0x41092b:c.instructions+=2;goto B41092b;
case 0x41092d:c.instructions+=1;goto B41092d;
case 0x41092f:goto L41092f;
case 0x410933:c.instructions+=3;goto B410933;
case 0x410934:c.instructions+=2;goto B410934;
case 0x410936:c.instructions+=1;goto B410936;
case 0x41093b:goto L41093b;
case 0x41093f:c.instructions+=11;goto B41093f;
case 0x410942:c.instructions+=10;goto B410942;
case 0x410946:c.instructions+=9;goto B410946;
case 0x410947:c.instructions+=8;goto B410947;
case 0x410949:c.instructions+=7;goto B410949;
case 0x41094d:c.instructions+=6;goto B41094d;
case 0x410951:c.instructions+=5;goto B410951;
case 0x410953:c.instructions+=4;goto B410953;
case 0x410957:c.instructions+=3;goto B410957;
case 0x410959:c.instructions+=2;goto B410959;
case 0x41095d:c.instructions+=1;goto B41095d;
case 0x410962:goto L410962;
case 0x410966:c.instructions+=2;goto B410966;
case 0x410969:c.instructions+=1;goto B410969;
case 0x41096d:goto L41096d;
case 0x410971:c.instructions+=8;goto B410971;
case 0x410973:c.instructions+=7;goto B410973;
case 0x410977:c.instructions+=6;goto B410977;
case 0x410979:c.instructions+=5;goto B410979;
case 0x41097d:c.instructions+=4;goto B41097d;
case 0x41097f:c.instructions+=3;goto B41097f;
case 0x410981:c.instructions+=2;goto B410981;
case 0x410984:c.instructions+=1;goto B410984;
case 0x410986:goto L410986;
case 0x410988:c.instructions+=1;goto B410988;
case 0x41098c:goto L41098c;
case 0x41098d:c.instructions+=4;goto B41098d;
case 0x41098f:c.instructions+=3;goto B41098f;
case 0x410990:c.instructions+=2;goto B410990;
case 0x410993:c.instructions+=1;goto B410993;
case 0x4109a0:goto L4109a0;
case 0x4109a1:c.instructions+=5;goto B4109a1;
case 0x4109a3:c.instructions+=4;goto B4109a3;
case 0x4109a5:c.instructions+=3;goto B4109a5;
case 0x4109a6:c.instructions+=2;goto B4109a6;
case 0x4109a9:c.instructions+=1;goto B4109a9;
case 0x4109ab:goto L4109ab;
case 0x4109b2:goto L4109b2;
case 0x4109b5:c.instructions+=3;goto B4109b5;
case 0x4109b9:c.instructions+=2;goto B4109b9;
case 0x4109bb:c.instructions+=1;goto B4109bb;
case 0x4109bd:goto L4109bd;
case 0x4109bf:c.instructions+=4;goto B4109bf;
case 0x4109c1:c.instructions+=3;goto B4109c1;
case 0x4109c4:c.instructions+=2;goto B4109c4;
case 0x4109c6:c.instructions+=1;goto B4109c6;
case 0x4109c8:goto L4109c8;
case 0x4109ca:c.instructions+=1;goto B4109ca;
case 0x4109cc:goto L4109cc;
case 0x4109ce:c.instructions+=2;goto B4109ce;
case 0x4109cf:c.instructions+=1;goto B4109cf;
case 0x4109d2:goto L4109d2;
case 0x4109d4:c.instructions+=2;goto B4109d4;
case 0x4109d6:c.instructions+=1;goto B4109d6;
case 0x4109db:goto L4109db;
case 0x4109e1:c.instructions+=3;goto B4109e1;
case 0x4109e3:c.instructions+=2;goto B4109e3;
case 0x4109e6:c.instructions+=1;goto B4109e6;
case 0x4109e8:goto L4109e8;
case 0x4109ed:c.instructions+=2;goto B4109ed;
case 0x4109ee:c.instructions+=1;goto B4109ee;
case 0x4109f1:goto L4109f1;
case 0x4109f3:c.instructions+=2;goto B4109f3;
case 0x4109f4:c.instructions+=1;goto B4109f4;
case 0x4109f7:goto L4109f7;
case 0x4109f9:c.instructions+=2;goto B4109f9;
case 0x4109fa:c.instructions+=1;goto B4109fa;
case 0x410a10:goto L410a10;
case 0x410a11:c.instructions+=5;goto B410a11;
case 0x410a15:c.instructions+=4;goto B410a15;
case 0x410a16:c.instructions+=3;goto B410a16;
case 0x410a18:c.instructions+=2;goto B410a18;
case 0x410a1b:c.instructions+=1;goto B410a1b;
case 0x410a20:goto L410a20;
case 0x410a23:c.instructions+=2;goto B410a23;
case 0x410a25:c.instructions+=1;goto B410a25;
case 0x410a27:goto L410a27;
case 0x410a28:c.instructions+=3;goto B410a28;
case 0x410a2b:c.instructions+=2;goto B410a2b;
case 0x410a2e:c.instructions+=1;goto B410a2e;
case 0x410a30:goto L410a30;
case 0x410a31:c.instructions+=2;goto B410a31;
case 0x410a32:c.instructions+=1;goto B410a32;
case 0x410a35:goto L410a35;
case 0x410a38:c.instructions+=1;goto B410a38;
case 0x410a3a:goto L410a3a;
case 0x410a3d:c.instructions+=5;goto B410a3d;
case 0x410a3f:c.instructions+=4;goto B410a3f;
case 0x410a41:c.instructions+=3;goto B410a41;
case 0x410a44:c.instructions+=2;goto B410a44;
case 0x410a46:c.instructions+=1;goto B410a46;
case 0x410a48:goto L410a48;
case 0x410a4b:goto L410a4b;
case 0x410a4c:c.instructions+=2;goto B410a4c;
case 0x410a4d:c.instructions+=1;goto B410a4d;
case 0x410a50:goto L410a50;
case 0x410a54:c.instructions+=7;goto B410a54;
case 0x410a57:c.instructions+=6;goto B410a57;
case 0x410a58:c.instructions+=5;goto B410a58;
case 0x410a59:c.instructions+=4;goto B410a59;
case 0x410a5c:c.instructions+=3;goto B410a5c;
case 0x410a61:c.instructions+=2;goto B410a61;
case 0x410a63:c.instructions+=1;goto B410a63;
case 0x410a65:goto L410a65;
case 0x410a69:c.instructions+=3;goto B410a69;
case 0x410a6c:c.instructions+=2;goto B410a6c;
case 0x410a6f:c.instructions+=1;goto B410a6f;
case 0x410a71:goto L410a71;
case 0x410a75:c.instructions+=8;goto B410a75;
case 0x410a79:c.instructions+=7;goto B410a79;
case 0x410a7c:c.instructions+=6;goto B410a7c;
case 0x410a7f:c.instructions+=5;goto B410a7f;
case 0x410a82:c.instructions+=4;goto B410a82;
case 0x410a85:c.instructions+=3;goto B410a85;
case 0x410a88:c.instructions+=2;goto B410a88;
case 0x410a8a:c.instructions+=1;goto B410a8a;
case 0x410a8c:goto L410a8c;
case 0x410a8f:c.instructions+=4;goto B410a8f;
case 0x410a93:c.instructions+=3;goto B410a93;
case 0x410a95:c.instructions+=2;goto B410a95;
case 0x410a97:c.instructions+=1;goto B410a97;
case 0x410a99:goto L410a99;
case 0x410a9c:c.instructions+=4;goto B410a9c;
case 0x410aa2:c.instructions+=3;goto B410aa2;
case 0x410aa4:c.instructions+=2;goto B410aa4;
case 0x410aa7:c.instructions+=1;goto B410aa7;
case 0x410aa9:goto L410aa9;
case 0x410aac:c.instructions+=4;goto B410aac;
case 0x410ab2:c.instructions+=3;goto B410ab2;
case 0x410ab4:c.instructions+=2;goto B410ab4;
case 0x410ab7:c.instructions+=1;goto B410ab7;
case 0x410ab9:goto L410ab9;
case 0x410abc:c.instructions+=2;goto B410abc;
case 0x410abf:c.instructions+=1;goto B410abf;
case 0x410ac1:goto L410ac1;
case 0x410ac2:c.instructions+=3;goto B410ac2;
case 0x410ac7:c.instructions+=2;goto B410ac7;
case 0x410ac8:c.instructions+=1;goto B410ac8;
case 0x410acb:goto L410acb;
case 0x410acc:c.instructions+=3;goto B410acc;
case 0x410ace:c.instructions+=2;goto B410ace;
case 0x410acf:c.instructions+=1;goto B410acf;
case 0x410ad2:goto L410ad2;
case 0x410ad3:c.instructions+=3;goto B410ad3;
case 0x410ad5:c.instructions+=2;goto B410ad5;
case 0x410ad6:c.instructions+=1;goto B410ad6;
case 0x410ae0:goto L410ae0;
case 0x410ae4:c.instructions+=6;goto B410ae4;
case 0x410ae5:c.instructions+=5;goto B410ae5;
case 0x410ae9:c.instructions+=4;goto B410ae9;
case 0x410aea:c.instructions+=3;goto B410aea;
case 0x410aec:c.instructions+=2;goto B410aec;
case 0x410aef:c.instructions+=1;goto B410aef;
case 0x410af0:goto L410af0;
case 0x410af3:c.instructions+=2;goto B410af3;
case 0x410af5:c.instructions+=1;goto B410af5;
case 0x410af7:goto L410af7;
case 0x410af8:c.instructions+=3;goto B410af8;
case 0x410afb:c.instructions+=2;goto B410afb;
case 0x410afe:c.instructions+=1;goto B410afe;
case 0x410b00:goto L410b00;
case 0x410b01:c.instructions+=3;goto B410b01;
case 0x410b03:c.instructions+=2;goto B410b03;
case 0x410b04:c.instructions+=1;goto B410b04;
case 0x410b07:goto L410b07;
case 0x410b0a:c.instructions+=1;goto B410b0a;
case 0x410b0c:goto L410b0c;
case 0x410b0e:c.instructions+=5;goto B410b0e;
case 0x410b10:c.instructions+=4;goto B410b10;
case 0x410b13:c.instructions+=3;goto B410b13;
case 0x410b18:c.instructions+=2;goto B410b18;
case 0x410b1a:c.instructions+=1;goto B410b1a;
case 0x410b1c:goto L410b1c;
case 0x410b21:c.instructions+=6;goto B410b21;
case 0x410b28:c.instructions+=5;goto B410b28;
case 0x410b2b:c.instructions+=4;goto B410b2b;
case 0x410b2c:c.instructions+=3;goto B410b2c;
case 0x410b33:c.instructions+=2;goto B410b33;
case 0x410b34:c.instructions+=1;goto B410b34;
case 0x410b37:goto L410b37;
case 0x410b3c:c.instructions+=6;goto B410b3c;
case 0x410b3f:c.instructions+=5;goto B410b3f;
case 0x410b41:c.instructions+=4;goto B410b41;
case 0x410b42:c.instructions+=3;goto B410b42;
case 0x410b49:c.instructions+=2;goto B410b49;
case 0x410b4a:c.instructions+=1;goto B410b4a;
case 0x410b50:goto L410b50;
case 0x410b54:c.instructions+=4;goto B410b54;
case 0x410b57:c.instructions+=3;goto B410b57;
case 0x410b58:c.instructions+=2;goto B410b58;
case 0x410b5c:c.instructions+=1;goto B410b5c;
case 0x410b62:goto L410b62;
case 0x410b63:c.instructions+=7;goto B410b63;
case 0x410b67:c.instructions+=6;goto B410b67;
case 0x410b68:c.instructions+=5;goto B410b68;
case 0x410b6c:c.instructions+=4;goto B410b6c;
case 0x410b6f:c.instructions+=3;goto B410b6f;
case 0x410b71:c.instructions+=2;goto B410b71;
case 0x410b74:c.instructions+=1;goto B410b74;
case 0x410b75:goto L410b75;
case 0x410b78:c.instructions+=2;goto B410b78;
case 0x410b7a:c.instructions+=1;goto B410b7a;
case 0x410b7c:goto L410b7c;
case 0x410b7d:c.instructions+=3;goto B410b7d;
case 0x410b80:c.instructions+=2;goto B410b80;
case 0x410b83:c.instructions+=1;goto B410b83;
case 0x410b85:goto L410b85;
case 0x410b88:goto L410b88;
case 0x410b8c:c.instructions+=13;goto B410b8c;
case 0x410b90:c.instructions+=12;goto B410b90;
case 0x410b92:c.instructions+=11;goto B410b92;
case 0x410b95:c.instructions+=10;goto B410b95;
case 0x410b97:c.instructions+=9;goto B410b97;
case 0x410b9a:c.instructions+=8;goto B410b9a;
case 0x410b9d:c.instructions+=7;goto B410b9d;
case 0x410ba0:c.instructions+=6;goto B410ba0;
case 0x410ba3:c.instructions+=5;goto B410ba3;
case 0x410ba7:c.instructions+=4;goto B410ba7;
case 0x410baa:c.instructions+=3;goto B410baa;
case 0x410bad:c.instructions+=2;goto B410bad;
case 0x410bae:c.instructions+=1;goto B410bae;
case 0x410bb0:goto L410bb0;
case 0x410bb5:c.instructions+=3;goto B410bb5;
case 0x410bbb:c.instructions+=2;goto B410bbb;
case 0x410bbe:c.instructions+=1;goto B410bbe;
case 0x410bc0:goto L410bc0;
case 0x410bc3:c.instructions+=3;goto B410bc3;
case 0x410bc5:c.instructions+=2;goto B410bc5;
case 0x410bc8:c.instructions+=1;goto B410bc8;
case 0x410bcb:goto L410bcb;
case 0x410bcf:c.instructions+=5;goto B410bcf;
case 0x410bd1:c.instructions+=4;goto B410bd1;
case 0x410bd3:c.instructions+=3;goto B410bd3;
case 0x410bd5:c.instructions+=2;goto B410bd5;
case 0x410bd8:c.instructions+=1;goto B410bd8;
case 0x410bda:goto L410bda;
case 0x410bdb:c.instructions+=4;goto B410bdb;
case 0x410bdf:c.instructions+=3;goto B410bdf;
case 0x410be0:c.instructions+=2;goto B410be0;
case 0x410be1:c.instructions+=1;goto B410be1;
case 0x410be4:goto L410be4;
case 0x410be8:goto L410be8;
case 0x410be9:c.instructions+=1;goto B410be9;
case 0x410bea:goto L410bea;
case 0x410beb:c.instructions+=1;goto B410beb;
case 0x410bf0:goto L410bf0;
case 0x410bf2:c.instructions+=1;goto B410bf2;
case 0x410bf5:goto L410bf5;
case 0x410bf8:c.instructions+=2;goto B410bf8;
case 0x410bfa:c.instructions+=1;goto B410bfa;
case 0x410bfc:goto L410bfc;
case 0x410c03:c.instructions+=2;goto B410c03;
case 0x410c05:c.instructions+=1;goto B410c05;
case 0x410c07:goto L410c07;
case 0x410c0a:c.instructions+=3;goto B410c0a;
case 0x410c0d:c.instructions+=2;goto B410c0d;
case 0x410c0f:c.instructions+=1;goto B410c0f;
case 0x410c11:goto L410c11;
case 0x410c12:c.instructions+=3;goto B410c12;
case 0x410c15:c.instructions+=2;goto B410c15;
case 0x410c18:c.instructions+=1;goto B410c18;
case 0x410c1a:goto L410c1a;
case 0x410c1c:c.instructions+=1;goto B410c1c;
case 0x410c1d:goto L410c1d;
case 0x410c1f:c.instructions+=1;goto B410c1f;
case 0x410c20:goto L410c20;
case 0x410c21:c.instructions+=4;goto B410c21;
case 0x410c25:c.instructions+=3;goto B410c25;
case 0x410c27:c.instructions+=2;goto B410c27;
case 0x410c28:c.instructions+=1;goto B410c28;
case 0x410c2a:goto L410c2a;
case 0x410c2d:c.instructions+=3;goto B410c2d;
case 0x410c32:c.instructions+=2;goto B410c32;
case 0x410c39:c.instructions+=1;goto B410c39;
case 0x410c3b:goto L410c3b;
case 0x410c3d:goto L410c3d;
case 0x410c41:c.instructions+=16;goto B410c41;
case 0x410c42:c.instructions+=15;goto B410c42;
case 0x410c43:c.instructions+=14;goto B410c43;
case 0x410c45:c.instructions+=13;goto B410c45;
case 0x410c47:c.instructions+=12;goto B410c47;
case 0x410c49:c.instructions+=11;goto B410c49;
case 0x410c4f:c.instructions+=10;goto B410c4f;
case 0x410c54:c.instructions+=9;goto B410c54;
case 0x410c56:c.instructions+=8;goto B410c56;
case 0x410c58:c.instructions+=7;goto B410c58;
case 0x410c5b:c.instructions+=6;goto B410c5b;
case 0x410c5d:c.instructions+=5;goto B410c5d;
case 0x410c60:c.instructions+=4;goto B410c60;
case 0x410c62:c.instructions+=3;goto B410c62;
case 0x410c64:c.instructions+=2;goto B410c64;
case 0x410c66:c.instructions+=1;goto B410c66;
case 0x410c68:goto L410c68;
case 0x410c6a:c.instructions+=2;goto B410c6a;
case 0x410c6c:c.instructions+=1;goto B410c6c;
case 0x410c6e:goto L410c6e;
case 0x410c70:goto L410c70;
case 0x410c72:c.instructions+=2;goto B410c72;
case 0x410c75:c.instructions+=1;goto B410c75;
case 0x410c77:goto L410c77;
case 0x410c7c:goto L410c7c;
case 0x410c7d:c.instructions+=2;goto B410c7d;
case 0x410c83:c.instructions+=1;goto B410c83;
case 0x410c88:goto L410c88;
case 0x410c8a:c.instructions+=5;goto B410c8a;
case 0x410c8d:c.instructions+=4;goto B410c8d;
case 0x410c94:c.instructions+=3;goto B410c94;
case 0x410c95:c.instructions+=2;goto B410c95;
case 0x410c96:c.instructions+=1;goto B410c96;
case 0x410ca0:goto L410ca0;
case 0x410ca4:c.instructions+=5;goto B410ca4;
case 0x410ca7:c.instructions+=4;goto B410ca7;
case 0x410cac:c.instructions+=3;goto B410cac;
case 0x410cad:c.instructions+=2;goto B410cad;
case 0x410cae:c.instructions+=1;goto B410cae;
case 0x410cb0:goto L410cb0;
case 0x410cb7:c.instructions+=1;goto B410cb7;
case 0x410cb9:goto L410cb9;
case 0x410cbb:goto L410cbb;
case 0x410cbf:c.instructions+=7;goto B410cbf;
case 0x410cc4:c.instructions+=6;goto B410cc4;
case 0x410cc6:c.instructions+=5;goto B410cc6;
case 0x410cc8:c.instructions+=4;goto B410cc8;
case 0x410ccb:c.instructions+=3;goto B410ccb;
case 0x410ccd:c.instructions+=2;goto B410ccd;
case 0x410cd4:c.instructions+=1;goto B410cd4;
case 0x410cd6:goto L410cd6;
case 0x410cdb:c.instructions+=2;goto B410cdb;
case 0x410cdd:c.instructions+=1;goto B410cdd;
case 0x410ce3:goto L410ce3;
case 0x410ce8:c.instructions+=2;goto B410ce8;
case 0x410cea:c.instructions+=1;goto B410cea;
case 0x410cec:goto L410cec;
case 0x410cf2:c.instructions+=2;goto B410cf2;
case 0x410cf7:c.instructions+=1;goto B410cf7;
case 0x410cfc:goto L410cfc;
case 0x410d02:c.instructions+=3;goto B410d02;
case 0x410d04:c.instructions+=2;goto B410d04;
case 0x410d07:c.instructions+=1;goto B410d07;
case 0x410d09:goto L410d09;
case 0x410d0f:c.instructions+=4;goto B410d0f;
case 0x410d15:c.instructions+=3;goto B410d15;
case 0x410d16:c.instructions+=2;goto B410d16;
case 0x410d1c:c.instructions+=1;goto B410d1c;
case 0x410d21:goto L410d21;
case 0x410d23:c.instructions+=11;goto B410d23;
case 0x410d28:c.instructions+=10;goto B410d28;
case 0x410d2a:c.instructions+=9;goto B410d2a;
case 0x410d2c:c.instructions+=8;goto B410d2c;
case 0x410d2e:c.instructions+=7;goto B410d2e;
case 0x410d30:c.instructions+=6;goto B410d30;
case 0x410d33:c.instructions+=5;goto B410d33;
case 0x410d3a:c.instructions+=4;goto B410d3a;
case 0x410d3d:c.instructions+=3;goto B410d3d;
case 0x410d40:c.instructions+=2;goto B410d40;
case 0x410d42:c.instructions+=1;goto B410d42;
case 0x410d45:goto L410d45;
case 0x410d48:c.instructions+=1;goto B410d48;
case 0x410d4a:goto L410d4a;
case 0x410d4d:c.instructions+=1;goto B410d4d;
case 0x410d4f:goto L410d4f;
case 0x410d52:c.instructions+=1;goto B410d52;
case 0x410d54:goto L410d54;
case 0x410d57:c.instructions+=1;goto B410d57;
case 0x410d59:goto L410d59;
case 0x410d5c:goto L410d5c;
case 0x410d5e:c.instructions+=3;goto B410d5e;
case 0x410d65:c.instructions+=2;goto B410d65;
case 0x410d67:c.instructions+=1;goto B410d67;
case 0x410d69:goto L410d69;
case 0x410d6a:c.instructions+=3;goto B410d6a;
case 0x410d6c:c.instructions+=2;goto B410d6c;
case 0x410d73:c.instructions+=1;goto B410d73;
case 0x410d80:goto L410d80;
case 0x410d86:c.instructions+=2;goto B410d86;
case 0x410d8b:c.instructions+=1;goto B410d8b;
case 0x410d90:goto L410d90;
case 0x410d92:c.instructions+=8;goto B410d92;
case 0x410d97:c.instructions+=7;goto B410d97;
case 0x410d99:c.instructions+=6;goto B410d99;
case 0x410d9b:c.instructions+=5;goto B410d9b;
case 0x410d9d:c.instructions+=4;goto B410d9d;
case 0x410d9f:c.instructions+=3;goto B410d9f;
case 0x410da2:c.instructions+=2;goto B410da2;
case 0x410da6:c.instructions+=1;goto B410da6;
case 0x410da8:goto L410da8;
case 0x410da9:c.instructions+=2;goto B410da9;
case 0x410dac:c.instructions+=1;goto B410dac;
case 0x410dae:goto L410dae;
case 0x410db0:goto L410db0;
case 0x410db4:c.instructions+=1;goto B410db4;
case 0x410db6:goto L410db6;
case 0x410db7:c.instructions+=2;goto B410db7;
case 0x410dba:c.instructions+=1;goto B410dba;
case 0x410dbc:goto L410dbc;
case 0x410dbf:c.instructions+=1;goto B410dbf;
case 0x410dc0:goto L410dc0;
case 0x410dc1:c.instructions+=2;goto B410dc1;
case 0x410dc2:c.instructions+=1;goto B410dc2;
case 0x410dc5:goto L410dc5;
case 0x410dc6:c.instructions+=4;goto B410dc6;
case 0x410dc7:c.instructions+=3;goto B410dc7;
case 0x410dca:c.instructions+=2;goto B410dca;
case 0x410dcb:c.instructions+=1;goto B410dcb;
case 0x410dce:goto L410dce;
case 0x410dcf:c.instructions+=4;goto B410dcf;
case 0x410dd0:c.instructions+=3;goto B410dd0;
case 0x410dd2:c.instructions+=2;goto B410dd2;
case 0x410dd3:c.instructions+=1;goto B410dd3;
case 0x410de0:goto L410de0;
case 0x410de6:c.instructions+=6;goto B410de6;
case 0x410de7:c.instructions+=5;goto B410de7;
case 0x410de9:c.instructions+=4;goto B410de9;
case 0x410deb:c.instructions+=3;goto B410deb;
case 0x410dee:c.instructions+=2;goto B410dee;
case 0x410def:c.instructions+=1;goto B410def;
case 0x410df1:goto L410df1;
case 0x410df6:c.instructions+=2;goto B410df6;
case 0x410df8:c.instructions+=1;goto B410df8;
case 0x410dfa:goto L410dfa;
case 0x410dfe:c.instructions+=5;goto B410dfe;
case 0x410e04:c.instructions+=4;goto B410e04;
case 0x410e08:c.instructions+=3;goto B410e08;
case 0x410e0a:c.instructions+=2;goto B410e0a;
case 0x410e0e:c.instructions+=1;goto B410e0e;
case 0x410e13:goto L410e13;
case 0x410e17:c.instructions+=3;goto B410e17;
case 0x410e1a:c.instructions+=2;goto B410e1a;
case 0x410e1e:c.instructions+=1;goto B410e1e;
case 0x410e23:goto L410e23;
case 0x410e30:goto L410e30;
case 0x410e33:c.instructions+=7;goto B410e33;
case 0x410e34:c.instructions+=6;goto B410e34;
case 0x410e35:c.instructions+=5;goto B410e35;
case 0x410e36:c.instructions+=4;goto B410e36;
case 0x410e3a:c.instructions+=3;goto B410e3a;
case 0x410e3c:c.instructions+=2;goto B410e3c;
case 0x410e3d:c.instructions+=1;goto B410e3d;
case 0x410e3f:goto L410e3f;
case 0x410e42:c.instructions+=1;goto B410e42;
case 0x410e44:goto L410e44;
case 0x410e47:c.instructions+=1;goto B410e47;
case 0x410e49:goto L410e49;
case 0x410e4c:c.instructions+=1;goto B410e4c;
case 0x410e4e:goto L410e4e;
case 0x410e53:c.instructions+=1;goto B410e53;
case 0x410e55:goto L410e55;
case 0x410e5a:goto L410e5a;
case 0x410e5f:c.instructions+=3;goto B410e5f;
case 0x410e61:c.instructions+=2;goto B410e61;
case 0x410e65:c.instructions+=1;goto B410e65;
case 0x410e67:goto L410e67;
case 0x410e69:c.instructions+=1;goto B410e69;
case 0x410e6e:goto L410e6e;
case 0x410e71:c.instructions+=3;goto B410e71;
case 0x410e74:c.instructions+=2;goto B410e74;
case 0x410e76:c.instructions+=1;goto B410e76;
case 0x410e78:goto L410e78;
case 0x410e7c:c.instructions+=3;goto B410e7c;
case 0x410e7e:c.instructions+=2;goto B410e7e;
case 0x410e83:c.instructions+=1;goto B410e83;
case 0x410e85:goto L410e85;
case 0x410e89:c.instructions+=1;goto B410e89;
case 0x410e8d:goto L410e8d;
case 0x410e8e:c.instructions+=2;goto B410e8e;
case 0x410e90:c.instructions+=1;goto B410e90;
case 0x410e95:goto L410e95;
case 0x410e99:c.instructions+=8;goto B410e99;
case 0x410e9d:c.instructions+=7;goto B410e9d;
case 0x410ea1:c.instructions+=6;goto B410ea1;
case 0x410ea2:c.instructions+=5;goto B410ea2;
case 0x410ea3:c.instructions+=4;goto B410ea3;
case 0x410ea7:c.instructions+=3;goto B410ea7;
case 0x410ea8:c.instructions+=2;goto B410ea8;
case 0x410eaa:c.instructions+=1;goto B410eaa;
case 0x410eaf:goto L410eaf;
case 0x410eb5:c.instructions+=7;goto B410eb5;
case 0x410eb8:c.instructions+=6;goto B410eb8;
case 0x410ebb:c.instructions+=5;goto B410ebb;
case 0x410ebd:c.instructions+=4;goto B410ebd;
case 0x410ebf:c.instructions+=3;goto B410ebf;
case 0x410ec1:c.instructions+=2;goto B410ec1;
case 0x410ec5:c.instructions+=1;goto B410ec5;
case 0x410ecb:goto L410ecb;
case 0x410ed0:goto L410ed0;
case 0x410ed2:c.instructions+=4;goto B410ed2;
case 0x410ed6:c.instructions+=3;goto B410ed6;
case 0x410eda:c.instructions+=2;goto B410eda;
case 0x410edd:c.instructions+=1;goto B410edd;
case 0x410ee3:goto L410ee3;
case 0x410ee5:c.instructions+=1;goto B410ee5;
case 0x410eea:goto L410eea;
case 0x410eec:c.instructions+=1;goto B410eec;
case 0x410ef2:goto L410ef2;
case 0x410ef8:c.instructions+=2;goto B410ef8;
case 0x410efa:c.instructions+=1;goto B410efa;
case 0x410f00:goto L410f00;
case 0x410f03:c.instructions+=3;goto B410f03;
case 0x410f06:c.instructions+=2;goto B410f06;
case 0x410f08:c.instructions+=1;goto B410f08;
case 0x410f0d:goto L410f0d;
case 0x410f11:c.instructions+=1;goto B410f11;
case 0x410f13:goto L410f13;
case 0x410f16:c.instructions+=3;goto B410f16;
case 0x410f19:c.instructions+=2;goto B410f19;
case 0x410f1f:c.instructions+=1;goto B410f1f;
case 0x410f21:goto L410f21;
case 0x410f24:c.instructions+=5;goto B410f24;
case 0x410f29:c.instructions+=4;goto B410f29;
case 0x410f2b:c.instructions+=3;goto B410f2b;
case 0x410f2e:c.instructions+=2;goto B410f2e;
case 0x410f30:c.instructions+=1;goto B410f30;
case 0x410f32:goto L410f32;
case 0x410f34:c.instructions+=1;goto B410f34;
case 0x410f39:goto L410f39;
case 0x410f3c:c.instructions+=3;goto B410f3c;
case 0x410f3f:c.instructions+=2;goto B410f3f;
case 0x410f41:c.instructions+=1;goto B410f41;
case 0x410f43:goto L410f43;
case 0x410f45:c.instructions+=1;goto B410f45;
case 0x410f48:goto L410f48;
case 0x410f4d:c.instructions+=2;goto B410f4d;
case 0x410f4f:c.instructions+=1;goto B410f4f;
case 0x410f51:goto L410f51;
case 0x410f55:c.instructions+=1;goto B410f55;
case 0x410f57:goto L410f57;
case 0x410f5a:c.instructions+=15;goto B410f5a;
case 0x410f5e:c.instructions+=14;goto B410f5e;
case 0x410f61:c.instructions+=13;goto B410f61;
case 0x410f65:c.instructions+=12;goto B410f65;
case 0x410f67:c.instructions+=11;goto B410f67;
case 0x410f69:c.instructions+=10;goto B410f69;
case 0x410f6b:c.instructions+=9;goto B410f6b;
case 0x410f6d:c.instructions+=8;goto B410f6d;
case 0x410f6f:c.instructions+=7;goto B410f6f;
case 0x410f71:c.instructions+=6;goto B410f71;
case 0x410f73:c.instructions+=5;goto B410f73;
case 0x410f75:c.instructions+=4;goto B410f75;
case 0x410f79:c.instructions+=3;goto B410f79;
case 0x410f7b:c.instructions+=2;goto B410f7b;
case 0x410f7e:c.instructions+=1;goto B410f7e;
case 0x410f80:goto L410f80;
case 0x410f84:goto L410f84;
case 0x410f8a:c.instructions+=1;goto B410f8a;
case 0x410f8e:goto L410f8e;
case 0x410f91:c.instructions+=6;goto B410f91;
case 0x410f94:c.instructions+=5;goto B410f94;
case 0x410f95:c.instructions+=4;goto B410f95;
case 0x410f97:c.instructions+=3;goto B410f97;
case 0x410f99:c.instructions+=2;goto B410f99;
case 0x410f9d:c.instructions+=1;goto B410f9d;
case 0x410fa3:goto L410fa3;
case 0x410fa4:c.instructions+=6;goto B410fa4;
case 0x410fa5:c.instructions+=5;goto B410fa5;
case 0x410fa6:c.instructions+=4;goto B410fa6;
case 0x410fa8:c.instructions+=3;goto B410fa8;
case 0x410fa9:c.instructions+=2;goto B410fa9;
case 0x410fac:c.instructions+=1;goto B410fac;
case 0x410faf:goto L410faf;
case 0x410fb0:c.instructions+=6;goto B410fb0;
case 0x410fb1:c.instructions+=5;goto B410fb1;
case 0x410fb2:c.instructions+=4;goto B410fb2;
case 0x410fb4:c.instructions+=3;goto B410fb4;
case 0x410fb5:c.instructions+=2;goto B410fb5;
case 0x410fb8:c.instructions+=1;goto B410fb8;
case 0x410fc0:goto L410fc0;
case 0x410fc6:c.instructions+=7;goto B410fc6;
case 0x410fc7:c.instructions+=6;goto B410fc7;
case 0x410fc8:c.instructions+=5;goto B410fc8;
case 0x410fc9:c.instructions+=4;goto B410fc9;
case 0x410fcb:c.instructions+=3;goto B410fcb;
case 0x410fcd:c.instructions+=2;goto B410fcd;
case 0x410fce:c.instructions+=1;goto B410fce;
case 0x410fd0:goto L410fd0;
case 0x410fd4:c.instructions+=5;goto B410fd4;
case 0x410fd8:c.instructions+=4;goto B410fd8;
case 0x410fdb:c.instructions+=3;goto B410fdb;
case 0x410fdd:c.instructions+=2;goto B410fdd;
case 0x410fe0:c.instructions+=1;goto B410fe0;
case 0x410fe2:goto L410fe2;
case 0x410fe5:c.instructions+=1;goto B410fe5;
case 0x410fe7:goto L410fe7;
case 0x410fea:c.instructions+=1;goto B410fea;
case 0x410fec:goto L410fec;
case 0x410fef:c.instructions+=1;goto B410fef;
case 0x410ff5:goto L410ff5;
case 0x410ff7:c.instructions+=1;goto B410ff7;
case 0x410ff9:goto L410ff9;
case 0x410ffb:c.instructions+=1;goto B410ffb;
default:missing_instruction(c.pc);}
B410000:L410000:{c.instructions+=2;NFSU2_TR(0x410000);
{u32 ea_=u32(r4(R+4)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410006:{NFSU2_TR(0x410006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410010:L410010:{c.instructions+=4;NFSU2_TR(0x410010);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B410014:{NFSU2_TR(0x410014);
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
B410016:{NFSU2_TR(0x410016);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41001c:{NFSU2_TR(0x41001c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410023;}}
}
B41001e:L41001e:{c.instructions+=2;NFSU2_TR(0x41001e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B410020:{NFSU2_TR(0x410020);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410023ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B410023:L410023:{c.instructions+=1;NFSU2_TR(0x410023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410030:L410030:{c.instructions+=2;NFSU2_TR(0x410030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41003a:{NFSU2_TR(0x41003a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410040:L410040:{c.instructions+=6;NFSU2_TR(0x410040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410041:{NFSU2_TR(0x410041);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410042:{NFSU2_TR(0x410042);
__builtin_memmove((R+24),(R+4),4);
}
B410044:{NFSU2_TR(0x410044);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41004a:{NFSU2_TR(0x41004a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B41004d:{NFSU2_TR(0x41004d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410052ull));
TAIL_STATIC(0x59fa10u,59f);
}
B410052:L410052:{c.instructions+=4;NFSU2_TR(0x410052);
__builtin_memmove((R+4),gp(0x890118),4);
}
B410058:{NFSU2_TR(0x410058);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41005b:{NFSU2_TR(0x41005b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41005d:{NFSU2_TR(0x41005d);
if(r1(R+518)){{goto L410089;}}
}
B41005f:L41005f:{c.instructions+=2;NFSU2_TR(0x41005f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410064:{NFSU2_TR(0x410064);
if(r1(R+518)){{goto L410089;}}
}
B410066:L410066:{c.instructions+=9;NFSU2_TR(0x410066);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41006b:{NFSU2_TR(0x41006b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B41006e:{NFSU2_TR(0x41006e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410072:{NFSU2_TR(0x410072);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B410076:{NFSU2_TR(0x410076);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41007c:{NFSU2_TR(0x41007c);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B410082:{NFSU2_TR(0x410082);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410084:{NFSU2_TR(0x410084);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410087:{NFSU2_TR(0x410087);
if(r1(R+518)){{goto L41008d;}}
}
B410089:L410089:{c.instructions+=2;NFSU2_TR(0x410089);
w1(R+4,u8(0x1ull));
}
B41008b:{NFSU2_TR(0x41008b);
{goto L41008f;}
}
B41008d:L41008d:{c.instructions+=1;NFSU2_TR(0x41008d);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B41008f:L41008f:{c.instructions+=10;NFSU2_TR(0x41008f);
{u32 ea_=u32(u32(7879248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410095:{NFSU2_TR(0x410095);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41009b:{NFSU2_TR(0x41009b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41009f:{NFSU2_TR(0x41009f);
{u32 ea_=u32(u32(7879248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4100a5:{NFSU2_TR(0x4100a5);
{u32 ea_=u32(u32(7884600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4100ab:{NFSU2_TR(0x4100ab);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4100ad:{NFSU2_TR(0x4100ad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4100af:{NFSU2_TR(0x4100af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4100b1:{NFSU2_TR(0x4100b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4100b4:{NFSU2_TR(0x4100b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4100ba;}}
}
B4100b6:L4100b6:{c.instructions+=2;NFSU2_TR(0x4100b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4100b8:{NFSU2_TR(0x4100b8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4100ba:L4100ba:{c.instructions+=5;NFSU2_TR(0x4100ba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4100be:{NFSU2_TR(0x4100be);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4100c0:{NFSU2_TR(0x4100c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4100c2:{NFSU2_TR(0x4100c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4100c5:{NFSU2_TR(0x4100c5);
if(r1(R+514)){{goto L4100cd;}}
}
B4100c7:L4100c7:{c.instructions+=2;NFSU2_TR(0x4100c7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4100c9:{NFSU2_TR(0x4100c9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4100cd:L4100cd:{c.instructions+=6;NFSU2_TR(0x4100cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4100cf:{NFSU2_TR(0x4100cf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4100d1:{NFSU2_TR(0x4100d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4100d3:{NFSU2_TR(0x4100d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4100d5:{NFSU2_TR(0x4100d5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4100d8:{NFSU2_TR(0x4100d8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4100de;}}
}
B4100da:L4100da:{c.instructions+=2;NFSU2_TR(0x4100da);
w1(R+0,u8(0x1ull));
}
B4100dc:{NFSU2_TR(0x4100dc);
{goto L4100e0;}
}
B4100de:L4100de:{c.instructions+=1;NFSU2_TR(0x4100de);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4100e0:L4100e0:{c.instructions+=3;NFSU2_TR(0x4100e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4100e6:{NFSU2_TR(0x4100e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4100e8:{NFSU2_TR(0x4100e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410117;}}
}
B4100ea:L4100ea:{c.instructions+=4;NFSU2_TR(0x4100ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4100f0:{NFSU2_TR(0x4100f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4100f3:{NFSU2_TR(0x4100f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4100f7:{NFSU2_TR(0x4100f7);
if(r1(R+518)){{goto L410117;}}
}
B4100f9:L4100f9:{c.instructions+=2;NFSU2_TR(0x4100f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4100fb:{NFSU2_TR(0x4100fb);
if(r1(R+518)){{goto L410101;}}
}
B4100fd:L4100fd:{c.instructions+=2;NFSU2_TR(0x4100fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4100ff:{NFSU2_TR(0x4100ff);
if(r1(R+518)){{goto L410117;}}
}
B410101:L410101:{c.instructions+=3;NFSU2_TR(0x410101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410104:{NFSU2_TR(0x410104);
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
B410106:{NFSU2_TR(0x410106);
if(r1(R+518)){{goto L41010f;}}
}
B410108:L410108:{c.instructions+=2;NFSU2_TR(0x410108);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B41010d:{NFSU2_TR(0x41010d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410117;}}
}
B41010f:L41010f:{c.instructions+=4;NFSU2_TR(0x41010f);
w4(R+0,u32(0x1ull));
}
B410114:{NFSU2_TR(0x410114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410115:{NFSU2_TR(0x410115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B410116:{NFSU2_TR(0x410116);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410117:L410117:{c.instructions+=4;NFSU2_TR(0x410117);
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
B410119:{NFSU2_TR(0x410119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41011a:{NFSU2_TR(0x41011a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41011b:{NFSU2_TR(0x41011b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410120:L410120:{c.instructions+=6;NFSU2_TR(0x410120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410121:{NFSU2_TR(0x410121);
__builtin_memmove((R+24),(R+4),4);
}
B410123:{NFSU2_TR(0x410123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410129:{NFSU2_TR(0x410129);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41012b:{NFSU2_TR(0x41012b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41012c:{NFSU2_TR(0x41012c);
if(r1(R+518)){{goto L41014b;}}
}
B41012e:L41012e:{c.instructions+=3;NFSU2_TR(0x41012e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410131:{NFSU2_TR(0x410131);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410133:{NFSU2_TR(0x410133);
if(r1(R+518)){{goto L41014b;}}
}
B410135:L410135:{c.instructions+=2;NFSU2_TR(0x410135);
__builtin_memmove((R+4),(R+28),4);
}
B410137:{NFSU2_TR(0x410137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41013cull));
TAIL_STATIC(0x5ee250u,5ee);
}
B41013c:L41013c:{c.instructions+=2;NFSU2_TR(0x41013c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41013e:{NFSU2_TR(0x41013e);
if(r1(R+518)){{goto L41014b;}}
}
B410140:L410140:{c.instructions+=2;NFSU2_TR(0x410140);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B410145:{NFSU2_TR(0x410145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4101cc;}}
}
B41014b:L41014b:{c.instructions+=3;NFSU2_TR(0x41014b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B410151:{NFSU2_TR(0x410151);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410153:{NFSU2_TR(0x410153);
if(r1(R+518)){{goto L4101cc;}}
}
B410155:L410155:{c.instructions+=2;NFSU2_TR(0x410155);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B41015d:{NFSU2_TR(0x41015d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4101ae;}}
}
B41015f:L41015f:{c.instructions+=4;NFSU2_TR(0x41015f);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410165:{NFSU2_TR(0x410165);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410166:{NFSU2_TR(0x410166);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410168:{NFSU2_TR(0x410168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41016dull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B41016d:L41016d:{c.instructions+=4;NFSU2_TR(0x41016d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B410173:{NFSU2_TR(0x410173);
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
B410175:{NFSU2_TR(0x410175);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B410178:{NFSU2_TR(0x410178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41017dull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B41017d:L41017d:{c.instructions+=2;NFSU2_TR(0x41017d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41017f:{NFSU2_TR(0x41017f);
if(r1(R+518)){{goto L4101b8;}}
}
B410181:L410181:{c.instructions+=6;NFSU2_TR(0x410181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B410187:{NFSU2_TR(0x410187);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B41018a:{NFSU2_TR(0x41018a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41018c:{NFSU2_TR(0x41018c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41018d:{NFSU2_TR(0x41018d);
__builtin_memmove((R+4),(R+0),4);
}
B41018f:{NFSU2_TR(0x41018f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410194ull));
TAIL_STATIC(0x40cc40u,40c);
}
B410194:L410194:{c.instructions+=4;NFSU2_TR(0x410194);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41019a:{NFSU2_TR(0x41019a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41019c:{NFSU2_TR(0x41019c);
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
B41019f:{NFSU2_TR(0x41019f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4101bc;}}
}
B4101a1:L4101a1:{c.instructions+=3;NFSU2_TR(0x4101a1);
w4(R+0,u32(0xc000ull));
}
B4101a6:{NFSU2_TR(0x4101a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4101ad:{NFSU2_TR(0x4101ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4101ae:L4101ae:{c.instructions+=4;NFSU2_TR(0x4101ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4101b5:{NFSU2_TR(0x4101b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4101b6:{NFSU2_TR(0x4101b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4101b7:{NFSU2_TR(0x4101b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4101b8:L4101b8:{c.instructions+=2;NFSU2_TR(0x4101b8);
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
B4101ba:{NFSU2_TR(0x4101ba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4101a1u);}goto L4101a1;}}
}
B4101bc:L4101bc:{c.instructions+=6;NFSU2_TR(0x4101bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4101bd:{NFSU2_TR(0x4101bd);
w4(R+0,u32(0x4000ull));
}
B4101c2:{NFSU2_TR(0x4101c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4101c3:{NFSU2_TR(0x4101c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4101ca:{NFSU2_TR(0x4101ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4101cb:{NFSU2_TR(0x4101cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4101cc:L4101cc:{c.instructions+=4;NFSU2_TR(0x4101cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4101cd:{NFSU2_TR(0x4101cd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4101d0:{NFSU2_TR(0x4101d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4101d1:{NFSU2_TR(0x4101d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4101d9:L4101d9:{c.instructions+=22;NFSU2_TR(0x4101d9);
}
B4101da:{NFSU2_TR(0x4101da);
}
B4101db:{NFSU2_TR(0x4101db);
}
B4101dc:{NFSU2_TR(0x4101dc);
}
B4101dd:{NFSU2_TR(0x4101dd);
}
B4101de:{NFSU2_TR(0x4101de);
}
B4101df:{NFSU2_TR(0x4101df);
}
B4101e0:{NFSU2_TR(0x4101e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4101e2:{NFSU2_TR(0x4101e2);
u8 U[4];
w4(U+0,u32(0x771458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4101e7:{NFSU2_TR(0x4101e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4101ed:{NFSU2_TR(0x4101ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4101ee:{NFSU2_TR(0x4101ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4101f5:{NFSU2_TR(0x4101f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4101f6:{NFSU2_TR(0x4101f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4101f7:{NFSU2_TR(0x4101f7);
__builtin_memmove((R+24),(R+4),4);
}
B4101f9:{NFSU2_TR(0x4101f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4101fa:{NFSU2_TR(0x4101fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4101fe:{NFSU2_TR(0x4101fe);
u8 U[4];
w4(U+0,u32(0x784f40ull));
s4(u32(r4(R+24)),r4(U+0));
}
B410204:{NFSU2_TR(0x410204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41020a:{NFSU2_TR(0x41020a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41020c:{NFSU2_TR(0x41020c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B410214:{NFSU2_TR(0x410214);
if(r1(R+518)){{goto L41022c;}}
}
B410216:L410216:{c.instructions+=2;NFSU2_TR(0x410216);
__builtin_memmove((R+4),(R+28),4);
}
B410218:{NFSU2_TR(0x410218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41021dull));
TAIL_STATIC(0x633fd0u,633);
}
B41021d:L41021d:{c.instructions+=4;NFSU2_TR(0x41021d);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B410222:{NFSU2_TR(0x410222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410223:{NFSU2_TR(0x410223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410224:{NFSU2_TR(0x410224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410229ull));
TAIL_STATIC(0x43f920u,43f);
}
B410229:L410229:{c.instructions+=1;NFSU2_TR(0x410229);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41022c:L41022c:{c.instructions+=3;NFSU2_TR(0x41022c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410232:{NFSU2_TR(0x410232);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410234:{NFSU2_TR(0x410234);
if(r1(R+518)){{goto L41024d;}}
}
B410236:L410236:{c.instructions+=2;NFSU2_TR(0x410236);
__builtin_memmove((R+4),(R+28),4);
}
B410238:{NFSU2_TR(0x410238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41023dull));
TAIL_STATIC(0x633fd0u,633);
}
B41023d:L41023d:{c.instructions+=4;NFSU2_TR(0x41023d);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B410243:{NFSU2_TR(0x410243);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410244:{NFSU2_TR(0x410244);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410245:{NFSU2_TR(0x410245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41024aull));
TAIL_STATIC(0x43f920u,43f);
}
B41024a:L41024a:{c.instructions+=1;NFSU2_TR(0x41024a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41024d:L41024d:{c.instructions+=3;NFSU2_TR(0x41024d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410253:{NFSU2_TR(0x410253);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410255:{NFSU2_TR(0x410255);
if(r1(R+518)){{goto L41026e;}}
}
B410257:L410257:{c.instructions+=2;NFSU2_TR(0x410257);
__builtin_memmove((R+4),(R+28),4);
}
B410259:{NFSU2_TR(0x410259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41025eull));
TAIL_STATIC(0x633fd0u,633);
}
B41025e:L41025e:{c.instructions+=4;NFSU2_TR(0x41025e);
__builtin_memmove((R+8),gp(0x8a1d08),4);
}
B410264:{NFSU2_TR(0x410264);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410265:{NFSU2_TR(0x410265);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410266:{NFSU2_TR(0x410266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41026bull));
TAIL_STATIC(0x43f920u,43f);
}
B41026b:L41026b:{c.instructions+=1;NFSU2_TR(0x41026b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41026e:L41026e:{c.instructions+=3;NFSU2_TR(0x41026e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410274:{NFSU2_TR(0x410274);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410276:{NFSU2_TR(0x410276);
if(r1(R+518)){{goto L41028e;}}
}
B410278:L410278:{c.instructions+=2;NFSU2_TR(0x410278);
__builtin_memmove((R+4),(R+28),4);
}
B41027a:{NFSU2_TR(0x41027a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41027full));
TAIL_STATIC(0x633fd0u,633);
}
B41027f:L41027f:{c.instructions+=4;NFSU2_TR(0x41027f);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B410284:{NFSU2_TR(0x410284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410285:{NFSU2_TR(0x410285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410286:{NFSU2_TR(0x410286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41028bull));
TAIL_STATIC(0x43f920u,43f);
}
B41028b:L41028b:{c.instructions+=1;NFSU2_TR(0x41028b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41028e:L41028e:{c.instructions+=7;NFSU2_TR(0x41028e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B410292:{NFSU2_TR(0x410292);
u8 U[4];
w4(U+0,u32(0x7849c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B410298:{NFSU2_TR(0x410298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410299:{NFSU2_TR(0x410299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41029a:{NFSU2_TR(0x41029a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4102a1:{NFSU2_TR(0x4102a1);
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
B4102a4:{NFSU2_TR(0x4102a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4102b0:L4102b0:{c.instructions+=11;NFSU2_TR(0x4102b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4102b4:{NFSU2_TR(0x4102b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4102ba:{NFSU2_TR(0x4102ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4102bd:{NFSU2_TR(0x4102bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4102be:{NFSU2_TR(0x4102be);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4102c2:{NFSU2_TR(0x4102c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4102c4:{NFSU2_TR(0x4102c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4102c5:{NFSU2_TR(0x4102c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4102c9:{NFSU2_TR(0x4102c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4102cc:{NFSU2_TR(0x4102cc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4102d2:{NFSU2_TR(0x4102d2);
if(r1(R+518)){{goto L410304;}}
}
B4102d4:L4102d4:{c.instructions+=2;NFSU2_TR(0x4102d4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4102da:{NFSU2_TR(0x4102da);
if(r1(R+518)){{goto L410304;}}
}
B4102dc:L4102dc:{c.instructions+=2;NFSU2_TR(0x4102dc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4102e2:{NFSU2_TR(0x4102e2);
if(r1(R+518)){{goto L4102f0;}}
}
B4102e4:L4102e4:{c.instructions+=2;NFSU2_TR(0x4102e4);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xbbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4102ea:{NFSU2_TR(0x4102ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41038a;}}
}
B4102f0:L4102f0:{c.instructions+=2;NFSU2_TR(0x4102f0);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x790ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4102f6:{NFSU2_TR(0x4102f6);
if(r1(R+518)){{goto L41038a;}}
}
B4102fc:L4102fc:{c.instructions+=2;NFSU2_TR(0x4102fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x790ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B410302:{NFSU2_TR(0x410302);
{goto L410312;}
}
B410304:L410304:{c.instructions+=2;NFSU2_TR(0x410304);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x791ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B41030a:{NFSU2_TR(0x41030a);
if(r1(R+518)){{goto L41038a;}}
}
B41030c:L41030c:{c.instructions+=1;NFSU2_TR(0x41030c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x791ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B410312:L410312:{c.instructions+=3;NFSU2_TR(0x410312);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B410318:{NFSU2_TR(0x410318);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41031b:{NFSU2_TR(0x41031b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L41038a;}}
}
B41031d:L41031d:{c.instructions+=1;NFSU2_TR(0x41031d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x410390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B410324:L410324:{c.instructions+=2;NFSU2_TR(0x410324);
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
B410326:{NFSU2_TR(0x410326);
if(r1(R+518)){{goto L410372;}}
}
B410328:L410328:{c.instructions+=3;NFSU2_TR(0x410328);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41032e:{NFSU2_TR(0x41032e);
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
B410330:{NFSU2_TR(0x410330);
if(r1(R+518)){{goto L41038a;}}
}
B410332:L410332:{c.instructions+=2;NFSU2_TR(0x410332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41033c:{NFSU2_TR(0x41033c);
{goto L410357;}
}
B41033e:L41033e:{c.instructions+=2;NFSU2_TR(0x41033e);
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
B410340:{NFSU2_TR(0x410340);
if(r1(R+518)){{goto L410372;}}
}
B410342:L410342:{c.instructions+=4;NFSU2_TR(0x410342);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410348:{NFSU2_TR(0x410348);
w4(R+4,u32(0x1ull));
}
B41034d:{NFSU2_TR(0x41034d);
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
B41034f:{NFSU2_TR(0x41034f);
if(r1(R+518)){{goto L41038a;}}
}
B410351:L410351:{c.instructions+=1;NFSU2_TR(0x410351);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410357:L410357:{c.instructions+=7;NFSU2_TR(0x410357);
w4(R+4,u32(0xffull));
}
B41035c:{NFSU2_TR(0x41035c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41035d:{NFSU2_TR(0x41035d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410363:{NFSU2_TR(0x410363);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410369:{NFSU2_TR(0x410369);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B410370:{NFSU2_TR(0x410370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410371:{NFSU2_TR(0x410371);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410372:L410372:{c.instructions+=3;NFSU2_TR(0x410372);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x774ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B410379:{NFSU2_TR(0x410379);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B410383:{NFSU2_TR(0x410383);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41038a:L41038a:{c.instructions+=3;NFSU2_TR(0x41038a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41038b:{NFSU2_TR(0x41038b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41038c:{NFSU2_TR(0x41038c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4103a0:L4103a0:{c.instructions+=15;NFSU2_TR(0x4103a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4103a2:{NFSU2_TR(0x4103a2);
u8 U[4];
w4(U+0,u32(0x771486ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4103a7:{NFSU2_TR(0x4103a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4103ad:{NFSU2_TR(0x4103ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4103ae:{NFSU2_TR(0x4103ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4103b5:{NFSU2_TR(0x4103b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4103b6:{NFSU2_TR(0x4103b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4103b7:{NFSU2_TR(0x4103b7);
__builtin_memmove((R+24),(R+4),4);
}
B4103b9:{NFSU2_TR(0x4103b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4103bd:{NFSU2_TR(0x4103bd);
u8 U[4];
w4(U+0,u32(0x784fc8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4103c3:{NFSU2_TR(0x4103c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4103c9:{NFSU2_TR(0x4103c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4103cc:{NFSU2_TR(0x4103cc);
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
B4103ce:{NFSU2_TR(0x4103ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4103d6:{NFSU2_TR(0x4103d6);
if(r1(R+518)){{goto L4103e4;}}
}
B4103d8:L4103d8:{c.instructions+=3;NFSU2_TR(0x4103d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4103db:{NFSU2_TR(0x4103db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4103dc:{NFSU2_TR(0x4103dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4103e1ull));
TAIL_STATIC(0x4022c0u,402);
}
B4103e1:L4103e1:{c.instructions+=1;NFSU2_TR(0x4103e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4103e4:L4103e4:{c.instructions+=2;NFSU2_TR(0x4103e4);
__builtin_memmove((R+4),(R+24),4);
}
B4103e6:{NFSU2_TR(0x4103e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4103ebull));
TAIL_STATIC(0x407110u,407);
}
B4103eb:L4103eb:{c.instructions+=3;NFSU2_TR(0x4103eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4103f1:{NFSU2_TR(0x4103f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4103f6:{NFSU2_TR(0x4103f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4103fbull));
TAIL_STATIC(0x405d00u,405);
}
B4103fb:L4103fb:{c.instructions+=6;NFSU2_TR(0x4103fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4103ff:{NFSU2_TR(0x4103ff);
u8 U[4];
w4(U+0,u32(0x7849c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B410405:{NFSU2_TR(0x410405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410406:{NFSU2_TR(0x410406);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41040d:{NFSU2_TR(0x41040d);
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
B410410:{NFSU2_TR(0x410410);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410420:L410420:{c.instructions+=3;NFSU2_TR(0x410420);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410424:{NFSU2_TR(0x410424);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41042a:{NFSU2_TR(0x41042a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410430:L410430:{c.instructions+=4;NFSU2_TR(0x410430);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B410434:{NFSU2_TR(0x410434);
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
B410436:{NFSU2_TR(0x410436);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41043c:{NFSU2_TR(0x41043c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410443;}}
}
B41043e:L41043e:{c.instructions+=2;NFSU2_TR(0x41043e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B410440:{NFSU2_TR(0x410440);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410443ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B410443:L410443:{c.instructions+=1;NFSU2_TR(0x410443);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410450:L410450:{c.instructions+=3;NFSU2_TR(0x410450);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410456:{NFSU2_TR(0x410456);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41045a:{NFSU2_TR(0x41045a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410460:L410460:{c.instructions+=2;NFSU2_TR(0x410460);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410466:{NFSU2_TR(0x410466);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410470:L410470:{c.instructions+=5;NFSU2_TR(0x410470);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B410476:{NFSU2_TR(0x410476);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B410478:{NFSU2_TR(0x410478);
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
B41047a:{NFSU2_TR(0x41047a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41047d:{NFSU2_TR(0x41047d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410480:L410480:{c.instructions+=8;NFSU2_TR(0x410480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410481:{NFSU2_TR(0x410481);
__builtin_memmove((R+24),(R+4),4);
}
B410483:{NFSU2_TR(0x410483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410489:{NFSU2_TR(0x410489);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41048a:{NFSU2_TR(0x41048a);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41048f:{NFSU2_TR(0x41048f);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410494:{NFSU2_TR(0x410494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410495:{NFSU2_TR(0x410495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41049aull));
TAIL_STATIC(0x579410u,579);
}
B41049a:L41049a:{c.instructions+=6;NFSU2_TR(0x41049a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4104a0:{NFSU2_TR(0x4104a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104a1:{NFSU2_TR(0x4104a1);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104a6:{NFSU2_TR(0x4104a6);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104ab:{NFSU2_TR(0x4104ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104ac:{NFSU2_TR(0x4104ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4104b1ull));
TAIL_STATIC(0x579410u,579);
}
B4104b1:L4104b1:{c.instructions+=6;NFSU2_TR(0x4104b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4104b7:{NFSU2_TR(0x4104b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104b8:{NFSU2_TR(0x4104b8);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104bd:{NFSU2_TR(0x4104bd);
u8 U[4];
w4(U+0,u32(0xa7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104c2:{NFSU2_TR(0x4104c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104c3:{NFSU2_TR(0x4104c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4104c8ull));
TAIL_STATIC(0x579410u,579);
}
B4104c8:L4104c8:{c.instructions+=6;NFSU2_TR(0x4104c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4104ce:{NFSU2_TR(0x4104ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104cf:{NFSU2_TR(0x4104cf);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104d4:{NFSU2_TR(0x4104d4);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104d9:{NFSU2_TR(0x4104d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104da:{NFSU2_TR(0x4104da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4104dfull));
TAIL_STATIC(0x579410u,579);
}
B4104df:L4104df:{c.instructions+=7;NFSU2_TR(0x4104df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4104e5:{NFSU2_TR(0x4104e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4104e8:{NFSU2_TR(0x4104e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104e9:{NFSU2_TR(0x4104e9);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104ee:{NFSU2_TR(0x4104ee);
u8 U[4];
w4(U+0,u32(0xa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104f3:{NFSU2_TR(0x4104f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4104f4:{NFSU2_TR(0x4104f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4104f9ull));
TAIL_STATIC(0x579410u,579);
}
B4104f9:L4104f9:{c.instructions+=6;NFSU2_TR(0x4104f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4104ff:{NFSU2_TR(0x4104ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410500:{NFSU2_TR(0x410500);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410505:{NFSU2_TR(0x410505);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41050a:{NFSU2_TR(0x41050a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41050b:{NFSU2_TR(0x41050b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410510ull));
TAIL_STATIC(0x579410u,579);
}
B410510:L410510:{c.instructions+=6;NFSU2_TR(0x410510);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410516:{NFSU2_TR(0x410516);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410517:{NFSU2_TR(0x410517);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41051c:{NFSU2_TR(0x41051c);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410521:{NFSU2_TR(0x410521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410522:{NFSU2_TR(0x410522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410527ull));
TAIL_STATIC(0x579410u,579);
}
B410527:L410527:{c.instructions+=6;NFSU2_TR(0x410527);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41052d:{NFSU2_TR(0x41052d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41052e:{NFSU2_TR(0x41052e);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410533:{NFSU2_TR(0x410533);
u8 U[4];
w4(U+0,u32(0xacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410538:{NFSU2_TR(0x410538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410539:{NFSU2_TR(0x410539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41053eull));
TAIL_STATIC(0x579410u,579);
}
B41053e:L41053e:{c.instructions+=7;NFSU2_TR(0x41053e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410544:{NFSU2_TR(0x410544);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B410547:{NFSU2_TR(0x410547);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410548:{NFSU2_TR(0x410548);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41054d:{NFSU2_TR(0x41054d);
u8 U[4];
w4(U+0,u32(0xadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410552:{NFSU2_TR(0x410552);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410553:{NFSU2_TR(0x410553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410558ull));
TAIL_STATIC(0x579410u,579);
}
B410558:L410558:{c.instructions+=6;NFSU2_TR(0x410558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41055e:{NFSU2_TR(0x41055e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41055f:{NFSU2_TR(0x41055f);
u8 U[4];
w4(U+0,u32(0x4078a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410564:{NFSU2_TR(0x410564);
u8 U[4];
w4(U+0,u32(0xaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410569:{NFSU2_TR(0x410569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41056a:{NFSU2_TR(0x41056a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41056full));
TAIL_STATIC(0x579410u,579);
}
B41056f:L41056f:{c.instructions+=3;NFSU2_TR(0x41056f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B410572:{NFSU2_TR(0x410572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410573:{NFSU2_TR(0x410573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410580:L410580:{c.instructions+=3;NFSU2_TR(0x410580);
__builtin_memmove((R+0),gp(0x7e95c4),4);
}
B410585:{NFSU2_TR(0x410585);
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
B410587:{NFSU2_TR(0x410587);
if(r1(R+518)){{goto L4105aa;}}
}
B410589:L410589:{c.instructions+=5;NFSU2_TR(0x410589);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41058d:{NFSU2_TR(0x41058d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B410590:{NFSU2_TR(0x410590);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x3ull))));
}
B410593:{NFSU2_TR(0x410593);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B410596:{NFSU2_TR(0x410596);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4105aa;}}
}
B410598:L410598:{c.instructions+=4;NFSU2_TR(0x410598);
u8 U[6];
w1(R+512,u8((r4(R+0))<(m4(0x883db0))));
w1(R+523,sborrow<u32>(r4(R+0),m4(0x883db0)));
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x883db0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41059e:{NFSU2_TR(0x41059e);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B4105a1:{NFSU2_TR(0x4105a1);
w4(R+0,u32(r2(R+0)));
}
B4105a4:{NFSU2_TR(0x4105a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x750ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4105aa:L4105aa:{c.instructions+=1;NFSU2_TR(0x4105aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4105b0:L4105b0:{c.instructions+=7;NFSU2_TR(0x4105b0);
__builtin_memmove((R+0),gp(0x7e95c4),4);
}
B4105b5:{NFSU2_TR(0x4105b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4105b7:{NFSU2_TR(0x4105b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4105b8:{NFSU2_TR(0x4105b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4105b9:{NFSU2_TR(0x4105b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4105bd:{NFSU2_TR(0x4105bd);
__builtin_memmove((R+24),(R+4),4);
}
B4105bf:{NFSU2_TR(0x4105bf);
if(r1(R+518)){{goto L4105e7;}}
}
B4105c1:L4105c1:{c.instructions+=4;NFSU2_TR(0x4105c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4105c4:{NFSU2_TR(0x4105c4);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
}
B4105c6:{NFSU2_TR(0x4105c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4105c8:{NFSU2_TR(0x4105c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4105e7;}}
}
B4105ca:L4105ca:{c.instructions+=4;NFSU2_TR(0x4105ca);
{u32 ea_=u32(u32(7879508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4105d0:{NFSU2_TR(0x4105d0);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4105d6:{NFSU2_TR(0x4105d6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4105dc:{NFSU2_TR(0x4105dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4105e1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4105e1:L4105e1:{c.instructions+=1;NFSU2_TR(0x4105e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x754ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4105e7:L4105e7:{c.instructions+=8;NFSU2_TR(0x4105e7);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B4105ec:{NFSU2_TR(0x4105ec);
__builtin_memmove((R+4),(R+28),4);
}
B4105ee:{NFSU2_TR(0x4105ee);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4105f0:{NFSU2_TR(0x4105f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4105f6:{NFSU2_TR(0x4105f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4105f9:{NFSU2_TR(0x4105f9);
w4(R+8,u32(r2(R+4)));
}
B4105fc:{NFSU2_TR(0x4105fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4105fe:{NFSU2_TR(0x4105fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41060a;}}
}
B410600:L410600:{c.instructions+=1;NFSU2_TR(0x410600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41060a:L41060a:{c.instructions+=9;NFSU2_TR(0x41060a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41060d:{NFSU2_TR(0x41060d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B410610:{NFSU2_TR(0x410610);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B410613:{NFSU2_TR(0x410613);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B410615:{NFSU2_TR(0x410615);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B410617:{NFSU2_TR(0x410617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410618:{NFSU2_TR(0x410618);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41061b:{NFSU2_TR(0x41061b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41061c:{NFSU2_TR(0x41061c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410620:L410620:{c.instructions+=7;NFSU2_TR(0x410620);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410621:{NFSU2_TR(0x410621);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B410625:{NFSU2_TR(0x410625);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410627:{NFSU2_TR(0x410627);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410628:{NFSU2_TR(0x410628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410629:{NFSU2_TR(0x410629);
__builtin_memmove((R+24),(R+4),4);
}
B41062b:{NFSU2_TR(0x41062b);
if(r1(R+518)){{goto L4106b3;}}
}
B410631:L410631:{c.instructions+=3;NFSU2_TR(0x410631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410634:{NFSU2_TR(0x410634);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410636:{NFSU2_TR(0x410636);
if(r1(R+518)){{goto L410651;}}
}
B410638:L410638:{c.instructions+=5;NFSU2_TR(0x410638);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41063b:{NFSU2_TR(0x41063b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B410640:{NFSU2_TR(0x410640);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B410647:{NFSU2_TR(0x410647);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410649:{NFSU2_TR(0x410649);
if(r1(R+518)){{goto L410651;}}
}
B41064b:L41064b:{c.instructions+=2;NFSU2_TR(0x41064b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B41064f:{NFSU2_TR(0x41064f);
{goto L410654;}
}
B410651:L410651:{c.instructions+=1;NFSU2_TR(0x410651);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B410654:L410654:{c.instructions+=3;NFSU2_TR(0x410654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B410656:{NFSU2_TR(0x410656);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410658:{NFSU2_TR(0x410658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4106b3;}}
}
B41065a:L41065a:{c.instructions+=2;NFSU2_TR(0x41065a);
__builtin_memmove((R+4),(R+24),4);
}
B41065c:{NFSU2_TR(0x41065c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410661ull));
TAIL_STATIC(0x40f6b0u,40f);
}
B410661:L410661:{c.instructions+=3;NFSU2_TR(0x410661);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B410664:{NFSU2_TR(0x410664);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410666:{NFSU2_TR(0x410666);
if(r1(R+518)){{goto L410696;}}
}
B410668:L410668:{c.instructions+=3;NFSU2_TR(0x410668);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41066c:{NFSU2_TR(0x41066c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41066f:{NFSU2_TR(0x41066f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410687;}}
}
B410671:L410671:{c.instructions+=2;NFSU2_TR(0x410671);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B410673:{NFSU2_TR(0x410673);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41067e;}}
}
B410675:L410675:{c.instructions+=2;NFSU2_TR(0x410675);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B41067c:{NFSU2_TR(0x41067c);
{goto L410680;}
}
B41067e:L41067e:{c.instructions+=1;NFSU2_TR(0x41067e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B410680:L410680:{c.instructions+=2;NFSU2_TR(0x410680);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B410684:{NFSU2_TR(0x410684);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B410687:L410687:{c.instructions+=8;NFSU2_TR(0x410687);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410689:{NFSU2_TR(0x410689);
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
B41068b:{NFSU2_TR(0x41068b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41068c:{NFSU2_TR(0x41068c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B41068f:{NFSU2_TR(0x41068f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410690:{NFSU2_TR(0x410690);
__builtin_memmove((R+0),(R+8),1);
}
B410692:{NFSU2_TR(0x410692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410693:{NFSU2_TR(0x410693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410696:L410696:{c.instructions+=3;NFSU2_TR(0x410696);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41069a:{NFSU2_TR(0x41069a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41069d:{NFSU2_TR(0x41069d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4106a4;}}
}
B41069f:L41069f:{c.instructions+=1;NFSU2_TR(0x41069f);
w4(R+4,u32(0x1ull));
}
B4106a4:L4106a4:{c.instructions+=8;NFSU2_TR(0x4106a4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4106a6:{NFSU2_TR(0x4106a6);
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
B4106a8:{NFSU2_TR(0x4106a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4106a9:{NFSU2_TR(0x4106a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B4106ac:{NFSU2_TR(0x4106ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4106ad:{NFSU2_TR(0x4106ad);
__builtin_memmove((R+0),(R+8),1);
}
B4106af:{NFSU2_TR(0x4106af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4106b0:{NFSU2_TR(0x4106b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4106b3:L4106b3:{c.instructions+=5;NFSU2_TR(0x4106b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4106b4:{NFSU2_TR(0x4106b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4106b5:{NFSU2_TR(0x4106b5);
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
B4106b7:{NFSU2_TR(0x4106b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4106b8:{NFSU2_TR(0x4106b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4106c0:L4106c0:{c.instructions+=5;NFSU2_TR(0x4106c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4106c4:{NFSU2_TR(0x4106c4);
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
B4106c6:{NFSU2_TR(0x4106c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4106c7:{NFSU2_TR(0x4106c7);
__builtin_memmove((R+24),(R+4),4);
}
B4106c9:{NFSU2_TR(0x4106c9);
if(r1(R+518)){{goto L410749;}}
}
B4106cb:L4106cb:{c.instructions+=4;NFSU2_TR(0x4106cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4106cc:{NFSU2_TR(0x4106cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4106d0:{NFSU2_TR(0x4106d0);
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
B4106d2:{NFSU2_TR(0x4106d2);
if(r1(R+518)){{goto L410748;}}
}
B4106d4:L4106d4:{c.instructions+=3;NFSU2_TR(0x4106d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4106d7:{NFSU2_TR(0x4106d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4106d9:{NFSU2_TR(0x4106d9);
if(r1(R+518)){{goto L4106fb;}}
}
B4106db:L4106db:{c.instructions+=5;NFSU2_TR(0x4106db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4106de:{NFSU2_TR(0x4106de);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B4106e3:{NFSU2_TR(0x4106e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4106ea:{NFSU2_TR(0x4106ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4106ec:{NFSU2_TR(0x4106ec);
if(r1(R+518)){{goto L4106fb;}}
}
B4106ee:L4106ee:{c.instructions+=3;NFSU2_TR(0x4106ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4106f2:{NFSU2_TR(0x4106f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4106f9:{NFSU2_TR(0x4106f9);
{goto L410704;}
}
B4106fb:L4106fb:{c.instructions+=1;NFSU2_TR(0x4106fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B410704:L410704:{c.instructions+=3;NFSU2_TR(0x410704);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410708:{NFSU2_TR(0x410708);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41070b:{NFSU2_TR(0x41070b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410739;}}
}
B41070d:L41070d:{c.instructions+=13;NFSU2_TR(0x41070d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B410710:{NFSU2_TR(0x410710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410713:{NFSU2_TR(0x410713);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410715:{NFSU2_TR(0x410715);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410717:{NFSU2_TR(0x410717);
__builtin_memmove((R+8),(R+518),1);
}
B41071a:{NFSU2_TR(0x41071a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41071f:{NFSU2_TR(0x41071f);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410724:{NFSU2_TR(0x410724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B410727:{NFSU2_TR(0x410727);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410728:{NFSU2_TR(0x410728);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410729:{NFSU2_TR(0x410729);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41072a:{NFSU2_TR(0x41072a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41072b:{NFSU2_TR(0x41072b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410730ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B410730:L410730:{c.instructions+=3;NFSU2_TR(0x410730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B410733:{NFSU2_TR(0x410733);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410735:{NFSU2_TR(0x410735);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L410739;}}
}
B410737:L410737:{c.instructions+=1;NFSU2_TR(0x410737);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B410739:L410739:{c.instructions+=4;NFSU2_TR(0x410739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41073a:{NFSU2_TR(0x41073a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((R+4),(U+0),4);
}
B410740:{NFSU2_TR(0x410740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410743:{NFSU2_TR(0x410743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410748ull));
TAIL_STATIC(0x405410u,405);
}
B410748:L410748:{c.instructions+=1;NFSU2_TR(0x410748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410749:L410749:{c.instructions+=2;NFSU2_TR(0x410749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41074a:{NFSU2_TR(0x41074a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410750:L410750:{c.instructions+=10;NFSU2_TR(0x410750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410751:{NFSU2_TR(0x410751);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410752:{NFSU2_TR(0x410752);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410753:{NFSU2_TR(0x410753);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410757:{NFSU2_TR(0x410757);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410758:{NFSU2_TR(0x410758);
u8 U[4];
w4(U+0,u32(0x785050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41075d:{NFSU2_TR(0x41075d);
__builtin_memmove((R+28),(R+4),4);
}
B41075f:{NFSU2_TR(0x41075f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410761:{NFSU2_TR(0x410761);
__builtin_memmove((R+4),(R+24),4);
}
B410763:{NFSU2_TR(0x410763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410768ull));
TAIL_STATIC(0x578ce0u,578);
}
B410768:L410768:{c.instructions+=7;NFSU2_TR(0x410768);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41076a:{NFSU2_TR(0x41076a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41076c:{NFSU2_TR(0x41076c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41076e:{NFSU2_TR(0x41076e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B410771:{NFSU2_TR(0x410771);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410772:{NFSU2_TR(0x410772);
__builtin_memmove((R+4),(R+24),4);
}
B410774:{NFSU2_TR(0x410774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410779ull));
TAIL_STATIC(0x571640u,571);
}
B410779:L410779:{c.instructions+=2;NFSU2_TR(0x410779);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41077b:{NFSU2_TR(0x41077b);
{goto L410780;}
}
B410780:L410780:{c.instructions+=4;NFSU2_TR(0x410780);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B410784:{NFSU2_TR(0x410784);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410785:{NFSU2_TR(0x410785);
__builtin_memmove((R+4),(R+24),4);
}
B410787:{NFSU2_TR(0x410787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41078cull));
TAIL_STATIC(0x5716c0u,571);
}
B41078c:L41078c:{c.instructions+=3;NFSU2_TR(0x41078c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41078d:{NFSU2_TR(0x41078d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410790:{NFSU2_TR(0x410790);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410780u);}goto L410780;}}
}
B410792:L410792:{c.instructions+=3;NFSU2_TR(0x410792);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B410795:{NFSU2_TR(0x410795);
w4(R+20,u32(0x10ull));
}
B41079a:{NFSU2_TR(0x41079a);
__builtin_memmove((R+12),(R+12),4);
}
B4107a0:L4107a0:{c.instructions+=4;NFSU2_TR(0x4107a0);
u8 U[4];
w4(U+0,u32(0x7845a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107a5:{NFSU2_TR(0x4107a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107a7:{NFSU2_TR(0x4107a7);
__builtin_memmove((R+4),(R+24),4);
}
B4107a9:{NFSU2_TR(0x4107a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107aeull));
TAIL_STATIC(0x578ce0u,578);
}
B4107ae:L4107ae:{c.instructions+=4;NFSU2_TR(0x4107ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4107b1:{NFSU2_TR(0x4107b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107b2:{NFSU2_TR(0x4107b2);
__builtin_memmove((R+4),(R+24),4);
}
B4107b4:{NFSU2_TR(0x4107b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107b9ull));
TAIL_STATIC(0x5716c0u,571);
}
B4107b9:L4107b9:{c.instructions+=2;NFSU2_TR(0x4107b9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4107bc:{NFSU2_TR(0x4107bc);
if(r1(R+518)){{goto L4107e2;}}
}
B4107be:L4107be:{c.instructions+=7;NFSU2_TR(0x4107be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107c0:{NFSU2_TR(0x4107c0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107c2:{NFSU2_TR(0x4107c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107c4:{NFSU2_TR(0x4107c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4107c7:{NFSU2_TR(0x4107c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107c8:{NFSU2_TR(0x4107c8);
__builtin_memmove((R+4),(R+24),4);
}
B4107ca:{NFSU2_TR(0x4107ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107cfull));
TAIL_STATIC(0x571640u,571);
}
B4107cf:L4107cf:{c.instructions+=3;NFSU2_TR(0x4107cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107d0:{NFSU2_TR(0x4107d0);
__builtin_memmove((R+4),(R+24),4);
}
B4107d2:{NFSU2_TR(0x4107d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107d7ull));
TAIL_STATIC(0x571770u,571);
}
B4107d7:L4107d7:{c.instructions+=4;NFSU2_TR(0x4107d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4107da:{NFSU2_TR(0x4107da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4107db:{NFSU2_TR(0x4107db);
__builtin_memmove((R+4),(R+24),4);
}
B4107dd:{NFSU2_TR(0x4107dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107e2ull));
TAIL_STATIC(0x571770u,571);
}
B4107e2:L4107e2:{c.instructions+=2;NFSU2_TR(0x4107e2);
__builtin_memmove((R+4),(R+24),4);
}
B4107e4:{NFSU2_TR(0x4107e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107e9ull));
TAIL_STATIC(0x578d90u,578);
}
B4107e9:L4107e9:{c.instructions+=3;NFSU2_TR(0x4107e9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B4107ec:{NFSU2_TR(0x4107ec);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4107ed:{NFSU2_TR(0x4107ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4107a0u);}goto L4107a0;}}
}
B4107ef:L4107ef:{c.instructions+=2;NFSU2_TR(0x4107ef);
__builtin_memmove((R+4),(R+24),4);
}
B4107f1:{NFSU2_TR(0x4107f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4107f6ull));
TAIL_STATIC(0x578d90u,578);
}
B4107f6:L4107f6:{c.instructions+=5;NFSU2_TR(0x4107f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4107f7:{NFSU2_TR(0x4107f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4107f8:{NFSU2_TR(0x4107f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4107f9:{NFSU2_TR(0x4107f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4107fa:{NFSU2_TR(0x4107fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410800:L410800:{c.instructions+=7;NFSU2_TR(0x410800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B410803:{NFSU2_TR(0x410803);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410804:{NFSU2_TR(0x410804);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410808:{NFSU2_TR(0x410808);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410809:{NFSU2_TR(0x410809);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41080b:{NFSU2_TR(0x41080b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41080e:{NFSU2_TR(0x41080e);
__builtin_memmove((R+28),(R+28),4);
}
B410810:L410810:{c.instructions+=3;NFSU2_TR(0x410810);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B410813:{NFSU2_TR(0x410813);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410815:{NFSU2_TR(0x410815);
if(r1(R+518)){{goto L41082e;}}
}
B410817:L410817:{c.instructions+=4;NFSU2_TR(0x410817);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B410818:{NFSU2_TR(0x410818);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B41081b:{NFSU2_TR(0x41081b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41081e:{NFSU2_TR(0x41081e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410810u);}goto L410810;}}
}
B410820:L410820:{c.instructions+=5;NFSU2_TR(0x410820);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410826:{NFSU2_TR(0x410826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410827:{NFSU2_TR(0x410827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410828:{NFSU2_TR(0x410828);
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
B41082b:{NFSU2_TR(0x41082b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41082e:L41082e:{c.instructions+=2;NFSU2_TR(0x41082e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410831:{NFSU2_TR(0x410831);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410820u);}goto L410820;}}
}
B410833:L410833:{c.instructions+=2;NFSU2_TR(0x410833);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B410835:{NFSU2_TR(0x410835);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410840;}}
}
B410837:L410837:{c.instructions+=2;NFSU2_TR(0x410837);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B41083e:{NFSU2_TR(0x41083e);
{goto L410842;}
}
B410840:L410840:{c.instructions+=1;NFSU2_TR(0x410840);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410842:L410842:{c.instructions+=10;NFSU2_TR(0x410842);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(s32(s16(r2(U+12)))));
}
B410847:{NFSU2_TR(0x410847);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B41084a:{NFSU2_TR(0x41084a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B410851:{NFSU2_TR(0x410851);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410853:{NFSU2_TR(0x410853);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410855:{NFSU2_TR(0x410855);
__builtin_memmove((R+8),(R+518),1);
}
B410858:{NFSU2_TR(0x410858);
__builtin_memmove((R+0),(R+8),4);
}
B41085a:{NFSU2_TR(0x41085a);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B41085f:{NFSU2_TR(0x41085f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B410861:{NFSU2_TR(0x410861);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41086c;}}
}
B410863:L410863:{c.instructions+=2;NFSU2_TR(0x410863);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B41086a:{NFSU2_TR(0x41086a);
{goto L41086e;}
}
B41086c:L41086c:{c.instructions+=1;NFSU2_TR(0x41086c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41086e:L41086e:{c.instructions+=16;NFSU2_TR(0x41086e);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B410873:{NFSU2_TR(0x410873);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B410876:{NFSU2_TR(0x410876);
u8 U[14];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B41087e:{NFSU2_TR(0x41087e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B410885:{NFSU2_TR(0x410885);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B410888:{NFSU2_TR(0x410888);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41088c:{NFSU2_TR(0x41088c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41088d:{NFSU2_TR(0x41088d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B410891:{NFSU2_TR(0x410891);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B410895:{NFSU2_TR(0x410895);
__builtin_memmove((R+4),(R+24),4);
}
B410897:{NFSU2_TR(0x410897);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41089d:{NFSU2_TR(0x41089d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41089f:{NFSU2_TR(0x41089f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4108a2:{NFSU2_TR(0x4108a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4108a4:{NFSU2_TR(0x4108a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4108a5:{NFSU2_TR(0x4108a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4108aaull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B4108aa:L4108aa:{c.instructions+=12;NFSU2_TR(0x4108aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4108ae:{NFSU2_TR(0x4108ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4108b1:{NFSU2_TR(0x4108b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4108b5:{NFSU2_TR(0x4108b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4108b6:{NFSU2_TR(0x4108b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4108ba:{NFSU2_TR(0x4108ba);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4108be:{NFSU2_TR(0x4108be);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4108c4:{NFSU2_TR(0x4108c4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4108c7:{NFSU2_TR(0x4108c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4108c9:{NFSU2_TR(0x4108c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4108ca:{NFSU2_TR(0x4108ca);
__builtin_memmove((R+4),(R+24),4);
}
B4108cc:{NFSU2_TR(0x4108cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4108d1ull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B4108d1:L4108d1:{c.instructions+=3;NFSU2_TR(0x4108d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4108d5:{NFSU2_TR(0x4108d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4108d7:{NFSU2_TR(0x4108d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41092f;}}
}
B4108d9:L4108d9:{c.instructions+=25;NFSU2_TR(0x4108d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4108dd:{NFSU2_TR(0x4108dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4108e1:{NFSU2_TR(0x4108e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4108e5:{NFSU2_TR(0x4108e5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4108e9:{NFSU2_TR(0x4108e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4108ed:{NFSU2_TR(0x4108ed);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4108f3:{NFSU2_TR(0x4108f3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4108f7:{NFSU2_TR(0x4108f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4108fb:{NFSU2_TR(0x4108fb);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B410901:{NFSU2_TR(0x410901);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B410903:{NFSU2_TR(0x410903);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410907:{NFSU2_TR(0x410907);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41090a:{NFSU2_TR(0x41090a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41090c:{NFSU2_TR(0x41090c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410910:{NFSU2_TR(0x410910);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410912:{NFSU2_TR(0x410912);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B410916:{NFSU2_TR(0x410916);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B410918:{NFSU2_TR(0x410918);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41091c:{NFSU2_TR(0x41091c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41091e:{NFSU2_TR(0x41091e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B410920:{NFSU2_TR(0x410920);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B410924:{NFSU2_TR(0x410924);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410928:{NFSU2_TR(0x410928);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41092b:{NFSU2_TR(0x41092b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B41092d:{NFSU2_TR(0x41092d);
{goto L41096d;}
}
B41092f:L41092f:{c.instructions+=4;NFSU2_TR(0x41092f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B410933:{NFSU2_TR(0x410933);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410934:{NFSU2_TR(0x410934);
__builtin_memmove((R+4),(R+28),4);
}
B410936:{NFSU2_TR(0x410936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41093bull));
TAIL_STATIC(0x401aa0u,401);
}
B41093b:L41093b:{c.instructions+=12;NFSU2_TR(0x41093b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41093f:{NFSU2_TR(0x41093f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410942:{NFSU2_TR(0x410942);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B410946:{NFSU2_TR(0x410946);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410947:{NFSU2_TR(0x410947);
__builtin_memmove((R+4),(R+28),4);
}
B410949:{NFSU2_TR(0x410949);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41094d:{NFSU2_TR(0x41094d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410951:{NFSU2_TR(0x410951);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410953:{NFSU2_TR(0x410953);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B410957:{NFSU2_TR(0x410957);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B410959:{NFSU2_TR(0x410959);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41095d:{NFSU2_TR(0x41095d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410962ull));
TAIL_STATIC(0x401aa0u,401);
}
B410962:L410962:{c.instructions+=3;NFSU2_TR(0x410962);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410966:{NFSU2_TR(0x410966);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410969:{NFSU2_TR(0x410969);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41096d:L41096d:{c.instructions+=9;NFSU2_TR(0x41096d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410971:{NFSU2_TR(0x410971);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410973:{NFSU2_TR(0x410973);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B410977:{NFSU2_TR(0x410977);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B410979:{NFSU2_TR(0x410979);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41097d:{NFSU2_TR(0x41097d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41097f:{NFSU2_TR(0x41097f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410981:{NFSU2_TR(0x410981);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B410984:{NFSU2_TR(0x410984);
if(r1(R+514)){{goto L41098c;}}
}
B410986:L410986:{c.instructions+=2;NFSU2_TR(0x410986);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B410988:{NFSU2_TR(0x410988);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41098c:L41098c:{c.instructions+=5;NFSU2_TR(0x41098c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41098d:{NFSU2_TR(0x41098d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41098f:{NFSU2_TR(0x41098f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410990:{NFSU2_TR(0x410990);
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
B410993:{NFSU2_TR(0x410993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4109a0:L4109a0:{c.instructions+=6;NFSU2_TR(0x4109a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4109a1:{NFSU2_TR(0x4109a1);
__builtin_memmove((R+24),(R+4),4);
}
B4109a3:{NFSU2_TR(0x4109a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4109a5:{NFSU2_TR(0x4109a5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4109a6:{NFSU2_TR(0x4109a6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4109a9:{NFSU2_TR(0x4109a9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4109f7;}}
}
B4109ab:L4109ab:{c.instructions+=1;NFSU2_TR(0x4109ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x410a00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4109b2:L4109b2:{c.instructions+=4;NFSU2_TR(0x4109b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4109b5:{NFSU2_TR(0x4109b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4109b9:{NFSU2_TR(0x4109b9);
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
B4109bb:{NFSU2_TR(0x4109bb);
if(r1(R+518)){{goto L4109cc;}}
}
B4109bd:L4109bd:{c.instructions+=5;NFSU2_TR(0x4109bd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4109bf:{NFSU2_TR(0x4109bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4109c1:{NFSU2_TR(0x4109c1);
__builtin_memmove((R+4),(R+518),1);
}
B4109c4:{NFSU2_TR(0x4109c4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4109c6:{NFSU2_TR(0x4109c6);
if(r1(R+518)){{goto L4109f7;}}
}
B4109c8:L4109c8:{c.instructions+=2;NFSU2_TR(0x4109c8);
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
B4109ca:{NFSU2_TR(0x4109ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4109d2;}}
}
B4109cc:L4109cc:{c.instructions+=3;NFSU2_TR(0x4109cc);
w1(R+0,u8(0x1ull));
}
B4109ce:{NFSU2_TR(0x4109ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4109cf:{NFSU2_TR(0x4109cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4109d2:L4109d2:{c.instructions+=3;NFSU2_TR(0x4109d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4109d4:{NFSU2_TR(0x4109d4);
__builtin_memmove((R+4),(R+24),4);
}
B4109d6:{NFSU2_TR(0x4109d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4109dbull));
TAIL_STATIC(0x408f80u,408);
}
B4109db:L4109db:{c.instructions+=4;NFSU2_TR(0x4109db);
{u32 ea_=u32(u32(7879576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4109e1:{NFSU2_TR(0x4109e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4109e3:{NFSU2_TR(0x4109e3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4109e6:{NFSU2_TR(0x4109e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4109f1;}}
}
B4109e8:L4109e8:{c.instructions+=3;NFSU2_TR(0x4109e8);
w4(R+0,u32(0x1ull));
}
B4109ed:{NFSU2_TR(0x4109ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4109ee:{NFSU2_TR(0x4109ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4109f1:L4109f1:{c.instructions+=3;NFSU2_TR(0x4109f1);
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
B4109f3:{NFSU2_TR(0x4109f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4109f4:{NFSU2_TR(0x4109f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4109f7:L4109f7:{c.instructions+=3;NFSU2_TR(0x4109f7);
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
B4109f9:{NFSU2_TR(0x4109f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4109fa:{NFSU2_TR(0x4109fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410a10:L410a10:{c.instructions+=6;NFSU2_TR(0x410a10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410a11:{NFSU2_TR(0x410a11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410a15:{NFSU2_TR(0x410a15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410a16:{NFSU2_TR(0x410a16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B410a18:{NFSU2_TR(0x410a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B410a1b:{NFSU2_TR(0x410a1b);
{goto L410a20;}
}
B410a20:L410a20:{c.instructions+=3;NFSU2_TR(0x410a20);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B410a23:{NFSU2_TR(0x410a23);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410a25:{NFSU2_TR(0x410a25);
if(r1(R+518)){{goto L410a35;}}
}
B410a27:L410a27:{c.instructions+=4;NFSU2_TR(0x410a27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B410a28:{NFSU2_TR(0x410a28);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B410a2b:{NFSU2_TR(0x410a2b);
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
B410a2e:{NFSU2_TR(0x410a2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410a20u);}goto L410a20;}}
}
B410a30:L410a30:{c.instructions+=3;NFSU2_TR(0x410a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410a31:{NFSU2_TR(0x410a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410a32:{NFSU2_TR(0x410a32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410a35:L410a35:{c.instructions+=2;NFSU2_TR(0x410a35);
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
B410a38:{NFSU2_TR(0x410a38);
if(r1(R+518)){{goto L410a4b;}}
}
B410a3a:L410a3a:{c.instructions+=6;NFSU2_TR(0x410a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410a3d:{NFSU2_TR(0x410a3d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410a3f:{NFSU2_TR(0x410a3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410a41:{NFSU2_TR(0x410a41);
__builtin_memmove((R+8),(R+518),1);
}
B410a44:{NFSU2_TR(0x410a44);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B410a46:{NFSU2_TR(0x410a46);
if(r1(R+518)){{goto L410a4b;}}
}
B410a48:L410a48:{c.instructions+=1;NFSU2_TR(0x410a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410a4b:L410a4b:{c.instructions+=3;NFSU2_TR(0x410a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410a4c:{NFSU2_TR(0x410a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410a4d:{NFSU2_TR(0x410a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410a50:L410a50:{c.instructions+=8;NFSU2_TR(0x410a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410a54:{NFSU2_TR(0x410a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410a57:{NFSU2_TR(0x410a57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410a58:{NFSU2_TR(0x410a58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410a59:{NFSU2_TR(0x410a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410a5c:{NFSU2_TR(0x410a5c);
w4(R+24,u32(0x3ull));
}
B410a61:{NFSU2_TR(0x410a61);
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
B410a63:{NFSU2_TR(0x410a63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410ad2;}}
}
B410a65:L410a65:{c.instructions+=4;NFSU2_TR(0x410a65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410a69:{NFSU2_TR(0x410a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410a6c:{NFSU2_TR(0x410a6c);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B410a6f:{NFSU2_TR(0x410a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410ad2;}}
}
B410a71:L410a71:{c.instructions+=9;NFSU2_TR(0x410a71);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B410a75:{NFSU2_TR(0x410a75);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B410a79:{NFSU2_TR(0x410a79);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x32ull))));
}
B410a7c:{NFSU2_TR(0x410a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B410a7f:{NFSU2_TR(0x410a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B410a82:{NFSU2_TR(0x410a82);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B410a85:{NFSU2_TR(0x410a85);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x32ull))));
}
B410a88:{NFSU2_TR(0x410a88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410a8a:{NFSU2_TR(0x410a8a);
if(r1(R+518)){{goto L410acb;}}
}
B410a8c:L410a8c:{c.instructions+=5;NFSU2_TR(0x410a8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B410a8f:{NFSU2_TR(0x410a8f);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B410a93:{NFSU2_TR(0x410a93);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B410a95:{NFSU2_TR(0x410a95);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410a97:{NFSU2_TR(0x410a97);
if(r1(R+518)){{goto L410acb;}}
}
B410a99:L410a99:{c.instructions+=5;NFSU2_TR(0x410a99);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410a9c:{NFSU2_TR(0x410a9c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B410aa2:{NFSU2_TR(0x410aa2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410aa4:{NFSU2_TR(0x410aa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410aa7:{NFSU2_TR(0x410aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410acb;}}
}
B410aa9:L410aa9:{c.instructions+=5;NFSU2_TR(0x410aa9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410aac:{NFSU2_TR(0x410aac);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B410ab2:{NFSU2_TR(0x410ab2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410ab4:{NFSU2_TR(0x410ab4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410ab7:{NFSU2_TR(0x410ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410acb;}}
}
B410ab9:L410ab9:{c.instructions+=3;NFSU2_TR(0x410ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410abc:{NFSU2_TR(0x410abc);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B410abf:{NFSU2_TR(0x410abf);
if(r1(R+518)){{goto L410acb;}}
}
B410ac1:L410ac1:{c.instructions+=4;NFSU2_TR(0x410ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410ac2:{NFSU2_TR(0x410ac2);
w4(R+0,u32(0x1ull));
}
B410ac7:{NFSU2_TR(0x410ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410ac8:{NFSU2_TR(0x410ac8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410acb:L410acb:{c.instructions+=4;NFSU2_TR(0x410acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410acc:{NFSU2_TR(0x410acc);
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
B410ace:{NFSU2_TR(0x410ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410acf:{NFSU2_TR(0x410acf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410ad2:L410ad2:{c.instructions+=4;NFSU2_TR(0x410ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410ad3:{NFSU2_TR(0x410ad3);
w1(R+0,u8(0x1ull));
}
B410ad5:{NFSU2_TR(0x410ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410ad6:{NFSU2_TR(0x410ad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410ae0:L410ae0:{c.instructions+=7;NFSU2_TR(0x410ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410ae4:{NFSU2_TR(0x410ae4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410ae5:{NFSU2_TR(0x410ae5);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B410ae9:{NFSU2_TR(0x410ae9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410aea:{NFSU2_TR(0x410aea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B410aec:{NFSU2_TR(0x410aec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B410aef:{NFSU2_TR(0x410aef);
}
B410af0:L410af0:{c.instructions+=3;NFSU2_TR(0x410af0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B410af3:{NFSU2_TR(0x410af3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410af5:{NFSU2_TR(0x410af5);
if(r1(R+518)){{goto L410b07;}}
}
B410af7:L410af7:{c.instructions+=4;NFSU2_TR(0x410af7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B410af8:{NFSU2_TR(0x410af8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B410afb:{NFSU2_TR(0x410afb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410afe:{NFSU2_TR(0x410afe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410af0u);}goto L410af0;}}
}
B410b00:L410b00:{c.instructions+=4;NFSU2_TR(0x410b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410b01:{NFSU2_TR(0x410b01);
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
B410b03:{NFSU2_TR(0x410b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410b04:{NFSU2_TR(0x410b04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410b07:L410b07:{c.instructions+=2;NFSU2_TR(0x410b07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410b0a:{NFSU2_TR(0x410b0a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410b00u);}goto L410b00;}}
}
B410b0c:L410b0c:{c.instructions+=6;NFSU2_TR(0x410b0c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410b0e:{NFSU2_TR(0x410b0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410b10:{NFSU2_TR(0x410b10);
__builtin_memmove((R+8),(R+518),1);
}
B410b13:{NFSU2_TR(0x410b13);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B410b18:{NFSU2_TR(0x410b18);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B410b1a:{NFSU2_TR(0x410b1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410b37;}}
}
B410b1c:L410b1c:{c.instructions+=7;NFSU2_TR(0x410b1c);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B410b21:{NFSU2_TR(0x410b21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B410b28:{NFSU2_TR(0x410b28);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B410b2b:{NFSU2_TR(0x410b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410b2c:{NFSU2_TR(0x410b2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B410b33:{NFSU2_TR(0x410b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410b34:{NFSU2_TR(0x410b34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410b37:L410b37:{c.instructions+=7;NFSU2_TR(0x410b37);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B410b3c:{NFSU2_TR(0x410b3c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B410b3f:{NFSU2_TR(0x410b3f);
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
B410b41:{NFSU2_TR(0x410b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410b42:{NFSU2_TR(0x410b42);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B410b49:{NFSU2_TR(0x410b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410b4a:{NFSU2_TR(0x410b4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410b50:L410b50:{c.instructions+=5;NFSU2_TR(0x410b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410b54:{NFSU2_TR(0x410b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410b57:{NFSU2_TR(0x410b57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410b58:{NFSU2_TR(0x410b58);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B410b5c:{NFSU2_TR(0x410b5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410bea;}}
}
B410b62:L410b62:{c.instructions+=8;NFSU2_TR(0x410b62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410b63:{NFSU2_TR(0x410b63);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B410b67:{NFSU2_TR(0x410b67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410b68:{NFSU2_TR(0x410b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410b6c:{NFSU2_TR(0x410b6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffceull))));
__builtin_memmove((R+24),(U+0),4);
}
B410b6f:{NFSU2_TR(0x410b6f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410b71:{NFSU2_TR(0x410b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B410b74:{NFSU2_TR(0x410b74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410b75:L410b75:{c.instructions+=3;NFSU2_TR(0x410b75);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B410b78:{NFSU2_TR(0x410b78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410b7a:{NFSU2_TR(0x410b7a);
if(r1(R+518)){{goto L410b88;}}
}
B410b7c:L410b7c:{c.instructions+=4;NFSU2_TR(0x410b7c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B410b7d:{NFSU2_TR(0x410b7d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B410b80:{NFSU2_TR(0x410b80);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410b83:{NFSU2_TR(0x410b83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410b75u);}goto L410b75;}}
}
B410b85:L410b85:{c.instructions+=1;NFSU2_TR(0x410b85);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B410b88:L410b88:{c.instructions+=14;NFSU2_TR(0x410b88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410b8c:{NFSU2_TR(0x410b8c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410b90:{NFSU2_TR(0x410b90);
__builtin_memmove((R+0),(R+24),4);
}
B410b92:{NFSU2_TR(0x410b92);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B410b95:{NFSU2_TR(0x410b95);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B410b97:{NFSU2_TR(0x410b97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B410b9a:{NFSU2_TR(0x410b9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B410b9d:{NFSU2_TR(0x410b9d);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B410ba0:{NFSU2_TR(0x410ba0);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B410ba3:{NFSU2_TR(0x410ba3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B410ba7:{NFSU2_TR(0x410ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410baa:{NFSU2_TR(0x410baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410bad:{NFSU2_TR(0x410bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B410bae:{NFSU2_TR(0x410bae);
if(r1(R+518)){{goto L410be4;}}
}
B410bb0:L410bb0:{c.instructions+=4;NFSU2_TR(0x410bb0);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B410bb5:{NFSU2_TR(0x410bb5);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410bbb:{NFSU2_TR(0x410bbb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410bbe:{NFSU2_TR(0x410bbe);
if(r1(R+518)){{goto L410bcb;}}
}
B410bc0:L410bc0:{c.instructions+=4;NFSU2_TR(0x410bc0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
}
B410bc3:{NFSU2_TR(0x410bc3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B410bc5:{NFSU2_TR(0x410bc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B410bc8:{NFSU2_TR(0x410bc8);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410bcb:L410bcb:{c.instructions+=6;NFSU2_TR(0x410bcb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410bcf:{NFSU2_TR(0x410bcf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B410bd1:{NFSU2_TR(0x410bd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410bd3:{NFSU2_TR(0x410bd3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B410bd5:{NFSU2_TR(0x410bd5);
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
B410bd8:{NFSU2_TR(0x410bd8);
if(r1(R+514)){{goto L410be8;}}
}
B410bda:L410bda:{c.instructions+=5;NFSU2_TR(0x410bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410bdb:{NFSU2_TR(0x410bdb);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B410bdf:{NFSU2_TR(0x410bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410be0:{NFSU2_TR(0x410be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410be1:{NFSU2_TR(0x410be1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410be4:L410be4:{c.instructions+=1;NFSU2_TR(0x410be4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B410be8:L410be8:{c.instructions+=2;NFSU2_TR(0x410be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410be9:{NFSU2_TR(0x410be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410bea:L410bea:{c.instructions+=2;NFSU2_TR(0x410bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410beb:{NFSU2_TR(0x410beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410bf0:L410bf0:{c.instructions+=2;NFSU2_TR(0x410bf0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410bf2:{NFSU2_TR(0x410bf2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B410bf5:L410bf5:{c.instructions+=3;NFSU2_TR(0x410bf5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B410bf8:{NFSU2_TR(0x410bf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B410bfa:{NFSU2_TR(0x410bfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410c1d;}}
}
B410bfc:L410bfc:{c.instructions+=3;NFSU2_TR(0x410bfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B410c03:{NFSU2_TR(0x410c03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410c05:{NFSU2_TR(0x410c05);
if(r1(R+518)){{goto L410c1d;}}
}
B410c07:L410c07:{c.instructions+=4;NFSU2_TR(0x410c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410c0a:{NFSU2_TR(0x410c0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B410c0d:{NFSU2_TR(0x410c0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410c0f:{NFSU2_TR(0x410c0f);
if(r1(R+518)){{goto L410c1d;}}
}
B410c11:L410c11:{c.instructions+=4;NFSU2_TR(0x410c11);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B410c12:{NFSU2_TR(0x410c12);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B410c15:{NFSU2_TR(0x410c15);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B410c18:{NFSU2_TR(0x410c18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410bf5u);}goto L410bf5;}}
}
B410c1a:L410c1a:{c.instructions+=2;NFSU2_TR(0x410c1a);
w1(R+0,u8(0x1ull));
}
B410c1c:{NFSU2_TR(0x410c1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410c1d:L410c1d:{c.instructions+=2;NFSU2_TR(0x410c1d);
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
B410c1f:{NFSU2_TR(0x410c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410c20:L410c20:{c.instructions+=5;NFSU2_TR(0x410c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410c21:{NFSU2_TR(0x410c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410c25:{NFSU2_TR(0x410c25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410c27:{NFSU2_TR(0x410c27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410c28:{NFSU2_TR(0x410c28);
if(r1(R+518)){{goto L410c3b;}}
}
B410c2a:L410c2a:{c.instructions+=4;NFSU2_TR(0x410c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410c2d:{NFSU2_TR(0x410c2d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B410c32:{NFSU2_TR(0x410c32);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B410c39:{NFSU2_TR(0x410c39);
{goto L410c3d;}
}
B410c3b:L410c3b:{c.instructions+=1;NFSU2_TR(0x410c3b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B410c3d:L410c3d:{c.instructions+=17;NFSU2_TR(0x410c3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B410c41:{NFSU2_TR(0x410c41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B410c42:{NFSU2_TR(0x410c42);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B410c43:{NFSU2_TR(0x410c43);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B410c45:{NFSU2_TR(0x410c45);
__builtin_memmove((R+4),(R+0),4);
}
B410c47:{NFSU2_TR(0x410c47);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B410c49:{NFSU2_TR(0x410c49);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B410c4f:{NFSU2_TR(0x410c4f);
w4(R+0,u32(0x92492493ull));
}
B410c54:{NFSU2_TR(0x410c54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B410c56:{NFSU2_TR(0x410c56);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B410c58:{NFSU2_TR(0x410c58);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B410c5b:{NFSU2_TR(0x410c5b);
__builtin_memmove((R+0),(R+8),4);
}
B410c5d:{NFSU2_TR(0x410c5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B410c60:{NFSU2_TR(0x410c60);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B410c62:{NFSU2_TR(0x410c62);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B410c64:{NFSU2_TR(0x410c64);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410c66:{NFSU2_TR(0x410c66);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L410c6e;}}
}
B410c68:L410c68:{c.instructions+=3;NFSU2_TR(0x410c68);
__builtin_memmove((R+24),(R+4),4);
}
B410c6a:{NFSU2_TR(0x410c6a);
__builtin_memmove((R+4),(R+8),4);
}
B410c6c:{NFSU2_TR(0x410c6c);
{goto L410c70;}
}
B410c6e:L410c6e:{c.instructions+=1;NFSU2_TR(0x410c6e);
__builtin_memmove((R+24),(R+8),4);
}
B410c70:L410c70:{c.instructions+=3;NFSU2_TR(0x410c70);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B410c72:{NFSU2_TR(0x410c72);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410c75:{NFSU2_TR(0x410c75);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L410c7c;}}
}
B410c77:L410c77:{c.instructions+=1;NFSU2_TR(0x410c77);
w4(R+4,u32(0x1ull));
}
B410c7c:L410c7c:{c.instructions+=3;NFSU2_TR(0x410c7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410c7d:{NFSU2_TR(0x410c7d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410c83:{NFSU2_TR(0x410c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410c88ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B410c88:L410c88:{c.instructions+=6;NFSU2_TR(0x410c88);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B410c8a:{NFSU2_TR(0x410c8a);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B410c8d:{NFSU2_TR(0x410c8d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B410c94:{NFSU2_TR(0x410c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410c95:{NFSU2_TR(0x410c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410c96:{NFSU2_TR(0x410c96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410ca0:L410ca0:{c.instructions+=6;NFSU2_TR(0x410ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410ca4:{NFSU2_TR(0x410ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410ca7:{NFSU2_TR(0x410ca7);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B410cac:{NFSU2_TR(0x410cac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410cad:{NFSU2_TR(0x410cad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410cae:{NFSU2_TR(0x410cae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410cb9;}}
}
B410cb0:L410cb0:{c.instructions+=2;NFSU2_TR(0x410cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B410cb7:{NFSU2_TR(0x410cb7);
{goto L410cbb;}
}
B410cb9:L410cb9:{c.instructions+=1;NFSU2_TR(0x410cb9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B410cbb:L410cbb:{c.instructions+=8;NFSU2_TR(0x410cbb);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B410cbf:{NFSU2_TR(0x410cbf);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B410cc4:{NFSU2_TR(0x410cc4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B410cc6:{NFSU2_TR(0x410cc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410cc8:{NFSU2_TR(0x410cc8);
__builtin_memmove((R+12),(R+518),1);
}
B410ccb:{NFSU2_TR(0x410ccb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410ccd:{NFSU2_TR(0x410ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x2ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B410cd4:{NFSU2_TR(0x410cd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410ce3;}}
}
B410cd6:L410cd6:{c.instructions+=3;NFSU2_TR(0x410cd6);
__builtin_memmove((R+0),gp(0x890108),4);
}
B410cdb:{NFSU2_TR(0x410cdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410cdd:{NFSU2_TR(0x410cdd);
if(r1(R+518)){{goto L410d69;}}
}
B410ce3:L410ce3:{c.instructions+=3;NFSU2_TR(0x410ce3);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B410ce8:{NFSU2_TR(0x410ce8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410cea:{NFSU2_TR(0x410cea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L410d69;}}
}
B410cec:L410cec:{c.instructions+=3;NFSU2_TR(0x410cec);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410cf2:{NFSU2_TR(0x410cf2);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410cf7:{NFSU2_TR(0x410cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410cfcull));
TAIL_STATIC(0x5ea500u,5ea);
}
B410cfc:L410cfc:{c.instructions+=4;NFSU2_TR(0x410cfc);
{u32 ea_=u32(u32(7879624u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B410d02:{NFSU2_TR(0x410d02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410d04:{NFSU2_TR(0x410d04);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B410d07:{NFSU2_TR(0x410d07);
if(r1(R+514)){{goto L410d69;}}
}
B410d09:L410d09:{c.instructions+=5;NFSU2_TR(0x410d09);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B410d0f:{NFSU2_TR(0x410d0f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x186a0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B410d15:{NFSU2_TR(0x410d15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410d16:{NFSU2_TR(0x410d16);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410d1c:{NFSU2_TR(0x410d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410d21ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B410d21:L410d21:{c.instructions+=12;NFSU2_TR(0x410d21);
__builtin_memmove((R+4),(R+0),4);
}
B410d23:{NFSU2_TR(0x410d23);
w4(R+0,u32(0x4f8b588full));
}
B410d28:{NFSU2_TR(0x410d28);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B410d2a:{NFSU2_TR(0x410d2a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B410d2c:{NFSU2_TR(0x410d2c);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B410d2e:{NFSU2_TR(0x410d2e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B410d30:{NFSU2_TR(0x410d30);
u8 U[48];
w4(U+40,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
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
B410d33:{NFSU2_TR(0x410d33);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B410d3a:{NFSU2_TR(0x410d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410d3d:{NFSU2_TR(0x410d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B410d40:{NFSU2_TR(0x410d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B410d42:{NFSU2_TR(0x410d42);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410d45ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B410d45:L410d45:{c.instructions+=2;NFSU2_TR(0x410d45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410d48:{NFSU2_TR(0x410d48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410d69;}}
}
B410d4a:L410d4a:{c.instructions+=2;NFSU2_TR(0x410d4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410d4d:{NFSU2_TR(0x410d4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L410d69;}}
}
B410d4f:L410d4f:{c.instructions+=2;NFSU2_TR(0x410d4f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410d52:{NFSU2_TR(0x410d52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L410d59;}}
}
B410d54:L410d54:{c.instructions+=2;NFSU2_TR(0x410d54);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B410d57:{NFSU2_TR(0x410d57);
{goto L410d5c;}
}
B410d59:L410d59:{c.instructions+=1;NFSU2_TR(0x410d59);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
}
B410d5c:L410d5c:{c.instructions+=4;NFSU2_TR(0x410d5c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B410d5e:{NFSU2_TR(0x410d5e);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B410d65:{NFSU2_TR(0x410d65);
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
B410d67:{NFSU2_TR(0x410d67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410dc0;}}
}
B410d69:L410d69:{c.instructions+=4;NFSU2_TR(0x410d69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410d6a:{NFSU2_TR(0x410d6a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B410d6c:{NFSU2_TR(0x410d6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B410d73:{NFSU2_TR(0x410d73);
{goto L410d80;}
}
B410d80:L410d80:{c.instructions+=3;NFSU2_TR(0x410d80);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410d86:{NFSU2_TR(0x410d86);
u8 U[4];
w4(U+0,u32(0x61a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410d8b:{NFSU2_TR(0x410d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410d90ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B410d90:L410d90:{c.instructions+=9;NFSU2_TR(0x410d90);
__builtin_memmove((R+4),(R+0),4);
}
B410d92:{NFSU2_TR(0x410d92);
w4(R+0,u32(0x4f8b588full));
}
B410d97:{NFSU2_TR(0x410d97);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B410d99:{NFSU2_TR(0x410d99);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B410d9b:{NFSU2_TR(0x410d9b);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B410d9d:{NFSU2_TR(0x410d9d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B410d9f:{NFSU2_TR(0x410d9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B410da2:{NFSU2_TR(0x410da2);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x0ull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B410da6:{NFSU2_TR(0x410da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410dc5;}}
}
B410da8:L410da8:{c.instructions+=3;NFSU2_TR(0x410da8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B410da9:{NFSU2_TR(0x410da9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410dac:{NFSU2_TR(0x410dac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410d80u);}goto L410d80;}}
}
B410dae:L410dae:{c.instructions+=1;NFSU2_TR(0x410dae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B410db0:L410db0:{c.instructions+=2;NFSU2_TR(0x410db0);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B410db4:{NFSU2_TR(0x410db4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410dce;}}
}
B410db6:L410db6:{c.instructions+=3;NFSU2_TR(0x410db6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B410db7:{NFSU2_TR(0x410db7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410dba:{NFSU2_TR(0x410dba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410db0u);}goto L410db0;}}
}
B410dbc:L410dbc:{c.instructions+=2;NFSU2_TR(0x410dbc);
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
B410dbf:{NFSU2_TR(0x410dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410dc0:L410dc0:{c.instructions+=3;NFSU2_TR(0x410dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410dc1:{NFSU2_TR(0x410dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410dc2:{NFSU2_TR(0x410dc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410dc5:L410dc5:{c.instructions+=5;NFSU2_TR(0x410dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410dc6:{NFSU2_TR(0x410dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410dc7:{NFSU2_TR(0x410dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B410dca:{NFSU2_TR(0x410dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410dcb:{NFSU2_TR(0x410dcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410dce:L410dce:{c.instructions+=5;NFSU2_TR(0x410dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410dcf:{NFSU2_TR(0x410dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410dd0:{NFSU2_TR(0x410dd0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B410dd2:{NFSU2_TR(0x410dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410dd3:{NFSU2_TR(0x410dd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410de0:L410de0:{c.instructions+=7;NFSU2_TR(0x410de0);
__builtin_memmove((R+8),gp(0x890118),4);
}
B410de6:{NFSU2_TR(0x410de6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410de7:{NFSU2_TR(0x410de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B410de9:{NFSU2_TR(0x410de9);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B410deb:{NFSU2_TR(0x410deb);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B410dee:{NFSU2_TR(0x410dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410def:{NFSU2_TR(0x410def);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410e23;}}
}
B410df1:L410df1:{c.instructions+=3;NFSU2_TR(0x410df1);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B410df6:{NFSU2_TR(0x410df6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410df8:{NFSU2_TR(0x410df8);
if(r1(R+518)){{goto L410e13;}}
}
B410dfa:L410dfa:{c.instructions+=6;NFSU2_TR(0x410dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410dfe:{NFSU2_TR(0x410dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410e04:{NFSU2_TR(0x410e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410e08:{NFSU2_TR(0x410e08);
__builtin_memmove((R+0),(R+8),4);
}
B410e0a:{NFSU2_TR(0x410e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410e0e:{NFSU2_TR(0x410e0e);
TAIL_STATIC(0x409890u,409);
}
B410e13:L410e13:{c.instructions+=4;NFSU2_TR(0x410e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410e17:{NFSU2_TR(0x410e17);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B410e1a:{NFSU2_TR(0x410e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410e1e:{NFSU2_TR(0x410e1e);
TAIL_STATIC(0x409840u,409);
}
B410e23:L410e23:{c.instructions+=1;NFSU2_TR(0x410e23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410e30:L410e30:{c.instructions+=8;NFSU2_TR(0x410e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B410e33:{NFSU2_TR(0x410e33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410e34:{NFSU2_TR(0x410e34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410e35:{NFSU2_TR(0x410e35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410e36:{NFSU2_TR(0x410e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410e3a:{NFSU2_TR(0x410e3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B410e3c:{NFSU2_TR(0x410e3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410e3d:{NFSU2_TR(0x410e3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410e44;}}
}
B410e3f:L410e3f:{c.instructions+=2;NFSU2_TR(0x410e3f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410e42:{NFSU2_TR(0x410e42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410e55;}}
}
B410e44:L410e44:{c.instructions+=2;NFSU2_TR(0x410e44);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410e47:{NFSU2_TR(0x410e47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410e4e;}}
}
B410e49:L410e49:{c.instructions+=2;NFSU2_TR(0x410e49);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410e4c:{NFSU2_TR(0x410e4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L410e55;}}
}
B410e4e:L410e4e:{c.instructions+=2;NFSU2_TR(0x410e4e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B410e53:{NFSU2_TR(0x410e53);
{goto L410e5a;}
}
B410e55:L410e55:{c.instructions+=1;NFSU2_TR(0x410e55);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B410e5a:L410e5a:{c.instructions+=4;NFSU2_TR(0x410e5a);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B410e5f:{NFSU2_TR(0x410e5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410e61:{NFSU2_TR(0x410e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B410e65:{NFSU2_TR(0x410e65);
if(r1(R+518)){{goto L410e85;}}
}
B410e67:L410e67:{c.instructions+=2;NFSU2_TR(0x410e67);
__builtin_memmove((R+4),(R+12),4);
}
B410e69:{NFSU2_TR(0x410e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410e6eull));
TAIL_STATIC(0x5d8990u,5d8);
}
B410e6e:L410e6e:{c.instructions+=4;NFSU2_TR(0x410e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410e71:{NFSU2_TR(0x410e71);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B410e74:{NFSU2_TR(0x410e74);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410e76:{NFSU2_TR(0x410e76);
if(r1(R+518)){{goto L410e85;}}
}
B410e78:L410e78:{c.instructions+=4;NFSU2_TR(0x410e78);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B410e7c:{NFSU2_TR(0x410e7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410e7e:{NFSU2_TR(0x410e7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B410e83:{NFSU2_TR(0x410e83);
{goto L410e8d;}
}
B410e85:L410e85:{c.instructions+=2;NFSU2_TR(0x410e85);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B410e89:{NFSU2_TR(0x410e89);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B410e8d:L410e8d:{c.instructions+=3;NFSU2_TR(0x410e8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410e8e:{NFSU2_TR(0x410e8e);
__builtin_memmove((R+4),(R+12),4);
}
B410e90:{NFSU2_TR(0x410e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410e95ull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B410e95:L410e95:{c.instructions+=9;NFSU2_TR(0x410e95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B410e99:{NFSU2_TR(0x410e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410e9d:{NFSU2_TR(0x410e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410ea1:{NFSU2_TR(0x410ea1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410ea2:{NFSU2_TR(0x410ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410ea3:{NFSU2_TR(0x410ea3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B410ea7:{NFSU2_TR(0x410ea7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410ea8:{NFSU2_TR(0x410ea8);
__builtin_memmove((R+4),(R+12),4);
}
B410eaa:{NFSU2_TR(0x410eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410eafull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B410eaf:L410eaf:{c.instructions+=8;NFSU2_TR(0x410eaf);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410eb5:{NFSU2_TR(0x410eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410eb8:{NFSU2_TR(0x410eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410ebb:{NFSU2_TR(0x410ebb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B410ebd:{NFSU2_TR(0x410ebd);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B410ebf:{NFSU2_TR(0x410ebf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410ec1:{NFSU2_TR(0x410ec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410ec5:{NFSU2_TR(0x410ec5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L410fa3;}}
}
B410ecb:L410ecb:{c.instructions+=1;NFSU2_TR(0x410ecb);
{goto L410ed0;}
}
B410ed0:L410ed0:{c.instructions+=5;NFSU2_TR(0x410ed0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B410ed2:{NFSU2_TR(0x410ed2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B410ed6:{NFSU2_TR(0x410ed6);
u8 U[22];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
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
B410eda:{NFSU2_TR(0x410eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410edd:{NFSU2_TR(0x410edd);
if(r1(R+518)){{goto L410f8e;}}
}
B410ee3:L410ee3:{c.instructions+=2;NFSU2_TR(0x410ee3);
__builtin_memmove((R+4),(R+24),4);
}
B410ee5:{NFSU2_TR(0x410ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410eeaull));
TAIL_STATIC(0x5ec060u,5ec);
}
B410eea:L410eea:{c.instructions+=2;NFSU2_TR(0x410eea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410eec:{NFSU2_TR(0x410eec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410f84;}}
}
B410ef2:L410ef2:{c.instructions+=3;NFSU2_TR(0x410ef2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B410ef8:{NFSU2_TR(0x410ef8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410efa:{NFSU2_TR(0x410efa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410f84;}}
}
B410f00:L410f00:{c.instructions+=4;NFSU2_TR(0x410f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410f03:{NFSU2_TR(0x410f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B410f06:{NFSU2_TR(0x410f06);
__builtin_memmove((R+4),(R+12),4);
}
B410f08:{NFSU2_TR(0x410f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410f0dull));
TAIL_STATIC(0x5d8990u,5d8);
}
B410f0d:L410f0d:{c.instructions+=2;NFSU2_TR(0x410f0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B410f11:{NFSU2_TR(0x410f11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410f21;}}
}
B410f13:L410f13:{c.instructions+=4;NFSU2_TR(0x410f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410f16:{NFSU2_TR(0x410f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+4))));
}
B410f19:{NFSU2_TR(0x410f19);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B410f1f:{NFSU2_TR(0x410f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410f84;}}
}
B410f21:L410f21:{c.instructions+=6;NFSU2_TR(0x410f21);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B410f24:{NFSU2_TR(0x410f24);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B410f29:{NFSU2_TR(0x410f29);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410f2b:{NFSU2_TR(0x410f2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B410f2e:{NFSU2_TR(0x410f2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410f30:{NFSU2_TR(0x410f30);
if(r1(R+518)){{goto L410f57;}}
}
B410f32:L410f32:{c.instructions+=2;NFSU2_TR(0x410f32);
__builtin_memmove((R+4),(R+20),4);
}
B410f34:{NFSU2_TR(0x410f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x410f39ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B410f39:L410f39:{c.instructions+=4;NFSU2_TR(0x410f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410f3c:{NFSU2_TR(0x410f3c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B410f3f:{NFSU2_TR(0x410f3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410f41:{NFSU2_TR(0x410f41);
if(r1(R+518)){{goto L410f48;}}
}
B410f43:L410f43:{c.instructions+=2;NFSU2_TR(0x410f43);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410f45:{NFSU2_TR(0x410f45);
__builtin_memmove((R+12),(R+518),1);
}
B410f48:L410f48:{c.instructions+=3;NFSU2_TR(0x410f48);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B410f4d:{NFSU2_TR(0x410f4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B410f4f:{NFSU2_TR(0x410f4f);
if(r1(R+518)){{goto L410f57;}}
}
B410f51:L410f51:{c.instructions+=2;NFSU2_TR(0x410f51);
u8 U[7];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B410f55:{NFSU2_TR(0x410f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410f80;}}
}
B410f57:L410f57:{c.instructions+=16;NFSU2_TR(0x410f57);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410f5a:{NFSU2_TR(0x410f5a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410f5e:{NFSU2_TR(0x410f5e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B410f61:{NFSU2_TR(0x410f61);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B410f65:{NFSU2_TR(0x410f65);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B410f67:{NFSU2_TR(0x410f67);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B410f69:{NFSU2_TR(0x410f69);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B410f6b:{NFSU2_TR(0x410f6b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B410f6d:{NFSU2_TR(0x410f6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B410f6f:{NFSU2_TR(0x410f6f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B410f71:{NFSU2_TR(0x410f71);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B410f73:{NFSU2_TR(0x410f73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B410f75:{NFSU2_TR(0x410f75);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B410f79:{NFSU2_TR(0x410f79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B410f7b:{NFSU2_TR(0x410f7b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B410f7e:{NFSU2_TR(0x410f7e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L410faf;}}
}
B410f80:L410f80:{c.instructions+=1;NFSU2_TR(0x410f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B410f84:L410f84:{c.instructions+=2;NFSU2_TR(0x410f84);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410f8a:{NFSU2_TR(0x410f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B410f8e:L410f8e:{c.instructions+=7;NFSU2_TR(0x410f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410f91:{NFSU2_TR(0x410f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B410f94:{NFSU2_TR(0x410f94);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B410f95:{NFSU2_TR(0x410f95);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B410f97:{NFSU2_TR(0x410f97);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B410f99:{NFSU2_TR(0x410f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B410f9d:{NFSU2_TR(0x410f9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x410ed0u);}goto L410ed0;}}
}
B410fa3:L410fa3:{c.instructions+=7;NFSU2_TR(0x410fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410fa4:{NFSU2_TR(0x410fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410fa5:{NFSU2_TR(0x410fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B410fa6:{NFSU2_TR(0x410fa6);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B410fa8:{NFSU2_TR(0x410fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410fa9:{NFSU2_TR(0x410fa9);
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
B410fac:{NFSU2_TR(0x410fac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410faf:L410faf:{c.instructions+=7;NFSU2_TR(0x410faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B410fb0:{NFSU2_TR(0x410fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B410fb1:{NFSU2_TR(0x410fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B410fb2:{NFSU2_TR(0x410fb2);
w1(R+0,u8(0x1ull));
}
B410fb4:{NFSU2_TR(0x410fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B410fb5:{NFSU2_TR(0x410fb5);
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
B410fb8:{NFSU2_TR(0x410fb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B410fc0:L410fc0:{c.instructions+=8;NFSU2_TR(0x410fc0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B410fc6:{NFSU2_TR(0x410fc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410fc7:{NFSU2_TR(0x410fc7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410fc8:{NFSU2_TR(0x410fc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410fc9:{NFSU2_TR(0x410fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B410fcb:{NFSU2_TR(0x410fcb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410fcd:{NFSU2_TR(0x410fcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B410fce:{NFSU2_TR(0x410fce);
if(r1(R+518)){TAIL_STATIC(0x41104du,411);}
}
B410fd0:L410fd0:{c.instructions+=6;NFSU2_TR(0x410fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B410fd4:{NFSU2_TR(0x410fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B410fd8:{NFSU2_TR(0x410fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410fdb:{NFSU2_TR(0x410fdb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B410fdd:{NFSU2_TR(0x410fdd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410fe0:{NFSU2_TR(0x410fe0);
if(r1(R+518)){{goto L410fec;}}
}
B410fe2:L410fe2:{c.instructions+=2;NFSU2_TR(0x410fe2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410fe5:{NFSU2_TR(0x410fe5);
if(r1(R+518)){{goto L410fec;}}
}
B410fe7:L410fe7:{c.instructions+=2;NFSU2_TR(0x410fe7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B410fea:{NFSU2_TR(0x410fea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L410ff5;}}
}
B410fec:L410fec:{c.instructions+=2;NFSU2_TR(0x410fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B410fef:{NFSU2_TR(0x410fef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B410ff5:L410ff5:{c.instructions+=2;NFSU2_TR(0x410ff5);
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
B410ff7:{NFSU2_TR(0x410ff7);
if(r1(R+518)){TAIL_STATIC(0x411047u,411);}
}
B410ff9:L410ff9:{c.instructions+=2;NFSU2_TR(0x410ff9);
__builtin_memmove((R+4),(R+24),4);
}
B410ffb:{NFSU2_TR(0x410ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411000ull));
TAIL_STATIC(0x5ec060u,5ec);
}
XIT:NFSU2_TR_EXIT(0x410,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
