#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4d7(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ea(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 page_4e9(Cpu& c){return body_4e9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e9002:goto L4e9002;
case 0x4e9003:c.instructions+=1;goto B4e9003;
case 0x4e9006:goto L4e9006;
case 0x4e900a:c.instructions+=6;goto B4e900a;
case 0x4e9010:c.instructions+=5;goto B4e9010;
case 0x4e9013:c.instructions+=4;goto B4e9013;
case 0x4e9016:c.instructions+=3;goto B4e9016;
case 0x4e901b:c.instructions+=2;goto B4e901b;
case 0x4e901c:c.instructions+=1;goto B4e901c;
case 0x4e9021:goto L4e9021;
case 0x4e9022:c.instructions+=1;goto B4e9022;
case 0x4e9025:goto L4e9025;
case 0x4e9028:c.instructions+=2;goto B4e9028;
case 0x4e902a:c.instructions+=1;goto B4e902a;
case 0x4e902c:goto L4e902c;
case 0x4e902f:c.instructions+=1;goto B4e902f;
case 0x4e9031:goto L4e9031;
case 0x4e9033:goto L4e9033;
case 0x4e9036:c.instructions+=3;goto B4e9036;
case 0x4e903b:c.instructions+=2;goto B4e903b;
case 0x4e903c:c.instructions+=1;goto B4e903c;
case 0x4e9041:goto L4e9041;
case 0x4e9044:c.instructions+=3;goto B4e9044;
case 0x4e9049:c.instructions+=2;goto B4e9049;
case 0x4e904a:c.instructions+=1;goto B4e904a;
case 0x4e904f:goto L4e904f;
case 0x4e9052:c.instructions+=2;goto B4e9052;
case 0x4e9054:c.instructions+=1;goto B4e9054;
case 0x4e9059:goto L4e9059;
case 0x4e905f:c.instructions+=3;goto B4e905f;
case 0x4e9069:c.instructions+=2;goto B4e9069;
case 0x4e906a:c.instructions+=1;goto B4e906a;
case 0x4e906d:goto L4e906d;
case 0x4e9073:c.instructions+=5;goto B4e9073;
case 0x4e9076:c.instructions+=4;goto B4e9076;
case 0x4e9079:c.instructions+=3;goto B4e9079;
case 0x4e907a:c.instructions+=2;goto B4e907a;
case 0x4e907f:c.instructions+=1;goto B4e907f;
case 0x4e9084:goto L4e9084;
case 0x4e9088:c.instructions+=4;goto B4e9088;
case 0x4e908b:c.instructions+=3;goto B4e908b;
case 0x4e9091:c.instructions+=2;goto B4e9091;
case 0x4e9092:c.instructions+=1;goto B4e9092;
case 0x4e9095:goto L4e9095;
case 0x4e909a:c.instructions+=1;goto B4e909a;
case 0x4e90a0:goto L4e90a0;
case 0x4e90a5:c.instructions+=1;goto B4e90a5;
case 0x4e90ab:goto L4e90ab;
case 0x4e90b0:c.instructions+=1;goto B4e90b0;
case 0x4e90b6:goto L4e90b6;
case 0x4e90bc:c.instructions+=2;goto B4e90bc;
case 0x4e90be:c.instructions+=1;goto B4e90be;
case 0x4e90c4:goto L4e90c4;
case 0x4e90ce:c.instructions+=9;goto B4e90ce;
case 0x4e90d8:c.instructions+=8;goto B4e90d8;
case 0x4e90de:c.instructions+=7;goto B4e90de;
case 0x4e90e1:c.instructions+=6;goto B4e90e1;
case 0x4e90e2:c.instructions+=5;goto B4e90e2;
case 0x4e90e8:c.instructions+=4;goto B4e90e8;
case 0x4e90e9:c.instructions+=3;goto B4e90e9;
case 0x4e90ec:c.instructions+=2;goto B4e90ec;
case 0x4e90ee:c.instructions+=1;goto B4e90ee;
case 0x4e90f0:goto L4e90f0;
case 0x4e90f1:goto L4e90f1;
case 0x4e90f6:c.instructions+=1;goto B4e90f6;
case 0x4e90fb:goto L4e90fb;
case 0x4e90ff:c.instructions+=2;goto B4e90ff;
case 0x4e9100:c.instructions+=1;goto B4e9100;
case 0x4e9105:goto L4e9105;
case 0x4e9108:c.instructions+=2;goto B4e9108;
case 0x4e910b:c.instructions+=1;goto B4e910b;
case 0x4e910d:goto L4e910d;
case 0x4e910f:c.instructions+=2;goto B4e910f;
case 0x4e9110:c.instructions+=1;goto B4e9110;
case 0x4e9115:goto L4e9115;
case 0x4e9118:c.instructions+=2;goto B4e9118;
case 0x4e911a:c.instructions+=1;goto B4e911a;
case 0x4e911c:goto L4e911c;
case 0x4e911f:c.instructions+=8;goto B4e911f;
case 0x4e9122:c.instructions+=7;goto B4e9122;
case 0x4e9123:c.instructions+=6;goto B4e9123;
case 0x4e9124:c.instructions+=5;goto B4e9124;
case 0x4e9127:c.instructions+=4;goto B4e9127;
case 0x4e9128:c.instructions+=3;goto B4e9128;
case 0x4e9129:c.instructions+=2;goto B4e9129;
case 0x4e912b:c.instructions+=1;goto B4e912b;
case 0x4e9130:goto L4e9130;
case 0x4e9132:c.instructions+=2;goto B4e9132;
case 0x4e9134:c.instructions+=1;goto B4e9134;
case 0x4e9136:goto L4e9136;
case 0x4e9137:goto L4e9137;
case 0x4e913c:c.instructions+=5;goto B4e913c;
case 0x4e913e:c.instructions+=4;goto B4e913e;
case 0x4e9143:c.instructions+=3;goto B4e9143;
case 0x4e9148:c.instructions+=2;goto B4e9148;
case 0x4e9149:c.instructions+=1;goto B4e9149;
case 0x4e914e:goto L4e914e;
case 0x4e9151:c.instructions+=4;goto B4e9151;
case 0x4e9152:c.instructions+=3;goto B4e9152;
case 0x4e9153:c.instructions+=2;goto B4e9153;
case 0x4e9154:c.instructions+=1;goto B4e9154;
case 0x4e9157:goto L4e9157;
case 0x4e915a:c.instructions+=1;goto B4e915a;
case 0x4e915f:goto L4e915f;
case 0x4e9160:c.instructions+=1;goto B4e9160;
case 0x4e9163:goto L4e9163;
case 0x4e9167:c.instructions+=3;goto B4e9167;
case 0x4e916d:c.instructions+=2;goto B4e916d;
case 0x4e9170:c.instructions+=1;goto B4e9170;
case 0x4e9175:goto L4e9175;
case 0x4e9176:c.instructions+=1;goto B4e9176;
case 0x4e9180:goto L4e9180;
case 0x4e9182:c.instructions+=14;goto B4e9182;
case 0x4e9187:c.instructions+=13;goto B4e9187;
case 0x4e918d:c.instructions+=12;goto B4e918d;
case 0x4e918e:c.instructions+=11;goto B4e918e;
case 0x4e9195:c.instructions+=10;goto B4e9195;
case 0x4e9196:c.instructions+=9;goto B4e9196;
case 0x4e9197:c.instructions+=8;goto B4e9197;
case 0x4e919b:c.instructions+=7;goto B4e919b;
case 0x4e919d:c.instructions+=6;goto B4e919d;
case 0x4e91a0:c.instructions+=5;goto B4e91a0;
case 0x4e91a4:c.instructions+=4;goto B4e91a4;
case 0x4e91a7:c.instructions+=3;goto B4e91a7;
case 0x4e91aa:c.instructions+=2;goto B4e91aa;
case 0x4e91ac:c.instructions+=1;goto B4e91ac;
case 0x4e91ae:goto L4e91ae;
case 0x4e91b0:goto L4e91b0;
case 0x4e91b2:c.instructions+=3;goto B4e91b2;
case 0x4e91b5:c.instructions+=2;goto B4e91b5;
case 0x4e91b6:c.instructions+=1;goto B4e91b6;
case 0x4e91bb:goto L4e91bb;
case 0x4e91bd:c.instructions+=6;goto B4e91bd;
case 0x4e91bf:c.instructions+=5;goto B4e91bf;
case 0x4e91c2:c.instructions+=4;goto B4e91c2;
case 0x4e91c4:c.instructions+=3;goto B4e91c4;
case 0x4e91c5:c.instructions+=2;goto B4e91c5;
case 0x4e91c8:c.instructions+=1;goto B4e91c8;
case 0x4e91cd:goto L4e91cd;
case 0x4e91cf:c.instructions+=3;goto B4e91cf;
case 0x4e91d2:c.instructions+=2;goto B4e91d2;
case 0x4e91d4:c.instructions+=1;goto B4e91d4;
case 0x4e91d6:goto L4e91d6;
case 0x4e91d8:c.instructions+=3;goto B4e91d8;
case 0x4e91da:c.instructions+=2;goto B4e91da;
case 0x4e91e2:c.instructions+=1;goto B4e91e2;
case 0x4e91e4:goto L4e91e4;
case 0x4e91e6:c.instructions+=5;goto B4e91e6;
case 0x4e91e9:c.instructions+=4;goto B4e91e9;
case 0x4e91eb:c.instructions+=3;goto B4e91eb;
case 0x4e91ec:c.instructions+=2;goto B4e91ec;
case 0x4e91ef:c.instructions+=1;goto B4e91ef;
case 0x4e91f4:goto L4e91f4;
case 0x4e91f6:c.instructions+=3;goto B4e91f6;
case 0x4e91f9:c.instructions+=2;goto B4e91f9;
case 0x4e91fb:c.instructions+=1;goto B4e91fb;
case 0x4e91fd:goto L4e91fd;
case 0x4e9201:c.instructions+=4;goto B4e9201;
case 0x4e9202:c.instructions+=3;goto B4e9202;
case 0x4e9209:c.instructions+=2;goto B4e9209;
case 0x4e920c:c.instructions+=1;goto B4e920c;
case 0x4e9210:goto L4e9210;
case 0x4e9211:c.instructions+=6;goto B4e9211;
case 0x4e9212:c.instructions+=5;goto B4e9212;
case 0x4e9214:c.instructions+=4;goto B4e9214;
case 0x4e9217:c.instructions+=3;goto B4e9217;
case 0x4e9219:c.instructions+=2;goto B4e9219;
case 0x4e921a:c.instructions+=1;goto B4e921a;
case 0x4e9220:goto L4e9220;
case 0x4e9223:c.instructions+=2;goto B4e9223;
case 0x4e9225:c.instructions+=1;goto B4e9225;
case 0x4e922b:goto L4e922b;
case 0x4e9230:c.instructions+=1;goto B4e9230;
case 0x4e9235:goto L4e9235;
case 0x4e9237:c.instructions+=1;goto B4e9237;
case 0x4e923d:goto L4e923d;
case 0x4e9240:c.instructions+=3;goto B4e9240;
case 0x4e9242:c.instructions+=2;goto B4e9242;
case 0x4e9245:c.instructions+=1;goto B4e9245;
case 0x4e9247:goto L4e9247;
case 0x4e924c:c.instructions+=1;goto B4e924c;
case 0x4e924e:goto L4e924e;
case 0x4e9252:c.instructions+=3;goto B4e9252;
case 0x4e9253:c.instructions+=2;goto B4e9253;
case 0x4e9255:c.instructions+=1;goto B4e9255;
case 0x4e925a:goto L4e925a;
case 0x4e925c:c.instructions+=1;goto B4e925c;
case 0x4e925e:goto L4e925e;
case 0x4e9261:c.instructions+=2;goto B4e9261;
case 0x4e9263:c.instructions+=1;goto B4e9263;
case 0x4e9265:goto L4e9265;
case 0x4e9268:c.instructions+=7;goto B4e9268;
case 0x4e926b:c.instructions+=6;goto B4e926b;
case 0x4e926e:c.instructions+=5;goto B4e926e;
case 0x4e9271:c.instructions+=4;goto B4e9271;
case 0x4e9272:c.instructions+=3;goto B4e9272;
case 0x4e9273:c.instructions+=2;goto B4e9273;
case 0x4e9274:c.instructions+=1;goto B4e9274;
case 0x4e9279:goto L4e9279;
case 0x4e927b:c.instructions+=3;goto B4e927b;
case 0x4e9281:c.instructions+=2;goto B4e9281;
case 0x4e9287:c.instructions+=1;goto B4e9287;
case 0x4e928c:goto L4e928c;
case 0x4e928d:c.instructions+=2;goto B4e928d;
case 0x4e928f:c.instructions+=1;goto B4e928f;
case 0x4e9294:goto L4e9294;
case 0x4e9297:c.instructions+=6;goto B4e9297;
case 0x4e9299:c.instructions+=5;goto B4e9299;
case 0x4e929c:c.instructions+=4;goto B4e929c;
case 0x4e929e:c.instructions+=3;goto B4e929e;
case 0x4e929f:c.instructions+=2;goto B4e929f;
case 0x4e92a2:c.instructions+=1;goto B4e92a2;
case 0x4e92a7:goto L4e92a7;
case 0x4e92aa:c.instructions+=3;goto B4e92aa;
case 0x4e92ad:c.instructions+=2;goto B4e92ad;
case 0x4e92ae:c.instructions+=1;goto B4e92ae;
case 0x4e92b1:goto L4e92b1;
case 0x4e92b4:c.instructions+=1;goto B4e92b4;
case 0x4e92b6:goto L4e92b6;
case 0x4e92bc:goto L4e92bc;
case 0x4e92be:c.instructions+=2;goto B4e92be;
case 0x4e92c0:c.instructions+=1;goto B4e92c0;
case 0x4e92c2:goto L4e92c2;
case 0x4e92c8:c.instructions+=1;goto B4e92c8;
case 0x4e92ce:goto L4e92ce;
case 0x4e92d1:c.instructions+=2;goto B4e92d1;
case 0x4e92d3:c.instructions+=1;goto B4e92d3;
case 0x4e92d8:goto L4e92d8;
case 0x4e92da:c.instructions+=1;goto B4e92da;
case 0x4e92e0:goto L4e92e0;
case 0x4e92e3:c.instructions+=2;goto B4e92e3;
case 0x4e92e5:c.instructions+=1;goto B4e92e5;
case 0x4e92e7:goto L4e92e7;
case 0x4e92e9:c.instructions+=12;goto B4e92e9;
case 0x4e92ec:c.instructions+=11;goto B4e92ec;
case 0x4e92ef:c.instructions+=10;goto B4e92ef;
case 0x4e92f1:c.instructions+=9;goto B4e92f1;
case 0x4e92f7:c.instructions+=8;goto B4e92f7;
case 0x4e92fd:c.instructions+=7;goto B4e92fd;
case 0x4e9302:c.instructions+=6;goto B4e9302;
case 0x4e9303:c.instructions+=5;goto B4e9303;
case 0x4e9304:c.instructions+=4;goto B4e9304;
case 0x4e930a:c.instructions+=3;goto B4e930a;
case 0x4e930c:c.instructions+=2;goto B4e930c;
case 0x4e9310:c.instructions+=1;goto B4e9310;
case 0x4e9315:goto L4e9315;
case 0x4e9319:c.instructions+=5;goto B4e9319;
case 0x4e931c:c.instructions+=4;goto B4e931c;
case 0x4e9322:c.instructions+=3;goto B4e9322;
case 0x4e9324:c.instructions+=2;goto B4e9324;
case 0x4e9327:c.instructions+=1;goto B4e9327;
case 0x4e9329:goto L4e9329;
case 0x4e932d:c.instructions+=1;goto B4e932d;
case 0x4e9332:goto L4e9332;
case 0x4e9333:c.instructions+=2;goto B4e9333;
case 0x4e9338:c.instructions+=1;goto B4e9338;
case 0x4e933d:goto L4e933d;
case 0x4e9342:goto L4e9342;
case 0x4e9347:c.instructions+=1;goto B4e9347;
case 0x4e934c:goto L4e934c;
case 0x4e934f:c.instructions+=5;goto B4e934f;
case 0x4e9350:c.instructions+=4;goto B4e9350;
case 0x4e9353:c.instructions+=3;goto B4e9353;
case 0x4e9354:c.instructions+=2;goto B4e9354;
case 0x4e9355:c.instructions+=1;goto B4e9355;
case 0x4e935a:goto L4e935a;
case 0x4e935d:c.instructions+=4;goto B4e935d;
case 0x4e935e:c.instructions+=3;goto B4e935e;
case 0x4e935f:c.instructions+=2;goto B4e935f;
case 0x4e9360:c.instructions+=1;goto B4e9360;
case 0x4e9363:goto L4e9363;
case 0x4e9368:c.instructions+=1;goto B4e9368;
case 0x4e936d:goto L4e936d;
case 0x4e936f:c.instructions+=1;goto B4e936f;
case 0x4e9371:goto L4e9371;
case 0x4e9376:c.instructions+=1;goto B4e9376;
case 0x4e937b:goto L4e937b;
case 0x4e937d:c.instructions+=1;goto B4e937d;
case 0x4e937f:goto L4e937f;
case 0x4e9384:c.instructions+=1;goto B4e9384;
case 0x4e9389:goto L4e9389;
case 0x4e938b:c.instructions+=1;goto B4e938b;
case 0x4e938d:goto L4e938d;
case 0x4e9392:c.instructions+=1;goto B4e9392;
case 0x4e9397:goto L4e9397;
case 0x4e9399:c.instructions+=1;goto B4e9399;
case 0x4e939b:goto L4e939b;
case 0x4e93a0:c.instructions+=9;goto B4e93a0;
case 0x4e93a6:c.instructions+=8;goto B4e93a6;
case 0x4e93aa:c.instructions+=7;goto B4e93aa;
case 0x4e93ae:c.instructions+=6;goto B4e93ae;
case 0x4e93b4:c.instructions+=5;goto B4e93b4;
case 0x4e93b8:c.instructions+=4;goto B4e93b8;
case 0x4e93be:c.instructions+=3;goto B4e93be;
case 0x4e93c0:c.instructions+=2;goto B4e93c0;
case 0x4e93c3:c.instructions+=1;goto B4e93c3;
case 0x4e93c5:goto L4e93c5;
case 0x4e93c8:c.instructions+=6;goto B4e93c8;
case 0x4e93cb:c.instructions+=5;goto B4e93cb;
case 0x4e93cd:c.instructions+=4;goto B4e93cd;
case 0x4e93d2:c.instructions+=3;goto B4e93d2;
case 0x4e93d3:c.instructions+=2;goto B4e93d3;
case 0x4e93d4:c.instructions+=1;goto B4e93d4;
case 0x4e93d9:goto L4e93d9;
case 0x4e93dd:c.instructions+=2;goto B4e93dd;
case 0x4e93e0:c.instructions+=1;goto B4e93e0;
case 0x4e93e5:goto L4e93e5;
case 0x4e93e6:c.instructions+=2;goto B4e93e6;
case 0x4e93eb:c.instructions+=1;goto B4e93eb;
case 0x4e93f0:goto L4e93f0;
case 0x4e93f3:c.instructions+=6;goto B4e93f3;
case 0x4e93f6:c.instructions+=5;goto B4e93f6;
case 0x4e93f7:c.instructions+=4;goto B4e93f7;
case 0x4e93fa:c.instructions+=3;goto B4e93fa;
case 0x4e93fb:c.instructions+=2;goto B4e93fb;
case 0x4e93fc:c.instructions+=1;goto B4e93fc;
case 0x4e9401:goto L4e9401;
case 0x4e9404:c.instructions+=4;goto B4e9404;
case 0x4e9405:c.instructions+=3;goto B4e9405;
case 0x4e9406:c.instructions+=2;goto B4e9406;
case 0x4e9407:c.instructions+=1;goto B4e9407;
case 0x4e940a:goto L4e940a;
case 0x4e940d:c.instructions+=6;goto B4e940d;
case 0x4e9410:c.instructions+=5;goto B4e9410;
case 0x4e9412:c.instructions+=4;goto B4e9412;
case 0x4e9417:c.instructions+=3;goto B4e9417;
case 0x4e9418:c.instructions+=2;goto B4e9418;
case 0x4e9419:c.instructions+=1;goto B4e9419;
case 0x4e941e:goto L4e941e;
case 0x4e9421:c.instructions+=4;goto B4e9421;
case 0x4e9422:c.instructions+=3;goto B4e9422;
case 0x4e9423:c.instructions+=2;goto B4e9423;
case 0x4e9424:c.instructions+=1;goto B4e9424;
case 0x4e9427:goto L4e9427;
case 0x4e942a:c.instructions+=6;goto B4e942a;
case 0x4e942d:c.instructions+=5;goto B4e942d;
case 0x4e942f:c.instructions+=4;goto B4e942f;
case 0x4e9434:c.instructions+=3;goto B4e9434;
case 0x4e9435:c.instructions+=2;goto B4e9435;
case 0x4e9436:c.instructions+=1;goto B4e9436;
case 0x4e943b:goto L4e943b;
case 0x4e943e:c.instructions+=4;goto B4e943e;
case 0x4e943f:c.instructions+=3;goto B4e943f;
case 0x4e9440:c.instructions+=2;goto B4e9440;
case 0x4e9441:c.instructions+=1;goto B4e9441;
case 0x4e9444:goto L4e9444;
case 0x4e9447:c.instructions+=6;goto B4e9447;
case 0x4e944a:c.instructions+=5;goto B4e944a;
case 0x4e944c:c.instructions+=4;goto B4e944c;
case 0x4e9451:c.instructions+=3;goto B4e9451;
case 0x4e9452:c.instructions+=2;goto B4e9452;
case 0x4e9453:c.instructions+=1;goto B4e9453;
case 0x4e9458:goto L4e9458;
case 0x4e945b:goto L4e945b;
case 0x4e945c:c.instructions+=3;goto B4e945c;
case 0x4e945d:c.instructions+=2;goto B4e945d;
case 0x4e945e:c.instructions+=1;goto B4e945e;
case 0x4e9470:goto L4e9470;
case 0x4e9471:c.instructions+=6;goto B4e9471;
case 0x4e9472:c.instructions+=5;goto B4e9472;
case 0x4e9474:c.instructions+=4;goto B4e9474;
case 0x4e9477:c.instructions+=3;goto B4e9477;
case 0x4e947a:c.instructions+=2;goto B4e947a;
case 0x4e947b:c.instructions+=1;goto B4e947b;
case 0x4e947d:goto L4e947d;
case 0x4e947f:c.instructions+=3;goto B4e947f;
case 0x4e9481:c.instructions+=2;goto B4e9481;
case 0x4e9488:c.instructions+=1;goto B4e9488;
case 0x4e948d:goto L4e948d;
case 0x4e9491:c.instructions+=2;goto B4e9491;
case 0x4e9492:c.instructions+=1;goto B4e9492;
case 0x4e9497:goto L4e9497;
case 0x4e9498:c.instructions+=2;goto B4e9498;
case 0x4e9499:c.instructions+=1;goto B4e9499;
case 0x4e949e:goto L4e949e;
case 0x4e94a0:c.instructions+=3;goto B4e94a0;
case 0x4e94a1:c.instructions+=2;goto B4e94a1;
case 0x4e94a2:c.instructions+=1;goto B4e94a2;
case 0x4e94a7:goto L4e94a7;
case 0x4e94aa:c.instructions+=3;goto B4e94aa;
case 0x4e94ab:c.instructions+=2;goto B4e94ab;
case 0x4e94ae:c.instructions+=1;goto B4e94ae;
case 0x4e94b3:goto L4e94b3;
case 0x4e94b6:c.instructions+=6;goto B4e94b6;
case 0x4e94b7:c.instructions+=5;goto B4e94b7;
case 0x4e94b8:c.instructions+=4;goto B4e94b8;
case 0x4e94bb:c.instructions+=3;goto B4e94bb;
case 0x4e94bc:c.instructions+=2;goto B4e94bc;
case 0x4e94bd:c.instructions+=1;goto B4e94bd;
case 0x4e94c0:goto L4e94c0;
case 0x4e94c2:c.instructions+=11;goto B4e94c2;
case 0x4e94c7:c.instructions+=10;goto B4e94c7;
case 0x4e94cd:c.instructions+=9;goto B4e94cd;
case 0x4e94ce:c.instructions+=8;goto B4e94ce;
case 0x4e94d5:c.instructions+=7;goto B4e94d5;
case 0x4e94d6:c.instructions+=6;goto B4e94d6;
case 0x4e94da:c.instructions+=5;goto B4e94da;
case 0x4e94db:c.instructions+=4;goto B4e94db;
case 0x4e94dd:c.instructions+=3;goto B4e94dd;
case 0x4e94de:c.instructions+=2;goto B4e94de;
case 0x4e94e2:c.instructions+=1;goto B4e94e2;
case 0x4e94e7:goto L4e94e7;
case 0x4e94e9:c.instructions+=5;goto B4e94e9;
case 0x4e94eb:c.instructions+=4;goto B4e94eb;
case 0x4e94ef:c.instructions+=3;goto B4e94ef;
case 0x4e94f5:c.instructions+=2;goto B4e94f5;
case 0x4e94fb:c.instructions+=1;goto B4e94fb;
case 0x4e9500:goto L4e9500;
case 0x4e9504:c.instructions+=5;goto B4e9504;
case 0x4e9506:c.instructions+=4;goto B4e9506;
case 0x4e9507:c.instructions+=3;goto B4e9507;
case 0x4e950e:c.instructions+=2;goto B4e950e;
case 0x4e9511:c.instructions+=1;goto B4e9511;
case 0x4e9520:goto L4e9520;
case 0x4e9521:c.instructions+=2;goto B4e9521;
case 0x4e9523:c.instructions+=1;goto B4e9523;
case 0x4e9528:goto L4e9528;
case 0x4e952d:c.instructions+=1;goto B4e952d;
case 0x4e952f:goto L4e952f;
case 0x4e9530:c.instructions+=1;goto B4e9530;
case 0x4e9535:goto L4e9535;
case 0x4e9538:goto L4e9538;
case 0x4e953a:c.instructions+=2;goto B4e953a;
case 0x4e953b:c.instructions+=1;goto B4e953b;
case 0x4e9540:goto L4e9540;
case 0x4e9542:c.instructions+=13;goto B4e9542;
case 0x4e9547:c.instructions+=12;goto B4e9547;
case 0x4e954d:c.instructions+=11;goto B4e954d;
case 0x4e954e:c.instructions+=10;goto B4e954e;
case 0x4e9555:c.instructions+=9;goto B4e9555;
case 0x4e9556:c.instructions+=8;goto B4e9556;
case 0x4e9557:c.instructions+=7;goto B4e9557;
case 0x4e9559:c.instructions+=6;goto B4e9559;
case 0x4e955d:c.instructions+=5;goto B4e955d;
case 0x4e9563:c.instructions+=4;goto B4e9563;
case 0x4e9569:c.instructions+=3;goto B4e9569;
case 0x4e956b:c.instructions+=2;goto B4e956b;
case 0x4e9573:c.instructions+=1;goto B4e9573;
case 0x4e9578:goto L4e9578;
case 0x4e957a:c.instructions+=2;goto B4e957a;
case 0x4e9582:c.instructions+=1;goto B4e9582;
case 0x4e9587:goto L4e9587;
case 0x4e958b:c.instructions+=4;goto B4e958b;
case 0x4e958c:c.instructions+=3;goto B4e958c;
case 0x4e9593:c.instructions+=2;goto B4e9593;
case 0x4e9596:c.instructions+=1;goto B4e9596;
case 0x4e95a0:goto L4e95a0;
case 0x4e95a2:c.instructions+=17;goto B4e95a2;
case 0x4e95a7:c.instructions+=16;goto B4e95a7;
case 0x4e95ad:c.instructions+=15;goto B4e95ad;
case 0x4e95ae:c.instructions+=14;goto B4e95ae;
case 0x4e95b5:c.instructions+=13;goto B4e95b5;
case 0x4e95b6:c.instructions+=12;goto B4e95b6;
case 0x4e95b7:c.instructions+=11;goto B4e95b7;
case 0x4e95b8:c.instructions+=10;goto B4e95b8;
case 0x4e95ba:c.instructions+=9;goto B4e95ba;
case 0x4e95be:c.instructions+=8;goto B4e95be;
case 0x4e95c4:c.instructions+=7;goto B4e95c4;
case 0x4e95ca:c.instructions+=6;goto B4e95ca;
case 0x4e95cd:c.instructions+=5;goto B4e95cd;
case 0x4e95d0:c.instructions+=4;goto B4e95d0;
case 0x4e95d3:c.instructions+=3;goto B4e95d3;
case 0x4e95d5:c.instructions+=2;goto B4e95d5;
case 0x4e95dd:c.instructions+=1;goto B4e95dd;
case 0x4e95df:goto L4e95df;
case 0x4e95e0:c.instructions+=2;goto B4e95e0;
case 0x4e95e1:c.instructions+=1;goto B4e95e1;
case 0x4e95e6:goto L4e95e6;
case 0x4e95e9:c.instructions+=2;goto B4e95e9;
case 0x4e95eb:c.instructions+=1;goto B4e95eb;
case 0x4e95ed:goto L4e95ed;
case 0x4e95ef:goto L4e95ef;
case 0x4e95f2:c.instructions+=4;goto B4e95f2;
case 0x4e95f5:c.instructions+=3;goto B4e95f5;
case 0x4e95f7:c.instructions+=2;goto B4e95f7;
case 0x4e95fc:c.instructions+=1;goto B4e95fc;
case 0x4e95fe:goto L4e95fe;
case 0x4e9600:goto L4e9600;
case 0x4e9602:c.instructions+=5;goto B4e9602;
case 0x4e9605:c.instructions+=4;goto B4e9605;
case 0x4e9607:c.instructions+=3;goto B4e9607;
case 0x4e9608:c.instructions+=2;goto B4e9608;
case 0x4e960b:c.instructions+=1;goto B4e960b;
case 0x4e9610:goto L4e9610;
case 0x4e9612:c.instructions+=3;goto B4e9612;
case 0x4e9615:c.instructions+=2;goto B4e9615;
case 0x4e9617:c.instructions+=1;goto B4e9617;
case 0x4e9619:goto L4e9619;
case 0x4e961b:c.instructions+=2;goto B4e961b;
case 0x4e9623:c.instructions+=1;goto B4e9623;
case 0x4e9628:goto L4e9628;
case 0x4e962c:c.instructions+=5;goto B4e962c;
case 0x4e962d:c.instructions+=4;goto B4e962d;
case 0x4e962e:c.instructions+=3;goto B4e962e;
case 0x4e9635:c.instructions+=2;goto B4e9635;
case 0x4e9638:c.instructions+=1;goto B4e9638;
case 0x4e9640:goto L4e9640;
case 0x4e9641:c.instructions+=7;goto B4e9641;
case 0x4e9643:c.instructions+=6;goto B4e9643;
case 0x4e9646:c.instructions+=5;goto B4e9646;
case 0x4e964c:c.instructions+=4;goto B4e964c;
case 0x4e964f:c.instructions+=3;goto B4e964f;
case 0x4e9652:c.instructions+=2;goto B4e9652;
case 0x4e9653:c.instructions+=1;goto B4e9653;
case 0x4e9658:goto L4e9658;
case 0x4e965b:c.instructions+=2;goto B4e965b;
case 0x4e965d:c.instructions+=1;goto B4e965d;
case 0x4e9662:goto L4e9662;
case 0x4e9667:c.instructions+=2;goto B4e9667;
case 0x4e9669:c.instructions+=1;goto B4e9669;
case 0x4e966b:goto L4e966b;
case 0x4e9670:c.instructions+=2;goto B4e9670;
case 0x4e9672:c.instructions+=1;goto B4e9672;
case 0x4e9674:goto L4e9674;
case 0x4e9679:c.instructions+=2;goto B4e9679;
case 0x4e967b:c.instructions+=1;goto B4e967b;
case 0x4e967d:goto L4e967d;
case 0x4e967f:c.instructions+=1;goto B4e967f;
case 0x4e9684:goto L4e9684;
case 0x4e9686:c.instructions+=3;goto B4e9686;
case 0x4e9688:c.instructions+=2;goto B4e9688;
case 0x4e968a:c.instructions+=1;goto B4e968a;
case 0x4e968f:goto L4e968f;
case 0x4e9694:goto L4e9694;
case 0x4e9695:c.instructions+=2;goto B4e9695;
case 0x4e9697:c.instructions+=1;goto B4e9697;
case 0x4e969c:goto L4e969c;
case 0x4e96a1:c.instructions+=2;goto B4e96a1;
case 0x4e96a4:c.instructions+=1;goto B4e96a4;
case 0x4e96a6:goto L4e96a6;
case 0x4e96ab:c.instructions+=1;goto B4e96ab;
case 0x4e96ad:goto L4e96ad;
case 0x4e96b0:c.instructions+=2;goto B4e96b0;
case 0x4e96b5:c.instructions+=1;goto B4e96b5;
case 0x4e96ba:goto L4e96ba;
case 0x4e96bd:c.instructions+=4;goto B4e96bd;
case 0x4e96be:c.instructions+=3;goto B4e96be;
case 0x4e96c3:c.instructions+=2;goto B4e96c3;
case 0x4e96c8:c.instructions+=1;goto B4e96c8;
case 0x4e96cd:goto L4e96cd;
case 0x4e96d0:c.instructions+=3;goto B4e96d0;
case 0x4e96d1:c.instructions+=2;goto B4e96d1;
case 0x4e96d2:c.instructions+=1;goto B4e96d2;
case 0x4e96d7:goto L4e96d7;
case 0x4e96da:c.instructions+=4;goto B4e96da;
case 0x4e96dd:c.instructions+=3;goto B4e96dd;
case 0x4e96df:c.instructions+=2;goto B4e96df;
case 0x4e96e4:c.instructions+=1;goto B4e96e4;
case 0x4e96e9:goto L4e96e9;
case 0x4e96ec:c.instructions+=4;goto B4e96ec;
case 0x4e96ed:c.instructions+=3;goto B4e96ed;
case 0x4e96f2:c.instructions+=2;goto B4e96f2;
case 0x4e96f3:c.instructions+=1;goto B4e96f3;
case 0x4e96f8:goto L4e96f8;
case 0x4e96fb:c.instructions+=4;goto B4e96fb;
case 0x4e96fe:c.instructions+=3;goto B4e96fe;
case 0x4e9700:c.instructions+=2;goto B4e9700;
case 0x4e9705:c.instructions+=1;goto B4e9705;
case 0x4e970a:goto L4e970a;
case 0x4e970d:c.instructions+=4;goto B4e970d;
case 0x4e970e:c.instructions+=3;goto B4e970e;
case 0x4e9713:c.instructions+=2;goto B4e9713;
case 0x4e9714:c.instructions+=1;goto B4e9714;
case 0x4e9719:goto L4e9719;
case 0x4e971c:c.instructions+=1;goto B4e971c;
case 0x4e971e:goto L4e971e;
case 0x4e9725:c.instructions+=2;goto B4e9725;
case 0x4e9728:c.instructions+=1;goto B4e9728;
case 0x4e972a:goto L4e972a;
case 0x4e972f:c.instructions+=1;goto B4e972f;
case 0x4e9731:goto L4e9731;
case 0x4e9736:goto L4e9736;
case 0x4e973b:goto L4e973b;
case 0x4e973c:c.instructions+=4;goto B4e973c;
case 0x4e9741:c.instructions+=3;goto B4e9741;
case 0x4e9746:c.instructions+=2;goto B4e9746;
case 0x4e9747:c.instructions+=1;goto B4e9747;
case 0x4e974c:goto L4e974c;
case 0x4e974f:goto L4e974f;
case 0x4e9750:goto L4e9750;
case 0x4e9755:goto L4e9755;
case 0x4e9756:c.instructions+=1;goto B4e9756;
case 0x4e975b:goto L4e975b;
case 0x4e975e:c.instructions+=2;goto B4e975e;
case 0x4e9760:c.instructions+=1;goto B4e9760;
case 0x4e9762:goto L4e9762;
case 0x4e9765:c.instructions+=4;goto B4e9765;
case 0x4e9767:c.instructions+=3;goto B4e9767;
case 0x4e976c:c.instructions+=2;goto B4e976c;
case 0x4e976d:c.instructions+=1;goto B4e976d;
case 0x4e9772:goto L4e9772;
case 0x4e9773:c.instructions+=1;goto B4e9773;
case 0x4e9778:goto L4e9778;
case 0x4e977b:goto L4e977b;
case 0x4e9781:c.instructions+=1;goto B4e9781;
case 0x4e9786:goto L4e9786;
case 0x4e978b:c.instructions+=2;goto B4e978b;
case 0x4e978e:c.instructions+=1;goto B4e978e;
case 0x4e9790:goto L4e9790;
case 0x4e9795:c.instructions+=1;goto B4e9795;
case 0x4e9797:goto L4e9797;
case 0x4e979c:c.instructions+=1;goto B4e979c;
case 0x4e97a1:goto L4e97a1;
case 0x4e97a3:c.instructions+=1;goto B4e97a3;
case 0x4e97a5:goto L4e97a5;
case 0x4e97a8:c.instructions+=6;goto B4e97a8;
case 0x4e97ab:c.instructions+=5;goto B4e97ab;
case 0x4e97b1:c.instructions+=4;goto B4e97b1;
case 0x4e97b2:c.instructions+=3;goto B4e97b2;
case 0x4e97b3:c.instructions+=2;goto B4e97b3;
case 0x4e97b9:c.instructions+=1;goto B4e97b9;
case 0x4e97be:goto L4e97be;
case 0x4e97bf:c.instructions+=1;goto B4e97bf;
case 0x4e97c0:goto L4e97c0;
case 0x4e97c3:c.instructions+=5;goto B4e97c3;
case 0x4e97c6:c.instructions+=4;goto B4e97c6;
case 0x4e97cc:c.instructions+=3;goto B4e97cc;
case 0x4e97cd:c.instructions+=2;goto B4e97cd;
case 0x4e97ce:c.instructions+=1;goto B4e97ce;
case 0x4e97d3:goto L4e97d3;
case 0x4e97d4:c.instructions+=1;goto B4e97d4;
case 0x4e97e0:goto L4e97e0;
case 0x4e97e1:c.instructions+=5;goto B4e97e1;
case 0x4e97e3:c.instructions+=4;goto B4e97e3;
case 0x4e97e6:c.instructions+=3;goto B4e97e6;
case 0x4e97e8:c.instructions+=2;goto B4e97e8;
case 0x4e97e9:c.instructions+=1;goto B4e97e9;
case 0x4e97eb:goto L4e97eb;
case 0x4e97f0:c.instructions+=9;goto B4e97f0;
case 0x4e97f3:c.instructions+=8;goto B4e97f3;
case 0x4e97f6:c.instructions+=7;goto B4e97f6;
case 0x4e97f9:c.instructions+=6;goto B4e97f9;
case 0x4e97fb:c.instructions+=5;goto B4e97fb;
case 0x4e9800:c.instructions+=4;goto B4e9800;
case 0x4e9801:c.instructions+=3;goto B4e9801;
case 0x4e9802:c.instructions+=2;goto B4e9802;
case 0x4e9806:c.instructions+=1;goto B4e9806;
case 0x4e980b:goto L4e980b;
case 0x4e980e:c.instructions+=4;goto B4e980e;
case 0x4e9811:c.instructions+=3;goto B4e9811;
case 0x4e9813:c.instructions+=2;goto B4e9813;
case 0x4e9818:c.instructions+=1;goto B4e9818;
case 0x4e981d:goto L4e981d;
case 0x4e9820:c.instructions+=3;goto B4e9820;
case 0x4e9821:c.instructions+=2;goto B4e9821;
case 0x4e9826:c.instructions+=1;goto B4e9826;
case 0x4e982b:goto L4e982b;
case 0x4e982e:c.instructions+=3;goto B4e982e;
case 0x4e982f:c.instructions+=2;goto B4e982f;
case 0x4e9830:c.instructions+=1;goto B4e9830;
case 0x4e9835:goto L4e9835;
case 0x4e9838:c.instructions+=3;goto B4e9838;
case 0x4e983b:c.instructions+=2;goto B4e983b;
case 0x4e983d:c.instructions+=1;goto B4e983d;
case 0x4e983f:goto L4e983f;
case 0x4e9840:c.instructions+=1;goto B4e9840;
case 0x4e9845:goto L4e9845;
case 0x4e9848:goto L4e9848;
case 0x4e984f:goto L4e984f;
case 0x4e9850:c.instructions+=2;goto B4e9850;
case 0x4e9851:c.instructions+=1;goto B4e9851;
case 0x4e9852:goto L4e9852;
case 0x4e9857:c.instructions+=1;goto B4e9857;
case 0x4e985c:goto L4e985c;
case 0x4e985e:c.instructions+=1;goto B4e985e;
case 0x4e9860:goto L4e9860;
case 0x4e9863:c.instructions+=5;goto B4e9863;
case 0x4e9866:c.instructions+=4;goto B4e9866;
case 0x4e9867:c.instructions+=3;goto B4e9867;
case 0x4e986d:c.instructions+=2;goto B4e986d;
case 0x4e986e:c.instructions+=1;goto B4e986e;
case 0x4e9870:goto L4e9870;
case 0x4e9873:c.instructions+=3;goto B4e9873;
case 0x4e9876:c.instructions+=2;goto B4e9876;
case 0x4e9877:c.instructions+=1;goto B4e9877;
case 0x4e9878:goto L4e9878;
case 0x4e987e:c.instructions+=1;goto B4e987e;
case 0x4e9883:goto L4e9883;
case 0x4e9888:c.instructions+=1;goto B4e9888;
case 0x4e988d:goto L4e988d;
case 0x4e988f:c.instructions+=2;goto B4e988f;
case 0x4e9892:c.instructions+=1;goto B4e9892;
case 0x4e9894:goto L4e9894;
case 0x4e9899:c.instructions+=1;goto B4e9899;
case 0x4e989e:goto L4e989e;
case 0x4e98a1:c.instructions+=4;goto B4e98a1;
case 0x4e98a2:c.instructions+=3;goto B4e98a2;
case 0x4e98a7:c.instructions+=2;goto B4e98a7;
case 0x4e98ac:c.instructions+=1;goto B4e98ac;
case 0x4e98b1:goto L4e98b1;
case 0x4e98b4:c.instructions+=3;goto B4e98b4;
case 0x4e98b5:c.instructions+=2;goto B4e98b5;
case 0x4e98b6:c.instructions+=1;goto B4e98b6;
case 0x4e98bb:goto L4e98bb;
case 0x4e98be:c.instructions+=4;goto B4e98be;
case 0x4e98c1:c.instructions+=3;goto B4e98c1;
case 0x4e98c3:c.instructions+=2;goto B4e98c3;
case 0x4e98c8:c.instructions+=1;goto B4e98c8;
case 0x4e98ca:goto L4e98ca;
case 0x4e98cc:c.instructions+=1;goto B4e98cc;
case 0x4e98d1:goto L4e98d1;
case 0x4e98d6:goto L4e98d6;
case 0x4e98d9:c.instructions+=3;goto B4e98d9;
case 0x4e98da:c.instructions+=2;goto B4e98da;
case 0x4e98df:c.instructions+=1;goto B4e98df;
case 0x4e98e4:goto L4e98e4;
case 0x4e98e7:c.instructions+=3;goto B4e98e7;
case 0x4e98e8:c.instructions+=2;goto B4e98e8;
case 0x4e98e9:c.instructions+=1;goto B4e98e9;
case 0x4e98ee:goto L4e98ee;
case 0x4e98f4:c.instructions+=5;goto B4e98f4;
case 0x4e98f7:c.instructions+=4;goto B4e98f7;
case 0x4e98f8:c.instructions+=3;goto B4e98f8;
case 0x4e98fe:c.instructions+=2;goto B4e98fe;
case 0x4e9901:c.instructions+=1;goto B4e9901;
case 0x4e9906:goto L4e9906;
case 0x4e990b:c.instructions+=2;goto B4e990b;
case 0x4e9910:c.instructions+=1;goto B4e9910;
case 0x4e9912:goto L4e9912;
case 0x4e9915:c.instructions+=1;goto B4e9915;
case 0x4e9917:goto L4e9917;
case 0x4e991e:c.instructions+=1;goto B4e991e;
case 0x4e9920:goto L4e9920;
case 0x4e9925:c.instructions+=1;goto B4e9925;
case 0x4e992a:goto L4e992a;
case 0x4e992c:c.instructions+=1;goto B4e992c;
case 0x4e992e:goto L4e992e;
case 0x4e9933:c.instructions+=2;goto B4e9933;
case 0x4e9939:c.instructions+=1;goto B4e9939;
case 0x4e993f:goto L4e993f;
case 0x4e9945:c.instructions+=3;goto B4e9945;
case 0x4e9946:c.instructions+=2;goto B4e9946;
case 0x4e9947:c.instructions+=1;goto B4e9947;
case 0x4e994c:goto L4e994c;
case 0x4e9951:c.instructions+=1;goto B4e9951;
case 0x4e9956:goto L4e9956;
case 0x4e9958:c.instructions+=1;goto B4e9958;
case 0x4e995e:goto L4e995e;
case 0x4e9963:c.instructions+=1;goto B4e9963;
case 0x4e9968:goto L4e9968;
case 0x4e996a:c.instructions+=1;goto B4e996a;
case 0x4e9970:goto L4e9970;
case 0x4e9975:c.instructions+=1;goto B4e9975;
case 0x4e997a:goto L4e997a;
case 0x4e997c:c.instructions+=1;goto B4e997c;
case 0x4e9982:goto L4e9982;
case 0x4e9987:c.instructions+=1;goto B4e9987;
case 0x4e998c:goto L4e998c;
case 0x4e998e:c.instructions+=1;goto B4e998e;
case 0x4e9990:goto L4e9990;
case 0x4e9995:c.instructions+=1;goto B4e9995;
case 0x4e999a:goto L4e999a;
case 0x4e999c:c.instructions+=1;goto B4e999c;
case 0x4e999e:goto L4e999e;
case 0x4e99a1:c.instructions+=2;goto B4e99a1;
case 0x4e99a3:c.instructions+=1;goto B4e99a3;
case 0x4e99a5:goto L4e99a5;
case 0x4e99a8:c.instructions+=4;goto B4e99a8;
case 0x4e99ad:c.instructions+=3;goto B4e99ad;
case 0x4e99b2:c.instructions+=2;goto B4e99b2;
case 0x4e99b3:c.instructions+=1;goto B4e99b3;
case 0x4e99b8:goto L4e99b8;
case 0x4e99bb:c.instructions+=2;goto B4e99bb;
case 0x4e99bd:c.instructions+=1;goto B4e99bd;
case 0x4e99bf:goto L4e99bf;
case 0x4e99c2:c.instructions+=9;goto B4e99c2;
case 0x4e99c7:c.instructions+=8;goto B4e99c7;
case 0x4e99c9:c.instructions+=7;goto B4e99c9;
case 0x4e99ce:c.instructions+=6;goto B4e99ce;
case 0x4e99d3:c.instructions+=5;goto B4e99d3;
case 0x4e99d8:c.instructions+=4;goto B4e99d8;
case 0x4e99dd:c.instructions+=3;goto B4e99dd;
case 0x4e99e2:c.instructions+=2;goto B4e99e2;
case 0x4e99e3:c.instructions+=1;goto B4e99e3;
case 0x4e99e8:goto L4e99e8;
case 0x4e99eb:c.instructions+=1;goto B4e99eb;
case 0x4e99ee:goto L4e99ee;
case 0x4e99f3:c.instructions+=2;goto B4e99f3;
case 0x4e99f9:c.instructions+=1;goto B4e99f9;
case 0x4e99ff:goto L4e99ff;
case 0x4e9a01:c.instructions+=1;goto B4e9a01;
case 0x4e9a06:goto L4e9a06;
case 0x4e9a07:c.instructions+=3;goto B4e9a07;
case 0x4e9a0c:c.instructions+=2;goto B4e9a0c;
case 0x4e9a0d:c.instructions+=1;goto B4e9a0d;
case 0x4e9a12:goto L4e9a12;
case 0x4e9a13:c.instructions+=3;goto B4e9a13;
case 0x4e9a15:c.instructions+=2;goto B4e9a15;
case 0x4e9a16:c.instructions+=1;goto B4e9a16;
case 0x4e9a20:goto L4e9a20;
case 0x4e9a24:c.instructions+=4;goto B4e9a24;
case 0x4e9a29:c.instructions+=3;goto B4e9a29;
case 0x4e9a2a:c.instructions+=2;goto B4e9a2a;
case 0x4e9a2c:c.instructions+=1;goto B4e9a2c;
case 0x4e9a32:goto L4e9a32;
case 0x4e9a38:goto L4e9a38;
case 0x4e9a3d:c.instructions+=1;goto B4e9a3d;
case 0x4e9a3f:goto L4e9a3f;
case 0x4e9a44:c.instructions+=1;goto B4e9a44;
case 0x4e9a46:goto L4e9a46;
case 0x4e9a4b:c.instructions+=1;goto B4e9a4b;
case 0x4e9a51:goto L4e9a51;
case 0x4e9a56:c.instructions+=2;goto B4e9a56;
case 0x4e9a58:c.instructions+=1;goto B4e9a58;
case 0x4e9a5a:goto L4e9a5a;
case 0x4e9a5f:c.instructions+=1;goto B4e9a5f;
case 0x4e9a64:goto L4e9a64;
case 0x4e9a66:c.instructions+=1;goto B4e9a66;
case 0x4e9a68:goto L4e9a68;
case 0x4e9a6d:goto L4e9a6d;
case 0x4e9a73:c.instructions+=3;goto B4e9a73;
case 0x4e9a75:c.instructions+=2;goto B4e9a75;
case 0x4e9a77:c.instructions+=1;goto B4e9a77;
case 0x4e9a7c:goto L4e9a7c;
case 0x4e9a7e:c.instructions+=1;goto B4e9a7e;
case 0x4e9a83:goto L4e9a83;
case 0x4e9a84:c.instructions+=1;goto B4e9a84;
case 0x4e9a87:goto L4e9a87;
case 0x4e9a8d:c.instructions+=1;goto B4e9a8d;
case 0x4e9a92:goto L4e9a92;
case 0x4e9a94:c.instructions+=1;goto B4e9a94;
case 0x4e9a99:goto L4e9a99;
case 0x4e9a9a:c.instructions+=1;goto B4e9a9a;
case 0x4e9a9d:goto L4e9a9d;
case 0x4e9a9f:c.instructions+=1;goto B4e9a9f;
case 0x4e9aa4:goto L4e9aa4;
case 0x4e9aa6:goto L4e9aa6;
case 0x4e9aa9:c.instructions+=2;goto B4e9aa9;
case 0x4e9aab:c.instructions+=1;goto B4e9aab;
case 0x4e9aad:goto L4e9aad;
case 0x4e9aae:c.instructions+=1;goto B4e9aae;
case 0x4e9ab3:goto L4e9ab3;
case 0x4e9ab6:goto L4e9ab6;
case 0x4e9abb:c.instructions+=2;goto B4e9abb;
case 0x4e9ac2:c.instructions+=1;goto B4e9ac2;
case 0x4e9ac7:goto L4e9ac7;
case 0x4e9ac8:c.instructions+=1;goto B4e9ac8;
case 0x4e9acb:goto L4e9acb;
case 0x4e9ad0:c.instructions+=2;goto B4e9ad0;
case 0x4e9ad3:c.instructions+=1;goto B4e9ad3;
case 0x4e9ad5:goto L4e9ad5;
case 0x4e9ada:c.instructions+=1;goto B4e9ada;
case 0x4e9adc:goto L4e9adc;
case 0x4e9ade:c.instructions+=5;goto B4e9ade;
case 0x4e9ae5:c.instructions+=4;goto B4e9ae5;
case 0x4e9ae8:c.instructions+=3;goto B4e9ae8;
case 0x4e9aed:c.instructions+=2;goto B4e9aed;
case 0x4e9aee:c.instructions+=1;goto B4e9aee;
case 0x4e9af3:goto L4e9af3;
case 0x4e9af6:c.instructions+=2;goto B4e9af6;
case 0x4e9af7:c.instructions+=1;goto B4e9af7;
case 0x4e9afa:goto L4e9afa;
case 0x4e9aff:c.instructions+=1;goto B4e9aff;
case 0x4e9b04:goto L4e9b04;
case 0x4e9b06:c.instructions+=1;goto B4e9b06;
case 0x4e9b0c:goto L4e9b0c;
case 0x4e9b11:c.instructions+=1;goto B4e9b11;
case 0x4e9b16:goto L4e9b16;
case 0x4e9b1c:c.instructions+=1;goto B4e9b1c;
case 0x4e9b21:goto L4e9b21;
case 0x4e9b22:c.instructions+=1;goto B4e9b22;
case 0x4e9b25:goto L4e9b25;
case 0x4e9b2a:c.instructions+=1;goto B4e9b2a;
case 0x4e9b2c:goto L4e9b2c;
case 0x4e9b31:c.instructions+=1;goto B4e9b31;
case 0x4e9b37:goto L4e9b37;
case 0x4e9b39:c.instructions+=2;goto B4e9b39;
case 0x4e9b3e:c.instructions+=1;goto B4e9b3e;
case 0x4e9b43:goto L4e9b43;
case 0x4e9b44:c.instructions+=1;goto B4e9b44;
case 0x4e9b49:goto L4e9b49;
case 0x4e9b4f:c.instructions+=4;goto B4e9b4f;
case 0x4e9b52:c.instructions+=3;goto B4e9b52;
case 0x4e9b54:c.instructions+=2;goto B4e9b54;
case 0x4e9b56:c.instructions+=1;goto B4e9b56;
case 0x4e9b5b:goto L4e9b5b;
case 0x4e9b5c:c.instructions+=1;goto B4e9b5c;
case 0x4e9b5f:goto L4e9b5f;
case 0x4e9b64:c.instructions+=2;goto B4e9b64;
case 0x4e9b67:c.instructions+=1;goto B4e9b67;
case 0x4e9b69:goto L4e9b69;
case 0x4e9b6e:c.instructions+=1;goto B4e9b6e;
case 0x4e9b70:goto L4e9b70;
case 0x4e9b75:c.instructions+=2;goto B4e9b75;
case 0x4e9b77:c.instructions+=1;goto B4e9b77;
case 0x4e9b79:goto L4e9b79;
case 0x4e9b7e:c.instructions+=2;goto B4e9b7e;
case 0x4e9b80:c.instructions+=1;goto B4e9b80;
case 0x4e9b82:goto L4e9b82;
case 0x4e9b87:c.instructions+=2;goto B4e9b87;
case 0x4e9b89:c.instructions+=1;goto B4e9b89;
case 0x4e9b8b:goto L4e9b8b;
case 0x4e9b8e:c.instructions+=4;goto B4e9b8e;
case 0x4e9b91:c.instructions+=3;goto B4e9b91;
case 0x4e9b93:c.instructions+=2;goto B4e9b93;
case 0x4e9b96:c.instructions+=1;goto B4e9b96;
case 0x4e9b98:goto L4e9b98;
case 0x4e9b9b:c.instructions+=6;goto B4e9b9b;
case 0x4e9b9d:c.instructions+=5;goto B4e9b9d;
case 0x4e9ba0:c.instructions+=4;goto B4e9ba0;
case 0x4e9ba2:c.instructions+=3;goto B4e9ba2;
case 0x4e9ba9:c.instructions+=2;goto B4e9ba9;
case 0x4e9bac:c.instructions+=1;goto B4e9bac;
case 0x4e9bae:goto L4e9bae;
case 0x4e9bb4:c.instructions+=3;goto B4e9bb4;
case 0x4e9bb6:c.instructions+=2;goto B4e9bb6;
case 0x4e9bb9:c.instructions+=1;goto B4e9bb9;
case 0x4e9bbe:goto L4e9bbe;
case 0x4e9bbf:c.instructions+=1;goto B4e9bbf;
case 0x4e9bc2:goto L4e9bc2;
case 0x4e9bc8:c.instructions+=3;goto B4e9bc8;
case 0x4e9bca:c.instructions+=2;goto B4e9bca;
case 0x4e9bcd:c.instructions+=1;goto B4e9bcd;
case 0x4e9bd2:goto L4e9bd2;
case 0x4e9bd3:c.instructions+=1;goto B4e9bd3;
case 0x4e9bd6:goto L4e9bd6;
case 0x4e9bdc:c.instructions+=4;goto B4e9bdc;
case 0x4e9bdf:c.instructions+=3;goto B4e9bdf;
case 0x4e9be2:c.instructions+=2;goto B4e9be2;
case 0x4e9be3:c.instructions+=1;goto B4e9be3;
case 0x4e9be6:goto L4e9be6;
case 0x4e9be8:c.instructions+=1;goto B4e9be8;
case 0x4e9bed:goto L4e9bed;
case 0x4e9bee:c.instructions+=1;goto B4e9bee;
case 0x4e9c00:goto L4e9c00;
case 0x4e9c06:c.instructions+=16;goto B4e9c06;
case 0x4e9c08:c.instructions+=15;goto B4e9c08;
case 0x4e9c0d:c.instructions+=14;goto B4e9c0d;
case 0x4e9c0e:c.instructions+=13;goto B4e9c0e;
case 0x4e9c12:c.instructions+=12;goto B4e9c12;
case 0x4e9c19:c.instructions+=11;goto B4e9c19;
case 0x4e9c20:c.instructions+=10;goto B4e9c20;
case 0x4e9c21:c.instructions+=9;goto B4e9c21;
case 0x4e9c22:c.instructions+=8;goto B4e9c22;
case 0x4e9c23:c.instructions+=7;goto B4e9c23;
case 0x4e9c25:c.instructions+=6;goto B4e9c25;
case 0x4e9c2b:c.instructions+=5;goto B4e9c2b;
case 0x4e9c2e:c.instructions+=4;goto B4e9c2e;
case 0x4e9c2f:c.instructions+=3;goto B4e9c2f;
case 0x4e9c30:c.instructions+=2;goto B4e9c30;
case 0x4e9c36:c.instructions+=1;goto B4e9c36;
case 0x4e9c3b:goto L4e9c3b;
case 0x4e9c3d:c.instructions+=4;goto B4e9c3d;
case 0x4e9c40:c.instructions+=3;goto B4e9c40;
case 0x4e9c44:c.instructions+=2;goto B4e9c44;
case 0x4e9c4a:c.instructions+=1;goto B4e9c4a;
case 0x4e9c4c:goto L4e9c4c;
case 0x4e9c52:c.instructions+=2;goto B4e9c52;
case 0x4e9c54:c.instructions+=1;goto B4e9c54;
case 0x4e9c56:goto L4e9c56;
case 0x4e9c59:c.instructions+=1;goto B4e9c59;
case 0x4e9c5e:goto L4e9c5e;
case 0x4e9c60:goto L4e9c60;
case 0x4e9c63:c.instructions+=4;goto B4e9c63;
case 0x4e9c65:c.instructions+=3;goto B4e9c65;
case 0x4e9c68:c.instructions+=2;goto B4e9c68;
case 0x4e9c69:c.instructions+=1;goto B4e9c69;
case 0x4e9c6e:goto L4e9c6e;
case 0x4e9c71:c.instructions+=8;goto B4e9c71;
case 0x4e9c72:c.instructions+=7;goto B4e9c72;
case 0x4e9c78:c.instructions+=6;goto B4e9c78;
case 0x4e9c7a:c.instructions+=5;goto B4e9c7a;
case 0x4e9c7b:c.instructions+=4;goto B4e9c7b;
case 0x4e9c7c:c.instructions+=3;goto B4e9c7c;
case 0x4e9c81:c.instructions+=2;goto B4e9c81;
case 0x4e9c86:c.instructions+=1;goto B4e9c86;
case 0x4e9c8b:goto L4e9c8b;
case 0x4e9c8e:c.instructions+=3;goto B4e9c8e;
case 0x4e9c8f:c.instructions+=2;goto B4e9c8f;
case 0x4e9c90:c.instructions+=1;goto B4e9c90;
case 0x4e9c95:goto L4e9c95;
case 0x4e9c9a:c.instructions+=3;goto B4e9c9a;
case 0x4e9c9d:c.instructions+=2;goto B4e9c9d;
case 0x4e9c9f:c.instructions+=1;goto B4e9c9f;
case 0x4e9ca1:goto L4e9ca1;
case 0x4e9ca6:c.instructions+=2;goto B4e9ca6;
case 0x4e9ca8:c.instructions+=1;goto B4e9ca8;
case 0x4e9caa:goto L4e9caa;
case 0x4e9caf:c.instructions+=2;goto B4e9caf;
case 0x4e9cb1:c.instructions+=1;goto B4e9cb1;
case 0x4e9cb3:goto L4e9cb3;
case 0x4e9cb8:c.instructions+=2;goto B4e9cb8;
case 0x4e9cbb:c.instructions+=1;goto B4e9cbb;
case 0x4e9cbd:goto L4e9cbd;
case 0x4e9cbe:c.instructions+=3;goto B4e9cbe;
case 0x4e9cc0:c.instructions+=2;goto B4e9cc0;
case 0x4e9cc2:c.instructions+=1;goto B4e9cc2;
case 0x4e9cc7:goto L4e9cc7;
case 0x4e9cc9:goto L4e9cc9;
case 0x4e9cd0:c.instructions+=2;goto B4e9cd0;
case 0x4e9cd2:c.instructions+=1;goto B4e9cd2;
case 0x4e9cd4:goto L4e9cd4;
case 0x4e9cd5:c.instructions+=2;goto B4e9cd5;
case 0x4e9cd7:c.instructions+=1;goto B4e9cd7;
case 0x4e9cdc:goto L4e9cdc;
case 0x4e9cde:goto L4e9cde;
case 0x4e9ce0:c.instructions+=2;goto B4e9ce0;
case 0x4e9ce2:c.instructions+=1;goto B4e9ce2;
case 0x4e9ce7:goto L4e9ce7;
case 0x4e9ce9:goto L4e9ce9;
case 0x4e9cec:c.instructions+=2;goto B4e9cec;
case 0x4e9cf1:c.instructions+=1;goto B4e9cf1;
case 0x4e9cf6:goto L4e9cf6;
case 0x4e9cf7:c.instructions+=2;goto B4e9cf7;
case 0x4e9cf8:c.instructions+=1;goto B4e9cf8;
case 0x4e9cfd:goto L4e9cfd;
case 0x4e9cfe:c.instructions+=1;goto B4e9cfe;
case 0x4e9d03:goto L4e9d03;
case 0x4e9d06:c.instructions+=2;goto B4e9d06;
case 0x4e9d0b:c.instructions+=1;goto B4e9d0b;
case 0x4e9d10:goto L4e9d10;
case 0x4e9d11:c.instructions+=2;goto B4e9d11;
case 0x4e9d12:c.instructions+=1;goto B4e9d12;
case 0x4e9d17:goto L4e9d17;
case 0x4e9d18:c.instructions+=1;goto B4e9d18;
case 0x4e9d1d:goto L4e9d1d;
case 0x4e9d20:goto L4e9d20;
case 0x4e9d25:c.instructions+=2;goto B4e9d25;
case 0x4e9d27:c.instructions+=1;goto B4e9d27;
case 0x4e9d29:goto L4e9d29;
case 0x4e9d2e:c.instructions+=2;goto B4e9d2e;
case 0x4e9d30:c.instructions+=1;goto B4e9d30;
case 0x4e9d36:goto L4e9d36;
case 0x4e9d38:c.instructions+=1;goto B4e9d38;
case 0x4e9d3d:goto L4e9d3d;
case 0x4e9d3f:c.instructions+=5;goto B4e9d3f;
case 0x4e9d42:c.instructions+=4;goto B4e9d42;
case 0x4e9d46:c.instructions+=3;goto B4e9d46;
case 0x4e9d48:c.instructions+=2;goto B4e9d48;
case 0x4e9d50:c.instructions+=1;goto B4e9d50;
case 0x4e9d52:goto L4e9d52;
case 0x4e9d58:c.instructions+=11;goto B4e9d58;
case 0x4e9d5a:c.instructions+=10;goto B4e9d5a;
case 0x4e9d60:c.instructions+=9;goto B4e9d60;
case 0x4e9d61:c.instructions+=8;goto B4e9d61;
case 0x4e9d67:c.instructions+=7;goto B4e9d67;
case 0x4e9d68:c.instructions+=6;goto B4e9d68;
case 0x4e9d6e:c.instructions+=5;goto B4e9d6e;
case 0x4e9d6f:c.instructions+=4;goto B4e9d6f;
case 0x4e9d75:c.instructions+=3;goto B4e9d75;
case 0x4e9d76:c.instructions+=2;goto B4e9d76;
case 0x4e9d78:c.instructions+=1;goto B4e9d78;
case 0x4e9d7d:goto L4e9d7d;
case 0x4e9d83:c.instructions+=2;goto B4e9d83;
case 0x4e9d86:c.instructions+=1;goto B4e9d86;
case 0x4e9d88:goto L4e9d88;
case 0x4e9d8a:goto L4e9d8a;
case 0x4e9d8d:c.instructions+=4;goto B4e9d8d;
case 0x4e9d8e:c.instructions+=3;goto B4e9d8e;
case 0x4e9d90:c.instructions+=2;goto B4e9d90;
case 0x4e9d94:c.instructions+=1;goto B4e9d94;
case 0x4e9d99:goto L4e9d99;
case 0x4e9d9b:c.instructions+=1;goto B4e9d9b;
case 0x4e9da0:goto L4e9da0;
case 0x4e9da2:c.instructions+=5;goto B4e9da2;
case 0x4e9da5:c.instructions+=4;goto B4e9da5;
case 0x4e9da9:c.instructions+=3;goto B4e9da9;
case 0x4e9dab:c.instructions+=2;goto B4e9dab;
case 0x4e9db3:c.instructions+=1;goto B4e9db3;
case 0x4e9db5:goto L4e9db5;
case 0x4e9dbb:c.instructions+=11;goto B4e9dbb;
case 0x4e9dbd:c.instructions+=10;goto B4e9dbd;
case 0x4e9dc3:c.instructions+=9;goto B4e9dc3;
case 0x4e9dc4:c.instructions+=8;goto B4e9dc4;
case 0x4e9dca:c.instructions+=7;goto B4e9dca;
case 0x4e9dcb:c.instructions+=6;goto B4e9dcb;
case 0x4e9dd1:c.instructions+=5;goto B4e9dd1;
case 0x4e9dd2:c.instructions+=4;goto B4e9dd2;
case 0x4e9dd8:c.instructions+=3;goto B4e9dd8;
case 0x4e9dd9:c.instructions+=2;goto B4e9dd9;
case 0x4e9ddb:c.instructions+=1;goto B4e9ddb;
case 0x4e9de0:goto L4e9de0;
case 0x4e9de6:c.instructions+=2;goto B4e9de6;
case 0x4e9de9:c.instructions+=1;goto B4e9de9;
case 0x4e9deb:goto L4e9deb;
case 0x4e9ded:goto L4e9ded;
case 0x4e9dee:c.instructions+=3;goto B4e9dee;
case 0x4e9df0:c.instructions+=2;goto B4e9df0;
case 0x4e9df4:c.instructions+=1;goto B4e9df4;
case 0x4e9df9:goto L4e9df9;
case 0x4e9dfb:c.instructions+=1;goto B4e9dfb;
case 0x4e9e00:goto L4e9e00;
case 0x4e9e02:c.instructions+=5;goto B4e9e02;
case 0x4e9e05:c.instructions+=4;goto B4e9e05;
case 0x4e9e09:c.instructions+=3;goto B4e9e09;
case 0x4e9e0b:c.instructions+=2;goto B4e9e0b;
case 0x4e9e13:c.instructions+=1;goto B4e9e13;
case 0x4e9e15:goto L4e9e15;
case 0x4e9e1b:c.instructions+=11;goto B4e9e1b;
case 0x4e9e1d:c.instructions+=10;goto B4e9e1d;
case 0x4e9e23:c.instructions+=9;goto B4e9e23;
case 0x4e9e24:c.instructions+=8;goto B4e9e24;
case 0x4e9e2a:c.instructions+=7;goto B4e9e2a;
case 0x4e9e2b:c.instructions+=6;goto B4e9e2b;
case 0x4e9e31:c.instructions+=5;goto B4e9e31;
case 0x4e9e32:c.instructions+=4;goto B4e9e32;
case 0x4e9e38:c.instructions+=3;goto B4e9e38;
case 0x4e9e39:c.instructions+=2;goto B4e9e39;
case 0x4e9e3b:c.instructions+=1;goto B4e9e3b;
case 0x4e9e40:goto L4e9e40;
case 0x4e9e46:c.instructions+=2;goto B4e9e46;
case 0x4e9e49:c.instructions+=1;goto B4e9e49;
case 0x4e9e4b:goto L4e9e4b;
case 0x4e9e4d:goto L4e9e4d;
case 0x4e9e4e:c.instructions+=3;goto B4e9e4e;
case 0x4e9e50:c.instructions+=2;goto B4e9e50;
case 0x4e9e54:c.instructions+=1;goto B4e9e54;
case 0x4e9e59:goto L4e9e59;
case 0x4e9e5b:c.instructions+=1;goto B4e9e5b;
case 0x4e9e60:goto L4e9e60;
case 0x4e9e62:c.instructions+=5;goto B4e9e62;
case 0x4e9e65:c.instructions+=4;goto B4e9e65;
case 0x4e9e69:c.instructions+=3;goto B4e9e69;
case 0x4e9e6b:c.instructions+=2;goto B4e9e6b;
case 0x4e9e73:c.instructions+=1;goto B4e9e73;
case 0x4e9e75:goto L4e9e75;
case 0x4e9e7b:c.instructions+=11;goto B4e9e7b;
case 0x4e9e7d:c.instructions+=10;goto B4e9e7d;
case 0x4e9e83:c.instructions+=9;goto B4e9e83;
case 0x4e9e84:c.instructions+=8;goto B4e9e84;
case 0x4e9e8a:c.instructions+=7;goto B4e9e8a;
case 0x4e9e8b:c.instructions+=6;goto B4e9e8b;
case 0x4e9e91:c.instructions+=5;goto B4e9e91;
case 0x4e9e92:c.instructions+=4;goto B4e9e92;
case 0x4e9e98:c.instructions+=3;goto B4e9e98;
case 0x4e9e99:c.instructions+=2;goto B4e9e99;
case 0x4e9e9b:c.instructions+=1;goto B4e9e9b;
case 0x4e9ea0:goto L4e9ea0;
case 0x4e9ea6:c.instructions+=2;goto B4e9ea6;
case 0x4e9ea9:c.instructions+=1;goto B4e9ea9;
case 0x4e9eab:goto L4e9eab;
case 0x4e9ead:goto L4e9ead;
case 0x4e9eae:c.instructions+=3;goto B4e9eae;
case 0x4e9eb0:c.instructions+=2;goto B4e9eb0;
case 0x4e9eb4:c.instructions+=1;goto B4e9eb4;
case 0x4e9eb9:goto L4e9eb9;
case 0x4e9ebb:c.instructions+=1;goto B4e9ebb;
case 0x4e9ec0:goto L4e9ec0;
case 0x4e9ec2:c.instructions+=5;goto B4e9ec2;
case 0x4e9ec5:c.instructions+=4;goto B4e9ec5;
case 0x4e9ec9:c.instructions+=3;goto B4e9ec9;
case 0x4e9ecb:c.instructions+=2;goto B4e9ecb;
case 0x4e9ed3:c.instructions+=1;goto B4e9ed3;
case 0x4e9ed5:goto L4e9ed5;
case 0x4e9edb:c.instructions+=11;goto B4e9edb;
case 0x4e9edd:c.instructions+=10;goto B4e9edd;
case 0x4e9ee3:c.instructions+=9;goto B4e9ee3;
case 0x4e9ee4:c.instructions+=8;goto B4e9ee4;
case 0x4e9eea:c.instructions+=7;goto B4e9eea;
case 0x4e9eeb:c.instructions+=6;goto B4e9eeb;
case 0x4e9ef1:c.instructions+=5;goto B4e9ef1;
case 0x4e9ef2:c.instructions+=4;goto B4e9ef2;
case 0x4e9ef8:c.instructions+=3;goto B4e9ef8;
case 0x4e9ef9:c.instructions+=2;goto B4e9ef9;
case 0x4e9efb:c.instructions+=1;goto B4e9efb;
case 0x4e9f00:goto L4e9f00;
case 0x4e9f06:c.instructions+=3;goto B4e9f06;
case 0x4e9f09:c.instructions+=2;goto B4e9f09;
case 0x4e9f0a:c.instructions+=1;goto B4e9f0a;
case 0x4e9f0f:goto L4e9f0f;
case 0x4e9f11:c.instructions+=2;goto B4e9f11;
case 0x4e9f12:c.instructions+=1;goto B4e9f12;
case 0x4e9f17:goto L4e9f17;
case 0x4e9f19:c.instructions+=1;goto B4e9f19;
case 0x4e9f1e:goto L4e9f1e;
case 0x4e9f20:c.instructions+=5;goto B4e9f20;
case 0x4e9f23:c.instructions+=4;goto B4e9f23;
case 0x4e9f27:c.instructions+=3;goto B4e9f27;
case 0x4e9f29:c.instructions+=2;goto B4e9f29;
case 0x4e9f31:c.instructions+=1;goto B4e9f31;
case 0x4e9f33:goto L4e9f33;
case 0x4e9f39:c.instructions+=11;goto B4e9f39;
case 0x4e9f3b:c.instructions+=10;goto B4e9f3b;
case 0x4e9f41:c.instructions+=9;goto B4e9f41;
case 0x4e9f42:c.instructions+=8;goto B4e9f42;
case 0x4e9f48:c.instructions+=7;goto B4e9f48;
case 0x4e9f49:c.instructions+=6;goto B4e9f49;
case 0x4e9f4f:c.instructions+=5;goto B4e9f4f;
case 0x4e9f50:c.instructions+=4;goto B4e9f50;
case 0x4e9f56:c.instructions+=3;goto B4e9f56;
case 0x4e9f57:c.instructions+=2;goto B4e9f57;
case 0x4e9f59:c.instructions+=1;goto B4e9f59;
case 0x4e9f5e:goto L4e9f5e;
case 0x4e9f64:c.instructions+=2;goto B4e9f64;
case 0x4e9f67:c.instructions+=1;goto B4e9f67;
case 0x4e9f69:goto L4e9f69;
case 0x4e9f6b:goto L4e9f6b;
case 0x4e9f6e:c.instructions+=4;goto B4e9f6e;
case 0x4e9f6f:c.instructions+=3;goto B4e9f6f;
case 0x4e9f71:c.instructions+=2;goto B4e9f71;
case 0x4e9f75:c.instructions+=1;goto B4e9f75;
case 0x4e9f7a:goto L4e9f7a;
case 0x4e9f7c:c.instructions+=1;goto B4e9f7c;
case 0x4e9f81:goto L4e9f81;
case 0x4e9f83:c.instructions+=5;goto B4e9f83;
case 0x4e9f86:c.instructions+=4;goto B4e9f86;
case 0x4e9f8a:c.instructions+=3;goto B4e9f8a;
case 0x4e9f8c:c.instructions+=2;goto B4e9f8c;
case 0x4e9f94:c.instructions+=1;goto B4e9f94;
case 0x4e9f96:goto L4e9f96;
case 0x4e9f9c:c.instructions+=11;goto B4e9f9c;
case 0x4e9f9e:c.instructions+=10;goto B4e9f9e;
case 0x4e9fa4:c.instructions+=9;goto B4e9fa4;
case 0x4e9fa5:c.instructions+=8;goto B4e9fa5;
case 0x4e9fab:c.instructions+=7;goto B4e9fab;
case 0x4e9fac:c.instructions+=6;goto B4e9fac;
case 0x4e9fb2:c.instructions+=5;goto B4e9fb2;
case 0x4e9fb3:c.instructions+=4;goto B4e9fb3;
case 0x4e9fb9:c.instructions+=3;goto B4e9fb9;
case 0x4e9fba:c.instructions+=2;goto B4e9fba;
case 0x4e9fbc:c.instructions+=1;goto B4e9fbc;
case 0x4e9fc1:goto L4e9fc1;
case 0x4e9fc7:c.instructions+=2;goto B4e9fc7;
case 0x4e9fca:c.instructions+=1;goto B4e9fca;
case 0x4e9fcc:goto L4e9fcc;
case 0x4e9fce:goto L4e9fce;
case 0x4e9fcf:c.instructions+=3;goto B4e9fcf;
case 0x4e9fd1:c.instructions+=2;goto B4e9fd1;
case 0x4e9fd5:c.instructions+=1;goto B4e9fd5;
case 0x4e9fda:goto L4e9fda;
case 0x4e9fdc:c.instructions+=1;goto B4e9fdc;
case 0x4e9fe1:goto L4e9fe1;
case 0x4e9fe3:c.instructions+=5;goto B4e9fe3;
case 0x4e9fe6:c.instructions+=4;goto B4e9fe6;
case 0x4e9fea:c.instructions+=3;goto B4e9fea;
case 0x4e9fec:c.instructions+=2;goto B4e9fec;
case 0x4e9ff4:c.instructions+=1;goto B4e9ff4;
case 0x4e9ff6:goto L4e9ff6;
case 0x4e9ffc:c.instructions+=2;goto B4e9ffc;
case 0x4e9ffe:c.instructions+=1;goto B4e9ffe;
default:missing_instruction(c.pc);}
B4e9002:L4e9002:{c.instructions+=2;NFSU2_TR(0x4e9002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9003:{NFSU2_TR(0x4e9003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9006:L4e9006:{c.instructions+=7;NFSU2_TR(0x4e9006);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e900a:{NFSU2_TR(0x4e900a);
__builtin_memmove(gp(0x836538),(R+4),4);
}
B4e9010:{NFSU2_TR(0x4e9010);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e9013:{NFSU2_TR(0x4e9013);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9016:{NFSU2_TR(0x4e9016);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e901b:{NFSU2_TR(0x4e901b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e901c:{NFSU2_TR(0x4e901c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9021ull));
TAIL_STATIC(0x4be9f0u,4be);
}
B4e9021:L4e9021:{c.instructions+=2;NFSU2_TR(0x4e9021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9022:{NFSU2_TR(0x4e9022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9025:L4e9025:{c.instructions+=3;NFSU2_TR(0x4e9025);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9028:{NFSU2_TR(0x4e9028);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e902a:{NFSU2_TR(0x4e902a);
if(r1(R+518)){{goto L4e9031;}}
}
B4e902c:L4e902c:{c.instructions+=2;NFSU2_TR(0x4e902c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e902f:{NFSU2_TR(0x4e902f);
{goto L4e9033;}
}
B4e9031:L4e9031:{c.instructions+=1;NFSU2_TR(0x4e9031);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e9033:L4e9033:{c.instructions+=4;NFSU2_TR(0x4e9033);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9036:{NFSU2_TR(0x4e9036);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e903b:{NFSU2_TR(0x4e903b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e903c:{NFSU2_TR(0x4e903c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9041ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4e9041:L4e9041:{c.instructions+=4;NFSU2_TR(0x4e9041);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9044:{NFSU2_TR(0x4e9044);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9049:{NFSU2_TR(0x4e9049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e904a:{NFSU2_TR(0x4e904a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e904full));
TAIL_STATIC(0x52cef0u,52c);
}
B4e904f:L4e904f:{c.instructions+=3;NFSU2_TR(0x4e904f);
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
B4e9052:{NFSU2_TR(0x4e9052);
__builtin_memmove((R+4),(R+0),4);
}
B4e9054:{NFSU2_TR(0x4e9054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9059ull));
TAIL_STATIC(0x5047e0u,504);
}
B4e9059:L4e9059:{c.instructions+=4;NFSU2_TR(0x4e9059);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B4e905f:{NFSU2_TR(0x4e905f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9069:{NFSU2_TR(0x4e9069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e906a:{NFSU2_TR(0x4e906a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e906d:L4e906d:{c.instructions+=6;NFSU2_TR(0x4e906d);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4e9073:{NFSU2_TR(0x4e9073);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e9076:{NFSU2_TR(0x4e9076);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9079:{NFSU2_TR(0x4e9079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e907a:{NFSU2_TR(0x4e907a);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e907f:{NFSU2_TR(0x4e907f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9084ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e9084:L4e9084:{c.instructions+=5;NFSU2_TR(0x4e9084);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9088:{NFSU2_TR(0x4e9088);
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
B4e908b:{NFSU2_TR(0x4e908b);
__builtin_memmove(gp(0x836538),(R+4),4);
}
B4e9091:{NFSU2_TR(0x4e9091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9092:{NFSU2_TR(0x4e9092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9095:L4e9095:{c.instructions+=2;NFSU2_TR(0x4e9095);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e909a:{NFSU2_TR(0x4e909a);
if(r1(R+518)){{goto L4e9163;}}
}
B4e90a0:L4e90a0:{c.instructions+=2;NFSU2_TR(0x4e90a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e90a5:{NFSU2_TR(0x4e90a5);
if(r1(R+518)){{goto L4e9157;}}
}
B4e90ab:L4e90ab:{c.instructions+=2;NFSU2_TR(0x4e90ab);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e90b0:{NFSU2_TR(0x4e90b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9175;}}
}
B4e90b6:L4e90b6:{c.instructions+=3;NFSU2_TR(0x4e90b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e90bc:{NFSU2_TR(0x4e90bc);
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
B4e90be:{NFSU2_TR(0x4e90be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9175;}}
}
B4e90c4:L4e90c4:{c.instructions+=10;NFSU2_TR(0x4e90c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e90ce:{NFSU2_TR(0x4e90ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
w4(U+4,u32(0xfff0bdc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e90d8:{NFSU2_TR(0x4e90d8);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4e90de:{NFSU2_TR(0x4e90de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e90e1:{NFSU2_TR(0x4e90e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e90e2:{NFSU2_TR(0x4e90e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e90e8:{NFSU2_TR(0x4e90e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e90e9:{NFSU2_TR(0x4e90e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4e90ec:{NFSU2_TR(0x4e90ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e90ee:{NFSU2_TR(0x4e90ee);
if(r1(R+518)){{goto L4e9137;}}
}
B4e90f0:L4e90f0:{c.instructions+=1;NFSU2_TR(0x4e90f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e90f1:L4e90f1:{c.instructions+=2;NFSU2_TR(0x4e90f1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e90f6:{NFSU2_TR(0x4e90f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e90fbull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4e90fb:L4e90fb:{c.instructions+=3;NFSU2_TR(0x4e90fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4e90ff:{NFSU2_TR(0x4e90ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9100:{NFSU2_TR(0x4e9100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9105ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4e9105:L4e9105:{c.instructions+=3;NFSU2_TR(0x4e9105);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e9108:{NFSU2_TR(0x4e9108);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e910b:{NFSU2_TR(0x4e910b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e9130;}}
}
B4e910d:L4e910d:{c.instructions+=3;NFSU2_TR(0x4e910d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e910f:{NFSU2_TR(0x4e910f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9110:{NFSU2_TR(0x4e9110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9115ull));
TAIL_STATIC(0x43ddf0u,43d);
}
B4e9115:L4e9115:{c.instructions+=3;NFSU2_TR(0x4e9115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e9118:{NFSU2_TR(0x4e9118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e911a:{NFSU2_TR(0x4e911a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9130;}}
}
B4e911c:L4e911c:{c.instructions+=9;NFSU2_TR(0x4e911c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e911f:{NFSU2_TR(0x4e911f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9122:{NFSU2_TR(0x4e9122);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9123:{NFSU2_TR(0x4e9123);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9124:{NFSU2_TR(0x4e9124);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9127:{NFSU2_TR(0x4e9127);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9128:{NFSU2_TR(0x4e9128);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9129:{NFSU2_TR(0x4e9129);
__builtin_memmove((R+4),(R+28),4);
}
B4e912b:{NFSU2_TR(0x4e912b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9130ull));
TAIL_STATIC(0x4d70e0u,4d7);
}
B4e9130:L4e9130:{c.instructions+=3;NFSU2_TR(0x4e9130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4e9132:{NFSU2_TR(0x4e9132);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e9134:{NFSU2_TR(0x4e9134);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e90f1u);}goto L4e90f1;}}
}
B4e9136:L4e9136:{c.instructions+=1;NFSU2_TR(0x4e9136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e9137:L4e9137:{c.instructions+=6;NFSU2_TR(0x4e9137);
__builtin_memmove((R+0),gp(0x7f4564),4);
}
B4e913c:{NFSU2_TR(0x4e913c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e913e:{NFSU2_TR(0x4e913e);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9143:{NFSU2_TR(0x4e9143);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9148:{NFSU2_TR(0x4e9148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9149:{NFSU2_TR(0x4e9149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e914eull));
TAIL_STATIC(0x537c00u,537);
}
B4e914e:L4e914e:{c.instructions+=5;NFSU2_TR(0x4e914e);
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
B4e9151:{NFSU2_TR(0x4e9151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9152:{NFSU2_TR(0x4e9152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e9153:{NFSU2_TR(0x4e9153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9154:{NFSU2_TR(0x4e9154);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9157:L4e9157:{c.instructions+=2;NFSU2_TR(0x4e9157);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e915a:{NFSU2_TR(0x4e915a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e915full));
TAIL_STATIC(0x54eb80u,54e);
}
B4e915f:L4e915f:{c.instructions+=2;NFSU2_TR(0x4e915f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9160:{NFSU2_TR(0x4e9160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9163:L4e9163:{c.instructions+=4;NFSU2_TR(0x4e9163);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9167:{NFSU2_TR(0x4e9167);
__builtin_memmove(gp(0x836538),(R+4),4);
}
B4e916d:{NFSU2_TR(0x4e916d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9170:{NFSU2_TR(0x4e9170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9175ull));
TAIL_STATIC(0x54eb40u,54e);
}
B4e9175:L4e9175:{c.instructions+=2;NFSU2_TR(0x4e9175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9176:{NFSU2_TR(0x4e9176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9180:L4e9180:{c.instructions+=15;NFSU2_TR(0x4e9180);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9182:{NFSU2_TR(0x4e9182);
u8 U[4];
w4(U+0,u32(0x775f2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9187:{NFSU2_TR(0x4e9187);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e918d:{NFSU2_TR(0x4e918d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e918e:{NFSU2_TR(0x4e918e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9195:{NFSU2_TR(0x4e9195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9196:{NFSU2_TR(0x4e9196);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9197:{NFSU2_TR(0x4e9197);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e919b:{NFSU2_TR(0x4e919b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e919d:{NFSU2_TR(0x4e919d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e91a0:{NFSU2_TR(0x4e91a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e91a4:{NFSU2_TR(0x4e91a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e91a7:{NFSU2_TR(0x4e91a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e91aa:{NFSU2_TR(0x4e91aa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4e91ac:{NFSU2_TR(0x4e91ac);
if(r1(R+518)){{goto L4e91d6;}}
}
B4e91ae:L4e91ae:{c.instructions+=1;NFSU2_TR(0x4e91ae);
__builtin_memmove((R+28),(R+28),4);
}
B4e91b0:L4e91b0:{c.instructions+=4;NFSU2_TR(0x4e91b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e91b2:{NFSU2_TR(0x4e91b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e91b5:{NFSU2_TR(0x4e91b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e91b6:{NFSU2_TR(0x4e91b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e91bbull));
TAIL_STATIC(0x575630u,575);
}
B4e91bb:L4e91bb:{c.instructions+=7;NFSU2_TR(0x4e91bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e91bd:{NFSU2_TR(0x4e91bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e91bf:{NFSU2_TR(0x4e91bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e91c2:{NFSU2_TR(0x4e91c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e91c4:{NFSU2_TR(0x4e91c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e91c5:{NFSU2_TR(0x4e91c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e91c8:{NFSU2_TR(0x4e91c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e91cdull));
TAIL_STATIC(0x440ef0u,440);
}
B4e91cd:L4e91cd:{c.instructions+=4;NFSU2_TR(0x4e91cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e91cf:{NFSU2_TR(0x4e91cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e91d2:{NFSU2_TR(0x4e91d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e91d4:{NFSU2_TR(0x4e91d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e91b0u);}goto L4e91b0;}}
}
B4e91d6:L4e91d6:{c.instructions+=4;NFSU2_TR(0x4e91d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e91d8:{NFSU2_TR(0x4e91d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e91da:{NFSU2_TR(0x4e91da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e91e2:{NFSU2_TR(0x4e91e2);
if(r1(R+518)){{goto L4e91fd;}}
}
B4e91e4:L4e91e4:{c.instructions+=6;NFSU2_TR(0x4e91e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e91e6:{NFSU2_TR(0x4e91e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e91e9:{NFSU2_TR(0x4e91e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e91eb:{NFSU2_TR(0x4e91eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e91ec:{NFSU2_TR(0x4e91ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e91ef:{NFSU2_TR(0x4e91ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e91f4ull));
TAIL_STATIC(0x440ef0u,440);
}
B4e91f4:L4e91f4:{c.instructions+=4;NFSU2_TR(0x4e91f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e91f6:{NFSU2_TR(0x4e91f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e91f9:{NFSU2_TR(0x4e91f9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e91fb:{NFSU2_TR(0x4e91fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e91e4u);}goto L4e91e4;}}
}
B4e91fd:L4e91fd:{c.instructions+=5;NFSU2_TR(0x4e91fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9201:{NFSU2_TR(0x4e9201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9202:{NFSU2_TR(0x4e9202);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9209:{NFSU2_TR(0x4e9209);
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
B4e920c:{NFSU2_TR(0x4e920c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9210:L4e9210:{c.instructions+=7;NFSU2_TR(0x4e9210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9211:{NFSU2_TR(0x4e9211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9212:{NFSU2_TR(0x4e9212);
__builtin_memmove((R+24),(R+4),4);
}
B4e9214:{NFSU2_TR(0x4e9214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9217:{NFSU2_TR(0x4e9217);
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
B4e9219:{NFSU2_TR(0x4e9219);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e921a:{NFSU2_TR(0x4e921a);
if(r1(R+518)){{goto L4e945b;}}
}
B4e9220:L4e9220:{c.instructions+=3;NFSU2_TR(0x4e9220);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e9223:{NFSU2_TR(0x4e9223);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9225:{NFSU2_TR(0x4e9225);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9444;}}
}
B4e922b:L4e922b:{c.instructions+=2;NFSU2_TR(0x4e922b);
w4(R+4,u32(0x89cf48ull));
}
B4e9230:{NFSU2_TR(0x4e9230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9235ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4e9235:L4e9235:{c.instructions+=2;NFSU2_TR(0x4e9235);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9237:{NFSU2_TR(0x4e9237);
if(r1(R+518)){{goto L4e9444;}}
}
B4e923d:L4e923d:{c.instructions+=4;NFSU2_TR(0x4e923d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9240:{NFSU2_TR(0x4e9240);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9242:{NFSU2_TR(0x4e9242);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e9245:{NFSU2_TR(0x4e9245);
if(r1(R+518)){{goto L4e925e;}}
}
B4e9247:L4e9247:{c.instructions+=2;NFSU2_TR(0x4e9247);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e924c:{NFSU2_TR(0x4e924c);
if(r1(R+518)){{goto L4e925e;}}
}
B4e924e:L4e924e:{c.instructions+=4;NFSU2_TR(0x4e924e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9252:{NFSU2_TR(0x4e9252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9253:{NFSU2_TR(0x4e9253);
__builtin_memmove((R+4),(R+12),4);
}
B4e9255:{NFSU2_TR(0x4e9255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e925aull));
TAIL_STATIC(0x577310u,577);
}
B4e925a:L4e925a:{c.instructions+=2;NFSU2_TR(0x4e925a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e925c:{NFSU2_TR(0x4e925c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e92b1;}}
}
B4e925e:L4e925e:{c.instructions+=3;NFSU2_TR(0x4e925e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9261:{NFSU2_TR(0x4e9261);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9263:{NFSU2_TR(0x4e9263);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e92b6;}}
}
B4e9265:L4e9265:{c.instructions+=8;NFSU2_TR(0x4e9265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9268:{NFSU2_TR(0x4e9268);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e926b:{NFSU2_TR(0x4e926b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e926e:{NFSU2_TR(0x4e926e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9271:{NFSU2_TR(0x4e9271);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9272:{NFSU2_TR(0x4e9272);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9273:{NFSU2_TR(0x4e9273);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9274:{NFSU2_TR(0x4e9274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9279ull));
TAIL_STATIC(0x542600u,542);
}
B4e9279:L4e9279:{c.instructions+=4;NFSU2_TR(0x4e9279);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e927b:{NFSU2_TR(0x4e927b);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e9281:{NFSU2_TR(0x4e9281);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4e9287:{NFSU2_TR(0x4e9287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e928cull));
TAIL_STATIC(0x75bed4u,75b);
}
B4e928c:L4e928c:{c.instructions+=3;NFSU2_TR(0x4e928c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e928d:{NFSU2_TR(0x4e928d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4e928f:{NFSU2_TR(0x4e928f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9294ull));
TAIL_STATIC(0x575630u,575);
}
B4e9294:L4e9294:{c.instructions+=7;NFSU2_TR(0x4e9294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9297:{NFSU2_TR(0x4e9297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e9299:{NFSU2_TR(0x4e9299);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e929c:{NFSU2_TR(0x4e929c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e929e:{NFSU2_TR(0x4e929e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e929f:{NFSU2_TR(0x4e929f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e92a2:{NFSU2_TR(0x4e92a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e92a7ull));
TAIL_STATIC(0x440ef0u,440);
}
B4e92a7:L4e92a7:{c.instructions+=4;NFSU2_TR(0x4e92a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e92aa:{NFSU2_TR(0x4e92aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e92ad:{NFSU2_TR(0x4e92ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4e92ae:{NFSU2_TR(0x4e92ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e92b1:L4e92b1:{c.instructions+=2;NFSU2_TR(0x4e92b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e92b4:{NFSU2_TR(0x4e92b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e92b6:L4e92b6:{c.instructions+=1;NFSU2_TR(0x4e92b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9427;}}
}
B4e92bc:L4e92bc:{c.instructions+=3;NFSU2_TR(0x4e92bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4e92be:{NFSU2_TR(0x4e92be);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e92c0:{NFSU2_TR(0x4e92c0);
if(r1(R+518)){{goto L4e92ce;}}
}
B4e92c2:L4e92c2:{c.instructions+=2;NFSU2_TR(0x4e92c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e92c8:{NFSU2_TR(0x4e92c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9427;}}
}
B4e92ce:L4e92ce:{c.instructions+=3;NFSU2_TR(0x4e92ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e92d1:{NFSU2_TR(0x4e92d1);
__builtin_memmove((R+4),(R+28),4);
}
B4e92d3:{NFSU2_TR(0x4e92d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e92d8ull));
TAIL_STATIC(0x401820u,401);
}
B4e92d8:L4e92d8:{c.instructions+=2;NFSU2_TR(0x4e92d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e92da:{NFSU2_TR(0x4e92da);
if(r1(R+518)){{goto L4e9363;}}
}
B4e92e0:L4e92e0:{c.instructions+=3;NFSU2_TR(0x4e92e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e92e3:{NFSU2_TR(0x4e92e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e92e5:{NFSU2_TR(0x4e92e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9363;}}
}
B4e92e7:L4e92e7:{c.instructions+=13;NFSU2_TR(0x4e92e7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e92e9:{NFSU2_TR(0x4e92e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e92ec:{NFSU2_TR(0x4e92ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e92ef:{NFSU2_TR(0x4e92ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e92f1:{NFSU2_TR(0x4e92f1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e92f7:{NFSU2_TR(0x4e92f7);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e92fd:{NFSU2_TR(0x4e92fd);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9302:{NFSU2_TR(0x4e9302);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9303:{NFSU2_TR(0x4e9303);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9304:{NFSU2_TR(0x4e9304);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e930a:{NFSU2_TR(0x4e930a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4e930c:{NFSU2_TR(0x4e930c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e9310:{NFSU2_TR(0x4e9310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9315ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e9315:L4e9315:{c.instructions+=6;NFSU2_TR(0x4e9315);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e9319:{NFSU2_TR(0x4e9319);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e931c:{NFSU2_TR(0x4e931c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e9322:{NFSU2_TR(0x4e9322);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e9324:{NFSU2_TR(0x4e9324);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9327:{NFSU2_TR(0x4e9327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9342;}}
}
B4e9329:L4e9329:{c.instructions+=2;NFSU2_TR(0x4e9329);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e932d:{NFSU2_TR(0x4e932d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9332ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4e9332:L4e9332:{c.instructions+=3;NFSU2_TR(0x4e9332);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9333:{NFSU2_TR(0x4e9333);
u8 U[4];
w4(U+0,u32(0x90599828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9338:{NFSU2_TR(0x4e9338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e933dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e933d:L4e933d:{c.instructions+=1;NFSU2_TR(0x4e933d);
{goto L4e93f0;}
}
B4e9342:L4e9342:{c.instructions+=2;NFSU2_TR(0x4e9342);
u8 U[4];
w4(U+0,u32(0x30cbdcb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9347:{NFSU2_TR(0x4e9347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e934cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e934c:L4e934c:{c.instructions+=6;NFSU2_TR(0x4e934c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e934f:{NFSU2_TR(0x4e934f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9350:{NFSU2_TR(0x4e9350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9353:{NFSU2_TR(0x4e9353);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9354:{NFSU2_TR(0x4e9354);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9355:{NFSU2_TR(0x4e9355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e935aull));
TAIL_STATIC(0x542600u,542);
}
B4e935a:L4e935a:{c.instructions+=5;NFSU2_TR(0x4e935a);
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
B4e935d:{NFSU2_TR(0x4e935d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e935e:{NFSU2_TR(0x4e935e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e935f:{NFSU2_TR(0x4e935f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e9360:{NFSU2_TR(0x4e9360);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9363:L4e9363:{c.instructions+=2;NFSU2_TR(0x4e9363);
w4(R+4,u32(0x83a9d0ull));
}
B4e9368:{NFSU2_TR(0x4e9368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e936dull));
TAIL_STATIC(0x4ae8d0u,4ae);
}
B4e936d:L4e936d:{c.instructions+=2;NFSU2_TR(0x4e936d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e936f:{NFSU2_TR(0x4e936f);
if(r1(R+518)){{goto L4e937f;}}
}
B4e9371:L4e9371:{c.instructions+=2;NFSU2_TR(0x4e9371);
w4(R+4,u32(0x89cf48ull));
}
B4e9376:{NFSU2_TR(0x4e9376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e937bull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4e937b:L4e937b:{c.instructions+=2;NFSU2_TR(0x4e937b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e937d:{NFSU2_TR(0x4e937d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e939b;}}
}
B4e937f:L4e937f:{c.instructions+=2;NFSU2_TR(0x4e937f);
w4(R+4,u32(0x89cf48ull));
}
B4e9384:{NFSU2_TR(0x4e9384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9389ull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4e9389:L4e9389:{c.instructions+=2;NFSU2_TR(0x4e9389);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e938b:{NFSU2_TR(0x4e938b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e940a;}}
}
B4e938d:L4e938d:{c.instructions+=2;NFSU2_TR(0x4e938d);
w4(R+4,u32(0x89cf48ull));
}
B4e9392:{NFSU2_TR(0x4e9392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9397ull));
TAIL_STATIC(0x5fe530u,5fe);
}
B4e9397:L4e9397:{c.instructions+=2;NFSU2_TR(0x4e9397);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9399:{NFSU2_TR(0x4e9399);
if(r1(R+518)){{goto L4e940a;}}
}
B4e939b:L4e939b:{c.instructions+=10;NFSU2_TR(0x4e939b);
__builtin_memmove((R+0),gp(0x89d05c),4);
}
B4e93a0:{NFSU2_TR(0x4e93a0);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8651ac))));
}
B4e93a6:{NFSU2_TR(0x4e93a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e93aa:{NFSU2_TR(0x4e93aa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e93ae:{NFSU2_TR(0x4e93ae);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e93b4:{NFSU2_TR(0x4e93b4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4e93b8:{NFSU2_TR(0x4e93b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e93be:{NFSU2_TR(0x4e93be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e93c0:{NFSU2_TR(0x4e93c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e93c3:{NFSU2_TR(0x4e93c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e940a;}}
}
B4e93c5:L4e93c5:{c.instructions+=7;NFSU2_TR(0x4e93c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e93c8:{NFSU2_TR(0x4e93c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e93cb:{NFSU2_TR(0x4e93cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93cd:{NFSU2_TR(0x4e93cd);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93d2:{NFSU2_TR(0x4e93d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93d3:{NFSU2_TR(0x4e93d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93d4:{NFSU2_TR(0x4e93d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e93d9ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e93d9:L4e93d9:{c.instructions+=3;NFSU2_TR(0x4e93d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e93dd:{NFSU2_TR(0x4e93dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e93e0:{NFSU2_TR(0x4e93e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e93e5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4e93e5:L4e93e5:{c.instructions+=3;NFSU2_TR(0x4e93e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93e6:{NFSU2_TR(0x4e93e6);
u8 U[4];
w4(U+0,u32(0xfa14812cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93eb:{NFSU2_TR(0x4e93eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e93f0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e93f0:L4e93f0:{c.instructions+=7;NFSU2_TR(0x4e93f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e93f3:{NFSU2_TR(0x4e93f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e93f6:{NFSU2_TR(0x4e93f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93f7:{NFSU2_TR(0x4e93f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e93fa:{NFSU2_TR(0x4e93fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93fb:{NFSU2_TR(0x4e93fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e93fc:{NFSU2_TR(0x4e93fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9401ull));
TAIL_STATIC(0x542600u,542);
}
B4e9401:L4e9401:{c.instructions+=5;NFSU2_TR(0x4e9401);
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
B4e9404:{NFSU2_TR(0x4e9404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9405:{NFSU2_TR(0x4e9405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9406:{NFSU2_TR(0x4e9406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e9407:{NFSU2_TR(0x4e9407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e940a:L4e940a:{c.instructions+=7;NFSU2_TR(0x4e940a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e940d:{NFSU2_TR(0x4e940d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9410:{NFSU2_TR(0x4e9410);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9412:{NFSU2_TR(0x4e9412);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9417:{NFSU2_TR(0x4e9417);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9418:{NFSU2_TR(0x4e9418);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9419:{NFSU2_TR(0x4e9419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e941eull));
TAIL_STATIC(0x5426c0u,542);
}
B4e941e:L4e941e:{c.instructions+=5;NFSU2_TR(0x4e941e);
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
B4e9421:{NFSU2_TR(0x4e9421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9422:{NFSU2_TR(0x4e9422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9423:{NFSU2_TR(0x4e9423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e9424:{NFSU2_TR(0x4e9424);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9427:L4e9427:{c.instructions+=7;NFSU2_TR(0x4e9427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e942a:{NFSU2_TR(0x4e942a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e942d:{NFSU2_TR(0x4e942d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e942f:{NFSU2_TR(0x4e942f);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9434:{NFSU2_TR(0x4e9434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9435:{NFSU2_TR(0x4e9435);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9436:{NFSU2_TR(0x4e9436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e943bull));
TAIL_STATIC(0x5426c0u,542);
}
B4e943b:L4e943b:{c.instructions+=5;NFSU2_TR(0x4e943b);
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
B4e943e:{NFSU2_TR(0x4e943e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e943f:{NFSU2_TR(0x4e943f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9440:{NFSU2_TR(0x4e9440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e9441:{NFSU2_TR(0x4e9441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9444:L4e9444:{c.instructions+=7;NFSU2_TR(0x4e9444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9447:{NFSU2_TR(0x4e9447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e944a:{NFSU2_TR(0x4e944a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e944c:{NFSU2_TR(0x4e944c);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9451:{NFSU2_TR(0x4e9451);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9452:{NFSU2_TR(0x4e9452);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9453:{NFSU2_TR(0x4e9453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9458ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e9458:L4e9458:{c.instructions+=1;NFSU2_TR(0x4e9458);
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
B4e945b:L4e945b:{c.instructions+=4;NFSU2_TR(0x4e945b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e945c:{NFSU2_TR(0x4e945c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e945d:{NFSU2_TR(0x4e945d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e945e:{NFSU2_TR(0x4e945e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9470:L4e9470:{c.instructions+=7;NFSU2_TR(0x4e9470);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9471:{NFSU2_TR(0x4e9471);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9472:{NFSU2_TR(0x4e9472);
__builtin_memmove((R+24),(R+4),4);
}
B4e9474:{NFSU2_TR(0x4e9474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9477:{NFSU2_TR(0x4e9477);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e947a:{NFSU2_TR(0x4e947a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e947b:{NFSU2_TR(0x4e947b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e948d;}}
}
B4e947d:L4e947d:{c.instructions+=4;NFSU2_TR(0x4e947d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e947f:{NFSU2_TR(0x4e947f);
__builtin_memmove((R+4),(R+24),4);
}
B4e9481:{NFSU2_TR(0x4e9481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9488:{NFSU2_TR(0x4e9488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e948dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e9210u);}goto L4e9210;}
}
B4e948d:L4e948d:{c.instructions+=3;NFSU2_TR(0x4e948d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e9491:{NFSU2_TR(0x4e9491);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9492:{NFSU2_TR(0x4e9492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9497ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4e9497:L4e9497:{c.instructions+=3;NFSU2_TR(0x4e9497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e9498:{NFSU2_TR(0x4e9498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9499:{NFSU2_TR(0x4e9499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e949eull));
TAIL_STATIC(0x575620u,575);
}
B4e949e:L4e949e:{c.instructions+=4;NFSU2_TR(0x4e949e);
__builtin_memmove((R+28),(R+0),4);
}
B4e94a0:{NFSU2_TR(0x4e94a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94a1:{NFSU2_TR(0x4e94a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94a2:{NFSU2_TR(0x4e94a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e94a7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4e94a7:L4e94a7:{c.instructions+=4;NFSU2_TR(0x4e94a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e94aa:{NFSU2_TR(0x4e94aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94ab:{NFSU2_TR(0x4e94ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e94ae:{NFSU2_TR(0x4e94ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e94b3ull));
TAIL_STATIC(0x479130u,479);
}
B4e94b3:L4e94b3:{c.instructions+=7;NFSU2_TR(0x4e94b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e94b6:{NFSU2_TR(0x4e94b6);
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
B4e94b7:{NFSU2_TR(0x4e94b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e94b8:{NFSU2_TR(0x4e94b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e94bb:{NFSU2_TR(0x4e94bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e94bc:{NFSU2_TR(0x4e94bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e94bd:{NFSU2_TR(0x4e94bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e94c0:L4e94c0:{c.instructions+=12;NFSU2_TR(0x4e94c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94c2:{NFSU2_TR(0x4e94c2);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94c7:{NFSU2_TR(0x4e94c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e94cd:{NFSU2_TR(0x4e94cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94ce:{NFSU2_TR(0x4e94ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e94d5:{NFSU2_TR(0x4e94d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94d6:{NFSU2_TR(0x4e94d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e94da:{NFSU2_TR(0x4e94da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94db:{NFSU2_TR(0x4e94db);
__builtin_memmove((R+24),(R+4),4);
}
B4e94dd:{NFSU2_TR(0x4e94dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e94de:{NFSU2_TR(0x4e94de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e94e2:{NFSU2_TR(0x4e94e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e94e7ull));
TAIL_STATIC(0x552330u,552);
}
B4e94e7:L4e94e7:{c.instructions+=6;NFSU2_TR(0x4e94e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e94e9:{NFSU2_TR(0x4e94e9);
__builtin_memmove((R+4),(R+24),4);
}
B4e94eb:{NFSU2_TR(0x4e94eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e94ef:{NFSU2_TR(0x4e94ef);
u8 U[4];
w4(U+0,u32(0x797a70ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e94f5:{NFSU2_TR(0x4e94f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e94fb:{NFSU2_TR(0x4e94fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9500ull));
TAIL_STATIC(0x4d7160u,4d7);
}
B4e9500:L4e9500:{c.instructions+=6;NFSU2_TR(0x4e9500);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9504:{NFSU2_TR(0x4e9504);
__builtin_memmove((R+0),(R+24),4);
}
B4e9506:{NFSU2_TR(0x4e9506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9507:{NFSU2_TR(0x4e9507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e950e:{NFSU2_TR(0x4e950e);
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
B4e9511:{NFSU2_TR(0x4e9511);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9520:L4e9520:{c.instructions+=3;NFSU2_TR(0x4e9520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9521:{NFSU2_TR(0x4e9521);
__builtin_memmove((R+24),(R+4),4);
}
B4e9523:{NFSU2_TR(0x4e9523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9528ull));
{goto L4e9540;}
}
B4e9528:L4e9528:{c.instructions+=2;NFSU2_TR(0x4e9528);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4e952d:{NFSU2_TR(0x4e952d);
if(r1(R+518)){{goto L4e9538;}}
}
B4e952f:L4e952f:{c.instructions+=2;NFSU2_TR(0x4e952f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9530:{NFSU2_TR(0x4e9530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9535ull));
TAIL_STATIC(0x575630u,575);
}
B4e9535:L4e9535:{c.instructions+=1;NFSU2_TR(0x4e9535);
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
B4e9538:L4e9538:{c.instructions+=3;NFSU2_TR(0x4e9538);
__builtin_memmove((R+0),(R+24),4);
}
B4e953a:{NFSU2_TR(0x4e953a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e953b:{NFSU2_TR(0x4e953b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9540:L4e9540:{c.instructions+=14;NFSU2_TR(0x4e9540);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9542:{NFSU2_TR(0x4e9542);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9547:{NFSU2_TR(0x4e9547);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e954d:{NFSU2_TR(0x4e954d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e954e:{NFSU2_TR(0x4e954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9555:{NFSU2_TR(0x4e9555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9556:{NFSU2_TR(0x4e9556);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9557:{NFSU2_TR(0x4e9557);
__builtin_memmove((R+24),(R+4),4);
}
B4e9559:{NFSU2_TR(0x4e9559);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e955d:{NFSU2_TR(0x4e955d);
u8 U[4];
w4(U+0,u32(0x797a70ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e9563:{NFSU2_TR(0x4e9563);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4e9569:{NFSU2_TR(0x4e9569);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e956b:{NFSU2_TR(0x4e956b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9573:{NFSU2_TR(0x4e9573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9578ull));
TAIL_STATIC(0x481210u,481);
}
B4e9578:L4e9578:{c.instructions+=3;NFSU2_TR(0x4e9578);
__builtin_memmove((R+4),(R+24),4);
}
B4e957a:{NFSU2_TR(0x4e957a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9582:{NFSU2_TR(0x4e9582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9587ull));
TAIL_STATIC(0x4defb0u,4de);
}
B4e9587:L4e9587:{c.instructions+=5;NFSU2_TR(0x4e9587);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e958b:{NFSU2_TR(0x4e958b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e958c:{NFSU2_TR(0x4e958c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9593:{NFSU2_TR(0x4e9593);
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
B4e9596:{NFSU2_TR(0x4e9596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e95a0:L4e95a0:{c.instructions+=18;NFSU2_TR(0x4e95a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95a2:{NFSU2_TR(0x4e95a2);
u8 U[4];
w4(U+0,u32(0x7767c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95a7:{NFSU2_TR(0x4e95a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e95ad:{NFSU2_TR(0x4e95ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95ae:{NFSU2_TR(0x4e95ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e95b5:{NFSU2_TR(0x4e95b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95b6:{NFSU2_TR(0x4e95b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95b7:{NFSU2_TR(0x4e95b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95b8:{NFSU2_TR(0x4e95b8);
__builtin_memmove((R+28),(R+4),4);
}
B4e95ba:{NFSU2_TR(0x4e95ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e95be:{NFSU2_TR(0x4e95be);
u8 U[4];
w4(U+0,u32(0x797a8cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e95c4:{NFSU2_TR(0x4e95c4);
__builtin_memmove((R+24),gp(0x8363dc),4);
}
B4e95ca:{NFSU2_TR(0x4e95ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e95cd:{NFSU2_TR(0x4e95cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e95d0:{NFSU2_TR(0x4e95d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B4e95d3:{NFSU2_TR(0x4e95d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e95d5:{NFSU2_TR(0x4e95d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e95dd:{NFSU2_TR(0x4e95dd);
if(r1(R+518)){{goto L4e95ef;}}
}
B4e95df:L4e95df:{c.instructions+=3;NFSU2_TR(0x4e95df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95e0:{NFSU2_TR(0x4e95e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e95e1:{NFSU2_TR(0x4e95e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e95e6ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e95e6:L4e95e6:{c.instructions+=3;NFSU2_TR(0x4e95e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e95e9:{NFSU2_TR(0x4e95e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e95eb:{NFSU2_TR(0x4e95eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e95ef;}}
}
B4e95ed:L4e95ed:{c.instructions+=1;NFSU2_TR(0x4e95ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4e95ef:L4e95ef:{c.instructions+=5;NFSU2_TR(0x4e95ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e95f2:{NFSU2_TR(0x4e95f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e95f5:{NFSU2_TR(0x4e95f5);
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
B4e95f7:{NFSU2_TR(0x4e95f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e95fc:{NFSU2_TR(0x4e95fc);
if(r1(R+518)){{goto L4e9619;}}
}
B4e95fe:L4e95fe:{c.instructions+=1;NFSU2_TR(0x4e95fe);
__builtin_memmove((R+28),(R+28),4);
}
B4e9600:L4e9600:{c.instructions+=6;NFSU2_TR(0x4e9600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e9602:{NFSU2_TR(0x4e9602);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e9605:{NFSU2_TR(0x4e9605);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e9607:{NFSU2_TR(0x4e9607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9608:{NFSU2_TR(0x4e9608);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e960b:{NFSU2_TR(0x4e960b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9610ull));
TAIL_STATIC(0x575630u,575);
}
B4e9610:L4e9610:{c.instructions+=4;NFSU2_TR(0x4e9610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e9612:{NFSU2_TR(0x4e9612);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9615:{NFSU2_TR(0x4e9615);
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
B4e9617:{NFSU2_TR(0x4e9617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e9600u);}goto L4e9600;}}
}
B4e9619:L4e9619:{c.instructions+=3;NFSU2_TR(0x4e9619);
__builtin_memmove((R+4),(R+28),4);
}
B4e961b:{NFSU2_TR(0x4e961b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9623:{NFSU2_TR(0x4e9623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9628ull));
TAIL_STATIC(0x510d40u,510);
}
B4e9628:L4e9628:{c.instructions+=6;NFSU2_TR(0x4e9628);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e962c:{NFSU2_TR(0x4e962c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e962d:{NFSU2_TR(0x4e962d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e962e:{NFSU2_TR(0x4e962e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9635:{NFSU2_TR(0x4e9635);
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
B4e9638:{NFSU2_TR(0x4e9638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9640:L4e9640:{c.instructions+=8;NFSU2_TR(0x4e9640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9641:{NFSU2_TR(0x4e9641);
__builtin_memmove((R+24),(R+4),4);
}
B4e9643:{NFSU2_TR(0x4e9643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9646:{NFSU2_TR(0x4e9646);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4e964c:{NFSU2_TR(0x4e964c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e964f:{NFSU2_TR(0x4e964f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e9652:{NFSU2_TR(0x4e9652);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9653:{NFSU2_TR(0x4e9653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9658ull));
TAIL_STATIC(0x4a3d50u,4a3);
}
B4e9658:L4e9658:{c.instructions+=3;NFSU2_TR(0x4e9658);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e965b:{NFSU2_TR(0x4e965b);
__builtin_memmove((R+4),(R+24),4);
}
B4e965d:{NFSU2_TR(0x4e965d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9662ull));
TAIL_STATIC(0x4a3f30u,4a3);
}
B4e9662:L4e9662:{c.instructions+=3;NFSU2_TR(0x4e9662);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4e9667:{NFSU2_TR(0x4e9667);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9669:{NFSU2_TR(0x4e9669);
if(r1(R+518)){{goto L4e9694;}}
}
B4e966b:L4e966b:{c.instructions+=3;NFSU2_TR(0x4e966b);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4e9670:{NFSU2_TR(0x4e9670);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9672:{NFSU2_TR(0x4e9672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e967d;}}
}
B4e9674:L4e9674:{c.instructions+=3;NFSU2_TR(0x4e9674);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4e9679:{NFSU2_TR(0x4e9679);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e967b:{NFSU2_TR(0x4e967b);
if(r1(R+518)){{goto L4e9694;}}
}
B4e967d:L4e967d:{c.instructions+=2;NFSU2_TR(0x4e967d);
__builtin_memmove((R+4),(R+24),4);
}
B4e967f:{NFSU2_TR(0x4e967f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9684ull));
TAIL_STATIC(0x4bf4d0u,4bf);
}
B4e9684:L4e9684:{c.instructions+=4;NFSU2_TR(0x4e9684);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9686:{NFSU2_TR(0x4e9686);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9688:{NFSU2_TR(0x4e9688);
__builtin_memmove((R+4),(R+24),4);
}
B4e968a:{NFSU2_TR(0x4e968a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e968full));
TAIL_STATIC(0x4a41a0u,4a4);
}
B4e968f:L4e968f:{c.instructions+=1;NFSU2_TR(0x4e968f);
{goto L4e9750;}
}
B4e9694:L4e9694:{c.instructions+=3;NFSU2_TR(0x4e9694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9695:{NFSU2_TR(0x4e9695);
__builtin_memmove((R+4),(R+24),4);
}
B4e9697:{NFSU2_TR(0x4e9697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e969cull));
TAIL_STATIC(0x4d7240u,4d7);
}
B4e969c:L4e969c:{c.instructions+=3;NFSU2_TR(0x4e969c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e96a1:{NFSU2_TR(0x4e96a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e96a4:{NFSU2_TR(0x4e96a4);
if(r1(R+518)){{goto L4e971e;}}
}
B4e96a6:L4e96a6:{c.instructions+=2;NFSU2_TR(0x4e96a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e96ab:{NFSU2_TR(0x4e96ab);
if(r1(R+518)){{goto L4e971e;}}
}
B4e96ad:L4e96ad:{c.instructions+=3;NFSU2_TR(0x4e96ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e96b0:{NFSU2_TR(0x4e96b0);
u8 U[4];
w4(U+0,u32(0xf82df37eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96b5:{NFSU2_TR(0x4e96b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e96baull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e96ba:L4e96ba:{c.instructions+=5;NFSU2_TR(0x4e96ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e96bd:{NFSU2_TR(0x4e96bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96be:{NFSU2_TR(0x4e96be);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96c3:{NFSU2_TR(0x4e96c3);
u8 U[4];
w4(U+0,u32(0x797a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96c8:{NFSU2_TR(0x4e96c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e96cdull));
TAIL_STATIC(0x43db50u,43d);
}
B4e96cd:L4e96cd:{c.instructions+=4;NFSU2_TR(0x4e96cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e96d0:{NFSU2_TR(0x4e96d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96d1:{NFSU2_TR(0x4e96d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96d2:{NFSU2_TR(0x4e96d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e96d7ull));
TAIL_STATIC(0x537b80u,537);
}
B4e96d7:L4e96d7:{c.instructions+=5;NFSU2_TR(0x4e96d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e96da:{NFSU2_TR(0x4e96da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e96dd:{NFSU2_TR(0x4e96dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96df:{NFSU2_TR(0x4e96df);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96e4:{NFSU2_TR(0x4e96e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e96e9ull));
TAIL_STATIC(0x43db50u,43d);
}
B4e96e9:L4e96e9:{c.instructions+=5;NFSU2_TR(0x4e96e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e96ec:{NFSU2_TR(0x4e96ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96ed:{NFSU2_TR(0x4e96ed);
u8 U[4];
w4(U+0,u32(0xad685cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96f2:{NFSU2_TR(0x4e96f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e96f3:{NFSU2_TR(0x4e96f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e96f8ull));
TAIL_STATIC(0x537c60u,537);
}
B4e96f8:L4e96f8:{c.instructions+=5;NFSU2_TR(0x4e96f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e96fb:{NFSU2_TR(0x4e96fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e96fe:{NFSU2_TR(0x4e96fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9700:{NFSU2_TR(0x4e9700);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9705:{NFSU2_TR(0x4e9705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e970aull));
TAIL_STATIC(0x43db50u,43d);
}
B4e970a:L4e970a:{c.instructions+=5;NFSU2_TR(0x4e970a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e970d:{NFSU2_TR(0x4e970d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e970e:{NFSU2_TR(0x4e970e);
u8 U[4];
w4(U+0,u32(0x9b8c9d7aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9713:{NFSU2_TR(0x4e9713);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9714:{NFSU2_TR(0x4e9714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9719ull));
TAIL_STATIC(0x537c60u,537);
}
B4e9719:L4e9719:{c.instructions+=2;NFSU2_TR(0x4e9719);
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
B4e971c:{NFSU2_TR(0x4e971c);
{goto L4e974f;}
}
B4e971e:L4e971e:{c.instructions+=3;NFSU2_TR(0x4e971e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e9725:{NFSU2_TR(0x4e9725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e9728:{NFSU2_TR(0x4e9728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9731;}}
}
B4e972a:L4e972a:{c.instructions+=2;NFSU2_TR(0x4e972a);
u8 U[4];
w4(U+0,u32(0x93447ee3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e972f:{NFSU2_TR(0x4e972f);
{goto L4e9736;}
}
B4e9731:L4e9731:{c.instructions+=1;NFSU2_TR(0x4e9731);
u8 U[4];
w4(U+0,u32(0xfe4b4cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9736:L4e9736:{c.instructions+=1;NFSU2_TR(0x4e9736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e973bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e973b:L4e973b:{c.instructions+=5;NFSU2_TR(0x4e973b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e973c:{NFSU2_TR(0x4e973c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9741:{NFSU2_TR(0x4e9741);
u8 U[4];
w4(U+0,u32(0x19de3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9746:{NFSU2_TR(0x4e9746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9747:{NFSU2_TR(0x4e9747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e974cull));
TAIL_STATIC(0x537b80u,537);
}
B4e974c:L4e974c:{c.instructions+=1;NFSU2_TR(0x4e974c);
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
B4e974f:L4e974f:{c.instructions+=1;NFSU2_TR(0x4e974f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9750:L4e9750:{c.instructions+=1;NFSU2_TR(0x4e9750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9755ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e9755:L4e9755:{c.instructions+=2;NFSU2_TR(0x4e9755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9756:{NFSU2_TR(0x4e9756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e975bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e975b:L4e975b:{c.instructions+=3;NFSU2_TR(0x4e975b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e975e:{NFSU2_TR(0x4e975e);
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
B4e9760:{NFSU2_TR(0x4e9760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e977b;}}
}
B4e9762:L4e9762:{c.instructions+=5;NFSU2_TR(0x4e9762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9765:{NFSU2_TR(0x4e9765);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9767:{NFSU2_TR(0x4e9767);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e976c:{NFSU2_TR(0x4e976c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e976d:{NFSU2_TR(0x4e976d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9772ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e9772:L4e9772:{c.instructions+=2;NFSU2_TR(0x4e9772);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9773:{NFSU2_TR(0x4e9773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9778ull));
TAIL_STATIC(0x555f10u,555);
}
B4e9778:L4e9778:{c.instructions+=1;NFSU2_TR(0x4e9778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e977b:L4e977b:{c.instructions+=2;NFSU2_TR(0x4e977b);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e9781:{NFSU2_TR(0x4e9781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9786ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4e9786:L4e9786:{c.instructions+=3;NFSU2_TR(0x4e9786);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e978b:{NFSU2_TR(0x4e978b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e978e:{NFSU2_TR(0x4e978e);
if(r1(R+518)){{goto L4e9797;}}
}
B4e9790:L4e9790:{c.instructions+=2;NFSU2_TR(0x4e9790);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9795:{NFSU2_TR(0x4e9795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e97c0;}}
}
B4e9797:L4e9797:{c.instructions+=2;NFSU2_TR(0x4e9797);
w4(R+4,u32(0x89cf48ull));
}
B4e979c:{NFSU2_TR(0x4e979c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e97a1ull));
TAIL_STATIC(0x5fe500u,5fe);
}
B4e97a1:L4e97a1:{c.instructions+=2;NFSU2_TR(0x4e97a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e97a3:{NFSU2_TR(0x4e97a3);
if(r1(R+518)){{goto L4e97c0;}}
}
B4e97a5:L4e97a5:{c.instructions+=7;NFSU2_TR(0x4e97a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e97a8:{NFSU2_TR(0x4e97a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e97ab:{NFSU2_TR(0x4e97ab);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000000ull))));
}
B4e97b1:{NFSU2_TR(0x4e97b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97b2:{NFSU2_TR(0x4e97b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97b3:{NFSU2_TR(0x4e97b3);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e97b9:{NFSU2_TR(0x4e97b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e97beull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e97be:L4e97be:{c.instructions+=2;NFSU2_TR(0x4e97be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e97bf:{NFSU2_TR(0x4e97bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e97c0:L4e97c0:{c.instructions+=6;NFSU2_TR(0x4e97c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e97c3:{NFSU2_TR(0x4e97c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e97c6:{NFSU2_TR(0x4e97c6);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e97cc:{NFSU2_TR(0x4e97cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97cd:{NFSU2_TR(0x4e97cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97ce:{NFSU2_TR(0x4e97ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e97d3ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e97d3:L4e97d3:{c.instructions+=2;NFSU2_TR(0x4e97d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e97d4:{NFSU2_TR(0x4e97d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e97e0:L4e97e0:{c.instructions+=6;NFSU2_TR(0x4e97e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97e1:{NFSU2_TR(0x4e97e1);
__builtin_memmove((R+24),(R+4),4);
}
B4e97e3:{NFSU2_TR(0x4e97e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e97e6:{NFSU2_TR(0x4e97e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e97e8:{NFSU2_TR(0x4e97e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97e9:{NFSU2_TR(0x4e97e9);
if(r1(R+518)){{goto L4e9852;}}
}
B4e97eb:L4e97eb:{c.instructions+=10;NFSU2_TR(0x4e97eb);
__builtin_memmove((R+0),gp(0x8363dc),4);
}
B4e97f0:{NFSU2_TR(0x4e97f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e97f3:{NFSU2_TR(0x4e97f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e97f6:{NFSU2_TR(0x4e97f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e97f9:{NFSU2_TR(0x4e97f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e97fb:{NFSU2_TR(0x4e97fb);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9800:{NFSU2_TR(0x4e9800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9801:{NFSU2_TR(0x4e9801);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9802:{NFSU2_TR(0x4e9802);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e9806:{NFSU2_TR(0x4e9806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e980bull));
TAIL_STATIC(0x5426c0u,542);
}
B4e980b:L4e980b:{c.instructions+=5;NFSU2_TR(0x4e980b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e980e:{NFSU2_TR(0x4e980e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e9811:{NFSU2_TR(0x4e9811);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9813:{NFSU2_TR(0x4e9813);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9818:{NFSU2_TR(0x4e9818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e981dull));
TAIL_STATIC(0x43db50u,43d);
}
B4e981d:L4e981d:{c.instructions+=4;NFSU2_TR(0x4e981d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9820:{NFSU2_TR(0x4e9820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9821:{NFSU2_TR(0x4e9821);
u8 U[4];
w4(U+0,u32(0x797aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9826:{NFSU2_TR(0x4e9826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e982bull));
TAIL_STATIC(0x43db50u,43d);
}
B4e982b:L4e982b:{c.instructions+=4;NFSU2_TR(0x4e982b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e982e:{NFSU2_TR(0x4e982e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e982f:{NFSU2_TR(0x4e982f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9830:{NFSU2_TR(0x4e9830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9835ull));
TAIL_STATIC(0x537c60u,537);
}
B4e9835:L4e9835:{c.instructions+=4;NFSU2_TR(0x4e9835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9838:{NFSU2_TR(0x4e9838);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e983b:{NFSU2_TR(0x4e983b);
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
B4e983d:{NFSU2_TR(0x4e983d);
if(r1(R+518)){{goto L4e9848;}}
}
B4e983f:L4e983f:{c.instructions+=2;NFSU2_TR(0x4e983f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9840:{NFSU2_TR(0x4e9840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9845ull));
TAIL_STATIC(0x540a60u,540);
}
B4e9845:L4e9845:{c.instructions+=1;NFSU2_TR(0x4e9845);
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
B4e9848:L4e9848:{c.instructions+=1;NFSU2_TR(0x4e9848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e984f:L4e984f:{c.instructions+=3;NFSU2_TR(0x4e984f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9850:{NFSU2_TR(0x4e9850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9851:{NFSU2_TR(0x4e9851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9852:L4e9852:{c.instructions+=2;NFSU2_TR(0x4e9852);
w4(R+4,u32(0x89cf48ull));
}
B4e9857:{NFSU2_TR(0x4e9857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e985cull));
TAIL_STATIC(0x5fe500u,5fe);
}
B4e985c:L4e985c:{c.instructions+=2;NFSU2_TR(0x4e985c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e985e:{NFSU2_TR(0x4e985e);
if(r1(R+518)){{goto L4e9870;}}
}
B4e9860:L4e9860:{c.instructions+=6;NFSU2_TR(0x4e9860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9863:{NFSU2_TR(0x4e9863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9866:{NFSU2_TR(0x4e9866);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9867:{NFSU2_TR(0x4e9867);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000000ull))));
}
B4e986d:{NFSU2_TR(0x4e986d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e986e:{NFSU2_TR(0x4e986e);
{goto L4e9878;}
}
B4e9870:L4e9870:{c.instructions+=4;NFSU2_TR(0x4e9870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e9873:{NFSU2_TR(0x4e9873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9876:{NFSU2_TR(0x4e9876);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9877:{NFSU2_TR(0x4e9877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9878:L4e9878:{c.instructions+=2;NFSU2_TR(0x4e9878);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e987e:{NFSU2_TR(0x4e987e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9883ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e9883:L4e9883:{c.instructions+=2;NFSU2_TR(0x4e9883);
w4(R+4,u32(0x89cf48ull));
}
B4e9888:{NFSU2_TR(0x4e9888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e988dull));
TAIL_STATIC(0x5fe500u,5fe);
}
B4e988d:L4e988d:{c.instructions+=3;NFSU2_TR(0x4e988d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e988f:{NFSU2_TR(0x4e988f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e9892:{NFSU2_TR(0x4e9892);
if(r1(R+518)){{goto L4e98ca;}}
}
B4e9894:L4e9894:{c.instructions+=2;NFSU2_TR(0x4e9894);
u8 U[4];
w4(U+0,u32(0x80833fc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9899:{NFSU2_TR(0x4e9899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e989eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e989e:L4e989e:{c.instructions+=5;NFSU2_TR(0x4e989e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e98a1:{NFSU2_TR(0x4e98a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98a2:{NFSU2_TR(0x4e98a2);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98a7:{NFSU2_TR(0x4e98a7);
u8 U[4];
w4(U+0,u32(0x797a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98ac:{NFSU2_TR(0x4e98ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e98b1ull));
TAIL_STATIC(0x43db50u,43d);
}
B4e98b1:L4e98b1:{c.instructions+=4;NFSU2_TR(0x4e98b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e98b4:{NFSU2_TR(0x4e98b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98b5:{NFSU2_TR(0x4e98b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98b6:{NFSU2_TR(0x4e98b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e98bbull));
TAIL_STATIC(0x537b80u,537);
}
B4e98bb:L4e98bb:{c.instructions+=5;NFSU2_TR(0x4e98bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e98be:{NFSU2_TR(0x4e98be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e98c1:{NFSU2_TR(0x4e98c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98c3:{NFSU2_TR(0x4e98c3);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98c8:{NFSU2_TR(0x4e98c8);
{goto L4e98d1;}
}
B4e98ca:L4e98ca:{c.instructions+=2;NFSU2_TR(0x4e98ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98cc:{NFSU2_TR(0x4e98cc);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98d1:L4e98d1:{c.instructions+=1;NFSU2_TR(0x4e98d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e98d6ull));
TAIL_STATIC(0x43db50u,43d);
}
B4e98d6:L4e98d6:{c.instructions+=4;NFSU2_TR(0x4e98d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e98d9:{NFSU2_TR(0x4e98d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98da:{NFSU2_TR(0x4e98da);
u8 U[4];
w4(U+0,u32(0x797aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98df:{NFSU2_TR(0x4e98df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e98e4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4e98e4:L4e98e4:{c.instructions+=4;NFSU2_TR(0x4e98e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e98e7:{NFSU2_TR(0x4e98e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98e8:{NFSU2_TR(0x4e98e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98e9:{NFSU2_TR(0x4e98e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e98eeull));
TAIL_STATIC(0x537c60u,537);
}
B4e98ee:L4e98ee:{c.instructions+=6;NFSU2_TR(0x4e98ee);
__builtin_memmove((R+4),gp(0x865198),4);
}
B4e98f4:{NFSU2_TR(0x4e98f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e98f7:{NFSU2_TR(0x4e98f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e98f8:{NFSU2_TR(0x4e98f8);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4e98fe:{NFSU2_TR(0x4e98fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4e9901:{NFSU2_TR(0x4e9901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9906ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e9210u);}goto L4e9210;}
}
B4e9906:L4e9906:{c.instructions+=3;NFSU2_TR(0x4e9906);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e990b:{NFSU2_TR(0x4e990b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9910:{NFSU2_TR(0x4e9910);
if(r1(R+518)){{goto L4e9917;}}
}
B4e9912:L4e9912:{c.instructions+=2;NFSU2_TR(0x4e9912);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e9915:{NFSU2_TR(0x4e9915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e994c;}}
}
B4e9917:L4e9917:{c.instructions+=2;NFSU2_TR(0x4e9917);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e991e:{NFSU2_TR(0x4e991e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e994c;}}
}
B4e9920:L4e9920:{c.instructions+=2;NFSU2_TR(0x4e9920);
w4(R+4,u32(0x89cf48ull));
}
B4e9925:{NFSU2_TR(0x4e9925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e992aull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4e992a:L4e992a:{c.instructions+=2;NFSU2_TR(0x4e992a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e992c:{NFSU2_TR(0x4e992c);
if(r1(R+518)){{goto L4e994c;}}
}
B4e992e:L4e992e:{c.instructions+=3;NFSU2_TR(0x4e992e);
__builtin_memmove((R+0),gp(0x89d05c),4);
}
B4e9933:{NFSU2_TR(0x4e9933);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4e9939:{NFSU2_TR(0x4e9939);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e984fu);}goto L4e984f;}}
}
B4e993f:L4e993f:{c.instructions+=4;NFSU2_TR(0x4e993f);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4e9945:{NFSU2_TR(0x4e9945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9946:{NFSU2_TR(0x4e9946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9947:{NFSU2_TR(0x4e9947);
TAIL_STATIC(0x4bff80u,4bf);
}
B4e994c:L4e994c:{c.instructions+=2;NFSU2_TR(0x4e994c);
w4(R+4,u32(0x89cf48ull));
}
B4e9951:{NFSU2_TR(0x4e9951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9956ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4e9956:L4e9956:{c.instructions+=2;NFSU2_TR(0x4e9956);
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
B4e9958:{NFSU2_TR(0x4e9958);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e984fu);}goto L4e984f;}}
}
B4e995e:L4e995e:{c.instructions+=2;NFSU2_TR(0x4e995e);
w4(R+4,u32(0x89cf48ull));
}
B4e9963:{NFSU2_TR(0x4e9963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9968ull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4e9968:L4e9968:{c.instructions+=2;NFSU2_TR(0x4e9968);
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
B4e996a:{NFSU2_TR(0x4e996a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e984fu);}goto L4e984f;}}
}
B4e9970:L4e9970:{c.instructions+=2;NFSU2_TR(0x4e9970);
w4(R+4,u32(0x89cf48ull));
}
B4e9975:{NFSU2_TR(0x4e9975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e997aull));
TAIL_STATIC(0x5fe530u,5fe);
}
B4e997a:L4e997a:{c.instructions+=2;NFSU2_TR(0x4e997a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e997c:{NFSU2_TR(0x4e997c);
if(r1(R+518)){{goto L4e9a12;}}
}
B4e9982:L4e9982:{c.instructions+=2;NFSU2_TR(0x4e9982);
w4(R+4,u32(0x89cf48ull));
}
B4e9987:{NFSU2_TR(0x4e9987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e998cull));
TAIL_STATIC(0x5fe530u,5fe);
}
B4e998c:L4e998c:{c.instructions+=2;NFSU2_TR(0x4e998c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e998e:{NFSU2_TR(0x4e998e);
if(r1(R+518)){{goto L4e99ee;}}
}
B4e9990:L4e9990:{c.instructions+=2;NFSU2_TR(0x4e9990);
w4(R+4,u32(0x89cf48ull));
}
B4e9995:{NFSU2_TR(0x4e9995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e999aull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4e999a:L4e999a:{c.instructions+=2;NFSU2_TR(0x4e999a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e999c:{NFSU2_TR(0x4e999c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e99ee;}}
}
B4e999e:L4e999e:{c.instructions+=3;NFSU2_TR(0x4e999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e99a1:{NFSU2_TR(0x4e99a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e99a3:{NFSU2_TR(0x4e99a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e99ee;}}
}
B4e99a5:L4e99a5:{c.instructions+=5;NFSU2_TR(0x4e99a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e99a8:{NFSU2_TR(0x4e99a8);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99ad:{NFSU2_TR(0x4e99ad);
u8 U[4];
w4(U+0,u32(0x8d7e0c53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99b2:{NFSU2_TR(0x4e99b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99b3:{NFSU2_TR(0x4e99b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e99b8ull));
TAIL_STATIC(0x537cc0u,537);
}
B4e99b8:L4e99b8:{c.instructions+=3;NFSU2_TR(0x4e99b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e99bb:{NFSU2_TR(0x4e99bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e99bd:{NFSU2_TR(0x4e99bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e99ee;}}
}
B4e99bf:L4e99bf:{c.instructions+=10;NFSU2_TR(0x4e99bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e99c2:{NFSU2_TR(0x4e99c2);
u8 U[4];
w4(U+0,u32(0x7afaf0efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99c7:{NFSU2_TR(0x4e99c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99c9:{NFSU2_TR(0x4e99c9);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99ce:{NFSU2_TR(0x4e99ce);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99d3:{NFSU2_TR(0x4e99d3);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99d8:{NFSU2_TR(0x4e99d8);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99dd:{NFSU2_TR(0x4e99dd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99e2:{NFSU2_TR(0x4e99e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e99e3:{NFSU2_TR(0x4e99e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e99e8ull));
TAIL_STATIC(0x558860u,558);
}
B4e99e8:L4e99e8:{c.instructions+=2;NFSU2_TR(0x4e99e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e99eb:{NFSU2_TR(0x4e99eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e99ee:L4e99ee:{c.instructions+=3;NFSU2_TR(0x4e99ee);
__builtin_memmove((R+0),gp(0x89d05c),4);
}
B4e99f3:{NFSU2_TR(0x4e99f3);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4e99f9:{NFSU2_TR(0x4e99f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e984fu);}goto L4e984f;}}
}
B4e99ff:L4e99ff:{c.instructions+=2;NFSU2_TR(0x4e99ff);
__builtin_memmove((R+4),(R+24),4);
}
B4e9a01:{NFSU2_TR(0x4e9a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a06ull));
TAIL_STATIC(0x4a3ee0u,4a3);
}
B4e9a06:L4e9a06:{c.instructions+=4;NFSU2_TR(0x4e9a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9a07:{NFSU2_TR(0x4e9a07);
w4(R+4,u32(0x89cf48ull));
}
B4e9a0c:{NFSU2_TR(0x4e9a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9a0d:{NFSU2_TR(0x4e9a0d);
TAIL_STATIC(0x609750u,609);
}
B4e9a12:L4e9a12:{c.instructions+=4;NFSU2_TR(0x4e9a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e9a13:{NFSU2_TR(0x4e9a13);
__builtin_memmove((R+4),(R+24),4);
}
B4e9a15:{NFSU2_TR(0x4e9a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9a16:{NFSU2_TR(0x4e9a16);
TAIL_STATIC(0x4a3ee0u,4a3);
}
B4e9a20:L4e9a20:{c.instructions+=5;NFSU2_TR(0x4e9a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9a24:{NFSU2_TR(0x4e9a24);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9a29:{NFSU2_TR(0x4e9a29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9a2a:{NFSU2_TR(0x4e9a2a);
__builtin_memmove((R+24),(R+4),4);
}
B4e9a2c:{NFSU2_TR(0x4e9a2c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e9b25;}}
}
B4e9a32:L4e9a32:{c.instructions+=1;NFSU2_TR(0x4e9a32);
if(r1(R+518)){{goto L4e9acb;}}
}
B4e9a38:L4e9a38:{c.instructions+=2;NFSU2_TR(0x4e9a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9a3d:{NFSU2_TR(0x4e9a3d);
if(r1(R+518)){{goto L4e9aa6;}}
}
B4e9a3f:L4e9a3f:{c.instructions+=2;NFSU2_TR(0x4e9a3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9a44:{NFSU2_TR(0x4e9a44);
if(r1(R+518)){{goto L4e9a9d;}}
}
B4e9a46:L4e9a46:{c.instructions+=2;NFSU2_TR(0x4e9a46);
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
B4e9a4b:{NFSU2_TR(0x4e9a4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9bed;}}
}
B4e9a51:L4e9a51:{c.instructions+=3;NFSU2_TR(0x4e9a51);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4e9a56:{NFSU2_TR(0x4e9a56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9a58:{NFSU2_TR(0x4e9a58);
if(r1(R+518)){{goto L4e9a87;}}
}
B4e9a5a:L4e9a5a:{c.instructions+=2;NFSU2_TR(0x4e9a5a);
w4(R+4,u32(0x89e7a0ull));
}
B4e9a5f:{NFSU2_TR(0x4e9a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a64ull));
TAIL_STATIC(0x4018f0u,401);
}
B4e9a64:L4e9a64:{c.instructions+=2;NFSU2_TR(0x4e9a64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9a66:{NFSU2_TR(0x4e9a66);
if(r1(R+518)){{goto L4e9a87;}}
}
B4e9a68:L4e9a68:{c.instructions+=1;NFSU2_TR(0x4e9a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a6dull));
TAIL_STATIC(0x5100b0u,510);
}
B4e9a6d:L4e9a6d:{c.instructions+=4;NFSU2_TR(0x4e9a6d);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4e9a73:{NFSU2_TR(0x4e9a73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9a75:{NFSU2_TR(0x4e9a75);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9a77:{NFSU2_TR(0x4e9a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a7cull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4e9a7c:L4e9a7c:{c.instructions+=2;NFSU2_TR(0x4e9a7c);
__builtin_memmove((R+4),(R+24),4);
}
B4e9a7e:{NFSU2_TR(0x4e9a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a83ull));
TAIL_STATIC(0x4a3ee0u,4a3);
}
B4e9a83:L4e9a83:{c.instructions+=2;NFSU2_TR(0x4e9a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9a84:{NFSU2_TR(0x4e9a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9a87:L4e9a87:{c.instructions+=2;NFSU2_TR(0x4e9a87);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4e9a8d:{NFSU2_TR(0x4e9a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a92ull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4e9a92:L4e9a92:{c.instructions+=2;NFSU2_TR(0x4e9a92);
__builtin_memmove((R+4),(R+24),4);
}
B4e9a94:{NFSU2_TR(0x4e9a94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9a99ull));
TAIL_STATIC(0x4a3ee0u,4a3);
}
B4e9a99:L4e9a99:{c.instructions+=2;NFSU2_TR(0x4e9a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9a9a:{NFSU2_TR(0x4e9a9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9a9d:L4e9a9d:{c.instructions+=2;NFSU2_TR(0x4e9a9d);
__builtin_memmove((R+4),(R+24),4);
}
B4e9a9f:{NFSU2_TR(0x4e9a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9aa4ull));
TAIL_STATIC(0x4a3ee0u,4a3);
}
B4e9aa4:L4e9aa4:{c.instructions+=1;NFSU2_TR(0x4e9aa4);
{goto L4e9b0c;}
}
B4e9aa6:L4e9aa6:{c.instructions+=3;NFSU2_TR(0x4e9aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9aa9:{NFSU2_TR(0x4e9aa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9aab:{NFSU2_TR(0x4e9aab);
if(r1(R+518)){{goto L4e9ab6;}}
}
B4e9aad:L4e9aad:{c.instructions+=2;NFSU2_TR(0x4e9aad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9aae:{NFSU2_TR(0x4e9aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9ab3ull));
TAIL_STATIC(0x540a60u,540);
}
B4e9ab3:L4e9ab3:{c.instructions+=1;NFSU2_TR(0x4e9ab3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9ab6:L4e9ab6:{c.instructions+=3;NFSU2_TR(0x4e9ab6);
w4(R+4,u32(0x89cf48ull));
}
B4e9abb:{NFSU2_TR(0x4e9abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9ac2:{NFSU2_TR(0x4e9ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9ac7ull));
TAIL_STATIC(0x609750u,609);
}
B4e9ac7:L4e9ac7:{c.instructions+=2;NFSU2_TR(0x4e9ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9ac8:{NFSU2_TR(0x4e9ac8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9acb:L4e9acb:{c.instructions+=3;NFSU2_TR(0x4e9acb);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e9ad0:{NFSU2_TR(0x4e9ad0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e9ad3:{NFSU2_TR(0x4e9ad3);
if(r1(R+518)){{goto L4e9afa;}}
}
B4e9ad5:L4e9ad5:{c.instructions+=2;NFSU2_TR(0x4e9ad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9ada:{NFSU2_TR(0x4e9ada);
if(r1(R+518)){{goto L4e9afa;}}
}
B4e9adc:L4e9adc:{c.instructions+=6;NFSU2_TR(0x4e9adc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ade:{NFSU2_TR(0x4e9ade);
s1(0x7f45a1,u8(0x0ull));
}
B4e9ae5:{NFSU2_TR(0x4e9ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9ae8:{NFSU2_TR(0x4e9ae8);
u8 U[4];
w4(U+0,u32(0x78f0e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9aed:{NFSU2_TR(0x4e9aed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9aee:{NFSU2_TR(0x4e9aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9af3ull));
TAIL_STATIC(0x537980u,537);
}
B4e9af3:L4e9af3:{c.instructions+=3;NFSU2_TR(0x4e9af3);
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
B4e9af6:{NFSU2_TR(0x4e9af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9af7:{NFSU2_TR(0x4e9af7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9afa:L4e9afa:{c.instructions+=2;NFSU2_TR(0x4e9afa);
w4(R+4,u32(0x89cf48ull));
}
B4e9aff:{NFSU2_TR(0x4e9aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9b04ull));
TAIL_STATIC(0x5fe500u,5fe);
}
B4e9b04:L4e9b04:{c.instructions+=2;NFSU2_TR(0x4e9b04);
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
B4e9b06:{NFSU2_TR(0x4e9b06);
if(r1(R+518)){{goto L4e9bed;}}
}
B4e9b0c:L4e9b0c:{c.instructions+=2;NFSU2_TR(0x4e9b0c);
w4(R+4,u32(0x89cf48ull));
}
B4e9b11:{NFSU2_TR(0x4e9b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9b16ull));
TAIL_STATIC(0x601d00u,601);
}
B4e9b16:L4e9b16:{c.instructions+=2;NFSU2_TR(0x4e9b16);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4e9b1c:{NFSU2_TR(0x4e9b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9b21ull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4e9b21:L4e9b21:{c.instructions+=2;NFSU2_TR(0x4e9b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9b22:{NFSU2_TR(0x4e9b22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9b25:L4e9b25:{c.instructions+=2;NFSU2_TR(0x4e9b25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9b2a:{NFSU2_TR(0x4e9b2a);
if(r1(R+518)){{goto L4e9b5f;}}
}
B4e9b2c:L4e9b2c:{c.instructions+=2;NFSU2_TR(0x4e9b2c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xeaacfeedull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xeaacfeedull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xeaacfeedull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e9b31:{NFSU2_TR(0x4e9b31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9bed;}}
}
B4e9b37:L4e9b37:{c.instructions+=3;NFSU2_TR(0x4e9b37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9b39:{NFSU2_TR(0x4e9b39);
w4(R+4,u32(0x83a9d0ull));
}
B4e9b3e:{NFSU2_TR(0x4e9b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9b43ull));
TAIL_STATIC(0x502ff0u,502);
}
B4e9b43:L4e9b43:{c.instructions+=2;NFSU2_TR(0x4e9b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9b44:{NFSU2_TR(0x4e9b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9b49ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4e9b49:L4e9b49:{c.instructions+=5;NFSU2_TR(0x4e9b49);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4e9b4f:{NFSU2_TR(0x4e9b4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9b52:{NFSU2_TR(0x4e9b52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9b54:{NFSU2_TR(0x4e9b54);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9b56:{NFSU2_TR(0x4e9b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9b5bull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4e9b5b:L4e9b5b:{c.instructions+=2;NFSU2_TR(0x4e9b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9b5c:{NFSU2_TR(0x4e9b5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9b5f:L4e9b5f:{c.instructions+=3;NFSU2_TR(0x4e9b5f);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e9b64:{NFSU2_TR(0x4e9b64);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e9b67:{NFSU2_TR(0x4e9b67);
if(r1(R+518)){{goto L4e9be6;}}
}
B4e9b69:L4e9b69:{c.instructions+=2;NFSU2_TR(0x4e9b69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9b6e:{NFSU2_TR(0x4e9b6e);
if(r1(R+518)){{goto L4e9be6;}}
}
B4e9b70:L4e9b70:{c.instructions+=3;NFSU2_TR(0x4e9b70);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4e9b75:{NFSU2_TR(0x4e9b75);
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
B4e9b77:{NFSU2_TR(0x4e9b77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9bed;}}
}
B4e9b79:L4e9b79:{c.instructions+=3;NFSU2_TR(0x4e9b79);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4e9b7e:{NFSU2_TR(0x4e9b7e);
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
B4e9b80:{NFSU2_TR(0x4e9b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9bed;}}
}
B4e9b82:L4e9b82:{c.instructions+=3;NFSU2_TR(0x4e9b82);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4e9b87:{NFSU2_TR(0x4e9b87);
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
B4e9b89:{NFSU2_TR(0x4e9b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9bed;}}
}
B4e9b8b:L4e9b8b:{c.instructions+=5;NFSU2_TR(0x4e9b8b);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e9b8e:{NFSU2_TR(0x4e9b8e);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e9b91:{NFSU2_TR(0x4e9b91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e9b93:{NFSU2_TR(0x4e9b93);
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
B4e9b96:{NFSU2_TR(0x4e9b96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9bd6;}}
}
B4e9b98:L4e9b98:{c.instructions+=7;NFSU2_TR(0x4e9b98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4e9b9b:{NFSU2_TR(0x4e9b9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9b9d:{NFSU2_TR(0x4e9b9d);
__builtin_memmove((R+0),(R+518),1);
}
B4e9ba0:{NFSU2_TR(0x4e9ba0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9ba2:{NFSU2_TR(0x4e9ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9ba9:{NFSU2_TR(0x4e9ba9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e9bac:{NFSU2_TR(0x4e9bac);
if(r1(R+518)){{goto L4e9bc2;}}
}
B4e9bae:L4e9bae:{c.instructions+=4;NFSU2_TR(0x4e9bae);
{u32 ea_=u32(u32(7921644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e9bb4:{NFSU2_TR(0x4e9bb4);
__builtin_memmove((R+4),(R+24),4);
}
B4e9bb6:{NFSU2_TR(0x4e9bb6);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e9bb9:{NFSU2_TR(0x4e9bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9bbeull));
TAIL_STATIC(0x4bf0a0u,4bf);
}
B4e9bbe:L4e9bbe:{c.instructions+=2;NFSU2_TR(0x4e9bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9bbf:{NFSU2_TR(0x4e9bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9bc2:L4e9bc2:{c.instructions+=4;NFSU2_TR(0x4e9bc2);
{u32 ea_=u32(u32(7921648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e9bc8:{NFSU2_TR(0x4e9bc8);
__builtin_memmove((R+4),(R+24),4);
}
B4e9bca:{NFSU2_TR(0x4e9bca);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e9bcd:{NFSU2_TR(0x4e9bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9bd2ull));
TAIL_STATIC(0x4bf0a0u,4bf);
}
B4e9bd2:L4e9bd2:{c.instructions+=2;NFSU2_TR(0x4e9bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9bd3:{NFSU2_TR(0x4e9bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9bd6:L4e9bd6:{c.instructions+=5;NFSU2_TR(0x4e9bd6);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e9bdc:{NFSU2_TR(0x4e9bdc);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4e9bdf:{NFSU2_TR(0x4e9bdf);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e9be2:{NFSU2_TR(0x4e9be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9be3:{NFSU2_TR(0x4e9be3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9be6:L4e9be6:{c.instructions+=2;NFSU2_TR(0x4e9be6);
__builtin_memmove((R+4),(R+24),4);
}
B4e9be8:{NFSU2_TR(0x4e9be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9bedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e97e0u);}goto L4e97e0;}
}
B4e9bed:L4e9bed:{c.instructions+=2;NFSU2_TR(0x4e9bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e9bee:{NFSU2_TR(0x4e9bee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e9c00:L4e9c00:{c.instructions+=17;NFSU2_TR(0x4e9c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9c06:{NFSU2_TR(0x4e9c06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c08:{NFSU2_TR(0x4e9c08);
u8 U[4];
w4(U+0,u32(0x776030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c0d:{NFSU2_TR(0x4e9c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c0e:{NFSU2_TR(0x4e9c0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9c12:{NFSU2_TR(0x4e9c12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x851044ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4e9c19:{NFSU2_TR(0x4e9c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9c20:{NFSU2_TR(0x4e9c20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c21:{NFSU2_TR(0x4e9c21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c22:{NFSU2_TR(0x4e9c22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c23:{NFSU2_TR(0x4e9c23);
__builtin_memmove((R+24),(R+4),4);
}
B4e9c25:{NFSU2_TR(0x4e9c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9c2b:{NFSU2_TR(0x4e9c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9c2e:{NFSU2_TR(0x4e9c2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c2f:{NFSU2_TR(0x4e9c2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c30:{NFSU2_TR(0x4e9c30);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4e9c36:{NFSU2_TR(0x4e9c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9c3bull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4e9c3b:L4e9c3b:{c.instructions+=5;NFSU2_TR(0x4e9c3b);
__builtin_memmove((R+28),(R+0),4);
}
B4e9c3d:{NFSU2_TR(0x4e9c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9c40:{NFSU2_TR(0x4e9c40);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e9c44:{NFSU2_TR(0x4e9c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90cull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e9c4a:{NFSU2_TR(0x4e9c4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9c60;}}
}
B4e9c4c:L4e9c4c:{c.instructions+=3;NFSU2_TR(0x4e9c4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e9c52:{NFSU2_TR(0x4e9c52);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9c54:{NFSU2_TR(0x4e9c54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9c60;}}
}
B4e9c56:L4e9c56:{c.instructions+=2;NFSU2_TR(0x4e9c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e9c59:{NFSU2_TR(0x4e9c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9c5eull));
TAIL_STATIC(0x5f41b0u,5f4);
}
B4e9c5e:L4e9c5e:{c.instructions+=1;NFSU2_TR(0x4e9c5e);
__builtin_memmove((R+20),(R+0),4);
}
B4e9c60:L4e9c60:{c.instructions+=5;NFSU2_TR(0x4e9c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e9c63:{NFSU2_TR(0x4e9c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e9c65:{NFSU2_TR(0x4e9c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e9c68:{NFSU2_TR(0x4e9c68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c69:{NFSU2_TR(0x4e9c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9c6eull));
TAIL_STATIC(0x5120b0u,512);
}
B4e9c6e:L4e9c6e:{c.instructions+=9;NFSU2_TR(0x4e9c6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9c71:{NFSU2_TR(0x4e9c71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c72:{NFSU2_TR(0x4e9c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e9c78:{NFSU2_TR(0x4e9c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e9c7a:{NFSU2_TR(0x4e9c7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c7b:{NFSU2_TR(0x4e9c7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c7c:{NFSU2_TR(0x4e9c7c);
u8 U[4];
w4(U+0,u32(0x797b6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c81:{NFSU2_TR(0x4e9c81);
u8 U[4];
w4(U+0,u32(0x797b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c86:{NFSU2_TR(0x4e9c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9c8bull));
TAIL_STATIC(0x50b990u,50b);
}
B4e9c8b:L4e9c8b:{c.instructions+=4;NFSU2_TR(0x4e9c8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9c8e:{NFSU2_TR(0x4e9c8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c8f:{NFSU2_TR(0x4e9c8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9c90:{NFSU2_TR(0x4e9c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9c95ull));
TAIL_STATIC(0x537b80u,537);
}
B4e9c95:L4e9c95:{c.instructions+=4;NFSU2_TR(0x4e9c95);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4e9c9a:{NFSU2_TR(0x4e9c9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4e9c9d:{NFSU2_TR(0x4e9c9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9c9f:{NFSU2_TR(0x4e9c9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9ce9;}}
}
B4e9ca1:L4e9ca1:{c.instructions+=3;NFSU2_TR(0x4e9ca1);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4e9ca6:{NFSU2_TR(0x4e9ca6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9ca8:{NFSU2_TR(0x4e9ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9ce9;}}
}
B4e9caa:L4e9caa:{c.instructions+=3;NFSU2_TR(0x4e9caa);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B4e9caf:{NFSU2_TR(0x4e9caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9cb1:{NFSU2_TR(0x4e9cb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9ce9;}}
}
B4e9cb3:L4e9cb3:{c.instructions+=3;NFSU2_TR(0x4e9cb3);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B4e9cb8:{NFSU2_TR(0x4e9cb8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e9cbb:{NFSU2_TR(0x4e9cbb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4e9cc9;}}
}
B4e9cbd:L4e9cbd:{c.instructions+=4;NFSU2_TR(0x4e9cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cbe:{NFSU2_TR(0x4e9cbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cc0:{NFSU2_TR(0x4e9cc0);
__builtin_memmove((R+4),(R+24),4);
}
B4e9cc2:{NFSU2_TR(0x4e9cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9cc7ull));
TAIL_STATIC(0x4d73b0u,4d7);
}
B4e9cc7:L4e9cc7:{c.instructions+=1;NFSU2_TR(0x4e9cc7);
{goto L4e9d20;}
}
B4e9cc9:L4e9cc9:{c.instructions+=3;NFSU2_TR(0x4e9cc9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4e9cd0:{NFSU2_TR(0x4e9cd0);
__builtin_memmove((R+4),(R+24),4);
}
B4e9cd2:{NFSU2_TR(0x4e9cd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9cde;}}
}
B4e9cd4:L4e9cd4:{c.instructions+=3;NFSU2_TR(0x4e9cd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cd5:{NFSU2_TR(0x4e9cd5);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cd7:{NFSU2_TR(0x4e9cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9cdcull));
TAIL_STATIC(0x4d73b0u,4d7);
}
B4e9cdc:L4e9cdc:{c.instructions+=1;NFSU2_TR(0x4e9cdc);
{goto L4e9d20;}
}
B4e9cde:L4e9cde:{c.instructions+=3;NFSU2_TR(0x4e9cde);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ce0:{NFSU2_TR(0x4e9ce0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ce2:{NFSU2_TR(0x4e9ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9ce7ull));
TAIL_STATIC(0x4d73b0u,4d7);
}
B4e9ce7:L4e9ce7:{c.instructions+=1;NFSU2_TR(0x4e9ce7);
{goto L4e9d20;}
}
B4e9ce9:L4e9ce9:{c.instructions+=3;NFSU2_TR(0x4e9ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e9cec:{NFSU2_TR(0x4e9cec);
u8 U[4];
w4(U+0,u32(0x797b54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cf1:{NFSU2_TR(0x4e9cf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9cf6ull));
TAIL_STATIC(0x43db50u,43d);
}
B4e9cf6:L4e9cf6:{c.instructions+=3;NFSU2_TR(0x4e9cf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cf7:{NFSU2_TR(0x4e9cf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cf8:{NFSU2_TR(0x4e9cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9cfdull));
TAIL_STATIC(0x5379c0u,537);
}
B4e9cfd:L4e9cfd:{c.instructions+=2;NFSU2_TR(0x4e9cfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9cfe:{NFSU2_TR(0x4e9cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d03ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e9d03:L4e9d03:{c.instructions+=3;NFSU2_TR(0x4e9d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e9d06:{NFSU2_TR(0x4e9d06);
u8 U[4];
w4(U+0,u32(0x797b48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d0b:{NFSU2_TR(0x4e9d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d10ull));
TAIL_STATIC(0x43db50u,43d);
}
B4e9d10:L4e9d10:{c.instructions+=3;NFSU2_TR(0x4e9d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d11:{NFSU2_TR(0x4e9d11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d12:{NFSU2_TR(0x4e9d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d17ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e9d17:L4e9d17:{c.instructions+=2;NFSU2_TR(0x4e9d17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d18:{NFSU2_TR(0x4e9d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d1dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e9d1d:L4e9d1d:{c.instructions+=1;NFSU2_TR(0x4e9d1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e9d20:L4e9d20:{c.instructions+=3;NFSU2_TR(0x4e9d20);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4e9d25:{NFSU2_TR(0x4e9d25);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e9d27:{NFSU2_TR(0x4e9d27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e9d36;}}
}
B4e9d29:L4e9d29:{c.instructions+=3;NFSU2_TR(0x4e9d29);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4e9d2e:{NFSU2_TR(0x4e9d2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9d30:{NFSU2_TR(0x4e9d30);
if(r1(R+518)){{goto L4e9f17;}}
}
B4e9d36:L4e9d36:{c.instructions+=2;NFSU2_TR(0x4e9d36);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d38:{NFSU2_TR(0x4e9d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d3dull));
TAIL_STATIC(0x575620u,575);
}
B4e9d3d:L4e9d3d:{c.instructions+=6;NFSU2_TR(0x4e9d3d);
__builtin_memmove((R+28),(R+0),4);
}
B4e9d3f:{NFSU2_TR(0x4e9d3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9d42:{NFSU2_TR(0x4e9d42);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9d46:{NFSU2_TR(0x4e9d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9d48:{NFSU2_TR(0x4e9d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9d50:{NFSU2_TR(0x4e9d50);
if(r1(R+518)){{goto L4e9d88;}}
}
B4e9d52:L4e9d52:{c.instructions+=12;NFSU2_TR(0x4e9d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9d58:{NFSU2_TR(0x4e9d58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d5a:{NFSU2_TR(0x4e9d5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9d60:{NFSU2_TR(0x4e9d60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d61:{NFSU2_TR(0x4e9d61);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9d67:{NFSU2_TR(0x4e9d67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d68:{NFSU2_TR(0x4e9d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9d6e:{NFSU2_TR(0x4e9d6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d6f:{NFSU2_TR(0x4e9d6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9d75:{NFSU2_TR(0x4e9d75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d76:{NFSU2_TR(0x4e9d76);
__builtin_memmove((R+4),(R+28),4);
}
B4e9d78:{NFSU2_TR(0x4e9d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d7dull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9d7d:L4e9d7d:{c.instructions+=3;NFSU2_TR(0x4e9d7d);
u8 U[4];
w4(U+0,u32(0x795388ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9d83:{NFSU2_TR(0x4e9d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9d86:{NFSU2_TR(0x4e9d86);
{goto L4e9d8a;}
}
B4e9d88:L4e9d88:{c.instructions+=1;NFSU2_TR(0x4e9d88);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9d8a:L4e9d8a:{c.instructions+=5;NFSU2_TR(0x4e9d8a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4e9d8d:{NFSU2_TR(0x4e9d8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d8e:{NFSU2_TR(0x4e9d8e);
__builtin_memmove((R+4),(R+24),4);
}
B4e9d90:{NFSU2_TR(0x4e9d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9d94:{NFSU2_TR(0x4e9d94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9d99ull));
TAIL_STATIC(0x54f820u,54f);
}
B4e9d99:L4e9d99:{c.instructions+=2;NFSU2_TR(0x4e9d99);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9d9b:{NFSU2_TR(0x4e9d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9da0ull));
TAIL_STATIC(0x575620u,575);
}
B4e9da0:L4e9da0:{c.instructions+=6;NFSU2_TR(0x4e9da0);
__builtin_memmove((R+28),(R+0),4);
}
B4e9da2:{NFSU2_TR(0x4e9da2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9da5:{NFSU2_TR(0x4e9da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9da9:{NFSU2_TR(0x4e9da9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9dab:{NFSU2_TR(0x4e9dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9db3:{NFSU2_TR(0x4e9db3);
if(r1(R+518)){{goto L4e9deb;}}
}
B4e9db5:L4e9db5:{c.instructions+=12;NFSU2_TR(0x4e9db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9dbb:{NFSU2_TR(0x4e9dbb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dbd:{NFSU2_TR(0x4e9dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9dc3:{NFSU2_TR(0x4e9dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dc4:{NFSU2_TR(0x4e9dc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9dca:{NFSU2_TR(0x4e9dca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dcb:{NFSU2_TR(0x4e9dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9dd1:{NFSU2_TR(0x4e9dd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dd2:{NFSU2_TR(0x4e9dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9dd8:{NFSU2_TR(0x4e9dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dd9:{NFSU2_TR(0x4e9dd9);
__builtin_memmove((R+4),(R+28),4);
}
B4e9ddb:{NFSU2_TR(0x4e9ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9de0ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9de0:L4e9de0:{c.instructions+=3;NFSU2_TR(0x4e9de0);
u8 U[4];
w4(U+0,u32(0x795308ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9de6:{NFSU2_TR(0x4e9de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9de9:{NFSU2_TR(0x4e9de9);
{goto L4e9ded;}
}
B4e9deb:L4e9deb:{c.instructions+=1;NFSU2_TR(0x4e9deb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9ded:L4e9ded:{c.instructions+=4;NFSU2_TR(0x4e9ded);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dee:{NFSU2_TR(0x4e9dee);
__builtin_memmove((R+4),(R+24),4);
}
B4e9df0:{NFSU2_TR(0x4e9df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9df4:{NFSU2_TR(0x4e9df4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9df9ull));
TAIL_STATIC(0x54f820u,54f);
}
B4e9df9:L4e9df9:{c.instructions+=2;NFSU2_TR(0x4e9df9);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9dfb:{NFSU2_TR(0x4e9dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9e00ull));
TAIL_STATIC(0x575620u,575);
}
B4e9e00:L4e9e00:{c.instructions+=6;NFSU2_TR(0x4e9e00);
__builtin_memmove((R+28),(R+0),4);
}
B4e9e02:{NFSU2_TR(0x4e9e02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9e05:{NFSU2_TR(0x4e9e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9e09:{NFSU2_TR(0x4e9e09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9e0b:{NFSU2_TR(0x4e9e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9e13:{NFSU2_TR(0x4e9e13);
if(r1(R+518)){{goto L4e9e4b;}}
}
B4e9e15:L4e9e15:{c.instructions+=12;NFSU2_TR(0x4e9e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9e1b:{NFSU2_TR(0x4e9e1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e1d:{NFSU2_TR(0x4e9e1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9e23:{NFSU2_TR(0x4e9e23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e24:{NFSU2_TR(0x4e9e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9e2a:{NFSU2_TR(0x4e9e2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e2b:{NFSU2_TR(0x4e9e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9e31:{NFSU2_TR(0x4e9e31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e32:{NFSU2_TR(0x4e9e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9e38:{NFSU2_TR(0x4e9e38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e39:{NFSU2_TR(0x4e9e39);
__builtin_memmove((R+4),(R+28),4);
}
B4e9e3b:{NFSU2_TR(0x4e9e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9e40ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9e40:L4e9e40:{c.instructions+=3;NFSU2_TR(0x4e9e40);
u8 U[4];
w4(U+0,u32(0x795348ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9e46:{NFSU2_TR(0x4e9e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9e49:{NFSU2_TR(0x4e9e49);
{goto L4e9e4d;}
}
B4e9e4b:L4e9e4b:{c.instructions+=1;NFSU2_TR(0x4e9e4b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9e4d:L4e9e4d:{c.instructions+=4;NFSU2_TR(0x4e9e4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e4e:{NFSU2_TR(0x4e9e4e);
__builtin_memmove((R+4),(R+24),4);
}
B4e9e50:{NFSU2_TR(0x4e9e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9e54:{NFSU2_TR(0x4e9e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9e59ull));
TAIL_STATIC(0x54f820u,54f);
}
B4e9e59:L4e9e59:{c.instructions+=2;NFSU2_TR(0x4e9e59);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e5b:{NFSU2_TR(0x4e9e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9e60ull));
TAIL_STATIC(0x575620u,575);
}
B4e9e60:L4e9e60:{c.instructions+=6;NFSU2_TR(0x4e9e60);
__builtin_memmove((R+28),(R+0),4);
}
B4e9e62:{NFSU2_TR(0x4e9e62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9e65:{NFSU2_TR(0x4e9e65);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9e69:{NFSU2_TR(0x4e9e69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9e6b:{NFSU2_TR(0x4e9e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9e73:{NFSU2_TR(0x4e9e73);
if(r1(R+518)){{goto L4e9eab;}}
}
B4e9e75:L4e9e75:{c.instructions+=12;NFSU2_TR(0x4e9e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9e7b:{NFSU2_TR(0x4e9e7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e7d:{NFSU2_TR(0x4e9e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9e83:{NFSU2_TR(0x4e9e83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e84:{NFSU2_TR(0x4e9e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9e8a:{NFSU2_TR(0x4e9e8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e8b:{NFSU2_TR(0x4e9e8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9e91:{NFSU2_TR(0x4e9e91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e92:{NFSU2_TR(0x4e9e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9e98:{NFSU2_TR(0x4e9e98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9e99:{NFSU2_TR(0x4e9e99);
__builtin_memmove((R+4),(R+28),4);
}
B4e9e9b:{NFSU2_TR(0x4e9e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9ea0ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9ea0:L4e9ea0:{c.instructions+=3;NFSU2_TR(0x4e9ea0);
u8 U[4];
w4(U+0,u32(0x7951b0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9ea6:{NFSU2_TR(0x4e9ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9ea9:{NFSU2_TR(0x4e9ea9);
{goto L4e9ead;}
}
B4e9eab:L4e9eab:{c.instructions+=1;NFSU2_TR(0x4e9eab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9ead:L4e9ead:{c.instructions+=4;NFSU2_TR(0x4e9ead);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9eae:{NFSU2_TR(0x4e9eae);
__builtin_memmove((R+4),(R+24),4);
}
B4e9eb0:{NFSU2_TR(0x4e9eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9eb4:{NFSU2_TR(0x4e9eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9eb9ull));
TAIL_STATIC(0x54f820u,54f);
}
B4e9eb9:L4e9eb9:{c.instructions+=2;NFSU2_TR(0x4e9eb9);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ebb:{NFSU2_TR(0x4e9ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9ec0ull));
TAIL_STATIC(0x575620u,575);
}
B4e9ec0:L4e9ec0:{c.instructions+=6;NFSU2_TR(0x4e9ec0);
__builtin_memmove((R+28),(R+0),4);
}
B4e9ec2:{NFSU2_TR(0x4e9ec2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9ec5:{NFSU2_TR(0x4e9ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9ec9:{NFSU2_TR(0x4e9ec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9ecb:{NFSU2_TR(0x4e9ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9ed3:{NFSU2_TR(0x4e9ed3);
if(r1(R+518)){{goto L4e9f0f;}}
}
B4e9ed5:L4e9ed5:{c.instructions+=12;NFSU2_TR(0x4e9ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9edb:{NFSU2_TR(0x4e9edb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9edd:{NFSU2_TR(0x4e9edd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9ee3:{NFSU2_TR(0x4e9ee3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ee4:{NFSU2_TR(0x4e9ee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9eea:{NFSU2_TR(0x4e9eea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9eeb:{NFSU2_TR(0x4e9eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9ef1:{NFSU2_TR(0x4e9ef1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ef2:{NFSU2_TR(0x4e9ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9ef8:{NFSU2_TR(0x4e9ef8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ef9:{NFSU2_TR(0x4e9ef9);
__builtin_memmove((R+4),(R+28),4);
}
B4e9efb:{NFSU2_TR(0x4e9efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9f00ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9f00:L4e9f00:{c.instructions+=4;NFSU2_TR(0x4e9f00);
u8 U[4];
w4(U+0,u32(0x795200ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9f06:{NFSU2_TR(0x4e9f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f09:{NFSU2_TR(0x4e9f09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f0a:{NFSU2_TR(0x4e9f0a);
TAIL_STATIC(0x4ea1d4u,4ea);
}
B4e9f0f:L4e9f0f:{c.instructions+=3;NFSU2_TR(0x4e9f0f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9f11:{NFSU2_TR(0x4e9f11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f12:{NFSU2_TR(0x4e9f12);
TAIL_STATIC(0x4ea1d4u,4ea);
}
B4e9f17:L4e9f17:{c.instructions+=2;NFSU2_TR(0x4e9f17);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f19:{NFSU2_TR(0x4e9f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9f1eull));
TAIL_STATIC(0x575620u,575);
}
B4e9f1e:L4e9f1e:{c.instructions+=6;NFSU2_TR(0x4e9f1e);
__builtin_memmove((R+28),(R+0),4);
}
B4e9f20:{NFSU2_TR(0x4e9f20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9f23:{NFSU2_TR(0x4e9f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f27:{NFSU2_TR(0x4e9f27);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9f29:{NFSU2_TR(0x4e9f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f31:{NFSU2_TR(0x4e9f31);
if(r1(R+518)){{goto L4e9f69;}}
}
B4e9f33:L4e9f33:{c.instructions+=12;NFSU2_TR(0x4e9f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9f39:{NFSU2_TR(0x4e9f39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f3b:{NFSU2_TR(0x4e9f3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9f41:{NFSU2_TR(0x4e9f41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f42:{NFSU2_TR(0x4e9f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9f48:{NFSU2_TR(0x4e9f48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f49:{NFSU2_TR(0x4e9f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9f4f:{NFSU2_TR(0x4e9f4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f50:{NFSU2_TR(0x4e9f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9f56:{NFSU2_TR(0x4e9f56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f57:{NFSU2_TR(0x4e9f57);
__builtin_memmove((R+4),(R+28),4);
}
B4e9f59:{NFSU2_TR(0x4e9f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9f5eull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9f5e:L4e9f5e:{c.instructions+=3;NFSU2_TR(0x4e9f5e);
u8 U[4];
w4(U+0,u32(0x795130ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9f64:{NFSU2_TR(0x4e9f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f67:{NFSU2_TR(0x4e9f67);
{goto L4e9f6b;}
}
B4e9f69:L4e9f69:{c.instructions+=1;NFSU2_TR(0x4e9f69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9f6b:L4e9f6b:{c.instructions+=5;NFSU2_TR(0x4e9f6b);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4e9f6e:{NFSU2_TR(0x4e9f6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f6f:{NFSU2_TR(0x4e9f6f);
__builtin_memmove((R+4),(R+24),4);
}
B4e9f71:{NFSU2_TR(0x4e9f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f75:{NFSU2_TR(0x4e9f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9f7aull));
TAIL_STATIC(0x54f820u,54f);
}
B4e9f7a:L4e9f7a:{c.instructions+=2;NFSU2_TR(0x4e9f7a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f7c:{NFSU2_TR(0x4e9f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9f81ull));
TAIL_STATIC(0x575620u,575);
}
B4e9f81:L4e9f81:{c.instructions+=6;NFSU2_TR(0x4e9f81);
__builtin_memmove((R+28),(R+0),4);
}
B4e9f83:{NFSU2_TR(0x4e9f83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9f86:{NFSU2_TR(0x4e9f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f8a:{NFSU2_TR(0x4e9f8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9f8c:{NFSU2_TR(0x4e9f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9f94:{NFSU2_TR(0x4e9f94);
if(r1(R+518)){{goto L4e9fcc;}}
}
B4e9f96:L4e9f96:{c.instructions+=12;NFSU2_TR(0x4e9f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9f9c:{NFSU2_TR(0x4e9f9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9f9e:{NFSU2_TR(0x4e9f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9fa4:{NFSU2_TR(0x4e9fa4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9fa5:{NFSU2_TR(0x4e9fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e9fab:{NFSU2_TR(0x4e9fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9fac:{NFSU2_TR(0x4e9fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e9fb2:{NFSU2_TR(0x4e9fb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9fb3:{NFSU2_TR(0x4e9fb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e9fb9:{NFSU2_TR(0x4e9fb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9fba:{NFSU2_TR(0x4e9fba);
__builtin_memmove((R+4),(R+28),4);
}
B4e9fbc:{NFSU2_TR(0x4e9fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9fc1ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4e9fc1:L4e9fc1:{c.instructions+=3;NFSU2_TR(0x4e9fc1);
u8 U[4];
w4(U+0,u32(0x795170ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e9fc7:{NFSU2_TR(0x4e9fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9fca:{NFSU2_TR(0x4e9fca);
{goto L4e9fce;}
}
B4e9fcc:L4e9fcc:{c.instructions+=1;NFSU2_TR(0x4e9fcc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e9fce:L4e9fce:{c.instructions+=4;NFSU2_TR(0x4e9fce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9fcf:{NFSU2_TR(0x4e9fcf);
__builtin_memmove((R+4),(R+24),4);
}
B4e9fd1:{NFSU2_TR(0x4e9fd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9fd5:{NFSU2_TR(0x4e9fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9fdaull));
TAIL_STATIC(0x54f820u,54f);
}
B4e9fda:L4e9fda:{c.instructions+=2;NFSU2_TR(0x4e9fda);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9fdc:{NFSU2_TR(0x4e9fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9fe1ull));
TAIL_STATIC(0x575620u,575);
}
B4e9fe1:L4e9fe1:{c.instructions+=6;NFSU2_TR(0x4e9fe1);
__builtin_memmove((R+28),(R+0),4);
}
B4e9fe3:{NFSU2_TR(0x4e9fe3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e9fe6:{NFSU2_TR(0x4e9fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e9fea:{NFSU2_TR(0x4e9fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e9fec:{NFSU2_TR(0x4e9fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e9ff4:{NFSU2_TR(0x4e9ff4);
if(r1(R+518)){TAIL_STATIC(0x4ea02cu,4ea);}
}
B4e9ff6:L4e9ff6:{c.instructions+=3;NFSU2_TR(0x4e9ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e9ffc:{NFSU2_TR(0x4e9ffc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e9ffe:{NFSU2_TR(0x4e9ffe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
TAIL_STATIC(0x4ea004u,4ea);
}
XIT:NFSU2_TR_EXIT(0x4e9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
