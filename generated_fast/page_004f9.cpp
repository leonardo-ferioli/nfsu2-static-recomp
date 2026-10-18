#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4dc(u8* __restrict R,Cpu& c);
u32 body_4dd(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4ed(u8* __restrict R,Cpu& c);
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_4f5(u8* __restrict R,Cpu& c);
u32 body_4f7(u8* __restrict R,Cpu& c);
u32 body_4f8(u8* __restrict R,Cpu& c);
u32 body_4fa(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 page_4f9(Cpu& c){return body_4f9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f9001:goto L4f9001;
case 0x4f9002:c.instructions+=3;goto B4f9002;
case 0x4f9003:c.instructions+=2;goto B4f9003;
case 0x4f9005:c.instructions+=1;goto B4f9005;
case 0x4f900a:goto L4f900a;
case 0x4f900c:goto L4f900c;
case 0x4f900e:goto L4f900e;
case 0x4f9010:c.instructions+=3;goto B4f9010;
case 0x4f9018:c.instructions+=2;goto B4f9018;
case 0x4f901b:c.instructions+=1;goto B4f901b;
case 0x4f901d:goto L4f901d;
case 0x4f901f:c.instructions+=1;goto B4f901f;
case 0x4f9024:goto L4f9024;
case 0x4f9027:c.instructions+=4;goto B4f9027;
case 0x4f902b:c.instructions+=3;goto B4f902b;
case 0x4f902d:c.instructions+=2;goto B4f902d;
case 0x4f9035:c.instructions+=1;goto B4f9035;
case 0x4f9037:goto L4f9037;
case 0x4f9038:c.instructions+=3;goto B4f9038;
case 0x4f9039:c.instructions+=2;goto B4f9039;
case 0x4f903b:c.instructions+=1;goto B4f903b;
case 0x4f9040:goto L4f9040;
case 0x4f9042:goto L4f9042;
case 0x4f9044:goto L4f9044;
case 0x4f904c:c.instructions+=1;goto B4f904c;
case 0x4f904f:goto L4f904f;
case 0x4f9051:c.instructions+=1;goto B4f9051;
case 0x4f9056:goto L4f9056;
case 0x4f9059:c.instructions+=4;goto B4f9059;
case 0x4f905d:c.instructions+=3;goto B4f905d;
case 0x4f905f:c.instructions+=2;goto B4f905f;
case 0x4f9067:c.instructions+=1;goto B4f9067;
case 0x4f9069:goto L4f9069;
case 0x4f906a:c.instructions+=3;goto B4f906a;
case 0x4f906b:c.instructions+=2;goto B4f906b;
case 0x4f906d:c.instructions+=1;goto B4f906d;
case 0x4f9072:goto L4f9072;
case 0x4f9074:goto L4f9074;
case 0x4f9076:goto L4f9076;
case 0x4f9078:c.instructions+=3;goto B4f9078;
case 0x4f9080:c.instructions+=2;goto B4f9080;
case 0x4f9083:c.instructions+=1;goto B4f9083;
case 0x4f9088:goto L4f9088;
case 0x4f908b:c.instructions+=4;goto B4f908b;
case 0x4f908f:c.instructions+=3;goto B4f908f;
case 0x4f9091:c.instructions+=2;goto B4f9091;
case 0x4f9099:c.instructions+=1;goto B4f9099;
case 0x4f909b:goto L4f909b;
case 0x4f909c:c.instructions+=3;goto B4f909c;
case 0x4f909d:c.instructions+=2;goto B4f909d;
case 0x4f909f:c.instructions+=1;goto B4f909f;
case 0x4f90a4:goto L4f90a4;
case 0x4f90a6:goto L4f90a6;
case 0x4f90a8:goto L4f90a8;
case 0x4f90ab:c.instructions+=3;goto B4f90ab;
case 0x4f90b1:c.instructions+=2;goto B4f90b1;
case 0x4f90b9:c.instructions+=1;goto B4f90b9;
case 0x4f90bf:goto L4f90bf;
case 0x4f90c6:c.instructions+=1;goto B4f90c6;
case 0x4f90cc:goto L4f90cc;
case 0x4f90ce:c.instructions+=1;goto B4f90ce;
case 0x4f90d3:goto L4f90d3;
case 0x4f90d6:c.instructions+=4;goto B4f90d6;
case 0x4f90da:c.instructions+=3;goto B4f90da;
case 0x4f90dc:c.instructions+=2;goto B4f90dc;
case 0x4f90e4:c.instructions+=1;goto B4f90e4;
case 0x4f90e6:goto L4f90e6;
case 0x4f90e7:c.instructions+=3;goto B4f90e7;
case 0x4f90e8:c.instructions+=2;goto B4f90e8;
case 0x4f90ea:c.instructions+=1;goto B4f90ea;
case 0x4f90ef:goto L4f90ef;
case 0x4f90f1:goto L4f90f1;
case 0x4f90f3:goto L4f90f3;
case 0x4f90f5:c.instructions+=3;goto B4f90f5;
case 0x4f90fd:c.instructions+=2;goto B4f90fd;
case 0x4f9100:c.instructions+=1;goto B4f9100;
case 0x4f9105:goto L4f9105;
case 0x4f9108:c.instructions+=4;goto B4f9108;
case 0x4f910c:c.instructions+=3;goto B4f910c;
case 0x4f910e:c.instructions+=2;goto B4f910e;
case 0x4f9116:c.instructions+=1;goto B4f9116;
case 0x4f9118:goto L4f9118;
case 0x4f9119:c.instructions+=3;goto B4f9119;
case 0x4f911a:c.instructions+=2;goto B4f911a;
case 0x4f911c:c.instructions+=1;goto B4f911c;
case 0x4f9121:goto L4f9121;
case 0x4f9123:goto L4f9123;
case 0x4f9125:goto L4f9125;
case 0x4f9127:c.instructions+=3;goto B4f9127;
case 0x4f912f:c.instructions+=2;goto B4f912f;
case 0x4f9132:c.instructions+=1;goto B4f9132;
case 0x4f9137:goto L4f9137;
case 0x4f913a:c.instructions+=2;goto B4f913a;
case 0x4f913c:c.instructions+=1;goto B4f913c;
case 0x4f913e:goto L4f913e;
case 0x4f9141:c.instructions+=3;goto B4f9141;
case 0x4f9143:c.instructions+=2;goto B4f9143;
case 0x4f9146:c.instructions+=1;goto B4f9146;
case 0x4f9148:goto L4f9148;
case 0x4f914a:goto L4f914a;
case 0x4f914c:c.instructions+=2;goto B4f914c;
case 0x4f914f:c.instructions+=1;goto B4f914f;
case 0x4f9154:goto L4f9154;
case 0x4f9157:c.instructions+=4;goto B4f9157;
case 0x4f915b:c.instructions+=3;goto B4f915b;
case 0x4f915d:c.instructions+=2;goto B4f915d;
case 0x4f9165:c.instructions+=1;goto B4f9165;
case 0x4f9167:goto L4f9167;
case 0x4f9168:c.instructions+=3;goto B4f9168;
case 0x4f9169:c.instructions+=2;goto B4f9169;
case 0x4f916b:c.instructions+=1;goto B4f916b;
case 0x4f9170:goto L4f9170;
case 0x4f9172:goto L4f9172;
case 0x4f9174:goto L4f9174;
case 0x4f917c:c.instructions+=1;goto B4f917c;
case 0x4f9182:goto L4f9182;
case 0x4f9184:c.instructions+=1;goto B4f9184;
case 0x4f9189:goto L4f9189;
case 0x4f918c:c.instructions+=4;goto B4f918c;
case 0x4f9190:c.instructions+=3;goto B4f9190;
case 0x4f9192:c.instructions+=2;goto B4f9192;
case 0x4f919a:c.instructions+=1;goto B4f919a;
case 0x4f919c:goto L4f919c;
case 0x4f919d:c.instructions+=3;goto B4f919d;
case 0x4f919e:c.instructions+=2;goto B4f919e;
case 0x4f91a0:c.instructions+=1;goto B4f91a0;
case 0x4f91a5:goto L4f91a5;
case 0x4f91a7:goto L4f91a7;
case 0x4f91a9:goto L4f91a9;
case 0x4f91b1:c.instructions+=3;goto B4f91b1;
case 0x4f91b4:c.instructions+=2;goto B4f91b4;
case 0x4f91b9:c.instructions+=1;goto B4f91b9;
case 0x4f91be:goto L4f91be;
case 0x4f91c0:c.instructions+=1;goto B4f91c0;
case 0x4f91c2:goto L4f91c2;
case 0x4f91c4:c.instructions+=1;goto B4f91c4;
case 0x4f91c9:goto L4f91c9;
case 0x4f91cc:c.instructions+=4;goto B4f91cc;
case 0x4f91d0:c.instructions+=3;goto B4f91d0;
case 0x4f91d2:c.instructions+=2;goto B4f91d2;
case 0x4f91da:c.instructions+=1;goto B4f91da;
case 0x4f91dc:goto L4f91dc;
case 0x4f91dd:c.instructions+=2;goto B4f91dd;
case 0x4f91df:c.instructions+=1;goto B4f91df;
case 0x4f91e4:goto L4f91e4;
case 0x4f91ec:c.instructions+=2;goto B4f91ec;
case 0x4f91ef:c.instructions+=1;goto B4f91ef;
case 0x4f91f1:goto L4f91f1;
case 0x4f91f3:c.instructions+=3;goto B4f91f3;
case 0x4f91fb:c.instructions+=2;goto B4f91fb;
case 0x4f91fe:c.instructions+=1;goto B4f91fe;
case 0x4f9200:goto L4f9200;
case 0x4f9205:c.instructions+=1;goto B4f9205;
case 0x4f920a:goto L4f920a;
case 0x4f920b:c.instructions+=2;goto B4f920b;
case 0x4f920c:c.instructions+=1;goto B4f920c;
case 0x4f9211:goto L4f9211;
case 0x4f9212:c.instructions+=1;goto B4f9212;
case 0x4f9217:goto L4f9217;
case 0x4f921c:c.instructions+=1;goto B4f921c;
case 0x4f9221:goto L4f9221;
case 0x4f9222:c.instructions+=2;goto B4f9222;
case 0x4f9223:c.instructions+=1;goto B4f9223;
case 0x4f9228:goto L4f9228;
case 0x4f9229:c.instructions+=1;goto B4f9229;
case 0x4f922e:goto L4f922e;
case 0x4f9233:c.instructions+=1;goto B4f9233;
case 0x4f9238:goto L4f9238;
case 0x4f9239:c.instructions+=2;goto B4f9239;
case 0x4f923a:c.instructions+=1;goto B4f923a;
case 0x4f923f:goto L4f923f;
case 0x4f9240:c.instructions+=1;goto B4f9240;
case 0x4f9245:goto L4f9245;
case 0x4f9248:goto L4f9248;
case 0x4f924d:c.instructions+=1;goto B4f924d;
case 0x4f9252:goto L4f9252;
case 0x4f9253:c.instructions+=2;goto B4f9253;
case 0x4f9254:c.instructions+=1;goto B4f9254;
case 0x4f9259:goto L4f9259;
case 0x4f925c:c.instructions+=7;goto B4f925c;
case 0x4f925d:c.instructions+=6;goto B4f925d;
case 0x4f9260:c.instructions+=5;goto B4f9260;
case 0x4f9267:c.instructions+=4;goto B4f9267;
case 0x4f9269:c.instructions+=3;goto B4f9269;
case 0x4f926a:c.instructions+=2;goto B4f926a;
case 0x4f926c:c.instructions+=1;goto B4f926c;
case 0x4f9271:goto L4f9271;
case 0x4f9278:c.instructions+=5;goto B4f9278;
case 0x4f9279:c.instructions+=4;goto B4f9279;
case 0x4f927a:c.instructions+=3;goto B4f927a;
case 0x4f927b:c.instructions+=2;goto B4f927b;
case 0x4f927d:c.instructions+=1;goto B4f927d;
case 0x4f9282:goto L4f9282;
case 0x4f9286:c.instructions+=8;goto B4f9286;
case 0x4f9287:c.instructions+=7;goto B4f9287;
case 0x4f9289:c.instructions+=6;goto B4f9289;
case 0x4f928a:c.instructions+=5;goto B4f928a;
case 0x4f928b:c.instructions+=4;goto B4f928b;
case 0x4f9292:c.instructions+=3;goto B4f9292;
case 0x4f9293:c.instructions+=2;goto B4f9293;
case 0x4f9296:c.instructions+=1;goto B4f9296;
case 0x4f92a0:goto L4f92a0;
case 0x4f92a6:c.instructions+=2;goto B4f92a6;
case 0x4f92a8:c.instructions+=1;goto B4f92a8;
case 0x4f92aa:goto L4f92aa;
case 0x4f92ab:c.instructions+=4;goto B4f92ab;
case 0x4f92ae:c.instructions+=3;goto B4f92ae;
case 0x4f92af:c.instructions+=2;goto B4f92af;
case 0x4f92b1:c.instructions+=1;goto B4f92b1;
case 0x4f92b6:goto L4f92b6;
case 0x4f92b7:c.instructions+=1;goto B4f92b7;
case 0x4f92bc:goto L4f92bc;
case 0x4f92c6:c.instructions+=1;goto B4f92c6;
case 0x4f92cb:goto L4f92cb;
case 0x4f92cc:c.instructions+=1;goto B4f92cc;
case 0x4f92d1:goto L4f92d1;
case 0x4f92d4:c.instructions+=2;goto B4f92d4;
case 0x4f92d5:c.instructions+=1;goto B4f92d5;
case 0x4f92d6:goto L4f92d6;
case 0x4f92e0:goto L4f92e0;
case 0x4f92e2:c.instructions+=7;goto B4f92e2;
case 0x4f92e7:c.instructions+=6;goto B4f92e7;
case 0x4f92ed:c.instructions+=5;goto B4f92ed;
case 0x4f92ee:c.instructions+=4;goto B4f92ee;
case 0x4f92f5:c.instructions+=3;goto B4f92f5;
case 0x4f92f6:c.instructions+=2;goto B4f92f6;
case 0x4f92fb:c.instructions+=1;goto B4f92fb;
case 0x4f9300:goto L4f9300;
case 0x4f9303:c.instructions+=4;goto B4f9303;
case 0x4f9307:c.instructions+=3;goto B4f9307;
case 0x4f9309:c.instructions+=2;goto B4f9309;
case 0x4f9311:c.instructions+=1;goto B4f9311;
case 0x4f9313:goto L4f9313;
case 0x4f9317:c.instructions+=3;goto B4f9317;
case 0x4f9318:c.instructions+=2;goto B4f9318;
case 0x4f931a:c.instructions+=1;goto B4f931a;
case 0x4f931f:goto L4f931f;
case 0x4f9323:c.instructions+=3;goto B4f9323;
case 0x4f932a:c.instructions+=2;goto B4f932a;
case 0x4f932d:c.instructions+=1;goto B4f932d;
case 0x4f932e:goto L4f932e;
case 0x4f9332:c.instructions+=4;goto B4f9332;
case 0x4f9334:c.instructions+=3;goto B4f9334;
case 0x4f933b:c.instructions+=2;goto B4f933b;
case 0x4f933e:c.instructions+=1;goto B4f933e;
case 0x4f9340:goto L4f9340;
case 0x4f9344:c.instructions+=6;goto B4f9344;
case 0x4f9349:c.instructions+=5;goto B4f9349;
case 0x4f934a:c.instructions+=4;goto B4f934a;
case 0x4f934b:c.instructions+=3;goto B4f934b;
case 0x4f934c:c.instructions+=2;goto B4f934c;
case 0x4f934e:c.instructions+=1;goto B4f934e;
case 0x4f9354:goto L4f9354;
case 0x4f935a:goto L4f935a;
case 0x4f935f:c.instructions+=1;goto B4f935f;
case 0x4f9365:goto L4f9365;
case 0x4f936b:goto L4f936b;
case 0x4f9370:c.instructions+=1;goto B4f9370;
case 0x4f9376:goto L4f9376;
case 0x4f9378:goto L4f9378;
case 0x4f937d:c.instructions+=1;goto B4f937d;
case 0x4f937f:goto L4f937f;
case 0x4f9384:c.instructions+=1;goto B4f9384;
case 0x4f938a:goto L4f938a;
case 0x4f938d:c.instructions+=2;goto B4f938d;
case 0x4f938f:c.instructions+=1;goto B4f938f;
case 0x4f9395:goto L4f9395;
case 0x4f9398:c.instructions+=2;goto B4f9398;
case 0x4f939a:c.instructions+=1;goto B4f939a;
case 0x4f93a0:goto L4f93a0;
case 0x4f93a3:c.instructions+=3;goto B4f93a3;
case 0x4f93a5:c.instructions+=2;goto B4f93a5;
case 0x4f93a6:c.instructions+=1;goto B4f93a6;
case 0x4f93a9:goto L4f93a9;
case 0x4f93ac:c.instructions+=3;goto B4f93ac;
case 0x4f93ae:c.instructions+=2;goto B4f93ae;
case 0x4f93b3:c.instructions+=1;goto B4f93b3;
case 0x4f93b6:goto L4f93b6;
case 0x4f93b9:c.instructions+=5;goto B4f93b9;
case 0x4f93bb:c.instructions+=4;goto B4f93bb;
case 0x4f93bc:c.instructions+=3;goto B4f93bc;
case 0x4f93bd:c.instructions+=2;goto B4f93bd;
case 0x4f93be:c.instructions+=1;goto B4f93be;
case 0x4f93c3:goto L4f93c3;
case 0x4f93c6:c.instructions+=4;goto B4f93c6;
case 0x4f93c7:c.instructions+=3;goto B4f93c7;
case 0x4f93c8:c.instructions+=2;goto B4f93c8;
case 0x4f93c9:c.instructions+=1;goto B4f93c9;
case 0x4f93cc:goto L4f93cc;
case 0x4f93cf:c.instructions+=2;goto B4f93cf;
case 0x4f93d1:c.instructions+=1;goto B4f93d1;
case 0x4f93d7:goto L4f93d7;
case 0x4f93da:c.instructions+=5;goto B4f93da;
case 0x4f93df:c.instructions+=4;goto B4f93df;
case 0x4f93e6:c.instructions+=3;goto B4f93e6;
case 0x4f93e8:c.instructions+=2;goto B4f93e8;
case 0x4f93e9:c.instructions+=1;goto B4f93e9;
case 0x4f93ec:goto L4f93ec;
case 0x4f93ef:c.instructions+=5;goto B4f93ef;
case 0x4f93f2:c.instructions+=4;goto B4f93f2;
case 0x4f93f4:c.instructions+=3;goto B4f93f4;
case 0x4f93f9:c.instructions+=2;goto B4f93f9;
case 0x4f93fa:c.instructions+=1;goto B4f93fa;
case 0x4f93ff:goto L4f93ff;
case 0x4f9402:c.instructions+=3;goto B4f9402;
case 0x4f9404:c.instructions+=2;goto B4f9404;
case 0x4f9405:c.instructions+=1;goto B4f9405;
case 0x4f940a:goto L4f940a;
case 0x4f940d:c.instructions+=2;goto B4f940d;
case 0x4f940f:c.instructions+=1;goto B4f940f;
case 0x4f9414:goto L4f9414;
case 0x4f9415:c.instructions+=1;goto B4f9415;
case 0x4f941a:goto L4f941a;
case 0x4f9420:c.instructions+=3;goto B4f9420;
case 0x4f9425:c.instructions+=2;goto B4f9425;
case 0x4f9426:c.instructions+=1;goto B4f9426;
case 0x4f942b:goto L4f942b;
case 0x4f942e:c.instructions+=4;goto B4f942e;
case 0x4f942f:c.instructions+=3;goto B4f942f;
case 0x4f9430:c.instructions+=2;goto B4f9430;
case 0x4f9431:c.instructions+=1;goto B4f9431;
case 0x4f9434:goto L4f9434;
case 0x4f9439:c.instructions+=1;goto B4f9439;
case 0x4f943f:goto L4f943f;
case 0x4f9445:c.instructions+=2;goto B4f9445;
case 0x4f9447:c.instructions+=1;goto B4f9447;
case 0x4f944d:goto L4f944d;
case 0x4f9450:c.instructions+=2;goto B4f9450;
case 0x4f9452:c.instructions+=1;goto B4f9452;
case 0x4f9454:goto L4f9454;
case 0x4f9457:c.instructions+=1;goto B4f9457;
case 0x4f9459:goto L4f9459;
case 0x4f945b:goto L4f945b;
case 0x4f945e:c.instructions+=2;goto B4f945e;
case 0x4f9460:c.instructions+=1;goto B4f9460;
case 0x4f9462:goto L4f9462;
case 0x4f9465:c.instructions+=2;goto B4f9465;
case 0x4f9467:c.instructions+=1;goto B4f9467;
case 0x4f9469:goto L4f9469;
case 0x4f946c:c.instructions+=1;goto B4f946c;
case 0x4f946e:goto L4f946e;
case 0x4f9470:goto L4f9470;
case 0x4f9472:c.instructions+=1;goto B4f9472;
case 0x4f9474:goto L4f9474;
case 0x4f9476:c.instructions+=1;goto B4f9476;
case 0x4f947c:goto L4f947c;
case 0x4f947e:c.instructions+=2;goto B4f947e;
case 0x4f9480:c.instructions+=1;goto B4f9480;
case 0x4f9485:goto L4f9485;
case 0x4f9488:c.instructions+=6;goto B4f9488;
case 0x4f948d:c.instructions+=5;goto B4f948d;
case 0x4f948e:c.instructions+=4;goto B4f948e;
case 0x4f9493:c.instructions+=3;goto B4f9493;
case 0x4f9494:c.instructions+=2;goto B4f9494;
case 0x4f9495:c.instructions+=1;goto B4f9495;
case 0x4f949a:goto L4f949a;
case 0x4f949d:c.instructions+=4;goto B4f949d;
case 0x4f949e:c.instructions+=3;goto B4f949e;
case 0x4f949f:c.instructions+=2;goto B4f949f;
case 0x4f94a0:c.instructions+=1;goto B4f94a0;
case 0x4f94a3:goto L4f94a3;
case 0x4f94a5:c.instructions+=1;goto B4f94a5;
case 0x4f94a8:goto L4f94a8;
case 0x4f94ab:c.instructions+=3;goto B4f94ab;
case 0x4f94ac:c.instructions+=2;goto B4f94ac;
case 0x4f94ae:c.instructions+=1;goto B4f94ae;
case 0x4f94b3:goto L4f94b3;
case 0x4f94b4:c.instructions+=2;goto B4f94b4;
case 0x4f94b6:c.instructions+=1;goto B4f94b6;
case 0x4f94bb:goto L4f94bb;
case 0x4f94bd:c.instructions+=1;goto B4f94bd;
case 0x4f94bf:goto L4f94bf;
case 0x4f94c1:c.instructions+=2;goto B4f94c1;
case 0x4f94c3:c.instructions+=1;goto B4f94c3;
case 0x4f94c6:goto L4f94c6;
case 0x4f94cc:c.instructions+=4;goto B4f94cc;
case 0x4f94ce:c.instructions+=3;goto B4f94ce;
case 0x4f94d3:c.instructions+=2;goto B4f94d3;
case 0x4f94d4:c.instructions+=1;goto B4f94d4;
case 0x4f94d9:goto L4f94d9;
case 0x4f94dc:c.instructions+=5;goto B4f94dc;
case 0x4f94dd:c.instructions+=4;goto B4f94dd;
case 0x4f94e4:c.instructions+=3;goto B4f94e4;
case 0x4f94e5:c.instructions+=2;goto B4f94e5;
case 0x4f94e6:c.instructions+=1;goto B4f94e6;
case 0x4f94e9:goto L4f94e9;
case 0x4f94ec:c.instructions+=2;goto B4f94ec;
case 0x4f94ee:c.instructions+=1;goto B4f94ee;
case 0x4f94f4:goto L4f94f4;
case 0x4f94f7:c.instructions+=2;goto B4f94f7;
case 0x4f94f9:c.instructions+=1;goto B4f94f9;
case 0x4f94ff:goto L4f94ff;
case 0x4f9501:c.instructions+=1;goto B4f9501;
case 0x4f9504:goto L4f9504;
case 0x4f9507:c.instructions+=3;goto B4f9507;
case 0x4f9509:c.instructions+=2;goto B4f9509;
case 0x4f950e:c.instructions+=1;goto B4f950e;
case 0x4f9511:goto L4f9511;
case 0x4f9514:c.instructions+=5;goto B4f9514;
case 0x4f9516:c.instructions+=4;goto B4f9516;
case 0x4f9517:c.instructions+=3;goto B4f9517;
case 0x4f9518:c.instructions+=2;goto B4f9518;
case 0x4f9519:c.instructions+=1;goto B4f9519;
case 0x4f951e:goto L4f951e;
case 0x4f9521:c.instructions+=4;goto B4f9521;
case 0x4f9522:c.instructions+=3;goto B4f9522;
case 0x4f9523:c.instructions+=2;goto B4f9523;
case 0x4f9524:c.instructions+=1;goto B4f9524;
case 0x4f9527:goto L4f9527;
case 0x4f952c:c.instructions+=1;goto B4f952c;
case 0x4f9532:goto L4f9532;
case 0x4f9537:c.instructions+=1;goto B4f9537;
case 0x4f9539:goto L4f9539;
case 0x4f953e:c.instructions+=1;goto B4f953e;
case 0x4f9544:goto L4f9544;
case 0x4f9545:c.instructions+=3;goto B4f9545;
case 0x4f9546:c.instructions+=2;goto B4f9546;
case 0x4f9547:c.instructions+=1;goto B4f9547;
case 0x4f954a:goto L4f954a;
case 0x4f9550:c.instructions+=2;goto B4f9550;
case 0x4f9552:c.instructions+=1;goto B4f9552;
case 0x4f9558:goto L4f9558;
case 0x4f955b:c.instructions+=2;goto B4f955b;
case 0x4f955d:c.instructions+=1;goto B4f955d;
case 0x4f955f:goto L4f955f;
case 0x4f9562:c.instructions+=2;goto B4f9562;
case 0x4f9564:c.instructions+=1;goto B4f9564;
case 0x4f9566:goto L4f9566;
case 0x4f9569:c.instructions+=1;goto B4f9569;
case 0x4f956b:goto L4f956b;
case 0x4f956d:goto L4f956d;
case 0x4f9573:c.instructions+=5;goto B4f9573;
case 0x4f9575:c.instructions+=4;goto B4f9575;
case 0x4f957a:c.instructions+=3;goto B4f957a;
case 0x4f957b:c.instructions+=2;goto B4f957b;
case 0x4f957e:c.instructions+=1;goto B4f957e;
case 0x4f9583:goto L4f9583;
case 0x4f9586:c.instructions+=5;goto B4f9586;
case 0x4f9589:c.instructions+=4;goto B4f9589;
case 0x4f958b:c.instructions+=3;goto B4f958b;
case 0x4f958e:c.instructions+=2;goto B4f958e;
case 0x4f958f:c.instructions+=1;goto B4f958f;
case 0x4f9592:goto L4f9592;
case 0x4f9595:c.instructions+=3;goto B4f9595;
case 0x4f9596:c.instructions+=2;goto B4f9596;
case 0x4f9598:c.instructions+=1;goto B4f9598;
case 0x4f959d:goto L4f959d;
case 0x4f959e:c.instructions+=2;goto B4f959e;
case 0x4f95a0:c.instructions+=1;goto B4f95a0;
case 0x4f95a5:goto L4f95a5;
case 0x4f95a7:c.instructions+=1;goto B4f95a7;
case 0x4f95ad:goto L4f95ad;
case 0x4f95b0:c.instructions+=4;goto B4f95b0;
case 0x4f95b2:c.instructions+=3;goto B4f95b2;
case 0x4f95b3:c.instructions+=2;goto B4f95b3;
case 0x4f95b5:c.instructions+=1;goto B4f95b5;
case 0x4f95b8:goto L4f95b8;
case 0x4f95b9:c.instructions+=3;goto B4f95b9;
case 0x4f95ba:c.instructions+=2;goto B4f95ba;
case 0x4f95bb:c.instructions+=1;goto B4f95bb;
case 0x4f95be:goto L4f95be;
case 0x4f95c0:c.instructions+=2;goto B4f95c0;
case 0x4f95c2:c.instructions+=1;goto B4f95c2;
case 0x4f95c7:goto L4f95c7;
case 0x4f95ca:c.instructions+=6;goto B4f95ca;
case 0x4f95cf:c.instructions+=5;goto B4f95cf;
case 0x4f95d1:c.instructions+=4;goto B4f95d1;
case 0x4f95d2:c.instructions+=3;goto B4f95d2;
case 0x4f95d3:c.instructions+=2;goto B4f95d3;
case 0x4f95d4:c.instructions+=1;goto B4f95d4;
case 0x4f95d9:goto L4f95d9;
case 0x4f95dc:c.instructions+=4;goto B4f95dc;
case 0x4f95dd:c.instructions+=3;goto B4f95dd;
case 0x4f95de:c.instructions+=2;goto B4f95de;
case 0x4f95df:c.instructions+=1;goto B4f95df;
case 0x4f95e2:goto L4f95e2;
case 0x4f95e5:c.instructions+=4;goto B4f95e5;
case 0x4f95ea:c.instructions+=3;goto B4f95ea;
case 0x4f95ef:c.instructions+=2;goto B4f95ef;
case 0x4f95f0:c.instructions+=1;goto B4f95f0;
case 0x4f95f5:goto L4f95f5;
case 0x4f95f8:c.instructions+=2;goto B4f95f8;
case 0x4f95fa:c.instructions+=1;goto B4f95fa;
case 0x4f95fc:goto L4f95fc;
case 0x4f95ff:c.instructions+=5;goto B4f95ff;
case 0x4f9601:c.instructions+=4;goto B4f9601;
case 0x4f9606:c.instructions+=3;goto B4f9606;
case 0x4f960b:c.instructions+=2;goto B4f960b;
case 0x4f960c:c.instructions+=1;goto B4f960c;
case 0x4f9611:goto L4f9611;
case 0x4f9614:goto L4f9614;
case 0x4f9618:c.instructions+=10;goto B4f9618;
case 0x4f961c:c.instructions+=9;goto B4f961c;
case 0x4f9620:c.instructions+=8;goto B4f9620;
case 0x4f9621:c.instructions+=7;goto B4f9621;
case 0x4f962b:c.instructions+=6;goto B4f962b;
case 0x4f962e:c.instructions+=5;goto B4f962e;
case 0x4f9634:c.instructions+=4;goto B4f9634;
case 0x4f963a:c.instructions+=3;goto B4f963a;
case 0x4f963b:c.instructions+=2;goto B4f963b;
case 0x4f963c:c.instructions+=1;goto B4f963c;
case 0x4f963f:goto L4f963f;
case 0x4f9641:c.instructions+=1;goto B4f9641;
case 0x4f9646:goto L4f9646;
case 0x4f9647:c.instructions+=3;goto B4f9647;
case 0x4f9648:c.instructions+=2;goto B4f9648;
case 0x4f9649:c.instructions+=1;goto B4f9649;
case 0x4f964c:goto L4f964c;
case 0x4f9651:c.instructions+=1;goto B4f9651;
case 0x4f9657:goto L4f9657;
case 0x4f965d:goto L4f965d;
case 0x4f9662:c.instructions+=1;goto B4f9662;
case 0x4f9668:goto L4f9668;
case 0x4f966d:c.instructions+=1;goto B4f966d;
case 0x4f966f:goto L4f966f;
case 0x4f9674:c.instructions+=1;goto B4f9674;
case 0x4f9676:goto L4f9676;
case 0x4f9679:c.instructions+=3;goto B4f9679;
case 0x4f967b:c.instructions+=2;goto B4f967b;
case 0x4f967c:c.instructions+=1;goto B4f967c;
case 0x4f967e:goto L4f967e;
case 0x4f9680:c.instructions+=1;goto B4f9680;
case 0x4f9685:goto L4f9685;
case 0x4f9686:c.instructions+=3;goto B4f9686;
case 0x4f9687:c.instructions+=2;goto B4f9687;
case 0x4f9688:c.instructions+=1;goto B4f9688;
case 0x4f968b:goto L4f968b;
case 0x4f968d:c.instructions+=7;goto B4f968d;
case 0x4f9692:c.instructions+=6;goto B4f9692;
case 0x4f9695:c.instructions+=5;goto B4f9695;
case 0x4f969a:c.instructions+=4;goto B4f969a;
case 0x4f969d:c.instructions+=3;goto B4f969d;
case 0x4f969f:c.instructions+=2;goto B4f969f;
case 0x4f96a1:c.instructions+=1;goto B4f96a1;
case 0x4f96a6:goto L4f96a6;
case 0x4f96a8:c.instructions+=1;goto B4f96a8;
case 0x4f96aa:goto L4f96aa;
case 0x4f96ad:c.instructions+=4;goto B4f96ad;
case 0x4f96ae:c.instructions+=3;goto B4f96ae;
case 0x4f96af:c.instructions+=2;goto B4f96af;
case 0x4f96b0:c.instructions+=1;goto B4f96b0;
case 0x4f96b5:goto L4f96b5;
case 0x4f96b8:goto L4f96b8;
case 0x4f96b9:c.instructions+=3;goto B4f96b9;
case 0x4f96ba:c.instructions+=2;goto B4f96ba;
case 0x4f96bb:c.instructions+=1;goto B4f96bb;
case 0x4f96be:goto L4f96be;
case 0x4f96c0:c.instructions+=3;goto B4f96c0;
case 0x4f96c7:c.instructions+=2;goto B4f96c7;
case 0x4f96d1:c.instructions+=1;goto B4f96d1;
case 0x4f96d6:goto L4f96d6;
case 0x4f96db:c.instructions+=5;goto B4f96db;
case 0x4f96de:c.instructions+=4;goto B4f96de;
case 0x4f96e5:c.instructions+=3;goto B4f96e5;
case 0x4f96eb:c.instructions+=2;goto B4f96eb;
case 0x4f96f2:c.instructions+=1;goto B4f96f2;
case 0x4f96f4:goto L4f96f4;
case 0x4f96fa:c.instructions+=1;goto B4f96fa;
case 0x4f96ff:goto L4f96ff;
case 0x4f9700:c.instructions+=1;goto B4f9700;
case 0x4f9702:goto L4f9702;
case 0x4f9703:c.instructions+=1;goto B4f9703;
case 0x4f9705:goto L4f9705;
case 0x4f9706:c.instructions+=1;goto B4f9706;
case 0x4f9708:goto L4f9708;
case 0x4f970a:c.instructions+=1;goto B4f970a;
case 0x4f970f:goto L4f970f;
case 0x4f9711:c.instructions+=1;goto B4f9711;
case 0x4f9716:goto L4f9716;
case 0x4f9717:c.instructions+=3;goto B4f9717;
case 0x4f9718:c.instructions+=2;goto B4f9718;
case 0x4f9719:c.instructions+=1;goto B4f9719;
case 0x4f971c:goto L4f971c;
case 0x4f971e:c.instructions+=1;goto B4f971e;
case 0x4f9723:goto L4f9723;
case 0x4f9725:c.instructions+=1;goto B4f9725;
case 0x4f972a:goto L4f972a;
case 0x4f972b:c.instructions+=3;goto B4f972b;
case 0x4f972c:c.instructions+=2;goto B4f972c;
case 0x4f972d:c.instructions+=1;goto B4f972d;
case 0x4f9730:goto L4f9730;
case 0x4f9732:c.instructions+=1;goto B4f9732;
case 0x4f9737:goto L4f9737;
case 0x4f9739:c.instructions+=1;goto B4f9739;
case 0x4f973e:goto L4f973e;
case 0x4f973f:c.instructions+=3;goto B4f973f;
case 0x4f9740:c.instructions+=2;goto B4f9740;
case 0x4f9741:c.instructions+=1;goto B4f9741;
case 0x4f9744:goto L4f9744;
case 0x4f9746:c.instructions+=1;goto B4f9746;
case 0x4f974b:goto L4f974b;
case 0x4f974c:c.instructions+=3;goto B4f974c;
case 0x4f974d:c.instructions+=2;goto B4f974d;
case 0x4f974e:c.instructions+=1;goto B4f974e;
case 0x4f9751:goto L4f9751;
case 0x4f9757:c.instructions+=2;goto B4f9757;
case 0x4f9759:c.instructions+=1;goto B4f9759;
case 0x4f975f:goto L4f975f;
case 0x4f9765:c.instructions+=2;goto B4f9765;
case 0x4f9767:c.instructions+=1;goto B4f9767;
case 0x4f976d:goto L4f976d;
case 0x4f9770:c.instructions+=10;goto B4f9770;
case 0x4f9775:c.instructions+=9;goto B4f9775;
case 0x4f9777:c.instructions+=8;goto B4f9777;
case 0x4f977c:c.instructions+=7;goto B4f977c;
case 0x4f9781:c.instructions+=6;goto B4f9781;
case 0x4f9786:c.instructions+=5;goto B4f9786;
case 0x4f978b:c.instructions+=4;goto B4f978b;
case 0x4f9790:c.instructions+=3;goto B4f9790;
case 0x4f9795:c.instructions+=2;goto B4f9795;
case 0x4f9796:c.instructions+=1;goto B4f9796;
case 0x4f979b:goto L4f979b;
case 0x4f979e:c.instructions+=4;goto B4f979e;
case 0x4f979f:c.instructions+=3;goto B4f979f;
case 0x4f97a0:c.instructions+=2;goto B4f97a0;
case 0x4f97a1:c.instructions+=1;goto B4f97a1;
case 0x4f97a4:goto L4f97a4;
case 0x4f97a9:c.instructions+=1;goto B4f97a9;
case 0x4f97ab:goto L4f97ab;
case 0x4f97b0:c.instructions+=1;goto B4f97b0;
case 0x4f97b2:goto L4f97b2;
case 0x4f97b7:c.instructions+=1;goto B4f97b7;
case 0x4f97bd:goto L4f97bd;
case 0x4f97bf:c.instructions+=1;goto B4f97bf;
case 0x4f97c4:goto L4f97c4;
case 0x4f97c5:c.instructions+=3;goto B4f97c5;
case 0x4f97c6:c.instructions+=2;goto B4f97c6;
case 0x4f97c7:c.instructions+=1;goto B4f97c7;
case 0x4f97ca:goto L4f97ca;
case 0x4f97d4:c.instructions+=1;goto B4f97d4;
case 0x4f97da:goto L4f97da;
case 0x4f97dd:c.instructions+=4;goto B4f97dd;
case 0x4f97df:c.instructions+=3;goto B4f97df;
case 0x4f97e4:c.instructions+=2;goto B4f97e4;
case 0x4f97e5:c.instructions+=1;goto B4f97e5;
case 0x4f97ea:goto L4f97ea;
case 0x4f97ed:c.instructions+=4;goto B4f97ed;
case 0x4f97ee:c.instructions+=3;goto B4f97ee;
case 0x4f97ef:c.instructions+=2;goto B4f97ef;
case 0x4f97f0:c.instructions+=1;goto B4f97f0;
case 0x4f97f3:goto L4f97f3;
case 0x4f97f5:c.instructions+=1;goto B4f97f5;
case 0x4f97fa:goto L4f97fa;
case 0x4f9800:c.instructions+=2;goto B4f9800;
case 0x4f9802:c.instructions+=1;goto B4f9802;
case 0x4f9804:goto L4f9804;
case 0x4f9807:c.instructions+=3;goto B4f9807;
case 0x4f980c:c.instructions+=2;goto B4f980c;
case 0x4f980d:c.instructions+=1;goto B4f980d;
case 0x4f9812:goto L4f9812;
case 0x4f9815:c.instructions+=2;goto B4f9815;
case 0x4f981a:c.instructions+=1;goto B4f981a;
case 0x4f981f:goto L4f981f;
case 0x4f9820:c.instructions+=1;goto B4f9820;
case 0x4f9825:goto L4f9825;
case 0x4f982b:c.instructions+=4;goto B4f982b;
case 0x4f9830:c.instructions+=3;goto B4f9830;
case 0x4f9831:c.instructions+=2;goto B4f9831;
case 0x4f9838:c.instructions+=1;goto B4f9838;
case 0x4f983d:goto L4f983d;
case 0x4f9840:goto L4f9840;
case 0x4f9846:c.instructions+=2;goto B4f9846;
case 0x4f9848:c.instructions+=1;goto B4f9848;
case 0x4f984e:goto L4f984e;
case 0x4f9853:c.instructions+=9;goto B4f9853;
case 0x4f9856:c.instructions+=8;goto B4f9856;
case 0x4f985d:c.instructions+=7;goto B4f985d;
case 0x4f9863:c.instructions+=6;goto B4f9863;
case 0x4f9869:c.instructions+=5;goto B4f9869;
case 0x4f986b:c.instructions+=4;goto B4f986b;
case 0x4f986e:c.instructions+=3;goto B4f986e;
case 0x4f9870:c.instructions+=2;goto B4f9870;
case 0x4f9876:c.instructions+=1;goto B4f9876;
case 0x4f987c:goto L4f987c;
case 0x4f987f:c.instructions+=4;goto B4f987f;
case 0x4f9882:c.instructions+=3;goto B4f9882;
case 0x4f9884:c.instructions+=2;goto B4f9884;
case 0x4f9885:c.instructions+=1;goto B4f9885;
case 0x4f9888:goto L4f9888;
case 0x4f988b:c.instructions+=3;goto B4f988b;
case 0x4f988c:c.instructions+=2;goto B4f988c;
case 0x4f9891:c.instructions+=1;goto B4f9891;
case 0x4f9896:goto L4f9896;
case 0x4f9899:c.instructions+=5;goto B4f9899;
case 0x4f989a:c.instructions+=4;goto B4f989a;
case 0x4f98a1:c.instructions+=3;goto B4f98a1;
case 0x4f98a2:c.instructions+=2;goto B4f98a2;
case 0x4f98a3:c.instructions+=1;goto B4f98a3;
case 0x4f98b0:goto L4f98b0;
case 0x4f98b4:c.instructions+=12;goto B4f98b4;
case 0x4f98b8:c.instructions+=11;goto B4f98b8;
case 0x4f98b9:c.instructions+=10;goto B4f98b9;
case 0x4f98ba:c.instructions+=9;goto B4f98ba;
case 0x4f98be:c.instructions+=8;goto B4f98be;
case 0x4f98c0:c.instructions+=7;goto B4f98c0;
case 0x4f98c4:c.instructions+=6;goto B4f98c4;
case 0x4f98c5:c.instructions+=5;goto B4f98c5;
case 0x4f98c6:c.instructions+=4;goto B4f98c6;
case 0x4f98c7:c.instructions+=3;goto B4f98c7;
case 0x4f98c8:c.instructions+=2;goto B4f98c8;
case 0x4f98ca:c.instructions+=1;goto B4f98ca;
case 0x4f98cf:goto L4f98cf;
case 0x4f98d5:c.instructions+=1;goto B4f98d5;
case 0x4f98d7:goto L4f98d7;
case 0x4f98dd:c.instructions+=1;goto B4f98dd;
case 0x4f98df:goto L4f98df;
case 0x4f98e9:c.instructions+=3;goto B4f98e9;
case 0x4f98ec:c.instructions+=2;goto B4f98ec;
case 0x4f98ed:c.instructions+=1;goto B4f98ed;
case 0x4f98f2:goto L4f98f2;
case 0x4f98f5:c.instructions+=3;goto B4f98f5;
case 0x4f98f6:c.instructions+=2;goto B4f98f6;
case 0x4f98f7:c.instructions+=1;goto B4f98f7;
case 0x4f98fa:goto L4f98fa;
case 0x4f98fd:c.instructions+=3;goto B4f98fd;
case 0x4f98fe:c.instructions+=2;goto B4f98fe;
case 0x4f9903:c.instructions+=1;goto B4f9903;
case 0x4f9908:goto L4f9908;
case 0x4f990b:c.instructions+=5;goto B4f990b;
case 0x4f990d:c.instructions+=4;goto B4f990d;
case 0x4f9912:c.instructions+=3;goto B4f9912;
case 0x4f9917:c.instructions+=2;goto B4f9917;
case 0x4f9918:c.instructions+=1;goto B4f9918;
case 0x4f991d:goto L4f991d;
case 0x4f9920:goto L4f9920;
case 0x4f9921:c.instructions+=2;goto B4f9921;
case 0x4f9922:c.instructions+=1;goto B4f9922;
case 0x4f9930:goto L4f9930;
case 0x4f9932:c.instructions+=12;goto B4f9932;
case 0x4f9937:c.instructions+=11;goto B4f9937;
case 0x4f993d:c.instructions+=10;goto B4f993d;
case 0x4f993e:c.instructions+=9;goto B4f993e;
case 0x4f9945:c.instructions+=8;goto B4f9945;
case 0x4f9946:c.instructions+=7;goto B4f9946;
case 0x4f994a:c.instructions+=6;goto B4f994a;
case 0x4f994b:c.instructions+=5;goto B4f994b;
case 0x4f994c:c.instructions+=4;goto B4f994c;
case 0x4f994e:c.instructions+=3;goto B4f994e;
case 0x4f994f:c.instructions+=2;goto B4f994f;
case 0x4f9953:c.instructions+=1;goto B4f9953;
case 0x4f9958:goto L4f9958;
case 0x4f995d:c.instructions+=27;goto B4f995d;
case 0x4f9960:c.instructions+=26;goto B4f9960;
case 0x4f9962:c.instructions+=25;goto B4f9962;
case 0x4f9968:c.instructions+=24;goto B4f9968;
case 0x4f996b:c.instructions+=23;goto B4f996b;
case 0x4f996f:c.instructions+=22;goto B4f996f;
case 0x4f9971:c.instructions+=21;goto B4f9971;
case 0x4f9974:c.instructions+=20;goto B4f9974;
case 0x4f9977:c.instructions+=19;goto B4f9977;
case 0x4f9978:c.instructions+=18;goto B4f9978;
case 0x4f9979:c.instructions+=17;goto B4f9979;
case 0x4f997a:c.instructions+=16;goto B4f997a;
case 0x4f997f:c.instructions+=15;goto B4f997f;
case 0x4f9983:c.instructions+=14;goto B4f9983;
case 0x4f9989:c.instructions+=13;goto B4f9989;
case 0x4f998a:c.instructions+=12;goto B4f998a;
case 0x4f9990:c.instructions+=11;goto B4f9990;
case 0x4f9993:c.instructions+=10;goto B4f9993;
case 0x4f9996:c.instructions+=9;goto B4f9996;
case 0x4f9999:c.instructions+=8;goto B4f9999;
case 0x4f999c:c.instructions+=7;goto B4f999c;
case 0x4f999f:c.instructions+=6;goto B4f999f;
case 0x4f99a2:c.instructions+=5;goto B4f99a2;
case 0x4f99a5:c.instructions+=4;goto B4f99a5;
case 0x4f99a8:c.instructions+=3;goto B4f99a8;
case 0x4f99ab:c.instructions+=2;goto B4f99ab;
case 0x4f99b1:c.instructions+=1;goto B4f99b1;
case 0x4f99b6:goto L4f99b6;
case 0x4f99bc:c.instructions+=5;goto B4f99bc;
case 0x4f99c2:c.instructions+=4;goto B4f99c2;
case 0x4f99c8:c.instructions+=3;goto B4f99c8;
case 0x4f99ce:c.instructions+=2;goto B4f99ce;
case 0x4f99d4:c.instructions+=1;goto B4f99d4;
case 0x4f99d9:goto L4f99d9;
case 0x4f99df:c.instructions+=2;goto B4f99df;
case 0x4f99e4:c.instructions+=1;goto B4f99e4;
case 0x4f99e9:goto L4f99e9;
case 0x4f99ef:c.instructions+=2;goto B4f99ef;
case 0x4f99f4:c.instructions+=1;goto B4f99f4;
case 0x4f99f9:goto L4f99f9;
case 0x4f99fb:c.instructions+=7;goto B4f99fb;
case 0x4f9a00:c.instructions+=6;goto B4f9a00;
case 0x4f9a06:c.instructions+=5;goto B4f9a06;
case 0x4f9a0d:c.instructions+=4;goto B4f9a0d;
case 0x4f9a14:c.instructions+=3;goto B4f9a14;
case 0x4f9a1b:c.instructions+=2;goto B4f9a1b;
case 0x4f9a21:c.instructions+=1;goto B4f9a21;
case 0x4f9a26:goto L4f9a26;
case 0x4f9a28:c.instructions+=1;goto B4f9a28;
case 0x4f9a2d:goto L4f9a2d;
case 0x4f9a32:c.instructions+=2;goto B4f9a32;
case 0x4f9a36:c.instructions+=1;goto B4f9a36;
case 0x4f9a3b:goto L4f9a3b;
case 0x4f9a3e:c.instructions+=2;goto B4f9a3e;
case 0x4f9a40:c.instructions+=1;goto B4f9a40;
case 0x4f9a42:goto L4f9a42;
case 0x4f9a43:c.instructions+=5;goto B4f9a43;
case 0x4f9a44:c.instructions+=4;goto B4f9a44;
case 0x4f9a45:c.instructions+=3;goto B4f9a45;
case 0x4f9a4a:c.instructions+=2;goto B4f9a4a;
case 0x4f9a4b:c.instructions+=1;goto B4f9a4b;
case 0x4f9a50:goto L4f9a50;
case 0x4f9a53:goto L4f9a53;
case 0x4f9a56:c.instructions+=5;goto B4f9a56;
case 0x4f9a57:c.instructions+=4;goto B4f9a57;
case 0x4f9a59:c.instructions+=3;goto B4f9a59;
case 0x4f9a60:c.instructions+=2;goto B4f9a60;
case 0x4f9a63:c.instructions+=1;goto B4f9a63;
case 0x4f9a68:goto L4f9a68;
case 0x4f9a69:c.instructions+=2;goto B4f9a69;
case 0x4f9a6b:c.instructions+=1;goto B4f9a6b;
case 0x4f9a70:goto L4f9a70;
case 0x4f9a75:goto L4f9a75;
case 0x4f9a76:c.instructions+=1;goto B4f9a76;
case 0x4f9a7b:goto L4f9a7b;
case 0x4f9a7e:c.instructions+=2;goto B4f9a7e;
case 0x4f9a80:c.instructions+=1;goto B4f9a80;
case 0x4f9a82:goto L4f9a82;
case 0x4f9a85:c.instructions+=4;goto B4f9a85;
case 0x4f9a86:c.instructions+=3;goto B4f9a86;
case 0x4f9a8b:c.instructions+=2;goto B4f9a8b;
case 0x4f9a8c:c.instructions+=1;goto B4f9a8c;
case 0x4f9a91:goto L4f9a91;
case 0x4f9a92:c.instructions+=1;goto B4f9a92;
case 0x4f9a97:goto L4f9a97;
case 0x4f9a9a:goto L4f9a9a;
case 0x4f9aa0:c.instructions+=1;goto B4f9aa0;
case 0x4f9aa5:goto L4f9aa5;
case 0x4f9aa8:c.instructions+=5;goto B4f9aa8;
case 0x4f9aab:c.instructions+=4;goto B4f9aab;
case 0x4f9ab1:c.instructions+=3;goto B4f9ab1;
case 0x4f9ab2:c.instructions+=2;goto B4f9ab2;
case 0x4f9ab3:c.instructions+=1;goto B4f9ab3;
case 0x4f9ab8:goto L4f9ab8;
case 0x4f9abc:c.instructions+=6;goto B4f9abc;
case 0x4f9abe:c.instructions+=5;goto B4f9abe;
case 0x4f9abf:c.instructions+=4;goto B4f9abf;
case 0x4f9ac0:c.instructions+=3;goto B4f9ac0;
case 0x4f9ac7:c.instructions+=2;goto B4f9ac7;
case 0x4f9aca:c.instructions+=1;goto B4f9aca;
case 0x4f9ad0:goto L4f9ad0;
case 0x4f9ad2:c.instructions+=12;goto B4f9ad2;
case 0x4f9ad7:c.instructions+=11;goto B4f9ad7;
case 0x4f9add:c.instructions+=10;goto B4f9add;
case 0x4f9ade:c.instructions+=9;goto B4f9ade;
case 0x4f9ae5:c.instructions+=8;goto B4f9ae5;
case 0x4f9ae6:c.instructions+=7;goto B4f9ae6;
case 0x4f9aea:c.instructions+=6;goto B4f9aea;
case 0x4f9aeb:c.instructions+=5;goto B4f9aeb;
case 0x4f9aec:c.instructions+=4;goto B4f9aec;
case 0x4f9aee:c.instructions+=3;goto B4f9aee;
case 0x4f9aef:c.instructions+=2;goto B4f9aef;
case 0x4f9af3:c.instructions+=1;goto B4f9af3;
case 0x4f9af8:goto L4f9af8;
case 0x4f9afb:c.instructions+=17;goto B4f9afb;
case 0x4f9afd:c.instructions+=16;goto B4f9afd;
case 0x4f9b03:c.instructions+=15;goto B4f9b03;
case 0x4f9b07:c.instructions+=14;goto B4f9b07;
case 0x4f9b09:c.instructions+=13;goto B4f9b09;
case 0x4f9b0c:c.instructions+=12;goto B4f9b0c;
case 0x4f9b0d:c.instructions+=11;goto B4f9b0d;
case 0x4f9b0e:c.instructions+=10;goto B4f9b0e;
case 0x4f9b13:c.instructions+=9;goto B4f9b13;
case 0x4f9b14:c.instructions+=8;goto B4f9b14;
case 0x4f9b17:c.instructions+=7;goto B4f9b17;
case 0x4f9b1a:c.instructions+=6;goto B4f9b1a;
case 0x4f9b1d:c.instructions+=5;goto B4f9b1d;
case 0x4f9b22:c.instructions+=4;goto B4f9b22;
case 0x4f9b23:c.instructions+=3;goto B4f9b23;
case 0x4f9b26:c.instructions+=2;goto B4f9b26;
case 0x4f9b2b:c.instructions+=1;goto B4f9b2b;
case 0x4f9b30:goto L4f9b30;
case 0x4f9b36:c.instructions+=5;goto B4f9b36;
case 0x4f9b3c:c.instructions+=4;goto B4f9b3c;
case 0x4f9b42:c.instructions+=3;goto B4f9b42;
case 0x4f9b48:c.instructions+=2;goto B4f9b48;
case 0x4f9b4e:c.instructions+=1;goto B4f9b4e;
case 0x4f9b53:goto L4f9b53;
case 0x4f9b59:c.instructions+=2;goto B4f9b59;
case 0x4f9b5e:c.instructions+=1;goto B4f9b5e;
case 0x4f9b63:goto L4f9b63;
case 0x4f9b69:c.instructions+=2;goto B4f9b69;
case 0x4f9b6e:c.instructions+=1;goto B4f9b6e;
case 0x4f9b73:goto L4f9b73;
case 0x4f9b78:c.instructions+=6;goto B4f9b78;
case 0x4f9b7d:c.instructions+=5;goto B4f9b7d;
case 0x4f9b87:c.instructions+=4;goto B4f9b87;
case 0x4f9b8e:c.instructions+=3;goto B4f9b8e;
case 0x4f9b95:c.instructions+=2;goto B4f9b95;
case 0x4f9b9b:c.instructions+=1;goto B4f9b9b;
case 0x4f9ba0:goto L4f9ba0;
case 0x4f9ba2:c.instructions+=1;goto B4f9ba2;
case 0x4f9ba7:goto L4f9ba7;
case 0x4f9ba9:c.instructions+=1;goto B4f9ba9;
case 0x4f9bae:goto L4f9bae;
case 0x4f9bb3:c.instructions+=2;goto B4f9bb3;
case 0x4f9bb7:c.instructions+=1;goto B4f9bb7;
case 0x4f9bbc:goto L4f9bbc;
case 0x4f9bbf:c.instructions+=2;goto B4f9bbf;
case 0x4f9bc1:c.instructions+=1;goto B4f9bc1;
case 0x4f9bc3:goto L4f9bc3;
case 0x4f9bc4:c.instructions+=5;goto B4f9bc4;
case 0x4f9bc5:c.instructions+=4;goto B4f9bc5;
case 0x4f9bc6:c.instructions+=3;goto B4f9bc6;
case 0x4f9bcb:c.instructions+=2;goto B4f9bcb;
case 0x4f9bcc:c.instructions+=1;goto B4f9bcc;
case 0x4f9bd1:goto L4f9bd1;
case 0x4f9bd4:goto L4f9bd4;
case 0x4f9bd7:c.instructions+=4;goto B4f9bd7;
case 0x4f9bd8:c.instructions+=3;goto B4f9bd8;
case 0x4f9bdf:c.instructions+=2;goto B4f9bdf;
case 0x4f9be2:c.instructions+=1;goto B4f9be2;
case 0x4f9be7:goto L4f9be7;
case 0x4f9be8:c.instructions+=2;goto B4f9be8;
case 0x4f9bed:c.instructions+=1;goto B4f9bed;
case 0x4f9bf2:goto L4f9bf2;
case 0x4f9bf6:c.instructions+=6;goto B4f9bf6;
case 0x4f9bf8:c.instructions+=5;goto B4f9bf8;
case 0x4f9bf9:c.instructions+=4;goto B4f9bf9;
case 0x4f9bfa:c.instructions+=3;goto B4f9bfa;
case 0x4f9c01:c.instructions+=2;goto B4f9c01;
case 0x4f9c04:c.instructions+=1;goto B4f9c04;
case 0x4f9c10:goto L4f9c10;
case 0x4f9c12:c.instructions+=7;goto B4f9c12;
case 0x4f9c17:c.instructions+=6;goto B4f9c17;
case 0x4f9c1d:c.instructions+=5;goto B4f9c1d;
case 0x4f9c1e:c.instructions+=4;goto B4f9c1e;
case 0x4f9c25:c.instructions+=3;goto B4f9c25;
case 0x4f9c26:c.instructions+=2;goto B4f9c26;
case 0x4f9c28:c.instructions+=1;goto B4f9c28;
case 0x4f9c2d:goto L4f9c2d;
case 0x4f9c30:c.instructions+=4;goto B4f9c30;
case 0x4f9c34:c.instructions+=3;goto B4f9c34;
case 0x4f9c36:c.instructions+=2;goto B4f9c36;
case 0x4f9c3e:c.instructions+=1;goto B4f9c3e;
case 0x4f9c40:goto L4f9c40;
case 0x4f9c44:c.instructions+=3;goto B4f9c44;
case 0x4f9c45:c.instructions+=2;goto B4f9c45;
case 0x4f9c47:c.instructions+=1;goto B4f9c47;
case 0x4f9c4c:goto L4f9c4c;
case 0x4f9c50:c.instructions+=3;goto B4f9c50;
case 0x4f9c57:c.instructions+=2;goto B4f9c57;
case 0x4f9c5a:c.instructions+=1;goto B4f9c5a;
case 0x4f9c5b:goto L4f9c5b;
case 0x4f9c5f:c.instructions+=4;goto B4f9c5f;
case 0x4f9c61:c.instructions+=3;goto B4f9c61;
case 0x4f9c68:c.instructions+=2;goto B4f9c68;
case 0x4f9c6b:c.instructions+=1;goto B4f9c6b;
case 0x4f9c70:goto L4f9c70;
case 0x4f9c72:c.instructions+=15;goto B4f9c72;
case 0x4f9c77:c.instructions+=14;goto B4f9c77;
case 0x4f9c7d:c.instructions+=13;goto B4f9c7d;
case 0x4f9c7e:c.instructions+=12;goto B4f9c7e;
case 0x4f9c85:c.instructions+=11;goto B4f9c85;
case 0x4f9c86:c.instructions+=10;goto B4f9c86;
case 0x4f9c87:c.instructions+=9;goto B4f9c87;
case 0x4f9c88:c.instructions+=8;goto B4f9c88;
case 0x4f9c89:c.instructions+=7;goto B4f9c89;
case 0x4f9c8b:c.instructions+=6;goto B4f9c8b;
case 0x4f9c8f:c.instructions+=5;goto B4f9c8f;
case 0x4f9c95:c.instructions+=4;goto B4f9c95;
case 0x4f9c98:c.instructions+=3;goto B4f9c98;
case 0x4f9c9a:c.instructions+=2;goto B4f9c9a;
case 0x4f9ca2:c.instructions+=1;goto B4f9ca2;
case 0x4f9ca4:goto L4f9ca4;
case 0x4f9ca6:c.instructions+=2;goto B4f9ca6;
case 0x4f9ca8:c.instructions+=1;goto B4f9ca8;
case 0x4f9caa:goto L4f9caa;
case 0x4f9cad:c.instructions+=2;goto B4f9cad;
case 0x4f9caf:c.instructions+=1;goto B4f9caf;
case 0x4f9cb1:goto L4f9cb1;
case 0x4f9cb4:c.instructions+=3;goto B4f9cb4;
case 0x4f9cb7:c.instructions+=2;goto B4f9cb7;
case 0x4f9cb9:c.instructions+=1;goto B4f9cb9;
case 0x4f9cbb:goto L4f9cbb;
case 0x4f9cc0:goto L4f9cc0;
case 0x4f9cc2:c.instructions+=5;goto B4f9cc2;
case 0x4f9cc5:c.instructions+=4;goto B4f9cc5;
case 0x4f9cc7:c.instructions+=3;goto B4f9cc7;
case 0x4f9cc8:c.instructions+=2;goto B4f9cc8;
case 0x4f9ccb:c.instructions+=1;goto B4f9ccb;
case 0x4f9cd0:goto L4f9cd0;
case 0x4f9cd2:c.instructions+=3;goto B4f9cd2;
case 0x4f9cd5:c.instructions+=2;goto B4f9cd5;
case 0x4f9cd7:c.instructions+=1;goto B4f9cd7;
case 0x4f9cd9:goto L4f9cd9;
case 0x4f9cda:c.instructions+=1;goto B4f9cda;
case 0x4f9cdf:goto L4f9cdf;
case 0x4f9ce2:goto L4f9ce2;
case 0x4f9ce5:c.instructions+=4;goto B4f9ce5;
case 0x4f9ce8:c.instructions+=3;goto B4f9ce8;
case 0x4f9cea:c.instructions+=2;goto B4f9cea;
case 0x4f9cef:c.instructions+=1;goto B4f9cef;
case 0x4f9cf1:goto L4f9cf1;
case 0x4f9cf3:c.instructions+=5;goto B4f9cf3;
case 0x4f9cf6:c.instructions+=4;goto B4f9cf6;
case 0x4f9cf8:c.instructions+=3;goto B4f9cf8;
case 0x4f9cf9:c.instructions+=2;goto B4f9cf9;
case 0x4f9cfc:c.instructions+=1;goto B4f9cfc;
case 0x4f9d01:goto L4f9d01;
case 0x4f9d03:c.instructions+=3;goto B4f9d03;
case 0x4f9d06:c.instructions+=2;goto B4f9d06;
case 0x4f9d08:c.instructions+=1;goto B4f9d08;
case 0x4f9d0a:goto L4f9d0a;
case 0x4f9d0c:c.instructions+=2;goto B4f9d0c;
case 0x4f9d14:c.instructions+=1;goto B4f9d14;
case 0x4f9d19:goto L4f9d19;
case 0x4f9d1d:c.instructions+=6;goto B4f9d1d;
case 0x4f9d1e:c.instructions+=5;goto B4f9d1e;
case 0x4f9d1f:c.instructions+=4;goto B4f9d1f;
case 0x4f9d20:c.instructions+=3;goto B4f9d20;
case 0x4f9d27:c.instructions+=2;goto B4f9d27;
case 0x4f9d2a:c.instructions+=1;goto B4f9d2a;
case 0x4f9d30:goto L4f9d30;
case 0x4f9d32:c.instructions+=7;goto B4f9d32;
case 0x4f9d37:c.instructions+=6;goto B4f9d37;
case 0x4f9d3d:c.instructions+=5;goto B4f9d3d;
case 0x4f9d3e:c.instructions+=4;goto B4f9d3e;
case 0x4f9d45:c.instructions+=3;goto B4f9d45;
case 0x4f9d46:c.instructions+=2;goto B4f9d46;
case 0x4f9d4b:c.instructions+=1;goto B4f9d4b;
case 0x4f9d50:goto L4f9d50;
case 0x4f9d53:c.instructions+=4;goto B4f9d53;
case 0x4f9d57:c.instructions+=3;goto B4f9d57;
case 0x4f9d59:c.instructions+=2;goto B4f9d59;
case 0x4f9d61:c.instructions+=1;goto B4f9d61;
case 0x4f9d63:goto L4f9d63;
case 0x4f9d67:c.instructions+=3;goto B4f9d67;
case 0x4f9d68:c.instructions+=2;goto B4f9d68;
case 0x4f9d6a:c.instructions+=1;goto B4f9d6a;
case 0x4f9d6f:goto L4f9d6f;
case 0x4f9d73:c.instructions+=3;goto B4f9d73;
case 0x4f9d7a:c.instructions+=2;goto B4f9d7a;
case 0x4f9d7d:c.instructions+=1;goto B4f9d7d;
case 0x4f9d7e:goto L4f9d7e;
case 0x4f9d82:c.instructions+=4;goto B4f9d82;
case 0x4f9d84:c.instructions+=3;goto B4f9d84;
case 0x4f9d8b:c.instructions+=2;goto B4f9d8b;
case 0x4f9d8e:c.instructions+=1;goto B4f9d8e;
case 0x4f9d90:goto L4f9d90;
case 0x4f9d92:c.instructions+=13;goto B4f9d92;
case 0x4f9d97:c.instructions+=12;goto B4f9d97;
case 0x4f9d9d:c.instructions+=11;goto B4f9d9d;
case 0x4f9d9e:c.instructions+=10;goto B4f9d9e;
case 0x4f9da5:c.instructions+=9;goto B4f9da5;
case 0x4f9da6:c.instructions+=8;goto B4f9da6;
case 0x4f9daa:c.instructions+=7;goto B4f9daa;
case 0x4f9dab:c.instructions+=6;goto B4f9dab;
case 0x4f9dac:c.instructions+=5;goto B4f9dac;
case 0x4f9dad:c.instructions+=4;goto B4f9dad;
case 0x4f9daf:c.instructions+=3;goto B4f9daf;
case 0x4f9db0:c.instructions+=2;goto B4f9db0;
case 0x4f9db4:c.instructions+=1;goto B4f9db4;
case 0x4f9db9:goto L4f9db9;
case 0x4f9dbb:c.instructions+=21;goto B4f9dbb;
case 0x4f9dbe:c.instructions+=20;goto B4f9dbe;
case 0x4f9dc4:c.instructions+=19;goto B4f9dc4;
case 0x4f9dc7:c.instructions+=18;goto B4f9dc7;
case 0x4f9dcb:c.instructions+=17;goto B4f9dcb;
case 0x4f9dcf:c.instructions+=16;goto B4f9dcf;
case 0x4f9dd3:c.instructions+=15;goto B4f9dd3;
case 0x4f9dd5:c.instructions+=14;goto B4f9dd5;
case 0x4f9dd8:c.instructions+=13;goto B4f9dd8;
case 0x4f9ddb:c.instructions+=12;goto B4f9ddb;
case 0x4f9ddc:c.instructions+=11;goto B4f9ddc;
case 0x4f9ddd:c.instructions+=10;goto B4f9ddd;
case 0x4f9dde:c.instructions+=9;goto B4f9dde;
case 0x4f9de3:c.instructions+=8;goto B4f9de3;
case 0x4f9de4:c.instructions+=7;goto B4f9de4;
case 0x4f9de7:c.instructions+=6;goto B4f9de7;
case 0x4f9dec:c.instructions+=5;goto B4f9dec;
case 0x4f9def:c.instructions+=4;goto B4f9def;
case 0x4f9df2:c.instructions+=3;goto B4f9df2;
case 0x4f9df9:c.instructions+=2;goto B4f9df9;
case 0x4f9dfc:c.instructions+=1;goto B4f9dfc;
case 0x4f9e01:goto L4f9e01;
case 0x4f9e07:c.instructions+=4;goto B4f9e07;
case 0x4f9e0d:c.instructions+=3;goto B4f9e0d;
case 0x4f9e13:c.instructions+=2;goto B4f9e13;
case 0x4f9e19:c.instructions+=1;goto B4f9e19;
case 0x4f9e1e:goto L4f9e1e;
case 0x4f9e24:c.instructions+=2;goto B4f9e24;
case 0x4f9e29:c.instructions+=1;goto B4f9e29;
case 0x4f9e2e:goto L4f9e2e;
case 0x4f9e34:c.instructions+=2;goto B4f9e34;
case 0x4f9e39:c.instructions+=1;goto B4f9e39;
case 0x4f9e3e:goto L4f9e3e;
case 0x4f9e45:c.instructions+=16;goto B4f9e45;
case 0x4f9e4b:c.instructions+=15;goto B4f9e4b;
case 0x4f9e51:c.instructions+=14;goto B4f9e51;
case 0x4f9e57:c.instructions+=13;goto B4f9e57;
case 0x4f9e5d:c.instructions+=12;goto B4f9e5d;
case 0x4f9e67:c.instructions+=11;goto B4f9e67;
case 0x4f9e6d:c.instructions+=10;goto B4f9e6d;
case 0x4f9e73:c.instructions+=9;goto B4f9e73;
case 0x4f9e78:c.instructions+=8;goto B4f9e78;
case 0x4f9e7e:c.instructions+=7;goto B4f9e7e;
case 0x4f9e84:c.instructions+=6;goto B4f9e84;
case 0x4f9e8a:c.instructions+=5;goto B4f9e8a;
case 0x4f9e8d:c.instructions+=4;goto B4f9e8d;
case 0x4f9e92:c.instructions+=3;goto B4f9e92;
case 0x4f9e97:c.instructions+=2;goto B4f9e97;
case 0x4f9e9d:c.instructions+=1;goto B4f9e9d;
case 0x4f9ea3:goto L4f9ea3;
case 0x4f9eaa:c.instructions+=1;goto B4f9eaa;
case 0x4f9eb1:goto L4f9eb1;
case 0x4f9eb4:c.instructions+=1;goto B4f9eb4;
case 0x4f9eb6:goto L4f9eb6;
case 0x4f9eb9:c.instructions+=1;goto B4f9eb9;
case 0x4f9ebb:goto L4f9ebb;
case 0x4f9ebe:c.instructions+=3;goto B4f9ebe;
case 0x4f9ec3:c.instructions+=2;goto B4f9ec3;
case 0x4f9ec4:c.instructions+=1;goto B4f9ec4;
case 0x4f9ec9:goto L4f9ec9;
case 0x4f9eca:c.instructions+=1;goto B4f9eca;
case 0x4f9ecf:goto L4f9ecf;
case 0x4f9ed2:c.instructions+=3;goto B4f9ed2;
case 0x4f9ed7:c.instructions+=2;goto B4f9ed7;
case 0x4f9ed8:c.instructions+=1;goto B4f9ed8;
case 0x4f9edd:goto L4f9edd;
case 0x4f9ede:c.instructions+=1;goto B4f9ede;
case 0x4f9ee3:goto L4f9ee3;
case 0x4f9ee6:goto L4f9ee6;
case 0x4f9eed:c.instructions+=1;goto B4f9eed;
case 0x4f9eef:goto L4f9eef;
case 0x4f9ef6:c.instructions+=1;goto B4f9ef6;
case 0x4f9ef8:goto L4f9ef8;
case 0x4f9efb:c.instructions+=1;goto B4f9efb;
case 0x4f9efd:goto L4f9efd;
case 0x4f9f00:c.instructions+=1;goto B4f9f00;
case 0x4f9f02:goto L4f9f02;
case 0x4f9f08:c.instructions+=1;goto B4f9f08;
case 0x4f9f12:goto L4f9f12;
case 0x4f9f19:c.instructions+=1;goto B4f9f19;
case 0x4f9f1b:goto L4f9f1b;
case 0x4f9f1e:c.instructions+=1;goto B4f9f1e;
case 0x4f9f20:goto L4f9f20;
case 0x4f9f23:c.instructions+=1;goto B4f9f23;
case 0x4f9f25:goto L4f9f25;
case 0x4f9f2b:c.instructions+=1;goto B4f9f2b;
case 0x4f9f35:goto L4f9f35;
case 0x4f9f3c:goto L4f9f3c;
case 0x4f9f3f:c.instructions+=6;goto B4f9f3f;
case 0x4f9f40:c.instructions+=5;goto B4f9f40;
case 0x4f9f46:c.instructions+=4;goto B4f9f46;
case 0x4f9f49:c.instructions+=3;goto B4f9f49;
case 0x4f9f4e:c.instructions+=2;goto B4f9f4e;
case 0x4f9f4f:c.instructions+=1;goto B4f9f4f;
case 0x4f9f54:goto L4f9f54;
case 0x4f9f55:c.instructions+=1;goto B4f9f55;
case 0x4f9f5a:goto L4f9f5a;
case 0x4f9f5d:c.instructions+=3;goto B4f9f5d;
case 0x4f9f5f:c.instructions+=2;goto B4f9f5f;
case 0x4f9f65:c.instructions+=1;goto B4f9f65;
case 0x4f9f6a:goto L4f9f6a;
case 0x4f9f6f:c.instructions+=2;goto B4f9f6f;
case 0x4f9f72:c.instructions+=1;goto B4f9f72;
case 0x4f9f74:goto L4f9f74;
case 0x4f9f79:c.instructions+=1;goto B4f9f79;
case 0x4f9f7b:goto L4f9f7b;
case 0x4f9f82:c.instructions+=1;goto B4f9f82;
case 0x4f9f88:goto L4f9f88;
case 0x4f9f8e:c.instructions+=5;goto B4f9f8e;
case 0x4f9f94:c.instructions+=4;goto B4f9f94;
case 0x4f9f99:c.instructions+=3;goto B4f9f99;
case 0x4f9f9f:c.instructions+=2;goto B4f9f9f;
case 0x4f9fa4:c.instructions+=1;goto B4f9fa4;
case 0x4f9fa9:goto L4f9fa9;
case 0x4f9fac:c.instructions+=3;goto B4f9fac;
case 0x4f9fb1:c.instructions+=2;goto B4f9fb1;
case 0x4f9fb2:c.instructions+=1;goto B4f9fb2;
case 0x4f9fb7:goto L4f9fb7;
case 0x4f9fba:c.instructions+=3;goto B4f9fba;
case 0x4f9fbc:c.instructions+=2;goto B4f9fbc;
case 0x4f9fc1:c.instructions+=1;goto B4f9fc1;
case 0x4f9fc3:goto L4f9fc3;
case 0x4f9fc9:c.instructions+=2;goto B4f9fc9;
case 0x4f9fd3:c.instructions+=1;goto B4f9fd3;
case 0x4f9fd5:goto L4f9fd5;
case 0x4f9fda:c.instructions+=4;goto B4f9fda;
case 0x4f9fe0:c.instructions+=3;goto B4f9fe0;
case 0x4f9fe6:c.instructions+=2;goto B4f9fe6;
case 0x4f9fec:c.instructions+=1;goto B4f9fec;
case 0x4f9ff2:goto L4f9ff2;
case 0x4f9ff7:c.instructions+=2;goto B4f9ff7;
case 0x4f9ff9:c.instructions+=1;goto B4f9ff9;
case 0x4f9ffb:goto L4f9ffb;
case 0x4f9ffc:c.instructions+=2;goto B4f9ffc;
case 0x4f9ffe:c.instructions+=1;goto B4f9ffe;
default:missing_instruction(c.pc);}
B4f9001:L4f9001:{c.instructions+=4;NFSU2_TR(0x4f9001);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9002:{NFSU2_TR(0x4f9002);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9003:{NFSU2_TR(0x4f9003);
__builtin_memmove((R+4),(R+0),4);
}
B4f9005:{NFSU2_TR(0x4f9005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f900aull));
TAIL_STATIC(0x4f83d0u,4f8);
}
B4f900a:L4f900a:{c.instructions+=1;NFSU2_TR(0x4f900a);
{goto L4f900e;}
}
B4f900c:L4f900c:{c.instructions+=1;NFSU2_TR(0x4f900c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f900e:L4f900e:{c.instructions+=4;NFSU2_TR(0x4f900e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9010:{NFSU2_TR(0x4f9010);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9018:{NFSU2_TR(0x4f9018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f901b:{NFSU2_TR(0x4f901b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f904f;}}
}
B4f901d:L4f901d:{c.instructions+=2;NFSU2_TR(0x4f901d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f901f:{NFSU2_TR(0x4f901f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9024ull));
TAIL_STATIC(0x575620u,575);
}
B4f9024:L4f9024:{c.instructions+=5;NFSU2_TR(0x4f9024);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9027:{NFSU2_TR(0x4f9027);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f902b:{NFSU2_TR(0x4f902b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f902d:{NFSU2_TR(0x4f902d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9035:{NFSU2_TR(0x4f9035);
if(r1(R+518)){{goto L4f9042;}}
}
B4f9037:L4f9037:{c.instructions+=4;NFSU2_TR(0x4f9037);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9038:{NFSU2_TR(0x4f9038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9039:{NFSU2_TR(0x4f9039);
__builtin_memmove((R+4),(R+0),4);
}
B4f903b:{NFSU2_TR(0x4f903b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9040ull));
TAIL_STATIC(0x4f73e0u,4f7);
}
B4f9040:L4f9040:{c.instructions+=1;NFSU2_TR(0x4f9040);
{goto L4f9044;}
}
B4f9042:L4f9042:{c.instructions+=1;NFSU2_TR(0x4f9042);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9044:L4f9044:{c.instructions+=2;NFSU2_TR(0x4f9044);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f904c:{NFSU2_TR(0x4f904c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f904f:L4f904f:{c.instructions+=2;NFSU2_TR(0x4f904f);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9051:{NFSU2_TR(0x4f9051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9056ull));
TAIL_STATIC(0x575620u,575);
}
B4f9056:L4f9056:{c.instructions+=5;NFSU2_TR(0x4f9056);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9059:{NFSU2_TR(0x4f9059);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f905d:{NFSU2_TR(0x4f905d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f905f:{NFSU2_TR(0x4f905f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9067:{NFSU2_TR(0x4f9067);
if(r1(R+518)){{goto L4f9074;}}
}
B4f9069:L4f9069:{c.instructions+=4;NFSU2_TR(0x4f9069);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f906a:{NFSU2_TR(0x4f906a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f906b:{NFSU2_TR(0x4f906b);
__builtin_memmove((R+4),(R+0),4);
}
B4f906d:{NFSU2_TR(0x4f906d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9072ull));
TAIL_STATIC(0x4f86d0u,4f8);
}
B4f9072:L4f9072:{c.instructions+=1;NFSU2_TR(0x4f9072);
{goto L4f9076;}
}
B4f9074:L4f9074:{c.instructions+=1;NFSU2_TR(0x4f9074);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9076:L4f9076:{c.instructions+=4;NFSU2_TR(0x4f9076);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9078:{NFSU2_TR(0x4f9078);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9080:{NFSU2_TR(0x4f9080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9083:{NFSU2_TR(0x4f9083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9088ull));
TAIL_STATIC(0x575620u,575);
}
B4f9088:L4f9088:{c.instructions+=5;NFSU2_TR(0x4f9088);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f908b:{NFSU2_TR(0x4f908b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f908f:{NFSU2_TR(0x4f908f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9091:{NFSU2_TR(0x4f9091);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9099:{NFSU2_TR(0x4f9099);
if(r1(R+518)){{goto L4f90a6;}}
}
B4f909b:L4f909b:{c.instructions+=4;NFSU2_TR(0x4f909b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f909c:{NFSU2_TR(0x4f909c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f909d:{NFSU2_TR(0x4f909d);
__builtin_memmove((R+4),(R+0),4);
}
B4f909f:{NFSU2_TR(0x4f909f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f90a4ull));
TAIL_STATIC(0x4f87e0u,4f8);
}
B4f90a4:L4f90a4:{c.instructions+=1;NFSU2_TR(0x4f90a4);
{goto L4f90a8;}
}
B4f90a6:L4f90a6:{c.instructions+=1;NFSU2_TR(0x4f90a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f90a8:L4f90a8:{c.instructions+=4;NFSU2_TR(0x4f90a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f90ab:{NFSU2_TR(0x4f90ab);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f90b1:{NFSU2_TR(0x4f90b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f90b9:{NFSU2_TR(0x4f90b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9182;}}
}
B4f90bf:L4f90bf:{c.instructions+=2;NFSU2_TR(0x4f90bf);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f90c6:{NFSU2_TR(0x4f90c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9182;}}
}
B4f90cc:L4f90cc:{c.instructions+=2;NFSU2_TR(0x4f90cc);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f90ce:{NFSU2_TR(0x4f90ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f90d3ull));
TAIL_STATIC(0x575620u,575);
}
B4f90d3:L4f90d3:{c.instructions+=5;NFSU2_TR(0x4f90d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f90d6:{NFSU2_TR(0x4f90d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f90da:{NFSU2_TR(0x4f90da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f90dc:{NFSU2_TR(0x4f90dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f90e4:{NFSU2_TR(0x4f90e4);
if(r1(R+518)){{goto L4f90f1;}}
}
B4f90e6:L4f90e6:{c.instructions+=4;NFSU2_TR(0x4f90e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f90e7:{NFSU2_TR(0x4f90e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f90e8:{NFSU2_TR(0x4f90e8);
__builtin_memmove((R+4),(R+0),4);
}
B4f90ea:{NFSU2_TR(0x4f90ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f90efull));
TAIL_STATIC(0x4f4e70u,4f4);
}
B4f90ef:L4f90ef:{c.instructions+=1;NFSU2_TR(0x4f90ef);
{goto L4f90f3;}
}
B4f90f1:L4f90f1:{c.instructions+=1;NFSU2_TR(0x4f90f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f90f3:L4f90f3:{c.instructions+=4;NFSU2_TR(0x4f90f3);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f90f5:{NFSU2_TR(0x4f90f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f90fd:{NFSU2_TR(0x4f90fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9100:{NFSU2_TR(0x4f9100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9105ull));
TAIL_STATIC(0x575620u,575);
}
B4f9105:L4f9105:{c.instructions+=5;NFSU2_TR(0x4f9105);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9108:{NFSU2_TR(0x4f9108);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f910c:{NFSU2_TR(0x4f910c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f910e:{NFSU2_TR(0x4f910e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9116:{NFSU2_TR(0x4f9116);
if(r1(R+518)){{goto L4f9123;}}
}
B4f9118:L4f9118:{c.instructions+=4;NFSU2_TR(0x4f9118);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9119:{NFSU2_TR(0x4f9119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f911a:{NFSU2_TR(0x4f911a);
__builtin_memmove((R+4),(R+0),4);
}
B4f911c:{NFSU2_TR(0x4f911c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9121ull));
TAIL_STATIC(0x4f5060u,4f5);
}
B4f9121:L4f9121:{c.instructions+=1;NFSU2_TR(0x4f9121);
{goto L4f9125;}
}
B4f9123:L4f9123:{c.instructions+=1;NFSU2_TR(0x4f9123);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9125:L4f9125:{c.instructions+=4;NFSU2_TR(0x4f9125);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9127:{NFSU2_TR(0x4f9127);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f912f:{NFSU2_TR(0x4f912f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9132:{NFSU2_TR(0x4f9132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9137ull));
TAIL_STATIC(0x575620u,575);
}
B4f9137:L4f9137:{c.instructions+=3;NFSU2_TR(0x4f9137);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f913a:{NFSU2_TR(0x4f913a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f913c:{NFSU2_TR(0x4f913c);
if(r1(R+518)){{goto L4f9148;}}
}
B4f913e:L4f913e:{c.instructions+=4;NFSU2_TR(0x4f913e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9141:{NFSU2_TR(0x4f9141);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f9143:{NFSU2_TR(0x4f9143);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9146:{NFSU2_TR(0x4f9146);
{goto L4f914a;}
}
B4f9148:L4f9148:{c.instructions+=1;NFSU2_TR(0x4f9148);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f914a:L4f914a:{c.instructions+=3;NFSU2_TR(0x4f914a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f914c:{NFSU2_TR(0x4f914c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f914f:{NFSU2_TR(0x4f914f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9154ull));
TAIL_STATIC(0x575620u,575);
}
B4f9154:L4f9154:{c.instructions+=5;NFSU2_TR(0x4f9154);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9157:{NFSU2_TR(0x4f9157);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f915b:{NFSU2_TR(0x4f915b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f915d:{NFSU2_TR(0x4f915d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9165:{NFSU2_TR(0x4f9165);
if(r1(R+518)){{goto L4f9172;}}
}
B4f9167:L4f9167:{c.instructions+=4;NFSU2_TR(0x4f9167);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9168:{NFSU2_TR(0x4f9168);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9169:{NFSU2_TR(0x4f9169);
__builtin_memmove((R+4),(R+0),4);
}
B4f916b:{NFSU2_TR(0x4f916b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9170ull));
TAIL_STATIC(0x4f4f10u,4f4);
}
B4f9170:L4f9170:{c.instructions+=1;NFSU2_TR(0x4f9170);
{goto L4f9174;}
}
B4f9172:L4f9172:{c.instructions+=1;NFSU2_TR(0x4f9172);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9174:L4f9174:{c.instructions+=2;NFSU2_TR(0x4f9174);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f917c:{NFSU2_TR(0x4f917c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9182:L4f9182:{c.instructions+=2;NFSU2_TR(0x4f9182);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9184:{NFSU2_TR(0x4f9184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9189ull));
TAIL_STATIC(0x575620u,575);
}
B4f9189:L4f9189:{c.instructions+=5;NFSU2_TR(0x4f9189);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f918c:{NFSU2_TR(0x4f918c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9190:{NFSU2_TR(0x4f9190);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9192:{NFSU2_TR(0x4f9192);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f919a:{NFSU2_TR(0x4f919a);
if(r1(R+518)){{goto L4f91a7;}}
}
B4f919c:L4f919c:{c.instructions+=4;NFSU2_TR(0x4f919c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f919d:{NFSU2_TR(0x4f919d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f919e:{NFSU2_TR(0x4f919e);
__builtin_memmove((R+4),(R+0),4);
}
B4f91a0:{NFSU2_TR(0x4f91a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f91a5ull));
TAIL_STATIC(0x4f89d0u,4f8);
}
B4f91a5:L4f91a5:{c.instructions+=1;NFSU2_TR(0x4f91a5);
{goto L4f91a9;}
}
B4f91a7:L4f91a7:{c.instructions+=1;NFSU2_TR(0x4f91a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f91a9:L4f91a9:{c.instructions+=4;NFSU2_TR(0x4f91a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f91b1:{NFSU2_TR(0x4f91b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f91b4:{NFSU2_TR(0x4f91b4);
w4(R+4,u32(0x89cf48ull));
}
B4f91b9:{NFSU2_TR(0x4f91b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f91beull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4f91be:L4f91be:{c.instructions+=2;NFSU2_TR(0x4f91be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f91c0:{NFSU2_TR(0x4f91c0);
if(r1(R+518)){{goto L4f9200;}}
}
B4f91c2:L4f91c2:{c.instructions+=2;NFSU2_TR(0x4f91c2);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f91c4:{NFSU2_TR(0x4f91c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f91c9ull));
TAIL_STATIC(0x575620u,575);
}
B4f91c9:L4f91c9:{c.instructions+=5;NFSU2_TR(0x4f91c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f91cc:{NFSU2_TR(0x4f91cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f91d0:{NFSU2_TR(0x4f91d0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f91d2:{NFSU2_TR(0x4f91d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f91da:{NFSU2_TR(0x4f91da);
if(r1(R+518)){{goto L4f91f1;}}
}
B4f91dc:L4f91dc:{c.instructions+=3;NFSU2_TR(0x4f91dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f91dd:{NFSU2_TR(0x4f91dd);
__builtin_memmove((R+4),(R+0),4);
}
B4f91df:{NFSU2_TR(0x4f91df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f91e4ull));
TAIL_STATIC(0x4f80e0u,4f8);
}
B4f91e4:L4f91e4:{c.instructions+=3;NFSU2_TR(0x4f91e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f91ec:{NFSU2_TR(0x4f91ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f91ef:{NFSU2_TR(0x4f91ef);
{goto L4f9248;}
}
B4f91f1:L4f91f1:{c.instructions+=4;NFSU2_TR(0x4f91f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f91f3:{NFSU2_TR(0x4f91f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f91fb:{NFSU2_TR(0x4f91fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f91fe:{NFSU2_TR(0x4f91fe);
{goto L4f9248;}
}
B4f9200:L4f9200:{c.instructions+=2;NFSU2_TR(0x4f9200);
u8 U[4];
w4(U+0,u32(0x798cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9205:{NFSU2_TR(0x4f9205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f920aull));
TAIL_STATIC(0x505450u,505);
}
B4f920a:L4f920a:{c.instructions+=3;NFSU2_TR(0x4f920a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f920b:{NFSU2_TR(0x4f920b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f920c:{NFSU2_TR(0x4f920c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9211ull));
TAIL_STATIC(0x537a10u,537);
}
B4f9211:L4f9211:{c.instructions+=2;NFSU2_TR(0x4f9211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9212:{NFSU2_TR(0x4f9212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9217ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f9217:L4f9217:{c.instructions+=2;NFSU2_TR(0x4f9217);
u8 U[4];
w4(U+0,u32(0x798cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f921c:{NFSU2_TR(0x4f921c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9221ull));
TAIL_STATIC(0x505450u,505);
}
B4f9221:L4f9221:{c.instructions+=3;NFSU2_TR(0x4f9221);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9222:{NFSU2_TR(0x4f9222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9223:{NFSU2_TR(0x4f9223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9228ull));
TAIL_STATIC(0x537a10u,537);
}
B4f9228:L4f9228:{c.instructions+=2;NFSU2_TR(0x4f9228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9229:{NFSU2_TR(0x4f9229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f922eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f922e:L4f922e:{c.instructions+=2;NFSU2_TR(0x4f922e);
u8 U[4];
w4(U+0,u32(0x798c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9233:{NFSU2_TR(0x4f9233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9238ull));
TAIL_STATIC(0x505450u,505);
}
B4f9238:L4f9238:{c.instructions+=3;NFSU2_TR(0x4f9238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9239:{NFSU2_TR(0x4f9239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f923a:{NFSU2_TR(0x4f923a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f923full));
TAIL_STATIC(0x537a10u,537);
}
B4f923f:L4f923f:{c.instructions+=2;NFSU2_TR(0x4f923f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9240:{NFSU2_TR(0x4f9240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9245ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f9245:L4f9245:{c.instructions+=1;NFSU2_TR(0x4f9245);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4f9248:L4f9248:{c.instructions+=2;NFSU2_TR(0x4f9248);
u8 U[4];
w4(U+0,u32(0x795c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f924d:{NFSU2_TR(0x4f924d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9252ull));
TAIL_STATIC(0x505450u,505);
}
B4f9252:L4f9252:{c.instructions+=3;NFSU2_TR(0x4f9252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9253:{NFSU2_TR(0x4f9253);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9254:{NFSU2_TR(0x4f9254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9259ull));
TAIL_STATIC(0x537a60u,537);
}
B4f9259:L4f9259:{c.instructions+=8;NFSU2_TR(0x4f9259);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f925c:{NFSU2_TR(0x4f925c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f925d:{NFSU2_TR(0x4f925d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9260:{NFSU2_TR(0x4f9260);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4f9267:{NFSU2_TR(0x4f9267);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9269:{NFSU2_TR(0x4f9269);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f926a:{NFSU2_TR(0x4f926a);
__builtin_memmove((R+4),(R+24),4);
}
B4f926c:{NFSU2_TR(0x4f926c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9271ull));
TAIL_STATIC(0x4ca090u,4ca);
}
B4f9271:L4f9271:{c.instructions+=6;NFSU2_TR(0x4f9271);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4f9278:{NFSU2_TR(0x4f9278);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9279:{NFSU2_TR(0x4f9279);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f927a:{NFSU2_TR(0x4f927a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f927b:{NFSU2_TR(0x4f927b);
__builtin_memmove((R+4),(R+24),4);
}
B4f927d:{NFSU2_TR(0x4f927d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9282ull));
TAIL_STATIC(0x4ca090u,4ca);
}
B4f9282:L4f9282:{c.instructions+=9;NFSU2_TR(0x4f9282);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9286:{NFSU2_TR(0x4f9286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9287:{NFSU2_TR(0x4f9287);
__builtin_memmove((R+0),(R+24),4);
}
B4f9289:{NFSU2_TR(0x4f9289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f928a:{NFSU2_TR(0x4f928a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f928b:{NFSU2_TR(0x4f928b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9292:{NFSU2_TR(0x4f9292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9293:{NFSU2_TR(0x4f9293);
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
B4f9296:{NFSU2_TR(0x4f9296);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f92a0:L4f92a0:{c.instructions+=3;NFSU2_TR(0x4f92a0);
__builtin_memmove((R+4),gp(0x8364d4),4);
}
B4f92a6:{NFSU2_TR(0x4f92a6);
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
B4f92a8:{NFSU2_TR(0x4f92a8);
if(r1(R+518)){{goto L4f92d6;}}
}
B4f92aa:L4f92aa:{c.instructions+=5;NFSU2_TR(0x4f92aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92ab:{NFSU2_TR(0x4f92ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f92ae:{NFSU2_TR(0x4f92ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92af:{NFSU2_TR(0x4f92af);
__builtin_memmove((R+28),(R+4),4);
}
B4f92b1:{NFSU2_TR(0x4f92b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f92b6ull));
TAIL_STATIC(0x4ecb80u,4ec);
}
B4f92b6:L4f92b6:{c.instructions+=2;NFSU2_TR(0x4f92b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92b7:{NFSU2_TR(0x4f92b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f92bcull));
TAIL_STATIC(0x575630u,575);
}
B4f92bc:L4f92bc:{c.instructions+=2;NFSU2_TR(0x4f92bc);
s4(0x8364d4,u32(0x0ull));
}
B4f92c6:{NFSU2_TR(0x4f92c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f92cbull));
TAIL_STATIC(0x4ec6f0u,4ec);
}
B4f92cb:L4f92cb:{c.instructions+=2;NFSU2_TR(0x4f92cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92cc:{NFSU2_TR(0x4f92cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f92d1ull));
TAIL_STATIC(0x4ecc80u,4ec);
}
B4f92d1:L4f92d1:{c.instructions+=3;NFSU2_TR(0x4f92d1);
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
B4f92d4:{NFSU2_TR(0x4f92d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f92d5:{NFSU2_TR(0x4f92d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f92d6:L4f92d6:{c.instructions+=1;NFSU2_TR(0x4f92d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f92e0:L4f92e0:{c.instructions+=8;NFSU2_TR(0x4f92e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92e2:{NFSU2_TR(0x4f92e2);
u8 U[4];
w4(U+0,u32(0x776bf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92e7:{NFSU2_TR(0x4f92e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f92ed:{NFSU2_TR(0x4f92ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92ee:{NFSU2_TR(0x4f92ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f92f5:{NFSU2_TR(0x4f92f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92f6:{NFSU2_TR(0x4f92f6);
u8 U[4];
w4(U+0,u32(0x15cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f92fb:{NFSU2_TR(0x4f92fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9300ull));
TAIL_STATIC(0x575620u,575);
}
B4f9300:L4f9300:{c.instructions+=5;NFSU2_TR(0x4f9300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9303:{NFSU2_TR(0x4f9303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f9307:{NFSU2_TR(0x4f9307);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9309:{NFSU2_TR(0x4f9309);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9311:{NFSU2_TR(0x4f9311);
if(r1(R+518)){{goto L4f932e;}}
}
B4f9313:L4f9313:{c.instructions+=4;NFSU2_TR(0x4f9313);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9317:{NFSU2_TR(0x4f9317);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9318:{NFSU2_TR(0x4f9318);
__builtin_memmove((R+4),(R+0),4);
}
B4f931a:{NFSU2_TR(0x4f931a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f931full));
TAIL_STATIC(0x4ecd10u,4ec);
}
B4f931f:L4f931f:{c.instructions+=4;NFSU2_TR(0x4f931f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9323:{NFSU2_TR(0x4f9323);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f932a:{NFSU2_TR(0x4f932a);
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
B4f932d:{NFSU2_TR(0x4f932d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f932e:L4f932e:{c.instructions+=5;NFSU2_TR(0x4f932e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9332:{NFSU2_TR(0x4f9332);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9334:{NFSU2_TR(0x4f9334);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f933b:{NFSU2_TR(0x4f933b);
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
B4f933e:{NFSU2_TR(0x4f933e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9340:L4f9340:{c.instructions+=7;NFSU2_TR(0x4f9340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9344:{NFSU2_TR(0x4f9344);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x92b703b5ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x92b703b5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9349:{NFSU2_TR(0x4f9349);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f934a:{NFSU2_TR(0x4f934a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f934b:{NFSU2_TR(0x4f934b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f934c:{NFSU2_TR(0x4f934c);
__builtin_memmove((R+24),(R+4),4);
}
B4f934e:{NFSU2_TR(0x4f934e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f964c;}}
}
B4f9354:L4f9354:{c.instructions+=1;NFSU2_TR(0x4f9354);
if(r1(R+518)){{goto L4f963f;}}
}
B4f935a:L4f935a:{c.instructions+=2;NFSU2_TR(0x4f935a);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x84378befull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x84378befull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f935f:{NFSU2_TR(0x4f935f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f9527;}}
}
B4f9365:L4f9365:{c.instructions+=1;NFSU2_TR(0x4f9365);
if(r1(R+518)){{goto L4f94e9;}}
}
B4f936b:L4f936b:{c.instructions+=2;NFSU2_TR(0x4f936b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9370:{NFSU2_TR(0x4f9370);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f9434;}}
}
B4f9376:L4f9376:{c.instructions+=1;NFSU2_TR(0x4f9376);
if(r1(R+518)){{goto L4f93cc;}}
}
B4f9378:L4f9378:{c.instructions+=2;NFSU2_TR(0x4f9378);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f937d:{NFSU2_TR(0x4f937d);
if(r1(R+518)){{goto L4f93cc;}}
}
B4f937f:L4f937f:{c.instructions+=2;NFSU2_TR(0x4f937f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f9384:{NFSU2_TR(0x4f9384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f96b8;}}
}
B4f938a:L4f938a:{c.instructions+=3;NFSU2_TR(0x4f938a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f938d:{NFSU2_TR(0x4f938d);
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
B4f938f:{NFSU2_TR(0x4f938f);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f9395:L4f9395:{c.instructions+=3;NFSU2_TR(0x4f9395);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9398:{NFSU2_TR(0x4f9398);
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
B4f939a:{NFSU2_TR(0x4f939a);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f93a0:L4f93a0:{c.instructions+=4;NFSU2_TR(0x4f93a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f93a3:{NFSU2_TR(0x4f93a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f93a5:{NFSU2_TR(0x4f93a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93a6:{NFSU2_TR(0x4f93a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f93a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f93a9:L4f93a9:{c.instructions+=4;NFSU2_TR(0x4f93a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f93ac:{NFSU2_TR(0x4f93ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f93ae:{NFSU2_TR(0x4f93ae);
w4(R+28,u32(0xbull));
}
B4f93b3:{NFSU2_TR(0x4f93b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f93b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f93b6:L4f93b6:{c.instructions+=6;NFSU2_TR(0x4f93b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f93b9:{NFSU2_TR(0x4f93b9);
__builtin_memmove((R+12),(R+0),4);
}
B4f93bb:{NFSU2_TR(0x4f93bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93bc:{NFSU2_TR(0x4f93bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93bd:{NFSU2_TR(0x4f93bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93be:{NFSU2_TR(0x4f93be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f93c3ull));
TAIL_STATIC(0x50d150u,50d);
}
B4f93c3:L4f93c3:{c.instructions+=5;NFSU2_TR(0x4f93c3);
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
B4f93c6:{NFSU2_TR(0x4f93c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f93c7:{NFSU2_TR(0x4f93c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f93c8:{NFSU2_TR(0x4f93c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f93c9:{NFSU2_TR(0x4f93c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f93cc:L4f93cc:{c.instructions+=3;NFSU2_TR(0x4f93cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f93cf:{NFSU2_TR(0x4f93cf);
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
B4f93d1:{NFSU2_TR(0x4f93d1);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f93d7:L4f93d7:{c.instructions+=6;NFSU2_TR(0x4f93d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f93da:{NFSU2_TR(0x4f93da);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93df:{NFSU2_TR(0x4f93df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f93e6:{NFSU2_TR(0x4f93e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f93e8:{NFSU2_TR(0x4f93e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93e9:{NFSU2_TR(0x4f93e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f93ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f93ec:L4f93ec:{c.instructions+=6;NFSU2_TR(0x4f93ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f93ef:{NFSU2_TR(0x4f93ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f93f2:{NFSU2_TR(0x4f93f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93f4:{NFSU2_TR(0x4f93f4);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93f9:{NFSU2_TR(0x4f93f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f93fa:{NFSU2_TR(0x4f93fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f93ffull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f93ff:L4f93ff:{c.instructions+=4;NFSU2_TR(0x4f93ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9402:{NFSU2_TR(0x4f9402);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9404:{NFSU2_TR(0x4f9404);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9405:{NFSU2_TR(0x4f9405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f940aull));
TAIL_STATIC(0x537950u,537);
}
B4f940a:L4f940a:{c.instructions+=3;NFSU2_TR(0x4f940a);
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
B4f940d:{NFSU2_TR(0x4f940d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f940f:{NFSU2_TR(0x4f940f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9414ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f9414:L4f9414:{c.instructions+=2;NFSU2_TR(0x4f9414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9415:{NFSU2_TR(0x4f9415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f941aull));
TAIL_STATIC(0x537950u,537);
}
B4f941a:L4f941a:{c.instructions+=4;NFSU2_TR(0x4f941a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9420:{NFSU2_TR(0x4f9420);
u8 U[4];
w4(U+0,u32(0x23cf49aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9425:{NFSU2_TR(0x4f9425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9426:{NFSU2_TR(0x4f9426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f942bull));
TAIL_STATIC(0x50c900u,50c);
}
B4f942b:L4f942b:{c.instructions+=5;NFSU2_TR(0x4f942b);
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
B4f942e:{NFSU2_TR(0x4f942e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f942f:{NFSU2_TR(0x4f942f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9430:{NFSU2_TR(0x4f9430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9431:{NFSU2_TR(0x4f9431);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9434:L4f9434:{c.instructions+=2;NFSU2_TR(0x4f9434);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f9439:{NFSU2_TR(0x4f9439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f96b8;}}
}
B4f943f:L4f943f:{c.instructions+=3;NFSU2_TR(0x4f943f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9445:{NFSU2_TR(0x4f9445);
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
B4f9447:{NFSU2_TR(0x4f9447);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f944d:L4f944d:{c.instructions+=3;NFSU2_TR(0x4f944d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9450:{NFSU2_TR(0x4f9450);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9452:{NFSU2_TR(0x4f9452);
if(r1(R+518)){{goto L4f9459;}}
}
B4f9454:L4f9454:{c.instructions+=2;NFSU2_TR(0x4f9454);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4f9457:{NFSU2_TR(0x4f9457);
{goto L4f945b;}
}
B4f9459:L4f9459:{c.instructions+=1;NFSU2_TR(0x4f9459);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f945b:L4f945b:{c.instructions+=3;NFSU2_TR(0x4f945b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f945e:{NFSU2_TR(0x4f945e);
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
B4f9460:{NFSU2_TR(0x4f9460);
if(r1(R+518)){{goto L4f94a3;}}
}
B4f9462:L4f9462:{c.instructions+=3;NFSU2_TR(0x4f9462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9465:{NFSU2_TR(0x4f9465);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9467:{NFSU2_TR(0x4f9467);
if(r1(R+518)){{goto L4f946e;}}
}
B4f9469:L4f9469:{c.instructions+=2;NFSU2_TR(0x4f9469);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4f946c:{NFSU2_TR(0x4f946c);
{goto L4f9470;}
}
B4f946e:L4f946e:{c.instructions+=1;NFSU2_TR(0x4f946e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9470:L4f9470:{c.instructions+=2;NFSU2_TR(0x4f9470);
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
B4f9472:{NFSU2_TR(0x4f9472);
if(r1(R+518)){{goto L4f94a3;}}
}
B4f9474:L4f9474:{c.instructions+=2;NFSU2_TR(0x4f9474);
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
B4f9476:{NFSU2_TR(0x4f9476);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f947c:L4f947c:{c.instructions+=3;NFSU2_TR(0x4f947c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f947e:{NFSU2_TR(0x4f947e);
__builtin_memmove((R+4),(R+24),4);
}
B4f9480:{NFSU2_TR(0x4f9480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9485ull));
TAIL_STATIC(0x4ed380u,4ed);
}
B4f9485:L4f9485:{c.instructions+=7;NFSU2_TR(0x4f9485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9488:{NFSU2_TR(0x4f9488);
w4(R+12,u32(0x7ull));
}
B4f948d:{NFSU2_TR(0x4f948d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f948e:{NFSU2_TR(0x4f948e);
w4(R+28,u32(0x6ull));
}
B4f9493:{NFSU2_TR(0x4f9493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9494:{NFSU2_TR(0x4f9494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9495:{NFSU2_TR(0x4f9495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f949aull));
TAIL_STATIC(0x50d150u,50d);
}
B4f949a:L4f949a:{c.instructions+=5;NFSU2_TR(0x4f949a);
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
B4f949d:{NFSU2_TR(0x4f949d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f949e:{NFSU2_TR(0x4f949e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f949f:{NFSU2_TR(0x4f949f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f94a0:{NFSU2_TR(0x4f94a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f94a3:L4f94a3:{c.instructions+=2;NFSU2_TR(0x4f94a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f94a5:{NFSU2_TR(0x4f94a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f94a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f94a8:L4f94a8:{c.instructions+=4;NFSU2_TR(0x4f94a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f94ab:{NFSU2_TR(0x4f94ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f94ac:{NFSU2_TR(0x4f94ac);
__builtin_memmove((R+4),(R+24),4);
}
B4f94ae:{NFSU2_TR(0x4f94ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f94b3ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4f94b3:L4f94b3:{c.instructions+=3;NFSU2_TR(0x4f94b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f94b4:{NFSU2_TR(0x4f94b4);
__builtin_memmove((R+4),(R+24),4);
}
B4f94b6:{NFSU2_TR(0x4f94b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f94bbull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4f94bb:L4f94bb:{c.instructions+=2;NFSU2_TR(0x4f94bb);
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
B4f94bd:{NFSU2_TR(0x4f94bd);
if(r1(R+518)){{goto L4f94c6;}}
}
B4f94bf:L4f94bf:{c.instructions+=3;NFSU2_TR(0x4f94bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f94c1:{NFSU2_TR(0x4f94c1);
__builtin_memmove((R+4),(R+0),4);
}
B4f94c3:{NFSU2_TR(0x4f94c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f94c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f94c6:L4f94c6:{c.instructions+=5;NFSU2_TR(0x4f94c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f94cc:{NFSU2_TR(0x4f94cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f94ce:{NFSU2_TR(0x4f94ce);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f94d3:{NFSU2_TR(0x4f94d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f94d4:{NFSU2_TR(0x4f94d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f94d9ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f94d9:L4f94d9:{c.instructions+=6;NFSU2_TR(0x4f94d9);
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
B4f94dc:{NFSU2_TR(0x4f94dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f94dd:{NFSU2_TR(0x4f94dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f94e4:{NFSU2_TR(0x4f94e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f94e5:{NFSU2_TR(0x4f94e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f94e6:{NFSU2_TR(0x4f94e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f94e9:L4f94e9:{c.instructions+=3;NFSU2_TR(0x4f94e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f94ec:{NFSU2_TR(0x4f94ec);
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
B4f94ee:{NFSU2_TR(0x4f94ee);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f94f4:L4f94f4:{c.instructions+=3;NFSU2_TR(0x4f94f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f94f7:{NFSU2_TR(0x4f94f7);
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
B4f94f9:{NFSU2_TR(0x4f94f9);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f94ff:L4f94ff:{c.instructions+=2;NFSU2_TR(0x4f94ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f9501:{NFSU2_TR(0x4f9501);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9504ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f9504:L4f9504:{c.instructions+=4;NFSU2_TR(0x4f9504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9507:{NFSU2_TR(0x4f9507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f9509:{NFSU2_TR(0x4f9509);
w4(R+28,u32(0xcull));
}
B4f950e:{NFSU2_TR(0x4f950e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9511ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f9511:L4f9511:{c.instructions+=6;NFSU2_TR(0x4f9511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9514:{NFSU2_TR(0x4f9514);
__builtin_memmove((R+12),(R+0),4);
}
B4f9516:{NFSU2_TR(0x4f9516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9517:{NFSU2_TR(0x4f9517);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9518:{NFSU2_TR(0x4f9518);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9519:{NFSU2_TR(0x4f9519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f951eull));
TAIL_STATIC(0x50d150u,50d);
}
B4f951e:L4f951e:{c.instructions+=5;NFSU2_TR(0x4f951e);
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
B4f9521:{NFSU2_TR(0x4f9521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9522:{NFSU2_TR(0x4f9522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9523:{NFSU2_TR(0x4f9523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9524:{NFSU2_TR(0x4f9524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9527:L4f9527:{c.instructions+=2;NFSU2_TR(0x4f9527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f952c:{NFSU2_TR(0x4f952c);
if(r1(R+518)){{goto L4f95e2;}}
}
B4f9532:L4f9532:{c.instructions+=2;NFSU2_TR(0x4f9532);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9537:{NFSU2_TR(0x4f9537);
if(r1(R+518)){{goto L4f954a;}}
}
B4f9539:L4f9539:{c.instructions+=2;NFSU2_TR(0x4f9539);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f953e:{NFSU2_TR(0x4f953e);
if(r1(R+518)){{goto L4f9676;}}
}
B4f9544:L4f9544:{c.instructions+=4;NFSU2_TR(0x4f9544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9545:{NFSU2_TR(0x4f9545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9546:{NFSU2_TR(0x4f9546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9547:{NFSU2_TR(0x4f9547);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f954a:L4f954a:{c.instructions+=3;NFSU2_TR(0x4f954a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9550:{NFSU2_TR(0x4f9550);
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
B4f9552:{NFSU2_TR(0x4f9552);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f9558:L4f9558:{c.instructions+=3;NFSU2_TR(0x4f9558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f955b:{NFSU2_TR(0x4f955b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f955d:{NFSU2_TR(0x4f955d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f95be;}}
}
B4f955f:L4f955f:{c.instructions+=3;NFSU2_TR(0x4f955f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9562:{NFSU2_TR(0x4f9562);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9564:{NFSU2_TR(0x4f9564);
if(r1(R+518)){{goto L4f956b;}}
}
B4f9566:L4f9566:{c.instructions+=2;NFSU2_TR(0x4f9566);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4f9569:{NFSU2_TR(0x4f9569);
{goto L4f956d;}
}
B4f956b:L4f956b:{c.instructions+=1;NFSU2_TR(0x4f956b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f956d:L4f956d:{c.instructions+=6;NFSU2_TR(0x4f956d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9573:{NFSU2_TR(0x4f9573);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9575:{NFSU2_TR(0x4f9575);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f957a:{NFSU2_TR(0x4f957a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f957b:{NFSU2_TR(0x4f957b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f957e:{NFSU2_TR(0x4f957e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9583ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f9583:L4f9583:{c.instructions+=6;NFSU2_TR(0x4f9583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9586:{NFSU2_TR(0x4f9586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9589:{NFSU2_TR(0x4f9589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f958b:{NFSU2_TR(0x4f958b);
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
B4f958e:{NFSU2_TR(0x4f958e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f958f:{NFSU2_TR(0x4f958f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9592ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f9592:L4f9592:{c.instructions+=4;NFSU2_TR(0x4f9592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9595:{NFSU2_TR(0x4f9595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9596:{NFSU2_TR(0x4f9596);
__builtin_memmove((R+4),(R+24),4);
}
B4f9598:{NFSU2_TR(0x4f9598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f959dull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4f959d:L4f959d:{c.instructions+=3;NFSU2_TR(0x4f959d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f959e:{NFSU2_TR(0x4f959e);
__builtin_memmove((R+4),(R+24),4);
}
B4f95a0:{NFSU2_TR(0x4f95a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f95a5ull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4f95a5:L4f95a5:{c.instructions+=2;NFSU2_TR(0x4f95a5);
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
B4f95a7:{NFSU2_TR(0x4f95a7);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f95ad:L4f95ad:{c.instructions+=5;NFSU2_TR(0x4f95ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f95b0:{NFSU2_TR(0x4f95b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f95b2:{NFSU2_TR(0x4f95b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95b3:{NFSU2_TR(0x4f95b3);
__builtin_memmove((R+4),(R+0),4);
}
B4f95b5:{NFSU2_TR(0x4f95b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f95b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f95b8:L4f95b8:{c.instructions+=4;NFSU2_TR(0x4f95b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f95b9:{NFSU2_TR(0x4f95b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f95ba:{NFSU2_TR(0x4f95ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f95bb:{NFSU2_TR(0x4f95bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f95be:L4f95be:{c.instructions+=3;NFSU2_TR(0x4f95be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95c0:{NFSU2_TR(0x4f95c0);
__builtin_memmove((R+4),(R+24),4);
}
B4f95c2:{NFSU2_TR(0x4f95c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f95c7ull));
TAIL_STATIC(0x4ed380u,4ed);
}
B4f95c7:L4f95c7:{c.instructions+=7;NFSU2_TR(0x4f95c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f95ca:{NFSU2_TR(0x4f95ca);
w4(R+28,u32(0x7ull));
}
B4f95cf:{NFSU2_TR(0x4f95cf);
__builtin_memmove((R+12),(R+28),4);
}
B4f95d1:{NFSU2_TR(0x4f95d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95d2:{NFSU2_TR(0x4f95d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95d3:{NFSU2_TR(0x4f95d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95d4:{NFSU2_TR(0x4f95d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f95d9ull));
TAIL_STATIC(0x50d150u,50d);
}
B4f95d9:L4f95d9:{c.instructions+=5;NFSU2_TR(0x4f95d9);
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
B4f95dc:{NFSU2_TR(0x4f95dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f95dd:{NFSU2_TR(0x4f95dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f95de:{NFSU2_TR(0x4f95de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f95df:{NFSU2_TR(0x4f95df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f95e2:L4f95e2:{c.instructions+=5;NFSU2_TR(0x4f95e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f95e5:{NFSU2_TR(0x4f95e5);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95ea:{NFSU2_TR(0x4f95ea);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95ef:{NFSU2_TR(0x4f95ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f95f0:{NFSU2_TR(0x4f95f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f95f5ull));
TAIL_STATIC(0x537d40u,537);
}
B4f95f5:L4f95f5:{c.instructions+=3;NFSU2_TR(0x4f95f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f95f8:{NFSU2_TR(0x4f95f8);
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
B4f95fa:{NFSU2_TR(0x4f95fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9614;}}
}
B4f95fc:L4f95fc:{c.instructions+=6;NFSU2_TR(0x4f95fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f95ff:{NFSU2_TR(0x4f95ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9601:{NFSU2_TR(0x4f9601);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9606:{NFSU2_TR(0x4f9606);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f960b:{NFSU2_TR(0x4f960b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f960c:{NFSU2_TR(0x4f960c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9611ull));
TAIL_STATIC(0x537c60u,537);
}
B4f9611:L4f9611:{c.instructions+=1;NFSU2_TR(0x4f9611);
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
B4f9614:L4f9614:{c.instructions+=11;NFSU2_TR(0x4f9614);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9618:{NFSU2_TR(0x4f9618);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f961c:{NFSU2_TR(0x4f961c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9620:{NFSU2_TR(0x4f9620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9621:{NFSU2_TR(0x4f9621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f962b:{NFSU2_TR(0x4f962b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f962e:{NFSU2_TR(0x4f962e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9634:{NFSU2_TR(0x4f9634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f963a:{NFSU2_TR(0x4f963a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f963b:{NFSU2_TR(0x4f963b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f963c:{NFSU2_TR(0x4f963c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f963f:L4f963f:{c.instructions+=2;NFSU2_TR(0x4f963f);
__builtin_memmove((R+4),(R+24),4);
}
B4f9641:{NFSU2_TR(0x4f9641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9646ull));
TAIL_STATIC(0x4cb910u,4cb);
}
B4f9646:L4f9646:{c.instructions+=4;NFSU2_TR(0x4f9646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9647:{NFSU2_TR(0x4f9647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9648:{NFSU2_TR(0x4f9648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9649:{NFSU2_TR(0x4f9649);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f964c:L4f964c:{c.instructions+=2;NFSU2_TR(0x4f964c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfbfull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfbfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9651:{NFSU2_TR(0x4f9651);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f97a4;}}
}
B4f9657:L4f9657:{c.instructions+=1;NFSU2_TR(0x4f9657);
if(r1(R+518)){{goto L4f9751;}}
}
B4f965d:L4f965d:{c.instructions+=2;NFSU2_TR(0x4f965d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9662:{NFSU2_TR(0x4f9662);
if(r1(R+518)){{goto L4f9744;}}
}
B4f9668:L4f9668:{c.instructions+=2;NFSU2_TR(0x4f9668);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xaf0bbd92ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f966d:{NFSU2_TR(0x4f966d);
if(r1(R+518)){{goto L4f96be;}}
}
B4f966f:L4f966f:{c.instructions+=2;NFSU2_TR(0x4f966f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f9674:{NFSU2_TR(0x4f9674);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f96b8;}}
}
B4f9676:L4f9676:{c.instructions+=4;NFSU2_TR(0x4f9676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9679:{NFSU2_TR(0x4f9679);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f967b:{NFSU2_TR(0x4f967b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f967c:{NFSU2_TR(0x4f967c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f968b;}}
}
B4f967e:L4f967e:{c.instructions+=2;NFSU2_TR(0x4f967e);
__builtin_memmove((R+4),(R+24),4);
}
B4f9680:{NFSU2_TR(0x4f9680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9685ull));
TAIL_STATIC(0x4acaa0u,4ac);
}
B4f9685:L4f9685:{c.instructions+=4;NFSU2_TR(0x4f9685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9686:{NFSU2_TR(0x4f9686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9687:{NFSU2_TR(0x4f9687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9688:{NFSU2_TR(0x4f9688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f968b:L4f968b:{c.instructions+=8;NFSU2_TR(0x4f968b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4f968d:{NFSU2_TR(0x4f968d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9692:{NFSU2_TR(0x4f9692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4f9695:{NFSU2_TR(0x4f9695);
w4(R+12,u32(0x7ull));
}
B4f969a:{NFSU2_TR(0x4f969a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4f969d:{NFSU2_TR(0x4f969d);
__builtin_memmove((R+28),(R+4),4);
}
B4f969f:{NFSU2_TR(0x4f969f);
__builtin_memmove((R+4),(R+24),4);
}
B4f96a1:{NFSU2_TR(0x4f96a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f96a6ull));
TAIL_STATIC(0x4cb9e0u,4cb);
}
B4f96a6:L4f96a6:{c.instructions+=2;NFSU2_TR(0x4f96a6);
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
B4f96a8:{NFSU2_TR(0x4f96a8);
if(r1(R+518)){{goto L4f96b8;}}
}
B4f96aa:L4f96aa:{c.instructions+=5;NFSU2_TR(0x4f96aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f96ad:{NFSU2_TR(0x4f96ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f96ae:{NFSU2_TR(0x4f96ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f96af:{NFSU2_TR(0x4f96af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f96b0:{NFSU2_TR(0x4f96b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f96b5ull));
TAIL_STATIC(0x50d150u,50d);
}
B4f96b5:L4f96b5:{c.instructions+=1;NFSU2_TR(0x4f96b5);
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
B4f96b8:L4f96b8:{c.instructions+=4;NFSU2_TR(0x4f96b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f96b9:{NFSU2_TR(0x4f96b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f96ba:{NFSU2_TR(0x4f96ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f96bb:{NFSU2_TR(0x4f96bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f96be:L4f96be:{c.instructions+=4;NFSU2_TR(0x4f96be);
__builtin_memmove((R+4),(R+24),4);
}
B4f96c0:{NFSU2_TR(0x4f96c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f96c7:{NFSU2_TR(0x4f96c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f96d1:{NFSU2_TR(0x4f96d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f96d6ull));
TAIL_STATIC(0x4cb7c0u,4cb);
}
B4f96d6:L4f96d6:{c.instructions+=6;NFSU2_TR(0x4f96d6);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4f96db:{NFSU2_TR(0x4f96db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4f96de:{NFSU2_TR(0x4f96de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4f96e5:{NFSU2_TR(0x4f96e5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4f96eb:{NFSU2_TR(0x4f96eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x874e70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f96f2:{NFSU2_TR(0x4f96f2);
if(r1(R+518)){{goto L4f9730;}}
}
B4f96f4:L4f96f4:{c.instructions+=2;NFSU2_TR(0x4f96f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x874c40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f96fa:{NFSU2_TR(0x4f96fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f96ffull));
TAIL_STATIC(0x5b8720u,5b8);
}
B4f96ff:L4f96ff:{c.instructions+=2;NFSU2_TR(0x4f96ff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4f9700:{NFSU2_TR(0x4f9700);
if(r1(R+518)){{goto L4f9730;}}
}
B4f9702:L4f9702:{c.instructions+=2;NFSU2_TR(0x4f9702);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4f9703:{NFSU2_TR(0x4f9703);
if(r1(R+518)){{goto L4f971c;}}
}
B4f9705:L4f9705:{c.instructions+=2;NFSU2_TR(0x4f9705);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4f9706:{NFSU2_TR(0x4f9706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9737;}}
}
B4f9708:L4f9708:{c.instructions+=2;NFSU2_TR(0x4f9708);
__builtin_memmove((R+4),(R+24),4);
}
B4f970a:{NFSU2_TR(0x4f970a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f970full));
TAIL_STATIC(0x4dc9f0u,4dc);
}
B4f970f:L4f970f:{c.instructions+=2;NFSU2_TR(0x4f970f);
__builtin_memmove((R+4),(R+24),4);
}
B4f9711:{NFSU2_TR(0x4f9711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9716ull));
TAIL_STATIC(0x4dee90u,4de);
}
B4f9716:L4f9716:{c.instructions+=4;NFSU2_TR(0x4f9716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9717:{NFSU2_TR(0x4f9717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9718:{NFSU2_TR(0x4f9718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9719:{NFSU2_TR(0x4f9719);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f971c:L4f971c:{c.instructions+=2;NFSU2_TR(0x4f971c);
__builtin_memmove((R+4),(R+24),4);
}
B4f971e:{NFSU2_TR(0x4f971e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9723ull));
TAIL_STATIC(0x4ddc10u,4dd);
}
B4f9723:L4f9723:{c.instructions+=2;NFSU2_TR(0x4f9723);
__builtin_memmove((R+4),(R+24),4);
}
B4f9725:{NFSU2_TR(0x4f9725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f972aull));
TAIL_STATIC(0x4dee90u,4de);
}
B4f972a:L4f972a:{c.instructions+=4;NFSU2_TR(0x4f972a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f972b:{NFSU2_TR(0x4f972b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f972c:{NFSU2_TR(0x4f972c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f972d:{NFSU2_TR(0x4f972d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9730:L4f9730:{c.instructions+=2;NFSU2_TR(0x4f9730);
__builtin_memmove((R+4),(R+24),4);
}
B4f9732:{NFSU2_TR(0x4f9732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9737ull));
TAIL_STATIC(0x4dba50u,4db);
}
B4f9737:L4f9737:{c.instructions+=2;NFSU2_TR(0x4f9737);
__builtin_memmove((R+4),(R+24),4);
}
B4f9739:{NFSU2_TR(0x4f9739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f973eull));
TAIL_STATIC(0x4dee90u,4de);
}
B4f973e:L4f973e:{c.instructions+=4;NFSU2_TR(0x4f973e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f973f:{NFSU2_TR(0x4f973f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9740:{NFSU2_TR(0x4f9740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9741:{NFSU2_TR(0x4f9741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9744:L4f9744:{c.instructions+=2;NFSU2_TR(0x4f9744);
__builtin_memmove((R+4),(R+24),4);
}
B4f9746:{NFSU2_TR(0x4f9746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f974bull));
TAIL_STATIC(0x4ed140u,4ed);
}
B4f974b:L4f974b:{c.instructions+=4;NFSU2_TR(0x4f974b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f974c:{NFSU2_TR(0x4f974c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f974d:{NFSU2_TR(0x4f974d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f974e:{NFSU2_TR(0x4f974e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9751:L4f9751:{c.instructions+=3;NFSU2_TR(0x4f9751);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9757:{NFSU2_TR(0x4f9757);
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
B4f9759:{NFSU2_TR(0x4f9759);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f96b8u);}goto L4f96b8;}}
}
B4f975f:L4f975f:{c.instructions+=3;NFSU2_TR(0x4f975f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9765:{NFSU2_TR(0x4f9765);
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
B4f9767:{NFSU2_TR(0x4f9767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f96b8u);}goto L4f96b8;}}
}
B4f976d:L4f976d:{c.instructions+=11;NFSU2_TR(0x4f976d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9770:{NFSU2_TR(0x4f9770);
u8 U[4];
w4(U+0,u32(0x2bbcca6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9775:{NFSU2_TR(0x4f9775);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9777:{NFSU2_TR(0x4f9777);
u8 U[4];
w4(U+0,u32(0xe1fde1d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f977c:{NFSU2_TR(0x4f977c);
u8 U[4];
w4(U+0,u32(0xe1fde1d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9781:{NFSU2_TR(0x4f9781);
u8 U[4];
w4(U+0,u32(0xefedcba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9786:{NFSU2_TR(0x4f9786);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f978b:{NFSU2_TR(0x4f978b);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9790:{NFSU2_TR(0x4f9790);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9795:{NFSU2_TR(0x4f9795);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9796:{NFSU2_TR(0x4f9796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f979bull));
TAIL_STATIC(0x558790u,558);
}
B4f979b:L4f979b:{c.instructions+=5;NFSU2_TR(0x4f979b);
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
B4f979e:{NFSU2_TR(0x4f979e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f979f:{NFSU2_TR(0x4f979f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f97a0:{NFSU2_TR(0x4f97a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f97a1:{NFSU2_TR(0x4f97a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f97a4:L4f97a4:{c.instructions+=2;NFSU2_TR(0x4f97a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f97a9:{NFSU2_TR(0x4f97a9);
if(r1(R+518)){{goto L4f97f3;}}
}
B4f97ab:L4f97ab:{c.instructions+=2;NFSU2_TR(0x4f97ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f97b0:{NFSU2_TR(0x4f97b0);
if(r1(R+518)){{goto L4f97ca;}}
}
B4f97b2:L4f97b2:{c.instructions+=2;NFSU2_TR(0x4f97b2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xefedcba0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xefedcba0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xefedcba0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f97b7:{NFSU2_TR(0x4f97b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f96b8u);}goto L4f96b8;}}
}
B4f97bd:L4f97bd:{c.instructions+=2;NFSU2_TR(0x4f97bd);
__builtin_memmove((R+4),(R+24),4);
}
B4f97bf:{NFSU2_TR(0x4f97bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f97c4ull));
TAIL_STATIC(0x4acd90u,4ac);
}
B4f97c4:L4f97c4:{c.instructions+=4;NFSU2_TR(0x4f97c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f97c5:{NFSU2_TR(0x4f97c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f97c6:{NFSU2_TR(0x4f97c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f97c7:{NFSU2_TR(0x4f97c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f97ca:L4f97ca:{c.instructions+=2;NFSU2_TR(0x4f97ca);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4f97d4:{NFSU2_TR(0x4f97d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f96b8u);}goto L4f96b8;}}
}
B4f97da:L4f97da:{c.instructions+=5;NFSU2_TR(0x4f97da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f97dd:{NFSU2_TR(0x4f97dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f97df:{NFSU2_TR(0x4f97df);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f97e4:{NFSU2_TR(0x4f97e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f97e5:{NFSU2_TR(0x4f97e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f97eaull));
TAIL_STATIC(0x537980u,537);
}
B4f97ea:L4f97ea:{c.instructions+=5;NFSU2_TR(0x4f97ea);
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
B4f97ed:{NFSU2_TR(0x4f97ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f97ee:{NFSU2_TR(0x4f97ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f97ef:{NFSU2_TR(0x4f97ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f97f0:{NFSU2_TR(0x4f97f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f97f3:L4f97f3:{c.instructions+=2;NFSU2_TR(0x4f97f3);
__builtin_memmove((R+4),(R+24),4);
}
B4f97f5:{NFSU2_TR(0x4f97f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f97faull));
TAIL_STATIC(0x4acbf0u,4ac);
}
B4f97fa:L4f97fa:{c.instructions+=3;NFSU2_TR(0x4f97fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9800:{NFSU2_TR(0x4f9800);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f9802:{NFSU2_TR(0x4f9802);
if(r1(R+518)){{goto L4f9840;}}
}
B4f9804:L4f9804:{c.instructions+=4;NFSU2_TR(0x4f9804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9807:{NFSU2_TR(0x4f9807);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f980c:{NFSU2_TR(0x4f980c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f980d:{NFSU2_TR(0x4f980d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9812ull));
TAIL_STATIC(0x537950u,537);
}
B4f9812:L4f9812:{c.instructions+=3;NFSU2_TR(0x4f9812);
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
B4f9815:{NFSU2_TR(0x4f9815);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f981a:{NFSU2_TR(0x4f981a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f981full));
TAIL_STATIC(0x50cea0u,50c);
}
B4f981f:L4f981f:{c.instructions+=2;NFSU2_TR(0x4f981f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9820:{NFSU2_TR(0x4f9820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9825ull));
TAIL_STATIC(0x537950u,537);
}
B4f9825:L4f9825:{c.instructions+=5;NFSU2_TR(0x4f9825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f982b:{NFSU2_TR(0x4f982b);
u8 U[4];
w4(U+0,u32(0xfed0d3dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9830:{NFSU2_TR(0x4f9830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9831:{NFSU2_TR(0x4f9831);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9838:{NFSU2_TR(0x4f9838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f983dull));
TAIL_STATIC(0x50c900u,50c);
}
B4f983d:L4f983d:{c.instructions+=1;NFSU2_TR(0x4f983d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f9840:L4f9840:{c.instructions+=3;NFSU2_TR(0x4f9840);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f9846:{NFSU2_TR(0x4f9846);
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
B4f9848:{NFSU2_TR(0x4f9848);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f96b8u);}goto L4f96b8;}}
}
B4f984e:L4f984e:{c.instructions+=10;NFSU2_TR(0x4f984e);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4f9853:{NFSU2_TR(0x4f9853);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4f9856:{NFSU2_TR(0x4f9856);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4f985d:{NFSU2_TR(0x4f985d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4f9863:{NFSU2_TR(0x4f9863);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x874f7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f9869:{NFSU2_TR(0x4f9869);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f986b:{NFSU2_TR(0x4f986b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4f986e:{NFSU2_TR(0x4f986e);
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
B4f9870:{NFSU2_TR(0x4f9870);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9876:{NFSU2_TR(0x4f9876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f96b8u);}goto L4f96b8;}}
}
B4f987c:L4f987c:{c.instructions+=5;NFSU2_TR(0x4f987c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f987f:{NFSU2_TR(0x4f987f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9882:{NFSU2_TR(0x4f9882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f9884:{NFSU2_TR(0x4f9884);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9885:{NFSU2_TR(0x4f9885);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9888ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f9888:L4f9888:{c.instructions+=4;NFSU2_TR(0x4f9888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f988b:{NFSU2_TR(0x4f988b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f988c:{NFSU2_TR(0x4f988c);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9891:{NFSU2_TR(0x4f9891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9896ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f9896:L4f9896:{c.instructions+=6;NFSU2_TR(0x4f9896);
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
B4f9899:{NFSU2_TR(0x4f9899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f989a:{NFSU2_TR(0x4f989a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f98a1:{NFSU2_TR(0x4f98a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f98a2:{NFSU2_TR(0x4f98a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f98a3:{NFSU2_TR(0x4f98a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f98b0:L4f98b0:{c.instructions+=13;NFSU2_TR(0x4f98b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f98b4:{NFSU2_TR(0x4f98b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f98b8:{NFSU2_TR(0x4f98b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98b9:{NFSU2_TR(0x4f98b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98ba:{NFSU2_TR(0x4f98ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f98be:{NFSU2_TR(0x4f98be);
__builtin_memmove((R+24),(R+4),4);
}
B4f98c0:{NFSU2_TR(0x4f98c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f98c4:{NFSU2_TR(0x4f98c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98c5:{NFSU2_TR(0x4f98c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98c6:{NFSU2_TR(0x4f98c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98c7:{NFSU2_TR(0x4f98c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98c8:{NFSU2_TR(0x4f98c8);
__builtin_memmove((R+4),(R+24),4);
}
B4f98ca:{NFSU2_TR(0x4f98ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f98cfull));
TAIL_STATIC(0x543d40u,543);
}
B4f98cf:L4f98cf:{c.instructions+=2;NFSU2_TR(0x4f98cf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1bcfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f98d5:{NFSU2_TR(0x4f98d5);
if(r1(R+518)){{goto L4f98fa;}}
}
B4f98d7:L4f98d7:{c.instructions+=2;NFSU2_TR(0x4f98d7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd05fc3a3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd05fc3a3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd05fc3a3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f98dd:{NFSU2_TR(0x4f98dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9920;}}
}
B4f98df:L4f98df:{c.instructions+=4;NFSU2_TR(0x4f98df);
s4(0x850078,u32(0x8ull));
}
B4f98e9:{NFSU2_TR(0x4f98e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f98ec:{NFSU2_TR(0x4f98ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98ed:{NFSU2_TR(0x4f98ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f98f2ull));
TAIL_STATIC(0x4effd0u,4ef);
}
B4f98f2:L4f98f2:{c.instructions+=4;NFSU2_TR(0x4f98f2);
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
B4f98f5:{NFSU2_TR(0x4f98f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f98f6:{NFSU2_TR(0x4f98f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f98f7:{NFSU2_TR(0x4f98f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f98fa:L4f98fa:{c.instructions+=4;NFSU2_TR(0x4f98fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f98fd:{NFSU2_TR(0x4f98fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f98fe:{NFSU2_TR(0x4f98fe);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9903:{NFSU2_TR(0x4f9903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9908ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f9908:L4f9908:{c.instructions+=6;NFSU2_TR(0x4f9908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f990b:{NFSU2_TR(0x4f990b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f990d:{NFSU2_TR(0x4f990d);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9912:{NFSU2_TR(0x4f9912);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9917:{NFSU2_TR(0x4f9917);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9918:{NFSU2_TR(0x4f9918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f991dull));
TAIL_STATIC(0x537c00u,537);
}
B4f991d:L4f991d:{c.instructions+=1;NFSU2_TR(0x4f991d);
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
B4f9920:L4f9920:{c.instructions+=3;NFSU2_TR(0x4f9920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9921:{NFSU2_TR(0x4f9921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9922:{NFSU2_TR(0x4f9922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9930:L4f9930:{c.instructions+=13;NFSU2_TR(0x4f9930);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9932:{NFSU2_TR(0x4f9932);
u8 U[4];
w4(U+0,u32(0x776c3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9937:{NFSU2_TR(0x4f9937);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f993d:{NFSU2_TR(0x4f993d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f993e:{NFSU2_TR(0x4f993e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9945:{NFSU2_TR(0x4f9945);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9946:{NFSU2_TR(0x4f9946);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f994a:{NFSU2_TR(0x4f994a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f994b:{NFSU2_TR(0x4f994b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f994c:{NFSU2_TR(0x4f994c);
__builtin_memmove((R+24),(R+4),4);
}
B4f994e:{NFSU2_TR(0x4f994e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f994f:{NFSU2_TR(0x4f994f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9953:{NFSU2_TR(0x4f9953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9958ull));
TAIL_STATIC(0x551de0u,551);
}
B4f9958:L4f9958:{c.instructions+=28;NFSU2_TR(0x4f9958);
w4(R+4,u32(0x1ull));
}
B4f995d:{NFSU2_TR(0x4f995d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f9960:{NFSU2_TR(0x4f9960);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f9962:{NFSU2_TR(0x4f9962);
u8 U[4];
w4(U+0,u32(0x795cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f9968:{NFSU2_TR(0x4f9968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f996b:{NFSU2_TR(0x4f996b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f996f:{NFSU2_TR(0x4f996f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f9971:{NFSU2_TR(0x4f9971);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9974:{NFSU2_TR(0x4f9974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9977:{NFSU2_TR(0x4f9977);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9978:{NFSU2_TR(0x4f9978);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9979:{NFSU2_TR(0x4f9979);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f997a:{NFSU2_TR(0x4f997a);
u8 U[4];
w4(U+0,u32(0x798f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f997f:{NFSU2_TR(0x4f997f);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9983:{NFSU2_TR(0x4f9983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9989:{NFSU2_TR(0x4f9989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f998a:{NFSU2_TR(0x4f998a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9990:{NFSU2_TR(0x4f9990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9993:{NFSU2_TR(0x4f9993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9996:{NFSU2_TR(0x4f9996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9999:{NFSU2_TR(0x4f9999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f999c:{NFSU2_TR(0x4f999c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f999f:{NFSU2_TR(0x4f999f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99a2:{NFSU2_TR(0x4f99a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99a5:{NFSU2_TR(0x4f99a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99a8:{NFSU2_TR(0x4f99a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99ab:{NFSU2_TR(0x4f99ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99b1:{NFSU2_TR(0x4f99b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f99b6ull));
TAIL_STATIC(0x542ac0u,542);
}
B4f99b6:L4f99b6:{c.instructions+=6;NFSU2_TR(0x4f99b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99bc:{NFSU2_TR(0x4f99bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f99c2:{NFSU2_TR(0x4f99c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99c8:{NFSU2_TR(0x4f99c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99ce:{NFSU2_TR(0x4f99ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f99d4:{NFSU2_TR(0x4f99d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f99d9ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f99d9:L4f99d9:{c.instructions+=3;NFSU2_TR(0x4f99d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f99df:{NFSU2_TR(0x4f99df);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f99e4:{NFSU2_TR(0x4f99e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f99e9ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f99e9:L4f99e9:{c.instructions+=3;NFSU2_TR(0x4f99e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f99ef:{NFSU2_TR(0x4f99ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f99f4:{NFSU2_TR(0x4f99f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f99f9ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f99f9:L4f99f9:{c.instructions+=8;NFSU2_TR(0x4f99f9);
__builtin_memmove((R+4),(R+24),4);
}
B4f99fb:{NFSU2_TR(0x4f99fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a00:{NFSU2_TR(0x4f9a00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a06:{NFSU2_TR(0x4f9a06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1beull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a0d:{NFSU2_TR(0x4f9a0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a14:{NFSU2_TR(0x4f9a14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a1b:{NFSU2_TR(0x4f9a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9a21:{NFSU2_TR(0x4f9a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a26ull));
TAIL_STATIC(0x496080u,496);
}
B4f9a26:L4f9a26:{c.instructions+=2;NFSU2_TR(0x4f9a26);
__builtin_memmove((R+4),(R+24),4);
}
B4f9a28:{NFSU2_TR(0x4f9a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a2dull));
TAIL_STATIC(0x4ee1a0u,4ee);
}
B4f9a2d:L4f9a2d:{c.instructions+=3;NFSU2_TR(0x4f9a2d);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a32:{NFSU2_TR(0x4f9a32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a36:{NFSU2_TR(0x4f9a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a3bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f9a3b:L4f9a3b:{c.instructions+=3;NFSU2_TR(0x4f9a3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9a3e:{NFSU2_TR(0x4f9a3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f9a40:{NFSU2_TR(0x4f9a40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9a53;}}
}
B4f9a42:L4f9a42:{c.instructions+=6;NFSU2_TR(0x4f9a42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a43:{NFSU2_TR(0x4f9a43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a44:{NFSU2_TR(0x4f9a44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a45:{NFSU2_TR(0x4f9a45);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a4a:{NFSU2_TR(0x4f9a4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a4b:{NFSU2_TR(0x4f9a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a50ull));
TAIL_STATIC(0x555f50u,555);
}
B4f9a50:L4f9a50:{c.instructions+=1;NFSU2_TR(0x4f9a50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f9a53:L4f9a53:{c.instructions+=6;NFSU2_TR(0x4f9a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9a56:{NFSU2_TR(0x4f9a56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a57:{NFSU2_TR(0x4f9a57);
__builtin_memmove((R+4),(R+24),4);
}
B4f9a59:{NFSU2_TR(0x4f9a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9a60:{NFSU2_TR(0x4f9a60);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9a63:{NFSU2_TR(0x4f9a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a68ull));
TAIL_STATIC(0x495f00u,495);
}
B4f9a68:L4f9a68:{c.instructions+=3;NFSU2_TR(0x4f9a68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a69:{NFSU2_TR(0x4f9a69);
__builtin_memmove((R+4),(R+24),4);
}
B4f9a6b:{NFSU2_TR(0x4f9a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a70ull));
TAIL_STATIC(0x4ed8a0u,4ed);
}
B4f9a70:L4f9a70:{c.instructions+=1;NFSU2_TR(0x4f9a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a75ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f9a75:L4f9a75:{c.instructions+=2;NFSU2_TR(0x4f9a75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a76:{NFSU2_TR(0x4f9a76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a7bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f9a7b:L4f9a7b:{c.instructions+=3;NFSU2_TR(0x4f9a7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9a7e:{NFSU2_TR(0x4f9a7e);
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
B4f9a80:{NFSU2_TR(0x4f9a80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9a9a;}}
}
B4f9a82:L4f9a82:{c.instructions+=5;NFSU2_TR(0x4f9a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9a85:{NFSU2_TR(0x4f9a85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a86:{NFSU2_TR(0x4f9a86);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a8b:{NFSU2_TR(0x4f9a8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a8c:{NFSU2_TR(0x4f9a8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a91ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f9a91:L4f9a91:{c.instructions+=2;NFSU2_TR(0x4f9a91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9a92:{NFSU2_TR(0x4f9a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9a97ull));
TAIL_STATIC(0x555f10u,555);
}
B4f9a97:L4f9a97:{c.instructions+=1;NFSU2_TR(0x4f9a97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f9a9a:L4f9a9a:{c.instructions+=2;NFSU2_TR(0x4f9a9a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f9aa0:{NFSU2_TR(0x4f9aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9aa5ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4f9aa5:L4f9aa5:{c.instructions+=6;NFSU2_TR(0x4f9aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9aa8:{NFSU2_TR(0x4f9aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9aab:{NFSU2_TR(0x4f9aab);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f9ab1:{NFSU2_TR(0x4f9ab1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ab2:{NFSU2_TR(0x4f9ab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ab3:{NFSU2_TR(0x4f9ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9ab8ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4f9ab8:L4f9ab8:{c.instructions+=7;NFSU2_TR(0x4f9ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9abc:{NFSU2_TR(0x4f9abc);
__builtin_memmove((R+0),(R+24),4);
}
B4f9abe:{NFSU2_TR(0x4f9abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9abf:{NFSU2_TR(0x4f9abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9ac0:{NFSU2_TR(0x4f9ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9ac7:{NFSU2_TR(0x4f9ac7);
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
B4f9aca:{NFSU2_TR(0x4f9aca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9ad0:L4f9ad0:{c.instructions+=13;NFSU2_TR(0x4f9ad0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ad2:{NFSU2_TR(0x4f9ad2);
u8 U[4];
w4(U+0,u32(0x77419dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ad7:{NFSU2_TR(0x4f9ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9add:{NFSU2_TR(0x4f9add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ade:{NFSU2_TR(0x4f9ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9ae5:{NFSU2_TR(0x4f9ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ae6:{NFSU2_TR(0x4f9ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9aea:{NFSU2_TR(0x4f9aea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9aeb:{NFSU2_TR(0x4f9aeb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9aec:{NFSU2_TR(0x4f9aec);
__builtin_memmove((R+24),(R+4),4);
}
B4f9aee:{NFSU2_TR(0x4f9aee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9aef:{NFSU2_TR(0x4f9aef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9af3:{NFSU2_TR(0x4f9af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9af8ull));
TAIL_STATIC(0x551de0u,551);
}
B4f9af8:L4f9af8:{c.instructions+=18;NFSU2_TR(0x4f9af8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f9afb:{NFSU2_TR(0x4f9afb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f9afd:{NFSU2_TR(0x4f9afd);
u8 U[4];
w4(U+0,u32(0x795d00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f9b03:{NFSU2_TR(0x4f9b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b07:{NFSU2_TR(0x4f9b07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f9b09:{NFSU2_TR(0x4f9b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b0c:{NFSU2_TR(0x4f9b0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9b0d:{NFSU2_TR(0x4f9b0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9b0e:{NFSU2_TR(0x4f9b0e);
w4(R+0,u32(0x1ull));
}
B4f9b13:{NFSU2_TR(0x4f9b13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9b14:{NFSU2_TR(0x4f9b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b17:{NFSU2_TR(0x4f9b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b1a:{NFSU2_TR(0x4f9b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9b1d:{NFSU2_TR(0x4f9b1d);
u8 U[4];
w4(U+0,u32(0x798f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9b22:{NFSU2_TR(0x4f9b22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9b23:{NFSU2_TR(0x4f9b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9b26:{NFSU2_TR(0x4f9b26);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9b2b:{NFSU2_TR(0x4f9b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9b30ull));
TAIL_STATIC(0x542ac0u,542);
}
B4f9b30:L4f9b30:{c.instructions+=6;NFSU2_TR(0x4f9b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b36:{NFSU2_TR(0x4f9b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9b3c:{NFSU2_TR(0x4f9b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b42:{NFSU2_TR(0x4f9b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b48:{NFSU2_TR(0x4f9b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b4e:{NFSU2_TR(0x4f9b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9b53ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f9b53:L4f9b53:{c.instructions+=3;NFSU2_TR(0x4f9b53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9b59:{NFSU2_TR(0x4f9b59);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9b5e:{NFSU2_TR(0x4f9b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9b63ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f9b63:L4f9b63:{c.instructions+=3;NFSU2_TR(0x4f9b63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9b69:{NFSU2_TR(0x4f9b69);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9b6e:{NFSU2_TR(0x4f9b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9b73ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f9b73:L4f9b73:{c.instructions+=7;NFSU2_TR(0x4f9b73);
w4(R+4,u32(0x8637d0ull));
}
B4f9b78:{NFSU2_TR(0x4f9b78);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9b7d:{NFSU2_TR(0x4f9b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x9120409eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b87:{NFSU2_TR(0x4f9b87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9b8e:{NFSU2_TR(0x4f9b8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9b95:{NFSU2_TR(0x4f9b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9b9b:{NFSU2_TR(0x4f9b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9ba0ull));
TAIL_STATIC(0x557ec0u,557);
}
B4f9ba0:L4f9ba0:{c.instructions+=2;NFSU2_TR(0x4f9ba0);
__builtin_memmove((R+4),(R+24),4);
}
B4f9ba2:{NFSU2_TR(0x4f9ba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9ba7ull));
TAIL_STATIC(0x496210u,496);
}
B4f9ba7:L4f9ba7:{c.instructions+=2;NFSU2_TR(0x4f9ba7);
__builtin_memmove((R+4),(R+24),4);
}
B4f9ba9:{NFSU2_TR(0x4f9ba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9baeull));
TAIL_STATIC(0x4ee210u,4ee);
}
B4f9bae:L4f9bae:{c.instructions+=3;NFSU2_TR(0x4f9bae);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bb3:{NFSU2_TR(0x4f9bb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9bb7:{NFSU2_TR(0x4f9bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9bbcull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f9bbc:L4f9bbc:{c.instructions+=3;NFSU2_TR(0x4f9bbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9bbf:{NFSU2_TR(0x4f9bbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f9bc1:{NFSU2_TR(0x4f9bc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9bd4;}}
}
B4f9bc3:L4f9bc3:{c.instructions+=6;NFSU2_TR(0x4f9bc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bc4:{NFSU2_TR(0x4f9bc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bc5:{NFSU2_TR(0x4f9bc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bc6:{NFSU2_TR(0x4f9bc6);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bcb:{NFSU2_TR(0x4f9bcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bcc:{NFSU2_TR(0x4f9bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9bd1ull));
TAIL_STATIC(0x555f50u,555);
}
B4f9bd1:L4f9bd1:{c.instructions+=1;NFSU2_TR(0x4f9bd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f9bd4:L4f9bd4:{c.instructions+=5;NFSU2_TR(0x4f9bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9bd7:{NFSU2_TR(0x4f9bd7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9bd8:{NFSU2_TR(0x4f9bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9bdf:{NFSU2_TR(0x4f9bdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9be2:{NFSU2_TR(0x4f9be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9be7ull));
TAIL_STATIC(0x511e00u,511);
}
B4f9be7:L4f9be7:{c.instructions+=3;NFSU2_TR(0x4f9be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9be8:{NFSU2_TR(0x4f9be8);
w4(R+4,u32(0x8637d0ull));
}
B4f9bed:{NFSU2_TR(0x4f9bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9bf2ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B4f9bf2:L4f9bf2:{c.instructions+=7;NFSU2_TR(0x4f9bf2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9bf6:{NFSU2_TR(0x4f9bf6);
__builtin_memmove((R+0),(R+24),4);
}
B4f9bf8:{NFSU2_TR(0x4f9bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9bf9:{NFSU2_TR(0x4f9bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9bfa:{NFSU2_TR(0x4f9bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c01:{NFSU2_TR(0x4f9c01);
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
B4f9c04:{NFSU2_TR(0x4f9c04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9c10:L4f9c10:{c.instructions+=8;NFSU2_TR(0x4f9c10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c12:{NFSU2_TR(0x4f9c12);
u8 U[4];
w4(U+0,u32(0x776c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c17:{NFSU2_TR(0x4f9c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9c1d:{NFSU2_TR(0x4f9c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c1e:{NFSU2_TR(0x4f9c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c25:{NFSU2_TR(0x4f9c25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c26:{NFSU2_TR(0x4f9c26);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c28:{NFSU2_TR(0x4f9c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9c2dull));
TAIL_STATIC(0x575620u,575);
}
B4f9c2d:L4f9c2d:{c.instructions+=5;NFSU2_TR(0x4f9c2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9c30:{NFSU2_TR(0x4f9c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c34:{NFSU2_TR(0x4f9c34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9c36:{NFSU2_TR(0x4f9c36);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c3e:{NFSU2_TR(0x4f9c3e);
if(r1(R+518)){{goto L4f9c5b;}}
}
B4f9c40:L4f9c40:{c.instructions+=4;NFSU2_TR(0x4f9c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9c44:{NFSU2_TR(0x4f9c44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c45:{NFSU2_TR(0x4f9c45);
__builtin_memmove((R+4),(R+0),4);
}
B4f9c47:{NFSU2_TR(0x4f9c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9c4cull));
TAIL_STATIC(0x4ee320u,4ee);
}
B4f9c4c:L4f9c4c:{c.instructions+=4;NFSU2_TR(0x4f9c4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9c50:{NFSU2_TR(0x4f9c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c57:{NFSU2_TR(0x4f9c57);
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
B4f9c5a:{NFSU2_TR(0x4f9c5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9c5b:L4f9c5b:{c.instructions+=5;NFSU2_TR(0x4f9c5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9c5f:{NFSU2_TR(0x4f9c5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9c61:{NFSU2_TR(0x4f9c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c68:{NFSU2_TR(0x4f9c68);
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
B4f9c6b:{NFSU2_TR(0x4f9c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9c70:L4f9c70:{c.instructions+=16;NFSU2_TR(0x4f9c70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c72:{NFSU2_TR(0x4f9c72);
u8 U[4];
w4(U+0,u32(0x776c83ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c77:{NFSU2_TR(0x4f9c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9c7d:{NFSU2_TR(0x4f9c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c7e:{NFSU2_TR(0x4f9c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c85:{NFSU2_TR(0x4f9c85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c86:{NFSU2_TR(0x4f9c86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c87:{NFSU2_TR(0x4f9c87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c88:{NFSU2_TR(0x4f9c88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9c89:{NFSU2_TR(0x4f9c89);
__builtin_memmove((R+28),(R+4),4);
}
B4f9c8b:{NFSU2_TR(0x4f9c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9c8f:{NFSU2_TR(0x4f9c8f);
u8 U[4];
w4(U+0,u32(0x797f20ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f9c95:{NFSU2_TR(0x4f9c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9c98:{NFSU2_TR(0x4f9c98);
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
B4f9c9a:{NFSU2_TR(0x4f9c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9ca2:{NFSU2_TR(0x4f9ca2);
if(r1(R+518)){{goto L4f9caa;}}
}
B4f9ca4:L4f9ca4:{c.instructions+=3;NFSU2_TR(0x4f9ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f9ca6:{NFSU2_TR(0x4f9ca6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ca8:{NFSU2_TR(0x4f9ca8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9caaull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4f9caa:L4f9caa:{c.instructions+=3;NFSU2_TR(0x4f9caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f9cad:{NFSU2_TR(0x4f9cad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9caf:{NFSU2_TR(0x4f9caf);
if(r1(R+518)){{goto L4f9ce2;}}
}
B4f9cb1:L4f9cb1:{c.instructions+=4;NFSU2_TR(0x4f9cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9cb4:{NFSU2_TR(0x4f9cb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9cb7:{NFSU2_TR(0x4f9cb7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9cb9:{NFSU2_TR(0x4f9cb9);
if(r1(R+518)){{goto L4f9cd9;}}
}
B4f9cbb:L4f9cbb:{c.instructions+=1;NFSU2_TR(0x4f9cbb);
{goto L4f9cc0;}
}
B4f9cc0:L4f9cc0:{c.instructions+=6;NFSU2_TR(0x4f9cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f9cc2:{NFSU2_TR(0x4f9cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9cc5:{NFSU2_TR(0x4f9cc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4f9cc7:{NFSU2_TR(0x4f9cc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9cc8:{NFSU2_TR(0x4f9cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9ccb:{NFSU2_TR(0x4f9ccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9cd0ull));
TAIL_STATIC(0x575630u,575);
}
B4f9cd0:L4f9cd0:{c.instructions+=4;NFSU2_TR(0x4f9cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f9cd2:{NFSU2_TR(0x4f9cd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9cd5:{NFSU2_TR(0x4f9cd5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9cd7:{NFSU2_TR(0x4f9cd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f9cc0u);}goto L4f9cc0;}}
}
B4f9cd9:L4f9cd9:{c.instructions+=2;NFSU2_TR(0x4f9cd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9cda:{NFSU2_TR(0x4f9cda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9cdfull));
TAIL_STATIC(0x575630u,575);
}
B4f9cdf:L4f9cdf:{c.instructions+=1;NFSU2_TR(0x4f9cdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9ce2:L4f9ce2:{c.instructions+=5;NFSU2_TR(0x4f9ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9ce5:{NFSU2_TR(0x4f9ce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9ce8:{NFSU2_TR(0x4f9ce8);
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
B4f9cea:{NFSU2_TR(0x4f9cea);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9cef:{NFSU2_TR(0x4f9cef);
if(r1(R+518)){{goto L4f9d0a;}}
}
B4f9cf1:L4f9cf1:{c.instructions+=6;NFSU2_TR(0x4f9cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f9cf3:{NFSU2_TR(0x4f9cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9cf6:{NFSU2_TR(0x4f9cf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4f9cf8:{NFSU2_TR(0x4f9cf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9cf9:{NFSU2_TR(0x4f9cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9cfc:{NFSU2_TR(0x4f9cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9d01ull));
TAIL_STATIC(0x575630u,575);
}
B4f9d01:L4f9d01:{c.instructions+=4;NFSU2_TR(0x4f9d01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f9d03:{NFSU2_TR(0x4f9d03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9d06:{NFSU2_TR(0x4f9d06);
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
B4f9d08:{NFSU2_TR(0x4f9d08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f9cf1u);}goto L4f9cf1;}}
}
B4f9d0a:L4f9d0a:{c.instructions+=3;NFSU2_TR(0x4f9d0a);
__builtin_memmove((R+4),(R+28),4);
}
B4f9d0c:{NFSU2_TR(0x4f9d0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9d14:{NFSU2_TR(0x4f9d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9d19ull));
TAIL_STATIC(0x510d40u,510);
}
B4f9d19:L4f9d19:{c.instructions+=7;NFSU2_TR(0x4f9d19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9d1d:{NFSU2_TR(0x4f9d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9d1e:{NFSU2_TR(0x4f9d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f9d1f:{NFSU2_TR(0x4f9d1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f9d20:{NFSU2_TR(0x4f9d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9d27:{NFSU2_TR(0x4f9d27);
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
B4f9d2a:{NFSU2_TR(0x4f9d2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9d30:L4f9d30:{c.instructions+=8;NFSU2_TR(0x4f9d30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d32:{NFSU2_TR(0x4f9d32);
u8 U[4];
w4(U+0,u32(0x776ca4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d37:{NFSU2_TR(0x4f9d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9d3d:{NFSU2_TR(0x4f9d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d3e:{NFSU2_TR(0x4f9d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9d45:{NFSU2_TR(0x4f9d45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d46:{NFSU2_TR(0x4f9d46);
u8 U[4];
w4(U+0,u32(0x230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d4b:{NFSU2_TR(0x4f9d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9d50ull));
TAIL_STATIC(0x575620u,575);
}
B4f9d50:L4f9d50:{c.instructions+=5;NFSU2_TR(0x4f9d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f9d53:{NFSU2_TR(0x4f9d53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d57:{NFSU2_TR(0x4f9d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9d59:{NFSU2_TR(0x4f9d59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9d61:{NFSU2_TR(0x4f9d61);
if(r1(R+518)){{goto L4f9d7e;}}
}
B4f9d63:L4f9d63:{c.instructions+=4;NFSU2_TR(0x4f9d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9d67:{NFSU2_TR(0x4f9d67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d68:{NFSU2_TR(0x4f9d68);
__builtin_memmove((R+4),(R+0),4);
}
B4f9d6a:{NFSU2_TR(0x4f9d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9d6full));
TAIL_STATIC(0x4ee690u,4ee);
}
B4f9d6f:L4f9d6f:{c.instructions+=4;NFSU2_TR(0x4f9d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9d73:{NFSU2_TR(0x4f9d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9d7a:{NFSU2_TR(0x4f9d7a);
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
B4f9d7d:{NFSU2_TR(0x4f9d7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9d7e:L4f9d7e:{c.instructions+=5;NFSU2_TR(0x4f9d7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9d82:{NFSU2_TR(0x4f9d82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f9d84:{NFSU2_TR(0x4f9d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9d8b:{NFSU2_TR(0x4f9d8b);
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
B4f9d8e:{NFSU2_TR(0x4f9d8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f9d90:L4f9d90:{c.instructions+=14;NFSU2_TR(0x4f9d90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d92:{NFSU2_TR(0x4f9d92);
u8 U[4];
w4(U+0,u32(0x776cedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d97:{NFSU2_TR(0x4f9d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9d9d:{NFSU2_TR(0x4f9d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9d9e:{NFSU2_TR(0x4f9d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9da5:{NFSU2_TR(0x4f9da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9da6:{NFSU2_TR(0x4f9da6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9daa:{NFSU2_TR(0x4f9daa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9dab:{NFSU2_TR(0x4f9dab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9dac:{NFSU2_TR(0x4f9dac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9dad:{NFSU2_TR(0x4f9dad);
__builtin_memmove((R+24),(R+4),4);
}
B4f9daf:{NFSU2_TR(0x4f9daf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9db0:{NFSU2_TR(0x4f9db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9db4:{NFSU2_TR(0x4f9db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9db9ull));
TAIL_STATIC(0x551de0u,551);
}
B4f9db9:L4f9db9:{c.instructions+=22;NFSU2_TR(0x4f9db9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f9dbb:{NFSU2_TR(0x4f9dbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f9dbe:{NFSU2_TR(0x4f9dbe);
u8 U[4];
w4(U+0,u32(0x79770cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f9dc4:{NFSU2_TR(0x4f9dc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9dc7:{NFSU2_TR(0x4f9dc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9dcb:{NFSU2_TR(0x4f9dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9dcf:{NFSU2_TR(0x4f9dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9dd3:{NFSU2_TR(0x4f9dd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f9dd5:{NFSU2_TR(0x4f9dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9dd8:{NFSU2_TR(0x4f9dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9ddb:{NFSU2_TR(0x4f9ddb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ddc:{NFSU2_TR(0x4f9ddc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ddd:{NFSU2_TR(0x4f9ddd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9dde:{NFSU2_TR(0x4f9dde);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9de3:{NFSU2_TR(0x4f9de3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9de4:{NFSU2_TR(0x4f9de4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9de7:{NFSU2_TR(0x4f9de7);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9dec:{NFSU2_TR(0x4f9dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9def:{NFSU2_TR(0x4f9def);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9df2:{NFSU2_TR(0x4f9df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9df9:{NFSU2_TR(0x4f9df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9dfc:{NFSU2_TR(0x4f9dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9e01ull));
TAIL_STATIC(0x542ac0u,542);
}
B4f9e01:L4f9e01:{c.instructions+=5;NFSU2_TR(0x4f9e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9e07:{NFSU2_TR(0x4f9e07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9e0d:{NFSU2_TR(0x4f9e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9e13:{NFSU2_TR(0x4f9e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9e19:{NFSU2_TR(0x4f9e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9e1eull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f9e1e:L4f9e1e:{c.instructions+=3;NFSU2_TR(0x4f9e1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9e24:{NFSU2_TR(0x4f9e24);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9e29:{NFSU2_TR(0x4f9e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9e2eull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f9e2e:L4f9e2e:{c.instructions+=3;NFSU2_TR(0x4f9e2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9e34:{NFSU2_TR(0x4f9e34);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9e39:{NFSU2_TR(0x4f9e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9e3eull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f9e3e:L4f9e3e:{c.instructions+=17;NFSU2_TR(0x4f9e3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9e45:{NFSU2_TR(0x4f9e45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9e4b:{NFSU2_TR(0x4f9e4b);
__builtin_memmove((R+4),gp(0x83aab8),4);
}
B4f9e51:{NFSU2_TR(0x4f9e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9e57:{NFSU2_TR(0x4f9e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9e5d:{NFSU2_TR(0x4f9e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9e67:{NFSU2_TR(0x4f9e67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f9e6d:{NFSU2_TR(0x4f9e6d);
__builtin_memmove((R+4),gp(0x85ad28),4);
}
B4f9e73:{NFSU2_TR(0x4f9e73);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4f9e78:{NFSU2_TR(0x4f9e78);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4f9e7e:{NFSU2_TR(0x4f9e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f9e84:{NFSU2_TR(0x4f9e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f9e8a:{NFSU2_TR(0x4f9e8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B4f9e8d:{NFSU2_TR(0x4f9e8d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfeull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f9e92:{NFSU2_TR(0x4f9e92);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f9e97:{NFSU2_TR(0x4f9e97);
__builtin_memmove(gp(0x7f444c),(R+8),4);
}
B4f9e9d:{NFSU2_TR(0x4f9e9d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f9f3c;}}
}
B4f9ea3:L4f9ea3:{c.instructions+=2;NFSU2_TR(0x4f9ea3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4fa1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4f9eaa:{NFSU2_TR(0x4f9eaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4fa188ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f9eb1:L4f9eb1:{c.instructions+=2;NFSU2_TR(0x4f9eb1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9eb4:{NFSU2_TR(0x4f9eb4);
if(r1(R+518)){{goto L4f9ebb;}}
}
B4f9eb6:L4f9eb6:{c.instructions+=2;NFSU2_TR(0x4f9eb6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9eb9:{NFSU2_TR(0x4f9eb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9ee6;}}
}
B4f9ebb:L4f9ebb:{c.instructions+=4;NFSU2_TR(0x4f9ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9ebe:{NFSU2_TR(0x4f9ebe);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ec3:{NFSU2_TR(0x4f9ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ec4:{NFSU2_TR(0x4f9ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9ec9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f9ec9:L4f9ec9:{c.instructions+=2;NFSU2_TR(0x4f9ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9eca:{NFSU2_TR(0x4f9eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9ecfull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f9ecf:L4f9ecf:{c.instructions+=4;NFSU2_TR(0x4f9ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9ed2:{NFSU2_TR(0x4f9ed2);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ed7:{NFSU2_TR(0x4f9ed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ed8:{NFSU2_TR(0x4f9ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9eddull));
TAIL_STATIC(0x5379c0u,537);
}
B4f9edd:L4f9edd:{c.instructions+=2;NFSU2_TR(0x4f9edd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ede:{NFSU2_TR(0x4f9ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9ee3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f9ee3:L4f9ee3:{c.instructions+=1;NFSU2_TR(0x4f9ee3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f9ee6:L4f9ee6:{c.instructions+=2;NFSU2_TR(0x4f9ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xe1385c1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9eed:{NFSU2_TR(0x4f9eed);
{goto L4f9f3c;}
}
B4f9eef:L4f9eef:{c.instructions+=2;NFSU2_TR(0x4f9eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x10e836c8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9ef6:{NFSU2_TR(0x4f9ef6);
{goto L4f9f3c;}
}
B4f9ef8:L4f9ef8:{c.instructions+=2;NFSU2_TR(0x4f9ef8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9efb:{NFSU2_TR(0x4f9efb);
if(r1(R+518)){{goto L4f9f02;}}
}
B4f9efd:L4f9efd:{c.instructions+=2;NFSU2_TR(0x4f9efd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9f00:{NFSU2_TR(0x4f9f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9f12;}}
}
B4f9f02:L4f9f02:{c.instructions+=2;NFSU2_TR(0x4f9f02);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4f9f08:{NFSU2_TR(0x4f9f08);
s4(0x7f444c,u32(0x3ull));
}
B4f9f12:L4f9f12:{c.instructions+=2;NFSU2_TR(0x4f9f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xe1385c1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9f19:{NFSU2_TR(0x4f9f19);
{goto L4f9f3c;}
}
B4f9f1b:L4f9f1b:{c.instructions+=2;NFSU2_TR(0x4f9f1b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9f1e:{NFSU2_TR(0x4f9f1e);
if(r1(R+518)){{goto L4f9f25;}}
}
B4f9f20:L4f9f20:{c.instructions+=2;NFSU2_TR(0x4f9f20);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9f23:{NFSU2_TR(0x4f9f23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f9f35;}}
}
B4f9f25:L4f9f25:{c.instructions+=2;NFSU2_TR(0x4f9f25);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4f9f2b:{NFSU2_TR(0x4f9f2b);
s4(0x7f444c,u32(0x3ull));
}
B4f9f35:L4f9f35:{c.instructions+=1;NFSU2_TR(0x4f9f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xa7fa00b6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f9f3c:L4f9f3c:{c.instructions+=7;NFSU2_TR(0x4f9f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f9f3f:{NFSU2_TR(0x4f9f3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9f40:{NFSU2_TR(0x4f9f40);
__builtin_memmove(gp(0x85ad28),(R+4),4);
}
B4f9f46:{NFSU2_TR(0x4f9f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9f49:{NFSU2_TR(0x4f9f49);
u8 U[4];
w4(U+0,u32(0xf5a9d520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9f4e:{NFSU2_TR(0x4f9f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9f4f:{NFSU2_TR(0x4f9f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9f54ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f9f54:L4f9f54:{c.instructions+=2;NFSU2_TR(0x4f9f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9f55:{NFSU2_TR(0x4f9f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9f5aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f9f5a:L4f9f5a:{c.instructions+=4;NFSU2_TR(0x4f9f5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f9f5d:{NFSU2_TR(0x4f9f5d);
__builtin_memmove((R+4),(R+24),4);
}
B4f9f5f:{NFSU2_TR(0x4f9f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9f65:{NFSU2_TR(0x4f9f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9f6aull));
TAIL_STATIC(0x497bf0u,497);
}
B4f9f6a:L4f9f6a:{c.instructions+=3;NFSU2_TR(0x4f9f6a);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4f9f6f:{NFSU2_TR(0x4f9f6f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9f72:{NFSU2_TR(0x4f9f72);
if(r1(R+518)){{goto L4f9fa9;}}
}
B4f9f74:L4f9f74:{c.instructions+=2;NFSU2_TR(0x4f9f74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9f79:{NFSU2_TR(0x4f9f79);
if(r1(R+518)){{goto L4f9fa9;}}
}
B4f9f7b:L4f9f7b:{c.instructions+=2;NFSU2_TR(0x4f9f7b);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9f82:{NFSU2_TR(0x4f9f82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4fa05eu,4fa);}
}
B4f9f88:L4f9f88:{c.instructions+=6;NFSU2_TR(0x4f9f88);
__builtin_memmove((R+8),gp(0x85ad28),4);
}
B4f9f8e:{NFSU2_TR(0x4f9f8e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4f9f94:{NFSU2_TR(0x4f9f94);
w4(R+0,u32(0x3ull));
}
B4f9f99:{NFSU2_TR(0x4f9f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9f9f:{NFSU2_TR(0x4f9f9f);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4f9fa4:{NFSU2_TR(0x4f9fa4);
TAIL_STATIC(0x4fa05eu,4fa);
}
B4f9fa9:L4f9fa9:{c.instructions+=4;NFSU2_TR(0x4f9fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f9fac:{NFSU2_TR(0x4f9fac);
u8 U[4];
w4(U+0,u32(0x7976fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9fb1:{NFSU2_TR(0x4f9fb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9fb2:{NFSU2_TR(0x4f9fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f9fb7ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4f9fb7:L4f9fb7:{c.instructions+=4;NFSU2_TR(0x4f9fb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f9fba:{NFSU2_TR(0x4f9fba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f9fbc:{NFSU2_TR(0x4f9fbc);
w4(R+20,u32(0x10ull));
}
B4f9fc1:{NFSU2_TR(0x4f9fc1);
if(r1(R+518)){TAIL_STATIC(0x4fa028u,4fa);}
}
B4f9fc3:L4f9fc3:{c.instructions+=3;NFSU2_TR(0x4f9fc3);
u8 U[2];
__builtin_memmove((U+0),gp(0x7f4450),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f9fc9:{NFSU2_TR(0x4f9fc9);
s4(0x850078,u32(0x8ull));
}
B4f9fd3:{NFSU2_TR(0x4f9fd3);
if(r1(R+518)){{goto L4f9ff2;}}
}
B4f9fd5:L4f9fd5:{c.instructions+=5;NFSU2_TR(0x4f9fd5);
__builtin_memmove((R+0),gp(0x85ad28),4);
}
B4f9fda:{NFSU2_TR(0x4f9fda);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4f9fe0:{NFSU2_TR(0x4f9fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f9fe6:{NFSU2_TR(0x4f9fe6);
__builtin_memmove(gp(0x7f444c),(R+20),4);
}
B4f9fec:{NFSU2_TR(0x4f9fec);
__builtin_memmove(gp(0x7f4450),(R+12),1);
}
B4f9ff2:L4f9ff2:{c.instructions+=3;NFSU2_TR(0x4f9ff2);
__builtin_memmove((R+0),gp(0x836338),4);
}
B4f9ff7:{NFSU2_TR(0x4f9ff7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f9ff9:{NFSU2_TR(0x4f9ff9);
if(r1(R+518)){TAIL_STATIC(0x4fa005u,4fa);}
}
B4f9ffb:L4f9ffb:{c.instructions+=3;NFSU2_TR(0x4f9ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f9ffc:{NFSU2_TR(0x4f9ffc);
__builtin_memmove((R+4),(R+24),4);
}
B4f9ffe:{NFSU2_TR(0x4f9ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa003ull));
TAIL_STATIC(0x497f20u,497);
}
XIT:NFSU2_TR_EXIT(0x4f9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
