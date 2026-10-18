#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_54b(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_559(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55e(u8* __restrict R,Cpu& c);
u32 body_565(u8* __restrict R,Cpu& c);
u32 body_567(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_6f9(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x566,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x566,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_566(u8* __restrict R,Cpu& c);
u32 page_566(Cpu& c){return body_566(c.regs.data(),c);}
__attribute__((noinline)) u32 body_566(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x566000:goto L566000;
case 0x566005:goto L566005;
case 0x566007:c.instructions+=1;goto B566007;
case 0x56600c:goto L56600c;
case 0x56600d:c.instructions+=5;goto B56600d;
case 0x56600e:c.instructions+=4;goto B56600e;
case 0x56600f:c.instructions+=3;goto B56600f;
case 0x566011:c.instructions+=2;goto B566011;
case 0x566012:c.instructions+=1;goto B566012;
case 0x566020:goto L566020;
case 0x566021:c.instructions+=3;goto B566021;
case 0x566026:c.instructions+=2;goto B566026;
case 0x566028:c.instructions+=1;goto B566028;
case 0x56602a:goto L56602a;
case 0x56602c:c.instructions+=3;goto B56602c;
case 0x566031:c.instructions+=2;goto B566031;
case 0x566036:c.instructions+=1;goto B566036;
case 0x56603b:goto L56603b;
case 0x56603c:c.instructions+=1;goto B56603c;
case 0x56603d:goto L56603d;
case 0x566042:c.instructions+=5;goto B566042;
case 0x56604c:c.instructions+=4;goto B56604c;
case 0x566056:c.instructions+=3;goto B566056;
case 0x566060:c.instructions+=2;goto B566060;
case 0x56606a:c.instructions+=1;goto B56606a;
case 0x56606f:goto L56606f;
case 0x566074:c.instructions+=1;goto B566074;
case 0x566079:goto L566079;
case 0x56607c:c.instructions+=2;goto B56607c;
case 0x56607e:c.instructions+=1;goto B56607e;
case 0x566080:goto L566080;
case 0x566082:c.instructions+=1;goto B566082;
case 0x566087:goto L566087;
case 0x566089:goto L566089;
case 0x56608b:goto L56608b;
case 0x56608f:c.instructions+=7;goto B56608f;
case 0x566093:c.instructions+=6;goto B566093;
case 0x566098:c.instructions+=5;goto B566098;
case 0x56609a:c.instructions+=4;goto B56609a;
case 0x56609c:c.instructions+=3;goto B56609c;
case 0x56609d:c.instructions+=2;goto B56609d;
case 0x5660a2:c.instructions+=1;goto B5660a2;
case 0x5660a5:goto L5660a5;
case 0x5660a7:c.instructions+=3;goto B5660a7;
case 0x5660a8:c.instructions+=2;goto B5660a8;
case 0x5660aa:c.instructions+=1;goto B5660aa;
case 0x5660ac:goto L5660ac;
case 0x5660ae:c.instructions+=3;goto B5660ae;
case 0x5660b3:c.instructions+=2;goto B5660b3;
case 0x5660b4:c.instructions+=1;goto B5660b4;
case 0x5660b6:goto L5660b6;
case 0x5660bb:goto L5660bb;
case 0x5660bf:c.instructions+=6;goto B5660bf;
case 0x5660c3:c.instructions+=5;goto B5660c3;
case 0x5660c4:c.instructions+=4;goto B5660c4;
case 0x5660c5:c.instructions+=3;goto B5660c5;
case 0x5660cb:c.instructions+=2;goto B5660cb;
case 0x5660cc:c.instructions+=1;goto B5660cc;
case 0x5660d1:goto L5660d1;
case 0x5660d6:goto L5660d6;
case 0x5660d8:c.instructions+=1;goto B5660d8;
case 0x5660da:goto L5660da;
case 0x5660df:goto L5660df;
case 0x5660e1:c.instructions+=1;goto B5660e1;
case 0x5660e3:goto L5660e3;
case 0x5660e5:c.instructions+=1;goto B5660e5;
case 0x5660ea:goto L5660ea;
case 0x5660ed:goto L5660ed;
case 0x5660ee:c.instructions+=1;goto B5660ee;
case 0x5660f0:goto L5660f0;
case 0x5660f5:c.instructions+=3;goto B5660f5;
case 0x5660fb:c.instructions+=2;goto B5660fb;
case 0x5660fd:c.instructions+=1;goto B5660fd;
case 0x566103:goto L566103;
case 0x566109:c.instructions+=2;goto B566109;
case 0x56610b:c.instructions+=1;goto B56610b;
case 0x566111:goto L566111;
case 0x566116:c.instructions+=2;goto B566116;
case 0x56611c:c.instructions+=1;goto B56611c;
case 0x56611e:goto L56611e;
case 0x566123:goto L566123;
case 0x566124:c.instructions+=2;goto B566124;
case 0x566125:c.instructions+=1;goto B566125;
case 0x56612a:goto L56612a;
case 0x56612d:c.instructions+=2;goto B56612d;
case 0x56612f:c.instructions+=1;goto B56612f;
case 0x566131:goto L566131;
case 0x566136:goto L566136;
case 0x56613b:c.instructions+=2;goto B56613b;
case 0x56613d:c.instructions+=1;goto B56613d;
case 0x56613f:goto L56613f;
case 0x566141:c.instructions+=2;goto B566141;
case 0x566143:c.instructions+=1;goto B566143;
case 0x566148:goto L566148;
case 0x56614a:c.instructions+=3;goto B56614a;
case 0x56614d:c.instructions+=2;goto B56614d;
case 0x56614f:c.instructions+=1;goto B56614f;
case 0x566151:goto L566151;
case 0x566153:c.instructions+=1;goto B566153;
case 0x566155:goto L566155;
case 0x56615b:c.instructions+=1;goto B56615b;
case 0x566160:goto L566160;
case 0x566162:c.instructions+=1;goto B566162;
case 0x566164:goto L566164;
case 0x566166:goto L566166;
case 0x566168:c.instructions+=3;goto B566168;
case 0x56616a:c.instructions+=2;goto B56616a;
case 0x56616b:c.instructions+=1;goto B56616b;
case 0x566170:goto L566170;
case 0x566173:c.instructions+=2;goto B566173;
case 0x566175:c.instructions+=1;goto B566175;
case 0x56617b:goto L56617b;
case 0x566180:c.instructions+=7;goto B566180;
case 0x566183:c.instructions+=6;goto B566183;
case 0x566184:c.instructions+=5;goto B566184;
case 0x566189:c.instructions+=4;goto B566189;
case 0x56618a:c.instructions+=3;goto B56618a;
case 0x56618e:c.instructions+=2;goto B56618e;
case 0x56618f:c.instructions+=1;goto B56618f;
case 0x566194:goto L566194;
case 0x566197:c.instructions+=1;goto B566197;
case 0x56619c:goto L56619c;
case 0x5661a1:c.instructions+=4;goto B5661a1;
case 0x5661a3:c.instructions+=3;goto B5661a3;
case 0x5661ad:c.instructions+=2;goto B5661ad;
case 0x5661af:c.instructions+=1;goto B5661af;
case 0x5661b1:goto L5661b1;
case 0x5661b4:c.instructions+=3;goto B5661b4;
case 0x5661b6:c.instructions+=2;goto B5661b6;
case 0x5661b9:c.instructions+=1;goto B5661b9;
case 0x5661bb:goto L5661bb;
case 0x5661bd:c.instructions+=1;goto B5661bd;
case 0x5661c2:goto L5661c2;
case 0x5661c3:c.instructions+=1;goto B5661c3;
case 0x5661c9:goto L5661c9;
case 0x5661cc:c.instructions+=1;goto B5661cc;
case 0x5661d2:goto L5661d2;
case 0x5661d7:goto L5661d7;
case 0x5661d8:c.instructions+=1;goto B5661d8;
case 0x5661dd:goto L5661dd;
case 0x5661e0:goto L5661e0;
case 0x5661e5:c.instructions+=5;goto B5661e5;
case 0x5661e7:c.instructions+=4;goto B5661e7;
case 0x5661ec:c.instructions+=3;goto B5661ec;
case 0x5661f6:c.instructions+=2;goto B5661f6;
case 0x5661f7:c.instructions+=1;goto B5661f7;
case 0x5661f9:goto L5661f9;
case 0x5661fa:c.instructions+=1;goto B5661fa;
case 0x5661ff:goto L5661ff;
case 0x566202:c.instructions+=1;goto B566202;
case 0x566204:goto L566204;
case 0x566206:c.instructions+=1;goto B566206;
case 0x566208:goto L566208;
case 0x566209:c.instructions+=2;goto B566209;
case 0x56620e:c.instructions+=1;goto B56620e;
case 0x566213:goto L566213;
case 0x566215:c.instructions+=4;goto B566215;
case 0x56621a:c.instructions+=3;goto B56621a;
case 0x56621f:c.instructions+=2;goto B56621f;
case 0x566229:c.instructions+=1;goto B566229;
case 0x56622e:goto L56622e;
case 0x56622f:c.instructions+=1;goto B56622f;
case 0x566230:goto L566230;
case 0x566236:c.instructions+=1;goto B566236;
case 0x566240:goto L566240;
case 0x566244:c.instructions+=4;goto B566244;
case 0x566247:c.instructions+=3;goto B566247;
case 0x56624a:c.instructions+=2;goto B56624a;
case 0x56624d:c.instructions+=1;goto B56624d;
case 0x56624f:goto L56624f;
case 0x566250:c.instructions+=4;goto B566250;
case 0x566253:c.instructions+=3;goto B566253;
case 0x566254:c.instructions+=2;goto B566254;
case 0x566255:c.instructions+=1;goto B566255;
case 0x56625a:goto L56625a;
case 0x56625b:c.instructions+=5;goto B56625b;
case 0x56625d:c.instructions+=4;goto B56625d;
case 0x566261:c.instructions+=3;goto B566261;
case 0x566263:c.instructions+=2;goto B566263;
case 0x566264:c.instructions+=1;goto B566264;
case 0x566269:goto L566269;
case 0x56626d:c.instructions+=2;goto B56626d;
case 0x56626e:c.instructions+=1;goto B56626e;
case 0x566273:goto L566273;
case 0x566276:c.instructions+=2;goto B566276;
case 0x566278:c.instructions+=1;goto B566278;
case 0x56627a:goto L56627a;
case 0x56627b:c.instructions+=4;goto B56627b;
case 0x56627f:c.instructions+=3;goto B56627f;
case 0x566281:c.instructions+=2;goto B566281;
case 0x566282:c.instructions+=1;goto B566282;
case 0x566287:goto L566287;
case 0x56628a:c.instructions+=5;goto B56628a;
case 0x56628b:c.instructions+=4;goto B56628b;
case 0x56628d:c.instructions+=3;goto B56628d;
case 0x56628e:c.instructions+=2;goto B56628e;
case 0x566291:c.instructions+=1;goto B566291;
case 0x566294:goto L566294;
case 0x566296:c.instructions+=3;goto B566296;
case 0x56629b:c.instructions+=2;goto B56629b;
case 0x5662a0:c.instructions+=1;goto B5662a0;
case 0x5662a5:goto L5662a5;
case 0x5662a6:c.instructions+=4;goto B5662a6;
case 0x5662a8:c.instructions+=3;goto B5662a8;
case 0x5662a9:c.instructions+=2;goto B5662a9;
case 0x5662ac:c.instructions+=1;goto B5662ac;
case 0x5662af:goto L5662af;
case 0x5662b1:c.instructions+=2;goto B5662b1;
case 0x5662b4:c.instructions+=1;goto B5662b4;
case 0x5662c0:goto L5662c0;
case 0x5662c7:c.instructions+=4;goto B5662c7;
case 0x5662c8:c.instructions+=3;goto B5662c8;
case 0x5662c9:c.instructions+=2;goto B5662c9;
case 0x5662cb:c.instructions+=1;goto B5662cb;
case 0x5662cd:goto L5662cd;
case 0x5662d3:c.instructions+=4;goto B5662d3;
case 0x5662d9:c.instructions+=3;goto B5662d9;
case 0x5662db:c.instructions+=2;goto B5662db;
case 0x5662de:c.instructions+=1;goto B5662de;
case 0x5662e0:goto L5662e0;
case 0x5662e5:c.instructions+=1;goto B5662e5;
case 0x5662e7:goto L5662e7;
case 0x5662e9:goto L5662e9;
case 0x5662ef:c.instructions+=3;goto B5662ef;
case 0x5662f0:c.instructions+=2;goto B5662f0;
case 0x5662f6:c.instructions+=1;goto B5662f6;
case 0x5662fb:goto L5662fb;
case 0x5662fe:c.instructions+=2;goto B5662fe;
case 0x5662ff:c.instructions+=1;goto B5662ff;
case 0x566304:goto L566304;
case 0x566306:goto L566306;
case 0x566307:c.instructions+=1;goto B566307;
case 0x56630c:goto L56630c;
case 0x566313:c.instructions+=4;goto B566313;
case 0x566316:c.instructions+=3;goto B566316;
case 0x566319:c.instructions+=2;goto B566319;
case 0x56631b:c.instructions+=1;goto B56631b;
case 0x56631d:goto L56631d;
case 0x56631e:c.instructions+=1;goto B56631e;
case 0x566323:goto L566323;
case 0x566326:c.instructions+=2;goto B566326;
case 0x566328:c.instructions+=1;goto B566328;
case 0x56632a:goto L56632a;
case 0x56632b:c.instructions+=1;goto B56632b;
case 0x566330:goto L566330;
case 0x566333:c.instructions+=4;goto B566333;
case 0x56633a:c.instructions+=3;goto B56633a;
case 0x56633d:c.instructions+=2;goto B56633d;
case 0x56633f:c.instructions+=1;goto B56633f;
case 0x566344:goto L566344;
case 0x566345:c.instructions+=2;goto B566345;
case 0x566348:c.instructions+=1;goto B566348;
case 0x56634a:goto L56634a;
case 0x566350:c.instructions+=2;goto B566350;
case 0x566352:c.instructions+=1;goto B566352;
case 0x566354:goto L566354;
case 0x56635a:c.instructions+=2;goto B56635a;
case 0x566360:c.instructions+=1;goto B566360;
case 0x566365:goto L566365;
case 0x566366:c.instructions+=2;goto B566366;
case 0x566368:c.instructions+=1;goto B566368;
case 0x56636d:goto L56636d;
case 0x566372:goto L566372;
case 0x566377:c.instructions+=4;goto B566377;
case 0x566379:c.instructions+=3;goto B566379;
case 0x56637a:c.instructions+=2;goto B56637a;
case 0x56637b:c.instructions+=1;goto B56637b;
case 0x56637d:goto L56637d;
case 0x566382:goto L566382;
case 0x56638c:goto L56638c;
case 0x566391:c.instructions+=2;goto B566391;
case 0x566393:c.instructions+=1;goto B566393;
case 0x566395:goto L566395;
case 0x566397:c.instructions+=1;goto B566397;
case 0x56639c:goto L56639c;
case 0x56639f:c.instructions+=1;goto B56639f;
case 0x5663a9:goto L5663a9;
case 0x5663b0:goto L5663b0;
case 0x5663b5:c.instructions+=1;goto B5663b5;
case 0x5663ba:goto L5663ba;
case 0x5663c0:c.instructions+=2;goto B5663c0;
case 0x5663c2:c.instructions+=1;goto B5663c2;
case 0x5663c4:goto L5663c4;
case 0x5663c9:goto L5663c9;
case 0x5663cb:c.instructions+=3;goto B5663cb;
case 0x5663d0:c.instructions+=2;goto B5663d0;
case 0x5663d5:c.instructions+=1;goto B5663d5;
case 0x5663da:goto L5663da;
case 0x5663df:c.instructions+=1;goto B5663df;
case 0x5663e4:goto L5663e4;
case 0x5663e6:c.instructions+=1;goto B5663e6;
case 0x5663e8:goto L5663e8;
case 0x5663ea:c.instructions+=3;goto B5663ea;
case 0x5663ef:c.instructions+=2;goto B5663ef;
case 0x5663f4:c.instructions+=1;goto B5663f4;
case 0x5663f9:goto L5663f9;
case 0x566400:goto L566400;
case 0x566405:c.instructions+=2;goto B566405;
case 0x566407:c.instructions+=1;goto B566407;
case 0x566409:goto L566409;
case 0x56640d:c.instructions+=4;goto B56640d;
case 0x566411:c.instructions+=3;goto B566411;
case 0x566413:c.instructions+=2;goto B566413;
case 0x566418:c.instructions+=1;goto B566418;
case 0x56641a:goto L56641a;
case 0x56641f:c.instructions+=1;goto B56641f;
case 0x566424:goto L566424;
case 0x566425:goto L566425;
case 0x56642a:c.instructions+=1;goto B56642a;
case 0x56642f:goto L56642f;
case 0x566430:goto L566430;
case 0x566432:c.instructions+=7;goto B566432;
case 0x566437:c.instructions+=6;goto B566437;
case 0x56643d:c.instructions+=5;goto B56643d;
case 0x56643e:c.instructions+=4;goto B56643e;
case 0x566445:c.instructions+=3;goto B566445;
case 0x566446:c.instructions+=2;goto B566446;
case 0x56644b:c.instructions+=1;goto B56644b;
case 0x566450:goto L566450;
case 0x566453:c.instructions+=4;goto B566453;
case 0x566457:c.instructions+=3;goto B566457;
case 0x566459:c.instructions+=2;goto B566459;
case 0x566461:c.instructions+=1;goto B566461;
case 0x566463:goto L566463;
case 0x566467:c.instructions+=3;goto B566467;
case 0x566468:c.instructions+=2;goto B566468;
case 0x56646a:c.instructions+=1;goto B56646a;
case 0x56646f:goto L56646f;
case 0x566473:c.instructions+=3;goto B566473;
case 0x56647a:c.instructions+=2;goto B56647a;
case 0x56647d:c.instructions+=1;goto B56647d;
case 0x56647e:goto L56647e;
case 0x566482:c.instructions+=4;goto B566482;
case 0x566484:c.instructions+=3;goto B566484;
case 0x56648b:c.instructions+=2;goto B56648b;
case 0x56648e:c.instructions+=1;goto B56648e;
case 0x566490:goto L566490;
case 0x566491:c.instructions+=14;goto B566491;
case 0x566493:c.instructions+=13;goto B566493;
case 0x566495:c.instructions+=12;goto B566495;
case 0x56649a:c.instructions+=11;goto B56649a;
case 0x5664a0:c.instructions+=10;goto B5664a0;
case 0x5664a1:c.instructions+=9;goto B5664a1;
case 0x5664a8:c.instructions+=8;goto B5664a8;
case 0x5664ab:c.instructions+=7;goto B5664ab;
case 0x5664ac:c.instructions+=6;goto B5664ac;
case 0x5664ae:c.instructions+=5;goto B5664ae;
case 0x5664b1:c.instructions+=4;goto B5664b1;
case 0x5664b4:c.instructions+=3;goto B5664b4;
case 0x5664b6:c.instructions+=2;goto B5664b6;
case 0x5664b9:c.instructions+=1;goto B5664b9;
case 0x5664bb:goto L5664bb;
case 0x5664c0:c.instructions+=1;goto B5664c0;
case 0x5664c2:goto L5664c2;
case 0x5664c7:c.instructions+=1;goto B5664c7;
case 0x5664c9:goto L5664c9;
case 0x5664d0:c.instructions+=2;goto B5664d0;
case 0x5664d3:c.instructions+=1;goto B5664d3;
case 0x5664d9:goto L5664d9;
case 0x5664df:c.instructions+=2;goto B5664df;
case 0x5664e0:c.instructions+=1;goto B5664e0;
case 0x5664e5:goto L5664e5;
case 0x5664e6:c.instructions+=5;goto B5664e6;
case 0x5664e9:c.instructions+=4;goto B5664e9;
case 0x5664f0:c.instructions+=3;goto B5664f0;
case 0x5664f2:c.instructions+=2;goto B5664f2;
case 0x5664f3:c.instructions+=1;goto B5664f3;
case 0x5664f6:goto L5664f6;
case 0x5664fb:c.instructions+=3;goto B5664fb;
case 0x5664fc:c.instructions+=2;goto B5664fc;
case 0x5664fd:c.instructions+=1;goto B5664fd;
case 0x566503:goto L566503;
case 0x566509:goto L566509;
case 0x56650e:c.instructions+=1;goto B56650e;
case 0x566514:goto L566514;
case 0x56651a:goto L56651a;
case 0x56651f:c.instructions+=1;goto B56651f;
case 0x566525:goto L566525;
case 0x56652b:goto L56652b;
case 0x566530:c.instructions+=1;goto B566530;
case 0x566532:goto L566532;
case 0x566537:c.instructions+=1;goto B566537;
case 0x56653c:goto L56653c;
case 0x56653e:c.instructions+=1;goto B56653e;
case 0x566543:goto L566543;
case 0x566545:c.instructions+=1;goto B566545;
case 0x56654a:goto L56654a;
case 0x56654d:c.instructions+=6;goto B56654d;
case 0x566550:c.instructions+=5;goto B566550;
case 0x566553:c.instructions+=4;goto B566553;
case 0x566554:c.instructions+=3;goto B566554;
case 0x566555:c.instructions+=2;goto B566555;
case 0x56655a:c.instructions+=1;goto B56655a;
case 0x56655f:goto L56655f;
case 0x566560:c.instructions+=3;goto B566560;
case 0x566561:c.instructions+=2;goto B566561;
case 0x566566:c.instructions+=1;goto B566566;
case 0x56656b:goto L56656b;
case 0x566571:c.instructions+=6;goto B566571;
case 0x566574:c.instructions+=5;goto B566574;
case 0x566575:c.instructions+=4;goto B566575;
case 0x56657a:c.instructions+=3;goto B56657a;
case 0x56657f:c.instructions+=2;goto B56657f;
case 0x566580:c.instructions+=1;goto B566580;
case 0x566585:goto L566585;
case 0x566588:c.instructions+=4;goto B566588;
case 0x56658b:c.instructions+=3;goto B56658b;
case 0x56658d:c.instructions+=2;goto B56658d;
case 0x566591:c.instructions+=1;goto B566591;
case 0x566596:goto L566596;
case 0x566598:c.instructions+=2;goto B566598;
case 0x56659a:c.instructions+=1;goto B56659a;
case 0x56659f:goto L56659f;
case 0x5665a0:c.instructions+=7;goto B5665a0;
case 0x5665a1:c.instructions+=6;goto B5665a1;
case 0x5665a2:c.instructions+=5;goto B5665a2;
case 0x5665a5:c.instructions+=4;goto B5665a5;
case 0x5665ac:c.instructions+=3;goto B5665ac;
case 0x5665ae:c.instructions+=2;goto B5665ae;
case 0x5665af:c.instructions+=1;goto B5665af;
case 0x5665b2:goto L5665b2;
case 0x5665b7:c.instructions+=1;goto B5665b7;
case 0x5665bc:goto L5665bc;
case 0x5665bd:c.instructions+=8;goto B5665bd;
case 0x5665be:c.instructions+=7;goto B5665be;
case 0x5665c5:c.instructions+=6;goto B5665c5;
case 0x5665c6:c.instructions+=5;goto B5665c6;
case 0x5665c9:c.instructions+=4;goto B5665c9;
case 0x5665d0:c.instructions+=3;goto B5665d0;
case 0x5665d2:c.instructions+=2;goto B5665d2;
case 0x5665d3:c.instructions+=1;goto B5665d3;
case 0x5665d6:goto L5665d6;
case 0x5665db:c.instructions+=1;goto B5665db;
case 0x5665e1:goto L5665e1;
case 0x5665e7:goto L5665e7;
case 0x5665ec:c.instructions+=1;goto B5665ec;
case 0x5665f2:goto L5665f2;
case 0x5665f7:goto L5665f7;
case 0x5665fd:goto L5665fd;
case 0x566600:c.instructions+=3;goto B566600;
case 0x566603:c.instructions+=2;goto B566603;
case 0x566605:c.instructions+=1;goto B566605;
case 0x56660b:goto L56660b;
case 0x56660e:c.instructions+=2;goto B56660e;
case 0x566610:c.instructions+=1;goto B566610;
case 0x566616:goto L566616;
case 0x56661c:c.instructions+=2;goto B56661c;
case 0x56661e:c.instructions+=1;goto B56661e;
case 0x566620:goto L566620;
case 0x566624:c.instructions+=1;goto B566624;
case 0x566626:goto L566626;
case 0x566628:c.instructions+=1;goto B566628;
case 0x56662d:goto L56662d;
case 0x566630:c.instructions+=3;goto B566630;
case 0x566631:c.instructions+=2;goto B566631;
case 0x566633:c.instructions+=1;goto B566633;
case 0x566638:goto L566638;
case 0x56663d:goto L56663d;
case 0x566643:c.instructions+=2;goto B566643;
case 0x566645:c.instructions+=1;goto B566645;
case 0x566647:goto L566647;
case 0x56664b:c.instructions+=1;goto B56664b;
case 0x56664d:goto L56664d;
case 0x56664f:c.instructions+=1;goto B56664f;
case 0x566654:goto L566654;
case 0x566657:c.instructions+=3;goto B566657;
case 0x566658:c.instructions+=2;goto B566658;
case 0x56665a:c.instructions+=1;goto B56665a;
case 0x56665f:goto L56665f;
case 0x566664:goto L566664;
case 0x566666:c.instructions+=1;goto B566666;
case 0x56666c:goto L56666c;
case 0x566670:c.instructions+=1;goto B566670;
case 0x566676:goto L566676;
case 0x566678:c.instructions+=2;goto B566678;
case 0x56667d:c.instructions+=1;goto B56667d;
case 0x566682:goto L566682;
case 0x566686:c.instructions+=5;goto B566686;
case 0x566689:c.instructions+=4;goto B566689;
case 0x56668c:c.instructions+=3;goto B56668c;
case 0x56668e:c.instructions+=2;goto B56668e;
case 0x566694:c.instructions+=1;goto B566694;
case 0x566696:goto L566696;
case 0x56669d:c.instructions+=2;goto B56669d;
case 0x5666a2:c.instructions+=1;goto B5666a2;
case 0x5666a4:goto L5666a4;
case 0x5666a5:c.instructions+=3;goto B5666a5;
case 0x5666a7:c.instructions+=2;goto B5666a7;
case 0x5666ac:c.instructions+=1;goto B5666ac;
case 0x5666b1:goto L5666b1;
case 0x5666b3:c.instructions+=1;goto B5666b3;
case 0x5666b5:goto L5666b5;
case 0x5666ba:goto L5666ba;
case 0x5666bc:c.instructions+=1;goto B5666bc;
case 0x5666c1:goto L5666c1;
case 0x5666c4:c.instructions+=10;goto B5666c4;
case 0x5666c5:c.instructions+=9;goto B5666c5;
case 0x5666c7:c.instructions+=8;goto B5666c7;
case 0x5666cc:c.instructions+=7;goto B5666cc;
case 0x5666d1:c.instructions+=6;goto B5666d1;
case 0x5666d6:c.instructions+=5;goto B5666d6;
case 0x5666db:c.instructions+=4;goto B5666db;
case 0x5666e0:c.instructions+=3;goto B5666e0;
case 0x5666e5:c.instructions+=2;goto B5666e5;
case 0x5666e6:c.instructions+=1;goto B5666e6;
case 0x5666e8:goto L5666e8;
case 0x5666ea:c.instructions+=1;goto B5666ea;
case 0x5666ef:goto L5666ef;
case 0x5666f2:c.instructions+=9;goto B5666f2;
case 0x5666f7:c.instructions+=8;goto B5666f7;
case 0x5666f9:c.instructions+=7;goto B5666f9;
case 0x5666fe:c.instructions+=6;goto B5666fe;
case 0x566703:c.instructions+=5;goto B566703;
case 0x566708:c.instructions+=4;goto B566708;
case 0x56670d:c.instructions+=3;goto B56670d;
case 0x566712:c.instructions+=2;goto B566712;
case 0x566717:c.instructions+=1;goto B566717;
case 0x566718:goto L566718;
case 0x56671d:goto L56671d;
case 0x566720:c.instructions+=2;goto B566720;
case 0x56672a:c.instructions+=1;goto B56672a;
case 0x56672d:goto L56672d;
case 0x56672f:c.instructions+=2;goto B56672f;
case 0x566733:c.instructions+=1;goto B566733;
case 0x566738:goto L566738;
case 0x56673b:c.instructions+=5;goto B56673b;
case 0x56673d:c.instructions+=4;goto B56673d;
case 0x566742:c.instructions+=3;goto B566742;
case 0x566747:c.instructions+=2;goto B566747;
case 0x566748:c.instructions+=1;goto B566748;
case 0x56674d:goto L56674d;
case 0x566750:c.instructions+=3;goto B566750;
case 0x566751:c.instructions+=2;goto B566751;
case 0x566753:c.instructions+=1;goto B566753;
case 0x566758:goto L566758;
case 0x56675b:c.instructions+=8;goto B56675b;
case 0x56675c:c.instructions+=7;goto B56675c;
case 0x56675d:c.instructions+=6;goto B56675d;
case 0x56675e:c.instructions+=5;goto B56675e;
case 0x566761:c.instructions+=4;goto B566761;
case 0x566768:c.instructions+=3;goto B566768;
case 0x56676a:c.instructions+=2;goto B56676a;
case 0x56676b:c.instructions+=1;goto B56676b;
case 0x56676e:goto L56676e;
case 0x566770:c.instructions+=1;goto B566770;
case 0x566776:goto L566776;
case 0x56677a:c.instructions+=1;goto B56677a;
case 0x566780:goto L566780;
case 0x566786:c.instructions+=2;goto B566786;
case 0x566788:c.instructions+=1;goto B566788;
case 0x56678e:goto L56678e;
case 0x566792:c.instructions+=1;goto B566792;
case 0x566794:goto L566794;
case 0x566797:c.instructions+=3;goto B566797;
case 0x566798:c.instructions+=2;goto B566798;
case 0x56679d:c.instructions+=1;goto B56679d;
case 0x5667a2:goto L5667a2;
case 0x5667a4:c.instructions+=1;goto B5667a4;
case 0x5667a6:goto L5667a6;
case 0x5667a9:c.instructions+=3;goto B5667a9;
case 0x5667ac:c.instructions+=2;goto B5667ac;
case 0x5667af:c.instructions+=1;goto B5667af;
case 0x5667b1:goto L5667b1;
case 0x5667b5:goto L5667b5;
case 0x5667b6:c.instructions+=2;goto B5667b6;
case 0x5667b9:c.instructions+=1;goto B5667b9;
case 0x5667bb:goto L5667bb;
case 0x5667bd:c.instructions+=2;goto B5667bd;
case 0x5667bf:c.instructions+=1;goto B5667bf;
case 0x5667c0:goto L5667c0;
case 0x5667c3:c.instructions+=3;goto B5667c3;
case 0x5667c4:c.instructions+=2;goto B5667c4;
case 0x5667c9:c.instructions+=1;goto B5667c9;
case 0x5667ce:goto L5667ce;
case 0x5667d0:c.instructions+=1;goto B5667d0;
case 0x5667d2:goto L5667d2;
case 0x5667d4:goto L5667d4;
case 0x5667d5:c.instructions+=2;goto B5667d5;
case 0x5667d8:c.instructions+=1;goto B5667d8;
case 0x5667da:goto L5667da;
case 0x5667dd:c.instructions+=2;goto B5667dd;
case 0x5667df:c.instructions+=1;goto B5667df;
case 0x5667e5:goto L5667e5;
case 0x5667e7:c.instructions+=1;goto B5667e7;
case 0x5667ec:goto L5667ec;
case 0x5667ee:c.instructions+=2;goto B5667ee;
case 0x5667f1:c.instructions+=1;goto B5667f1;
case 0x5667f3:goto L5667f3;
case 0x5667f8:goto L5667f8;
case 0x5667fd:c.instructions+=2;goto B5667fd;
case 0x5667fe:c.instructions+=1;goto B5667fe;
case 0x566803:goto L566803;
case 0x566806:c.instructions+=5;goto B566806;
case 0x566809:c.instructions+=4;goto B566809;
case 0x566813:c.instructions+=3;goto B566813;
case 0x566815:c.instructions+=2;goto B566815;
case 0x566819:c.instructions+=1;goto B566819;
case 0x56681e:goto L56681e;
case 0x566824:c.instructions+=3;goto B566824;
case 0x566826:c.instructions+=2;goto B566826;
case 0x56682a:c.instructions+=1;goto B56682a;
case 0x56682f:goto L56682f;
case 0x566832:c.instructions+=5;goto B566832;
case 0x566834:c.instructions+=4;goto B566834;
case 0x566839:c.instructions+=3;goto B566839;
case 0x56683e:c.instructions+=2;goto B56683e;
case 0x56683f:c.instructions+=1;goto B56683f;
case 0x566844:goto L566844;
case 0x566847:c.instructions+=1;goto B566847;
case 0x566848:goto L566848;
case 0x56684a:c.instructions+=1;goto B56684a;
case 0x56684f:goto L56684f;
case 0x566852:goto L566852;
case 0x566854:c.instructions+=1;goto B566854;
case 0x566859:goto L566859;
case 0x56685a:c.instructions+=7;goto B56685a;
case 0x56685b:c.instructions+=6;goto B56685b;
case 0x56685c:c.instructions+=5;goto B56685c;
case 0x56685f:c.instructions+=4;goto B56685f;
case 0x566866:c.instructions+=3;goto B566866;
case 0x566868:c.instructions+=2;goto B566868;
case 0x566869:c.instructions+=1;goto B566869;
case 0x56686c:goto L56686c;
case 0x566871:c.instructions+=1;goto B566871;
case 0x566873:goto L566873;
case 0x566875:c.instructions+=1;goto B566875;
case 0x56687b:goto L56687b;
case 0x56687f:c.instructions+=1;goto B56687f;
case 0x566885:goto L566885;
case 0x566887:c.instructions+=3;goto B566887;
case 0x56688c:c.instructions+=2;goto B56688c;
case 0x56688e:c.instructions+=1;goto B56688e;
case 0x566893:goto L566893;
case 0x566895:c.instructions+=1;goto B566895;
case 0x566897:goto L566897;
case 0x56689a:c.instructions+=4;goto B56689a;
case 0x56689d:c.instructions+=3;goto B56689d;
case 0x56689f:c.instructions+=2;goto B56689f;
case 0x5668a2:c.instructions+=1;goto B5668a2;
case 0x5668a4:goto L5668a4;
case 0x5668a8:goto L5668a8;
case 0x5668aa:c.instructions+=1;goto B5668aa;
case 0x5668b0:goto L5668b0;
case 0x5668b3:c.instructions+=3;goto B5668b3;
case 0x5668b4:c.instructions+=2;goto B5668b4;
case 0x5668b9:c.instructions+=1;goto B5668b9;
case 0x5668be:goto L5668be;
case 0x5668c0:c.instructions+=1;goto B5668c0;
case 0x5668c2:goto L5668c2;
case 0x5668c5:c.instructions+=2;goto B5668c5;
case 0x5668c7:c.instructions+=1;goto B5668c7;
case 0x5668c9:goto L5668c9;
case 0x5668cd:c.instructions+=4;goto B5668cd;
case 0x5668d0:c.instructions+=3;goto B5668d0;
case 0x5668d3:c.instructions+=2;goto B5668d3;
case 0x5668d6:c.instructions+=1;goto B5668d6;
case 0x5668d8:goto L5668d8;
case 0x5668df:c.instructions+=1;goto B5668df;
case 0x5668e6:goto L5668e6;
case 0x5668e9:c.instructions+=3;goto B5668e9;
case 0x5668eb:c.instructions+=2;goto B5668eb;
case 0x5668ed:c.instructions+=1;goto B5668ed;
case 0x5668ef:goto L5668ef;
case 0x5668f1:goto L5668f1;
case 0x5668f2:c.instructions+=2;goto B5668f2;
case 0x5668f5:c.instructions+=1;goto B5668f5;
case 0x5668f7:goto L5668f7;
case 0x5668f9:c.instructions+=2;goto B5668f9;
case 0x5668fe:c.instructions+=1;goto B5668fe;
case 0x566903:goto L566903;
case 0x566907:c.instructions+=5;goto B566907;
case 0x56690a:c.instructions+=4;goto B56690a;
case 0x56690d:c.instructions+=3;goto B56690d;
case 0x56690f:c.instructions+=2;goto B56690f;
case 0x566915:c.instructions+=1;goto B566915;
case 0x56691b:goto L56691b;
case 0x56691d:c.instructions+=1;goto B56691d;
case 0x56691f:goto L56691f;
case 0x566926:c.instructions+=2;goto B566926;
case 0x56692b:c.instructions+=1;goto B56692b;
case 0x56692d:goto L56692d;
case 0x56692e:c.instructions+=3;goto B56692e;
case 0x566930:c.instructions+=2;goto B566930;
case 0x566935:c.instructions+=1;goto B566935;
case 0x56693a:goto L56693a;
case 0x56693c:c.instructions+=1;goto B56693c;
case 0x56693e:goto L56693e;
case 0x566943:goto L566943;
case 0x566945:c.instructions+=1;goto B566945;
case 0x56694a:goto L56694a;
case 0x56694d:c.instructions+=10;goto B56694d;
case 0x56694e:c.instructions+=9;goto B56694e;
case 0x566950:c.instructions+=8;goto B566950;
case 0x566955:c.instructions+=7;goto B566955;
case 0x56695a:c.instructions+=6;goto B56695a;
case 0x56695f:c.instructions+=5;goto B56695f;
case 0x566964:c.instructions+=4;goto B566964;
case 0x566969:c.instructions+=3;goto B566969;
case 0x56696e:c.instructions+=2;goto B56696e;
case 0x56696f:c.instructions+=1;goto B56696f;
case 0x566971:goto L566971;
case 0x566973:c.instructions+=1;goto B566973;
case 0x566978:goto L566978;
case 0x56697b:c.instructions+=10;goto B56697b;
case 0x566980:c.instructions+=9;goto B566980;
case 0x566982:c.instructions+=8;goto B566982;
case 0x566987:c.instructions+=7;goto B566987;
case 0x56698c:c.instructions+=6;goto B56698c;
case 0x566991:c.instructions+=5;goto B566991;
case 0x566996:c.instructions+=4;goto B566996;
case 0x56699b:c.instructions+=3;goto B56699b;
case 0x5669a0:c.instructions+=2;goto B5669a0;
case 0x5669a1:c.instructions+=1;goto B5669a1;
case 0x5669a3:goto L5669a3;
case 0x5669a5:c.instructions+=1;goto B5669a5;
case 0x5669aa:goto L5669aa;
case 0x5669ad:c.instructions+=9;goto B5669ad;
case 0x5669b2:c.instructions+=8;goto B5669b2;
case 0x5669b4:c.instructions+=7;goto B5669b4;
case 0x5669b9:c.instructions+=6;goto B5669b9;
case 0x5669be:c.instructions+=5;goto B5669be;
case 0x5669c3:c.instructions+=4;goto B5669c3;
case 0x5669c8:c.instructions+=3;goto B5669c8;
case 0x5669cd:c.instructions+=2;goto B5669cd;
case 0x5669d2:c.instructions+=1;goto B5669d2;
case 0x5669d3:goto L5669d3;
case 0x5669d8:goto L5669d8;
case 0x5669db:c.instructions+=5;goto B5669db;
case 0x5669de:c.instructions+=4;goto B5669de;
case 0x5669e8:c.instructions+=3;goto B5669e8;
case 0x5669ea:c.instructions+=2;goto B5669ea;
case 0x5669ee:c.instructions+=1;goto B5669ee;
case 0x5669f3:goto L5669f3;
case 0x5669f6:c.instructions+=5;goto B5669f6;
case 0x5669f8:c.instructions+=4;goto B5669f8;
case 0x5669fd:c.instructions+=3;goto B5669fd;
case 0x566a02:c.instructions+=2;goto B566a02;
case 0x566a03:c.instructions+=1;goto B566a03;
case 0x566a08:goto L566a08;
case 0x566a0b:c.instructions+=3;goto B566a0b;
case 0x566a0c:c.instructions+=2;goto B566a0c;
case 0x566a0e:c.instructions+=1;goto B566a0e;
case 0x566a13:goto L566a13;
case 0x566a16:c.instructions+=8;goto B566a16;
case 0x566a17:c.instructions+=7;goto B566a17;
case 0x566a18:c.instructions+=6;goto B566a18;
case 0x566a19:c.instructions+=5;goto B566a19;
case 0x566a1c:c.instructions+=4;goto B566a1c;
case 0x566a23:c.instructions+=3;goto B566a23;
case 0x566a25:c.instructions+=2;goto B566a25;
case 0x566a26:c.instructions+=1;goto B566a26;
case 0x566a29:goto L566a29;
case 0x566a2c:c.instructions+=2;goto B566a2c;
case 0x566a2f:c.instructions+=1;goto B566a2f;
case 0x566a35:goto L566a35;
case 0x566a3b:c.instructions+=2;goto B566a3b;
case 0x566a3d:c.instructions+=1;goto B566a3d;
case 0x566a43:goto L566a43;
case 0x566a45:c.instructions+=2;goto B566a45;
case 0x566a4a:c.instructions+=1;goto B566a4a;
case 0x566a4f:goto L566a4f;
case 0x566a51:c.instructions+=1;goto B566a51;
case 0x566a57:goto L566a57;
case 0x566a5a:c.instructions+=3;goto B566a5a;
case 0x566a5d:c.instructions+=2;goto B566a5d;
case 0x566a5f:c.instructions+=1;goto B566a5f;
case 0x566a65:goto L566a65;
case 0x566a67:c.instructions+=2;goto B566a67;
case 0x566a69:c.instructions+=1;goto B566a69;
case 0x566a70:goto L566a70;
case 0x566a73:c.instructions+=3;goto B566a73;
case 0x566a74:c.instructions+=2;goto B566a74;
case 0x566a79:c.instructions+=1;goto B566a79;
case 0x566a7e:goto L566a7e;
case 0x566a80:c.instructions+=1;goto B566a80;
case 0x566a82:goto L566a82;
case 0x566a85:c.instructions+=3;goto B566a85;
case 0x566a88:c.instructions+=2;goto B566a88;
case 0x566a8b:c.instructions+=1;goto B566a8b;
case 0x566a8d:goto L566a8d;
case 0x566a8f:goto L566a8f;
case 0x566a90:c.instructions+=2;goto B566a90;
case 0x566a93:c.instructions+=1;goto B566a93;
case 0x566a95:goto L566a95;
case 0x566a97:c.instructions+=1;goto B566a97;
case 0x566a9d:goto L566a9d;
case 0x566a9f:c.instructions+=1;goto B566a9f;
case 0x566aa4:goto L566aa4;
case 0x566aa7:c.instructions+=4;goto B566aa7;
case 0x566aac:c.instructions+=3;goto B566aac;
case 0x566ab1:c.instructions+=2;goto B566ab1;
case 0x566ab2:c.instructions+=1;goto B566ab2;
case 0x566ab7:goto L566ab7;
case 0x566aba:c.instructions+=5;goto B566aba;
case 0x566abd:c.instructions+=4;goto B566abd;
case 0x566ac7:c.instructions+=3;goto B566ac7;
case 0x566ac9:c.instructions+=2;goto B566ac9;
case 0x566acd:c.instructions+=1;goto B566acd;
case 0x566ad2:goto L566ad2;
case 0x566ad8:c.instructions+=3;goto B566ad8;
case 0x566ada:c.instructions+=2;goto B566ada;
case 0x566ade:c.instructions+=1;goto B566ade;
case 0x566ae3:goto L566ae3;
case 0x566ae6:c.instructions+=5;goto B566ae6;
case 0x566ae8:c.instructions+=4;goto B566ae8;
case 0x566aed:c.instructions+=3;goto B566aed;
case 0x566af2:c.instructions+=2;goto B566af2;
case 0x566af3:c.instructions+=1;goto B566af3;
case 0x566af8:goto L566af8;
case 0x566afb:c.instructions+=2;goto B566afb;
case 0x566afc:c.instructions+=1;goto B566afc;
case 0x566b01:goto L566b01;
case 0x566b04:c.instructions+=1;goto B566b04;
case 0x566b06:goto L566b06;
case 0x566b0c:c.instructions+=2;goto B566b0c;
case 0x566b0e:c.instructions+=1;goto B566b0e;
case 0x566b10:goto L566b10;
case 0x566b12:c.instructions+=1;goto B566b12;
case 0x566b14:goto L566b14;
case 0x566b17:c.instructions+=3;goto B566b17;
case 0x566b18:c.instructions+=2;goto B566b18;
case 0x566b1d:c.instructions+=1;goto B566b1d;
case 0x566b22:goto L566b22;
case 0x566b24:c.instructions+=1;goto B566b24;
case 0x566b26:goto L566b26;
case 0x566b28:goto L566b28;
case 0x566b29:c.instructions+=2;goto B566b29;
case 0x566b2c:c.instructions+=1;goto B566b2c;
case 0x566b2e:goto L566b2e;
case 0x566b30:c.instructions+=1;goto B566b30;
case 0x566b32:goto L566b32;
case 0x566b34:c.instructions+=1;goto B566b34;
case 0x566b39:goto L566b39;
case 0x566b3c:c.instructions+=2;goto B566b3c;
case 0x566b41:c.instructions+=1;goto B566b41;
case 0x566b46:goto L566b46;
case 0x566b49:c.instructions+=4;goto B566b49;
case 0x566b4c:c.instructions+=3;goto B566b4c;
case 0x566b4e:c.instructions+=2;goto B566b4e;
case 0x566b53:c.instructions+=1;goto B566b53;
case 0x566b58:goto L566b58;
case 0x566b5a:c.instructions+=3;goto B566b5a;
case 0x566b60:c.instructions+=2;goto B566b60;
case 0x566b62:c.instructions+=1;goto B566b62;
case 0x566b68:goto L566b68;
case 0x566b6a:c.instructions+=1;goto B566b6a;
case 0x566b70:goto L566b70;
case 0x566b74:c.instructions+=1;goto B566b74;
case 0x566b7a:goto L566b7a;
case 0x566b7d:c.instructions+=1;goto B566b7d;
case 0x566b7f:goto L566b7f;
case 0x566b82:c.instructions+=1;goto B566b82;
case 0x566b84:goto L566b84;
case 0x566b87:c.instructions+=1;goto B566b87;
case 0x566b8d:goto L566b8d;
case 0x566b8f:c.instructions+=1;goto B566b8f;
case 0x566b94:goto L566b94;
case 0x566b97:c.instructions+=4;goto B566b97;
case 0x566b9c:c.instructions+=3;goto B566b9c;
case 0x566ba1:c.instructions+=2;goto B566ba1;
case 0x566ba2:c.instructions+=1;goto B566ba2;
case 0x566ba7:goto L566ba7;
case 0x566baa:c.instructions+=5;goto B566baa;
case 0x566bad:c.instructions+=4;goto B566bad;
case 0x566bb7:c.instructions+=3;goto B566bb7;
case 0x566bb9:c.instructions+=2;goto B566bb9;
case 0x566bbd:c.instructions+=1;goto B566bbd;
case 0x566bc2:goto L566bc2;
case 0x566bc8:c.instructions+=3;goto B566bc8;
case 0x566bca:c.instructions+=2;goto B566bca;
case 0x566bce:c.instructions+=1;goto B566bce;
case 0x566bd3:goto L566bd3;
case 0x566bda:goto L566bda;
case 0x566bdd:c.instructions+=5;goto B566bdd;
case 0x566bdf:c.instructions+=4;goto B566bdf;
case 0x566be4:c.instructions+=3;goto B566be4;
case 0x566be9:c.instructions+=2;goto B566be9;
case 0x566bea:c.instructions+=1;goto B566bea;
case 0x566bef:goto L566bef;
case 0x566bf2:c.instructions+=3;goto B566bf2;
case 0x566bf3:c.instructions+=2;goto B566bf3;
case 0x566bf5:c.instructions+=1;goto B566bf5;
case 0x566bfa:goto L566bfa;
case 0x566bfd:c.instructions+=8;goto B566bfd;
case 0x566bfe:c.instructions+=7;goto B566bfe;
case 0x566bff:c.instructions+=6;goto B566bff;
case 0x566c00:c.instructions+=5;goto B566c00;
case 0x566c03:c.instructions+=4;goto B566c03;
case 0x566c0a:c.instructions+=3;goto B566c0a;
case 0x566c0c:c.instructions+=2;goto B566c0c;
case 0x566c0d:c.instructions+=1;goto B566c0d;
case 0x566c10:goto L566c10;
case 0x566c12:c.instructions+=1;goto B566c12;
case 0x566c18:goto L566c18;
case 0x566c1a:c.instructions+=2;goto B566c1a;
case 0x566c1f:c.instructions+=1;goto B566c1f;
case 0x566c24:goto L566c24;
case 0x566c26:c.instructions+=3;goto B566c26;
case 0x566c2b:c.instructions+=2;goto B566c2b;
case 0x566c2d:c.instructions+=1;goto B566c2d;
case 0x566c32:goto L566c32;
case 0x566c34:c.instructions+=1;goto B566c34;
case 0x566c36:goto L566c36;
case 0x566c39:c.instructions+=4;goto B566c39;
case 0x566c3c:c.instructions+=3;goto B566c3c;
case 0x566c3e:c.instructions+=2;goto B566c3e;
case 0x566c42:c.instructions+=1;goto B566c42;
case 0x566c44:goto L566c44;
case 0x566c48:goto L566c48;
case 0x566c4a:c.instructions+=1;goto B566c4a;
case 0x566c4c:goto L566c4c;
case 0x566c4e:c.instructions+=3;goto B566c4e;
case 0x566c53:c.instructions+=2;goto B566c53;
case 0x566c55:c.instructions+=1;goto B566c55;
case 0x566c5a:goto L566c5a;
case 0x566c5c:c.instructions+=1;goto B566c5c;
case 0x566c5e:goto L566c5e;
case 0x566c60:c.instructions+=1;goto B566c60;
case 0x566c62:goto L566c62;
case 0x566c64:goto L566c64;
case 0x566c66:c.instructions+=1;goto B566c66;
case 0x566c68:goto L566c68;
case 0x566c6b:c.instructions+=4;goto B566c6b;
case 0x566c6e:c.instructions+=3;goto B566c6e;
case 0x566c70:c.instructions+=2;goto B566c70;
case 0x566c74:c.instructions+=1;goto B566c74;
case 0x566c76:goto L566c76;
case 0x566c7a:goto L566c7a;
case 0x566c7d:c.instructions+=4;goto B566c7d;
case 0x566c80:c.instructions+=3;goto B566c80;
case 0x566c85:c.instructions+=2;goto B566c85;
case 0x566c8a:c.instructions+=1;goto B566c8a;
case 0x566c8d:goto L566c8d;
case 0x566c8f:goto L566c8f;
case 0x566c92:c.instructions+=2;goto B566c92;
case 0x566c94:c.instructions+=1;goto B566c94;
case 0x566c96:goto L566c96;
case 0x566c99:c.instructions+=2;goto B566c99;
case 0x566c9b:c.instructions+=1;goto B566c9b;
case 0x566c9d:goto L566c9d;
case 0x566ca2:c.instructions+=2;goto B566ca2;
case 0x566ca4:c.instructions+=1;goto B566ca4;
case 0x566ca7:goto L566ca7;
case 0x566ca9:goto L566ca9;
case 0x566cad:c.instructions+=1;goto B566cad;
case 0x566caf:goto L566caf;
case 0x566cb3:c.instructions+=7;goto B566cb3;
case 0x566cb7:c.instructions+=6;goto B566cb7;
case 0x566cbb:c.instructions+=5;goto B566cbb;
case 0x566cbf:c.instructions+=4;goto B566cbf;
case 0x566cc3:c.instructions+=3;goto B566cc3;
case 0x566cc7:c.instructions+=2;goto B566cc7;
case 0x566ccb:c.instructions+=1;goto B566ccb;
case 0x566ccf:goto L566ccf;
case 0x566cd1:c.instructions+=1;goto B566cd1;
case 0x566cd3:goto L566cd3;
case 0x566cd7:goto L566cd7;
case 0x566cdb:c.instructions+=2;goto B566cdb;
case 0x566cdd:c.instructions+=1;goto B566cdd;
case 0x566cdf:goto L566cdf;
case 0x566ce1:c.instructions+=1;goto B566ce1;
case 0x566ce6:goto L566ce6;
case 0x566ce9:c.instructions+=1;goto B566ce9;
case 0x566ceb:goto L566ceb;
case 0x566cee:c.instructions+=4;goto B566cee;
case 0x566cf3:c.instructions+=3;goto B566cf3;
case 0x566cf8:c.instructions+=2;goto B566cf8;
case 0x566cf9:c.instructions+=1;goto B566cf9;
case 0x566cfb:goto L566cfb;
case 0x566cfe:c.instructions+=2;goto B566cfe;
case 0x566d00:c.instructions+=1;goto B566d00;
case 0x566d02:goto L566d02;
case 0x566d05:c.instructions+=4;goto B566d05;
case 0x566d0a:c.instructions+=3;goto B566d0a;
case 0x566d0f:c.instructions+=2;goto B566d0f;
case 0x566d10:c.instructions+=1;goto B566d10;
case 0x566d12:goto L566d12;
case 0x566d15:c.instructions+=3;goto B566d15;
case 0x566d1a:c.instructions+=2;goto B566d1a;
case 0x566d1f:c.instructions+=1;goto B566d1f;
case 0x566d20:goto L566d20;
case 0x566d25:goto L566d25;
case 0x566d28:c.instructions+=5;goto B566d28;
case 0x566d2b:c.instructions+=4;goto B566d2b;
case 0x566d35:c.instructions+=3;goto B566d35;
case 0x566d37:c.instructions+=2;goto B566d37;
case 0x566d3b:c.instructions+=1;goto B566d3b;
case 0x566d40:goto L566d40;
case 0x566d46:c.instructions+=3;goto B566d46;
case 0x566d48:c.instructions+=2;goto B566d48;
case 0x566d4c:c.instructions+=1;goto B566d4c;
case 0x566d51:goto L566d51;
case 0x566d56:goto L566d56;
case 0x566d5c:c.instructions+=2;goto B566d5c;
case 0x566d5e:c.instructions+=1;goto B566d5e;
case 0x566d64:goto L566d64;
case 0x566d6a:c.instructions+=3;goto B566d6a;
case 0x566d6c:c.instructions+=2;goto B566d6c;
case 0x566d6e:c.instructions+=1;goto B566d6e;
case 0x566d70:goto L566d70;
case 0x566d75:goto L566d75;
case 0x566d76:c.instructions+=7;goto B566d76;
case 0x566d77:c.instructions+=6;goto B566d77;
case 0x566d78:c.instructions+=5;goto B566d78;
case 0x566d7b:c.instructions+=4;goto B566d7b;
case 0x566d82:c.instructions+=3;goto B566d82;
case 0x566d84:c.instructions+=2;goto B566d84;
case 0x566d85:c.instructions+=1;goto B566d85;
case 0x566d88:goto L566d88;
case 0x566d8d:goto L566d8d;
case 0x566d8f:c.instructions+=1;goto B566d8f;
case 0x566d95:goto L566d95;
case 0x566d98:c.instructions+=6;goto B566d98;
case 0x566d9b:c.instructions+=5;goto B566d9b;
case 0x566d9e:c.instructions+=4;goto B566d9e;
case 0x566d9f:c.instructions+=3;goto B566d9f;
case 0x566da0:c.instructions+=2;goto B566da0;
case 0x566da5:c.instructions+=1;goto B566da5;
case 0x566daa:goto L566daa;
case 0x566dac:c.instructions+=1;goto B566dac;
case 0x566dae:goto L566dae;
case 0x566db0:c.instructions+=1;goto B566db0;
case 0x566db5:goto L566db5;
case 0x566db8:c.instructions+=4;goto B566db8;
case 0x566dbd:c.instructions+=3;goto B566dbd;
case 0x566dc2:c.instructions+=2;goto B566dc2;
case 0x566dc3:c.instructions+=1;goto B566dc3;
case 0x566dc5:goto L566dc5;
case 0x566dcc:c.instructions+=1;goto B566dcc;
case 0x566dd2:goto L566dd2;
case 0x566dd3:c.instructions+=3;goto B566dd3;
case 0x566dd4:c.instructions+=2;goto B566dd4;
case 0x566dd9:c.instructions+=1;goto B566dd9;
case 0x566dde:goto L566dde;
case 0x566de0:c.instructions+=1;goto B566de0;
case 0x566de2:goto L566de2;
case 0x566de6:c.instructions+=1;goto B566de6;
case 0x566de8:goto L566de8;
case 0x566ded:c.instructions+=5;goto B566ded;
case 0x566dee:c.instructions+=4;goto B566dee;
case 0x566def:c.instructions+=3;goto B566def;
case 0x566df4:c.instructions+=2;goto B566df4;
case 0x566df7:c.instructions+=1;goto B566df7;
case 0x566dfc:goto L566dfc;
case 0x566dff:c.instructions+=2;goto B566dff;
case 0x566e01:c.instructions+=1;goto B566e01;
case 0x566e03:goto L566e03;
case 0x566e08:goto L566e08;
case 0x566e0b:c.instructions+=3;goto B566e0b;
case 0x566e10:c.instructions+=2;goto B566e10;
case 0x566e15:c.instructions+=1;goto B566e15;
case 0x566e16:goto L566e16;
case 0x566e1b:goto L566e1b;
case 0x566e1e:c.instructions+=2;goto B566e1e;
case 0x566e28:c.instructions+=1;goto B566e28;
case 0x566e2a:goto L566e2a;
case 0x566e2f:goto L566e2f;
case 0x566e32:c.instructions+=10;goto B566e32;
case 0x566e37:c.instructions+=9;goto B566e37;
case 0x566e39:c.instructions+=8;goto B566e39;
case 0x566e3e:c.instructions+=7;goto B566e3e;
case 0x566e43:c.instructions+=6;goto B566e43;
case 0x566e48:c.instructions+=5;goto B566e48;
case 0x566e4d:c.instructions+=4;goto B566e4d;
case 0x566e52:c.instructions+=3;goto B566e52;
case 0x566e57:c.instructions+=2;goto B566e57;
case 0x566e58:c.instructions+=1;goto B566e58;
case 0x566e5a:goto L566e5a;
case 0x566e5c:c.instructions+=1;goto B566e5c;
case 0x566e61:goto L566e61;
case 0x566e64:c.instructions+=9;goto B566e64;
case 0x566e69:c.instructions+=8;goto B566e69;
case 0x566e6b:c.instructions+=7;goto B566e6b;
case 0x566e70:c.instructions+=6;goto B566e70;
case 0x566e75:c.instructions+=5;goto B566e75;
case 0x566e7a:c.instructions+=4;goto B566e7a;
case 0x566e7f:c.instructions+=3;goto B566e7f;
case 0x566e84:c.instructions+=2;goto B566e84;
case 0x566e89:c.instructions+=1;goto B566e89;
case 0x566e8a:goto L566e8a;
case 0x566e8f:goto L566e8f;
case 0x566e92:c.instructions+=1;goto B566e92;
case 0x566e9c:goto L566e9c;
case 0x566e9f:c.instructions+=3;goto B566e9f;
case 0x566ea1:c.instructions+=2;goto B566ea1;
case 0x566ea5:c.instructions+=1;goto B566ea5;
case 0x566eaa:goto L566eaa;
case 0x566eb0:c.instructions+=1;goto B566eb0;
case 0x566eb5:goto L566eb5;
case 0x566eb7:c.instructions+=1;goto B566eb7;
case 0x566ebc:goto L566ebc;
case 0x566ec3:c.instructions+=5;goto B566ec3;
case 0x566ec7:c.instructions+=4;goto B566ec7;
case 0x566ece:c.instructions+=3;goto B566ece;
case 0x566ed3:c.instructions+=2;goto B566ed3;
case 0x566ed5:c.instructions+=1;goto B566ed5;
case 0x566ed7:goto L566ed7;
case 0x566ed9:c.instructions+=2;goto B566ed9;
case 0x566ede:c.instructions+=1;goto B566ede;
case 0x566ee3:goto L566ee3;
case 0x566ee5:c.instructions+=2;goto B566ee5;
case 0x566eea:c.instructions+=1;goto B566eea;
case 0x566eef:goto L566eef;
case 0x566ef0:c.instructions+=7;goto B566ef0;
case 0x566ef1:c.instructions+=6;goto B566ef1;
case 0x566ef2:c.instructions+=5;goto B566ef2;
case 0x566ef5:c.instructions+=4;goto B566ef5;
case 0x566efc:c.instructions+=3;goto B566efc;
case 0x566efe:c.instructions+=2;goto B566efe;
case 0x566eff:c.instructions+=1;goto B566eff;
case 0x566f02:goto L566f02;
case 0x566f04:c.instructions+=1;goto B566f04;
case 0x566f09:goto L566f09;
case 0x566f0f:c.instructions+=2;goto B566f0f;
case 0x566f11:c.instructions+=1;goto B566f11;
case 0x566f17:goto L566f17;
case 0x566f1a:c.instructions+=3;goto B566f1a;
case 0x566f1d:c.instructions+=2;goto B566f1d;
case 0x566f20:c.instructions+=1;goto B566f20;
case 0x566f22:goto L566f22;
case 0x566f25:c.instructions+=1;goto B566f25;
case 0x566f2b:goto L566f2b;
case 0x566f2e:c.instructions+=7;goto B566f2e;
case 0x566f31:c.instructions+=6;goto B566f31;
case 0x566f34:c.instructions+=5;goto B566f34;
case 0x566f37:c.instructions+=4;goto B566f37;
case 0x566f3a:c.instructions+=3;goto B566f3a;
case 0x566f3b:c.instructions+=2;goto B566f3b;
case 0x566f42:c.instructions+=1;goto B566f42;
case 0x566f47:goto L566f47;
case 0x566f4d:c.instructions+=4;goto B566f4d;
case 0x566f4f:c.instructions+=3;goto B566f4f;
case 0x566f52:c.instructions+=2;goto B566f52;
case 0x566f55:c.instructions+=1;goto B566f55;
case 0x566f58:goto L566f58;
case 0x566f5a:c.instructions+=8;goto B566f5a;
case 0x566f5d:c.instructions+=7;goto B566f5d;
case 0x566f60:c.instructions+=6;goto B566f60;
case 0x566f62:c.instructions+=5;goto B566f62;
case 0x566f64:c.instructions+=4;goto B566f64;
case 0x566f65:c.instructions+=3;goto B566f65;
case 0x566f66:c.instructions+=2;goto B566f66;
case 0x566f6b:c.instructions+=1;goto B566f6b;
case 0x566f70:goto L566f70;
case 0x566f72:c.instructions+=2;goto B566f72;
case 0x566f74:c.instructions+=1;goto B566f74;
case 0x566f76:goto L566f76;
case 0x566f7a:c.instructions+=2;goto B566f7a;
case 0x566f7d:c.instructions+=1;goto B566f7d;
case 0x566f7f:goto L566f7f;
case 0x566f82:c.instructions+=5;goto B566f82;
case 0x566f85:c.instructions+=4;goto B566f85;
case 0x566f86:c.instructions+=3;goto B566f86;
case 0x566f87:c.instructions+=2;goto B566f87;
case 0x566f8c:c.instructions+=1;goto B566f8c;
case 0x566f91:goto L566f91;
case 0x566f93:c.instructions+=1;goto B566f93;
case 0x566f95:goto L566f95;
case 0x566f97:c.instructions+=1;goto B566f97;
case 0x566f9c:goto L566f9c;
case 0x566f9f:c.instructions+=2;goto B566f9f;
case 0x566fa1:c.instructions+=1;goto B566fa1;
case 0x566fa3:goto L566fa3;
case 0x566fa6:c.instructions+=2;goto B566fa6;
case 0x566fad:c.instructions+=1;goto B566fad;
case 0x566faf:goto L566faf;
case 0x566fb1:goto L566fb1;
case 0x566fb4:c.instructions+=5;goto B566fb4;
case 0x566fb6:c.instructions+=4;goto B566fb6;
case 0x566fb9:c.instructions+=3;goto B566fb9;
case 0x566fbc:c.instructions+=2;goto B566fbc;
case 0x566fbf:c.instructions+=1;goto B566fbf;
case 0x566fc1:goto L566fc1;
case 0x566fc4:c.instructions+=8;goto B566fc4;
case 0x566fc7:c.instructions+=7;goto B566fc7;
case 0x566fc9:c.instructions+=6;goto B566fc9;
case 0x566fcb:c.instructions+=5;goto B566fcb;
case 0x566fcc:c.instructions+=4;goto B566fcc;
case 0x566fcd:c.instructions+=3;goto B566fcd;
case 0x566fce:c.instructions+=2;goto B566fce;
case 0x566fd3:c.instructions+=1;goto B566fd3;
case 0x566fd8:goto L566fd8;
case 0x566fda:c.instructions+=2;goto B566fda;
case 0x566fdc:c.instructions+=1;goto B566fdc;
case 0x566fde:goto L566fde;
case 0x566fe1:c.instructions+=4;goto B566fe1;
case 0x566fe4:c.instructions+=3;goto B566fe4;
case 0x566fe5:c.instructions+=2;goto B566fe5;
case 0x566fea:c.instructions+=1;goto B566fea;
case 0x566fef:goto L566fef;
case 0x566ff3:c.instructions+=4;goto B566ff3;
case 0x566ff6:c.instructions+=3;goto B566ff6;
case 0x566ff9:c.instructions+=2;goto B566ff9;
case 0x566ffb:c.instructions+=1;goto B566ffb;
default:missing_instruction(c.pc);}
B566000:L566000:{c.instructions+=1;NFSU2_TR(0x566000);
TAIL_STATIC(0x565f00u,565);
}
B566005:L566005:{c.instructions+=2;NFSU2_TR(0x566005);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B566007:{NFSU2_TR(0x566007);
TAIL_STATIC(0x565f00u,565);
}
B56600c:L56600c:{c.instructions+=6;NFSU2_TR(0x56600c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56600d:{NFSU2_TR(0x56600d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56600e:{NFSU2_TR(0x56600e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56600f:{NFSU2_TR(0x56600f);
__builtin_memmove((R+16),(R+20),4);
}
B566011:{NFSU2_TR(0x566011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B566012:{NFSU2_TR(0x566012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566020:L566020:{c.instructions+=4;NFSU2_TR(0x566020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566021:{NFSU2_TR(0x566021);
__builtin_memmove((R+0),gp(0x8650a8),4);
}
B566026:{NFSU2_TR(0x566026);
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
B566028:{NFSU2_TR(0x566028);
if(r1(R+518)){{goto L56603d;}}
}
B56602a:L56602a:{c.instructions+=4;NFSU2_TR(0x56602a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56602c:{NFSU2_TR(0x56602c);
u8 U[4];
w4(U+0,u32(0xc3960eb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566031:{NFSU2_TR(0x566031);
w4(R+4,u32(0x8637b0ull));
}
B566036:{NFSU2_TR(0x566036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56603bull));
TAIL_STATIC(0x55dc50u,55d);
}
B56603b:L56603b:{c.instructions+=2;NFSU2_TR(0x56603b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56603c:{NFSU2_TR(0x56603c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56603d:L56603d:{c.instructions+=6;NFSU2_TR(0x56603d);
u8 U[4];
w4(U+0,u32(0x863760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566042:{NFSU2_TR(0x566042);
if(mod_hook_table[24]){SPILL();c.pc=0x566042u;mod_hook_table[24](c);SPILL();if(c.pc!=0x566042u){TAIL_DYNAMIC(c.pc);}}
s4(0x8383ac,u32(0x1ull));
}
B56604c:{NFSU2_TR(0x56604c);
s4(0x8383a8,u32(0x0ull));
}
B566056:{NFSU2_TR(0x566056);
s4(0x8161ec,u32(0x4fe2b0ull));
}
B566060:{NFSU2_TR(0x566060);
s4(0x8161f0,u32(0x4fe320ull));
}
B56606a:{NFSU2_TR(0x56606a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56606full));
TAIL_STATIC(0x6f4880u,6f4);
}
B56606f:L56606f:{c.instructions+=2;NFSU2_TR(0x56606f);
u8 U[4];
w4(U+0,u32(0x138ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566074:{NFSU2_TR(0x566074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566079ull));
TAIL_STATIC(0x575620u,575);
}
B566079:L566079:{c.instructions+=3;NFSU2_TR(0x566079);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56607c:{NFSU2_TR(0x56607c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56607e:{NFSU2_TR(0x56607e);
if(r1(R+518)){{goto L566089;}}
}
B566080:L566080:{c.instructions+=2;NFSU2_TR(0x566080);
__builtin_memmove((R+4),(R+0),4);
}
B566082:{NFSU2_TR(0x566082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566087ull));
TAIL_STATIC(0x4fe450u,4fe);
}
B566087:L566087:{c.instructions+=1;NFSU2_TR(0x566087);
{goto L56608b;}
}
B566089:L566089:{c.instructions+=1;NFSU2_TR(0x566089);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56608b:L56608b:{c.instructions+=8;NFSU2_TR(0x56608b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56608f:{NFSU2_TR(0x56608f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566093:{NFSU2_TR(0x566093);
__builtin_memmove(gp(0x8383a4),(R+0),4);
}
B566098:{NFSU2_TR(0x566098);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56609a:{NFSU2_TR(0x56609a);
__builtin_memmove((R+0),(R+8),4);
}
B56609c:{NFSU2_TR(0x56609c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56609d:{NFSU2_TR(0x56609d);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5660a2:{NFSU2_TR(0x5660a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5660a5:L5660a5:{c.instructions+=4;NFSU2_TR(0x5660a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5660a7:{NFSU2_TR(0x5660a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5660a8:{NFSU2_TR(0x5660a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5660aa:{NFSU2_TR(0x5660aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5660a5u);}goto L5660a5;}}
}
B5660ac:L5660ac:{c.instructions+=4;NFSU2_TR(0x5660ac);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5660ae:{NFSU2_TR(0x5660ae);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x36ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5660b3:{NFSU2_TR(0x5660b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5660b4:{NFSU2_TR(0x5660b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5660bb;}}
}
B5660b6:L5660b6:{c.instructions+=1;NFSU2_TR(0x5660b6);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+16)),r1(U+0));
}
B5660bb:L5660bb:{c.instructions+=7;NFSU2_TR(0x5660bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5660bf:{NFSU2_TR(0x5660bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5660c3:{NFSU2_TR(0x5660c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5660c4:{NFSU2_TR(0x5660c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5660c5:{NFSU2_TR(0x5660c5);
__builtin_memmove((R+4),gp(0x8383a4),4);
}
B5660cb:{NFSU2_TR(0x5660cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5660cc:{NFSU2_TR(0x5660cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5660d1ull));
TAIL_STATIC(0x54bf70u,54b);
}
B5660d1:L5660d1:{c.instructions+=1;NFSU2_TR(0x5660d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5660d6ull));
TAIL_STATIC(0x570a60u,570);
}
B5660d6:L5660d6:{c.instructions+=2;NFSU2_TR(0x5660d6);
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
B5660d8:{NFSU2_TR(0x5660d8);
if(r1(R+518)){{goto L5660ed;}}
}
B5660da:L5660da:{c.instructions+=1;NFSU2_TR(0x5660da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5660dfull));
TAIL_STATIC(0x5b7b10u,5b7);
}
B5660df:L5660df:{c.instructions+=2;NFSU2_TR(0x5660df);
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
B5660e1:{NFSU2_TR(0x5660e1);
if(r1(R+518)){{goto L5660ed;}}
}
B5660e3:L5660e3:{c.instructions+=2;NFSU2_TR(0x5660e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5660e5:{NFSU2_TR(0x5660e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5660eaull));
TAIL_STATIC(0x5be1e0u,5be);
}
B5660ea:L5660ea:{c.instructions+=1;NFSU2_TR(0x5660ea);
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
B5660ed:L5660ed:{c.instructions+=2;NFSU2_TR(0x5660ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5660ee:{NFSU2_TR(0x5660ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5660f0:L5660f0:{c.instructions+=4;NFSU2_TR(0x5660f0);
__builtin_memmove((R+0),gp(0x8383ac),4);
}
B5660f5:{NFSU2_TR(0x5660f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B5660fb:{NFSU2_TR(0x5660fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5660fd:{NFSU2_TR(0x5660fd);
if(r1(R+518)){{goto L566230;}}
}
B566103:L566103:{c.instructions+=3;NFSU2_TR(0x566103);
__builtin_memmove((R+4),gp(0x8383a4),4);
}
B566109:{NFSU2_TR(0x566109);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56610b:{NFSU2_TR(0x56610b);
if(r1(R+518)){{goto L566230;}}
}
B566111:L566111:{c.instructions+=3;NFSU2_TR(0x566111);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B566116:{NFSU2_TR(0x566116);
u8 U[8];
__builtin_memmove((U+0),gp(0x8709fc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56611c:{NFSU2_TR(0x56611c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L566123;}}
}
B56611e:L56611e:{c.instructions+=1;NFSU2_TR(0x56611e);
__builtin_memmove(gp(0x8709fc),(R+0),4);
}
B566123:L566123:{c.instructions+=3;NFSU2_TR(0x566123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566124:{NFSU2_TR(0x566124);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566125:{NFSU2_TR(0x566125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56612aull));
TAIL_STATIC(0x531df0u,531);
}
B56612a:L56612a:{c.instructions+=3;NFSU2_TR(0x56612a);
w4(R+24,u32(r1(R+0)));
}
B56612d:{NFSU2_TR(0x56612d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56612f:{NFSU2_TR(0x56612f);
if(r1(R+518)){{goto L566136;}}
}
B566131:L566131:{c.instructions+=1;NFSU2_TR(0x566131);
w4(R+24,u32(0x1ull));
}
B566136:L566136:{c.instructions+=3;NFSU2_TR(0x566136);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B56613b:{NFSU2_TR(0x56613b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56613d:{NFSU2_TR(0x56613d);
if(r1(R+518)){{goto L566166;}}
}
B56613f:L56613f:{c.instructions+=3;NFSU2_TR(0x56613f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566141:{NFSU2_TR(0x566141);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566143:{NFSU2_TR(0x566143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566148ull));
TAIL_STATIC(0x57e3b0u,57e);
}
B566148:L566148:{c.instructions+=4;NFSU2_TR(0x566148);
__builtin_memmove((R+28),(R+0),4);
}
B56614a:{NFSU2_TR(0x56614a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56614d:{NFSU2_TR(0x56614d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56614f:{NFSU2_TR(0x56614f);
if(r1(R+518)){{goto L566164;}}
}
B566151:L566151:{c.instructions+=2;NFSU2_TR(0x566151);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566153:{NFSU2_TR(0x566153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566164;}}
}
B566155:L566155:{c.instructions+=2;NFSU2_TR(0x566155);
__builtin_memmove((R+4),gp(0x8383a4),4);
}
B56615b:{NFSU2_TR(0x56615b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566160ull));
TAIL_STATIC(0x531df0u,531);
}
B566160:L566160:{c.instructions+=2;NFSU2_TR(0x566160);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566162:{NFSU2_TR(0x566162);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566155u);}goto L566155;}}
}
B566164:L566164:{c.instructions+=1;NFSU2_TR(0x566164);
__builtin_memmove((R+24),(R+28),4);
}
B566166:L566166:{c.instructions+=4;NFSU2_TR(0x566166);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566168:{NFSU2_TR(0x566168);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56616a:{NFSU2_TR(0x56616a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56616b:{NFSU2_TR(0x56616b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566170ull));
TAIL_STATIC(0x57d670u,57d);
}
B566170:L566170:{c.instructions+=3;NFSU2_TR(0x566170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B566173:{NFSU2_TR(0x566173);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566175:{NFSU2_TR(0x566175);
if(r1(R+518)){{goto L56622e;}}
}
B56617b:L56617b:{c.instructions+=8;NFSU2_TR(0x56617b);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B566180:{NFSU2_TR(0x566180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566183:{NFSU2_TR(0x566183);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566184:{NFSU2_TR(0x566184);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566189:{NFSU2_TR(0x566189);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56618a:{NFSU2_TR(0x56618a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56618e:{NFSU2_TR(0x56618e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56618f:{NFSU2_TR(0x56618f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566194ull));
TAIL_STATIC(0x43dc00u,43d);
}
B566194:L566194:{c.instructions+=2;NFSU2_TR(0x566194);
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
B566197:{NFSU2_TR(0x566197);
if(mod_hook_table[26]){SPILL();c.pc=0x566197u;mod_hook_table[26](c);SPILL();if(c.pc!=0x566197u){TAIL_DYNAMIC(c.pc);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56619cull));
TAIL_STATIC(0x4022c0u,402);
}
B56619c:L56619c:{c.instructions+=5;NFSU2_TR(0x56619c);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B5661a1:{NFSU2_TR(0x5661a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5661a3:{NFSU2_TR(0x5661a3);
s4(0x8383ac,u32(0x0ull));
}
B5661ad:{NFSU2_TR(0x5661ad);
__builtin_memmove((R+12),(R+0),4);
}
B5661af:{NFSU2_TR(0x5661af);
if(r1(R+518)){{goto L5661e0;}}
}
B5661b1:L5661b1:{c.instructions+=4;NFSU2_TR(0x5661b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5661b4:{NFSU2_TR(0x5661b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5661b6:{NFSU2_TR(0x5661b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5661b9:{NFSU2_TR(0x5661b9);
if(r1(R+518)){{goto L5661d2;}}
}
B5661bb:L5661bb:{c.instructions+=2;NFSU2_TR(0x5661bb);
__builtin_memmove((R+4),(R+24),4);
}
B5661bd:{NFSU2_TR(0x5661bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5661c2ull));
TAIL_STATIC(0x6feb46u,6fe);
}
B5661c2:L5661c2:{c.instructions+=2;NFSU2_TR(0x5661c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5661c3:{NFSU2_TR(0x5661c3);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5661c9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5661c9:L5661c9:{c.instructions+=2;NFSU2_TR(0x5661c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5661cc:{NFSU2_TR(0x5661cc);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5661d2:L5661d2:{c.instructions+=1;NFSU2_TR(0x5661d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5661d7ull));
TAIL_STATIC(0x5cd1a0u,5cd);
}
B5661d7:L5661d7:{c.instructions+=2;NFSU2_TR(0x5661d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5661d8:{NFSU2_TR(0x5661d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5661ddull));
TAIL_STATIC(0x575630u,575);
}
B5661dd:L5661dd:{c.instructions+=1;NFSU2_TR(0x5661dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5661e0:L5661e0:{c.instructions+=6;NFSU2_TR(0x5661e0);
__builtin_memmove((R+0),gp(0x88f19c),4);
}
B5661e5:{NFSU2_TR(0x5661e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5661e7:{NFSU2_TR(0x5661e7);
__builtin_memmove((R+0),gp(0x8383a0),4);
}
B5661ec:{NFSU2_TR(0x5661ec);
s4(0x8383a4,u32(0x0ull));
}
B5661f6:{NFSU2_TR(0x5661f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5661f7:{NFSU2_TR(0x5661f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566204;}}
}
B5661f9:L5661f9:{c.instructions+=2;NFSU2_TR(0x5661f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5661fa:{NFSU2_TR(0x5661fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5661ffull));
TAIL_STATIC(0x440540u,440);
}
B5661ff:L5661ff:{c.instructions+=2;NFSU2_TR(0x5661ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B566202:{NFSU2_TR(0x566202);
{goto L566213;}
}
B566204:L566204:{c.instructions+=2;NFSU2_TR(0x566204);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566206:{NFSU2_TR(0x566206);
if(r1(R+518)){{goto L566213;}}
}
B566208:L566208:{c.instructions+=3;NFSU2_TR(0x566208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566209:{NFSU2_TR(0x566209);
w4(R+4,u32(0x88eb00ull));
}
B56620e:{NFSU2_TR(0x56620e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566213ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B566213:L566213:{c.instructions+=5;NFSU2_TR(0x566213);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566215:{NFSU2_TR(0x566215);
u8 U[4];
w4(U+0,u32(0xc3960eb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56621a:{NFSU2_TR(0x56621a);
w4(R+4,u32(0x8637b0ull));
}
B56621f:{NFSU2_TR(0x56621f);
s4(0x8383a0,u32(0x0ull));
}
B566229:{NFSU2_TR(0x566229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56622eull));
TAIL_STATIC(0x55dc50u,55d);
}
B56622e:L56622e:{c.instructions+=2;NFSU2_TR(0x56622e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56622f:{NFSU2_TR(0x56622f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B566230:L566230:{c.instructions+=2;NFSU2_TR(0x566230);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566236:{NFSU2_TR(0x566236);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566240:L566240:{c.instructions+=5;NFSU2_TR(0x566240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566244:{NFSU2_TR(0x566244);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566247:{NFSU2_TR(0x566247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B56624a:{NFSU2_TR(0x56624a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56624d:{NFSU2_TR(0x56624d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5662af;}}
}
B56624f:L56624f:{c.instructions+=5;NFSU2_TR(0x56624f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566250:{NFSU2_TR(0x566250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B566253:{NFSU2_TR(0x566253);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566254:{NFSU2_TR(0x566254);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566255:{NFSU2_TR(0x566255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56625aull));
TAIL_STATIC(0x51c580u,51c);
}
B56625a:L56625a:{c.instructions+=6;NFSU2_TR(0x56625a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56625b:{NFSU2_TR(0x56625b);
__builtin_memmove((R+28),(R+0),4);
}
B56625d:{NFSU2_TR(0x56625d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B566261:{NFSU2_TR(0x566261);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566263:{NFSU2_TR(0x566263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566264:{NFSU2_TR(0x566264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566269ull));
TAIL_STATIC(0x51c740u,51c);
}
B566269:L566269:{c.instructions+=3;NFSU2_TR(0x566269);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56626d:{NFSU2_TR(0x56626d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56626e:{NFSU2_TR(0x56626e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566273ull));
TAIL_STATIC(0x6f909du,6f9);
}
B566273:L566273:{c.instructions+=3;NFSU2_TR(0x566273);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B566276:{NFSU2_TR(0x566276);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566278:{NFSU2_TR(0x566278);
if(r1(R+518)){{goto L566294;}}
}
B56627a:L56627a:{c.instructions+=5;NFSU2_TR(0x56627a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56627b:{NFSU2_TR(0x56627b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56627f:{NFSU2_TR(0x56627f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566281:{NFSU2_TR(0x566281);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566282:{NFSU2_TR(0x566282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566287ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566020u);}goto L566020;}
}
B566287:L566287:{c.instructions+=6;NFSU2_TR(0x566287);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56628a:{NFSU2_TR(0x56628a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56628b:{NFSU2_TR(0x56628b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B56628d:{NFSU2_TR(0x56628d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56628e:{NFSU2_TR(0x56628e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566291:{NFSU2_TR(0x566291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566294:L566294:{c.instructions+=4;NFSU2_TR(0x566294);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566296:{NFSU2_TR(0x566296);
u8 U[4];
w4(U+0,u32(0xc3960eb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56629b:{NFSU2_TR(0x56629b);
w4(R+4,u32(0x8637b0ull));
}
B5662a0:{NFSU2_TR(0x5662a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5662a5ull));
TAIL_STATIC(0x55dc50u,55d);
}
B5662a5:L5662a5:{c.instructions+=5;NFSU2_TR(0x5662a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5662a6:{NFSU2_TR(0x5662a6);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5662a8:{NFSU2_TR(0x5662a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5662a9:{NFSU2_TR(0x5662a9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5662ac:{NFSU2_TR(0x5662ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5662af:L5662af:{c.instructions+=3;NFSU2_TR(0x5662af);
w1(R+0,u8(0x1ull));
}
B5662b1:{NFSU2_TR(0x5662b1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5662b4:{NFSU2_TR(0x5662b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5662c0:L5662c0:{c.instructions+=5;NFSU2_TR(0x5662c0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5662c7:{NFSU2_TR(0x5662c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5662c8:{NFSU2_TR(0x5662c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5662c9:{NFSU2_TR(0x5662c9);
__builtin_memmove((R+28),(R+4),4);
}
B5662cb:{NFSU2_TR(0x5662cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5662e7;}}
}
B5662cd:L5662cd:{c.instructions+=5;NFSU2_TR(0x5662cd);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5662d3:{NFSU2_TR(0x5662d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5662d9:{NFSU2_TR(0x5662d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5662db:{NFSU2_TR(0x5662db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5662de:{NFSU2_TR(0x5662de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5662e7;}}
}
B5662e0:L5662e0:{c.instructions+=2;NFSU2_TR(0x5662e0);
w4(R+0,u32(0x1ull));
}
B5662e5:{NFSU2_TR(0x5662e5);
{goto L5662e9;}
}
B5662e7:L5662e7:{c.instructions+=1;NFSU2_TR(0x5662e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5662e9:L5662e9:{c.instructions+=4;NFSU2_TR(0x5662e9);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5662ef:{NFSU2_TR(0x5662ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5662f0:{NFSU2_TR(0x5662f0);
{u32 ea_=u32(u32(7908000u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5662f6:{NFSU2_TR(0x5662f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5662fbull));
TAIL_STATIC(0x75bed4u,75b);
}
B5662fb:L5662fb:{c.instructions+=3;NFSU2_TR(0x5662fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5662fe:{NFSU2_TR(0x5662fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5662ff:{NFSU2_TR(0x5662ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566304ull));
TAIL_STATIC(0x558c00u,558);
}
B566304:L566304:{c.instructions+=1;NFSU2_TR(0x566304);
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
B566306:L566306:{c.instructions+=2;NFSU2_TR(0x566306);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566307:{NFSU2_TR(0x566307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56630cull));
TAIL_STATIC(0x571ac0u,571);
}
B56630c:L56630c:{c.instructions+=5;NFSU2_TR(0x56630c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f9414ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B566313:{NFSU2_TR(0x566313);
w4(R+0,u32(r1(R+0)));
}
B566316:{NFSU2_TR(0x566316);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B566319:{NFSU2_TR(0x566319);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56631b:{NFSU2_TR(0x56631b);
if(r1(R+518)){{goto L566344;}}
}
B56631d:L56631d:{c.instructions+=2;NFSU2_TR(0x56631d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56631e:{NFSU2_TR(0x56631e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566323ull));
TAIL_STATIC(0x571a60u,571);
}
B566323:L566323:{c.instructions+=3;NFSU2_TR(0x566323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B566326:{NFSU2_TR(0x566326);
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
B566328:{NFSU2_TR(0x566328);
if(r1(R+518)){{goto L566344;}}
}
B56632a:L56632a:{c.instructions+=2;NFSU2_TR(0x56632a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56632b:{NFSU2_TR(0x56632b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566330ull));
TAIL_STATIC(0x571ac0u,571);
}
B566330:L566330:{c.instructions+=5;NFSU2_TR(0x566330);
w4(R+4,u32(r1(R+0)));
}
B566333:{NFSU2_TR(0x566333);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f9414ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B56633a:{NFSU2_TR(0x56633a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56633d:{NFSU2_TR(0x56633d);
__builtin_memmove((R+4),(R+28),4);
}
B56633f:{NFSU2_TR(0x56633f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566344ull));
TAIL_STATIC(0x50c7e0u,50c);
}
B566344:L566344:{c.instructions+=3;NFSU2_TR(0x566344);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B566345:{NFSU2_TR(0x566345);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B566348:{NFSU2_TR(0x566348);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566306u);}goto L566306;}}
}
B56634a:L56634a:{c.instructions+=3;NFSU2_TR(0x56634a);
__builtin_memmove((R+24),gp(0x836498),4);
}
B566350:{NFSU2_TR(0x566350);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566352:{NFSU2_TR(0x566352);
if(r1(R+518)){{goto L56636d;}}
}
B566354:L566354:{c.instructions+=3;NFSU2_TR(0x566354);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56635a:{NFSU2_TR(0x56635a);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B566360:{NFSU2_TR(0x566360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566365ull));
TAIL_STATIC(0x75bed4u,75b);
}
B566365:L566365:{c.instructions+=3;NFSU2_TR(0x566365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566366:{NFSU2_TR(0x566366);
__builtin_memmove((R+4),(R+24),4);
}
B566368:{NFSU2_TR(0x566368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56636dull));
TAIL_STATIC(0x4f4a20u,4f4);
}
B56636d:L56636d:{c.instructions+=1;NFSU2_TR(0x56636d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566372ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5660f0u);}goto L5660f0;}
}
B566372:L566372:{c.instructions+=5;NFSU2_TR(0x566372);
__builtin_memmove((R+0),gp(0x8384bc),4);
}
B566377:{NFSU2_TR(0x566377);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566379:{NFSU2_TR(0x566379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56637a:{NFSU2_TR(0x56637a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56637b:{NFSU2_TR(0x56637b);
if(r1(R+518)){{goto L56638c;}}
}
B56637d:L56637d:{c.instructions+=1;NFSU2_TR(0x56637d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566382ull));
TAIL_STATIC(0x4aca40u,4ac);
}
B566382:L566382:{c.instructions+=1;NFSU2_TR(0x566382);
s4(0x8384bc,u32(0x0ull));
}
B56638c:L56638c:{c.instructions+=3;NFSU2_TR(0x56638c);
__builtin_memmove((R+0),gp(0x8384c0),4);
}
B566391:{NFSU2_TR(0x566391);
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
B566393:{NFSU2_TR(0x566393);
if(r1(R+518)){{goto L5663a9;}}
}
B566395:L566395:{c.instructions+=2;NFSU2_TR(0x566395);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566397:{NFSU2_TR(0x566397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56639cull));
TAIL_STATIC(0x4ac9b0u,4ac);
}
B56639c:L56639c:{c.instructions+=2;NFSU2_TR(0x56639c);
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
B56639f:{NFSU2_TR(0x56639f);
s4(0x8384c0,u32(0x0ull));
}
B5663a9:L5663a9:{c.instructions+=1;NFSU2_TR(0x5663a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5663b0:L5663b0:{c.instructions+=2;NFSU2_TR(0x5663b0);
w4(R+4,u32(0x85ad40ull));
}
B5663b5:{NFSU2_TR(0x5663b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5663baull));
TAIL_STATIC(0x551320u,551);
}
B5663ba:L5663ba:{c.instructions+=3;NFSU2_TR(0x5663ba);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5663c0:{NFSU2_TR(0x5663c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5663c2:{NFSU2_TR(0x5663c2);
if(r1(R+518)){{goto L5663c9;}}
}
B5663c4:L5663c4:{c.instructions+=1;NFSU2_TR(0x5663c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5663c9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5662c0u);}goto L5662c0;}
}
B5663c9:L5663c9:{c.instructions+=4;NFSU2_TR(0x5663c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5663cb:{NFSU2_TR(0x5663cb);
u8 U[4];
w4(U+0,u32(0xc98356baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5663d0:{NFSU2_TR(0x5663d0);
w4(R+4,u32(0x8637b0ull));
}
B5663d5:{NFSU2_TR(0x5663d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5663daull));
TAIL_STATIC(0x55dc50u,55d);
}
B5663da:L5663da:{c.instructions+=2;NFSU2_TR(0x5663da);
w4(R+4,u32(0x8763d0ull));
}
B5663df:{NFSU2_TR(0x5663df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5663e4ull));
TAIL_STATIC(0x5bf940u,5bf);
}
B5663e4:L5663e4:{c.instructions+=2;NFSU2_TR(0x5663e4);
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
B5663e6:{NFSU2_TR(0x5663e6);
if(r1(R+518)){{goto L5663f9;}}
}
B5663e8:L5663e8:{c.instructions+=4;NFSU2_TR(0x5663e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5663ea:{NFSU2_TR(0x5663ea);
u8 U[4];
w4(U+0,u32(0x9803f6e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5663ef:{NFSU2_TR(0x5663ef);
w4(R+4,u32(0x8637b0ull));
}
B5663f4:{NFSU2_TR(0x5663f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5663f9ull));
TAIL_STATIC(0x55dc50u,55d);
}
B5663f9:L5663f9:{c.instructions+=1;NFSU2_TR(0x5663f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566400:L566400:{c.instructions+=3;NFSU2_TR(0x566400);
__builtin_memmove((R+0),gp(0x7f91c4),4);
}
B566405:{NFSU2_TR(0x566405);
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
B566407:{NFSU2_TR(0x566407);
if(r1(R+518)){{goto L56642f;}}
}
B566409:L566409:{c.instructions+=5;NFSU2_TR(0x566409);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56640d:{NFSU2_TR(0x56640d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B566411:{NFSU2_TR(0x566411);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566413:{NFSU2_TR(0x566413);
w4(R+4,u32(0x8637b0ull));
}
B566418:{NFSU2_TR(0x566418);
if(r1(R+518)){{goto L566425;}}
}
B56641a:L56641a:{c.instructions+=2;NFSU2_TR(0x56641a);
u8 U[4];
w4(U+0,u32(0x32c72d8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56641f:{NFSU2_TR(0x56641f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566424ull));
TAIL_STATIC(0x55dc50u,55d);
}
B566424:L566424:{c.instructions+=1;NFSU2_TR(0x566424);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566425:L566425:{c.instructions+=2;NFSU2_TR(0x566425);
u8 U[4];
w4(U+0,u32(0xfc946bfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56642a:{NFSU2_TR(0x56642a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56642full));
TAIL_STATIC(0x55dc50u,55d);
}
B56642f:L56642f:{c.instructions+=1;NFSU2_TR(0x56642f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566430:L566430:{c.instructions+=8;NFSU2_TR(0x566430);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566432:{NFSU2_TR(0x566432);
u8 U[4];
w4(U+0,u32(0x778554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566437:{NFSU2_TR(0x566437);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56643d:{NFSU2_TR(0x56643d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56643e:{NFSU2_TR(0x56643e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566445:{NFSU2_TR(0x566445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566446:{NFSU2_TR(0x566446);
u8 U[4];
w4(U+0,u32(0x1e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56644b:{NFSU2_TR(0x56644b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566450ull));
TAIL_STATIC(0x575620u,575);
}
B566450:L566450:{c.instructions+=5;NFSU2_TR(0x566450);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B566453:{NFSU2_TR(0x566453);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B566457:{NFSU2_TR(0x566457);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566459:{NFSU2_TR(0x566459);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B566461:{NFSU2_TR(0x566461);
if(r1(R+518)){{goto L56647e;}}
}
B566463:L566463:{c.instructions+=4;NFSU2_TR(0x566463);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566467:{NFSU2_TR(0x566467);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566468:{NFSU2_TR(0x566468);
__builtin_memmove((R+4),(R+0),4);
}
B56646a:{NFSU2_TR(0x56646a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56646full));
TAIL_STATIC(0x55e820u,55e);
}
B56646f:L56646f:{c.instructions+=4;NFSU2_TR(0x56646f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566473:{NFSU2_TR(0x566473);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56647a:{NFSU2_TR(0x56647a);
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
B56647d:{NFSU2_TR(0x56647d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56647e:L56647e:{c.instructions+=5;NFSU2_TR(0x56647e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566482:{NFSU2_TR(0x566482);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B566484:{NFSU2_TR(0x566484);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56648b:{NFSU2_TR(0x56648b);
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
B56648e:{NFSU2_TR(0x56648e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566490:L566490:{c.instructions+=15;NFSU2_TR(0x566490);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566491:{NFSU2_TR(0x566491);
__builtin_memmove((R+20),(R+16),4);
}
B566493:{NFSU2_TR(0x566493);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566495:{NFSU2_TR(0x566495);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56649a:{NFSU2_TR(0x56649a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5664a0:{NFSU2_TR(0x5664a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5664a1:{NFSU2_TR(0x5664a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5664a8:{NFSU2_TR(0x5664a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5664ab:{NFSU2_TR(0x5664ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5664ac:{NFSU2_TR(0x5664ac);
__builtin_memmove((R+24),(R+4),4);
}
B5664ae:{NFSU2_TR(0x5664ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5664b1:{NFSU2_TR(0x5664b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5664b4:{NFSU2_TR(0x5664b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5664b6:{NFSU2_TR(0x5664b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5664b9:{NFSU2_TR(0x5664b9);
if(r1(R+518)){{goto L5664f6;}}
}
B5664bb:L5664bb:{c.instructions+=2;NFSU2_TR(0x5664bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5664c0:{NFSU2_TR(0x5664c0);
if(r1(R+518)){{goto L5664c9;}}
}
B5664c2:L5664c2:{c.instructions+=2;NFSU2_TR(0x5664c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5664c7:{NFSU2_TR(0x5664c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5664f6;}}
}
B5664c9:L5664c9:{c.instructions+=3;NFSU2_TR(0x5664c9);
w4(R+0,u32(s32(s8(m1(0x8381e1)))));
}
B5664d0:{NFSU2_TR(0x5664d0);
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
B5664d3:{NFSU2_TR(0x5664d3);
if(r1(R+518)){TAIL_STATIC(0x567859u,567);}
}
B5664d9:L5664d9:{c.instructions+=3;NFSU2_TR(0x5664d9);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5664df:{NFSU2_TR(0x5664df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5664e0:{NFSU2_TR(0x5664e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5664e5ull));
TAIL_STATIC(0x458520u,458);
}
B5664e5:L5664e5:{c.instructions+=6;NFSU2_TR(0x5664e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5664e6:{NFSU2_TR(0x5664e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5664e9:{NFSU2_TR(0x5664e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5664f0:{NFSU2_TR(0x5664f0);
__builtin_memmove((R+16),(R+20),4);
}
B5664f2:{NFSU2_TR(0x5664f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5664f3:{NFSU2_TR(0x5664f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5664f6:L5664f6:{c.instructions+=4;NFSU2_TR(0x5664f6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5664fb:{NFSU2_TR(0x5664fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5664fc:{NFSU2_TR(0x5664fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5664fd:{NFSU2_TR(0x5664fd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x56731fu,567);}
}
B566503:L566503:{c.instructions+=1;NFSU2_TR(0x566503);
if(r1(R+518)){TAIL_STATIC(0x5671cau,567);}
}
B566509:L566509:{c.instructions+=2;NFSU2_TR(0x566509);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34f8a1deull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34f8a1deull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34f8a1deull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56650e:{NFSU2_TR(0x56650e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5665d6;}}
}
B566514:L566514:{c.instructions+=1;NFSU2_TR(0x566514);
if(r1(R+518)){{goto L5665bc;}}
}
B56651a:L56651a:{c.instructions+=2;NFSU2_TR(0x56651a);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x1fab5998ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56651f:{NFSU2_TR(0x56651f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5665b2;}}
}
B566525:L566525:{c.instructions+=1;NFSU2_TR(0x566525);
if(r1(R+518)){TAIL_STATIC(0x5674c8u,567);}
}
B56652b:L56652b:{c.instructions+=2;NFSU2_TR(0x56652b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566530:{NFSU2_TR(0x566530);
if(r1(R+518)){{goto L56653c;}}
}
B566532:L566532:{c.instructions+=2;NFSU2_TR(0x566532);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566537:{NFSU2_TR(0x566537);
{goto L5665f7;}
}
B56653c:L56653c:{c.instructions+=2;NFSU2_TR(0x56653c);
__builtin_memmove((R+4),(R+24),4);
}
B56653e:{NFSU2_TR(0x56653e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566543ull));
TAIL_STATIC(0x53a2e0u,53a);
}
B566543:L566543:{c.instructions+=2;NFSU2_TR(0x566543);
__builtin_memmove((R+4),(R+24),4);
}
B566545:{NFSU2_TR(0x566545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56654aull));
TAIL_STATIC(0x50e510u,50e);
}
B56654a:L56654a:{c.instructions+=7;NFSU2_TR(0x56654a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56654d:{NFSU2_TR(0x56654d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566550:{NFSU2_TR(0x566550);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B566553:{NFSU2_TR(0x566553);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566554:{NFSU2_TR(0x566554);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566555:{NFSU2_TR(0x566555);
w4(R+4,u32(0x85ad40ull));
}
B56655a:{NFSU2_TR(0x56655a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56655full));
TAIL_STATIC(0x5289f0u,528);
}
B56655f:L56655f:{c.instructions+=4;NFSU2_TR(0x56655f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566560:{NFSU2_TR(0x566560);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566561:{NFSU2_TR(0x566561);
w4(R+4,u32(0x838980ull));
}
B566566:{NFSU2_TR(0x566566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56656bull));
TAIL_STATIC(0x55c230u,55c);
}
B56656b:L56656b:{c.instructions+=7;NFSU2_TR(0x56656b);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B566571:{NFSU2_TR(0x566571);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566574:{NFSU2_TR(0x566574);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566575:{NFSU2_TR(0x566575);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56657a:{NFSU2_TR(0x56657a);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56657f:{NFSU2_TR(0x56657f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566580:{NFSU2_TR(0x566580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566585ull));
TAIL_STATIC(0x537b80u,537);
}
B566585:L566585:{c.instructions+=5;NFSU2_TR(0x566585);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B566588:{NFSU2_TR(0x566588);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56658b:{NFSU2_TR(0x56658b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56658d:{NFSU2_TR(0x56658d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566591:{NFSU2_TR(0x566591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566596ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566596:L566596:{c.instructions+=3;NFSU2_TR(0x566596);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566598:{NFSU2_TR(0x566598);
__builtin_memmove((R+4),(R+24),4);
}
B56659a:{NFSU2_TR(0x56659a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56659full));
TAIL_STATIC(0x55ef80u,55e);
}
B56659f:L56659f:{c.instructions+=8;NFSU2_TR(0x56659f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5665a0:{NFSU2_TR(0x5665a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5665a1:{NFSU2_TR(0x5665a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5665a2:{NFSU2_TR(0x5665a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5665a5:{NFSU2_TR(0x5665a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5665ac:{NFSU2_TR(0x5665ac);
__builtin_memmove((R+16),(R+20),4);
}
B5665ae:{NFSU2_TR(0x5665ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5665af:{NFSU2_TR(0x5665af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5665b2:L5665b2:{c.instructions+=2;NFSU2_TR(0x5665b2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1becull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5665b7:{NFSU2_TR(0x5665b7);
TAIL_STATIC(0x5674c2u,567);
}
B5665bc:L5665bc:{c.instructions+=9;NFSU2_TR(0x5665bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5665bd:{NFSU2_TR(0x5665bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5665be:{NFSU2_TR(0x5665be);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5665c5:{NFSU2_TR(0x5665c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5665c6:{NFSU2_TR(0x5665c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5665c9:{NFSU2_TR(0x5665c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5665d0:{NFSU2_TR(0x5665d0);
__builtin_memmove((R+16),(R+20),4);
}
B5665d2:{NFSU2_TR(0x5665d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5665d3:{NFSU2_TR(0x5665d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5665d6:L5665d6:{c.instructions+=2;NFSU2_TR(0x5665d6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x51123592ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5665db:{NFSU2_TR(0x5665db);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5671a3u,567);}
}
B5665e1:L5665e1:{c.instructions+=1;NFSU2_TR(0x5665e1);
if(r1(R+518)){{goto L566f02;}}
}
B5665e7:L5665e7:{c.instructions+=2;NFSU2_TR(0x5665e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5665ec:{NFSU2_TR(0x5665ec);
if(r1(R+518)){{goto L566eb5;}}
}
B5665f2:L5665f2:{c.instructions+=1;NFSU2_TR(0x5665f2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5665f7:L5665f7:{c.instructions+=1;NFSU2_TR(0x5665f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x567857u,567);}
}
B5665fd:L5665fd:{c.instructions+=4;NFSU2_TR(0x5665fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566600:{NFSU2_TR(0x566600);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B566603:{NFSU2_TR(0x566603);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B566605:{NFSU2_TR(0x566605);
if(r1(R+518)){TAIL_STATIC(0x567857u,567);}
}
B56660b:L56660b:{c.instructions+=3;NFSU2_TR(0x56660b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56660e:{NFSU2_TR(0x56660e);
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
B566610:{NFSU2_TR(0x566610);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x567857u,567);}
}
B566616:L566616:{c.instructions+=3;NFSU2_TR(0x566616);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56661c:{NFSU2_TR(0x56661c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56661e:{NFSU2_TR(0x56661e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56663d;}}
}
B566620:L566620:{c.instructions+=2;NFSU2_TR(0x566620);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B566624:{NFSU2_TR(0x566624);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56663d;}}
}
B566626:L566626:{c.instructions+=2;NFSU2_TR(0x566626);
__builtin_memmove((R+4),(R+24),4);
}
B566628:{NFSU2_TR(0x566628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56662dull));
TAIL_STATIC(0x53a310u,53a);
}
B56662d:L56662d:{c.instructions+=4;NFSU2_TR(0x56662d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566630:{NFSU2_TR(0x566630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566631:{NFSU2_TR(0x566631);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566633:{NFSU2_TR(0x566633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566638ull));
TAIL_STATIC(0x51de30u,51d);
}
B566638:L566638:{c.instructions+=1;NFSU2_TR(0x566638);
TAIL_STATIC(0x567854u,567);
}
B56663d:L56663d:{c.instructions+=3;NFSU2_TR(0x56663d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566643:{NFSU2_TR(0x566643);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566645:{NFSU2_TR(0x566645);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56666c;}}
}
B566647:L566647:{c.instructions+=2;NFSU2_TR(0x566647);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5eull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56664b:{NFSU2_TR(0x56664b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566664;}}
}
B56664d:L56664d:{c.instructions+=2;NFSU2_TR(0x56664d);
__builtin_memmove((R+4),(R+24),4);
}
B56664f:{NFSU2_TR(0x56664f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566654ull));
TAIL_STATIC(0x53a3d0u,53a);
}
B566654:L566654:{c.instructions+=4;NFSU2_TR(0x566654);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566657:{NFSU2_TR(0x566657);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566658:{NFSU2_TR(0x566658);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56665a:{NFSU2_TR(0x56665a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56665full));
TAIL_STATIC(0x51de30u,51d);
}
B56665f:L56665f:{c.instructions+=1;NFSU2_TR(0x56665f);
TAIL_STATIC(0x567854u,567);
}
B566664:L566664:{c.instructions+=2;NFSU2_TR(0x566664);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566666:{NFSU2_TR(0x566666);
if(r1(R+518)){{goto L566a29;}}
}
B56666c:L56666c:{c.instructions+=2;NFSU2_TR(0x56666c);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x60ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x60ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B566670:{NFSU2_TR(0x566670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56676e;}}
}
B566676:L566676:{c.instructions+=3;NFSU2_TR(0x566676);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566678:{NFSU2_TR(0x566678);
w4(R+4,u32(0x8392c0ull));
}
B56667d:{NFSU2_TR(0x56667d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566682ull));
TAIL_STATIC(0x6102f0u,610);
}
B566682:L566682:{c.instructions+=6;NFSU2_TR(0x566682);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B566686:{NFSU2_TR(0x566686);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B566689:{NFSU2_TR(0x566689);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B56668c:{NFSU2_TR(0x56668c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B56668e:{NFSU2_TR(0x56668e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566694:{NFSU2_TR(0x566694);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5666e8;}}
}
B566696:L566696:{c.instructions+=3;NFSU2_TR(0x566696);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56669d:{NFSU2_TR(0x56669d);
w4(R+28,u32(0x2b950c36ull));
}
B5666a2:{NFSU2_TR(0x5666a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5666ba;}}
}
B5666a4:L5666a4:{c.instructions+=4;NFSU2_TR(0x5666a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666a5:{NFSU2_TR(0x5666a5);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666a7:{NFSU2_TR(0x5666a7);
w4(R+4,u32(0x838980ull));
}
B5666ac:{NFSU2_TR(0x5666ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5666b1ull));
TAIL_STATIC(0x521be0u,521);
}
B5666b1:L5666b1:{c.instructions+=2;NFSU2_TR(0x5666b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5666b3:{NFSU2_TR(0x5666b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5666ba;}}
}
B5666b5:L5666b5:{c.instructions+=1;NFSU2_TR(0x5666b5);
w4(R+28,u32(0x3175f2b0ull));
}
B5666ba:L5666ba:{c.instructions+=2;NFSU2_TR(0x5666ba);
__builtin_memmove((R+4),(R+24),4);
}
B5666bc:{NFSU2_TR(0x5666bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5666c1ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B5666c1:L5666c1:{c.instructions+=11;NFSU2_TR(0x5666c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5666c4:{NFSU2_TR(0x5666c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666c5:{NFSU2_TR(0x5666c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666c7:{NFSU2_TR(0x5666c7);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666cc:{NFSU2_TR(0x5666cc);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666d1:{NFSU2_TR(0x5666d1);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666d6:{NFSU2_TR(0x5666d6);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666db:{NFSU2_TR(0x5666db);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666e0:{NFSU2_TR(0x5666e0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666e5:{NFSU2_TR(0x5666e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666e6:{NFSU2_TR(0x5666e6);
{goto L566718;}
}
B5666e8:L5666e8:{c.instructions+=2;NFSU2_TR(0x5666e8);
__builtin_memmove((R+4),(R+24),4);
}
B5666ea:{NFSU2_TR(0x5666ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5666efull));
TAIL_STATIC(0x53a2b0u,53a);
}
B5666ef:L5666ef:{c.instructions+=10;NFSU2_TR(0x5666ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5666f2:{NFSU2_TR(0x5666f2);
u8 U[4];
w4(U+0,u32(0xa645a29eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666f7:{NFSU2_TR(0x5666f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666f9:{NFSU2_TR(0x5666f9);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5666fe:{NFSU2_TR(0x5666fe);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566703:{NFSU2_TR(0x566703);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566708:{NFSU2_TR(0x566708);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56670d:{NFSU2_TR(0x56670d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566712:{NFSU2_TR(0x566712);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566717:{NFSU2_TR(0x566717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566718:L566718:{c.instructions+=1;NFSU2_TR(0x566718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56671dull));
TAIL_STATIC(0x558790u,558);
}
B56671d:L56671d:{c.instructions+=3;NFSU2_TR(0x56671d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B566720:{NFSU2_TR(0x566720);
s4(0x838970,u32(0xb4623f67ull));
}
B56672a:{NFSU2_TR(0x56672a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56672d:L56672d:{c.instructions+=3;NFSU2_TR(0x56672d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56672f:{NFSU2_TR(0x56672f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566733:{NFSU2_TR(0x566733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566738ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566738:L566738:{c.instructions+=6;NFSU2_TR(0x566738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56673b:{NFSU2_TR(0x56673b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56673d:{NFSU2_TR(0x56673d);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566742:{NFSU2_TR(0x566742);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566747:{NFSU2_TR(0x566747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566748:{NFSU2_TR(0x566748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56674dull));
TAIL_STATIC(0x537c00u,537);
}
B56674d:L56674d:{c.instructions+=4;NFSU2_TR(0x56674d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566750:{NFSU2_TR(0x566750);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566751:{NFSU2_TR(0x566751);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566753:{NFSU2_TR(0x566753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566758ull));
TAIL_STATIC(0x51de30u,51d);
}
B566758:L566758:{c.instructions+=9;NFSU2_TR(0x566758);
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
B56675b:{NFSU2_TR(0x56675b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56675c:{NFSU2_TR(0x56675c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56675d:{NFSU2_TR(0x56675d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56675e:{NFSU2_TR(0x56675e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566761:{NFSU2_TR(0x566761);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566768:{NFSU2_TR(0x566768);
__builtin_memmove((R+16),(R+20),4);
}
B56676a:{NFSU2_TR(0x56676a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56676b:{NFSU2_TR(0x56676b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56676e:L56676e:{c.instructions+=2;NFSU2_TR(0x56676e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566770:{NFSU2_TR(0x566770);
if(r1(R+518)){{goto L566a29;}}
}
B566776:L566776:{c.instructions+=2;NFSU2_TR(0x566776);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56677a:{NFSU2_TR(0x56677a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566873;}}
}
B566780:L566780:{c.instructions+=3;NFSU2_TR(0x566780);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566786:{NFSU2_TR(0x566786);
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
B566788:{NFSU2_TR(0x566788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566b46;}}
}
B56678e:L56678e:{c.instructions+=2;NFSU2_TR(0x56678e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566792:{NFSU2_TR(0x566792);
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
B566794:L566794:{c.instructions+=4;NFSU2_TR(0x566794);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B566797:{NFSU2_TR(0x566797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566798:{NFSU2_TR(0x566798);
w4(R+4,u32(0x8392c0ull));
}
B56679d:{NFSU2_TR(0x56679d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5667a2ull));
TAIL_STATIC(0x6102f0u,610);
}
B5667a2:L5667a2:{c.instructions+=2;NFSU2_TR(0x5667a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5667a4:{NFSU2_TR(0x5667a4);
if(r1(R+518)){{goto L5667b5;}}
}
B5667a6:L5667a6:{c.instructions+=4;NFSU2_TR(0x5667a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5667a9:{NFSU2_TR(0x5667a9);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
}
B5667ac:{NFSU2_TR(0x5667ac);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5667af:{NFSU2_TR(0x5667af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5667b5;}}
}
B5667b1:L5667b1:{c.instructions+=1;NFSU2_TR(0x5667b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5667b5:L5667b5:{c.instructions+=3;NFSU2_TR(0x5667b5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5667b6:{NFSU2_TR(0x5667b6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5667b9:{NFSU2_TR(0x5667b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566794u);}goto L566794;}}
}
B5667bb:L5667bb:{c.instructions+=3;NFSU2_TR(0x5667bb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5667bd:{NFSU2_TR(0x5667bd);
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
B5667bf:{NFSU2_TR(0x5667bf);
}
B5667c0:L5667c0:{c.instructions+=4;NFSU2_TR(0x5667c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5667c3:{NFSU2_TR(0x5667c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5667c4:{NFSU2_TR(0x5667c4);
w4(R+4,u32(0x8392c0ull));
}
B5667c9:{NFSU2_TR(0x5667c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5667ceull));
TAIL_STATIC(0x6102f0u,610);
}
B5667ce:L5667ce:{c.instructions+=2;NFSU2_TR(0x5667ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5667d0:{NFSU2_TR(0x5667d0);
if(r1(R+518)){{goto L5667d4;}}
}
B5667d2:L5667d2:{c.instructions+=1;NFSU2_TR(0x5667d2);
w1(R+12,u8(0x1ull));
}
B5667d4:L5667d4:{c.instructions+=3;NFSU2_TR(0x5667d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5667d5:{NFSU2_TR(0x5667d5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5667d8:{NFSU2_TR(0x5667d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5667c0u);}goto L5667c0;}}
}
B5667da:L5667da:{c.instructions+=3;NFSU2_TR(0x5667da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5667dd:{NFSU2_TR(0x5667dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5667df:{NFSU2_TR(0x5667df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566b2e;}}
}
B5667e5:L5667e5:{c.instructions+=2;NFSU2_TR(0x5667e5);
__builtin_memmove((R+4),(R+24),4);
}
B5667e7:{NFSU2_TR(0x5667e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5667ecull));
TAIL_STATIC(0x53a2b0u,53a);
}
B5667ec:L5667ec:{c.instructions+=3;NFSU2_TR(0x5667ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5667ee:{NFSU2_TR(0x5667ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5667f1:{NFSU2_TR(0x5667f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56686c;}}
}
B5667f3:L5667f3:{c.instructions+=1;NFSU2_TR(0x5667f3);
u8 U[4];
w4(U+0,u32(0xb3bbb11dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5667f8:L5667f8:{c.instructions+=3;NFSU2_TR(0x5667f8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5667fd:{NFSU2_TR(0x5667fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5667fe:{NFSU2_TR(0x5667fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566803ull));
TAIL_STATIC(0x558430u,558);
}
B566803:L566803:{c.instructions+=6;NFSU2_TR(0x566803);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B566806:{NFSU2_TR(0x566806);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B566809:{NFSU2_TR(0x566809);
s4(0x838970,u32(0x34dc1becull));
}
B566813:{NFSU2_TR(0x566813);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566815:{NFSU2_TR(0x566815);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566819:{NFSU2_TR(0x566819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56681eull));
TAIL_STATIC(0x52eb90u,52e);
}
B56681e:L56681e:{c.instructions+=4;NFSU2_TR(0x56681e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B566824:{NFSU2_TR(0x566824);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566826:{NFSU2_TR(0x566826);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56682a:{NFSU2_TR(0x56682a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56682full));
TAIL_STATIC(0x52eb90u,52e);
}
B56682f:L56682f:{c.instructions+=6;NFSU2_TR(0x56682f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566832:{NFSU2_TR(0x566832);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566834:{NFSU2_TR(0x566834);
u8 U[4];
w4(U+0,u32(0x79be38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566839:{NFSU2_TR(0x566839);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56683e:{NFSU2_TR(0x56683e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56683f:{NFSU2_TR(0x56683f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566844ull));
TAIL_STATIC(0x537c00u,537);
}
B566844:L566844:{c.instructions+=2;NFSU2_TR(0x566844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566847:{NFSU2_TR(0x566847);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566848:L566848:{c.instructions+=2;NFSU2_TR(0x566848);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56684a:{NFSU2_TR(0x56684a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56684full));
TAIL_STATIC(0x51de30u,51d);
}
B56684f:L56684f:{c.instructions+=1;NFSU2_TR(0x56684f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B566852:L566852:{c.instructions+=2;NFSU2_TR(0x566852);
__builtin_memmove((R+4),(R+24),4);
}
B566854:{NFSU2_TR(0x566854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566859ull));
TAIL_STATIC(0x55edd0u,55e);
}
B566859:L566859:{c.instructions+=8;NFSU2_TR(0x566859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56685a:{NFSU2_TR(0x56685a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56685b:{NFSU2_TR(0x56685b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56685c:{NFSU2_TR(0x56685c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56685f:{NFSU2_TR(0x56685f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566866:{NFSU2_TR(0x566866);
__builtin_memmove((R+16),(R+20),4);
}
B566868:{NFSU2_TR(0x566868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B566869:{NFSU2_TR(0x566869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56686c:L56686c:{c.instructions+=2;NFSU2_TR(0x56686c);
u8 U[4];
w4(U+0,u32(0x9796dfb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566871:{NFSU2_TR(0x566871);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5667f8u);}goto L5667f8;}
}
B566873:L566873:{c.instructions+=2;NFSU2_TR(0x566873);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566875:{NFSU2_TR(0x566875);
if(r1(R+518)){{goto L566a29;}}
}
B56687b:L56687b:{c.instructions+=2;NFSU2_TR(0x56687b);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5dull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5dull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5dull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56687f:{NFSU2_TR(0x56687f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566a29;}}
}
B566885:L566885:{c.instructions+=4;NFSU2_TR(0x566885);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566887:{NFSU2_TR(0x566887);
w4(R+4,u32(0x8392c0ull));
}
B56688c:{NFSU2_TR(0x56688c);
w1(R+12,u8(0x1ull));
}
B56688e:{NFSU2_TR(0x56688e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566893ull));
TAIL_STATIC(0x6102f0u,610);
}
B566893:L566893:{c.instructions+=2;NFSU2_TR(0x566893);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566895:{NFSU2_TR(0x566895);
if(r1(R+518)){{goto L5668a4;}}
}
B566897:L566897:{c.instructions+=5;NFSU2_TR(0x566897);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56689a:{NFSU2_TR(0x56689a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B56689d:{NFSU2_TR(0x56689d);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56689f:{NFSU2_TR(0x56689f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5668a2:{NFSU2_TR(0x5668a2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5668a8;}}
}
B5668a4:L5668a4:{c.instructions+=1;NFSU2_TR(0x5668a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5668a8:L5668a8:{c.instructions+=2;NFSU2_TR(0x5668a8);
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
B5668aa:{NFSU2_TR(0x5668aa);
__builtin_memmove((R+12),(R+12),4);
}
B5668b0:L5668b0:{c.instructions+=4;NFSU2_TR(0x5668b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5668b3:{NFSU2_TR(0x5668b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5668b4:{NFSU2_TR(0x5668b4);
w4(R+4,u32(0x8392c0ull));
}
B5668b9:{NFSU2_TR(0x5668b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5668beull));
TAIL_STATIC(0x6102f0u,610);
}
B5668be:L5668be:{c.instructions+=2;NFSU2_TR(0x5668be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5668c0:{NFSU2_TR(0x5668c0);
if(r1(R+518)){{goto L5668f1;}}
}
B5668c2:L5668c2:{c.instructions+=3;NFSU2_TR(0x5668c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5668c5:{NFSU2_TR(0x5668c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5668c7:{NFSU2_TR(0x5668c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5668e6;}}
}
B5668c9:L5668c9:{c.instructions+=5;NFSU2_TR(0x5668c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5668cd:{NFSU2_TR(0x5668cd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B5668d0:{NFSU2_TR(0x5668d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
}
B5668d3:{NFSU2_TR(0x5668d3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5668d6:{NFSU2_TR(0x5668d6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5668f1;}}
}
B5668d8:L5668d8:{c.instructions+=2;NFSU2_TR(0x5668d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x567874ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5668df:{NFSU2_TR(0x5668df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x56786cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5668e6:L5668e6:{c.instructions+=4;NFSU2_TR(0x5668e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5668e9:{NFSU2_TR(0x5668e9);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B5668eb:{NFSU2_TR(0x5668eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5668ed:{NFSU2_TR(0x5668ed);
if(r1(R+518)){{goto L5668f1;}}
}
B5668ef:L5668ef:{c.instructions+=1;NFSU2_TR(0x5668ef);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5668f1:L5668f1:{c.instructions+=3;NFSU2_TR(0x5668f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5668f2:{NFSU2_TR(0x5668f2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5668f5:{NFSU2_TR(0x5668f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5668b0u);}goto L5668b0;}}
}
B5668f7:L5668f7:{c.instructions+=3;NFSU2_TR(0x5668f7);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5668f9:{NFSU2_TR(0x5668f9);
w4(R+4,u32(0x8392c0ull));
}
B5668fe:{NFSU2_TR(0x5668fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566903ull));
TAIL_STATIC(0x6102f0u,610);
}
B566903:L566903:{c.instructions+=6;NFSU2_TR(0x566903);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B566907:{NFSU2_TR(0x566907);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B56690a:{NFSU2_TR(0x56690a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B56690d:{NFSU2_TR(0x56690d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B56690f:{NFSU2_TR(0x56690f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566915:{NFSU2_TR(0x566915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5669a3;}}
}
B56691b:L56691b:{c.instructions+=2;NFSU2_TR(0x56691b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56691d:{NFSU2_TR(0x56691d);
if(r1(R+518)){{goto L566971;}}
}
B56691f:L56691f:{c.instructions+=3;NFSU2_TR(0x56691f);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566926:{NFSU2_TR(0x566926);
w4(R+28,u32(0x9e274daaull));
}
B56692b:{NFSU2_TR(0x56692b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566943;}}
}
B56692d:L56692d:{c.instructions+=4;NFSU2_TR(0x56692d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56692e:{NFSU2_TR(0x56692e);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566930:{NFSU2_TR(0x566930);
w4(R+4,u32(0x838980ull));
}
B566935:{NFSU2_TR(0x566935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56693aull));
TAIL_STATIC(0x521be0u,521);
}
B56693a:L56693a:{c.instructions+=2;NFSU2_TR(0x56693a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56693c:{NFSU2_TR(0x56693c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566943;}}
}
B56693e:L56693e:{c.instructions+=1;NFSU2_TR(0x56693e);
w4(R+28,u32(0xb7c84da4ull));
}
B566943:L566943:{c.instructions+=2;NFSU2_TR(0x566943);
__builtin_memmove((R+4),(R+24),4);
}
B566945:{NFSU2_TR(0x566945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56694aull));
TAIL_STATIC(0x53a2b0u,53a);
}
B56694a:L56694a:{c.instructions+=11;NFSU2_TR(0x56694a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56694d:{NFSU2_TR(0x56694d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56694e:{NFSU2_TR(0x56694e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566950:{NFSU2_TR(0x566950);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566955:{NFSU2_TR(0x566955);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56695a:{NFSU2_TR(0x56695a);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56695f:{NFSU2_TR(0x56695f);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566964:{NFSU2_TR(0x566964);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566969:{NFSU2_TR(0x566969);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56696e:{NFSU2_TR(0x56696e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56696f:{NFSU2_TR(0x56696f);
{goto L5669d3;}
}
B566971:L566971:{c.instructions+=2;NFSU2_TR(0x566971);
__builtin_memmove((R+4),(R+24),4);
}
B566973:{NFSU2_TR(0x566973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566978ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566978:L566978:{c.instructions+=11;NFSU2_TR(0x566978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56697b:{NFSU2_TR(0x56697b);
u8 U[4];
w4(U+0,u32(0xee2c85bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566980:{NFSU2_TR(0x566980);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566982:{NFSU2_TR(0x566982);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566987:{NFSU2_TR(0x566987);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56698c:{NFSU2_TR(0x56698c);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566991:{NFSU2_TR(0x566991);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566996:{NFSU2_TR(0x566996);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56699b:{NFSU2_TR(0x56699b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669a0:{NFSU2_TR(0x5669a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669a1:{NFSU2_TR(0x5669a1);
{goto L5669d3;}
}
B5669a3:L5669a3:{c.instructions+=2;NFSU2_TR(0x5669a3);
__builtin_memmove((R+4),(R+24),4);
}
B5669a5:{NFSU2_TR(0x5669a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5669aaull));
TAIL_STATIC(0x53a2b0u,53a);
}
B5669aa:L5669aa:{c.instructions+=10;NFSU2_TR(0x5669aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5669ad:{NFSU2_TR(0x5669ad);
u8 U[4];
w4(U+0,u32(0x660bdf52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669b2:{NFSU2_TR(0x5669b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669b4:{NFSU2_TR(0x5669b4);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669b9:{NFSU2_TR(0x5669b9);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669be:{NFSU2_TR(0x5669be);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669c3:{NFSU2_TR(0x5669c3);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669c8:{NFSU2_TR(0x5669c8);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669cd:{NFSU2_TR(0x5669cd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669d2:{NFSU2_TR(0x5669d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669d3:L5669d3:{c.instructions+=1;NFSU2_TR(0x5669d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5669d8ull));
TAIL_STATIC(0x558790u,558);
}
B5669d8:L5669d8:{c.instructions+=6;NFSU2_TR(0x5669d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5669db:{NFSU2_TR(0x5669db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5669de:{NFSU2_TR(0x5669de);
s4(0x838970,u32(0xb4623f67ull));
}
B5669e8:{NFSU2_TR(0x5669e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669ea:{NFSU2_TR(0x5669ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5669ee:{NFSU2_TR(0x5669ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5669f3ull));
TAIL_STATIC(0x52eb90u,52e);
}
B5669f3:L5669f3:{c.instructions+=6;NFSU2_TR(0x5669f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5669f6:{NFSU2_TR(0x5669f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669f8:{NFSU2_TR(0x5669f8);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5669fd:{NFSU2_TR(0x5669fd);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566a02:{NFSU2_TR(0x566a02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566a03:{NFSU2_TR(0x566a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566a08ull));
TAIL_STATIC(0x537c00u,537);
}
B566a08:L566a08:{c.instructions+=4;NFSU2_TR(0x566a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566a0b:{NFSU2_TR(0x566a0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566a0c:{NFSU2_TR(0x566a0c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566a0e:{NFSU2_TR(0x566a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566a13ull));
TAIL_STATIC(0x51de30u,51d);
}
B566a13:L566a13:{c.instructions+=9;NFSU2_TR(0x566a13);
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
B566a16:{NFSU2_TR(0x566a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B566a17:{NFSU2_TR(0x566a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B566a18:{NFSU2_TR(0x566a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B566a19:{NFSU2_TR(0x566a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566a1c:{NFSU2_TR(0x566a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566a23:{NFSU2_TR(0x566a23);
__builtin_memmove((R+16),(R+20),4);
}
B566a25:{NFSU2_TR(0x566a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B566a26:{NFSU2_TR(0x566a26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566a29:L566a29:{c.instructions+=3;NFSU2_TR(0x566a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566a2c:{NFSU2_TR(0x566a2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566a2f:{NFSU2_TR(0x566a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566b01;}}
}
B566a35:L566a35:{c.instructions+=3;NFSU2_TR(0x566a35);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B566a3b:{NFSU2_TR(0x566a3b);
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
B566a3d:{NFSU2_TR(0x566a3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566b01;}}
}
B566a43:L566a43:{c.instructions+=3;NFSU2_TR(0x566a43);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566a45:{NFSU2_TR(0x566a45);
w4(R+4,u32(0x8392c0ull));
}
B566a4a:{NFSU2_TR(0x566a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566a4full));
TAIL_STATIC(0x6102f0u,610);
}
B566a4f:L566a4f:{c.instructions+=2;NFSU2_TR(0x566a4f);
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
B566a51:{NFSU2_TR(0x566a51);
if(r1(R+518)){{goto L566b46;}}
}
B566a57:L566a57:{c.instructions+=4;NFSU2_TR(0x566a57);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B566a5a:{NFSU2_TR(0x566a5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B566a5d:{NFSU2_TR(0x566a5d);
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
B566a5f:{NFSU2_TR(0x566a5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L566b46;}}
}
B566a65:L566a65:{c.instructions+=3;NFSU2_TR(0x566a65);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B566a67:{NFSU2_TR(0x566a67);
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
B566a69:{NFSU2_TR(0x566a69);
__builtin_memmove((R+16),(R+16),4);
}
B566a70:L566a70:{c.instructions+=4;NFSU2_TR(0x566a70);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B566a73:{NFSU2_TR(0x566a73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566a74:{NFSU2_TR(0x566a74);
w4(R+4,u32(0x8392c0ull));
}
B566a79:{NFSU2_TR(0x566a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566a7eull));
TAIL_STATIC(0x6102f0u,610);
}
B566a7e:L566a7e:{c.instructions+=2;NFSU2_TR(0x566a7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566a80:{NFSU2_TR(0x566a80);
if(r1(R+518)){{goto L566a8f;}}
}
B566a82:L566a82:{c.instructions+=4;NFSU2_TR(0x566a82);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B566a85:{NFSU2_TR(0x566a85);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
}
B566a88:{NFSU2_TR(0x566a88);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B566a8b:{NFSU2_TR(0x566a8b);
if(r1(R+518)){{goto L566a8f;}}
}
B566a8d:L566a8d:{c.instructions+=1;NFSU2_TR(0x566a8d);
w1(R+12,u8(0x1ull));
}
B566a8f:L566a8f:{c.instructions+=3;NFSU2_TR(0x566a8f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B566a90:{NFSU2_TR(0x566a90);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B566a93:{NFSU2_TR(0x566a93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566a70u);}goto L566a70;}}
}
B566a95:L566a95:{c.instructions+=2;NFSU2_TR(0x566a95);
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
B566a97:{NFSU2_TR(0x566a97);
if(r1(R+518)){{goto L566b46;}}
}
B566a9d:L566a9d:{c.instructions+=2;NFSU2_TR(0x566a9d);
__builtin_memmove((R+4),(R+24),4);
}
B566a9f:{NFSU2_TR(0x566a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566aa4ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566aa4:L566aa4:{c.instructions+=5;NFSU2_TR(0x566aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566aa7:{NFSU2_TR(0x566aa7);
u8 U[4];
w4(U+0,u32(0x82dfd62aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566aac:{NFSU2_TR(0x566aac);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ab1:{NFSU2_TR(0x566ab1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ab2:{NFSU2_TR(0x566ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ab7ull));
TAIL_STATIC(0x558430u,558);
}
B566ab7:L566ab7:{c.instructions+=6;NFSU2_TR(0x566ab7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B566aba:{NFSU2_TR(0x566aba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B566abd:{NFSU2_TR(0x566abd);
s4(0x838970,u32(0x34dc1becull));
}
B566ac7:{NFSU2_TR(0x566ac7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ac9:{NFSU2_TR(0x566ac9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566acd:{NFSU2_TR(0x566acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ad2ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566ad2:L566ad2:{c.instructions+=4;NFSU2_TR(0x566ad2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B566ad8:{NFSU2_TR(0x566ad8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ada:{NFSU2_TR(0x566ada);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ade:{NFSU2_TR(0x566ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ae3ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566ae3:L566ae3:{c.instructions+=6;NFSU2_TR(0x566ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566ae6:{NFSU2_TR(0x566ae6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ae8:{NFSU2_TR(0x566ae8);
u8 U[4];
w4(U+0,u32(0x79be38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566aed:{NFSU2_TR(0x566aed);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566af2:{NFSU2_TR(0x566af2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566af3:{NFSU2_TR(0x566af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566af8ull));
TAIL_STATIC(0x537c00u,537);
}
B566af8:L566af8:{c.instructions+=3;NFSU2_TR(0x566af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566afb:{NFSU2_TR(0x566afb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566afc:{NFSU2_TR(0x566afc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566848u);}goto L566848;}
}
B566b01:L566b01:{c.instructions+=2;NFSU2_TR(0x566b01);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566b04:{NFSU2_TR(0x566b04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566b46;}}
}
B566b06:L566b06:{c.instructions+=3;NFSU2_TR(0x566b06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566b0c:{NFSU2_TR(0x566b0c);
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
B566b0e:{NFSU2_TR(0x566b0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566b46;}}
}
B566b10:L566b10:{c.instructions+=2;NFSU2_TR(0x566b10);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B566b12:{NFSU2_TR(0x566b12);
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
B566b14:L566b14:{c.instructions+=4;NFSU2_TR(0x566b14);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
__builtin_memmove((R+8),(U+0),4);
}
B566b17:{NFSU2_TR(0x566b17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566b18:{NFSU2_TR(0x566b18);
w4(R+4,u32(0x8392c0ull));
}
B566b1d:{NFSU2_TR(0x566b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566b22ull));
TAIL_STATIC(0x6102f0u,610);
}
B566b22:L566b22:{c.instructions+=2;NFSU2_TR(0x566b22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566b24:{NFSU2_TR(0x566b24);
if(r1(R+518)){{goto L566b28;}}
}
B566b26:L566b26:{c.instructions+=1;NFSU2_TR(0x566b26);
w1(R+12,u8(0x1ull));
}
B566b28:L566b28:{c.instructions+=3;NFSU2_TR(0x566b28);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B566b29:{NFSU2_TR(0x566b29);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566b2c:{NFSU2_TR(0x566b2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566b14u);}goto L566b14;}}
}
B566b2e:L566b2e:{c.instructions+=2;NFSU2_TR(0x566b2e);
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
B566b30:{NFSU2_TR(0x566b30);
if(r1(R+518)){{goto L566b46;}}
}
B566b32:L566b32:{c.instructions+=2;NFSU2_TR(0x566b32);
__builtin_memmove((R+4),(R+24),4);
}
B566b34:{NFSU2_TR(0x566b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566b39ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566b39:L566b39:{c.instructions+=3;NFSU2_TR(0x566b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566b3c:{NFSU2_TR(0x566b3c);
u8 U[4];
w4(U+0,u32(0x903854f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566b41:{NFSU2_TR(0x566b41);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5667f8u);}goto L5667f8;}
}
B566b46:L566b46:{c.instructions+=5;NFSU2_TR(0x566b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566b49:{NFSU2_TR(0x566b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B566b4c:{NFSU2_TR(0x566b4c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566b4e:{NFSU2_TR(0x566b4e);
w4(R+4,u32(0x8392c0ull));
}
B566b53:{NFSU2_TR(0x566b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566b58ull));
TAIL_STATIC(0x6102f0u,610);
}
B566b58:L566b58:{c.instructions+=4;NFSU2_TR(0x566b58);
__builtin_memmove((R+12),(R+0),4);
}
B566b5a:{NFSU2_TR(0x566b5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566b60:{NFSU2_TR(0x566b60);
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
B566b62:{NFSU2_TR(0x566b62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566c18;}}
}
B566b68:L566b68:{c.instructions+=2;NFSU2_TR(0x566b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566b6a:{NFSU2_TR(0x566b6a);
if(r1(R+518)){{goto L566c10;}}
}
B566b70:L566b70:{c.instructions+=2;NFSU2_TR(0x566b70);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B566b74:{NFSU2_TR(0x566b74);
if(r1(R+518)){{goto L566c10;}}
}
B566b7a:L566b7a:{c.instructions+=2;NFSU2_TR(0x566b7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566b7d:{NFSU2_TR(0x566b7d);
if(r1(R+518)){{goto L566b8d;}}
}
B566b7f:L566b7f:{c.instructions+=2;NFSU2_TR(0x566b7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566b82:{NFSU2_TR(0x566b82);
if(r1(R+518)){{goto L566b8d;}}
}
B566b84:L566b84:{c.instructions+=2;NFSU2_TR(0x566b84);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566b87:{NFSU2_TR(0x566b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566c10;}}
}
B566b8d:L566b8d:{c.instructions+=2;NFSU2_TR(0x566b8d);
__builtin_memmove((R+4),(R+24),4);
}
B566b8f:{NFSU2_TR(0x566b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566b94ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566b94:L566b94:{c.instructions+=5;NFSU2_TR(0x566b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566b97:{NFSU2_TR(0x566b97);
u8 U[4];
w4(U+0,u32(0x2efadf61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566b9c:{NFSU2_TR(0x566b9c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ba1:{NFSU2_TR(0x566ba1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ba2:{NFSU2_TR(0x566ba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ba7ull));
TAIL_STATIC(0x558430u,558);
}
B566ba7:L566ba7:{c.instructions+=6;NFSU2_TR(0x566ba7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B566baa:{NFSU2_TR(0x566baa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B566bad:{NFSU2_TR(0x566bad);
s4(0x838970,u32(0x34dc1becull));
}
B566bb7:{NFSU2_TR(0x566bb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566bb9:{NFSU2_TR(0x566bb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566bbd:{NFSU2_TR(0x566bbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566bc2ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566bc2:L566bc2:{c.instructions+=4;NFSU2_TR(0x566bc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B566bc8:{NFSU2_TR(0x566bc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566bca:{NFSU2_TR(0x566bca);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566bce:{NFSU2_TR(0x566bce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566bd3ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566bd3:L566bd3:{c.instructions+=1;NFSU2_TR(0x566bd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1daull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566bda:L566bda:{c.instructions+=6;NFSU2_TR(0x566bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566bdd:{NFSU2_TR(0x566bdd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566bdf:{NFSU2_TR(0x566bdf);
u8 U[4];
w4(U+0,u32(0x79be38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566be4:{NFSU2_TR(0x566be4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566be9:{NFSU2_TR(0x566be9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566bea:{NFSU2_TR(0x566bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566befull));
TAIL_STATIC(0x537c00u,537);
}
B566bef:L566bef:{c.instructions+=4;NFSU2_TR(0x566bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566bf2:{NFSU2_TR(0x566bf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566bf3:{NFSU2_TR(0x566bf3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566bf5:{NFSU2_TR(0x566bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566bfaull));
TAIL_STATIC(0x51de30u,51d);
}
B566bfa:L566bfa:{c.instructions+=9;NFSU2_TR(0x566bfa);
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
B566bfd:{NFSU2_TR(0x566bfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B566bfe:{NFSU2_TR(0x566bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B566bff:{NFSU2_TR(0x566bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B566c00:{NFSU2_TR(0x566c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566c03:{NFSU2_TR(0x566c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566c0a:{NFSU2_TR(0x566c0a);
__builtin_memmove((R+16),(R+20),4);
}
B566c0c:{NFSU2_TR(0x566c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B566c0d:{NFSU2_TR(0x566c0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566c10:L566c10:{c.instructions+=2;NFSU2_TR(0x566c10);
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
B566c12:{NFSU2_TR(0x566c12);
if(r1(R+518)){{goto L566d56;}}
}
B566c18:L566c18:{c.instructions+=3;NFSU2_TR(0x566c18);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566c1a:{NFSU2_TR(0x566c1a);
w4(R+4,u32(0x8392c0ull));
}
B566c1f:{NFSU2_TR(0x566c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566c24ull));
TAIL_STATIC(0x6102f0u,610);
}
B566c24:L566c24:{c.instructions+=4;NFSU2_TR(0x566c24);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566c26:{NFSU2_TR(0x566c26);
w4(R+4,u32(0x8392c0ull));
}
B566c2b:{NFSU2_TR(0x566c2b);
__builtin_memmove((R+28),(R+0),4);
}
B566c2d:{NFSU2_TR(0x566c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566c32ull));
TAIL_STATIC(0x6102f0u,610);
}
B566c32:L566c32:{c.instructions+=2;NFSU2_TR(0x566c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566c34:{NFSU2_TR(0x566c34);
if(r1(R+518)){{goto L566c44;}}
}
B566c36:L566c36:{c.instructions+=5;NFSU2_TR(0x566c36);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B566c39:{NFSU2_TR(0x566c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B566c3c:{NFSU2_TR(0x566c3c);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566c3e:{NFSU2_TR(0x566c3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566c42:{NFSU2_TR(0x566c42);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L566c48;}}
}
B566c44:L566c44:{c.instructions+=1;NFSU2_TR(0x566c44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566c48:L566c48:{c.instructions+=2;NFSU2_TR(0x566c48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566c4a:{NFSU2_TR(0x566c4a);
if(r1(R+518)){{goto L566c62;}}
}
B566c4c:L566c4c:{c.instructions+=4;NFSU2_TR(0x566c4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566c4e:{NFSU2_TR(0x566c4e);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566c53:{NFSU2_TR(0x566c53);
__builtin_memmove((R+4),(R+0),4);
}
B566c55:{NFSU2_TR(0x566c55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566c5aull));
TAIL_STATIC(0x61b500u,61b);
}
B566c5a:L566c5a:{c.instructions+=2;NFSU2_TR(0x566c5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566c5c:{NFSU2_TR(0x566c5c);
if(r1(R+518)){{goto L566c62;}}
}
B566c5e:L566c5e:{c.instructions+=2;NFSU2_TR(0x566c5e);
w1(R+8,u8(0x1ull));
}
B566c60:{NFSU2_TR(0x566c60);
{goto L566c64;}
}
B566c62:L566c62:{c.instructions+=1;NFSU2_TR(0x566c62);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B566c64:L566c64:{c.instructions+=2;NFSU2_TR(0x566c64);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566c66:{NFSU2_TR(0x566c66);
if(r1(R+518)){{goto L566c76;}}
}
B566c68:L566c68:{c.instructions+=5;NFSU2_TR(0x566c68);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566c6b:{NFSU2_TR(0x566c6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B566c6e:{NFSU2_TR(0x566c6e);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566c70:{NFSU2_TR(0x566c70);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566c74:{NFSU2_TR(0x566c74);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L566c7a;}}
}
B566c76:L566c76:{c.instructions+=1;NFSU2_TR(0x566c76);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566c7a:L566c7a:{c.instructions+=5;NFSU2_TR(0x566c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566c7d:{NFSU2_TR(0x566c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B566c80:{NFSU2_TR(0x566c80);
w4(R+0,u32(0x1010101ull));
}
B566c85:{NFSU2_TR(0x566c85);
w4(R+4,u32(0x7ull));
}
B566c8a:{NFSU2_TR(0x566c8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B566c8d:L566c8d:{c.instructions+=1;NFSU2_TR(0x566c8d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L566c8f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566c8du);}goto L566c8d;}
}
B566c8f:L566c8f:{c.instructions+=3;NFSU2_TR(0x566c8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566c92:{NFSU2_TR(0x566c92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566c94:{NFSU2_TR(0x566c94);
if(r1(R+518)){{goto L566ccf;}}
}
B566c96:L566c96:{c.instructions+=3;NFSU2_TR(0x566c96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566c99:{NFSU2_TR(0x566c99);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566c9b:{NFSU2_TR(0x566c9b);
if(r1(R+518)){{goto L566caf;}}
}
B566c9d:L566c9d:{c.instructions+=3;NFSU2_TR(0x566c9d);
w4(R+4,u32(0x7ull));
}
B566ca2:{NFSU2_TR(0x566ca2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B566ca4:{NFSU2_TR(0x566ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B566ca7:L566ca7:{c.instructions+=1;NFSU2_TR(0x566ca7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L566ca9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566ca7u);}goto L566ca7;}
}
B566ca9:L566ca9:{c.instructions+=2;NFSU2_TR(0x566ca9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cad:{NFSU2_TR(0x566cad);
{goto L566ccf;}
}
B566caf:L566caf:{c.instructions+=8;NFSU2_TR(0x566caf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cb3:{NFSU2_TR(0x566cb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cb7:{NFSU2_TR(0x566cb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cbb:{NFSU2_TR(0x566cbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cbf:{NFSU2_TR(0x566cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cc3:{NFSU2_TR(0x566cc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cc7:{NFSU2_TR(0x566cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ccb:{NFSU2_TR(0x566ccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ccf:L566ccf:{c.instructions+=2;NFSU2_TR(0x566ccf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566cd1:{NFSU2_TR(0x566cd1);
if(r1(R+518)){{goto L566cd7;}}
}
B566cd3:L566cd3:{c.instructions+=1;NFSU2_TR(0x566cd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566cd7:L566cd7:{c.instructions+=3;NFSU2_TR(0x566cd7);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B566cdb:{NFSU2_TR(0x566cdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566cdd:{NFSU2_TR(0x566cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566d56;}}
}
B566cdf:L566cdf:{c.instructions+=2;NFSU2_TR(0x566cdf);
__builtin_memmove((R+4),(R+24),4);
}
B566ce1:{NFSU2_TR(0x566ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ce6ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566ce6:L566ce6:{c.instructions+=2;NFSU2_TR(0x566ce6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566ce9:{NFSU2_TR(0x566ce9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566cfb;}}
}
B566ceb:L566ceb:{c.instructions+=5;NFSU2_TR(0x566ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566cee:{NFSU2_TR(0x566cee);
u8 U[4];
w4(U+0,u32(0x3706f93dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566cf3:{NFSU2_TR(0x566cf3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566cf8:{NFSU2_TR(0x566cf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566cf9:{NFSU2_TR(0x566cf9);
{goto L566d20;}
}
B566cfb:L566cfb:{c.instructions+=3;NFSU2_TR(0x566cfb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566cfe:{NFSU2_TR(0x566cfe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566d00:{NFSU2_TR(0x566d00);
if(r1(R+518)){{goto L566d12;}}
}
B566d02:L566d02:{c.instructions+=5;NFSU2_TR(0x566d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566d05:{NFSU2_TR(0x566d05);
u8 U[4];
w4(U+0,u32(0xd8b8402aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d0a:{NFSU2_TR(0x566d0a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d0f:{NFSU2_TR(0x566d0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d10:{NFSU2_TR(0x566d10);
{goto L566d20;}
}
B566d12:L566d12:{c.instructions+=4;NFSU2_TR(0x566d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566d15:{NFSU2_TR(0x566d15);
u8 U[4];
w4(U+0,u32(0xeb587f14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d1a:{NFSU2_TR(0x566d1a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d1f:{NFSU2_TR(0x566d1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d20:L566d20:{c.instructions+=1;NFSU2_TR(0x566d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566d25ull));
TAIL_STATIC(0x558430u,558);
}
B566d25:L566d25:{c.instructions+=6;NFSU2_TR(0x566d25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B566d28:{NFSU2_TR(0x566d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B566d2b:{NFSU2_TR(0x566d2b);
s4(0x838970,u32(0x34dc1becull));
}
B566d35:{NFSU2_TR(0x566d35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d37:{NFSU2_TR(0x566d37);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566d3b:{NFSU2_TR(0x566d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566d40ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566d40:L566d40:{c.instructions+=4;NFSU2_TR(0x566d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B566d46:{NFSU2_TR(0x566d46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d48:{NFSU2_TR(0x566d48);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566d4c:{NFSU2_TR(0x566d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566d51ull));
TAIL_STATIC(0x52eb90u,52e);
}
B566d51:L566d51:{c.instructions+=1;NFSU2_TR(0x566d51);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566bdau);}goto L566bda;}
}
B566d56:L566d56:{c.instructions+=3;NFSU2_TR(0x566d56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566d5c:{NFSU2_TR(0x566d5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566d5e:{NFSU2_TR(0x566d5e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566852u);}goto L566852;}}
}
B566d64:L566d64:{c.instructions+=4;NFSU2_TR(0x566d64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566d6a:{NFSU2_TR(0x566d6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566d6c:{NFSU2_TR(0x566d6c);
__builtin_memmove((R+4),(R+24),4);
}
B566d6e:{NFSU2_TR(0x566d6e);
if(r1(R+518)){{goto L566d88;}}
}
B566d70:L566d70:{c.instructions+=1;NFSU2_TR(0x566d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566d75ull));
TAIL_STATIC(0x559240u,559);
}
B566d75:L566d75:{c.instructions+=8;NFSU2_TR(0x566d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B566d76:{NFSU2_TR(0x566d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B566d77:{NFSU2_TR(0x566d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B566d78:{NFSU2_TR(0x566d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566d7b:{NFSU2_TR(0x566d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566d82:{NFSU2_TR(0x566d82);
__builtin_memmove((R+16),(R+20),4);
}
B566d84:{NFSU2_TR(0x566d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B566d85:{NFSU2_TR(0x566d85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566d88:L566d88:{c.instructions+=1;NFSU2_TR(0x566d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566d8dull));
TAIL_STATIC(0x50e510u,50e);
}
B566d8d:L566d8d:{c.instructions+=2;NFSU2_TR(0x566d8d);
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
B566d8f:{NFSU2_TR(0x566d8f);
if(r1(R+518)){TAIL_STATIC(0x567857u,567);}
}
B566d95:L566d95:{c.instructions+=7;NFSU2_TR(0x566d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566d98:{NFSU2_TR(0x566d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B566d9b:{NFSU2_TR(0x566d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B566d9e:{NFSU2_TR(0x566d9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566d9f:{NFSU2_TR(0x566d9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566da0:{NFSU2_TR(0x566da0);
w4(R+4,u32(0x838980ull));
}
B566da5:{NFSU2_TR(0x566da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566daaull));
TAIL_STATIC(0x50f1b0u,50f);
}
B566daa:L566daa:{c.instructions+=2;NFSU2_TR(0x566daa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566dac:{NFSU2_TR(0x566dac);
if(r1(R+518)){{goto L566dc5;}}
}
B566dae:L566dae:{c.instructions+=2;NFSU2_TR(0x566dae);
__builtin_memmove((R+4),(R+24),4);
}
B566db0:{NFSU2_TR(0x566db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566db5ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566db5:L566db5:{c.instructions+=5;NFSU2_TR(0x566db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566db8:{NFSU2_TR(0x566db8);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566dbd:{NFSU2_TR(0x566dbd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566dc2:{NFSU2_TR(0x566dc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566dc3:{NFSU2_TR(0x566dc3);
{goto L566e16;}
}
B566dc5:L566dc5:{c.instructions+=2;NFSU2_TR(0x566dc5);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B566dcc:{NFSU2_TR(0x566dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566e5a;}}
}
B566dd2:L566dd2:{c.instructions+=4;NFSU2_TR(0x566dd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566dd3:{NFSU2_TR(0x566dd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566dd4:{NFSU2_TR(0x566dd4);
w4(R+4,u32(0x838980ull));
}
B566dd9:{NFSU2_TR(0x566dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ddeull));
TAIL_STATIC(0x521be0u,521);
}
B566dde:L566dde:{c.instructions+=2;NFSU2_TR(0x566dde);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566de0:{NFSU2_TR(0x566de0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566e5a;}}
}
B566de2:L566de2:{c.instructions+=2;NFSU2_TR(0x566de2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B566de6:{NFSU2_TR(0x566de6);
if(r1(R+518)){{goto L566e5a;}}
}
B566de8:L566de8:{c.instructions+=6;NFSU2_TR(0x566de8);
__builtin_memmove((R+0),gp(0x861e74),4);
}
B566ded:{NFSU2_TR(0x566ded);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566dee:{NFSU2_TR(0x566dee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566def:{NFSU2_TR(0x566def);
w4(R+4,u32(0x85ad40ull));
}
B566df4:{NFSU2_TR(0x566df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566df7:{NFSU2_TR(0x566df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566dfcull));
TAIL_STATIC(0x514280u,514);
}
B566dfc:L566dfc:{c.instructions+=3;NFSU2_TR(0x566dfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B566dff:{NFSU2_TR(0x566dff);
__builtin_memmove((R+4),(R+24),4);
}
B566e01:{NFSU2_TR(0x566e01);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L566e2a;}}
}
B566e03:L566e03:{c.instructions+=1;NFSU2_TR(0x566e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566e08ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566e08:L566e08:{c.instructions+=4;NFSU2_TR(0x566e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566e0b:{NFSU2_TR(0x566e0b);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e10:{NFSU2_TR(0x566e10);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e15:{NFSU2_TR(0x566e15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e16:L566e16:{c.instructions+=1;NFSU2_TR(0x566e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566e1bull));
TAIL_STATIC(0x558430u,558);
}
B566e1b:L566e1b:{c.instructions+=3;NFSU2_TR(0x566e1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B566e1e:{NFSU2_TR(0x566e1e);
s4(0x838970,u32(0x34dc1becull));
}
B566e28:{NFSU2_TR(0x566e28);
{goto L566e9c;}
}
B566e2a:L566e2a:{c.instructions+=1;NFSU2_TR(0x566e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566e2full));
TAIL_STATIC(0x53a2b0u,53a);
}
B566e2f:L566e2f:{c.instructions+=11;NFSU2_TR(0x566e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566e32:{NFSU2_TR(0x566e32);
u8 U[4];
w4(U+0,u32(0x44b7167full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e37:{NFSU2_TR(0x566e37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e39:{NFSU2_TR(0x566e39);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e3e:{NFSU2_TR(0x566e3e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e43:{NFSU2_TR(0x566e43);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e48:{NFSU2_TR(0x566e48);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e4d:{NFSU2_TR(0x566e4d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e52:{NFSU2_TR(0x566e52);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e57:{NFSU2_TR(0x566e57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e58:{NFSU2_TR(0x566e58);
{goto L566e8a;}
}
B566e5a:L566e5a:{c.instructions+=2;NFSU2_TR(0x566e5a);
__builtin_memmove((R+4),(R+24),4);
}
B566e5c:{NFSU2_TR(0x566e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566e61ull));
TAIL_STATIC(0x53a2b0u,53a);
}
B566e61:L566e61:{c.instructions+=10;NFSU2_TR(0x566e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566e64:{NFSU2_TR(0x566e64);
u8 U[4];
w4(U+0,u32(0xf5ac2b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e69:{NFSU2_TR(0x566e69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e6b:{NFSU2_TR(0x566e6b);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e70:{NFSU2_TR(0x566e70);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e75:{NFSU2_TR(0x566e75);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e7a:{NFSU2_TR(0x566e7a);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e7f:{NFSU2_TR(0x566e7f);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e84:{NFSU2_TR(0x566e84);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e89:{NFSU2_TR(0x566e89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566e8a:L566e8a:{c.instructions+=1;NFSU2_TR(0x566e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566e8full));
TAIL_STATIC(0x558790u,558);
}
B566e8f:L566e8f:{c.instructions+=2;NFSU2_TR(0x566e8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B566e92:{NFSU2_TR(0x566e92);
s4(0x838970,u32(0xb4623f67ull));
}
B566e9c:L566e9c:{c.instructions+=4;NFSU2_TR(0x566e9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B566e9f:{NFSU2_TR(0x566e9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ea1:{NFSU2_TR(0x566ea1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ea5:{NFSU2_TR(0x566ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566eaaull));
TAIL_STATIC(0x52eb90u,52e);
}
B566eaa:L566eaa:{c.instructions+=2;NFSU2_TR(0x566eaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B566eb0:{NFSU2_TR(0x566eb0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56672du);}goto L56672d;}
}
B566eb5:L566eb5:{c.instructions+=2;NFSU2_TR(0x566eb5);
__builtin_memmove((R+4),(R+24),4);
}
B566eb7:{NFSU2_TR(0x566eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ebcull));
TAIL_STATIC(0x53a2e0u,53a);
}
B566ebc:L566ebc:{c.instructions+=6;NFSU2_TR(0x566ebc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ec3:{NFSU2_TR(0x566ec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ec7:{NFSU2_TR(0x566ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B566ece:{NFSU2_TR(0x566ece);
__builtin_memmove((R+0),gp(0x838990),4);
}
B566ed3:{NFSU2_TR(0x566ed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566ed5:{NFSU2_TR(0x566ed5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566ee3;}}
}
B566ed7:L566ed7:{c.instructions+=3;NFSU2_TR(0x566ed7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ed9:{NFSU2_TR(0x566ed9);
w4(R+4,u32(0x8635bcull));
}
B566ede:{NFSU2_TR(0x566ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566ee3ull));
TAIL_STATIC(0x5243d0u,524);
}
B566ee3:L566ee3:{c.instructions+=3;NFSU2_TR(0x566ee3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566ee5:{NFSU2_TR(0x566ee5);
w4(R+4,u32(0x83a9d0ull));
}
B566eea:{NFSU2_TR(0x566eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566eefull));
TAIL_STATIC(0x52a460u,52a);
}
B566eef:L566eef:{c.instructions+=8;NFSU2_TR(0x566eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B566ef0:{NFSU2_TR(0x566ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B566ef1:{NFSU2_TR(0x566ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B566ef2:{NFSU2_TR(0x566ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566ef5:{NFSU2_TR(0x566ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566efc:{NFSU2_TR(0x566efc);
__builtin_memmove((R+16),(R+20),4);
}
B566efe:{NFSU2_TR(0x566efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B566eff:{NFSU2_TR(0x566eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B566f02:L566f02:{c.instructions+=2;NFSU2_TR(0x566f02);
__builtin_memmove((R+4),(R+24),4);
}
B566f04:{NFSU2_TR(0x566f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566f09ull));
TAIL_STATIC(0x53a2e0u,53a);
}
B566f09:L566f09:{c.instructions+=3;NFSU2_TR(0x566f09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B566f0f:{NFSU2_TR(0x566f0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566f11:{NFSU2_TR(0x566f11);
if(r1(R+518)){TAIL_STATIC(0x5670e9u,567);}
}
B566f17:L566f17:{c.instructions+=4;NFSU2_TR(0x566f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566f1a:{NFSU2_TR(0x566f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566f1d:{NFSU2_TR(0x566f1d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x60ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x60ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566f20:{NFSU2_TR(0x566f20);
if(r1(R+518)){{goto L566f2b;}}
}
B566f22:L566f22:{c.instructions+=2;NFSU2_TR(0x566f22);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B566f25:{NFSU2_TR(0x566f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5670e9u,567);}
}
B566f2b:L566f2b:{c.instructions+=8;NFSU2_TR(0x566f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B566f2e:{NFSU2_TR(0x566f2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B566f31:{NFSU2_TR(0x566f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566f34:{NFSU2_TR(0x566f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566f37:{NFSU2_TR(0x566f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566f3a:{NFSU2_TR(0x566f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f3b:{NFSU2_TR(0x566f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B566f42:{NFSU2_TR(0x566f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566f47ull));
TAIL_STATIC(0x60fee0u,60f);
}
B566f47:L566f47:{c.instructions+=5;NFSU2_TR(0x566f47);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B566f4d:{NFSU2_TR(0x566f4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B566f4f:{NFSU2_TR(0x566f4f);
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
B566f52:{NFSU2_TR(0x566f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566f55:{NFSU2_TR(0x566f55);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566f58ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B566f58:L566f58:{c.instructions+=9;NFSU2_TR(0x566f58);
__builtin_memmove((R+12),(R+0),4);
}
B566f5a:{NFSU2_TR(0x566f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566f5d:{NFSU2_TR(0x566f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566f60:{NFSU2_TR(0x566f60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f62:{NFSU2_TR(0x566f62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f64:{NFSU2_TR(0x566f64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f65:{NFSU2_TR(0x566f65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f66:{NFSU2_TR(0x566f66);
w4(R+4,u32(0x8a2b68ull));
}
B566f6b:{NFSU2_TR(0x566f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566f70ull));
TAIL_STATIC(0x61ba30u,61b);
}
B566f70:L566f70:{c.instructions+=3;NFSU2_TR(0x566f70);
__builtin_memmove((R+28),(R+0),4);
}
B566f72:{NFSU2_TR(0x566f72);
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
B566f74:{NFSU2_TR(0x566f74);
if(r1(R+518)){{goto L566fde;}}
}
B566f76:L566f76:{c.instructions+=3;NFSU2_TR(0x566f76);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B566f7a:{NFSU2_TR(0x566f7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B566f7d:{NFSU2_TR(0x566f7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L566fc1;}}
}
B566f7f:L566f7f:{c.instructions+=6;NFSU2_TR(0x566f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566f82:{NFSU2_TR(0x566f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566f85:{NFSU2_TR(0x566f85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f86:{NFSU2_TR(0x566f86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f87:{NFSU2_TR(0x566f87);
w4(R+4,u32(0x838980ull));
}
B566f8c:{NFSU2_TR(0x566f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566f91ull));
TAIL_STATIC(0x530330u,530);
}
B566f91:L566f91:{c.instructions+=2;NFSU2_TR(0x566f91);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B566f93:{NFSU2_TR(0x566f93);
if(r1(R+518)){{goto L566fc1;}}
}
B566f95:L566f95:{c.instructions+=2;NFSU2_TR(0x566f95);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566f97:{NFSU2_TR(0x566f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566f9cull));
TAIL_STATIC(0x575620u,575);
}
B566f9c:L566f9c:{c.instructions+=3;NFSU2_TR(0x566f9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B566f9f:{NFSU2_TR(0x566f9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B566fa1:{NFSU2_TR(0x566fa1);
if(r1(R+518)){{goto L566faf;}}
}
B566fa3:L566fa3:{c.instructions+=3;NFSU2_TR(0x566fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566fa6:{NFSU2_TR(0x566fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B566fad:{NFSU2_TR(0x566fad);
{goto L566fb1;}
}
B566faf:L566faf:{c.instructions+=1;NFSU2_TR(0x566faf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B566fb1:L566fb1:{c.instructions+=6;NFSU2_TR(0x566fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B566fb4:{NFSU2_TR(0x566fb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B566fb6:{NFSU2_TR(0x566fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566fb9:{NFSU2_TR(0x566fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B566fbc:{NFSU2_TR(0x566fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B566fbf:{NFSU2_TR(0x566fbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B566fc1:L566fc1:{c.instructions+=9;NFSU2_TR(0x566fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566fc4:{NFSU2_TR(0x566fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B566fc7:{NFSU2_TR(0x566fc7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566fc9:{NFSU2_TR(0x566fc9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566fcb:{NFSU2_TR(0x566fcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566fcc:{NFSU2_TR(0x566fcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566fcd:{NFSU2_TR(0x566fcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566fce:{NFSU2_TR(0x566fce);
w4(R+4,u32(0x8a2b68ull));
}
B566fd3:{NFSU2_TR(0x566fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566fd8ull));
TAIL_STATIC(0x61ba50u,61b);
}
B566fd8:L566fd8:{c.instructions+=3;NFSU2_TR(0x566fd8);
__builtin_memmove((R+28),(R+0),4);
}
B566fda:{NFSU2_TR(0x566fda);
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
B566fdc:{NFSU2_TR(0x566fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x566f76u);}goto L566f76;}}
}
B566fde:L566fde:{c.instructions+=5;NFSU2_TR(0x566fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566fe1:{NFSU2_TR(0x566fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B566fe4:{NFSU2_TR(0x566fe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B566fe5:{NFSU2_TR(0x566fe5);
w4(R+4,u32(0x8392c0ull));
}
B566fea:{NFSU2_TR(0x566fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x566fefull));
TAIL_STATIC(0x6102f0u,610);
}
B566fef:L566fef:{c.instructions+=5;NFSU2_TR(0x566fef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B566ff3:{NFSU2_TR(0x566ff3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B566ff6:{NFSU2_TR(0x566ff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B566ff9:{NFSU2_TR(0x566ff9);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B566ffb:{NFSU2_TR(0x566ffb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x567001u,567);
}
XIT:NFSU2_TR_EXIT(0x566,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
