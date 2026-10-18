#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f9(u8* __restrict R,Cpu& c);
u32 page_6f9(Cpu& c){return body_6f9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f9004:goto L6f9004;
case 0x6f9006:c.instructions+=2;goto B6f9006;
case 0x6f9007:c.instructions+=1;goto B6f9007;
case 0x6f9009:goto L6f9009;
case 0x6f900c:goto L6f900c;
case 0x6f900d:c.instructions+=4;goto B6f900d;
case 0x6f900e:c.instructions+=3;goto B6f900e;
case 0x6f900f:c.instructions+=2;goto B6f900f;
case 0x6f9010:c.instructions+=1;goto B6f9010;
case 0x6f909d:goto L6f909d;
case 0x6f909e:c.instructions+=4;goto B6f909e;
case 0x6f90a0:c.instructions+=3;goto B6f90a0;
case 0x6f90a2:c.instructions+=2;goto B6f90a2;
case 0x6f90a5:c.instructions+=1;goto B6f90a5;
case 0x6f90aa:goto L6f90aa;
case 0x6f90ab:c.instructions+=3;goto B6f90ab;
case 0x6f90ac:c.instructions+=2;goto B6f90ac;
case 0x6f90ad:c.instructions+=1;goto B6f90ad;
case 0x6f90ae:goto L6f90ae;
case 0x6f90af:c.instructions+=9;goto B6f90af;
case 0x6f90b1:c.instructions+=8;goto B6f90b1;
case 0x6f90b4:c.instructions+=7;goto B6f90b4;
case 0x6f90b5:c.instructions+=6;goto B6f90b5;
case 0x6f90b8:c.instructions+=5;goto B6f90b8;
case 0x6f90b9:c.instructions+=4;goto B6f90b9;
case 0x6f90ba:c.instructions+=3;goto B6f90ba;
case 0x6f90bc:c.instructions+=2;goto B6f90bc;
case 0x6f90be:c.instructions+=1;goto B6f90be;
case 0x6f90c3:goto L6f90c3;
case 0x6f90c5:c.instructions+=3;goto B6f90c5;
case 0x6f90c8:c.instructions+=2;goto B6f90c8;
case 0x6f90ca:c.instructions+=1;goto B6f90ca;
case 0x6f90cc:goto L6f90cc;
case 0x6f90cd:c.instructions+=4;goto B6f90cd;
case 0x6f90ce:c.instructions+=3;goto B6f90ce;
case 0x6f90cf:c.instructions+=2;goto B6f90cf;
case 0x6f90d0:c.instructions+=1;goto B6f90d0;
case 0x6f90d5:goto L6f90d5;
case 0x6f90d6:c.instructions+=3;goto B6f90d6;
case 0x6f90d7:c.instructions+=2;goto B6f90d7;
case 0x6f90d9:c.instructions+=1;goto B6f90d9;
case 0x6f90de:goto L6f90de;
case 0x6f90e1:c.instructions+=3;goto B6f90e1;
case 0x6f90e3:c.instructions+=2;goto B6f90e3;
case 0x6f90e4:c.instructions+=1;goto B6f90e4;
case 0x6f90e6:goto L6f90e6;
case 0x6f90e8:goto L6f90e8;
case 0x6f90e9:c.instructions+=3;goto B6f90e9;
case 0x6f90ea:c.instructions+=2;goto B6f90ea;
case 0x6f90eb:c.instructions+=1;goto B6f90eb;
case 0x6f90ec:goto L6f90ec;
case 0x6f90ed:c.instructions+=10;goto B6f90ed;
case 0x6f90ef:c.instructions+=9;goto B6f90ef;
case 0x6f90f2:c.instructions+=8;goto B6f90f2;
case 0x6f90f5:c.instructions+=7;goto B6f90f5;
case 0x6f90f8:c.instructions+=6;goto B6f90f8;
case 0x6f90f9:c.instructions+=5;goto B6f90f9;
case 0x6f90fb:c.instructions+=4;goto B6f90fb;
case 0x6f90fc:c.instructions+=3;goto B6f90fc;
case 0x6f90ff:c.instructions+=2;goto B6f90ff;
case 0x6f9106:c.instructions+=1;goto B6f9106;
case 0x6f910b:goto L6f910b;
case 0x6f910c:c.instructions+=3;goto B6f910c;
case 0x6f910d:c.instructions+=2;goto B6f910d;
case 0x6f9112:c.instructions+=1;goto B6f9112;
case 0x6f9117:goto L6f9117;
case 0x6f911a:c.instructions+=2;goto B6f911a;
case 0x6f911b:c.instructions+=1;goto B6f911b;
case 0x6f911c:goto L6f911c;
case 0x6f911d:c.instructions+=10;goto B6f911d;
case 0x6f911f:c.instructions+=9;goto B6f911f;
case 0x6f9122:c.instructions+=8;goto B6f9122;
case 0x6f9125:c.instructions+=7;goto B6f9125;
case 0x6f9129:c.instructions+=6;goto B6f9129;
case 0x6f912c:c.instructions+=5;goto B6f912c;
case 0x6f912d:c.instructions+=4;goto B6f912d;
case 0x6f912f:c.instructions+=3;goto B6f912f;
case 0x6f9130:c.instructions+=2;goto B6f9130;
case 0x6f9133:c.instructions+=1;goto B6f9133;
case 0x6f9138:goto L6f9138;
case 0x6f9139:c.instructions+=3;goto B6f9139;
case 0x6f913a:c.instructions+=2;goto B6f913a;
case 0x6f913f:c.instructions+=1;goto B6f913f;
case 0x6f9144:goto L6f9144;
case 0x6f9147:c.instructions+=2;goto B6f9147;
case 0x6f9148:c.instructions+=1;goto B6f9148;
case 0x6f9149:goto L6f9149;
case 0x6f914a:c.instructions+=13;goto B6f914a;
case 0x6f914c:c.instructions+=12;goto B6f914c;
case 0x6f914f:c.instructions+=11;goto B6f914f;
case 0x6f9150:c.instructions+=10;goto B6f9150;
case 0x6f9153:c.instructions+=9;goto B6f9153;
case 0x6f9154:c.instructions+=8;goto B6f9154;
case 0x6f9157:c.instructions+=7;goto B6f9157;
case 0x6f9158:c.instructions+=6;goto B6f9158;
case 0x6f915a:c.instructions+=5;goto B6f915a;
case 0x6f915b:c.instructions+=4;goto B6f915b;
case 0x6f915c:c.instructions+=3;goto B6f915c;
case 0x6f915d:c.instructions+=2;goto B6f915d;
case 0x6f915f:c.instructions+=1;goto B6f915f;
case 0x6f9164:goto L6f9164;
case 0x6f9167:c.instructions+=3;goto B6f9167;
case 0x6f9169:c.instructions+=2;goto B6f9169;
case 0x6f916c:c.instructions+=1;goto B6f916c;
case 0x6f9172:goto L6f9172;
case 0x6f9173:c.instructions+=3;goto B6f9173;
case 0x6f9174:c.instructions+=2;goto B6f9174;
case 0x6f9175:c.instructions+=1;goto B6f9175;
case 0x6f917a:goto L6f917a;
case 0x6f917d:c.instructions+=35;goto B6f917d;
case 0x6f917f:c.instructions+=34;goto B6f917f;
case 0x6f9183:c.instructions+=33;goto B6f9183;
case 0x6f9186:c.instructions+=32;goto B6f9186;
case 0x6f9189:c.instructions+=31;goto B6f9189;
case 0x6f918a:c.instructions+=30;goto B6f918a;
case 0x6f918b:c.instructions+=29;goto B6f918b;
case 0x6f918d:c.instructions+=28;goto B6f918d;
case 0x6f9190:c.instructions+=27;goto B6f9190;
case 0x6f9193:c.instructions+=26;goto B6f9193;
case 0x6f9196:c.instructions+=25;goto B6f9196;
case 0x6f9199:c.instructions+=24;goto B6f9199;
case 0x6f919c:c.instructions+=23;goto B6f919c;
case 0x6f919f:c.instructions+=22;goto B6f919f;
case 0x6f91a2:c.instructions+=21;goto B6f91a2;
case 0x6f91a5:c.instructions+=20;goto B6f91a5;
case 0x6f91a8:c.instructions+=19;goto B6f91a8;
case 0x6f91ab:c.instructions+=18;goto B6f91ab;
case 0x6f91b1:c.instructions+=17;goto B6f91b1;
case 0x6f91b4:c.instructions+=16;goto B6f91b4;
case 0x6f91b7:c.instructions+=15;goto B6f91b7;
case 0x6f91ba:c.instructions+=14;goto B6f91ba;
case 0x6f91bd:c.instructions+=13;goto B6f91bd;
case 0x6f91c3:c.instructions+=12;goto B6f91c3;
case 0x6f91c6:c.instructions+=11;goto B6f91c6;
case 0x6f91c7:c.instructions+=10;goto B6f91c7;
case 0x6f91ca:c.instructions+=9;goto B6f91ca;
case 0x6f91d1:c.instructions+=8;goto B6f91d1;
case 0x6f91d8:c.instructions+=7;goto B6f91d8;
case 0x6f91df:c.instructions+=6;goto B6f91df;
case 0x6f91e6:c.instructions+=5;goto B6f91e6;
case 0x6f91e9:c.instructions+=4;goto B6f91e9;
case 0x6f91ec:c.instructions+=3;goto B6f91ec;
case 0x6f91ef:c.instructions+=2;goto B6f91ef;
case 0x6f91f1:c.instructions+=1;goto B6f91f1;
case 0x6f91f3:goto L6f91f3;
case 0x6f91f5:c.instructions+=3;goto B6f91f5;
case 0x6f91f7:c.instructions+=2;goto B6f91f7;
case 0x6f91f8:c.instructions+=1;goto B6f91f8;
case 0x6f91fa:goto L6f91fa;
case 0x6f91fd:c.instructions+=4;goto B6f91fd;
case 0x6f91fe:c.instructions+=3;goto B6f91fe;
case 0x6f9200:c.instructions+=2;goto B6f9200;
case 0x6f9203:c.instructions+=1;goto B6f9203;
case 0x6f9208:goto L6f9208;
case 0x6f9209:c.instructions+=2;goto B6f9209;
case 0x6f920c:c.instructions+=1;goto B6f920c;
case 0x6f9211:goto L6f9211;
case 0x6f9214:c.instructions+=4;goto B6f9214;
case 0x6f9217:c.instructions+=3;goto B6f9217;
case 0x6f921a:c.instructions+=2;goto B6f921a;
case 0x6f921c:c.instructions+=1;goto B6f921c;
case 0x6f921e:goto L6f921e;
case 0x6f9221:c.instructions+=1;goto B6f9221;
case 0x6f9226:goto L6f9226;
case 0x6f9227:c.instructions+=1;goto B6f9227;
case 0x6f9228:goto L6f9228;
case 0x6f922a:goto L6f922a;
case 0x6f922b:c.instructions+=4;goto B6f922b;
case 0x6f922c:c.instructions+=3;goto B6f922c;
case 0x6f922d:c.instructions+=2;goto B6f922d;
case 0x6f922e:c.instructions+=1;goto B6f922e;
case 0x6f922f:goto L6f922f;
case 0x6f9230:c.instructions+=12;goto B6f9230;
case 0x6f9232:c.instructions+=11;goto B6f9232;
case 0x6f9235:c.instructions+=10;goto B6f9235;
case 0x6f9238:c.instructions+=9;goto B6f9238;
case 0x6f923b:c.instructions+=8;goto B6f923b;
case 0x6f923e:c.instructions+=7;goto B6f923e;
case 0x6f9241:c.instructions+=6;goto B6f9241;
case 0x6f9242:c.instructions+=5;goto B6f9242;
case 0x6f9244:c.instructions+=4;goto B6f9244;
case 0x6f9245:c.instructions+=3;goto B6f9245;
case 0x6f9248:c.instructions+=2;goto B6f9248;
case 0x6f924f:c.instructions+=1;goto B6f924f;
case 0x6f9254:goto L6f9254;
case 0x6f9255:c.instructions+=3;goto B6f9255;
case 0x6f9256:c.instructions+=2;goto B6f9256;
case 0x6f925b:c.instructions+=1;goto B6f925b;
case 0x6f9260:goto L6f9260;
case 0x6f9263:c.instructions+=3;goto B6f9263;
case 0x6f9266:c.instructions+=2;goto B6f9266;
case 0x6f9268:c.instructions+=1;goto B6f9268;
case 0x6f926a:goto L6f926a;
case 0x6f926d:c.instructions+=1;goto B6f926d;
case 0x6f926f:goto L6f926f;
case 0x6f9270:c.instructions+=1;goto B6f9270;
case 0x6f9271:goto L6f9271;
case 0x6f9272:c.instructions+=12;goto B6f9272;
case 0x6f9274:c.instructions+=11;goto B6f9274;
case 0x6f9277:c.instructions+=10;goto B6f9277;
case 0x6f927a:c.instructions+=9;goto B6f927a;
case 0x6f927d:c.instructions+=8;goto B6f927d;
case 0x6f9281:c.instructions+=7;goto B6f9281;
case 0x6f9284:c.instructions+=6;goto B6f9284;
case 0x6f9287:c.instructions+=5;goto B6f9287;
case 0x6f9288:c.instructions+=4;goto B6f9288;
case 0x6f928a:c.instructions+=3;goto B6f928a;
case 0x6f928b:c.instructions+=2;goto B6f928b;
case 0x6f928e:c.instructions+=1;goto B6f928e;
case 0x6f9293:goto L6f9293;
case 0x6f9294:c.instructions+=3;goto B6f9294;
case 0x6f9295:c.instructions+=2;goto B6f9295;
case 0x6f929a:c.instructions+=1;goto B6f929a;
case 0x6f929f:goto L6f929f;
case 0x6f92a2:c.instructions+=3;goto B6f92a2;
case 0x6f92a5:c.instructions+=2;goto B6f92a5;
case 0x6f92a7:c.instructions+=1;goto B6f92a7;
case 0x6f92a9:goto L6f92a9;
case 0x6f92ac:c.instructions+=1;goto B6f92ac;
case 0x6f92ae:goto L6f92ae;
case 0x6f92af:c.instructions+=1;goto B6f92af;
case 0x6f92b0:goto L6f92b0;
case 0x6f92b1:c.instructions+=12;goto B6f92b1;
case 0x6f92b3:c.instructions+=11;goto B6f92b3;
case 0x6f92b4:c.instructions+=10;goto B6f92b4;
case 0x6f92b5:c.instructions+=9;goto B6f92b5;
case 0x6f92b8:c.instructions+=8;goto B6f92b8;
case 0x6f92bb:c.instructions+=7;goto B6f92bb;
case 0x6f92bc:c.instructions+=6;goto B6f92bc;
case 0x6f92bf:c.instructions+=5;goto B6f92bf;
case 0x6f92c0:c.instructions+=4;goto B6f92c0;
case 0x6f92c2:c.instructions+=3;goto B6f92c2;
case 0x6f92c4:c.instructions+=2;goto B6f92c4;
case 0x6f92c7:c.instructions+=1;goto B6f92c7;
case 0x6f92cc:goto L6f92cc;
case 0x6f92ce:c.instructions+=3;goto B6f92ce;
case 0x6f92d1:c.instructions+=2;goto B6f92d1;
case 0x6f92d3:c.instructions+=1;goto B6f92d3;
case 0x6f92d5:goto L6f92d5;
case 0x6f92d6:c.instructions+=6;goto B6f92d6;
case 0x6f92d7:c.instructions+=5;goto B6f92d7;
case 0x6f92da:c.instructions+=4;goto B6f92da;
case 0x6f92dd:c.instructions+=3;goto B6f92dd;
case 0x6f92df:c.instructions+=2;goto B6f92df;
case 0x6f92e0:c.instructions+=1;goto B6f92e0;
case 0x6f92e5:goto L6f92e5;
case 0x6f92e6:c.instructions+=3;goto B6f92e6;
case 0x6f92e7:c.instructions+=2;goto B6f92e7;
case 0x6f92e9:c.instructions+=1;goto B6f92e9;
case 0x6f92ee:goto L6f92ee;
case 0x6f92f1:c.instructions+=2;goto B6f92f1;
case 0x6f92f3:c.instructions+=1;goto B6f92f3;
case 0x6f92f5:goto L6f92f5;
case 0x6f92f7:goto L6f92f7;
case 0x6f92f8:c.instructions+=4;goto B6f92f8;
case 0x6f92f9:c.instructions+=3;goto B6f92f9;
case 0x6f92fa:c.instructions+=2;goto B6f92fa;
case 0x6f92fb:c.instructions+=1;goto B6f92fb;
case 0x6f92fc:goto L6f92fc;
case 0x6f92fd:c.instructions+=16;goto B6f92fd;
case 0x6f92ff:c.instructions+=15;goto B6f92ff;
case 0x6f9302:c.instructions+=14;goto B6f9302;
case 0x6f9305:c.instructions+=13;goto B6f9305;
case 0x6f9308:c.instructions+=12;goto B6f9308;
case 0x6f930b:c.instructions+=11;goto B6f930b;
case 0x6f930e:c.instructions+=10;goto B6f930e;
case 0x6f9311:c.instructions+=9;goto B6f9311;
case 0x6f9314:c.instructions+=8;goto B6f9314;
case 0x6f9317:c.instructions+=7;goto B6f9317;
case 0x6f931a:c.instructions+=6;goto B6f931a;
case 0x6f931b:c.instructions+=5;goto B6f931b;
case 0x6f931d:c.instructions+=4;goto B6f931d;
case 0x6f931e:c.instructions+=3;goto B6f931e;
case 0x6f9321:c.instructions+=2;goto B6f9321;
case 0x6f9328:c.instructions+=1;goto B6f9328;
case 0x6f932d:goto L6f932d;
case 0x6f932e:c.instructions+=3;goto B6f932e;
case 0x6f932f:c.instructions+=2;goto B6f932f;
case 0x6f9334:c.instructions+=1;goto B6f9334;
case 0x6f9339:goto L6f9339;
case 0x6f933c:c.instructions+=2;goto B6f933c;
case 0x6f933d:c.instructions+=1;goto B6f933d;
case 0x6f933e:goto L6f933e;
case 0x6f933f:c.instructions+=16;goto B6f933f;
case 0x6f9341:c.instructions+=15;goto B6f9341;
case 0x6f9344:c.instructions+=14;goto B6f9344;
case 0x6f9347:c.instructions+=13;goto B6f9347;
case 0x6f934a:c.instructions+=12;goto B6f934a;
case 0x6f934e:c.instructions+=11;goto B6f934e;
case 0x6f9351:c.instructions+=10;goto B6f9351;
case 0x6f9354:c.instructions+=9;goto B6f9354;
case 0x6f9357:c.instructions+=8;goto B6f9357;
case 0x6f935a:c.instructions+=7;goto B6f935a;
case 0x6f935d:c.instructions+=6;goto B6f935d;
case 0x6f9360:c.instructions+=5;goto B6f9360;
case 0x6f9361:c.instructions+=4;goto B6f9361;
case 0x6f9363:c.instructions+=3;goto B6f9363;
case 0x6f9364:c.instructions+=2;goto B6f9364;
case 0x6f9367:c.instructions+=1;goto B6f9367;
case 0x6f936c:goto L6f936c;
case 0x6f936d:c.instructions+=3;goto B6f936d;
case 0x6f936e:c.instructions+=2;goto B6f936e;
case 0x6f9373:c.instructions+=1;goto B6f9373;
case 0x6f9378:goto L6f9378;
case 0x6f937b:c.instructions+=2;goto B6f937b;
case 0x6f937c:c.instructions+=1;goto B6f937c;
case 0x6f937d:goto L6f937d;
case 0x6f937e:c.instructions+=9;goto B6f937e;
case 0x6f9380:c.instructions+=8;goto B6f9380;
case 0x6f9381:c.instructions+=7;goto B6f9381;
case 0x6f9382:c.instructions+=6;goto B6f9382;
case 0x6f9383:c.instructions+=5;goto B6f9383;
case 0x6f9386:c.instructions+=4;goto B6f9386;
case 0x6f9388:c.instructions+=3;goto B6f9388;
case 0x6f938a:c.instructions+=2;goto B6f938a;
case 0x6f9391:c.instructions+=1;goto B6f9391;
case 0x6f9393:goto L6f9393;
case 0x6f9394:goto L6f9394;
case 0x6f9397:c.instructions+=7;goto B6f9397;
case 0x6f939a:c.instructions+=6;goto B6f939a;
case 0x6f939b:c.instructions+=5;goto B6f939b;
case 0x6f939e:c.instructions+=4;goto B6f939e;
case 0x6f93a0:c.instructions+=3;goto B6f93a0;
case 0x6f93a3:c.instructions+=2;goto B6f93a3;
case 0x6f93a6:c.instructions+=1;goto B6f93a6;
case 0x6f93ab:goto L6f93ab;
case 0x6f93ae:c.instructions+=5;goto B6f93ae;
case 0x6f93b1:c.instructions+=4;goto B6f93b1;
case 0x6f93b4:c.instructions+=3;goto B6f93b4;
case 0x6f93b7:c.instructions+=2;goto B6f93b7;
case 0x6f93bb:c.instructions+=1;goto B6f93bb;
case 0x6f93bd:goto L6f93bd;
case 0x6f93c1:goto L6f93c1;
case 0x6f93c4:c.instructions+=2;goto B6f93c4;
case 0x6f93c6:c.instructions+=1;goto B6f93c6;
case 0x6f93c8:goto L6f93c8;
case 0x6f93cb:c.instructions+=1;goto B6f93cb;
case 0x6f93ce:goto L6f93ce;
case 0x6f93cf:c.instructions+=2;goto B6f93cf;
case 0x6f93d1:c.instructions+=1;goto B6f93d1;
case 0x6f93d3:goto L6f93d3;
case 0x6f93d4:goto L6f93d4;
case 0x6f93d7:c.instructions+=4;goto B6f93d7;
case 0x6f93d8:c.instructions+=3;goto B6f93d8;
case 0x6f93d9:c.instructions+=2;goto B6f93d9;
case 0x6f93da:c.instructions+=1;goto B6f93da;
case 0x6f93db:goto L6f93db;
case 0x6f93dc:c.instructions+=7;goto B6f93dc;
case 0x6f93de:c.instructions+=6;goto B6f93de;
case 0x6f93e1:c.instructions+=5;goto B6f93e1;
case 0x6f93e4:c.instructions+=4;goto B6f93e4;
case 0x6f93e6:c.instructions+=3;goto B6f93e6;
case 0x6f93e7:c.instructions+=2;goto B6f93e7;
case 0x6f93e9:c.instructions+=1;goto B6f93e9;
case 0x6f93eb:goto L6f93eb;
case 0x6f93ed:c.instructions+=2;goto B6f93ed;
case 0x6f93ee:c.instructions+=1;goto B6f93ee;
case 0x6f93ef:goto L6f93ef;
case 0x6f93f2:c.instructions+=14;goto B6f93f2;
case 0x6f93f5:c.instructions+=13;goto B6f93f5;
case 0x6f93f8:c.instructions+=12;goto B6f93f8;
case 0x6f93fb:c.instructions+=11;goto B6f93fb;
case 0x6f93fe:c.instructions+=10;goto B6f93fe;
case 0x6f93ff:c.instructions+=9;goto B6f93ff;
case 0x6f9402:c.instructions+=8;goto B6f9402;
case 0x6f9405:c.instructions+=7;goto B6f9405;
case 0x6f9408:c.instructions+=6;goto B6f9408;
case 0x6f940b:c.instructions+=5;goto B6f940b;
case 0x6f940d:c.instructions+=4;goto B6f940d;
case 0x6f940f:c.instructions+=3;goto B6f940f;
case 0x6f9412:c.instructions+=2;goto B6f9412;
case 0x6f9415:c.instructions+=1;goto B6f9415;
case 0x6f941a:goto L6f941a;
case 0x6f941b:c.instructions+=3;goto B6f941b;
case 0x6f941c:c.instructions+=2;goto B6f941c;
case 0x6f9421:c.instructions+=1;goto B6f9421;
case 0x6f9426:goto L6f9426;
case 0x6f9429:c.instructions+=6;goto B6f9429;
case 0x6f942a:c.instructions+=5;goto B6f942a;
case 0x6f942c:c.instructions+=4;goto B6f942c;
case 0x6f942e:c.instructions+=3;goto B6f942e;
case 0x6f942f:c.instructions+=2;goto B6f942f;
case 0x6f9430:c.instructions+=1;goto B6f9430;
case 0x6f9431:goto L6f9431;
case 0x6f9432:c.instructions+=5;goto B6f9432;
case 0x6f9434:c.instructions+=4;goto B6f9434;
case 0x6f9437:c.instructions+=3;goto B6f9437;
case 0x6f943a:c.instructions+=2;goto B6f943a;
case 0x6f943d:c.instructions+=1;goto B6f943d;
case 0x6f943f:goto L6f943f;
case 0x6f9441:c.instructions+=2;goto B6f9441;
case 0x6f9442:c.instructions+=1;goto B6f9442;
case 0x6f9443:goto L6f9443;
case 0x6f9446:c.instructions+=14;goto B6f9446;
case 0x6f944a:c.instructions+=13;goto B6f944a;
case 0x6f944d:c.instructions+=12;goto B6f944d;
case 0x6f9450:c.instructions+=11;goto B6f9450;
case 0x6f9453:c.instructions+=10;goto B6f9453;
case 0x6f9456:c.instructions+=9;goto B6f9456;
case 0x6f9459:c.instructions+=8;goto B6f9459;
case 0x6f945c:c.instructions+=7;goto B6f945c;
case 0x6f945d:c.instructions+=6;goto B6f945d;
case 0x6f9460:c.instructions+=5;goto B6f9460;
case 0x6f9463:c.instructions+=4;goto B6f9463;
case 0x6f9465:c.instructions+=3;goto B6f9465;
case 0x6f9467:c.instructions+=2;goto B6f9467;
case 0x6f946a:c.instructions+=1;goto B6f946a;
case 0x6f946f:goto L6f946f;
case 0x6f9470:c.instructions+=3;goto B6f9470;
case 0x6f9471:c.instructions+=2;goto B6f9471;
case 0x6f9476:c.instructions+=1;goto B6f9476;
case 0x6f947b:goto L6f947b;
case 0x6f947e:c.instructions+=6;goto B6f947e;
case 0x6f947f:c.instructions+=5;goto B6f947f;
case 0x6f9481:c.instructions+=4;goto B6f9481;
case 0x6f9483:c.instructions+=3;goto B6f9483;
case 0x6f9484:c.instructions+=2;goto B6f9484;
case 0x6f9485:c.instructions+=1;goto B6f9485;
case 0x6f9486:goto L6f9486;
case 0x6f9487:c.instructions+=18;goto B6f9487;
case 0x6f9489:c.instructions+=17;goto B6f9489;
case 0x6f948a:c.instructions+=16;goto B6f948a;
case 0x6f948b:c.instructions+=15;goto B6f948b;
case 0x6f948e:c.instructions+=14;goto B6f948e;
case 0x6f9491:c.instructions+=13;goto B6f9491;
case 0x6f9492:c.instructions+=12;goto B6f9492;
case 0x6f9495:c.instructions+=11;goto B6f9495;
case 0x6f9499:c.instructions+=10;goto B6f9499;
case 0x6f949b:c.instructions+=9;goto B6f949b;
case 0x6f94a1:c.instructions+=8;goto B6f94a1;
case 0x6f94a2:c.instructions+=7;goto B6f94a2;
case 0x6f94a5:c.instructions+=6;goto B6f94a5;
case 0x6f94a6:c.instructions+=5;goto B6f94a6;
case 0x6f94a9:c.instructions+=4;goto B6f94a9;
case 0x6f94aa:c.instructions+=3;goto B6f94aa;
case 0x6f94ac:c.instructions+=2;goto B6f94ac;
case 0x6f94ae:c.instructions+=1;goto B6f94ae;
case 0x6f94b3:goto L6f94b3;
case 0x6f94b6:c.instructions+=10;goto B6f94b6;
case 0x6f94b9:c.instructions+=9;goto B6f94b9;
case 0x6f94ba:c.instructions+=8;goto B6f94ba;
case 0x6f94bd:c.instructions+=7;goto B6f94bd;
case 0x6f94c2:c.instructions+=6;goto B6f94c2;
case 0x6f94c3:c.instructions+=5;goto B6f94c3;
case 0x6f94c9:c.instructions+=4;goto B6f94c9;
case 0x6f94ca:c.instructions+=3;goto B6f94ca;
case 0x6f94cc:c.instructions+=2;goto B6f94cc;
case 0x6f94cf:c.instructions+=1;goto B6f94cf;
case 0x6f94d4:goto L6f94d4;
case 0x6f94da:c.instructions+=2;goto B6f94da;
case 0x6f94db:c.instructions+=1;goto B6f94db;
case 0x6f94e0:goto L6f94e0;
case 0x6f94e3:c.instructions+=2;goto B6f94e3;
case 0x6f94e5:c.instructions+=1;goto B6f94e5;
case 0x6f94e7:goto L6f94e7;
case 0x6f94e9:c.instructions+=1;goto B6f94e9;
case 0x6f94ee:goto L6f94ee;
case 0x6f94f0:c.instructions+=4;goto B6f94f0;
case 0x6f94f6:c.instructions+=3;goto B6f94f6;
case 0x6f94fb:c.instructions+=2;goto B6f94fb;
case 0x6f94fc:c.instructions+=1;goto B6f94fc;
case 0x6f9501:goto L6f9501;
case 0x6f9507:c.instructions+=2;goto B6f9507;
case 0x6f9508:c.instructions+=1;goto B6f9508;
case 0x6f950d:goto L6f950d;
case 0x6f9510:c.instructions+=36;goto B6f9510;
case 0x6f9514:c.instructions+=35;goto B6f9514;
case 0x6f951a:c.instructions+=34;goto B6f951a;
case 0x6f951d:c.instructions+=33;goto B6f951d;
case 0x6f9520:c.instructions+=32;goto B6f9520;
case 0x6f9522:c.instructions+=31;goto B6f9522;
case 0x6f9525:c.instructions+=30;goto B6f9525;
case 0x6f9528:c.instructions+=29;goto B6f9528;
case 0x6f952b:c.instructions+=28;goto B6f952b;
case 0x6f952e:c.instructions+=27;goto B6f952e;
case 0x6f9531:c.instructions+=26;goto B6f9531;
case 0x6f9534:c.instructions+=25;goto B6f9534;
case 0x6f9537:c.instructions+=24;goto B6f9537;
case 0x6f953a:c.instructions+=23;goto B6f953a;
case 0x6f9540:c.instructions+=22;goto B6f9540;
case 0x6f9543:c.instructions+=21;goto B6f9543;
case 0x6f9546:c.instructions+=20;goto B6f9546;
case 0x6f9548:c.instructions+=19;goto B6f9548;
case 0x6f9549:c.instructions+=18;goto B6f9549;
case 0x6f954c:c.instructions+=17;goto B6f954c;
case 0x6f954f:c.instructions+=16;goto B6f954f;
case 0x6f9552:c.instructions+=15;goto B6f9552;
case 0x6f9555:c.instructions+=14;goto B6f9555;
case 0x6f9558:c.instructions+=13;goto B6f9558;
case 0x6f955b:c.instructions+=12;goto B6f955b;
case 0x6f955e:c.instructions+=11;goto B6f955e;
case 0x6f9564:c.instructions+=10;goto B6f9564;
case 0x6f9567:c.instructions+=9;goto B6f9567;
case 0x6f9568:c.instructions+=8;goto B6f9568;
case 0x6f956b:c.instructions+=7;goto B6f956b;
case 0x6f9572:c.instructions+=6;goto B6f9572;
case 0x6f9579:c.instructions+=5;goto B6f9579;
case 0x6f9580:c.instructions+=4;goto B6f9580;
case 0x6f9587:c.instructions+=3;goto B6f9587;
case 0x6f958a:c.instructions+=2;goto B6f958a;
case 0x6f958c:c.instructions+=1;goto B6f958c;
case 0x6f958e:goto L6f958e;
case 0x6f9590:c.instructions+=2;goto B6f9590;
case 0x6f9592:c.instructions+=1;goto B6f9592;
case 0x6f9594:goto L6f9594;
case 0x6f959a:c.instructions+=4;goto B6f959a;
case 0x6f959c:c.instructions+=3;goto B6f959c;
case 0x6f959d:c.instructions+=2;goto B6f959d;
case 0x6f959e:c.instructions+=1;goto B6f959e;
case 0x6f95a1:goto L6f95a1;
case 0x6f95a6:goto L6f95a6;
case 0x6f95a9:c.instructions+=2;goto B6f95a9;
case 0x6f95ab:c.instructions+=1;goto B6f95ab;
case 0x6f95ad:goto L6f95ad;
case 0x6f95af:goto L6f95af;
case 0x6f95b0:c.instructions+=4;goto B6f95b0;
case 0x6f95b6:c.instructions+=3;goto B6f95b6;
case 0x6f95b7:c.instructions+=2;goto B6f95b7;
case 0x6f95b8:c.instructions+=1;goto B6f95b8;
case 0x6f95bd:goto L6f95bd;
case 0x6f95c0:c.instructions+=3;goto B6f95c0;
case 0x6f95c3:c.instructions+=2;goto B6f95c3;
case 0x6f95c5:c.instructions+=1;goto B6f95c5;
case 0x6f95c7:goto L6f95c7;
case 0x6f95ca:c.instructions+=7;goto B6f95ca;
case 0x6f95cf:c.instructions+=6;goto B6f95cf;
case 0x6f95d0:c.instructions+=5;goto B6f95d0;
case 0x6f95d6:c.instructions+=4;goto B6f95d6;
case 0x6f95d7:c.instructions+=3;goto B6f95d7;
case 0x6f95d8:c.instructions+=2;goto B6f95d8;
case 0x6f95db:c.instructions+=1;goto B6f95db;
case 0x6f95e0:goto L6f95e0;
case 0x6f95e3:goto L6f95e3;
case 0x6f95e6:c.instructions+=2;goto B6f95e6;
case 0x6f95e9:c.instructions+=1;goto B6f95e9;
case 0x6f95ee:goto L6f95ee;
case 0x6f95ef:c.instructions+=9;goto B6f95ef;
case 0x6f95f0:c.instructions+=8;goto B6f95f0;
case 0x6f95f2:c.instructions+=7;goto B6f95f2;
case 0x6f95f3:c.instructions+=6;goto B6f95f3;
case 0x6f95f4:c.instructions+=5;goto B6f95f4;
case 0x6f95f6:c.instructions+=4;goto B6f95f6;
case 0x6f95f7:c.instructions+=3;goto B6f95f7;
case 0x6f95f9:c.instructions+=2;goto B6f95f9;
case 0x6f95fa:c.instructions+=1;goto B6f95fa;
case 0x6f95fb:goto L6f95fb;
case 0x6f95fc:c.instructions+=12;goto B6f95fc;
case 0x6f95fe:c.instructions+=11;goto B6f95fe;
case 0x6f9601:c.instructions+=10;goto B6f9601;
case 0x6f9604:c.instructions+=9;goto B6f9604;
case 0x6f9607:c.instructions+=8;goto B6f9607;
case 0x6f960a:c.instructions+=7;goto B6f960a;
case 0x6f960d:c.instructions+=6;goto B6f960d;
case 0x6f960e:c.instructions+=5;goto B6f960e;
case 0x6f9610:c.instructions+=4;goto B6f9610;
case 0x6f9611:c.instructions+=3;goto B6f9611;
case 0x6f9614:c.instructions+=2;goto B6f9614;
case 0x6f961b:c.instructions+=1;goto B6f961b;
case 0x6f9620:goto L6f9620;
case 0x6f9621:c.instructions+=3;goto B6f9621;
case 0x6f9622:c.instructions+=2;goto B6f9622;
case 0x6f9627:c.instructions+=1;goto B6f9627;
case 0x6f962c:goto L6f962c;
case 0x6f962f:c.instructions+=2;goto B6f962f;
case 0x6f9630:c.instructions+=1;goto B6f9630;
case 0x6f9631:goto L6f9631;
case 0x6f9632:c.instructions+=12;goto B6f9632;
case 0x6f9634:c.instructions+=11;goto B6f9634;
case 0x6f9637:c.instructions+=10;goto B6f9637;
case 0x6f963a:c.instructions+=9;goto B6f963a;
case 0x6f963d:c.instructions+=8;goto B6f963d;
case 0x6f9641:c.instructions+=7;goto B6f9641;
case 0x6f9644:c.instructions+=6;goto B6f9644;
case 0x6f9647:c.instructions+=5;goto B6f9647;
case 0x6f9648:c.instructions+=4;goto B6f9648;
case 0x6f964a:c.instructions+=3;goto B6f964a;
case 0x6f964b:c.instructions+=2;goto B6f964b;
case 0x6f964e:c.instructions+=1;goto B6f964e;
case 0x6f9653:goto L6f9653;
case 0x6f9654:c.instructions+=3;goto B6f9654;
case 0x6f9655:c.instructions+=2;goto B6f9655;
case 0x6f965a:c.instructions+=1;goto B6f965a;
case 0x6f965f:goto L6f965f;
case 0x6f9662:c.instructions+=2;goto B6f9662;
case 0x6f9663:c.instructions+=1;goto B6f9663;
case 0x6f9664:goto L6f9664;
case 0x6f9665:c.instructions+=9;goto B6f9665;
case 0x6f9667:c.instructions+=8;goto B6f9667;
case 0x6f9668:c.instructions+=7;goto B6f9668;
case 0x6f966b:c.instructions+=6;goto B6f966b;
case 0x6f966c:c.instructions+=5;goto B6f966c;
case 0x6f966f:c.instructions+=4;goto B6f966f;
case 0x6f9670:c.instructions+=3;goto B6f9670;
case 0x6f9672:c.instructions+=2;goto B6f9672;
case 0x6f9674:c.instructions+=1;goto B6f9674;
case 0x6f9679:goto L6f9679;
case 0x6f967c:c.instructions+=3;goto B6f967c;
case 0x6f967e:c.instructions+=2;goto B6f967e;
case 0x6f9681:c.instructions+=1;goto B6f9681;
case 0x6f9683:goto L6f9683;
case 0x6f9684:c.instructions+=7;goto B6f9684;
case 0x6f9685:c.instructions+=6;goto B6f9685;
case 0x6f9686:c.instructions+=5;goto B6f9686;
case 0x6f9689:c.instructions+=4;goto B6f9689;
case 0x6f968c:c.instructions+=3;goto B6f968c;
case 0x6f968e:c.instructions+=2;goto B6f968e;
case 0x6f968f:c.instructions+=1;goto B6f968f;
case 0x6f9694:goto L6f9694;
case 0x6f9695:c.instructions+=3;goto B6f9695;
case 0x6f9698:c.instructions+=2;goto B6f9698;
case 0x6f969a:c.instructions+=1;goto B6f969a;
case 0x6f969f:goto L6f969f;
case 0x6f96a2:c.instructions+=5;goto B6f96a2;
case 0x6f96a4:c.instructions+=4;goto B6f96a4;
case 0x6f96a7:c.instructions+=3;goto B6f96a7;
case 0x6f96a8:c.instructions+=2;goto B6f96a8;
case 0x6f96ab:c.instructions+=1;goto B6f96ab;
case 0x6f96ad:goto L6f96ad;
case 0x6f96af:goto L6f96af;
case 0x6f96b0:c.instructions+=3;goto B6f96b0;
case 0x6f96b1:c.instructions+=2;goto B6f96b1;
case 0x6f96b2:c.instructions+=1;goto B6f96b2;
case 0x6f96b3:goto L6f96b3;
case 0x6f96b4:c.instructions+=14;goto B6f96b4;
case 0x6f96b6:c.instructions+=13;goto B6f96b6;
case 0x6f96b9:c.instructions+=12;goto B6f96b9;
case 0x6f96bc:c.instructions+=11;goto B6f96bc;
case 0x6f96bf:c.instructions+=10;goto B6f96bf;
case 0x6f96c2:c.instructions+=9;goto B6f96c2;
case 0x6f96c5:c.instructions+=8;goto B6f96c5;
case 0x6f96c8:c.instructions+=7;goto B6f96c8;
case 0x6f96cb:c.instructions+=6;goto B6f96cb;
case 0x6f96cc:c.instructions+=5;goto B6f96cc;
case 0x6f96ce:c.instructions+=4;goto B6f96ce;
case 0x6f96cf:c.instructions+=3;goto B6f96cf;
case 0x6f96d2:c.instructions+=2;goto B6f96d2;
case 0x6f96d9:c.instructions+=1;goto B6f96d9;
case 0x6f96de:goto L6f96de;
case 0x6f96df:c.instructions+=3;goto B6f96df;
case 0x6f96e0:c.instructions+=2;goto B6f96e0;
case 0x6f96e5:c.instructions+=1;goto B6f96e5;
case 0x6f96ea:goto L6f96ea;
case 0x6f96ed:c.instructions+=6;goto B6f96ed;
case 0x6f96ee:c.instructions+=5;goto B6f96ee;
case 0x6f96f0:c.instructions+=4;goto B6f96f0;
case 0x6f96f2:c.instructions+=3;goto B6f96f2;
case 0x6f96f3:c.instructions+=2;goto B6f96f3;
case 0x6f96f4:c.instructions+=1;goto B6f96f4;
case 0x6f96f5:goto L6f96f5;
case 0x6f96f6:c.instructions+=14;goto B6f96f6;
case 0x6f96f8:c.instructions+=13;goto B6f96f8;
case 0x6f96fb:c.instructions+=12;goto B6f96fb;
case 0x6f96fe:c.instructions+=11;goto B6f96fe;
case 0x6f9701:c.instructions+=10;goto B6f9701;
case 0x6f9705:c.instructions+=9;goto B6f9705;
case 0x6f9708:c.instructions+=8;goto B6f9708;
case 0x6f970b:c.instructions+=7;goto B6f970b;
case 0x6f970e:c.instructions+=6;goto B6f970e;
case 0x6f9711:c.instructions+=5;goto B6f9711;
case 0x6f9712:c.instructions+=4;goto B6f9712;
case 0x6f9714:c.instructions+=3;goto B6f9714;
case 0x6f9715:c.instructions+=2;goto B6f9715;
case 0x6f9718:c.instructions+=1;goto B6f9718;
case 0x6f971d:goto L6f971d;
case 0x6f971e:c.instructions+=3;goto B6f971e;
case 0x6f971f:c.instructions+=2;goto B6f971f;
case 0x6f9724:c.instructions+=1;goto B6f9724;
case 0x6f9729:goto L6f9729;
case 0x6f972c:c.instructions+=6;goto B6f972c;
case 0x6f972d:c.instructions+=5;goto B6f972d;
case 0x6f972f:c.instructions+=4;goto B6f972f;
case 0x6f9731:c.instructions+=3;goto B6f9731;
case 0x6f9732:c.instructions+=2;goto B6f9732;
case 0x6f9733:c.instructions+=1;goto B6f9733;
case 0x6f9749:goto L6f9749;
case 0x6f974e:c.instructions+=2;goto B6f974e;
case 0x6f9755:c.instructions+=1;goto B6f9755;
case 0x6f975a:goto L6f975a;
case 0x6f975b:c.instructions+=1;goto B6f975b;
case 0x6f975c:goto L6f975c;
case 0x6f975d:c.instructions+=4;goto B6f975d;
case 0x6f975f:c.instructions+=3;goto B6f975f;
case 0x6f9765:c.instructions+=2;goto B6f9765;
case 0x6f976b:c.instructions+=1;goto B6f976b;
case 0x6f976d:goto L6f976d;
case 0x6f976f:c.instructions+=4;goto B6f976f;
case 0x6f9772:c.instructions+=3;goto B6f9772;
case 0x6f9773:c.instructions+=2;goto B6f9773;
case 0x6f9775:c.instructions+=1;goto B6f9775;
case 0x6f9777:goto L6f9777;
case 0x6f9778:c.instructions+=4;goto B6f9778;
case 0x6f977a:c.instructions+=3;goto B6f977a;
case 0x6f9780:c.instructions+=2;goto B6f9780;
case 0x6f9781:c.instructions+=1;goto B6f9781;
case 0x6f9783:goto L6f9783;
case 0x6f9785:c.instructions+=4;goto B6f9785;
case 0x6f978b:c.instructions+=3;goto B6f978b;
case 0x6f978c:c.instructions+=2;goto B6f978c;
case 0x6f978f:c.instructions+=1;goto B6f978f;
case 0x6f9795:goto L6f9795;
case 0x6f9797:c.instructions+=1;goto B6f9797;
case 0x6f9799:goto L6f9799;
case 0x6f979f:goto L6f979f;
case 0x6f97a2:c.instructions+=3;goto B6f97a2;
case 0x6f97a4:c.instructions+=2;goto B6f97a4;
case 0x6f97a5:c.instructions+=1;goto B6f97a5;
case 0x6f97a6:goto L6f97a6;
case 0x6f97ab:goto L6f97ab;
case 0x6f97ad:c.instructions+=4;goto B6f97ad;
case 0x6f97af:c.instructions+=3;goto B6f97af;
case 0x6f97b0:c.instructions+=2;goto B6f97b0;
case 0x6f97b1:c.instructions+=1;goto B6f97b1;
case 0x6f97b3:goto L6f97b3;
case 0x6f97b9:c.instructions+=3;goto B6f97b9;
case 0x6f97bb:c.instructions+=2;goto B6f97bb;
case 0x6f97bc:c.instructions+=1;goto B6f97bc;
case 0x6f97c1:goto L6f97c1;
case 0x6f97c3:c.instructions+=4;goto B6f97c3;
case 0x6f97c5:c.instructions+=3;goto B6f97c5;
case 0x6f97c6:c.instructions+=2;goto B6f97c6;
case 0x6f97c7:c.instructions+=1;goto B6f97c7;
case 0x6f97c9:goto L6f97c9;
case 0x6f97ca:c.instructions+=2;goto B6f97ca;
case 0x6f97cb:c.instructions+=1;goto B6f97cb;
case 0x6f97cc:goto L6f97cc;
case 0x6f97cd:c.instructions+=6;goto B6f97cd;
case 0x6f97cf:c.instructions+=5;goto B6f97cf;
case 0x6f97d5:c.instructions+=4;goto B6f97d5;
case 0x6f97d7:c.instructions+=3;goto B6f97d7;
case 0x6f97d8:c.instructions+=2;goto B6f97d8;
case 0x6f97de:c.instructions+=1;goto B6f97de;
case 0x6f97e4:goto L6f97e4;
case 0x6f97e9:c.instructions+=12;goto B6f97e9;
case 0x6f97ea:c.instructions+=11;goto B6f97ea;
case 0x6f97ed:c.instructions+=10;goto B6f97ed;
case 0x6f97f3:c.instructions+=9;goto B6f97f3;
case 0x6f97f4:c.instructions+=8;goto B6f97f4;
case 0x6f97f5:c.instructions+=7;goto B6f97f5;
case 0x6f97f7:c.instructions+=6;goto B6f97f7;
case 0x6f97fd:c.instructions+=5;goto B6f97fd;
case 0x6f9800:c.instructions+=4;goto B6f9800;
case 0x6f9805:c.instructions+=3;goto B6f9805;
case 0x6f9806:c.instructions+=2;goto B6f9806;
case 0x6f9807:c.instructions+=1;goto B6f9807;
case 0x6f980c:goto L6f980c;
case 0x6f9812:c.instructions+=6;goto B6f9812;
case 0x6f9815:c.instructions+=5;goto B6f9815;
case 0x6f981a:c.instructions+=4;goto B6f981a;
case 0x6f9820:c.instructions+=3;goto B6f9820;
case 0x6f9823:c.instructions+=2;goto B6f9823;
case 0x6f9825:c.instructions+=1;goto B6f9825;
case 0x6f9827:goto L6f9827;
case 0x6f9829:c.instructions+=4;goto B6f9829;
case 0x6f982c:c.instructions+=3;goto B6f982c;
case 0x6f982d:c.instructions+=2;goto B6f982d;
case 0x6f982f:c.instructions+=1;goto B6f982f;
case 0x6f9831:goto L6f9831;
case 0x6f9836:c.instructions+=1;goto B6f9836;
case 0x6f9838:goto L6f9838;
case 0x6f983a:c.instructions+=3;goto B6f983a;
case 0x6f983b:c.instructions+=2;goto B6f983b;
case 0x6f983d:c.instructions+=1;goto B6f983d;
case 0x6f983f:goto L6f983f;
case 0x6f9845:c.instructions+=2;goto B6f9845;
case 0x6f9847:c.instructions+=1;goto B6f9847;
case 0x6f9848:goto L6f9848;
case 0x6f984b:c.instructions+=3;goto B6f984b;
case 0x6f984c:c.instructions+=2;goto B6f984c;
case 0x6f984e:c.instructions+=1;goto B6f984e;
case 0x6f9850:goto L6f9850;
case 0x6f9852:c.instructions+=1;goto B6f9852;
case 0x6f9855:goto L6f9855;
case 0x6f9857:goto L6f9857;
case 0x6f985d:c.instructions+=6;goto B6f985d;
case 0x6f985f:c.instructions+=5;goto B6f985f;
case 0x6f9860:c.instructions+=4;goto B6f9860;
case 0x6f9861:c.instructions+=3;goto B6f9861;
case 0x6f9867:c.instructions+=2;goto B6f9867;
case 0x6f986a:c.instructions+=1;goto B6f986a;
case 0x6f986b:goto L6f986b;
case 0x6f986d:goto L6f986d;
case 0x6f9872:goto L6f9872;
case 0x6f9875:c.instructions+=4;goto B6f9875;
case 0x6f9876:c.instructions+=3;goto B6f9876;
case 0x6f9877:c.instructions+=2;goto B6f9877;
case 0x6f987e:c.instructions+=1;goto B6f987e;
case 0x6f987f:goto L6f987f;
case 0x6f9880:c.instructions+=1;goto B6f9880;
case 0x6f9881:goto L6f9881;
case 0x6f9882:c.instructions+=11;goto B6f9882;
case 0x6f9884:c.instructions+=10;goto B6f9884;
case 0x6f9887:c.instructions+=9;goto B6f9887;
case 0x6f9888:c.instructions+=8;goto B6f9888;
case 0x6f9889:c.instructions+=7;goto B6f9889;
case 0x6f988f:c.instructions+=6;goto B6f988f;
case 0x6f9891:c.instructions+=5;goto B6f9891;
case 0x6f9894:c.instructions+=4;goto B6f9894;
case 0x6f9895:c.instructions+=3;goto B6f9895;
case 0x6f9898:c.instructions+=2;goto B6f9898;
case 0x6f989a:c.instructions+=1;goto B6f989a;
case 0x6f989f:goto L6f989f;
case 0x6f98a1:c.instructions+=4;goto B6f98a1;
case 0x6f98a4:c.instructions+=3;goto B6f98a4;
case 0x6f98a7:c.instructions+=2;goto B6f98a7;
case 0x6f98aa:c.instructions+=1;goto B6f98aa;
case 0x6f98af:goto L6f98af;
case 0x6f98b2:c.instructions+=5;goto B6f98b2;
case 0x6f98b4:c.instructions+=4;goto B6f98b4;
case 0x6f98b5:c.instructions+=3;goto B6f98b5;
case 0x6f98b6:c.instructions+=2;goto B6f98b6;
case 0x6f98b9:c.instructions+=1;goto B6f98b9;
case 0x6f98bf:goto L6f98bf;
case 0x6f98c0:c.instructions+=7;goto B6f98c0;
case 0x6f98c3:c.instructions+=6;goto B6f98c3;
case 0x6f98c5:c.instructions+=5;goto B6f98c5;
case 0x6f98cb:c.instructions+=4;goto B6f98cb;
case 0x6f98ce:c.instructions+=3;goto B6f98ce;
case 0x6f98cf:c.instructions+=2;goto B6f98cf;
case 0x6f98d2:c.instructions+=1;goto B6f98d2;
case 0x6f98d7:goto L6f98d7;
case 0x6f98da:c.instructions+=2;goto B6f98da;
case 0x6f98df:c.instructions+=1;goto B6f98df;
case 0x6f98e2:goto L6f98e2;
case 0x6f98e4:c.instructions+=9;goto B6f98e4;
case 0x6f98e7:c.instructions+=8;goto B6f98e7;
case 0x6f98e9:c.instructions+=7;goto B6f98e9;
case 0x6f98ea:c.instructions+=6;goto B6f98ea;
case 0x6f98ed:c.instructions+=5;goto B6f98ed;
case 0x6f98f1:c.instructions+=4;goto B6f98f1;
case 0x6f98f3:c.instructions+=3;goto B6f98f3;
case 0x6f98f4:c.instructions+=2;goto B6f98f4;
case 0x6f98f7:c.instructions+=1;goto B6f98f7;
case 0x6f98fc:goto L6f98fc;
case 0x6f9900:c.instructions+=2;goto B6f9900;
case 0x6f9904:c.instructions+=1;goto B6f9904;
case 0x6f9909:goto L6f9909;
case 0x6f990d:c.instructions+=1;goto B6f990d;
case 0x6f9912:goto L6f9912;
case 0x6f9915:c.instructions+=10;goto B6f9915;
case 0x6f9917:c.instructions+=9;goto B6f9917;
case 0x6f991a:c.instructions+=8;goto B6f991a;
case 0x6f991b:c.instructions+=7;goto B6f991b;
case 0x6f991e:c.instructions+=6;goto B6f991e;
case 0x6f9921:c.instructions+=5;goto B6f9921;
case 0x6f9925:c.instructions+=4;goto B6f9925;
case 0x6f9926:c.instructions+=3;goto B6f9926;
case 0x6f9929:c.instructions+=2;goto B6f9929;
case 0x6f992c:c.instructions+=1;goto B6f992c;
case 0x6f9932:goto L6f9932;
case 0x6f9934:c.instructions+=1;goto B6f9934;
case 0x6f9936:goto L6f9936;
case 0x6f9939:c.instructions+=6;goto B6f9939;
case 0x6f993b:c.instructions+=5;goto B6f993b;
case 0x6f993e:c.instructions+=4;goto B6f993e;
case 0x6f993f:c.instructions+=3;goto B6f993f;
case 0x6f9942:c.instructions+=2;goto B6f9942;
case 0x6f9945:c.instructions+=1;goto B6f9945;
case 0x6f994a:goto L6f994a;
case 0x6f994d:c.instructions+=6;goto B6f994d;
case 0x6f9950:c.instructions+=5;goto B6f9950;
case 0x6f9955:c.instructions+=4;goto B6f9955;
case 0x6f9958:c.instructions+=3;goto B6f9958;
case 0x6f995b:c.instructions+=2;goto B6f995b;
case 0x6f995d:c.instructions+=1;goto B6f995d;
case 0x6f995f:goto L6f995f;
case 0x6f9966:c.instructions+=1;goto B6f9966;
case 0x6f996c:goto L6f996c;
case 0x6f996e:goto L6f996e;
case 0x6f9971:c.instructions+=1;goto B6f9971;
case 0x6f9974:goto L6f9974;
case 0x6f9978:c.instructions+=1;goto B6f9978;
case 0x6f997d:goto L6f997d;
case 0x6f997e:c.instructions+=7;goto B6f997e;
case 0x6f9980:c.instructions+=6;goto B6f9980;
case 0x6f9983:c.instructions+=5;goto B6f9983;
case 0x6f9984:c.instructions+=4;goto B6f9984;
case 0x6f9985:c.instructions+=3;goto B6f9985;
case 0x6f9986:c.instructions+=2;goto B6f9986;
case 0x6f9987:c.instructions+=1;goto B6f9987;
case 0x6f9988:goto L6f9988;
case 0x6f9989:c.instructions+=9;goto B6f9989;
case 0x6f998b:c.instructions+=8;goto B6f998b;
case 0x6f998e:c.instructions+=7;goto B6f998e;
case 0x6f998f:c.instructions+=6;goto B6f998f;
case 0x6f9990:c.instructions+=5;goto B6f9990;
case 0x6f9991:c.instructions+=4;goto B6f9991;
case 0x6f9993:c.instructions+=3;goto B6f9993;
case 0x6f9998:c.instructions+=2;goto B6f9998;
case 0x6f9999:c.instructions+=1;goto B6f9999;
case 0x6f999e:goto L6f999e;
case 0x6f99a3:c.instructions+=3;goto B6f99a3;
case 0x6f99a5:c.instructions+=2;goto B6f99a5;
case 0x6f99a7:c.instructions+=1;goto B6f99a7;
case 0x6f99a9:goto L6f99a9;
case 0x6f99ac:c.instructions+=1;goto B6f99ac;
case 0x6f99ad:goto L6f99ad;
case 0x6f99b3:c.instructions+=19;goto B6f99b3;
case 0x6f99b7:c.instructions+=18;goto B6f99b7;
case 0x6f99b9:c.instructions+=17;goto B6f99b9;
case 0x6f99bf:c.instructions+=16;goto B6f99bf;
case 0x6f99c2:c.instructions+=15;goto B6f99c2;
case 0x6f99c5:c.instructions+=14;goto B6f99c5;
case 0x6f99c8:c.instructions+=13;goto B6f99c8;
case 0x6f99cb:c.instructions+=12;goto B6f99cb;
case 0x6f99cc:c.instructions+=11;goto B6f99cc;
case 0x6f99d2:c.instructions+=10;goto B6f99d2;
case 0x6f99d9:c.instructions+=9;goto B6f99d9;
case 0x6f99e0:c.instructions+=8;goto B6f99e0;
case 0x6f99e7:c.instructions+=7;goto B6f99e7;
case 0x6f99ee:c.instructions+=6;goto B6f99ee;
case 0x6f99f5:c.instructions+=5;goto B6f99f5;
case 0x6f99fc:c.instructions+=4;goto B6f99fc;
case 0x6f99ff:c.instructions+=3;goto B6f99ff;
case 0x6f9a01:c.instructions+=2;goto B6f9a01;
case 0x6f9a02:c.instructions+=1;goto B6f9a02;
case 0x6f9a04:goto L6f9a04;
case 0x6f9a05:c.instructions+=3;goto B6f9a05;
case 0x6f9a06:c.instructions+=2;goto B6f9a06;
case 0x6f9a0b:c.instructions+=1;goto B6f9a0b;
case 0x6f9a10:goto L6f9a10;
case 0x6f9a12:c.instructions+=5;goto B6f9a12;
case 0x6f9a17:c.instructions+=4;goto B6f9a17;
case 0x6f9a18:c.instructions+=3;goto B6f9a18;
case 0x6f9a19:c.instructions+=2;goto B6f9a19;
case 0x6f9a1c:c.instructions+=1;goto B6f9a1c;
case 0x6f9a1e:goto L6f9a1e;
case 0x6f9a21:c.instructions+=3;goto B6f9a21;
case 0x6f9a24:c.instructions+=2;goto B6f9a24;
case 0x6f9a27:c.instructions+=1;goto B6f9a27;
case 0x6f9a2a:goto L6f9a2a;
case 0x6f9a2e:c.instructions+=7;goto B6f9a2e;
case 0x6f9a34:c.instructions+=6;goto B6f9a34;
case 0x6f9a37:c.instructions+=5;goto B6f9a37;
case 0x6f9a3a:c.instructions+=4;goto B6f9a3a;
case 0x6f9a3b:c.instructions+=3;goto B6f9a3b;
case 0x6f9a3d:c.instructions+=2;goto B6f9a3d;
case 0x6f9a43:c.instructions+=1;goto B6f9a43;
case 0x6f9a45:goto L6f9a45;
case 0x6f9a4a:goto L6f9a4a;
case 0x6f9a4d:c.instructions+=2;goto B6f9a4d;
case 0x6f9a50:c.instructions+=1;goto B6f9a50;
case 0x6f9a55:goto L6f9a55;
case 0x6f9a57:c.instructions+=3;goto B6f9a57;
case 0x6f9a58:c.instructions+=2;goto B6f9a58;
case 0x6f9a59:c.instructions+=1;goto B6f9a59;
case 0x6f9a5b:goto L6f9a5b;
case 0x6f9a5c:c.instructions+=3;goto B6f9a5c;
case 0x6f9a5f:c.instructions+=2;goto B6f9a5f;
case 0x6f9a60:c.instructions+=1;goto B6f9a60;
case 0x6f9a65:goto L6f9a65;
case 0x6f9a68:c.instructions+=8;goto B6f9a68;
case 0x6f9a6d:c.instructions+=7;goto B6f9a6d;
case 0x6f9a70:c.instructions+=6;goto B6f9a70;
case 0x6f9a73:c.instructions+=5;goto B6f9a73;
case 0x6f9a75:c.instructions+=4;goto B6f9a75;
case 0x6f9a78:c.instructions+=3;goto B6f9a78;
case 0x6f9a79:c.instructions+=2;goto B6f9a79;
case 0x6f9a7c:c.instructions+=1;goto B6f9a7c;
case 0x6f9a7e:goto L6f9a7e;
case 0x6f9a80:goto L6f9a80;
case 0x6f9a85:goto L6f9a85;
case 0x6f9a88:c.instructions+=2;goto B6f9a88;
case 0x6f9a8a:c.instructions+=1;goto B6f9a8a;
case 0x6f9a8c:goto L6f9a8c;
case 0x6f9a8e:c.instructions+=4;goto B6f9a8e;
case 0x6f9a91:c.instructions+=3;goto B6f9a91;
case 0x6f9a92:c.instructions+=2;goto B6f9a92;
case 0x6f9a94:c.instructions+=1;goto B6f9a94;
case 0x6f9a96:goto L6f9a96;
case 0x6f9a9c:c.instructions+=9;goto B6f9a9c;
case 0x6f9a9f:c.instructions+=8;goto B6f9a9f;
case 0x6f9aa2:c.instructions+=7;goto B6f9aa2;
case 0x6f9aa3:c.instructions+=6;goto B6f9aa3;
case 0x6f9aa9:c.instructions+=5;goto B6f9aa9;
case 0x6f9aaa:c.instructions+=4;goto B6f9aaa;
case 0x6f9aad:c.instructions+=3;goto B6f9aad;
case 0x6f9ab3:c.instructions+=2;goto B6f9ab3;
case 0x6f9ab4:c.instructions+=1;goto B6f9ab4;
case 0x6f9ab9:goto L6f9ab9;
case 0x6f9abc:c.instructions+=2;goto B6f9abc;
case 0x6f9abe:c.instructions+=1;goto B6f9abe;
case 0x6f9ac0:goto L6f9ac0;
case 0x6f9ac6:c.instructions+=4;goto B6f9ac6;
case 0x6f9ac8:c.instructions+=3;goto B6f9ac8;
case 0x6f9aca:c.instructions+=2;goto B6f9aca;
case 0x6f9acb:c.instructions+=1;goto B6f9acb;
case 0x6f9ace:goto L6f9ace;
case 0x6f9ad3:c.instructions+=1;goto B6f9ad3;
case 0x6f9ad8:goto L6f9ad8;
case 0x6f9ad9:c.instructions+=6;goto B6f9ad9;
case 0x6f9adb:c.instructions+=5;goto B6f9adb;
case 0x6f9adc:c.instructions+=4;goto B6f9adc;
case 0x6f9ae3:c.instructions+=3;goto B6f9ae3;
case 0x6f9ae4:c.instructions+=2;goto B6f9ae4;
case 0x6f9ae5:c.instructions+=1;goto B6f9ae5;
case 0x6f9ae6:goto L6f9ae6;
case 0x6f9ae7:c.instructions+=3;goto B6f9ae7;
case 0x6f9ae9:c.instructions+=2;goto B6f9ae9;
case 0x6f9aea:c.instructions+=1;goto B6f9aea;
case 0x6f9aef:goto L6f9aef;
case 0x6f9af0:c.instructions+=3;goto B6f9af0;
case 0x6f9af2:c.instructions+=2;goto B6f9af2;
case 0x6f9af8:c.instructions+=1;goto B6f9af8;
case 0x6f9afa:goto L6f9afa;
case 0x6f9afc:c.instructions+=2;goto B6f9afc;
case 0x6f9aff:c.instructions+=1;goto B6f9aff;
case 0x6f9b01:goto L6f9b01;
case 0x6f9b04:c.instructions+=1;goto B6f9b04;
case 0x6f9b06:goto L6f9b06;
case 0x6f9b0a:c.instructions+=1;goto B6f9b0a;
case 0x6f9b0c:goto L6f9b0c;
case 0x6f9b11:c.instructions+=2;goto B6f9b11;
case 0x6f9b13:c.instructions+=1;goto B6f9b13;
case 0x6f9b15:goto L6f9b15;
case 0x6f9b18:c.instructions+=1;goto B6f9b18;
case 0x6f9b1a:goto L6f9b1a;
case 0x6f9b1b:c.instructions+=1;goto B6f9b1b;
case 0x6f9b1c:goto L6f9b1c;
case 0x6f9b21:c.instructions+=6;goto B6f9b21;
case 0x6f9b26:c.instructions+=5;goto B6f9b26;
case 0x6f9b29:c.instructions+=4;goto B6f9b29;
case 0x6f9b2e:c.instructions+=3;goto B6f9b2e;
case 0x6f9b2f:c.instructions+=2;goto B6f9b2f;
case 0x6f9b30:c.instructions+=1;goto B6f9b30;
case 0x6f9b35:goto L6f9b35;
case 0x6f9b38:c.instructions+=2;goto B6f9b38;
case 0x6f9b3a:c.instructions+=1;goto B6f9b3a;
case 0x6f9b3c:goto L6f9b3c;
case 0x6f9b42:goto L6f9b42;
case 0x6f9b44:c.instructions+=2;goto B6f9b44;
case 0x6f9b45:c.instructions+=1;goto B6f9b45;
case 0x6f9b46:goto L6f9b46;
case 0x6f9b48:c.instructions+=2;goto B6f9b48;
case 0x6f9b49:c.instructions+=1;goto B6f9b49;
case 0x6f9bfc:goto L6f9bfc;
case 0x6f9bfd:c.instructions+=10;goto B6f9bfd;
case 0x6f9bff:c.instructions+=9;goto B6f9bff;
case 0x6f9c05:c.instructions+=8;goto B6f9c05;
case 0x6f9c0a:c.instructions+=7;goto B6f9c0a;
case 0x6f9c0b:c.instructions+=6;goto B6f9c0b;
case 0x6f9c0c:c.instructions+=5;goto B6f9c0c;
case 0x6f9c12:c.instructions+=4;goto B6f9c12;
case 0x6f9c13:c.instructions+=3;goto B6f9c13;
case 0x6f9c1a:c.instructions+=2;goto B6f9c1a;
case 0x6f9c1e:c.instructions+=1;goto B6f9c1e;
case 0x6f9c20:goto L6f9c20;
case 0x6f9c22:c.instructions+=4;goto B6f9c22;
case 0x6f9c25:c.instructions+=3;goto B6f9c25;
case 0x6f9c26:c.instructions+=2;goto B6f9c26;
case 0x6f9c28:c.instructions+=1;goto B6f9c28;
case 0x6f9c2a:goto L6f9c2a;
case 0x6f9c2d:c.instructions+=1;goto B6f9c2d;
case 0x6f9c2f:goto L6f9c2f;
case 0x6f9c31:c.instructions+=3;goto B6f9c31;
case 0x6f9c32:c.instructions+=2;goto B6f9c32;
case 0x6f9c34:c.instructions+=1;goto B6f9c34;
case 0x6f9c36:goto L6f9c36;
case 0x6f9c3c:c.instructions+=2;goto B6f9c3c;
case 0x6f9c3e:c.instructions+=1;goto B6f9c3e;
case 0x6f9c3f:goto L6f9c3f;
case 0x6f9c42:c.instructions+=3;goto B6f9c42;
case 0x6f9c43:c.instructions+=2;goto B6f9c43;
case 0x6f9c45:c.instructions+=1;goto B6f9c45;
case 0x6f9c47:goto L6f9c47;
case 0x6f9c4a:c.instructions+=2;goto B6f9c4a;
case 0x6f9c4c:c.instructions+=1;goto B6f9c4c;
case 0x6f9c4f:goto L6f9c4f;
case 0x6f9c51:goto L6f9c51;
case 0x6f9c53:c.instructions+=4;goto B6f9c53;
case 0x6f9c59:c.instructions+=3;goto B6f9c59;
case 0x6f9c5c:c.instructions+=2;goto B6f9c5c;
case 0x6f9c5e:c.instructions+=1;goto B6f9c5e;
case 0x6f9c5f:goto L6f9c5f;
case 0x6f9c61:goto L6f9c61;
case 0x6f9c66:goto L6f9c66;
case 0x6f9c69:c.instructions+=3;goto B6f9c69;
case 0x6f9c6b:c.instructions+=2;goto B6f9c6b;
case 0x6f9c6e:c.instructions+=1;goto B6f9c6e;
case 0x6f9c70:goto L6f9c70;
case 0x6f9c72:c.instructions+=1;goto B6f9c72;
case 0x6f9c77:goto L6f9c77;
case 0x6f9c7a:c.instructions+=2;goto B6f9c7a;
case 0x6f9c7b:c.instructions+=1;goto B6f9c7b;
case 0x6f9c80:goto L6f9c80;
case 0x6f9c86:c.instructions+=2;goto B6f9c86;
case 0x6f9c88:c.instructions+=1;goto B6f9c88;
case 0x6f9c8d:goto L6f9c8d;
case 0x6f9c8f:c.instructions+=6;goto B6f9c8f;
case 0x6f9c94:c.instructions+=5;goto B6f9c94;
case 0x6f9c96:c.instructions+=4;goto B6f9c96;
case 0x6f9c99:c.instructions+=3;goto B6f9c99;
case 0x6f9c9b:c.instructions+=2;goto B6f9c9b;
case 0x6f9c9d:c.instructions+=1;goto B6f9c9d;
case 0x6f9c9f:goto L6f9c9f;
case 0x6f9ca2:c.instructions+=3;goto B6f9ca2;
case 0x6f9ca5:c.instructions+=2;goto B6f9ca5;
case 0x6f9ca8:c.instructions+=1;goto B6f9ca8;
case 0x6f9caa:goto L6f9caa;
case 0x6f9cad:goto L6f9cad;
case 0x6f9caf:c.instructions+=7;goto B6f9caf;
case 0x6f9cb0:c.instructions+=6;goto B6f9cb0;
case 0x6f9cb2:c.instructions+=5;goto B6f9cb2;
case 0x6f9cb4:c.instructions+=4;goto B6f9cb4;
case 0x6f9cb6:c.instructions+=3;goto B6f9cb6;
case 0x6f9cb9:c.instructions+=2;goto B6f9cb9;
case 0x6f9cbf:c.instructions+=1;goto B6f9cbf;
case 0x6f9cc5:goto L6f9cc5;
case 0x6f9cc7:goto L6f9cc7;
case 0x6f9ccd:c.instructions+=1;goto B6f9ccd;
case 0x6f9cd3:goto L6f9cd3;
case 0x6f9cd5:c.instructions+=5;goto B6f9cd5;
case 0x6f9cd7:c.instructions+=4;goto B6f9cd7;
case 0x6f9cdd:c.instructions+=3;goto B6f9cdd;
case 0x6f9ce0:c.instructions+=2;goto B6f9ce0;
case 0x6f9ce3:c.instructions+=1;goto B6f9ce3;
case 0x6f9ce9:goto L6f9ce9;
case 0x6f9ceb:goto L6f9ceb;
case 0x6f9cf1:c.instructions+=1;goto B6f9cf1;
case 0x6f9cf7:goto L6f9cf7;
case 0x6f9cfc:c.instructions+=2;goto B6f9cfc;
case 0x6f9d02:c.instructions+=1;goto B6f9d02;
case 0x6f9d04:goto L6f9d04;
case 0x6f9d06:c.instructions+=4;goto B6f9d06;
case 0x6f9d09:c.instructions+=3;goto B6f9d09;
case 0x6f9d0a:c.instructions+=2;goto B6f9d0a;
case 0x6f9d0c:c.instructions+=1;goto B6f9d0c;
case 0x6f9d0e:goto L6f9d0e;
case 0x6f9d11:c.instructions+=1;goto B6f9d11;
case 0x6f9d13:goto L6f9d13;
case 0x6f9d15:c.instructions+=3;goto B6f9d15;
case 0x6f9d16:c.instructions+=2;goto B6f9d16;
case 0x6f9d18:c.instructions+=1;goto B6f9d18;
case 0x6f9d1a:goto L6f9d1a;
case 0x6f9d20:c.instructions+=2;goto B6f9d20;
case 0x6f9d22:c.instructions+=1;goto B6f9d22;
case 0x6f9d23:goto L6f9d23;
case 0x6f9d26:c.instructions+=3;goto B6f9d26;
case 0x6f9d27:c.instructions+=2;goto B6f9d27;
case 0x6f9d29:c.instructions+=1;goto B6f9d29;
case 0x6f9d2b:goto L6f9d2b;
case 0x6f9d2d:c.instructions+=2;goto B6f9d2d;
case 0x6f9d30:c.instructions+=1;goto B6f9d30;
case 0x6f9d32:goto L6f9d32;
case 0x6f9d34:goto L6f9d34;
case 0x6f9d36:c.instructions+=2;goto B6f9d36;
case 0x6f9d39:c.instructions+=1;goto B6f9d39;
case 0x6f9d3f:goto L6f9d3f;
case 0x6f9d41:goto L6f9d41;
case 0x6f9d46:goto L6f9d46;
case 0x6f9d4b:c.instructions+=2;goto B6f9d4b;
case 0x6f9d51:c.instructions+=1;goto B6f9d51;
case 0x6f9d53:goto L6f9d53;
case 0x6f9d55:c.instructions+=4;goto B6f9d55;
case 0x6f9d58:c.instructions+=3;goto B6f9d58;
case 0x6f9d59:c.instructions+=2;goto B6f9d59;
case 0x6f9d5b:c.instructions+=1;goto B6f9d5b;
case 0x6f9d5d:goto L6f9d5d;
case 0x6f9d62:c.instructions+=1;goto B6f9d62;
case 0x6f9d64:goto L6f9d64;
case 0x6f9d66:c.instructions+=3;goto B6f9d66;
case 0x6f9d67:c.instructions+=2;goto B6f9d67;
case 0x6f9d69:c.instructions+=1;goto B6f9d69;
case 0x6f9d6b:goto L6f9d6b;
case 0x6f9d71:c.instructions+=2;goto B6f9d71;
case 0x6f9d73:c.instructions+=1;goto B6f9d73;
case 0x6f9d74:goto L6f9d74;
case 0x6f9d77:c.instructions+=3;goto B6f9d77;
case 0x6f9d78:c.instructions+=2;goto B6f9d78;
case 0x6f9d7a:c.instructions+=1;goto B6f9d7a;
case 0x6f9d7c:goto L6f9d7c;
case 0x6f9d7e:c.instructions+=1;goto B6f9d7e;
case 0x6f9d81:goto L6f9d81;
case 0x6f9d83:goto L6f9d83;
case 0x6f9d85:c.instructions+=4;goto B6f9d85;
case 0x6f9d8a:c.instructions+=3;goto B6f9d8a;
case 0x6f9d8d:c.instructions+=2;goto B6f9d8d;
case 0x6f9d8f:c.instructions+=1;goto B6f9d8f;
case 0x6f9d91:goto L6f9d91;
case 0x6f9d93:goto L6f9d93;
case 0x6f9d99:goto L6f9d99;
case 0x6f9d9c:c.instructions+=2;goto B6f9d9c;
case 0x6f9d9e:c.instructions+=1;goto B6f9d9e;
case 0x6f9da4:goto L6f9da4;
case 0x6f9da7:c.instructions+=1;goto B6f9da7;
case 0x6f9da9:goto L6f9da9;
case 0x6f9dab:c.instructions+=3;goto B6f9dab;
case 0x6f9dad:c.instructions+=2;goto B6f9dad;
case 0x6f9daf:c.instructions+=1;goto B6f9daf;
case 0x6f9db1:goto L6f9db1;
case 0x6f9db3:c.instructions+=1;goto B6f9db3;
case 0x6f9db5:goto L6f9db5;
case 0x6f9db8:c.instructions+=3;goto B6f9db8;
case 0x6f9dba:c.instructions+=2;goto B6f9dba;
case 0x6f9dbd:c.instructions+=1;goto B6f9dbd;
case 0x6f9dbf:goto L6f9dbf;
case 0x6f9dc0:c.instructions+=5;goto B6f9dc0;
case 0x6f9dc1:c.instructions+=4;goto B6f9dc1;
case 0x6f9dc2:c.instructions+=3;goto B6f9dc2;
case 0x6f9dc3:c.instructions+=2;goto B6f9dc3;
case 0x6f9dc5:c.instructions+=1;goto B6f9dc5;
case 0x6f9dc7:goto L6f9dc7;
case 0x6f9dc9:c.instructions+=1;goto B6f9dc9;
case 0x6f9dcb:goto L6f9dcb;
case 0x6f9dcd:c.instructions+=1;goto B6f9dcd;
case 0x6f9dd0:goto L6f9dd0;
case 0x6f9dd2:c.instructions+=1;goto B6f9dd2;
case 0x6f9dd8:goto L6f9dd8;
case 0x6f9dd9:c.instructions+=8;goto B6f9dd9;
case 0x6f9dde:c.instructions+=7;goto B6f9dde;
case 0x6f9de0:c.instructions+=6;goto B6f9de0;
case 0x6f9de1:c.instructions+=5;goto B6f9de1;
case 0x6f9de2:c.instructions+=4;goto B6f9de2;
case 0x6f9de7:c.instructions+=3;goto B6f9de7;
case 0x6f9ded:c.instructions+=2;goto B6f9ded;
case 0x6f9dee:c.instructions+=1;goto B6f9dee;
case 0x6f9df4:goto L6f9df4;
case 0x6f9df6:c.instructions+=2;goto B6f9df6;
case 0x6f9df9:c.instructions+=1;goto B6f9df9;
case 0x6f9dff:goto L6f9dff;
case 0x6f9e00:c.instructions+=2;goto B6f9e00;
case 0x6f9e01:c.instructions+=1;goto B6f9e01;
case 0x6f9e07:goto L6f9e07;
case 0x6f9e0d:c.instructions+=2;goto B6f9e0d;
case 0x6f9e10:c.instructions+=1;goto B6f9e10;
case 0x6f9e16:goto L6f9e16;
case 0x6f9e1c:c.instructions+=4;goto B6f9e1c;
case 0x6f9e1e:c.instructions+=3;goto B6f9e1e;
case 0x6f9e21:c.instructions+=2;goto B6f9e21;
case 0x6f9e24:c.instructions+=1;goto B6f9e24;
case 0x6f9e29:goto L6f9e29;
case 0x6f9e2c:c.instructions+=6;goto B6f9e2c;
case 0x6f9e2d:c.instructions+=5;goto B6f9e2d;
case 0x6f9e30:c.instructions+=4;goto B6f9e30;
case 0x6f9e31:c.instructions+=3;goto B6f9e31;
case 0x6f9e32:c.instructions+=2;goto B6f9e32;
case 0x6f9e38:c.instructions+=1;goto B6f9e38;
case 0x6f9e3a:goto L6f9e3a;
case 0x6f9e3d:c.instructions+=3;goto B6f9e3d;
case 0x6f9e3e:c.instructions+=2;goto B6f9e3e;
case 0x6f9e41:c.instructions+=1;goto B6f9e41;
case 0x6f9e46:goto L6f9e46;
case 0x6f9e49:c.instructions+=5;goto B6f9e49;
case 0x6f9e4a:c.instructions+=4;goto B6f9e4a;
case 0x6f9e4d:c.instructions+=3;goto B6f9e4d;
case 0x6f9e50:c.instructions+=2;goto B6f9e50;
case 0x6f9e51:c.instructions+=1;goto B6f9e51;
case 0x6f9e57:goto L6f9e57;
case 0x6f9e5a:c.instructions+=2;goto B6f9e5a;
case 0x6f9e5b:c.instructions+=1;goto B6f9e5b;
case 0x6f9e5d:goto L6f9e5d;
case 0x6f9e62:c.instructions+=2;goto B6f9e62;
case 0x6f9e65:c.instructions+=1;goto B6f9e65;
case 0x6f9e67:goto L6f9e67;
case 0x6f9e68:c.instructions+=1;goto B6f9e68;
case 0x6f9e6e:goto L6f9e6e;
case 0x6f9e73:c.instructions+=4;goto B6f9e73;
case 0x6f9e77:c.instructions+=3;goto B6f9e77;
case 0x6f9e7a:c.instructions+=2;goto B6f9e7a;
case 0x6f9e81:c.instructions+=1;goto B6f9e81;
case 0x6f9e83:goto L6f9e83;
case 0x6f9e84:c.instructions+=8;goto B6f9e84;
case 0x6f9e89:c.instructions+=7;goto B6f9e89;
case 0x6f9e8b:c.instructions+=6;goto B6f9e8b;
case 0x6f9e8c:c.instructions+=5;goto B6f9e8c;
case 0x6f9e8d:c.instructions+=4;goto B6f9e8d;
case 0x6f9e92:c.instructions+=3;goto B6f9e92;
case 0x6f9e98:c.instructions+=2;goto B6f9e98;
case 0x6f9e99:c.instructions+=1;goto B6f9e99;
case 0x6f9e9f:goto L6f9e9f;
case 0x6f9ea0:c.instructions+=6;goto B6f9ea0;
case 0x6f9ea2:c.instructions+=5;goto B6f9ea2;
case 0x6f9ea7:c.instructions+=4;goto B6f9ea7;
case 0x6f9ea8:c.instructions+=3;goto B6f9ea8;
case 0x6f9eab:c.instructions+=2;goto B6f9eab;
case 0x6f9eac:c.instructions+=1;goto B6f9eac;
case 0x6f9eb2:goto L6f9eb2;
case 0x6f9eb4:goto L6f9eb4;
case 0x6f9ebb:c.instructions+=1;goto B6f9ebb;
case 0x6f9ebd:goto L6f9ebd;
case 0x6f9ebe:c.instructions+=1;goto B6f9ebe;
case 0x6f9ec4:goto L6f9ec4;
case 0x6f9ec7:goto L6f9ec7;
case 0x6f9ecc:goto L6f9ecc;
case 0x6f9ecf:c.instructions+=4;goto B6f9ecf;
case 0x6f9ed6:c.instructions+=3;goto B6f9ed6;
case 0x6f9eda:c.instructions+=2;goto B6f9eda;
case 0x6f9edd:c.instructions+=1;goto B6f9edd;
case 0x6f9edf:goto L6f9edf;
case 0x6f9ee0:c.instructions+=8;goto B6f9ee0;
case 0x6f9ee5:c.instructions+=7;goto B6f9ee5;
case 0x6f9ee7:c.instructions+=6;goto B6f9ee7;
case 0x6f9ee8:c.instructions+=5;goto B6f9ee8;
case 0x6f9ee9:c.instructions+=4;goto B6f9ee9;
case 0x6f9eee:c.instructions+=3;goto B6f9eee;
case 0x6f9ef4:c.instructions+=2;goto B6f9ef4;
case 0x6f9ef5:c.instructions+=1;goto B6f9ef5;
case 0x6f9efb:goto L6f9efb;
case 0x6f9efd:c.instructions+=2;goto B6f9efd;
case 0x6f9f00:c.instructions+=1;goto B6f9f00;
case 0x6f9f06:goto L6f9f06;
case 0x6f9f0b:goto L6f9f0b;
case 0x6f9f0d:c.instructions+=1;goto B6f9f0d;
case 0x6f9f0f:goto L6f9f0f;
case 0x6f9f14:c.instructions+=6;goto B6f9f14;
case 0x6f9f19:c.instructions+=5;goto B6f9f19;
case 0x6f9f1c:c.instructions+=4;goto B6f9f1c;
case 0x6f9f21:c.instructions+=3;goto B6f9f21;
case 0x6f9f22:c.instructions+=2;goto B6f9f22;
case 0x6f9f25:c.instructions+=1;goto B6f9f25;
case 0x6f9f2a:goto L6f9f2a;
case 0x6f9f2c:c.instructions+=3;goto B6f9f2c;
case 0x6f9f2f:c.instructions+=2;goto B6f9f2f;
case 0x6f9f31:c.instructions+=1;goto B6f9f31;
case 0x6f9f33:goto L6f9f33;
case 0x6f9f36:c.instructions+=1;goto B6f9f36;
case 0x6f9f3b:goto L6f9f3b;
case 0x6f9f3c:c.instructions+=1;goto B6f9f3c;
case 0x6f9f3e:goto L6f9f3e;
case 0x6f9f41:c.instructions+=5;goto B6f9f41;
case 0x6f9f42:c.instructions+=4;goto B6f9f42;
case 0x6f9f45:c.instructions+=3;goto B6f9f45;
case 0x6f9f46:c.instructions+=2;goto B6f9f46;
case 0x6f9f49:c.instructions+=1;goto B6f9f49;
case 0x6f9f4e:goto L6f9f4e;
case 0x6f9f51:c.instructions+=3;goto B6f9f51;
case 0x6f9f52:c.instructions+=2;goto B6f9f52;
case 0x6f9f54:c.instructions+=1;goto B6f9f54;
case 0x6f9f5a:goto L6f9f5a;
case 0x6f9f61:c.instructions+=1;goto B6f9f61;
case 0x6f9f67:goto L6f9f67;
case 0x6f9f6a:c.instructions+=1;goto B6f9f6a;
case 0x6f9f70:goto L6f9f70;
case 0x6f9f75:c.instructions+=2;goto B6f9f75;
case 0x6f9f77:c.instructions+=1;goto B6f9f77;
case 0x6f9f7c:goto L6f9f7c;
case 0x6f9f82:c.instructions+=6;goto B6f9f82;
case 0x6f9f84:c.instructions+=5;goto B6f9f84;
case 0x6f9f85:c.instructions+=4;goto B6f9f85;
case 0x6f9f88:c.instructions+=3;goto B6f9f88;
case 0x6f9f8b:c.instructions+=2;goto B6f9f8b;
case 0x6f9f91:c.instructions+=1;goto B6f9f91;
case 0x6f9f93:goto L6f9f93;
case 0x6f9f95:goto L6f9f95;
case 0x6f9f9b:c.instructions+=1;goto B6f9f9b;
case 0x6f9f9d:goto L6f9f9d;
case 0x6f9fa0:c.instructions+=2;goto B6f9fa0;
case 0x6f9fa6:c.instructions+=1;goto B6f9fa6;
case 0x6f9fa8:goto L6f9fa8;
case 0x6f9faa:goto L6f9faa;
case 0x6f9fad:c.instructions+=2;goto B6f9fad;
case 0x6f9fb3:c.instructions+=1;goto B6f9fb3;
case 0x6f9fb5:goto L6f9fb5;
case 0x6f9fb8:c.instructions+=6;goto B6f9fb8;
case 0x6f9fbe:c.instructions+=5;goto B6f9fbe;
case 0x6f9fbf:c.instructions+=4;goto B6f9fbf;
case 0x6f9fc5:c.instructions+=3;goto B6f9fc5;
case 0x6f9fc6:c.instructions+=2;goto B6f9fc6;
case 0x6f9fc9:c.instructions+=1;goto B6f9fc9;
case 0x6f9fcf:goto L6f9fcf;
case 0x6f9fd6:c.instructions+=2;goto B6f9fd6;
case 0x6f9fda:c.instructions+=1;goto B6f9fda;
case 0x6f9fdc:goto L6f9fdc;
case 0x6f9fe2:c.instructions+=2;goto B6f9fe2;
case 0x6f9fe3:c.instructions+=1;goto B6f9fe3;
case 0x6f9fe9:goto L6f9fe9;
case 0x6f9feb:c.instructions+=1;goto B6f9feb;
case 0x6f9ff0:goto L6f9ff0;
case 0x6f9ff2:goto L6f9ff2;
case 0x6f9ff7:c.instructions+=3;goto B6f9ff7;
case 0x6f9ffa:c.instructions+=2;goto B6f9ffa;
case 0x6f9ffd:c.instructions+=1;goto B6f9ffd;
default:missing_instruction(c.pc);}
B6f9004:L6f9004:{c.instructions+=3;NFSU2_TR(0x6f9004);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f9006:{NFSU2_TR(0x6f9006);
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
B6f9007:{NFSU2_TR(0x6f9007);
{goto L6f900c;}
}
B6f9009:L6f9009:{c.instructions+=1;NFSU2_TR(0x6f9009);
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
B6f900c:L6f900c:{c.instructions+=5;NFSU2_TR(0x6f900c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f900d:{NFSU2_TR(0x6f900d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f900e:{NFSU2_TR(0x6f900e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f900f:{NFSU2_TR(0x6f900f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9010:{NFSU2_TR(0x6f9010);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f909d:L6f909d:{c.instructions+=5;NFSU2_TR(0x6f909d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f909e:{NFSU2_TR(0x6f909e);
__builtin_memmove((R+20),(R+16),4);
}
B6f90a0:{NFSU2_TR(0x6f90a0);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90a2:{NFSU2_TR(0x6f90a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f90a5:{NFSU2_TR(0x6f90a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f90aaull));
TAIL_STATIC(0x6f87eau,6f8);
}
B6f90aa:L6f90aa:{c.instructions+=4;NFSU2_TR(0x6f90aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f90ab:{NFSU2_TR(0x6f90ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f90ac:{NFSU2_TR(0x6f90ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f90ad:{NFSU2_TR(0x6f90ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f90ae:L6f90ae:{c.instructions+=10;NFSU2_TR(0x6f90ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90af:{NFSU2_TR(0x6f90af);
__builtin_memmove((R+20),(R+16),4);
}
B6f90b1:{NFSU2_TR(0x6f90b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f90b4:{NFSU2_TR(0x6f90b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90b5:{NFSU2_TR(0x6f90b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f90b8:{NFSU2_TR(0x6f90b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90b9:{NFSU2_TR(0x6f90b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90ba:{NFSU2_TR(0x6f90ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90bc:{NFSU2_TR(0x6f90bc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f90be:{NFSU2_TR(0x6f90be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f90c3ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f90c3:L6f90c3:{c.instructions+=4;NFSU2_TR(0x6f90c3);
__builtin_memmove((R+28),(R+0),4);
}
B6f90c5:{NFSU2_TR(0x6f90c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f90c8:{NFSU2_TR(0x6f90c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f90ca:{NFSU2_TR(0x6f90ca);
if(r1(R+518)){{goto L6f90e6;}}
}
B6f90cc:L6f90cc:{c.instructions+=5;NFSU2_TR(0x6f90cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90cd:{NFSU2_TR(0x6f90cd);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6f90ce:{NFSU2_TR(0x6f90ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90cf:{NFSU2_TR(0x6f90cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90d0:{NFSU2_TR(0x6f90d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f90d5ull));
TAIL_STATIC(0x6f87c5u,6f8);
}
B6f90d5:L6f90d5:{c.instructions+=4;NFSU2_TR(0x6f90d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90d6:{NFSU2_TR(0x6f90d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90d7:{NFSU2_TR(0x6f90d7);
__builtin_memmove((R+12),(R+0),4);
}
B6f90d9:{NFSU2_TR(0x6f90d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f90deull));
TAIL_STATIC(0x6f879au,6f8);
}
B6f90de:L6f90de:{c.instructions+=4;NFSU2_TR(0x6f90de);
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
B6f90e1:{NFSU2_TR(0x6f90e1);
__builtin_memmove((R+0),(R+12),4);
}
B6f90e3:{NFSU2_TR(0x6f90e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f90e4:{NFSU2_TR(0x6f90e4);
{goto L6f90e8;}
}
B6f90e6:L6f90e6:{c.instructions+=1;NFSU2_TR(0x6f90e6);
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
B6f90e8:L6f90e8:{c.instructions+=4;NFSU2_TR(0x6f90e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f90e9:{NFSU2_TR(0x6f90e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f90ea:{NFSU2_TR(0x6f90ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f90eb:{NFSU2_TR(0x6f90eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f90ec:L6f90ec:{c.instructions+=11;NFSU2_TR(0x6f90ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90ed:{NFSU2_TR(0x6f90ed);
__builtin_memmove((R+20),(R+16),4);
}
B6f90ef:{NFSU2_TR(0x6f90ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f90f2:{NFSU2_TR(0x6f90f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f90f5:{NFSU2_TR(0x6f90f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f90f8:{NFSU2_TR(0x6f90f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90f9:{NFSU2_TR(0x6f90f9);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90fb:{NFSU2_TR(0x6f90fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f90fc:{NFSU2_TR(0x6f90fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f90ff:{NFSU2_TR(0x6f90ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9106:{NFSU2_TR(0x6f9106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f910bull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f910b:L6f910b:{c.instructions+=4;NFSU2_TR(0x6f910b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f910c:{NFSU2_TR(0x6f910c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f910d:{NFSU2_TR(0x6f910d);
u8 U[4];
w4(U+0,u32(0x6f90aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9112:{NFSU2_TR(0x6f9112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9117ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9117:L6f9117:{c.instructions+=3;NFSU2_TR(0x6f9117);
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
B6f911a:{NFSU2_TR(0x6f911a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f911b:{NFSU2_TR(0x6f911b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f911c:L6f911c:{c.instructions+=11;NFSU2_TR(0x6f911c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f911d:{NFSU2_TR(0x6f911d);
__builtin_memmove((R+20),(R+16),4);
}
B6f911f:{NFSU2_TR(0x6f911f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9122:{NFSU2_TR(0x6f9122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9125:{NFSU2_TR(0x6f9125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9129:{NFSU2_TR(0x6f9129);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f912c:{NFSU2_TR(0x6f912c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f912d:{NFSU2_TR(0x6f912d);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f912f:{NFSU2_TR(0x6f912f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9130:{NFSU2_TR(0x6f9130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9133:{NFSU2_TR(0x6f9133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9138ull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f9138:L6f9138:{c.instructions+=4;NFSU2_TR(0x6f9138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9139:{NFSU2_TR(0x6f9139);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f913a:{NFSU2_TR(0x6f913a);
u8 U[4];
w4(U+0,u32(0x6f90aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f913f:{NFSU2_TR(0x6f913f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9144ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9144:L6f9144:{c.instructions+=3;NFSU2_TR(0x6f9144);
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
B6f9147:{NFSU2_TR(0x6f9147);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9148:{NFSU2_TR(0x6f9148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9149:L6f9149:{c.instructions+=14;NFSU2_TR(0x6f9149);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f914a:{NFSU2_TR(0x6f914a);
__builtin_memmove((R+20),(R+16),4);
}
B6f914c:{NFSU2_TR(0x6f914c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6f914f:{NFSU2_TR(0x6f914f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9150:{NFSU2_TR(0x6f9150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f9153:{NFSU2_TR(0x6f9153);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9154:{NFSU2_TR(0x6f9154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f9157:{NFSU2_TR(0x6f9157);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9158:{NFSU2_TR(0x6f9158);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f915a:{NFSU2_TR(0x6f915a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f915b:{NFSU2_TR(0x6f915b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f915c:{NFSU2_TR(0x6f915c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f915d:{NFSU2_TR(0x6f915d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f915f:{NFSU2_TR(0x6f915f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9164ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f9164:L6f9164:{c.instructions+=4;NFSU2_TR(0x6f9164);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9167:{NFSU2_TR(0x6f9167);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f9169:{NFSU2_TR(0x6f9169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f916c:{NFSU2_TR(0x6f916c);
if(r1(R+518)){{goto L6f9228;}}
}
B6f9172:L6f9172:{c.instructions+=4;NFSU2_TR(0x6f9172);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6f9173:{NFSU2_TR(0x6f9173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9174:{NFSU2_TR(0x6f9174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9175:{NFSU2_TR(0x6f9175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f917aull));
TAIL_STATIC(0x6f87c5u,6f8);
}
B6f917a:L6f917a:{c.instructions+=36;NFSU2_TR(0x6f917a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f917d:{NFSU2_TR(0x6f917d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f917f:{NFSU2_TR(0x6f917f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9183:{NFSU2_TR(0x6f9183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9186:{NFSU2_TR(0x6f9186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9189:{NFSU2_TR(0x6f9189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f918a:{NFSU2_TR(0x6f918a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f918b:{NFSU2_TR(0x6f918b);
__builtin_memmove((R+4),(R+0),4);
}
B6f918d:{NFSU2_TR(0x6f918d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6f9190:{NFSU2_TR(0x6f9190);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B6f9193:{NFSU2_TR(0x6f9193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9196:{NFSU2_TR(0x6f9196);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f9199:{NFSU2_TR(0x6f9199);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f919c:{NFSU2_TR(0x6f919c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f919f:{NFSU2_TR(0x6f919f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f91a2:{NFSU2_TR(0x6f91a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f91a5:{NFSU2_TR(0x6f91a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91a8:{NFSU2_TR(0x6f91a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91ab:{NFSU2_TR(0x6f91ab);
__builtin_memmove((R+4),gp(0x813acc),4);
}
B6f91b1:{NFSU2_TR(0x6f91b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f91b4:{NFSU2_TR(0x6f91b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91b7:{NFSU2_TR(0x6f91b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f91ba:{NFSU2_TR(0x6f91ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91bd:{NFSU2_TR(0x6f91bd);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f91c3:{NFSU2_TR(0x6f91c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f91c6:{NFSU2_TR(0x6f91c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f91c7:{NFSU2_TR(0x6f91c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f91ca:{NFSU2_TR(0x6f91ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f91d1:{NFSU2_TR(0x6f91d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0xabull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f91d8:{NFSU2_TR(0x6f91d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f91df:{NFSU2_TR(0x6f91df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x7c3038ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f91e6:{NFSU2_TR(0x6f91e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91e9:{NFSU2_TR(0x6f91e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91ec:{NFSU2_TR(0x6f91ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f91ef:{NFSU2_TR(0x6f91ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f91f1:{NFSU2_TR(0x6f91f1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f91f3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f91f3:L6f91f3:{c.instructions+=4;NFSU2_TR(0x6f91f3);
__builtin_memmove((R+28),(R+0),4);
}
B6f91f5:{NFSU2_TR(0x6f91f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f91f7:{NFSU2_TR(0x6f91f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f91f8:{NFSU2_TR(0x6f91f8);
if(r1(R+518)){{goto L6f921e;}}
}
B6f91fa:L6f91fa:{c.instructions+=5;NFSU2_TR(0x6f91fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f91fd:{NFSU2_TR(0x6f91fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f91fe:{NFSU2_TR(0x6f91fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9200:{NFSU2_TR(0x6f9200);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9203:{NFSU2_TR(0x6f9203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9208ull));
TAIL_STATIC(0x6f8738u,6f8);
}
B6f9208:L6f9208:{c.instructions+=3;NFSU2_TR(0x6f9208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9209:{NFSU2_TR(0x6f9209);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f920c:{NFSU2_TR(0x6f920c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9211ull));
TAIL_STATIC(0x6f879au,6f8);
}
B6f9211:L6f9211:{c.instructions+=5;NFSU2_TR(0x6f9211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9214:{NFSU2_TR(0x6f9214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9217:{NFSU2_TR(0x6f9217);
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
B6f921a:{NFSU2_TR(0x6f921a);
__builtin_memmove((R+0),(R+28),4);
}
B6f921c:{NFSU2_TR(0x6f921c);
{goto L6f922a;}
}
B6f921e:L6f921e:{c.instructions+=2;NFSU2_TR(0x6f921e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9221:{NFSU2_TR(0x6f9221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9226ull));
TAIL_STATIC(0x6f879au,6f8);
}
B6f9226:L6f9226:{c.instructions+=2;NFSU2_TR(0x6f9226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9227:{NFSU2_TR(0x6f9227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9228:L6f9228:{c.instructions+=1;NFSU2_TR(0x6f9228);
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
B6f922a:L6f922a:{c.instructions+=5;NFSU2_TR(0x6f922a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f922b:{NFSU2_TR(0x6f922b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f922c:{NFSU2_TR(0x6f922c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f922d:{NFSU2_TR(0x6f922d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f922e:{NFSU2_TR(0x6f922e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f922f:L6f922f:{c.instructions+=13;NFSU2_TR(0x6f922f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9230:{NFSU2_TR(0x6f9230);
__builtin_memmove((R+20),(R+16),4);
}
B6f9232:{NFSU2_TR(0x6f9232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9235:{NFSU2_TR(0x6f9235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9238:{NFSU2_TR(0x6f9238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f923b:{NFSU2_TR(0x6f923b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f923e:{NFSU2_TR(0x6f923e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9241:{NFSU2_TR(0x6f9241);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9242:{NFSU2_TR(0x6f9242);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9244:{NFSU2_TR(0x6f9244);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9245:{NFSU2_TR(0x6f9245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9248:{NFSU2_TR(0x6f9248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f924f:{NFSU2_TR(0x6f924f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9254ull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f9254:L6f9254:{c.instructions+=4;NFSU2_TR(0x6f9254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9255:{NFSU2_TR(0x6f9255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9256:{NFSU2_TR(0x6f9256);
u8 U[4];
w4(U+0,u32(0x6f9149ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f925b:{NFSU2_TR(0x6f925b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9260ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9260:L6f9260:{c.instructions+=4;NFSU2_TR(0x6f9260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9263:{NFSU2_TR(0x6f9263);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f9266:{NFSU2_TR(0x6f9266);
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
B6f9268:{NFSU2_TR(0x6f9268);
if(r1(R+518)){{goto L6f926f;}}
}
B6f926a:L6f926a:{c.instructions+=2;NFSU2_TR(0x6f926a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f926d:{NFSU2_TR(0x6f926d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f926f:L6f926f:{c.instructions+=2;NFSU2_TR(0x6f926f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9270:{NFSU2_TR(0x6f9270);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9271:L6f9271:{c.instructions+=13;NFSU2_TR(0x6f9271);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9272:{NFSU2_TR(0x6f9272);
__builtin_memmove((R+20),(R+16),4);
}
B6f9274:{NFSU2_TR(0x6f9274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9277:{NFSU2_TR(0x6f9277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f927a:{NFSU2_TR(0x6f927a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f927d:{NFSU2_TR(0x6f927d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9281:{NFSU2_TR(0x6f9281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9284:{NFSU2_TR(0x6f9284);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9287:{NFSU2_TR(0x6f9287);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9288:{NFSU2_TR(0x6f9288);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f928a:{NFSU2_TR(0x6f928a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f928b:{NFSU2_TR(0x6f928b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f928e:{NFSU2_TR(0x6f928e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9293ull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f9293:L6f9293:{c.instructions+=4;NFSU2_TR(0x6f9293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9294:{NFSU2_TR(0x6f9294);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9295:{NFSU2_TR(0x6f9295);
u8 U[4];
w4(U+0,u32(0x6f9149ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f929a:{NFSU2_TR(0x6f929a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f929full));
TAIL_STATIC(0x6f788du,6f7);
}
B6f929f:L6f929f:{c.instructions+=4;NFSU2_TR(0x6f929f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f92a2:{NFSU2_TR(0x6f92a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f92a5:{NFSU2_TR(0x6f92a5);
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
B6f92a7:{NFSU2_TR(0x6f92a7);
if(r1(R+518)){{goto L6f92ae;}}
}
B6f92a9:L6f92a9:{c.instructions+=2;NFSU2_TR(0x6f92a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f92ac:{NFSU2_TR(0x6f92ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f92ae:L6f92ae:{c.instructions+=2;NFSU2_TR(0x6f92ae);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f92af:{NFSU2_TR(0x6f92af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f92b0:L6f92b0:{c.instructions+=13;NFSU2_TR(0x6f92b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92b1:{NFSU2_TR(0x6f92b1);
__builtin_memmove((R+20),(R+16),4);
}
B6f92b3:{NFSU2_TR(0x6f92b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92b4:{NFSU2_TR(0x6f92b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92b5:{NFSU2_TR(0x6f92b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f92b8:{NFSU2_TR(0x6f92b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f92bb:{NFSU2_TR(0x6f92bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92bc:{NFSU2_TR(0x6f92bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f92bf:{NFSU2_TR(0x6f92bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92c0:{NFSU2_TR(0x6f92c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92c2:{NFSU2_TR(0x6f92c2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f92c4:{NFSU2_TR(0x6f92c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f92c7:{NFSU2_TR(0x6f92c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f92ccull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f92cc:L6f92cc:{c.instructions+=4;NFSU2_TR(0x6f92cc);
__builtin_memmove((R+12),(R+0),4);
}
B6f92ce:{NFSU2_TR(0x6f92ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f92d1:{NFSU2_TR(0x6f92d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f92d3:{NFSU2_TR(0x6f92d3);
if(r1(R+518)){{goto L6f92f5;}}
}
B6f92d5:L6f92d5:{c.instructions+=7;NFSU2_TR(0x6f92d5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f92d6:{NFSU2_TR(0x6f92d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92d7:{NFSU2_TR(0x6f92d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f92da:{NFSU2_TR(0x6f92da);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f92dd:{NFSU2_TR(0x6f92dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92df:{NFSU2_TR(0x6f92df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92e0:{NFSU2_TR(0x6f92e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f92e5ull));
TAIL_STATIC(0x6f8738u,6f8);
}
B6f92e5:L6f92e5:{c.instructions+=4;NFSU2_TR(0x6f92e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92e6:{NFSU2_TR(0x6f92e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92e7:{NFSU2_TR(0x6f92e7);
__builtin_memmove((R+24),(R+0),4);
}
B6f92e9:{NFSU2_TR(0x6f92e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f92eeull));
TAIL_STATIC(0x6f879au,6f8);
}
B6f92ee:L6f92ee:{c.instructions+=3;NFSU2_TR(0x6f92ee);
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
B6f92f1:{NFSU2_TR(0x6f92f1);
__builtin_memmove((R+0),(R+24),4);
}
B6f92f3:{NFSU2_TR(0x6f92f3);
{goto L6f92f7;}
}
B6f92f5:L6f92f5:{c.instructions+=1;NFSU2_TR(0x6f92f5);
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
B6f92f7:L6f92f7:{c.instructions+=5;NFSU2_TR(0x6f92f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f92f8:{NFSU2_TR(0x6f92f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f92f9:{NFSU2_TR(0x6f92f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f92fa:{NFSU2_TR(0x6f92fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f92fb:{NFSU2_TR(0x6f92fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f92fc:L6f92fc:{c.instructions+=17;NFSU2_TR(0x6f92fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f92fd:{NFSU2_TR(0x6f92fd);
__builtin_memmove((R+20),(R+16),4);
}
B6f92ff:{NFSU2_TR(0x6f92ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9302:{NFSU2_TR(0x6f9302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9305:{NFSU2_TR(0x6f9305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9308:{NFSU2_TR(0x6f9308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f930b:{NFSU2_TR(0x6f930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f930e:{NFSU2_TR(0x6f930e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9311:{NFSU2_TR(0x6f9311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9314:{NFSU2_TR(0x6f9314);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9317:{NFSU2_TR(0x6f9317);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f931a:{NFSU2_TR(0x6f931a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f931b:{NFSU2_TR(0x6f931b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f931d:{NFSU2_TR(0x6f931d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f931e:{NFSU2_TR(0x6f931e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9321:{NFSU2_TR(0x6f9321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9328:{NFSU2_TR(0x6f9328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f932dull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f932d:L6f932d:{c.instructions+=4;NFSU2_TR(0x6f932d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f932e:{NFSU2_TR(0x6f932e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f932f:{NFSU2_TR(0x6f932f);
u8 U[4];
w4(U+0,u32(0x6f92b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9334:{NFSU2_TR(0x6f9334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9339ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9339:L6f9339:{c.instructions+=3;NFSU2_TR(0x6f9339);
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
B6f933c:{NFSU2_TR(0x6f933c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f933d:{NFSU2_TR(0x6f933d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f933e:L6f933e:{c.instructions+=17;NFSU2_TR(0x6f933e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f933f:{NFSU2_TR(0x6f933f);
__builtin_memmove((R+20),(R+16),4);
}
B6f9341:{NFSU2_TR(0x6f9341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9344:{NFSU2_TR(0x6f9344);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9347:{NFSU2_TR(0x6f9347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f934a:{NFSU2_TR(0x6f934a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f934e:{NFSU2_TR(0x6f934e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9351:{NFSU2_TR(0x6f9351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9354:{NFSU2_TR(0x6f9354);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9357:{NFSU2_TR(0x6f9357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f935a:{NFSU2_TR(0x6f935a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f935d:{NFSU2_TR(0x6f935d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9360:{NFSU2_TR(0x6f9360);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9361:{NFSU2_TR(0x6f9361);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9363:{NFSU2_TR(0x6f9363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9364:{NFSU2_TR(0x6f9364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9367:{NFSU2_TR(0x6f9367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f936cull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f936c:L6f936c:{c.instructions+=4;NFSU2_TR(0x6f936c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f936d:{NFSU2_TR(0x6f936d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f936e:{NFSU2_TR(0x6f936e);
u8 U[4];
w4(U+0,u32(0x6f92b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9373:{NFSU2_TR(0x6f9373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9378ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9378:L6f9378:{c.instructions+=3;NFSU2_TR(0x6f9378);
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
B6f937b:{NFSU2_TR(0x6f937b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f937c:{NFSU2_TR(0x6f937c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f937d:L6f937d:{c.instructions+=10;NFSU2_TR(0x6f937d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f937e:{NFSU2_TR(0x6f937e);
__builtin_memmove((R+20),(R+16),4);
}
B6f9380:{NFSU2_TR(0x6f9380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9381:{NFSU2_TR(0x6f9381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9382:{NFSU2_TR(0x6f9382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9383:{NFSU2_TR(0x6f9383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f9386:{NFSU2_TR(0x6f9386);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f9388:{NFSU2_TR(0x6f9388);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f938a:{NFSU2_TR(0x6f938a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9391:{NFSU2_TR(0x6f9391);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f93d4;}}
}
B6f9393:L6f9393:{c.instructions+=1;NFSU2_TR(0x6f9393);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9394:L6f9394:{c.instructions+=8;NFSU2_TR(0x6f9394);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9397:{NFSU2_TR(0x6f9397);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f939a:{NFSU2_TR(0x6f939a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f939b:{NFSU2_TR(0x6f939b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f939e:{NFSU2_TR(0x6f939e);
__builtin_memmove((R+28),(R+12),4);
}
B6f93a0:{NFSU2_TR(0x6f93a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f93a3:{NFSU2_TR(0x6f93a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6f93a6:{NFSU2_TR(0x6f93a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f93abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9271u);}goto L6f9271;}
}
B6f93ab:L6f93ab:{c.instructions+=6;NFSU2_TR(0x6f93ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f93ae:{NFSU2_TR(0x6f93ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f93b1:{NFSU2_TR(0x6f93b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f93b4:{NFSU2_TR(0x6f93b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f93b7:{NFSU2_TR(0x6f93b7);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6f93bb:{NFSU2_TR(0x6f93bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f93c1;}}
}
B6f93bd:L6f93bd:{c.instructions+=1;NFSU2_TR(0x6f93bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f93c1:L6f93c1:{c.instructions+=3;NFSU2_TR(0x6f93c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f93c4:{NFSU2_TR(0x6f93c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f93c6:{NFSU2_TR(0x6f93c6);
if(r1(R+518)){{goto L6f93ce;}}
}
B6f93c8:L6f93c8:{c.instructions+=2;NFSU2_TR(0x6f93c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f93cb:{NFSU2_TR(0x6f93cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f93ce:L6f93ce:{c.instructions+=3;NFSU2_TR(0x6f93ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f93cf:{NFSU2_TR(0x6f93cf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+10)));
w4(U+14,u32(u32(r4(R+12))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f93d1:{NFSU2_TR(0x6f93d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9394u);}goto L6f9394;}}
}
B6f93d3:L6f93d3:{c.instructions+=1;NFSU2_TR(0x6f93d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f93d4:L6f93d4:{c.instructions+=5;NFSU2_TR(0x6f93d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f93d7:{NFSU2_TR(0x6f93d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f93d8:{NFSU2_TR(0x6f93d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f93d9:{NFSU2_TR(0x6f93d9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f93da:{NFSU2_TR(0x6f93da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f93db:L6f93db:{c.instructions+=8;NFSU2_TR(0x6f93db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f93dc:{NFSU2_TR(0x6f93dc);
__builtin_memmove((R+20),(R+16),4);
}
B6f93de:{NFSU2_TR(0x6f93de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6f93e1:{NFSU2_TR(0x6f93e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f93e4:{NFSU2_TR(0x6f93e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f93e6:{NFSU2_TR(0x6f93e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f93e7:{NFSU2_TR(0x6f93e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f93e9:{NFSU2_TR(0x6f93e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f93ef;}}
}
B6f93eb:L6f93eb:{c.instructions+=3;NFSU2_TR(0x6f93eb);
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
B6f93ed:{NFSU2_TR(0x6f93ed);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f93ee:{NFSU2_TR(0x6f93ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f93ef:L6f93ef:{c.instructions+=15;NFSU2_TR(0x6f93ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f93f2:{NFSU2_TR(0x6f93f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f93f5:{NFSU2_TR(0x6f93f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f93f8:{NFSU2_TR(0x6f93f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f93fb:{NFSU2_TR(0x6f93fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f93fe:{NFSU2_TR(0x6f93fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f93ff:{NFSU2_TR(0x6f93ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9402:{NFSU2_TR(0x6f9402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9405:{NFSU2_TR(0x6f9405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9408:{NFSU2_TR(0x6f9408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f940b:{NFSU2_TR(0x6f940b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f940d:{NFSU2_TR(0x6f940d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f940f:{NFSU2_TR(0x6f940f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9412:{NFSU2_TR(0x6f9412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9415:{NFSU2_TR(0x6f9415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f941aull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f941a:L6f941a:{c.instructions+=4;NFSU2_TR(0x6f941a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f941b:{NFSU2_TR(0x6f941b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f941c:{NFSU2_TR(0x6f941c);
u8 U[4];
w4(U+0,u32(0x6f937dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9421:{NFSU2_TR(0x6f9421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9426ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9426:L6f9426:{c.instructions+=7;NFSU2_TR(0x6f9426);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f9429:{NFSU2_TR(0x6f9429);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f942a:{NFSU2_TR(0x6f942a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f942c:{NFSU2_TR(0x6f942c);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f942e:{NFSU2_TR(0x6f942e);
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
B6f942f:{NFSU2_TR(0x6f942f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9430:{NFSU2_TR(0x6f9430);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9431:L6f9431:{c.instructions+=6;NFSU2_TR(0x6f9431);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9432:{NFSU2_TR(0x6f9432);
__builtin_memmove((R+20),(R+16),4);
}
B6f9434:{NFSU2_TR(0x6f9434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6f9437:{NFSU2_TR(0x6f9437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f943a:{NFSU2_TR(0x6f943a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f943d:{NFSU2_TR(0x6f943d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f9443;}}
}
B6f943f:L6f943f:{c.instructions+=3;NFSU2_TR(0x6f943f);
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
B6f9441:{NFSU2_TR(0x6f9441);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9442:{NFSU2_TR(0x6f9442);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9443:L6f9443:{c.instructions+=15;NFSU2_TR(0x6f9443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9446:{NFSU2_TR(0x6f9446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f944a:{NFSU2_TR(0x6f944a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f944d:{NFSU2_TR(0x6f944d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9450:{NFSU2_TR(0x6f9450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9453:{NFSU2_TR(0x6f9453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9456:{NFSU2_TR(0x6f9456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9459:{NFSU2_TR(0x6f9459);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f945c:{NFSU2_TR(0x6f945c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f945d:{NFSU2_TR(0x6f945d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9460:{NFSU2_TR(0x6f9460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9463:{NFSU2_TR(0x6f9463);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9465:{NFSU2_TR(0x6f9465);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f9467:{NFSU2_TR(0x6f9467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f946a:{NFSU2_TR(0x6f946a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f946full));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f946f:L6f946f:{c.instructions+=4;NFSU2_TR(0x6f946f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9470:{NFSU2_TR(0x6f9470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9471:{NFSU2_TR(0x6f9471);
u8 U[4];
w4(U+0,u32(0x6f937dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9476:{NFSU2_TR(0x6f9476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f947bull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f947b:L6f947b:{c.instructions+=7;NFSU2_TR(0x6f947b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f947e:{NFSU2_TR(0x6f947e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f947f:{NFSU2_TR(0x6f947f);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f9481:{NFSU2_TR(0x6f9481);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f9483:{NFSU2_TR(0x6f9483);
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
B6f9484:{NFSU2_TR(0x6f9484);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9485:{NFSU2_TR(0x6f9485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9486:L6f9486:{c.instructions+=19;NFSU2_TR(0x6f9486);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9487:{NFSU2_TR(0x6f9487);
__builtin_memmove((R+12),(R+16),4);
}
B6f9489:{NFSU2_TR(0x6f9489);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f948a:{NFSU2_TR(0x6f948a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f948b:{NFSU2_TR(0x6f948b);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xffffff80ull))));
}
B6f948e:{NFSU2_TR(0x6f948e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9491:{NFSU2_TR(0x6f9491);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9492:{NFSU2_TR(0x6f9492);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f9495:{NFSU2_TR(0x6f9495);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9499:{NFSU2_TR(0x6f9499);
__builtin_memmove((R+20),(R+16),4);
}
B6f949b:{NFSU2_TR(0x6f949b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9f8ull))));
}
B6f94a1:{NFSU2_TR(0x6f94a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94a2:{NFSU2_TR(0x6f94a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f94a5:{NFSU2_TR(0x6f94a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94a6:{NFSU2_TR(0x6f94a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f94a9:{NFSU2_TR(0x6f94a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94aa:{NFSU2_TR(0x6f94aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94ac:{NFSU2_TR(0x6f94ac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f94ae:{NFSU2_TR(0x6f94ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f94b3ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f94b3:L6f94b3:{c.instructions+=11;NFSU2_TR(0x6f94b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f94b6:{NFSU2_TR(0x6f94b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f94b9:{NFSU2_TR(0x6f94b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94ba:{NFSU2_TR(0x6f94ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f94bd:{NFSU2_TR(0x6f94bd);
w4(R+24,u32(0x800ull));
}
B6f94c2:{NFSU2_TR(0x6f94c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94c3:{NFSU2_TR(0x6f94c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff680ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f94c9:{NFSU2_TR(0x6f94c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94ca:{NFSU2_TR(0x6f94ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94cc:{NFSU2_TR(0x6f94cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f94cf:{NFSU2_TR(0x6f94cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f94d4ull));
TAIL_STATIC(0x6f8738u,6f8);
}
B6f94d4:L6f94d4:{c.instructions+=3;NFSU2_TR(0x6f94d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff680ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f94da:{NFSU2_TR(0x6f94da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94db:{NFSU2_TR(0x6f94db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f94e0ull));
TAIL_STATIC(0x6fa8d0u,6fa);
}
B6f94e0:L6f94e0:{c.instructions+=3;NFSU2_TR(0x6f94e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B6f94e3:{NFSU2_TR(0x6f94e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f94e5:{NFSU2_TR(0x6f94e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f94ee;}}
}
B6f94e7:L6f94e7:{c.instructions+=2;NFSU2_TR(0x6f94e7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f94e9:{NFSU2_TR(0x6f94e9);
{goto L6f95e3;}
}
B6f94ee:L6f94ee:{c.instructions+=5;NFSU2_TR(0x6f94ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f94f0:{NFSU2_TR(0x6f94f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f94f6:{NFSU2_TR(0x6f94f6);
u8 U[4];
w4(U+0,u32(0x7c3074ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94fb:{NFSU2_TR(0x6f94fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f94fc:{NFSU2_TR(0x6f94fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9501ull));
TAIL_STATIC(0x75c784u,75c);
}
B6f9501:L6f9501:{c.instructions+=3;NFSU2_TR(0x6f9501);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff680ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9507:{NFSU2_TR(0x6f9507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9508:{NFSU2_TR(0x6f9508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f950dull));
TAIL_STATIC(0x6fa93bu,6fa);
}
B6f950d:L6f950d:{c.instructions+=37;NFSU2_TR(0x6f950d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9510:{NFSU2_TR(0x6f9510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9514:{NFSU2_TR(0x6f9514);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f951a:{NFSU2_TR(0x6f951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f951d:{NFSU2_TR(0x6f951d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9520:{NFSU2_TR(0x6f9520);
__builtin_memmove((R+8),(R+0),4);
}
B6f9522:{NFSU2_TR(0x6f9522);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6f9525:{NFSU2_TR(0x6f9525);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B6f9528:{NFSU2_TR(0x6f9528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f952b:{NFSU2_TR(0x6f952b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6f952e:{NFSU2_TR(0x6f952e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B6f9531:{NFSU2_TR(0x6f9531);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9534:{NFSU2_TR(0x6f9534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9537:{NFSU2_TR(0x6f9537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f953a:{NFSU2_TR(0x6f953a);
__builtin_memmove((R+8),gp(0x813acc),4);
}
B6f9540:{NFSU2_TR(0x6f9540);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9543:{NFSU2_TR(0x6f9543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9546:{NFSU2_TR(0x6f9546);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f9548:{NFSU2_TR(0x6f9548);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f9549:{NFSU2_TR(0x6f9549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f954c:{NFSU2_TR(0x6f954c);
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
B6f954f:{NFSU2_TR(0x6f954f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9552:{NFSU2_TR(0x6f9552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9555:{NFSU2_TR(0x6f9555);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f9558:{NFSU2_TR(0x6f9558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f955b:{NFSU2_TR(0x6f955b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f955e:{NFSU2_TR(0x6f955e);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f9564:{NFSU2_TR(0x6f9564);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9567:{NFSU2_TR(0x6f9567);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9568:{NFSU2_TR(0x6f9568);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f956b:{NFSU2_TR(0x6f956b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9572:{NFSU2_TR(0x6f9572);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x1f9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9579:{NFSU2_TR(0x6f9579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9580:{NFSU2_TR(0x6f9580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7c3038ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9587:{NFSU2_TR(0x6f9587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f958a:{NFSU2_TR(0x6f958a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f958c:{NFSU2_TR(0x6f958c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f958eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f958e:L6f958e:{c.instructions+=3;NFSU2_TR(0x6f958e);
__builtin_memmove((R+28),(R+0),4);
}
B6f9590:{NFSU2_TR(0x6f9590);
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
B6f9592:{NFSU2_TR(0x6f9592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f95a6;}}
}
B6f9594:L6f9594:{c.instructions+=5;NFSU2_TR(0x6f9594);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f959a:{NFSU2_TR(0x6f959a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f959c:{NFSU2_TR(0x6f959c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f959d:{NFSU2_TR(0x6f959d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f959e:{NFSU2_TR(0x6f959e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f95a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f95a1:L6f95a1:{c.instructions+=1;NFSU2_TR(0x6f95a1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f94e7u);}goto L6f94e7;}
}
B6f95a6:L6f95a6:{c.instructions+=3;NFSU2_TR(0x6f95a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f95a9:{NFSU2_TR(0x6f95a9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6f95ab:{NFSU2_TR(0x6f95ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f95af;}}
}
B6f95ad:L6f95ad:{c.instructions+=1;NFSU2_TR(0x6f95ad);
__builtin_memmove((R+0),(R+24),4);
}
B6f95af:L6f95af:{c.instructions+=5;NFSU2_TR(0x6f95af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95b0:{NFSU2_TR(0x6f95b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff680ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f95b6:{NFSU2_TR(0x6f95b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95b7:{NFSU2_TR(0x6f95b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95b8:{NFSU2_TR(0x6f95b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f95bdull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f95bd:L6f95bd:{c.instructions+=4;NFSU2_TR(0x6f95bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f95c0:{NFSU2_TR(0x6f95c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f95c3:{NFSU2_TR(0x6f95c3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f95c5:{NFSU2_TR(0x6f95c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f95e3;}}
}
B6f95c7:L6f95c7:{c.instructions+=8;NFSU2_TR(0x6f95c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f95ca:{NFSU2_TR(0x6f95ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffff800ull))));
}
B6f95cf:{NFSU2_TR(0x6f95cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95d0:{NFSU2_TR(0x6f95d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x800ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f95d6:{NFSU2_TR(0x6f95d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95d7:{NFSU2_TR(0x6f95d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95d8:{NFSU2_TR(0x6f95d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f95db:{NFSU2_TR(0x6f95db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f95e0ull));
TAIL_STATIC(0x6f8738u,6f8);
}
B6f95e0:L6f95e0:{c.instructions+=1;NFSU2_TR(0x6f95e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f95e3:L6f95e3:{c.instructions+=3;NFSU2_TR(0x6f95e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f95e6:{NFSU2_TR(0x6f95e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f95e9:{NFSU2_TR(0x6f95e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f95eeull));
TAIL_STATIC(0x6f879au,6f8);
}
B6f95ee:L6f95ee:{c.instructions+=10;NFSU2_TR(0x6f95ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f95ef:{NFSU2_TR(0x6f95ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f95f0:{NFSU2_TR(0x6f95f0);
__builtin_memmove((R+0),(R+28),4);
}
B6f95f2:{NFSU2_TR(0x6f95f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f95f3:{NFSU2_TR(0x6f95f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f95f4:{NFSU2_TR(0x6f95f4);
__builtin_memmove((R+16),(R+20),4);
}
B6f95f6:{NFSU2_TR(0x6f95f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f95f7:{NFSU2_TR(0x6f95f7);
__builtin_memmove((R+16),(R+12),4);
}
B6f95f9:{NFSU2_TR(0x6f95f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f95fa:{NFSU2_TR(0x6f95fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f95fb:L6f95fb:{c.instructions+=13;NFSU2_TR(0x6f95fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f95fc:{NFSU2_TR(0x6f95fc);
__builtin_memmove((R+20),(R+16),4);
}
B6f95fe:{NFSU2_TR(0x6f95fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9601:{NFSU2_TR(0x6f9601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9604:{NFSU2_TR(0x6f9604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9607:{NFSU2_TR(0x6f9607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f960a:{NFSU2_TR(0x6f960a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f960d:{NFSU2_TR(0x6f960d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f960e:{NFSU2_TR(0x6f960e);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9610:{NFSU2_TR(0x6f9610);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9611:{NFSU2_TR(0x6f9611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9614:{NFSU2_TR(0x6f9614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f961b:{NFSU2_TR(0x6f961b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9620ull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f9620:L6f9620:{c.instructions+=4;NFSU2_TR(0x6f9620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9621:{NFSU2_TR(0x6f9621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9622:{NFSU2_TR(0x6f9622);
u8 U[4];
w4(U+0,u32(0x6f9486ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9627:{NFSU2_TR(0x6f9627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f962cull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f962c:L6f962c:{c.instructions+=3;NFSU2_TR(0x6f962c);
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
B6f962f:{NFSU2_TR(0x6f962f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9630:{NFSU2_TR(0x6f9630);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9631:L6f9631:{c.instructions+=13;NFSU2_TR(0x6f9631);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9632:{NFSU2_TR(0x6f9632);
__builtin_memmove((R+20),(R+16),4);
}
B6f9634:{NFSU2_TR(0x6f9634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f9637:{NFSU2_TR(0x6f9637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f963a:{NFSU2_TR(0x6f963a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f963d:{NFSU2_TR(0x6f963d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9641:{NFSU2_TR(0x6f9641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9644:{NFSU2_TR(0x6f9644);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9647:{NFSU2_TR(0x6f9647);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9648:{NFSU2_TR(0x6f9648);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f964a:{NFSU2_TR(0x6f964a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f964b:{NFSU2_TR(0x6f964b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f964e:{NFSU2_TR(0x6f964e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9653ull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f9653:L6f9653:{c.instructions+=4;NFSU2_TR(0x6f9653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9654:{NFSU2_TR(0x6f9654);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9655:{NFSU2_TR(0x6f9655);
u8 U[4];
w4(U+0,u32(0x6f9486ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f965a:{NFSU2_TR(0x6f965a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f965full));
TAIL_STATIC(0x6f788du,6f7);
}
B6f965f:L6f965f:{c.instructions+=3;NFSU2_TR(0x6f965f);
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
B6f9662:{NFSU2_TR(0x6f9662);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9663:{NFSU2_TR(0x6f9663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9664:L6f9664:{c.instructions+=10;NFSU2_TR(0x6f9664);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9665:{NFSU2_TR(0x6f9665);
__builtin_memmove((R+20),(R+16),4);
}
B6f9667:{NFSU2_TR(0x6f9667);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9668:{NFSU2_TR(0x6f9668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f966b:{NFSU2_TR(0x6f966b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f966c:{NFSU2_TR(0x6f966c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f966f:{NFSU2_TR(0x6f966f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9670:{NFSU2_TR(0x6f9670);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9672:{NFSU2_TR(0x6f9672);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f9674:{NFSU2_TR(0x6f9674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9679ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f9679:L6f9679:{c.instructions+=4;NFSU2_TR(0x6f9679);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f967c:{NFSU2_TR(0x6f967c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f967e:{NFSU2_TR(0x6f967e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9681:{NFSU2_TR(0x6f9681);
if(r1(R+518)){{goto L6f96ad;}}
}
B6f9683:L6f9683:{c.instructions+=8;NFSU2_TR(0x6f9683);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9684:{NFSU2_TR(0x6f9684);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f9685:{NFSU2_TR(0x6f9685);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9686:{NFSU2_TR(0x6f9686);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9689:{NFSU2_TR(0x6f9689);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f968c:{NFSU2_TR(0x6f968c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f968e:{NFSU2_TR(0x6f968e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f968f:{NFSU2_TR(0x6f968f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9694ull));
TAIL_STATIC(0x6f876cu,6f8);
}
B6f9694:L6f9694:{c.instructions+=4;NFSU2_TR(0x6f9694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9695:{NFSU2_TR(0x6f9695);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9698:{NFSU2_TR(0x6f9698);
__builtin_memmove((R+12),(R+0),4);
}
B6f969a:{NFSU2_TR(0x6f969a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f969full));
TAIL_STATIC(0x6f879au,6f8);
}
B6f969f:L6f969f:{c.instructions+=6;NFSU2_TR(0x6f969f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6f96a2:{NFSU2_TR(0x6f96a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f96a4:{NFSU2_TR(0x6f96a4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f96a7:{NFSU2_TR(0x6f96a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f96a8:{NFSU2_TR(0x6f96a8);
__builtin_memmove((R+0),(R+518),1);
}
B6f96ab:{NFSU2_TR(0x6f96ab);
{goto L6f96af;}
}
B6f96ad:L6f96ad:{c.instructions+=1;NFSU2_TR(0x6f96ad);
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
B6f96af:L6f96af:{c.instructions+=4;NFSU2_TR(0x6f96af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f96b0:{NFSU2_TR(0x6f96b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f96b1:{NFSU2_TR(0x6f96b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f96b2:{NFSU2_TR(0x6f96b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f96b3:L6f96b3:{c.instructions+=15;NFSU2_TR(0x6f96b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96b4:{NFSU2_TR(0x6f96b4);
__builtin_memmove((R+20),(R+16),4);
}
B6f96b6:{NFSU2_TR(0x6f96b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f96b9:{NFSU2_TR(0x6f96b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f96bc:{NFSU2_TR(0x6f96bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f96bf:{NFSU2_TR(0x6f96bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f96c2:{NFSU2_TR(0x6f96c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f96c5:{NFSU2_TR(0x6f96c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f96c8:{NFSU2_TR(0x6f96c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f96cb:{NFSU2_TR(0x6f96cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96cc:{NFSU2_TR(0x6f96cc);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96ce:{NFSU2_TR(0x6f96ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96cf:{NFSU2_TR(0x6f96cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f96d2:{NFSU2_TR(0x6f96d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f96d9:{NFSU2_TR(0x6f96d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f96deull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f96de:L6f96de:{c.instructions+=4;NFSU2_TR(0x6f96de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f96df:{NFSU2_TR(0x6f96df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96e0:{NFSU2_TR(0x6f96e0);
u8 U[4];
w4(U+0,u32(0x6f9664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96e5:{NFSU2_TR(0x6f96e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f96eaull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f96ea:L6f96ea:{c.instructions+=7;NFSU2_TR(0x6f96ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f96ed:{NFSU2_TR(0x6f96ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f96ee:{NFSU2_TR(0x6f96ee);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f96f0:{NFSU2_TR(0x6f96f0);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f96f2:{NFSU2_TR(0x6f96f2);
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
B6f96f3:{NFSU2_TR(0x6f96f3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f96f4:{NFSU2_TR(0x6f96f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f96f5:L6f96f5:{c.instructions+=15;NFSU2_TR(0x6f96f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f96f6:{NFSU2_TR(0x6f96f6);
__builtin_memmove((R+20),(R+16),4);
}
B6f96f8:{NFSU2_TR(0x6f96f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f96fb:{NFSU2_TR(0x6f96fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f96fe:{NFSU2_TR(0x6f96fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9701:{NFSU2_TR(0x6f9701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9705:{NFSU2_TR(0x6f9705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9708:{NFSU2_TR(0x6f9708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f970b:{NFSU2_TR(0x6f970b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f970e:{NFSU2_TR(0x6f970e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9711:{NFSU2_TR(0x6f9711);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9712:{NFSU2_TR(0x6f9712);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9714:{NFSU2_TR(0x6f9714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9715:{NFSU2_TR(0x6f9715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9718:{NFSU2_TR(0x6f9718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f971dull));
TAIL_STATIC(0x6f78dcu,6f7);
}
B6f971d:L6f971d:{c.instructions+=4;NFSU2_TR(0x6f971d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f971e:{NFSU2_TR(0x6f971e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f971f:{NFSU2_TR(0x6f971f);
u8 U[4];
w4(U+0,u32(0x6f9664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9724:{NFSU2_TR(0x6f9724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9729ull));
TAIL_STATIC(0x6f788du,6f7);
}
B6f9729:L6f9729:{c.instructions+=7;NFSU2_TR(0x6f9729);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f972c:{NFSU2_TR(0x6f972c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f972d:{NFSU2_TR(0x6f972d);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f972f:{NFSU2_TR(0x6f972f);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f9731:{NFSU2_TR(0x6f9731);
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
B6f9732:{NFSU2_TR(0x6f9732);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9733:{NFSU2_TR(0x6f9733);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9749:L6f9749:{c.instructions+=3;NFSU2_TR(0x6f9749);
u8 U[4];
w4(U+0,u32(0x8ad664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f974e:{NFSU2_TR(0x6f974e);
s1(0x8ad678,u8(0x1ull));
}
B6f9755:{NFSU2_TR(0x6f9755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f975aull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f975a:L6f975a:{c.instructions+=2;NFSU2_TR(0x6f975a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f975b:{NFSU2_TR(0x6f975b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f975c:L6f975c:{c.instructions+=5;NFSU2_TR(0x6f975c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f975d:{NFSU2_TR(0x6f975d);
__builtin_memmove((R+20),(R+16),4);
}
B6f975f:{NFSU2_TR(0x6f975f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6f9765:{NFSU2_TR(0x6f9765);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f976b:{NFSU2_TR(0x6f976b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6f976d:L6f976d:{c.instructions+=5;NFSU2_TR(0x6f976d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f976f:{NFSU2_TR(0x6f976f);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f9772:{NFSU2_TR(0x6f9772);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9773:{NFSU2_TR(0x6f9773);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9775:{NFSU2_TR(0x6f9775);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f976du);}goto L6f976d;}}
}
B6f9777:L6f9777:{c.instructions+=5;NFSU2_TR(0x6f9777);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9778:{NFSU2_TR(0x6f9778);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f977a:{NFSU2_TR(0x6f977a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9780:{NFSU2_TR(0x6f9780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9781:{NFSU2_TR(0x6f9781);
{goto L6f97a6;}
}
B6f9783:L6f9783:{c.instructions+=5;NFSU2_TR(0x6f9783);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9785:{NFSU2_TR(0x6f9785);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f978b:{NFSU2_TR(0x6f978b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f978c:{NFSU2_TR(0x6f978c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6f978f:{NFSU2_TR(0x6f978f);
u8 U[4];
__builtin_memmove((U+0),gp(0x78312c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9795ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9795:L6f9795:{c.instructions+=2;NFSU2_TR(0x6f9795);
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
B6f9797:{NFSU2_TR(0x6f9797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f979f;}}
}
B6f9799:L6f9799:{c.instructions+=1;NFSU2_TR(0x6f9799);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f979full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f979f:L6f979f:{c.instructions+=4;NFSU2_TR(0x6f979f);
u8 U[1];
w1(U+0,u8(0x5cull));
s1(u32(r4(R+24)),r1(U+0));
}
B6f97a2:{NFSU2_TR(0x6f97a2);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97a4:{NFSU2_TR(0x6f97a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f97a5:{NFSU2_TR(0x6f97a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97a6:L6f97a6:{c.instructions+=1;NFSU2_TR(0x6f97a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f97abull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f97ab:L6f97ab:{c.instructions+=5;NFSU2_TR(0x6f97ab);
__builtin_memmove((R+24),(R+0),4);
}
B6f97ad:{NFSU2_TR(0x6f97ad);
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
B6f97af:{NFSU2_TR(0x6f97af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f97b0:{NFSU2_TR(0x6f97b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f97b1:{NFSU2_TR(0x6f97b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9783u);}goto L6f9783;}}
}
B6f97b3:L6f97b3:{c.instructions+=4;NFSU2_TR(0x6f97b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f97b9:{NFSU2_TR(0x6f97b9);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97bb:{NFSU2_TR(0x6f97bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97bc:{NFSU2_TR(0x6f97bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f97c1ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f97c1:L6f97c1:{c.instructions+=5;NFSU2_TR(0x6f97c1);
__builtin_memmove((R+24),(R+0),4);
}
B6f97c3:{NFSU2_TR(0x6f97c3);
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
B6f97c5:{NFSU2_TR(0x6f97c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f97c6:{NFSU2_TR(0x6f97c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f97c7:{NFSU2_TR(0x6f97c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9783u);}goto L6f9783;}}
}
B6f97c9:L6f97c9:{c.instructions+=3;NFSU2_TR(0x6f97c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f97ca:{NFSU2_TR(0x6f97ca);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f97cb:{NFSU2_TR(0x6f97cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f97cc:L6f97cc:{c.instructions+=7;NFSU2_TR(0x6f97cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97cd:{NFSU2_TR(0x6f97cd);
__builtin_memmove((R+20),(R+16),4);
}
B6f97cf:{NFSU2_TR(0x6f97cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6f97d5:{NFSU2_TR(0x6f97d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f97d7:{NFSU2_TR(0x6f97d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f97d8:{NFSU2_TR(0x6f97d8);
u8 U[5];
__builtin_memmove((U+3),gp(0x8ad661),1);
w1(R+512,u8((r1(U+3))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+4)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f97de:{NFSU2_TR(0x6f97de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f987f;}}
}
B6f97e4:L6f97e4:{c.instructions+=13;NFSU2_TR(0x6f97e4);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f97e9:{NFSU2_TR(0x6f97e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97ea:{NFSU2_TR(0x6f97ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f97ed:{NFSU2_TR(0x6f97ed);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x105ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6f97f3:{NFSU2_TR(0x6f97f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97f4:{NFSU2_TR(0x6f97f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97f5:{NFSU2_TR(0x6f97f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f97f7:{NFSU2_TR(0x6f97f7);
u8 U[4];
w4(U+0,u32(0x128ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f97fd:{NFSU2_TR(0x6f97fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9800:{NFSU2_TR(0x6f9800);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
}
B6f9805:{NFSU2_TR(0x6f9805);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9806:{NFSU2_TR(0x6f9806);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9807:{NFSU2_TR(0x6f9807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f980cull));
TAIL_STATIC(0x6fb137u,6fb);
}
B6f980c:L6f980c:{c.instructions+=7;NFSU2_TR(0x6f980c);
__builtin_memmove((R+8),gp(0x8ad67c),4);
}
B6f9812:{NFSU2_TR(0x6f9812);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9815:{NFSU2_TR(0x6f9815);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6f981a:{NFSU2_TR(0x6f981a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f9820:{NFSU2_TR(0x6f9820);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9823:{NFSU2_TR(0x6f9823);
__builtin_memmove((R+28),(R+0),4);
}
B6f9825:{NFSU2_TR(0x6f9825);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6f9827:L6f9827:{c.instructions+=5;NFSU2_TR(0x6f9827);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6f9829:{NFSU2_TR(0x6f9829);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f982c:{NFSU2_TR(0x6f982c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f982d:{NFSU2_TR(0x6f982d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f982f:{NFSU2_TR(0x6f982f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9827u);}goto L6f9827;}}
}
B6f9831:L6f9831:{c.instructions+=2;NFSU2_TR(0x6f9831);
__builtin_memmove((R+0),gp(0x813afc),4);
}
B6f9836:{NFSU2_TR(0x6f9836);
__builtin_memmove((R+24),(R+0),4);
}
B6f9838:L6f9838:{c.instructions+=4;NFSU2_TR(0x6f9838);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f983a:{NFSU2_TR(0x6f983a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f983b:{NFSU2_TR(0x6f983b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f983d:{NFSU2_TR(0x6f983d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9838u);}goto L6f9838;}}
}
B6f983f:L6f983f:{c.instructions+=3;NFSU2_TR(0x6f983f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9845:{NFSU2_TR(0x6f9845);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f9847:{NFSU2_TR(0x6f9847);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f9848:L6f9848:{c.instructions+=4;NFSU2_TR(0x6f9848);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f984b:{NFSU2_TR(0x6f984b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f984c:{NFSU2_TR(0x6f984c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f984e:{NFSU2_TR(0x6f984e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9848u);}goto L6f9848;}}
}
B6f9850:L6f9850:{c.instructions+=2;NFSU2_TR(0x6f9850);
__builtin_memmove((R+4),(R+0),4);
}
B6f9852:{NFSU2_TR(0x6f9852);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f9855:L6f9855:{c.instructions+=1;NFSU2_TR(0x6f9855);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f9857;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9855u);}goto L6f9855;}
}
B6f9857:L6f9857:{c.instructions+=7;NFSU2_TR(0x6f9857);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x128ull))));
}
B6f985d:{NFSU2_TR(0x6f985d);
__builtin_memmove((R+4),(R+0),4);
}
B6f985f:{NFSU2_TR(0x6f985f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9860:{NFSU2_TR(0x6f9860);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9861:{NFSU2_TR(0x6f9861);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9867:{NFSU2_TR(0x6f9867);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6f986a:{NFSU2_TR(0x6f986a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f986b:L6f986b:{c.instructions+=1;NFSU2_TR(0x6f986b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f986d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f986bu);}goto L6f986b;}
}
B6f986d:L6f986d:{c.instructions+=1;NFSU2_TR(0x6f986d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9872ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f96b3u);}goto L6f96b3;}
}
B6f9872:L6f9872:{c.instructions+=5;NFSU2_TR(0x6f9872);
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
B6f9875:{NFSU2_TR(0x6f9875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9876:{NFSU2_TR(0x6f9876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f9877:{NFSU2_TR(0x6f9877);
s1(0x8ad661,u8(0x0ull));
}
B6f987e:{NFSU2_TR(0x6f987e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f987f:L6f987f:{c.instructions+=2;NFSU2_TR(0x6f987f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9880:{NFSU2_TR(0x6f9880);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9881:L6f9881:{c.instructions+=12;NFSU2_TR(0x6f9881);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9882:{NFSU2_TR(0x6f9882);
__builtin_memmove((R+20),(R+16),4);
}
B6f9884:{NFSU2_TR(0x6f9884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6f9887:{NFSU2_TR(0x6f9887);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9888:{NFSU2_TR(0x6f9888);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9889:{NFSU2_TR(0x6f9889);
__builtin_memmove((R+24),gp(0x813ac8),4);
}
B6f988f:{NFSU2_TR(0x6f988f);
__builtin_memmove((R+0),(R+24),4);
}
B6f9891:{NFSU2_TR(0x6f9891);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6f9894:{NFSU2_TR(0x6f9894);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9895:{NFSU2_TR(0x6f9895);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f9898:{NFSU2_TR(0x6f9898);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f989a:{NFSU2_TR(0x6f989a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f989full));
TAIL_STATIC(0x75c4d0u,75c);
}
B6f989f:L6f989f:{c.instructions+=5;NFSU2_TR(0x6f989f);
__builtin_memmove((R+0),(R+24),4);
}
B6f98a1:{NFSU2_TR(0x6f98a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6f98a4:{NFSU2_TR(0x6f98a4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f98a7:{NFSU2_TR(0x6f98a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f98aa:{NFSU2_TR(0x6f98aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f98afull));
TAIL_STATIC(0x75c4d0u,75c);
}
B6f98af:L6f98af:{c.instructions+=6;NFSU2_TR(0x6f98af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f98b2:{NFSU2_TR(0x6f98b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98b4:{NFSU2_TR(0x6f98b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98b5:{NFSU2_TR(0x6f98b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98b6:{NFSU2_TR(0x6f98b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f98b9:{NFSU2_TR(0x6f98b9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783228),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f98bfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f98bf:L6f98bf:{c.instructions+=8;NFSU2_TR(0x6f98bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98c0:{NFSU2_TR(0x6f98c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f98c3:{NFSU2_TR(0x6f98c3);
__builtin_memmove((R+12),(R+0),4);
}
B6f98c5:{NFSU2_TR(0x6f98c5);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ac8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98cb:{NFSU2_TR(0x6f98cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f98ce:{NFSU2_TR(0x6f98ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98cf:{NFSU2_TR(0x6f98cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f98d2:{NFSU2_TR(0x6f98d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f98d7ull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f98d7:L6f98d7:{c.instructions+=3;NFSU2_TR(0x6f98d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f98da:{NFSU2_TR(0x6f98da);
__builtin_memmove((R+0),gp(0x813ac8),4);
}
B6f98df:{NFSU2_TR(0x6f98df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f98e2:L6f98e2:{c.instructions+=10;NFSU2_TR(0x6f98e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98e4:{NFSU2_TR(0x6f98e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f98e7:{NFSU2_TR(0x6f98e7);
__builtin_memmove((R+24),(R+28),4);
}
B6f98e9:{NFSU2_TR(0x6f98e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98ea:{NFSU2_TR(0x6f98ea);
w4(R+24,u32(u32(r4(R+24))^u32(u32(0x1ull))));
}
B6f98ed:{NFSU2_TR(0x6f98ed);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6f98f1:{NFSU2_TR(0x6f98f1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6f98f3:{NFSU2_TR(0x6f98f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f98f4:{NFSU2_TR(0x6f98f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f98f7:{NFSU2_TR(0x6f98f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f98fcull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f98fc:L6f98fc:{c.instructions+=3;NFSU2_TR(0x6f98fc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f9900:{NFSU2_TR(0x6f9900);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6f9904:{NFSU2_TR(0x6f9904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9909ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f9909:L6f9909:{c.instructions+=2;NFSU2_TR(0x6f9909);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6f990d:{NFSU2_TR(0x6f990d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9912ull));
TAIL_STATIC(0x6f767cu,6f7);
}
B6f9912:L6f9912:{c.instructions+=11;NFSU2_TR(0x6f9912);
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
B6f9915:{NFSU2_TR(0x6f9915);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9917:{NFSU2_TR(0x6f9917);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f991a:{NFSU2_TR(0x6f991a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f991b:{NFSU2_TR(0x6f991b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f991e:{NFSU2_TR(0x6f991e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9921:{NFSU2_TR(0x6f9921);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6f9925:{NFSU2_TR(0x6f9925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9926:{NFSU2_TR(0x6f9926);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9929:{NFSU2_TR(0x6f9929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f992c:{NFSU2_TR(0x6f992c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9932ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9932:L6f9932:{c.instructions+=2;NFSU2_TR(0x6f9932);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f9934:{NFSU2_TR(0x6f9934);
if(r1(R+518)){{goto L6f996e;}}
}
B6f9936:L6f9936:{c.instructions+=7;NFSU2_TR(0x6f9936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f9939:{NFSU2_TR(0x6f9939);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f993b:{NFSU2_TR(0x6f993b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6f993e:{NFSU2_TR(0x6f993e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f993f:{NFSU2_TR(0x6f993f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9942:{NFSU2_TR(0x6f9942);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9945:{NFSU2_TR(0x6f9945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f994aull));
TAIL_STATIC(0x6fb18fu,6fb);
}
B6f994a:L6f994a:{c.instructions+=7;NFSU2_TR(0x6f994a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6f994d:{NFSU2_TR(0x6f994d);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B6f9950:{NFSU2_TR(0x6f9950);
__builtin_memmove((R+0),gp(0x813ac8),4);
}
B6f9955:{NFSU2_TR(0x6f9955);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9958:{NFSU2_TR(0x6f9958);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f995b:{NFSU2_TR(0x6f995b);
__builtin_memmove((R+28),(R+24),4);
}
B6f995d:{NFSU2_TR(0x6f995d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9974;}}
}
B6f995f:L6f995f:{c.instructions+=2;NFSU2_TR(0x6f995f);
u8 U[2];
__builtin_memmove((U+0),gp(0x8ad660),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f9966:{NFSU2_TR(0x6f9966);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f98e2u);}goto L6f98e2;}}
}
B6f996c:L6f996c:{c.instructions+=1;NFSU2_TR(0x6f996c);
{goto L6f9974;}
}
B6f996e:L6f996e:{c.instructions+=2;NFSU2_TR(0x6f996e);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6f9971:{NFSU2_TR(0x6f9971);
w4(R+28,u32(u32(r4(R+28))^u32(u32(0x1ull))));
}
B6f9974:L6f9974:{c.instructions+=2;NFSU2_TR(0x6f9974);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6f9978:{NFSU2_TR(0x6f9978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f997dull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f997d:L6f997d:{c.instructions+=8;NFSU2_TR(0x6f997d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f997e:{NFSU2_TR(0x6f997e);
__builtin_memmove((R+0),(R+12),4);
}
B6f9980:{NFSU2_TR(0x6f9980);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+16),(U+0),4);
}
B6f9983:{NFSU2_TR(0x6f9983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9984:{NFSU2_TR(0x6f9984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f9985:{NFSU2_TR(0x6f9985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f9986:{NFSU2_TR(0x6f9986);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9987:{NFSU2_TR(0x6f9987);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9988:L6f9988:{c.instructions+=10;NFSU2_TR(0x6f9988);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9989:{NFSU2_TR(0x6f9989);
__builtin_memmove((R+20),(R+16),4);
}
B6f998b:{NFSU2_TR(0x6f998b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6f998e:{NFSU2_TR(0x6f998e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f998f:{NFSU2_TR(0x6f998f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9990:{NFSU2_TR(0x6f9990);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9991:{NFSU2_TR(0x6f9991);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f9993:{NFSU2_TR(0x6f9993);
w4(R+4,u32(0x8ad680ull));
}
B6f9998:{NFSU2_TR(0x6f9998);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9999:{NFSU2_TR(0x6f9999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f999eull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f999e:L6f999e:{c.instructions+=4;NFSU2_TR(0x6f999e);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f99a3:{NFSU2_TR(0x6f99a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f99a5:{NFSU2_TR(0x6f99a5);
__builtin_memmove((R+12),(R+0),4);
}
B6f99a7:{NFSU2_TR(0x6f99a7);
if(r1(R+518)){{goto L6f99ad;}}
}
B6f99a9:L6f99a9:{c.instructions+=2;NFSU2_TR(0x6f99a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f99ac:{NFSU2_TR(0x6f99ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f99ad:L6f99ad:{c.instructions+=20;NFSU2_TR(0x6f99ad);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f99b3:{NFSU2_TR(0x6f99b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99b7:{NFSU2_TR(0x6f99b7);
__builtin_memmove((R+24),(R+28),4);
}
B6f99b9:{NFSU2_TR(0x6f99b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x105ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6f99bf:{NFSU2_TR(0x6f99bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f99c2:{NFSU2_TR(0x6f99c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f99c5:{NFSU2_TR(0x6f99c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f99c8:{NFSU2_TR(0x6f99c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f99cb:{NFSU2_TR(0x6f99cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f99cc:{NFSU2_TR(0x6f99cc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x230ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x230ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f99d2:{NFSU2_TR(0x6f99d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99d9:{NFSU2_TR(0x6f99d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x4d5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99e0:{NFSU2_TR(0x6f99e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99e7:{NFSU2_TR(0x6f99e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7c30b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99ee:{NFSU2_TR(0x6f99ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99f5:{NFSU2_TR(0x6f99f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7c30a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f99fc:{NFSU2_TR(0x6f99fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f99ff:{NFSU2_TR(0x6f99ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f9a01:{NFSU2_TR(0x6f9a01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9a02:{NFSU2_TR(0x6f9a02);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9a04ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f9a04:L6f9a04:{c.instructions+=4;NFSU2_TR(0x6f9a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9a05:{NFSU2_TR(0x6f9a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9a06:{NFSU2_TR(0x6f9a06);
__builtin_memmove(gp(0x8ad67c),(R+0),4);
}
B6f9a0b:{NFSU2_TR(0x6f9a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9a10ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f9a10:L6f9a10:{c.instructions+=6;NFSU2_TR(0x6f9a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f9a12:{NFSU2_TR(0x6f9a12);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9a17:{NFSU2_TR(0x6f9a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9a18:{NFSU2_TR(0x6f9a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9a19:{NFSU2_TR(0x6f9a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a1c:{NFSU2_TR(0x6f9a1c);
if(r1(R+518)){{goto L6f9a2a;}}
}
B6f9a1e:L6f9a1e:{c.instructions+=4;NFSU2_TR(0x6f9a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9a21:{NFSU2_TR(0x6f9a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a24:{NFSU2_TR(0x6f9a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9a27:{NFSU2_TR(0x6f9a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a2a:L6f9a2a:{c.instructions+=8;NFSU2_TR(0x6f9a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a2e:{NFSU2_TR(0x6f9a2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9a34:{NFSU2_TR(0x6f9a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a37:{NFSU2_TR(0x6f9a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9a3a:{NFSU2_TR(0x6f9a3a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6f9a3b:{NFSU2_TR(0x6f9a3b);
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
B6f9a3d:{NFSU2_TR(0x6f9a3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f9a43:{NFSU2_TR(0x6f9a43);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f9a85;}}
}
B6f9a45:L6f9a45:{c.instructions+=1;NFSU2_TR(0x6f9a45);
w4(R+28,u32(0x105ull));
}
B6f9a4a:L6f9a4a:{c.instructions+=3;NFSU2_TR(0x6f9a4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9a4d:{NFSU2_TR(0x6f9a4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9a50:{NFSU2_TR(0x6f9a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9a55ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6f9a55:L6f9a55:{c.instructions+=4;NFSU2_TR(0x6f9a55);
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
B6f9a57:{NFSU2_TR(0x6f9a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9a58:{NFSU2_TR(0x6f9a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9a59:{NFSU2_TR(0x6f9a59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f9a80;}}
}
B6f9a5b:L6f9a5b:{c.instructions+=4;NFSU2_TR(0x6f9a5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9a5c:{NFSU2_TR(0x6f9a5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9a5f:{NFSU2_TR(0x6f9a5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9a60:{NFSU2_TR(0x6f9a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9a65ull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f9a65:L6f9a65:{c.instructions+=9;NFSU2_TR(0x6f9a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a68:{NFSU2_TR(0x6f9a68);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9a6d:{NFSU2_TR(0x6f9a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9a70:{NFSU2_TR(0x6f9a70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9a73:{NFSU2_TR(0x6f9a73);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B6f9a75:{NFSU2_TR(0x6f9a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9a78:{NFSU2_TR(0x6f9a78);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6f9a79:{NFSU2_TR(0x6f9a79);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f9a7c:{NFSU2_TR(0x6f9a7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9a4au);}goto L6f9a4a;}}
}
B6f9a7e:L6f9a7e:{c.instructions+=1;NFSU2_TR(0x6f9a7e);
{goto L6f9a85;}
}
B6f9a80:L6f9a80:{c.instructions+=1;NFSU2_TR(0x6f9a80);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9a85:L6f9a85:{c.instructions+=3;NFSU2_TR(0x6f9a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f9a88:{NFSU2_TR(0x6f9a88);
__builtin_memmove((R+8),(R+24),4);
}
B6f9a8a:{NFSU2_TR(0x6f9a8a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6f9a8c:L6f9a8c:{c.instructions+=5;NFSU2_TR(0x6f9a8c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f9a8e:{NFSU2_TR(0x6f9a8e);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f9a91:{NFSU2_TR(0x6f9a91);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9a92:{NFSU2_TR(0x6f9a92);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9a94:{NFSU2_TR(0x6f9a94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9a8cu);}goto L6f9a8c;}}
}
B6f9a96:L6f9a96:{c.instructions+=10;NFSU2_TR(0x6f9a96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f9a9c:{NFSU2_TR(0x6f9a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9a9f:{NFSU2_TR(0x6f9a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6f9aa2:{NFSU2_TR(0x6f9aa2);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f9aa3:{NFSU2_TR(0x6f9aa3);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x105ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B6f9aa9:{NFSU2_TR(0x6f9aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9aaa:{NFSU2_TR(0x6f9aaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9aad:{NFSU2_TR(0x6f9aad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x105ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9ab3:{NFSU2_TR(0x6f9ab3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ab4:{NFSU2_TR(0x6f9ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9ab9ull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f9ab9:L6f9ab9:{c.instructions+=3;NFSU2_TR(0x6f9ab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9abc:{NFSU2_TR(0x6f9abc);
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
B6f9abe:{NFSU2_TR(0x6f9abe);
if(r1(R+518)){{goto L6f9ace;}}
}
B6f9ac0:L6f9ac0:{c.instructions+=5;NFSU2_TR(0x6f9ac0);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f9ac6:{NFSU2_TR(0x6f9ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f9ac8:{NFSU2_TR(0x6f9ac8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9aca:{NFSU2_TR(0x6f9aca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9acb:{NFSU2_TR(0x6f9acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9aceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f9ace:L6f9ace:{c.instructions+=2;NFSU2_TR(0x6f9ace);
w4(R+4,u32(0x8ad680ull));
}
B6f9ad3:{NFSU2_TR(0x6f9ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9ad8ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f9ad8:L6f9ad8:{c.instructions+=7;NFSU2_TR(0x6f9ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9ad9:{NFSU2_TR(0x6f9ad9);
__builtin_memmove((R+0),(R+24),4);
}
B6f9adb:{NFSU2_TR(0x6f9adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f9adc:{NFSU2_TR(0x6f9adc);
s1(0x8ad661,u8(0x1ull));
}
B6f9ae3:{NFSU2_TR(0x6f9ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f9ae4:{NFSU2_TR(0x6f9ae4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f9ae5:{NFSU2_TR(0x6f9ae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9ae6:L6f9ae6:{c.instructions+=4;NFSU2_TR(0x6f9ae6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ae7:{NFSU2_TR(0x6f9ae7);
__builtin_memmove((R+20),(R+16),4);
}
B6f9ae9:{NFSU2_TR(0x6f9ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f9aea:{NFSU2_TR(0x6f9aea);
TAIL_STATIC(0x75dd6fu,75d);
}
B6f9aef:L6f9aef:{c.instructions+=4;NFSU2_TR(0x6f9aef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9af0:{NFSU2_TR(0x6f9af0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f9af2:{NFSU2_TR(0x6f9af2);
u8 U[2];
__builtin_memmove((U+0),gp(0x8ad67b),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f9af8:{NFSU2_TR(0x6f9af8);
if(r1(R+518)){{goto L6f9b46;}}
}
B6f9afa:L6f9afa:{c.instructions+=3;NFSU2_TR(0x6f9afa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f9afc:{NFSU2_TR(0x6f9afc);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f9aff:{NFSU2_TR(0x6f9aff);
if(r1(R+518)){{goto L6f9b46;}}
}
B6f9b01:L6f9b01:{c.instructions+=2;NFSU2_TR(0x6f9b01);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f9b04:{NFSU2_TR(0x6f9b04);
if(r1(R+518)){{goto L6f9b46;}}
}
B6f9b06:L6f9b06:{c.instructions+=2;NFSU2_TR(0x6f9b06);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f9b0a:{NFSU2_TR(0x6f9b0a);
if(r1(R+518)){{goto L6f9b46;}}
}
B6f9b0c:L6f9b0c:{c.instructions+=3;NFSU2_TR(0x6f9b0c);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9b11:{NFSU2_TR(0x6f9b11);
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
B6f9b13:{NFSU2_TR(0x6f9b13);
if(r1(R+518)){{goto L6f9b42;}}
}
B6f9b15:L6f9b15:{c.instructions+=2;NFSU2_TR(0x6f9b15);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f9b18:{NFSU2_TR(0x6f9b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9b1c;}}
}
B6f9b1a:L6f9b1a:{c.instructions+=2;NFSU2_TR(0x6f9b1a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f9b1b:{NFSU2_TR(0x6f9b1b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f9b1c:L6f9b1c:{c.instructions+=7;NFSU2_TR(0x6f9b1c);
u8 U[4];
w4(U+0,u32(0x6f9ae6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9b21:{NFSU2_TR(0x6f9b21);
u8 U[4];
w4(U+0,u32(0x105ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9b26:{NFSU2_TR(0x6f9b26);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9b29:{NFSU2_TR(0x6f9b29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
}
B6f9b2e:{NFSU2_TR(0x6f9b2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9b2f:{NFSU2_TR(0x6f9b2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9b30:{NFSU2_TR(0x6f9b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9b35ull));
TAIL_STATIC(0x75f7b8u,75f);
}
B6f9b35:L6f9b35:{c.instructions+=3;NFSU2_TR(0x6f9b35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f9b38:{NFSU2_TR(0x6f9b38);
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
B6f9b3a:{NFSU2_TR(0x6f9b3a);
if(r1(R+518)){{goto L6f9b42;}}
}
B6f9b3c:L6f9b3c:{c.instructions+=1;NFSU2_TR(0x6f9b3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6f9b42:L6f9b42:{c.instructions+=3;NFSU2_TR(0x6f9b42);
__builtin_memmove((R+0),(R+12),1);
}
B6f9b44:{NFSU2_TR(0x6f9b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f9b45:{NFSU2_TR(0x6f9b45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9b46:L6f9b46:{c.instructions+=3;NFSU2_TR(0x6f9b46);
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
B6f9b48:{NFSU2_TR(0x6f9b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f9b49:{NFSU2_TR(0x6f9b49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f9bfc:L6f9bfc:{c.instructions+=11;NFSU2_TR(0x6f9bfc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9bfd:{NFSU2_TR(0x6f9bfd);
__builtin_memmove((R+20),(R+16),4);
}
B6f9bff:{NFSU2_TR(0x6f9bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x328ull))));
}
B6f9c05:{NFSU2_TR(0x6f9c05);
__builtin_memmove((R+0),gp(0x813ad4),4);
}
B6f9c0a:{NFSU2_TR(0x6f9c0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c0b:{NFSU2_TR(0x6f9c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c0c:{NFSU2_TR(0x6f9c0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9c12:{NFSU2_TR(0x6f9c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c13:{NFSU2_TR(0x6f9c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xfbeaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9c1a:{NFSU2_TR(0x6f9c1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f9c1e:{NFSU2_TR(0x6f9c1e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6f9c20:L6f9c20:{c.instructions+=5;NFSU2_TR(0x6f9c20);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f9c22:{NFSU2_TR(0x6f9c22);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f9c25:{NFSU2_TR(0x6f9c25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9c26:{NFSU2_TR(0x6f9c26);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9c28:{NFSU2_TR(0x6f9c28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9c20u);}goto L6f9c20;}}
}
B6f9c2a:L6f9c2a:{c.instructions+=2;NFSU2_TR(0x6f9c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9c2d:{NFSU2_TR(0x6f9c2d);
__builtin_memmove((R+24),(R+0),4);
}
B6f9c2f:L6f9c2f:{c.instructions+=4;NFSU2_TR(0x6f9c2f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f9c31:{NFSU2_TR(0x6f9c31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9c32:{NFSU2_TR(0x6f9c32);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9c34:{NFSU2_TR(0x6f9c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9c2fu);}goto L6f9c2f;}}
}
B6f9c36:L6f9c36:{c.instructions+=3;NFSU2_TR(0x6f9c36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9c3c:{NFSU2_TR(0x6f9c3c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f9c3e:{NFSU2_TR(0x6f9c3e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f9c3f:L6f9c3f:{c.instructions+=4;NFSU2_TR(0x6f9c3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f9c42:{NFSU2_TR(0x6f9c42);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9c43:{NFSU2_TR(0x6f9c43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9c45:{NFSU2_TR(0x6f9c45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9c3fu);}goto L6f9c3f;}}
}
B6f9c47:L6f9c47:{c.instructions+=3;NFSU2_TR(0x6f9c47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9c4a:{NFSU2_TR(0x6f9c4a);
__builtin_memmove((R+4),(R+0),4);
}
B6f9c4c:{NFSU2_TR(0x6f9c4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f9c4f:L6f9c4f:{c.instructions+=1;NFSU2_TR(0x6f9c4f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f9c51;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9c4fu);}goto L6f9c4f;}
}
B6f9c51:L6f9c51:{c.instructions+=5;NFSU2_TR(0x6f9c51);
__builtin_memmove((R+4),(R+0),4);
}
B6f9c53:{NFSU2_TR(0x6f9c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9c59:{NFSU2_TR(0x6f9c59);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6f9c5c:{NFSU2_TR(0x6f9c5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c5e:{NFSU2_TR(0x6f9c5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c5f:L6f9c5f:{c.instructions+=1;NFSU2_TR(0x6f9c5f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f9c61;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9c5fu);}goto L6f9c5f;}
}
B6f9c61:L6f9c61:{c.instructions+=1;NFSU2_TR(0x6f9c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9c66ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f9c66:L6f9c66:{c.instructions+=4;NFSU2_TR(0x6f9c66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9c69:{NFSU2_TR(0x6f9c69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f9c6b:{NFSU2_TR(0x6f9c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9c6e:{NFSU2_TR(0x6f9c6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9c77;}}
}
B6f9c70:L6f9c70:{c.instructions+=2;NFSU2_TR(0x6f9c70);
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
B6f9c72:{NFSU2_TR(0x6f9c72);
TAIL_STATIC(0x6fa033u,6fa);
}
B6f9c77:L6f9c77:{c.instructions+=3;NFSU2_TR(0x6f9c77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9c7a:{NFSU2_TR(0x6f9c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c7b:{NFSU2_TR(0x6f9c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9c80ull));
TAIL_STATIC(0x6f87c5u,6f8);
}
B6f9c80:L6f9c80:{c.instructions+=3;NFSU2_TR(0x6f9c80);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ad0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9c86:{NFSU2_TR(0x6f9c86);
__builtin_memmove((R+24),(R+0),4);
}
B6f9c88:{NFSU2_TR(0x6f9c88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9c8dull));
TAIL_STATIC(0x6f7997u,6f7);
}
B6f9c8d:L6f9c8d:{c.instructions+=7;NFSU2_TR(0x6f9c8d);
__builtin_memmove((R+28),(R+0),4);
}
B6f9c8f:{NFSU2_TR(0x6f9c8f);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9c94:{NFSU2_TR(0x6f9c94);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f9c96:{NFSU2_TR(0x6f9c96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f9c99:{NFSU2_TR(0x6f9c99);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9c9b:{NFSU2_TR(0x6f9c9b);
__builtin_memmove((R+12),(R+8),4);
}
B6f9c9d:{NFSU2_TR(0x6f9c9d);
if(r1(R+518)){{goto L6f9caa;}}
}
B6f9c9f:L6f9c9f:{c.instructions+=4;NFSU2_TR(0x6f9c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9ca2:{NFSU2_TR(0x6f9ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9ca5:{NFSU2_TR(0x6f9ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9ca8:{NFSU2_TR(0x6f9ca8);
{goto L6f9cad;}
}
B6f9caa:L6f9caa:{c.instructions+=1;NFSU2_TR(0x6f9caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9cad:L6f9cad:{c.instructions+=8;NFSU2_TR(0x6f9cad);
__builtin_memmove((R+0),(R+24),4);
}
B6f9caf:{NFSU2_TR(0x6f9caf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f9cb0:{NFSU2_TR(0x6f9cb0);
__builtin_memmove((R+24),(R+0),4);
}
B6f9cb2:{NFSU2_TR(0x6f9cb2);
w1(R+512,carry<u32>(r4(R+24),r4(R+4)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6f9cb4:{NFSU2_TR(0x6f9cb4);
__builtin_memmove((R+4),(R+8),4);
}
B6f9cb6:{NFSU2_TR(0x6f9cb6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+4))+u32(r4(U+4))));
w4(R+4,u32(u32(r4(U+12))+u32(r4(U+8))));
}
B6f9cb9:{NFSU2_TR(0x6f9cb9);
u8 U[8];
__builtin_memmove((U+0),gp(0x813adc),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9cbf:{NFSU2_TR(0x6f9cbf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x6fa023u,6fa);}
}
B6f9cc5:L6f9cc5:{c.instructions+=1;NFSU2_TR(0x6f9cc5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f9cd3;}}
}
B6f9cc7:L6f9cc7:{c.instructions+=2;NFSU2_TR(0x6f9cc7);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ad8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6f9ccd:{NFSU2_TR(0x6f9ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6fa023u,6fa);}
}
B6f9cd3:L6f9cd3:{c.instructions+=6;NFSU2_TR(0x6f9cd3);
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6f9cd5:{NFSU2_TR(0x6f9cd5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+8))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f9cd7:{NFSU2_TR(0x6f9cd7);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ae4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9cdd:{NFSU2_TR(0x6f9cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9ce0:{NFSU2_TR(0x6f9ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9ce3:{NFSU2_TR(0x6f9ce3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6fa023u,6fa);}
}
B6f9ce9:L6f9ce9:{c.instructions+=1;NFSU2_TR(0x6f9ce9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f9cf7;}}
}
B6f9ceb:L6f9ceb:{c.instructions+=2;NFSU2_TR(0x6f9ceb);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ae0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9cf1:{NFSU2_TR(0x6f9cf1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6fa023u,6fa);}
}
B6f9cf7:L6f9cf7:{c.instructions+=3;NFSU2_TR(0x6f9cf7);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6f9cfc:{NFSU2_TR(0x6f9cfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f9d02:{NFSU2_TR(0x6f9d02);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6f9d04:L6f9d04:{c.instructions+=5;NFSU2_TR(0x6f9d04);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f9d06:{NFSU2_TR(0x6f9d06);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f9d09:{NFSU2_TR(0x6f9d09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9d0a:{NFSU2_TR(0x6f9d0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9d0c:{NFSU2_TR(0x6f9d0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d04u);}goto L6f9d04;}}
}
B6f9d0e:L6f9d0e:{c.instructions+=2;NFSU2_TR(0x6f9d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f9d11:{NFSU2_TR(0x6f9d11);
__builtin_memmove((R+8),(R+0),4);
}
B6f9d13:L6f9d13:{c.instructions+=4;NFSU2_TR(0x6f9d13);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f9d15:{NFSU2_TR(0x6f9d15);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9d16:{NFSU2_TR(0x6f9d16);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9d18:{NFSU2_TR(0x6f9d18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d13u);}goto L6f9d13;}}
}
B6f9d1a:L6f9d1a:{c.instructions+=3;NFSU2_TR(0x6f9d1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9d20:{NFSU2_TR(0x6f9d20);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6f9d22:{NFSU2_TR(0x6f9d22);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f9d23:L6f9d23:{c.instructions+=4;NFSU2_TR(0x6f9d23);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f9d26:{NFSU2_TR(0x6f9d26);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9d27:{NFSU2_TR(0x6f9d27);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9d29:{NFSU2_TR(0x6f9d29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d23u);}goto L6f9d23;}}
}
B6f9d2b:L6f9d2b:{c.instructions+=3;NFSU2_TR(0x6f9d2b);
__builtin_memmove((R+4),(R+0),4);
}
B6f9d2d:{NFSU2_TR(0x6f9d2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f9d30:{NFSU2_TR(0x6f9d30);
__builtin_memmove((R+24),(R+8),4);
}
B6f9d32:L6f9d32:{c.instructions+=1;NFSU2_TR(0x6f9d32);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f9d34;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d32u);}goto L6f9d32;}
}
B6f9d34:L6f9d34:{c.instructions+=3;NFSU2_TR(0x6f9d34);
__builtin_memmove((R+4),(R+0),4);
}
B6f9d36:{NFSU2_TR(0x6f9d36);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6f9d39:{NFSU2_TR(0x6f9d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9d3f:L6f9d3f:{c.instructions+=1;NFSU2_TR(0x6f9d3f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f9d41;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d3fu);}goto L6f9d3f;}
}
B6f9d41:L6f9d41:{c.instructions+=1;NFSU2_TR(0x6f9d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9d46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f975cu);}goto L6f975c;}
}
B6f9d46:L6f9d46:{c.instructions+=3;NFSU2_TR(0x6f9d46);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6f9d4b:{NFSU2_TR(0x6f9d4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9d51:{NFSU2_TR(0x6f9d51);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6f9d53:L6f9d53:{c.instructions+=5;NFSU2_TR(0x6f9d53);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f9d55:{NFSU2_TR(0x6f9d55);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f9d58:{NFSU2_TR(0x6f9d58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9d59:{NFSU2_TR(0x6f9d59);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9d5b:{NFSU2_TR(0x6f9d5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d53u);}goto L6f9d53;}}
}
B6f9d5d:L6f9d5d:{c.instructions+=2;NFSU2_TR(0x6f9d5d);
__builtin_memmove((R+0),gp(0x813b00),4);
}
B6f9d62:{NFSU2_TR(0x6f9d62);
__builtin_memmove((R+24),(R+0),4);
}
B6f9d64:L6f9d64:{c.instructions+=4;NFSU2_TR(0x6f9d64);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f9d66:{NFSU2_TR(0x6f9d66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f9d67:{NFSU2_TR(0x6f9d67);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9d69:{NFSU2_TR(0x6f9d69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d64u);}goto L6f9d64;}}
}
B6f9d6b:L6f9d6b:{c.instructions+=3;NFSU2_TR(0x6f9d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f9d71:{NFSU2_TR(0x6f9d71);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f9d73:{NFSU2_TR(0x6f9d73);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f9d74:L6f9d74:{c.instructions+=4;NFSU2_TR(0x6f9d74);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f9d77:{NFSU2_TR(0x6f9d77);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9d78:{NFSU2_TR(0x6f9d78);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9d7a:{NFSU2_TR(0x6f9d7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d74u);}goto L6f9d74;}}
}
B6f9d7c:L6f9d7c:{c.instructions+=2;NFSU2_TR(0x6f9d7c);
__builtin_memmove((R+4),(R+0),4);
}
B6f9d7e:{NFSU2_TR(0x6f9d7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f9d81:L6f9d81:{c.instructions+=1;NFSU2_TR(0x6f9d81);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f9d83;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d81u);}goto L6f9d81;}
}
B6f9d83:L6f9d83:{c.instructions+=5;NFSU2_TR(0x6f9d83);
__builtin_memmove((R+4),(R+0),4);
}
B6f9d85:{NFSU2_TR(0x6f9d85);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9d8a:{NFSU2_TR(0x6f9d8a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6f9d8d:{NFSU2_TR(0x6f9d8d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f9d8f:{NFSU2_TR(0x6f9d8f);
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
B6f9d91:L6f9d91:{c.instructions+=1;NFSU2_TR(0x6f9d91);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f9d93;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9d91u);}goto L6f9d91;}
}
B6f9d93:L6f9d93:{c.instructions+=1;NFSU2_TR(0x6f9d93);
if(r1(R+518)){{goto L6f9edf;}}
}
B6f9d99:L6f9d99:{c.instructions+=3;NFSU2_TR(0x6f9d99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B6f9d9c:{NFSU2_TR(0x6f9d9c);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6f9d9e:{NFSU2_TR(0x6f9d9e);
if(r1(R+518)){{goto L6f9edf;}}
}
B6f9da4:L6f9da4:{c.instructions+=2;NFSU2_TR(0x6f9da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f9da7:{NFSU2_TR(0x6f9da7);
__builtin_memmove((R+24),(R+0),4);
}
B6f9da9:L6f9da9:{c.instructions+=4;NFSU2_TR(0x6f9da9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f9dab:{NFSU2_TR(0x6f9dab);
__builtin_memmove((R+0),(R+4),1);
}
B6f9dad:{NFSU2_TR(0x6f9dad);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+4))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f9daf:{NFSU2_TR(0x6f9daf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9dcb;}}
}
B6f9db1:L6f9db1:{c.instructions+=2;NFSU2_TR(0x6f9db1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9db3:{NFSU2_TR(0x6f9db3);
if(r1(R+518)){{goto L6f9dc7;}}
}
B6f9db5:L6f9db5:{c.instructions+=4;NFSU2_TR(0x6f9db5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f9db8:{NFSU2_TR(0x6f9db8);
__builtin_memmove((R+0),(R+4),1);
}
B6f9dba:{NFSU2_TR(0x6f9dba);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+4))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+4))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f9dbd:{NFSU2_TR(0x6f9dbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9dcb;}}
}
B6f9dbf:L6f9dbf:{c.instructions+=6;NFSU2_TR(0x6f9dbf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f9dc0:{NFSU2_TR(0x6f9dc0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f9dc1:{NFSU2_TR(0x6f9dc1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9dc2:{NFSU2_TR(0x6f9dc2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f9dc3:{NFSU2_TR(0x6f9dc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f9dc5:{NFSU2_TR(0x6f9dc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9da9u);}goto L6f9da9;}}
}
B6f9dc7:L6f9dc7:{c.instructions+=2;NFSU2_TR(0x6f9dc7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f9dc9:{NFSU2_TR(0x6f9dc9);
{goto L6f9dd0;}
}
B6f9dcb:L6f9dcb:{c.instructions+=2;NFSU2_TR(0x6f9dcb);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f9dcd:{NFSU2_TR(0x6f9dcd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f9dd0:L6f9dd0:{c.instructions+=2;NFSU2_TR(0x6f9dd0);
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
B6f9dd2:{NFSU2_TR(0x6f9dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9edf;}}
}
B6f9dd8:L6f9dd8:{c.instructions+=9;NFSU2_TR(0x6f9dd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9dd9:{NFSU2_TR(0x6f9dd9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9dde:{NFSU2_TR(0x6f9dde);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9de0:{NFSU2_TR(0x6f9de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9de1:{NFSU2_TR(0x6f9de1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9de2:{NFSU2_TR(0x6f9de2);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9de7:{NFSU2_TR(0x6f9de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9ded:{NFSU2_TR(0x6f9ded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9dee:{NFSU2_TR(0x6f9dee);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9df4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9df4:L6f9df4:{c.instructions+=3;NFSU2_TR(0x6f9df4);
__builtin_memmove((R+24),(R+0),4);
}
B6f9df6:{NFSU2_TR(0x6f9df6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6f9df9:{NFSU2_TR(0x6f9df9);
if(r1(R+518)){{goto L6f9ec7;}}
}
B6f9dff:L6f9dff:{c.instructions+=3;NFSU2_TR(0x6f9dff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e00:{NFSU2_TR(0x6f9e00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e01:{NFSU2_TR(0x6f9e01);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9e07ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9e07:L6f9e07:{c.instructions+=3;NFSU2_TR(0x6f9e07);
__builtin_memmove((R+4),gp(0x8ad67c),4);
}
B6f9e0d:{NFSU2_TR(0x6f9e0d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B6f9e10:{NFSU2_TR(0x6f9e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9ebd;}}
}
B6f9e16:L6f9e16:{c.instructions+=5;NFSU2_TR(0x6f9e16);
__builtin_memmove((R+28),gp(0x813ac8),4);
}
B6f9e1c:{NFSU2_TR(0x6f9e1c);
__builtin_memmove((R+0),(R+28),4);
}
B6f9e1e:{NFSU2_TR(0x6f9e1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6f9e21:{NFSU2_TR(0x6f9e21);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f9e24:{NFSU2_TR(0x6f9e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9e29ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B6f9e29:L6f9e29:{c.instructions+=7;NFSU2_TR(0x6f9e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9e2c:{NFSU2_TR(0x6f9e2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e2d:{NFSU2_TR(0x6f9e2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9e30:{NFSU2_TR(0x6f9e30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e31:{NFSU2_TR(0x6f9e31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e32:{NFSU2_TR(0x6f9e32);
__builtin_memmove((R+28),gp(0x783234),4);
}
B6f9e38:{NFSU2_TR(0x6f9e38);
{goto L6f9e57;}
}
B6f9e3a:L6f9e3a:{c.instructions+=4;NFSU2_TR(0x6f9e3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9e3d:{NFSU2_TR(0x6f9e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e3e:{NFSU2_TR(0x6f9e3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9e41:{NFSU2_TR(0x6f9e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9e46ull));
TAIL_STATIC(0x6fb18fu,6fb);
}
B6f9e46:L6f9e46:{c.instructions+=6;NFSU2_TR(0x6f9e46);
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
B6f9e49:{NFSU2_TR(0x6f9e49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e4a:{NFSU2_TR(0x6f9e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9e4d:{NFSU2_TR(0x6f9e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9e50:{NFSU2_TR(0x6f9e50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e51:{NFSU2_TR(0x6f9e51);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ac8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e57:L6f9e57:{c.instructions+=3;NFSU2_TR(0x6f9e57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9e5a:{NFSU2_TR(0x6f9e5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e5b:{NFSU2_TR(0x6f9e5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9e5dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9e5d:L6f9e5d:{c.instructions+=3;NFSU2_TR(0x6f9e5d);
__builtin_memmove((R+0),gp(0x813ac8),4);
}
B6f9e62:{NFSU2_TR(0x6f9e62);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B6f9e65:{NFSU2_TR(0x6f9e65);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9e3au);}goto L6f9e3a;}}
}
B6f9e67:L6f9e67:{c.instructions+=2;NFSU2_TR(0x6f9e67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e68:{NFSU2_TR(0x6f9e68);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9e6eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9e6e:L6f9e6e:{c.instructions+=5;NFSU2_TR(0x6f9e6e);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9e73:{NFSU2_TR(0x6f9e73);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6f9e77:{NFSU2_TR(0x6f9e77);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6f9e7a:{NFSU2_TR(0x6f9e7a);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+4))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+4)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f9e81:{NFSU2_TR(0x6f9e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9eb4;}}
}
B6f9e83:L6f9e83:{c.instructions+=9;NFSU2_TR(0x6f9e83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e84:{NFSU2_TR(0x6f9e84);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e89:{NFSU2_TR(0x6f9e89);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e8b:{NFSU2_TR(0x6f9e8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e8c:{NFSU2_TR(0x6f9e8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e8d:{NFSU2_TR(0x6f9e8d);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e92:{NFSU2_TR(0x6f9e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9e98:{NFSU2_TR(0x6f9e98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9e99:{NFSU2_TR(0x6f9e99);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9e9full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9e9f:L6f9e9f:{c.instructions+=7;NFSU2_TR(0x6f9e9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ea0:{NFSU2_TR(0x6f9ea0);
__builtin_memmove((R+24),(R+0),4);
}
B6f9ea2:{NFSU2_TR(0x6f9ea2);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9ea7:{NFSU2_TR(0x6f9ea7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ea8:{NFSU2_TR(0x6f9ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9eab:{NFSU2_TR(0x6f9eab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9eac:{NFSU2_TR(0x6f9eac);
u8 U[4];
__builtin_memmove((U+0),gp(0x783228),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9eb2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9eb2:L6f9eb2:{c.instructions+=1;NFSU2_TR(0x6f9eb2);
{goto L6f9ec7;}
}
B6f9eb4:L6f9eb4:{c.instructions+=2;NFSU2_TR(0x6f9eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xfbeaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f9ebb:{NFSU2_TR(0x6f9ebb);
{goto L6f9ecc;}
}
B6f9ebd:L6f9ebd:{c.instructions+=2;NFSU2_TR(0x6f9ebd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ebe:{NFSU2_TR(0x6f9ebe);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9ec4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9ec4:L6f9ec4:{c.instructions+=1;NFSU2_TR(0x6f9ec4);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6f9ec7:L6f9ec7:{c.instructions+=1;NFSU2_TR(0x6f9ec7);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9ecc:L6f9ecc:{c.instructions+=5;NFSU2_TR(0x6f9ecc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6f9ecf:{NFSU2_TR(0x6f9ecf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6f9ed6:{NFSU2_TR(0x6f9ed6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f9eda:{NFSU2_TR(0x6f9eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9edd:{NFSU2_TR(0x6f9edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9f0b;}}
}
B6f9edf:L6f9edf:{c.instructions+=9;NFSU2_TR(0x6f9edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ee0:{NFSU2_TR(0x6f9ee0);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ee5:{NFSU2_TR(0x6f9ee5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ee7:{NFSU2_TR(0x6f9ee7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ee8:{NFSU2_TR(0x6f9ee8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ee9:{NFSU2_TR(0x6f9ee9);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9eee:{NFSU2_TR(0x6f9eee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9ef4:{NFSU2_TR(0x6f9ef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9ef5:{NFSU2_TR(0x6f9ef5);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9efbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9efb:L6f9efb:{c.instructions+=3;NFSU2_TR(0x6f9efb);
__builtin_memmove((R+24),(R+0),4);
}
B6f9efd:{NFSU2_TR(0x6f9efd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9f00:{NFSU2_TR(0x6f9f00);
if(r1(R+518)){TAIL_STATIC(0x6fa01eu,6fa);}
}
B6f9f06:L6f9f06:{c.instructions+=1;NFSU2_TR(0x6f9f06);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9f0b:L6f9f0b:{c.instructions+=2;NFSU2_TR(0x6f9f0b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9f0d:{NFSU2_TR(0x6f9f0d);
if(r1(R+518)){{goto L6f9f33;}}
}
B6f9f0f:L6f9f0f:{c.instructions+=7;NFSU2_TR(0x6f9f0f);
u8 U[4];
w4(U+0,u32(0x6f9ae6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9f14:{NFSU2_TR(0x6f9f14);
u8 U[4];
w4(U+0,u32(0x105ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9f19:{NFSU2_TR(0x6f9f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9f1c:{NFSU2_TR(0x6f9f1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
}
B6f9f21:{NFSU2_TR(0x6f9f21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9f22:{NFSU2_TR(0x6f9f22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9f25:{NFSU2_TR(0x6f9f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9f2aull));
TAIL_STATIC(0x75f7b8u,75f);
}
B6f9f2a:L6f9f2a:{c.instructions+=4;NFSU2_TR(0x6f9f2a);
__builtin_memmove((R+28),(R+0),4);
}
B6f9f2c:{NFSU2_TR(0x6f9f2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f9f2f:{NFSU2_TR(0x6f9f2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9f31:{NFSU2_TR(0x6f9f31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9f3e;}}
}
B6f9f33:L6f9f33:{c.instructions+=2;NFSU2_TR(0x6f9f33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9f36:{NFSU2_TR(0x6f9f36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9f3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9988u);}goto L6f9988;}
}
B6f9f3b:L6f9f3b:{c.instructions+=2;NFSU2_TR(0x6f9f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f9f3c:{NFSU2_TR(0x6f9f3c);
__builtin_memmove((R+28),(R+0),4);
}
B6f9f3e:L6f9f3e:{c.instructions+=6;NFSU2_TR(0x6f9f3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9f41:{NFSU2_TR(0x6f9f41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9f42:{NFSU2_TR(0x6f9f42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9f45:{NFSU2_TR(0x6f9f45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9f46:{NFSU2_TR(0x6f9f46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f9f49:{NFSU2_TR(0x6f9f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9f4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f9881u);}goto L6f9881;}
}
B6f9f4e:L6f9f4e:{c.instructions+=4;NFSU2_TR(0x6f9f4e);
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
B6f9f51:{NFSU2_TR(0x6f9f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9f52:{NFSU2_TR(0x6f9f52);
__builtin_memmove((R+12),(R+0),4);
}
B6f9f54:{NFSU2_TR(0x6f9f54);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9f5aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9f5a:L6f9f5a:{c.instructions+=2;NFSU2_TR(0x6f9f5a);
u8 U[2];
__builtin_memmove((U+0),gp(0x8ad660),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f9f61:{NFSU2_TR(0x6f9f61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f9ff2;}}
}
B6f9f67:L6f9f67:{c.instructions+=2;NFSU2_TR(0x6f9f67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f9f6a:{NFSU2_TR(0x6f9f6a);
if(r1(R+518)){{goto L6f9ff2;}}
}
B6f9f70:L6f9f70:{c.instructions+=3;NFSU2_TR(0x6f9f70);
w4(R+24,u32(0x8ad680ull));
}
B6f9f75:{NFSU2_TR(0x6f9f75);
__builtin_memmove((R+4),(R+24),4);
}
B6f9f77:{NFSU2_TR(0x6f9f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9f7cull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f9f7c:L6f9f7c:{c.instructions+=7;NFSU2_TR(0x6f9f7c);
__builtin_memmove((R+4),gp(0x8ad67c),4);
}
B6f9f82:{NFSU2_TR(0x6f9f82);
__builtin_memmove((R+0),(R+12),4);
}
B6f9f84:{NFSU2_TR(0x6f9f84);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f9f85:{NFSU2_TR(0x6f9f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6f9f88:{NFSU2_TR(0x6f9f88);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))+u32(r4(U+4))));
w4(R+8,u32(u32(r4(U+12))+u32(r4(U+8))));
}
B6f9f8b:{NFSU2_TR(0x6f9f8b);
u8 U[14];
__builtin_memmove((U+6),gp(0x813adc),4);
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
B6f9f91:{NFSU2_TR(0x6f9f91);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f9fdc;}}
}
B6f9f93:L6f9f93:{c.instructions+=1;NFSU2_TR(0x6f9f93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f9f9d;}}
}
B6f9f95:L6f9f95:{c.instructions+=2;NFSU2_TR(0x6f9f95);
u8 U[14];
__builtin_memmove((U+6),gp(0x813ad8),4);
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
B6f9f9b:{NFSU2_TR(0x6f9f9b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f9fdc;}}
}
B6f9f9d:L6f9f9d:{c.instructions+=3;NFSU2_TR(0x6f9f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f9fa0:{NFSU2_TR(0x6f9fa0);
u8 U[14];
__builtin_memmove((U+6),gp(0x813ae4),4);
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
B6f9fa6:{NFSU2_TR(0x6f9fa6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f9fdc;}}
}
B6f9fa8:L6f9fa8:{c.instructions+=1;NFSU2_TR(0x6f9fa8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f9fb5;}}
}
B6f9faa:L6f9faa:{c.instructions+=3;NFSU2_TR(0x6f9faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f9fad:{NFSU2_TR(0x6f9fad);
u8 U[14];
__builtin_memmove((U+6),gp(0x813ae0),4);
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
B6f9fb3:{NFSU2_TR(0x6f9fb3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f9fdc;}}
}
B6f9fb5:L6f9fb5:{c.instructions+=7;NFSU2_TR(0x6f9fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9fb8:{NFSU2_TR(0x6f9fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9fbe:{NFSU2_TR(0x6f9fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9fbf:{NFSU2_TR(0x6f9fbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9fc5:{NFSU2_TR(0x6f9fc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9fc6:{NFSU2_TR(0x6f9fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f9fc9:{NFSU2_TR(0x6f9fc9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783230),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9fcfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9fcf:L6f9fcf:{c.instructions+=3;NFSU2_TR(0x6f9fcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x104ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f9fd6:{NFSU2_TR(0x6f9fd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f9fda:{NFSU2_TR(0x6f9fda);
{goto L6f9fe9;}
}
B6f9fdc:L6f9fdc:{c.instructions+=3;NFSU2_TR(0x6f9fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f9fe2:{NFSU2_TR(0x6f9fe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f9fe3:{NFSU2_TR(0x6f9fe3);
u8 U[4];
__builtin_memmove((U+0),gp(0x78322c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9fe9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f9fe9:L6f9fe9:{c.instructions+=2;NFSU2_TR(0x6f9fe9);
__builtin_memmove((R+4),(R+24),4);
}
B6f9feb:{NFSU2_TR(0x6f9feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9ff0ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f9ff0:L6f9ff0:{c.instructions+=1;NFSU2_TR(0x6f9ff0);
TAIL_STATIC(0x6fa01eu,6fa);
}
B6f9ff2:L6f9ff2:{c.instructions+=4;NFSU2_TR(0x6f9ff2);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6f9ff7:{NFSU2_TR(0x6f9ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f9ffa:{NFSU2_TR(0x6f9ffa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f9ffd:{NFSU2_TR(0x6f9ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6fa000u,6fa);
}
XIT:NFSU2_TR_EXIT(0x6f9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
