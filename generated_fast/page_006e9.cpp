#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e8(u8* __restrict R,Cpu& c);
u32 body_6ea(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e9(u8* __restrict R,Cpu& c);
u32 page_6e9(Cpu& c){return body_6e9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e9003:goto L6e9003;
case 0x6e9006:c.instructions+=30;goto B6e9006;
case 0x6e9009:c.instructions+=29;goto B6e9009;
case 0x6e900d:c.instructions+=28;goto B6e900d;
case 0x6e9010:c.instructions+=27;goto B6e9010;
case 0x6e9013:c.instructions+=26;goto B6e9013;
case 0x6e9016:c.instructions+=25;goto B6e9016;
case 0x6e9018:c.instructions+=24;goto B6e9018;
case 0x6e901c:c.instructions+=23;goto B6e901c;
case 0x6e901e:c.instructions+=22;goto B6e901e;
case 0x6e9020:c.instructions+=21;goto B6e9020;
case 0x6e9022:c.instructions+=20;goto B6e9022;
case 0x6e9026:c.instructions+=19;goto B6e9026;
case 0x6e9029:c.instructions+=18;goto B6e9029;
case 0x6e902d:c.instructions+=17;goto B6e902d;
case 0x6e9031:c.instructions+=16;goto B6e9031;
case 0x6e9033:c.instructions+=15;goto B6e9033;
case 0x6e9037:c.instructions+=14;goto B6e9037;
case 0x6e903a:c.instructions+=13;goto B6e903a;
case 0x6e903e:c.instructions+=12;goto B6e903e;
case 0x6e9042:c.instructions+=11;goto B6e9042;
case 0x6e9046:c.instructions+=10;goto B6e9046;
case 0x6e9048:c.instructions+=9;goto B6e9048;
case 0x6e904c:c.instructions+=8;goto B6e904c;
case 0x6e9050:c.instructions+=7;goto B6e9050;
case 0x6e9051:c.instructions+=6;goto B6e9051;
case 0x6e9054:c.instructions+=5;goto B6e9054;
case 0x6e9057:c.instructions+=4;goto B6e9057;
case 0x6e905a:c.instructions+=3;goto B6e905a;
case 0x6e905c:c.instructions+=2;goto B6e905c;
case 0x6e9060:c.instructions+=1;goto B6e9060;
case 0x6e9066:goto L6e9066;
case 0x6e906a:c.instructions+=7;goto B6e906a;
case 0x6e906e:c.instructions+=6;goto B6e906e;
case 0x6e9072:c.instructions+=5;goto B6e9072;
case 0x6e9074:c.instructions+=4;goto B6e9074;
case 0x6e9075:c.instructions+=3;goto B6e9075;
case 0x6e9079:c.instructions+=2;goto B6e9079;
case 0x6e907d:c.instructions+=1;goto B6e907d;
case 0x6e9083:goto L6e9083;
case 0x6e9088:goto L6e9088;
case 0x6e908e:goto L6e908e;
case 0x6e9092:c.instructions+=9;goto B6e9092;
case 0x6e9096:c.instructions+=8;goto B6e9096;
case 0x6e9099:c.instructions+=7;goto B6e9099;
case 0x6e909c:c.instructions+=6;goto B6e909c;
case 0x6e909f:c.instructions+=5;goto B6e909f;
case 0x6e90a1:c.instructions+=4;goto B6e90a1;
case 0x6e90a5:c.instructions+=3;goto B6e90a5;
case 0x6e90a6:c.instructions+=2;goto B6e90a6;
case 0x6e90a8:c.instructions+=1;goto B6e90a8;
case 0x6e90ae:goto L6e90ae;
case 0x6e90b0:c.instructions+=6;goto B6e90b0;
case 0x6e90b3:c.instructions+=5;goto B6e90b3;
case 0x6e90b5:c.instructions+=4;goto B6e90b5;
case 0x6e90b6:c.instructions+=3;goto B6e90b6;
case 0x6e90ba:c.instructions+=2;goto B6e90ba;
case 0x6e90be:c.instructions+=1;goto B6e90be;
case 0x6e90c0:goto L6e90c0;
case 0x6e90c2:c.instructions+=2;goto B6e90c2;
case 0x6e90c4:c.instructions+=1;goto B6e90c4;
case 0x6e90ca:goto L6e90ca;
case 0x6e90cc:c.instructions+=2;goto B6e90cc;
case 0x6e90d0:c.instructions+=1;goto B6e90d0;
case 0x6e90d2:goto L6e90d2;
case 0x6e90d7:c.instructions+=8;goto B6e90d7;
case 0x6e90d9:c.instructions+=7;goto B6e90d9;
case 0x6e90dc:c.instructions+=6;goto B6e90dc;
case 0x6e90e1:c.instructions+=5;goto B6e90e1;
case 0x6e90e3:c.instructions+=4;goto B6e90e3;
case 0x6e90ea:c.instructions+=3;goto B6e90ea;
case 0x6e90ed:c.instructions+=2;goto B6e90ed;
case 0x6e90f0:c.instructions+=1;goto B6e90f0;
case 0x6e90f2:goto L6e90f2;
case 0x6e90f6:c.instructions+=37;goto B6e90f6;
case 0x6e90f9:c.instructions+=36;goto B6e90f9;
case 0x6e90fd:c.instructions+=35;goto B6e90fd;
case 0x6e9101:c.instructions+=34;goto B6e9101;
case 0x6e9105:c.instructions+=33;goto B6e9105;
case 0x6e9109:c.instructions+=32;goto B6e9109;
case 0x6e910d:c.instructions+=31;goto B6e910d;
case 0x6e9111:c.instructions+=30;goto B6e9111;
case 0x6e9114:c.instructions+=29;goto B6e9114;
case 0x6e9117:c.instructions+=28;goto B6e9117;
case 0x6e911a:c.instructions+=27;goto B6e911a;
case 0x6e911e:c.instructions+=26;goto B6e911e;
case 0x6e9122:c.instructions+=25;goto B6e9122;
case 0x6e9125:c.instructions+=24;goto B6e9125;
case 0x6e9128:c.instructions+=23;goto B6e9128;
case 0x6e912c:c.instructions+=22;goto B6e912c;
case 0x6e912f:c.instructions+=21;goto B6e912f;
case 0x6e9132:c.instructions+=20;goto B6e9132;
case 0x6e9135:c.instructions+=19;goto B6e9135;
case 0x6e9137:c.instructions+=18;goto B6e9137;
case 0x6e913b:c.instructions+=17;goto B6e913b;
case 0x6e913d:c.instructions+=16;goto B6e913d;
case 0x6e913f:c.instructions+=15;goto B6e913f;
case 0x6e9141:c.instructions+=14;goto B6e9141;
case 0x6e9145:c.instructions+=13;goto B6e9145;
case 0x6e9148:c.instructions+=12;goto B6e9148;
case 0x6e914c:c.instructions+=11;goto B6e914c;
case 0x6e9150:c.instructions+=10;goto B6e9150;
case 0x6e9152:c.instructions+=9;goto B6e9152;
case 0x6e9154:c.instructions+=8;goto B6e9154;
case 0x6e9158:c.instructions+=7;goto B6e9158;
case 0x6e915b:c.instructions+=6;goto B6e915b;
case 0x6e915d:c.instructions+=5;goto B6e915d;
case 0x6e9161:c.instructions+=4;goto B6e9161;
case 0x6e9163:c.instructions+=3;goto B6e9163;
case 0x6e9165:c.instructions+=2;goto B6e9165;
case 0x6e9169:c.instructions+=1;goto B6e9169;
case 0x6e916b:goto L6e916b;
case 0x6e916f:c.instructions+=8;goto B6e916f;
case 0x6e9173:c.instructions+=7;goto B6e9173;
case 0x6e9174:c.instructions+=6;goto B6e9174;
case 0x6e9177:c.instructions+=5;goto B6e9177;
case 0x6e917a:c.instructions+=4;goto B6e917a;
case 0x6e917d:c.instructions+=3;goto B6e917d;
case 0x6e917f:c.instructions+=2;goto B6e917f;
case 0x6e9183:c.instructions+=1;goto B6e9183;
case 0x6e9189:goto L6e9189;
case 0x6e918d:c.instructions+=7;goto B6e918d;
case 0x6e9191:c.instructions+=6;goto B6e9191;
case 0x6e9195:c.instructions+=5;goto B6e9195;
case 0x6e9197:c.instructions+=4;goto B6e9197;
case 0x6e9198:c.instructions+=3;goto B6e9198;
case 0x6e919c:c.instructions+=2;goto B6e919c;
case 0x6e91a0:c.instructions+=1;goto B6e91a0;
case 0x6e91a6:goto L6e91a6;
case 0x6e91aa:c.instructions+=8;goto B6e91aa;
case 0x6e91ae:c.instructions+=7;goto B6e91ae;
case 0x6e91b1:c.instructions+=6;goto B6e91b1;
case 0x6e91b4:c.instructions+=5;goto B6e91b4;
case 0x6e91b6:c.instructions+=4;goto B6e91b6;
case 0x6e91b9:c.instructions+=3;goto B6e91b9;
case 0x6e91bd:c.instructions+=2;goto B6e91bd;
case 0x6e91c5:c.instructions+=1;goto B6e91c5;
case 0x6e91c7:goto L6e91c7;
case 0x6e91cb:c.instructions+=5;goto B6e91cb;
case 0x6e91d2:c.instructions+=4;goto B6e91d2;
case 0x6e91d4:c.instructions+=3;goto B6e91d4;
case 0x6e91d6:c.instructions+=2;goto B6e91d6;
case 0x6e91d9:c.instructions+=1;goto B6e91d9;
case 0x6e91df:goto L6e91df;
case 0x6e91e6:c.instructions+=3;goto B6e91e6;
case 0x6e91e8:c.instructions+=2;goto B6e91e8;
case 0x6e91ea:c.instructions+=1;goto B6e91ea;
case 0x6e91ec:goto L6e91ec;
case 0x6e91ee:c.instructions+=1;goto B6e91ee;
case 0x6e91f0:goto L6e91f0;
case 0x6e91f7:c.instructions+=4;goto B6e91f7;
case 0x6e91fd:c.instructions+=3;goto B6e91fd;
case 0x6e91ff:c.instructions+=2;goto B6e91ff;
case 0x6e9202:c.instructions+=1;goto B6e9202;
case 0x6e9204:goto L6e9204;
case 0x6e9207:c.instructions+=6;goto B6e9207;
case 0x6e920b:c.instructions+=5;goto B6e920b;
case 0x6e920d:c.instructions+=4;goto B6e920d;
case 0x6e9211:c.instructions+=3;goto B6e9211;
case 0x6e9218:c.instructions+=2;goto B6e9218;
case 0x6e921c:c.instructions+=1;goto B6e921c;
case 0x6e921e:goto L6e921e;
case 0x6e9220:c.instructions+=1;goto B6e9220;
case 0x6e9222:goto L6e9222;
case 0x6e9227:c.instructions+=7;goto B6e9227;
case 0x6e922b:c.instructions+=6;goto B6e922b;
case 0x6e922f:c.instructions+=5;goto B6e922f;
case 0x6e9236:c.instructions+=4;goto B6e9236;
case 0x6e9238:c.instructions+=3;goto B6e9238;
case 0x6e923a:c.instructions+=2;goto B6e923a;
case 0x6e923d:c.instructions+=1;goto B6e923d;
case 0x6e9243:goto L6e9243;
case 0x6e9247:c.instructions+=7;goto B6e9247;
case 0x6e924e:c.instructions+=6;goto B6e924e;
case 0x6e9250:c.instructions+=5;goto B6e9250;
case 0x6e9254:c.instructions+=4;goto B6e9254;
case 0x6e9256:c.instructions+=3;goto B6e9256;
case 0x6e925a:c.instructions+=2;goto B6e925a;
case 0x6e925c:c.instructions+=1;goto B6e925c;
case 0x6e925e:goto L6e925e;
case 0x6e9262:goto L6e9262;
case 0x6e9264:goto L6e9264;
case 0x6e9266:c.instructions+=2;goto B6e9266;
case 0x6e9269:c.instructions+=1;goto B6e9269;
case 0x6e926f:goto L6e926f;
case 0x6e9273:c.instructions+=3;goto B6e9273;
case 0x6e9274:c.instructions+=2;goto B6e9274;
case 0x6e9276:c.instructions+=1;goto B6e9276;
case 0x6e927c:goto L6e927c;
case 0x6e9280:c.instructions+=18;goto B6e9280;
case 0x6e9284:c.instructions+=17;goto B6e9284;
case 0x6e9286:c.instructions+=16;goto B6e9286;
case 0x6e9289:c.instructions+=15;goto B6e9289;
case 0x6e928e:c.instructions+=14;goto B6e928e;
case 0x6e9290:c.instructions+=13;goto B6e9290;
case 0x6e9292:c.instructions+=12;goto B6e9292;
case 0x6e9293:c.instructions+=11;goto B6e9293;
case 0x6e9296:c.instructions+=10;goto B6e9296;
case 0x6e929a:c.instructions+=9;goto B6e929a;
case 0x6e929d:c.instructions+=8;goto B6e929d;
case 0x6e92a0:c.instructions+=7;goto B6e92a0;
case 0x6e92a2:c.instructions+=6;goto B6e92a2;
case 0x6e92a5:c.instructions+=5;goto B6e92a5;
case 0x6e92a9:c.instructions+=4;goto B6e92a9;
case 0x6e92ad:c.instructions+=3;goto B6e92ad;
case 0x6e92b1:c.instructions+=2;goto B6e92b1;
case 0x6e92b4:c.instructions+=1;goto B6e92b4;
case 0x6e92ba:goto L6e92ba;
case 0x6e92bc:c.instructions+=3;goto B6e92bc;
case 0x6e92be:c.instructions+=2;goto B6e92be;
case 0x6e92c2:c.instructions+=1;goto B6e92c2;
case 0x6e92c8:goto L6e92c8;
case 0x6e92ca:c.instructions+=1;goto B6e92ca;
case 0x6e92d0:goto L6e92d0;
case 0x6e92d5:c.instructions+=8;goto B6e92d5;
case 0x6e92d7:c.instructions+=7;goto B6e92d7;
case 0x6e92da:c.instructions+=6;goto B6e92da;
case 0x6e92df:c.instructions+=5;goto B6e92df;
case 0x6e92e1:c.instructions+=4;goto B6e92e1;
case 0x6e92e8:c.instructions+=3;goto B6e92e8;
case 0x6e92eb:c.instructions+=2;goto B6e92eb;
case 0x6e92ee:c.instructions+=1;goto B6e92ee;
case 0x6e92f0:goto L6e92f0;
case 0x6e92f3:c.instructions+=32;goto B6e92f3;
case 0x6e92f6:c.instructions+=31;goto B6e92f6;
case 0x6e92f9:c.instructions+=30;goto B6e92f9;
case 0x6e92fc:c.instructions+=29;goto B6e92fc;
case 0x6e9303:c.instructions+=28;goto B6e9303;
case 0x6e9305:c.instructions+=27;goto B6e9305;
case 0x6e9309:c.instructions+=26;goto B6e9309;
case 0x6e930b:c.instructions+=25;goto B6e930b;
case 0x6e930e:c.instructions+=24;goto B6e930e;
case 0x6e9311:c.instructions+=23;goto B6e9311;
case 0x6e9315:c.instructions+=22;goto B6e9315;
case 0x6e9318:c.instructions+=21;goto B6e9318;
case 0x6e931b:c.instructions+=20;goto B6e931b;
case 0x6e931f:c.instructions+=19;goto B6e931f;
case 0x6e9326:c.instructions+=18;goto B6e9326;
case 0x6e932a:c.instructions+=17;goto B6e932a;
case 0x6e932e:c.instructions+=16;goto B6e932e;
case 0x6e9332:c.instructions+=15;goto B6e9332;
case 0x6e9334:c.instructions+=14;goto B6e9334;
case 0x6e9337:c.instructions+=13;goto B6e9337;
case 0x6e933b:c.instructions+=12;goto B6e933b;
case 0x6e933f:c.instructions+=11;goto B6e933f;
case 0x6e9342:c.instructions+=10;goto B6e9342;
case 0x6e9345:c.instructions+=9;goto B6e9345;
case 0x6e9349:c.instructions+=8;goto B6e9349;
case 0x6e9350:c.instructions+=7;goto B6e9350;
case 0x6e9354:c.instructions+=6;goto B6e9354;
case 0x6e9358:c.instructions+=5;goto B6e9358;
case 0x6e935c:c.instructions+=4;goto B6e935c;
case 0x6e935e:c.instructions+=3;goto B6e935e;
case 0x6e9361:c.instructions+=2;goto B6e9361;
case 0x6e9365:c.instructions+=1;goto B6e9365;
case 0x6e9369:goto L6e9369;
case 0x6e936d:c.instructions+=7;goto B6e936d;
case 0x6e9371:c.instructions+=6;goto B6e9371;
case 0x6e9374:c.instructions+=5;goto B6e9374;
case 0x6e9375:c.instructions+=4;goto B6e9375;
case 0x6e9378:c.instructions+=3;goto B6e9378;
case 0x6e937a:c.instructions+=2;goto B6e937a;
case 0x6e937e:c.instructions+=1;goto B6e937e;
case 0x6e9384:goto L6e9384;
case 0x6e9389:goto L6e9389;
case 0x6e938b:c.instructions+=1;goto B6e938b;
case 0x6e9390:goto L6e9390;
case 0x6e9394:c.instructions+=1;goto B6e9394;
case 0x6e939a:goto L6e939a;
case 0x6e939c:c.instructions+=3;goto B6e939c;
case 0x6e939e:c.instructions+=2;goto B6e939e;
case 0x6e93a2:c.instructions+=1;goto B6e93a2;
case 0x6e93a8:goto L6e93a8;
case 0x6e93aa:c.instructions+=2;goto B6e93aa;
case 0x6e93ad:c.instructions+=1;goto B6e93ad;
case 0x6e93b1:goto L6e93b1;
case 0x6e93b6:c.instructions+=8;goto B6e93b6;
case 0x6e93b8:c.instructions+=7;goto B6e93b8;
case 0x6e93bb:c.instructions+=6;goto B6e93bb;
case 0x6e93c0:c.instructions+=5;goto B6e93c0;
case 0x6e93c2:c.instructions+=4;goto B6e93c2;
case 0x6e93c9:c.instructions+=3;goto B6e93c9;
case 0x6e93cc:c.instructions+=2;goto B6e93cc;
case 0x6e93cf:c.instructions+=1;goto B6e93cf;
case 0x6e93d5:goto L6e93d5;
case 0x6e93d8:c.instructions+=58;goto B6e93d8;
case 0x6e93db:c.instructions+=57;goto B6e93db;
case 0x6e93df:c.instructions+=56;goto B6e93df;
case 0x6e93e3:c.instructions+=55;goto B6e93e3;
case 0x6e93e7:c.instructions+=54;goto B6e93e7;
case 0x6e93e9:c.instructions+=53;goto B6e93e9;
case 0x6e93ed:c.instructions+=52;goto B6e93ed;
case 0x6e93f0:c.instructions+=51;goto B6e93f0;
case 0x6e93f2:c.instructions+=50;goto B6e93f2;
case 0x6e93f4:c.instructions+=49;goto B6e93f4;
case 0x6e93f8:c.instructions+=48;goto B6e93f8;
case 0x6e93fc:c.instructions+=47;goto B6e93fc;
case 0x6e9400:c.instructions+=46;goto B6e9400;
case 0x6e9403:c.instructions+=45;goto B6e9403;
case 0x6e9406:c.instructions+=44;goto B6e9406;
case 0x6e9409:c.instructions+=43;goto B6e9409;
case 0x6e940c:c.instructions+=42;goto B6e940c;
case 0x6e9410:c.instructions+=41;goto B6e9410;
case 0x6e9414:c.instructions+=40;goto B6e9414;
case 0x6e9417:c.instructions+=39;goto B6e9417;
case 0x6e941a:c.instructions+=38;goto B6e941a;
case 0x6e941d:c.instructions+=37;goto B6e941d;
case 0x6e9421:c.instructions+=36;goto B6e9421;
case 0x6e9425:c.instructions+=35;goto B6e9425;
case 0x6e9428:c.instructions+=34;goto B6e9428;
case 0x6e942c:c.instructions+=33;goto B6e942c;
case 0x6e942f:c.instructions+=32;goto B6e942f;
case 0x6e9432:c.instructions+=31;goto B6e9432;
case 0x6e9435:c.instructions+=30;goto B6e9435;
case 0x6e943c:c.instructions+=29;goto B6e943c;
case 0x6e943f:c.instructions+=28;goto B6e943f;
case 0x6e9441:c.instructions+=27;goto B6e9441;
case 0x6e9445:c.instructions+=26;goto B6e9445;
case 0x6e9447:c.instructions+=25;goto B6e9447;
case 0x6e944a:c.instructions+=24;goto B6e944a;
case 0x6e944d:c.instructions+=23;goto B6e944d;
case 0x6e9451:c.instructions+=22;goto B6e9451;
case 0x6e9454:c.instructions+=21;goto B6e9454;
case 0x6e9457:c.instructions+=20;goto B6e9457;
case 0x6e945b:c.instructions+=19;goto B6e945b;
case 0x6e9462:c.instructions+=18;goto B6e9462;
case 0x6e9466:c.instructions+=17;goto B6e9466;
case 0x6e946a:c.instructions+=16;goto B6e946a;
case 0x6e946e:c.instructions+=15;goto B6e946e;
case 0x6e9470:c.instructions+=14;goto B6e9470;
case 0x6e9473:c.instructions+=13;goto B6e9473;
case 0x6e9477:c.instructions+=12;goto B6e9477;
case 0x6e947b:c.instructions+=11;goto B6e947b;
case 0x6e947e:c.instructions+=10;goto B6e947e;
case 0x6e9481:c.instructions+=9;goto B6e9481;
case 0x6e9485:c.instructions+=8;goto B6e9485;
case 0x6e948c:c.instructions+=7;goto B6e948c;
case 0x6e9490:c.instructions+=6;goto B6e9490;
case 0x6e9494:c.instructions+=5;goto B6e9494;
case 0x6e9498:c.instructions+=4;goto B6e9498;
case 0x6e949a:c.instructions+=3;goto B6e949a;
case 0x6e949d:c.instructions+=2;goto B6e949d;
case 0x6e94a1:c.instructions+=1;goto B6e94a1;
case 0x6e94a5:goto L6e94a5;
case 0x6e94a9:c.instructions+=12;goto B6e94a9;
case 0x6e94ad:c.instructions+=11;goto B6e94ad;
case 0x6e94b0:c.instructions+=10;goto B6e94b0;
case 0x6e94b4:c.instructions+=9;goto B6e94b4;
case 0x6e94b8:c.instructions+=8;goto B6e94b8;
case 0x6e94bc:c.instructions+=7;goto B6e94bc;
case 0x6e94bf:c.instructions+=6;goto B6e94bf;
case 0x6e94c2:c.instructions+=5;goto B6e94c2;
case 0x6e94c3:c.instructions+=4;goto B6e94c3;
case 0x6e94c6:c.instructions+=3;goto B6e94c6;
case 0x6e94c8:c.instructions+=2;goto B6e94c8;
case 0x6e94cc:c.instructions+=1;goto B6e94cc;
case 0x6e94d2:goto L6e94d2;
case 0x6e94d7:goto L6e94d7;
case 0x6e94db:c.instructions+=9;goto B6e94db;
case 0x6e94de:c.instructions+=8;goto B6e94de;
case 0x6e94e1:c.instructions+=7;goto B6e94e1;
case 0x6e94e4:c.instructions+=6;goto B6e94e4;
case 0x6e94e6:c.instructions+=5;goto B6e94e6;
case 0x6e94e8:c.instructions+=4;goto B6e94e8;
case 0x6e94ea:c.instructions+=3;goto B6e94ea;
case 0x6e94ec:c.instructions+=2;goto B6e94ec;
case 0x6e94f0:c.instructions+=1;goto B6e94f0;
case 0x6e94f6:goto L6e94f6;
case 0x6e94f8:c.instructions+=3;goto B6e94f8;
case 0x6e94fb:c.instructions+=2;goto B6e94fb;
case 0x6e94ff:c.instructions+=1;goto B6e94ff;
case 0x6e9503:goto L6e9503;
case 0x6e9508:c.instructions+=8;goto B6e9508;
case 0x6e950a:c.instructions+=7;goto B6e950a;
case 0x6e950d:c.instructions+=6;goto B6e950d;
case 0x6e9512:c.instructions+=5;goto B6e9512;
case 0x6e9514:c.instructions+=4;goto B6e9514;
case 0x6e951b:c.instructions+=3;goto B6e951b;
case 0x6e951e:c.instructions+=2;goto B6e951e;
case 0x6e9521:c.instructions+=1;goto B6e9521;
case 0x6e9527:goto L6e9527;
case 0x6e952a:c.instructions+=63;goto B6e952a;
case 0x6e952e:c.instructions+=62;goto B6e952e;
case 0x6e9532:c.instructions+=61;goto B6e9532;
case 0x6e9536:c.instructions+=60;goto B6e9536;
case 0x6e953a:c.instructions+=59;goto B6e953a;
case 0x6e953e:c.instructions+=58;goto B6e953e;
case 0x6e9542:c.instructions+=57;goto B6e9542;
case 0x6e9546:c.instructions+=56;goto B6e9546;
case 0x6e9549:c.instructions+=55;goto B6e9549;
case 0x6e954c:c.instructions+=54;goto B6e954c;
case 0x6e954f:c.instructions+=53;goto B6e954f;
case 0x6e9553:c.instructions+=52;goto B6e9553;
case 0x6e9557:c.instructions+=51;goto B6e9557;
case 0x6e955a:c.instructions+=50;goto B6e955a;
case 0x6e955d:c.instructions+=49;goto B6e955d;
case 0x6e9561:c.instructions+=48;goto B6e9561;
case 0x6e9564:c.instructions+=47;goto B6e9564;
case 0x6e9567:c.instructions+=46;goto B6e9567;
case 0x6e956b:c.instructions+=45;goto B6e956b;
case 0x6e956e:c.instructions+=44;goto B6e956e;
case 0x6e9572:c.instructions+=43;goto B6e9572;
case 0x6e9576:c.instructions+=42;goto B6e9576;
case 0x6e9579:c.instructions+=41;goto B6e9579;
case 0x6e957b:c.instructions+=40;goto B6e957b;
case 0x6e957e:c.instructions+=39;goto B6e957e;
case 0x6e9581:c.instructions+=38;goto B6e9581;
case 0x6e9584:c.instructions+=37;goto B6e9584;
case 0x6e9588:c.instructions+=36;goto B6e9588;
case 0x6e958b:c.instructions+=35;goto B6e958b;
case 0x6e958e:c.instructions+=34;goto B6e958e;
case 0x6e9590:c.instructions+=33;goto B6e9590;
case 0x6e9594:c.instructions+=32;goto B6e9594;
case 0x6e9598:c.instructions+=31;goto B6e9598;
case 0x6e959c:c.instructions+=30;goto B6e959c;
case 0x6e959f:c.instructions+=29;goto B6e959f;
case 0x6e95a3:c.instructions+=28;goto B6e95a3;
case 0x6e95a7:c.instructions+=27;goto B6e95a7;
case 0x6e95aa:c.instructions+=26;goto B6e95aa;
case 0x6e95ae:c.instructions+=25;goto B6e95ae;
case 0x6e95b2:c.instructions+=24;goto B6e95b2;
case 0x6e95b5:c.instructions+=23;goto B6e95b5;
case 0x6e95b7:c.instructions+=22;goto B6e95b7;
case 0x6e95bb:c.instructions+=21;goto B6e95bb;
case 0x6e95c2:c.instructions+=20;goto B6e95c2;
case 0x6e95c5:c.instructions+=19;goto B6e95c5;
case 0x6e95c8:c.instructions+=18;goto B6e95c8;
case 0x6e95cb:c.instructions+=17;goto B6e95cb;
case 0x6e95cf:c.instructions+=16;goto B6e95cf;
case 0x6e95d2:c.instructions+=15;goto B6e95d2;
case 0x6e95d6:c.instructions+=14;goto B6e95d6;
case 0x6e95dd:c.instructions+=13;goto B6e95dd;
case 0x6e95e1:c.instructions+=12;goto B6e95e1;
case 0x6e95e4:c.instructions+=11;goto B6e95e4;
case 0x6e95e8:c.instructions+=10;goto B6e95e8;
case 0x6e95ec:c.instructions+=9;goto B6e95ec;
case 0x6e95f0:c.instructions+=8;goto B6e95f0;
case 0x6e95f3:c.instructions+=7;goto B6e95f3;
case 0x6e95f7:c.instructions+=6;goto B6e95f7;
case 0x6e95fe:c.instructions+=5;goto B6e95fe;
case 0x6e9602:c.instructions+=4;goto B6e9602;
case 0x6e9605:c.instructions+=3;goto B6e9605;
case 0x6e9609:c.instructions+=2;goto B6e9609;
case 0x6e960d:c.instructions+=1;goto B6e960d;
case 0x6e960f:goto L6e960f;
case 0x6e9613:goto L6e9613;
case 0x6e9617:c.instructions+=12;goto B6e9617;
case 0x6e961b:c.instructions+=11;goto B6e961b;
case 0x6e961e:c.instructions+=10;goto B6e961e;
case 0x6e9622:c.instructions+=9;goto B6e9622;
case 0x6e9626:c.instructions+=8;goto B6e9626;
case 0x6e9629:c.instructions+=7;goto B6e9629;
case 0x6e962a:c.instructions+=6;goto B6e962a;
case 0x6e962d:c.instructions+=5;goto B6e962d;
case 0x6e9630:c.instructions+=4;goto B6e9630;
case 0x6e9632:c.instructions+=3;goto B6e9632;
case 0x6e9636:c.instructions+=2;goto B6e9636;
case 0x6e963a:c.instructions+=1;goto B6e963a;
case 0x6e9640:goto L6e9640;
case 0x6e9642:goto L6e9642;
case 0x6e9644:c.instructions+=2;goto B6e9644;
case 0x6e9648:c.instructions+=1;goto B6e9648;
case 0x6e964a:goto L6e964a;
case 0x6e964c:c.instructions+=1;goto B6e964c;
case 0x6e9650:goto L6e9650;
case 0x6e9655:c.instructions+=8;goto B6e9655;
case 0x6e9657:c.instructions+=7;goto B6e9657;
case 0x6e965a:c.instructions+=6;goto B6e965a;
case 0x6e965f:c.instructions+=5;goto B6e965f;
case 0x6e9661:c.instructions+=4;goto B6e9661;
case 0x6e9668:c.instructions+=3;goto B6e9668;
case 0x6e966b:c.instructions+=2;goto B6e966b;
case 0x6e966e:c.instructions+=1;goto B6e966e;
case 0x6e9670:goto L6e9670;
case 0x6e9674:c.instructions+=11;goto B6e9674;
case 0x6e9677:c.instructions+=10;goto B6e9677;
case 0x6e967b:c.instructions+=9;goto B6e967b;
case 0x6e9682:c.instructions+=8;goto B6e9682;
case 0x6e9684:c.instructions+=7;goto B6e9684;
case 0x6e9687:c.instructions+=6;goto B6e9687;
case 0x6e9689:c.instructions+=5;goto B6e9689;
case 0x6e968b:c.instructions+=4;goto B6e968b;
case 0x6e968e:c.instructions+=3;goto B6e968e;
case 0x6e9691:c.instructions+=2;goto B6e9691;
case 0x6e9694:c.instructions+=1;goto B6e9694;
case 0x6e9697:goto L6e9697;
case 0x6e969b:c.instructions+=4;goto B6e969b;
case 0x6e969c:c.instructions+=3;goto B6e969c;
case 0x6e969f:c.instructions+=2;goto B6e969f;
case 0x6e96a1:c.instructions+=1;goto B6e96a1;
case 0x6e96a3:goto L6e96a3;
case 0x6e96a6:c.instructions+=2;goto B6e96a6;
case 0x6e96a8:c.instructions+=1;goto B6e96a8;
case 0x6e96ae:goto L6e96ae;
case 0x6e96b0:c.instructions+=1;goto B6e96b0;
case 0x6e96b5:goto L6e96b5;
case 0x6e96b7:c.instructions+=3;goto B6e96b7;
case 0x6e96bb:c.instructions+=2;goto B6e96bb;
case 0x6e96be:c.instructions+=1;goto B6e96be;
case 0x6e96c3:goto L6e96c3;
case 0x6e96c7:c.instructions+=4;goto B6e96c7;
case 0x6e96ca:c.instructions+=3;goto B6e96ca;
case 0x6e96cc:c.instructions+=2;goto B6e96cc;
case 0x6e96d4:c.instructions+=1;goto B6e96d4;
case 0x6e96da:goto L6e96da;
case 0x6e96e0:goto L6e96e0;
case 0x6e96e4:c.instructions+=19;goto B6e96e4;
case 0x6e96e7:c.instructions+=18;goto B6e96e7;
case 0x6e96ea:c.instructions+=17;goto B6e96ea;
case 0x6e96ee:c.instructions+=16;goto B6e96ee;
case 0x6e96f1:c.instructions+=15;goto B6e96f1;
case 0x6e96f6:c.instructions+=14;goto B6e96f6;
case 0x6e96f8:c.instructions+=13;goto B6e96f8;
case 0x6e96fa:c.instructions+=12;goto B6e96fa;
case 0x6e96fc:c.instructions+=11;goto B6e96fc;
case 0x6e96ff:c.instructions+=10;goto B6e96ff;
case 0x6e9701:c.instructions+=9;goto B6e9701;
case 0x6e9704:c.instructions+=8;goto B6e9704;
case 0x6e9706:c.instructions+=7;goto B6e9706;
case 0x6e9709:c.instructions+=6;goto B6e9709;
case 0x6e970e:c.instructions+=5;goto B6e970e;
case 0x6e9710:c.instructions+=4;goto B6e9710;
case 0x6e9717:c.instructions+=3;goto B6e9717;
case 0x6e971a:c.instructions+=2;goto B6e971a;
case 0x6e971d:c.instructions+=1;goto B6e971d;
case 0x6e971f:goto L6e971f;
case 0x6e9721:c.instructions+=16;goto B6e9721;
case 0x6e9728:c.instructions+=15;goto B6e9728;
case 0x6e972b:c.instructions+=14;goto B6e972b;
case 0x6e972e:c.instructions+=13;goto B6e972e;
case 0x6e9735:c.instructions+=12;goto B6e9735;
case 0x6e9736:c.instructions+=11;goto B6e9736;
case 0x6e9739:c.instructions+=10;goto B6e9739;
case 0x6e973c:c.instructions+=9;goto B6e973c;
case 0x6e973f:c.instructions+=8;goto B6e973f;
case 0x6e9742:c.instructions+=7;goto B6e9742;
case 0x6e9744:c.instructions+=6;goto B6e9744;
case 0x6e974b:c.instructions+=5;goto B6e974b;
case 0x6e974c:c.instructions+=4;goto B6e974c;
case 0x6e974f:c.instructions+=3;goto B6e974f;
case 0x6e9752:c.instructions+=2;goto B6e9752;
case 0x6e9755:c.instructions+=1;goto B6e9755;
case 0x6e9757:goto L6e9757;
case 0x6e975a:goto L6e975a;
case 0x6e975e:c.instructions+=5;goto B6e975e;
case 0x6e9762:c.instructions+=4;goto B6e9762;
case 0x6e9763:c.instructions+=3;goto B6e9763;
case 0x6e9765:c.instructions+=2;goto B6e9765;
case 0x6e9769:c.instructions+=1;goto B6e9769;
case 0x6e976f:goto L6e976f;
case 0x6e9770:c.instructions+=6;goto B6e9770;
case 0x6e9771:c.instructions+=5;goto B6e9771;
case 0x6e9772:c.instructions+=4;goto B6e9772;
case 0x6e9774:c.instructions+=3;goto B6e9774;
case 0x6e9775:c.instructions+=2;goto B6e9775;
case 0x6e977b:c.instructions+=1;goto B6e977b;
case 0x6e9780:goto L6e9780;
case 0x6e9783:c.instructions+=5;goto B6e9783;
case 0x6e9784:c.instructions+=4;goto B6e9784;
case 0x6e9786:c.instructions+=3;goto B6e9786;
case 0x6e9789:c.instructions+=2;goto B6e9789;
case 0x6e978b:c.instructions+=1;goto B6e978b;
case 0x6e978d:goto L6e978d;
case 0x6e9792:goto L6e9792;
case 0x6e9796:c.instructions+=2;goto B6e9796;
case 0x6e9798:c.instructions+=1;goto B6e9798;
case 0x6e979a:goto L6e979a;
case 0x6e979e:c.instructions+=6;goto B6e979e;
case 0x6e979f:c.instructions+=5;goto B6e979f;
case 0x6e97a3:c.instructions+=4;goto B6e97a3;
case 0x6e97a4:c.instructions+=3;goto B6e97a4;
case 0x6e97a5:c.instructions+=2;goto B6e97a5;
case 0x6e97a7:c.instructions+=1;goto B6e97a7;
case 0x6e97ac:goto L6e97ac;
case 0x6e97ad:c.instructions+=2;goto B6e97ad;
case 0x6e97b0:c.instructions+=1;goto B6e97b0;
case 0x6e97b3:goto L6e97b3;
case 0x6e97b6:c.instructions+=3;goto B6e97b6;
case 0x6e97b9:c.instructions+=2;goto B6e97b9;
case 0x6e97bb:c.instructions+=1;goto B6e97bb;
case 0x6e97bd:goto L6e97bd;
case 0x6e97c0:c.instructions+=2;goto B6e97c0;
case 0x6e97c3:c.instructions+=1;goto B6e97c3;
case 0x6e97ca:goto L6e97ca;
case 0x6e97ce:c.instructions+=6;goto B6e97ce;
case 0x6e97cf:c.instructions+=5;goto B6e97cf;
case 0x6e97d0:c.instructions+=4;goto B6e97d0;
case 0x6e97d1:c.instructions+=3;goto B6e97d1;
case 0x6e97d4:c.instructions+=2;goto B6e97d4;
case 0x6e97d5:c.instructions+=1;goto B6e97d5;
case 0x6e97da:goto L6e97da;
case 0x6e97dd:c.instructions+=4;goto B6e97dd;
case 0x6e97e0:c.instructions+=3;goto B6e97e0;
case 0x6e97e2:c.instructions+=2;goto B6e97e2;
case 0x6e97e6:c.instructions+=1;goto B6e97e6;
case 0x6e97e8:goto L6e97e8;
case 0x6e97ea:c.instructions+=1;goto B6e97ea;
case 0x6e97ec:goto L6e97ec;
case 0x6e97ee:c.instructions+=1;goto B6e97ee;
case 0x6e97f0:goto L6e97f0;
case 0x6e97f4:c.instructions+=2;goto B6e97f4;
case 0x6e97f6:c.instructions+=1;goto B6e97f6;
case 0x6e97f8:goto L6e97f8;
case 0x6e97fb:c.instructions+=1;goto B6e97fb;
case 0x6e97fd:goto L6e97fd;
case 0x6e97ff:c.instructions+=1;goto B6e97ff;
case 0x6e9801:goto L6e9801;
case 0x6e9804:c.instructions+=2;goto B6e9804;
case 0x6e9806:c.instructions+=1;goto B6e9806;
case 0x6e9808:goto L6e9808;
case 0x6e980a:c.instructions+=1;goto B6e980a;
case 0x6e980c:goto L6e980c;
case 0x6e980f:c.instructions+=2;goto B6e980f;
case 0x6e9812:c.instructions+=1;goto B6e9812;
case 0x6e9814:goto L6e9814;
case 0x6e9816:c.instructions+=1;goto B6e9816;
case 0x6e9818:goto L6e9818;
case 0x6e9819:goto L6e9819;
case 0x6e981d:c.instructions+=3;goto B6e981d;
case 0x6e981f:c.instructions+=2;goto B6e981f;
case 0x6e9822:c.instructions+=1;goto B6e9822;
case 0x6e9824:goto L6e9824;
case 0x6e9828:c.instructions+=3;goto B6e9828;
case 0x6e982b:c.instructions+=2;goto B6e982b;
case 0x6e982d:c.instructions+=1;goto B6e982d;
case 0x6e982f:goto L6e982f;
case 0x6e9832:goto L6e9832;
case 0x6e9835:c.instructions+=2;goto B6e9835;
case 0x6e9837:c.instructions+=1;goto B6e9837;
case 0x6e9839:goto L6e9839;
case 0x6e983a:c.instructions+=3;goto B6e983a;
case 0x6e983d:c.instructions+=2;goto B6e983d;
case 0x6e983f:c.instructions+=1;goto B6e983f;
case 0x6e9841:goto L6e9841;
case 0x6e9843:goto L6e9843;
case 0x6e9845:c.instructions+=1;goto B6e9845;
case 0x6e9847:goto L6e9847;
case 0x6e984a:c.instructions+=2;goto B6e984a;
case 0x6e984c:c.instructions+=1;goto B6e984c;
case 0x6e984e:goto L6e984e;
case 0x6e984f:c.instructions+=3;goto B6e984f;
case 0x6e9852:c.instructions+=2;goto B6e9852;
case 0x6e9854:c.instructions+=1;goto B6e9854;
case 0x6e9856:goto L6e9856;
case 0x6e9859:goto L6e9859;
case 0x6e985d:c.instructions+=35;goto B6e985d;
case 0x6e9862:c.instructions+=34;goto B6e9862;
case 0x6e9864:c.instructions+=33;goto B6e9864;
case 0x6e9869:c.instructions+=32;goto B6e9869;
case 0x6e986b:c.instructions+=31;goto B6e986b;
case 0x6e986d:c.instructions+=30;goto B6e986d;
case 0x6e9871:c.instructions+=29;goto B6e9871;
case 0x6e9873:c.instructions+=28;goto B6e9873;
case 0x6e9877:c.instructions+=27;goto B6e9877;
case 0x6e9879:c.instructions+=26;goto B6e9879;
case 0x6e987d:c.instructions+=25;goto B6e987d;
case 0x6e9881:c.instructions+=24;goto B6e9881;
case 0x6e9884:c.instructions+=23;goto B6e9884;
case 0x6e9888:c.instructions+=22;goto B6e9888;
case 0x6e988a:c.instructions+=21;goto B6e988a;
case 0x6e988c:c.instructions+=20;goto B6e988c;
case 0x6e9890:c.instructions+=19;goto B6e9890;
case 0x6e9892:c.instructions+=18;goto B6e9892;
case 0x6e9896:c.instructions+=17;goto B6e9896;
case 0x6e989b:c.instructions+=16;goto B6e989b;
case 0x6e989d:c.instructions+=15;goto B6e989d;
case 0x6e98a0:c.instructions+=14;goto B6e98a0;
case 0x6e98a4:c.instructions+=13;goto B6e98a4;
case 0x6e98a5:c.instructions+=12;goto B6e98a5;
case 0x6e98a8:c.instructions+=11;goto B6e98a8;
case 0x6e98ac:c.instructions+=10;goto B6e98ac;
case 0x6e98af:c.instructions+=9;goto B6e98af;
case 0x6e98b2:c.instructions+=8;goto B6e98b2;
case 0x6e98b4:c.instructions+=7;goto B6e98b4;
case 0x6e98b7:c.instructions+=6;goto B6e98b7;
case 0x6e98bb:c.instructions+=5;goto B6e98bb;
case 0x6e98bf:c.instructions+=4;goto B6e98bf;
case 0x6e98c3:c.instructions+=3;goto B6e98c3;
case 0x6e98c7:c.instructions+=2;goto B6e98c7;
case 0x6e98cb:c.instructions+=1;goto B6e98cb;
case 0x6e98cd:goto L6e98cd;
case 0x6e98d2:c.instructions+=3;goto B6e98d2;
case 0x6e98d4:c.instructions+=2;goto B6e98d4;
case 0x6e98d9:c.instructions+=1;goto B6e98d9;
case 0x6e98db:goto L6e98db;
case 0x6e98e0:goto L6e98e0;
case 0x6e98e3:c.instructions+=2;goto B6e98e3;
case 0x6e98e7:c.instructions+=1;goto B6e98e7;
case 0x6e98e9:goto L6e98e9;
case 0x6e98ec:c.instructions+=6;goto B6e98ec;
case 0x6e98ef:c.instructions+=5;goto B6e98ef;
case 0x6e98f2:c.instructions+=4;goto B6e98f2;
case 0x6e98f5:c.instructions+=3;goto B6e98f5;
case 0x6e98f8:c.instructions+=2;goto B6e98f8;
case 0x6e98ff:c.instructions+=1;goto B6e98ff;
case 0x6e9904:goto L6e9904;
case 0x6e9907:c.instructions+=1;goto B6e9907;
case 0x6e9909:goto L6e9909;
case 0x6e990d:c.instructions+=1;goto B6e990d;
case 0x6e990f:goto L6e990f;
case 0x6e9913:c.instructions+=2;goto B6e9913;
case 0x6e9915:c.instructions+=1;goto B6e9915;
case 0x6e9917:goto L6e9917;
case 0x6e991b:c.instructions+=2;goto B6e991b;
case 0x6e991d:c.instructions+=1;goto B6e991d;
case 0x6e991f:goto L6e991f;
case 0x6e9923:c.instructions+=2;goto B6e9923;
case 0x6e9925:c.instructions+=1;goto B6e9925;
case 0x6e992a:goto L6e992a;
case 0x6e992e:goto L6e992e;
case 0x6e9930:c.instructions+=3;goto B6e9930;
case 0x6e9932:c.instructions+=2;goto B6e9932;
case 0x6e9936:c.instructions+=1;goto B6e9936;
case 0x6e993c:goto L6e993c;
case 0x6e9940:c.instructions+=2;goto B6e9940;
case 0x6e9942:c.instructions+=1;goto B6e9942;
case 0x6e9945:goto L6e9945;
case 0x6e9948:c.instructions+=33;goto B6e9948;
case 0x6e994c:c.instructions+=32;goto B6e994c;
case 0x6e994f:c.instructions+=31;goto B6e994f;
case 0x6e9951:c.instructions+=30;goto B6e9951;
case 0x6e9955:c.instructions+=29;goto B6e9955;
case 0x6e9959:c.instructions+=28;goto B6e9959;
case 0x6e995b:c.instructions+=27;goto B6e995b;
case 0x6e995e:c.instructions+=26;goto B6e995e;
case 0x6e9962:c.instructions+=25;goto B6e9962;
case 0x6e9965:c.instructions+=24;goto B6e9965;
case 0x6e9968:c.instructions+=23;goto B6e9968;
case 0x6e996a:c.instructions+=22;goto B6e996a;
case 0x6e996c:c.instructions+=21;goto B6e996c;
case 0x6e9970:c.instructions+=20;goto B6e9970;
case 0x6e9974:c.instructions+=19;goto B6e9974;
case 0x6e9978:c.instructions+=18;goto B6e9978;
case 0x6e997b:c.instructions+=17;goto B6e997b;
case 0x6e997e:c.instructions+=16;goto B6e997e;
case 0x6e9981:c.instructions+=15;goto B6e9981;
case 0x6e9985:c.instructions+=14;goto B6e9985;
case 0x6e9989:c.instructions+=13;goto B6e9989;
case 0x6e998d:c.instructions+=12;goto B6e998d;
case 0x6e9990:c.instructions+=11;goto B6e9990;
case 0x6e9993:c.instructions+=10;goto B6e9993;
case 0x6e9997:c.instructions+=9;goto B6e9997;
case 0x6e9998:c.instructions+=8;goto B6e9998;
case 0x6e999b:c.instructions+=7;goto B6e999b;
case 0x6e999f:c.instructions+=6;goto B6e999f;
case 0x6e99a2:c.instructions+=5;goto B6e99a2;
case 0x6e99a6:c.instructions+=4;goto B6e99a6;
case 0x6e99aa:c.instructions+=3;goto B6e99aa;
case 0x6e99ac:c.instructions+=2;goto B6e99ac;
case 0x6e99b0:c.instructions+=1;goto B6e99b0;
case 0x6e99b2:goto L6e99b2;
case 0x6e99b6:c.instructions+=1;goto B6e99b6;
case 0x6e99ba:goto L6e99ba;
case 0x6e99bc:goto L6e99bc;
case 0x6e99be:c.instructions+=1;goto B6e99be;
case 0x6e99c4:goto L6e99c4;
case 0x6e99c8:c.instructions+=8;goto B6e99c8;
case 0x6e99cb:c.instructions+=7;goto B6e99cb;
case 0x6e99ce:c.instructions+=6;goto B6e99ce;
case 0x6e99d1:c.instructions+=5;goto B6e99d1;
case 0x6e99d3:c.instructions+=4;goto B6e99d3;
case 0x6e99d5:c.instructions+=3;goto B6e99d5;
case 0x6e99d9:c.instructions+=2;goto B6e99d9;
case 0x6e99dd:c.instructions+=1;goto B6e99dd;
case 0x6e99e0:goto L6e99e0;
case 0x6e99e2:c.instructions+=3;goto B6e99e2;
case 0x6e99e4:c.instructions+=2;goto B6e99e4;
case 0x6e99e8:c.instructions+=1;goto B6e99e8;
case 0x6e99ee:goto L6e99ee;
case 0x6e99f0:c.instructions+=1;goto B6e99f0;
case 0x6e99f3:goto L6e99f3;
case 0x6e99f7:c.instructions+=40;goto B6e99f7;
case 0x6e99fa:c.instructions+=39;goto B6e99fa;
case 0x6e99fc:c.instructions+=38;goto B6e99fc;
case 0x6e9a00:c.instructions+=37;goto B6e9a00;
case 0x6e9a04:c.instructions+=36;goto B6e9a04;
case 0x6e9a08:c.instructions+=35;goto B6e9a08;
case 0x6e9a0c:c.instructions+=34;goto B6e9a0c;
case 0x6e9a0f:c.instructions+=33;goto B6e9a0f;
case 0x6e9a12:c.instructions+=32;goto B6e9a12;
case 0x6e9a15:c.instructions+=31;goto B6e9a15;
case 0x6e9a18:c.instructions+=30;goto B6e9a18;
case 0x6e9a1b:c.instructions+=29;goto B6e9a1b;
case 0x6e9a1f:c.instructions+=28;goto B6e9a1f;
case 0x6e9a23:c.instructions+=27;goto B6e9a23;
case 0x6e9a27:c.instructions+=26;goto B6e9a27;
case 0x6e9a2a:c.instructions+=25;goto B6e9a2a;
case 0x6e9a2d:c.instructions+=24;goto B6e9a2d;
case 0x6e9a31:c.instructions+=23;goto B6e9a31;
case 0x6e9a34:c.instructions+=22;goto B6e9a34;
case 0x6e9a37:c.instructions+=21;goto B6e9a37;
case 0x6e9a3a:c.instructions+=20;goto B6e9a3a;
case 0x6e9a3c:c.instructions+=19;goto B6e9a3c;
case 0x6e9a40:c.instructions+=18;goto B6e9a40;
case 0x6e9a41:c.instructions+=17;goto B6e9a41;
case 0x6e9a43:c.instructions+=16;goto B6e9a43;
case 0x6e9a47:c.instructions+=15;goto B6e9a47;
case 0x6e9a49:c.instructions+=14;goto B6e9a49;
case 0x6e9a4b:c.instructions+=13;goto B6e9a4b;
case 0x6e9a4e:c.instructions+=12;goto B6e9a4e;
case 0x6e9a52:c.instructions+=11;goto B6e9a52;
case 0x6e9a54:c.instructions+=10;goto B6e9a54;
case 0x6e9a56:c.instructions+=9;goto B6e9a56;
case 0x6e9a59:c.instructions+=8;goto B6e9a59;
case 0x6e9a5d:c.instructions+=7;goto B6e9a5d;
case 0x6e9a61:c.instructions+=6;goto B6e9a61;
case 0x6e9a63:c.instructions+=5;goto B6e9a63;
case 0x6e9a66:c.instructions+=4;goto B6e9a66;
case 0x6e9a68:c.instructions+=3;goto B6e9a68;
case 0x6e9a6c:c.instructions+=2;goto B6e9a6c;
case 0x6e9a6e:c.instructions+=1;goto B6e9a6e;
case 0x6e9a70:goto L6e9a70;
case 0x6e9a74:c.instructions+=7;goto B6e9a74;
case 0x6e9a78:c.instructions+=6;goto B6e9a78;
case 0x6e9a7c:c.instructions+=5;goto B6e9a7c;
case 0x6e9a7e:c.instructions+=4;goto B6e9a7e;
case 0x6e9a7f:c.instructions+=3;goto B6e9a7f;
case 0x6e9a83:c.instructions+=2;goto B6e9a83;
case 0x6e9a87:c.instructions+=1;goto B6e9a87;
case 0x6e9a8d:goto L6e9a8d;
case 0x6e9a92:goto L6e9a92;
case 0x6e9a98:goto L6e9a98;
case 0x6e9a9c:c.instructions+=7;goto B6e9a9c;
case 0x6e9a9f:c.instructions+=6;goto B6e9a9f;
case 0x6e9aa2:c.instructions+=5;goto B6e9aa2;
case 0x6e9aa5:c.instructions+=4;goto B6e9aa5;
case 0x6e9aa7:c.instructions+=3;goto B6e9aa7;
case 0x6e9aa8:c.instructions+=2;goto B6e9aa8;
case 0x6e9aaa:c.instructions+=1;goto B6e9aaa;
case 0x6e9ab0:goto L6e9ab0;
case 0x6e9ab3:c.instructions+=5;goto B6e9ab3;
case 0x6e9ab5:c.instructions+=4;goto B6e9ab5;
case 0x6e9ab6:c.instructions+=3;goto B6e9ab6;
case 0x6e9aba:c.instructions+=2;goto B6e9aba;
case 0x6e9abe:c.instructions+=1;goto B6e9abe;
case 0x6e9ac0:goto L6e9ac0;
case 0x6e9ac2:c.instructions+=3;goto B6e9ac2;
case 0x6e9ac4:c.instructions+=2;goto B6e9ac4;
case 0x6e9ac8:c.instructions+=1;goto B6e9ac8;
case 0x6e9ace:goto L6e9ace;
case 0x6e9ad0:goto L6e9ad0;
case 0x6e9ad4:c.instructions+=43;goto B6e9ad4;
case 0x6e9ad7:c.instructions+=42;goto B6e9ad7;
case 0x6e9ad9:c.instructions+=41;goto B6e9ad9;
case 0x6e9add:c.instructions+=40;goto B6e9add;
case 0x6e9ae1:c.instructions+=39;goto B6e9ae1;
case 0x6e9ae5:c.instructions+=38;goto B6e9ae5;
case 0x6e9ae9:c.instructions+=37;goto B6e9ae9;
case 0x6e9aec:c.instructions+=36;goto B6e9aec;
case 0x6e9aef:c.instructions+=35;goto B6e9aef;
case 0x6e9af2:c.instructions+=34;goto B6e9af2;
case 0x6e9af5:c.instructions+=33;goto B6e9af5;
case 0x6e9af8:c.instructions+=32;goto B6e9af8;
case 0x6e9afc:c.instructions+=31;goto B6e9afc;
case 0x6e9b00:c.instructions+=30;goto B6e9b00;
case 0x6e9b04:c.instructions+=29;goto B6e9b04;
case 0x6e9b07:c.instructions+=28;goto B6e9b07;
case 0x6e9b0a:c.instructions+=27;goto B6e9b0a;
case 0x6e9b0e:c.instructions+=26;goto B6e9b0e;
case 0x6e9b11:c.instructions+=25;goto B6e9b11;
case 0x6e9b14:c.instructions+=24;goto B6e9b14;
case 0x6e9b17:c.instructions+=23;goto B6e9b17;
case 0x6e9b19:c.instructions+=22;goto B6e9b19;
case 0x6e9b1d:c.instructions+=21;goto B6e9b1d;
case 0x6e9b1e:c.instructions+=20;goto B6e9b1e;
case 0x6e9b20:c.instructions+=19;goto B6e9b20;
case 0x6e9b24:c.instructions+=18;goto B6e9b24;
case 0x6e9b26:c.instructions+=17;goto B6e9b26;
case 0x6e9b28:c.instructions+=16;goto B6e9b28;
case 0x6e9b2b:c.instructions+=15;goto B6e9b2b;
case 0x6e9b2f:c.instructions+=14;goto B6e9b2f;
case 0x6e9b33:c.instructions+=13;goto B6e9b33;
case 0x6e9b35:c.instructions+=12;goto B6e9b35;
case 0x6e9b37:c.instructions+=11;goto B6e9b37;
case 0x6e9b3a:c.instructions+=10;goto B6e9b3a;
case 0x6e9b3e:c.instructions+=9;goto B6e9b3e;
case 0x6e9b40:c.instructions+=8;goto B6e9b40;
case 0x6e9b43:c.instructions+=7;goto B6e9b43;
case 0x6e9b45:c.instructions+=6;goto B6e9b45;
case 0x6e9b47:c.instructions+=5;goto B6e9b47;
case 0x6e9b4b:c.instructions+=4;goto B6e9b4b;
case 0x6e9b4d:c.instructions+=3;goto B6e9b4d;
case 0x6e9b51:c.instructions+=2;goto B6e9b51;
case 0x6e9b53:c.instructions+=1;goto B6e9b53;
case 0x6e9b59:goto L6e9b59;
case 0x6e9b5d:c.instructions+=7;goto B6e9b5d;
case 0x6e9b61:c.instructions+=6;goto B6e9b61;
case 0x6e9b65:c.instructions+=5;goto B6e9b65;
case 0x6e9b67:c.instructions+=4;goto B6e9b67;
case 0x6e9b68:c.instructions+=3;goto B6e9b68;
case 0x6e9b6c:c.instructions+=2;goto B6e9b6c;
case 0x6e9b70:c.instructions+=1;goto B6e9b70;
case 0x6e9b76:goto L6e9b76;
case 0x6e9b7a:c.instructions+=7;goto B6e9b7a;
case 0x6e9b7d:c.instructions+=6;goto B6e9b7d;
case 0x6e9b80:c.instructions+=5;goto B6e9b80;
case 0x6e9b84:c.instructions+=4;goto B6e9b84;
case 0x6e9b87:c.instructions+=3;goto B6e9b87;
case 0x6e9b89:c.instructions+=2;goto B6e9b89;
case 0x6e9b91:c.instructions+=1;goto B6e9b91;
case 0x6e9b93:goto L6e9b93;
case 0x6e9b97:c.instructions+=5;goto B6e9b97;
case 0x6e9b9b:c.instructions+=4;goto B6e9b9b;
case 0x6e9b9d:c.instructions+=3;goto B6e9b9d;
case 0x6e9b9f:c.instructions+=2;goto B6e9b9f;
case 0x6e9ba2:c.instructions+=1;goto B6e9ba2;
case 0x6e9ba8:goto L6e9ba8;
case 0x6e9bac:c.instructions+=3;goto B6e9bac;
case 0x6e9bae:c.instructions+=2;goto B6e9bae;
case 0x6e9bb0:c.instructions+=1;goto B6e9bb0;
case 0x6e9bb2:goto L6e9bb2;
case 0x6e9bb4:c.instructions+=1;goto B6e9bb4;
case 0x6e9bb6:goto L6e9bb6;
case 0x6e9bba:c.instructions+=4;goto B6e9bba;
case 0x6e9bc0:c.instructions+=3;goto B6e9bc0;
case 0x6e9bc2:c.instructions+=2;goto B6e9bc2;
case 0x6e9bc5:c.instructions+=1;goto B6e9bc5;
case 0x6e9bc7:goto L6e9bc7;
case 0x6e9bca:c.instructions+=6;goto B6e9bca;
case 0x6e9bce:c.instructions+=5;goto B6e9bce;
case 0x6e9bd0:c.instructions+=4;goto B6e9bd0;
case 0x6e9bd4:c.instructions+=3;goto B6e9bd4;
case 0x6e9bd8:c.instructions+=2;goto B6e9bd8;
case 0x6e9bdc:c.instructions+=1;goto B6e9bdc;
case 0x6e9bde:goto L6e9bde;
case 0x6e9be0:c.instructions+=1;goto B6e9be0;
case 0x6e9be2:goto L6e9be2;
case 0x6e9be7:c.instructions+=7;goto B6e9be7;
case 0x6e9beb:c.instructions+=6;goto B6e9beb;
case 0x6e9bef:c.instructions+=5;goto B6e9bef;
case 0x6e9bf3:c.instructions+=4;goto B6e9bf3;
case 0x6e9bf5:c.instructions+=3;goto B6e9bf5;
case 0x6e9bf7:c.instructions+=2;goto B6e9bf7;
case 0x6e9bfa:c.instructions+=1;goto B6e9bfa;
case 0x6e9c00:goto L6e9c00;
case 0x6e9c04:c.instructions+=7;goto B6e9c04;
case 0x6e9c08:c.instructions+=6;goto B6e9c08;
case 0x6e9c0a:c.instructions+=5;goto B6e9c0a;
case 0x6e9c0e:c.instructions+=4;goto B6e9c0e;
case 0x6e9c10:c.instructions+=3;goto B6e9c10;
case 0x6e9c14:c.instructions+=2;goto B6e9c14;
case 0x6e9c16:c.instructions+=1;goto B6e9c16;
case 0x6e9c18:goto L6e9c18;
case 0x6e9c1c:goto L6e9c1c;
case 0x6e9c1e:goto L6e9c1e;
case 0x6e9c20:c.instructions+=3;goto B6e9c20;
case 0x6e9c23:c.instructions+=2;goto B6e9c23;
case 0x6e9c27:c.instructions+=1;goto B6e9c27;
case 0x6e9c2d:goto L6e9c2d;
case 0x6e9c31:c.instructions+=3;goto B6e9c31;
case 0x6e9c32:c.instructions+=2;goto B6e9c32;
case 0x6e9c34:c.instructions+=1;goto B6e9c34;
case 0x6e9c3a:goto L6e9c3a;
case 0x6e9c3e:c.instructions+=19;goto B6e9c3e;
case 0x6e9c42:c.instructions+=18;goto B6e9c42;
case 0x6e9c44:c.instructions+=17;goto B6e9c44;
case 0x6e9c47:c.instructions+=16;goto B6e9c47;
case 0x6e9c4c:c.instructions+=15;goto B6e9c4c;
case 0x6e9c4e:c.instructions+=14;goto B6e9c4e;
case 0x6e9c52:c.instructions+=13;goto B6e9c52;
case 0x6e9c53:c.instructions+=12;goto B6e9c53;
case 0x6e9c56:c.instructions+=11;goto B6e9c56;
case 0x6e9c5a:c.instructions+=10;goto B6e9c5a;
case 0x6e9c5d:c.instructions+=9;goto B6e9c5d;
case 0x6e9c60:c.instructions+=8;goto B6e9c60;
case 0x6e9c64:c.instructions+=7;goto B6e9c64;
case 0x6e9c66:c.instructions+=6;goto B6e9c66;
case 0x6e9c68:c.instructions+=5;goto B6e9c68;
case 0x6e9c6c:c.instructions+=4;goto B6e9c6c;
case 0x6e9c6f:c.instructions+=3;goto B6e9c6f;
case 0x6e9c73:c.instructions+=2;goto B6e9c73;
case 0x6e9c76:c.instructions+=1;goto B6e9c76;
case 0x6e9c7c:goto L6e9c7c;
case 0x6e9c80:c.instructions+=3;goto B6e9c80;
case 0x6e9c82:c.instructions+=2;goto B6e9c82;
case 0x6e9c8a:c.instructions+=1;goto B6e9c8a;
case 0x6e9c90:goto L6e9c90;
case 0x6e9c92:goto L6e9c92;
case 0x6e9c95:c.instructions+=34;goto B6e9c95;
case 0x6e9c98:c.instructions+=33;goto B6e9c98;
case 0x6e9c9b:c.instructions+=32;goto B6e9c9b;
case 0x6e9c9e:c.instructions+=31;goto B6e9c9e;
case 0x6e9ca0:c.instructions+=30;goto B6e9ca0;
case 0x6e9ca3:c.instructions+=29;goto B6e9ca3;
case 0x6e9ca7:c.instructions+=28;goto B6e9ca7;
case 0x6e9ca9:c.instructions+=27;goto B6e9ca9;
case 0x6e9cad:c.instructions+=26;goto B6e9cad;
case 0x6e9cb1:c.instructions+=25;goto B6e9cb1;
case 0x6e9cb4:c.instructions+=24;goto B6e9cb4;
case 0x6e9cb8:c.instructions+=23;goto B6e9cb8;
case 0x6e9cbb:c.instructions+=22;goto B6e9cbb;
case 0x6e9cbf:c.instructions+=21;goto B6e9cbf;
case 0x6e9cc3:c.instructions+=20;goto B6e9cc3;
case 0x6e9cc7:c.instructions+=19;goto B6e9cc7;
case 0x6e9cc9:c.instructions+=18;goto B6e9cc9;
case 0x6e9ccd:c.instructions+=17;goto B6e9ccd;
case 0x6e9cd1:c.instructions+=16;goto B6e9cd1;
case 0x6e9cd4:c.instructions+=15;goto B6e9cd4;
case 0x6e9cd7:c.instructions+=14;goto B6e9cd7;
case 0x6e9cdb:c.instructions+=13;goto B6e9cdb;
case 0x6e9cdf:c.instructions+=12;goto B6e9cdf;
case 0x6e9ce3:c.instructions+=11;goto B6e9ce3;
case 0x6e9ce6:c.instructions+=10;goto B6e9ce6;
case 0x6e9cea:c.instructions+=9;goto B6e9cea;
case 0x6e9cec:c.instructions+=8;goto B6e9cec;
case 0x6e9cf0:c.instructions+=7;goto B6e9cf0;
case 0x6e9cf4:c.instructions+=6;goto B6e9cf4;
case 0x6e9cf8:c.instructions+=5;goto B6e9cf8;
case 0x6e9cfc:c.instructions+=4;goto B6e9cfc;
case 0x6e9cfd:c.instructions+=3;goto B6e9cfd;
case 0x6e9cff:c.instructions+=2;goto B6e9cff;
case 0x6e9d03:c.instructions+=1;goto B6e9d03;
case 0x6e9d05:goto L6e9d05;
case 0x6e9d0a:goto L6e9d0a;
case 0x6e9d0c:c.instructions+=1;goto B6e9d0c;
case 0x6e9d11:goto L6e9d11;
case 0x6e9d15:c.instructions+=2;goto B6e9d15;
case 0x6e9d19:c.instructions+=1;goto B6e9d19;
case 0x6e9d1f:goto L6e9d1f;
case 0x6e9d23:c.instructions+=4;goto B6e9d23;
case 0x6e9d25:c.instructions+=3;goto B6e9d25;
case 0x6e9d27:c.instructions+=2;goto B6e9d27;
case 0x6e9d2b:c.instructions+=1;goto B6e9d2b;
case 0x6e9d31:goto L6e9d31;
case 0x6e9d34:c.instructions+=3;goto B6e9d34;
case 0x6e9d38:c.instructions+=2;goto B6e9d38;
case 0x6e9d3c:c.instructions+=1;goto B6e9d3c;
case 0x6e9d40:goto L6e9d40;
case 0x6e9d43:c.instructions+=70;goto B6e9d43;
case 0x6e9d47:c.instructions+=69;goto B6e9d47;
case 0x6e9d49:c.instructions+=68;goto B6e9d49;
case 0x6e9d4d:c.instructions+=67;goto B6e9d4d;
case 0x6e9d50:c.instructions+=66;goto B6e9d50;
case 0x6e9d52:c.instructions+=65;goto B6e9d52;
case 0x6e9d56:c.instructions+=64;goto B6e9d56;
case 0x6e9d5a:c.instructions+=63;goto B6e9d5a;
case 0x6e9d5e:c.instructions+=62;goto B6e9d5e;
case 0x6e9d62:c.instructions+=61;goto B6e9d62;
case 0x6e9d65:c.instructions+=60;goto B6e9d65;
case 0x6e9d69:c.instructions+=59;goto B6e9d69;
case 0x6e9d6c:c.instructions+=58;goto B6e9d6c;
case 0x6e9d6e:c.instructions+=57;goto B6e9d6e;
case 0x6e9d70:c.instructions+=56;goto B6e9d70;
case 0x6e9d74:c.instructions+=55;goto B6e9d74;
case 0x6e9d78:c.instructions+=54;goto B6e9d78;
case 0x6e9d7c:c.instructions+=53;goto B6e9d7c;
case 0x6e9d80:c.instructions+=52;goto B6e9d80;
case 0x6e9d84:c.instructions+=51;goto B6e9d84;
case 0x6e9d87:c.instructions+=50;goto B6e9d87;
case 0x6e9d8a:c.instructions+=49;goto B6e9d8a;
case 0x6e9d8d:c.instructions+=48;goto B6e9d8d;
case 0x6e9d91:c.instructions+=47;goto B6e9d91;
case 0x6e9d94:c.instructions+=46;goto B6e9d94;
case 0x6e9d98:c.instructions+=45;goto B6e9d98;
case 0x6e9d9c:c.instructions+=44;goto B6e9d9c;
case 0x6e9d9f:c.instructions+=43;goto B6e9d9f;
case 0x6e9da2:c.instructions+=42;goto B6e9da2;
case 0x6e9da6:c.instructions+=41;goto B6e9da6;
case 0x6e9da9:c.instructions+=40;goto B6e9da9;
case 0x6e9dac:c.instructions+=39;goto B6e9dac;
case 0x6e9daf:c.instructions+=38;goto B6e9daf;
case 0x6e9db2:c.instructions+=37;goto B6e9db2;
case 0x6e9db5:c.instructions+=36;goto B6e9db5;
case 0x6e9db7:c.instructions+=35;goto B6e9db7;
case 0x6e9dbb:c.instructions+=34;goto B6e9dbb;
case 0x6e9dbd:c.instructions+=33;goto B6e9dbd;
case 0x6e9dc1:c.instructions+=32;goto B6e9dc1;
case 0x6e9dc5:c.instructions+=31;goto B6e9dc5;
case 0x6e9dc8:c.instructions+=30;goto B6e9dc8;
case 0x6e9dcc:c.instructions+=29;goto B6e9dcc;
case 0x6e9dcf:c.instructions+=28;goto B6e9dcf;
case 0x6e9dd3:c.instructions+=27;goto B6e9dd3;
case 0x6e9dd7:c.instructions+=26;goto B6e9dd7;
case 0x6e9ddb:c.instructions+=25;goto B6e9ddb;
case 0x6e9ddd:c.instructions+=24;goto B6e9ddd;
case 0x6e9de1:c.instructions+=23;goto B6e9de1;
case 0x6e9de5:c.instructions+=22;goto B6e9de5;
case 0x6e9de8:c.instructions+=21;goto B6e9de8;
case 0x6e9dec:c.instructions+=20;goto B6e9dec;
case 0x6e9def:c.instructions+=19;goto B6e9def;
case 0x6e9df3:c.instructions+=18;goto B6e9df3;
case 0x6e9df7:c.instructions+=17;goto B6e9df7;
case 0x6e9dfb:c.instructions+=16;goto B6e9dfb;
case 0x6e9dfe:c.instructions+=15;goto B6e9dfe;
case 0x6e9e02:c.instructions+=14;goto B6e9e02;
case 0x6e9e06:c.instructions+=13;goto B6e9e06;
case 0x6e9e09:c.instructions+=12;goto B6e9e09;
case 0x6e9e0b:c.instructions+=11;goto B6e9e0b;
case 0x6e9e0f:c.instructions+=10;goto B6e9e0f;
case 0x6e9e13:c.instructions+=9;goto B6e9e13;
case 0x6e9e17:c.instructions+=8;goto B6e9e17;
case 0x6e9e1b:c.instructions+=7;goto B6e9e1b;
case 0x6e9e1e:c.instructions+=6;goto B6e9e1e;
case 0x6e9e22:c.instructions+=5;goto B6e9e22;
case 0x6e9e26:c.instructions+=4;goto B6e9e26;
case 0x6e9e27:c.instructions+=3;goto B6e9e27;
case 0x6e9e29:c.instructions+=2;goto B6e9e29;
case 0x6e9e2d:c.instructions+=1;goto B6e9e2d;
case 0x6e9e33:goto L6e9e33;
case 0x6e9e37:c.instructions+=2;goto B6e9e37;
case 0x6e9e3a:c.instructions+=1;goto B6e9e3a;
case 0x6e9e3f:goto L6e9e3f;
case 0x6e9e43:c.instructions+=9;goto B6e9e43;
case 0x6e9e47:c.instructions+=8;goto B6e9e47;
case 0x6e9e4a:c.instructions+=7;goto B6e9e4a;
case 0x6e9e4d:c.instructions+=6;goto B6e9e4d;
case 0x6e9e50:c.instructions+=5;goto B6e9e50;
case 0x6e9e52:c.instructions+=4;goto B6e9e52;
case 0x6e9e54:c.instructions+=3;goto B6e9e54;
case 0x6e9e56:c.instructions+=2;goto B6e9e56;
case 0x6e9e5e:c.instructions+=1;goto B6e9e5e;
case 0x6e9e64:goto L6e9e64;
case 0x6e9e66:c.instructions+=3;goto B6e9e66;
case 0x6e9e69:c.instructions+=2;goto B6e9e69;
case 0x6e9e6d:c.instructions+=1;goto B6e9e6d;
case 0x6e9e71:goto L6e9e71;
case 0x6e9e74:c.instructions+=75;goto B6e9e74;
case 0x6e9e78:c.instructions+=74;goto B6e9e78;
case 0x6e9e7c:c.instructions+=73;goto B6e9e7c;
case 0x6e9e80:c.instructions+=72;goto B6e9e80;
case 0x6e9e84:c.instructions+=71;goto B6e9e84;
case 0x6e9e88:c.instructions+=70;goto B6e9e88;
case 0x6e9e8c:c.instructions+=69;goto B6e9e8c;
case 0x6e9e90:c.instructions+=68;goto B6e9e90;
case 0x6e9e94:c.instructions+=67;goto B6e9e94;
case 0x6e9e97:c.instructions+=66;goto B6e9e97;
case 0x6e9e9b:c.instructions+=65;goto B6e9e9b;
case 0x6e9e9e:c.instructions+=64;goto B6e9e9e;
case 0x6e9ea1:c.instructions+=63;goto B6e9ea1;
case 0x6e9ea4:c.instructions+=62;goto B6e9ea4;
case 0x6e9ea8:c.instructions+=61;goto B6e9ea8;
case 0x6e9eac:c.instructions+=60;goto B6e9eac;
case 0x6e9eaf:c.instructions+=59;goto B6e9eaf;
case 0x6e9eb2:c.instructions+=58;goto B6e9eb2;
case 0x6e9eb6:c.instructions+=57;goto B6e9eb6;
case 0x6e9eb9:c.instructions+=56;goto B6e9eb9;
case 0x6e9ebc:c.instructions+=55;goto B6e9ebc;
case 0x6e9ebf:c.instructions+=54;goto B6e9ebf;
case 0x6e9ec3:c.instructions+=53;goto B6e9ec3;
case 0x6e9ec5:c.instructions+=52;goto B6e9ec5;
case 0x6e9ec8:c.instructions+=51;goto B6e9ec8;
case 0x6e9ecb:c.instructions+=50;goto B6e9ecb;
case 0x6e9ece:c.instructions+=49;goto B6e9ece;
case 0x6e9ed1:c.instructions+=48;goto B6e9ed1;
case 0x6e9ed5:c.instructions+=47;goto B6e9ed5;
case 0x6e9ed8:c.instructions+=46;goto B6e9ed8;
case 0x6e9edc:c.instructions+=45;goto B6e9edc;
case 0x6e9edf:c.instructions+=44;goto B6e9edf;
case 0x6e9ee3:c.instructions+=43;goto B6e9ee3;
case 0x6e9ee7:c.instructions+=42;goto B6e9ee7;
case 0x6e9eea:c.instructions+=41;goto B6e9eea;
case 0x6e9eee:c.instructions+=40;goto B6e9eee;
case 0x6e9ef1:c.instructions+=39;goto B6e9ef1;
case 0x6e9ef4:c.instructions+=38;goto B6e9ef4;
case 0x6e9ef7:c.instructions+=37;goto B6e9ef7;
case 0x6e9efa:c.instructions+=36;goto B6e9efa;
case 0x6e9efc:c.instructions+=35;goto B6e9efc;
case 0x6e9f00:c.instructions+=34;goto B6e9f00;
case 0x6e9f02:c.instructions+=33;goto B6e9f02;
case 0x6e9f06:c.instructions+=32;goto B6e9f06;
case 0x6e9f0a:c.instructions+=31;goto B6e9f0a;
case 0x6e9f0d:c.instructions+=30;goto B6e9f0d;
case 0x6e9f11:c.instructions+=29;goto B6e9f11;
case 0x6e9f14:c.instructions+=28;goto B6e9f14;
case 0x6e9f18:c.instructions+=27;goto B6e9f18;
case 0x6e9f1c:c.instructions+=26;goto B6e9f1c;
case 0x6e9f20:c.instructions+=25;goto B6e9f20;
case 0x6e9f22:c.instructions+=24;goto B6e9f22;
case 0x6e9f26:c.instructions+=23;goto B6e9f26;
case 0x6e9f2a:c.instructions+=22;goto B6e9f2a;
case 0x6e9f2d:c.instructions+=21;goto B6e9f2d;
case 0x6e9f31:c.instructions+=20;goto B6e9f31;
case 0x6e9f34:c.instructions+=19;goto B6e9f34;
case 0x6e9f38:c.instructions+=18;goto B6e9f38;
case 0x6e9f3c:c.instructions+=17;goto B6e9f3c;
case 0x6e9f40:c.instructions+=16;goto B6e9f40;
case 0x6e9f43:c.instructions+=15;goto B6e9f43;
case 0x6e9f47:c.instructions+=14;goto B6e9f47;
case 0x6e9f4b:c.instructions+=13;goto B6e9f4b;
case 0x6e9f4f:c.instructions+=12;goto B6e9f4f;
case 0x6e9f51:c.instructions+=11;goto B6e9f51;
case 0x6e9f55:c.instructions+=10;goto B6e9f55;
case 0x6e9f58:c.instructions+=9;goto B6e9f58;
case 0x6e9f5c:c.instructions+=8;goto B6e9f5c;
case 0x6e9f60:c.instructions+=7;goto B6e9f60;
case 0x6e9f64:c.instructions+=6;goto B6e9f64;
case 0x6e9f68:c.instructions+=5;goto B6e9f68;
case 0x6e9f69:c.instructions+=4;goto B6e9f69;
case 0x6e9f6d:c.instructions+=3;goto B6e9f6d;
case 0x6e9f70:c.instructions+=2;goto B6e9f70;
case 0x6e9f72:c.instructions+=1;goto B6e9f72;
case 0x6e9f78:goto L6e9f78;
case 0x6e9f7c:c.instructions+=2;goto B6e9f7c;
case 0x6e9f7f:c.instructions+=1;goto B6e9f7f;
case 0x6e9f81:goto L6e9f81;
case 0x6e9f83:c.instructions+=3;goto B6e9f83;
case 0x6e9f87:c.instructions+=2;goto B6e9f87;
case 0x6e9f8b:c.instructions+=1;goto B6e9f8b;
case 0x6e9f8d:goto L6e9f8d;
case 0x6e9f91:goto L6e9f91;
case 0x6e9f95:c.instructions+=18;goto B6e9f95;
case 0x6e9f98:c.instructions+=17;goto B6e9f98;
case 0x6e9f9c:c.instructions+=16;goto B6e9f9c;
case 0x6e9f9e:c.instructions+=15;goto B6e9f9e;
case 0x6e9fa2:c.instructions+=14;goto B6e9fa2;
case 0x6e9fa4:c.instructions+=13;goto B6e9fa4;
case 0x6e9fa7:c.instructions+=12;goto B6e9fa7;
case 0x6e9faa:c.instructions+=11;goto B6e9faa;
case 0x6e9fad:c.instructions+=10;goto B6e9fad;
case 0x6e9fb0:c.instructions+=9;goto B6e9fb0;
case 0x6e9fb4:c.instructions+=8;goto B6e9fb4;
case 0x6e9fb8:c.instructions+=7;goto B6e9fb8;
case 0x6e9fbb:c.instructions+=6;goto B6e9fbb;
case 0x6e9fbf:c.instructions+=5;goto B6e9fbf;
case 0x6e9fc3:c.instructions+=4;goto B6e9fc3;
case 0x6e9fc4:c.instructions+=3;goto B6e9fc4;
case 0x6e9fc6:c.instructions+=2;goto B6e9fc6;
case 0x6e9fca:c.instructions+=1;goto B6e9fca;
case 0x6e9fcc:goto L6e9fcc;
case 0x6e9fcf:c.instructions+=2;goto B6e9fcf;
case 0x6e9fd1:c.instructions+=1;goto B6e9fd1;
case 0x6e9fd3:goto L6e9fd3;
case 0x6e9fd5:c.instructions+=1;goto B6e9fd5;
case 0x6e9fda:goto L6e9fda;
case 0x6e9fdc:c.instructions+=3;goto B6e9fdc;
case 0x6e9fde:c.instructions+=2;goto B6e9fde;
case 0x6e9fe1:c.instructions+=1;goto B6e9fe1;
case 0x6e9fe6:goto L6e9fe6;
case 0x6e9fea:c.instructions+=4;goto B6e9fea;
case 0x6e9fed:c.instructions+=3;goto B6e9fed;
case 0x6e9fef:c.instructions+=2;goto B6e9fef;
case 0x6e9ff1:c.instructions+=1;goto B6e9ff1;
case 0x6e9ff3:goto L6e9ff3;
case 0x6e9ff6:c.instructions+=4;goto B6e9ff6;
case 0x6e9ff8:c.instructions+=3;goto B6e9ff8;
case 0x6e9ffc:c.instructions+=2;goto B6e9ffc;
case 0x6e9fff:c.instructions+=1;goto B6e9fff;
default:missing_instruction(c.pc);}
B6e9003:L6e9003:{c.instructions+=31;NFSU2_TR(0x6e9003);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9006:{NFSU2_TR(0x6e9006);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9009:{NFSU2_TR(0x6e9009);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e900d:{NFSU2_TR(0x6e900d);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9010:{NFSU2_TR(0x6e9010);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9013:{NFSU2_TR(0x6e9013);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9016:{NFSU2_TR(0x6e9016);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6e9018:{NFSU2_TR(0x6e9018);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e901c:{NFSU2_TR(0x6e901c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e901e:{NFSU2_TR(0x6e901e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9020:{NFSU2_TR(0x6e9020);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9022:{NFSU2_TR(0x6e9022);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9026:{NFSU2_TR(0x6e9026);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9029:{NFSU2_TR(0x6e9029);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e902d:{NFSU2_TR(0x6e902d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9031:{NFSU2_TR(0x6e9031);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9033:{NFSU2_TR(0x6e9033);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9037:{NFSU2_TR(0x6e9037);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e903a:{NFSU2_TR(0x6e903a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e903e:{NFSU2_TR(0x6e903e);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9042:{NFSU2_TR(0x6e9042);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9046:{NFSU2_TR(0x6e9046);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9048:{NFSU2_TR(0x6e9048);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e904c:{NFSU2_TR(0x6e904c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9050:{NFSU2_TR(0x6e9050);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9051:{NFSU2_TR(0x6e9051);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6e9054:{NFSU2_TR(0x6e9054);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6e9057:{NFSU2_TR(0x6e9057);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e905a:{NFSU2_TR(0x6e905a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e905c:{NFSU2_TR(0x6e905c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9060:{NFSU2_TR(0x6e9060);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e8fb3u,6e8);}
}
B6e9066:L6e9066:{c.instructions+=8;NFSU2_TR(0x6e9066);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e906a:{NFSU2_TR(0x6e906a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e906e:{NFSU2_TR(0x6e906e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9072:{NFSU2_TR(0x6e9072);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e9074:{NFSU2_TR(0x6e9074);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9075:{NFSU2_TR(0x6e9075);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9079:{NFSU2_TR(0x6e9079);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e907d:{NFSU2_TR(0x6e907d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6e8fa0u,6e8);}
}
B6e9083:L6e9083:{c.instructions+=1;NFSU2_TR(0x6e9083);
{goto L6e91a6;}
}
B6e9088:L6e9088:{c.instructions+=1;NFSU2_TR(0x6e9088);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e91a6;}}
}
B6e908e:L6e908e:{c.instructions+=10;NFSU2_TR(0x6e908e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9092:{NFSU2_TR(0x6e9092);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e9096:{NFSU2_TR(0x6e9096);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e9099:{NFSU2_TR(0x6e9099);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e909c:{NFSU2_TR(0x6e909c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e909f:{NFSU2_TR(0x6e909f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e90a1:{NFSU2_TR(0x6e90a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e90a5:{NFSU2_TR(0x6e90a5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6e90a6:{NFSU2_TR(0x6e90a6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e90a8:{NFSU2_TR(0x6e90a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e91a6;}}
}
B6e90ae:L6e90ae:{c.instructions+=7;NFSU2_TR(0x6e90ae);
__builtin_memmove((R+28),(R+24),4);
}
B6e90b0:{NFSU2_TR(0x6e90b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e90b3:{NFSU2_TR(0x6e90b3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6e90b5:{NFSU2_TR(0x6e90b5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e90b6:{NFSU2_TR(0x6e90b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e90ba:{NFSU2_TR(0x6e90ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e90be:{NFSU2_TR(0x6e90be);
__builtin_memmove((R+28),(R+28),4);
}
B6e90c0:L6e90c0:{c.instructions+=3;NFSU2_TR(0x6e90c0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e90c2:{NFSU2_TR(0x6e90c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e90c4:{NFSU2_TR(0x6e90c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9189;}}
}
B6e90ca:L6e90ca:{c.instructions+=3;NFSU2_TR(0x6e90ca);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e90cc:{NFSU2_TR(0x6e90cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e90d0:{NFSU2_TR(0x6e90d0);
__builtin_memmove((R+8),(R+4),4);
}
B6e90d2:L6e90d2:{c.instructions+=9;NFSU2_TR(0x6e90d2);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e90d7:{NFSU2_TR(0x6e90d7);
__builtin_memmove((R+4),(R+0),4);
}
B6e90d9:{NFSU2_TR(0x6e90d9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e90dc:{NFSU2_TR(0x6e90dc);
w4(R+28,u32(0x1ull));
}
B6e90e1:{NFSU2_TR(0x6e90e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e90e3:{NFSU2_TR(0x6e90e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e90ea:{NFSU2_TR(0x6e90ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e90ed:{NFSU2_TR(0x6e90ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e90f0:{NFSU2_TR(0x6e90f0);
if(r1(R+518)){{goto L6e916b;}}
}
B6e90f2:L6e90f2:{c.instructions+=38;NFSU2_TR(0x6e90f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e90f6:{NFSU2_TR(0x6e90f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e90f9:{NFSU2_TR(0x6e90f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6e90fd:{NFSU2_TR(0x6e90fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e9101:{NFSU2_TR(0x6e9101);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9105:{NFSU2_TR(0x6e9105);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e9109:{NFSU2_TR(0x6e9109);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e910d:{NFSU2_TR(0x6e910d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9111:{NFSU2_TR(0x6e9111);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B6e9114:{NFSU2_TR(0x6e9114);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9117:{NFSU2_TR(0x6e9117);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e911a:{NFSU2_TR(0x6e911a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e911e:{NFSU2_TR(0x6e911e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9122:{NFSU2_TR(0x6e9122);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9125:{NFSU2_TR(0x6e9125);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9128:{NFSU2_TR(0x6e9128);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e912c:{NFSU2_TR(0x6e912c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e912f:{NFSU2_TR(0x6e912f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9132:{NFSU2_TR(0x6e9132);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9135:{NFSU2_TR(0x6e9135);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6e9137:{NFSU2_TR(0x6e9137);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e913b:{NFSU2_TR(0x6e913b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e913d:{NFSU2_TR(0x6e913d);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e913f:{NFSU2_TR(0x6e913f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9141:{NFSU2_TR(0x6e9141);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9145:{NFSU2_TR(0x6e9145);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9148:{NFSU2_TR(0x6e9148);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e914c:{NFSU2_TR(0x6e914c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9150:{NFSU2_TR(0x6e9150);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9152:{NFSU2_TR(0x6e9152);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9154:{NFSU2_TR(0x6e9154);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9158:{NFSU2_TR(0x6e9158);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e915b:{NFSU2_TR(0x6e915b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e915d:{NFSU2_TR(0x6e915d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9161:{NFSU2_TR(0x6e9161);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9163:{NFSU2_TR(0x6e9163);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9165:{NFSU2_TR(0x6e9165);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9169:{NFSU2_TR(0x6e9169);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e916b:L6e916b:{c.instructions+=9;NFSU2_TR(0x6e916b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e916f:{NFSU2_TR(0x6e916f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9173:{NFSU2_TR(0x6e9173);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9174:{NFSU2_TR(0x6e9174);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6e9177:{NFSU2_TR(0x6e9177);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6e917a:{NFSU2_TR(0x6e917a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e917d:{NFSU2_TR(0x6e917d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e917f:{NFSU2_TR(0x6e917f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9183:{NFSU2_TR(0x6e9183);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e90d2u);}goto L6e90d2;}}
}
B6e9189:L6e9189:{c.instructions+=8;NFSU2_TR(0x6e9189);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e918d:{NFSU2_TR(0x6e918d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e9191:{NFSU2_TR(0x6e9191);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9195:{NFSU2_TR(0x6e9195);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B6e9197:{NFSU2_TR(0x6e9197);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9198:{NFSU2_TR(0x6e9198);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e919c:{NFSU2_TR(0x6e919c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e91a0:{NFSU2_TR(0x6e91a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e90c0u);}goto L6e90c0;}}
}
B6e91a6:L6e91a6:{c.instructions+=9;NFSU2_TR(0x6e91a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e91aa:{NFSU2_TR(0x6e91aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e91ae:{NFSU2_TR(0x6e91ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e91b1:{NFSU2_TR(0x6e91b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e91b4:{NFSU2_TR(0x6e91b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e91b6:{NFSU2_TR(0x6e91b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e91b9:{NFSU2_TR(0x6e91b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e91bd:{NFSU2_TR(0x6e91bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e91c5:{NFSU2_TR(0x6e91c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e91ec;}}
}
B6e91c7:L6e91c7:{c.instructions+=6;NFSU2_TR(0x6e91c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e91cb:{NFSU2_TR(0x6e91cb);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e91d2:{NFSU2_TR(0x6e91d2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e91d4:{NFSU2_TR(0x6e91d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e91d6:{NFSU2_TR(0x6e91d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e91d9:{NFSU2_TR(0x6e91d9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e9389;}}
}
B6e91df:L6e91df:{c.instructions+=4;NFSU2_TR(0x6e91df);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e91e6:{NFSU2_TR(0x6e91e6);
w1(R+0,u8(0x1ull));
}
B6e91e8:{NFSU2_TR(0x6e91e8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e91ea:{NFSU2_TR(0x6e91ea);
{goto L6e925e;}
}
B6e91ec:L6e91ec:{c.instructions+=2;NFSU2_TR(0x6e91ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e91ee:{NFSU2_TR(0x6e91ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9222;}}
}
B6e91f0:L6e91f0:{c.instructions+=5;NFSU2_TR(0x6e91f0);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e91f7:{NFSU2_TR(0x6e91f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e91fd:{NFSU2_TR(0x6e91fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e91ff:{NFSU2_TR(0x6e91ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9202:{NFSU2_TR(0x6e9202);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e921e;}}
}
B6e9204:L6e9204:{c.instructions+=7;NFSU2_TR(0x6e9204);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B6e9207:{NFSU2_TR(0x6e9207);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e920b:{NFSU2_TR(0x6e920b);
w1(R+0,u8(0x1ull));
}
B6e920d:{NFSU2_TR(0x6e920d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9211:{NFSU2_TR(0x6e9211);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e9218:{NFSU2_TR(0x6e9218);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e921c:{NFSU2_TR(0x6e921c);
{goto L6e9264;}
}
B6e921e:L6e921e:{c.instructions+=2;NFSU2_TR(0x6e921e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e9220:{NFSU2_TR(0x6e9220);
{goto L6e9264;}
}
B6e9222:L6e9222:{c.instructions+=8;NFSU2_TR(0x6e9222);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e9227:{NFSU2_TR(0x6e9227);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e922b:{NFSU2_TR(0x6e922b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e922f:{NFSU2_TR(0x6e922f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9236:{NFSU2_TR(0x6e9236);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e9238:{NFSU2_TR(0x6e9238);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e923a:{NFSU2_TR(0x6e923a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e923d:{NFSU2_TR(0x6e923d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e9389;}}
}
B6e9243:L6e9243:{c.instructions+=8;NFSU2_TR(0x6e9243);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e9247:{NFSU2_TR(0x6e9247);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e924e:{NFSU2_TR(0x6e924e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9250:{NFSU2_TR(0x6e9250);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9254:{NFSU2_TR(0x6e9254);
w1(R+0,u8(0x1ull));
}
B6e9256:{NFSU2_TR(0x6e9256);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e925a:{NFSU2_TR(0x6e925a);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e925c:{NFSU2_TR(0x6e925c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6e925e:L6e925e:{c.instructions+=1;NFSU2_TR(0x6e925e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9262:L6e9262:{c.instructions+=1;NFSU2_TR(0x6e9262);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9264:L6e9264:{c.instructions+=3;NFSU2_TR(0x6e9264);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e9266:{NFSU2_TR(0x6e9266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e9269:{NFSU2_TR(0x6e9269);
if(r1(R+518)){{goto L6e9642;}}
}
B6e926f:L6e926f:{c.instructions+=4;NFSU2_TR(0x6e926f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9273:{NFSU2_TR(0x6e9273);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e9274:{NFSU2_TR(0x6e9274);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9276:{NFSU2_TR(0x6e9276);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e9642;}}
}
B6e927c:L6e927c:{c.instructions+=19;NFSU2_TR(0x6e927c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9280:{NFSU2_TR(0x6e9280);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9284:{NFSU2_TR(0x6e9284);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B6e9286:{NFSU2_TR(0x6e9286);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e9289:{NFSU2_TR(0x6e9289);
w4(R+0,u32(0x1ull));
}
B6e928e:{NFSU2_TR(0x6e928e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e9290:{NFSU2_TR(0x6e9290);
__builtin_memmove((R+12),(R+20),4);
}
B6e9292:{NFSU2_TR(0x6e9292);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e9293:{NFSU2_TR(0x6e9293);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e9296:{NFSU2_TR(0x6e9296);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e929a:{NFSU2_TR(0x6e929a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6e929d:{NFSU2_TR(0x6e929d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e92a0:{NFSU2_TR(0x6e92a0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6e92a2:{NFSU2_TR(0x6e92a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e92a5:{NFSU2_TR(0x6e92a5);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e92a9:{NFSU2_TR(0x6e92a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e92ad:{NFSU2_TR(0x6e92ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e92b1:{NFSU2_TR(0x6e92b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e92b4:{NFSU2_TR(0x6e92b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9390;}}
}
B6e92ba:L6e92ba:{c.instructions+=4;NFSU2_TR(0x6e92ba);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e92bc:{NFSU2_TR(0x6e92bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e92be:{NFSU2_TR(0x6e92be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e92c2:{NFSU2_TR(0x6e92c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e96a3;}}
}
B6e92c8:L6e92c8:{c.instructions+=2;NFSU2_TR(0x6e92c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e92ca:{NFSU2_TR(0x6e92ca);
__builtin_memmove((R+12),(R+12),4);
}
B6e92d0:L6e92d0:{c.instructions+=9;NFSU2_TR(0x6e92d0);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B6e92d5:{NFSU2_TR(0x6e92d5);
__builtin_memmove((R+4),(R+8),4);
}
B6e92d7:{NFSU2_TR(0x6e92d7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e92da:{NFSU2_TR(0x6e92da);
w4(R+28,u32(0x1ull));
}
B6e92df:{NFSU2_TR(0x6e92df);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e92e1:{NFSU2_TR(0x6e92e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e92e8:{NFSU2_TR(0x6e92e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6e92eb:{NFSU2_TR(0x6e92eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e92ee:{NFSU2_TR(0x6e92ee);
if(r1(R+518)){{goto L6e9369;}}
}
B6e92f0:L6e92f0:{c.instructions+=33;NFSU2_TR(0x6e92f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e92f3:{NFSU2_TR(0x6e92f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e92f6:{NFSU2_TR(0x6e92f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e92f9:{NFSU2_TR(0x6e92f9);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e92fc:{NFSU2_TR(0x6e92fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9303:{NFSU2_TR(0x6e9303);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9305:{NFSU2_TR(0x6e9305);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9309:{NFSU2_TR(0x6e9309);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e930b:{NFSU2_TR(0x6e930b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e930e:{NFSU2_TR(0x6e930e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9311:{NFSU2_TR(0x6e9311);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9315:{NFSU2_TR(0x6e9315);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9318:{NFSU2_TR(0x6e9318);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e931b:{NFSU2_TR(0x6e931b);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e931f:{NFSU2_TR(0x6e931f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9326:{NFSU2_TR(0x6e9326);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e932a:{NFSU2_TR(0x6e932a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e932e:{NFSU2_TR(0x6e932e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9332:{NFSU2_TR(0x6e9332);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9334:{NFSU2_TR(0x6e9334);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e9337:{NFSU2_TR(0x6e9337);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e933b:{NFSU2_TR(0x6e933b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e933f:{NFSU2_TR(0x6e933f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9342:{NFSU2_TR(0x6e9342);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9345:{NFSU2_TR(0x6e9345);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9349:{NFSU2_TR(0x6e9349);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9350:{NFSU2_TR(0x6e9350);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9354:{NFSU2_TR(0x6e9354);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e9358:{NFSU2_TR(0x6e9358);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e935c:{NFSU2_TR(0x6e935c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e935e:{NFSU2_TR(0x6e935e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e9361:{NFSU2_TR(0x6e9361);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9365:{NFSU2_TR(0x6e9365);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9369:L6e9369:{c.instructions+=8;NFSU2_TR(0x6e9369);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e936d:{NFSU2_TR(0x6e936d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9371:{NFSU2_TR(0x6e9371);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e9374:{NFSU2_TR(0x6e9374);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e9375:{NFSU2_TR(0x6e9375);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6e9378:{NFSU2_TR(0x6e9378);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e937a:{NFSU2_TR(0x6e937a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e937e:{NFSU2_TR(0x6e937e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e92d0u);}goto L6e92d0;}}
}
B6e9384:L6e9384:{c.instructions+=1;NFSU2_TR(0x6e9384);
{goto L6e96a3;}
}
B6e9389:L6e9389:{c.instructions+=2;NFSU2_TR(0x6e9389);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e938b:{NFSU2_TR(0x6e938b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9262u);}goto L6e9262;}
}
B6e9390:L6e9390:{c.instructions+=2;NFSU2_TR(0x6e9390);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9394:{NFSU2_TR(0x6e9394);
if(r1(R+518)){{goto L6e94d7;}}
}
B6e939a:L6e939a:{c.instructions+=4;NFSU2_TR(0x6e939a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e939c:{NFSU2_TR(0x6e939c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e939e:{NFSU2_TR(0x6e939e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93a2:{NFSU2_TR(0x6e93a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e96a3;}}
}
B6e93a8:L6e93a8:{c.instructions+=3;NFSU2_TR(0x6e93a8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e93aa:{NFSU2_TR(0x6e93aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e93ad:{NFSU2_TR(0x6e93ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93b1:L6e93b1:{c.instructions+=9;NFSU2_TR(0x6e93b1);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e93b6:{NFSU2_TR(0x6e93b6);
__builtin_memmove((R+4),(R+0),4);
}
B6e93b8:{NFSU2_TR(0x6e93b8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e93bb:{NFSU2_TR(0x6e93bb);
w4(R+20,u32(0x1ull));
}
B6e93c0:{NFSU2_TR(0x6e93c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e93c2:{NFSU2_TR(0x6e93c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e93c9:{NFSU2_TR(0x6e93c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e93cc:{NFSU2_TR(0x6e93cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e93cf:{NFSU2_TR(0x6e93cf);
if(r1(R+518)){{goto L6e94a5;}}
}
B6e93d5:L6e93d5:{c.instructions+=59;NFSU2_TR(0x6e93d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e93d8:{NFSU2_TR(0x6e93d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e93db:{NFSU2_TR(0x6e93db);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6e93df:{NFSU2_TR(0x6e93df);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e93e3:{NFSU2_TR(0x6e93e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93e7:{NFSU2_TR(0x6e93e7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6e93e9:{NFSU2_TR(0x6e93e9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e93ed:{NFSU2_TR(0x6e93ed);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e93f0:{NFSU2_TR(0x6e93f0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e93f2:{NFSU2_TR(0x6e93f2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e93f4:{NFSU2_TR(0x6e93f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e93f8:{NFSU2_TR(0x6e93f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93fc:{NFSU2_TR(0x6e93fc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9400:{NFSU2_TR(0x6e9400);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9403:{NFSU2_TR(0x6e9403);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9406:{NFSU2_TR(0x6e9406);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9409:{NFSU2_TR(0x6e9409);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(r2(U+0)));
}
B6e940c:{NFSU2_TR(0x6e940c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9410:{NFSU2_TR(0x6e9410);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9414:{NFSU2_TR(0x6e9414);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9417:{NFSU2_TR(0x6e9417);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e941a:{NFSU2_TR(0x6e941a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e941d:{NFSU2_TR(0x6e941d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9421:{NFSU2_TR(0x6e9421);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9425:{NFSU2_TR(0x6e9425);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9428:{NFSU2_TR(0x6e9428);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e942c:{NFSU2_TR(0x6e942c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e942f:{NFSU2_TR(0x6e942f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9432:{NFSU2_TR(0x6e9432);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9435:{NFSU2_TR(0x6e9435);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e943c:{NFSU2_TR(0x6e943c);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e943f:{NFSU2_TR(0x6e943f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6e9441:{NFSU2_TR(0x6e9441);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9445:{NFSU2_TR(0x6e9445);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9447:{NFSU2_TR(0x6e9447);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6e944a:{NFSU2_TR(0x6e944a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e944d:{NFSU2_TR(0x6e944d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9451:{NFSU2_TR(0x6e9451);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9454:{NFSU2_TR(0x6e9454);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9457:{NFSU2_TR(0x6e9457);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e945b:{NFSU2_TR(0x6e945b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9462:{NFSU2_TR(0x6e9462);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9466:{NFSU2_TR(0x6e9466);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e946a:{NFSU2_TR(0x6e946a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e946e:{NFSU2_TR(0x6e946e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9470:{NFSU2_TR(0x6e9470);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6e9473:{NFSU2_TR(0x6e9473);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9477:{NFSU2_TR(0x6e9477);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e947b:{NFSU2_TR(0x6e947b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e947e:{NFSU2_TR(0x6e947e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9481:{NFSU2_TR(0x6e9481);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9485:{NFSU2_TR(0x6e9485);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e948c:{NFSU2_TR(0x6e948c);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9490:{NFSU2_TR(0x6e9490);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9494:{NFSU2_TR(0x6e9494);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9498:{NFSU2_TR(0x6e9498);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e949a:{NFSU2_TR(0x6e949a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6e949d:{NFSU2_TR(0x6e949d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e94a1:{NFSU2_TR(0x6e94a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e94a5:L6e94a5:{c.instructions+=13;NFSU2_TR(0x6e94a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e94a9:{NFSU2_TR(0x6e94a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e94ad:{NFSU2_TR(0x6e94ad);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e94b0:{NFSU2_TR(0x6e94b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94b4:{NFSU2_TR(0x6e94b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e94b8:{NFSU2_TR(0x6e94b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e94bc:{NFSU2_TR(0x6e94bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e94bf:{NFSU2_TR(0x6e94bf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6e94c2:{NFSU2_TR(0x6e94c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e94c3:{NFSU2_TR(0x6e94c3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e94c6:{NFSU2_TR(0x6e94c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e94c8:{NFSU2_TR(0x6e94c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94cc:{NFSU2_TR(0x6e94cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e93b1u);}goto L6e93b1;}}
}
B6e94d2:L6e94d2:{c.instructions+=1;NFSU2_TR(0x6e94d2);
{goto L6e96a3;}
}
B6e94d7:L6e94d7:{c.instructions+=10;NFSU2_TR(0x6e94d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e94db:{NFSU2_TR(0x6e94db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6e94de:{NFSU2_TR(0x6e94de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e94e1:{NFSU2_TR(0x6e94e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e94e4:{NFSU2_TR(0x6e94e4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e94e6:{NFSU2_TR(0x6e94e6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e94e8:{NFSU2_TR(0x6e94e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e94ea:{NFSU2_TR(0x6e94ea);
__builtin_memmove((R+28),(R+0),4);
}
B6e94ec:{NFSU2_TR(0x6e94ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94f0:{NFSU2_TR(0x6e94f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e96a3;}}
}
B6e94f6:L6e94f6:{c.instructions+=4;NFSU2_TR(0x6e94f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e94f8:{NFSU2_TR(0x6e94f8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B6e94fb:{NFSU2_TR(0x6e94fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94ff:{NFSU2_TR(0x6e94ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9503:L6e9503:{c.instructions+=9;NFSU2_TR(0x6e9503);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B6e9508:{NFSU2_TR(0x6e9508);
__builtin_memmove((R+4),(R+8),4);
}
B6e950a:{NFSU2_TR(0x6e950a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e950d:{NFSU2_TR(0x6e950d);
w4(R+28,u32(0x1ull));
}
B6e9512:{NFSU2_TR(0x6e9512);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e9514:{NFSU2_TR(0x6e9514);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e951b:{NFSU2_TR(0x6e951b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6e951e:{NFSU2_TR(0x6e951e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9521:{NFSU2_TR(0x6e9521);
if(r1(R+518)){{goto L6e960f;}}
}
B6e9527:L6e9527:{c.instructions+=64;NFSU2_TR(0x6e9527);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e952a:{NFSU2_TR(0x6e952a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6e952e:{NFSU2_TR(0x6e952e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9532:{NFSU2_TR(0x6e9532);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e9536:{NFSU2_TR(0x6e9536);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e953a:{NFSU2_TR(0x6e953a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e953e:{NFSU2_TR(0x6e953e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9542:{NFSU2_TR(0x6e9542);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9546:{NFSU2_TR(0x6e9546);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B6e9549:{NFSU2_TR(0x6e9549);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e954c:{NFSU2_TR(0x6e954c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e954f:{NFSU2_TR(0x6e954f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9553:{NFSU2_TR(0x6e9553);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9557:{NFSU2_TR(0x6e9557);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e955a:{NFSU2_TR(0x6e955a);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e955d:{NFSU2_TR(0x6e955d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9561:{NFSU2_TR(0x6e9561);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9564:{NFSU2_TR(0x6e9564);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9567:{NFSU2_TR(0x6e9567);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e956b:{NFSU2_TR(0x6e956b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e956e:{NFSU2_TR(0x6e956e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9572:{NFSU2_TR(0x6e9572);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9576:{NFSU2_TR(0x6e9576);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e9579:{NFSU2_TR(0x6e9579);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e957b:{NFSU2_TR(0x6e957b);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e957e:{NFSU2_TR(0x6e957e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9581:{NFSU2_TR(0x6e9581);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9584:{NFSU2_TR(0x6e9584);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9588:{NFSU2_TR(0x6e9588);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e958b:{NFSU2_TR(0x6e958b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e958e:{NFSU2_TR(0x6e958e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e9590:{NFSU2_TR(0x6e9590);
{u32 ea_=u32(r4(R+0)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9594:{NFSU2_TR(0x6e9594);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9598:{NFSU2_TR(0x6e9598);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e959c:{NFSU2_TR(0x6e959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e959f:{NFSU2_TR(0x6e959f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e95a3:{NFSU2_TR(0x6e95a3);
{u32 ea_=u32(r4(R+0)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e95a7:{NFSU2_TR(0x6e95a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95aa:{NFSU2_TR(0x6e95aa);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e95ae:{NFSU2_TR(0x6e95ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95b2:{NFSU2_TR(0x6e95b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95b5:{NFSU2_TR(0x6e95b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e95b7:{NFSU2_TR(0x6e95b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e95bb:{NFSU2_TR(0x6e95bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e95c2:{NFSU2_TR(0x6e95c2);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e95c5:{NFSU2_TR(0x6e95c5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e95c8:{NFSU2_TR(0x6e95c8);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e95cb:{NFSU2_TR(0x6e95cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95cf:{NFSU2_TR(0x6e95cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95d2:{NFSU2_TR(0x6e95d2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e95d6:{NFSU2_TR(0x6e95d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e95dd:{NFSU2_TR(0x6e95dd);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e95e1:{NFSU2_TR(0x6e95e1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e95e4:{NFSU2_TR(0x6e95e4);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e95e8:{NFSU2_TR(0x6e95e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95ec:{NFSU2_TR(0x6e95ec);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e95f0:{NFSU2_TR(0x6e95f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e95f3:{NFSU2_TR(0x6e95f3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e95f7:{NFSU2_TR(0x6e95f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e95fe:{NFSU2_TR(0x6e95fe);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9602:{NFSU2_TR(0x6e9602);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e9605:{NFSU2_TR(0x6e9605);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9609:{NFSU2_TR(0x6e9609);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e960d:{NFSU2_TR(0x6e960d);
{goto L6e9613;}
}
B6e960f:L6e960f:{c.instructions+=1;NFSU2_TR(0x6e960f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9613:L6e9613:{c.instructions+=13;NFSU2_TR(0x6e9613);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9617:{NFSU2_TR(0x6e9617);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e961b:{NFSU2_TR(0x6e961b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6e961e:{NFSU2_TR(0x6e961e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9622:{NFSU2_TR(0x6e9622);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9626:{NFSU2_TR(0x6e9626);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e9629:{NFSU2_TR(0x6e9629);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e962a:{NFSU2_TR(0x6e962a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6e962d:{NFSU2_TR(0x6e962d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6e9630:{NFSU2_TR(0x6e9630);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9632:{NFSU2_TR(0x6e9632);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9636:{NFSU2_TR(0x6e9636);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e963a:{NFSU2_TR(0x6e963a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9503u);}goto L6e9503;}}
}
B6e9640:L6e9640:{c.instructions+=1;NFSU2_TR(0x6e9640);
{goto L6e96a3;}
}
B6e9642:L6e9642:{c.instructions+=3;NFSU2_TR(0x6e9642);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e9644:{NFSU2_TR(0x6e9644);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6e9648:{NFSU2_TR(0x6e9648);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e96a3;}}
}
B6e964a:L6e964a:{c.instructions+=2;NFSU2_TR(0x6e964a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e964c:{NFSU2_TR(0x6e964c);
__builtin_memmove((R+16),(R+16),4);
}
B6e9650:L6e9650:{c.instructions+=9;NFSU2_TR(0x6e9650);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e9655:{NFSU2_TR(0x6e9655);
__builtin_memmove((R+4),(R+0),4);
}
B6e9657:{NFSU2_TR(0x6e9657);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e965a:{NFSU2_TR(0x6e965a);
w4(R+12,u32(0x1ull));
}
B6e965f:{NFSU2_TR(0x6e965f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e9661:{NFSU2_TR(0x6e9661);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9668:{NFSU2_TR(0x6e9668);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e966b:{NFSU2_TR(0x6e966b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e966e:{NFSU2_TR(0x6e966e);
if(r1(R+518)){{goto L6e9697;}}
}
B6e9670:L6e9670:{c.instructions+=12;NFSU2_TR(0x6e9670);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9674:{NFSU2_TR(0x6e9674);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9677:{NFSU2_TR(0x6e9677);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6e967b:{NFSU2_TR(0x6e967b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9682:{NFSU2_TR(0x6e9682);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e9684:{NFSU2_TR(0x6e9684);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e9687:{NFSU2_TR(0x6e9687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e9689:{NFSU2_TR(0x6e9689);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e968b:{NFSU2_TR(0x6e968b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e968e:{NFSU2_TR(0x6e968e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9691:{NFSU2_TR(0x6e9691);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9694:{NFSU2_TR(0x6e9694);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9697:L6e9697:{c.instructions+=5;NFSU2_TR(0x6e9697);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e969b:{NFSU2_TR(0x6e969b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e969c:{NFSU2_TR(0x6e969c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e969f:{NFSU2_TR(0x6e969f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e96a1:{NFSU2_TR(0x6e96a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9650u);}goto L6e9650;}}
}
B6e96a3:L6e96a3:{c.instructions+=3;NFSU2_TR(0x6e96a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6e96a6:{NFSU2_TR(0x6e96a6);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e96a8:{NFSU2_TR(0x6e96a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e976f;}}
}
B6e96ae:L6e96ae:{c.instructions+=2;NFSU2_TR(0x6e96ae);
__builtin_memmove((R+4),(R+20),4);
}
B6e96b0:{NFSU2_TR(0x6e96b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e96b5ull));
TAIL_STATIC(0x6e88f0u,6e8);
}
B6e96b5:L6e96b5:{c.instructions+=4;NFSU2_TR(0x6e96b5);
__builtin_memmove((R+4),(R+20),4);
}
B6e96b7:{NFSU2_TR(0x6e96b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e96bb:{NFSU2_TR(0x6e96bb);
w4(R+28,u32(r1(R+12)));
}
B6e96be:{NFSU2_TR(0x6e96be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e96c3ull));
TAIL_STATIC(0x6e88f0u,6e8);
}
B6e96c3:L6e96c3:{c.instructions+=5;NFSU2_TR(0x6e96c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6e96c7:{NFSU2_TR(0x6e96c7);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B6e96ca:{NFSU2_TR(0x6e96ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e96cc:{NFSU2_TR(0x6e96cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e96d4:{NFSU2_TR(0x6e96d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e976f;}}
}
B6e96da:L6e96da:{c.instructions+=1;NFSU2_TR(0x6e96da);
__builtin_memmove((R+12),(R+12),4);
}
B6e96e0:L6e96e0:{c.instructions+=20;NFSU2_TR(0x6e96e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e96e4:{NFSU2_TR(0x6e96e4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+28),(U+0),2);
}
B6e96e7:{NFSU2_TR(0x6e96e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6e96ea:{NFSU2_TR(0x6e96ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e96ee:{NFSU2_TR(0x6e96ee);
w4(R+12,u32(r2(R+28)));
}
B6e96f1:{NFSU2_TR(0x6e96f1);
w4(R+0,u32(0x2aaaaaabull));
}
B6e96f6:{NFSU2_TR(0x6e96f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e96f8:{NFSU2_TR(0x6e96f8);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e96fa:{NFSU2_TR(0x6e96fa);
__builtin_memmove((R+4),(R+8),4);
}
B6e96fc:{NFSU2_TR(0x6e96fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e96ff:{NFSU2_TR(0x6e96ff);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e9701:{NFSU2_TR(0x6e9701);
w4(R+0,u32(r2(R+8)));
}
B6e9704:{NFSU2_TR(0x6e9704);
__builtin_memmove((R+4),(R+0),4);
}
B6e9706:{NFSU2_TR(0x6e9706);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e9709:{NFSU2_TR(0x6e9709);
w4(R+8,u32(0x1ull));
}
B6e970e:{NFSU2_TR(0x6e970e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e9710:{NFSU2_TR(0x6e9710);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9717:{NFSU2_TR(0x6e9717);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e971a:{NFSU2_TR(0x6e971a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e971d:{NFSU2_TR(0x6e971d);
if(r1(R+518)){{goto L6e9757;}}
}
B6e971f:L6e971f:{c.instructions+=17;NFSU2_TR(0x6e971f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e9721:{NFSU2_TR(0x6e9721);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9728:{NFSU2_TR(0x6e9728);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e972b:{NFSU2_TR(0x6e972b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e972e:{NFSU2_TR(0x6e972e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9735:{NFSU2_TR(0x6e9735);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e9736:{NFSU2_TR(0x6e9736);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e9739:{NFSU2_TR(0x6e9739);
w4(R+4,u32(r2(R+28)));
}
B6e973c:{NFSU2_TR(0x6e973c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e973f:{NFSU2_TR(0x6e973f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e9742:{NFSU2_TR(0x6e9742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e9744:{NFSU2_TR(0x6e9744);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e974b:{NFSU2_TR(0x6e974b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e974c:{NFSU2_TR(0x6e974c);
w4(R+4,u32(r2(R+28)));
}
B6e974f:{NFSU2_TR(0x6e974f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e9752:{NFSU2_TR(0x6e9752);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e9755:{NFSU2_TR(0x6e9755);
{goto L6e975a;}
}
B6e9757:L6e9757:{c.instructions+=1;NFSU2_TR(0x6e9757);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6e975a:L6e975a:{c.instructions+=6;NFSU2_TR(0x6e975a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e975e:{NFSU2_TR(0x6e975e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e9762:{NFSU2_TR(0x6e9762);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e9763:{NFSU2_TR(0x6e9763);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9765:{NFSU2_TR(0x6e9765);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9769:{NFSU2_TR(0x6e9769);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e96e0u);}goto L6e96e0;}}
}
B6e976f:L6e976f:{c.instructions+=7;NFSU2_TR(0x6e976f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e9770:{NFSU2_TR(0x6e9770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e9771:{NFSU2_TR(0x6e9771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e9772:{NFSU2_TR(0x6e9772);
w1(R+0,u8(0x1ull));
}
B6e9774:{NFSU2_TR(0x6e9774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e9775:{NFSU2_TR(0x6e9775);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x90ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e977b:{NFSU2_TR(0x6e977b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e9780:L6e9780:{c.instructions+=6;NFSU2_TR(0x6e9780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6e9783:{NFSU2_TR(0x6e9783);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e9784:{NFSU2_TR(0x6e9784);
__builtin_memmove((R+24),(R+4),4);
}
B6e9786:{NFSU2_TR(0x6e9786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9789:{NFSU2_TR(0x6e9789);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e978b:{NFSU2_TR(0x6e978b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9792;}}
}
B6e978d:L6e978d:{c.instructions+=1;NFSU2_TR(0x6e978d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e9792ull));
TAIL_STATIC(0x6e89c0u,6e8);
}
B6e9792:L6e9792:{c.instructions+=3;NFSU2_TR(0x6e9792);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9796:{NFSU2_TR(0x6e9796);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9798:{NFSU2_TR(0x6e9798);
if(r1(R+518)){{goto L6e97b3;}}
}
B6e979a:L6e979a:{c.instructions+=7;NFSU2_TR(0x6e979a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e979e:{NFSU2_TR(0x6e979e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e979f:{NFSU2_TR(0x6e979f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e97a3:{NFSU2_TR(0x6e97a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e97a4:{NFSU2_TR(0x6e97a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e97a5:{NFSU2_TR(0x6e97a5);
__builtin_memmove((R+4),(R+24),4);
}
B6e97a7:{NFSU2_TR(0x6e97a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e97acull));
TAIL_STATIC(0x6e8cd0u,6e8);
}
B6e97ac:L6e97ac:{c.instructions+=3;NFSU2_TR(0x6e97ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e97ad:{NFSU2_TR(0x6e97ad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e97b0:{NFSU2_TR(0x6e97b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e97b3:L6e97b3:{c.instructions+=4;NFSU2_TR(0x6e97b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e97b6:{NFSU2_TR(0x6e97b6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6e97b9:{NFSU2_TR(0x6e97b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e97bb:{NFSU2_TR(0x6e97bb);
if(r1(R+518)){{goto L6e97ca;}}
}
B6e97bd:L6e97bd:{c.instructions+=3;NFSU2_TR(0x6e97bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e97c0:{NFSU2_TR(0x6e97c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e97c3:{NFSU2_TR(0x6e97c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e97ca:L6e97ca:{c.instructions+=7;NFSU2_TR(0x6e97ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e97ce:{NFSU2_TR(0x6e97ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e97cf:{NFSU2_TR(0x6e97cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e97d0:{NFSU2_TR(0x6e97d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e97d1:{NFSU2_TR(0x6e97d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e97d4:{NFSU2_TR(0x6e97d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e97d5:{NFSU2_TR(0x6e97d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e97daull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6e97da:L6e97da:{c.instructions+=5;NFSU2_TR(0x6e97da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e97dd:{NFSU2_TR(0x6e97dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e97e0:{NFSU2_TR(0x6e97e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e97e2:{NFSU2_TR(0x6e97e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e97e6:{NFSU2_TR(0x6e97e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9801;}}
}
B6e97e8:L6e97e8:{c.instructions+=2;NFSU2_TR(0x6e97e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e97ea:{NFSU2_TR(0x6e97ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e97f0;}}
}
B6e97ec:L6e97ec:{c.instructions+=2;NFSU2_TR(0x6e97ec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e97ee:{NFSU2_TR(0x6e97ee);
{goto L6e9859;}
}
B6e97f0:L6e97f0:{c.instructions+=3;NFSU2_TR(0x6e97f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e97f4:{NFSU2_TR(0x6e97f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e97f6:{NFSU2_TR(0x6e97f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e97fd;}}
}
B6e97f8:L6e97f8:{c.instructions+=2;NFSU2_TR(0x6e97f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e97fb:{NFSU2_TR(0x6e97fb);
{goto L6e9859;}
}
B6e97fd:L6e97fd:{c.instructions+=2;NFSU2_TR(0x6e97fd);
__builtin_memmove((R+8),(R+0),4);
}
B6e97ff:{NFSU2_TR(0x6e97ff);
{goto L6e9859;}
}
B6e9801:L6e9801:{c.instructions+=3;NFSU2_TR(0x6e9801);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(r2(U+0)));
}
B6e9804:{NFSU2_TR(0x6e9804);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9806:{NFSU2_TR(0x6e9806);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e980c;}}
}
B6e9808:L6e9808:{c.instructions+=2;NFSU2_TR(0x6e9808);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e980a:{NFSU2_TR(0x6e980a);
{goto L6e9859;}
}
B6e980c:L6e980c:{c.instructions+=3;NFSU2_TR(0x6e980c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e980f:{NFSU2_TR(0x6e980f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9812:{NFSU2_TR(0x6e9812);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e9818;}}
}
B6e9814:L6e9814:{c.instructions+=2;NFSU2_TR(0x6e9814);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e9816:{NFSU2_TR(0x6e9816);
{goto L6e9819;}
}
B6e9818:L6e9818:{c.instructions+=1;NFSU2_TR(0x6e9818);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e9819:L6e9819:{c.instructions+=4;NFSU2_TR(0x6e9819);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e981d:{NFSU2_TR(0x6e981d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e981f:{NFSU2_TR(0x6e981f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e9822:{NFSU2_TR(0x6e9822);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e9843;}}
}
B6e9824:L6e9824:{c.instructions+=4;NFSU2_TR(0x6e9824);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9828:{NFSU2_TR(0x6e9828);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e982b:{NFSU2_TR(0x6e982b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e982d:{NFSU2_TR(0x6e982d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e9856;}}
}
B6e982f:L6e982f:{c.instructions+=1;NFSU2_TR(0x6e982f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B6e9832:L6e9832:{c.instructions+=3;NFSU2_TR(0x6e9832);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B6e9835:{NFSU2_TR(0x6e9835);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9837:{NFSU2_TR(0x6e9837);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e9856;}}
}
B6e9839:L6e9839:{c.instructions+=4;NFSU2_TR(0x6e9839);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e983a:{NFSU2_TR(0x6e983a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B6e983d:{NFSU2_TR(0x6e983d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e983f:{NFSU2_TR(0x6e983f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9832u);}goto L6e9832;}}
}
B6e9841:L6e9841:{c.instructions+=1;NFSU2_TR(0x6e9841);
{goto L6e9856;}
}
B6e9843:L6e9843:{c.instructions+=2;NFSU2_TR(0x6e9843);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9845:{NFSU2_TR(0x6e9845);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9856;}}
}
B6e9847:L6e9847:{c.instructions+=3;NFSU2_TR(0x6e9847);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B6e984a:{NFSU2_TR(0x6e984a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e984c:{NFSU2_TR(0x6e984c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9856;}}
}
B6e984e:L6e984e:{c.instructions+=4;NFSU2_TR(0x6e984e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e984f:{NFSU2_TR(0x6e984f);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x2ull))));
}
B6e9852:{NFSU2_TR(0x6e9852);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9854:{NFSU2_TR(0x6e9854);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9847u);}goto L6e9847;}}
}
B6e9856:L6e9856:{c.instructions+=1;NFSU2_TR(0x6e9856);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e9859:L6e9859:{c.instructions+=36;NFSU2_TR(0x6e9859);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e985d:{NFSU2_TR(0x6e985d);
w4(R+4,u32(0x1full));
}
B6e9862:{NFSU2_TR(0x6e9862);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6e9864:{NFSU2_TR(0x6e9864);
w4(R+0,u32(0x7fffffffull));
}
B6e9869:{NFSU2_TR(0x6e9869);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6e986b:{NFSU2_TR(0x6e986b);
__builtin_memmove((R+4),(R+12),4);
}
B6e986d:{NFSU2_TR(0x6e986d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9871:{NFSU2_TR(0x6e9871);
__builtin_memmove((R+20),(R+8),4);
}
B6e9873:{NFSU2_TR(0x6e9873);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9877:{NFSU2_TR(0x6e9877);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6e9879:{NFSU2_TR(0x6e9879);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e987d:{NFSU2_TR(0x6e987d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9881:{NFSU2_TR(0x6e9881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9884:{NFSU2_TR(0x6e9884);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9888:{NFSU2_TR(0x6e9888);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6e988a:{NFSU2_TR(0x6e988a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B6e988c:{NFSU2_TR(0x6e988c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9890:{NFSU2_TR(0x6e9890);
__builtin_memmove((R+12),(R+28),4);
}
B6e9892:{NFSU2_TR(0x6e9892);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9896:{NFSU2_TR(0x6e9896);
w4(R+0,u32(0x1ull));
}
B6e989b:{NFSU2_TR(0x6e989b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e989d:{NFSU2_TR(0x6e989d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e98a0:{NFSU2_TR(0x6e98a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98a4:{NFSU2_TR(0x6e98a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e98a5:{NFSU2_TR(0x6e98a5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e98a8:{NFSU2_TR(0x6e98a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e98ac:{NFSU2_TR(0x6e98ac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6e98af:{NFSU2_TR(0x6e98af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e98b2:{NFSU2_TR(0x6e98b2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6e98b4:{NFSU2_TR(0x6e98b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e98b7:{NFSU2_TR(0x6e98b7);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6e98bb:{NFSU2_TR(0x6e98bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e98bf:{NFSU2_TR(0x6e98bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98c3:{NFSU2_TR(0x6e98c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6e98c7:{NFSU2_TR(0x6e98c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98cb:{NFSU2_TR(0x6e98cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e98db;}}
}
B6e98cd:L6e98cd:{c.instructions+=4;NFSU2_TR(0x6e98cd);
__builtin_memmove((R+0),gp(0x811e32),1);
}
B6e98d2:{NFSU2_TR(0x6e98d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e98d4:{NFSU2_TR(0x6e98d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e98d9:{NFSU2_TR(0x6e98d9);
if(r1(R+518)){{goto L6e98e0;}}
}
B6e98db:L6e98db:{c.instructions+=1;NFSU2_TR(0x6e98db);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e98e0:L6e98e0:{c.instructions+=3;NFSU2_TR(0x6e98e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e98e3:{NFSU2_TR(0x6e98e3);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e98e7:{NFSU2_TR(0x6e98e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9904;}}
}
B6e98e9:L6e98e9:{c.instructions+=7;NFSU2_TR(0x6e98e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e98ec:{NFSU2_TR(0x6e98ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e98ef:{NFSU2_TR(0x6e98ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98f2:{NFSU2_TR(0x6e98f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98f5:{NFSU2_TR(0x6e98f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98f8:{NFSU2_TR(0x6e98f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e98ff:{NFSU2_TR(0x6e98ff);
{goto L6e9b76;}
}
B6e9904:L6e9904:{c.instructions+=2;NFSU2_TR(0x6e9904);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9907:{NFSU2_TR(0x6e9907);
if(r1(R+518)){{goto L6e992a;}}
}
B6e9909:L6e9909:{c.instructions+=2;NFSU2_TR(0x6e9909);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e990d:{NFSU2_TR(0x6e990d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e992a;}}
}
B6e990f:L6e990f:{c.instructions+=3;NFSU2_TR(0x6e990f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e9913:{NFSU2_TR(0x6e9913);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9915:{NFSU2_TR(0x6e9915);
if(r1(R+518)){{goto L6e992e;}}
}
B6e9917:L6e9917:{c.instructions+=3;NFSU2_TR(0x6e9917);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e991b:{NFSU2_TR(0x6e991b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e991d:{NFSU2_TR(0x6e991d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e992e;}}
}
B6e991f:L6e991f:{c.instructions+=3;NFSU2_TR(0x6e991f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B6e9923:{NFSU2_TR(0x6e9923);
__builtin_memmove((R+8),(R+4),4);
}
B6e9925:{NFSU2_TR(0x6e9925);
{goto L6e99bc;}
}
B6e992a:L6e992a:{c.instructions+=1;NFSU2_TR(0x6e992a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e992e:L6e992e:{c.instructions+=4;NFSU2_TR(0x6e992e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e9930:{NFSU2_TR(0x6e9930);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9932:{NFSU2_TR(0x6e9932);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9936:{NFSU2_TR(0x6e9936);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e99ba;}}
}
B6e993c:L6e993c:{c.instructions+=3;NFSU2_TR(0x6e993c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9940:{NFSU2_TR(0x6e9940);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e9942:{NFSU2_TR(0x6e9942);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e9945:L6e9945:{c.instructions+=34;NFSU2_TR(0x6e9945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9948:{NFSU2_TR(0x6e9948);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e994c:{NFSU2_TR(0x6e994c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e994f:{NFSU2_TR(0x6e994f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e9951:{NFSU2_TR(0x6e9951);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9955:{NFSU2_TR(0x6e9955);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9959:{NFSU2_TR(0x6e9959);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6e995b:{NFSU2_TR(0x6e995b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6e995e:{NFSU2_TR(0x6e995e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9962:{NFSU2_TR(0x6e9962);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6e9965:{NFSU2_TR(0x6e9965);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9968:{NFSU2_TR(0x6e9968);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e996a:{NFSU2_TR(0x6e996a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e996c:{NFSU2_TR(0x6e996c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9970:{NFSU2_TR(0x6e9970);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9974:{NFSU2_TR(0x6e9974);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9978:{NFSU2_TR(0x6e9978);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e997b:{NFSU2_TR(0x6e997b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e997e:{NFSU2_TR(0x6e997e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9981:{NFSU2_TR(0x6e9981);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9985:{NFSU2_TR(0x6e9985);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9989:{NFSU2_TR(0x6e9989);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e998d:{NFSU2_TR(0x6e998d);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9990:{NFSU2_TR(0x6e9990);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9993:{NFSU2_TR(0x6e9993);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9997:{NFSU2_TR(0x6e9997);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e9998:{NFSU2_TR(0x6e9998);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e999b:{NFSU2_TR(0x6e999b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e999f:{NFSU2_TR(0x6e999f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6e99a2:{NFSU2_TR(0x6e99a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99a6:{NFSU2_TR(0x6e99a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e99aa:{NFSU2_TR(0x6e99aa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e99ac:{NFSU2_TR(0x6e99ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99b0:{NFSU2_TR(0x6e99b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9945u);}goto L6e9945;}}
}
B6e99b2:L6e99b2:{c.instructions+=2;NFSU2_TR(0x6e99b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e99b6:{NFSU2_TR(0x6e99b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e99ba:L6e99ba:{c.instructions+=1;NFSU2_TR(0x6e99ba);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e99bc:L6e99bc:{c.instructions+=2;NFSU2_TR(0x6e99bc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e99be:{NFSU2_TR(0x6e99be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e9a92;}}
}
B6e99c4:L6e99c4:{c.instructions+=9;NFSU2_TR(0x6e99c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e99c8:{NFSU2_TR(0x6e99c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e99cb:{NFSU2_TR(0x6e99cb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e99ce:{NFSU2_TR(0x6e99ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e99d1:{NFSU2_TR(0x6e99d1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6e99d3:{NFSU2_TR(0x6e99d3);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B6e99d5:{NFSU2_TR(0x6e99d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99d9:{NFSU2_TR(0x6e99d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99dd:{NFSU2_TR(0x6e99dd);
__builtin_memmove((R+4),(R+4),4);
}
B6e99e0:L6e99e0:{c.instructions+=4;NFSU2_TR(0x6e99e0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e99e2:{NFSU2_TR(0x6e99e2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e99e4:{NFSU2_TR(0x6e99e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99e8:{NFSU2_TR(0x6e99e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9a70;}}
}
B6e99ee:L6e99ee:{c.instructions+=2;NFSU2_TR(0x6e99ee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e99f0:{NFSU2_TR(0x6e99f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e99f3:L6e99f3:{c.instructions+=41;NFSU2_TR(0x6e99f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e99f7:{NFSU2_TR(0x6e99f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e99fa:{NFSU2_TR(0x6e99fa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6e99fc:{NFSU2_TR(0x6e99fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a00:{NFSU2_TR(0x6e9a00);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9a04:{NFSU2_TR(0x6e9a04);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9a08:{NFSU2_TR(0x6e9a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a0c:{NFSU2_TR(0x6e9a0c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B6e9a0f:{NFSU2_TR(0x6e9a0f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9a12:{NFSU2_TR(0x6e9a12);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e9a15:{NFSU2_TR(0x6e9a15);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a18:{NFSU2_TR(0x6e9a18);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6e9a1b:{NFSU2_TR(0x6e9a1b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9a1f:{NFSU2_TR(0x6e9a1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a23:{NFSU2_TR(0x6e9a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9a27:{NFSU2_TR(0x6e9a27);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9a2a:{NFSU2_TR(0x6e9a2a);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a2d:{NFSU2_TR(0x6e9a2d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9a31:{NFSU2_TR(0x6e9a31);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9a34:{NFSU2_TR(0x6e9a34);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a37:{NFSU2_TR(0x6e9a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9a3a:{NFSU2_TR(0x6e9a3a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6e9a3c:{NFSU2_TR(0x6e9a3c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a40:{NFSU2_TR(0x6e9a40);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9a41:{NFSU2_TR(0x6e9a41);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e9a43:{NFSU2_TR(0x6e9a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a47:{NFSU2_TR(0x6e9a47);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a49:{NFSU2_TR(0x6e9a49);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a4b:{NFSU2_TR(0x6e9a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9a4e:{NFSU2_TR(0x6e9a4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9a52:{NFSU2_TR(0x6e9a52);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a54:{NFSU2_TR(0x6e9a54);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a56:{NFSU2_TR(0x6e9a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9a59:{NFSU2_TR(0x6e9a59);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9a5d:{NFSU2_TR(0x6e9a5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9a61:{NFSU2_TR(0x6e9a61);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a63:{NFSU2_TR(0x6e9a63);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e9a66:{NFSU2_TR(0x6e9a66);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a68:{NFSU2_TR(0x6e9a68);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9a6c:{NFSU2_TR(0x6e9a6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9a6e:{NFSU2_TR(0x6e9a6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e99f3u);}goto L6e99f3;}}
}
B6e9a70:L6e9a70:{c.instructions+=8;NFSU2_TR(0x6e9a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9a74:{NFSU2_TR(0x6e9a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9a78:{NFSU2_TR(0x6e9a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9a7c:{NFSU2_TR(0x6e9a7c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6e9a7e:{NFSU2_TR(0x6e9a7e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9a7f:{NFSU2_TR(0x6e9a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a83:{NFSU2_TR(0x6e9a83);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a87:{NFSU2_TR(0x6e9a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e99e0u);}goto L6e99e0;}}
}
B6e9a8d:L6e9a8d:{c.instructions+=1;NFSU2_TR(0x6e9a8d);
{goto L6e9b76;}
}
B6e9a92:L6e9a92:{c.instructions+=1;NFSU2_TR(0x6e9a92);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9b76;}}
}
B6e9a98:L6e9a98:{c.instructions+=8;NFSU2_TR(0x6e9a98);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9a9c:{NFSU2_TR(0x6e9a9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e9a9f:{NFSU2_TR(0x6e9a9f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e9aa2:{NFSU2_TR(0x6e9aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e9aa5:{NFSU2_TR(0x6e9aa5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6e9aa7:{NFSU2_TR(0x6e9aa7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6e9aa8:{NFSU2_TR(0x6e9aa8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9aaa:{NFSU2_TR(0x6e9aaa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e9b76;}}
}
B6e9ab0:L6e9ab0:{c.instructions+=6;NFSU2_TR(0x6e9ab0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e9ab3:{NFSU2_TR(0x6e9ab3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B6e9ab5:{NFSU2_TR(0x6e9ab5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e9ab6:{NFSU2_TR(0x6e9ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9aba:{NFSU2_TR(0x6e9aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9abe:{NFSU2_TR(0x6e9abe);
__builtin_memmove((R+28),(R+28),4);
}
B6e9ac0:L6e9ac0:{c.instructions+=4;NFSU2_TR(0x6e9ac0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e9ac2:{NFSU2_TR(0x6e9ac2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9ac4:{NFSU2_TR(0x6e9ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9ac8:{NFSU2_TR(0x6e9ac8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9b59;}}
}
B6e9ace:L6e9ace:{c.instructions+=1;NFSU2_TR(0x6e9ace);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e9ad0:L6e9ad0:{c.instructions+=44;NFSU2_TR(0x6e9ad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9ad4:{NFSU2_TR(0x6e9ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9ad7:{NFSU2_TR(0x6e9ad7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6e9ad9:{NFSU2_TR(0x6e9ad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9add:{NFSU2_TR(0x6e9add);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9ae1:{NFSU2_TR(0x6e9ae1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9ae5:{NFSU2_TR(0x6e9ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9ae9:{NFSU2_TR(0x6e9ae9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B6e9aec:{NFSU2_TR(0x6e9aec);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9aef:{NFSU2_TR(0x6e9aef);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e9af2:{NFSU2_TR(0x6e9af2);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9af5:{NFSU2_TR(0x6e9af5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6e9af8:{NFSU2_TR(0x6e9af8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9afc:{NFSU2_TR(0x6e9afc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b00:{NFSU2_TR(0x6e9b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9b04:{NFSU2_TR(0x6e9b04);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9b07:{NFSU2_TR(0x6e9b07);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9b0a:{NFSU2_TR(0x6e9b0a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9b0e:{NFSU2_TR(0x6e9b0e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9b11:{NFSU2_TR(0x6e9b11);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9b14:{NFSU2_TR(0x6e9b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9b17:{NFSU2_TR(0x6e9b17);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6e9b19:{NFSU2_TR(0x6e9b19);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b1d:{NFSU2_TR(0x6e9b1d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9b1e:{NFSU2_TR(0x6e9b1e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b20:{NFSU2_TR(0x6e9b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b24:{NFSU2_TR(0x6e9b24);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e9b26:{NFSU2_TR(0x6e9b26);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b28:{NFSU2_TR(0x6e9b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9b2b:{NFSU2_TR(0x6e9b2b);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b2f:{NFSU2_TR(0x6e9b2f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9b33:{NFSU2_TR(0x6e9b33);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9b35:{NFSU2_TR(0x6e9b35);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b37:{NFSU2_TR(0x6e9b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9b3a:{NFSU2_TR(0x6e9b3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9b3e:{NFSU2_TR(0x6e9b3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9b40:{NFSU2_TR(0x6e9b40);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e9b43:{NFSU2_TR(0x6e9b43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9b45:{NFSU2_TR(0x6e9b45);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b47:{NFSU2_TR(0x6e9b47);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9b4b:{NFSU2_TR(0x6e9b4b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b4d:{NFSU2_TR(0x6e9b4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9b51:{NFSU2_TR(0x6e9b51);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9b53:{NFSU2_TR(0x6e9b53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9ad0u);}goto L6e9ad0;}}
}
B6e9b59:L6e9b59:{c.instructions+=8;NFSU2_TR(0x6e9b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9b5d:{NFSU2_TR(0x6e9b5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9b61:{NFSU2_TR(0x6e9b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9b65:{NFSU2_TR(0x6e9b65);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6e9b67:{NFSU2_TR(0x6e9b67);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9b68:{NFSU2_TR(0x6e9b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b6c:{NFSU2_TR(0x6e9b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b70:{NFSU2_TR(0x6e9b70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9ac0u);}goto L6e9ac0;}}
}
B6e9b76:L6e9b76:{c.instructions+=8;NFSU2_TR(0x6e9b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9b7a:{NFSU2_TR(0x6e9b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e9b7d:{NFSU2_TR(0x6e9b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b80:{NFSU2_TR(0x6e9b80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b84:{NFSU2_TR(0x6e9b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9b87:{NFSU2_TR(0x6e9b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9b89:{NFSU2_TR(0x6e9b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b91:{NFSU2_TR(0x6e9b91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9bb2;}}
}
B6e9b93:L6e9b93:{c.instructions+=6;NFSU2_TR(0x6e9b93);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9b97:{NFSU2_TR(0x6e9b97);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b9b:{NFSU2_TR(0x6e9b9b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e9b9d:{NFSU2_TR(0x6e9b9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e9b9f:{NFSU2_TR(0x6e9b9f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9ba2:{NFSU2_TR(0x6e9ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e9d0a;}}
}
B6e9ba8:L6e9ba8:{c.instructions+=4;NFSU2_TR(0x6e9ba8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9bac:{NFSU2_TR(0x6e9bac);
w1(R+0,u8(0x1ull));
}
B6e9bae:{NFSU2_TR(0x6e9bae);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9bb0:{NFSU2_TR(0x6e9bb0);
{goto L6e9c18;}
}
B6e9bb2:L6e9bb2:{c.instructions+=2;NFSU2_TR(0x6e9bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9bb4:{NFSU2_TR(0x6e9bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9be2;}}
}
B6e9bb6:L6e9bb6:{c.instructions+=5;NFSU2_TR(0x6e9bb6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9bba:{NFSU2_TR(0x6e9bba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e9bc0:{NFSU2_TR(0x6e9bc0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e9bc2:{NFSU2_TR(0x6e9bc2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9bc5:{NFSU2_TR(0x6e9bc5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e9bde;}}
}
B6e9bc7:L6e9bc7:{c.instructions+=7;NFSU2_TR(0x6e9bc7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e9bca:{NFSU2_TR(0x6e9bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9bce:{NFSU2_TR(0x6e9bce);
w1(R+0,u8(0x1ull));
}
B6e9bd0:{NFSU2_TR(0x6e9bd0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9bd4:{NFSU2_TR(0x6e9bd4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e9bd8:{NFSU2_TR(0x6e9bd8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9bdc:{NFSU2_TR(0x6e9bdc);
{goto L6e9c1e;}
}
B6e9bde:L6e9bde:{c.instructions+=2;NFSU2_TR(0x6e9bde);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e9be0:{NFSU2_TR(0x6e9be0);
{goto L6e9c1e;}
}
B6e9be2:L6e9be2:{c.instructions+=8;NFSU2_TR(0x6e9be2);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e9be7:{NFSU2_TR(0x6e9be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9beb:{NFSU2_TR(0x6e9beb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9bef:{NFSU2_TR(0x6e9bef);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9bf3:{NFSU2_TR(0x6e9bf3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e9bf5:{NFSU2_TR(0x6e9bf5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e9bf7:{NFSU2_TR(0x6e9bf7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9bfa:{NFSU2_TR(0x6e9bfa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e9d0a;}}
}
B6e9c00:L6e9c00:{c.instructions+=8;NFSU2_TR(0x6e9c00);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e9c04:{NFSU2_TR(0x6e9c04);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9c08:{NFSU2_TR(0x6e9c08);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9c0a:{NFSU2_TR(0x6e9c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9c0e:{NFSU2_TR(0x6e9c0e);
w1(R+0,u8(0x1ull));
}
B6e9c10:{NFSU2_TR(0x6e9c10);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9c14:{NFSU2_TR(0x6e9c14);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e9c16:{NFSU2_TR(0x6e9c16);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6e9c18:L6e9c18:{c.instructions+=1;NFSU2_TR(0x6e9c18);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9c1c:L6e9c1c:{c.instructions+=1;NFSU2_TR(0x6e9c1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9c1e:L6e9c1e:{c.instructions+=4;NFSU2_TR(0x6e9c1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e9c20:{NFSU2_TR(0x6e9c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9c23:{NFSU2_TR(0x6e9c23);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e9c27:{NFSU2_TR(0x6e9c27);
if(r1(R+518)){{goto L6e9f81;}}
}
B6e9c2d:L6e9c2d:{c.instructions+=4;NFSU2_TR(0x6e9c2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9c31:{NFSU2_TR(0x6e9c31);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e9c32:{NFSU2_TR(0x6e9c32);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9c34:{NFSU2_TR(0x6e9c34);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e9f81;}}
}
B6e9c3a:L6e9c3a:{c.instructions+=20;NFSU2_TR(0x6e9c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9c3e:{NFSU2_TR(0x6e9c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9c42:{NFSU2_TR(0x6e9c42);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B6e9c44:{NFSU2_TR(0x6e9c44);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e9c47:{NFSU2_TR(0x6e9c47);
w4(R+0,u32(0x1ull));
}
B6e9c4c:{NFSU2_TR(0x6e9c4c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e9c4e:{NFSU2_TR(0x6e9c4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9c52:{NFSU2_TR(0x6e9c52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e9c53:{NFSU2_TR(0x6e9c53);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e9c56:{NFSU2_TR(0x6e9c56);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9c5a:{NFSU2_TR(0x6e9c5a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6e9c5d:{NFSU2_TR(0x6e9c5d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e9c60:{NFSU2_TR(0x6e9c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9c64:{NFSU2_TR(0x6e9c64);
__builtin_memmove((R+12),(R+28),4);
}
B6e9c66:{NFSU2_TR(0x6e9c66);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6e9c68:{NFSU2_TR(0x6e9c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9c6c:{NFSU2_TR(0x6e9c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e9c6f:{NFSU2_TR(0x6e9c6f);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6e9c73:{NFSU2_TR(0x6e9c73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9c76:{NFSU2_TR(0x6e9c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e9d11;}}
}
B6e9c7c:L6e9c7c:{c.instructions+=4;NFSU2_TR(0x6e9c7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9c80:{NFSU2_TR(0x6e9c80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9c82:{NFSU2_TR(0x6e9c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e9c8a:{NFSU2_TR(0x6e9c8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9fcc;}}
}
B6e9c90:L6e9c90:{c.instructions+=1;NFSU2_TR(0x6e9c90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e9c92:L6e9c92:{c.instructions+=35;NFSU2_TR(0x6e9c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9c95:{NFSU2_TR(0x6e9c95);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9c98:{NFSU2_TR(0x6e9c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9c9b:{NFSU2_TR(0x6e9c9b);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9c9e:{NFSU2_TR(0x6e9c9e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e9ca0:{NFSU2_TR(0x6e9ca0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e9ca3:{NFSU2_TR(0x6e9ca3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9ca7:{NFSU2_TR(0x6e9ca7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ca9:{NFSU2_TR(0x6e9ca9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9cad:{NFSU2_TR(0x6e9cad);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9cb1:{NFSU2_TR(0x6e9cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9cb4:{NFSU2_TR(0x6e9cb4);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9cb8:{NFSU2_TR(0x6e9cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9cbb:{NFSU2_TR(0x6e9cbb);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9cbf:{NFSU2_TR(0x6e9cbf);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e9cc3:{NFSU2_TR(0x6e9cc3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9cc7:{NFSU2_TR(0x6e9cc7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9cc9:{NFSU2_TR(0x6e9cc9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9ccd:{NFSU2_TR(0x6e9ccd);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9cd1:{NFSU2_TR(0x6e9cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9cd4:{NFSU2_TR(0x6e9cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9cd7:{NFSU2_TR(0x6e9cd7);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9cdb:{NFSU2_TR(0x6e9cdb);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9cdf:{NFSU2_TR(0x6e9cdf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e9ce3:{NFSU2_TR(0x6e9ce3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6e9ce6:{NFSU2_TR(0x6e9ce6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9cea:{NFSU2_TR(0x6e9cea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9cec:{NFSU2_TR(0x6e9cec);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9cf0:{NFSU2_TR(0x6e9cf0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9cf4:{NFSU2_TR(0x6e9cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9cf8:{NFSU2_TR(0x6e9cf8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9cfc:{NFSU2_TR(0x6e9cfc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e9cfd:{NFSU2_TR(0x6e9cfd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9cff:{NFSU2_TR(0x6e9cff);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d03:{NFSU2_TR(0x6e9d03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9c92u);}goto L6e9c92;}}
}
B6e9d05:L6e9d05:{c.instructions+=1;NFSU2_TR(0x6e9d05);
{goto L6e9fcc;}
}
B6e9d0a:L6e9d0a:{c.instructions+=2;NFSU2_TR(0x6e9d0a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e9d0c:{NFSU2_TR(0x6e9d0c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9c1cu);}goto L6e9c1c;}
}
B6e9d11:L6e9d11:{c.instructions+=3;NFSU2_TR(0x6e9d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9d15:{NFSU2_TR(0x6e9d15);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9d19:{NFSU2_TR(0x6e9d19);
if(r1(R+518)){{goto L6e9e3f;}}
}
B6e9d1f:L6e9d1f:{c.instructions+=5;NFSU2_TR(0x6e9d1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9d23:{NFSU2_TR(0x6e9d23);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e9d25:{NFSU2_TR(0x6e9d25);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9d27:{NFSU2_TR(0x6e9d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d2b:{NFSU2_TR(0x6e9d2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9f78;}}
}
B6e9d31:L6e9d31:{c.instructions+=4;NFSU2_TR(0x6e9d31);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6e9d34:{NFSU2_TR(0x6e9d34);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d38:{NFSU2_TR(0x6e9d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d3c:{NFSU2_TR(0x6e9d3c);
__builtin_memmove((R+16),(R+16),4);
}
B6e9d40:L6e9d40:{c.instructions+=71;NFSU2_TR(0x6e9d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9d43:{NFSU2_TR(0x6e9d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d47:{NFSU2_TR(0x6e9d47);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e9d49:{NFSU2_TR(0x6e9d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d4d:{NFSU2_TR(0x6e9d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9d50:{NFSU2_TR(0x6e9d50);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e9d52:{NFSU2_TR(0x6e9d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d56:{NFSU2_TR(0x6e9d56);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9d5a:{NFSU2_TR(0x6e9d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d5e:{NFSU2_TR(0x6e9d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d62:{NFSU2_TR(0x6e9d62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e9d65:{NFSU2_TR(0x6e9d65);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9d69:{NFSU2_TR(0x6e9d69);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9d6c:{NFSU2_TR(0x6e9d6c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9d6e:{NFSU2_TR(0x6e9d6e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9d70:{NFSU2_TR(0x6e9d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d74:{NFSU2_TR(0x6e9d74);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9d78:{NFSU2_TR(0x6e9d78);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d7c:{NFSU2_TR(0x6e9d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d80:{NFSU2_TR(0x6e9d80);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9d84:{NFSU2_TR(0x6e9d84);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9d87:{NFSU2_TR(0x6e9d87);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9d8a:{NFSU2_TR(0x6e9d8a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9d8d:{NFSU2_TR(0x6e9d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d91:{NFSU2_TR(0x6e9d91);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+12,u32(r2(U+0)));
}
B6e9d94:{NFSU2_TR(0x6e9d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d98:{NFSU2_TR(0x6e9d98);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9d9c:{NFSU2_TR(0x6e9d9c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9d9f:{NFSU2_TR(0x6e9d9f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9da2:{NFSU2_TR(0x6e9da2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9da6:{NFSU2_TR(0x6e9da6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9da9:{NFSU2_TR(0x6e9da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9dac:{NFSU2_TR(0x6e9dac);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9daf:{NFSU2_TR(0x6e9daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9db2:{NFSU2_TR(0x6e9db2);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9db5:{NFSU2_TR(0x6e9db5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e9db7:{NFSU2_TR(0x6e9db7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9dbb:{NFSU2_TR(0x6e9dbb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9dbd:{NFSU2_TR(0x6e9dbd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9dc1:{NFSU2_TR(0x6e9dc1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9dc5:{NFSU2_TR(0x6e9dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9dc8:{NFSU2_TR(0x6e9dc8);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9dcc:{NFSU2_TR(0x6e9dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9dcf:{NFSU2_TR(0x6e9dcf);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9dd3:{NFSU2_TR(0x6e9dd3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9dd7:{NFSU2_TR(0x6e9dd7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9ddb:{NFSU2_TR(0x6e9ddb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ddd:{NFSU2_TR(0x6e9ddd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9de1:{NFSU2_TR(0x6e9de1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9de5:{NFSU2_TR(0x6e9de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9de8:{NFSU2_TR(0x6e9de8);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9dec:{NFSU2_TR(0x6e9dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9def:{NFSU2_TR(0x6e9def);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9df3:{NFSU2_TR(0x6e9df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9df7:{NFSU2_TR(0x6e9df7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9dfb:{NFSU2_TR(0x6e9dfb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e9dfe:{NFSU2_TR(0x6e9dfe);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9e02:{NFSU2_TR(0x6e9e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e06:{NFSU2_TR(0x6e9e06);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e9e09:{NFSU2_TR(0x6e9e09);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9e0b:{NFSU2_TR(0x6e9e0b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e9e0f:{NFSU2_TR(0x6e9e0f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9e13:{NFSU2_TR(0x6e9e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9e17:{NFSU2_TR(0x6e9e17);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9e1b:{NFSU2_TR(0x6e9e1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B6e9e1e:{NFSU2_TR(0x6e9e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e22:{NFSU2_TR(0x6e9e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9e26:{NFSU2_TR(0x6e9e26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e9e27:{NFSU2_TR(0x6e9e27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9e29:{NFSU2_TR(0x6e9e29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e2d:{NFSU2_TR(0x6e9e2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9d40u);}goto L6e9d40;}}
}
B6e9e33:L6e9e33:{c.instructions+=3;NFSU2_TR(0x6e9e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9e37:{NFSU2_TR(0x6e9e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e3a:{NFSU2_TR(0x6e9e3a);
{goto L6e9fcc;}
}
B6e9e3f:L6e9e3f:{c.instructions+=10;NFSU2_TR(0x6e9e3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9e43:{NFSU2_TR(0x6e9e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9e47:{NFSU2_TR(0x6e9e47);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6e9e4a:{NFSU2_TR(0x6e9e4a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e9e4d:{NFSU2_TR(0x6e9e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e9e50:{NFSU2_TR(0x6e9e50);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e9e52:{NFSU2_TR(0x6e9e52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9e54:{NFSU2_TR(0x6e9e54);
__builtin_memmove((R+12),(R+0),4);
}
B6e9e56:{NFSU2_TR(0x6e9e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e5e:{NFSU2_TR(0x6e9e5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e9f78;}}
}
B6e9e64:L6e9e64:{c.instructions+=4;NFSU2_TR(0x6e9e64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e9e66:{NFSU2_TR(0x6e9e66);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B6e9e69:{NFSU2_TR(0x6e9e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e6d:{NFSU2_TR(0x6e9e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e71:L6e9e71:{c.instructions+=76;NFSU2_TR(0x6e9e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9e74:{NFSU2_TR(0x6e9e74);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6e9e78:{NFSU2_TR(0x6e9e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9e7c:{NFSU2_TR(0x6e9e7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9e80:{NFSU2_TR(0x6e9e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e84:{NFSU2_TR(0x6e9e84);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9e88:{NFSU2_TR(0x6e9e88);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9e8c:{NFSU2_TR(0x6e9e8c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9e90:{NFSU2_TR(0x6e9e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e94:{NFSU2_TR(0x6e9e94);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9e97:{NFSU2_TR(0x6e9e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9e9b:{NFSU2_TR(0x6e9e9b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+12,u32(r1(U+0)));
}
B6e9e9e:{NFSU2_TR(0x6e9e9e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e9ea1:{NFSU2_TR(0x6e9ea1);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ea4:{NFSU2_TR(0x6e9ea4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9ea8:{NFSU2_TR(0x6e9ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9eac:{NFSU2_TR(0x6e9eac);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9eaf:{NFSU2_TR(0x6e9eaf);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9eb2:{NFSU2_TR(0x6e9eb2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9eb6:{NFSU2_TR(0x6e9eb6);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9eb9:{NFSU2_TR(0x6e9eb9);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ebc:{NFSU2_TR(0x6e9ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9ebf:{NFSU2_TR(0x6e9ebf);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9ec3:{NFSU2_TR(0x6e9ec3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e9ec5:{NFSU2_TR(0x6e9ec5);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ec8:{NFSU2_TR(0x6e9ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9ecb:{NFSU2_TR(0x6e9ecb);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9ece:{NFSU2_TR(0x6e9ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9ed1:{NFSU2_TR(0x6e9ed1);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ed5:{NFSU2_TR(0x6e9ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9ed8:{NFSU2_TR(0x6e9ed8);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9edc:{NFSU2_TR(0x6e9edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9edf:{NFSU2_TR(0x6e9edf);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9ee3:{NFSU2_TR(0x6e9ee3);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ee7:{NFSU2_TR(0x6e9ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9eea:{NFSU2_TR(0x6e9eea);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9eee:{NFSU2_TR(0x6e9eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9ef1:{NFSU2_TR(0x6e9ef1);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9ef4:{NFSU2_TR(0x6e9ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9ef7:{NFSU2_TR(0x6e9ef7);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9efa:{NFSU2_TR(0x6e9efa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e9efc:{NFSU2_TR(0x6e9efc);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9f00:{NFSU2_TR(0x6e9f00);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9f02:{NFSU2_TR(0x6e9f02);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9f06:{NFSU2_TR(0x6e9f06);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9f0a:{NFSU2_TR(0x6e9f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f0d:{NFSU2_TR(0x6e9f0d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9f11:{NFSU2_TR(0x6e9f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9f14:{NFSU2_TR(0x6e9f14);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9f18:{NFSU2_TR(0x6e9f18);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e9f1c:{NFSU2_TR(0x6e9f1c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9f20:{NFSU2_TR(0x6e9f20);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9f22:{NFSU2_TR(0x6e9f22);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9f26:{NFSU2_TR(0x6e9f26);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9f2a:{NFSU2_TR(0x6e9f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f2d:{NFSU2_TR(0x6e9f2d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9f31:{NFSU2_TR(0x6e9f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9f34:{NFSU2_TR(0x6e9f34);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9f38:{NFSU2_TR(0x6e9f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f3c:{NFSU2_TR(0x6e9f3c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e9f40:{NFSU2_TR(0x6e9f40);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e9f43:{NFSU2_TR(0x6e9f43);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9f47:{NFSU2_TR(0x6e9f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f4b:{NFSU2_TR(0x6e9f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f4f:{NFSU2_TR(0x6e9f4f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9f51:{NFSU2_TR(0x6e9f51);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9f55:{NFSU2_TR(0x6e9f55);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B6e9f58:{NFSU2_TR(0x6e9f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f5c:{NFSU2_TR(0x6e9f5c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9f60:{NFSU2_TR(0x6e9f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9f64:{NFSU2_TR(0x6e9f64);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9f68:{NFSU2_TR(0x6e9f68);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e9f69:{NFSU2_TR(0x6e9f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f6d:{NFSU2_TR(0x6e9f6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6e9f70:{NFSU2_TR(0x6e9f70);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9f72:{NFSU2_TR(0x6e9f72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9e71u);}goto L6e9e71;}}
}
B6e9f78:L6e9f78:{c.instructions+=3;NFSU2_TR(0x6e9f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9f7c:{NFSU2_TR(0x6e9f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f7f:{NFSU2_TR(0x6e9f7f);
{goto L6e9fcc;}
}
B6e9f81:L6e9f81:{c.instructions+=4;NFSU2_TR(0x6e9f81);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e9f83:{NFSU2_TR(0x6e9f83);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6e9f87:{NFSU2_TR(0x6e9f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f8b:{NFSU2_TR(0x6e9f8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e9fcc;}}
}
B6e9f8d:L6e9f8d:{c.instructions+=1;NFSU2_TR(0x6e9f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f91:L6e9f91:{c.instructions+=19;NFSU2_TR(0x6e9f91);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6e9f95:{NFSU2_TR(0x6e9f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9f98:{NFSU2_TR(0x6e9f98);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6e9f9c:{NFSU2_TR(0x6e9f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e9f9e:{NFSU2_TR(0x6e9f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e9fa2:{NFSU2_TR(0x6e9fa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e9fa4:{NFSU2_TR(0x6e9fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9fa7:{NFSU2_TR(0x6e9fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9faa:{NFSU2_TR(0x6e9faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9fad:{NFSU2_TR(0x6e9fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9fb0:{NFSU2_TR(0x6e9fb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e9fb4:{NFSU2_TR(0x6e9fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e9fb8:{NFSU2_TR(0x6e9fb8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e9fbb:{NFSU2_TR(0x6e9fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9fbf:{NFSU2_TR(0x6e9fbf);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e9fc3:{NFSU2_TR(0x6e9fc3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e9fc4:{NFSU2_TR(0x6e9fc4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9fc6:{NFSU2_TR(0x6e9fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9fca:{NFSU2_TR(0x6e9fca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e9f91u);}goto L6e9f91;}}
}
B6e9fcc:L6e9fcc:{c.instructions+=3;NFSU2_TR(0x6e9fcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6e9fcf:{NFSU2_TR(0x6e9fcf);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e9fd1:{NFSU2_TR(0x6e9fd1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ea01fu,6ea);}
}
B6e9fd3:L6e9fd3:{c.instructions+=2;NFSU2_TR(0x6e9fd3);
__builtin_memmove((R+4),(R+28),4);
}
B6e9fd5:{NFSU2_TR(0x6e9fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e9fdaull));
TAIL_STATIC(0x6e88f0u,6e8);
}
B6e9fda:L6e9fda:{c.instructions+=4;NFSU2_TR(0x6e9fda);
__builtin_memmove((R+4),(R+28),4);
}
B6e9fdc:{NFSU2_TR(0x6e9fdc);
__builtin_memmove((R+24),(R+0),4);
}
B6e9fde:{NFSU2_TR(0x6e9fde);
w4(R+12,u32(r1(R+12)));
}
B6e9fe1:{NFSU2_TR(0x6e9fe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e9fe6ull));
TAIL_STATIC(0x6e88f0u,6e8);
}
B6e9fe6:L6e9fe6:{c.instructions+=5;NFSU2_TR(0x6e9fe6);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e9fea:{NFSU2_TR(0x6e9fea);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6e9fed:{NFSU2_TR(0x6e9fed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e9fef:{NFSU2_TR(0x6e9fef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9ff1:{NFSU2_TR(0x6e9ff1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6ea01fu,6ea);}
}
B6e9ff3:L6e9ff3:{c.instructions+=5;NFSU2_TR(0x6e9ff3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6e9ff6:{NFSU2_TR(0x6e9ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e9ff8:{NFSU2_TR(0x6e9ff8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e9ffc:{NFSU2_TR(0x6e9ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9fff:{NFSU2_TR(0x6e9fff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
TAIL_STATIC(0x6ea002u,6ea);
}
XIT:NFSU2_TR_EXIT(0x6e9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
