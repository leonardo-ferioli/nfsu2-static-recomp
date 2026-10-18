#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x720,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x720,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_720(u8* __restrict R,Cpu& c);
u32 page_720(Cpu& c){return body_720(c.regs.data(),c);}
__attribute__((noinline)) u32 body_720(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x720001:goto L720001;
case 0x720004:c.instructions+=4;goto B720004;
case 0x720007:c.instructions+=3;goto B720007;
case 0x72000a:c.instructions+=2;goto B72000a;
case 0x72000c:c.instructions+=1;goto B72000c;
case 0x72000e:goto L72000e;
case 0x720010:c.instructions+=1;goto B720010;
case 0x720015:goto L720015;
case 0x720017:c.instructions+=4;goto B720017;
case 0x72001b:c.instructions+=3;goto B72001b;
case 0x72001c:c.instructions+=2;goto B72001c;
case 0x72001e:c.instructions+=1;goto B72001e;
case 0x720020:goto L720020;
case 0x720022:c.instructions+=3;goto B720022;
case 0x720026:c.instructions+=2;goto B720026;
case 0x720029:c.instructions+=1;goto B720029;
case 0x72002e:goto L72002e;
case 0x72002f:c.instructions+=6;goto B72002f;
case 0x720030:c.instructions+=5;goto B720030;
case 0x720031:c.instructions+=4;goto B720031;
case 0x720032:c.instructions+=3;goto B720032;
case 0x720034:c.instructions+=2;goto B720034;
case 0x720035:c.instructions+=1;goto B720035;
case 0x720036:goto L720036;
case 0x720037:c.instructions+=5;goto B720037;
case 0x720039:c.instructions+=4;goto B720039;
case 0x72003c:c.instructions+=3;goto B72003c;
case 0x720040:c.instructions+=2;goto B720040;
case 0x720041:c.instructions+=1;goto B720041;
case 0x720043:goto L720043;
case 0x720047:c.instructions+=5;goto B720047;
case 0x72004b:c.instructions+=4;goto B72004b;
case 0x72004d:c.instructions+=3;goto B72004d;
case 0x72004f:c.instructions+=2;goto B72004f;
case 0x720052:c.instructions+=1;goto B720052;
case 0x720054:goto L720054;
case 0x720055:c.instructions+=2;goto B720055;
case 0x720058:c.instructions+=1;goto B720058;
case 0x720059:goto L720059;
case 0x72005d:c.instructions+=4;goto B72005d;
case 0x72005f:c.instructions+=3;goto B72005f;
case 0x720061:c.instructions+=2;goto B720061;
case 0x720065:c.instructions+=1;goto B720065;
case 0x720067:goto L720067;
case 0x720069:c.instructions+=1;goto B720069;
case 0x72006b:goto L72006b;
case 0x72006d:c.instructions+=1;goto B72006d;
case 0x72006f:goto L72006f;
case 0x720071:goto L720071;
case 0x720073:c.instructions+=5;goto B720073;
case 0x720077:c.instructions+=4;goto B720077;
case 0x720078:c.instructions+=3;goto B720078;
case 0x72007b:c.instructions+=2;goto B72007b;
case 0x72007d:c.instructions+=1;goto B72007d;
case 0x72007f:goto L72007f;
case 0x720080:c.instructions+=2;goto B720080;
case 0x720081:c.instructions+=1;goto B720081;
case 0x720083:goto L720083;
case 0x720086:c.instructions+=1;goto B720086;
case 0x720089:goto L720089;
case 0x72008c:goto L72008c;
case 0x72008f:c.instructions+=2;goto B72008f;
case 0x720090:c.instructions+=1;goto B720090;
case 0x720092:goto L720092;
case 0x720095:c.instructions+=3;goto B720095;
case 0x720096:c.instructions+=2;goto B720096;
case 0x720097:c.instructions+=1;goto B720097;
case 0x72009c:goto L72009c;
case 0x72009d:c.instructions+=1;goto B72009d;
case 0x72009e:goto L72009e;
case 0x7200a0:c.instructions+=2;goto B7200a0;
case 0x7200a1:c.instructions+=1;goto B7200a1;
case 0x7200a2:goto L7200a2;
case 0x7200a3:c.instructions+=12;goto B7200a3;
case 0x7200a5:c.instructions+=11;goto B7200a5;
case 0x7200a6:c.instructions+=10;goto B7200a6;
case 0x7200a7:c.instructions+=9;goto B7200a7;
case 0x7200aa:c.instructions+=8;goto B7200aa;
case 0x7200ad:c.instructions+=7;goto B7200ad;
case 0x7200ae:c.instructions+=6;goto B7200ae;
case 0x7200b0:c.instructions+=5;goto B7200b0;
case 0x7200b1:c.instructions+=4;goto B7200b1;
case 0x7200b3:c.instructions+=3;goto B7200b3;
case 0x7200b5:c.instructions+=2;goto B7200b5;
case 0x7200b6:c.instructions+=1;goto B7200b6;
case 0x7200b8:goto L7200b8;
case 0x7200bc:c.instructions+=3;goto B7200bc;
case 0x7200bf:c.instructions+=2;goto B7200bf;
case 0x7200c2:c.instructions+=1;goto B7200c2;
case 0x7200c4:goto L7200c4;
case 0x7200c7:goto L7200c7;
case 0x7200ca:c.instructions+=3;goto B7200ca;
case 0x7200cd:c.instructions+=2;goto B7200cd;
case 0x7200d0:c.instructions+=1;goto B7200d0;
case 0x7200d2:goto L7200d2;
case 0x7200d4:c.instructions+=2;goto B7200d4;
case 0x7200d6:c.instructions+=1;goto B7200d6;
case 0x7200dc:goto L7200dc;
case 0x7200e1:goto L7200e1;
case 0x7200e3:c.instructions+=1;goto B7200e3;
case 0x7200e8:goto L7200e8;
case 0x7200ea:c.instructions+=1;goto B7200ea;
case 0x7200ec:goto L7200ec;
case 0x7200ee:c.instructions+=1;goto B7200ee;
case 0x7200f4:goto L7200f4;
case 0x7200f6:c.instructions+=1;goto B7200f6;
case 0x7200f8:goto L7200f8;
case 0x7200fb:c.instructions+=2;goto B7200fb;
case 0x7200fe:c.instructions+=1;goto B7200fe;
case 0x720100:goto L720100;
case 0x720103:goto L720103;
case 0x720106:c.instructions+=7;goto B720106;
case 0x720109:c.instructions+=6;goto B720109;
case 0x72010d:c.instructions+=5;goto B72010d;
case 0x720110:c.instructions+=4;goto B720110;
case 0x720113:c.instructions+=3;goto B720113;
case 0x720115:c.instructions+=2;goto B720115;
case 0x720117:c.instructions+=1;goto B720117;
case 0x720119:goto L720119;
case 0x72011b:c.instructions+=1;goto B72011b;
case 0x72011d:goto L72011d;
case 0x720120:c.instructions+=1;goto B720120;
case 0x720122:goto L720122;
case 0x720125:goto L720125;
case 0x720128:c.instructions+=5;goto B720128;
case 0x72012a:c.instructions+=4;goto B72012a;
case 0x72012e:c.instructions+=3;goto B72012e;
case 0x720131:c.instructions+=2;goto B720131;
case 0x720134:c.instructions+=1;goto B720134;
case 0x720136:goto L720136;
case 0x720139:c.instructions+=1;goto B720139;
case 0x72013b:goto L72013b;
case 0x72013c:c.instructions+=4;goto B72013c;
case 0x72013f:c.instructions+=3;goto B72013f;
case 0x720140:c.instructions+=2;goto B720140;
case 0x720141:c.instructions+=1;goto B720141;
case 0x720146:goto L720146;
case 0x720149:c.instructions+=2;goto B720149;
case 0x72014b:c.instructions+=1;goto B72014b;
case 0x72014d:goto L72014d;
case 0x72014f:goto L72014f;
case 0x720151:c.instructions+=1;goto B720151;
case 0x720153:goto L720153;
case 0x720155:c.instructions+=1;goto B720155;
case 0x720157:goto L720157;
case 0x72015a:c.instructions+=2;goto B72015a;
case 0x72015d:c.instructions+=1;goto B72015d;
case 0x72015f:goto L72015f;
case 0x720162:goto L720162;
case 0x720165:c.instructions+=7;goto B720165;
case 0x720168:c.instructions+=6;goto B720168;
case 0x72016c:c.instructions+=5;goto B72016c;
case 0x72016f:c.instructions+=4;goto B72016f;
case 0x720172:c.instructions+=3;goto B720172;
case 0x720174:c.instructions+=2;goto B720174;
case 0x720176:c.instructions+=1;goto B720176;
case 0x720178:goto L720178;
case 0x72017a:c.instructions+=1;goto B72017a;
case 0x72017c:goto L72017c;
case 0x72017f:c.instructions+=1;goto B72017f;
case 0x720181:goto L720181;
case 0x720184:goto L720184;
case 0x720187:c.instructions+=5;goto B720187;
case 0x720189:c.instructions+=4;goto B720189;
case 0x72018d:c.instructions+=3;goto B72018d;
case 0x720190:c.instructions+=2;goto B720190;
case 0x720193:c.instructions+=1;goto B720193;
case 0x720195:goto L720195;
case 0x720198:c.instructions+=1;goto B720198;
case 0x72019a:goto L72019a;
case 0x72019c:c.instructions+=3;goto B72019c;
case 0x72019f:c.instructions+=2;goto B72019f;
case 0x7201a0:c.instructions+=1;goto B7201a0;
case 0x7201a5:goto L7201a5;
case 0x7201a7:c.instructions+=2;goto B7201a7;
case 0x7201a9:c.instructions+=1;goto B7201a9;
case 0x7201ab:goto L7201ab;
case 0x7201ae:c.instructions+=3;goto B7201ae;
case 0x7201af:c.instructions+=2;goto B7201af;
case 0x7201b1:c.instructions+=1;goto B7201b1;
case 0x7201b6:goto L7201b6;
case 0x7201b9:c.instructions+=1;goto B7201b9;
case 0x7201bb:goto L7201bb;
case 0x7201bd:goto L7201bd;
case 0x7201be:c.instructions+=4;goto B7201be;
case 0x7201bf:c.instructions+=3;goto B7201bf;
case 0x7201c0:c.instructions+=2;goto B7201c0;
case 0x7201c1:c.instructions+=1;goto B7201c1;
case 0x7201c2:goto L7201c2;
case 0x7201c3:c.instructions+=5;goto B7201c3;
case 0x7201c5:c.instructions+=4;goto B7201c5;
case 0x7201c8:c.instructions+=3;goto B7201c8;
case 0x7201cb:c.instructions+=2;goto B7201cb;
case 0x7201ce:c.instructions+=1;goto B7201ce;
case 0x7201d0:goto L7201d0;
case 0x7201d3:c.instructions+=5;goto B7201d3;
case 0x7201d5:c.instructions+=4;goto B7201d5;
case 0x7201d6:c.instructions+=3;goto B7201d6;
case 0x7201d9:c.instructions+=2;goto B7201d9;
case 0x7201dc:c.instructions+=1;goto B7201dc;
case 0x7201de:goto L7201de;
case 0x7201e1:c.instructions+=1;goto B7201e1;
case 0x7201e3:goto L7201e3;
case 0x7201e5:c.instructions+=2;goto B7201e5;
case 0x7201e8:c.instructions+=1;goto B7201e8;
case 0x7201ea:goto L7201ea;
case 0x7201ed:goto L7201ed;
case 0x7201f0:c.instructions+=3;goto B7201f0;
case 0x7201f1:c.instructions+=2;goto B7201f1;
case 0x7201f2:c.instructions+=1;goto B7201f2;
case 0x7201f7:goto L7201f7;
case 0x7201f8:c.instructions+=2;goto B7201f8;
case 0x7201f9:c.instructions+=1;goto B7201f9;
case 0x7201fa:goto L7201fa;
case 0x7201fc:c.instructions+=2;goto B7201fc;
case 0x7201fd:c.instructions+=1;goto B7201fd;
case 0x7201fe:goto L7201fe;
case 0x720202:c.instructions+=4;goto B720202;
case 0x720205:c.instructions+=3;goto B720205;
case 0x720207:c.instructions+=2;goto B720207;
case 0x720209:c.instructions+=1;goto B720209;
case 0x72020b:goto L72020b;
case 0x72020e:c.instructions+=1;goto B72020e;
case 0x720210:goto L720210;
case 0x720212:c.instructions+=1;goto B720212;
case 0x720213:goto L720213;
case 0x720217:c.instructions+=1;goto B720217;
case 0x720219:goto L720219;
case 0x72021d:c.instructions+=6;goto B72021d;
case 0x720220:c.instructions+=5;goto B720220;
case 0x720223:c.instructions+=4;goto B720223;
case 0x720224:c.instructions+=3;goto B720224;
case 0x720227:c.instructions+=2;goto B720227;
case 0x720229:c.instructions+=1;goto B720229;
case 0x72022b:goto L72022b;
case 0x72022e:c.instructions+=1;goto B72022e;
case 0x720230:goto L720230;
case 0x720232:c.instructions+=1;goto B720232;
case 0x720234:goto L720234;
case 0x720237:goto L720237;
case 0x720238:goto L720238;
case 0x72023b:c.instructions+=1;goto B72023b;
case 0x72023c:goto L72023c;
case 0x72023d:c.instructions+=3;goto B72023d;
case 0x720241:c.instructions+=2;goto B720241;
case 0x720245:c.instructions+=1;goto B720245;
case 0x720247:goto L720247;
case 0x72024a:c.instructions+=2;goto B72024a;
case 0x72024b:c.instructions+=1;goto B72024b;
case 0x72024c:goto L72024c;
case 0x720251:goto L720251;
case 0x720253:c.instructions+=6;goto B720253;
case 0x720256:c.instructions+=5;goto B720256;
case 0x720258:c.instructions+=4;goto B720258;
case 0x72025a:c.instructions+=3;goto B72025a;
case 0x72025d:c.instructions+=2;goto B72025d;
case 0x72025e:c.instructions+=1;goto B72025e;
case 0x72025f:goto L72025f;
case 0x720260:c.instructions+=4;goto B720260;
case 0x720264:c.instructions+=3;goto B720264;
case 0x720267:c.instructions+=2;goto B720267;
case 0x72026b:c.instructions+=1;goto B72026b;
case 0x72026d:goto L72026d;
case 0x720270:c.instructions+=2;goto B720270;
case 0x720271:c.instructions+=1;goto B720271;
case 0x720272:goto L720272;
case 0x720273:c.instructions+=3;goto B720273;
case 0x720274:c.instructions+=2;goto B720274;
case 0x720278:c.instructions+=1;goto B720278;
case 0x72027d:goto L72027d;
case 0x720281:c.instructions+=8;goto B720281;
case 0x720285:c.instructions+=7;goto B720285;
case 0x720287:c.instructions+=6;goto B720287;
case 0x720289:c.instructions+=5;goto B720289;
case 0x72028b:c.instructions+=4;goto B72028b;
case 0x72028d:c.instructions+=3;goto B72028d;
case 0x72028f:c.instructions+=2;goto B72028f;
case 0x720293:c.instructions+=1;goto B720293;
case 0x720295:goto L720295;
case 0x720299:c.instructions+=8;goto B720299;
case 0x72029c:c.instructions+=7;goto B72029c;
case 0x72029f:c.instructions+=6;goto B72029f;
case 0x7202a3:c.instructions+=5;goto B7202a3;
case 0x7202a5:c.instructions+=4;goto B7202a5;
case 0x7202a9:c.instructions+=3;goto B7202a9;
case 0x7202ac:c.instructions+=2;goto B7202ac;
case 0x7202b0:c.instructions+=1;goto B7202b0;
case 0x7202b2:goto L7202b2;
case 0x7202b6:c.instructions+=7;goto B7202b6;
case 0x7202b9:c.instructions+=6;goto B7202b9;
case 0x7202bc:c.instructions+=5;goto B7202bc;
case 0x7202c1:c.instructions+=4;goto B7202c1;
case 0x7202c4:c.instructions+=3;goto B7202c4;
case 0x7202c8:c.instructions+=2;goto B7202c8;
case 0x7202cc:c.instructions+=1;goto B7202cc;
case 0x7202d1:goto L7202d1;
case 0x7202d4:c.instructions+=8;goto B7202d4;
case 0x7202d7:c.instructions+=7;goto B7202d7;
case 0x7202db:c.instructions+=6;goto B7202db;
case 0x7202df:c.instructions+=5;goto B7202df;
case 0x7202e3:c.instructions+=4;goto B7202e3;
case 0x7202e6:c.instructions+=3;goto B7202e6;
case 0x7202e7:c.instructions+=2;goto B7202e7;
case 0x7202e8:c.instructions+=1;goto B7202e8;
case 0x7202ea:goto L7202ea;
case 0x7202ef:c.instructions+=3;goto B7202ef;
case 0x7202f3:c.instructions+=2;goto B7202f3;
case 0x7202f4:c.instructions+=1;goto B7202f4;
case 0x7202f5:goto L7202f5;
case 0x7202f9:c.instructions+=2;goto B7202f9;
case 0x7202fa:c.instructions+=1;goto B7202fa;
case 0x7202fb:goto L7202fb;
case 0x7202fc:c.instructions+=5;goto B7202fc;
case 0x720300:c.instructions+=4;goto B720300;
case 0x720301:c.instructions+=3;goto B720301;
case 0x720303:c.instructions+=2;goto B720303;
case 0x720306:c.instructions+=1;goto B720306;
case 0x720308:goto L720308;
case 0x72030d:goto L72030d;
case 0x72030f:c.instructions+=7;goto B72030f;
case 0x720311:c.instructions+=6;goto B720311;
case 0x720312:c.instructions+=5;goto B720312;
case 0x720314:c.instructions+=4;goto B720314;
case 0x720316:c.instructions+=3;goto B720316;
case 0x720318:c.instructions+=2;goto B720318;
case 0x72031b:c.instructions+=1;goto B72031b;
case 0x72031d:goto L72031d;
case 0x72031e:goto L72031e;
case 0x720323:c.instructions+=3;goto B720323;
case 0x720325:c.instructions+=2;goto B720325;
case 0x720327:c.instructions+=1;goto B720327;
case 0x720329:goto L720329;
case 0x72032a:c.instructions+=2;goto B72032a;
case 0x72032d:c.instructions+=1;goto B72032d;
case 0x72032f:goto L72032f;
case 0x720331:goto L720331;
case 0x720334:c.instructions+=2;goto B720334;
case 0x720336:c.instructions+=1;goto B720336;
case 0x720339:goto L720339;
case 0x72033a:goto L72033a;
case 0x72033d:c.instructions+=3;goto B72033d;
case 0x72033e:c.instructions+=2;goto B72033e;
case 0x72033f:c.instructions+=1;goto B72033f;
case 0x720340:goto L720340;
case 0x720344:c.instructions+=4;goto B720344;
case 0x720347:c.instructions+=3;goto B720347;
case 0x720349:c.instructions+=2;goto B720349;
case 0x72034b:c.instructions+=1;goto B72034b;
case 0x72034d:goto L72034d;
case 0x720350:c.instructions+=1;goto B720350;
case 0x720352:goto L720352;
case 0x720355:c.instructions+=1;goto B720355;
case 0x720357:goto L720357;
case 0x72035b:c.instructions+=4;goto B72035b;
case 0x72035f:c.instructions+=3;goto B72035f;
case 0x720361:c.instructions+=2;goto B720361;
case 0x720362:c.instructions+=1;goto B720362;
case 0x720363:goto L720363;
case 0x720366:c.instructions+=1;goto B720366;
case 0x720368:goto L720368;
case 0x72036b:c.instructions+=1;goto B72036b;
case 0x72036d:goto L72036d;
case 0x720370:goto L720370;
case 0x720373:c.instructions+=2;goto B720373;
case 0x720375:c.instructions+=1;goto B720375;
case 0x720376:goto L720376;
case 0x72037a:c.instructions+=2;goto B72037a;
case 0x72037e:c.instructions+=1;goto B72037e;
case 0x720380:goto L720380;
case 0x720382:c.instructions+=1;goto B720382;
case 0x720384:goto L720384;
case 0x720386:c.instructions+=4;goto B720386;
case 0x72038c:c.instructions+=3;goto B72038c;
case 0x72038e:c.instructions+=2;goto B72038e;
case 0x720391:c.instructions+=1;goto B720391;
case 0x720393:goto L720393;
case 0x720396:c.instructions+=4;goto B720396;
case 0x720398:c.instructions+=3;goto B720398;
case 0x72039a:c.instructions+=2;goto B72039a;
case 0x72039d:c.instructions+=1;goto B72039d;
case 0x72039f:goto L72039f;
case 0x7203a1:c.instructions+=4;goto B7203a1;
case 0x7203a2:c.instructions+=3;goto B7203a2;
case 0x7203a8:c.instructions+=2;goto B7203a8;
case 0x7203ab:c.instructions+=1;goto B7203ab;
case 0x7203ac:goto L7203ac;
case 0x7203b2:c.instructions+=2;goto B7203b2;
case 0x7203b4:c.instructions+=1;goto B7203b4;
case 0x7203b6:goto L7203b6;
case 0x7203ba:c.instructions+=2;goto B7203ba;
case 0x7203bc:c.instructions+=1;goto B7203bc;
case 0x7203bd:goto L7203bd;
case 0x7203c1:c.instructions+=5;goto B7203c1;
case 0x7203c4:c.instructions+=4;goto B7203c4;
case 0x7203c6:c.instructions+=3;goto B7203c6;
case 0x7203c8:c.instructions+=2;goto B7203c8;
case 0x7203cb:c.instructions+=1;goto B7203cb;
case 0x7203cd:goto L7203cd;
case 0x7203ce:goto L7203ce;
case 0x7203d2:c.instructions+=1;goto B7203d2;
case 0x7203d4:goto L7203d4;
case 0x7203d8:c.instructions+=3;goto B7203d8;
case 0x7203d9:c.instructions+=2;goto B7203d9;
case 0x7203db:c.instructions+=1;goto B7203db;
case 0x7203dd:goto L7203dd;
case 0x7203df:goto L7203df;
case 0x7203e3:c.instructions+=1;goto B7203e3;
case 0x7203e6:goto L7203e6;
case 0x7203e7:goto L7203e7;
case 0x7203ea:c.instructions+=1;goto B7203ea;
case 0x7203eb:goto L7203eb;
case 0x7203ef:c.instructions+=4;goto B7203ef;
case 0x7203f2:c.instructions+=3;goto B7203f2;
case 0x7203f4:c.instructions+=2;goto B7203f4;
case 0x7203f6:c.instructions+=1;goto B7203f6;
case 0x7203f8:goto L7203f8;
case 0x7203fb:goto L7203fb;
case 0x7203fe:c.instructions+=1;goto B7203fe;
case 0x720400:goto L720400;
case 0x720401:c.instructions+=3;goto B720401;
case 0x720404:c.instructions+=2;goto B720404;
case 0x720406:c.instructions+=1;goto B720406;
case 0x720408:goto L720408;
case 0x72040a:c.instructions+=1;goto B72040a;
case 0x72040b:goto L72040b;
case 0x72040d:c.instructions+=2;goto B72040d;
case 0x72040e:c.instructions+=1;goto B72040e;
case 0x72040f:goto L72040f;
case 0x720413:c.instructions+=10;goto B720413;
case 0x720417:c.instructions+=9;goto B720417;
case 0x72041b:c.instructions+=8;goto B72041b;
case 0x72041e:c.instructions+=7;goto B72041e;
case 0x720422:c.instructions+=6;goto B720422;
case 0x720425:c.instructions+=5;goto B720425;
case 0x720427:c.instructions+=4;goto B720427;
case 0x72042a:c.instructions+=3;goto B72042a;
case 0x720430:c.instructions+=2;goto B720430;
case 0x720433:c.instructions+=1;goto B720433;
case 0x720434:goto L720434;
case 0x720435:c.instructions+=9;goto B720435;
case 0x720437:c.instructions+=8;goto B720437;
case 0x720438:c.instructions+=7;goto B720438;
case 0x72043b:c.instructions+=6;goto B72043b;
case 0x72043c:c.instructions+=5;goto B72043c;
case 0x72043f:c.instructions+=4;goto B72043f;
case 0x720441:c.instructions+=3;goto B720441;
case 0x720443:c.instructions+=2;goto B720443;
case 0x720446:c.instructions+=1;goto B720446;
case 0x720448:goto L720448;
case 0x72044c:c.instructions+=1;goto B72044c;
case 0x72044e:goto L72044e;
case 0x720451:c.instructions+=2;goto B720451;
case 0x720455:c.instructions+=1;goto B720455;
case 0x720458:goto L720458;
case 0x720459:c.instructions+=1;goto B720459;
case 0x72045e:goto L72045e;
case 0x72045f:c.instructions+=1;goto B72045f;
case 0x720461:goto L720461;
case 0x720464:c.instructions+=1;goto B720464;
case 0x720466:goto L720466;
case 0x720469:c.instructions+=1;goto B720469;
case 0x72046b:goto L72046b;
case 0x72046f:c.instructions+=2;goto B72046f;
case 0x720473:c.instructions+=1;goto B720473;
case 0x720475:goto L720475;
case 0x720478:c.instructions+=2;goto B720478;
case 0x72047b:c.instructions+=1;goto B72047b;
case 0x72047d:goto L72047d;
case 0x720480:c.instructions+=2;goto B720480;
case 0x720481:c.instructions+=1;goto B720481;
case 0x720483:goto L720483;
case 0x720486:c.instructions+=1;goto B720486;
case 0x720488:goto L720488;
case 0x72048b:c.instructions+=3;goto B72048b;
case 0x72048e:c.instructions+=2;goto B72048e;
case 0x720490:c.instructions+=1;goto B720490;
case 0x720492:goto L720492;
case 0x720495:c.instructions+=6;goto B720495;
case 0x72049b:c.instructions+=5;goto B72049b;
case 0x72049e:c.instructions+=4;goto B72049e;
case 0x7204a4:c.instructions+=3;goto B7204a4;
case 0x7204a6:c.instructions+=2;goto B7204a6;
case 0x7204a9:c.instructions+=1;goto B7204a9;
case 0x7204ab:goto L7204ab;
case 0x7204ae:c.instructions+=7;goto B7204ae;
case 0x7204b2:c.instructions+=6;goto B7204b2;
case 0x7204b4:c.instructions+=5;goto B7204b4;
case 0x7204b6:c.instructions+=4;goto B7204b6;
case 0x7204b9:c.instructions+=3;goto B7204b9;
case 0x7204bb:c.instructions+=2;goto B7204bb;
case 0x7204be:c.instructions+=1;goto B7204be;
case 0x7204c0:goto L7204c0;
case 0x7204c1:c.instructions+=1;goto B7204c1;
case 0x7204c6:goto L7204c6;
case 0x7204c7:c.instructions+=1;goto B7204c7;
case 0x7204c9:goto L7204c9;
case 0x7204cc:c.instructions+=2;goto B7204cc;
case 0x7204cf:c.instructions+=1;goto B7204cf;
case 0x7204d1:goto L7204d1;
case 0x7204d4:c.instructions+=1;goto B7204d4;
case 0x7204d6:goto L7204d6;
case 0x7204d8:goto L7204d8;
case 0x7204db:goto L7204db;
case 0x7204dc:goto L7204dc;
case 0x7204de:c.instructions+=9;goto B7204de;
case 0x7204e1:c.instructions+=8;goto B7204e1;
case 0x7204e4:c.instructions+=7;goto B7204e4;
case 0x7204e7:c.instructions+=6;goto B7204e7;
case 0x7204ea:c.instructions+=5;goto B7204ea;
case 0x7204ed:c.instructions+=4;goto B7204ed;
case 0x7204f0:c.instructions+=3;goto B7204f0;
case 0x7204f1:c.instructions+=2;goto B7204f1;
case 0x7204f2:c.instructions+=1;goto B7204f2;
case 0x7204f3:goto L7204f3;
case 0x7204f4:c.instructions+=8;goto B7204f4;
case 0x7204f6:c.instructions+=7;goto B7204f6;
case 0x7204f7:c.instructions+=6;goto B7204f7;
case 0x7204f8:c.instructions+=5;goto B7204f8;
case 0x7204f9:c.instructions+=4;goto B7204f9;
case 0x7204fc:c.instructions+=3;goto B7204fc;
case 0x7204ff:c.instructions+=2;goto B7204ff;
case 0x720502:c.instructions+=1;goto B720502;
case 0x720508:goto L720508;
case 0x72050a:c.instructions+=6;goto B72050a;
case 0x72050d:c.instructions+=5;goto B72050d;
case 0x720510:c.instructions+=4;goto B720510;
case 0x720511:c.instructions+=3;goto B720511;
case 0x720514:c.instructions+=2;goto B720514;
case 0x720516:c.instructions+=1;goto B720516;
case 0x720518:goto L720518;
case 0x72051a:c.instructions+=1;goto B72051a;
case 0x72051c:goto L72051c;
case 0x72051e:c.instructions+=1;goto B72051e;
case 0x720520:goto L720520;
case 0x720522:goto L720522;
case 0x720528:c.instructions+=7;goto B720528;
case 0x72052a:c.instructions+=6;goto B72052a;
case 0x72052d:c.instructions+=5;goto B72052d;
case 0x720530:c.instructions+=4;goto B720530;
case 0x720532:c.instructions+=3;goto B720532;
case 0x720534:c.instructions+=2;goto B720534;
case 0x720537:c.instructions+=1;goto B720537;
case 0x720539:goto L720539;
case 0x72053b:c.instructions+=2;goto B72053b;
case 0x72053d:c.instructions+=1;goto B72053d;
case 0x72053f:goto L72053f;
case 0x720544:c.instructions+=1;goto B720544;
case 0x720549:goto L720549;
case 0x72054b:c.instructions+=1;goto B72054b;
case 0x72054d:goto L72054d;
case 0x720552:c.instructions+=1;goto B720552;
case 0x720557:goto L720557;
case 0x72055b:c.instructions+=1;goto B72055b;
case 0x720560:goto L720560;
case 0x720563:c.instructions+=13;goto B720563;
case 0x720566:c.instructions+=12;goto B720566;
case 0x720569:c.instructions+=11;goto B720569;
case 0x72056f:c.instructions+=10;goto B72056f;
case 0x720572:c.instructions+=9;goto B720572;
case 0x720575:c.instructions+=8;goto B720575;
case 0x720578:c.instructions+=7;goto B720578;
case 0x72057b:c.instructions+=6;goto B72057b;
case 0x72057e:c.instructions+=5;goto B72057e;
case 0x720582:c.instructions+=4;goto B720582;
case 0x720585:c.instructions+=3;goto B720585;
case 0x720587:c.instructions+=2;goto B720587;
case 0x72058a:c.instructions+=1;goto B72058a;
case 0x72058c:goto L72058c;
case 0x72058f:goto L72058f;
case 0x720591:c.instructions+=2;goto B720591;
case 0x720594:c.instructions+=1;goto B720594;
case 0x720596:goto L720596;
case 0x72059b:c.instructions+=6;goto B72059b;
case 0x7205a0:c.instructions+=5;goto B7205a0;
case 0x7205a3:c.instructions+=4;goto B7205a3;
case 0x7205a6:c.instructions+=3;goto B7205a6;
case 0x7205a9:c.instructions+=2;goto B7205a9;
case 0x7205ac:c.instructions+=1;goto B7205ac;
case 0x7205ae:goto L7205ae;
case 0x7205b1:c.instructions+=1;goto B7205b1;
case 0x7205b3:goto L7205b3;
case 0x7205b8:c.instructions+=6;goto B7205b8;
case 0x7205bd:c.instructions+=5;goto B7205bd;
case 0x7205c0:c.instructions+=4;goto B7205c0;
case 0x7205c3:c.instructions+=3;goto B7205c3;
case 0x7205c6:c.instructions+=2;goto B7205c6;
case 0x7205c9:c.instructions+=1;goto B7205c9;
case 0x7205cb:goto L7205cb;
case 0x7205cf:c.instructions+=1;goto B7205cf;
case 0x7205d3:goto L7205d3;
case 0x7205d5:c.instructions+=8;goto B7205d5;
case 0x7205d7:c.instructions+=7;goto B7205d7;
case 0x7205d9:c.instructions+=6;goto B7205d9;
case 0x7205dc:c.instructions+=5;goto B7205dc;
case 0x7205de:c.instructions+=4;goto B7205de;
case 0x7205e0:c.instructions+=3;goto B7205e0;
case 0x7205e3:c.instructions+=2;goto B7205e3;
case 0x7205e6:c.instructions+=1;goto B7205e6;
case 0x7205e9:goto L7205e9;
case 0x7205ec:c.instructions+=1;goto B7205ec;
case 0x7205ed:goto L7205ed;
case 0x7205f0:c.instructions+=3;goto B7205f0;
case 0x7205f1:c.instructions+=2;goto B7205f1;
case 0x7205f2:c.instructions+=1;goto B7205f2;
case 0x7205f3:goto L7205f3;
case 0x7205f4:c.instructions+=10;goto B7205f4;
case 0x7205f6:c.instructions+=9;goto B7205f6;
case 0x7205f7:c.instructions+=8;goto B7205f7;
case 0x7205fa:c.instructions+=7;goto B7205fa;
case 0x7205fd:c.instructions+=6;goto B7205fd;
case 0x7205ff:c.instructions+=5;goto B7205ff;
case 0x720602:c.instructions+=4;goto B720602;
case 0x720603:c.instructions+=3;goto B720603;
case 0x720605:c.instructions+=2;goto B720605;
case 0x720608:c.instructions+=1;goto B720608;
case 0x72060a:goto L72060a;
case 0x72060d:c.instructions+=2;goto B72060d;
case 0x720610:c.instructions+=1;goto B720610;
case 0x720612:goto L720612;
case 0x720615:goto L720615;
case 0x720617:c.instructions+=8;goto B720617;
case 0x72061d:c.instructions+=7;goto B72061d;
case 0x720620:c.instructions+=6;goto B720620;
case 0x720623:c.instructions+=5;goto B720623;
case 0x720626:c.instructions+=4;goto B720626;
case 0x72062a:c.instructions+=3;goto B72062a;
case 0x72062d:c.instructions+=2;goto B72062d;
case 0x72062f:c.instructions+=1;goto B72062f;
case 0x720631:goto L720631;
case 0x720634:goto L720634;
case 0x720638:c.instructions+=2;goto B720638;
case 0x72063b:c.instructions+=1;goto B72063b;
case 0x72063f:goto L72063f;
case 0x720641:c.instructions+=5;goto B720641;
case 0x720645:c.instructions+=4;goto B720645;
case 0x720647:c.instructions+=3;goto B720647;
case 0x72064b:c.instructions+=2;goto B72064b;
case 0x72064e:c.instructions+=1;goto B72064e;
case 0x720650:goto L720650;
case 0x720652:c.instructions+=1;goto B720652;
case 0x720656:goto L720656;
case 0x72065a:c.instructions+=2;goto B72065a;
case 0x72065b:c.instructions+=1;goto B72065b;
case 0x72065d:goto L72065d;
case 0x720662:goto L720662;
case 0x720664:c.instructions+=11;goto B720664;
case 0x720668:c.instructions+=10;goto B720668;
case 0x72066c:c.instructions+=9;goto B72066c;
case 0x72066e:c.instructions+=8;goto B72066e;
case 0x720672:c.instructions+=7;goto B720672;
case 0x720675:c.instructions+=6;goto B720675;
case 0x720679:c.instructions+=5;goto B720679;
case 0x72067d:c.instructions+=4;goto B72067d;
case 0x72067e:c.instructions+=3;goto B72067e;
case 0x720682:c.instructions+=2;goto B720682;
case 0x720683:c.instructions+=1;goto B720683;
case 0x720684:goto L720684;
case 0x720688:c.instructions+=3;goto B720688;
case 0x72068b:c.instructions+=2;goto B72068b;
case 0x72068d:c.instructions+=1;goto B72068d;
case 0x72068f:goto L72068f;
case 0x720692:c.instructions+=2;goto B720692;
case 0x720694:c.instructions+=1;goto B720694;
case 0x720696:goto L720696;
case 0x72069a:c.instructions+=1;goto B72069a;
case 0x72069b:goto L72069b;
case 0x72069d:c.instructions+=1;goto B72069d;
case 0x72069e:goto L72069e;
case 0x7206a2:c.instructions+=5;goto B7206a2;
case 0x7206a6:c.instructions+=4;goto B7206a6;
case 0x7206ab:c.instructions+=3;goto B7206ab;
case 0x7206ae:c.instructions+=2;goto B7206ae;
case 0x7206b0:c.instructions+=1;goto B7206b0;
case 0x7206b2:goto L7206b2;
case 0x7206b5:c.instructions+=2;goto B7206b5;
case 0x7206b7:c.instructions+=1;goto B7206b7;
case 0x7206b9:goto L7206b9;
case 0x7206bc:c.instructions+=3;goto B7206bc;
case 0x7206c0:c.instructions+=2;goto B7206c0;
case 0x7206c4:c.instructions+=1;goto B7206c4;
case 0x7206c8:goto L7206c8;
case 0x7206cb:c.instructions+=1;goto B7206cb;
case 0x7206cc:goto L7206cc;
case 0x7206d0:c.instructions+=4;goto B7206d0;
case 0x7206d3:c.instructions+=3;goto B7206d3;
case 0x7206d6:c.instructions+=2;goto B7206d6;
case 0x7206d9:c.instructions+=1;goto B7206d9;
case 0x7206db:goto L7206db;
case 0x7206dc:c.instructions+=2;goto B7206dc;
case 0x7206df:c.instructions+=1;goto B7206df;
case 0x7206e2:goto L7206e2;
case 0x7206e4:c.instructions+=2;goto B7206e4;
case 0x7206e6:c.instructions+=1;goto B7206e6;
case 0x7206e8:goto L7206e8;
case 0x7206ea:goto L7206ea;
case 0x7206ed:c.instructions+=2;goto B7206ed;
case 0x7206ee:c.instructions+=1;goto B7206ee;
case 0x7206f0:goto L7206f0;
case 0x7206f1:goto L7206f1;
case 0x7206f2:goto L7206f2;
case 0x7206f6:c.instructions+=4;goto B7206f6;
case 0x7206f8:c.instructions+=3;goto B7206f8;
case 0x7206fb:c.instructions+=2;goto B7206fb;
case 0x7206fd:c.instructions+=1;goto B7206fd;
case 0x7206ff:goto L7206ff;
case 0x720701:goto L720701;
case 0x720702:goto L720702;
case 0x720706:c.instructions+=4;goto B720706;
case 0x720709:c.instructions+=3;goto B720709;
case 0x72070c:c.instructions+=2;goto B72070c;
case 0x72070f:c.instructions+=1;goto B72070f;
case 0x720711:goto L720711;
case 0x720712:c.instructions+=2;goto B720712;
case 0x720715:c.instructions+=1;goto B720715;
case 0x720718:goto L720718;
case 0x72071a:c.instructions+=2;goto B72071a;
case 0x72071c:c.instructions+=1;goto B72071c;
case 0x72071e:goto L72071e;
case 0x720720:goto L720720;
case 0x720723:c.instructions+=2;goto B720723;
case 0x720724:c.instructions+=1;goto B720724;
case 0x720726:goto L720726;
case 0x720727:goto L720727;
case 0x720728:goto L720728;
case 0x72072c:c.instructions+=4;goto B72072c;
case 0x72072e:c.instructions+=3;goto B72072e;
case 0x720731:c.instructions+=2;goto B720731;
case 0x720733:c.instructions+=1;goto B720733;
case 0x720735:goto L720735;
case 0x720737:goto L720737;
case 0x720738:goto L720738;
case 0x720739:c.instructions+=7;goto B720739;
case 0x72073b:c.instructions+=6;goto B72073b;
case 0x72073c:c.instructions+=5;goto B72073c;
case 0x72073f:c.instructions+=4;goto B72073f;
case 0x720742:c.instructions+=3;goto B720742;
case 0x720745:c.instructions+=2;goto B720745;
case 0x720748:c.instructions+=1;goto B720748;
case 0x72074a:goto L72074a;
case 0x72074d:c.instructions+=1;goto B72074d;
case 0x72074e:goto L72074e;
case 0x720750:c.instructions+=3;goto B720750;
case 0x720753:c.instructions+=2;goto B720753;
case 0x720754:c.instructions+=1;goto B720754;
case 0x720756:goto L720756;
case 0x720759:c.instructions+=6;goto B720759;
case 0x72075c:c.instructions+=5;goto B72075c;
case 0x72075f:c.instructions+=4;goto B72075f;
case 0x720762:c.instructions+=3;goto B720762;
case 0x720765:c.instructions+=2;goto B720765;
case 0x720766:c.instructions+=1;goto B720766;
case 0x720767:goto L720767;
case 0x720768:c.instructions+=12;goto B720768;
case 0x72076a:c.instructions+=11;goto B72076a;
case 0x72076b:c.instructions+=10;goto B72076b;
case 0x72076e:c.instructions+=9;goto B72076e;
case 0x720771:c.instructions+=8;goto B720771;
case 0x720774:c.instructions+=7;goto B720774;
case 0x720776:c.instructions+=6;goto B720776;
case 0x720779:c.instructions+=5;goto B720779;
case 0x72077c:c.instructions+=4;goto B72077c;
case 0x72077f:c.instructions+=3;goto B72077f;
case 0x720782:c.instructions+=2;goto B720782;
case 0x720783:c.instructions+=1;goto B720783;
case 0x720784:goto L720784;
case 0x720788:c.instructions+=4;goto B720788;
case 0x72078b:c.instructions+=3;goto B72078b;
case 0x72078e:c.instructions+=2;goto B72078e;
case 0x720791:c.instructions+=1;goto B720791;
case 0x720793:goto L720793;
case 0x720796:c.instructions+=1;goto B720796;
case 0x720797:goto L720797;
case 0x720799:c.instructions+=3;goto B720799;
case 0x72079c:c.instructions+=2;goto B72079c;
case 0x72079d:c.instructions+=1;goto B72079d;
case 0x72079f:goto L72079f;
case 0x7207a0:goto L7207a0;
case 0x7207a4:c.instructions+=3;goto B7207a4;
case 0x7207a7:c.instructions+=2;goto B7207a7;
case 0x7207a9:c.instructions+=1;goto B7207a9;
case 0x7207aa:goto L7207aa;
case 0x7207ae:c.instructions+=3;goto B7207ae;
case 0x7207b0:c.instructions+=2;goto B7207b0;
case 0x7207b3:c.instructions+=1;goto B7207b3;
case 0x7207b4:goto L7207b4;
case 0x7207b8:c.instructions+=3;goto B7207b8;
case 0x7207bb:c.instructions+=2;goto B7207bb;
case 0x7207be:c.instructions+=1;goto B7207be;
case 0x7207bf:goto L7207bf;
case 0x7207c3:c.instructions+=3;goto B7207c3;
case 0x7207c6:c.instructions+=2;goto B7207c6;
case 0x7207c8:c.instructions+=1;goto B7207c8;
case 0x7207ca:goto L7207ca;
case 0x7207cc:c.instructions+=3;goto B7207cc;
case 0x7207cd:c.instructions+=2;goto B7207cd;
case 0x7207cf:c.instructions+=1;goto B7207cf;
case 0x7207d0:goto L7207d0;
case 0x7207d2:c.instructions+=1;goto B7207d2;
case 0x7207d3:goto L7207d3;
case 0x7207d7:c.instructions+=3;goto B7207d7;
case 0x7207da:c.instructions+=2;goto B7207da;
case 0x7207dc:c.instructions+=1;goto B7207dc;
case 0x7207de:goto L7207de;
case 0x7207e0:c.instructions+=4;goto B7207e0;
case 0x7207e1:c.instructions+=3;goto B7207e1;
case 0x7207e3:c.instructions+=2;goto B7207e3;
case 0x7207e5:c.instructions+=1;goto B7207e5;
case 0x7207e6:goto L7207e6;
case 0x7207e8:c.instructions+=1;goto B7207e8;
case 0x7207e9:goto L7207e9;
case 0x7207ed:c.instructions+=2;goto B7207ed;
case 0x7207ef:c.instructions+=1;goto B7207ef;
case 0x7207f1:goto L7207f1;
case 0x7207f3:c.instructions+=1;goto B7207f3;
case 0x7207f5:goto L7207f5;
case 0x7207fa:c.instructions+=2;goto B7207fa;
case 0x7207fc:c.instructions+=1;goto B7207fc;
case 0x7207fe:goto L7207fe;
case 0x720800:goto L720800;
case 0x720804:c.instructions+=7;goto B720804;
case 0x720807:c.instructions+=6;goto B720807;
case 0x720808:c.instructions+=5;goto B720808;
case 0x72080e:c.instructions+=4;goto B72080e;
case 0x720811:c.instructions+=3;goto B720811;
case 0x720812:c.instructions+=2;goto B720812;
case 0x72081a:c.instructions+=1;goto B72081a;
case 0x72081f:goto L72081f;
case 0x720820:c.instructions+=2;goto B720820;
case 0x720821:c.instructions+=1;goto B720821;
case 0x720822:goto L720822;
case 0x720826:c.instructions+=3;goto B720826;
case 0x72082b:c.instructions+=2;goto B72082b;
case 0x72082d:c.instructions+=1;goto B72082d;
case 0x72082f:goto L72082f;
case 0x720834:c.instructions+=2;goto B720834;
case 0x720836:c.instructions+=1;goto B720836;
case 0x720838:goto L720838;
case 0x72083a:goto L72083a;
case 0x72083e:c.instructions+=8;goto B72083e;
case 0x72083f:c.instructions+=7;goto B72083f;
case 0x720845:c.instructions+=6;goto B720845;
case 0x720848:c.instructions+=5;goto B720848;
case 0x720849:c.instructions+=4;goto B720849;
case 0x72084c:c.instructions+=3;goto B72084c;
case 0x72084d:c.instructions+=2;goto B72084d;
case 0x720852:c.instructions+=1;goto B720852;
case 0x720857:goto L720857;
case 0x720858:c.instructions+=3;goto B720858;
case 0x720859:c.instructions+=2;goto B720859;
case 0x72085a:c.instructions+=1;goto B72085a;
case 0x72085b:goto L72085b;
case 0x72085c:c.instructions+=10;goto B72085c;
case 0x72085e:c.instructions+=9;goto B72085e;
case 0x720861:c.instructions+=8;goto B720861;
case 0x720862:c.instructions+=7;goto B720862;
case 0x720863:c.instructions+=6;goto B720863;
case 0x720866:c.instructions+=5;goto B720866;
case 0x720869:c.instructions+=4;goto B720869;
case 0x72086f:c.instructions+=3;goto B72086f;
case 0x720871:c.instructions+=2;goto B720871;
case 0x720874:c.instructions+=1;goto B720874;
case 0x720876:goto L720876;
case 0x720879:c.instructions+=1;goto B720879;
case 0x72087b:goto L72087b;
case 0x720880:c.instructions+=2;goto B720880;
case 0x720883:c.instructions+=1;goto B720883;
case 0x720885:goto L720885;
case 0x720888:goto L720888;
case 0x72088b:c.instructions+=6;goto B72088b;
case 0x72088e:c.instructions+=5;goto B72088e;
case 0x720894:c.instructions+=4;goto B720894;
case 0x720897:c.instructions+=3;goto B720897;
case 0x72089d:c.instructions+=2;goto B72089d;
case 0x7208a0:c.instructions+=1;goto B7208a0;
case 0x7208a2:goto L7208a2;
case 0x7208a3:c.instructions+=1;goto B7208a3;
case 0x7208a6:goto L7208a6;
case 0x7208a9:c.instructions+=9;goto B7208a9;
case 0x7208ac:c.instructions+=8;goto B7208ac;
case 0x7208af:c.instructions+=7;goto B7208af;
case 0x7208b2:c.instructions+=6;goto B7208b2;
case 0x7208b8:c.instructions+=5;goto B7208b8;
case 0x7208b9:c.instructions+=4;goto B7208b9;
case 0x7208bc:c.instructions+=3;goto B7208bc;
case 0x7208bf:c.instructions+=2;goto B7208bf;
case 0x7208c2:c.instructions+=1;goto B7208c2;
case 0x7208c7:goto L7208c7;
case 0x7208cb:c.instructions+=6;goto B7208cb;
case 0x7208cc:c.instructions+=5;goto B7208cc;
case 0x7208cd:c.instructions+=4;goto B7208cd;
case 0x7208ce:c.instructions+=3;goto B7208ce;
case 0x7208d0:c.instructions+=2;goto B7208d0;
case 0x7208d1:c.instructions+=1;goto B7208d1;
case 0x7208d3:goto L7208d3;
case 0x7208d4:goto L7208d4;
case 0x7208d5:c.instructions+=3;goto B7208d5;
case 0x7208d6:c.instructions+=2;goto B7208d6;
case 0x7208d7:c.instructions+=1;goto B7208d7;
case 0x7208d8:goto L7208d8;
case 0x7208dc:c.instructions+=5;goto B7208dc;
case 0x7208df:c.instructions+=4;goto B7208df;
case 0x7208e2:c.instructions+=3;goto B7208e2;
case 0x7208e8:c.instructions+=2;goto B7208e8;
case 0x7208ec:c.instructions+=1;goto B7208ec;
case 0x7208ee:goto L7208ee;
case 0x7208f3:c.instructions+=3;goto B7208f3;
case 0x7208f4:c.instructions+=2;goto B7208f4;
case 0x7208f8:c.instructions+=1;goto B7208f8;
case 0x7208fd:goto L7208fd;
case 0x7208fe:goto L7208fe;
case 0x7208ff:goto L7208ff;
case 0x720903:c.instructions+=3;goto B720903;
case 0x720908:c.instructions+=2;goto B720908;
case 0x72090a:c.instructions+=1;goto B72090a;
case 0x72090c:goto L72090c;
case 0x720911:c.instructions+=2;goto B720911;
case 0x720913:c.instructions+=1;goto B720913;
case 0x720915:goto L720915;
case 0x720917:goto L720917;
case 0x72091b:c.instructions+=7;goto B72091b;
case 0x72091e:c.instructions+=6;goto B72091e;
case 0x72091f:c.instructions+=5;goto B72091f;
case 0x720925:c.instructions+=4;goto B720925;
case 0x720928:c.instructions+=3;goto B720928;
case 0x720929:c.instructions+=2;goto B720929;
case 0x72092e:c.instructions+=1;goto B72092e;
case 0x720933:goto L720933;
case 0x720934:c.instructions+=2;goto B720934;
case 0x720935:c.instructions+=1;goto B720935;
case 0x720936:goto L720936;
case 0x720937:c.instructions+=5;goto B720937;
case 0x720939:c.instructions+=4;goto B720939;
case 0x72093a:c.instructions+=3;goto B72093a;
case 0x72093d:c.instructions+=2;goto B72093d;
case 0x72093f:c.instructions+=1;goto B72093f;
case 0x720941:goto L720941;
case 0x720943:c.instructions+=1;goto B720943;
case 0x720945:goto L720945;
case 0x72094a:c.instructions+=2;goto B72094a;
case 0x72094c:c.instructions+=1;goto B72094c;
case 0x72094e:goto L72094e;
case 0x720950:goto L720950;
case 0x720953:c.instructions+=17;goto B720953;
case 0x720956:c.instructions+=16;goto B720956;
case 0x720959:c.instructions+=15;goto B720959;
case 0x72095b:c.instructions+=14;goto B72095b;
case 0x720961:c.instructions+=13;goto B720961;
case 0x720964:c.instructions+=12;goto B720964;
case 0x720968:c.instructions+=11;goto B720968;
case 0x72096e:c.instructions+=10;goto B72096e;
case 0x720970:c.instructions+=9;goto B720970;
case 0x720974:c.instructions+=8;goto B720974;
case 0x720977:c.instructions+=7;goto B720977;
case 0x72097a:c.instructions+=6;goto B72097a;
case 0x72097c:c.instructions+=5;goto B72097c;
case 0x72097d:c.instructions+=4;goto B72097d;
case 0x720980:c.instructions+=3;goto B720980;
case 0x720986:c.instructions+=2;goto B720986;
case 0x720988:c.instructions+=1;goto B720988;
case 0x72098d:goto L72098d;
case 0x72098e:c.instructions+=4;goto B72098e;
case 0x72098f:c.instructions+=3;goto B72098f;
case 0x720990:c.instructions+=2;goto B720990;
case 0x720991:c.instructions+=1;goto B720991;
case 0x720992:goto L720992;
case 0x720996:c.instructions+=2;goto B720996;
case 0x720998:c.instructions+=1;goto B720998;
case 0x72099a:goto L72099a;
case 0x72099c:c.instructions+=1;goto B72099c;
case 0x72099e:goto L72099e;
case 0x7209a3:c.instructions+=2;goto B7209a3;
case 0x7209a5:c.instructions+=1;goto B7209a5;
case 0x7209a7:goto L7209a7;
case 0x7209a9:goto L7209a9;
case 0x7209aa:c.instructions+=2;goto B7209aa;
case 0x7209ae:c.instructions+=1;goto B7209ae;
case 0x7209b3:goto L7209b3;
case 0x7209b4:c.instructions+=2;goto B7209b4;
case 0x7209b5:c.instructions+=1;goto B7209b5;
case 0x7209b6:goto L7209b6;
case 0x7209ba:c.instructions+=2;goto B7209ba;
case 0x7209bc:c.instructions+=1;goto B7209bc;
case 0x7209be:goto L7209be;
case 0x7209c0:c.instructions+=1;goto B7209c0;
case 0x7209c2:goto L7209c2;
case 0x7209c7:c.instructions+=2;goto B7209c7;
case 0x7209c9:c.instructions+=1;goto B7209c9;
case 0x7209cb:goto L7209cb;
case 0x7209cd:goto L7209cd;
case 0x7209ce:c.instructions+=2;goto B7209ce;
case 0x7209d2:c.instructions+=1;goto B7209d2;
case 0x7209d7:goto L7209d7;
case 0x7209d8:c.instructions+=2;goto B7209d8;
case 0x7209d9:c.instructions+=1;goto B7209d9;
case 0x7209da:goto L7209da;
case 0x7209db:c.instructions+=10;goto B7209db;
case 0x7209dd:c.instructions+=9;goto B7209dd;
case 0x7209e0:c.instructions+=8;goto B7209e0;
case 0x7209e1:c.instructions+=7;goto B7209e1;
case 0x7209e2:c.instructions+=6;goto B7209e2;
case 0x7209e5:c.instructions+=5;goto B7209e5;
case 0x7209e8:c.instructions+=4;goto B7209e8;
case 0x7209ee:c.instructions+=3;goto B7209ee;
case 0x7209f0:c.instructions+=2;goto B7209f0;
case 0x7209f3:c.instructions+=1;goto B7209f3;
case 0x7209f5:goto L7209f5;
case 0x7209f7:c.instructions+=1;goto B7209f7;
case 0x7209f9:goto L7209f9;
case 0x7209fe:c.instructions+=2;goto B7209fe;
case 0x720a01:c.instructions+=1;goto B720a01;
case 0x720a03:goto L720a03;
case 0x720a06:goto L720a06;
case 0x720a09:c.instructions+=4;goto B720a09;
case 0x720a0c:c.instructions+=3;goto B720a0c;
case 0x720a0e:c.instructions+=2;goto B720a0e;
case 0x720a11:c.instructions+=1;goto B720a11;
case 0x720a13:goto L720a13;
case 0x720a14:c.instructions+=1;goto B720a14;
case 0x720a17:goto L720a17;
case 0x720a1a:c.instructions+=6;goto B720a1a;
case 0x720a20:c.instructions+=5;goto B720a20;
case 0x720a23:c.instructions+=4;goto B720a23;
case 0x720a26:c.instructions+=3;goto B720a26;
case 0x720a27:c.instructions+=2;goto B720a27;
case 0x720a2b:c.instructions+=1;goto B720a2b;
case 0x720a30:goto L720a30;
case 0x720a33:c.instructions+=6;goto B720a33;
case 0x720a37:c.instructions+=5;goto B720a37;
case 0x720a38:c.instructions+=4;goto B720a38;
case 0x720a39:c.instructions+=3;goto B720a39;
case 0x720a3c:c.instructions+=2;goto B720a3c;
case 0x720a3d:c.instructions+=1;goto B720a3d;
case 0x720a3f:goto L720a3f;
case 0x720a40:goto L720a40;
case 0x720a41:c.instructions+=3;goto B720a41;
case 0x720a42:c.instructions+=2;goto B720a42;
case 0x720a43:c.instructions+=1;goto B720a43;
case 0x720a44:goto L720a44;
case 0x720a46:c.instructions+=2;goto B720a46;
case 0x720a4a:c.instructions+=1;goto B720a4a;
case 0x720a4c:goto L720a4c;
case 0x720a51:c.instructions+=2;goto B720a51;
case 0x720a55:c.instructions+=1;goto B720a55;
case 0x720a57:goto L720a57;
case 0x720a5b:goto L720a5b;
case 0x720a5f:c.instructions+=2;goto B720a5f;
case 0x720a63:c.instructions+=1;goto B720a63;
case 0x720a64:goto L720a64;
case 0x720a68:c.instructions+=3;goto B720a68;
case 0x720a6d:c.instructions+=2;goto B720a6d;
case 0x720a6f:c.instructions+=1;goto B720a6f;
case 0x720a71:goto L720a71;
case 0x720a76:c.instructions+=2;goto B720a76;
case 0x720a78:c.instructions+=1;goto B720a78;
case 0x720a7a:goto L720a7a;
case 0x720a7c:goto L720a7c;
case 0x720a80:c.instructions+=2;goto B720a80;
case 0x720a84:c.instructions+=1;goto B720a84;
case 0x720a85:goto L720a85;
case 0x720a87:c.instructions+=2;goto B720a87;
case 0x720a8b:c.instructions+=1;goto B720a8b;
case 0x720a8d:goto L720a8d;
case 0x720a92:c.instructions+=2;goto B720a92;
case 0x720a96:c.instructions+=1;goto B720a96;
case 0x720a98:goto L720a98;
case 0x720a9c:goto L720a9c;
case 0x720aa0:c.instructions+=3;goto B720aa0;
case 0x720aa3:c.instructions+=2;goto B720aa3;
case 0x720aa5:c.instructions+=1;goto B720aa5;
case 0x720aa6:goto L720aa6;
case 0x720aab:c.instructions+=3;goto B720aab;
case 0x720aaf:c.instructions+=2;goto B720aaf;
case 0x720ab3:c.instructions+=1;goto B720ab3;
case 0x720ab4:goto L720ab4;
case 0x720ab9:c.instructions+=2;goto B720ab9;
case 0x720abd:c.instructions+=1;goto B720abd;
case 0x720abf:goto L720abf;
case 0x720ac4:c.instructions+=2;goto B720ac4;
case 0x720ac8:c.instructions+=1;goto B720ac8;
case 0x720aca:goto L720aca;
case 0x720ace:goto L720ace;
case 0x720ad2:c.instructions+=2;goto B720ad2;
case 0x720ad6:c.instructions+=1;goto B720ad6;
case 0x720ad7:goto L720ad7;
case 0x720ad9:c.instructions+=2;goto B720ad9;
case 0x720add:c.instructions+=1;goto B720add;
case 0x720adf:goto L720adf;
case 0x720ae4:c.instructions+=2;goto B720ae4;
case 0x720ae8:c.instructions+=1;goto B720ae8;
case 0x720aea:goto L720aea;
case 0x720aee:goto L720aee;
case 0x720af2:c.instructions+=3;goto B720af2;
case 0x720af5:c.instructions+=2;goto B720af5;
case 0x720af8:c.instructions+=1;goto B720af8;
case 0x720af9:goto L720af9;
case 0x720afb:c.instructions+=2;goto B720afb;
case 0x720aff:c.instructions+=1;goto B720aff;
case 0x720b01:goto L720b01;
case 0x720b06:c.instructions+=2;goto B720b06;
case 0x720b0a:c.instructions+=1;goto B720b0a;
case 0x720b0c:goto L720b0c;
case 0x720b10:goto L720b10;
case 0x720b14:c.instructions+=2;goto B720b14;
case 0x720b18:c.instructions+=1;goto B720b18;
case 0x720b19:goto L720b19;
case 0x720b1b:c.instructions+=2;goto B720b1b;
case 0x720b1f:c.instructions+=1;goto B720b1f;
case 0x720b21:goto L720b21;
case 0x720b26:c.instructions+=2;goto B720b26;
case 0x720b2a:c.instructions+=1;goto B720b2a;
case 0x720b2c:goto L720b2c;
case 0x720b30:goto L720b30;
case 0x720b34:c.instructions+=2;goto B720b34;
case 0x720b38:c.instructions+=1;goto B720b38;
case 0x720b39:goto L720b39;
case 0x720b3b:c.instructions+=2;goto B720b3b;
case 0x720b3f:c.instructions+=1;goto B720b3f;
case 0x720b41:goto L720b41;
case 0x720b46:c.instructions+=2;goto B720b46;
case 0x720b4a:c.instructions+=1;goto B720b4a;
case 0x720b4c:goto L720b4c;
case 0x720b50:goto L720b50;
case 0x720b54:c.instructions+=3;goto B720b54;
case 0x720b57:c.instructions+=2;goto B720b57;
case 0x720b5a:c.instructions+=1;goto B720b5a;
case 0x720b5b:goto L720b5b;
case 0x720b5c:c.instructions+=8;goto B720b5c;
case 0x720b5e:c.instructions+=7;goto B720b5e;
case 0x720b61:c.instructions+=6;goto B720b61;
case 0x720b62:c.instructions+=5;goto B720b62;
case 0x720b63:c.instructions+=4;goto B720b63;
case 0x720b66:c.instructions+=3;goto B720b66;
case 0x720b67:c.instructions+=2;goto B720b67;
case 0x720b68:c.instructions+=1;goto B720b68;
case 0x720b6d:goto L720b6d;
case 0x720b70:c.instructions+=6;goto B720b70;
case 0x720b72:c.instructions+=5;goto B720b72;
case 0x720b75:c.instructions+=4;goto B720b75;
case 0x720b76:c.instructions+=3;goto B720b76;
case 0x720b79:c.instructions+=2;goto B720b79;
case 0x720b7c:c.instructions+=1;goto B720b7c;
case 0x720b7e:goto L720b7e;
case 0x720b81:c.instructions+=4;goto B720b81;
case 0x720b84:c.instructions+=3;goto B720b84;
case 0x720b87:c.instructions+=2;goto B720b87;
case 0x720b88:c.instructions+=1;goto B720b88;
case 0x720b8f:goto L720b8f;
case 0x720b92:c.instructions+=8;goto B720b92;
case 0x720b95:c.instructions+=7;goto B720b95;
case 0x720b99:c.instructions+=6;goto B720b99;
case 0x720b9c:c.instructions+=5;goto B720b9c;
case 0x720b9d:c.instructions+=4;goto B720b9d;
case 0x720b9f:c.instructions+=3;goto B720b9f;
case 0x720ba0:c.instructions+=2;goto B720ba0;
case 0x720ba1:c.instructions+=1;goto B720ba1;
case 0x720ba3:goto L720ba3;
case 0x720ba6:c.instructions+=6;goto B720ba6;
case 0x720ba7:c.instructions+=5;goto B720ba7;
case 0x720baa:c.instructions+=4;goto B720baa;
case 0x720bad:c.instructions+=3;goto B720bad;
case 0x720baf:c.instructions+=2;goto B720baf;
case 0x720bb2:c.instructions+=1;goto B720bb2;
case 0x720bb7:goto L720bb7;
case 0x720bba:c.instructions+=5;goto B720bba;
case 0x720bbb:c.instructions+=4;goto B720bbb;
case 0x720bbc:c.instructions+=3;goto B720bbc;
case 0x720bbd:c.instructions+=2;goto B720bbd;
case 0x720bbe:c.instructions+=1;goto B720bbe;
case 0x720bbf:goto L720bbf;
case 0x720bc3:c.instructions+=2;goto B720bc3;
case 0x720bc6:c.instructions+=1;goto B720bc6;
case 0x720bcb:goto L720bcb;
case 0x720bcc:c.instructions+=1;goto B720bcc;
case 0x720bcd:goto L720bcd;
case 0x720bcf:c.instructions+=2;goto B720bcf;
case 0x720bd3:c.instructions+=1;goto B720bd3;
case 0x720bd8:goto L720bd8;
case 0x720bda:c.instructions+=2;goto B720bda;
case 0x720bde:c.instructions+=1;goto B720bde;
case 0x720be3:goto L720be3;
case 0x720be6:c.instructions+=1;goto B720be6;
case 0x720be7:goto L720be7;
case 0x720be8:c.instructions+=10;goto B720be8;
case 0x720bea:c.instructions+=9;goto B720bea;
case 0x720beb:c.instructions+=8;goto B720beb;
case 0x720bec:c.instructions+=7;goto B720bec;
case 0x720bed:c.instructions+=6;goto B720bed;
case 0x720bf0:c.instructions+=5;goto B720bf0;
case 0x720bf1:c.instructions+=4;goto B720bf1;
case 0x720bf4:c.instructions+=3;goto B720bf4;
case 0x720bf9:c.instructions+=2;goto B720bf9;
case 0x720bfe:c.instructions+=1;goto B720bfe;
case 0x720c03:goto L720c03;
case 0x720c05:c.instructions+=3;goto B720c05;
case 0x720c06:c.instructions+=2;goto B720c06;
case 0x720c09:c.instructions+=1;goto B720c09;
case 0x720c0b:goto L720c0b;
case 0x720c0f:c.instructions+=3;goto B720c0f;
case 0x720c13:c.instructions+=2;goto B720c13;
case 0x720c16:c.instructions+=1;goto B720c16;
case 0x720c18:goto L720c18;
case 0x720c1a:c.instructions+=2;goto B720c1a;
case 0x720c1c:c.instructions+=1;goto B720c1c;
case 0x720c1e:goto L720c1e;
case 0x720c21:c.instructions+=2;goto B720c21;
case 0x720c24:c.instructions+=1;goto B720c24;
case 0x720c26:goto L720c26;
case 0x720c29:c.instructions+=1;goto B720c29;
case 0x720c2b:goto L720c2b;
case 0x720c2e:c.instructions+=1;goto B720c2e;
case 0x720c31:goto L720c31;
case 0x720c35:c.instructions+=4;goto B720c35;
case 0x720c38:c.instructions+=3;goto B720c38;
case 0x720c3b:c.instructions+=2;goto B720c3b;
case 0x720c3e:c.instructions+=1;goto B720c3e;
case 0x720c40:goto L720c40;
case 0x720c41:c.instructions+=2;goto B720c41;
case 0x720c44:c.instructions+=1;goto B720c44;
case 0x720c49:goto L720c49;
case 0x720c4a:c.instructions+=2;goto B720c4a;
case 0x720c4d:c.instructions+=1;goto B720c4d;
case 0x720c52:goto L720c52;
case 0x720c55:goto L720c55;
case 0x720c56:c.instructions+=4;goto B720c56;
case 0x720c57:c.instructions+=3;goto B720c57;
case 0x720c58:c.instructions+=2;goto B720c58;
case 0x720c59:c.instructions+=1;goto B720c59;
case 0x720c5a:goto L720c5a;
case 0x720c5e:c.instructions+=4;goto B720c5e;
case 0x720c60:c.instructions+=3;goto B720c60;
case 0x720c63:c.instructions+=2;goto B720c63;
case 0x720c67:c.instructions+=1;goto B720c67;
case 0x720c69:goto L720c69;
case 0x720c6d:c.instructions+=4;goto B720c6d;
case 0x720c70:c.instructions+=3;goto B720c70;
case 0x720c74:c.instructions+=2;goto B720c74;
case 0x720c77:c.instructions+=1;goto B720c77;
case 0x720c79:goto L720c79;
case 0x720c7b:c.instructions+=1;goto B720c7b;
case 0x720c7c:goto L720c7c;
case 0x720c7d:c.instructions+=9;goto B720c7d;
case 0x720c7f:c.instructions+=8;goto B720c7f;
case 0x720c80:c.instructions+=7;goto B720c80;
case 0x720c81:c.instructions+=6;goto B720c81;
case 0x720c82:c.instructions+=5;goto B720c82;
case 0x720c83:c.instructions+=4;goto B720c83;
case 0x720c86:c.instructions+=3;goto B720c86;
case 0x720c87:c.instructions+=2;goto B720c87;
case 0x720c8a:c.instructions+=1;goto B720c8a;
case 0x720c8f:goto L720c8f;
case 0x720c91:c.instructions+=4;goto B720c91;
case 0x720c93:c.instructions+=3;goto B720c93;
case 0x720c94:c.instructions+=2;goto B720c94;
case 0x720c97:c.instructions+=1;goto B720c97;
case 0x720c99:goto L720c99;
case 0x720c9a:c.instructions+=1;goto B720c9a;
case 0x720c9f:goto L720c9f;
case 0x720ca0:c.instructions+=1;goto B720ca0;
case 0x720ca5:goto L720ca5;
case 0x720ca9:c.instructions+=2;goto B720ca9;
case 0x720cad:c.instructions+=1;goto B720cad;
case 0x720caf:goto L720caf;
case 0x720cb2:c.instructions+=2;goto B720cb2;
case 0x720cb5:c.instructions+=1;goto B720cb5;
case 0x720cb7:goto L720cb7;
case 0x720cba:c.instructions+=3;goto B720cba;
case 0x720cbb:c.instructions+=2;goto B720cbb;
case 0x720cbc:c.instructions+=1;goto B720cbc;
case 0x720cc3:goto L720cc3;
case 0x720cc6:c.instructions+=3;goto B720cc6;
case 0x720cc7:c.instructions+=2;goto B720cc7;
case 0x720cc8:c.instructions+=1;goto B720cc8;
case 0x720ccb:goto L720ccb;
case 0x720ccf:c.instructions+=4;goto B720ccf;
case 0x720cd2:c.instructions+=3;goto B720cd2;
case 0x720cd5:c.instructions+=2;goto B720cd5;
case 0x720cd8:c.instructions+=1;goto B720cd8;
case 0x720cda:goto L720cda;
case 0x720cde:c.instructions+=1;goto B720cde;
case 0x720ce0:goto L720ce0;
case 0x720ce3:c.instructions+=9;goto B720ce3;
case 0x720ce6:c.instructions+=8;goto B720ce6;
case 0x720cec:c.instructions+=7;goto B720cec;
case 0x720ced:c.instructions+=6;goto B720ced;
case 0x720cf1:c.instructions+=5;goto B720cf1;
case 0x720cf4:c.instructions+=4;goto B720cf4;
case 0x720cf7:c.instructions+=3;goto B720cf7;
case 0x720cfd:c.instructions+=2;goto B720cfd;
case 0x720d00:c.instructions+=1;goto B720d00;
case 0x720d05:goto L720d05;
case 0x720d08:c.instructions+=10;goto B720d08;
case 0x720d0b:c.instructions+=9;goto B720d0b;
case 0x720d0c:c.instructions+=8;goto B720d0c;
case 0x720d0f:c.instructions+=7;goto B720d0f;
case 0x720d12:c.instructions+=6;goto B720d12;
case 0x720d15:c.instructions+=5;goto B720d15;
case 0x720d18:c.instructions+=4;goto B720d18;
case 0x720d1b:c.instructions+=3;goto B720d1b;
case 0x720d1e:c.instructions+=2;goto B720d1e;
case 0x720d22:c.instructions+=1;goto B720d22;
case 0x720d24:goto L720d24;
case 0x720d27:c.instructions+=5;goto B720d27;
case 0x720d29:c.instructions+=4;goto B720d29;
case 0x720d2b:c.instructions+=3;goto B720d2b;
case 0x720d2e:c.instructions+=2;goto B720d2e;
case 0x720d31:c.instructions+=1;goto B720d31;
case 0x720d33:goto L720d33;
case 0x720d39:goto L720d39;
case 0x720d3c:c.instructions+=6;goto B720d3c;
case 0x720d3f:c.instructions+=5;goto B720d3f;
case 0x720d42:c.instructions+=4;goto B720d42;
case 0x720d45:c.instructions+=3;goto B720d45;
case 0x720d48:c.instructions+=2;goto B720d48;
case 0x720d4a:c.instructions+=1;goto B720d4a;
case 0x720d4c:goto L720d4c;
case 0x720d4f:goto L720d4f;
case 0x720d51:c.instructions+=1;goto B720d51;
case 0x720d52:goto L720d52;
case 0x720d53:c.instructions+=4;goto B720d53;
case 0x720d54:c.instructions+=3;goto B720d54;
case 0x720d55:c.instructions+=2;goto B720d55;
case 0x720d56:c.instructions+=1;goto B720d56;
case 0x720d57:goto L720d57;
case 0x720d58:c.instructions+=5;goto B720d58;
case 0x720d59:c.instructions+=4;goto B720d59;
case 0x720d5d:c.instructions+=3;goto B720d5d;
case 0x720d60:c.instructions+=2;goto B720d60;
case 0x720d62:c.instructions+=1;goto B720d62;
case 0x720d64:goto L720d64;
case 0x720d66:c.instructions+=1;goto B720d66;
case 0x720d68:goto L720d68;
case 0x720d6b:c.instructions+=1;goto B720d6b;
case 0x720d6d:goto L720d6d;
case 0x720d6f:c.instructions+=2;goto B720d6f;
case 0x720d70:c.instructions+=1;goto B720d70;
case 0x720d72:goto L720d72;
case 0x720d74:goto L720d74;
case 0x720d77:c.instructions+=3;goto B720d77;
case 0x720d7a:c.instructions+=2;goto B720d7a;
case 0x720d7c:c.instructions+=1;goto B720d7c;
case 0x720d82:goto L720d82;
case 0x720d84:c.instructions+=2;goto B720d84;
case 0x720d87:c.instructions+=1;goto B720d87;
case 0x720d89:goto L720d89;
case 0x720d8b:c.instructions+=1;goto B720d8b;
case 0x720d91:goto L720d91;
case 0x720d94:c.instructions+=2;goto B720d94;
case 0x720d95:c.instructions+=1;goto B720d95;
case 0x720d9c:goto L720d9c;
case 0x720d9d:c.instructions+=1;goto B720d9d;
case 0x720da2:goto L720da2;
case 0x720da3:c.instructions+=1;goto B720da3;
case 0x720da5:goto L720da5;
case 0x720da8:c.instructions+=1;goto B720da8;
case 0x720daa:goto L720daa;
case 0x720dac:c.instructions+=1;goto B720dac;
case 0x720dae:goto L720dae;
case 0x720db1:c.instructions+=2;goto B720db1;
case 0x720db2:c.instructions+=1;goto B720db2;
case 0x720db9:goto L720db9;
case 0x720dbb:goto L720dbb;
case 0x720dbe:c.instructions+=1;goto B720dbe;
case 0x720dc0:goto L720dc0;
case 0x720dc4:c.instructions+=1;goto B720dc4;
case 0x720dc6:goto L720dc6;
case 0x720dc9:c.instructions+=4;goto B720dc9;
case 0x720dcc:c.instructions+=3;goto B720dcc;
case 0x720dce:c.instructions+=2;goto B720dce;
case 0x720dd0:c.instructions+=1;goto B720dd0;
case 0x720dd2:goto L720dd2;
case 0x720dd5:c.instructions+=1;goto B720dd5;
case 0x720dd7:goto L720dd7;
case 0x720dd9:c.instructions+=1;goto B720dd9;
case 0x720ddb:goto L720ddb;
case 0x720ddd:goto L720ddd;
case 0x720de0:c.instructions+=7;goto B720de0;
case 0x720de4:c.instructions+=6;goto B720de4;
case 0x720de6:c.instructions+=5;goto B720de6;
case 0x720de9:c.instructions+=4;goto B720de9;
case 0x720dea:c.instructions+=3;goto B720dea;
case 0x720ded:c.instructions+=2;goto B720ded;
case 0x720dee:c.instructions+=1;goto B720dee;
case 0x720df5:goto L720df5;
case 0x720df7:c.instructions+=4;goto B720df7;
case 0x720df8:c.instructions+=3;goto B720df8;
case 0x720df9:c.instructions+=2;goto B720df9;
case 0x720dfc:c.instructions+=1;goto B720dfc;
case 0x720dfe:goto L720dfe;
case 0x720dff:c.instructions+=1;goto B720dff;
case 0x720e04:goto L720e04;
case 0x720e06:goto L720e06;
case 0x720e08:c.instructions+=1;goto B720e08;
case 0x720e0a:goto L720e0a;
case 0x720e0d:c.instructions+=2;goto B720e0d;
case 0x720e10:c.instructions+=1;goto B720e10;
case 0x720e17:goto L720e17;
case 0x720e18:goto L720e18;
case 0x720e1b:c.instructions+=2;goto B720e1b;
case 0x720e1e:c.instructions+=1;goto B720e1e;
case 0x720e21:goto L720e21;
case 0x720e24:c.instructions+=1;goto B720e24;
case 0x720e26:goto L720e26;
case 0x720e29:c.instructions+=2;goto B720e29;
case 0x720e2b:c.instructions+=1;goto B720e2b;
case 0x720e2d:goto L720e2d;
case 0x720e30:c.instructions+=2;goto B720e30;
case 0x720e31:c.instructions+=1;goto B720e31;
case 0x720e38:goto L720e38;
case 0x720e39:c.instructions+=1;goto B720e39;
case 0x720e3b:goto L720e3b;
case 0x720e3f:c.instructions+=1;goto B720e3f;
case 0x720e41:goto L720e41;
case 0x720e43:goto L720e43;
case 0x720e44:c.instructions+=3;goto B720e44;
case 0x720e46:c.instructions+=2;goto B720e46;
case 0x720e47:c.instructions+=1;goto B720e47;
case 0x720e48:goto L720e48;
case 0x720e49:c.instructions+=8;goto B720e49;
case 0x720e4b:c.instructions+=7;goto B720e4b;
case 0x720e4e:c.instructions+=6;goto B720e4e;
case 0x720e4f:c.instructions+=5;goto B720e4f;
case 0x720e52:c.instructions+=4;goto B720e52;
case 0x720e55:c.instructions+=3;goto B720e55;
case 0x720e57:c.instructions+=2;goto B720e57;
case 0x720e5a:c.instructions+=1;goto B720e5a;
case 0x720e5c:goto L720e5c;
case 0x720e5e:c.instructions+=1;goto B720e5e;
case 0x720e63:goto L720e63;
case 0x720e66:c.instructions+=9;goto B720e66;
case 0x720e6c:c.instructions+=8;goto B720e6c;
case 0x720e6f:c.instructions+=7;goto B720e6f;
case 0x720e72:c.instructions+=6;goto B720e72;
case 0x720e75:c.instructions+=5;goto B720e75;
case 0x720e7b:c.instructions+=4;goto B720e7b;
case 0x720e7e:c.instructions+=3;goto B720e7e;
case 0x720e80:c.instructions+=2;goto B720e80;
case 0x720e83:c.instructions+=1;goto B720e83;
case 0x720e85:goto L720e85;
case 0x720e88:goto L720e88;
case 0x720e8a:c.instructions+=6;goto B720e8a;
case 0x720e8c:c.instructions+=5;goto B720e8c;
case 0x720e8e:c.instructions+=4;goto B720e8e;
case 0x720e90:c.instructions+=3;goto B720e90;
case 0x720e92:c.instructions+=2;goto B720e92;
case 0x720e95:c.instructions+=1;goto B720e95;
case 0x720e97:goto L720e97;
case 0x720e9a:goto L720e9a;
case 0x720e9c:c.instructions+=3;goto B720e9c;
case 0x720e9e:c.instructions+=2;goto B720e9e;
case 0x720ea0:c.instructions+=1;goto B720ea0;
case 0x720ea2:goto L720ea2;
case 0x720ea4:c.instructions+=7;goto B720ea4;
case 0x720ea7:c.instructions+=6;goto B720ea7;
case 0x720ead:c.instructions+=5;goto B720ead;
case 0x720eb0:c.instructions+=4;goto B720eb0;
case 0x720eb3:c.instructions+=3;goto B720eb3;
case 0x720eb6:c.instructions+=2;goto B720eb6;
case 0x720eb9:c.instructions+=1;goto B720eb9;
case 0x720ebe:goto L720ebe;
case 0x720ec1:c.instructions+=5;goto B720ec1;
case 0x720ec4:c.instructions+=4;goto B720ec4;
case 0x720ec5:c.instructions+=3;goto B720ec5;
case 0x720ec8:c.instructions+=2;goto B720ec8;
case 0x720ece:c.instructions+=1;goto B720ece;
case 0x720ed0:goto L720ed0;
case 0x720ed2:c.instructions+=1;goto B720ed2;
case 0x720ed4:goto L720ed4;
case 0x720ed7:c.instructions+=4;goto B720ed7;
case 0x720edd:c.instructions+=3;goto B720edd;
case 0x720edf:c.instructions+=2;goto B720edf;
case 0x720ee2:c.instructions+=1;goto B720ee2;
case 0x720ee4:goto L720ee4;
case 0x720ee7:c.instructions+=1;goto B720ee7;
case 0x720ee9:goto L720ee9;
case 0x720eeb:c.instructions+=2;goto B720eeb;
case 0x720eed:c.instructions+=1;goto B720eed;
case 0x720eef:goto L720eef;
case 0x720ef1:c.instructions+=1;goto B720ef1;
case 0x720ef3:goto L720ef3;
case 0x720ef6:c.instructions+=1;goto B720ef6;
case 0x720ef8:goto L720ef8;
case 0x720efb:c.instructions+=4;goto B720efb;
case 0x720f01:c.instructions+=3;goto B720f01;
case 0x720f03:c.instructions+=2;goto B720f03;
case 0x720f06:c.instructions+=1;goto B720f06;
case 0x720f08:goto L720f08;
case 0x720f0b:c.instructions+=2;goto B720f0b;
case 0x720f0d:c.instructions+=1;goto B720f0d;
case 0x720f0f:goto L720f0f;
case 0x720f11:c.instructions+=5;goto B720f11;
case 0x720f14:c.instructions+=4;goto B720f14;
case 0x720f16:c.instructions+=3;goto B720f16;
case 0x720f18:c.instructions+=2;goto B720f18;
case 0x720f1b:c.instructions+=1;goto B720f1b;
case 0x720f1d:goto L720f1d;
case 0x720f20:c.instructions+=5;goto B720f20;
case 0x720f23:c.instructions+=4;goto B720f23;
case 0x720f26:c.instructions+=3;goto B720f26;
case 0x720f29:c.instructions+=2;goto B720f29;
case 0x720f2c:c.instructions+=1;goto B720f2c;
case 0x720f2f:goto L720f2f;
case 0x720f30:c.instructions+=2;goto B720f30;
case 0x720f31:c.instructions+=1;goto B720f31;
case 0x720f32:goto L720f32;
case 0x720f33:c.instructions+=12;goto B720f33;
case 0x720f35:c.instructions+=11;goto B720f35;
case 0x720f36:c.instructions+=10;goto B720f36;
case 0x720f39:c.instructions+=9;goto B720f39;
case 0x720f3c:c.instructions+=8;goto B720f3c;
case 0x720f3f:c.instructions+=7;goto B720f3f;
case 0x720f42:c.instructions+=6;goto B720f42;
case 0x720f44:c.instructions+=5;goto B720f44;
case 0x720f46:c.instructions+=4;goto B720f46;
case 0x720f48:c.instructions+=3;goto B720f48;
case 0x720f4a:c.instructions+=2;goto B720f4a;
case 0x720f4d:c.instructions+=1;goto B720f4d;
case 0x720f4f:goto L720f4f;
case 0x720f51:c.instructions+=1;goto B720f51;
case 0x720f53:goto L720f53;
case 0x720f56:c.instructions+=1;goto B720f56;
case 0x720f58:goto L720f58;
case 0x720f5b:c.instructions+=2;goto B720f5b;
case 0x720f5e:c.instructions+=1;goto B720f5e;
case 0x720f60:goto L720f60;
case 0x720f63:c.instructions+=5;goto B720f63;
case 0x720f65:c.instructions+=4;goto B720f65;
case 0x720f68:c.instructions+=3;goto B720f68;
case 0x720f6b:c.instructions+=2;goto B720f6b;
case 0x720f6e:c.instructions+=1;goto B720f6e;
case 0x720f70:goto L720f70;
case 0x720f72:goto L720f72;
case 0x720f74:c.instructions+=2;goto B720f74;
case 0x720f75:c.instructions+=1;goto B720f75;
case 0x720f76:goto L720f76;
case 0x720f78:c.instructions+=8;goto B720f78;
case 0x720f7a:c.instructions+=7;goto B720f7a;
case 0x720f7d:c.instructions+=6;goto B720f7d;
case 0x720f80:c.instructions+=5;goto B720f80;
case 0x720f82:c.instructions+=4;goto B720f82;
case 0x720f88:c.instructions+=3;goto B720f88;
case 0x720f8e:c.instructions+=2;goto B720f8e;
case 0x720f91:c.instructions+=1;goto B720f91;
case 0x720f93:goto L720f93;
case 0x720f96:c.instructions+=10;goto B720f96;
case 0x720f99:c.instructions+=9;goto B720f99;
case 0x720f9b:c.instructions+=8;goto B720f9b;
case 0x720f9d:c.instructions+=7;goto B720f9d;
case 0x720fa0:c.instructions+=6;goto B720fa0;
case 0x720fa6:c.instructions+=5;goto B720fa6;
case 0x720fa8:c.instructions+=4;goto B720fa8;
case 0x720faa:c.instructions+=3;goto B720faa;
case 0x720fad:c.instructions+=2;goto B720fad;
case 0x720faf:c.instructions+=1;goto B720faf;
case 0x720fb1:goto L720fb1;
case 0x720fb4:c.instructions+=1;goto B720fb4;
case 0x720fb6:goto L720fb6;
case 0x720fb8:goto L720fb8;
case 0x720fba:c.instructions+=6;goto B720fba;
case 0x720fbd:c.instructions+=5;goto B720fbd;
case 0x720fc0:c.instructions+=4;goto B720fc0;
case 0x720fc3:c.instructions+=3;goto B720fc3;
case 0x720fc6:c.instructions+=2;goto B720fc6;
case 0x720fc7:c.instructions+=1;goto B720fc7;
case 0x720fc8:goto L720fc8;
case 0x720fcb:c.instructions+=1;goto B720fcb;
case 0x720fcd:goto L720fcd;
case 0x720fcf:c.instructions+=1;goto B720fcf;
case 0x720fd1:goto L720fd1;
case 0x720fd5:c.instructions+=5;goto B720fd5;
case 0x720fd8:c.instructions+=4;goto B720fd8;
case 0x720fd9:c.instructions+=3;goto B720fd9;
case 0x720fdc:c.instructions+=2;goto B720fdc;
case 0x720fdf:c.instructions+=1;goto B720fdf;
case 0x720fe1:goto L720fe1;
case 0x720fe4:c.instructions+=1;goto B720fe4;
case 0x720fe5:goto L720fe5;
case 0x720fe7:c.instructions+=3;goto B720fe7;
case 0x720fea:c.instructions+=2;goto B720fea;
case 0x720feb:c.instructions+=1;goto B720feb;
case 0x720fed:goto L720fed;
case 0x720ff0:c.instructions+=3;goto B720ff0;
case 0x720ff2:c.instructions+=2;goto B720ff2;
case 0x720ff3:c.instructions+=1;goto B720ff3;
case 0x720ff5:goto L720ff5;
case 0x720ff7:goto L720ff7;
case 0x720ff8:goto L720ff8;
case 0x720ffc:c.instructions+=2;goto B720ffc;
case 0x720fff:c.instructions+=1;goto B720fff;
default:missing_instruction(c.pc);}
B720001:L720001:{c.instructions+=5;NFSU2_TR(0x720001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B720004:{NFSU2_TR(0x720004);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B720007:{NFSU2_TR(0x720007);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72000a:{NFSU2_TR(0x72000a);
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
B72000c:{NFSU2_TR(0x72000c);
if(r1(R+518)){{goto L720015;}}
}
B72000e:L72000e:{c.instructions+=2;NFSU2_TR(0x72000e);
__builtin_memmove((R+4),(R+0),4);
}
B720010:{NFSU2_TR(0x720010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720015ull));
TAIL_STATIC(0x735550u,735);
}
B720015:L720015:{c.instructions+=5;NFSU2_TR(0x720015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B720017:{NFSU2_TR(0x720017);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72001b:{NFSU2_TR(0x72001b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B72001c:{NFSU2_TR(0x72001c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72001e:{NFSU2_TR(0x72001e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x71ffffu,71f);}
}
B720020:L720020:{c.instructions+=4;NFSU2_TR(0x720020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B720022:{NFSU2_TR(0x720022);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B720026:{NFSU2_TR(0x720026);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720029:{NFSU2_TR(0x720029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72002eull));
TAIL_STATIC(0x724894u,724);
}
B72002e:L72002e:{c.instructions+=7;NFSU2_TR(0x72002e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72002f:{NFSU2_TR(0x72002f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720030:{NFSU2_TR(0x720030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B720031:{NFSU2_TR(0x720031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720032:{NFSU2_TR(0x720032);
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
B720034:{NFSU2_TR(0x720034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720035:{NFSU2_TR(0x720035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720036:L720036:{c.instructions+=6;NFSU2_TR(0x720036);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720037:{NFSU2_TR(0x720037);
__builtin_memmove((R+20),(R+16),4);
}
B720039:{NFSU2_TR(0x720039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72003c:{NFSU2_TR(0x72003c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720040:{NFSU2_TR(0x720040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720041:{NFSU2_TR(0x720041);
if(r1(R+518)){{goto L720083;}}
}
B720043:L720043:{c.instructions+=6;NFSU2_TR(0x720043);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B720047:{NFSU2_TR(0x720047);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72004b:{NFSU2_TR(0x72004b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72004d:{NFSU2_TR(0x72004d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72004f:{NFSU2_TR(0x72004f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720052:{NFSU2_TR(0x720052);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72008c;}}
}
B720054:L720054:{c.instructions+=3;NFSU2_TR(0x720054);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720055:{NFSU2_TR(0x720055);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720058:{NFSU2_TR(0x720058);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720059:L720059:{c.instructions+=5;NFSU2_TR(0x720059);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B72005d:{NFSU2_TR(0x72005d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72005f:{NFSU2_TR(0x72005f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720061:{NFSU2_TR(0x720061);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B720065:{NFSU2_TR(0x720065);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72006b;}}
}
B720067:L720067:{c.instructions+=2;NFSU2_TR(0x720067);
__builtin_memmove((R+8),(R+24),4);
}
B720069:{NFSU2_TR(0x720069);
{goto L720071;}
}
B72006b:L72006b:{c.instructions+=2;NFSU2_TR(0x72006b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72006d:{NFSU2_TR(0x72006d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720071;}}
}
B72006f:L72006f:{c.instructions+=1;NFSU2_TR(0x72006f);
__builtin_memmove((R+8),(R+28),4);
}
B720071:L720071:{c.instructions+=6;NFSU2_TR(0x720071);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B720073:{NFSU2_TR(0x720073);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B720077:{NFSU2_TR(0x720077);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B720078:{NFSU2_TR(0x720078);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72007b:{NFSU2_TR(0x72007b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72007d:{NFSU2_TR(0x72007d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720059u);}goto L720059;}}
}
B72007f:L72007f:{c.instructions+=3;NFSU2_TR(0x72007f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720080:{NFSU2_TR(0x720080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720081:{NFSU2_TR(0x720081);
{goto L720089;}
}
B720083:L720083:{c.instructions+=2;NFSU2_TR(0x720083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B720086:{NFSU2_TR(0x720086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720089:L720089:{c.instructions+=1;NFSU2_TR(0x720089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72008c:L72008c:{c.instructions+=3;NFSU2_TR(0x72008c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B72008f:{NFSU2_TR(0x72008f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720090:{NFSU2_TR(0x720090);
if(r1(R+518)){{goto L72009e;}}
}
B720092:L720092:{c.instructions+=4;NFSU2_TR(0x720092);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B720095:{NFSU2_TR(0x720095);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720096:{NFSU2_TR(0x720096);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720097:{NFSU2_TR(0x720097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72009cull));
TAIL_STATIC(0x735430u,735);
}
B72009c:L72009c:{c.instructions+=2;NFSU2_TR(0x72009c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72009d:{NFSU2_TR(0x72009d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72009e:L72009e:{c.instructions+=3;NFSU2_TR(0x72009e);
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
B7200a0:{NFSU2_TR(0x7200a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7200a1:{NFSU2_TR(0x7200a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7200a2:L7200a2:{c.instructions+=13;NFSU2_TR(0x7200a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7200a3:{NFSU2_TR(0x7200a3);
__builtin_memmove((R+20),(R+16),4);
}
B7200a5:{NFSU2_TR(0x7200a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7200a6:{NFSU2_TR(0x7200a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7200a7:{NFSU2_TR(0x7200a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7200aa:{NFSU2_TR(0x7200aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7200ad:{NFSU2_TR(0x7200ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7200ae:{NFSU2_TR(0x7200ae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7200b0:{NFSU2_TR(0x7200b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7200b1:{NFSU2_TR(0x7200b1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7200b3:{NFSU2_TR(0x7200b3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7200b5:{NFSU2_TR(0x7200b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7200b6:{NFSU2_TR(0x7200b6);
if(r1(R+518)){{goto L7200c4;}}
}
B7200b8:L7200b8:{c.instructions+=4;NFSU2_TR(0x7200b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7200bc:{NFSU2_TR(0x7200bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7200bf:{NFSU2_TR(0x7200bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7200c2:{NFSU2_TR(0x7200c2);
{goto L7200c7;}
}
B7200c4:L7200c4:{c.instructions+=1;NFSU2_TR(0x7200c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7200c7:L7200c7:{c.instructions+=4;NFSU2_TR(0x7200c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7200ca:{NFSU2_TR(0x7200ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7200cd:{NFSU2_TR(0x7200cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7200d0:{NFSU2_TR(0x7200d0);
if(r1(R+518)){{goto L7200e8;}}
}
B7200d2:L7200d2:{c.instructions+=3;NFSU2_TR(0x7200d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7200d4:{NFSU2_TR(0x7200d4);
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
B7200d6:{NFSU2_TR(0x7200d6);
if(r1(R+518)){{goto L7201a5;}}
}
B7200dc:L7200dc:{c.instructions+=1;NFSU2_TR(0x7200dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7200e1ull));
TAIL_STATIC(0x735550u,735);
}
B7200e1:L7200e1:{c.instructions+=2;NFSU2_TR(0x7200e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7200e3:{NFSU2_TR(0x7200e3);
{goto L7201a5;}
}
B7200e8:L7200e8:{c.instructions+=2;NFSU2_TR(0x7200e8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7200ea:{NFSU2_TR(0x7200ea);
if(r1(R+518)){{goto L72014f;}}
}
B7200ec:L7200ec:{c.instructions+=2;NFSU2_TR(0x7200ec);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7200ee:{NFSU2_TR(0x7200ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7201a5;}}
}
B7200f4:L7200f4:{c.instructions+=2;NFSU2_TR(0x7200f4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7200f6:{NFSU2_TR(0x7200f6);
if(r1(R+518)){{goto L72013b;}}
}
B7200f8:L7200f8:{c.instructions+=3;NFSU2_TR(0x7200f8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7200fb:{NFSU2_TR(0x7200fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7200fe:{NFSU2_TR(0x7200fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72013b;}}
}
B720100:L720100:{c.instructions+=1;NFSU2_TR(0x720100);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B720103:L720103:{c.instructions+=8;NFSU2_TR(0x720103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720106:{NFSU2_TR(0x720106);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B720109:{NFSU2_TR(0x720109);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B72010d:{NFSU2_TR(0x72010d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720110:{NFSU2_TR(0x720110);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B720113:{NFSU2_TR(0x720113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B720115:{NFSU2_TR(0x720115);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720117:{NFSU2_TR(0x720117);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72011d;}}
}
B720119:L720119:{c.instructions+=2;NFSU2_TR(0x720119);
__builtin_memmove((R+28),(R+12),4);
}
B72011b:{NFSU2_TR(0x72011b);
{goto L720125;}
}
B72011d:L72011d:{c.instructions+=2;NFSU2_TR(0x72011d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720120:{NFSU2_TR(0x720120);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720125;}}
}
B720122:L720122:{c.instructions+=1;NFSU2_TR(0x720122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720125:L720125:{c.instructions+=6;NFSU2_TR(0x720125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720128:{NFSU2_TR(0x720128);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B72012a:{NFSU2_TR(0x72012a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B72012e:{NFSU2_TR(0x72012e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B720131:{NFSU2_TR(0x720131);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B720134:{NFSU2_TR(0x720134);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720103u);}goto L720103;}}
}
B720136:L720136:{c.instructions+=2;NFSU2_TR(0x720136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720139:{NFSU2_TR(0x720139);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72013b:L72013b:{c.instructions+=5;NFSU2_TR(0x72013b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72013c:{NFSU2_TR(0x72013c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B72013f:{NFSU2_TR(0x72013f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720140:{NFSU2_TR(0x720140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720141:{NFSU2_TR(0x720141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720146ull));
TAIL_STATIC(0x735490u,735);
}
B720146:L720146:{c.instructions+=3;NFSU2_TR(0x720146);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B720149:{NFSU2_TR(0x720149);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72014b:{NFSU2_TR(0x72014b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7201a5;}}
}
B72014d:L72014d:{c.instructions+=1;NFSU2_TR(0x72014d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7200e1u);}goto L7200e1;}
}
B72014f:L72014f:{c.instructions+=2;NFSU2_TR(0x72014f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B720151:{NFSU2_TR(0x720151);
if(r1(R+518)){{goto L7201a5;}}
}
B720153:L720153:{c.instructions+=2;NFSU2_TR(0x720153);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B720155:{NFSU2_TR(0x720155);
if(r1(R+518)){{goto L72019a;}}
}
B720157:L720157:{c.instructions+=3;NFSU2_TR(0x720157);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72015a:{NFSU2_TR(0x72015a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72015d:{NFSU2_TR(0x72015d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72019a;}}
}
B72015f:L72015f:{c.instructions+=1;NFSU2_TR(0x72015f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B720162:L720162:{c.instructions+=8;NFSU2_TR(0x720162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720165:{NFSU2_TR(0x720165);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B720168:{NFSU2_TR(0x720168);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B72016c:{NFSU2_TR(0x72016c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72016f:{NFSU2_TR(0x72016f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B720172:{NFSU2_TR(0x720172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B720174:{NFSU2_TR(0x720174);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720176:{NFSU2_TR(0x720176);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72017c;}}
}
B720178:L720178:{c.instructions+=2;NFSU2_TR(0x720178);
__builtin_memmove((R+28),(R+12),4);
}
B72017a:{NFSU2_TR(0x72017a);
{goto L720184;}
}
B72017c:L72017c:{c.instructions+=2;NFSU2_TR(0x72017c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72017f:{NFSU2_TR(0x72017f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720184;}}
}
B720181:L720181:{c.instructions+=1;NFSU2_TR(0x720181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720184:L720184:{c.instructions+=6;NFSU2_TR(0x720184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720187:{NFSU2_TR(0x720187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B720189:{NFSU2_TR(0x720189);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B72018d:{NFSU2_TR(0x72018d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B720190:{NFSU2_TR(0x720190);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B720193:{NFSU2_TR(0x720193);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720162u);}goto L720162;}}
}
B720195:L720195:{c.instructions+=2;NFSU2_TR(0x720195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720198:{NFSU2_TR(0x720198);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72019a:L72019a:{c.instructions+=4;NFSU2_TR(0x72019a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72019c:{NFSU2_TR(0x72019c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B72019f:{NFSU2_TR(0x72019f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7201a0:{NFSU2_TR(0x7201a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7201a5ull));
TAIL_STATIC(0x735080u,735);
}
B7201a5:L7201a5:{c.instructions+=3;NFSU2_TR(0x7201a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B7201a7:{NFSU2_TR(0x7201a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7201a9:{NFSU2_TR(0x7201a9);
if(r1(R+518)){{goto L7201bb;}}
}
B7201ab:L7201ab:{c.instructions+=4;NFSU2_TR(0x7201ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7201ae:{NFSU2_TR(0x7201ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7201af:{NFSU2_TR(0x7201af);
__builtin_memmove((R+4),(R+24),4);
}
B7201b1:{NFSU2_TR(0x7201b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7201b6ull));
TAIL_STATIC(0x735070u,735);
}
B7201b6:L7201b6:{c.instructions+=2;NFSU2_TR(0x7201b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7201b9:{NFSU2_TR(0x7201b9);
{goto L7201bd;}
}
B7201bb:L7201bb:{c.instructions+=1;NFSU2_TR(0x7201bb);
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
B7201bd:L7201bd:{c.instructions+=5;NFSU2_TR(0x7201bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7201be:{NFSU2_TR(0x7201be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7201bf:{NFSU2_TR(0x7201bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7201c0:{NFSU2_TR(0x7201c0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7201c1:{NFSU2_TR(0x7201c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7201c2:L7201c2:{c.instructions+=6;NFSU2_TR(0x7201c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7201c3:{NFSU2_TR(0x7201c3);
__builtin_memmove((R+20),(R+16),4);
}
B7201c5:{NFSU2_TR(0x7201c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7201c8:{NFSU2_TR(0x7201c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7201cb:{NFSU2_TR(0x7201cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7201ce:{NFSU2_TR(0x7201ce);
if(r1(R+518)){{goto L7201fa;}}
}
B7201d0:L7201d0:{c.instructions+=6;NFSU2_TR(0x7201d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7201d3:{NFSU2_TR(0x7201d3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7201d5:{NFSU2_TR(0x7201d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7201d6:{NFSU2_TR(0x7201d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7201d9:{NFSU2_TR(0x7201d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7201dc:{NFSU2_TR(0x7201dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7201e3;}}
}
B7201de:L7201de:{c.instructions+=2;NFSU2_TR(0x7201de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7201e1:{NFSU2_TR(0x7201e1);
{goto L7201ed;}
}
B7201e3:L7201e3:{c.instructions+=3;NFSU2_TR(0x7201e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7201e5:{NFSU2_TR(0x7201e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7201e8:{NFSU2_TR(0x7201e8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7201ed;}}
}
B7201ea:L7201ea:{c.instructions+=1;NFSU2_TR(0x7201ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7201ed:L7201ed:{c.instructions+=4;NFSU2_TR(0x7201ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7201f0:{NFSU2_TR(0x7201f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7201f1:{NFSU2_TR(0x7201f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7201f2:{NFSU2_TR(0x7201f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7201f7ull));
TAIL_STATIC(0x7356d0u,735);
}
B7201f7:L7201f7:{c.instructions+=3;NFSU2_TR(0x7201f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7201f8:{NFSU2_TR(0x7201f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7201f9:{NFSU2_TR(0x7201f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7201fa:L7201fa:{c.instructions+=3;NFSU2_TR(0x7201fa);
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
B7201fc:{NFSU2_TR(0x7201fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7201fd:{NFSU2_TR(0x7201fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7201fe:L7201fe:{c.instructions+=5;NFSU2_TR(0x7201fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720202:{NFSU2_TR(0x720202);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720205:{NFSU2_TR(0x720205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B720207:{NFSU2_TR(0x720207);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720209:{NFSU2_TR(0x720209);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720213;}}
}
B72020b:L72020b:{c.instructions+=2;NFSU2_TR(0x72020b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72020e:{NFSU2_TR(0x72020e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720213;}}
}
B720210:L720210:{c.instructions+=2;NFSU2_TR(0x720210);
__builtin_memmove((R+0),(R+4),4);
}
B720212:{NFSU2_TR(0x720212);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720213:L720213:{c.instructions+=2;NFSU2_TR(0x720213);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B720217:{NFSU2_TR(0x720217);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720238;}}
}
B720219:L720219:{c.instructions+=7;NFSU2_TR(0x720219);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72021d:{NFSU2_TR(0x72021d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B720220:{NFSU2_TR(0x720220);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720223:{NFSU2_TR(0x720223);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720224:{NFSU2_TR(0x720224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720227:{NFSU2_TR(0x720227);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B720229:{NFSU2_TR(0x720229);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720230;}}
}
B72022b:L72022b:{c.instructions+=2;NFSU2_TR(0x72022b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72022e:{NFSU2_TR(0x72022e);
{goto L720237;}
}
B720230:L720230:{c.instructions+=2;NFSU2_TR(0x720230);
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
B720232:{NFSU2_TR(0x720232);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720237;}}
}
B720234:L720234:{c.instructions+=1;NFSU2_TR(0x720234);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720237:L720237:{c.instructions+=1;NFSU2_TR(0x720237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720238:L720238:{c.instructions+=2;NFSU2_TR(0x720238);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72023b:{NFSU2_TR(0x72023b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72023c:L72023c:{c.instructions+=4;NFSU2_TR(0x72023c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72023d:{NFSU2_TR(0x72023d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720241:{NFSU2_TR(0x720241);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B720245:{NFSU2_TR(0x720245);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72024c;}}
}
B720247:L720247:{c.instructions+=3;NFSU2_TR(0x720247);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72024a:{NFSU2_TR(0x72024a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72024b:{NFSU2_TR(0x72024b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72024c:L72024c:{c.instructions+=1;NFSU2_TR(0x72024c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720251ull));
TAIL_STATIC(0x724903u,724);
}
B720251:L720251:{c.instructions+=7;NFSU2_TR(0x720251);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B720253:{NFSU2_TR(0x720253);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x720253);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x720253);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B720256:{NFSU2_TR(0x720256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B720258:{NFSU2_TR(0x720258);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72025a:{NFSU2_TR(0x72025a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72025d:{NFSU2_TR(0x72025d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72025e:{NFSU2_TR(0x72025e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72025f:L72025f:{c.instructions+=5;NFSU2_TR(0x72025f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720260:{NFSU2_TR(0x720260);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720264:{NFSU2_TR(0x720264);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B720267:{NFSU2_TR(0x720267);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B72026b:{NFSU2_TR(0x72026b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720272;}}
}
B72026d:L72026d:{c.instructions+=3;NFSU2_TR(0x72026d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720270:{NFSU2_TR(0x720270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720271:{NFSU2_TR(0x720271);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720272:L720272:{c.instructions+=4;NFSU2_TR(0x720272);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720273:{NFSU2_TR(0x720273);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720274:{NFSU2_TR(0x720274);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B720278:{NFSU2_TR(0x720278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72027dull));
TAIL_STATIC(0x724903u,724);
}
B72027d:L72027d:{c.instructions+=9;NFSU2_TR(0x72027d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B720281:{NFSU2_TR(0x720281);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B720285:{NFSU2_TR(0x720285);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B720287:{NFSU2_TR(0x720287);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B720289:{NFSU2_TR(0x720289);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72028b:{NFSU2_TR(0x72028b);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72028b);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72028b);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72028d:{NFSU2_TR(0x72028d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B72028f:{NFSU2_TR(0x72028f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720293:{NFSU2_TR(0x720293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7202b2;}}
}
B720295:L720295:{c.instructions+=9;NFSU2_TR(0x720295);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B720299:{NFSU2_TR(0x720299);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B72029c:{NFSU2_TR(0x72029c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72029f:{NFSU2_TR(0x72029f);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B7202a3:{NFSU2_TR(0x7202a3);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7202a5:{NFSU2_TR(0x7202a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7202a9:{NFSU2_TR(0x7202a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7202ac:{NFSU2_TR(0x7202ac);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7202b0:{NFSU2_TR(0x7202b0);
{goto L7202d1;}
}
B7202b2:L7202b2:{c.instructions+=8;NFSU2_TR(0x7202b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7202b6:{NFSU2_TR(0x7202b6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B7202b9:{NFSU2_TR(0x7202b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7202bc:{NFSU2_TR(0x7202bc);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B7202c1:{NFSU2_TR(0x7202c1);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B7202c4:{NFSU2_TR(0x7202c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7202c8:{NFSU2_TR(0x7202c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7202cc:{NFSU2_TR(0x7202cc);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7202d1:L7202d1:{c.instructions+=9;NFSU2_TR(0x7202d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7202d4:{NFSU2_TR(0x7202d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7202d7:{NFSU2_TR(0x7202d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7202db:{NFSU2_TR(0x7202db);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7202df:{NFSU2_TR(0x7202df);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+10)));
w2(U+12,u16(u32(r2(R+4))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7202e3:{NFSU2_TR(0x7202e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7202e6:{NFSU2_TR(0x7202e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7202e7:{NFSU2_TR(0x7202e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7202e8:{NFSU2_TR(0x7202e8);
if(r1(R+512)){{goto L7202f5;}}
}
B7202ea:L7202ea:{c.instructions+=4;NFSU2_TR(0x7202ea);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7202ef:{NFSU2_TR(0x7202ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7202f3:{NFSU2_TR(0x7202f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7202f4:{NFSU2_TR(0x7202f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7202f5:L7202f5:{c.instructions+=3;NFSU2_TR(0x7202f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7202f9:{NFSU2_TR(0x7202f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7202fa:{NFSU2_TR(0x7202fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7202fb:L7202fb:{c.instructions+=6;NFSU2_TR(0x7202fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7202fc:{NFSU2_TR(0x7202fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720300:{NFSU2_TR(0x720300);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720301:{NFSU2_TR(0x720301);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B720303:{NFSU2_TR(0x720303);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B720306:{NFSU2_TR(0x720306);
if(r1(R+518)){{goto L72033a;}}
}
B720308:L720308:{c.instructions+=1;NFSU2_TR(0x720308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72030dull));
TAIL_STATIC(0x724903u,724);
}
B72030d:L72030d:{c.instructions+=8;NFSU2_TR(0x72030d);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72030f:{NFSU2_TR(0x72030f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B720311:{NFSU2_TR(0x720311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720312:{NFSU2_TR(0x720312);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x720312);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x720312);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B720314:{NFSU2_TR(0x720314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B720316:{NFSU2_TR(0x720316);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720318:{NFSU2_TR(0x720318);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72031b:{NFSU2_TR(0x72031b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72033a;}}
}
B72031d:L72031d:{c.instructions+=1;NFSU2_TR(0x72031d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72031e:L72031e:{c.instructions+=4;NFSU2_TR(0x72031e);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B720323:{NFSU2_TR(0x720323);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B720325:{NFSU2_TR(0x720325);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720327:{NFSU2_TR(0x720327);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L720331;}}
}
B720329:L720329:{c.instructions+=3;NFSU2_TR(0x720329);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72032a:{NFSU2_TR(0x72032a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72032d:{NFSU2_TR(0x72032d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72031eu);}goto L72031e;}}
}
B72032f:L72032f:{c.instructions+=1;NFSU2_TR(0x72032f);
{goto L720339;}
}
B720331:L720331:{c.instructions+=3;NFSU2_TR(0x720331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720334:{NFSU2_TR(0x720334);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B720336:{NFSU2_TR(0x720336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720339:L720339:{c.instructions+=1;NFSU2_TR(0x720339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72033a:L72033a:{c.instructions+=4;NFSU2_TR(0x72033a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72033d:{NFSU2_TR(0x72033d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72033e:{NFSU2_TR(0x72033e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72033f:{NFSU2_TR(0x72033f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720340:L720340:{c.instructions+=5;NFSU2_TR(0x720340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720344:{NFSU2_TR(0x720344);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720347:{NFSU2_TR(0x720347);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B720349:{NFSU2_TR(0x720349);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+4)));
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B72034b:{NFSU2_TR(0x72034b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720363;}}
}
B72034d:L72034d:{c.instructions+=2;NFSU2_TR(0x72034d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720350:{NFSU2_TR(0x720350);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720363;}}
}
B720352:L720352:{c.instructions+=2;NFSU2_TR(0x720352);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720355:{NFSU2_TR(0x720355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720370;}}
}
B720357:L720357:{c.instructions+=5;NFSU2_TR(0x720357);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72035b:{NFSU2_TR(0x72035b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72035f:{NFSU2_TR(0x72035f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720361:{NFSU2_TR(0x720361);
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
B720362:{NFSU2_TR(0x720362);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720363:L720363:{c.instructions+=2;NFSU2_TR(0x720363);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B720366:{NFSU2_TR(0x720366);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720370;}}
}
B720368:L720368:{c.instructions+=2;NFSU2_TR(0x720368);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72036b:{NFSU2_TR(0x72036b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720370;}}
}
B72036d:L72036d:{c.instructions+=1;NFSU2_TR(0x72036d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720370:L720370:{c.instructions+=3;NFSU2_TR(0x720370);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720373:{NFSU2_TR(0x720373);
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
B720375:{NFSU2_TR(0x720375);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720376:L720376:{c.instructions+=3;NFSU2_TR(0x720376);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72037a:{NFSU2_TR(0x72037a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72037e:{NFSU2_TR(0x72037e);
if(r1(R+518)){{goto L720384;}}
}
B720380:L720380:{c.instructions+=2;NFSU2_TR(0x720380);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B720382:{NFSU2_TR(0x720382);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720384:L720384:{c.instructions+=5;NFSU2_TR(0x720384);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720386:{NFSU2_TR(0x720386);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72038c:{NFSU2_TR(0x72038c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72038e:{NFSU2_TR(0x72038e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B720391:{NFSU2_TR(0x720391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7203b6;}}
}
B720393:L720393:{c.instructions+=5;NFSU2_TR(0x720393);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720396:{NFSU2_TR(0x720396);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B720398:{NFSU2_TR(0x720398);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72039a:{NFSU2_TR(0x72039a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72039d:{NFSU2_TR(0x72039d);
if(r1(R+514)){{goto L7203ac;}}
}
B72039f:L72039f:{c.instructions+=5;NFSU2_TR(0x72039f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7203a1:{NFSU2_TR(0x7203a1);
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
B7203a2:{NFSU2_TR(0x7203a2);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
s4(u32(r4(R+4)),r4(U+0));
}
B7203a8:{NFSU2_TR(0x7203a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7203ab:{NFSU2_TR(0x7203ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7203ac:L7203ac:{c.instructions+=3;NFSU2_TR(0x7203ac);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7203b2:{NFSU2_TR(0x7203b2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7203b4:{NFSU2_TR(0x7203b4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7203b6:L7203b6:{c.instructions+=3;NFSU2_TR(0x7203b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7203ba:{NFSU2_TR(0x7203ba);
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
B7203bc:{NFSU2_TR(0x7203bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7203bd:L7203bd:{c.instructions+=6;NFSU2_TR(0x7203bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7203c1:{NFSU2_TR(0x7203c1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B7203c4:{NFSU2_TR(0x7203c4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7203c6:{NFSU2_TR(0x7203c6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7203c8:{NFSU2_TR(0x7203c8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
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
B7203cb:{NFSU2_TR(0x7203cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7203e7;}}
}
B7203cd:L7203cd:{c.instructions+=1;NFSU2_TR(0x7203cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7203ce:L7203ce:{c.instructions+=2;NFSU2_TR(0x7203ce);
u8 U[26];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B7203d2:{NFSU2_TR(0x7203d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7203df;}}
}
B7203d4:L7203d4:{c.instructions+=4;NFSU2_TR(0x7203d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7203d8:{NFSU2_TR(0x7203d8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7203d9:{NFSU2_TR(0x7203d9);
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
B7203db:{NFSU2_TR(0x7203db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7203ceu);}goto L7203ce;}}
}
B7203dd:L7203dd:{c.instructions+=1;NFSU2_TR(0x7203dd);
{goto L7203e6;}
}
B7203df:L7203df:{c.instructions+=2;NFSU2_TR(0x7203df);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B7203e3:{NFSU2_TR(0x7203e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7203e6:L7203e6:{c.instructions+=1;NFSU2_TR(0x7203e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7203e7:L7203e7:{c.instructions+=2;NFSU2_TR(0x7203e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7203ea:{NFSU2_TR(0x7203ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7203eb:L7203eb:{c.instructions+=5;NFSU2_TR(0x7203eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7203ef:{NFSU2_TR(0x7203ef);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B7203f2:{NFSU2_TR(0x7203f2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7203f4:{NFSU2_TR(0x7203f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7203f6:{NFSU2_TR(0x7203f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720408;}}
}
B7203f8:L7203f8:{c.instructions+=1;NFSU2_TR(0x7203f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7203fb:L7203fb:{c.instructions+=2;NFSU2_TR(0x7203fb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7203fe:{NFSU2_TR(0x7203fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72040b;}}
}
B720400:L720400:{c.instructions+=4;NFSU2_TR(0x720400);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B720401:{NFSU2_TR(0x720401);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B720404:{NFSU2_TR(0x720404);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720406:{NFSU2_TR(0x720406);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7203fbu);}goto L7203fb;}}
}
B720408:L720408:{c.instructions+=2;NFSU2_TR(0x720408);
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
B72040a:{NFSU2_TR(0x72040a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72040b:L72040b:{c.instructions+=3;NFSU2_TR(0x72040b);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72040d:{NFSU2_TR(0x72040d);
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
B72040e:{NFSU2_TR(0x72040e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72040f:L72040f:{c.instructions+=11;NFSU2_TR(0x72040f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720413:{NFSU2_TR(0x720413);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B720417:{NFSU2_TR(0x720417);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72041b:{NFSU2_TR(0x72041b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72041e:{NFSU2_TR(0x72041e);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720422:{NFSU2_TR(0x720422);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B720425:{NFSU2_TR(0x720425);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B720427:{NFSU2_TR(0x720427);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72042a:{NFSU2_TR(0x72042a);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720430:{NFSU2_TR(0x720430);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720433:{NFSU2_TR(0x720433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720434:L720434:{c.instructions+=10;NFSU2_TR(0x720434);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720435:{NFSU2_TR(0x720435);
__builtin_memmove((R+20),(R+16),4);
}
B720437:{NFSU2_TR(0x720437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720438:{NFSU2_TR(0x720438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72043b:{NFSU2_TR(0x72043b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72043c:{NFSU2_TR(0x72043c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(r2(U+0)));
}
B72043f:{NFSU2_TR(0x72043f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B720441:{NFSU2_TR(0x720441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B720443:{NFSU2_TR(0x720443);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720446:{NFSU2_TR(0x720446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720461;}}
}
B720448:L720448:{c.instructions+=2;NFSU2_TR(0x720448);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72044c:{NFSU2_TR(0x72044c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720461;}}
}
B72044e:L72044e:{c.instructions+=3;NFSU2_TR(0x72044e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720451:{NFSU2_TR(0x720451);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B720455:{NFSU2_TR(0x720455);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720458:L720458:{c.instructions+=2;NFSU2_TR(0x720458);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720459:{NFSU2_TR(0x720459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72045eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72040fu);}goto L72040f;}
}
B72045e:L72045e:{c.instructions+=2;NFSU2_TR(0x72045e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72045f:{NFSU2_TR(0x72045f);
{goto L7204dc;}
}
B720461:L720461:{c.instructions+=2;NFSU2_TR(0x720461);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720464:{NFSU2_TR(0x720464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72047d;}}
}
B720466:L720466:{c.instructions+=2;NFSU2_TR(0x720466);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720469:{NFSU2_TR(0x720469);
if(r1(R+518)){{goto L72047d;}}
}
B72046b:L72046b:{c.instructions+=3;NFSU2_TR(0x72046b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72046f:{NFSU2_TR(0x72046f);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+10)));
w2(U+12,u16(u32(r2(R+4))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B720473:{NFSU2_TR(0x720473);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72047d;}}
}
B720475:L720475:{c.instructions+=3;NFSU2_TR(0x720475);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B720478:{NFSU2_TR(0x720478);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72047b:{NFSU2_TR(0x72047b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720458u);}goto L720458;}
}
B72047d:L72047d:{c.instructions+=3;NFSU2_TR(0x72047d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720480:{NFSU2_TR(0x720480);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720481:{NFSU2_TR(0x720481);
if(r1(R+518)){{goto L720488;}}
}
B720483:L720483:{c.instructions+=2;NFSU2_TR(0x720483);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720486:{NFSU2_TR(0x720486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7204d1;}}
}
B720488:L720488:{c.instructions+=4;NFSU2_TR(0x720488);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72048b:{NFSU2_TR(0x72048b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72048e:{NFSU2_TR(0x72048e);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
}
B720490:{NFSU2_TR(0x720490);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7204d1;}}
}
B720492:L720492:{c.instructions+=7;NFSU2_TR(0x720492);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720495:{NFSU2_TR(0x720495);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72049b:{NFSU2_TR(0x72049b);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72049e:{NFSU2_TR(0x72049e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B7204a4:{NFSU2_TR(0x7204a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7204a6:{NFSU2_TR(0x7204a6);
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
B7204a9:{NFSU2_TR(0x7204a9);
if(r1(R+514)){{goto L7204c9;}}
}
B7204ab:L7204ab:{c.instructions+=8;NFSU2_TR(0x7204ab);
w4(R+0,u32(r1(R+4)));
}
B7204ae:{NFSU2_TR(0x7204ae);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7204b2:{NFSU2_TR(0x7204b2);
__builtin_memmove((R+0),(R+4),1);
}
B7204b4:{NFSU2_TR(0x7204b4);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B7204b6:{NFSU2_TR(0x7204b6);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7204b9:{NFSU2_TR(0x7204b9);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7204bb:{NFSU2_TR(0x7204bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7204be:{NFSU2_TR(0x7204be);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7204d6;}}
}
B7204c0:L7204c0:{c.instructions+=2;NFSU2_TR(0x7204c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7204c1:{NFSU2_TR(0x7204c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7204c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72040fu);}goto L72040f;}
}
B7204c6:L7204c6:{c.instructions+=2;NFSU2_TR(0x7204c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7204c7:{NFSU2_TR(0x7204c7);
{goto L7204db;}
}
B7204c9:L7204c9:{c.instructions+=3;NFSU2_TR(0x7204c9);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7204cc:{NFSU2_TR(0x7204cc);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7204cf:{NFSU2_TR(0x7204cf);
{goto L7204d8;}
}
B7204d1:L7204d1:{c.instructions+=2;NFSU2_TR(0x7204d1);
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
B7204d4:{NFSU2_TR(0x7204d4);
if(r1(R+518)){{goto L7204db;}}
}
B7204d6:L7204d6:{c.instructions+=1;NFSU2_TR(0x7204d6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B7204d8:L7204d8:{c.instructions+=1;NFSU2_TR(0x7204d8);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7204db:L7204db:{c.instructions+=1;NFSU2_TR(0x7204db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7204dc:L7204dc:{c.instructions+=10;NFSU2_TR(0x7204dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7204de:{NFSU2_TR(0x7204de);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7204e1:{NFSU2_TR(0x7204e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7204e4:{NFSU2_TR(0x7204e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7204e7:{NFSU2_TR(0x7204e7);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7204ea:{NFSU2_TR(0x7204ea);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7204ed:{NFSU2_TR(0x7204ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7204f0:{NFSU2_TR(0x7204f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7204f1:{NFSU2_TR(0x7204f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7204f2:{NFSU2_TR(0x7204f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7204f3:L7204f3:{c.instructions+=9;NFSU2_TR(0x7204f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7204f4:{NFSU2_TR(0x7204f4);
__builtin_memmove((R+20),(R+16),4);
}
B7204f6:{NFSU2_TR(0x7204f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7204f7:{NFSU2_TR(0x7204f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7204f8:{NFSU2_TR(0x7204f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7204f9:{NFSU2_TR(0x7204f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7204fc:{NFSU2_TR(0x7204fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7204ff:{NFSU2_TR(0x7204ff);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B720502:{NFSU2_TR(0x720502);
if(r1(R+518)){{goto L7205ed;}}
}
B720508:L720508:{c.instructions+=7;NFSU2_TR(0x720508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72050a:{NFSU2_TR(0x72050a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72050d:{NFSU2_TR(0x72050d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B720510:{NFSU2_TR(0x720510);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720511:{NFSU2_TR(0x720511);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720514:{NFSU2_TR(0x720514);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720516:{NFSU2_TR(0x720516);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72051c;}}
}
B720518:L720518:{c.instructions+=2;NFSU2_TR(0x720518);
__builtin_memmove((R+8),(R+28),4);
}
B72051a:{NFSU2_TR(0x72051a);
{goto L720522;}
}
B72051c:L72051c:{c.instructions+=2;NFSU2_TR(0x72051c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72051e:{NFSU2_TR(0x72051e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720522;}}
}
B720520:L720520:{c.instructions+=1;NFSU2_TR(0x720520);
__builtin_memmove((R+8),(R+0),4);
}
B720522:L720522:{c.instructions+=8;NFSU2_TR(0x720522);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720528:{NFSU2_TR(0x720528);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B72052a:{NFSU2_TR(0x72052a);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72052d:{NFSU2_TR(0x72052d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720530:{NFSU2_TR(0x720530);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B720532:{NFSU2_TR(0x720532);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720534:{NFSU2_TR(0x720534);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B720537:{NFSU2_TR(0x720537);
if(r1(R+514)){{goto L720560;}}
}
B720539:L720539:{c.instructions+=3;NFSU2_TR(0x720539);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B72053b:{NFSU2_TR(0x72053b);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72053d:{NFSU2_TR(0x72053d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720549;}}
}
B72053f:L72053f:{c.instructions+=2;NFSU2_TR(0x72053f);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B720544:{NFSU2_TR(0x720544);
{goto L7205e9;}
}
B720549:L720549:{c.instructions+=2;NFSU2_TR(0x720549);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72054b:{NFSU2_TR(0x72054b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720557;}}
}
B72054d:L72054d:{c.instructions+=2;NFSU2_TR(0x72054d);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B720552:{NFSU2_TR(0x720552);
{goto L7205e9;}
}
B720557:L720557:{c.instructions+=2;NFSU2_TR(0x720557);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B72055b:{NFSU2_TR(0x72055b);
{goto L7205e9;}
}
B720560:L720560:{c.instructions+=14;NFSU2_TR(0x720560);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720563:{NFSU2_TR(0x720563);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720566:{NFSU2_TR(0x720566);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B720569:{NFSU2_TR(0x720569);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72056f:{NFSU2_TR(0x72056f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720572:{NFSU2_TR(0x720572);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720575:{NFSU2_TR(0x720575);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720578:{NFSU2_TR(0x720578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72057b:{NFSU2_TR(0x72057b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72057e:{NFSU2_TR(0x72057e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B720582:{NFSU2_TR(0x720582);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B720585:{NFSU2_TR(0x720585);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720587:{NFSU2_TR(0x720587);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72058a:{NFSU2_TR(0x72058a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72058f;}}
}
B72058c:L72058c:{c.instructions+=1;NFSU2_TR(0x72058c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B72058f:L72058f:{c.instructions+=3;NFSU2_TR(0x72058f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B720591:{NFSU2_TR(0x720591);
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
B720594:{NFSU2_TR(0x720594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7205ae;}}
}
B720596:L720596:{c.instructions+=7;NFSU2_TR(0x720596);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B72059b:{NFSU2_TR(0x72059b);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B7205a0:{NFSU2_TR(0x7205a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7205a3:{NFSU2_TR(0x7205a3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7205a6:{NFSU2_TR(0x7205a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7205a9:{NFSU2_TR(0x7205a9);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7205ac:{NFSU2_TR(0x7205ac);
{goto L7205d3;}
}
B7205ae:L7205ae:{c.instructions+=2;NFSU2_TR(0x7205ae);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7205b1:{NFSU2_TR(0x7205b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7205cb;}}
}
B7205b3:L7205b3:{c.instructions+=7;NFSU2_TR(0x7205b3);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B7205b8:{NFSU2_TR(0x7205b8);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B7205bd:{NFSU2_TR(0x7205bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7205c0:{NFSU2_TR(0x7205c0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7205c3:{NFSU2_TR(0x7205c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7205c6:{NFSU2_TR(0x7205c6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7205c9:{NFSU2_TR(0x7205c9);
{goto L7205d3;}
}
B7205cb:L7205cb:{c.instructions+=2;NFSU2_TR(0x7205cb);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7205cf:{NFSU2_TR(0x7205cf);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7205d3:L7205d3:{c.instructions+=9;NFSU2_TR(0x7205d3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B7205d5:{NFSU2_TR(0x7205d5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B7205d7:{NFSU2_TR(0x7205d7);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7205d9:{NFSU2_TR(0x7205d9);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7205dc:{NFSU2_TR(0x7205dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7205de:{NFSU2_TR(0x7205de);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7205e0:{NFSU2_TR(0x7205e0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7205e3:{NFSU2_TR(0x7205e3);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7205e6:{NFSU2_TR(0x7205e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7205e9:L7205e9:{c.instructions+=2;NFSU2_TR(0x7205e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7205ec:{NFSU2_TR(0x7205ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7205ed:L7205ed:{c.instructions+=4;NFSU2_TR(0x7205ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7205f0:{NFSU2_TR(0x7205f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7205f1:{NFSU2_TR(0x7205f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7205f2:{NFSU2_TR(0x7205f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7205f3:L7205f3:{c.instructions+=11;NFSU2_TR(0x7205f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7205f4:{NFSU2_TR(0x7205f4);
__builtin_memmove((R+20),(R+16),4);
}
B7205f6:{NFSU2_TR(0x7205f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7205f7:{NFSU2_TR(0x7205f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7205fa:{NFSU2_TR(0x7205fa);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B7205fd:{NFSU2_TR(0x7205fd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7205ff:{NFSU2_TR(0x7205ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B720602:{NFSU2_TR(0x720602);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720603:{NFSU2_TR(0x720603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B720605:{NFSU2_TR(0x720605);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720608:{NFSU2_TR(0x720608);
if(r1(R+518)){{goto L72063f;}}
}
B72060a:L72060a:{c.instructions+=3;NFSU2_TR(0x72060a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72060d:{NFSU2_TR(0x72060d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B720610:{NFSU2_TR(0x720610);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720615;}}
}
B720612:L720612:{c.instructions+=1;NFSU2_TR(0x720612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B720615:L720615:{c.instructions+=9;NFSU2_TR(0x720615);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720617:{NFSU2_TR(0x720617);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B72061d:{NFSU2_TR(0x72061d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720620:{NFSU2_TR(0x720620);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720623:{NFSU2_TR(0x720623);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720626:{NFSU2_TR(0x720626);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B72062a:{NFSU2_TR(0x72062a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72062d:{NFSU2_TR(0x72062d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72062f:{NFSU2_TR(0x72062f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720634;}}
}
B720631:L720631:{c.instructions+=1;NFSU2_TR(0x720631);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B720634:L720634:{c.instructions+=3;NFSU2_TR(0x720634);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B720638:{NFSU2_TR(0x720638);
w2(R+0,u16(u32(r2(R+0))+u32(r2(R+24))));
}
B72063b:{NFSU2_TR(0x72063b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72063f:L72063f:{c.instructions+=6;NFSU2_TR(0x72063f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720641:{NFSU2_TR(0x720641);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B720645:{NFSU2_TR(0x720645);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B720647:{NFSU2_TR(0x720647);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72064b:{NFSU2_TR(0x72064b);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
}
B72064e:{NFSU2_TR(0x72064e);
if(r1(R+512)){{goto L720656;}}
}
B720650:L720650:{c.instructions+=2;NFSU2_TR(0x720650);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B720652:{NFSU2_TR(0x720652);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720656:L720656:{c.instructions+=3;NFSU2_TR(0x720656);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+24))));
}
B72065a:{NFSU2_TR(0x72065a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72065b:{NFSU2_TR(0x72065b);
if(r1(R+512)){{goto L720662;}}
}
B72065d:L72065d:{c.instructions+=1;NFSU2_TR(0x72065d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B720662:L720662:{c.instructions+=12;NFSU2_TR(0x720662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B720664:{NFSU2_TR(0x720664);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B720668:{NFSU2_TR(0x720668);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72066c:{NFSU2_TR(0x72066c);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72066e:{NFSU2_TR(0x72066e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B720672:{NFSU2_TR(0x720672);
w4(R+0,u32(r2(R+8)));
}
B720675:{NFSU2_TR(0x720675);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B720679:{NFSU2_TR(0x720679);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72067d:{NFSU2_TR(0x72067d);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72067e:{NFSU2_TR(0x72067e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720682:{NFSU2_TR(0x720682);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720683:{NFSU2_TR(0x720683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720684:L720684:{c.instructions+=4;NFSU2_TR(0x720684);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720688:{NFSU2_TR(0x720688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72068b:{NFSU2_TR(0x72068b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72068d:{NFSU2_TR(0x72068d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72069b;}}
}
B72068f:L72068f:{c.instructions+=3;NFSU2_TR(0x72068f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B720692:{NFSU2_TR(0x720692);
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
B720694:{NFSU2_TR(0x720694);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72069b;}}
}
B720696:L720696:{c.instructions+=2;NFSU2_TR(0x720696);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B72069a:{NFSU2_TR(0x72069a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72069b:L72069b:{c.instructions+=2;NFSU2_TR(0x72069b);
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
B72069d:{NFSU2_TR(0x72069d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72069e:L72069e:{c.instructions+=6;NFSU2_TR(0x72069e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7206a2:{NFSU2_TR(0x7206a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7206a6:{NFSU2_TR(0x7206a6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B7206ab:{NFSU2_TR(0x7206ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7206ae:{NFSU2_TR(0x7206ae);
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
B7206b0:{NFSU2_TR(0x7206b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7206c8;}}
}
B7206b2:L7206b2:{c.instructions+=3;NFSU2_TR(0x7206b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B7206b5:{NFSU2_TR(0x7206b5);
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
B7206b7:{NFSU2_TR(0x7206b7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7206c8;}}
}
B7206b9:L7206b9:{c.instructions+=4;NFSU2_TR(0x7206b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7206bc:{NFSU2_TR(0x7206bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7206c0:{NFSU2_TR(0x7206c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7206c4:{NFSU2_TR(0x7206c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7206c8:L7206c8:{c.instructions+=2;NFSU2_TR(0x7206c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7206cb:{NFSU2_TR(0x7206cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7206cc:L7206cc:{c.instructions+=5;NFSU2_TR(0x7206cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7206d0:{NFSU2_TR(0x7206d0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B7206d3:{NFSU2_TR(0x7206d3);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B7206d6:{NFSU2_TR(0x7206d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7206d9:{NFSU2_TR(0x7206d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7206f1;}}
}
B7206db:L7206db:{c.instructions+=3;NFSU2_TR(0x7206db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7206dc:{NFSU2_TR(0x7206dc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B7206df:{NFSU2_TR(0x7206df);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B7206e2:L7206e2:{c.instructions+=3;NFSU2_TR(0x7206e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7206e4:{NFSU2_TR(0x7206e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7206e6:{NFSU2_TR(0x7206e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7206ea;}}
}
B7206e8:L7206e8:{c.instructions+=1;NFSU2_TR(0x7206e8);
__builtin_memmove((R+0),(R+8),4);
}
B7206ea:L7206ea:{c.instructions+=3;NFSU2_TR(0x7206ea);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7206ed:{NFSU2_TR(0x7206ed);
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
B7206ee:{NFSU2_TR(0x7206ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7206e2u);}goto L7206e2;}}
}
B7206f0:L7206f0:{c.instructions+=1;NFSU2_TR(0x7206f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7206f1:L7206f1:{c.instructions+=1;NFSU2_TR(0x7206f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7206f2:L7206f2:{c.instructions+=5;NFSU2_TR(0x7206f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7206f6:{NFSU2_TR(0x7206f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7206f8:{NFSU2_TR(0x7206f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7206fb:{NFSU2_TR(0x7206fb);
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
B7206fd:{NFSU2_TR(0x7206fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720701;}}
}
B7206ff:L7206ff:{c.instructions+=1;NFSU2_TR(0x7206ff);
__builtin_memmove((R+0),(R+4),4);
}
B720701:L720701:{c.instructions+=1;NFSU2_TR(0x720701);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720702:L720702:{c.instructions+=5;NFSU2_TR(0x720702);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720706:{NFSU2_TR(0x720706);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B720709:{NFSU2_TR(0x720709);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B72070c:{NFSU2_TR(0x72070c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72070f:{NFSU2_TR(0x72070f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720727;}}
}
B720711:L720711:{c.instructions+=3;NFSU2_TR(0x720711);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720712:{NFSU2_TR(0x720712);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B720715:{NFSU2_TR(0x720715);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B720718:L720718:{c.instructions+=3;NFSU2_TR(0x720718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72071a:{NFSU2_TR(0x72071a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72071c:{NFSU2_TR(0x72071c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720720;}}
}
B72071e:L72071e:{c.instructions+=1;NFSU2_TR(0x72071e);
__builtin_memmove((R+0),(R+8),4);
}
B720720:L720720:{c.instructions+=3;NFSU2_TR(0x720720);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B720723:{NFSU2_TR(0x720723);
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
B720724:{NFSU2_TR(0x720724);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720718u);}goto L720718;}}
}
B720726:L720726:{c.instructions+=1;NFSU2_TR(0x720726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720727:L720727:{c.instructions+=1;NFSU2_TR(0x720727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720728:L720728:{c.instructions+=5;NFSU2_TR(0x720728);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72072c:{NFSU2_TR(0x72072c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72072e:{NFSU2_TR(0x72072e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720731:{NFSU2_TR(0x720731);
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
B720733:{NFSU2_TR(0x720733);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720737;}}
}
B720735:L720735:{c.instructions+=1;NFSU2_TR(0x720735);
__builtin_memmove((R+0),(R+4),4);
}
B720737:L720737:{c.instructions+=1;NFSU2_TR(0x720737);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720738:L720738:{c.instructions+=8;NFSU2_TR(0x720738);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720739:{NFSU2_TR(0x720739);
__builtin_memmove((R+20),(R+16),4);
}
B72073b:{NFSU2_TR(0x72073b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72073c:{NFSU2_TR(0x72073c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72073f:{NFSU2_TR(0x72073f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B720742:{NFSU2_TR(0x720742);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720745:{NFSU2_TR(0x720745);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B720748:{NFSU2_TR(0x720748);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720756;}}
}
B72074a:L72074a:{c.instructions+=2;NFSU2_TR(0x72074a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B72074d:{NFSU2_TR(0x72074d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72074e:L72074e:{c.instructions+=4;NFSU2_TR(0x72074e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B720750:{NFSU2_TR(0x720750);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B720753:{NFSU2_TR(0x720753);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B720754:{NFSU2_TR(0x720754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72074eu);}goto L72074e;}}
}
B720756:L720756:{c.instructions+=7;NFSU2_TR(0x720756);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720759:{NFSU2_TR(0x720759);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72075c:{NFSU2_TR(0x72075c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72075f:{NFSU2_TR(0x72075f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720762:{NFSU2_TR(0x720762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720765:{NFSU2_TR(0x720765);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720766:{NFSU2_TR(0x720766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720767:L720767:{c.instructions+=13;NFSU2_TR(0x720767);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720768:{NFSU2_TR(0x720768);
__builtin_memmove((R+20),(R+16),4);
}
B72076a:{NFSU2_TR(0x72076a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72076b:{NFSU2_TR(0x72076b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72076e:{NFSU2_TR(0x72076e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720771:{NFSU2_TR(0x720771);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B720774:{NFSU2_TR(0x720774);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720776:{NFSU2_TR(0x720776);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720779:{NFSU2_TR(0x720779);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72077c:{NFSU2_TR(0x72077c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72077f:{NFSU2_TR(0x72077f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720782:{NFSU2_TR(0x720782);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720783:{NFSU2_TR(0x720783);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720784:L720784:{c.instructions+=5;NFSU2_TR(0x720784);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720788:{NFSU2_TR(0x720788);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B72078b:{NFSU2_TR(0x72078b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B72078e:{NFSU2_TR(0x72078e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720791:{NFSU2_TR(0x720791);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72079f;}}
}
B720793:L720793:{c.instructions+=2;NFSU2_TR(0x720793);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B720796:{NFSU2_TR(0x720796);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B720797:L720797:{c.instructions+=4;NFSU2_TR(0x720797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B720799:{NFSU2_TR(0x720799);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72079c:{NFSU2_TR(0x72079c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72079d:{NFSU2_TR(0x72079d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720797u);}goto L720797;}}
}
B72079f:L72079f:{c.instructions+=1;NFSU2_TR(0x72079f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207a0:L7207a0:{c.instructions+=4;NFSU2_TR(0x7207a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7207a4:{NFSU2_TR(0x7207a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7207a7:{NFSU2_TR(0x7207a7);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7207a9:{NFSU2_TR(0x7207a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207aa:L7207aa:{c.instructions+=4;NFSU2_TR(0x7207aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7207ae:{NFSU2_TR(0x7207ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7207b0:{NFSU2_TR(0x7207b0);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7207b3:{NFSU2_TR(0x7207b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207b4:L7207b4:{c.instructions+=4;NFSU2_TR(0x7207b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7207b8:{NFSU2_TR(0x7207b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7207bb:{NFSU2_TR(0x7207bb);
u8 U[36];
w8(U+12,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w8(U+20,u64(s64(s32(r4(U+0)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+0,u32(r8(U+28)));
w8(U+4,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+4))!=(r8(U+28))));
__builtin_memmove((R+523),(R+512),1);
}
B7207be:{NFSU2_TR(0x7207be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207bf:L7207bf:{c.instructions+=4;NFSU2_TR(0x7207bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7207c3:{NFSU2_TR(0x7207c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7207c6:{NFSU2_TR(0x7207c6);
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
B7207c8:{NFSU2_TR(0x7207c8);
if(r1(R+518)){{goto L7207d0;}}
}
B7207ca:L7207ca:{c.instructions+=4;NFSU2_TR(0x7207ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7207cc:{NFSU2_TR(0x7207cc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7207cd:{NFSU2_TR(0x7207cd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7207cd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7207cd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7207cf:{NFSU2_TR(0x7207cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207d0:L7207d0:{c.instructions+=2;NFSU2_TR(0x7207d0);
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
B7207d2:{NFSU2_TR(0x7207d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207d3:L7207d3:{c.instructions+=4;NFSU2_TR(0x7207d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7207d7:{NFSU2_TR(0x7207d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7207da:{NFSU2_TR(0x7207da);
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
B7207dc:{NFSU2_TR(0x7207dc);
if(r1(R+518)){{goto L7207e6;}}
}
B7207de:L7207de:{c.instructions+=5;NFSU2_TR(0x7207de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7207e0:{NFSU2_TR(0x7207e0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7207e1:{NFSU2_TR(0x7207e1);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7207e1);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7207e1);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7207e3:{NFSU2_TR(0x7207e3);
__builtin_memmove((R+0),(R+8),4);
}
B7207e5:{NFSU2_TR(0x7207e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207e6:L7207e6:{c.instructions+=2;NFSU2_TR(0x7207e6);
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
B7207e8:{NFSU2_TR(0x7207e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7207e9:L7207e9:{c.instructions+=3;NFSU2_TR(0x7207e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7207ed:{NFSU2_TR(0x7207ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7207ef:{NFSU2_TR(0x7207ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7207f5;}}
}
B7207f1:L7207f1:{c.instructions+=2;NFSU2_TR(0x7207f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7207f3:{NFSU2_TR(0x7207f3);
{goto L720800;}
}
B7207f5:L7207f5:{c.instructions+=3;NFSU2_TR(0x7207f5);
w4(R+0,u32(0xffffull));
}
B7207fa:{NFSU2_TR(0x7207fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7207fc:{NFSU2_TR(0x7207fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720800;}}
}
B7207fe:L7207fe:{c.instructions+=1;NFSU2_TR(0x7207fe);
__builtin_memmove((R+4),(R+0),4);
}
B720800:L720800:{c.instructions+=8;NFSU2_TR(0x720800);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720804:{NFSU2_TR(0x720804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B720807:{NFSU2_TR(0x720807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720808:{NFSU2_TR(0x720808);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B72080e:{NFSU2_TR(0x72080e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B720811:{NFSU2_TR(0x720811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720812:{NFSU2_TR(0x720812);
u8 U[14];
w4(U+0,u32(u32(u32(0x8eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B72081a:{NFSU2_TR(0x72081a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72081full));
TAIL_STATIC(0x724d0eu,724);
}
B72081f:L72081f:{c.instructions+=3;NFSU2_TR(0x72081f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720820:{NFSU2_TR(0x720820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720821:{NFSU2_TR(0x720821);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720822:L720822:{c.instructions+=4;NFSU2_TR(0x720822);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720826:{NFSU2_TR(0x720826);
w4(R+4,u32(0x2000ull));
}
B72082b:{NFSU2_TR(0x72082b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72082d:{NFSU2_TR(0x72082d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720838;}}
}
B72082f:L72082f:{c.instructions+=3;NFSU2_TR(0x72082f);
w4(R+4,u32(0x800ull));
}
B720834:{NFSU2_TR(0x720834);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B720836:{NFSU2_TR(0x720836);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72083a;}}
}
B720838:L720838:{c.instructions+=1;NFSU2_TR(0x720838);
__builtin_memmove((R+0),(R+4),4);
}
B72083a:L72083a:{c.instructions+=9;NFSU2_TR(0x72083a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72083e:{NFSU2_TR(0x72083e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72083f:{NFSU2_TR(0x72083f);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B720845:{NFSU2_TR(0x720845);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B720848:{NFSU2_TR(0x720848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720849:{NFSU2_TR(0x720849);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B72084c:{NFSU2_TR(0x72084c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72084d:{NFSU2_TR(0x72084d);
u8 U[14];
w4(U+0,u32(u32(u32(0x6eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B720852:{NFSU2_TR(0x720852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720857ull));
TAIL_STATIC(0x724f38u,724);
}
B720857:L720857:{c.instructions+=4;NFSU2_TR(0x720857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720858:{NFSU2_TR(0x720858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720859:{NFSU2_TR(0x720859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72085a:{NFSU2_TR(0x72085a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72085b:L72085b:{c.instructions+=11;NFSU2_TR(0x72085b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72085c:{NFSU2_TR(0x72085c);
__builtin_memmove((R+20),(R+16),4);
}
B72085e:{NFSU2_TR(0x72085e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720861:{NFSU2_TR(0x720861);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720862:{NFSU2_TR(0x720862);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720863:{NFSU2_TR(0x720863);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B720866:{NFSU2_TR(0x720866);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B720869:{NFSU2_TR(0x720869);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B72086f:{NFSU2_TR(0x72086f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B720871:{NFSU2_TR(0x720871);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B720874:{NFSU2_TR(0x720874);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72087b;}}
}
B720876:L720876:{c.instructions+=2;NFSU2_TR(0x720876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720879:{NFSU2_TR(0x720879);
{goto L720888;}
}
B72087b:L72087b:{c.instructions+=3;NFSU2_TR(0x72087b);
w4(R+0,u32(0x7fffull));
}
B720880:{NFSU2_TR(0x720880);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720883:{NFSU2_TR(0x720883);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720888;}}
}
B720885:L720885:{c.instructions+=1;NFSU2_TR(0x720885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720888:L720888:{c.instructions+=7;NFSU2_TR(0x720888);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72088b:{NFSU2_TR(0x72088b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72088e:{NFSU2_TR(0x72088e);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720894:{NFSU2_TR(0x720894);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B720897:{NFSU2_TR(0x720897);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72089d:{NFSU2_TR(0x72089d);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7208a0:{NFSU2_TR(0x7208a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7208d4;}}
}
B7208a2:L7208a2:{c.instructions+=2;NFSU2_TR(0x7208a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7208a3:{NFSU2_TR(0x7208a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7208a6:L7208a6:{c.instructions+=10;NFSU2_TR(0x7208a6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B7208a9:{NFSU2_TR(0x7208a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7208ac:{NFSU2_TR(0x7208ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7208af:{NFSU2_TR(0x7208af);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7208b2:{NFSU2_TR(0x7208b2);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B7208b8:{NFSU2_TR(0x7208b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7208b9:{NFSU2_TR(0x7208b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7208bc:{NFSU2_TR(0x7208bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7208bf:{NFSU2_TR(0x7208bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7208c2:{NFSU2_TR(0x7208c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7208c7ull));
TAIL_STATIC(0x724f5du,724);
}
B7208c7:L7208c7:{c.instructions+=7;NFSU2_TR(0x7208c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7208cb:{NFSU2_TR(0x7208cb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7208cc:{NFSU2_TR(0x7208cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7208cd:{NFSU2_TR(0x7208cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7208ce:{NFSU2_TR(0x7208ce);
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
B7208d0:{NFSU2_TR(0x7208d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7208d1:{NFSU2_TR(0x7208d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7208a6u);}goto L7208a6;}}
}
B7208d3:L7208d3:{c.instructions+=1;NFSU2_TR(0x7208d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7208d4:L7208d4:{c.instructions+=4;NFSU2_TR(0x7208d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7208d5:{NFSU2_TR(0x7208d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7208d6:{NFSU2_TR(0x7208d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7208d7:{NFSU2_TR(0x7208d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7208d8:L7208d8:{c.instructions+=6;NFSU2_TR(0x7208d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7208dc:{NFSU2_TR(0x7208dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7208df:{NFSU2_TR(0x7208df);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7208e2:{NFSU2_TR(0x7208e2);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B7208e8:{NFSU2_TR(0x7208e8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
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
B7208ec:{NFSU2_TR(0x7208ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7208fe;}}
}
B7208ee:L7208ee:{c.instructions+=4;NFSU2_TR(0x7208ee);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7208f3:{NFSU2_TR(0x7208f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7208f4:{NFSU2_TR(0x7208f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7208f8:{NFSU2_TR(0x7208f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7208fdull));
TAIL_STATIC(0x724fc5u,724);
}
B7208fd:L7208fd:{c.instructions+=1;NFSU2_TR(0x7208fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7208fe:L7208fe:{c.instructions+=1;NFSU2_TR(0x7208fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7208ff:L7208ff:{c.instructions+=4;NFSU2_TR(0x7208ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720903:{NFSU2_TR(0x720903);
w4(R+0,u32(0xffffc000ull));
}
B720908:{NFSU2_TR(0x720908);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72090a:{NFSU2_TR(0x72090a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720915;}}
}
B72090c:L72090c:{c.instructions+=3;NFSU2_TR(0x72090c);
w4(R+0,u32(0x3fffull));
}
B720911:{NFSU2_TR(0x720911);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720913:{NFSU2_TR(0x720913);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720917;}}
}
B720915:L720915:{c.instructions+=1;NFSU2_TR(0x720915);
__builtin_memmove((R+4),(R+0),4);
}
B720917:L720917:{c.instructions+=8;NFSU2_TR(0x720917);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72091b:{NFSU2_TR(0x72091b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72091e:{NFSU2_TR(0x72091e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72091f:{NFSU2_TR(0x72091f);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B720925:{NFSU2_TR(0x720925);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B720928:{NFSU2_TR(0x720928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720929:{NFSU2_TR(0x720929);
u8 U[14];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B72092e:{NFSU2_TR(0x72092e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720933ull));
TAIL_STATIC(0x724fc5u,724);
}
B720933:L720933:{c.instructions+=3;NFSU2_TR(0x720933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720934:{NFSU2_TR(0x720934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720935:{NFSU2_TR(0x720935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720936:L720936:{c.instructions+=6;NFSU2_TR(0x720936);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720937:{NFSU2_TR(0x720937);
__builtin_memmove((R+20),(R+16),4);
}
B720939:{NFSU2_TR(0x720939);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72093a:{NFSU2_TR(0x72093a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72093d:{NFSU2_TR(0x72093d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72093f:{NFSU2_TR(0x72093f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720945;}}
}
B720941:L720941:{c.instructions+=2;NFSU2_TR(0x720941);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B720943:{NFSU2_TR(0x720943);
{goto L720950;}
}
B720945:L720945:{c.instructions+=3;NFSU2_TR(0x720945);
w4(R+0,u32(0x7fffull));
}
B72094a:{NFSU2_TR(0x72094a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72094c:{NFSU2_TR(0x72094c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720950;}}
}
B72094e:L72094e:{c.instructions+=1;NFSU2_TR(0x72094e);
__builtin_memmove((R+24),(R+0),4);
}
B720950:L720950:{c.instructions+=18;NFSU2_TR(0x720950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720953:{NFSU2_TR(0x720953);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B720956:{NFSU2_TR(0x720956);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B720959:{NFSU2_TR(0x720959);
__builtin_memmove((R+8),(R+24),4);
}
B72095b:{NFSU2_TR(0x72095b);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B720961:{NFSU2_TR(0x720961);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B720964:{NFSU2_TR(0x720964);
u8 U[13];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B720968:{NFSU2_TR(0x720968);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B72096e:{NFSU2_TR(0x72096e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B720970:{NFSU2_TR(0x720970);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B720974:{NFSU2_TR(0x720974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720977:{NFSU2_TR(0x720977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72097a:{NFSU2_TR(0x72097a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72097c:{NFSU2_TR(0x72097c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72097d:{NFSU2_TR(0x72097d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720980:{NFSU2_TR(0x720980);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720986:{NFSU2_TR(0x720986);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720988:{NFSU2_TR(0x720988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72098dull));
TAIL_STATIC(0x725022u,725);
}
B72098d:L72098d:{c.instructions+=5;NFSU2_TR(0x72098d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72098e:{NFSU2_TR(0x72098e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72098f:{NFSU2_TR(0x72098f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720990:{NFSU2_TR(0x720990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B720991:{NFSU2_TR(0x720991);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720992:L720992:{c.instructions+=3;NFSU2_TR(0x720992);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720996:{NFSU2_TR(0x720996);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B720998:{NFSU2_TR(0x720998);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72099e;}}
}
B72099a:L72099a:{c.instructions+=2;NFSU2_TR(0x72099a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72099c:{NFSU2_TR(0x72099c);
{goto L7209a9;}
}
B72099e:L72099e:{c.instructions+=3;NFSU2_TR(0x72099e);
w4(R+0,u32(0xffffull));
}
B7209a3:{NFSU2_TR(0x7209a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7209a5:{NFSU2_TR(0x7209a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7209a9;}}
}
B7209a7:L7209a7:{c.instructions+=1;NFSU2_TR(0x7209a7);
__builtin_memmove((R+4),(R+0),4);
}
B7209a9:L7209a9:{c.instructions+=3;NFSU2_TR(0x7209a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7209aa:{NFSU2_TR(0x7209aa);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7209ae:{NFSU2_TR(0x7209ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7209b3ull));
TAIL_STATIC(0x72505eu,725);
}
B7209b3:L7209b3:{c.instructions+=3;NFSU2_TR(0x7209b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7209b4:{NFSU2_TR(0x7209b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7209b5:{NFSU2_TR(0x7209b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7209b6:L7209b6:{c.instructions+=3;NFSU2_TR(0x7209b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7209ba:{NFSU2_TR(0x7209ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7209bc:{NFSU2_TR(0x7209bc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7209c2;}}
}
B7209be:L7209be:{c.instructions+=2;NFSU2_TR(0x7209be);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7209c0:{NFSU2_TR(0x7209c0);
{goto L7209cd;}
}
B7209c2:L7209c2:{c.instructions+=3;NFSU2_TR(0x7209c2);
w4(R+0,u32(0xffffull));
}
B7209c7:{NFSU2_TR(0x7209c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7209c9:{NFSU2_TR(0x7209c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7209cd;}}
}
B7209cb:L7209cb:{c.instructions+=1;NFSU2_TR(0x7209cb);
__builtin_memmove((R+4),(R+0),4);
}
B7209cd:L7209cd:{c.instructions+=3;NFSU2_TR(0x7209cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7209ce:{NFSU2_TR(0x7209ce);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7209d2:{NFSU2_TR(0x7209d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7209d7ull));
TAIL_STATIC(0x725081u,725);
}
B7209d7:L7209d7:{c.instructions+=3;NFSU2_TR(0x7209d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7209d8:{NFSU2_TR(0x7209d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7209d9:{NFSU2_TR(0x7209d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7209da:L7209da:{c.instructions+=11;NFSU2_TR(0x7209da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7209db:{NFSU2_TR(0x7209db);
__builtin_memmove((R+20),(R+16),4);
}
B7209dd:{NFSU2_TR(0x7209dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7209e0:{NFSU2_TR(0x7209e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7209e1:{NFSU2_TR(0x7209e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7209e2:{NFSU2_TR(0x7209e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7209e5:{NFSU2_TR(0x7209e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7209e8:{NFSU2_TR(0x7209e8);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B7209ee:{NFSU2_TR(0x7209ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7209f0:{NFSU2_TR(0x7209f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7209f3:{NFSU2_TR(0x7209f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7209f9;}}
}
B7209f5:L7209f5:{c.instructions+=2;NFSU2_TR(0x7209f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7209f7:{NFSU2_TR(0x7209f7);
{goto L720a06;}
}
B7209f9:L7209f9:{c.instructions+=3;NFSU2_TR(0x7209f9);
w4(R+0,u32(0x7fffull));
}
B7209fe:{NFSU2_TR(0x7209fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720a01:{NFSU2_TR(0x720a01);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720a06;}}
}
B720a03:L720a03:{c.instructions+=1;NFSU2_TR(0x720a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720a06:L720a06:{c.instructions+=5;NFSU2_TR(0x720a06);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B720a09:{NFSU2_TR(0x720a09);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+4)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B720a0c:{NFSU2_TR(0x720a0c);
__builtin_memmove((R+12),(R+0),4);
}
B720a0e:{NFSU2_TR(0x720a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720a11:{NFSU2_TR(0x720a11);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L720a40;}}
}
B720a13:L720a13:{c.instructions+=2;NFSU2_TR(0x720a13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720a14:{NFSU2_TR(0x720a14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720a17:L720a17:{c.instructions+=7;NFSU2_TR(0x720a17);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B720a1a:{NFSU2_TR(0x720a1a);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B720a20:{NFSU2_TR(0x720a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B720a23:{NFSU2_TR(0x720a23);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B720a26:{NFSU2_TR(0x720a26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720a27:{NFSU2_TR(0x720a27);
u8 U[13];
w4(U+0,u32(u32(u32(0x5full))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B720a2b:{NFSU2_TR(0x720a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720a30ull));
TAIL_STATIC(0x724ccbu,724);
}
B720a30:L720a30:{c.instructions+=7;NFSU2_TR(0x720a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720a33:{NFSU2_TR(0x720a33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B720a37:{NFSU2_TR(0x720a37);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B720a38:{NFSU2_TR(0x720a38);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B720a39:{NFSU2_TR(0x720a39);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720a3c:{NFSU2_TR(0x720a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720a3d:{NFSU2_TR(0x720a3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720a17u);}goto L720a17;}}
}
B720a3f:L720a3f:{c.instructions+=1;NFSU2_TR(0x720a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720a40:L720a40:{c.instructions+=4;NFSU2_TR(0x720a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720a41:{NFSU2_TR(0x720a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720a42:{NFSU2_TR(0x720a42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B720a43:{NFSU2_TR(0x720a43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720a44:L720a44:{c.instructions+=3;NFSU2_TR(0x720a44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720a46:{NFSU2_TR(0x720a46);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720a4a:{NFSU2_TR(0x720a4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720a5b;}}
}
B720a4c:L720a4c:{c.instructions+=3;NFSU2_TR(0x720a4c);
w4(R+0,u32(0xffffull));
}
B720a51:{NFSU2_TR(0x720a51);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720a55:{NFSU2_TR(0x720a55);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720a5b;}}
}
B720a57:L720a57:{c.instructions+=1;NFSU2_TR(0x720a57);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720a5b:L720a5b:{c.instructions+=3;NFSU2_TR(0x720a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720a5f:{NFSU2_TR(0x720a5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720a63:{NFSU2_TR(0x720a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720a64:L720a64:{c.instructions+=4;NFSU2_TR(0x720a64);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720a68:{NFSU2_TR(0x720a68);
w4(R+0,u32(0x2000ull));
}
B720a6d:{NFSU2_TR(0x720a6d);
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
B720a6f:{NFSU2_TR(0x720a6f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720a7a;}}
}
B720a71:L720a71:{c.instructions+=3;NFSU2_TR(0x720a71);
w4(R+0,u32(0x800ull));
}
B720a76:{NFSU2_TR(0x720a76);
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
B720a78:{NFSU2_TR(0x720a78);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720a7c;}}
}
B720a7a:L720a7a:{c.instructions+=1;NFSU2_TR(0x720a7a);
__builtin_memmove((R+4),(R+0),4);
}
B720a7c:L720a7c:{c.instructions+=3;NFSU2_TR(0x720a7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720a80:{NFSU2_TR(0x720a80);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720a84:{NFSU2_TR(0x720a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720a85:L720a85:{c.instructions+=3;NFSU2_TR(0x720a85);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720a87:{NFSU2_TR(0x720a87);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720a8b:{NFSU2_TR(0x720a8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720a9c;}}
}
B720a8d:L720a8d:{c.instructions+=3;NFSU2_TR(0x720a8d);
w4(R+0,u32(0x7fffull));
}
B720a92:{NFSU2_TR(0x720a92);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720a96:{NFSU2_TR(0x720a96);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720a9c;}}
}
B720a98:L720a98:{c.instructions+=1;NFSU2_TR(0x720a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720a9c:L720a9c:{c.instructions+=4;NFSU2_TR(0x720a9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720aa0:{NFSU2_TR(0x720aa0);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B720aa3:{NFSU2_TR(0x720aa3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B720aa5:{NFSU2_TR(0x720aa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720aa6:L720aa6:{c.instructions+=4;NFSU2_TR(0x720aa6);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B720aab:{NFSU2_TR(0x720aab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720aaf:{NFSU2_TR(0x720aaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720ab3:{NFSU2_TR(0x720ab3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720ab4:L720ab4:{c.instructions+=3;NFSU2_TR(0x720ab4);
w4(R+0,u32(0xffffc000ull));
}
B720ab9:{NFSU2_TR(0x720ab9);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720abd:{NFSU2_TR(0x720abd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720ace;}}
}
B720abf:L720abf:{c.instructions+=3;NFSU2_TR(0x720abf);
w4(R+0,u32(0x3fffull));
}
B720ac4:{NFSU2_TR(0x720ac4);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720ac8:{NFSU2_TR(0x720ac8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720ace;}}
}
B720aca:L720aca:{c.instructions+=1;NFSU2_TR(0x720aca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720ace:L720ace:{c.instructions+=3;NFSU2_TR(0x720ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720ad2:{NFSU2_TR(0x720ad2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720ad6:{NFSU2_TR(0x720ad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720ad7:L720ad7:{c.instructions+=3;NFSU2_TR(0x720ad7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720ad9:{NFSU2_TR(0x720ad9);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720add:{NFSU2_TR(0x720add);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720aee;}}
}
B720adf:L720adf:{c.instructions+=3;NFSU2_TR(0x720adf);
w4(R+0,u32(0x7fffull));
}
B720ae4:{NFSU2_TR(0x720ae4);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720ae8:{NFSU2_TR(0x720ae8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720aee;}}
}
B720aea:L720aea:{c.instructions+=1;NFSU2_TR(0x720aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720aee:L720aee:{c.instructions+=4;NFSU2_TR(0x720aee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720af2:{NFSU2_TR(0x720af2);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B720af5:{NFSU2_TR(0x720af5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720af8:{NFSU2_TR(0x720af8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720af9:L720af9:{c.instructions+=3;NFSU2_TR(0x720af9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720afb:{NFSU2_TR(0x720afb);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720aff:{NFSU2_TR(0x720aff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720b10;}}
}
B720b01:L720b01:{c.instructions+=3;NFSU2_TR(0x720b01);
w4(R+0,u32(0xffffull));
}
B720b06:{NFSU2_TR(0x720b06);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720b0a:{NFSU2_TR(0x720b0a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720b10;}}
}
B720b0c:L720b0c:{c.instructions+=1;NFSU2_TR(0x720b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720b10:L720b10:{c.instructions+=3;NFSU2_TR(0x720b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720b14:{NFSU2_TR(0x720b14);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720b18:{NFSU2_TR(0x720b18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720b19:L720b19:{c.instructions+=3;NFSU2_TR(0x720b19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720b1b:{NFSU2_TR(0x720b1b);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720b1f:{NFSU2_TR(0x720b1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720b30;}}
}
B720b21:L720b21:{c.instructions+=3;NFSU2_TR(0x720b21);
w4(R+0,u32(0xffffull));
}
B720b26:{NFSU2_TR(0x720b26);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720b2a:{NFSU2_TR(0x720b2a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720b30;}}
}
B720b2c:L720b2c:{c.instructions+=1;NFSU2_TR(0x720b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720b30:L720b30:{c.instructions+=3;NFSU2_TR(0x720b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720b34:{NFSU2_TR(0x720b34);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B720b38:{NFSU2_TR(0x720b38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720b39:L720b39:{c.instructions+=3;NFSU2_TR(0x720b39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720b3b:{NFSU2_TR(0x720b3b);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720b3f:{NFSU2_TR(0x720b3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720b50;}}
}
B720b41:L720b41:{c.instructions+=3;NFSU2_TR(0x720b41);
w4(R+0,u32(0x7fffull));
}
B720b46:{NFSU2_TR(0x720b46);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B720b4a:{NFSU2_TR(0x720b4a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720b50;}}
}
B720b4c:L720b4c:{c.instructions+=1;NFSU2_TR(0x720b4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720b50:L720b50:{c.instructions+=4;NFSU2_TR(0x720b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720b54:{NFSU2_TR(0x720b54);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B720b57:{NFSU2_TR(0x720b57);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720b5a:{NFSU2_TR(0x720b5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720b5b:L720b5b:{c.instructions+=9;NFSU2_TR(0x720b5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720b5c:{NFSU2_TR(0x720b5c);
__builtin_memmove((R+20),(R+16),4);
}
B720b5e:{NFSU2_TR(0x720b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B720b61:{NFSU2_TR(0x720b61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720b62:{NFSU2_TR(0x720b62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720b63:{NFSU2_TR(0x720b63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B720b66:{NFSU2_TR(0x720b66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720b67:{NFSU2_TR(0x720b67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720b68:{NFSU2_TR(0x720b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720b6dull));
TAIL_STATIC(0x721a6bu,721);
}
B720b6d:L720b6d:{c.instructions+=7;NFSU2_TR(0x720b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720b70:{NFSU2_TR(0x720b70);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B720b72:{NFSU2_TR(0x720b72);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B720b75:{NFSU2_TR(0x720b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720b76:{NFSU2_TR(0x720b76);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffedull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720b79:{NFSU2_TR(0x720b79);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B720b7c:{NFSU2_TR(0x720b7c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L720ba3;}}
}
B720b7e:L720b7e:{c.instructions+=5;NFSU2_TR(0x720b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720b81:{NFSU2_TR(0x720b81);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B720b84:{NFSU2_TR(0x720b84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720b87:{NFSU2_TR(0x720b87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720b88:{NFSU2_TR(0x720b88);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817f60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720b8full));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720b8f:L720b8f:{c.instructions+=9;NFSU2_TR(0x720b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720b92:{NFSU2_TR(0x720b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720b95:{NFSU2_TR(0x720b95);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B720b99:{NFSU2_TR(0x720b99);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B720b9c:{NFSU2_TR(0x720b9c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B720b9d:{NFSU2_TR(0x720b9d);
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
B720b9f:{NFSU2_TR(0x720b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720ba0:{NFSU2_TR(0x720ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720ba1:{NFSU2_TR(0x720ba1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720b7eu);}goto L720b7e;}}
}
B720ba3:L720ba3:{c.instructions+=7;NFSU2_TR(0x720ba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B720ba6:{NFSU2_TR(0x720ba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720ba7:{NFSU2_TR(0x720ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720baa:{NFSU2_TR(0x720baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720bad:{NFSU2_TR(0x720bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B720baf:{NFSU2_TR(0x720baf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720bb2:{NFSU2_TR(0x720bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720bb7ull));
TAIL_STATIC(0x724333u,724);
}
B720bb7:L720bb7:{c.instructions+=6;NFSU2_TR(0x720bb7);
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
B720bba:{NFSU2_TR(0x720bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720bbb:{NFSU2_TR(0x720bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720bbc:{NFSU2_TR(0x720bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720bbd:{NFSU2_TR(0x720bbd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720bbe:{NFSU2_TR(0x720bbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720bbf:L720bbf:{c.instructions+=3;NFSU2_TR(0x720bbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720bc3:{NFSU2_TR(0x720bc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720bc6:{NFSU2_TR(0x720bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720bcbull));
TAIL_STATIC(0x723e1eu,723);
}
B720bcb:L720bcb:{c.instructions+=2;NFSU2_TR(0x720bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720bcc:{NFSU2_TR(0x720bcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720bcd:L720bcd:{c.instructions+=3;NFSU2_TR(0x720bcd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720bcf:{NFSU2_TR(0x720bcf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720bd3:{NFSU2_TR(0x720bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720bd8ull));
TAIL_STATIC(0x72412au,724);
}
B720bd8:L720bd8:{c.instructions+=3;NFSU2_TR(0x720bd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720bda:{NFSU2_TR(0x720bda);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720bde:{NFSU2_TR(0x720bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720be3ull));
TAIL_STATIC(0x723d9bu,723);
}
B720be3:L720be3:{c.instructions+=2;NFSU2_TR(0x720be3);
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
B720be6:{NFSU2_TR(0x720be6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720be7:L720be7:{c.instructions+=11;NFSU2_TR(0x720be7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720be8:{NFSU2_TR(0x720be8);
__builtin_memmove((R+20),(R+16),4);
}
B720bea:{NFSU2_TR(0x720bea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720beb:{NFSU2_TR(0x720beb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720bec:{NFSU2_TR(0x720bec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720bed:{NFSU2_TR(0x720bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720bf0:{NFSU2_TR(0x720bf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720bf1:{NFSU2_TR(0x720bf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720bf4:{NFSU2_TR(0x720bf4);
w4(R+12,u32(0x1000ull));
}
B720bf9:{NFSU2_TR(0x720bf9);
w4(R+28,u32(0x7fffull));
}
B720bfe:{NFSU2_TR(0x720bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720c03ull));
TAIL_STATIC(0x725480u,725);
}
B720c03:L720c03:{c.instructions+=4;NFSU2_TR(0x720c03);
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
B720c05:{NFSU2_TR(0x720c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720c06:{NFSU2_TR(0x720c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720c09:{NFSU2_TR(0x720c09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720c55;}}
}
B720c0b:L720c0b:{c.instructions+=4;NFSU2_TR(0x720c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720c0f:{NFSU2_TR(0x720c0f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720c13:{NFSU2_TR(0x720c13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B720c16:{NFSU2_TR(0x720c16);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L720c40;}}
}
B720c18:L720c18:{c.instructions+=3;NFSU2_TR(0x720c18);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B720c1a:{NFSU2_TR(0x720c1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B720c1c:{NFSU2_TR(0x720c1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720c26;}}
}
B720c1e:L720c1e:{c.instructions+=3;NFSU2_TR(0x720c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B720c21:{NFSU2_TR(0x720c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720c24:{NFSU2_TR(0x720c24);
{goto L720c31;}
}
B720c26:L720c26:{c.instructions+=2;NFSU2_TR(0x720c26);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B720c29:{NFSU2_TR(0x720c29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720c31;}}
}
B720c2b:L720c2b:{c.instructions+=2;NFSU2_TR(0x720c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B720c2e:{NFSU2_TR(0x720c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720c31:L720c31:{c.instructions+=5;NFSU2_TR(0x720c31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B720c35:{NFSU2_TR(0x720c35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B720c38:{NFSU2_TR(0x720c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720c3b:{NFSU2_TR(0x720c3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B720c3e:{NFSU2_TR(0x720c3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720c18u);}goto L720c18;}}
}
B720c40:L720c40:{c.instructions+=3;NFSU2_TR(0x720c40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c41:{NFSU2_TR(0x720c41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720c44:{NFSU2_TR(0x720c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720c49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7207e9u);}goto L7207e9;}
}
B720c49:L720c49:{c.instructions+=3;NFSU2_TR(0x720c49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c4a:{NFSU2_TR(0x720c4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720c4d:{NFSU2_TR(0x720c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720c52ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72085bu);}goto L72085b;}
}
B720c52:L720c52:{c.instructions+=1;NFSU2_TR(0x720c52);
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
B720c55:L720c55:{c.instructions+=5;NFSU2_TR(0x720c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720c56:{NFSU2_TR(0x720c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720c57:{NFSU2_TR(0x720c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720c58:{NFSU2_TR(0x720c58);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720c59:{NFSU2_TR(0x720c59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720c5a:L720c5a:{c.instructions+=5;NFSU2_TR(0x720c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720c5e:{NFSU2_TR(0x720c5e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B720c60:{NFSU2_TR(0x720c60);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720c63:{NFSU2_TR(0x720c63);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B720c67:{NFSU2_TR(0x720c67);
if(r1(R+518)){{goto L720c79;}}
}
B720c69:L720c69:{c.instructions+=5;NFSU2_TR(0x720c69);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B720c6d:{NFSU2_TR(0x720c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B720c70:{NFSU2_TR(0x720c70);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B720c74:{NFSU2_TR(0x720c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720c77:{NFSU2_TR(0x720c77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B720c79:L720c79:{c.instructions+=2;NFSU2_TR(0x720c79);
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
B720c7b:{NFSU2_TR(0x720c7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720c7c:L720c7c:{c.instructions+=10;NFSU2_TR(0x720c7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c7d:{NFSU2_TR(0x720c7d);
__builtin_memmove((R+20),(R+16),4);
}
B720c7f:{NFSU2_TR(0x720c7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c80:{NFSU2_TR(0x720c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c81:{NFSU2_TR(0x720c81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c82:{NFSU2_TR(0x720c82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c83:{NFSU2_TR(0x720c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720c86:{NFSU2_TR(0x720c86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c87:{NFSU2_TR(0x720c87);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720c8a:{NFSU2_TR(0x720c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720c8full));
TAIL_STATIC(0x725480u,725);
}
B720c8f:L720c8f:{c.instructions+=5;NFSU2_TR(0x720c8f);
__builtin_memmove((R+12),(R+0),4);
}
B720c91:{NFSU2_TR(0x720c91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B720c93:{NFSU2_TR(0x720c93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720c94:{NFSU2_TR(0x720c94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B720c97:{NFSU2_TR(0x720c97);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720ca5;}}
}
B720c99:L720c99:{c.instructions+=2;NFSU2_TR(0x720c99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720c9a:{NFSU2_TR(0x720c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720c9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720c5au);}goto L720c5a;}
}
B720c9f:L720c9f:{c.instructions+=2;NFSU2_TR(0x720c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720ca0:{NFSU2_TR(0x720ca0);
{goto L720d52;}
}
B720ca5:L720ca5:{c.instructions+=3;NFSU2_TR(0x720ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720ca9:{NFSU2_TR(0x720ca9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720cad:{NFSU2_TR(0x720cad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L720cda;}}
}
B720caf:L720caf:{c.instructions+=3;NFSU2_TR(0x720caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720cb2:{NFSU2_TR(0x720cb2);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B720cb5:{NFSU2_TR(0x720cb5);
if(r1(R+518)){{goto L720ccb;}}
}
B720cb7:L720cb7:{c.instructions+=4;NFSU2_TR(0x720cb7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B720cba:{NFSU2_TR(0x720cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720cbb:{NFSU2_TR(0x720cbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720cbc:{NFSU2_TR(0x720cbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817f30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720cc3ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720cc3:L720cc3:{c.instructions+=4;NFSU2_TR(0x720cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720cc6:{NFSU2_TR(0x720cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720cc7:{NFSU2_TR(0x720cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720cc8:{NFSU2_TR(0x720cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720ccb:L720ccb:{c.instructions+=5;NFSU2_TR(0x720ccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B720ccf:{NFSU2_TR(0x720ccf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B720cd2:{NFSU2_TR(0x720cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B720cd5:{NFSU2_TR(0x720cd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B720cd8:{NFSU2_TR(0x720cd8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720cafu);}goto L720caf;}}
}
B720cda:L720cda:{c.instructions+=2;NFSU2_TR(0x720cda);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720cde:{NFSU2_TR(0x720cde);
if(r1(R+518)){{goto L720d4f;}}
}
B720ce0:L720ce0:{c.instructions+=10;NFSU2_TR(0x720ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B720ce3:{NFSU2_TR(0x720ce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B720ce6:{NFSU2_TR(0x720ce6);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B720cec:{NFSU2_TR(0x720cec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720ced:{NFSU2_TR(0x720ced);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B720cf1:{NFSU2_TR(0x720cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720cf4:{NFSU2_TR(0x720cf4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720cf7:{NFSU2_TR(0x720cf7);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B720cfd:{NFSU2_TR(0x720cfd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720d00:{NFSU2_TR(0x720d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720d05ull));
TAIL_STATIC(0x7254b4u,725);
}
B720d05:L720d05:{c.instructions+=11;NFSU2_TR(0x720d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720d08:{NFSU2_TR(0x720d08);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720d0b:{NFSU2_TR(0x720d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720d0c:{NFSU2_TR(0x720d0c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720d0f:{NFSU2_TR(0x720d0f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720d12:{NFSU2_TR(0x720d12);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720d15:{NFSU2_TR(0x720d15);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720d18:{NFSU2_TR(0x720d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720d1b:{NFSU2_TR(0x720d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720d1e:{NFSU2_TR(0x720d1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720d22:{NFSU2_TR(0x720d22);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720d4c;}}
}
B720d24:L720d24:{c.instructions+=6;NFSU2_TR(0x720d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720d27:{NFSU2_TR(0x720d27);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B720d29:{NFSU2_TR(0x720d29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B720d2b:{NFSU2_TR(0x720d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720d2e:{NFSU2_TR(0x720d2e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720d31:{NFSU2_TR(0x720d31);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720d39;}}
}
B720d33:L720d33:{c.instructions+=1;NFSU2_TR(0x720d33);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B720d39:L720d39:{c.instructions+=7;NFSU2_TR(0x720d39);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720d3c:{NFSU2_TR(0x720d3c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720d3f:{NFSU2_TR(0x720d3f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720d42:{NFSU2_TR(0x720d42);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720d45:{NFSU2_TR(0x720d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720d48:{NFSU2_TR(0x720d48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B720d4a:{NFSU2_TR(0x720d4a);
{goto L720d4f;}
}
B720d4c:L720d4c:{c.instructions+=1;NFSU2_TR(0x720d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B720d4f:L720d4f:{c.instructions+=2;NFSU2_TR(0x720d4f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B720d51:{NFSU2_TR(0x720d51);
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
B720d52:L720d52:{c.instructions+=5;NFSU2_TR(0x720d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B720d53:{NFSU2_TR(0x720d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720d54:{NFSU2_TR(0x720d54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720d55:{NFSU2_TR(0x720d55);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720d56:{NFSU2_TR(0x720d56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720d57:L720d57:{c.instructions+=6;NFSU2_TR(0x720d57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720d58:{NFSU2_TR(0x720d58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720d59:{NFSU2_TR(0x720d59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720d5d:{NFSU2_TR(0x720d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720d60:{NFSU2_TR(0x720d60);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B720d62:{NFSU2_TR(0x720d62);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720d68;}}
}
B720d64:L720d64:{c.instructions+=2;NFSU2_TR(0x720d64);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B720d66:{NFSU2_TR(0x720d66);
{goto L720d74;}
}
B720d68:L720d68:{c.instructions+=2;NFSU2_TR(0x720d68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720d6b:{NFSU2_TR(0x720d6b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720d72;}}
}
B720d6d:L720d6d:{c.instructions+=3;NFSU2_TR(0x720d6d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720d6f:{NFSU2_TR(0x720d6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720d70:{NFSU2_TR(0x720d70);
{goto L720d74;}
}
B720d72:L720d72:{c.instructions+=1;NFSU2_TR(0x720d72);
__builtin_memmove((R+12),(R+0),4);
}
B720d74:L720d74:{c.instructions+=4;NFSU2_TR(0x720d74);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B720d77:{NFSU2_TR(0x720d77);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B720d7a:{NFSU2_TR(0x720d7a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720d7c:{NFSU2_TR(0x720d7c);
if(r1(R+518)){{goto L720e21;}}
}
B720d82:L720d82:{c.instructions+=3;NFSU2_TR(0x720d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B720d84:{NFSU2_TR(0x720d84);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B720d87:{NFSU2_TR(0x720d87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720da5;}}
}
B720d89:L720d89:{c.instructions+=2;NFSU2_TR(0x720d89);
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
B720d8b:{NFSU2_TR(0x720d8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720e18;}}
}
B720d91:L720d91:{c.instructions+=3;NFSU2_TR(0x720d91);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B720d94:{NFSU2_TR(0x720d94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720d95:{NFSU2_TR(0x720d95);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fa0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720d9cull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720d9c:L720d9c:{c.instructions+=2;NFSU2_TR(0x720d9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720d9d:{NFSU2_TR(0x720d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720da2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720c5au);}goto L720c5a;}
}
B720da2:L720da2:{c.instructions+=2;NFSU2_TR(0x720da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720da3:{NFSU2_TR(0x720da3);
{goto L720e17;}
}
B720da5:L720da5:{c.instructions+=2;NFSU2_TR(0x720da5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720da8:{NFSU2_TR(0x720da8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720e06;}}
}
B720daa:L720daa:{c.instructions+=2;NFSU2_TR(0x720daa);
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
B720dac:{NFSU2_TR(0x720dac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720dbb;}}
}
B720dae:L720dae:{c.instructions+=3;NFSU2_TR(0x720dae);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B720db1:{NFSU2_TR(0x720db1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720db2:{NFSU2_TR(0x720db2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fc0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720db9ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720db9:L720db9:{c.instructions+=1;NFSU2_TR(0x720db9);
{goto L720e17;}
}
B720dbb:L720dbb:{c.instructions+=2;NFSU2_TR(0x720dbb);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B720dbe:{NFSU2_TR(0x720dbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720dc6;}}
}
B720dc0:L720dc0:{c.instructions+=2;NFSU2_TR(0x720dc0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B720dc4:{NFSU2_TR(0x720dc4);
if(r1(R+518)){{goto L720e18;}}
}
B720dc6:L720dc6:{c.instructions+=5;NFSU2_TR(0x720dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720dc9:{NFSU2_TR(0x720dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720dcc:{NFSU2_TR(0x720dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B720dce:{NFSU2_TR(0x720dce);
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
B720dd0:{NFSU2_TR(0x720dd0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720dd7;}}
}
B720dd2:L720dd2:{c.instructions+=2;NFSU2_TR(0x720dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B720dd5:{NFSU2_TR(0x720dd5);
{goto L720ddd;}
}
B720dd7:L720dd7:{c.instructions+=2;NFSU2_TR(0x720dd7);
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
B720dd9:{NFSU2_TR(0x720dd9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720ddd;}}
}
B720ddb:L720ddb:{c.instructions+=1;NFSU2_TR(0x720ddb);
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
B720ddd:L720ddd:{c.instructions+=8;NFSU2_TR(0x720ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B720de0:{NFSU2_TR(0x720de0);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B720de4:{NFSU2_TR(0x720de4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B720de6:{NFSU2_TR(0x720de6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720de9:{NFSU2_TR(0x720de9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720dea:{NFSU2_TR(0x720dea);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B720ded:{NFSU2_TR(0x720ded);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720dee:{NFSU2_TR(0x720dee);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817f90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720df5ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720df5:L720df5:{c.instructions+=5;NFSU2_TR(0x720df5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B720df7:{NFSU2_TR(0x720df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720df8:{NFSU2_TR(0x720df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720df9:{NFSU2_TR(0x720df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720dfc:{NFSU2_TR(0x720dfc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720e18;}}
}
B720dfe:L720dfe:{c.instructions+=2;NFSU2_TR(0x720dfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720dff:{NFSU2_TR(0x720dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720e04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720c5au);}goto L720c5a;}
}
B720e04:L720e04:{c.instructions+=1;NFSU2_TR(0x720e04);
{goto L720e17;}
}
B720e06:L720e06:{c.instructions+=2;NFSU2_TR(0x720e06);
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
B720e08:{NFSU2_TR(0x720e08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720e18;}}
}
B720e0a:L720e0a:{c.instructions+=3;NFSU2_TR(0x720e0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720e0d:{NFSU2_TR(0x720e0d);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B720e10:{NFSU2_TR(0x720e10);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720e17ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720e17:L720e17:{c.instructions+=1;NFSU2_TR(0x720e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720e18:L720e18:{c.instructions+=3;NFSU2_TR(0x720e18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B720e1b:{NFSU2_TR(0x720e1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720e1e:{NFSU2_TR(0x720e1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B720e21:L720e21:{c.instructions+=2;NFSU2_TR(0x720e21);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720e24:{NFSU2_TR(0x720e24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720e3b;}}
}
B720e26:L720e26:{c.instructions+=3;NFSU2_TR(0x720e26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B720e29:{NFSU2_TR(0x720e29);
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
B720e2b:{NFSU2_TR(0x720e2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L720e3b;}}
}
B720e2d:L720e2d:{c.instructions+=3;NFSU2_TR(0x720e2d);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B720e30:{NFSU2_TR(0x720e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720e31:{NFSU2_TR(0x720e31);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fd0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720e38ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B720e38:L720e38:{c.instructions+=2;NFSU2_TR(0x720e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720e39:{NFSU2_TR(0x720e39);
__builtin_memmove((R+12),(R+0),4);
}
B720e3b:L720e3b:{c.instructions+=2;NFSU2_TR(0x720e3b);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B720e3f:{NFSU2_TR(0x720e3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L720e43;}}
}
B720e41:L720e41:{c.instructions+=1;NFSU2_TR(0x720e41);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B720e43:L720e43:{c.instructions+=4;NFSU2_TR(0x720e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720e44:{NFSU2_TR(0x720e44);
__builtin_memmove((R+0),(R+12),4);
}
B720e46:{NFSU2_TR(0x720e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B720e47:{NFSU2_TR(0x720e47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720e48:L720e48:{c.instructions+=9;NFSU2_TR(0x720e48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720e49:{NFSU2_TR(0x720e49);
__builtin_memmove((R+20),(R+16),4);
}
B720e4b:{NFSU2_TR(0x720e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B720e4e:{NFSU2_TR(0x720e4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720e4f:{NFSU2_TR(0x720e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B720e52:{NFSU2_TR(0x720e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720e55:{NFSU2_TR(0x720e55);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B720e57:{NFSU2_TR(0x720e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720e5a:{NFSU2_TR(0x720e5a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720e63;}}
}
B720e5c:L720e5c:{c.instructions+=2;NFSU2_TR(0x720e5c);
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
B720e5e:{NFSU2_TR(0x720e5e);
{goto L720f2f;}
}
B720e63:L720e63:{c.instructions+=10;NFSU2_TR(0x720e63);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720e66:{NFSU2_TR(0x720e66);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B720e6c:{NFSU2_TR(0x720e6c);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720e6f:{NFSU2_TR(0x720e6f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720e72:{NFSU2_TR(0x720e72);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B720e75:{NFSU2_TR(0x720e75);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720e7b:{NFSU2_TR(0x720e7b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B720e7e:{NFSU2_TR(0x720e7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720e80:{NFSU2_TR(0x720e80);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B720e83:{NFSU2_TR(0x720e83);
if(r1(R+514)){{goto L720e9a;}}
}
B720e85:L720e85:{c.instructions+=1;NFSU2_TR(0x720e85);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720e88:L720e88:{c.instructions+=7;NFSU2_TR(0x720e88);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B720e8a:{NFSU2_TR(0x720e8a);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B720e8c:{NFSU2_TR(0x720e8c);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B720e8e:{NFSU2_TR(0x720e8e);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B720e90:{NFSU2_TR(0x720e90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720e92:{NFSU2_TR(0x720e92);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B720e95:{NFSU2_TR(0x720e95);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720e88u);}goto L720e88;}}
}
B720e97:L720e97:{c.instructions+=1;NFSU2_TR(0x720e97);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720e9a:L720e9a:{c.instructions+=4;NFSU2_TR(0x720e9a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B720e9c:{NFSU2_TR(0x720e9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720e9e:{NFSU2_TR(0x720e9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B720ea0:{NFSU2_TR(0x720ea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720ed0;}}
}
B720ea2:L720ea2:{c.instructions+=8;NFSU2_TR(0x720ea2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720ea4:{NFSU2_TR(0x720ea4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720ea7:{NFSU2_TR(0x720ea7);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720ead:{NFSU2_TR(0x720ead);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720eb0:{NFSU2_TR(0x720eb0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720eb3:{NFSU2_TR(0x720eb3);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720eb6:{NFSU2_TR(0x720eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B720eb9:{NFSU2_TR(0x720eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x720ebeull));
TAIL_STATIC(0x7254cfu,725);
}
B720ebe:L720ebe:{c.instructions+=6;NFSU2_TR(0x720ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720ec1:{NFSU2_TR(0x720ec1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720ec4:{NFSU2_TR(0x720ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B720ec5:{NFSU2_TR(0x720ec5);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720ec8:{NFSU2_TR(0x720ec8);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720ece:{NFSU2_TR(0x720ece);
{goto L720ee4;}
}
B720ed0:L720ed0:{c.instructions+=2;NFSU2_TR(0x720ed0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B720ed2:{NFSU2_TR(0x720ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720eef;}}
}
B720ed4:L720ed4:{c.instructions+=5;NFSU2_TR(0x720ed4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720ed7:{NFSU2_TR(0x720ed7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B720edd:{NFSU2_TR(0x720edd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720edf:{NFSU2_TR(0x720edf);
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
B720ee2:{NFSU2_TR(0x720ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720ee9;}}
}
B720ee4:L720ee4:{c.instructions+=2;NFSU2_TR(0x720ee4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720ee7:{NFSU2_TR(0x720ee7);
{goto L720f1d;}
}
B720ee9:L720ee9:{c.instructions+=3;NFSU2_TR(0x720ee9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720eeb:{NFSU2_TR(0x720eeb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B720eed:{NFSU2_TR(0x720eed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720ee4u);}goto L720ee4;}
}
B720eef:L720eef:{c.instructions+=2;NFSU2_TR(0x720eef);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B720ef1:{NFSU2_TR(0x720ef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720ef8;}}
}
B720ef3:L720ef3:{c.instructions+=2;NFSU2_TR(0x720ef3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720ef6:{NFSU2_TR(0x720ef6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720ee4u);}goto L720ee4;}
}
B720ef8:L720ef8:{c.instructions+=5;NFSU2_TR(0x720ef8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720efb:{NFSU2_TR(0x720efb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B720f01:{NFSU2_TR(0x720f01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720f03:{NFSU2_TR(0x720f03);
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
B720f06:{NFSU2_TR(0x720f06);
if(r1(R+514)){{goto L720f0f;}}
}
B720f08:L720f08:{c.instructions+=3;NFSU2_TR(0x720f08);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720f0b:{NFSU2_TR(0x720f0b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B720f0d:{NFSU2_TR(0x720f0d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720ee4u);}goto L720ee4;}
}
B720f0f:L720f0f:{c.instructions+=6;NFSU2_TR(0x720f0f);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B720f11:{NFSU2_TR(0x720f11);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B720f14:{NFSU2_TR(0x720f14);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B720f16:{NFSU2_TR(0x720f16);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B720f18:{NFSU2_TR(0x720f18);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720f1b:{NFSU2_TR(0x720f1b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720f1d:L720f1d:{c.instructions+=6;NFSU2_TR(0x720f1d);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720f20:{NFSU2_TR(0x720f20);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B720f23:{NFSU2_TR(0x720f23);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720f26:{NFSU2_TR(0x720f26);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720f29:{NFSU2_TR(0x720f29);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720f2c:{NFSU2_TR(0x720f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720f2f:L720f2f:{c.instructions+=3;NFSU2_TR(0x720f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720f30:{NFSU2_TR(0x720f30);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720f31:{NFSU2_TR(0x720f31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720f32:L720f32:{c.instructions+=13;NFSU2_TR(0x720f32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720f33:{NFSU2_TR(0x720f33);
__builtin_memmove((R+20),(R+16),4);
}
B720f35:{NFSU2_TR(0x720f35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720f36:{NFSU2_TR(0x720f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720f39:{NFSU2_TR(0x720f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B720f3c:{NFSU2_TR(0x720f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720f3f:{NFSU2_TR(0x720f3f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720f42:{NFSU2_TR(0x720f42);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720f44:{NFSU2_TR(0x720f44);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B720f46:{NFSU2_TR(0x720f46);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B720f48:{NFSU2_TR(0x720f48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720f4a:{NFSU2_TR(0x720f4a);
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
B720f4d:{NFSU2_TR(0x720f4d);
if(r1(R+514)){{goto L720f53;}}
}
B720f4f:L720f4f:{c.instructions+=2;NFSU2_TR(0x720f4f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720f51:{NFSU2_TR(0x720f51);
{goto L720f72;}
}
B720f53:L720f53:{c.instructions+=2;NFSU2_TR(0x720f53);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720f56:{NFSU2_TR(0x720f56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720f60;}}
}
B720f58:L720f58:{c.instructions+=3;NFSU2_TR(0x720f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720f5b:{NFSU2_TR(0x720f5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B720f5e:{NFSU2_TR(0x720f5e);
if(r1(R+518)){{goto L720f93;}}
}
B720f60:L720f60:{c.instructions+=6;NFSU2_TR(0x720f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720f63:{NFSU2_TR(0x720f63);
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
B720f65:{NFSU2_TR(0x720f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720f68:{NFSU2_TR(0x720f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720f6b:{NFSU2_TR(0x720f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720f6e:{NFSU2_TR(0x720f6e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L720f76;}}
}
B720f70:L720f70:{c.instructions+=1;NFSU2_TR(0x720f70);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720f72:L720f72:{c.instructions+=3;NFSU2_TR(0x720f72);
__builtin_memmove((R+0),(R+8),4);
}
B720f74:{NFSU2_TR(0x720f74);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720f75:{NFSU2_TR(0x720f75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720f76:L720f76:{c.instructions+=9;NFSU2_TR(0x720f76);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B720f78:{NFSU2_TR(0x720f78);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B720f7a:{NFSU2_TR(0x720f7a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B720f7d:{NFSU2_TR(0x720f7d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720f80:{NFSU2_TR(0x720f80);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B720f82:{NFSU2_TR(0x720f82);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720f88:{NFSU2_TR(0x720f88);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720f8e:{NFSU2_TR(0x720f8e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720f91:{NFSU2_TR(0x720f91);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720f93:L720f93:{c.instructions+=11;NFSU2_TR(0x720f93);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B720f96:{NFSU2_TR(0x720f96);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B720f99:{NFSU2_TR(0x720f99);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B720f9b:{NFSU2_TR(0x720f9b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B720f9d:{NFSU2_TR(0x720f9d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720fa0:{NFSU2_TR(0x720fa0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B720fa6:{NFSU2_TR(0x720fa6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720fa8:{NFSU2_TR(0x720fa8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B720faa:{NFSU2_TR(0x720faa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B720fad:{NFSU2_TR(0x720fad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B720faf:{NFSU2_TR(0x720faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L720fc8;}}
}
B720fb1:L720fb1:{c.instructions+=2;NFSU2_TR(0x720fb1);
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
B720fb4:{NFSU2_TR(0x720fb4);
if(r1(R+518)){{goto L720fcd;}}
}
B720fb6:L720fb6:{c.instructions+=1;NFSU2_TR(0x720fb6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B720fb8:L720fb8:{c.instructions+=7;NFSU2_TR(0x720fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B720fba:{NFSU2_TR(0x720fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B720fbd:{NFSU2_TR(0x720fbd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B720fc0:{NFSU2_TR(0x720fc0);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B720fc3:{NFSU2_TR(0x720fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720fc6:{NFSU2_TR(0x720fc6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B720fc7:{NFSU2_TR(0x720fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720fc8:L720fc8:{c.instructions+=2;NFSU2_TR(0x720fc8);
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
B720fcb:{NFSU2_TR(0x720fcb);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720fb6u);}goto L720fb6;}}
}
B720fcd:L720fcd:{c.instructions+=2;NFSU2_TR(0x720fcd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B720fcf:{NFSU2_TR(0x720fcf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720fb8u);}goto L720fb8;}
}
B720fd1:L720fd1:{c.instructions+=6;NFSU2_TR(0x720fd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720fd5:{NFSU2_TR(0x720fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720fd8:{NFSU2_TR(0x720fd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B720fd9:{NFSU2_TR(0x720fd9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+24,u32(r1(U+0)));
}
B720fdc:{NFSU2_TR(0x720fdc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B720fdf:{NFSU2_TR(0x720fdf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720fed;}}
}
B720fe1:L720fe1:{c.instructions+=2;NFSU2_TR(0x720fe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B720fe4:{NFSU2_TR(0x720fe4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B720fe5:L720fe5:{c.instructions+=4;NFSU2_TR(0x720fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B720fe7:{NFSU2_TR(0x720fe7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B720fea:{NFSU2_TR(0x720fea);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B720feb:{NFSU2_TR(0x720feb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x720fe5u);}goto L720fe5;}}
}
B720fed:L720fed:{c.instructions+=4;NFSU2_TR(0x720fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720ff0:{NFSU2_TR(0x720ff0);
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
B720ff2:{NFSU2_TR(0x720ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B720ff3:{NFSU2_TR(0x720ff3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L720ff7;}}
}
B720ff5:L720ff5:{c.instructions+=1;NFSU2_TR(0x720ff5);
__builtin_memmove((R+0),(R+4),4);
}
B720ff7:L720ff7:{c.instructions+=1;NFSU2_TR(0x720ff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B720ff8:L720ff8:{c.instructions+=3;NFSU2_TR(0x720ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B720ffc:{NFSU2_TR(0x720ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B720fff:{NFSU2_TR(0x720fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
TAIL_STATIC(0x721002u,721);
}
XIT:NFSU2_TR_EXIT(0x720,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
