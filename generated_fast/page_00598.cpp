#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_597(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x598,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x598,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_598(u8* __restrict R,Cpu& c);
u32 page_598(Cpu& c){return body_598(c.regs.data(),c);}
__attribute__((noinline)) u32 body_598(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x598002:goto L598002;
case 0x598005:c.instructions+=15;goto B598005;
case 0x598007:c.instructions+=14;goto B598007;
case 0x59800b:c.instructions+=13;goto B59800b;
case 0x59800f:c.instructions+=12;goto B59800f;
case 0x598011:c.instructions+=11;goto B598011;
case 0x598013:c.instructions+=10;goto B598013;
case 0x598015:c.instructions+=9;goto B598015;
case 0x598018:c.instructions+=8;goto B598018;
case 0x59801b:c.instructions+=7;goto B59801b;
case 0x598022:c.instructions+=6;goto B598022;
case 0x598024:c.instructions+=5;goto B598024;
case 0x598025:c.instructions+=4;goto B598025;
case 0x598028:c.instructions+=3;goto B598028;
case 0x59802b:c.instructions+=2;goto B59802b;
case 0x59802d:c.instructions+=1;goto B59802d;
case 0x59802f:goto L59802f;
case 0x598033:c.instructions+=6;goto B598033;
case 0x598034:c.instructions+=5;goto B598034;
case 0x598035:c.instructions+=4;goto B598035;
case 0x598036:c.instructions+=3;goto B598036;
case 0x598038:c.instructions+=2;goto B598038;
case 0x598039:c.instructions+=1;goto B598039;
case 0x59803c:goto L59803c;
case 0x598040:c.instructions+=57;goto B598040;
case 0x59804a:c.instructions+=56;goto B59804a;
case 0x598051:c.instructions+=55;goto B598051;
case 0x598057:c.instructions+=54;goto B598057;
case 0x59805a:c.instructions+=53;goto B59805a;
case 0x59805e:c.instructions+=52;goto B59805e;
case 0x598060:c.instructions+=51;goto B598060;
case 0x598063:c.instructions+=50;goto B598063;
case 0x598065:c.instructions+=49;goto B598065;
case 0x598067:c.instructions+=48;goto B598067;
case 0x598069:c.instructions+=47;goto B598069;
case 0x59806c:c.instructions+=46;goto B59806c;
case 0x59806f:c.instructions+=45;goto B59806f;
case 0x598072:c.instructions+=44;goto B598072;
case 0x598075:c.instructions+=43;goto B598075;
case 0x59807f:c.instructions+=42;goto B59807f;
case 0x598086:c.instructions+=41;goto B598086;
case 0x59808c:c.instructions+=40;goto B59808c;
case 0x598090:c.instructions+=39;goto B598090;
case 0x598094:c.instructions+=38;goto B598094;
case 0x598096:c.instructions+=37;goto B598096;
case 0x598098:c.instructions+=36;goto B598098;
case 0x59809a:c.instructions+=35;goto B59809a;
case 0x59809d:c.instructions+=34;goto B59809d;
case 0x5980a0:c.instructions+=33;goto B5980a0;
case 0x5980a4:c.instructions+=32;goto B5980a4;
case 0x5980a7:c.instructions+=31;goto B5980a7;
case 0x5980ae:c.instructions+=30;goto B5980ae;
case 0x5980b4:c.instructions+=29;goto B5980b4;
case 0x5980b7:c.instructions+=28;goto B5980b7;
case 0x5980ba:c.instructions+=27;goto B5980ba;
case 0x5980be:c.instructions+=26;goto B5980be;
case 0x5980c1:c.instructions+=25;goto B5980c1;
case 0x5980c5:c.instructions+=24;goto B5980c5;
case 0x5980c7:c.instructions+=23;goto B5980c7;
case 0x5980cb:c.instructions+=22;goto B5980cb;
case 0x5980cd:c.instructions+=21;goto B5980cd;
case 0x5980d0:c.instructions+=20;goto B5980d0;
case 0x5980d3:c.instructions+=19;goto B5980d3;
case 0x5980d6:c.instructions+=18;goto B5980d6;
case 0x5980d9:c.instructions+=17;goto B5980d9;
case 0x5980e0:c.instructions+=16;goto B5980e0;
case 0x5980e6:c.instructions+=15;goto B5980e6;
case 0x5980e9:c.instructions+=14;goto B5980e9;
case 0x5980ed:c.instructions+=13;goto B5980ed;
case 0x5980f0:c.instructions+=12;goto B5980f0;
case 0x5980f4:c.instructions+=11;goto B5980f4;
case 0x5980f6:c.instructions+=10;goto B5980f6;
case 0x5980f9:c.instructions+=9;goto B5980f9;
case 0x5980fb:c.instructions+=8;goto B5980fb;
case 0x5980fe:c.instructions+=7;goto B5980fe;
case 0x598101:c.instructions+=6;goto B598101;
case 0x598102:c.instructions+=5;goto B598102;
case 0x598103:c.instructions+=4;goto B598103;
case 0x598104:c.instructions+=3;goto B598104;
case 0x598106:c.instructions+=2;goto B598106;
case 0x598107:c.instructions+=1;goto B598107;
case 0x59810a:goto L59810a;
case 0x598110:c.instructions+=6;goto B598110;
case 0x598111:c.instructions+=5;goto B598111;
case 0x598112:c.instructions+=4;goto B598112;
case 0x598113:c.instructions+=3;goto B598113;
case 0x598115:c.instructions+=2;goto B598115;
case 0x598116:c.instructions+=1;goto B598116;
case 0x598120:goto L598120;
case 0x598126:c.instructions+=1;goto B598126;
case 0x598130:goto L598130;
case 0x598134:c.instructions+=9;goto B598134;
case 0x598135:c.instructions+=8;goto B598135;
case 0x598136:c.instructions+=7;goto B598136;
case 0x598138:c.instructions+=6;goto B598138;
case 0x598139:c.instructions+=5;goto B598139;
case 0x59813b:c.instructions+=4;goto B59813b;
case 0x59813d:c.instructions+=3;goto B59813d;
case 0x598140:c.instructions+=2;goto B598140;
case 0x598142:c.instructions+=1;goto B598142;
case 0x598147:goto L598147;
case 0x59814a:c.instructions+=10;goto B59814a;
case 0x59814d:c.instructions+=9;goto B59814d;
case 0x59814f:c.instructions+=8;goto B59814f;
case 0x598152:c.instructions+=7;goto B598152;
case 0x598153:c.instructions+=6;goto B598153;
case 0x598156:c.instructions+=5;goto B598156;
case 0x598159:c.instructions+=4;goto B598159;
case 0x59815b:c.instructions+=3;goto B59815b;
case 0x59815e:c.instructions+=2;goto B59815e;
case 0x598162:c.instructions+=1;goto B598162;
case 0x598164:goto L598164;
case 0x598167:c.instructions+=4;goto B598167;
case 0x598169:c.instructions+=3;goto B598169;
case 0x59816b:c.instructions+=2;goto B59816b;
case 0x59816f:c.instructions+=1;goto B59816f;
case 0x598174:goto L598174;
case 0x598177:c.instructions+=10;goto B598177;
case 0x59817a:c.instructions+=9;goto B59817a;
case 0x59817c:c.instructions+=8;goto B59817c;
case 0x59817f:c.instructions+=7;goto B59817f;
case 0x598180:c.instructions+=6;goto B598180;
case 0x598183:c.instructions+=5;goto B598183;
case 0x598186:c.instructions+=4;goto B598186;
case 0x598188:c.instructions+=3;goto B598188;
case 0x59818b:c.instructions+=2;goto B59818b;
case 0x59818f:c.instructions+=1;goto B59818f;
case 0x598191:goto L598191;
case 0x598197:c.instructions+=23;goto B598197;
case 0x59819d:c.instructions+=22;goto B59819d;
case 0x5981a3:c.instructions+=21;goto B5981a3;
case 0x5981a9:c.instructions+=20;goto B5981a9;
case 0x5981ab:c.instructions+=19;goto B5981ab;
case 0x5981b1:c.instructions+=18;goto B5981b1;
case 0x5981b7:c.instructions+=17;goto B5981b7;
case 0x5981bd:c.instructions+=16;goto B5981bd;
case 0x5981c3:c.instructions+=15;goto B5981c3;
case 0x5981c9:c.instructions+=14;goto B5981c9;
case 0x5981cf:c.instructions+=13;goto B5981cf;
case 0x5981d5:c.instructions+=12;goto B5981d5;
case 0x5981db:c.instructions+=11;goto B5981db;
case 0x5981dd:c.instructions+=10;goto B5981dd;
case 0x5981e3:c.instructions+=9;goto B5981e3;
case 0x5981e9:c.instructions+=8;goto B5981e9;
case 0x5981ef:c.instructions+=7;goto B5981ef;
case 0x5981f5:c.instructions+=6;goto B5981f5;
case 0x5981fb:c.instructions+=5;goto B5981fb;
case 0x598201:c.instructions+=4;goto B598201;
case 0x598203:c.instructions+=3;goto B598203;
case 0x598208:c.instructions+=2;goto B598208;
case 0x59820e:c.instructions+=1;goto B59820e;
case 0x598214:goto L598214;
case 0x598216:goto L598216;
case 0x59821c:c.instructions+=2;goto B59821c;
case 0x598222:c.instructions+=1;goto B598222;
case 0x598227:goto L598227;
case 0x598229:goto L598229;
case 0x59822f:c.instructions+=5;goto B59822f;
case 0x598230:c.instructions+=4;goto B598230;
case 0x598231:c.instructions+=3;goto B598231;
case 0x598237:c.instructions+=2;goto B598237;
case 0x598238:c.instructions+=1;goto B598238;
case 0x598240:goto L598240;
case 0x598244:c.instructions+=83;goto B598244;
case 0x598247:c.instructions+=82;goto B598247;
case 0x598249:c.instructions+=81;goto B598249;
case 0x59824c:c.instructions+=80;goto B59824c;
case 0x59824e:c.instructions+=79;goto B59824e;
case 0x598250:c.instructions+=78;goto B598250;
case 0x598252:c.instructions+=77;goto B598252;
case 0x598255:c.instructions+=76;goto B598255;
case 0x598256:c.instructions+=75;goto B598256;
case 0x598257:c.instructions+=74;goto B598257;
case 0x59825a:c.instructions+=73;goto B59825a;
case 0x59825d:c.instructions+=72;goto B59825d;
case 0x598260:c.instructions+=71;goto B598260;
case 0x598263:c.instructions+=70;goto B598263;
case 0x598266:c.instructions+=69;goto B598266;
case 0x598268:c.instructions+=68;goto B598268;
case 0x59826b:c.instructions+=67;goto B59826b;
case 0x59826e:c.instructions+=66;goto B59826e;
case 0x598271:c.instructions+=65;goto B598271;
case 0x598274:c.instructions+=64;goto B598274;
case 0x598277:c.instructions+=63;goto B598277;
case 0x59827a:c.instructions+=62;goto B59827a;
case 0x59827c:c.instructions+=61;goto B59827c;
case 0x59827f:c.instructions+=60;goto B59827f;
case 0x598282:c.instructions+=59;goto B598282;
case 0x598285:c.instructions+=58;goto B598285;
case 0x598288:c.instructions+=57;goto B598288;
case 0x59828b:c.instructions+=56;goto B59828b;
case 0x59828e:c.instructions+=55;goto B59828e;
case 0x598290:c.instructions+=54;goto B598290;
case 0x598293:c.instructions+=53;goto B598293;
case 0x598296:c.instructions+=52;goto B598296;
case 0x598299:c.instructions+=51;goto B598299;
case 0x59829c:c.instructions+=50;goto B59829c;
case 0x59829f:c.instructions+=49;goto B59829f;
case 0x5982a2:c.instructions+=48;goto B5982a2;
case 0x5982a4:c.instructions+=47;goto B5982a4;
case 0x5982a7:c.instructions+=46;goto B5982a7;
case 0x5982aa:c.instructions+=45;goto B5982aa;
case 0x5982ad:c.instructions+=44;goto B5982ad;
case 0x5982b0:c.instructions+=43;goto B5982b0;
case 0x5982b3:c.instructions+=42;goto B5982b3;
case 0x5982b6:c.instructions+=41;goto B5982b6;
case 0x5982b8:c.instructions+=40;goto B5982b8;
case 0x5982bb:c.instructions+=39;goto B5982bb;
case 0x5982be:c.instructions+=38;goto B5982be;
case 0x5982c1:c.instructions+=37;goto B5982c1;
case 0x5982c4:c.instructions+=36;goto B5982c4;
case 0x5982c7:c.instructions+=35;goto B5982c7;
case 0x5982ca:c.instructions+=34;goto B5982ca;
case 0x5982cc:c.instructions+=33;goto B5982cc;
case 0x5982cf:c.instructions+=32;goto B5982cf;
case 0x5982d2:c.instructions+=31;goto B5982d2;
case 0x5982d5:c.instructions+=30;goto B5982d5;
case 0x5982d8:c.instructions+=29;goto B5982d8;
case 0x5982db:c.instructions+=28;goto B5982db;
case 0x5982de:c.instructions+=27;goto B5982de;
case 0x5982e0:c.instructions+=26;goto B5982e0;
case 0x5982e3:c.instructions+=25;goto B5982e3;
case 0x5982e6:c.instructions+=24;goto B5982e6;
case 0x5982ec:c.instructions+=23;goto B5982ec;
case 0x5982f2:c.instructions+=22;goto B5982f2;
case 0x5982f8:c.instructions+=21;goto B5982f8;
case 0x5982fe:c.instructions+=20;goto B5982fe;
case 0x598300:c.instructions+=19;goto B598300;
case 0x598306:c.instructions+=18;goto B598306;
case 0x59830c:c.instructions+=17;goto B59830c;
case 0x598312:c.instructions+=16;goto B598312;
case 0x598318:c.instructions+=15;goto B598318;
case 0x59831e:c.instructions+=14;goto B59831e;
case 0x598324:c.instructions+=13;goto B598324;
case 0x598326:c.instructions+=12;goto B598326;
case 0x59832c:c.instructions+=11;goto B59832c;
case 0x598332:c.instructions+=10;goto B598332;
case 0x598338:c.instructions+=9;goto B598338;
case 0x59833e:c.instructions+=8;goto B59833e;
case 0x598344:c.instructions+=7;goto B598344;
case 0x59834a:c.instructions+=6;goto B59834a;
case 0x59834c:c.instructions+=5;goto B59834c;
case 0x598352:c.instructions+=4;goto B598352;
case 0x598358:c.instructions+=3;goto B598358;
case 0x59835e:c.instructions+=2;goto B59835e;
case 0x598364:c.instructions+=1;goto B598364;
case 0x598369:goto L598369;
case 0x59836b:goto L59836b;
case 0x598371:c.instructions+=2;goto B598371;
case 0x598377:c.instructions+=1;goto B598377;
case 0x59837c:goto L59837c;
case 0x59837e:goto L59837e;
case 0x598384:c.instructions+=4;goto B598384;
case 0x598385:c.instructions+=3;goto B598385;
case 0x59838b:c.instructions+=2;goto B59838b;
case 0x59838c:c.instructions+=1;goto B59838c;
case 0x598390:goto L598390;
case 0x598391:c.instructions+=9;goto B598391;
case 0x598392:c.instructions+=8;goto B598392;
case 0x598393:c.instructions+=7;goto B598393;
case 0x598397:c.instructions+=6;goto B598397;
case 0x598398:c.instructions+=5;goto B598398;
case 0x59839a:c.instructions+=4;goto B59839a;
case 0x59839f:c.instructions+=3;goto B59839f;
case 0x5983a0:c.instructions+=2;goto B5983a0;
case 0x5983a2:c.instructions+=1;goto B5983a2;
case 0x5983a7:goto L5983a7;
case 0x5983aa:c.instructions+=3;goto B5983aa;
case 0x5983ab:c.instructions+=2;goto B5983ab;
case 0x5983ad:c.instructions+=1;goto B5983ad;
case 0x5983b2:goto L5983b2;
case 0x5983b8:c.instructions+=2;goto B5983b8;
case 0x5983be:c.instructions+=1;goto B5983be;
case 0x5983c6:goto L5983c6;
case 0x5983c8:c.instructions+=6;goto B5983c8;
case 0x5983ca:c.instructions+=5;goto B5983ca;
case 0x5983cc:c.instructions+=4;goto B5983cc;
case 0x5983cf:c.instructions+=3;goto B5983cf;
case 0x5983d0:c.instructions+=2;goto B5983d0;
case 0x5983d2:c.instructions+=1;goto B5983d2;
case 0x5983d7:goto L5983d7;
case 0x5983d9:c.instructions+=5;goto B5983d9;
case 0x5983db:c.instructions+=4;goto B5983db;
case 0x5983dd:c.instructions+=3;goto B5983dd;
case 0x5983de:c.instructions+=2;goto B5983de;
case 0x5983e0:c.instructions+=1;goto B5983e0;
case 0x5983e5:goto L5983e5;
case 0x5983e8:c.instructions+=3;goto B5983e8;
case 0x5983e9:c.instructions+=2;goto B5983e9;
case 0x5983eb:c.instructions+=1;goto B5983eb;
case 0x5983f0:goto L5983f0;
case 0x5983f1:c.instructions+=2;goto B5983f1;
case 0x5983f3:c.instructions+=1;goto B5983f3;
case 0x5983f8:goto L5983f8;
case 0x5983fc:c.instructions+=5;goto B5983fc;
case 0x5983ff:c.instructions+=4;goto B5983ff;
case 0x598402:c.instructions+=3;goto B598402;
case 0x598403:c.instructions+=2;goto B598403;
case 0x598407:c.instructions+=1;goto B598407;
case 0x598409:goto L598409;
case 0x59840b:c.instructions+=6;goto B59840b;
case 0x59840d:c.instructions+=5;goto B59840d;
case 0x59840f:c.instructions+=4;goto B59840f;
case 0x598415:c.instructions+=3;goto B598415;
case 0x598416:c.instructions+=2;goto B598416;
case 0x598418:c.instructions+=1;goto B598418;
case 0x59841d:goto L59841d;
case 0x59841f:c.instructions+=6;goto B59841f;
case 0x598421:c.instructions+=5;goto B598421;
case 0x598423:c.instructions+=4;goto B598423;
case 0x598429:c.instructions+=3;goto B598429;
case 0x59842a:c.instructions+=2;goto B59842a;
case 0x59842c:c.instructions+=1;goto B59842c;
case 0x598431:goto L598431;
case 0x598433:c.instructions+=6;goto B598433;
case 0x598435:c.instructions+=5;goto B598435;
case 0x598437:c.instructions+=4;goto B598437;
case 0x59843d:c.instructions+=3;goto B59843d;
case 0x59843e:c.instructions+=2;goto B59843e;
case 0x598440:c.instructions+=1;goto B598440;
case 0x598445:goto L598445;
case 0x59844b:c.instructions+=3;goto B59844b;
case 0x59844c:c.instructions+=2;goto B59844c;
case 0x59844e:c.instructions+=1;goto B59844e;
case 0x598453:goto L598453;
case 0x598459:c.instructions+=3;goto B598459;
case 0x59845a:c.instructions+=2;goto B59845a;
case 0x59845c:c.instructions+=1;goto B59845c;
case 0x598461:goto L598461;
case 0x598467:c.instructions+=3;goto B598467;
case 0x598468:c.instructions+=2;goto B598468;
case 0x59846a:c.instructions+=1;goto B59846a;
case 0x59846f:goto L59846f;
case 0x598471:c.instructions+=6;goto B598471;
case 0x598473:c.instructions+=5;goto B598473;
case 0x598475:c.instructions+=4;goto B598475;
case 0x598478:c.instructions+=3;goto B598478;
case 0x598479:c.instructions+=2;goto B598479;
case 0x59847b:c.instructions+=1;goto B59847b;
case 0x598480:goto L598480;
case 0x598482:c.instructions+=6;goto B598482;
case 0x598484:c.instructions+=5;goto B598484;
case 0x598486:c.instructions+=4;goto B598486;
case 0x598489:c.instructions+=3;goto B598489;
case 0x59848a:c.instructions+=2;goto B59848a;
case 0x59848c:c.instructions+=1;goto B59848c;
case 0x598491:goto L598491;
case 0x598497:c.instructions+=4;goto B598497;
case 0x59849a:c.instructions+=3;goto B59849a;
case 0x59849f:c.instructions+=2;goto B59849f;
case 0x5984a1:c.instructions+=1;goto B5984a1;
case 0x5984a3:goto L5984a3;
case 0x5984a5:c.instructions+=6;goto B5984a5;
case 0x5984a7:c.instructions+=5;goto B5984a7;
case 0x5984a9:c.instructions+=4;goto B5984a9;
case 0x5984ae:c.instructions+=3;goto B5984ae;
case 0x5984af:c.instructions+=2;goto B5984af;
case 0x5984b1:c.instructions+=1;goto B5984b1;
case 0x5984b6:goto L5984b6;
case 0x5984bc:c.instructions+=2;goto B5984bc;
case 0x5984bf:c.instructions+=1;goto B5984bf;
case 0x5984c1:goto L5984c1;
case 0x5984c3:c.instructions+=6;goto B5984c3;
case 0x5984c5:c.instructions+=5;goto B5984c5;
case 0x5984c7:c.instructions+=4;goto B5984c7;
case 0x5984cc:c.instructions+=3;goto B5984cc;
case 0x5984cd:c.instructions+=2;goto B5984cd;
case 0x5984cf:c.instructions+=1;goto B5984cf;
case 0x5984d4:goto L5984d4;
case 0x5984d6:c.instructions+=6;goto B5984d6;
case 0x5984d8:c.instructions+=5;goto B5984d8;
case 0x5984da:c.instructions+=4;goto B5984da;
case 0x5984e0:c.instructions+=3;goto B5984e0;
case 0x5984e1:c.instructions+=2;goto B5984e1;
case 0x5984e3:c.instructions+=1;goto B5984e3;
case 0x5984e8:goto L5984e8;
case 0x5984eb:c.instructions+=2;goto B5984eb;
case 0x5984ee:c.instructions+=1;goto B5984ee;
case 0x5984f4:goto L5984f4;
case 0x5984fa:c.instructions+=3;goto B5984fa;
case 0x5984fb:c.instructions+=2;goto B5984fb;
case 0x598502:c.instructions+=1;goto B598502;
case 0x598507:goto L598507;
case 0x59850d:c.instructions+=2;goto B59850d;
case 0x59850e:c.instructions+=1;goto B59850e;
case 0x598513:goto L598513;
case 0x598519:c.instructions+=2;goto B598519;
case 0x59851a:c.instructions+=1;goto B59851a;
case 0x59851f:goto L59851f;
case 0x598525:c.instructions+=2;goto B598525;
case 0x598526:c.instructions+=1;goto B598526;
case 0x59852b:goto L59852b;
case 0x59852e:c.instructions+=5;goto B59852e;
case 0x598534:c.instructions+=4;goto B598534;
case 0x598537:c.instructions+=3;goto B598537;
case 0x598539:c.instructions+=2;goto B598539;
case 0x59853c:c.instructions+=1;goto B59853c;
case 0x59853e:goto L59853e;
case 0x598543:c.instructions+=1;goto B598543;
case 0x598545:goto L598545;
case 0x598547:goto L598547;
case 0x59854a:c.instructions+=5;goto B59854a;
case 0x59854d:c.instructions+=4;goto B59854d;
case 0x598553:c.instructions+=3;goto B598553;
case 0x598555:c.instructions+=2;goto B598555;
case 0x598558:c.instructions+=1;goto B598558;
case 0x59855a:goto L59855a;
case 0x59855f:c.instructions+=3;goto B59855f;
case 0x598561:c.instructions+=2;goto B598561;
case 0x598564:c.instructions+=1;goto B598564;
case 0x598569:goto L598569;
case 0x59856a:c.instructions+=4;goto B59856a;
case 0x59856b:c.instructions+=3;goto B59856b;
case 0x59856c:c.instructions+=2;goto B59856c;
case 0x59856d:c.instructions+=1;goto B59856d;
case 0x598570:goto L598570;
case 0x598572:c.instructions+=1;goto B598572;
case 0x598575:goto L598575;
case 0x598577:c.instructions+=1;goto B598577;
case 0x59857c:goto L59857c;
case 0x59857d:c.instructions+=4;goto B59857d;
case 0x59857e:c.instructions+=3;goto B59857e;
case 0x59857f:c.instructions+=2;goto B59857f;
case 0x598580:c.instructions+=1;goto B598580;
case 0x598590:goto L598590;
case 0x598596:c.instructions+=4;goto B598596;
case 0x59859a:c.instructions+=3;goto B59859a;
case 0x59859c:c.instructions+=2;goto B59859c;
case 0x5985a0:c.instructions+=1;goto B5985a0;
case 0x5985a2:goto L5985a2;
case 0x5985a8:c.instructions+=1;goto B5985a8;
case 0x5985aa:goto L5985aa;
case 0x5985ae:c.instructions+=6;goto B5985ae;
case 0x5985b2:c.instructions+=5;goto B5985b2;
case 0x5985b9:c.instructions+=4;goto B5985b9;
case 0x5985bf:c.instructions+=3;goto B5985bf;
case 0x5985c5:c.instructions+=2;goto B5985c5;
case 0x5985c9:c.instructions+=1;goto B5985c9;
case 0x5985cb:goto L5985cb;
case 0x5985d1:c.instructions+=2;goto B5985d1;
case 0x5985d3:c.instructions+=1;goto B5985d3;
case 0x5985d5:goto L5985d5;
case 0x5985db:goto L5985db;
case 0x5985e1:c.instructions+=3;goto B5985e1;
case 0x5985e3:c.instructions+=2;goto B5985e3;
case 0x5985e6:c.instructions+=1;goto B5985e6;
case 0x5985e8:goto L5985e8;
case 0x5985ed:c.instructions+=2;goto B5985ed;
case 0x5985f3:c.instructions+=1;goto B5985f3;
case 0x5985f6:goto L5985f6;
case 0x5985fa:c.instructions+=1;goto B5985fa;
case 0x5985fc:goto L5985fc;
case 0x598602:c.instructions+=2;goto B598602;
case 0x598604:c.instructions+=1;goto B598604;
case 0x598606:goto L598606;
case 0x59860c:c.instructions+=1;goto B59860c;
case 0x59860e:goto L59860e;
case 0x598610:c.instructions+=1;goto B598610;
case 0x598616:goto L598616;
case 0x598620:goto L598620;
case 0x598621:c.instructions+=10;goto B598621;
case 0x598622:c.instructions+=9;goto B598622;
case 0x598623:c.instructions+=8;goto B598623;
case 0x598624:c.instructions+=7;goto B598624;
case 0x598628:c.instructions+=6;goto B598628;
case 0x59862a:c.instructions+=5;goto B59862a;
case 0x59862f:c.instructions+=4;goto B59862f;
case 0x598632:c.instructions+=3;goto B598632;
case 0x598633:c.instructions+=2;goto B598633;
case 0x598634:c.instructions+=1;goto B598634;
case 0x598639:goto L598639;
case 0x59863d:c.instructions+=3;goto B59863d;
case 0x598640:c.instructions+=2;goto B598640;
case 0x598642:c.instructions+=1;goto B598642;
case 0x598644:goto L598644;
case 0x598649:c.instructions+=4;goto B598649;
case 0x59864c:c.instructions+=3;goto B59864c;
case 0x59864d:c.instructions+=2;goto B59864d;
case 0x59864e:c.instructions+=1;goto B59864e;
case 0x598653:goto L598653;
case 0x598656:c.instructions+=2;goto B598656;
case 0x598658:c.instructions+=1;goto B598658;
case 0x59865a:goto L59865a;
case 0x598661:goto L598661;
case 0x598667:c.instructions+=2;goto B598667;
case 0x598669:c.instructions+=1;goto B598669;
case 0x59866f:goto L59866f;
case 0x598673:c.instructions+=4;goto B598673;
case 0x598674:c.instructions+=3;goto B598674;
case 0x59867a:c.instructions+=2;goto B59867a;
case 0x59867b:c.instructions+=1;goto B59867b;
case 0x598680:goto L598680;
case 0x598684:c.instructions+=4;goto B598684;
case 0x598685:c.instructions+=3;goto B598685;
case 0x59868b:c.instructions+=2;goto B59868b;
case 0x59868c:c.instructions+=1;goto B59868c;
case 0x598691:goto L598691;
case 0x598694:c.instructions+=12;goto B598694;
case 0x598697:c.instructions+=11;goto B598697;
case 0x598699:c.instructions+=10;goto B598699;
case 0x59869d:c.instructions+=9;goto B59869d;
case 0x59869f:c.instructions+=8;goto B59869f;
case 0x5986a5:c.instructions+=7;goto B5986a5;
case 0x5986a6:c.instructions+=6;goto B5986a6;
case 0x5986ac:c.instructions+=5;goto B5986ac;
case 0x5986b2:c.instructions+=4;goto B5986b2;
case 0x5986b8:c.instructions+=3;goto B5986b8;
case 0x5986b9:c.instructions+=2;goto B5986b9;
case 0x5986c3:c.instructions+=1;goto B5986c3;
case 0x5986c8:goto L5986c8;
case 0x5986cc:c.instructions+=4;goto B5986cc;
case 0x5986cd:c.instructions+=3;goto B5986cd;
case 0x5986d3:c.instructions+=2;goto B5986d3;
case 0x5986d4:c.instructions+=1;goto B5986d4;
case 0x5986d9:goto L5986d9;
case 0x5986dc:c.instructions+=22;goto B5986dc;
case 0x5986df:c.instructions+=21;goto B5986df;
case 0x5986e1:c.instructions+=20;goto B5986e1;
case 0x5986e7:c.instructions+=19;goto B5986e7;
case 0x5986e9:c.instructions+=18;goto B5986e9;
case 0x5986ef:c.instructions+=17;goto B5986ef;
case 0x5986f2:c.instructions+=16;goto B5986f2;
case 0x5986f8:c.instructions+=15;goto B5986f8;
case 0x598702:c.instructions+=14;goto B598702;
case 0x598705:c.instructions+=13;goto B598705;
case 0x598707:c.instructions+=12;goto B598707;
case 0x59870a:c.instructions+=11;goto B59870a;
case 0x59870d:c.instructions+=10;goto B59870d;
case 0x59870f:c.instructions+=9;goto B59870f;
case 0x598712:c.instructions+=8;goto B598712;
case 0x598715:c.instructions+=7;goto B598715;
case 0x598717:c.instructions+=6;goto B598717;
case 0x59871a:c.instructions+=5;goto B59871a;
case 0x59871d:c.instructions+=4;goto B59871d;
case 0x598720:c.instructions+=3;goto B598720;
case 0x598722:c.instructions+=2;goto B598722;
case 0x598725:c.instructions+=1;goto B598725;
case 0x598728:goto L598728;
case 0x598729:c.instructions+=4;goto B598729;
case 0x59872a:c.instructions+=3;goto B59872a;
case 0x59872b:c.instructions+=2;goto B59872b;
case 0x59872c:c.instructions+=1;goto B59872c;
case 0x598730:goto L598730;
case 0x598734:c.instructions+=2;goto B598734;
case 0x598736:c.instructions+=1;goto B598736;
case 0x598738:goto L598738;
case 0x59873b:c.instructions+=1;goto B59873b;
case 0x59873d:goto L59873d;
case 0x598740:c.instructions+=1;goto B598740;
case 0x598750:goto L598750;
case 0x598751:c.instructions+=2;goto B598751;
case 0x598753:c.instructions+=1;goto B598753;
case 0x598758:goto L598758;
case 0x59875a:c.instructions+=2;goto B59875a;
case 0x59875b:c.instructions+=1;goto B59875b;
case 0x598760:goto L598760;
case 0x598764:c.instructions+=25;goto B598764;
case 0x59876b:c.instructions+=24;goto B59876b;
case 0x59876f:c.instructions+=23;goto B59876f;
case 0x598775:c.instructions+=22;goto B598775;
case 0x598778:c.instructions+=21;goto B598778;
case 0x59877c:c.instructions+=20;goto B59877c;
case 0x598780:c.instructions+=19;goto B598780;
case 0x598786:c.instructions+=18;goto B598786;
case 0x598789:c.instructions+=17;goto B598789;
case 0x59878d:c.instructions+=16;goto B59878d;
case 0x598791:c.instructions+=15;goto B598791;
case 0x598797:c.instructions+=14;goto B598797;
case 0x59879a:c.instructions+=13;goto B59879a;
case 0x59879e:c.instructions+=12;goto B59879e;
case 0x5987a2:c.instructions+=11;goto B5987a2;
case 0x5987a8:c.instructions+=10;goto B5987a8;
case 0x5987ab:c.instructions+=9;goto B5987ab;
case 0x5987af:c.instructions+=8;goto B5987af;
case 0x5987b3:c.instructions+=7;goto B5987b3;
case 0x5987b9:c.instructions+=6;goto B5987b9;
case 0x5987bc:c.instructions+=5;goto B5987bc;
case 0x5987c0:c.instructions+=4;goto B5987c0;
case 0x5987c4:c.instructions+=3;goto B5987c4;
case 0x5987ca:c.instructions+=2;goto B5987ca;
case 0x5987cd:c.instructions+=1;goto B5987cd;
case 0x5987d0:goto L5987d0;
case 0x5987d3:c.instructions+=11;goto B5987d3;
case 0x5987d6:c.instructions+=10;goto B5987d6;
case 0x5987d9:c.instructions+=9;goto B5987d9;
case 0x5987dd:c.instructions+=8;goto B5987dd;
case 0x5987df:c.instructions+=7;goto B5987df;
case 0x5987e2:c.instructions+=6;goto B5987e2;
case 0x5987e6:c.instructions+=5;goto B5987e6;
case 0x5987e9:c.instructions+=4;goto B5987e9;
case 0x5987ec:c.instructions+=3;goto B5987ec;
case 0x5987ef:c.instructions+=2;goto B5987ef;
case 0x5987f3:c.instructions+=1;goto B5987f3;
case 0x5987f5:goto L5987f5;
case 0x5987f8:c.instructions+=2;goto B5987f8;
case 0x5987fa:c.instructions+=1;goto B5987fa;
case 0x5987fd:goto L5987fd;
case 0x598800:c.instructions+=1;goto B598800;
case 0x598802:goto L598802;
case 0x598805:c.instructions+=2;goto B598805;
case 0x598807:c.instructions+=1;goto B598807;
case 0x59880a:goto L59880a;
case 0x59880d:c.instructions+=1;goto B59880d;
case 0x59880f:goto L59880f;
case 0x598812:c.instructions+=2;goto B598812;
case 0x598814:c.instructions+=1;goto B598814;
case 0x598817:goto L598817;
case 0x59881a:c.instructions+=10;goto B59881a;
case 0x59881d:c.instructions+=9;goto B59881d;
case 0x598820:c.instructions+=8;goto B598820;
case 0x598823:c.instructions+=7;goto B598823;
case 0x598826:c.instructions+=6;goto B598826;
case 0x598828:c.instructions+=5;goto B598828;
case 0x59882b:c.instructions+=4;goto B59882b;
case 0x59882e:c.instructions+=3;goto B59882e;
case 0x598831:c.instructions+=2;goto B598831;
case 0x598834:c.instructions+=1;goto B598834;
case 0x598840:goto L598840;
case 0x598841:c.instructions+=10;goto B598841;
case 0x598842:c.instructions+=9;goto B598842;
case 0x598843:c.instructions+=8;goto B598843;
case 0x598844:c.instructions+=7;goto B598844;
case 0x598848:c.instructions+=6;goto B598848;
case 0x598849:c.instructions+=5;goto B598849;
case 0x59884e:c.instructions+=4;goto B59884e;
case 0x598850:c.instructions+=3;goto B598850;
case 0x598852:c.instructions+=2;goto B598852;
case 0x598854:c.instructions+=1;goto B598854;
case 0x598859:goto L598859;
case 0x59885b:c.instructions+=6;goto B59885b;
case 0x59885d:c.instructions+=5;goto B59885d;
case 0x59885f:c.instructions+=4;goto B59885f;
case 0x598862:c.instructions+=3;goto B598862;
case 0x598863:c.instructions+=2;goto B598863;
case 0x598865:c.instructions+=1;goto B598865;
case 0x59886a:goto L59886a;
case 0x598870:c.instructions+=5;goto B598870;
case 0x598876:c.instructions+=4;goto B598876;
case 0x598878:c.instructions+=3;goto B598878;
case 0x59887c:c.instructions+=2;goto B59887c;
case 0x598880:c.instructions+=1;goto B598880;
case 0x598883:goto L598883;
case 0x598886:c.instructions+=3;goto B598886;
case 0x598887:c.instructions+=2;goto B598887;
case 0x598889:c.instructions+=1;goto B598889;
case 0x59888e:goto L59888e;
case 0x59888f:c.instructions+=2;goto B59888f;
case 0x598891:c.instructions+=1;goto B598891;
case 0x598896:goto L598896;
case 0x598899:c.instructions+=3;goto B598899;
case 0x59889a:c.instructions+=2;goto B59889a;
case 0x59889c:c.instructions+=1;goto B59889c;
case 0x5988a1:goto L5988a1;
case 0x5988a3:c.instructions+=6;goto B5988a3;
case 0x5988a5:c.instructions+=5;goto B5988a5;
case 0x5988a7:c.instructions+=4;goto B5988a7;
case 0x5988aa:c.instructions+=3;goto B5988aa;
case 0x5988ab:c.instructions+=2;goto B5988ab;
case 0x5988ad:c.instructions+=1;goto B5988ad;
case 0x5988b2:goto L5988b2;
case 0x5988b6:c.instructions+=7;goto B5988b6;
case 0x5988b8:c.instructions+=6;goto B5988b8;
case 0x5988ba:c.instructions+=5;goto B5988ba;
case 0x5988bc:c.instructions+=4;goto B5988bc;
case 0x5988bf:c.instructions+=3;goto B5988bf;
case 0x5988c0:c.instructions+=2;goto B5988c0;
case 0x5988c2:c.instructions+=1;goto B5988c2;
case 0x5988c7:goto L5988c7;
case 0x5988cb:c.instructions+=6;goto B5988cb;
case 0x5988cd:c.instructions+=5;goto B5988cd;
case 0x5988cf:c.instructions+=4;goto B5988cf;
case 0x5988d1:c.instructions+=3;goto B5988d1;
case 0x5988d2:c.instructions+=2;goto B5988d2;
case 0x5988d4:c.instructions+=1;goto B5988d4;
case 0x5988d9:goto L5988d9;
case 0x5988db:c.instructions+=6;goto B5988db;
case 0x5988dd:c.instructions+=5;goto B5988dd;
case 0x5988df:c.instructions+=4;goto B5988df;
case 0x5988e6:c.instructions+=3;goto B5988e6;
case 0x5988e7:c.instructions+=2;goto B5988e7;
case 0x5988e9:c.instructions+=1;goto B5988e9;
case 0x5988ee:goto L5988ee;
case 0x5988f0:c.instructions+=6;goto B5988f0;
case 0x5988f2:c.instructions+=5;goto B5988f2;
case 0x5988f4:c.instructions+=4;goto B5988f4;
case 0x5988f7:c.instructions+=3;goto B5988f7;
case 0x5988f8:c.instructions+=2;goto B5988f8;
case 0x5988fa:c.instructions+=1;goto B5988fa;
case 0x5988ff:goto L5988ff;
case 0x598905:c.instructions+=3;goto B598905;
case 0x598906:c.instructions+=2;goto B598906;
case 0x598908:c.instructions+=1;goto B598908;
case 0x59890d:goto L59890d;
case 0x598911:c.instructions+=6;goto B598911;
case 0x598913:c.instructions+=5;goto B598913;
case 0x598915:c.instructions+=4;goto B598915;
case 0x598917:c.instructions+=3;goto B598917;
case 0x598918:c.instructions+=2;goto B598918;
case 0x59891a:c.instructions+=1;goto B59891a;
case 0x59891f:goto L59891f;
case 0x598923:c.instructions+=9;goto B598923;
case 0x598927:c.instructions+=8;goto B598927;
case 0x598928:c.instructions+=7;goto B598928;
case 0x59892b:c.instructions+=6;goto B59892b;
case 0x59892e:c.instructions+=5;goto B59892e;
case 0x598931:c.instructions+=4;goto B598931;
case 0x598934:c.instructions+=3;goto B598934;
case 0x598938:c.instructions+=2;goto B598938;
case 0x59893c:c.instructions+=1;goto B59893c;
case 0x598942:goto L598942;
case 0x598948:c.instructions+=3;goto B598948;
case 0x598949:c.instructions+=2;goto B598949;
case 0x59894b:c.instructions+=1;goto B59894b;
case 0x598950:goto L598950;
case 0x598952:c.instructions+=6;goto B598952;
case 0x598954:c.instructions+=5;goto B598954;
case 0x598956:c.instructions+=4;goto B598956;
case 0x59895c:c.instructions+=3;goto B59895c;
case 0x59895d:c.instructions+=2;goto B59895d;
case 0x59895f:c.instructions+=1;goto B59895f;
case 0x598964:goto L598964;
case 0x59896a:c.instructions+=3;goto B59896a;
case 0x59896b:c.instructions+=2;goto B59896b;
case 0x59896d:c.instructions+=1;goto B59896d;
case 0x598972:goto L598972;
case 0x598978:c.instructions+=3;goto B598978;
case 0x598979:c.instructions+=2;goto B598979;
case 0x59897b:c.instructions+=1;goto B59897b;
case 0x598980:goto L598980;
case 0x598986:c.instructions+=3;goto B598986;
case 0x598987:c.instructions+=2;goto B598987;
case 0x598989:c.instructions+=1;goto B598989;
case 0x59898e:goto L59898e;
case 0x598990:c.instructions+=6;goto B598990;
case 0x598992:c.instructions+=5;goto B598992;
case 0x598994:c.instructions+=4;goto B598994;
case 0x59899a:c.instructions+=3;goto B59899a;
case 0x59899b:c.instructions+=2;goto B59899b;
case 0x59899d:c.instructions+=1;goto B59899d;
case 0x5989a2:goto L5989a2;
case 0x5989a8:c.instructions+=3;goto B5989a8;
case 0x5989a9:c.instructions+=2;goto B5989a9;
case 0x5989ab:c.instructions+=1;goto B5989ab;
case 0x5989b0:goto L5989b0;
case 0x5989b6:c.instructions+=3;goto B5989b6;
case 0x5989b7:c.instructions+=2;goto B5989b7;
case 0x5989b9:c.instructions+=1;goto B5989b9;
case 0x5989be:goto L5989be;
case 0x5989c4:c.instructions+=3;goto B5989c4;
case 0x5989c5:c.instructions+=2;goto B5989c5;
case 0x5989c7:c.instructions+=1;goto B5989c7;
case 0x5989cc:goto L5989cc;
case 0x5989ce:c.instructions+=6;goto B5989ce;
case 0x5989d0:c.instructions+=5;goto B5989d0;
case 0x5989d2:c.instructions+=4;goto B5989d2;
case 0x5989d8:c.instructions+=3;goto B5989d8;
case 0x5989d9:c.instructions+=2;goto B5989d9;
case 0x5989db:c.instructions+=1;goto B5989db;
case 0x5989e0:goto L5989e0;
case 0x5989e2:c.instructions+=1;goto B5989e2;
case 0x5989e7:goto L5989e7;
case 0x5989e8:c.instructions+=5;goto B5989e8;
case 0x5989e9:c.instructions+=4;goto B5989e9;
case 0x5989ea:c.instructions+=3;goto B5989ea;
case 0x5989eb:c.instructions+=2;goto B5989eb;
case 0x5989ec:c.instructions+=1;goto B5989ec;
case 0x5989f0:goto L5989f0;
case 0x5989f5:c.instructions+=4;goto B5989f5;
case 0x5989f7:c.instructions+=3;goto B5989f7;
case 0x5989fa:c.instructions+=2;goto B5989fa;
case 0x598a00:c.instructions+=1;goto B598a00;
case 0x598a02:goto L598a02;
case 0x598a04:c.instructions+=1;goto B598a04;
case 0x598a0a:goto L598a0a;
case 0x598a0d:c.instructions+=24;goto B598a0d;
case 0x598a10:c.instructions+=23;goto B598a10;
case 0x598a12:c.instructions+=22;goto B598a12;
case 0x598a18:c.instructions+=21;goto B598a18;
case 0x598a1a:c.instructions+=20;goto B598a1a;
case 0x598a1c:c.instructions+=19;goto B598a1c;
case 0x598a1e:c.instructions+=18;goto B598a1e;
case 0x598a20:c.instructions+=17;goto B598a20;
case 0x598a26:c.instructions+=16;goto B598a26;
case 0x598a28:c.instructions+=15;goto B598a28;
case 0x598a2e:c.instructions+=14;goto B598a2e;
case 0x598a30:c.instructions+=13;goto B598a30;
case 0x598a36:c.instructions+=12;goto B598a36;
case 0x598a3c:c.instructions+=11;goto B598a3c;
case 0x598a40:c.instructions+=10;goto B598a40;
case 0x598a46:c.instructions+=9;goto B598a46;
case 0x598a48:c.instructions+=8;goto B598a48;
case 0x598a4c:c.instructions+=7;goto B598a4c;
case 0x598a4e:c.instructions+=6;goto B598a4e;
case 0x598a54:c.instructions+=5;goto B598a54;
case 0x598a5a:c.instructions+=4;goto B598a5a;
case 0x598a5e:c.instructions+=3;goto B598a5e;
case 0x598a64:c.instructions+=2;goto B598a64;
case 0x598a6a:c.instructions+=1;goto B598a6a;
case 0x598a70:goto L598a70;
case 0x598a74:c.instructions+=11;goto B598a74;
case 0x598a78:c.instructions+=10;goto B598a78;
case 0x598a7b:c.instructions+=9;goto B598a7b;
case 0x598a7f:c.instructions+=8;goto B598a7f;
case 0x598a82:c.instructions+=7;goto B598a82;
case 0x598a86:c.instructions+=6;goto B598a86;
case 0x598a89:c.instructions+=5;goto B598a89;
case 0x598a8c:c.instructions+=4;goto B598a8c;
case 0x598a8f:c.instructions+=3;goto B598a8f;
case 0x598a94:c.instructions+=2;goto B598a94;
case 0x598a96:c.instructions+=1;goto B598a96;
case 0x598aa0:goto L598aa0;
case 0x598aa6:c.instructions+=4;goto B598aa6;
case 0x598aa8:c.instructions+=3;goto B598aa8;
case 0x598aab:c.instructions+=2;goto B598aab;
case 0x598aac:c.instructions+=1;goto B598aac;
case 0x598aae:goto L598aae;
case 0x598ac0:goto L598ac0;
case 0x598ac3:c.instructions+=10;goto B598ac3;
case 0x598ac4:c.instructions+=9;goto B598ac4;
case 0x598ac5:c.instructions+=8;goto B598ac5;
case 0x598ac6:c.instructions+=7;goto B598ac6;
case 0x598ac8:c.instructions+=6;goto B598ac8;
case 0x598acb:c.instructions+=5;goto B598acb;
case 0x598acc:c.instructions+=4;goto B598acc;
case 0x598ace:c.instructions+=3;goto B598ace;
case 0x598ad2:c.instructions+=2;goto B598ad2;
case 0x598ad5:c.instructions+=1;goto B598ad5;
case 0x598ae0:goto L598ae0;
case 0x598ae3:c.instructions+=5;goto B598ae3;
case 0x598ae9:c.instructions+=4;goto B598ae9;
case 0x598aec:c.instructions+=3;goto B598aec;
case 0x598af2:c.instructions+=2;goto B598af2;
case 0x598af6:c.instructions+=1;goto B598af6;
case 0x598af8:goto L598af8;
case 0x598afe:c.instructions+=2;goto B598afe;
case 0x598b02:c.instructions+=1;goto B598b02;
case 0x598b06:goto L598b06;
case 0x598b0c:c.instructions+=2;goto B598b0c;
case 0x598b0e:c.instructions+=1;goto B598b0e;
case 0x598b14:goto L598b14;
case 0x598b16:c.instructions+=7;goto B598b16;
case 0x598b1c:c.instructions+=6;goto B598b1c;
case 0x598b22:c.instructions+=5;goto B598b22;
case 0x598b28:c.instructions+=4;goto B598b28;
case 0x598b2c:c.instructions+=3;goto B598b2c;
case 0x598b30:c.instructions+=2;goto B598b30;
case 0x598b31:c.instructions+=1;goto B598b31;
case 0x598b36:goto L598b36;
case 0x598b3c:c.instructions+=4;goto B598b3c;
case 0x598b3d:c.instructions+=3;goto B598b3d;
case 0x598b43:c.instructions+=2;goto B598b43;
case 0x598b47:c.instructions+=1;goto B598b47;
case 0x598b4c:goto L598b4c;
case 0x598b52:c.instructions+=7;goto B598b52;
case 0x598b58:c.instructions+=6;goto B598b58;
case 0x598b5a:c.instructions+=5;goto B598b5a;
case 0x598b60:c.instructions+=4;goto B598b60;
case 0x598b62:c.instructions+=3;goto B598b62;
case 0x598b66:c.instructions+=2;goto B598b66;
case 0x598b6a:c.instructions+=1;goto B598b6a;
case 0x598b6c:goto L598b6c;
case 0x598b6e:c.instructions+=5;goto B598b6e;
case 0x598b6f:c.instructions+=4;goto B598b6f;
case 0x598b76:c.instructions+=3;goto B598b76;
case 0x598b7c:c.instructions+=2;goto B598b7c;
case 0x598b80:c.instructions+=1;goto B598b80;
case 0x598b85:goto L598b85;
case 0x598b88:c.instructions+=3;goto B598b88;
case 0x598b8e:c.instructions+=2;goto B598b8e;
case 0x598b92:c.instructions+=1;goto B598b92;
case 0x598b96:goto L598b96;
case 0x598b9c:c.instructions+=4;goto B598b9c;
case 0x598ba2:c.instructions+=3;goto B598ba2;
case 0x598ba4:c.instructions+=2;goto B598ba4;
case 0x598ba7:c.instructions+=1;goto B598ba7;
case 0x598ba9:goto L598ba9;
case 0x598bac:c.instructions+=5;goto B598bac;
case 0x598bb2:c.instructions+=4;goto B598bb2;
case 0x598bb8:c.instructions+=3;goto B598bb8;
case 0x598bba:c.instructions+=2;goto B598bba;
case 0x598bbd:c.instructions+=1;goto B598bbd;
case 0x598bbf:goto L598bbf;
case 0x598bc1:c.instructions+=1;goto B598bc1;
case 0x598bc7:goto L598bc7;
case 0x598bca:c.instructions+=18;goto B598bca;
case 0x598bd0:c.instructions+=17;goto B598bd0;
case 0x598bd2:c.instructions+=16;goto B598bd2;
case 0x598bd5:c.instructions+=15;goto B598bd5;
case 0x598bd8:c.instructions+=14;goto B598bd8;
case 0x598bdf:c.instructions+=13;goto B598bdf;
case 0x598be2:c.instructions+=12;goto B598be2;
case 0x598be9:c.instructions+=11;goto B598be9;
case 0x598bed:c.instructions+=10;goto B598bed;
case 0x598bef:c.instructions+=9;goto B598bef;
case 0x598bf3:c.instructions+=8;goto B598bf3;
case 0x598bf9:c.instructions+=7;goto B598bf9;
case 0x598bfd:c.instructions+=6;goto B598bfd;
case 0x598bff:c.instructions+=5;goto B598bff;
case 0x598c03:c.instructions+=4;goto B598c03;
case 0x598c09:c.instructions+=3;goto B598c09;
case 0x598c0b:c.instructions+=2;goto B598c0b;
case 0x598c0e:c.instructions+=1;goto B598c0e;
case 0x598c14:goto L598c14;
case 0x598c18:c.instructions+=5;goto B598c18;
case 0x598c1e:c.instructions+=4;goto B598c1e;
case 0x598c22:c.instructions+=3;goto B598c22;
case 0x598c24:c.instructions+=2;goto B598c24;
case 0x598c27:c.instructions+=1;goto B598c27;
case 0x598c29:goto L598c29;
case 0x598c2b:c.instructions+=1;goto B598c2b;
case 0x598c31:goto L598c31;
case 0x598c37:c.instructions+=14;goto B598c37;
case 0x598c3c:c.instructions+=13;goto B598c3c;
case 0x598c42:c.instructions+=12;goto B598c42;
case 0x598c48:c.instructions+=11;goto B598c48;
case 0x598c4c:c.instructions+=10;goto B598c4c;
case 0x598c50:c.instructions+=9;goto B598c50;
case 0x598c52:c.instructions+=8;goto B598c52;
case 0x598c58:c.instructions+=7;goto B598c58;
case 0x598c5c:c.instructions+=6;goto B598c5c;
case 0x598c5e:c.instructions+=5;goto B598c5e;
case 0x598c64:c.instructions+=4;goto B598c64;
case 0x598c6a:c.instructions+=3;goto B598c6a;
case 0x598c6c:c.instructions+=2;goto B598c6c;
case 0x598c6f:c.instructions+=1;goto B598c6f;
case 0x598c71:goto L598c71;
case 0x598c77:c.instructions+=10;goto B598c77;
case 0x598c7d:c.instructions+=9;goto B598c7d;
case 0x598c83:c.instructions+=8;goto B598c83;
case 0x598c85:c.instructions+=7;goto B598c85;
case 0x598c8b:c.instructions+=6;goto B598c8b;
case 0x598c91:c.instructions+=5;goto B598c91;
case 0x598c95:c.instructions+=4;goto B598c95;
case 0x598c9b:c.instructions+=3;goto B598c9b;
case 0x598ca1:c.instructions+=2;goto B598ca1;
case 0x598ca7:c.instructions+=1;goto B598ca7;
case 0x598cab:goto L598cab;
case 0x598cae:c.instructions+=20;goto B598cae;
case 0x598cb4:c.instructions+=19;goto B598cb4;
case 0x598cb9:c.instructions+=18;goto B598cb9;
case 0x598cbc:c.instructions+=17;goto B598cbc;
case 0x598cbd:c.instructions+=16;goto B598cbd;
case 0x598cbf:c.instructions+=15;goto B598cbf;
case 0x598cc4:c.instructions+=14;goto B598cc4;
case 0x598cc6:c.instructions+=13;goto B598cc6;
case 0x598cc8:c.instructions+=12;goto B598cc8;
case 0x598cca:c.instructions+=11;goto B598cca;
case 0x598ccc:c.instructions+=10;goto B598ccc;
case 0x598cce:c.instructions+=9;goto B598cce;
case 0x598cd0:c.instructions+=8;goto B598cd0;
case 0x598cd2:c.instructions+=7;goto B598cd2;
case 0x598cd4:c.instructions+=6;goto B598cd4;
case 0x598cd6:c.instructions+=5;goto B598cd6;
case 0x598cd8:c.instructions+=4;goto B598cd8;
case 0x598cda:c.instructions+=3;goto B598cda;
case 0x598cdc:c.instructions+=2;goto B598cdc;
case 0x598cdf:c.instructions+=1;goto B598cdf;
case 0x598ce4:goto L598ce4;
case 0x598ce8:c.instructions+=4;goto B598ce8;
case 0x598cee:c.instructions+=3;goto B598cee;
case 0x598cf0:c.instructions+=2;goto B598cf0;
case 0x598cf3:c.instructions+=1;goto B598cf3;
case 0x598cf5:goto L598cf5;
case 0x598cf9:c.instructions+=2;goto B598cf9;
case 0x598cfd:c.instructions+=1;goto B598cfd;
case 0x598cff:goto L598cff;
case 0x598d03:c.instructions+=6;goto B598d03;
case 0x598d07:c.instructions+=5;goto B598d07;
case 0x598d0b:c.instructions+=4;goto B598d0b;
case 0x598d0f:c.instructions+=3;goto B598d0f;
case 0x598d11:c.instructions+=2;goto B598d11;
case 0x598d13:c.instructions+=1;goto B598d13;
case 0x598d15:goto L598d15;
case 0x598d1b:c.instructions+=9;goto B598d1b;
case 0x598d1f:c.instructions+=8;goto B598d1f;
case 0x598d23:c.instructions+=7;goto B598d23;
case 0x598d24:c.instructions+=6;goto B598d24;
case 0x598d27:c.instructions+=5;goto B598d27;
case 0x598d2a:c.instructions+=4;goto B598d2a;
case 0x598d2d:c.instructions+=3;goto B598d2d;
case 0x598d31:c.instructions+=2;goto B598d31;
case 0x598d35:c.instructions+=1;goto B598d35;
case 0x598d3b:goto L598d3b;
case 0x598d3c:c.instructions+=5;goto B598d3c;
case 0x598d3d:c.instructions+=4;goto B598d3d;
case 0x598d3e:c.instructions+=3;goto B598d3e;
case 0x598d3f:c.instructions+=2;goto B598d3f;
case 0x598d42:c.instructions+=1;goto B598d42;
case 0x598d45:goto L598d45;
case 0x598d4b:c.instructions+=1;goto B598d4b;
case 0x598d50:goto L598d50;
case 0x598d51:c.instructions+=20;goto B598d51;
case 0x598d53:c.instructions+=19;goto B598d53;
case 0x598d56:c.instructions+=18;goto B598d56;
case 0x598d59:c.instructions+=17;goto B598d59;
case 0x598d5a:c.instructions+=16;goto B598d5a;
case 0x598d5c:c.instructions+=15;goto B598d5c;
case 0x598d5f:c.instructions+=14;goto B598d5f;
case 0x598d62:c.instructions+=13;goto B598d62;
case 0x598d63:c.instructions+=12;goto B598d63;
case 0x598d66:c.instructions+=11;goto B598d66;
case 0x598d67:c.instructions+=10;goto B598d67;
case 0x598d6a:c.instructions+=9;goto B598d6a;
case 0x598d6e:c.instructions+=8;goto B598d6e;
case 0x598d74:c.instructions+=7;goto B598d74;
case 0x598d7a:c.instructions+=6;goto B598d7a;
case 0x598d7d:c.instructions+=5;goto B598d7d;
case 0x598d85:c.instructions+=4;goto B598d85;
case 0x598d89:c.instructions+=3;goto B598d89;
case 0x598d8d:c.instructions+=2;goto B598d8d;
case 0x598d91:c.instructions+=1;goto B598d91;
case 0x598d94:goto L598d94;
case 0x598d97:c.instructions+=73;goto B598d97;
case 0x598d9d:c.instructions+=72;goto B598d9d;
case 0x598da0:c.instructions+=71;goto B598da0;
case 0x598da2:c.instructions+=70;goto B598da2;
case 0x598da6:c.instructions+=69;goto B598da6;
case 0x598dac:c.instructions+=68;goto B598dac;
case 0x598db0:c.instructions+=67;goto B598db0;
case 0x598db2:c.instructions+=66;goto B598db2;
case 0x598db6:c.instructions+=65;goto B598db6;
case 0x598db8:c.instructions+=64;goto B598db8;
case 0x598dbe:c.instructions+=63;goto B598dbe;
case 0x598dc0:c.instructions+=62;goto B598dc0;
case 0x598dc4:c.instructions+=61;goto B598dc4;
case 0x598dc6:c.instructions+=60;goto B598dc6;
case 0x598dc9:c.instructions+=59;goto B598dc9;
case 0x598dcd:c.instructions+=58;goto B598dcd;
case 0x598dd0:c.instructions+=57;goto B598dd0;
case 0x598dd4:c.instructions+=56;goto B598dd4;
case 0x598dd8:c.instructions+=55;goto B598dd8;
case 0x598ddc:c.instructions+=54;goto B598ddc;
case 0x598dde:c.instructions+=53;goto B598dde;
case 0x598de2:c.instructions+=52;goto B598de2;
case 0x598de6:c.instructions+=51;goto B598de6;
case 0x598de9:c.instructions+=50;goto B598de9;
case 0x598ded:c.instructions+=49;goto B598ded;
case 0x598dee:c.instructions+=48;goto B598dee;
case 0x598df2:c.instructions+=47;goto B598df2;
case 0x598df6:c.instructions+=46;goto B598df6;
case 0x598df8:c.instructions+=45;goto B598df8;
case 0x598dfa:c.instructions+=44;goto B598dfa;
case 0x598dfd:c.instructions+=43;goto B598dfd;
case 0x598e01:c.instructions+=42;goto B598e01;
case 0x598e04:c.instructions+=41;goto B598e04;
case 0x598e06:c.instructions+=40;goto B598e06;
case 0x598e0a:c.instructions+=39;goto B598e0a;
case 0x598e0d:c.instructions+=38;goto B598e0d;
case 0x598e0f:c.instructions+=37;goto B598e0f;
case 0x598e12:c.instructions+=36;goto B598e12;
case 0x598e14:c.instructions+=35;goto B598e14;
case 0x598e17:c.instructions+=34;goto B598e17;
case 0x598e1b:c.instructions+=33;goto B598e1b;
case 0x598e1e:c.instructions+=32;goto B598e1e;
case 0x598e20:c.instructions+=31;goto B598e20;
case 0x598e24:c.instructions+=30;goto B598e24;
case 0x598e27:c.instructions+=29;goto B598e27;
case 0x598e29:c.instructions+=28;goto B598e29;
case 0x598e2c:c.instructions+=27;goto B598e2c;
case 0x598e2e:c.instructions+=26;goto B598e2e;
case 0x598e31:c.instructions+=25;goto B598e31;
case 0x598e35:c.instructions+=24;goto B598e35;
case 0x598e38:c.instructions+=23;goto B598e38;
case 0x598e3a:c.instructions+=22;goto B598e3a;
case 0x598e3e:c.instructions+=21;goto B598e3e;
case 0x598e41:c.instructions+=20;goto B598e41;
case 0x598e43:c.instructions+=19;goto B598e43;
case 0x598e46:c.instructions+=18;goto B598e46;
case 0x598e49:c.instructions+=17;goto B598e49;
case 0x598e4a:c.instructions+=16;goto B598e4a;
case 0x598e4e:c.instructions+=15;goto B598e4e;
case 0x598e52:c.instructions+=14;goto B598e52;
case 0x598e54:c.instructions+=13;goto B598e54;
case 0x598e56:c.instructions+=12;goto B598e56;
case 0x598e59:c.instructions+=11;goto B598e59;
case 0x598e5c:c.instructions+=10;goto B598e5c;
case 0x598e5f:c.instructions+=9;goto B598e5f;
case 0x598e61:c.instructions+=8;goto B598e61;
case 0x598e63:c.instructions+=7;goto B598e63;
case 0x598e65:c.instructions+=6;goto B598e65;
case 0x598e67:c.instructions+=5;goto B598e67;
case 0x598e6a:c.instructions+=4;goto B598e6a;
case 0x598e6d:c.instructions+=3;goto B598e6d;
case 0x598e6f:c.instructions+=2;goto B598e6f;
case 0x598e71:c.instructions+=1;goto B598e71;
case 0x598e76:goto L598e76;
case 0x598e7a:c.instructions+=15;goto B598e7a;
case 0x598e7c:c.instructions+=14;goto B598e7c;
case 0x598e80:c.instructions+=13;goto B598e80;
case 0x598e84:c.instructions+=12;goto B598e84;
case 0x598e87:c.instructions+=11;goto B598e87;
case 0x598e89:c.instructions+=10;goto B598e89;
case 0x598e8e:c.instructions+=9;goto B598e8e;
case 0x598e92:c.instructions+=8;goto B598e92;
case 0x598e95:c.instructions+=7;goto B598e95;
case 0x598e98:c.instructions+=6;goto B598e98;
case 0x598e9b:c.instructions+=5;goto B598e9b;
case 0x598ea0:c.instructions+=4;goto B598ea0;
case 0x598ea4:c.instructions+=3;goto B598ea4;
case 0x598ea8:c.instructions+=2;goto B598ea8;
case 0x598eac:c.instructions+=1;goto B598eac;
case 0x598eb2:goto L598eb2;
case 0x598eb3:c.instructions+=5;goto B598eb3;
case 0x598eb4:c.instructions+=4;goto B598eb4;
case 0x598eb5:c.instructions+=3;goto B598eb5;
case 0x598eb7:c.instructions+=2;goto B598eb7;
case 0x598eb8:c.instructions+=1;goto B598eb8;
case 0x598ec0:goto L598ec0;
case 0x598ed0:goto L598ed0;
case 0x598ed3:c.instructions+=3;goto B598ed3;
case 0x598ed7:c.instructions+=2;goto B598ed7;
case 0x598edd:c.instructions+=1;goto B598edd;
case 0x598ee0:goto L598ee0;
case 0x598ee3:c.instructions+=3;goto B598ee3;
case 0x598ee7:c.instructions+=2;goto B598ee7;
case 0x598eed:c.instructions+=1;goto B598eed;
case 0x598ef0:goto L598ef0;
case 0x598ef4:c.instructions+=4;goto B598ef4;
case 0x598efa:c.instructions+=3;goto B598efa;
case 0x598efb:c.instructions+=2;goto B598efb;
case 0x598efc:c.instructions+=1;goto B598efc;
case 0x598f01:goto L598f01;
case 0x598f04:c.instructions+=1;goto B598f04;
case 0x598f10:goto L598f10;
case 0x598f11:c.instructions+=8;goto B598f11;
case 0x598f17:c.instructions+=7;goto B598f17;
case 0x598f18:c.instructions+=6;goto B598f18;
case 0x598f1a:c.instructions+=5;goto B598f1a;
case 0x598f1f:c.instructions+=4;goto B598f1f;
case 0x598f22:c.instructions+=3;goto B598f22;
case 0x598f23:c.instructions+=2;goto B598f23;
case 0x598f28:c.instructions+=1;goto B598f28;
case 0x598f2d:goto L598f2d;
case 0x598f2f:c.instructions+=5;goto B598f2f;
case 0x598f34:c.instructions+=4;goto B598f34;
case 0x598f35:c.instructions+=3;goto B598f35;
case 0x598f3a:c.instructions+=2;goto B598f3a;
case 0x598f3f:c.instructions+=1;goto B598f3f;
case 0x598f44:goto L598f44;
case 0x598f46:c.instructions+=6;goto B598f46;
case 0x598f4b:c.instructions+=5;goto B598f4b;
case 0x598f52:c.instructions+=4;goto B598f52;
case 0x598f53:c.instructions+=3;goto B598f53;
case 0x598f58:c.instructions+=2;goto B598f58;
case 0x598f5d:c.instructions+=1;goto B598f5d;
case 0x598f62:goto L598f62;
case 0x598f64:c.instructions+=5;goto B598f64;
case 0x598f69:c.instructions+=4;goto B598f69;
case 0x598f6a:c.instructions+=3;goto B598f6a;
case 0x598f6f:c.instructions+=2;goto B598f6f;
case 0x598f74:c.instructions+=1;goto B598f74;
case 0x598f79:goto L598f79;
case 0x598f7c:c.instructions+=6;goto B598f7c;
case 0x598f7e:c.instructions+=5;goto B598f7e;
case 0x598f83:c.instructions+=4;goto B598f83;
case 0x598f84:c.instructions+=3;goto B598f84;
case 0x598f89:c.instructions+=2;goto B598f89;
case 0x598f8e:c.instructions+=1;goto B598f8e;
case 0x598f93:goto L598f93;
case 0x598f95:c.instructions+=5;goto B598f95;
case 0x598f9a:c.instructions+=4;goto B598f9a;
case 0x598f9b:c.instructions+=3;goto B598f9b;
case 0x598f9d:c.instructions+=2;goto B598f9d;
case 0x598fa2:c.instructions+=1;goto B598fa2;
case 0x598fa7:goto L598fa7;
case 0x598fa9:c.instructions+=5;goto B598fa9;
case 0x598fae:c.instructions+=4;goto B598fae;
case 0x598faf:c.instructions+=3;goto B598faf;
case 0x598fb4:c.instructions+=2;goto B598fb4;
case 0x598fb9:c.instructions+=1;goto B598fb9;
case 0x598fbe:goto L598fbe;
case 0x598fc0:c.instructions+=5;goto B598fc0;
case 0x598fc5:c.instructions+=4;goto B598fc5;
case 0x598fc6:c.instructions+=3;goto B598fc6;
case 0x598fcb:c.instructions+=2;goto B598fcb;
case 0x598fd0:c.instructions+=1;goto B598fd0;
case 0x598fd5:goto L598fd5;
case 0x598fd8:c.instructions+=6;goto B598fd8;
case 0x598fda:c.instructions+=5;goto B598fda;
case 0x598fdf:c.instructions+=4;goto B598fdf;
case 0x598fe0:c.instructions+=3;goto B598fe0;
case 0x598fe2:c.instructions+=2;goto B598fe2;
case 0x598fe7:c.instructions+=1;goto B598fe7;
case 0x598fec:goto L598fec;
case 0x598fee:c.instructions+=5;goto B598fee;
case 0x598ff3:c.instructions+=4;goto B598ff3;
case 0x598ff4:c.instructions+=3;goto B598ff4;
case 0x598ff6:c.instructions+=2;goto B598ff6;
case 0x598ffb:c.instructions+=1;goto B598ffb;
default:missing_instruction(c.pc);}
B598002:L598002:{c.instructions+=16;NFSU2_TR(0x598002);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B598005:{NFSU2_TR(0x598005);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B598007:{NFSU2_TR(0x598007);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59800b:{NFSU2_TR(0x59800b);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59800f:{NFSU2_TR(0x59800f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B598011:{NFSU2_TR(0x598011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B598013:{NFSU2_TR(0x598013);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598015:{NFSU2_TR(0x598015);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598018:{NFSU2_TR(0x598018);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59801b:{NFSU2_TR(0x59801b);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598022:{NFSU2_TR(0x598022);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598024:{NFSU2_TR(0x598024);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B598025:{NFSU2_TR(0x598025);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B598028:{NFSU2_TR(0x598028);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B59802b:{NFSU2_TR(0x59802b);
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
B59802d:{NFSU2_TR(0x59802d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x597ff1u,597);}
}
B59802f:L59802f:{c.instructions+=7;NFSU2_TR(0x59802f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598033:{NFSU2_TR(0x598033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598034:{NFSU2_TR(0x598034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598035:{NFSU2_TR(0x598035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598036:{NFSU2_TR(0x598036);
__builtin_memmove((R+16),(R+20),4);
}
B598038:{NFSU2_TR(0x598038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598039:{NFSU2_TR(0x598039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59803c:L59803c:{c.instructions+=58;NFSU2_TR(0x59803c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598040:{NFSU2_TR(0x598040);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59804a:{NFSU2_TR(0x59804a);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B598051:{NFSU2_TR(0x598051);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598057:{NFSU2_TR(0x598057);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B59805a:{NFSU2_TR(0x59805a);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59805e:{NFSU2_TR(0x59805e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B598060:{NFSU2_TR(0x598060);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598063:{NFSU2_TR(0x598063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B598065:{NFSU2_TR(0x598065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B598067:{NFSU2_TR(0x598067);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598069:{NFSU2_TR(0x598069);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59806c:{NFSU2_TR(0x59806c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59806f:{NFSU2_TR(0x59806f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B598072:{NFSU2_TR(0x598072);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598075:{NFSU2_TR(0x598075);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59807f:{NFSU2_TR(0x59807f);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B598086:{NFSU2_TR(0x598086);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59808c:{NFSU2_TR(0x59808c);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598090:{NFSU2_TR(0x598090);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598094:{NFSU2_TR(0x598094);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B598096:{NFSU2_TR(0x598096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B598098:{NFSU2_TR(0x598098);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59809a:{NFSU2_TR(0x59809a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59809d:{NFSU2_TR(0x59809d);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5980a0:{NFSU2_TR(0x5980a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5980a4:{NFSU2_TR(0x5980a4);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5980a7:{NFSU2_TR(0x5980a7);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5980ae:{NFSU2_TR(0x5980ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5980b4:{NFSU2_TR(0x5980b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5980b7:{NFSU2_TR(0x5980b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5980ba:{NFSU2_TR(0x5980ba);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5980be:{NFSU2_TR(0x5980be);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5980c1:{NFSU2_TR(0x5980c1);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5980c5:{NFSU2_TR(0x5980c5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5980c7:{NFSU2_TR(0x5980c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5980cb:{NFSU2_TR(0x5980cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5980cd:{NFSU2_TR(0x5980cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5980d0:{NFSU2_TR(0x5980d0);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5980d3:{NFSU2_TR(0x5980d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5980d6:{NFSU2_TR(0x5980d6);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5980d9:{NFSU2_TR(0x5980d9);
u8 U[16];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5980e0:{NFSU2_TR(0x5980e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5980e6:{NFSU2_TR(0x5980e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5980e9:{NFSU2_TR(0x5980e9);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5980ed:{NFSU2_TR(0x5980ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5980f0:{NFSU2_TR(0x5980f0);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5980f4:{NFSU2_TR(0x5980f4);
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
B5980f6:{NFSU2_TR(0x5980f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5980f9:{NFSU2_TR(0x5980f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5980fb:{NFSU2_TR(0x5980fb);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5980fe:{NFSU2_TR(0x5980fe);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598101:{NFSU2_TR(0x598101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598102:{NFSU2_TR(0x598102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598103:{NFSU2_TR(0x598103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598104:{NFSU2_TR(0x598104);
__builtin_memmove((R+16),(R+20),4);
}
B598106:{NFSU2_TR(0x598106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598107:{NFSU2_TR(0x598107);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59810a:L59810a:{c.instructions+=7;NFSU2_TR(0x59810a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598110:{NFSU2_TR(0x598110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598111:{NFSU2_TR(0x598111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598112:{NFSU2_TR(0x598112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598113:{NFSU2_TR(0x598113);
__builtin_memmove((R+16),(R+20),4);
}
B598115:{NFSU2_TR(0x598115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598116:{NFSU2_TR(0x598116);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598120:L598120:{c.instructions+=2;NFSU2_TR(0x598120);
u8 U[4];
w4(U+0,u32(0x7a1d44ull));
s4(u32(r4(R+4)),r4(U+0));
}
B598126:{NFSU2_TR(0x598126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598130:L598130:{c.instructions+=10;NFSU2_TR(0x598130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598134:{NFSU2_TR(0x598134);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598135:{NFSU2_TR(0x598135);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598136:{NFSU2_TR(0x598136);
__builtin_memmove((R+0),(R+4),4);
}
B598138:{NFSU2_TR(0x598138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598139:{NFSU2_TR(0x598139);
__builtin_memmove((R+28),(R+0),4);
}
B59813b:{NFSU2_TR(0x59813b);
__builtin_memmove((R+24),(R+0),4);
}
B59813d:{NFSU2_TR(0x59813d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598140:{NFSU2_TR(0x598140);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B598142:{NFSU2_TR(0x598142);
w4(R+12,u32(0x4ull));
}
B598147:L598147:{c.instructions+=11;NFSU2_TR(0x598147);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59814a:{NFSU2_TR(0x59814a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B59814d:{NFSU2_TR(0x59814d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59814f:{NFSU2_TR(0x59814f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B598152:{NFSU2_TR(0x598152);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B598153:{NFSU2_TR(0x598153);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598156:{NFSU2_TR(0x598156);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598159:{NFSU2_TR(0x598159);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59815b:{NFSU2_TR(0x59815b);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59815e:{NFSU2_TR(0x59815e);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598162:{NFSU2_TR(0x598162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598147u);}goto L598147;}}
}
B598164:L598164:{c.instructions+=5;NFSU2_TR(0x598164);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598167:{NFSU2_TR(0x598167);
__builtin_memmove((R+4),(R+24),4);
}
B598169:{NFSU2_TR(0x598169);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B59816b:{NFSU2_TR(0x59816b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B59816f:{NFSU2_TR(0x59816f);
w4(R+12,u32(0x4ull));
}
B598174:L598174:{c.instructions+=11;NFSU2_TR(0x598174);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598177:{NFSU2_TR(0x598177);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B59817a:{NFSU2_TR(0x59817a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59817c:{NFSU2_TR(0x59817c);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B59817f:{NFSU2_TR(0x59817f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B598180:{NFSU2_TR(0x598180);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598183:{NFSU2_TR(0x598183);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598186:{NFSU2_TR(0x598186);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598188:{NFSU2_TR(0x598188);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59818b:{NFSU2_TR(0x59818b);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59818f:{NFSU2_TR(0x59818f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598174u);}goto L598174;}}
}
B598191:L598191:{c.instructions+=24;NFSU2_TR(0x598191);
{u32 ea_=u32(r4(R+8)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598197:{NFSU2_TR(0x598197);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59819d:{NFSU2_TR(0x59819d);
{u32 ea_=u32(r4(R+8)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5981a3:{NFSU2_TR(0x5981a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5981a9:{NFSU2_TR(0x5981a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5981ab:{NFSU2_TR(0x5981ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5981b1:{NFSU2_TR(0x5981b1);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5981b7:{NFSU2_TR(0x5981b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5981bd:{NFSU2_TR(0x5981bd);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5981c3:{NFSU2_TR(0x5981c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5981c9:{NFSU2_TR(0x5981c9);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5981cf:{NFSU2_TR(0x5981cf);
{u32 ea_=u32(r4(R+8)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5981d5:{NFSU2_TR(0x5981d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5981db:{NFSU2_TR(0x5981db);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5981dd:{NFSU2_TR(0x5981dd);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5981e3:{NFSU2_TR(0x5981e3);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5981e9:{NFSU2_TR(0x5981e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5981ef:{NFSU2_TR(0x5981ef);
{u32 ea_=u32(r4(R+8)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5981f5:{NFSU2_TR(0x5981f5);
{u32 ea_=u32(r4(R+8)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5981fb:{NFSU2_TR(0x5981fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598201:{NFSU2_TR(0x598201);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598203:{NFSU2_TR(0x598203);
w4(R+4,u32(0x5ull));
}
B598208:{NFSU2_TR(0x598208);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59820e:{NFSU2_TR(0x59820e);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598214:L598214:{c.instructions+=1;NFSU2_TR(0x598214);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L598216;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598214u);}goto L598214;}
}
B598216:L598216:{c.instructions+=3;NFSU2_TR(0x598216);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59821c:{NFSU2_TR(0x59821c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598222:{NFSU2_TR(0x598222);
w4(R+4,u32(0x5ull));
}
B598227:L598227:{c.instructions+=1;NFSU2_TR(0x598227);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L598229;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598227u);}goto L598227;}
}
B598229:L598229:{c.instructions+=6;NFSU2_TR(0x598229);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59822f:{NFSU2_TR(0x59822f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598230:{NFSU2_TR(0x598230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598231:{NFSU2_TR(0x598231);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598237:{NFSU2_TR(0x598237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598238:{NFSU2_TR(0x598238);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598240:L598240:{c.instructions+=84;NFSU2_TR(0x598240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598244:{NFSU2_TR(0x598244);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598247:{NFSU2_TR(0x598247);
__builtin_memmove((R+0),(R+4),4);
}
B598249:{NFSU2_TR(0x598249);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59824c:{NFSU2_TR(0x59824c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59824e:{NFSU2_TR(0x59824e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B598250:{NFSU2_TR(0x598250);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598252:{NFSU2_TR(0x598252);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598255:{NFSU2_TR(0x598255);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598256:{NFSU2_TR(0x598256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598257:{NFSU2_TR(0x598257);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59825a:{NFSU2_TR(0x59825a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59825d:{NFSU2_TR(0x59825d);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598260:{NFSU2_TR(0x598260);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598263:{NFSU2_TR(0x598263);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598266:{NFSU2_TR(0x598266);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598268:{NFSU2_TR(0x598268);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59826b:{NFSU2_TR(0x59826b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59826e:{NFSU2_TR(0x59826e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598271:{NFSU2_TR(0x598271);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598274:{NFSU2_TR(0x598274);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598277:{NFSU2_TR(0x598277);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59827a:{NFSU2_TR(0x59827a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59827c:{NFSU2_TR(0x59827c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59827f:{NFSU2_TR(0x59827f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598282:{NFSU2_TR(0x598282);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598285:{NFSU2_TR(0x598285);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598288:{NFSU2_TR(0x598288);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59828b:{NFSU2_TR(0x59828b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59828e:{NFSU2_TR(0x59828e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598290:{NFSU2_TR(0x598290);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598293:{NFSU2_TR(0x598293);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598296:{NFSU2_TR(0x598296);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598299:{NFSU2_TR(0x598299);
{u32 ea_=u32(r4(R+8)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59829c:{NFSU2_TR(0x59829c);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59829f:{NFSU2_TR(0x59829f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5982a2:{NFSU2_TR(0x5982a2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5982a4:{NFSU2_TR(0x5982a4);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982a7:{NFSU2_TR(0x5982a7);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982aa:{NFSU2_TR(0x5982aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5982ad:{NFSU2_TR(0x5982ad);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982b0:{NFSU2_TR(0x5982b0);
{u32 ea_=u32(r4(R+8)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982b3:{NFSU2_TR(0x5982b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5982b6:{NFSU2_TR(0x5982b6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5982b8:{NFSU2_TR(0x5982b8);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982bb:{NFSU2_TR(0x5982bb);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982be:{NFSU2_TR(0x5982be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5982c1:{NFSU2_TR(0x5982c1);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982c4:{NFSU2_TR(0x5982c4);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982c7:{NFSU2_TR(0x5982c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5982ca:{NFSU2_TR(0x5982ca);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5982cc:{NFSU2_TR(0x5982cc);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982cf:{NFSU2_TR(0x5982cf);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982d2:{NFSU2_TR(0x5982d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5982d5:{NFSU2_TR(0x5982d5);
{u32 ea_=u32(r4(R+8)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982d8:{NFSU2_TR(0x5982d8);
{u32 ea_=u32(r4(R+8)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982db:{NFSU2_TR(0x5982db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5982de:{NFSU2_TR(0x5982de);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5982e0:{NFSU2_TR(0x5982e0);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982e3:{NFSU2_TR(0x5982e3);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5982e6:{NFSU2_TR(0x5982e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5982ec:{NFSU2_TR(0x5982ec);
{u32 ea_=u32(r4(R+8)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982f2:{NFSU2_TR(0x5982f2);
{u32 ea_=u32(r4(R+8)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5982f8:{NFSU2_TR(0x5982f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5982fe:{NFSU2_TR(0x5982fe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598300:{NFSU2_TR(0x598300);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598306:{NFSU2_TR(0x598306);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59830c:{NFSU2_TR(0x59830c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598312:{NFSU2_TR(0x598312);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598318:{NFSU2_TR(0x598318);
{u32 ea_=u32(r4(R+8)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59831e:{NFSU2_TR(0x59831e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598324:{NFSU2_TR(0x598324);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598326:{NFSU2_TR(0x598326);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59832c:{NFSU2_TR(0x59832c);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598332:{NFSU2_TR(0x598332);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598338:{NFSU2_TR(0x598338);
{u32 ea_=u32(r4(R+8)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59833e:{NFSU2_TR(0x59833e);
{u32 ea_=u32(r4(R+8)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598344:{NFSU2_TR(0x598344);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59834a:{NFSU2_TR(0x59834a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59834c:{NFSU2_TR(0x59834c);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598352:{NFSU2_TR(0x598352);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598358:{NFSU2_TR(0x598358);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59835e:{NFSU2_TR(0x59835e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598364:{NFSU2_TR(0x598364);
w4(R+4,u32(0x5ull));
}
B598369:L598369:{c.instructions+=1;NFSU2_TR(0x598369);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L59836b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598369u);}goto L598369;}
}
B59836b:L59836b:{c.instructions+=3;NFSU2_TR(0x59836b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598371:{NFSU2_TR(0x598371);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598377:{NFSU2_TR(0x598377);
w4(R+4,u32(0x5ull));
}
B59837c:L59837c:{c.instructions+=1;NFSU2_TR(0x59837c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L59837e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59837cu);}goto L59837c;}
}
B59837e:L59837e:{c.instructions+=5;NFSU2_TR(0x59837e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598384:{NFSU2_TR(0x598384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598385:{NFSU2_TR(0x598385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59838b:{NFSU2_TR(0x59838b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59838c:{NFSU2_TR(0x59838c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598390:L598390:{c.instructions+=10;NFSU2_TR(0x598390);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598391:{NFSU2_TR(0x598391);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598392:{NFSU2_TR(0x598392);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598393:{NFSU2_TR(0x598393);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B598397:{NFSU2_TR(0x598397);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598398:{NFSU2_TR(0x598398);
__builtin_memmove((R+28),(R+4),4);
}
B59839a:{NFSU2_TR(0x59839a);
u8 U[4];
w4(U+0,u32(0x7a1d48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59839f:{NFSU2_TR(0x59839f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983a0:{NFSU2_TR(0x5983a0);
__builtin_memmove((R+4),(R+24),4);
}
B5983a2:{NFSU2_TR(0x5983a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5983a7ull));
TAIL_STATIC(0x578ce0u,578);
}
B5983a7:L5983a7:{c.instructions+=4;NFSU2_TR(0x5983a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5983aa:{NFSU2_TR(0x5983aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983ab:{NFSU2_TR(0x5983ab);
__builtin_memmove((R+4),(R+24),4);
}
B5983ad:{NFSU2_TR(0x5983ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5983b2ull));
TAIL_STATIC(0x571770u,571);
}
B5983b2:L5983b2:{c.instructions+=3;NFSU2_TR(0x5983b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x104ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5983b8:{NFSU2_TR(0x5983b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5983be:{NFSU2_TR(0x5983be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5983c6:L5983c6:{c.instructions+=7;NFSU2_TR(0x5983c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983c8:{NFSU2_TR(0x5983c8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983ca:{NFSU2_TR(0x5983ca);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983cc:{NFSU2_TR(0x5983cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5983cf:{NFSU2_TR(0x5983cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983d0:{NFSU2_TR(0x5983d0);
__builtin_memmove((R+4),(R+24),4);
}
B5983d2:{NFSU2_TR(0x5983d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5983d7ull));
TAIL_STATIC(0x571640u,571);
}
B5983d7:L5983d7:{c.instructions+=6;NFSU2_TR(0x5983d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983d9:{NFSU2_TR(0x5983d9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983db:{NFSU2_TR(0x5983db);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983dd:{NFSU2_TR(0x5983dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983de:{NFSU2_TR(0x5983de);
__builtin_memmove((R+4),(R+24),4);
}
B5983e0:{NFSU2_TR(0x5983e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5983e5ull));
TAIL_STATIC(0x571640u,571);
}
B5983e5:L5983e5:{c.instructions+=4;NFSU2_TR(0x5983e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B5983e8:{NFSU2_TR(0x5983e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983e9:{NFSU2_TR(0x5983e9);
__builtin_memmove((R+4),(R+24),4);
}
B5983eb:{NFSU2_TR(0x5983eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5983f0ull));
TAIL_STATIC(0x571770u,571);
}
B5983f0:L5983f0:{c.instructions+=3;NFSU2_TR(0x5983f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5983f1:{NFSU2_TR(0x5983f1);
__builtin_memmove((R+4),(R+24),4);
}
B5983f3:{NFSU2_TR(0x5983f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5983f8ull));
TAIL_STATIC(0x571770u,571);
}
B5983f8:L5983f8:{c.instructions+=6;NFSU2_TR(0x5983f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5983fc:{NFSU2_TR(0x5983fc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5983ff:{NFSU2_TR(0x5983ff);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B598402:{NFSU2_TR(0x598402);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B598403:{NFSU2_TR(0x598403);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598407:{NFSU2_TR(0x598407);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5983c6u);}goto L5983c6;}}
}
B598409:L598409:{c.instructions+=7;NFSU2_TR(0x598409);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59840b:{NFSU2_TR(0x59840b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59840d:{NFSU2_TR(0x59840d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59840f:{NFSU2_TR(0x59840f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B598415:{NFSU2_TR(0x598415);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598416:{NFSU2_TR(0x598416);
__builtin_memmove((R+4),(R+24),4);
}
B598418:{NFSU2_TR(0x598418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59841dull));
TAIL_STATIC(0x571640u,571);
}
B59841d:L59841d:{c.instructions+=7;NFSU2_TR(0x59841d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59841f:{NFSU2_TR(0x59841f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598421:{NFSU2_TR(0x598421);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598423:{NFSU2_TR(0x598423);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598429:{NFSU2_TR(0x598429);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59842a:{NFSU2_TR(0x59842a);
__builtin_memmove((R+4),(R+24),4);
}
B59842c:{NFSU2_TR(0x59842c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598431ull));
TAIL_STATIC(0x571640u,571);
}
B598431:L598431:{c.instructions+=7;NFSU2_TR(0x598431);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598433:{NFSU2_TR(0x598433);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598435:{NFSU2_TR(0x598435);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598437:{NFSU2_TR(0x598437);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59843d:{NFSU2_TR(0x59843d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59843e:{NFSU2_TR(0x59843e);
__builtin_memmove((R+4),(R+24),4);
}
B598440:{NFSU2_TR(0x598440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598445ull));
TAIL_STATIC(0x571640u,571);
}
B598445:L598445:{c.instructions+=4;NFSU2_TR(0x598445);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59844b:{NFSU2_TR(0x59844b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59844c:{NFSU2_TR(0x59844c);
__builtin_memmove((R+4),(R+24),4);
}
B59844e:{NFSU2_TR(0x59844e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598453ull));
TAIL_STATIC(0x571770u,571);
}
B598453:L598453:{c.instructions+=4;NFSU2_TR(0x598453);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598459:{NFSU2_TR(0x598459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59845a:{NFSU2_TR(0x59845a);
__builtin_memmove((R+4),(R+24),4);
}
B59845c:{NFSU2_TR(0x59845c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598461ull));
TAIL_STATIC(0x571770u,571);
}
B598461:L598461:{c.instructions+=4;NFSU2_TR(0x598461);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598467:{NFSU2_TR(0x598467);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598468:{NFSU2_TR(0x598468);
__builtin_memmove((R+4),(R+24),4);
}
B59846a:{NFSU2_TR(0x59846a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59846full));
TAIL_STATIC(0x571770u,571);
}
B59846f:L59846f:{c.instructions+=7;NFSU2_TR(0x59846f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598471:{NFSU2_TR(0x598471);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598473:{NFSU2_TR(0x598473);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598475:{NFSU2_TR(0x598475);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B598478:{NFSU2_TR(0x598478);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598479:{NFSU2_TR(0x598479);
__builtin_memmove((R+4),(R+24),4);
}
B59847b:{NFSU2_TR(0x59847b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598480ull));
TAIL_STATIC(0x571640u,571);
}
B598480:L598480:{c.instructions+=7;NFSU2_TR(0x598480);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598482:{NFSU2_TR(0x598482);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598484:{NFSU2_TR(0x598484);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598486:{NFSU2_TR(0x598486);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598489:{NFSU2_TR(0x598489);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59848a:{NFSU2_TR(0x59848a);
__builtin_memmove((R+4),(R+24),4);
}
B59848c:{NFSU2_TR(0x59848c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598491ull));
TAIL_STATIC(0x571640u,571);
}
B598491:L598491:{c.instructions+=5;NFSU2_TR(0x598491);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598497:{NFSU2_TR(0x598497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59849a:{NFSU2_TR(0x59849a);
w4(R+12,u32(0x2ull));
}
B59849f:{NFSU2_TR(0x59849f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5984a1:{NFSU2_TR(0x5984a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5984b6;}}
}
B5984a3:L5984a3:{c.instructions+=7;NFSU2_TR(0x5984a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984a5:{NFSU2_TR(0x5984a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984a7:{NFSU2_TR(0x5984a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984a9:{NFSU2_TR(0x5984a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
}
B5984ae:{NFSU2_TR(0x5984ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984af:{NFSU2_TR(0x5984af);
__builtin_memmove((R+4),(R+24),4);
}
B5984b1:{NFSU2_TR(0x5984b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5984b6ull));
TAIL_STATIC(0x571640u,571);
}
B5984b6:L5984b6:{c.instructions+=3;NFSU2_TR(0x5984b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5984bc:{NFSU2_TR(0x5984bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5984bf:{NFSU2_TR(0x5984bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5984d4;}}
}
B5984c1:L5984c1:{c.instructions+=7;NFSU2_TR(0x5984c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984c3:{NFSU2_TR(0x5984c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984c5:{NFSU2_TR(0x5984c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984c7:{NFSU2_TR(0x5984c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
}
B5984cc:{NFSU2_TR(0x5984cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984cd:{NFSU2_TR(0x5984cd);
__builtin_memmove((R+4),(R+24),4);
}
B5984cf:{NFSU2_TR(0x5984cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5984d4ull));
TAIL_STATIC(0x571640u,571);
}
B5984d4:L5984d4:{c.instructions+=7;NFSU2_TR(0x5984d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984d6:{NFSU2_TR(0x5984d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984d8:{NFSU2_TR(0x5984d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984da:{NFSU2_TR(0x5984da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x221ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5984e0:{NFSU2_TR(0x5984e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984e1:{NFSU2_TR(0x5984e1);
__builtin_memmove((R+4),(R+24),4);
}
B5984e3:{NFSU2_TR(0x5984e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5984e8ull));
TAIL_STATIC(0x571640u,571);
}
B5984e8:L5984e8:{c.instructions+=3;NFSU2_TR(0x5984e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5984eb:{NFSU2_TR(0x5984eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B5984ee:{NFSU2_TR(0x5984ee);
if(r1(R+518)){{goto L598575;}}
}
B5984f4:L5984f4:{c.instructions+=4;NFSU2_TR(0x5984f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5984fa:{NFSU2_TR(0x5984fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5984fb:{NFSU2_TR(0x5984fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B598502:{NFSU2_TR(0x598502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598507ull));
TAIL_STATIC(0x43c780u,43c);
}
B598507:L598507:{c.instructions+=3;NFSU2_TR(0x598507);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59850d:{NFSU2_TR(0x59850d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59850e:{NFSU2_TR(0x59850e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598513ull));
TAIL_STATIC(0x43c780u,43c);
}
B598513:L598513:{c.instructions+=3;NFSU2_TR(0x598513);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B598519:{NFSU2_TR(0x598519);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59851a:{NFSU2_TR(0x59851a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59851full));
TAIL_STATIC(0x43c780u,43c);
}
B59851f:L59851f:{c.instructions+=3;NFSU2_TR(0x59851f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598525:{NFSU2_TR(0x598525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598526:{NFSU2_TR(0x598526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59852bull));
TAIL_STATIC(0x43c780u,43c);
}
B59852b:L59852b:{c.instructions+=6;NFSU2_TR(0x59852b);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59852e:{NFSU2_TR(0x59852e);
{u32 ea_=u32(u32(8001836u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598534:{NFSU2_TR(0x598534);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B598537:{NFSU2_TR(0x598537);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598539:{NFSU2_TR(0x598539);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59853c:{NFSU2_TR(0x59853c);
if(r1(R+514)){{goto L598545;}}
}
B59853e:L59853e:{c.instructions+=2;NFSU2_TR(0x59853e);
w4(R+0,u32(0x1ull));
}
B598543:{NFSU2_TR(0x598543);
{goto L598547;}
}
B598545:L598545:{c.instructions+=1;NFSU2_TR(0x598545);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B598547:L598547:{c.instructions+=6;NFSU2_TR(0x598547);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59854a:{NFSU2_TR(0x59854a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59854d:{NFSU2_TR(0x59854d);
{u32 ea_=u32(u32(8001832u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598553:{NFSU2_TR(0x598553);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598555:{NFSU2_TR(0x598555);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B598558:{NFSU2_TR(0x598558);
if(r1(R+514)){{goto L598570;}}
}
B59855a:L59855a:{c.instructions+=4;NFSU2_TR(0x59855a);
w4(R+0,u32(0x1ull));
}
B59855f:{NFSU2_TR(0x59855f);
__builtin_memmove((R+4),(R+24),4);
}
B598561:{NFSU2_TR(0x598561);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B598564:{NFSU2_TR(0x598564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598569ull));
TAIL_STATIC(0x578d90u,578);
}
B598569:L598569:{c.instructions+=5;NFSU2_TR(0x598569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59856a:{NFSU2_TR(0x59856a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59856b:{NFSU2_TR(0x59856b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59856c:{NFSU2_TR(0x59856c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59856d:{NFSU2_TR(0x59856d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598570:L598570:{c.instructions+=2;NFSU2_TR(0x598570);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B598572:{NFSU2_TR(0x598572);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B598575:L598575:{c.instructions+=2;NFSU2_TR(0x598575);
__builtin_memmove((R+4),(R+24),4);
}
B598577:{NFSU2_TR(0x598577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59857cull));
TAIL_STATIC(0x578d90u,578);
}
B59857c:L59857c:{c.instructions+=5;NFSU2_TR(0x59857c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59857d:{NFSU2_TR(0x59857d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59857e:{NFSU2_TR(0x59857e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59857f:{NFSU2_TR(0x59857f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598580:{NFSU2_TR(0x598580);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598590:L598590:{c.instructions+=5;NFSU2_TR(0x598590);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598596:{NFSU2_TR(0x598596);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59859a:{NFSU2_TR(0x59859a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59859c:{NFSU2_TR(0x59859c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5985a0:{NFSU2_TR(0x5985a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5985aa;}}
}
B5985a2:L5985a2:{c.instructions+=2;NFSU2_TR(0x5985a2);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x228ull))));
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
B5985a8:{NFSU2_TR(0x5985a8);
if(r1(R+518)){{goto L598616;}}
}
B5985aa:L5985aa:{c.instructions+=7;NFSU2_TR(0x5985aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5985ae:{NFSU2_TR(0x5985ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5985b2:{NFSU2_TR(0x5985b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5985b9:{NFSU2_TR(0x5985b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5985bf:{NFSU2_TR(0x5985bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5985c5:{NFSU2_TR(0x5985c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5985c9:{NFSU2_TR(0x5985c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5985f6;}}
}
B5985cb:L5985cb:{c.instructions+=3;NFSU2_TR(0x5985cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5985d1:{NFSU2_TR(0x5985d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5985d3:{NFSU2_TR(0x5985d3);
if(r1(R+518)){{goto L59860e;}}
}
B5985d5:L5985d5:{c.instructions+=1;NFSU2_TR(0x5985d5);
{u32 ea_=u32(r4(R+0)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5985db:L5985db:{c.instructions+=4;NFSU2_TR(0x5985db);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5985e1:{NFSU2_TR(0x5985e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5985e3:{NFSU2_TR(0x5985e3);
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
B5985e6:{NFSU2_TR(0x5985e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59860e;}}
}
B5985e8:L5985e8:{c.instructions+=3;NFSU2_TR(0x5985e8);
w4(R+0,u32(0x1ull));
}
B5985ed:{NFSU2_TR(0x5985ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x221ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5985f3:{NFSU2_TR(0x5985f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5985f6:L5985f6:{c.instructions+=2;NFSU2_TR(0x5985f6);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
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
B5985fa:{NFSU2_TR(0x5985fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598616;}}
}
B5985fc:L5985fc:{c.instructions+=3;NFSU2_TR(0x5985fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B598602:{NFSU2_TR(0x598602);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B598604:{NFSU2_TR(0x598604);
if(r1(R+518)){{goto L59860e;}}
}
B598606:L598606:{c.instructions+=2;NFSU2_TR(0x598606);
{u32 ea_=u32(r4(R+8)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59860c:{NFSU2_TR(0x59860c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5985dbu);}goto L5985db;}
}
B59860e:L59860e:{c.instructions+=2;NFSU2_TR(0x59860e);
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
B598610:{NFSU2_TR(0x598610);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x221ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B598616:L598616:{c.instructions+=1;NFSU2_TR(0x598616);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598620:L598620:{c.instructions+=11;NFSU2_TR(0x598620);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598621:{NFSU2_TR(0x598621);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598622:{NFSU2_TR(0x598622);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598623:{NFSU2_TR(0x598623);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598624:{NFSU2_TR(0x598624);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B598628:{NFSU2_TR(0x598628);
__builtin_memmove((R+24),(R+4),4);
}
B59862a:{NFSU2_TR(0x59862a);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59862f:{NFSU2_TR(0x59862f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598632:{NFSU2_TR(0x598632);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598633:{NFSU2_TR(0x598633);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598634:{NFSU2_TR(0x598634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598639ull));
TAIL_STATIC(0x43d190u,43d);
}
B598639:L598639:{c.instructions+=4;NFSU2_TR(0x598639);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59863d:{NFSU2_TR(0x59863d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B598640:{NFSU2_TR(0x598640);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B598642:{NFSU2_TR(0x598642);
if(r1(R+518)){{goto L59865a;}}
}
B598644:L598644:{c.instructions+=5;NFSU2_TR(0x598644);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598649:{NFSU2_TR(0x598649);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59864c:{NFSU2_TR(0x59864c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59864d:{NFSU2_TR(0x59864d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59864e:{NFSU2_TR(0x59864e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598653ull));
TAIL_STATIC(0x43d190u,43d);
}
B598653:L598653:{c.instructions+=3;NFSU2_TR(0x598653);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B598656:{NFSU2_TR(0x598656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B598658:{NFSU2_TR(0x598658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598661;}}
}
B59865a:L59865a:{c.instructions+=1;NFSU2_TR(0x59865a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B598661:L598661:{c.instructions+=3;NFSU2_TR(0x598661);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B598667:{NFSU2_TR(0x598667);
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
B598669:{NFSU2_TR(0x598669);
if(r1(R+518)){{goto L598728;}}
}
B59866f:L59866f:{c.instructions+=5;NFSU2_TR(0x59866f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598673:{NFSU2_TR(0x598673);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598674:{NFSU2_TR(0x598674);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59867a:{NFSU2_TR(0x59867a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59867b:{NFSU2_TR(0x59867b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598680ull));
TAIL_STATIC(0x4012b0u,401);
}
B598680:L598680:{c.instructions+=5;NFSU2_TR(0x598680);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598684:{NFSU2_TR(0x598684);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598685:{NFSU2_TR(0x598685);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59868b:{NFSU2_TR(0x59868b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59868c:{NFSU2_TR(0x59868c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598691ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B598691:L598691:{c.instructions+=13;NFSU2_TR(0x598691);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598694:{NFSU2_TR(0x598694);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598697:{NFSU2_TR(0x598697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B598699:{NFSU2_TR(0x598699);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59869d:{NFSU2_TR(0x59869d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59869f:{NFSU2_TR(0x59869f);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5986a5:{NFSU2_TR(0x5986a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5986a6:{NFSU2_TR(0x5986a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5986ac:{NFSU2_TR(0x5986ac);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5986b2:{NFSU2_TR(0x5986b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5986b8:{NFSU2_TR(0x5986b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5986b9:{NFSU2_TR(0x5986b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5986c3:{NFSU2_TR(0x5986c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5986c8ull));
TAIL_STATIC(0x4012b0u,401);
}
B5986c8:L5986c8:{c.instructions+=5;NFSU2_TR(0x5986c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5986cc:{NFSU2_TR(0x5986cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5986cd:{NFSU2_TR(0x5986cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5986d3:{NFSU2_TR(0x5986d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5986d4:{NFSU2_TR(0x5986d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5986d9ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B5986d9:L5986d9:{c.instructions+=23;NFSU2_TR(0x5986d9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5986dc:{NFSU2_TR(0x5986dc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5986df:{NFSU2_TR(0x5986df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5986e1:{NFSU2_TR(0x5986e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5986e7:{NFSU2_TR(0x5986e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5986e9:{NFSU2_TR(0x5986e9);
{u32 ea_=u32(r4(R+24)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5986ef:{NFSU2_TR(0x5986ef);
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
B5986f2:{NFSU2_TR(0x5986f2);
{u32 ea_=u32(r4(R+24)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5986f8:{NFSU2_TR(0x5986f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B598702:{NFSU2_TR(0x598702);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598705:{NFSU2_TR(0x598705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B598707:{NFSU2_TR(0x598707);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59870a:{NFSU2_TR(0x59870a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B59870d:{NFSU2_TR(0x59870d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59870f:{NFSU2_TR(0x59870f);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598712:{NFSU2_TR(0x598712);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598715:{NFSU2_TR(0x598715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B598717:{NFSU2_TR(0x598717);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59871a:{NFSU2_TR(0x59871a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59871d:{NFSU2_TR(0x59871d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598720:{NFSU2_TR(0x598720);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598722:{NFSU2_TR(0x598722);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598725:{NFSU2_TR(0x598725);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598728:L598728:{c.instructions+=5;NFSU2_TR(0x598728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598729:{NFSU2_TR(0x598729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59872a:{NFSU2_TR(0x59872a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59872b:{NFSU2_TR(0x59872b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59872c:{NFSU2_TR(0x59872c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598730:L598730:{c.instructions+=3;NFSU2_TR(0x598730);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598734:{NFSU2_TR(0x598734);
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
B598736:{NFSU2_TR(0x598736);
if(r1(R+518)){{goto L59873d;}}
}
B598738:L598738:{c.instructions+=2;NFSU2_TR(0x598738);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59873b:{NFSU2_TR(0x59873b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B59873d:L59873d:{c.instructions+=2;NFSU2_TR(0x59873d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B598740:{NFSU2_TR(0x598740);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598750:L598750:{c.instructions+=3;NFSU2_TR(0x598750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598751:{NFSU2_TR(0x598751);
__builtin_memmove((R+24),(R+4),4);
}
B598753:{NFSU2_TR(0x598753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598758ull));
TAIL_STATIC(0x57bcd0u,57b);
}
B598758:L598758:{c.instructions+=3;NFSU2_TR(0x598758);
__builtin_memmove((R+0),(R+24),4);
}
B59875a:{NFSU2_TR(0x59875a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59875b:{NFSU2_TR(0x59875b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598760:L598760:{c.instructions+=26;NFSU2_TR(0x598760);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598764:{NFSU2_TR(0x598764);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59876b:{NFSU2_TR(0x59876b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59876f:{NFSU2_TR(0x59876f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598775:{NFSU2_TR(0x598775);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598778:{NFSU2_TR(0x598778);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59877c:{NFSU2_TR(0x59877c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598780:{NFSU2_TR(0x598780);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598786:{NFSU2_TR(0x598786);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598789:{NFSU2_TR(0x598789);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59878d:{NFSU2_TR(0x59878d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598791:{NFSU2_TR(0x598791);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598797:{NFSU2_TR(0x598797);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59879a:{NFSU2_TR(0x59879a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59879e:{NFSU2_TR(0x59879e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5987a2:{NFSU2_TR(0x5987a2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5987a8:{NFSU2_TR(0x5987a8);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5987ab:{NFSU2_TR(0x5987ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5987af:{NFSU2_TR(0x5987af);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5987b3:{NFSU2_TR(0x5987b3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5987b9:{NFSU2_TR(0x5987b9);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5987bc:{NFSU2_TR(0x5987bc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5987c0:{NFSU2_TR(0x5987c0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5987c4:{NFSU2_TR(0x5987c4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5987ca:{NFSU2_TR(0x5987ca);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5987cd:{NFSU2_TR(0x5987cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5987d0:L5987d0:{c.instructions+=12;NFSU2_TR(0x5987d0);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5987d3:{NFSU2_TR(0x5987d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5987d6:{NFSU2_TR(0x5987d6);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5987d9:{NFSU2_TR(0x5987d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5987dd:{NFSU2_TR(0x5987dd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5987df:{NFSU2_TR(0x5987df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5987e2:{NFSU2_TR(0x5987e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5987e6:{NFSU2_TR(0x5987e6);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5987e9:{NFSU2_TR(0x5987e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5987ec:{NFSU2_TR(0x5987ec);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5987ef:{NFSU2_TR(0x5987ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5987f3:{NFSU2_TR(0x5987f3);
if(r1(R+518)){{goto L5987fd;}}
}
B5987f5:L5987f5:{c.instructions+=3;NFSU2_TR(0x5987f5);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5987f8:{NFSU2_TR(0x5987f8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5987fa:{NFSU2_TR(0x5987fa);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5987fd:L5987fd:{c.instructions+=2;NFSU2_TR(0x5987fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B598800:{NFSU2_TR(0x598800);
if(r1(R+518)){{goto L59880a;}}
}
B598802:L598802:{c.instructions+=3;NFSU2_TR(0x598802);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598805:{NFSU2_TR(0x598805);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B598807:{NFSU2_TR(0x598807);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59880a:L59880a:{c.instructions+=2;NFSU2_TR(0x59880a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59880d:{NFSU2_TR(0x59880d);
if(r1(R+518)){{goto L598817;}}
}
B59880f:L59880f:{c.instructions+=3;NFSU2_TR(0x59880f);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598812:{NFSU2_TR(0x598812);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B598814:{NFSU2_TR(0x598814);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598817:L598817:{c.instructions+=11;NFSU2_TR(0x598817);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59881a:{NFSU2_TR(0x59881a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59881d:{NFSU2_TR(0x59881d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598820:{NFSU2_TR(0x598820);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598823:{NFSU2_TR(0x598823);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598826:{NFSU2_TR(0x598826);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598828:{NFSU2_TR(0x598828);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59882b:{NFSU2_TR(0x59882b);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59882e:{NFSU2_TR(0x59882e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598831:{NFSU2_TR(0x598831);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598834:{NFSU2_TR(0x598834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598840:L598840:{c.instructions+=11;NFSU2_TR(0x598840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598841:{NFSU2_TR(0x598841);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598842:{NFSU2_TR(0x598842);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598843:{NFSU2_TR(0x598843);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598844:{NFSU2_TR(0x598844);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B598848:{NFSU2_TR(0x598848);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598849:{NFSU2_TR(0x598849);
u8 U[4];
w4(U+0,u32(0x7a1d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59884e:{NFSU2_TR(0x59884e);
__builtin_memmove((R+12),(R+4),4);
}
B598850:{NFSU2_TR(0x598850);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598852:{NFSU2_TR(0x598852);
__builtin_memmove((R+4),(R+24),4);
}
B598854:{NFSU2_TR(0x598854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598859ull));
TAIL_STATIC(0x578ce0u,578);
}
B598859:L598859:{c.instructions+=7;NFSU2_TR(0x598859);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59885b:{NFSU2_TR(0x59885b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59885d:{NFSU2_TR(0x59885d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59885f:{NFSU2_TR(0x59885f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598862:{NFSU2_TR(0x598862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598863:{NFSU2_TR(0x598863);
__builtin_memmove((R+4),(R+24),4);
}
B598865:{NFSU2_TR(0x598865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59886aull));
TAIL_STATIC(0x571640u,571);
}
B59886a:L59886a:{c.instructions+=6;NFSU2_TR(0x59886a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598870:{NFSU2_TR(0x598870);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B598876:{NFSU2_TR(0x598876);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B598878:{NFSU2_TR(0x598878);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59887c:{NFSU2_TR(0x59887c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598880:{NFSU2_TR(0x598880);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598883:L598883:{c.instructions+=4;NFSU2_TR(0x598883);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598886:{NFSU2_TR(0x598886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598887:{NFSU2_TR(0x598887);
__builtin_memmove((R+4),(R+24),4);
}
B598889:{NFSU2_TR(0x598889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59888eull));
TAIL_STATIC(0x571770u,571);
}
B59888e:L59888e:{c.instructions+=3;NFSU2_TR(0x59888e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59888f:{NFSU2_TR(0x59888f);
__builtin_memmove((R+4),(R+24),4);
}
B598891:{NFSU2_TR(0x598891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598896ull));
TAIL_STATIC(0x571770u,571);
}
B598896:L598896:{c.instructions+=4;NFSU2_TR(0x598896);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598899:{NFSU2_TR(0x598899);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59889a:{NFSU2_TR(0x59889a);
__builtin_memmove((R+4),(R+24),4);
}
B59889c:{NFSU2_TR(0x59889c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5988a1ull));
TAIL_STATIC(0x571770u,571);
}
B5988a1:L5988a1:{c.instructions+=7;NFSU2_TR(0x5988a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988a3:{NFSU2_TR(0x5988a3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988a5:{NFSU2_TR(0x5988a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988a7:{NFSU2_TR(0x5988a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5988aa:{NFSU2_TR(0x5988aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988ab:{NFSU2_TR(0x5988ab);
__builtin_memmove((R+4),(R+24),4);
}
B5988ad:{NFSU2_TR(0x5988ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5988b2ull));
TAIL_STATIC(0x571640u,571);
}
B5988b2:L5988b2:{c.instructions+=8;NFSU2_TR(0x5988b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5988b6:{NFSU2_TR(0x5988b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988b8:{NFSU2_TR(0x5988b8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988ba:{NFSU2_TR(0x5988ba);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988bc:{NFSU2_TR(0x5988bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
}
B5988bf:{NFSU2_TR(0x5988bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988c0:{NFSU2_TR(0x5988c0);
__builtin_memmove((R+4),(R+24),4);
}
B5988c2:{NFSU2_TR(0x5988c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5988c7ull));
TAIL_STATIC(0x571640u,571);
}
B5988c7:L5988c7:{c.instructions+=7;NFSU2_TR(0x5988c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5988cb:{NFSU2_TR(0x5988cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988cd:{NFSU2_TR(0x5988cd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988cf:{NFSU2_TR(0x5988cf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988d1:{NFSU2_TR(0x5988d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988d2:{NFSU2_TR(0x5988d2);
__builtin_memmove((R+4),(R+24),4);
}
B5988d4:{NFSU2_TR(0x5988d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5988d9ull));
TAIL_STATIC(0x571640u,571);
}
B5988d9:L5988d9:{c.instructions+=7;NFSU2_TR(0x5988d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988db:{NFSU2_TR(0x5988db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988dd:{NFSU2_TR(0x5988dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988df:{NFSU2_TR(0x5988df);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5988e6:{NFSU2_TR(0x5988e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988e7:{NFSU2_TR(0x5988e7);
__builtin_memmove((R+4),(R+24),4);
}
B5988e9:{NFSU2_TR(0x5988e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5988eeull));
TAIL_STATIC(0x571640u,571);
}
B5988ee:L5988ee:{c.instructions+=7;NFSU2_TR(0x5988ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988f0:{NFSU2_TR(0x5988f0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988f2:{NFSU2_TR(0x5988f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988f4:{NFSU2_TR(0x5988f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5988f7:{NFSU2_TR(0x5988f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5988f8:{NFSU2_TR(0x5988f8);
__builtin_memmove((R+4),(R+24),4);
}
B5988fa:{NFSU2_TR(0x5988fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5988ffull));
TAIL_STATIC(0x571640u,571);
}
B5988ff:L5988ff:{c.instructions+=4;NFSU2_TR(0x5988ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598905:{NFSU2_TR(0x598905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598906:{NFSU2_TR(0x598906);
__builtin_memmove((R+4),(R+24),4);
}
B598908:{NFSU2_TR(0x598908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59890dull));
TAIL_STATIC(0x571770u,571);
}
B59890d:L59890d:{c.instructions+=7;NFSU2_TR(0x59890d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598911:{NFSU2_TR(0x598911);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598913:{NFSU2_TR(0x598913);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598915:{NFSU2_TR(0x598915);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598917:{NFSU2_TR(0x598917);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598918:{NFSU2_TR(0x598918);
__builtin_memmove((R+4),(R+24),4);
}
B59891a:{NFSU2_TR(0x59891a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59891full));
TAIL_STATIC(0x571640u,571);
}
B59891f:L59891f:{c.instructions+=10;NFSU2_TR(0x59891f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598923:{NFSU2_TR(0x598923);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598927:{NFSU2_TR(0x598927);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B598928:{NFSU2_TR(0x598928);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B59892b:{NFSU2_TR(0x59892b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B59892e:{NFSU2_TR(0x59892e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B598931:{NFSU2_TR(0x598931);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B598934:{NFSU2_TR(0x598934);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598938:{NFSU2_TR(0x598938);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59893c:{NFSU2_TR(0x59893c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598883u);}goto L598883;}}
}
B598942:L598942:{c.instructions+=4;NFSU2_TR(0x598942);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598948:{NFSU2_TR(0x598948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598949:{NFSU2_TR(0x598949);
__builtin_memmove((R+4),(R+24),4);
}
B59894b:{NFSU2_TR(0x59894b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598950ull));
TAIL_STATIC(0x571770u,571);
}
B598950:L598950:{c.instructions+=7;NFSU2_TR(0x598950);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598952:{NFSU2_TR(0x598952);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598954:{NFSU2_TR(0x598954);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598956:{NFSU2_TR(0x598956);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59895c:{NFSU2_TR(0x59895c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59895d:{NFSU2_TR(0x59895d);
__builtin_memmove((R+4),(R+24),4);
}
B59895f:{NFSU2_TR(0x59895f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598964ull));
TAIL_STATIC(0x571640u,571);
}
B598964:L598964:{c.instructions+=4;NFSU2_TR(0x598964);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59896a:{NFSU2_TR(0x59896a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59896b:{NFSU2_TR(0x59896b);
__builtin_memmove((R+4),(R+24),4);
}
B59896d:{NFSU2_TR(0x59896d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598972ull));
TAIL_STATIC(0x571770u,571);
}
B598972:L598972:{c.instructions+=4;NFSU2_TR(0x598972);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B598978:{NFSU2_TR(0x598978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598979:{NFSU2_TR(0x598979);
__builtin_memmove((R+4),(R+24),4);
}
B59897b:{NFSU2_TR(0x59897b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598980ull));
TAIL_STATIC(0x571770u,571);
}
B598980:L598980:{c.instructions+=4;NFSU2_TR(0x598980);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598986:{NFSU2_TR(0x598986);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598987:{NFSU2_TR(0x598987);
__builtin_memmove((R+4),(R+24),4);
}
B598989:{NFSU2_TR(0x598989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59898eull));
TAIL_STATIC(0x571710u,571);
}
B59898e:L59898e:{c.instructions+=7;NFSU2_TR(0x59898e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598990:{NFSU2_TR(0x598990);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598992:{NFSU2_TR(0x598992);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598994:{NFSU2_TR(0x598994);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59899a:{NFSU2_TR(0x59899a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59899b:{NFSU2_TR(0x59899b);
__builtin_memmove((R+4),(R+24),4);
}
B59899d:{NFSU2_TR(0x59899d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5989a2ull));
TAIL_STATIC(0x571640u,571);
}
B5989a2:L5989a2:{c.instructions+=4;NFSU2_TR(0x5989a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5989a8:{NFSU2_TR(0x5989a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989a9:{NFSU2_TR(0x5989a9);
__builtin_memmove((R+4),(R+24),4);
}
B5989ab:{NFSU2_TR(0x5989ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5989b0ull));
TAIL_STATIC(0x571770u,571);
}
B5989b0:L5989b0:{c.instructions+=4;NFSU2_TR(0x5989b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5989b6:{NFSU2_TR(0x5989b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989b7:{NFSU2_TR(0x5989b7);
__builtin_memmove((R+4),(R+24),4);
}
B5989b9:{NFSU2_TR(0x5989b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5989beull));
TAIL_STATIC(0x571770u,571);
}
B5989be:L5989be:{c.instructions+=4;NFSU2_TR(0x5989be);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5989c4:{NFSU2_TR(0x5989c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989c5:{NFSU2_TR(0x5989c5);
__builtin_memmove((R+4),(R+24),4);
}
B5989c7:{NFSU2_TR(0x5989c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5989ccull));
TAIL_STATIC(0x571770u,571);
}
B5989cc:L5989cc:{c.instructions+=7;NFSU2_TR(0x5989cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989ce:{NFSU2_TR(0x5989ce);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989d0:{NFSU2_TR(0x5989d0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989d2:{NFSU2_TR(0x5989d2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x198ull))));
}
B5989d8:{NFSU2_TR(0x5989d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5989d9:{NFSU2_TR(0x5989d9);
__builtin_memmove((R+4),(R+24),4);
}
B5989db:{NFSU2_TR(0x5989db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5989e0ull));
TAIL_STATIC(0x571640u,571);
}
B5989e0:L5989e0:{c.instructions+=2;NFSU2_TR(0x5989e0);
__builtin_memmove((R+4),(R+24),4);
}
B5989e2:{NFSU2_TR(0x5989e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5989e7ull));
TAIL_STATIC(0x578d90u,578);
}
B5989e7:L5989e7:{c.instructions+=6;NFSU2_TR(0x5989e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5989e8:{NFSU2_TR(0x5989e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5989e9:{NFSU2_TR(0x5989e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5989ea:{NFSU2_TR(0x5989ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5989eb:{NFSU2_TR(0x5989eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5989ec:{NFSU2_TR(0x5989ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5989f0:L5989f0:{c.instructions+=5;NFSU2_TR(0x5989f0);
__builtin_memmove((R+0),gp(0x7fc06c),4);
}
B5989f5:{NFSU2_TR(0x5989f5);
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
B5989f7:{NFSU2_TR(0x5989f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5989fa:{NFSU2_TR(0x5989fa);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a00:{NFSU2_TR(0x598a00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598a0a;}}
}
B598a02:L598a02:{c.instructions+=2;NFSU2_TR(0x598a02);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598a04:{NFSU2_TR(0x598a04);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a0a:L598a0a:{c.instructions+=25;NFSU2_TR(0x598a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598a0d:{NFSU2_TR(0x598a0d);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a10:{NFSU2_TR(0x598a10);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B598a12:{NFSU2_TR(0x598a12);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a18:{NFSU2_TR(0x598a18);
__asm__ volatile(".byte 0xde,0xe2":::"memory");
}
B598a1a:{NFSU2_TR(0x598a1a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598a1c:{NFSU2_TR(0x598a1c);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B598a1e:{NFSU2_TR(0x598a1e);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B598a20:{NFSU2_TR(0x598a20);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598a26:{NFSU2_TR(0x598a26);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B598a28:{NFSU2_TR(0x598a28);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a2e:{NFSU2_TR(0x598a2e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B598a30:{NFSU2_TR(0x598a30);
{u32 ea_=u32(r4(R+8)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a36:{NFSU2_TR(0x598a36);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598a3c:{NFSU2_TR(0x598a3c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598a40:{NFSU2_TR(0x598a40);
{u32 ea_=u32(r4(R+0)+u32(620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598a46:{NFSU2_TR(0x598a46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598a48:{NFSU2_TR(0x598a48);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B598a4c:{NFSU2_TR(0x598a4c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B598a4e:{NFSU2_TR(0x598a4e);
{u32 ea_=u32(r4(R+4)+u32(328u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B598a54:{NFSU2_TR(0x598a54);
{u32 ea_=u32(r4(R+4)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598a5a:{NFSU2_TR(0x598a5a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598a5e:{NFSU2_TR(0x598a5e);
{u32 ea_=u32(r4(R+4)+u32(336u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B598a64:{NFSU2_TR(0x598a64);
{u32 ea_=u32(r4(R+4)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598a6a:{NFSU2_TR(0x598a6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598a70:L598a70:{c.instructions+=12;NFSU2_TR(0x598a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598a74:{NFSU2_TR(0x598a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598a78:{NFSU2_TR(0x598a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598a7b:{NFSU2_TR(0x598a7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598a7f:{NFSU2_TR(0x598a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598a82:{NFSU2_TR(0x598a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598a86:{NFSU2_TR(0x598a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598a89:{NFSU2_TR(0x598a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598a8c:{NFSU2_TR(0x598a8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598a8f:{NFSU2_TR(0x598a8f);
w4(R+4,u32(0x4ull));
}
B598a94:{NFSU2_TR(0x598a94);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B598a96:{NFSU2_TR(0x598a96);
{goto L598aa0;}
}
B598aa0:L598aa0:{c.instructions+=5;NFSU2_TR(0x598aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598aa6:{NFSU2_TR(0x598aa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B598aa8:{NFSU2_TR(0x598aa8);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B598aab:{NFSU2_TR(0x598aab);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B598aac:{NFSU2_TR(0x598aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598aa0u);}goto L598aa0;}}
}
B598aae:L598aae:{c.instructions+=1;NFSU2_TR(0x598aae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598ac0:L598ac0:{c.instructions+=11;NFSU2_TR(0x598ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B598ac3:{NFSU2_TR(0x598ac3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598ac4:{NFSU2_TR(0x598ac4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598ac5:{NFSU2_TR(0x598ac5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598ac6:{NFSU2_TR(0x598ac6);
__builtin_memmove((R+24),(R+4),4);
}
B598ac8:{NFSU2_TR(0x598ac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598acb:{NFSU2_TR(0x598acb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598acc:{NFSU2_TR(0x598acc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B598ace:{NFSU2_TR(0x598ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598ad2:{NFSU2_TR(0x598ad2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598ad5:{NFSU2_TR(0x598ad5);
{goto L598ae0;}
}
B598ae0:L598ae0:{c.instructions+=6;NFSU2_TR(0x598ae0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B598ae3:{NFSU2_TR(0x598ae3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598ae9:{NFSU2_TR(0x598ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598aec:{NFSU2_TR(0x598aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598af2:{NFSU2_TR(0x598af2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598af6:{NFSU2_TR(0x598af6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L598b06;}}
}
B598af8:L598af8:{c.instructions+=3;NFSU2_TR(0x598af8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598afe:{NFSU2_TR(0x598afe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B598b02:{NFSU2_TR(0x598b02);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598b06:L598b06:{c.instructions+=3;NFSU2_TR(0x598b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598b0c:{NFSU2_TR(0x598b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B598b0e:{NFSU2_TR(0x598b0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598d15;}}
}
B598b14:L598b14:{c.instructions+=8;NFSU2_TR(0x598b14);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598b16:{NFSU2_TR(0x598b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598b1c:{NFSU2_TR(0x598b1c);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598b22:{NFSU2_TR(0x598b22);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B598b28:{NFSU2_TR(0x598b28);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598b2c:{NFSU2_TR(0x598b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B598b30:{NFSU2_TR(0x598b30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598b31:{NFSU2_TR(0x598b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598b36ull));
TAIL_STATIC(0x5764d0u,576);
}
B598b36:L598b36:{c.instructions+=5;NFSU2_TR(0x598b36);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598b3c:{NFSU2_TR(0x598b3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598b3d:{NFSU2_TR(0x598b3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B598b43:{NFSU2_TR(0x598b43);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598b47:{NFSU2_TR(0x598b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598b4cull));
TAIL_STATIC(0x5764d0u,576);
}
B598b4c:L598b4c:{c.instructions+=8;NFSU2_TR(0x598b4c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598b52:{NFSU2_TR(0x598b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598b58:{NFSU2_TR(0x598b58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B598b5a:{NFSU2_TR(0x598b5a);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B598b60:{NFSU2_TR(0x598b60);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B598b62:{NFSU2_TR(0x598b62);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B598b66:{NFSU2_TR(0x598b66);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B598b6a:{NFSU2_TR(0x598b6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L598b96;}}
}
B598b6c:L598b6c:{c.instructions+=6;NFSU2_TR(0x598b6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598b6e:{NFSU2_TR(0x598b6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598b6f:{NFSU2_TR(0x598b6f);
{u32 ea_=u32((r4(R+0)*4u)+u32(8001432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598b76:{NFSU2_TR(0x598b76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((R+4),(U+0),4);
}
B598b7c:{NFSU2_TR(0x598b7c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598b80:{NFSU2_TR(0x598b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598b85ull));
TAIL_STATIC(0x5764d0u,576);
}
B598b85:L598b85:{c.instructions+=4;NFSU2_TR(0x598b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598b88:{NFSU2_TR(0x598b88);
{u32 ea_=u32(r4(R+0)+u32(684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598b8e:{NFSU2_TR(0x598b8e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598b92:{NFSU2_TR(0x598b92);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598b96:L598b96:{c.instructions+=5;NFSU2_TR(0x598b96);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598b9c:{NFSU2_TR(0x598b9c);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598ba2:{NFSU2_TR(0x598ba2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598ba4:{NFSU2_TR(0x598ba4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B598ba7:{NFSU2_TR(0x598ba7);
if(r1(R+514)){{goto L598bc7;}}
}
B598ba9:L598ba9:{c.instructions+=6;NFSU2_TR(0x598ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598bac:{NFSU2_TR(0x598bac);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598bb2:{NFSU2_TR(0x598bb2);
{u32 ea_=u32(r4(R+4)+u32(496u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598bb8:{NFSU2_TR(0x598bb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598bba:{NFSU2_TR(0x598bba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B598bbd:{NFSU2_TR(0x598bbd);
if(r1(R+514)){{goto L598bc7;}}
}
B598bbf:L598bbf:{c.instructions+=2;NFSU2_TR(0x598bbf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598bc1:{NFSU2_TR(0x598bc1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598bc7:L598bc7:{c.instructions+=19;NFSU2_TR(0x598bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598bca:{NFSU2_TR(0x598bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598bd0:{NFSU2_TR(0x598bd0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B598bd2:{NFSU2_TR(0x598bd2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B598bd5:{NFSU2_TR(0x598bd5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B598bd8:{NFSU2_TR(0x598bd8);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598bdf:{NFSU2_TR(0x598bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B598be2:{NFSU2_TR(0x598be2);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598be9:{NFSU2_TR(0x598be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598bed:{NFSU2_TR(0x598bed);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B598bef:{NFSU2_TR(0x598bef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598bf3:{NFSU2_TR(0x598bf3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598bf9:{NFSU2_TR(0x598bf9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598bfd:{NFSU2_TR(0x598bfd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598bff:{NFSU2_TR(0x598bff);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c03:{NFSU2_TR(0x598c03);
{u32 ea_=u32(u32(8002912u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598c09:{NFSU2_TR(0x598c09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598c0b:{NFSU2_TR(0x598c0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B598c0e:{NFSU2_TR(0x598c0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598d45;}}
}
B598c14:L598c14:{c.instructions+=6;NFSU2_TR(0x598c14);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c18:{NFSU2_TR(0x598c18);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c1e:{NFSU2_TR(0x598c1e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598c22:{NFSU2_TR(0x598c22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598c24:{NFSU2_TR(0x598c24);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B598c27:{NFSU2_TR(0x598c27);
if(r1(R+514)){{goto L598c31;}}
}
B598c29:L598c29:{c.instructions+=2;NFSU2_TR(0x598c29);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598c2b:{NFSU2_TR(0x598c2b);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c31:L598c31:{c.instructions+=15;NFSU2_TR(0x598c31);
{u32 ea_=u32(u32(8001876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c37:{NFSU2_TR(0x598c37);
__builtin_memmove((R+0),gp(0x7a1980),4);
}
B598c3c:{NFSU2_TR(0x598c3c);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598c42:{NFSU2_TR(0x598c42);
__builtin_memmove((R+4),gp(0x7a195c),4);
}
B598c48:{NFSU2_TR(0x598c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598c4c:{NFSU2_TR(0x598c4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598c50:{NFSU2_TR(0x598c50);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B598c52:{NFSU2_TR(0x598c52);
{u32 ea_=u32(u32(7882476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598c58:{NFSU2_TR(0x598c58);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598c5c:{NFSU2_TR(0x598c5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598c5e:{NFSU2_TR(0x598c5e);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c64:{NFSU2_TR(0x598c64);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598c6a:{NFSU2_TR(0x598c6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598c6c:{NFSU2_TR(0x598c6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B598c6f:{NFSU2_TR(0x598c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598cab;}}
}
B598c71:L598c71:{c.instructions+=11;NFSU2_TR(0x598c71);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c77:{NFSU2_TR(0x598c77);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B598c7d:{NFSU2_TR(0x598c7d);
{u32 ea_=u32(u32(8001928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598c83:{NFSU2_TR(0x598c83);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B598c85:{NFSU2_TR(0x598c85);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598c8b:{NFSU2_TR(0x598c8b);
{u32 ea_=u32(u32(8001920u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598c91:{NFSU2_TR(0x598c91);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598c95:{NFSU2_TR(0x598c95);
{u32 ea_=u32(u32(8001932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598c9b:{NFSU2_TR(0x598c9b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598ca1:{NFSU2_TR(0x598ca1);
{u32 ea_=u32(u32(8001884u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598ca7:{NFSU2_TR(0x598ca7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598cab:L598cab:{c.instructions+=21;NFSU2_TR(0x598cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598cae:{NFSU2_TR(0x598cae);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598cb4:{NFSU2_TR(0x598cb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B598cb9:{NFSU2_TR(0x598cb9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598cbc:{NFSU2_TR(0x598cbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598cbd:{NFSU2_TR(0x598cbd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598cbf:{NFSU2_TR(0x598cbf);
w4(R+4,u32(0x86b578ull));
}
B598cc4:{NFSU2_TR(0x598cc4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B598cc6:{NFSU2_TR(0x598cc6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B598cc8:{NFSU2_TR(0x598cc8);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B598cca:{NFSU2_TR(0x598cca);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B598ccc:{NFSU2_TR(0x598ccc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598cce:{NFSU2_TR(0x598cce);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B598cd0:{NFSU2_TR(0x598cd0);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B598cd2:{NFSU2_TR(0x598cd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598cd4:{NFSU2_TR(0x598cd4);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B598cd6:{NFSU2_TR(0x598cd6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598cd8:{NFSU2_TR(0x598cd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B598cda:{NFSU2_TR(0x598cda);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B598cdc:{NFSU2_TR(0x598cdc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598cdf:{NFSU2_TR(0x598cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598ce4ull));
TAIL_STATIC(0x576790u,576);
}
B598ce4:L598ce4:{c.instructions+=5;NFSU2_TR(0x598ce4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598ce8:{NFSU2_TR(0x598ce8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B598cee:{NFSU2_TR(0x598cee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B598cf0:{NFSU2_TR(0x598cf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B598cf3:{NFSU2_TR(0x598cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L598cff;}}
}
B598cf5:L598cf5:{c.instructions+=3;NFSU2_TR(0x598cf5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598cf9:{NFSU2_TR(0x598cf9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598cfd:{NFSU2_TR(0x598cfd);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B598cff:L598cff:{c.instructions+=7;NFSU2_TR(0x598cff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598d03:{NFSU2_TR(0x598d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598d07:{NFSU2_TR(0x598d07);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598d0b:{NFSU2_TR(0x598d0b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598d0f:{NFSU2_TR(0x598d0f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598d11:{NFSU2_TR(0x598d11);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598d13:{NFSU2_TR(0x598d13);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B598d15:L598d15:{c.instructions+=10;NFSU2_TR(0x598d15);
{u32 ea_=u32(u32(8001916u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B598d1b:{NFSU2_TR(0x598d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598d1f:{NFSU2_TR(0x598d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598d23:{NFSU2_TR(0x598d23);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B598d24:{NFSU2_TR(0x598d24);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B598d27:{NFSU2_TR(0x598d27);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B598d2a:{NFSU2_TR(0x598d2a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B598d2d:{NFSU2_TR(0x598d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598d31:{NFSU2_TR(0x598d31);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598d35:{NFSU2_TR(0x598d35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598ae0u);}goto L598ae0;}}
}
B598d3b:L598d3b:{c.instructions+=6;NFSU2_TR(0x598d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598d3c:{NFSU2_TR(0x598d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598d3d:{NFSU2_TR(0x598d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598d3e:{NFSU2_TR(0x598d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598d3f:{NFSU2_TR(0x598d3f);
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
B598d42:{NFSU2_TR(0x598d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598d45:L598d45:{c.instructions+=2;NFSU2_TR(0x598d45);
{u32 ea_=u32(u32(8002912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598d4b:{NFSU2_TR(0x598d4b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598c31u);}goto L598c31;}
}
B598d50:L598d50:{c.instructions+=21;NFSU2_TR(0x598d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598d51:{NFSU2_TR(0x598d51);
__builtin_memmove((R+20),(R+16),4);
}
B598d53:{NFSU2_TR(0x598d53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B598d56:{NFSU2_TR(0x598d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B598d59:{NFSU2_TR(0x598d59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598d5a:{NFSU2_TR(0x598d5a);
__builtin_memmove((R+12),(R+4),4);
}
B598d5c:{NFSU2_TR(0x598d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598d5f:{NFSU2_TR(0x598d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598d62:{NFSU2_TR(0x598d62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598d63:{NFSU2_TR(0x598d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B598d66:{NFSU2_TR(0x598d66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598d67:{NFSU2_TR(0x598d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B598d6a:{NFSU2_TR(0x598d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598d6e:{NFSU2_TR(0x598d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B598d74:{NFSU2_TR(0x598d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598d7a:{NFSU2_TR(0x598d7a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B598d7d:{NFSU2_TR(0x598d7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B598d85:{NFSU2_TR(0x598d85);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598d89:{NFSU2_TR(0x598d89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598d8d:{NFSU2_TR(0x598d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598d91:{NFSU2_TR(0x598d91);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B598d94:L598d94:{c.instructions+=74;NFSU2_TR(0x598d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598d97:{NFSU2_TR(0x598d97);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598d9d:{NFSU2_TR(0x598d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598da0:{NFSU2_TR(0x598da0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B598da2:{NFSU2_TR(0x598da2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598da6:{NFSU2_TR(0x598da6);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598dac:{NFSU2_TR(0x598dac);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B598db0:{NFSU2_TR(0x598db0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B598db2:{NFSU2_TR(0x598db2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598db6:{NFSU2_TR(0x598db6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598db8:{NFSU2_TR(0x598db8);
{u32 ea_=u32(r4(R+0)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598dbe:{NFSU2_TR(0x598dbe);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B598dc0:{NFSU2_TR(0x598dc0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598dc4:{NFSU2_TR(0x598dc4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598dc6:{NFSU2_TR(0x598dc6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598dc9:{NFSU2_TR(0x598dc9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598dcd:{NFSU2_TR(0x598dcd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598dd0:{NFSU2_TR(0x598dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598dd4:{NFSU2_TR(0x598dd4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598dd8:{NFSU2_TR(0x598dd8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598ddc:{NFSU2_TR(0x598ddc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598dde:{NFSU2_TR(0x598dde);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598de2:{NFSU2_TR(0x598de2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598de6:{NFSU2_TR(0x598de6);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B598de9:{NFSU2_TR(0x598de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598ded:{NFSU2_TR(0x598ded);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598dee:{NFSU2_TR(0x598dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598df2:{NFSU2_TR(0x598df2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598df6:{NFSU2_TR(0x598df6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598df8:{NFSU2_TR(0x598df8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B598dfa:{NFSU2_TR(0x598dfa);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598dfd:{NFSU2_TR(0x598dfd);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e01:{NFSU2_TR(0x598e01);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e04:{NFSU2_TR(0x598e04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598e06:{NFSU2_TR(0x598e06);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e0a:{NFSU2_TR(0x598e0a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e0d:{NFSU2_TR(0x598e0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598e0f:{NFSU2_TR(0x598e0f);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e12:{NFSU2_TR(0x598e12);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B598e14:{NFSU2_TR(0x598e14);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e17:{NFSU2_TR(0x598e17);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e1b:{NFSU2_TR(0x598e1b);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e1e:{NFSU2_TR(0x598e1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598e20:{NFSU2_TR(0x598e20);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e24:{NFSU2_TR(0x598e24);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e27:{NFSU2_TR(0x598e27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598e29:{NFSU2_TR(0x598e29);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e2c:{NFSU2_TR(0x598e2c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B598e2e:{NFSU2_TR(0x598e2e);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e31:{NFSU2_TR(0x598e31);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e35:{NFSU2_TR(0x598e35);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e38:{NFSU2_TR(0x598e38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598e3a:{NFSU2_TR(0x598e3a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e3e:{NFSU2_TR(0x598e3e);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B598e41:{NFSU2_TR(0x598e41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B598e43:{NFSU2_TR(0x598e43);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e46:{NFSU2_TR(0x598e46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598e49:{NFSU2_TR(0x598e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598e4a:{NFSU2_TR(0x598e4a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e4e:{NFSU2_TR(0x598e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598e52:{NFSU2_TR(0x598e52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B598e54:{NFSU2_TR(0x598e54);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e56:{NFSU2_TR(0x598e56);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e59:{NFSU2_TR(0x598e59);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e5c:{NFSU2_TR(0x598e5c);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e5f:{NFSU2_TR(0x598e5f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B598e61:{NFSU2_TR(0x598e61);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e63:{NFSU2_TR(0x598e63);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e65:{NFSU2_TR(0x598e65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B598e67:{NFSU2_TR(0x598e67);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e6a:{NFSU2_TR(0x598e6a);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e6d:{NFSU2_TR(0x598e6d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e6f:{NFSU2_TR(0x598e6f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e71:{NFSU2_TR(0x598e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598e76ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B598e76:L598e76:{c.instructions+=16;NFSU2_TR(0x598e76);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598e7a:{NFSU2_TR(0x598e7a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B598e7c:{NFSU2_TR(0x598e7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598e80:{NFSU2_TR(0x598e80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598e84:{NFSU2_TR(0x598e84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B598e87:{NFSU2_TR(0x598e87);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B598e89:{NFSU2_TR(0x598e89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B598e8e:{NFSU2_TR(0x598e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B598e92:{NFSU2_TR(0x598e92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B598e95:{NFSU2_TR(0x598e95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B598e98:{NFSU2_TR(0x598e98);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B598e9b:{NFSU2_TR(0x598e9b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B598ea0:{NFSU2_TR(0x598ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598ea4:{NFSU2_TR(0x598ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598ea8:{NFSU2_TR(0x598ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598eac:{NFSU2_TR(0x598eac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x598d94u);}goto L598d94;}}
}
B598eb2:L598eb2:{c.instructions+=6;NFSU2_TR(0x598eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B598eb3:{NFSU2_TR(0x598eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B598eb4:{NFSU2_TR(0x598eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B598eb5:{NFSU2_TR(0x598eb5);
__builtin_memmove((R+16),(R+20),4);
}
B598eb7:{NFSU2_TR(0x598eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B598eb8:{NFSU2_TR(0x598eb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598ec0:L598ec0:{c.instructions+=1;NFSU2_TR(0x598ec0);
TAIL_STATIC(0x440540u,440);
}
B598ed0:L598ed0:{c.instructions+=4;NFSU2_TR(0x598ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598ed3:{NFSU2_TR(0x598ed3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598ed7:{NFSU2_TR(0x598ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598edd:{NFSU2_TR(0x598edd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598ee0:L598ee0:{c.instructions+=4;NFSU2_TR(0x598ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598ee3:{NFSU2_TR(0x598ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B598ee7:{NFSU2_TR(0x598ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B598eed:{NFSU2_TR(0x598eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598ef0:L598ef0:{c.instructions+=5;NFSU2_TR(0x598ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B598ef4:{NFSU2_TR(0x598ef4);
__builtin_memmove((R+4),gp(0x86b2f8),4);
}
B598efa:{NFSU2_TR(0x598efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598efb:{NFSU2_TR(0x598efb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598efc:{NFSU2_TR(0x598efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598f01ull));
TAIL_STATIC(0x43f920u,43f);
}
B598f01:L598f01:{c.instructions+=2;NFSU2_TR(0x598f01);
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
B598f04:{NFSU2_TR(0x598f04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B598f10:L598f10:{c.instructions+=9;NFSU2_TR(0x598f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f11:{NFSU2_TR(0x598f11);
__builtin_memmove((R+24),gp(0x89e814),4);
}
B598f17:{NFSU2_TR(0x598f17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f18:{NFSU2_TR(0x598f18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f1a:{NFSU2_TR(0x598f1a);
u8 U[4];
w4(U+0,u32(0x7a1e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f1f:{NFSU2_TR(0x598f1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B598f22:{NFSU2_TR(0x598f22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f23:{NFSU2_TR(0x598f23);
u8 U[4];
w4(U+0,u32(0x210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f28:{NFSU2_TR(0x598f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598f2dull));
TAIL_STATIC(0x440df0u,440);
}
B598f2d:L598f2d:{c.instructions+=6;NFSU2_TR(0x598f2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f2f:{NFSU2_TR(0x598f2f);
u8 U[4];
w4(U+0,u32(0x7a1e14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f34:{NFSU2_TR(0x598f34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f35:{NFSU2_TR(0x598f35);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f3a:{NFSU2_TR(0x598f3a);
__builtin_memmove(gp(0x86b2e0),(R+0),4);
}
B598f3f:{NFSU2_TR(0x598f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598f44ull));
TAIL_STATIC(0x440df0u,440);
}
B598f44:L598f44:{c.instructions+=7;NFSU2_TR(0x598f44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f46:{NFSU2_TR(0x598f46);
u8 U[4];
w4(U+0,u32(0x7a1e04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f4b:{NFSU2_TR(0x598f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B598f52:{NFSU2_TR(0x598f52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f53:{NFSU2_TR(0x598f53);
u8 U[4];
w4(U+0,u32(0x1a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f58:{NFSU2_TR(0x598f58);
__builtin_memmove(gp(0x86b2e4),(R+0),4);
}
B598f5d:{NFSU2_TR(0x598f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598f62ull));
TAIL_STATIC(0x440df0u,440);
}
B598f62:L598f62:{c.instructions+=6;NFSU2_TR(0x598f62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f64:{NFSU2_TR(0x598f64);
u8 U[4];
w4(U+0,u32(0x7a1df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f69:{NFSU2_TR(0x598f69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f6a:{NFSU2_TR(0x598f6a);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f6f:{NFSU2_TR(0x598f6f);
__builtin_memmove(gp(0x86b2e8),(R+0),4);
}
B598f74:{NFSU2_TR(0x598f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598f79ull));
TAIL_STATIC(0x440df0u,440);
}
B598f79:L598f79:{c.instructions+=7;NFSU2_TR(0x598f79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B598f7c:{NFSU2_TR(0x598f7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f7e:{NFSU2_TR(0x598f7e);
u8 U[4];
w4(U+0,u32(0x7a1de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f83:{NFSU2_TR(0x598f83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f84:{NFSU2_TR(0x598f84);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f89:{NFSU2_TR(0x598f89);
__builtin_memmove(gp(0x86b2ec),(R+0),4);
}
B598f8e:{NFSU2_TR(0x598f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598f93ull));
TAIL_STATIC(0x440df0u,440);
}
B598f93:L598f93:{c.instructions+=6;NFSU2_TR(0x598f93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f95:{NFSU2_TR(0x598f95);
u8 U[4];
w4(U+0,u32(0x7a1dc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f9a:{NFSU2_TR(0x598f9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f9b:{NFSU2_TR(0x598f9b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598f9d:{NFSU2_TR(0x598f9d);
__builtin_memmove(gp(0x86b2f0),(R+0),4);
}
B598fa2:{NFSU2_TR(0x598fa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598fa7ull));
TAIL_STATIC(0x440df0u,440);
}
B598fa7:L598fa7:{c.instructions+=6;NFSU2_TR(0x598fa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fa9:{NFSU2_TR(0x598fa9);
u8 U[4];
w4(U+0,u32(0x7a1db4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fae:{NFSU2_TR(0x598fae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598faf:{NFSU2_TR(0x598faf);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fb4:{NFSU2_TR(0x598fb4);
__builtin_memmove(gp(0x86b2f4),(R+0),4);
}
B598fb9:{NFSU2_TR(0x598fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598fbeull));
TAIL_STATIC(0x440df0u,440);
}
B598fbe:L598fbe:{c.instructions+=6;NFSU2_TR(0x598fbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fc0:{NFSU2_TR(0x598fc0);
u8 U[4];
w4(U+0,u32(0x7a1da0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fc5:{NFSU2_TR(0x598fc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fc6:{NFSU2_TR(0x598fc6);
u8 U[4];
w4(U+0,u32(0x250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fcb:{NFSU2_TR(0x598fcb);
__builtin_memmove(gp(0x86b2f8),(R+0),4);
}
B598fd0:{NFSU2_TR(0x598fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598fd5ull));
TAIL_STATIC(0x440df0u,440);
}
B598fd5:L598fd5:{c.instructions+=7;NFSU2_TR(0x598fd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B598fd8:{NFSU2_TR(0x598fd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fda:{NFSU2_TR(0x598fda);
u8 U[4];
w4(U+0,u32(0x7a1d8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fdf:{NFSU2_TR(0x598fdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fe0:{NFSU2_TR(0x598fe0);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fe2:{NFSU2_TR(0x598fe2);
__builtin_memmove(gp(0x86b2fc),(R+0),4);
}
B598fe7:{NFSU2_TR(0x598fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x598fecull));
TAIL_STATIC(0x440df0u,440);
}
B598fec:L598fec:{c.instructions+=6;NFSU2_TR(0x598fec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598fee:{NFSU2_TR(0x598fee);
u8 U[4];
w4(U+0,u32(0x7a1d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598ff3:{NFSU2_TR(0x598ff3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598ff4:{NFSU2_TR(0x598ff4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B598ff6:{NFSU2_TR(0x598ff6);
__builtin_memmove(gp(0x86b300),(R+0),4);
}
B598ffb:{NFSU2_TR(0x598ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599000ull));
TAIL_STATIC(0x440df0u,440);
}
XIT:NFSU2_TR_EXIT(0x598,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
