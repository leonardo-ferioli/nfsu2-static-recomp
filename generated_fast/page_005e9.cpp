#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e1(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e9,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e9,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 page_5e9(Cpu& c){return body_5e9(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e9(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e9000:goto L5e9000;
case 0x5e9001:c.instructions+=1;goto B5e9001;
case 0x5e9003:goto L5e9003;
case 0x5e9005:c.instructions+=1;goto B5e9005;
case 0x5e9007:goto L5e9007;
case 0x5e900b:c.instructions+=2;goto B5e900b;
case 0x5e900d:c.instructions+=1;goto B5e900d;
case 0x5e9010:goto L5e9010;
case 0x5e9011:c.instructions+=2;goto B5e9011;
case 0x5e9013:c.instructions+=1;goto B5e9013;
case 0x5e9018:goto L5e9018;
case 0x5e901e:c.instructions+=2;goto B5e901e;
case 0x5e901f:c.instructions+=1;goto B5e901f;
case 0x5e9021:goto L5e9021;
case 0x5e9023:c.instructions+=1;goto B5e9023;
case 0x5e9025:goto L5e9025;
case 0x5e9029:c.instructions+=2;goto B5e9029;
case 0x5e902b:c.instructions+=1;goto B5e902b;
case 0x5e9030:goto L5e9030;
case 0x5e9031:c.instructions+=2;goto B5e9031;
case 0x5e9033:c.instructions+=1;goto B5e9033;
case 0x5e9038:goto L5e9038;
case 0x5e9039:c.instructions+=2;goto B5e9039;
case 0x5e903b:c.instructions+=1;goto B5e903b;
case 0x5e9040:goto L5e9040;
case 0x5e9046:c.instructions+=2;goto B5e9046;
case 0x5e9047:c.instructions+=1;goto B5e9047;
case 0x5e9049:goto L5e9049;
case 0x5e904b:c.instructions+=3;goto B5e904b;
case 0x5e9050:c.instructions+=2;goto B5e9050;
case 0x5e9055:c.instructions+=1;goto B5e9055;
case 0x5e9057:goto L5e9057;
case 0x5e905b:c.instructions+=2;goto B5e905b;
case 0x5e905d:c.instructions+=1;goto B5e905d;
case 0x5e9060:goto L5e9060;
case 0x5e9061:c.instructions+=2;goto B5e9061;
case 0x5e9063:c.instructions+=1;goto B5e9063;
case 0x5e9068:goto L5e9068;
case 0x5e906e:c.instructions+=2;goto B5e906e;
case 0x5e906f:c.instructions+=1;goto B5e906f;
case 0x5e9071:goto L5e9071;
case 0x5e9073:c.instructions+=2;goto B5e9073;
case 0x5e907b:c.instructions+=1;goto B5e907b;
case 0x5e9080:goto L5e9080;
case 0x5e9085:c.instructions+=1;goto B5e9085;
case 0x5e908b:goto L5e908b;
case 0x5e9090:goto L5e9090;
case 0x5e9095:c.instructions+=4;goto B5e9095;
case 0x5e9097:c.instructions+=3;goto B5e9097;
case 0x5e9099:c.instructions+=2;goto B5e9099;
case 0x5e909d:c.instructions+=1;goto B5e909d;
case 0x5e90a3:goto L5e90a3;
case 0x5e90a9:c.instructions+=2;goto B5e90a9;
case 0x5e90ad:c.instructions+=1;goto B5e90ad;
case 0x5e90b0:goto L5e90b0;
case 0x5e90b4:c.instructions+=5;goto B5e90b4;
case 0x5e90b6:c.instructions+=4;goto B5e90b6;
case 0x5e90b9:c.instructions+=3;goto B5e90b9;
case 0x5e90bc:c.instructions+=2;goto B5e90bc;
case 0x5e90c0:c.instructions+=1;goto B5e90c0;
case 0x5e90c6:goto L5e90c6;
case 0x5e90c9:c.instructions+=1;goto B5e90c9;
case 0x5e90cf:goto L5e90cf;
case 0x5e90d1:c.instructions+=3;goto B5e90d1;
case 0x5e90d4:c.instructions+=2;goto B5e90d4;
case 0x5e90d7:c.instructions+=1;goto B5e90d7;
case 0x5e90dd:goto L5e90dd;
case 0x5e90e2:c.instructions+=2;goto B5e90e2;
case 0x5e90e4:c.instructions+=1;goto B5e90e4;
case 0x5e90ea:goto L5e90ea;
case 0x5e90f1:c.instructions+=2;goto B5e90f1;
case 0x5e90f3:c.instructions+=1;goto B5e90f3;
case 0x5e90f9:goto L5e90f9;
case 0x5e90fc:c.instructions+=4;goto B5e90fc;
case 0x5e90fe:c.instructions+=3;goto B5e90fe;
case 0x5e9101:c.instructions+=2;goto B5e9101;
case 0x5e9104:c.instructions+=1;goto B5e9104;
case 0x5e910a:goto L5e910a;
case 0x5e910c:c.instructions+=3;goto B5e910c;
case 0x5e910f:c.instructions+=2;goto B5e910f;
case 0x5e9112:c.instructions+=1;goto B5e9112;
case 0x5e9118:goto L5e9118;
case 0x5e911d:c.instructions+=2;goto B5e911d;
case 0x5e9121:c.instructions+=1;goto B5e9121;
case 0x5e9123:goto L5e9123;
case 0x5e9128:c.instructions+=1;goto B5e9128;
case 0x5e912a:goto L5e912a;
case 0x5e912f:goto L5e912f;
case 0x5e9132:c.instructions+=2;goto B5e9132;
case 0x5e9134:c.instructions+=1;goto B5e9134;
case 0x5e913a:goto L5e913a;
case 0x5e9141:c.instructions+=2;goto B5e9141;
case 0x5e9143:c.instructions+=1;goto B5e9143;
case 0x5e9149:goto L5e9149;
case 0x5e914c:c.instructions+=4;goto B5e914c;
case 0x5e914e:c.instructions+=3;goto B5e914e;
case 0x5e9151:c.instructions+=2;goto B5e9151;
case 0x5e9154:c.instructions+=1;goto B5e9154;
case 0x5e915a:goto L5e915a;
case 0x5e915c:c.instructions+=3;goto B5e915c;
case 0x5e915f:c.instructions+=2;goto B5e915f;
case 0x5e9162:c.instructions+=1;goto B5e9162;
case 0x5e9168:goto L5e9168;
case 0x5e916d:c.instructions+=2;goto B5e916d;
case 0x5e9171:c.instructions+=1;goto B5e9171;
case 0x5e9173:goto L5e9173;
case 0x5e9178:c.instructions+=1;goto B5e9178;
case 0x5e917a:goto L5e917a;
case 0x5e917f:goto L5e917f;
case 0x5e9182:c.instructions+=2;goto B5e9182;
case 0x5e9184:c.instructions+=1;goto B5e9184;
case 0x5e918a:goto L5e918a;
case 0x5e918e:c.instructions+=11;goto B5e918e;
case 0x5e9193:c.instructions+=10;goto B5e9193;
case 0x5e9197:c.instructions+=9;goto B5e9197;
case 0x5e919a:c.instructions+=8;goto B5e919a;
case 0x5e919e:c.instructions+=7;goto B5e919e;
case 0x5e91a1:c.instructions+=6;goto B5e91a1;
case 0x5e91a3:c.instructions+=5;goto B5e91a3;
case 0x5e91a7:c.instructions+=4;goto B5e91a7;
case 0x5e91ad:c.instructions+=3;goto B5e91ad;
case 0x5e91af:c.instructions+=2;goto B5e91af;
case 0x5e91b2:c.instructions+=1;goto B5e91b2;
case 0x5e91b4:goto L5e91b4;
case 0x5e91b6:c.instructions+=1;goto B5e91b6;
case 0x5e91b8:goto L5e91b8;
case 0x5e91be:c.instructions+=2;goto B5e91be;
case 0x5e91c2:c.instructions+=1;goto B5e91c2;
case 0x5e91c7:goto L5e91c7;
case 0x5e91cb:c.instructions+=22;goto B5e91cb;
case 0x5e91ce:c.instructions+=21;goto B5e91ce;
case 0x5e91d1:c.instructions+=20;goto B5e91d1;
case 0x5e91d3:c.instructions+=19;goto B5e91d3;
case 0x5e91d7:c.instructions+=18;goto B5e91d7;
case 0x5e91dd:c.instructions+=17;goto B5e91dd;
case 0x5e91e1:c.instructions+=16;goto B5e91e1;
case 0x5e91e3:c.instructions+=15;goto B5e91e3;
case 0x5e91e5:c.instructions+=14;goto B5e91e5;
case 0x5e91e8:c.instructions+=13;goto B5e91e8;
case 0x5e91eb:c.instructions+=12;goto B5e91eb;
case 0x5e91ee:c.instructions+=11;goto B5e91ee;
case 0x5e91f0:c.instructions+=10;goto B5e91f0;
case 0x5e91f3:c.instructions+=9;goto B5e91f3;
case 0x5e91f5:c.instructions+=8;goto B5e91f5;
case 0x5e91f7:c.instructions+=7;goto B5e91f7;
case 0x5e91f9:c.instructions+=6;goto B5e91f9;
case 0x5e91fe:c.instructions+=5;goto B5e91fe;
case 0x5e91ff:c.instructions+=4;goto B5e91ff;
case 0x5e9202:c.instructions+=3;goto B5e9202;
case 0x5e9203:c.instructions+=2;goto B5e9203;
case 0x5e9204:c.instructions+=1;goto B5e9204;
case 0x5e9209:goto L5e9209;
case 0x5e920b:c.instructions+=5;goto B5e920b;
case 0x5e920c:c.instructions+=4;goto B5e920c;
case 0x5e920d:c.instructions+=3;goto B5e920d;
case 0x5e920f:c.instructions+=2;goto B5e920f;
case 0x5e9211:c.instructions+=1;goto B5e9211;
case 0x5e9216:goto L5e9216;
case 0x5e921c:c.instructions+=1;goto B5e921c;
case 0x5e921e:goto L5e921e;
case 0x5e9222:c.instructions+=8;goto B5e9222;
case 0x5e9226:c.instructions+=7;goto B5e9226;
case 0x5e922c:c.instructions+=6;goto B5e922c;
case 0x5e922d:c.instructions+=5;goto B5e922d;
case 0x5e9230:c.instructions+=4;goto B5e9230;
case 0x5e9232:c.instructions+=3;goto B5e9232;
case 0x5e9236:c.instructions+=2;goto B5e9236;
case 0x5e923a:c.instructions+=1;goto B5e923a;
case 0x5e9240:goto L5e9240;
case 0x5e9244:c.instructions+=2;goto B5e9244;
case 0x5e9246:c.instructions+=1;goto B5e9246;
case 0x5e9248:goto L5e9248;
case 0x5e924c:c.instructions+=2;goto B5e924c;
case 0x5e924e:c.instructions+=1;goto B5e924e;
case 0x5e9250:goto L5e9250;
case 0x5e9256:c.instructions+=6;goto B5e9256;
case 0x5e9258:c.instructions+=5;goto B5e9258;
case 0x5e9259:c.instructions+=4;goto B5e9259;
case 0x5e925a:c.instructions+=3;goto B5e925a;
case 0x5e925c:c.instructions+=2;goto B5e925c;
case 0x5e925e:c.instructions+=1;goto B5e925e;
case 0x5e9263:goto L5e9263;
case 0x5e9265:c.instructions+=5;goto B5e9265;
case 0x5e9266:c.instructions+=4;goto B5e9266;
case 0x5e9268:c.instructions+=3;goto B5e9268;
case 0x5e926a:c.instructions+=2;goto B5e926a;
case 0x5e926c:c.instructions+=1;goto B5e926c;
case 0x5e9271:goto L5e9271;
case 0x5e9273:c.instructions+=3;goto B5e9273;
case 0x5e9279:c.instructions+=2;goto B5e9279;
case 0x5e927a:c.instructions+=1;goto B5e927a;
case 0x5e927c:goto L5e927c;
case 0x5e9280:c.instructions+=3;goto B5e9280;
case 0x5e9281:c.instructions+=2;goto B5e9281;
case 0x5e9283:c.instructions+=1;goto B5e9283;
case 0x5e9285:goto L5e9285;
case 0x5e9289:c.instructions+=4;goto B5e9289;
case 0x5e928b:c.instructions+=3;goto B5e928b;
case 0x5e9291:c.instructions+=2;goto B5e9291;
case 0x5e9293:c.instructions+=1;goto B5e9293;
case 0x5e9294:goto L5e9294;
case 0x5e929a:c.instructions+=6;goto B5e929a;
case 0x5e929c:c.instructions+=5;goto B5e929c;
case 0x5e929d:c.instructions+=4;goto B5e929d;
case 0x5e929e:c.instructions+=3;goto B5e929e;
case 0x5e92a0:c.instructions+=2;goto B5e92a0;
case 0x5e92a2:c.instructions+=1;goto B5e92a2;
case 0x5e92a7:goto L5e92a7;
case 0x5e92a9:c.instructions+=5;goto B5e92a9;
case 0x5e92aa:c.instructions+=4;goto B5e92aa;
case 0x5e92ac:c.instructions+=3;goto B5e92ac;
case 0x5e92ae:c.instructions+=2;goto B5e92ae;
case 0x5e92b0:c.instructions+=1;goto B5e92b0;
case 0x5e92b5:goto L5e92b5;
case 0x5e92b7:c.instructions+=3;goto B5e92b7;
case 0x5e92bd:c.instructions+=2;goto B5e92bd;
case 0x5e92be:c.instructions+=1;goto B5e92be;
case 0x5e92c0:goto L5e92c0;
case 0x5e92c4:c.instructions+=4;goto B5e92c4;
case 0x5e92c5:c.instructions+=3;goto B5e92c5;
case 0x5e92c7:c.instructions+=2;goto B5e92c7;
case 0x5e92cb:c.instructions+=1;goto B5e92cb;
case 0x5e92d1:goto L5e92d1;
case 0x5e92d6:c.instructions+=2;goto B5e92d6;
case 0x5e92d8:c.instructions+=1;goto B5e92d8;
case 0x5e92de:goto L5e92de;
case 0x5e92e4:c.instructions+=4;goto B5e92e4;
case 0x5e92e6:c.instructions+=3;goto B5e92e6;
case 0x5e92e8:c.instructions+=2;goto B5e92e8;
case 0x5e92ea:c.instructions+=1;goto B5e92ea;
case 0x5e92ec:goto L5e92ec;
case 0x5e92f2:c.instructions+=2;goto B5e92f2;
case 0x5e92f8:c.instructions+=1;goto B5e92f8;
case 0x5e9300:goto L5e9300;
case 0x5e9307:c.instructions+=2;goto B5e9307;
case 0x5e9309:c.instructions+=1;goto B5e9309;
case 0x5e930b:goto L5e930b;
case 0x5e930c:c.instructions+=3;goto B5e930c;
case 0x5e9312:c.instructions+=2;goto B5e9312;
case 0x5e9314:c.instructions+=1;goto B5e9314;
case 0x5e9316:goto L5e9316;
case 0x5e9318:goto L5e9318;
case 0x5e931f:c.instructions+=1;goto B5e931f;
case 0x5e9325:goto L5e9325;
case 0x5e932b:c.instructions+=2;goto B5e932b;
case 0x5e932f:c.instructions+=1;goto B5e932f;
case 0x5e9335:goto L5e9335;
case 0x5e9339:c.instructions+=1;goto B5e9339;
case 0x5e9340:goto L5e9340;
case 0x5e9345:goto L5e9345;
case 0x5e9349:c.instructions+=8;goto B5e9349;
case 0x5e934f:c.instructions+=7;goto B5e934f;
case 0x5e9353:c.instructions+=6;goto B5e9353;
case 0x5e9357:c.instructions+=5;goto B5e9357;
case 0x5e9359:c.instructions+=4;goto B5e9359;
case 0x5e935b:c.instructions+=3;goto B5e935b;
case 0x5e935e:c.instructions+=2;goto B5e935e;
case 0x5e9361:c.instructions+=1;goto B5e9361;
case 0x5e9363:goto L5e9363;
case 0x5e9365:c.instructions+=1;goto B5e9365;
case 0x5e9367:goto L5e9367;
case 0x5e936a:c.instructions+=1;goto B5e936a;
case 0x5e9370:goto L5e9370;
case 0x5e9374:c.instructions+=7;goto B5e9374;
case 0x5e937a:c.instructions+=6;goto B5e937a;
case 0x5e937f:c.instructions+=5;goto B5e937f;
case 0x5e9383:c.instructions+=4;goto B5e9383;
case 0x5e9386:c.instructions+=3;goto B5e9386;
case 0x5e9388:c.instructions+=2;goto B5e9388;
case 0x5e938c:c.instructions+=1;goto B5e938c;
case 0x5e9392:goto L5e9392;
case 0x5e9394:c.instructions+=3;goto B5e9394;
case 0x5e939b:c.instructions+=2;goto B5e939b;
case 0x5e939d:c.instructions+=1;goto B5e939d;
case 0x5e93a3:goto L5e93a3;
case 0x5e93a6:c.instructions+=4;goto B5e93a6;
case 0x5e93a8:c.instructions+=3;goto B5e93a8;
case 0x5e93ab:c.instructions+=2;goto B5e93ab;
case 0x5e93ae:c.instructions+=1;goto B5e93ae;
case 0x5e93b4:goto L5e93b4;
case 0x5e93b7:c.instructions+=2;goto B5e93b7;
case 0x5e93ba:c.instructions+=1;goto B5e93ba;
case 0x5e93c0:goto L5e93c0;
case 0x5e93c3:c.instructions+=1;goto B5e93c3;
case 0x5e93c5:goto L5e93c5;
case 0x5e93c9:c.instructions+=1;goto B5e93c9;
case 0x5e93cb:goto L5e93cb;
case 0x5e93cf:c.instructions+=2;goto B5e93cf;
case 0x5e93d5:c.instructions+=1;goto B5e93d5;
case 0x5e93da:goto L5e93da;
case 0x5e93dd:c.instructions+=2;goto B5e93dd;
case 0x5e93df:c.instructions+=1;goto B5e93df;
case 0x5e93e5:goto L5e93e5;
case 0x5e93ec:c.instructions+=2;goto B5e93ec;
case 0x5e93ee:c.instructions+=1;goto B5e93ee;
case 0x5e93f4:goto L5e93f4;
case 0x5e93f7:c.instructions+=4;goto B5e93f7;
case 0x5e93f9:c.instructions+=3;goto B5e93f9;
case 0x5e93fc:c.instructions+=2;goto B5e93fc;
case 0x5e93ff:c.instructions+=1;goto B5e93ff;
case 0x5e9405:goto L5e9405;
case 0x5e9408:c.instructions+=2;goto B5e9408;
case 0x5e940b:c.instructions+=1;goto B5e940b;
case 0x5e9411:goto L5e9411;
case 0x5e9415:c.instructions+=2;goto B5e9415;
case 0x5e9417:c.instructions+=1;goto B5e9417;
case 0x5e9419:goto L5e9419;
case 0x5e9420:c.instructions+=1;goto B5e9420;
case 0x5e9422:goto L5e9422;
case 0x5e9424:goto L5e9424;
case 0x5e9428:c.instructions+=8;goto B5e9428;
case 0x5e942e:c.instructions+=7;goto B5e942e;
case 0x5e9433:c.instructions+=6;goto B5e9433;
case 0x5e9436:c.instructions+=5;goto B5e9436;
case 0x5e9439:c.instructions+=4;goto B5e9439;
case 0x5e943c:c.instructions+=3;goto B5e943c;
case 0x5e9440:c.instructions+=2;goto B5e9440;
case 0x5e9447:c.instructions+=1;goto B5e9447;
case 0x5e9449:goto L5e9449;
case 0x5e944f:c.instructions+=2;goto B5e944f;
case 0x5e9454:c.instructions+=1;goto B5e9454;
case 0x5e9459:goto L5e9459;
case 0x5e945c:c.instructions+=2;goto B5e945c;
case 0x5e945e:c.instructions+=1;goto B5e945e;
case 0x5e9460:goto L5e9460;
case 0x5e9467:c.instructions+=1;goto B5e9467;
case 0x5e9469:goto L5e9469;
case 0x5e946d:c.instructions+=1;goto B5e946d;
case 0x5e946f:goto L5e946f;
case 0x5e9471:goto L5e9471;
case 0x5e9474:c.instructions+=14;goto B5e9474;
case 0x5e9477:c.instructions+=13;goto B5e9477;
case 0x5e947e:c.instructions+=12;goto B5e947e;
case 0x5e9480:c.instructions+=11;goto B5e9480;
case 0x5e9483:c.instructions+=10;goto B5e9483;
case 0x5e9486:c.instructions+=9;goto B5e9486;
case 0x5e9489:c.instructions+=8;goto B5e9489;
case 0x5e948b:c.instructions+=7;goto B5e948b;
case 0x5e948d:c.instructions+=6;goto B5e948d;
case 0x5e9490:c.instructions+=5;goto B5e9490;
case 0x5e9493:c.instructions+=4;goto B5e9493;
case 0x5e9496:c.instructions+=3;goto B5e9496;
case 0x5e9498:c.instructions+=2;goto B5e9498;
case 0x5e949c:c.instructions+=1;goto B5e949c;
case 0x5e949e:goto L5e949e;
case 0x5e94a1:c.instructions+=1;goto B5e94a1;
case 0x5e94a3:goto L5e94a3;
case 0x5e94a6:goto L5e94a6;
case 0x5e94a9:c.instructions+=2;goto B5e94a9;
case 0x5e94ab:c.instructions+=1;goto B5e94ab;
case 0x5e94b1:goto L5e94b1;
case 0x5e94b3:c.instructions+=2;goto B5e94b3;
case 0x5e94b6:c.instructions+=1;goto B5e94b6;
case 0x5e94b8:goto L5e94b8;
case 0x5e94bb:c.instructions+=1;goto B5e94bb;
case 0x5e94bd:goto L5e94bd;
case 0x5e94c0:goto L5e94c0;
case 0x5e94c3:c.instructions+=2;goto B5e94c3;
case 0x5e94c5:c.instructions+=1;goto B5e94c5;
case 0x5e94cb:goto L5e94cb;
case 0x5e94ce:c.instructions+=1;goto B5e94ce;
case 0x5e94d0:goto L5e94d0;
case 0x5e94d4:c.instructions+=1;goto B5e94d4;
case 0x5e94d6:goto L5e94d6;
case 0x5e94da:c.instructions+=2;goto B5e94da;
case 0x5e94e0:c.instructions+=1;goto B5e94e0;
case 0x5e94e5:goto L5e94e5;
case 0x5e94e8:c.instructions+=3;goto B5e94e8;
case 0x5e94ec:c.instructions+=2;goto B5e94ec;
case 0x5e94ee:c.instructions+=1;goto B5e94ee;
case 0x5e94f4:goto L5e94f4;
case 0x5e94f8:c.instructions+=9;goto B5e94f8;
case 0x5e94fb:c.instructions+=8;goto B5e94fb;
case 0x5e94ff:c.instructions+=7;goto B5e94ff;
case 0x5e9502:c.instructions+=6;goto B5e9502;
case 0x5e9504:c.instructions+=5;goto B5e9504;
case 0x5e9508:c.instructions+=4;goto B5e9508;
case 0x5e950e:c.instructions+=3;goto B5e950e;
case 0x5e9510:c.instructions+=2;goto B5e9510;
case 0x5e9513:c.instructions+=1;goto B5e9513;
case 0x5e9515:goto L5e9515;
case 0x5e9519:c.instructions+=2;goto B5e9519;
case 0x5e951f:c.instructions+=1;goto B5e951f;
case 0x5e9524:goto L5e9524;
case 0x5e9528:c.instructions+=13;goto B5e9528;
case 0x5e952c:c.instructions+=12;goto B5e952c;
case 0x5e9530:c.instructions+=11;goto B5e9530;
case 0x5e9533:c.instructions+=10;goto B5e9533;
case 0x5e9535:c.instructions+=9;goto B5e9535;
case 0x5e953a:c.instructions+=8;goto B5e953a;
case 0x5e9540:c.instructions+=7;goto B5e9540;
case 0x5e9541:c.instructions+=6;goto B5e9541;
case 0x5e9542:c.instructions+=5;goto B5e9542;
case 0x5e9543:c.instructions+=4;goto B5e9543;
case 0x5e9544:c.instructions+=3;goto B5e9544;
case 0x5e9545:c.instructions+=2;goto B5e9545;
case 0x5e9547:c.instructions+=1;goto B5e9547;
case 0x5e954c:goto L5e954c;
case 0x5e9552:c.instructions+=9;goto B5e9552;
case 0x5e9556:c.instructions+=8;goto B5e9556;
case 0x5e955a:c.instructions+=7;goto B5e955a;
case 0x5e955b:c.instructions+=6;goto B5e955b;
case 0x5e955c:c.instructions+=5;goto B5e955c;
case 0x5e955d:c.instructions+=4;goto B5e955d;
case 0x5e955e:c.instructions+=3;goto B5e955e;
case 0x5e955f:c.instructions+=2;goto B5e955f;
case 0x5e9561:c.instructions+=1;goto B5e9561;
case 0x5e9566:goto L5e9566;
case 0x5e956b:c.instructions+=3;goto B5e956b;
case 0x5e956d:c.instructions+=2;goto B5e956d;
case 0x5e9571:c.instructions+=1;goto B5e9571;
case 0x5e9573:goto L5e9573;
case 0x5e9579:c.instructions+=6;goto B5e9579;
case 0x5e957b:c.instructions+=5;goto B5e957b;
case 0x5e957d:c.instructions+=4;goto B5e957d;
case 0x5e957f:c.instructions+=3;goto B5e957f;
case 0x5e9581:c.instructions+=2;goto B5e9581;
case 0x5e9584:c.instructions+=1;goto B5e9584;
case 0x5e9586:goto L5e9586;
case 0x5e958c:c.instructions+=1;goto B5e958c;
case 0x5e958e:goto L5e958e;
case 0x5e9594:c.instructions+=3;goto B5e9594;
case 0x5e9596:c.instructions+=2;goto B5e9596;
case 0x5e9599:c.instructions+=1;goto B5e9599;
case 0x5e959b:goto L5e959b;
case 0x5e95a1:goto L5e95a1;
case 0x5e95a7:c.instructions+=6;goto B5e95a7;
case 0x5e95a9:c.instructions+=5;goto B5e95a9;
case 0x5e95ab:c.instructions+=4;goto B5e95ab;
case 0x5e95ad:c.instructions+=3;goto B5e95ad;
case 0x5e95af:c.instructions+=2;goto B5e95af;
case 0x5e95b2:c.instructions+=1;goto B5e95b2;
case 0x5e95b4:goto L5e95b4;
case 0x5e95b8:c.instructions+=5;goto B5e95b8;
case 0x5e95ba:c.instructions+=4;goto B5e95ba;
case 0x5e95bc:c.instructions+=3;goto B5e95bc;
case 0x5e95bf:c.instructions+=2;goto B5e95bf;
case 0x5e95c2:c.instructions+=1;goto B5e95c2;
case 0x5e95c4:goto L5e95c4;
case 0x5e95ca:c.instructions+=3;goto B5e95ca;
case 0x5e95cc:c.instructions+=2;goto B5e95cc;
case 0x5e95cf:c.instructions+=1;goto B5e95cf;
case 0x5e95d1:goto L5e95d1;
case 0x5e95d5:c.instructions+=2;goto B5e95d5;
case 0x5e95d7:c.instructions+=1;goto B5e95d7;
case 0x5e95da:goto L5e95da;
case 0x5e95dc:goto L5e95dc;
case 0x5e95e0:c.instructions+=8;goto B5e95e0;
case 0x5e95e4:c.instructions+=7;goto B5e95e4;
case 0x5e95ea:c.instructions+=6;goto B5e95ea;
case 0x5e95eb:c.instructions+=5;goto B5e95eb;
case 0x5e95ee:c.instructions+=4;goto B5e95ee;
case 0x5e95f0:c.instructions+=3;goto B5e95f0;
case 0x5e95f4:c.instructions+=2;goto B5e95f4;
case 0x5e95f8:c.instructions+=1;goto B5e95f8;
case 0x5e95fe:goto L5e95fe;
case 0x5e9602:c.instructions+=7;goto B5e9602;
case 0x5e9608:c.instructions+=6;goto B5e9608;
case 0x5e960c:c.instructions+=5;goto B5e960c;
case 0x5e960e:c.instructions+=4;goto B5e960e;
case 0x5e9614:c.instructions+=3;goto B5e9614;
case 0x5e9618:c.instructions+=2;goto B5e9618;
case 0x5e9619:c.instructions+=1;goto B5e9619;
case 0x5e961e:goto L5e961e;
case 0x5e9624:c.instructions+=5;goto B5e9624;
case 0x5e9628:c.instructions+=4;goto B5e9628;
case 0x5e9629:c.instructions+=3;goto B5e9629;
case 0x5e962a:c.instructions+=2;goto B5e962a;
case 0x5e9630:c.instructions+=1;goto B5e9630;
case 0x5e9635:goto L5e9635;
case 0x5e963a:c.instructions+=9;goto B5e963a;
case 0x5e963d:c.instructions+=8;goto B5e963d;
case 0x5e963e:c.instructions+=7;goto B5e963e;
case 0x5e963f:c.instructions+=6;goto B5e963f;
case 0x5e9640:c.instructions+=5;goto B5e9640;
case 0x5e9641:c.instructions+=4;goto B5e9641;
case 0x5e9646:c.instructions+=3;goto B5e9646;
case 0x5e9647:c.instructions+=2;goto B5e9647;
case 0x5e964a:c.instructions+=1;goto B5e964a;
case 0x5e9650:goto L5e9650;
case 0x5e9651:c.instructions+=9;goto B5e9651;
case 0x5e9654:c.instructions+=8;goto B5e9654;
case 0x5e9655:c.instructions+=7;goto B5e9655;
case 0x5e9657:c.instructions+=6;goto B5e9657;
case 0x5e965e:c.instructions+=5;goto B5e965e;
case 0x5e9664:c.instructions+=4;goto B5e9664;
case 0x5e966a:c.instructions+=3;goto B5e966a;
case 0x5e9670:c.instructions+=2;goto B5e9670;
case 0x5e9672:c.instructions+=1;goto B5e9672;
case 0x5e9674:goto L5e9674;
case 0x5e967a:c.instructions+=2;goto B5e967a;
case 0x5e967c:c.instructions+=1;goto B5e967c;
case 0x5e967e:goto L5e967e;
case 0x5e9682:c.instructions+=2;goto B5e9682;
case 0x5e9683:c.instructions+=1;goto B5e9683;
case 0x5e9688:goto L5e9688;
case 0x5e968a:c.instructions+=1;goto B5e968a;
case 0x5e968c:goto L5e968c;
case 0x5e9690:c.instructions+=3;goto B5e9690;
case 0x5e9691:c.instructions+=2;goto B5e9691;
case 0x5e9693:c.instructions+=1;goto B5e9693;
case 0x5e9698:goto L5e9698;
case 0x5e969a:c.instructions+=1;goto B5e969a;
case 0x5e969f:goto L5e969f;
case 0x5e96a0:c.instructions+=2;goto B5e96a0;
case 0x5e96a1:c.instructions+=1;goto B5e96a1;
case 0x5e96b0:goto L5e96b0;
case 0x5e96b1:c.instructions+=11;goto B5e96b1;
case 0x5e96b5:c.instructions+=10;goto B5e96b5;
case 0x5e96b8:c.instructions+=9;goto B5e96b8;
case 0x5e96bb:c.instructions+=8;goto B5e96bb;
case 0x5e96bc:c.instructions+=7;goto B5e96bc;
case 0x5e96bd:c.instructions+=6;goto B5e96bd;
case 0x5e96be:c.instructions+=5;goto B5e96be;
case 0x5e96bf:c.instructions+=4;goto B5e96bf;
case 0x5e96c2:c.instructions+=3;goto B5e96c2;
case 0x5e96c3:c.instructions+=2;goto B5e96c3;
case 0x5e96c8:c.instructions+=1;goto B5e96c8;
case 0x5e96cd:goto L5e96cd;
case 0x5e96d1:c.instructions+=5;goto B5e96d1;
case 0x5e96d3:c.instructions+=4;goto B5e96d3;
case 0x5e96d5:c.instructions+=3;goto B5e96d5;
case 0x5e96d7:c.instructions+=2;goto B5e96d7;
case 0x5e96db:c.instructions+=1;goto B5e96db;
case 0x5e96dd:goto L5e96dd;
case 0x5e96e3:c.instructions+=2;goto B5e96e3;
case 0x5e96e8:c.instructions+=1;goto B5e96e8;
case 0x5e96ed:goto L5e96ed;
case 0x5e96ef:c.instructions+=2;goto B5e96ef;
case 0x5e96f1:c.instructions+=1;goto B5e96f1;
case 0x5e96f7:goto L5e96f7;
case 0x5e96fa:c.instructions+=7;goto B5e96fa;
case 0x5e96fc:c.instructions+=6;goto B5e96fc;
case 0x5e96fd:c.instructions+=5;goto B5e96fd;
case 0x5e9702:c.instructions+=4;goto B5e9702;
case 0x5e9704:c.instructions+=3;goto B5e9704;
case 0x5e9708:c.instructions+=2;goto B5e9708;
case 0x5e970b:c.instructions+=1;goto B5e970b;
case 0x5e970d:goto L5e970d;
case 0x5e9711:c.instructions+=1;goto B5e9711;
case 0x5e9713:goto L5e9713;
case 0x5e9718:c.instructions+=1;goto B5e9718;
case 0x5e9719:goto L5e9719;
case 0x5e971b:c.instructions+=2;goto B5e971b;
case 0x5e971d:c.instructions+=1;goto B5e971d;
case 0x5e971f:goto L5e971f;
case 0x5e9724:goto L5e9724;
case 0x5e9729:c.instructions+=1;goto B5e9729;
case 0x5e9730:goto L5e9730;
case 0x5e9737:c.instructions+=2;goto B5e9737;
case 0x5e9739:c.instructions+=1;goto B5e9739;
case 0x5e973b:goto L5e973b;
case 0x5e973e:c.instructions+=2;goto B5e973e;
case 0x5e9740:c.instructions+=1;goto B5e9740;
case 0x5e9742:goto L5e9742;
case 0x5e9746:c.instructions+=2;goto B5e9746;
case 0x5e9748:c.instructions+=1;goto B5e9748;
case 0x5e974a:goto L5e974a;
case 0x5e974f:c.instructions+=2;goto B5e974f;
case 0x5e9750:c.instructions+=1;goto B5e9750;
case 0x5e9752:goto L5e9752;
case 0x5e9756:goto L5e9756;
case 0x5e975d:c.instructions+=2;goto B5e975d;
case 0x5e975f:c.instructions+=1;goto B5e975f;
case 0x5e9761:goto L5e9761;
case 0x5e9764:c.instructions+=2;goto B5e9764;
case 0x5e9766:c.instructions+=1;goto B5e9766;
case 0x5e9768:goto L5e9768;
case 0x5e976a:c.instructions+=1;goto B5e976a;
case 0x5e976c:goto L5e976c;
case 0x5e976f:c.instructions+=2;goto B5e976f;
case 0x5e9774:c.instructions+=1;goto B5e9774;
case 0x5e9775:goto L5e9775;
case 0x5e977c:c.instructions+=2;goto B5e977c;
case 0x5e977e:c.instructions+=1;goto B5e977e;
case 0x5e9780:goto L5e9780;
case 0x5e9783:c.instructions+=2;goto B5e9783;
case 0x5e9785:c.instructions+=1;goto B5e9785;
case 0x5e9787:goto L5e9787;
case 0x5e9789:c.instructions+=1;goto B5e9789;
case 0x5e978b:goto L5e978b;
case 0x5e978e:c.instructions+=2;goto B5e978e;
case 0x5e9793:c.instructions+=1;goto B5e9793;
case 0x5e9794:goto L5e9794;
case 0x5e979b:c.instructions+=2;goto B5e979b;
case 0x5e979d:c.instructions+=1;goto B5e979d;
case 0x5e979f:goto L5e979f;
case 0x5e97a2:c.instructions+=2;goto B5e97a2;
case 0x5e97a4:c.instructions+=1;goto B5e97a4;
case 0x5e97a6:goto L5e97a6;
case 0x5e97a8:c.instructions+=1;goto B5e97a8;
case 0x5e97aa:goto L5e97aa;
case 0x5e97ad:c.instructions+=2;goto B5e97ad;
case 0x5e97b2:c.instructions+=1;goto B5e97b2;
case 0x5e97b3:goto L5e97b3;
case 0x5e97ba:c.instructions+=2;goto B5e97ba;
case 0x5e97bc:c.instructions+=1;goto B5e97bc;
case 0x5e97be:goto L5e97be;
case 0x5e97c1:c.instructions+=2;goto B5e97c1;
case 0x5e97c3:c.instructions+=1;goto B5e97c3;
case 0x5e97c5:goto L5e97c5;
case 0x5e97c7:c.instructions+=1;goto B5e97c7;
case 0x5e97c9:goto L5e97c9;
case 0x5e97cc:c.instructions+=2;goto B5e97cc;
case 0x5e97d1:c.instructions+=1;goto B5e97d1;
case 0x5e97d2:goto L5e97d2;
case 0x5e97d9:c.instructions+=2;goto B5e97d9;
case 0x5e97db:c.instructions+=1;goto B5e97db;
case 0x5e97dd:goto L5e97dd;
case 0x5e97e0:c.instructions+=2;goto B5e97e0;
case 0x5e97e2:c.instructions+=1;goto B5e97e2;
case 0x5e97e4:goto L5e97e4;
case 0x5e97e6:c.instructions+=1;goto B5e97e6;
case 0x5e97e8:goto L5e97e8;
case 0x5e97eb:c.instructions+=2;goto B5e97eb;
case 0x5e97f0:c.instructions+=1;goto B5e97f0;
case 0x5e97f1:goto L5e97f1;
case 0x5e97f8:c.instructions+=2;goto B5e97f8;
case 0x5e97fa:c.instructions+=1;goto B5e97fa;
case 0x5e97fc:goto L5e97fc;
case 0x5e97ff:c.instructions+=2;goto B5e97ff;
case 0x5e9801:c.instructions+=1;goto B5e9801;
case 0x5e9803:goto L5e9803;
case 0x5e9805:c.instructions+=1;goto B5e9805;
case 0x5e9807:goto L5e9807;
case 0x5e980a:c.instructions+=2;goto B5e980a;
case 0x5e980f:c.instructions+=1;goto B5e980f;
case 0x5e9810:goto L5e9810;
case 0x5e9817:c.instructions+=2;goto B5e9817;
case 0x5e9819:c.instructions+=1;goto B5e9819;
case 0x5e981b:goto L5e981b;
case 0x5e981e:c.instructions+=2;goto B5e981e;
case 0x5e9820:c.instructions+=1;goto B5e9820;
case 0x5e9822:goto L5e9822;
case 0x5e9824:c.instructions+=1;goto B5e9824;
case 0x5e9826:goto L5e9826;
case 0x5e9829:c.instructions+=2;goto B5e9829;
case 0x5e982e:c.instructions+=1;goto B5e982e;
case 0x5e982f:goto L5e982f;
case 0x5e9836:c.instructions+=2;goto B5e9836;
case 0x5e9838:c.instructions+=1;goto B5e9838;
case 0x5e983a:goto L5e983a;
case 0x5e983d:c.instructions+=2;goto B5e983d;
case 0x5e983f:c.instructions+=1;goto B5e983f;
case 0x5e9841:goto L5e9841;
case 0x5e9843:c.instructions+=1;goto B5e9843;
case 0x5e9845:goto L5e9845;
case 0x5e9848:c.instructions+=2;goto B5e9848;
case 0x5e984d:c.instructions+=1;goto B5e984d;
case 0x5e984e:goto L5e984e;
case 0x5e9855:c.instructions+=2;goto B5e9855;
case 0x5e9857:c.instructions+=1;goto B5e9857;
case 0x5e9859:goto L5e9859;
case 0x5e985c:c.instructions+=2;goto B5e985c;
case 0x5e985e:c.instructions+=1;goto B5e985e;
case 0x5e9860:goto L5e9860;
case 0x5e9862:c.instructions+=1;goto B5e9862;
case 0x5e9864:goto L5e9864;
case 0x5e9867:c.instructions+=2;goto B5e9867;
case 0x5e986c:c.instructions+=1;goto B5e986c;
case 0x5e986d:goto L5e986d;
case 0x5e9870:c.instructions+=2;goto B5e9870;
case 0x5e9875:c.instructions+=1;goto B5e9875;
case 0x5e987b:goto L5e987b;
case 0x5e987e:c.instructions+=3;goto B5e987e;
case 0x5e9880:c.instructions+=2;goto B5e9880;
case 0x5e9882:c.instructions+=1;goto B5e9882;
case 0x5e9884:goto L5e9884;
case 0x5e9887:goto L5e9887;
case 0x5e988a:c.instructions+=2;goto B5e988a;
case 0x5e988c:c.instructions+=1;goto B5e988c;
case 0x5e988e:goto L5e988e;
case 0x5e9895:c.instructions+=2;goto B5e9895;
case 0x5e9897:c.instructions+=1;goto B5e9897;
case 0x5e9899:goto L5e9899;
case 0x5e989d:c.instructions+=1;goto B5e989d;
case 0x5e989f:goto L5e989f;
case 0x5e98a3:c.instructions+=1;goto B5e98a3;
case 0x5e98a5:goto L5e98a5;
case 0x5e98aa:c.instructions+=1;goto B5e98aa;
case 0x5e98ab:goto L5e98ab;
case 0x5e98ae:c.instructions+=4;goto B5e98ae;
case 0x5e98af:c.instructions+=3;goto B5e98af;
case 0x5e98b2:c.instructions+=2;goto B5e98b2;
case 0x5e98b4:c.instructions+=1;goto B5e98b4;
case 0x5e98b6:goto L5e98b6;
case 0x5e98ba:c.instructions+=3;goto B5e98ba;
case 0x5e98bd:c.instructions+=2;goto B5e98bd;
case 0x5e98c1:c.instructions+=1;goto B5e98c1;
case 0x5e98c7:goto L5e98c7;
case 0x5e98cb:c.instructions+=4;goto B5e98cb;
case 0x5e98ce:c.instructions+=3;goto B5e98ce;
case 0x5e98d0:c.instructions+=2;goto B5e98d0;
case 0x5e98d2:c.instructions+=1;goto B5e98d2;
case 0x5e98d4:goto L5e98d4;
case 0x5e98d8:goto L5e98d8;
case 0x5e98de:c.instructions+=1;goto B5e98de;
case 0x5e98e0:goto L5e98e0;
case 0x5e98e5:c.instructions+=3;goto B5e98e5;
case 0x5e98ea:c.instructions+=2;goto B5e98ea;
case 0x5e98ec:c.instructions+=1;goto B5e98ec;
case 0x5e98f2:goto L5e98f2;
case 0x5e98f4:c.instructions+=1;goto B5e98f4;
case 0x5e98f6:goto L5e98f6;
case 0x5e98f8:c.instructions+=4;goto B5e98f8;
case 0x5e98fd:c.instructions+=3;goto B5e98fd;
case 0x5e98ff:c.instructions+=2;goto B5e98ff;
case 0x5e9904:c.instructions+=1;goto B5e9904;
case 0x5e9909:goto L5e9909;
case 0x5e990c:goto L5e990c;
case 0x5e9911:c.instructions+=2;goto B5e9911;
case 0x5e9913:c.instructions+=1;goto B5e9913;
case 0x5e9919:goto L5e9919;
case 0x5e991f:c.instructions+=2;goto B5e991f;
case 0x5e9921:c.instructions+=1;goto B5e9921;
case 0x5e9923:goto L5e9923;
case 0x5e9929:c.instructions+=8;goto B5e9929;
case 0x5e992e:c.instructions+=7;goto B5e992e;
case 0x5e9930:c.instructions+=6;goto B5e9930;
case 0x5e9932:c.instructions+=5;goto B5e9932;
case 0x5e9934:c.instructions+=4;goto B5e9934;
case 0x5e9937:c.instructions+=3;goto B5e9937;
case 0x5e9939:c.instructions+=2;goto B5e9939;
case 0x5e993c:c.instructions+=1;goto B5e993c;
case 0x5e993e:goto L5e993e;
case 0x5e9942:c.instructions+=5;goto B5e9942;
case 0x5e9943:c.instructions+=4;goto B5e9943;
case 0x5e9944:c.instructions+=3;goto B5e9944;
case 0x5e9945:c.instructions+=2;goto B5e9945;
case 0x5e9946:c.instructions+=1;goto B5e9946;
case 0x5e994b:goto L5e994b;
case 0x5e994e:c.instructions+=1;goto B5e994e;
case 0x5e9950:goto L5e9950;
case 0x5e9955:c.instructions+=2;goto B5e9955;
case 0x5e9957:c.instructions+=1;goto B5e9957;
case 0x5e9959:goto L5e9959;
case 0x5e995e:c.instructions+=2;goto B5e995e;
case 0x5e9960:c.instructions+=1;goto B5e9960;
case 0x5e9962:goto L5e9962;
case 0x5e9967:c.instructions+=5;goto B5e9967;
case 0x5e9969:c.instructions+=4;goto B5e9969;
case 0x5e9970:c.instructions+=3;goto B5e9970;
case 0x5e9976:c.instructions+=2;goto B5e9976;
case 0x5e997c:c.instructions+=1;goto B5e997c;
case 0x5e997e:goto L5e997e;
case 0x5e9983:c.instructions+=2;goto B5e9983;
case 0x5e9985:c.instructions+=1;goto B5e9985;
case 0x5e9987:goto L5e9987;
case 0x5e998b:c.instructions+=3;goto B5e998b;
case 0x5e998c:c.instructions+=2;goto B5e998c;
case 0x5e9991:c.instructions+=1;goto B5e9991;
case 0x5e9996:goto L5e9996;
case 0x5e9998:c.instructions+=1;goto B5e9998;
case 0x5e999a:goto L5e999a;
case 0x5e999e:c.instructions+=3;goto B5e999e;
case 0x5e999f:c.instructions+=2;goto B5e999f;
case 0x5e99a4:c.instructions+=1;goto B5e99a4;
case 0x5e99a9:goto L5e99a9;
case 0x5e99b3:goto L5e99b3;
case 0x5e99b4:c.instructions+=6;goto B5e99b4;
case 0x5e99b6:c.instructions+=5;goto B5e99b6;
case 0x5e99b7:c.instructions+=4;goto B5e99b7;
case 0x5e99b8:c.instructions+=3;goto B5e99b8;
case 0x5e99b9:c.instructions+=2;goto B5e99b9;
case 0x5e99ba:c.instructions+=1;goto B5e99ba;
case 0x5e99c0:goto L5e99c0;
case 0x5e99c6:c.instructions+=9;goto B5e99c6;
case 0x5e99c7:c.instructions+=8;goto B5e99c7;
case 0x5e99ce:c.instructions+=7;goto B5e99ce;
case 0x5e99cf:c.instructions+=6;goto B5e99cf;
case 0x5e99d0:c.instructions+=5;goto B5e99d0;
case 0x5e99d1:c.instructions+=4;goto B5e99d1;
case 0x5e99d6:c.instructions+=3;goto B5e99d6;
case 0x5e99da:c.instructions+=2;goto B5e99da;
case 0x5e99db:c.instructions+=1;goto B5e99db;
case 0x5e99e0:goto L5e99e0;
case 0x5e99e2:c.instructions+=3;goto B5e99e2;
case 0x5e99e4:c.instructions+=2;goto B5e99e4;
case 0x5e99e6:c.instructions+=1;goto B5e99e6;
case 0x5e99e8:goto L5e99e8;
case 0x5e99f0:goto L5e99f0;
case 0x5e99f5:c.instructions+=2;goto B5e99f5;
case 0x5e99f7:c.instructions+=1;goto B5e99f7;
case 0x5e99f9:goto L5e99f9;
case 0x5e9a00:c.instructions+=2;goto B5e9a00;
case 0x5e9a02:c.instructions+=1;goto B5e9a02;
case 0x5e9a04:goto L5e9a04;
case 0x5e9a07:c.instructions+=2;goto B5e9a07;
case 0x5e9a09:c.instructions+=1;goto B5e9a09;
case 0x5e9a0b:goto L5e9a0b;
case 0x5e9a0e:c.instructions+=2;goto B5e9a0e;
case 0x5e9a10:c.instructions+=1;goto B5e9a10;
case 0x5e9a12:goto L5e9a12;
case 0x5e9a13:c.instructions+=1;goto B5e9a13;
case 0x5e9a18:goto L5e9a18;
case 0x5e9a19:c.instructions+=2;goto B5e9a19;
case 0x5e9a1b:c.instructions+=1;goto B5e9a1b;
case 0x5e9a1d:goto L5e9a1d;
case 0x5e9a1e:c.instructions+=4;goto B5e9a1e;
case 0x5e9a1f:c.instructions+=3;goto B5e9a1f;
case 0x5e9a20:c.instructions+=2;goto B5e9a20;
case 0x5e9a26:c.instructions+=1;goto B5e9a26;
case 0x5e9a30:goto L5e9a30;
case 0x5e9a31:c.instructions+=12;goto B5e9a31;
case 0x5e9a32:c.instructions+=11;goto B5e9a32;
case 0x5e9a34:c.instructions+=10;goto B5e9a34;
case 0x5e9a39:c.instructions+=9;goto B5e9a39;
case 0x5e9a3f:c.instructions+=8;goto B5e9a3f;
case 0x5e9a45:c.instructions+=7;goto B5e9a45;
case 0x5e9a4b:c.instructions+=6;goto B5e9a4b;
case 0x5e9a4d:c.instructions+=5;goto B5e9a4d;
case 0x5e9a4e:c.instructions+=4;goto B5e9a4e;
case 0x5e9a4f:c.instructions+=3;goto B5e9a4f;
case 0x5e9a59:c.instructions+=2;goto B5e9a59;
case 0x5e9a61:c.instructions+=1;goto B5e9a61;
case 0x5e9a67:goto L5e9a67;
case 0x5e9a6a:c.instructions+=2;goto B5e9a6a;
case 0x5e9a6b:c.instructions+=1;goto B5e9a6b;
case 0x5e9a70:goto L5e9a70;
case 0x5e9a73:c.instructions+=26;goto B5e9a73;
case 0x5e9a76:c.instructions+=25;goto B5e9a76;
case 0x5e9a79:c.instructions+=24;goto B5e9a79;
case 0x5e9a7c:c.instructions+=23;goto B5e9a7c;
case 0x5e9a7f:c.instructions+=22;goto B5e9a7f;
case 0x5e9a82:c.instructions+=21;goto B5e9a82;
case 0x5e9a85:c.instructions+=20;goto B5e9a85;
case 0x5e9a87:c.instructions+=19;goto B5e9a87;
case 0x5e9a8a:c.instructions+=18;goto B5e9a8a;
case 0x5e9a8c:c.instructions+=17;goto B5e9a8c;
case 0x5e9a8f:c.instructions+=16;goto B5e9a8f;
case 0x5e9a92:c.instructions+=15;goto B5e9a92;
case 0x5e9a95:c.instructions+=14;goto B5e9a95;
case 0x5e9a98:c.instructions+=13;goto B5e9a98;
case 0x5e9a9b:c.instructions+=12;goto B5e9a9b;
case 0x5e9a9e:c.instructions+=11;goto B5e9a9e;
case 0x5e9aa0:c.instructions+=10;goto B5e9aa0;
case 0x5e9aa2:c.instructions+=9;goto B5e9aa2;
case 0x5e9aa5:c.instructions+=8;goto B5e9aa5;
case 0x5e9aa7:c.instructions+=7;goto B5e9aa7;
case 0x5e9aaa:c.instructions+=6;goto B5e9aaa;
case 0x5e9aad:c.instructions+=5;goto B5e9aad;
case 0x5e9ab0:c.instructions+=4;goto B5e9ab0;
case 0x5e9ab3:c.instructions+=3;goto B5e9ab3;
case 0x5e9ab9:c.instructions+=2;goto B5e9ab9;
case 0x5e9abb:c.instructions+=1;goto B5e9abb;
case 0x5e9abd:goto L5e9abd;
case 0x5e9ac0:c.instructions+=1;goto B5e9ac0;
case 0x5e9ac2:goto L5e9ac2;
case 0x5e9ac7:c.instructions+=5;goto B5e9ac7;
case 0x5e9ac8:c.instructions+=4;goto B5e9ac8;
case 0x5e9acd:c.instructions+=3;goto B5e9acd;
case 0x5e9acf:c.instructions+=2;goto B5e9acf;
case 0x5e9ad2:c.instructions+=1;goto B5e9ad2;
case 0x5e9ad4:goto L5e9ad4;
case 0x5e9ad6:goto L5e9ad6;
case 0x5e9ad9:c.instructions+=1;goto B5e9ad9;
case 0x5e9adb:goto L5e9adb;
case 0x5e9ade:c.instructions+=20;goto B5e9ade;
case 0x5e9ae4:c.instructions+=19;goto B5e9ae4;
case 0x5e9ae9:c.instructions+=18;goto B5e9ae9;
case 0x5e9aec:c.instructions+=17;goto B5e9aec;
case 0x5e9aee:c.instructions+=16;goto B5e9aee;
case 0x5e9af0:c.instructions+=15;goto B5e9af0;
case 0x5e9af2:c.instructions+=14;goto B5e9af2;
case 0x5e9af4:c.instructions+=13;goto B5e9af4;
case 0x5e9af6:c.instructions+=12;goto B5e9af6;
case 0x5e9af8:c.instructions+=11;goto B5e9af8;
case 0x5e9afa:c.instructions+=10;goto B5e9afa;
case 0x5e9afc:c.instructions+=9;goto B5e9afc;
case 0x5e9afe:c.instructions+=8;goto B5e9afe;
case 0x5e9b00:c.instructions+=7;goto B5e9b00;
case 0x5e9b02:c.instructions+=6;goto B5e9b02;
case 0x5e9b04:c.instructions+=5;goto B5e9b04;
case 0x5e9b06:c.instructions+=4;goto B5e9b06;
case 0x5e9b0c:c.instructions+=3;goto B5e9b0c;
case 0x5e9b0e:c.instructions+=2;goto B5e9b0e;
case 0x5e9b11:c.instructions+=1;goto B5e9b11;
case 0x5e9b13:goto L5e9b13;
case 0x5e9b15:goto L5e9b15;
case 0x5e9b1a:c.instructions+=2;goto B5e9b1a;
case 0x5e9b1c:c.instructions+=1;goto B5e9b1c;
case 0x5e9b1e:goto L5e9b1e;
case 0x5e9b21:c.instructions+=1;goto B5e9b21;
case 0x5e9b23:goto L5e9b23;
case 0x5e9b25:goto L5e9b25;
case 0x5e9b28:c.instructions+=1;goto B5e9b28;
case 0x5e9b2d:goto L5e9b2d;
case 0x5e9b30:c.instructions+=5;goto B5e9b30;
case 0x5e9b32:c.instructions+=4;goto B5e9b32;
case 0x5e9b35:c.instructions+=3;goto B5e9b35;
case 0x5e9b38:c.instructions+=2;goto B5e9b38;
case 0x5e9b3b:c.instructions+=1;goto B5e9b3b;
case 0x5e9b40:goto L5e9b40;
case 0x5e9b43:c.instructions+=9;goto B5e9b43;
case 0x5e9b46:c.instructions+=8;goto B5e9b46;
case 0x5e9b48:c.instructions+=7;goto B5e9b48;
case 0x5e9b4a:c.instructions+=6;goto B5e9b4a;
case 0x5e9b4d:c.instructions+=5;goto B5e9b4d;
case 0x5e9b4f:c.instructions+=4;goto B5e9b4f;
case 0x5e9b51:c.instructions+=3;goto B5e9b51;
case 0x5e9b54:c.instructions+=2;goto B5e9b54;
case 0x5e9b5a:c.instructions+=1;goto B5e9b5a;
case 0x5e9b5c:goto L5e9b5c;
case 0x5e9b5e:goto L5e9b5e;
case 0x5e9b60:c.instructions+=2;goto B5e9b60;
case 0x5e9b67:c.instructions+=1;goto B5e9b67;
case 0x5e9b69:goto L5e9b69;
case 0x5e9b6c:c.instructions+=1;goto B5e9b6c;
case 0x5e9b71:goto L5e9b71;
case 0x5e9b74:c.instructions+=5;goto B5e9b74;
case 0x5e9b76:c.instructions+=4;goto B5e9b76;
case 0x5e9b79:c.instructions+=3;goto B5e9b79;
case 0x5e9b7c:c.instructions+=2;goto B5e9b7c;
case 0x5e9b7f:c.instructions+=1;goto B5e9b7f;
case 0x5e9b84:goto L5e9b84;
case 0x5e9b87:c.instructions+=3;goto B5e9b87;
case 0x5e9b8a:c.instructions+=2;goto B5e9b8a;
case 0x5e9b8c:c.instructions+=1;goto B5e9b8c;
case 0x5e9b8f:goto L5e9b8f;
case 0x5e9b93:c.instructions+=6;goto B5e9b93;
case 0x5e9b99:c.instructions+=5;goto B5e9b99;
case 0x5e9b9a:c.instructions+=4;goto B5e9b9a;
case 0x5e9ba0:c.instructions+=3;goto B5e9ba0;
case 0x5e9ba2:c.instructions+=2;goto B5e9ba2;
case 0x5e9ba6:c.instructions+=1;goto B5e9ba6;
case 0x5e9bac:goto L5e9bac;
case 0x5e9bad:goto L5e9bad;
case 0x5e9bb3:c.instructions+=3;goto B5e9bb3;
case 0x5e9bb5:c.instructions+=2;goto B5e9bb5;
case 0x5e9bb7:c.instructions+=1;goto B5e9bb7;
case 0x5e9bb9:goto L5e9bb9;
case 0x5e9bbc:c.instructions+=1;goto B5e9bbc;
case 0x5e9bc0:goto L5e9bc0;
case 0x5e9bc6:c.instructions+=9;goto B5e9bc6;
case 0x5e9bc9:c.instructions+=8;goto B5e9bc9;
case 0x5e9bcf:c.instructions+=7;goto B5e9bcf;
case 0x5e9bd1:c.instructions+=6;goto B5e9bd1;
case 0x5e9bd7:c.instructions+=5;goto B5e9bd7;
case 0x5e9bda:c.instructions+=4;goto B5e9bda;
case 0x5e9bdb:c.instructions+=3;goto B5e9bdb;
case 0x5e9bdd:c.instructions+=2;goto B5e9bdd;
case 0x5e9be0:c.instructions+=1;goto B5e9be0;
case 0x5e9be5:goto L5e9be5;
case 0x5e9be7:c.instructions+=6;goto B5e9be7;
case 0x5e9bed:c.instructions+=5;goto B5e9bed;
case 0x5e9bf3:c.instructions+=4;goto B5e9bf3;
case 0x5e9bf4:c.instructions+=3;goto B5e9bf4;
case 0x5e9bfa:c.instructions+=2;goto B5e9bfa;
case 0x5e9bfc:c.instructions+=1;goto B5e9bfc;
case 0x5e9bfe:goto L5e9bfe;
case 0x5e9bff:c.instructions+=4;goto B5e9bff;
case 0x5e9c00:c.instructions+=3;goto B5e9c00;
case 0x5e9c01:c.instructions+=2;goto B5e9c01;
case 0x5e9c02:c.instructions+=1;goto B5e9c02;
case 0x5e9c10:goto L5e9c10;
case 0x5e9c13:c.instructions+=6;goto B5e9c13;
case 0x5e9c17:c.instructions+=5;goto B5e9c17;
case 0x5e9c18:c.instructions+=4;goto B5e9c18;
case 0x5e9c1a:c.instructions+=3;goto B5e9c1a;
case 0x5e9c20:c.instructions+=2;goto B5e9c20;
case 0x5e9c24:c.instructions+=1;goto B5e9c24;
case 0x5e9c2a:goto L5e9c2a;
case 0x5e9c2d:c.instructions+=7;goto B5e9c2d;
case 0x5e9c2e:c.instructions+=6;goto B5e9c2e;
case 0x5e9c32:c.instructions+=5;goto B5e9c32;
case 0x5e9c35:c.instructions+=4;goto B5e9c35;
case 0x5e9c37:c.instructions+=3;goto B5e9c37;
case 0x5e9c3b:c.instructions+=2;goto B5e9c3b;
case 0x5e9c3f:c.instructions+=1;goto B5e9c3f;
case 0x5e9c45:goto L5e9c45;
case 0x5e9c46:c.instructions+=2;goto B5e9c46;
case 0x5e9c47:c.instructions+=1;goto B5e9c47;
case 0x5e9c49:goto L5e9c49;
case 0x5e9c4d:c.instructions+=1;goto B5e9c4d;
case 0x5e9c50:goto L5e9c50;
case 0x5e9c52:c.instructions+=2;goto B5e9c52;
case 0x5e9c57:c.instructions+=1;goto B5e9c57;
case 0x5e9c59:goto L5e9c59;
case 0x5e9c5c:c.instructions+=4;goto B5e9c5c;
case 0x5e9c5f:c.instructions+=3;goto B5e9c5f;
case 0x5e9c63:c.instructions+=2;goto B5e9c63;
case 0x5e9c65:c.instructions+=1;goto B5e9c65;
case 0x5e9c6b:goto L5e9c6b;
case 0x5e9c70:goto L5e9c70;
case 0x5e9c74:c.instructions+=6;goto B5e9c74;
case 0x5e9c75:c.instructions+=5;goto B5e9c75;
case 0x5e9c7a:c.instructions+=4;goto B5e9c7a;
case 0x5e9c7c:c.instructions+=3;goto B5e9c7c;
case 0x5e9c7e:c.instructions+=2;goto B5e9c7e;
case 0x5e9c80:c.instructions+=1;goto B5e9c80;
case 0x5e9c82:goto L5e9c82;
case 0x5e9c84:c.instructions+=1;goto B5e9c84;
case 0x5e9c86:goto L5e9c86;
case 0x5e9c89:c.instructions+=1;goto B5e9c89;
case 0x5e9c8b:goto L5e9c8b;
case 0x5e9c91:c.instructions+=1;goto B5e9c91;
case 0x5e9c93:goto L5e9c93;
case 0x5e9c96:c.instructions+=5;goto B5e9c96;
case 0x5e9c98:c.instructions+=4;goto B5e9c98;
case 0x5e9c9b:c.instructions+=3;goto B5e9c9b;
case 0x5e9c9e:c.instructions+=2;goto B5e9c9e;
case 0x5e9ca0:c.instructions+=1;goto B5e9ca0;
case 0x5e9ca2:goto L5e9ca2;
case 0x5e9ca5:c.instructions+=5;goto B5e9ca5;
case 0x5e9ca8:c.instructions+=4;goto B5e9ca8;
case 0x5e9caa:c.instructions+=3;goto B5e9caa;
case 0x5e9cad:c.instructions+=2;goto B5e9cad;
case 0x5e9cb0:c.instructions+=1;goto B5e9cb0;
case 0x5e9cb2:goto L5e9cb2;
case 0x5e9cb6:c.instructions+=3;goto B5e9cb6;
case 0x5e9cba:c.instructions+=2;goto B5e9cba;
case 0x5e9cbc:c.instructions+=1;goto B5e9cbc;
case 0x5e9cbe:goto L5e9cbe;
case 0x5e9cc3:goto L5e9cc3;
case 0x5e9cc8:c.instructions+=1;goto B5e9cc8;
case 0x5e9cce:goto L5e9cce;
case 0x5e9cd3:c.instructions+=6;goto B5e9cd3;
case 0x5e9cd6:c.instructions+=5;goto B5e9cd6;
case 0x5e9cd8:c.instructions+=4;goto B5e9cd8;
case 0x5e9cdb:c.instructions+=3;goto B5e9cdb;
case 0x5e9cdd:c.instructions+=2;goto B5e9cdd;
case 0x5e9ce0:c.instructions+=1;goto B5e9ce0;
case 0x5e9ce6:goto L5e9ce6;
case 0x5e9ce8:c.instructions+=2;goto B5e9ce8;
case 0x5e9ceb:c.instructions+=1;goto B5e9ceb;
case 0x5e9cf0:goto L5e9cf0;
case 0x5e9cf2:c.instructions+=3;goto B5e9cf2;
case 0x5e9cf4:c.instructions+=2;goto B5e9cf4;
case 0x5e9cf8:c.instructions+=1;goto B5e9cf8;
case 0x5e9d00:goto L5e9d00;
case 0x5e9d03:c.instructions+=9;goto B5e9d03;
case 0x5e9d07:c.instructions+=8;goto B5e9d07;
case 0x5e9d09:c.instructions+=7;goto B5e9d09;
case 0x5e9d0c:c.instructions+=6;goto B5e9d0c;
case 0x5e9d10:c.instructions+=5;goto B5e9d10;
case 0x5e9d13:c.instructions+=4;goto B5e9d13;
case 0x5e9d15:c.instructions+=3;goto B5e9d15;
case 0x5e9d17:c.instructions+=2;goto B5e9d17;
case 0x5e9d19:c.instructions+=1;goto B5e9d19;
case 0x5e9d1b:goto L5e9d1b;
case 0x5e9d20:goto L5e9d20;
case 0x5e9d24:c.instructions+=2;goto B5e9d24;
case 0x5e9d26:c.instructions+=1;goto B5e9d26;
case 0x5e9d28:goto L5e9d28;
case 0x5e9d2a:c.instructions+=2;goto B5e9d2a;
case 0x5e9d2c:c.instructions+=1;goto B5e9d2c;
case 0x5e9d2e:goto L5e9d2e;
case 0x5e9d31:c.instructions+=3;goto B5e9d31;
case 0x5e9d34:c.instructions+=2;goto B5e9d34;
case 0x5e9d36:c.instructions+=1;goto B5e9d36;
case 0x5e9d38:goto L5e9d38;
case 0x5e9d3c:c.instructions+=2;goto B5e9d3c;
case 0x5e9d3e:c.instructions+=1;goto B5e9d3e;
case 0x5e9d40:goto L5e9d40;
case 0x5e9d42:c.instructions+=2;goto B5e9d42;
case 0x5e9d44:c.instructions+=1;goto B5e9d44;
case 0x5e9d46:goto L5e9d46;
case 0x5e9d48:goto L5e9d48;
case 0x5e9d4c:c.instructions+=5;goto B5e9d4c;
case 0x5e9d4f:c.instructions+=4;goto B5e9d4f;
case 0x5e9d55:c.instructions+=3;goto B5e9d55;
case 0x5e9d56:c.instructions+=2;goto B5e9d56;
case 0x5e9d5a:c.instructions+=1;goto B5e9d5a;
case 0x5e9d5c:goto L5e9d5c;
case 0x5e9d60:c.instructions+=2;goto B5e9d60;
case 0x5e9d64:c.instructions+=1;goto B5e9d64;
case 0x5e9d69:goto L5e9d69;
case 0x5e9d6e:c.instructions+=1;goto B5e9d6e;
case 0x5e9d70:goto L5e9d70;
case 0x5e9d73:c.instructions+=4;goto B5e9d73;
case 0x5e9d76:c.instructions+=3;goto B5e9d76;
case 0x5e9d78:c.instructions+=2;goto B5e9d78;
case 0x5e9d7e:c.instructions+=1;goto B5e9d7e;
case 0x5e9d80:goto L5e9d80;
case 0x5e9d85:c.instructions+=1;goto B5e9d85;
case 0x5e9d87:goto L5e9d87;
case 0x5e9d8a:c.instructions+=4;goto B5e9d8a;
case 0x5e9d8d:c.instructions+=3;goto B5e9d8d;
case 0x5e9d8f:c.instructions+=2;goto B5e9d8f;
case 0x5e9d92:c.instructions+=1;goto B5e9d92;
case 0x5e9d94:goto L5e9d94;
case 0x5e9d97:c.instructions+=2;goto B5e9d97;
case 0x5e9d99:c.instructions+=1;goto B5e9d99;
case 0x5e9da0:goto L5e9da0;
case 0x5e9da3:c.instructions+=7;goto B5e9da3;
case 0x5e9da5:c.instructions+=6;goto B5e9da5;
case 0x5e9da8:c.instructions+=5;goto B5e9da8;
case 0x5e9dab:c.instructions+=4;goto B5e9dab;
case 0x5e9dad:c.instructions+=3;goto B5e9dad;
case 0x5e9db0:c.instructions+=2;goto B5e9db0;
case 0x5e9db1:c.instructions+=1;goto B5e9db1;
case 0x5e9db3:goto L5e9db3;
case 0x5e9db5:goto L5e9db5;
case 0x5e9dba:c.instructions+=1;goto B5e9dba;
case 0x5e9dbc:goto L5e9dbc;
case 0x5e9dbf:c.instructions+=9;goto B5e9dbf;
case 0x5e9dc4:c.instructions+=8;goto B5e9dc4;
case 0x5e9dc6:c.instructions+=7;goto B5e9dc6;
case 0x5e9dc8:c.instructions+=6;goto B5e9dc8;
case 0x5e9dca:c.instructions+=5;goto B5e9dca;
case 0x5e9dcc:c.instructions+=4;goto B5e9dcc;
case 0x5e9dcf:c.instructions+=3;goto B5e9dcf;
case 0x5e9dd1:c.instructions+=2;goto B5e9dd1;
case 0x5e9dd4:c.instructions+=1;goto B5e9dd4;
case 0x5e9dd6:goto L5e9dd6;
case 0x5e9dd8:c.instructions+=3;goto B5e9dd8;
case 0x5e9ddb:c.instructions+=2;goto B5e9ddb;
case 0x5e9ddd:c.instructions+=1;goto B5e9ddd;
case 0x5e9de0:goto L5e9de0;
case 0x5e9de3:c.instructions+=7;goto B5e9de3;
case 0x5e9de5:c.instructions+=6;goto B5e9de5;
case 0x5e9de8:c.instructions+=5;goto B5e9de8;
case 0x5e9deb:c.instructions+=4;goto B5e9deb;
case 0x5e9ded:c.instructions+=3;goto B5e9ded;
case 0x5e9df0:c.instructions+=2;goto B5e9df0;
case 0x5e9df1:c.instructions+=1;goto B5e9df1;
case 0x5e9df3:goto L5e9df3;
case 0x5e9df6:c.instructions+=5;goto B5e9df6;
case 0x5e9dfa:c.instructions+=4;goto B5e9dfa;
case 0x5e9dfe:c.instructions+=3;goto B5e9dfe;
case 0x5e9e00:c.instructions+=2;goto B5e9e00;
case 0x5e9e04:c.instructions+=1;goto B5e9e04;
case 0x5e9e0a:goto L5e9e0a;
case 0x5e9e0b:c.instructions+=1;goto B5e9e0b;
case 0x5e9e0c:goto L5e9e0c;
case 0x5e9e11:c.instructions+=3;goto B5e9e11;
case 0x5e9e13:c.instructions+=2;goto B5e9e13;
case 0x5e9e14:c.instructions+=1;goto B5e9e14;
case 0x5e9e16:goto L5e9e16;
case 0x5e9e1b:goto L5e9e1b;
case 0x5e9e1e:c.instructions+=6;goto B5e9e1e;
case 0x5e9e23:c.instructions+=5;goto B5e9e23;
case 0x5e9e28:c.instructions+=4;goto B5e9e28;
case 0x5e9e2d:c.instructions+=3;goto B5e9e2d;
case 0x5e9e2f:c.instructions+=2;goto B5e9e2f;
case 0x5e9e36:c.instructions+=1;goto B5e9e36;
case 0x5e9e38:goto L5e9e38;
case 0x5e9e3d:c.instructions+=2;goto B5e9e3d;
case 0x5e9e3f:c.instructions+=1;goto B5e9e3f;
case 0x5e9e41:goto L5e9e41;
case 0x5e9e45:c.instructions+=3;goto B5e9e45;
case 0x5e9e46:c.instructions+=2;goto B5e9e46;
case 0x5e9e4b:c.instructions+=1;goto B5e9e4b;
case 0x5e9e50:goto L5e9e50;
case 0x5e9e52:c.instructions+=1;goto B5e9e52;
case 0x5e9e54:goto L5e9e54;
case 0x5e9e58:c.instructions+=3;goto B5e9e58;
case 0x5e9e59:c.instructions+=2;goto B5e9e59;
case 0x5e9e5e:c.instructions+=1;goto B5e9e5e;
case 0x5e9e63:goto L5e9e63;
case 0x5e9e68:c.instructions+=3;goto B5e9e68;
case 0x5e9e69:c.instructions+=2;goto B5e9e69;
case 0x5e9e6c:c.instructions+=1;goto B5e9e6c;
case 0x5e9e6f:goto L5e9e6f;
case 0x5e9e71:c.instructions+=3;goto B5e9e71;
case 0x5e9e72:c.instructions+=2;goto B5e9e72;
case 0x5e9e75:c.instructions+=1;goto B5e9e75;
case 0x5e9e80:goto L5e9e80;
case 0x5e9e81:c.instructions+=2;goto B5e9e81;
case 0x5e9e82:c.instructions+=1;goto B5e9e82;
case 0x5e9e87:goto L5e9e87;
case 0x5e9e8b:c.instructions+=3;goto B5e9e8b;
case 0x5e9e8c:c.instructions+=2;goto B5e9e8c;
case 0x5e9e91:c.instructions+=1;goto B5e9e91;
case 0x5e9e96:goto L5e9e96;
case 0x5e9e99:c.instructions+=2;goto B5e9e99;
case 0x5e9e9b:c.instructions+=1;goto B5e9e9b;
case 0x5e9e9d:goto L5e9e9d;
case 0x5e9ea3:c.instructions+=2;goto B5e9ea3;
case 0x5e9ea5:c.instructions+=1;goto B5e9ea5;
case 0x5e9ea7:goto L5e9ea7;
case 0x5e9eac:c.instructions+=1;goto B5e9eac;
case 0x5e9eae:goto L5e9eae;
case 0x5e9eb0:c.instructions+=1;goto B5e9eb0;
case 0x5e9eb2:goto L5e9eb2;
case 0x5e9eb7:c.instructions+=1;goto B5e9eb7;
case 0x5e9eb9:goto L5e9eb9;
case 0x5e9ebb:c.instructions+=1;goto B5e9ebb;
case 0x5e9ebd:goto L5e9ebd;
case 0x5e9ebf:c.instructions+=1;goto B5e9ebf;
case 0x5e9ec1:goto L5e9ec1;
case 0x5e9ec3:c.instructions+=1;goto B5e9ec3;
case 0x5e9ec5:goto L5e9ec5;
case 0x5e9eca:c.instructions+=1;goto B5e9eca;
case 0x5e9ecc:goto L5e9ecc;
case 0x5e9ecf:c.instructions+=1;goto B5e9ecf;
case 0x5e9ed1:goto L5e9ed1;
case 0x5e9ed6:c.instructions+=1;goto B5e9ed6;
case 0x5e9ed8:goto L5e9ed8;
case 0x5e9edb:c.instructions+=1;goto B5e9edb;
case 0x5e9edd:goto L5e9edd;
case 0x5e9ee2:c.instructions+=1;goto B5e9ee2;
case 0x5e9ee4:goto L5e9ee4;
case 0x5e9ee7:c.instructions+=1;goto B5e9ee7;
case 0x5e9ee9:goto L5e9ee9;
case 0x5e9eef:c.instructions+=1;goto B5e9eef;
case 0x5e9ef5:goto L5e9ef5;
case 0x5e9efb:c.instructions+=2;goto B5e9efb;
case 0x5e9efd:c.instructions+=1;goto B5e9efd;
case 0x5e9eff:goto L5e9eff;
case 0x5e9f04:goto L5e9f04;
case 0x5e9f06:c.instructions+=4;goto B5e9f06;
case 0x5e9f08:c.instructions+=3;goto B5e9f08;
case 0x5e9f0b:c.instructions+=2;goto B5e9f0b;
case 0x5e9f0e:c.instructions+=1;goto B5e9f0e;
case 0x5e9f10:goto L5e9f10;
case 0x5e9f15:c.instructions+=3;goto B5e9f15;
case 0x5e9f17:c.instructions+=2;goto B5e9f17;
case 0x5e9f1d:c.instructions+=1;goto B5e9f1d;
case 0x5e9f1f:goto L5e9f1f;
case 0x5e9f26:c.instructions+=1;goto B5e9f26;
case 0x5e9f2c:goto L5e9f2c;
case 0x5e9f31:c.instructions+=1;goto B5e9f31;
case 0x5e9f36:goto L5e9f36;
case 0x5e9f3b:c.instructions+=1;goto B5e9f3b;
case 0x5e9f40:goto L5e9f40;
case 0x5e9f45:c.instructions+=1;goto B5e9f45;
case 0x5e9f4a:goto L5e9f4a;
case 0x5e9f4f:c.instructions+=2;goto B5e9f4f;
case 0x5e9f51:c.instructions+=1;goto B5e9f51;
case 0x5e9f53:goto L5e9f53;
case 0x5e9f58:goto L5e9f58;
case 0x5e9f59:c.instructions+=2;goto B5e9f59;
case 0x5e9f5a:c.instructions+=1;goto B5e9f5a;
case 0x5e9f5f:goto L5e9f5f;
case 0x5e9f61:c.instructions+=1;goto B5e9f61;
case 0x5e9f66:goto L5e9f66;
case 0x5e9f6c:c.instructions+=2;goto B5e9f6c;
case 0x5e9f71:c.instructions+=1;goto B5e9f71;
case 0x5e9f76:goto L5e9f76;
case 0x5e9f7b:c.instructions+=1;goto B5e9f7b;
case 0x5e9f80:goto L5e9f80;
case 0x5e9f85:c.instructions+=2;goto B5e9f85;
case 0x5e9f87:c.instructions+=1;goto B5e9f87;
case 0x5e9f89:goto L5e9f89;
case 0x5e9f90:goto L5e9f90;
case 0x5e9f95:goto L5e9f95;
case 0x5e9f97:c.instructions+=1;goto B5e9f97;
case 0x5e9f9c:goto L5e9f9c;
case 0x5e9f9e:c.instructions+=1;goto B5e9f9e;
case 0x5e9fa3:goto L5e9fa3;
case 0x5e9fa5:c.instructions+=1;goto B5e9fa5;
case 0x5e9fa7:goto L5e9fa7;
case 0x5e9fac:goto L5e9fac;
case 0x5e9fae:goto L5e9fae;
case 0x5e9fb3:c.instructions+=1;goto B5e9fb3;
case 0x5e9fb8:goto L5e9fb8;
case 0x5e9fbd:goto L5e9fbd;
case 0x5e9fbf:c.instructions+=1;goto B5e9fbf;
case 0x5e9fc1:goto L5e9fc1;
case 0x5e9fc6:c.instructions+=1;goto B5e9fc6;
case 0x5e9fcb:goto L5e9fcb;
case 0x5e9fd1:c.instructions+=5;goto B5e9fd1;
case 0x5e9fd6:c.instructions+=4;goto B5e9fd6;
case 0x5e9fd7:c.instructions+=3;goto B5e9fd7;
case 0x5e9fd8:c.instructions+=2;goto B5e9fd8;
case 0x5e9fdd:c.instructions+=1;goto B5e9fdd;
case 0x5e9fe2:goto L5e9fe2;
case 0x5e9fe7:c.instructions+=1;goto B5e9fe7;
case 0x5e9fec:goto L5e9fec;
case 0x5e9ff1:goto L5e9ff1;
case 0x5e9ff3:c.instructions+=1;goto B5e9ff3;
case 0x5e9ff8:goto L5e9ff8;
case 0x5e9ffe:c.instructions+=1;goto B5e9ffe;
default:missing_instruction(c.pc);}
B5e9000:L5e9000:{c.instructions+=2;NFSU2_TR(0x5e9000);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5e9001:{NFSU2_TR(0x5e9001);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e8ff2u,5e8);}
}
B5e9003:L5e9003:{c.instructions+=2;NFSU2_TR(0x5e9003);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9005:{NFSU2_TR(0x5e9005);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9049;}}
}
B5e9007:L5e9007:{c.instructions+=3;NFSU2_TR(0x5e9007);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e900b:{NFSU2_TR(0x5e900b);
__builtin_memmove((R+12),(R+20),4);
}
B5e900d:{NFSU2_TR(0x5e900d);
__builtin_memmove((R+4),(R+4),4);
}
B5e9010:L5e9010:{c.instructions+=3;NFSU2_TR(0x5e9010);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9011:{NFSU2_TR(0x5e9011);
__builtin_memmove((R+4),(R+24),4);
}
B5e9013:{NFSU2_TR(0x5e9013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9018ull));
TAIL_STATIC(0x5e5aa0u,5e5);
}
B5e9018:L5e9018:{c.instructions+=3;NFSU2_TR(0x5e9018);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e901e:{NFSU2_TR(0x5e901e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5e901f:{NFSU2_TR(0x5e901f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9010u);}goto L5e9010;}}
}
B5e9021:L5e9021:{c.instructions+=2;NFSU2_TR(0x5e9021);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9023:{NFSU2_TR(0x5e9023);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9049;}}
}
B5e9025:L5e9025:{c.instructions+=3;NFSU2_TR(0x5e9025);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e9029:{NFSU2_TR(0x5e9029);
__builtin_memmove((R+12),(R+20),4);
}
B5e902b:{NFSU2_TR(0x5e902b);
{goto L5e9030;}
}
B5e9030:L5e9030:{c.instructions+=3;NFSU2_TR(0x5e9030);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9031:{NFSU2_TR(0x5e9031);
__builtin_memmove((R+4),(R+24),4);
}
B5e9033:{NFSU2_TR(0x5e9033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9038ull));
TAIL_STATIC(0x5d4ad0u,5d4);
}
B5e9038:L5e9038:{c.instructions+=3;NFSU2_TR(0x5e9038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9039:{NFSU2_TR(0x5e9039);
__builtin_memmove((R+4),(R+24),4);
}
B5e903b:{NFSU2_TR(0x5e903b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9040ull));
TAIL_STATIC(0x5d8f00u,5d8);
}
B5e9040:L5e9040:{c.instructions+=3;NFSU2_TR(0x5e9040);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e9046:{NFSU2_TR(0x5e9046);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5e9047:{NFSU2_TR(0x5e9047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9030u);}goto L5e9030;}}
}
B5e9049:L5e9049:{c.instructions+=4;NFSU2_TR(0x5e9049);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e904b:{NFSU2_TR(0x5e904b);
__builtin_memmove((R+0),gp(0x7a478c),4);
}
B5e9050:{NFSU2_TR(0x5e9050);
__builtin_memmove(gp(0x876d24),(R+0),4);
}
B5e9055:{NFSU2_TR(0x5e9055);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9071;}}
}
B5e9057:L5e9057:{c.instructions+=3;NFSU2_TR(0x5e9057);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e905b:{NFSU2_TR(0x5e905b);
__builtin_memmove((R+12),(R+20),4);
}
B5e905d:{NFSU2_TR(0x5e905d);
__builtin_memmove((R+4),(R+4),4);
}
B5e9060:L5e9060:{c.instructions+=3;NFSU2_TR(0x5e9060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9061:{NFSU2_TR(0x5e9061);
__builtin_memmove((R+4),(R+24),4);
}
B5e9063:{NFSU2_TR(0x5e9063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9068ull));
TAIL_STATIC(0x5e5aa0u,5e5);
}
B5e9068:L5e9068:{c.instructions+=3;NFSU2_TR(0x5e9068);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e906e:{NFSU2_TR(0x5e906e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5e906f:{NFSU2_TR(0x5e906f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9060u);}goto L5e9060;}}
}
B5e9071:L5e9071:{c.instructions+=3;NFSU2_TR(0x5e9071);
w1(R+12,u8(0x1ull));
}
B5e9073:{NFSU2_TR(0x5e9073);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e907b:{NFSU2_TR(0x5e907b);
{goto L5e9080;}
}
B5e9080:L5e9080:{c.instructions+=2;NFSU2_TR(0x5e9080);
u8 U[22];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
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
B5e9085:{NFSU2_TR(0x5e9085);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e92d1;}}
}
B5e908b:L5e908b:{c.instructions+=1;NFSU2_TR(0x5e908b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9090ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e9090:L5e9090:{c.instructions+=5;NFSU2_TR(0x5e9090);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5e9095:{NFSU2_TR(0x5e9095);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e9097:{NFSU2_TR(0x5e9097);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9099:{NFSU2_TR(0x5e9099);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e909d:{NFSU2_TR(0x5e909d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e9240;}}
}
B5e90a3:L5e90a3:{c.instructions+=3;NFSU2_TR(0x5e90a3);
__builtin_memmove((R+24),gp(0x883db0),4);
}
B5e90a9:{NFSU2_TR(0x5e90a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e90ad:{NFSU2_TR(0x5e90ad);
__builtin_memmove((R+4),(R+4),4);
}
B5e90b0:L5e90b0:{c.instructions+=6;NFSU2_TR(0x5e90b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e90b4:{NFSU2_TR(0x5e90b4);
__builtin_memmove((R+4),(R+0),1);
}
B5e90b6:{NFSU2_TR(0x5e90b6);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e90b9:{NFSU2_TR(0x5e90b9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e90bc:{NFSU2_TR(0x5e90bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e90c0:{NFSU2_TR(0x5e90c0);
if(r1(R+518)){{goto L5e921e;}}
}
B5e90c6:L5e90c6:{c.instructions+=2;NFSU2_TR(0x5e90c6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e90c9:{NFSU2_TR(0x5e90c9);
if(r1(R+518)){{goto L5e921e;}}
}
B5e90cf:L5e90cf:{c.instructions+=4;NFSU2_TR(0x5e90cf);
__builtin_memmove((R+4),(R+0),4);
}
B5e90d1:{NFSU2_TR(0x5e90d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e90d4:{NFSU2_TR(0x5e90d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e90d7:{NFSU2_TR(0x5e90d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e90dd:L5e90dd:{c.instructions+=3;NFSU2_TR(0x5e90dd);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B5e90e2:{NFSU2_TR(0x5e90e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e90e4:{NFSU2_TR(0x5e90e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e90ea:L5e90ea:{c.instructions+=3;NFSU2_TR(0x5e90ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e90f1:{NFSU2_TR(0x5e90f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e90f3:{NFSU2_TR(0x5e90f3);
if(r1(R+518)){{goto L5e921e;}}
}
B5e90f9:L5e90f9:{c.instructions+=5;NFSU2_TR(0x5e90f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e90fc:{NFSU2_TR(0x5e90fc);
__builtin_memmove((R+8),(R+20),4);
}
B5e90fe:{NFSU2_TR(0x5e90fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e9101:{NFSU2_TR(0x5e9101);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9104:{NFSU2_TR(0x5e9104);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e910a:L5e910a:{c.instructions+=4;NFSU2_TR(0x5e910a);
__builtin_memmove((R+8),(R+20),4);
}
B5e910c:{NFSU2_TR(0x5e910c);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e910f:{NFSU2_TR(0x5e910f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9112:{NFSU2_TR(0x5e9112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e9118:L5e9118:{c.instructions+=3;NFSU2_TR(0x5e9118);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5e911d:{NFSU2_TR(0x5e911d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9121:{NFSU2_TR(0x5e9121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e912a;}}
}
B5e9123:L5e9123:{c.instructions+=2;NFSU2_TR(0x5e9123);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e9128:{NFSU2_TR(0x5e9128);
{goto L5e912f;}
}
B5e912a:L5e912a:{c.instructions+=1;NFSU2_TR(0x5e912a);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5e912f:L5e912f:{c.instructions+=3;NFSU2_TR(0x5e912f);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e9132:{NFSU2_TR(0x5e9132);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9134:{NFSU2_TR(0x5e9134);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e913a:L5e913a:{c.instructions+=3;NFSU2_TR(0x5e913a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e9141:{NFSU2_TR(0x5e9141);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9143:{NFSU2_TR(0x5e9143);
if(r1(R+518)){{goto L5e921e;}}
}
B5e9149:L5e9149:{c.instructions+=5;NFSU2_TR(0x5e9149);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e914c:{NFSU2_TR(0x5e914c);
__builtin_memmove((R+8),(R+20),4);
}
B5e914e:{NFSU2_TR(0x5e914e);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e9151:{NFSU2_TR(0x5e9151);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9154:{NFSU2_TR(0x5e9154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e915a:L5e915a:{c.instructions+=4;NFSU2_TR(0x5e915a);
__builtin_memmove((R+8),(R+20),4);
}
B5e915c:{NFSU2_TR(0x5e915c);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e915f:{NFSU2_TR(0x5e915f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9162:{NFSU2_TR(0x5e9162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e921e;}}
}
B5e9168:L5e9168:{c.instructions+=3;NFSU2_TR(0x5e9168);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5e916d:{NFSU2_TR(0x5e916d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9171:{NFSU2_TR(0x5e9171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e917a;}}
}
B5e9173:L5e9173:{c.instructions+=2;NFSU2_TR(0x5e9173);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e9178:{NFSU2_TR(0x5e9178);
{goto L5e917f;}
}
B5e917a:L5e917a:{c.instructions+=1;NFSU2_TR(0x5e917a);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5e917f:L5e917f:{c.instructions+=3;NFSU2_TR(0x5e917f);
w4(R+20,u32(s32(s16(r2(R+8)))));
}
B5e9182:{NFSU2_TR(0x5e9182);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9184:{NFSU2_TR(0x5e9184);
if(r1(R+518)){{goto L5e921e;}}
}
B5e918a:L5e918a:{c.instructions+=12;NFSU2_TR(0x5e918a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e918e:{NFSU2_TR(0x5e918e);
u8 U[14];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+24),(U+12),2);
}
B5e9193:{NFSU2_TR(0x5e9193);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9197:{NFSU2_TR(0x5e9197);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e919a:{NFSU2_TR(0x5e919a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e919e:{NFSU2_TR(0x5e919e);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B5e91a1:{NFSU2_TR(0x5e91a1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5e91a3:{NFSU2_TR(0x5e91a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e91a7:{NFSU2_TR(0x5e91a7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5e91ad:{NFSU2_TR(0x5e91ad);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5e91af:{NFSU2_TR(0x5e91af);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e91b2:{NFSU2_TR(0x5e91b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e91b8;}}
}
B5e91b4:L5e91b4:{c.instructions+=2;NFSU2_TR(0x5e91b4);
__builtin_memmove((R+8),(R+24),4);
}
B5e91b6:{NFSU2_TR(0x5e91b6);
{goto L5e91c7;}
}
B5e91b8:L5e91b8:{c.instructions+=3;NFSU2_TR(0x5e91b8);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e91be:{NFSU2_TR(0x5e91be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e91c2:{NFSU2_TR(0x5e91c2);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5e91c7:L5e91c7:{c.instructions+=23;NFSU2_TR(0x5e91c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e91cb:{NFSU2_TR(0x5e91cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e91ce:{NFSU2_TR(0x5e91ce);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e91d1:{NFSU2_TR(0x5e91d1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5e91d3:{NFSU2_TR(0x5e91d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e91d7:{NFSU2_TR(0x5e91d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e91dd:{NFSU2_TR(0x5e91dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e91e1:{NFSU2_TR(0x5e91e1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5e91e3:{NFSU2_TR(0x5e91e3);
__builtin_memmove((R+8),(R+0),4);
}
B5e91e5:{NFSU2_TR(0x5e91e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e91e8:{NFSU2_TR(0x5e91e8);
w4(R+20,u32(r1(R+8)));
}
B5e91eb:{NFSU2_TR(0x5e91eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e91ee:{NFSU2_TR(0x5e91ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+20))));
}
B5e91f0:{NFSU2_TR(0x5e91f0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e91f3:{NFSU2_TR(0x5e91f3);
__builtin_memmove((R+8),(R+20),4);
}
B5e91f5:{NFSU2_TR(0x5e91f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e91f7:{NFSU2_TR(0x5e91f7);
__builtin_memmove((R+20),(R+0),4);
}
B5e91f9:{NFSU2_TR(0x5e91f9);
__builtin_memmove((R+0),gp(0x876d28),4);
}
B5e91fe:{NFSU2_TR(0x5e91fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e91ff:{NFSU2_TR(0x5e91ff);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B5e9202:{NFSU2_TR(0x5e9202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9203:{NFSU2_TR(0x5e9203);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9204:{NFSU2_TR(0x5e9204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9209ull));
TAIL_STATIC(0x5d8fc0u,5d8);
}
B5e9209:L5e9209:{c.instructions+=6;NFSU2_TR(0x5e9209);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e920b:{NFSU2_TR(0x5e920b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e920c:{NFSU2_TR(0x5e920c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e920d:{NFSU2_TR(0x5e920d);
__builtin_memmove((R+4),(R+24),4);
}
B5e920f:{NFSU2_TR(0x5e920f);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e9211:{NFSU2_TR(0x5e9211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9216ull));
TAIL_STATIC(0x5d9140u,5d9);
}
B5e9216:L5e9216:{c.instructions+=2;NFSU2_TR(0x5e9216);
__builtin_memmove((R+24),gp(0x883db0),4);
}
B5e921c:{NFSU2_TR(0x5e921c);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e921e:L5e921e:{c.instructions+=9;NFSU2_TR(0x5e921e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9222:{NFSU2_TR(0x5e9222);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9226:{NFSU2_TR(0x5e9226);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B5e922c:{NFSU2_TR(0x5e922c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e922d:{NFSU2_TR(0x5e922d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B5e9230:{NFSU2_TR(0x5e9230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5e9232:{NFSU2_TR(0x5e9232);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9236:{NFSU2_TR(0x5e9236);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e923a:{NFSU2_TR(0x5e923a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e90b0u);}goto L5e90b0;}}
}
B5e9240:L5e9240:{c.instructions+=3;NFSU2_TR(0x5e9240);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9244:{NFSU2_TR(0x5e9244);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9246:{NFSU2_TR(0x5e9246);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e927c;}}
}
B5e9248:L5e9248:{c.instructions+=3;NFSU2_TR(0x5e9248);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e924c:{NFSU2_TR(0x5e924c);
__builtin_memmove((R+20),(R+0),4);
}
B5e924e:{NFSU2_TR(0x5e924e);
__builtin_memmove((R+28),(R+28),4);
}
B5e9250:L5e9250:{c.instructions+=7;NFSU2_TR(0x5e9250);
__builtin_memmove((R+4),gp(0x876d28),4);
}
B5e9256:{NFSU2_TR(0x5e9256);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9258:{NFSU2_TR(0x5e9258);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9259:{NFSU2_TR(0x5e9259);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e925a:{NFSU2_TR(0x5e925a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e925c:{NFSU2_TR(0x5e925c);
__builtin_memmove((R+4),(R+24),4);
}
B5e925e:{NFSU2_TR(0x5e925e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9263ull));
TAIL_STATIC(0x5d8fc0u,5d8);
}
B5e9263:L5e9263:{c.instructions+=6;NFSU2_TR(0x5e9263);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9265:{NFSU2_TR(0x5e9265);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9266:{NFSU2_TR(0x5e9266);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9268:{NFSU2_TR(0x5e9268);
__builtin_memmove((R+4),(R+24),4);
}
B5e926a:{NFSU2_TR(0x5e926a);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e926c:{NFSU2_TR(0x5e926c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9271ull));
TAIL_STATIC(0x5d9140u,5d9);
}
B5e9271:L5e9271:{c.instructions+=4;NFSU2_TR(0x5e9271);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e9273:{NFSU2_TR(0x5e9273);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e9279:{NFSU2_TR(0x5e9279);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e927a:{NFSU2_TR(0x5e927a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9250u);}goto L5e9250;}}
}
B5e927c:L5e927c:{c.instructions+=4;NFSU2_TR(0x5e927c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9280:{NFSU2_TR(0x5e9280);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B5e9281:{NFSU2_TR(0x5e9281);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9283:{NFSU2_TR(0x5e9283);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e92c0;}}
}
B5e9285:L5e9285:{c.instructions+=5;NFSU2_TR(0x5e9285);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9289:{NFSU2_TR(0x5e9289);
__builtin_memmove((R+24),(R+20),4);
}
B5e928b:{NFSU2_TR(0x5e928b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e9291:{NFSU2_TR(0x5e9291);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e9293:{NFSU2_TR(0x5e9293);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e9294:L5e9294:{c.instructions+=7;NFSU2_TR(0x5e9294);
__builtin_memmove((R+8),gp(0x876d28),4);
}
B5e929a:{NFSU2_TR(0x5e929a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e929c:{NFSU2_TR(0x5e929c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e929d:{NFSU2_TR(0x5e929d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e929e:{NFSU2_TR(0x5e929e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e92a0:{NFSU2_TR(0x5e92a0);
__builtin_memmove((R+4),(R+24),4);
}
B5e92a2:{NFSU2_TR(0x5e92a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e92a7ull));
TAIL_STATIC(0x5d8fc0u,5d8);
}
B5e92a7:L5e92a7:{c.instructions+=6;NFSU2_TR(0x5e92a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e92a9:{NFSU2_TR(0x5e92a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e92aa:{NFSU2_TR(0x5e92aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e92ac:{NFSU2_TR(0x5e92ac);
__builtin_memmove((R+4),(R+24),4);
}
B5e92ae:{NFSU2_TR(0x5e92ae);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e92b0:{NFSU2_TR(0x5e92b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e92b5ull));
TAIL_STATIC(0x5d9140u,5d9);
}
B5e92b5:L5e92b5:{c.instructions+=4;NFSU2_TR(0x5e92b5);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e92b7:{NFSU2_TR(0x5e92b7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x190ull))));
}
B5e92bd:{NFSU2_TR(0x5e92bd);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e92be:{NFSU2_TR(0x5e92be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9294u);}goto L5e9294;}}
}
B5e92c0:L5e92c0:{c.instructions+=5;NFSU2_TR(0x5e92c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e92c4:{NFSU2_TR(0x5e92c4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e92c5:{NFSU2_TR(0x5e92c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e92c7:{NFSU2_TR(0x5e92c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e92cb:{NFSU2_TR(0x5e92cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9080u);}goto L5e9080;}}
}
B5e92d1:L5e92d1:{c.instructions+=3;NFSU2_TR(0x5e92d1);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e92d6:{NFSU2_TR(0x5e92d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e92d8:{NFSU2_TR(0x5e92d8);
if(r1(R+518)){{goto L5e95fe;}}
}
B5e92de:L5e92de:{c.instructions+=5;NFSU2_TR(0x5e92de);
__builtin_memmove((R+8),gp(0x883da4),4);
}
B5e92e4:{NFSU2_TR(0x5e92e4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e92e6:{NFSU2_TR(0x5e92e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e92e8:{NFSU2_TR(0x5e92e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e92ea:{NFSU2_TR(0x5e92ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9316;}}
}
B5e92ec:L5e92ec:{c.instructions+=3;NFSU2_TR(0x5e92ec);
__builtin_memmove((R+4),gp(0x883da0),4);
}
B5e92f2:{NFSU2_TR(0x5e92f2);
__builtin_memmove((R+24),gp(0x88f2c0),4);
}
B5e92f8:{NFSU2_TR(0x5e92f8);
{goto L5e9300;}
}
B5e9300:L5e9300:{c.instructions+=3;NFSU2_TR(0x5e9300);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B5e9307:{NFSU2_TR(0x5e9307);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9309:{NFSU2_TR(0x5e9309);
if(r1(R+518)){{goto L5e9318;}}
}
B5e930b:L5e930b:{c.instructions+=4;NFSU2_TR(0x5e930b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e930c:{NFSU2_TR(0x5e930c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x128ull))));
}
B5e9312:{NFSU2_TR(0x5e9312);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9314:{NFSU2_TR(0x5e9314);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9300u);}goto L5e9300;}}
}
B5e9316:L5e9316:{c.instructions+=1;NFSU2_TR(0x5e9316);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e9318:L5e9318:{c.instructions+=2;NFSU2_TR(0x5e9318);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5e931f:{NFSU2_TR(0x5e931f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95fe;}}
}
B5e9325:L5e9325:{c.instructions+=3;NFSU2_TR(0x5e9325);
u8 U[14];
__builtin_memmove((U+6),gp(0x883db4),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e932b:{NFSU2_TR(0x5e932b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e932f:{NFSU2_TR(0x5e932f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e95fe;}}
}
B5e9335:L5e9335:{c.instructions+=2;NFSU2_TR(0x5e9335);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9339:{NFSU2_TR(0x5e9339);
__builtin_memmove((R+16),(R+16),4);
}
B5e9340:L5e9340:{c.instructions+=1;NFSU2_TR(0x5e9340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9345ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e9345:L5e9345:{c.instructions+=9;NFSU2_TR(0x5e9345);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9349:{NFSU2_TR(0x5e9349);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e934f:{NFSU2_TR(0x5e934f);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e9353:{NFSU2_TR(0x5e9353);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9357:{NFSU2_TR(0x5e9357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e9359:{NFSU2_TR(0x5e9359);
__builtin_memmove((R+12),(R+0),1);
}
B5e935b:{NFSU2_TR(0x5e935b);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5e935e:{NFSU2_TR(0x5e935e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e9361:{NFSU2_TR(0x5e9361);
if(r1(R+518)){{goto L5e9370;}}
}
B5e9363:L5e9363:{c.instructions+=2;NFSU2_TR(0x5e9363);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9365:{NFSU2_TR(0x5e9365);
if(r1(R+518)){{goto L5e9370;}}
}
B5e9367:L5e9367:{c.instructions+=2;NFSU2_TR(0x5e9367);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e936a:{NFSU2_TR(0x5e936a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e9370:L5e9370:{c.instructions+=8;NFSU2_TR(0x5e9370);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9374:{NFSU2_TR(0x5e9374);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e937a:{NFSU2_TR(0x5e937a);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B5e937f:{NFSU2_TR(0x5e937f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9383:{NFSU2_TR(0x5e9383);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5e9386:{NFSU2_TR(0x5e9386);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9388:{NFSU2_TR(0x5e9388);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e938c:{NFSU2_TR(0x5e938c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e9392:L5e9392:{c.instructions+=4;NFSU2_TR(0x5e9392);
__builtin_memmove((R+8),(R+4),4);
}
B5e9394:{NFSU2_TR(0x5e9394);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e939b:{NFSU2_TR(0x5e939b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e939d:{NFSU2_TR(0x5e939d);
if(r1(R+518)){{goto L5e95dc;}}
}
B5e93a3:L5e93a3:{c.instructions+=5;NFSU2_TR(0x5e93a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e93a6:{NFSU2_TR(0x5e93a6);
__builtin_memmove((R+8),(R+4),4);
}
B5e93a8:{NFSU2_TR(0x5e93a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e93ab:{NFSU2_TR(0x5e93ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e93ae:{NFSU2_TR(0x5e93ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e93b4:L5e93b4:{c.instructions+=3;NFSU2_TR(0x5e93b4);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e93b7:{NFSU2_TR(0x5e93b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e93ba:{NFSU2_TR(0x5e93ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e93c0:L5e93c0:{c.instructions+=2;NFSU2_TR(0x5e93c0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e93c3:{NFSU2_TR(0x5e93c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e93cb;}}
}
B5e93c5:L5e93c5:{c.instructions+=2;NFSU2_TR(0x5e93c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e93c9:{NFSU2_TR(0x5e93c9);
{goto L5e93da;}
}
B5e93cb:L5e93cb:{c.instructions+=3;NFSU2_TR(0x5e93cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e93cf:{NFSU2_TR(0x5e93cf);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e93d5:{NFSU2_TR(0x5e93d5);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B5e93da:L5e93da:{c.instructions+=3;NFSU2_TR(0x5e93da);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5e93dd:{NFSU2_TR(0x5e93dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e93df:{NFSU2_TR(0x5e93df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e93e5:L5e93e5:{c.instructions+=3;NFSU2_TR(0x5e93e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e93ec:{NFSU2_TR(0x5e93ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e93ee:{NFSU2_TR(0x5e93ee);
if(r1(R+518)){{goto L5e95dc;}}
}
B5e93f4:L5e93f4:{c.instructions+=5;NFSU2_TR(0x5e93f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e93f7:{NFSU2_TR(0x5e93f7);
__builtin_memmove((R+8),(R+4),4);
}
B5e93f9:{NFSU2_TR(0x5e93f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e93fc:{NFSU2_TR(0x5e93fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e93ff:{NFSU2_TR(0x5e93ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e9405:L5e9405:{c.instructions+=3;NFSU2_TR(0x5e9405);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e9408:{NFSU2_TR(0x5e9408);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e940b:{NFSU2_TR(0x5e940b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e9411:L5e9411:{c.instructions+=3;NFSU2_TR(0x5e9411);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9415:{NFSU2_TR(0x5e9415);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9417:{NFSU2_TR(0x5e9417);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e9422;}}
}
B5e9419:L5e9419:{c.instructions+=2;NFSU2_TR(0x5e9419);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9420:{NFSU2_TR(0x5e9420);
{goto L5e9424;}
}
B5e9422:L5e9422:{c.instructions+=1;NFSU2_TR(0x5e9422);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e9424:L5e9424:{c.instructions+=9;NFSU2_TR(0x5e9424);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e9428:{NFSU2_TR(0x5e9428);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e942e:{NFSU2_TR(0x5e942e);
u8 U[14];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e9433:{NFSU2_TR(0x5e9433);
w4(R+20,u32(s32(s16(r2(R+8)))));
}
B5e9436:{NFSU2_TR(0x5e9436);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5e9439:{NFSU2_TR(0x5e9439);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e943c:{NFSU2_TR(0x5e943c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9440:{NFSU2_TR(0x5e9440);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5e9447:{NFSU2_TR(0x5e9447);
if(r1(R+518)){{goto L5e9469;}}
}
B5e9449:L5e9449:{c.instructions+=3;NFSU2_TR(0x5e9449);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e944f:{NFSU2_TR(0x5e944f);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5e9454:{NFSU2_TR(0x5e9454);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B5e9459:L5e9459:{c.instructions+=3;NFSU2_TR(0x5e9459);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5e945c:{NFSU2_TR(0x5e945c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e945e:{NFSU2_TR(0x5e945e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e946f;}}
}
B5e9460:L5e9460:{c.instructions+=2;NFSU2_TR(0x5e9460);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9467:{NFSU2_TR(0x5e9467);
{goto L5e9471;}
}
B5e9469:L5e9469:{c.instructions+=2;NFSU2_TR(0x5e9469);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e946d:{NFSU2_TR(0x5e946d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9459u);}goto L5e9459;}
}
B5e946f:L5e946f:{c.instructions+=1;NFSU2_TR(0x5e946f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e9471:L5e9471:{c.instructions+=15;NFSU2_TR(0x5e9471);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e9474:{NFSU2_TR(0x5e9474);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e9477:{NFSU2_TR(0x5e9477);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e947e:{NFSU2_TR(0x5e947e);
__builtin_memmove((R+4),(R+0),4);
}
B5e9480:{NFSU2_TR(0x5e9480);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e9483:{NFSU2_TR(0x5e9483);
w4(R+4,u32(r1(R+4)));
}
B5e9486:{NFSU2_TR(0x5e9486);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e9489:{NFSU2_TR(0x5e9489);
__builtin_memmove((R+8),(R+4),4);
}
B5e948b:{NFSU2_TR(0x5e948b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B5e948d:{NFSU2_TR(0x5e948d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9490:{NFSU2_TR(0x5e9490);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B5e9493:{NFSU2_TR(0x5e9493);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e9496:{NFSU2_TR(0x5e9496);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9498:{NFSU2_TR(0x5e9498);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e949c:{NFSU2_TR(0x5e949c);
if(r1(R+518)){{goto L5e94a3;}}
}
B5e949e:L5e949e:{c.instructions+=2;NFSU2_TR(0x5e949e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e94a1:{NFSU2_TR(0x5e94a1);
{goto L5e94a6;}
}
B5e94a3:L5e94a3:{c.instructions+=1;NFSU2_TR(0x5e94a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e94a6:L5e94a6:{c.instructions+=3;NFSU2_TR(0x5e94a6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B5e94a9:{NFSU2_TR(0x5e94a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e94ab:{NFSU2_TR(0x5e94ab);
if(r1(R+518)){{goto L5e95dc;}}
}
B5e94b1:L5e94b1:{c.instructions+=3;NFSU2_TR(0x5e94b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e94b3:{NFSU2_TR(0x5e94b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e94b6:{NFSU2_TR(0x5e94b6);
if(r1(R+518)){{goto L5e94bd;}}
}
B5e94b8:L5e94b8:{c.instructions+=2;NFSU2_TR(0x5e94b8);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e94bb:{NFSU2_TR(0x5e94bb);
{goto L5e94c0;}
}
B5e94bd:L5e94bd:{c.instructions+=1;NFSU2_TR(0x5e94bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e94c0:L5e94c0:{c.instructions+=3;NFSU2_TR(0x5e94c0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e94c3:{NFSU2_TR(0x5e94c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e94c5:{NFSU2_TR(0x5e94c5);
if(r1(R+518)){{goto L5e95dc;}}
}
B5e94cb:L5e94cb:{c.instructions+=2;NFSU2_TR(0x5e94cb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e94ce:{NFSU2_TR(0x5e94ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e94d6;}}
}
B5e94d0:L5e94d0:{c.instructions+=2;NFSU2_TR(0x5e94d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e94d4:{NFSU2_TR(0x5e94d4);
{goto L5e94e5;}
}
B5e94d6:L5e94d6:{c.instructions+=3;NFSU2_TR(0x5e94d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e94da:{NFSU2_TR(0x5e94da);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e94e0:{NFSU2_TR(0x5e94e0);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5e94e5:L5e94e5:{c.instructions+=4;NFSU2_TR(0x5e94e5);
w4(R+24,u32(s32(s16(r2(R+0)))));
}
B5e94e8:{NFSU2_TR(0x5e94e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e94ec:{NFSU2_TR(0x5e94ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e94ee:{NFSU2_TR(0x5e94ee);
if(r1(R+518)){{goto L5e95dc;}}
}
B5e94f4:L5e94f4:{c.instructions+=10;NFSU2_TR(0x5e94f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e94f8:{NFSU2_TR(0x5e94f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e94fb:{NFSU2_TR(0x5e94fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e94ff:{NFSU2_TR(0x5e94ff);
w4(R+20,u32(s32(s16(r2(R+0)))));
}
B5e9502:{NFSU2_TR(0x5e9502);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B5e9504:{NFSU2_TR(0x5e9504);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9508:{NFSU2_TR(0x5e9508);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5e950e:{NFSU2_TR(0x5e950e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B5e9510:{NFSU2_TR(0x5e9510);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e9513:{NFSU2_TR(0x5e9513);
if(r1(R+518)){{goto L5e9524;}}
}
B5e9515:L5e9515:{c.instructions+=3;NFSU2_TR(0x5e9515);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9519:{NFSU2_TR(0x5e9519);
__builtin_memmove((R+12),gp(0x883db0),4);
}
B5e951f:{NFSU2_TR(0x5e951f);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5e9524:L5e9524:{c.instructions+=14;NFSU2_TR(0x5e9524);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9528:{NFSU2_TR(0x5e9528);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e952c:{NFSU2_TR(0x5e952c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e9530:{NFSU2_TR(0x5e9530);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e9533:{NFSU2_TR(0x5e9533);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e9535:{NFSU2_TR(0x5e9535);
__builtin_memmove((R+0),gp(0x7a4790),4);
}
B5e953a:{NFSU2_TR(0x5e953a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e9540:{NFSU2_TR(0x5e9540);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9541:{NFSU2_TR(0x5e9541);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9542:{NFSU2_TR(0x5e9542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9543:{NFSU2_TR(0x5e9543);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9544:{NFSU2_TR(0x5e9544);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9545:{NFSU2_TR(0x5e9545);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5e9547:{NFSU2_TR(0x5e9547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e954cull));
TAIL_STATIC(0x5ddde0u,5dd);
}
B5e954c:L5e954c:{c.instructions+=10;NFSU2_TR(0x5e954c);
__builtin_memmove((R+4),gp(0x7a4790),4);
}
B5e9552:{NFSU2_TR(0x5e9552);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9556:{NFSU2_TR(0x5e9556);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e955a:{NFSU2_TR(0x5e955a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e955b:{NFSU2_TR(0x5e955b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e955c:{NFSU2_TR(0x5e955c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e955d:{NFSU2_TR(0x5e955d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e955e:{NFSU2_TR(0x5e955e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e955f:{NFSU2_TR(0x5e955f);
__builtin_memmove((R+4),(R+24),4);
}
B5e9561:{NFSU2_TR(0x5e9561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9566ull));
TAIL_STATIC(0x5ddde0u,5dd);
}
B5e9566:L5e9566:{c.instructions+=4;NFSU2_TR(0x5e9566);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5e956b:{NFSU2_TR(0x5e956b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e956d:{NFSU2_TR(0x5e956d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e9571:{NFSU2_TR(0x5e9571);
if(r1(R+518)){{goto L5e95a1;}}
}
B5e9573:L5e9573:{c.instructions+=7;NFSU2_TR(0x5e9573);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9579:{NFSU2_TR(0x5e9579);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e957b:{NFSU2_TR(0x5e957b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e957d:{NFSU2_TR(0x5e957d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e957f:{NFSU2_TR(0x5e957f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e9581:{NFSU2_TR(0x5e9581);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e9584:{NFSU2_TR(0x5e9584);
if(r1(R+514)){{goto L5e958e;}}
}
B5e9586:L5e9586:{c.instructions+=2;NFSU2_TR(0x5e9586);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e958c:{NFSU2_TR(0x5e958c);
{goto L5e95a1;}
}
B5e958e:L5e958e:{c.instructions+=4;NFSU2_TR(0x5e958e);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e9594:{NFSU2_TR(0x5e9594);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e9596:{NFSU2_TR(0x5e9596);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9599:{NFSU2_TR(0x5e9599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95a1;}}
}
B5e959b:L5e959b:{c.instructions+=1;NFSU2_TR(0x5e959b);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e95a1:L5e95a1:{c.instructions+=7;NFSU2_TR(0x5e95a1);
{u32 ea_=u32(u32(8013716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e95a7:{NFSU2_TR(0x5e95a7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e95a9:{NFSU2_TR(0x5e95a9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e95ab:{NFSU2_TR(0x5e95ab);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e95ad:{NFSU2_TR(0x5e95ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e95af:{NFSU2_TR(0x5e95af);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e95b2:{NFSU2_TR(0x5e95b2);
if(r1(R+514)){{goto L5e95c4;}}
}
B5e95b4:L5e95b4:{c.instructions+=6;NFSU2_TR(0x5e95b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e95b8:{NFSU2_TR(0x5e95b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e95ba:{NFSU2_TR(0x5e95ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e95bc:{NFSU2_TR(0x5e95bc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff1ull))));
}
B5e95bf:{NFSU2_TR(0x5e95bf);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B5e95c2:{NFSU2_TR(0x5e95c2);
{goto L5e95da;}
}
B5e95c4:L5e95c4:{c.instructions+=4;NFSU2_TR(0x5e95c4);
{u32 ea_=u32(u32(8013716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e95ca:{NFSU2_TR(0x5e95ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e95cc:{NFSU2_TR(0x5e95cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e95cf:{NFSU2_TR(0x5e95cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e95dc;}}
}
B5e95d1:L5e95d1:{c.instructions+=3;NFSU2_TR(0x5e95d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e95d5:{NFSU2_TR(0x5e95d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e95d7:{NFSU2_TR(0x5e95d7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B5e95da:L5e95da:{c.instructions+=1;NFSU2_TR(0x5e95da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e95dc:L5e95dc:{c.instructions+=9;NFSU2_TR(0x5e95dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e95e0:{NFSU2_TR(0x5e95e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e95e4:{NFSU2_TR(0x5e95e4);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B5e95ea:{NFSU2_TR(0x5e95ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e95eb:{NFSU2_TR(0x5e95eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5e95ee:{NFSU2_TR(0x5e95ee);
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
B5e95f0:{NFSU2_TR(0x5e95f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e95f4:{NFSU2_TR(0x5e95f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e95f8:{NFSU2_TR(0x5e95f8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9340u);}goto L5e9340;}}
}
B5e95fe:L5e95fe:{c.instructions+=8;NFSU2_TR(0x5e95fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9602:{NFSU2_TR(0x5e9602);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x468cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9608:{NFSU2_TR(0x5e9608);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e960c:{NFSU2_TR(0x5e960c);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B5e960e:{NFSU2_TR(0x5e960e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x468cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9614:{NFSU2_TR(0x5e9614);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9618:{NFSU2_TR(0x5e9618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9619:{NFSU2_TR(0x5e9619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e961eull));
TAIL_STATIC(0x440540u,440);
}
B5e961e:L5e961e:{c.instructions+=6;NFSU2_TR(0x5e961e);
__builtin_memmove((R+24),gp(0x88f1a8),4);
}
B5e9624:{NFSU2_TR(0x5e9624);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9628:{NFSU2_TR(0x5e9628);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5e9629:{NFSU2_TR(0x5e9629);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e962a:{NFSU2_TR(0x5e962a);
__builtin_memmove(gp(0x88f1a8),(R+24),4);
}
B5e9630:{NFSU2_TR(0x5e9630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9635ull));
TAIL_STATIC(0x440540u,440);
}
B5e9635:L5e9635:{c.instructions+=10;NFSU2_TR(0x5e9635);
__builtin_memmove((R+0),gp(0x88f1a8),4);
}
B5e963a:{NFSU2_TR(0x5e963a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e963d:{NFSU2_TR(0x5e963d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e963e:{NFSU2_TR(0x5e963e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e963f:{NFSU2_TR(0x5e963f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5e9640:{NFSU2_TR(0x5e9640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9641:{NFSU2_TR(0x5e9641);
__builtin_memmove(gp(0x88f1a8),(R+0),4);
}
B5e9646:{NFSU2_TR(0x5e9646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9647:{NFSU2_TR(0x5e9647);
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
B5e964a:{NFSU2_TR(0x5e964a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e9650:L5e9650:{c.instructions+=10;NFSU2_TR(0x5e9650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9651:{NFSU2_TR(0x5e9651);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5e9654:{NFSU2_TR(0x5e9654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9655:{NFSU2_TR(0x5e9655);
__builtin_memmove((R+24),(R+4),4);
}
B5e9657:{NFSU2_TR(0x5e9657);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e965e:{NFSU2_TR(0x5e965e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9664:{NFSU2_TR(0x5e9664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e966a:{NFSU2_TR(0x5e966a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x289ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e9670:{NFSU2_TR(0x5e9670);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9672:{NFSU2_TR(0x5e9672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9698;}}
}
B5e9674:L5e9674:{c.instructions+=3;NFSU2_TR(0x5e9674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e967a:{NFSU2_TR(0x5e967a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e967c:{NFSU2_TR(0x5e967c);
if(r1(R+518)){{goto L5e9698;}}
}
B5e967e:L5e967e:{c.instructions+=3;NFSU2_TR(0x5e967e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e9682:{NFSU2_TR(0x5e9682);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9683:{NFSU2_TR(0x5e9683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9688ull));
TAIL_STATIC(0x5e5300u,5e5);
}
B5e9688:L5e9688:{c.instructions+=2;NFSU2_TR(0x5e9688);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e968a:{NFSU2_TR(0x5e968a);
if(r1(R+518)){{goto L5e9698;}}
}
B5e968c:L5e968c:{c.instructions+=4;NFSU2_TR(0x5e968c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9690:{NFSU2_TR(0x5e9690);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9691:{NFSU2_TR(0x5e9691);
__builtin_memmove((R+4),(R+24),4);
}
B5e9693:{NFSU2_TR(0x5e9693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9698ull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B5e9698:L5e9698:{c.instructions+=2;NFSU2_TR(0x5e9698);
__builtin_memmove((R+4),(R+24),4);
}
B5e969a:{NFSU2_TR(0x5e969a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e969full));
TAIL_STATIC(0x5e79d0u,5e7);
}
B5e969f:L5e969f:{c.instructions+=3;NFSU2_TR(0x5e969f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e96a0:{NFSU2_TR(0x5e96a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e96a1:{NFSU2_TR(0x5e96a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e96b0:L5e96b0:{c.instructions+=12;NFSU2_TR(0x5e96b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e96b1:{NFSU2_TR(0x5e96b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e96b5:{NFSU2_TR(0x5e96b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e96b8:{NFSU2_TR(0x5e96b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e96bb:{NFSU2_TR(0x5e96bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e96bc:{NFSU2_TR(0x5e96bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e96bd:{NFSU2_TR(0x5e96bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e96be:{NFSU2_TR(0x5e96be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e96bf:{NFSU2_TR(0x5e96bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5e96c2:{NFSU2_TR(0x5e96c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e96c3:{NFSU2_TR(0x5e96c3);
w4(R+4,u32(0x883e70ull));
}
B5e96c8:{NFSU2_TR(0x5e96c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e96cdull));
TAIL_STATIC(0x5e00d0u,5e0);
}
B5e96cd:L5e96cd:{c.instructions+=6;NFSU2_TR(0x5e96cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e96d1:{NFSU2_TR(0x5e96d1);
__builtin_memmove((R+12),(R+0),4);
}
B5e96d3:{NFSU2_TR(0x5e96d3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e96d5:{NFSU2_TR(0x5e96d5);
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
B5e96d7:{NFSU2_TR(0x5e96d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e96db:{NFSU2_TR(0x5e96db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9724;}}
}
B5e96dd:L5e96dd:{c.instructions+=3;NFSU2_TR(0x5e96dd);
__builtin_memmove((R+28),gp(0x88ead4),4);
}
B5e96e3:{NFSU2_TR(0x5e96e3);
w4(R+4,u32(0x88ead4ull));
}
B5e96e8:{NFSU2_TR(0x5e96e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e96edull));
TAIL_STATIC(0x502fd0u,502);
}
B5e96ed:L5e96ed:{c.instructions+=3;NFSU2_TR(0x5e96ed);
__builtin_memmove((R+12),(R+0),4);
}
B5e96ef:{NFSU2_TR(0x5e96ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e96f1:{NFSU2_TR(0x5e96f1);
if(r1(R+518)){{goto L5e98b6;}}
}
B5e96f7:L5e96f7:{c.instructions+=8;NFSU2_TR(0x5e96f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e96fa:{NFSU2_TR(0x5e96fa);
__builtin_memmove((R+0),(R+4),4);
}
B5e96fc:{NFSU2_TR(0x5e96fc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e96fd:{NFSU2_TR(0x5e96fd);
w4(R+20,u32(0x64ull));
}
B5e9702:{NFSU2_TR(0x5e9702);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9702);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9702);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e9704:{NFSU2_TR(0x5e9704);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9708:{NFSU2_TR(0x5e9708);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e970b:{NFSU2_TR(0x5e970b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9719;}}
}
B5e970d:L5e970d:{c.instructions+=2;NFSU2_TR(0x5e970d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e9711:{NFSU2_TR(0x5e9711);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9719;}}
}
B5e9713:L5e9713:{c.instructions+=2;NFSU2_TR(0x5e9713);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e9718:{NFSU2_TR(0x5e9718);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9719:L5e9719:{c.instructions+=3;NFSU2_TR(0x5e9719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e971b:{NFSU2_TR(0x5e971b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e971d:{NFSU2_TR(0x5e971d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e96f7u);}goto L5e96f7;}}
}
B5e971f:L5e971f:{c.instructions+=1;NFSU2_TR(0x5e971f);
{goto L5e98b6;}
}
B5e9724:L5e9724:{c.instructions+=2;NFSU2_TR(0x5e9724);
w4(R+0,u32(0xa28ull));
}
B5e9729:{NFSU2_TR(0x5e9729);
__builtin_memmove((R+16),(R+16),4);
}
B5e9730:L5e9730:{c.instructions+=3;NFSU2_TR(0x5e9730);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9737:{NFSU2_TR(0x5e9737);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9739:{NFSU2_TR(0x5e9739);
if(r1(R+518)){{goto L5e9752;}}
}
B5e973b:L5e973b:{c.instructions+=3;NFSU2_TR(0x5e973b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e973e:{NFSU2_TR(0x5e973e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9740:{NFSU2_TR(0x5e9740);
if(r1(R+518)){{goto L5e9752;}}
}
B5e9742:L5e9742:{c.instructions+=3;NFSU2_TR(0x5e9742);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9746:{NFSU2_TR(0x5e9746);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9748:{NFSU2_TR(0x5e9748);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9756;}}
}
B5e974a:L5e974a:{c.instructions+=3;NFSU2_TR(0x5e974a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e974f:{NFSU2_TR(0x5e974f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9750:{NFSU2_TR(0x5e9750);
{goto L5e9756;}
}
B5e9752:L5e9752:{c.instructions+=1;NFSU2_TR(0x5e9752);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9756:L5e9756:{c.instructions+=3;NFSU2_TR(0x5e9756);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e975d:{NFSU2_TR(0x5e975d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e975f:{NFSU2_TR(0x5e975f);
if(r1(R+518)){{goto L5e9775;}}
}
B5e9761:L5e9761:{c.instructions+=3;NFSU2_TR(0x5e9761);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9764:{NFSU2_TR(0x5e9764);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9766:{NFSU2_TR(0x5e9766);
if(r1(R+518)){{goto L5e9775;}}
}
B5e9768:L5e9768:{c.instructions+=2;NFSU2_TR(0x5e9768);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e976a:{NFSU2_TR(0x5e976a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9775;}}
}
B5e976c:L5e976c:{c.instructions+=3;NFSU2_TR(0x5e976c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e976f:{NFSU2_TR(0x5e976f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e9774:{NFSU2_TR(0x5e9774);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9775:L5e9775:{c.instructions+=3;NFSU2_TR(0x5e9775);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e977c:{NFSU2_TR(0x5e977c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e977e:{NFSU2_TR(0x5e977e);
if(r1(R+518)){{goto L5e9794;}}
}
B5e9780:L5e9780:{c.instructions+=3;NFSU2_TR(0x5e9780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9783:{NFSU2_TR(0x5e9783);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9785:{NFSU2_TR(0x5e9785);
if(r1(R+518)){{goto L5e9794;}}
}
B5e9787:L5e9787:{c.instructions+=2;NFSU2_TR(0x5e9787);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9789:{NFSU2_TR(0x5e9789);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9794;}}
}
B5e978b:L5e978b:{c.instructions+=3;NFSU2_TR(0x5e978b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e978e:{NFSU2_TR(0x5e978e);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e9793:{NFSU2_TR(0x5e9793);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9794:L5e9794:{c.instructions+=3;NFSU2_TR(0x5e9794);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883eccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e979b:{NFSU2_TR(0x5e979b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e979d:{NFSU2_TR(0x5e979d);
if(r1(R+518)){{goto L5e97b3;}}
}
B5e979f:L5e979f:{c.instructions+=3;NFSU2_TR(0x5e979f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97a2:{NFSU2_TR(0x5e97a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97a4:{NFSU2_TR(0x5e97a4);
if(r1(R+518)){{goto L5e97b3;}}
}
B5e97a6:L5e97a6:{c.instructions+=2;NFSU2_TR(0x5e97a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e97a8:{NFSU2_TR(0x5e97a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e97b3;}}
}
B5e97aa:L5e97aa:{c.instructions+=3;NFSU2_TR(0x5e97aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e97ad:{NFSU2_TR(0x5e97ad);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e97b2:{NFSU2_TR(0x5e97b2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e97b3:L5e97b3:{c.instructions+=3;NFSU2_TR(0x5e97b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ed0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e97ba:{NFSU2_TR(0x5e97ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97bc:{NFSU2_TR(0x5e97bc);
if(r1(R+518)){{goto L5e97d2;}}
}
B5e97be:L5e97be:{c.instructions+=3;NFSU2_TR(0x5e97be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97c1:{NFSU2_TR(0x5e97c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97c3:{NFSU2_TR(0x5e97c3);
if(r1(R+518)){{goto L5e97d2;}}
}
B5e97c5:L5e97c5:{c.instructions+=2;NFSU2_TR(0x5e97c5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e97c7:{NFSU2_TR(0x5e97c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e97d2;}}
}
B5e97c9:L5e97c9:{c.instructions+=3;NFSU2_TR(0x5e97c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e97cc:{NFSU2_TR(0x5e97cc);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e97d1:{NFSU2_TR(0x5e97d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e97d2:L5e97d2:{c.instructions+=3;NFSU2_TR(0x5e97d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ed4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e97d9:{NFSU2_TR(0x5e97d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97db:{NFSU2_TR(0x5e97db);
if(r1(R+518)){{goto L5e97f1;}}
}
B5e97dd:L5e97dd:{c.instructions+=3;NFSU2_TR(0x5e97dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97e0:{NFSU2_TR(0x5e97e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97e2:{NFSU2_TR(0x5e97e2);
if(r1(R+518)){{goto L5e97f1;}}
}
B5e97e4:L5e97e4:{c.instructions+=2;NFSU2_TR(0x5e97e4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e97e6:{NFSU2_TR(0x5e97e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e97f1;}}
}
B5e97e8:L5e97e8:{c.instructions+=3;NFSU2_TR(0x5e97e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e97eb:{NFSU2_TR(0x5e97eb);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e97f0:{NFSU2_TR(0x5e97f0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e97f1:L5e97f1:{c.instructions+=3;NFSU2_TR(0x5e97f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ed8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e97f8:{NFSU2_TR(0x5e97f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97fa:{NFSU2_TR(0x5e97fa);
if(r1(R+518)){{goto L5e9810;}}
}
B5e97fc:L5e97fc:{c.instructions+=3;NFSU2_TR(0x5e97fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97ff:{NFSU2_TR(0x5e97ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9801:{NFSU2_TR(0x5e9801);
if(r1(R+518)){{goto L5e9810;}}
}
B5e9803:L5e9803:{c.instructions+=2;NFSU2_TR(0x5e9803);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9805:{NFSU2_TR(0x5e9805);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9810;}}
}
B5e9807:L5e9807:{c.instructions+=3;NFSU2_TR(0x5e9807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e980a:{NFSU2_TR(0x5e980a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e980f:{NFSU2_TR(0x5e980f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9810:L5e9810:{c.instructions+=3;NFSU2_TR(0x5e9810);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883edcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9817:{NFSU2_TR(0x5e9817);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9819:{NFSU2_TR(0x5e9819);
if(r1(R+518)){{goto L5e982f;}}
}
B5e981b:L5e981b:{c.instructions+=3;NFSU2_TR(0x5e981b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e981e:{NFSU2_TR(0x5e981e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9820:{NFSU2_TR(0x5e9820);
if(r1(R+518)){{goto L5e982f;}}
}
B5e9822:L5e9822:{c.instructions+=2;NFSU2_TR(0x5e9822);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9824:{NFSU2_TR(0x5e9824);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e982f;}}
}
B5e9826:L5e9826:{c.instructions+=3;NFSU2_TR(0x5e9826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9829:{NFSU2_TR(0x5e9829);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e982e:{NFSU2_TR(0x5e982e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e982f:L5e982f:{c.instructions+=3;NFSU2_TR(0x5e982f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ee0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9836:{NFSU2_TR(0x5e9836);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9838:{NFSU2_TR(0x5e9838);
if(r1(R+518)){{goto L5e984e;}}
}
B5e983a:L5e983a:{c.instructions+=3;NFSU2_TR(0x5e983a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e983d:{NFSU2_TR(0x5e983d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e983f:{NFSU2_TR(0x5e983f);
if(r1(R+518)){{goto L5e984e;}}
}
B5e9841:L5e9841:{c.instructions+=2;NFSU2_TR(0x5e9841);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9843:{NFSU2_TR(0x5e9843);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e984e;}}
}
B5e9845:L5e9845:{c.instructions+=3;NFSU2_TR(0x5e9845);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9848:{NFSU2_TR(0x5e9848);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e984d:{NFSU2_TR(0x5e984d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e984e:L5e984e:{c.instructions+=3;NFSU2_TR(0x5e984e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ee4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9855:{NFSU2_TR(0x5e9855);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9857:{NFSU2_TR(0x5e9857);
if(r1(R+518)){{goto L5e986d;}}
}
B5e9859:L5e9859:{c.instructions+=3;NFSU2_TR(0x5e9859);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e985c:{NFSU2_TR(0x5e985c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e985e:{NFSU2_TR(0x5e985e);
if(r1(R+518)){{goto L5e986d;}}
}
B5e9860:L5e9860:{c.instructions+=2;NFSU2_TR(0x5e9860);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9862:{NFSU2_TR(0x5e9862);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e986d;}}
}
B5e9864:L5e9864:{c.instructions+=3;NFSU2_TR(0x5e9864);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e9867:{NFSU2_TR(0x5e9867);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e986c:{NFSU2_TR(0x5e986c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e986d:L5e986d:{c.instructions+=3;NFSU2_TR(0x5e986d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B5e9870:{NFSU2_TR(0x5e9870);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa8cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa8cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9875:{NFSU2_TR(0x5e9875);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9730u);}goto L5e9730;}}
}
B5e987b:L5e987b:{c.instructions+=4;NFSU2_TR(0x5e987b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e987e:{NFSU2_TR(0x5e987e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e9880:{NFSU2_TR(0x5e9880);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9882:{NFSU2_TR(0x5e9882);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e98b6;}}
}
B5e9884:L5e9884:{c.instructions+=1;NFSU2_TR(0x5e9884);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e9887:L5e9887:{c.instructions+=3;NFSU2_TR(0x5e9887);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5e988a:{NFSU2_TR(0x5e988a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e988c:{NFSU2_TR(0x5e988c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e98ab;}}
}
B5e988e:L5e988e:{c.instructions+=3;NFSU2_TR(0x5e988e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e9895:{NFSU2_TR(0x5e9895);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9897:{NFSU2_TR(0x5e9897);
if(r1(R+518)){{goto L5e98ab;}}
}
B5e9899:L5e9899:{c.instructions+=2;NFSU2_TR(0x5e9899);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e989d:{NFSU2_TR(0x5e989d);
if(r1(R+518)){{goto L5e98ab;}}
}
B5e989f:L5e989f:{c.instructions+=2;NFSU2_TR(0x5e989f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e98a3:{NFSU2_TR(0x5e98a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e98ab;}}
}
B5e98a5:L5e98a5:{c.instructions+=2;NFSU2_TR(0x5e98a5);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e98aa:{NFSU2_TR(0x5e98aa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e98ab:L5e98ab:{c.instructions+=5;NFSU2_TR(0x5e98ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e98ae:{NFSU2_TR(0x5e98ae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e98af:{NFSU2_TR(0x5e98af);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5e98b2:{NFSU2_TR(0x5e98b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e98b4:{NFSU2_TR(0x5e98b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9887u);}goto L5e9887;}}
}
B5e98b6:L5e98b6:{c.instructions+=4;NFSU2_TR(0x5e98b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e98ba:{NFSU2_TR(0x5e98ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e98bd:{NFSU2_TR(0x5e98bd);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e98c1:{NFSU2_TR(0x5e98c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e99b3;}}
}
B5e98c7:L5e98c7:{c.instructions+=5;NFSU2_TR(0x5e98c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e98cb:{NFSU2_TR(0x5e98cb);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B5e98ce:{NFSU2_TR(0x5e98ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e98d0:{NFSU2_TR(0x5e98d0);
__builtin_memmove((R+0),(R+12),4);
}
B5e98d2:{NFSU2_TR(0x5e98d2);
if(r1(R+518)){{goto L5e98d8;}}
}
B5e98d4:L5e98d4:{c.instructions+=1;NFSU2_TR(0x5e98d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e98d8:L5e98d8:{c.instructions+=2;NFSU2_TR(0x5e98d8);
u8 U[8];
__builtin_memmove((U+0),gp(0x800df0),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e98de:{NFSU2_TR(0x5e98de);
if(r1(R+518)){{goto L5e990c;}}
}
B5e98e0:L5e98e0:{c.instructions+=4;NFSU2_TR(0x5e98e0);
__builtin_memmove(gp(0x800df0),(R+0),4);
}
B5e98e5:{NFSU2_TR(0x5e98e5);
__builtin_memmove((R+0),gp(0x883de0),4);
}
B5e98ea:{NFSU2_TR(0x5e98ea);
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
B5e98ec:{NFSU2_TR(0x5e98ec);
if(r1(R+518)){{goto L5e99b3;}}
}
B5e98f2:L5e98f2:{c.instructions+=2;NFSU2_TR(0x5e98f2);
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
B5e98f4:{NFSU2_TR(0x5e98f4);
if(r1(R+518)){{goto L5e990c;}}
}
B5e98f6:L5e98f6:{c.instructions+=5;NFSU2_TR(0x5e98f6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e98f8:{NFSU2_TR(0x5e98f8);
u8 U[4];
w4(U+0,u32(0x800df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e98fd:{NFSU2_TR(0x5e98fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e98ff:{NFSU2_TR(0x5e98ff);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9904:{NFSU2_TR(0x5e9904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9909ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e9909:L5e9909:{c.instructions+=1;NFSU2_TR(0x5e9909);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e990c:L5e990c:{c.instructions+=3;NFSU2_TR(0x5e990c);
__builtin_memmove((R+0),gp(0x883de0),4);
}
B5e9911:{NFSU2_TR(0x5e9911);
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
B5e9913:{NFSU2_TR(0x5e9913);
if(r1(R+518)){{goto L5e99b3;}}
}
B5e9919:L5e9919:{c.instructions+=3;NFSU2_TR(0x5e9919);
__builtin_memmove((R+28),gp(0x883de4),4);
}
B5e991f:{NFSU2_TR(0x5e991f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9921:{NFSU2_TR(0x5e9921);
if(r1(R+518)){{goto L5e9950;}}
}
B5e9923:L5e9923:{c.instructions+=9;NFSU2_TR(0x5e9923);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B5e9929:{NFSU2_TR(0x5e9929);
w4(R+0,u32(0x66666667ull));
}
B5e992e:{NFSU2_TR(0x5e992e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e9930:{NFSU2_TR(0x5e9930);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5e9932:{NFSU2_TR(0x5e9932);
__builtin_memmove((R+0),(R+8),4);
}
B5e9934:{NFSU2_TR(0x5e9934);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e9937:{NFSU2_TR(0x5e9937);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e9939:{NFSU2_TR(0x5e9939);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e993c:{NFSU2_TR(0x5e993c);
if(r1(R+518)){{goto L5e9950;}}
}
B5e993e:L5e993e:{c.instructions+=6;NFSU2_TR(0x5e993e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9942:{NFSU2_TR(0x5e9942);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9943:{NFSU2_TR(0x5e9943);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9944:{NFSU2_TR(0x5e9944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9945:{NFSU2_TR(0x5e9945);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9946:{NFSU2_TR(0x5e9946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e994bull));
TAIL_STATIC(0x5d6470u,5d6);
}
B5e994b:L5e994b:{c.instructions+=2;NFSU2_TR(0x5e994b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e994e:{NFSU2_TR(0x5e994e);
__builtin_memmove((R+24),(R+0),4);
}
B5e9950:L5e9950:{c.instructions+=3;NFSU2_TR(0x5e9950);
__builtin_memmove((R+0),gp(0x883de0),4);
}
B5e9955:{NFSU2_TR(0x5e9955);
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
B5e9957:{NFSU2_TR(0x5e9957);
if(r1(R+518)){{goto L5e99b3;}}
}
B5e9959:L5e9959:{c.instructions+=3;NFSU2_TR(0x5e9959);
__builtin_memmove((R+0),gp(0x883dec),4);
}
B5e995e:{NFSU2_TR(0x5e995e);
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
B5e9960:{NFSU2_TR(0x5e9960);
if(r1(R+518)){{goto L5e99b3;}}
}
B5e9962:L5e9962:{c.instructions+=6;NFSU2_TR(0x5e9962);
__builtin_memmove((R+0),gp(0x88ed89),1);
}
B5e9967:{NFSU2_TR(0x5e9967);
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
B5e9969:{NFSU2_TR(0x5e9969);
s1(0x88ed88,u8(0x1ull));
}
B5e9970:{NFSU2_TR(0x5e9970);
__builtin_memmove(gp(0x88ebcc),(R+12),4);
}
B5e9976:{NFSU2_TR(0x5e9976);
__builtin_memmove(gp(0x88ec28),(R+12),4);
}
B5e997c:{NFSU2_TR(0x5e997c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e99a9;}}
}
B5e997e:L5e997e:{c.instructions+=3;NFSU2_TR(0x5e997e);
__builtin_memmove((R+0),gp(0x88f19c),4);
}
B5e9983:{NFSU2_TR(0x5e9983);
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
B5e9985:{NFSU2_TR(0x5e9985);
if(r1(R+518)){{goto L5e99a9;}}
}
B5e9987:L5e9987:{c.instructions+=4;NFSU2_TR(0x5e9987);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e998b:{NFSU2_TR(0x5e998b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e998c:{NFSU2_TR(0x5e998c);
w4(R+4,u32(0x88eb00ull));
}
B5e9991:{NFSU2_TR(0x5e9991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9996ull));
TAIL_STATIC(0x5e5300u,5e5);
}
B5e9996:L5e9996:{c.instructions+=2;NFSU2_TR(0x5e9996);
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
B5e9998:{NFSU2_TR(0x5e9998);
if(r1(R+518)){{goto L5e99a9;}}
}
B5e999a:L5e999a:{c.instructions+=4;NFSU2_TR(0x5e999a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e999e:{NFSU2_TR(0x5e999e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e999f:{NFSU2_TR(0x5e999f);
w4(R+4,u32(0x88eb00ull));
}
B5e99a4:{NFSU2_TR(0x5e99a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e99a9ull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B5e99a9:L5e99a9:{c.instructions+=1;NFSU2_TR(0x5e99a9);
s4(0x883dec,u32(0x0ull));
}
B5e99b3:L5e99b3:{c.instructions+=7;NFSU2_TR(0x5e99b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e99b4:{NFSU2_TR(0x5e99b4);
__builtin_memmove((R+0),(R+24),4);
}
B5e99b6:{NFSU2_TR(0x5e99b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e99b7:{NFSU2_TR(0x5e99b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e99b8:{NFSU2_TR(0x5e99b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e99b9:{NFSU2_TR(0x5e99b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e99ba:{NFSU2_TR(0x5e99ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e99c0:L5e99c0:{c.instructions+=10;NFSU2_TR(0x5e99c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B5e99c6:{NFSU2_TR(0x5e99c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e99c7:{NFSU2_TR(0x5e99c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e99ce:{NFSU2_TR(0x5e99ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e99cf:{NFSU2_TR(0x5e99cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e99d0:{NFSU2_TR(0x5e99d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e99d1:{NFSU2_TR(0x5e99d1);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e99d6:{NFSU2_TR(0x5e99d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e99da:{NFSU2_TR(0x5e99da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e99db:{NFSU2_TR(0x5e99db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e99e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e96b0u);}goto L5e96b0;}
}
B5e99e0:L5e99e0:{c.instructions+=4;NFSU2_TR(0x5e99e0);
__builtin_memmove((R+28),(R+0),4);
}
B5e99e2:{NFSU2_TR(0x5e99e2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e99e4:{NFSU2_TR(0x5e99e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e99e6:{NFSU2_TR(0x5e99e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9a1d;}}
}
B5e99e8:L5e99e8:{c.instructions+=1;NFSU2_TR(0x5e99e8);
{goto L5e99f0;}
}
B5e99f0:L5e99f0:{c.instructions+=3;NFSU2_TR(0x5e99f0);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B5e99f5:{NFSU2_TR(0x5e99f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e99f7:{NFSU2_TR(0x5e99f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e9a18;}}
}
B5e99f9:L5e99f9:{c.instructions+=3;NFSU2_TR(0x5e99f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e9a00:{NFSU2_TR(0x5e9a00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a02:{NFSU2_TR(0x5e9a02);
if(r1(R+518)){{goto L5e9a18;}}
}
B5e9a04:L5e9a04:{c.instructions+=3;NFSU2_TR(0x5e9a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9a07:{NFSU2_TR(0x5e9a07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a09:{NFSU2_TR(0x5e9a09);
if(r1(R+518)){{goto L5e9a18;}}
}
B5e9a0b:L5e9a0b:{c.instructions+=3;NFSU2_TR(0x5e9a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9a0e:{NFSU2_TR(0x5e9a0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a10:{NFSU2_TR(0x5e9a10);
if(r1(R+518)){{goto L5e9a18;}}
}
B5e9a12:L5e9a12:{c.instructions+=2;NFSU2_TR(0x5e9a12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9a13:{NFSU2_TR(0x5e9a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9a18ull));
TAIL_STATIC(0x5d69b0u,5d6);
}
B5e9a18:L5e9a18:{c.instructions+=3;NFSU2_TR(0x5e9a18);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9a19:{NFSU2_TR(0x5e9a19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9a1b:{NFSU2_TR(0x5e9a1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e99f0u);}goto L5e99f0;}}
}
B5e9a1d:L5e9a1d:{c.instructions+=5;NFSU2_TR(0x5e9a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9a1e:{NFSU2_TR(0x5e9a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9a1f:{NFSU2_TR(0x5e9a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9a20:{NFSU2_TR(0x5e9a20);
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
B5e9a26:{NFSU2_TR(0x5e9a26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e9a30:L5e9a30:{c.instructions+=13;NFSU2_TR(0x5e9a30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9a31:{NFSU2_TR(0x5e9a31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9a32:{NFSU2_TR(0x5e9a32);
__builtin_memmove((R+20),(R+4),4);
}
B5e9a34:{NFSU2_TR(0x5e9a34);
w4(R+0,u32(0x876de0ull));
}
B5e9a39:{NFSU2_TR(0x5e9a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a3f:{NFSU2_TR(0x5e9a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a45:{NFSU2_TR(0x5e9a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9a4b:{NFSU2_TR(0x5e9a4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a4d:{NFSU2_TR(0x5e9a4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9a4e:{NFSU2_TR(0x5e9a4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9a4f:{NFSU2_TR(0x5e9a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ccull))));
w4(U+4,u32(0x8832c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a59:{NFSU2_TR(0x5e9a59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a61:{NFSU2_TR(0x5e9a61);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9bad;}}
}
B5e9a67:L5e9a67:{c.instructions+=3;NFSU2_TR(0x5e9a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9a6a:{NFSU2_TR(0x5e9a6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9a6b:{NFSU2_TR(0x5e9a6b);
{goto L5e9a70;}
}
B5e9a70:L5e9a70:{c.instructions+=27;NFSU2_TR(0x5e9a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9a73:{NFSU2_TR(0x5e9a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9a76:{NFSU2_TR(0x5e9a76);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9a79:{NFSU2_TR(0x5e9a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9a7c:{NFSU2_TR(0x5e9a7c);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9a7f:{NFSU2_TR(0x5e9a7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5e9a82:{NFSU2_TR(0x5e9a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a85:{NFSU2_TR(0x5e9a85);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e9a87:{NFSU2_TR(0x5e9a87);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e9a8a:{NFSU2_TR(0x5e9a8a);
w1(R+12,u8(0x1ull));
}
B5e9a8c:{NFSU2_TR(0x5e9a8c);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e9a8f:{NFSU2_TR(0x5e9a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9a92:{NFSU2_TR(0x5e9a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9a95:{NFSU2_TR(0x5e9a95);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9a98:{NFSU2_TR(0x5e9a98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5e9a9b:{NFSU2_TR(0x5e9a9b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9a9e:{NFSU2_TR(0x5e9a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e9aa0:{NFSU2_TR(0x5e9aa0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e9aa2:{NFSU2_TR(0x5e9aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9aa5:{NFSU2_TR(0x5e9aa5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e9aa7:{NFSU2_TR(0x5e9aa7);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e9aaa:{NFSU2_TR(0x5e9aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9aad:{NFSU2_TR(0x5e9aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9ab0:{NFSU2_TR(0x5e9ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9ab3:{NFSU2_TR(0x5e9ab3);
__builtin_memmove((R+4),gp(0x800df8),4);
}
B5e9ab9:{NFSU2_TR(0x5e9ab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9abb:{NFSU2_TR(0x5e9abb);
if(r1(R+518)){{goto L5e9b13;}}
}
B5e9abd:L5e9abd:{c.instructions+=2;NFSU2_TR(0x5e9abd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9ac0:{NFSU2_TR(0x5e9ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9ad6;}}
}
B5e9ac2:L5e9ac2:{c.instructions+=6;NFSU2_TR(0x5e9ac2);
__builtin_memmove((R+0),gp(0x7fb708),4);
}
B5e9ac7:{NFSU2_TR(0x5e9ac7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e9ac8:{NFSU2_TR(0x5e9ac8);
w4(R+28,u32(0x3dull));
}
B5e9acd:{NFSU2_TR(0x5e9acd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9acd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9acd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e9acf:{NFSU2_TR(0x5e9acf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9ad2:{NFSU2_TR(0x5e9ad2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9b15;}}
}
B5e9ad4:L5e9ad4:{c.instructions+=1;NFSU2_TR(0x5e9ad4);
{goto L5e9b13;}
}
B5e9ad6:L5e9ad6:{c.instructions+=2;NFSU2_TR(0x5e9ad6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9ad9:{NFSU2_TR(0x5e9ad9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9b15;}}
}
B5e9adb:L5e9adb:{c.instructions+=21;NFSU2_TR(0x5e9adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9ade:{NFSU2_TR(0x5e9ade);
{u32 ea_=u32(r4(R+0)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9ae4:{NFSU2_TR(0x5e9ae4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
}
B5e9ae9:{NFSU2_TR(0x5e9ae9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9aec:{NFSU2_TR(0x5e9aec);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9aee:{NFSU2_TR(0x5e9aee);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e9af0:{NFSU2_TR(0x5e9af0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e9af2:{NFSU2_TR(0x5e9af2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e9af4:{NFSU2_TR(0x5e9af4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e9af6:{NFSU2_TR(0x5e9af6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e9af8:{NFSU2_TR(0x5e9af8);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5e9afa:{NFSU2_TR(0x5e9afa);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5e9afc:{NFSU2_TR(0x5e9afc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e9afe:{NFSU2_TR(0x5e9afe);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e9b00:{NFSU2_TR(0x5e9b00);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5e9b02:{NFSU2_TR(0x5e9b02);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e9b04:{NFSU2_TR(0x5e9b04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e9b06:{NFSU2_TR(0x5e9b06);
{u32 ea_=u32(u32(8013784u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e9b0c:{NFSU2_TR(0x5e9b0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e9b0e:{NFSU2_TR(0x5e9b0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e9b11:{NFSU2_TR(0x5e9b11);
if(r1(R+514)){{goto L5e9b15;}}
}
B5e9b13:L5e9b13:{c.instructions+=1;NFSU2_TR(0x5e9b13);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5e9b15:L5e9b15:{c.instructions+=3;NFSU2_TR(0x5e9b15);
__builtin_memmove((R+0),gp(0x883dfc),4);
}
B5e9b1a:{NFSU2_TR(0x5e9b1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9b1c:{NFSU2_TR(0x5e9b1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9b25;}}
}
B5e9b1e:L5e9b1e:{c.instructions+=2;NFSU2_TR(0x5e9b1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9b21:{NFSU2_TR(0x5e9b21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9b25;}}
}
B5e9b23:L5e9b23:{c.instructions+=1;NFSU2_TR(0x5e9b23);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5e9b25:L5e9b25:{c.instructions+=2;NFSU2_TR(0x5e9b25);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9b28:{NFSU2_TR(0x5e9b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9b2dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e9b2d:L5e9b2d:{c.instructions+=6;NFSU2_TR(0x5e9b2d);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9b30:{NFSU2_TR(0x5e9b30);
__builtin_memmove((R+28),(R+0),4);
}
B5e9b32:{NFSU2_TR(0x5e9b32);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b35:{NFSU2_TR(0x5e9b35);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7full))));
}
B5e9b38:{NFSU2_TR(0x5e9b38);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b3b:{NFSU2_TR(0x5e9b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9b40ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e9b40:L5e9b40:{c.instructions+=10;NFSU2_TR(0x5e9b40);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5e9b43:{NFSU2_TR(0x5e9b43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B5e9b46:{NFSU2_TR(0x5e9b46);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5e9b48:{NFSU2_TR(0x5e9b48);
__builtin_memmove((R+4),(R+28),4);
}
B5e9b4a:{NFSU2_TR(0x5e9b4a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5e9b4d:{NFSU2_TR(0x5e9b4d);
w1(R+8,u8(0x1ull));
}
B5e9b4f:{NFSU2_TR(0x5e9b4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5e9b51:{NFSU2_TR(0x5e9b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b54:{NFSU2_TR(0x5e9b54);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8832c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+8))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5e9b5a:{NFSU2_TR(0x5e9b5a);
if(r1(R+518)){{goto L5e9b5e;}}
}
B5e9b5c:L5e9b5c:{c.instructions+=1;NFSU2_TR(0x5e9b5c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5e9b5e:L5e9b5e:{c.instructions+=3;NFSU2_TR(0x5e9b5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9b60:{NFSU2_TR(0x5e9b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e9b67:{NFSU2_TR(0x5e9b67);
if(r1(R+518)){{goto L5e9b8f;}}
}
B5e9b69:L5e9b69:{c.instructions+=2;NFSU2_TR(0x5e9b69);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9b6c:{NFSU2_TR(0x5e9b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9b71ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e9b71:L5e9b71:{c.instructions+=6;NFSU2_TR(0x5e9b71);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e9b74:{NFSU2_TR(0x5e9b74);
__builtin_memmove((R+28),(R+0),4);
}
B5e9b76:{NFSU2_TR(0x5e9b76);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b79:{NFSU2_TR(0x5e9b79);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1full))));
}
B5e9b7c:{NFSU2_TR(0x5e9b7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b7f:{NFSU2_TR(0x5e9b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9b84ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e9b84:L5e9b84:{c.instructions+=4;NFSU2_TR(0x5e9b84);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5e9b87:{NFSU2_TR(0x5e9b87);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B5e9b8a:{NFSU2_TR(0x5e9b8a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5e9b8c:{NFSU2_TR(0x5e9b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9b8f:L5e9b8f:{c.instructions+=7;NFSU2_TR(0x5e9b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9b93:{NFSU2_TR(0x5e9b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9b99:{NFSU2_TR(0x5e9b99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e9b9a:{NFSU2_TR(0x5e9b9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B5e9ba0:{NFSU2_TR(0x5e9ba0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9ba2:{NFSU2_TR(0x5e9ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9ba6:{NFSU2_TR(0x5e9ba6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9a70u);}goto L5e9a70;}}
}
B5e9bac:L5e9bac:{c.instructions+=1;NFSU2_TR(0x5e9bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9bad:L5e9bad:{c.instructions+=4;NFSU2_TR(0x5e9bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9bb3:{NFSU2_TR(0x5e9bb3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e9bb5:{NFSU2_TR(0x5e9bb5);
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
B5e9bb7:{NFSU2_TR(0x5e9bb7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9bfe;}}
}
B5e9bb9:L5e9bb9:{c.instructions+=2;NFSU2_TR(0x5e9bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9bbc:{NFSU2_TR(0x5e9bbc);
__builtin_memmove((R+16),(R+16),4);
}
B5e9bc0:L5e9bc0:{c.instructions+=10;NFSU2_TR(0x5e9bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9bc6:{NFSU2_TR(0x5e9bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9bc9:{NFSU2_TR(0x5e9bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9bcf:{NFSU2_TR(0x5e9bcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e9bd1:{NFSU2_TR(0x5e9bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9bd7:{NFSU2_TR(0x5e9bd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e9bda:{NFSU2_TR(0x5e9bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9bdb:{NFSU2_TR(0x5e9bdb);
__builtin_memmove((R+4),(R+20),4);
}
B5e9bdd:{NFSU2_TR(0x5e9bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9be0:{NFSU2_TR(0x5e9be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9be5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e99c0u);}goto L5e99c0;}
}
B5e9be5:L5e9be5:{c.instructions+=7;NFSU2_TR(0x5e9be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e9be7:{NFSU2_TR(0x5e9be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9bed:{NFSU2_TR(0x5e9bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9bf3:{NFSU2_TR(0x5e9bf3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e9bf4:{NFSU2_TR(0x5e9bf4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B5e9bfa:{NFSU2_TR(0x5e9bfa);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5e9bfc:{NFSU2_TR(0x5e9bfc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9bc0u);}goto L5e9bc0;}}
}
B5e9bfe:L5e9bfe:{c.instructions+=5;NFSU2_TR(0x5e9bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9bff:{NFSU2_TR(0x5e9bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9c00:{NFSU2_TR(0x5e9c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9c01:{NFSU2_TR(0x5e9c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9c02:{NFSU2_TR(0x5e9c02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e9c10:L5e9c10:{c.instructions+=7;NFSU2_TR(0x5e9c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e9c13:{NFSU2_TR(0x5e9c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9c17:{NFSU2_TR(0x5e9c17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9c18:{NFSU2_TR(0x5e9c18);
__builtin_memmove((R+20),(R+4),4);
}
B5e9c1a:{NFSU2_TR(0x5e9c1a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034150ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e9c20:{NFSU2_TR(0x5e9c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c24:{NFSU2_TR(0x5e9c24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9e6f;}}
}
B5e9c2a:L5e9c2a:{c.instructions+=8;NFSU2_TR(0x5e9c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9c2d:{NFSU2_TR(0x5e9c2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9c2e:{NFSU2_TR(0x5e9c2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e9c32:{NFSU2_TR(0x5e9c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9c35:{NFSU2_TR(0x5e9c35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B5e9c37:{NFSU2_TR(0x5e9c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c3b:{NFSU2_TR(0x5e9c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c3f:{NFSU2_TR(0x5e9c3f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5e9e0c;}}
}
B5e9c45:L5e9c45:{c.instructions+=3;NFSU2_TR(0x5e9c45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9c46:{NFSU2_TR(0x5e9c46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9c47:{NFSU2_TR(0x5e9c47);
{goto L5e9c50;}
}
B5e9c49:L5e9c49:{c.instructions+=2;NFSU2_TR(0x5e9c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e9c4d:{NFSU2_TR(0x5e9c4d);
__builtin_memmove((R+4),(R+4),4);
}
B5e9c50:L5e9c50:{c.instructions+=3;NFSU2_TR(0x5e9c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e9c52:{NFSU2_TR(0x5e9c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34152ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9c57:{NFSU2_TR(0x5e9c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9cc3;}}
}
B5e9c59:L5e9c59:{c.instructions+=5;NFSU2_TR(0x5e9c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9c5c:{NFSU2_TR(0x5e9c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9c5f:{NFSU2_TR(0x5e9c5f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e9c63:{NFSU2_TR(0x5e9c63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5e9c65:{NFSU2_TR(0x5e9c65);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5e9df3;}}
}
B5e9c6b:L5e9c6b:{c.instructions+=1;NFSU2_TR(0x5e9c6b);
{goto L5e9c70;}
}
B5e9c70:L5e9c70:{c.instructions+=7;NFSU2_TR(0x5e9c70);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e9c74:{NFSU2_TR(0x5e9c74);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e9c75:{NFSU2_TR(0x5e9c75);
w4(R+28,u32(0x64ull));
}
B5e9c7a:{NFSU2_TR(0x5e9c7a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9c7a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9c7a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e9c7c:{NFSU2_TR(0x5e9c7c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5e9c7e:{NFSU2_TR(0x5e9c7e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5e9c80:{NFSU2_TR(0x5e9c80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e9ca2;}}
}
B5e9c82:L5e9c82:{c.instructions+=2;NFSU2_TR(0x5e9c82);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9c84:{NFSU2_TR(0x5e9c84);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e9ca2;}}
}
B5e9c86:L5e9c86:{c.instructions+=2;NFSU2_TR(0x5e9c86);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9c89:{NFSU2_TR(0x5e9c89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e9ca2;}}
}
B5e9c8b:L5e9c8b:{c.instructions+=2;NFSU2_TR(0x5e9c8b);
u8 U[8];
__builtin_memmove((U+0),gp(0x800dfc),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9c91:{NFSU2_TR(0x5e9c91);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e9ca2;}}
}
B5e9c93:L5e9c93:{c.instructions+=6;NFSU2_TR(0x5e9c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9c96:{NFSU2_TR(0x5e9c96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e9c98:{NFSU2_TR(0x5e9c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c9b:{NFSU2_TR(0x5e9c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c9e:{NFSU2_TR(0x5e9c9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e9ca0:{NFSU2_TR(0x5e9ca0);
{goto L5e9cb2;}
}
B5e9ca2:L5e9ca2:{c.instructions+=6;NFSU2_TR(0x5e9ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9ca5:{NFSU2_TR(0x5e9ca5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e9ca8:{NFSU2_TR(0x5e9ca8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e9caa:{NFSU2_TR(0x5e9caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9cad:{NFSU2_TR(0x5e9cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9cb0:{NFSU2_TR(0x5e9cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e9cb2:L5e9cb2:{c.instructions+=4;NFSU2_TR(0x5e9cb2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e9cb6:{NFSU2_TR(0x5e9cb6);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e9cba:{NFSU2_TR(0x5e9cba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5e9cbc:{NFSU2_TR(0x5e9cbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9c70u);}goto L5e9c70;}}
}
B5e9cbe:L5e9cbe:{c.instructions+=1;NFSU2_TR(0x5e9cbe);
{goto L5e9df3;}
}
B5e9cc3:L5e9cc3:{c.instructions+=2;NFSU2_TR(0x5e9cc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34153ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9cc8:{NFSU2_TR(0x5e9cc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9d69;}}
}
B5e9cce:L5e9cce:{c.instructions+=7;NFSU2_TR(0x5e9cce);
w4(R+0,u32(0xc7ce0c7dull));
}
B5e9cd3:{NFSU2_TR(0x5e9cd3);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B5e9cd6:{NFSU2_TR(0x5e9cd6);
__builtin_memmove((R+24),(R+8),4);
}
B5e9cd8:{NFSU2_TR(0x5e9cd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5e9cdb:{NFSU2_TR(0x5e9cdb);
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
B5e9cdd:{NFSU2_TR(0x5e9cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9ce0:{NFSU2_TR(0x5e9ce0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9df3;}}
}
B5e9ce6:L5e9ce6:{c.instructions+=3;NFSU2_TR(0x5e9ce6);
__builtin_memmove((R+4),(R+20),4);
}
B5e9ce8:{NFSU2_TR(0x5e9ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9ceb:{NFSU2_TR(0x5e9ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9cf0ull));
TAIL_STATIC(0x502fd0u,502);
}
B5e9cf0:L5e9cf0:{c.instructions+=4;NFSU2_TR(0x5e9cf0);
__builtin_memmove((R+20),(R+0),4);
}
B5e9cf2:{NFSU2_TR(0x5e9cf2);
__builtin_memmove((R+4),(R+28),4);
}
B5e9cf4:{NFSU2_TR(0x5e9cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9cf8:{NFSU2_TR(0x5e9cf8);
{goto L5e9d00;}
}
B5e9d00:L5e9d00:{c.instructions+=10;NFSU2_TR(0x5e9d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9d03:{NFSU2_TR(0x5e9d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9d07:{NFSU2_TR(0x5e9d07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e9d09:{NFSU2_TR(0x5e9d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d0c:{NFSU2_TR(0x5e9d0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e9d10:{NFSU2_TR(0x5e9d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d13:{NFSU2_TR(0x5e9d13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e9d15:{NFSU2_TR(0x5e9d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e9d17:{NFSU2_TR(0x5e9d17);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d19:{NFSU2_TR(0x5e9d19);
if(r1(R+518)){{goto L5e9d2e;}}
}
B5e9d1b:L5e9d1b:{c.instructions+=1;NFSU2_TR(0x5e9d1b);
{goto L5e9d20;}
}
B5e9d20:L5e9d20:{c.instructions+=3;NFSU2_TR(0x5e9d20);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e9d24:{NFSU2_TR(0x5e9d24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d26:{NFSU2_TR(0x5e9d26);
if(r1(R+518)){{goto L5e9d48;}}
}
B5e9d28:L5e9d28:{c.instructions+=3;NFSU2_TR(0x5e9d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e9d2a:{NFSU2_TR(0x5e9d2a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d2c:{NFSU2_TR(0x5e9d2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9d20u);}goto L5e9d20;}}
}
B5e9d2e:L5e9d2e:{c.instructions+=4;NFSU2_TR(0x5e9d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9d31:{NFSU2_TR(0x5e9d31);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5e9d34:{NFSU2_TR(0x5e9d34);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d36:{NFSU2_TR(0x5e9d36);
if(r1(R+518)){{goto L5e9d46;}}
}
B5e9d38:L5e9d38:{c.instructions+=3;NFSU2_TR(0x5e9d38);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e9d3c:{NFSU2_TR(0x5e9d3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d3e:{NFSU2_TR(0x5e9d3e);
if(r1(R+518)){{goto L5e9d48;}}
}
B5e9d40:L5e9d40:{c.instructions+=3;NFSU2_TR(0x5e9d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e9d42:{NFSU2_TR(0x5e9d42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d44:{NFSU2_TR(0x5e9d44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9d38u);}goto L5e9d38;}}
}
B5e9d46:L5e9d46:{c.instructions+=1;NFSU2_TR(0x5e9d46);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e9d48:L5e9d48:{c.instructions+=6;NFSU2_TR(0x5e9d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9d4c:{NFSU2_TR(0x5e9d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d4f:{NFSU2_TR(0x5e9d4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
}
B5e9d55:{NFSU2_TR(0x5e9d55);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e9d56:{NFSU2_TR(0x5e9d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d5a:{NFSU2_TR(0x5e9d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9d00u);}goto L5e9d00;}}
}
B5e9d5c:L5e9d5c:{c.instructions+=3;NFSU2_TR(0x5e9d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9d60:{NFSU2_TR(0x5e9d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e9d64:{NFSU2_TR(0x5e9d64);
{goto L5e9df3;}
}
B5e9d69:L5e9d69:{c.instructions+=2;NFSU2_TR(0x5e9d69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34151ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9d6e:{NFSU2_TR(0x5e9d6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9d80;}}
}
B5e9d70:L5e9d70:{c.instructions+=5;NFSU2_TR(0x5e9d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e9d73:{NFSU2_TR(0x5e9d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d76:{NFSU2_TR(0x5e9d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e9d78:{NFSU2_TR(0x5e9d78);
__builtin_memmove(gp(0x800dfc),(R+4),4);
}
B5e9d7e:{NFSU2_TR(0x5e9d7e);
{goto L5e9df3;}
}
B5e9d80:L5e9d80:{c.instructions+=2;NFSU2_TR(0x5e9d80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34154ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9d85:{NFSU2_TR(0x5e9d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9db5;}}
}
B5e9d87:L5e9d87:{c.instructions+=5;NFSU2_TR(0x5e9d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9d8a:{NFSU2_TR(0x5e9d8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e9d8d:{NFSU2_TR(0x5e9d8d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9d8f:{NFSU2_TR(0x5e9d8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e9d92:{NFSU2_TR(0x5e9d92);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9df3;}}
}
B5e9d94:L5e9d94:{c.instructions+=3;NFSU2_TR(0x5e9d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9d97:{NFSU2_TR(0x5e9d97);
__builtin_memmove((R+24),(R+8),4);
}
B5e9d99:{NFSU2_TR(0x5e9d99);
__builtin_memmove((R+16),(R+16),4);
}
B5e9da0:L5e9da0:{c.instructions+=8;NFSU2_TR(0x5e9da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9da3:{NFSU2_TR(0x5e9da3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e9da5:{NFSU2_TR(0x5e9da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9da8:{NFSU2_TR(0x5e9da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9dab:{NFSU2_TR(0x5e9dab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e9dad:{NFSU2_TR(0x5e9dad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5e9db0:{NFSU2_TR(0x5e9db0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e9db1:{NFSU2_TR(0x5e9db1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9da0u);}goto L5e9da0;}}
}
B5e9db3:L5e9db3:{c.instructions+=1;NFSU2_TR(0x5e9db3);
{goto L5e9df3;}
}
B5e9db5:L5e9db5:{c.instructions+=2;NFSU2_TR(0x5e9db5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34155ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9dba:{NFSU2_TR(0x5e9dba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9df3;}}
}
B5e9dbc:L5e9dbc:{c.instructions+=10;NFSU2_TR(0x5e9dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9dbf:{NFSU2_TR(0x5e9dbf);
w4(R+0,u32(0xaf286bcbull));
}
B5e9dc4:{NFSU2_TR(0x5e9dc4);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e9dc6:{NFSU2_TR(0x5e9dc6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5e9dc8:{NFSU2_TR(0x5e9dc8);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5e9dca:{NFSU2_TR(0x5e9dca);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5e9dcc:{NFSU2_TR(0x5e9dcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e9dcf:{NFSU2_TR(0x5e9dcf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9dd1:{NFSU2_TR(0x5e9dd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9dd4:{NFSU2_TR(0x5e9dd4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9df3;}}
}
B5e9dd6:L5e9dd6:{c.instructions+=4;NFSU2_TR(0x5e9dd6);
__builtin_memmove((R+0),(R+24),4);
}
B5e9dd8:{NFSU2_TR(0x5e9dd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e9ddb:{NFSU2_TR(0x5e9ddb);
__builtin_memmove((R+24),(R+4),4);
}
B5e9ddd:{NFSU2_TR(0x5e9ddd);
__builtin_memmove((R+4),(R+4),4);
}
B5e9de0:L5e9de0:{c.instructions+=8;NFSU2_TR(0x5e9de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e9de3:{NFSU2_TR(0x5e9de3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e9de5:{NFSU2_TR(0x5e9de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9de8:{NFSU2_TR(0x5e9de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9deb:{NFSU2_TR(0x5e9deb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e9ded:{NFSU2_TR(0x5e9ded);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B5e9df0:{NFSU2_TR(0x5e9df0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e9df1:{NFSU2_TR(0x5e9df1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9de0u);}goto L5e9de0;}}
}
B5e9df3:L5e9df3:{c.instructions+=6;NFSU2_TR(0x5e9df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9df6:{NFSU2_TR(0x5e9df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9dfa:{NFSU2_TR(0x5e9dfa);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5e9dfe:{NFSU2_TR(0x5e9dfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B5e9e00:{NFSU2_TR(0x5e9e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9e04:{NFSU2_TR(0x5e9e04);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9c49u);}goto L5e9c49;}}
}
B5e9e0a:L5e9e0a:{c.instructions+=2;NFSU2_TR(0x5e9e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9e0b:{NFSU2_TR(0x5e9e0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9e0c:L5e9e0c:{c.instructions+=4;NFSU2_TR(0x5e9e0c);
__builtin_memmove((R+0),gp(0x864f7c),4);
}
B5e9e11:{NFSU2_TR(0x5e9e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9e13:{NFSU2_TR(0x5e9e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9e14:{NFSU2_TR(0x5e9e14);
if(r1(R+518)){{goto L5e9e63;}}
}
B5e9e16:L5e9e16:{c.instructions+=1;NFSU2_TR(0x5e9e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9e1bull));
TAIL_STATIC(0x5dfd30u,5df);
}
B5e9e1b:L5e9e1b:{c.instructions+=7;NFSU2_TR(0x5e9e1b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5e9e1e:{NFSU2_TR(0x5e9e1e);
__builtin_memmove(gp(0x88ebcc),(R+0),4);
}
B5e9e23:{NFSU2_TR(0x5e9e23);
__builtin_memmove(gp(0x88ec28),(R+0),4);
}
B5e9e28:{NFSU2_TR(0x5e9e28);
__builtin_memmove((R+0),gp(0x88ed89),1);
}
B5e9e2d:{NFSU2_TR(0x5e9e2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9e2f:{NFSU2_TR(0x5e9e2f);
s1(0x88ed88,u8(0x1ull));
}
B5e9e36:{NFSU2_TR(0x5e9e36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e9e63;}}
}
B5e9e38:L5e9e38:{c.instructions+=3;NFSU2_TR(0x5e9e38);
__builtin_memmove((R+0),gp(0x88f19c),4);
}
B5e9e3d:{NFSU2_TR(0x5e9e3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9e3f:{NFSU2_TR(0x5e9e3f);
if(r1(R+518)){{goto L5e9e63;}}
}
B5e9e41:L5e9e41:{c.instructions+=4;NFSU2_TR(0x5e9e41);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e9e45:{NFSU2_TR(0x5e9e45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9e46:{NFSU2_TR(0x5e9e46);
w4(R+4,u32(0x88eb00ull));
}
B5e9e4b:{NFSU2_TR(0x5e9e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9e50ull));
TAIL_STATIC(0x5e5300u,5e5);
}
B5e9e50:L5e9e50:{c.instructions+=2;NFSU2_TR(0x5e9e50);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9e52:{NFSU2_TR(0x5e9e52);
if(r1(R+518)){{goto L5e9e63;}}
}
B5e9e54:L5e9e54:{c.instructions+=4;NFSU2_TR(0x5e9e54);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e9e58:{NFSU2_TR(0x5e9e58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9e59:{NFSU2_TR(0x5e9e59);
w4(R+4,u32(0x88eb00ull));
}
B5e9e5e:{NFSU2_TR(0x5e9e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9e63ull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B5e9e63:L5e9e63:{c.instructions+=4;NFSU2_TR(0x5e9e63);
w4(R+0,u32(0x1ull));
}
B5e9e68:{NFSU2_TR(0x5e9e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9e69:{NFSU2_TR(0x5e9e69);
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
B5e9e6c:{NFSU2_TR(0x5e9e6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e9e6f:L5e9e6f:{c.instructions+=4;NFSU2_TR(0x5e9e6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e9e71:{NFSU2_TR(0x5e9e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9e72:{NFSU2_TR(0x5e9e72);
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
B5e9e75:{NFSU2_TR(0x5e9e75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e9e80:L5e9e80:{c.instructions+=3;NFSU2_TR(0x5e9e80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9e81:{NFSU2_TR(0x5e9e81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9e82:{NFSU2_TR(0x5e9e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9e87ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5e9e87:L5e9e87:{c.instructions+=4;NFSU2_TR(0x5e9e87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9e8b:{NFSU2_TR(0x5e9e8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9e8c:{NFSU2_TR(0x5e9e8c);
w4(R+24,u32(0x3ull));
}
B5e9e91:{NFSU2_TR(0x5e9e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9e96ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B5e9e96:L5e9e96:{c.instructions+=3;NFSU2_TR(0x5e9e96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e9e99:{NFSU2_TR(0x5e9e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9e9b:{NFSU2_TR(0x5e9e9b);
if(r1(R+518)){{goto L5e9f10;}}
}
B5e9e9d:L5e9e9d:{c.instructions+=3;NFSU2_TR(0x5e9e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e9ea3:{NFSU2_TR(0x5e9ea3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ea5:{NFSU2_TR(0x5e9ea5);
if(r1(R+518)){{goto L5e9eae;}}
}
B5e9ea7:L5e9ea7:{c.instructions+=2;NFSU2_TR(0x5e9ea7);
w4(R+24,u32(0x2ull));
}
B5e9eac:{NFSU2_TR(0x5e9eac);
{goto L5e9f10;}
}
B5e9eae:L5e9eae:{c.instructions+=2;NFSU2_TR(0x5e9eae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9eb0:{NFSU2_TR(0x5e9eb0);
if(r1(R+518)){{goto L5e9eb9;}}
}
B5e9eb2:L5e9eb2:{c.instructions+=2;NFSU2_TR(0x5e9eb2);
w4(R+24,u32(0x2ull));
}
B5e9eb7:{NFSU2_TR(0x5e9eb7);
{goto L5e9f10;}
}
B5e9eb9:L5e9eb9:{c.instructions+=2;NFSU2_TR(0x5e9eb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ebb:{NFSU2_TR(0x5e9ebb);
if(r1(R+518)){{goto L5e9ec1;}}
}
B5e9ebd:L5e9ebd:{c.instructions+=2;NFSU2_TR(0x5e9ebd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e9ebf:{NFSU2_TR(0x5e9ebf);
{goto L5e9f10;}
}
B5e9ec1:L5e9ec1:{c.instructions+=2;NFSU2_TR(0x5e9ec1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ec3:{NFSU2_TR(0x5e9ec3);
if(r1(R+518)){{goto L5e9ecc;}}
}
B5e9ec5:L5e9ec5:{c.instructions+=2;NFSU2_TR(0x5e9ec5);
w4(R+24,u32(0x1ull));
}
B5e9eca:{NFSU2_TR(0x5e9eca);
{goto L5e9f10;}
}
B5e9ecc:L5e9ecc:{c.instructions+=2;NFSU2_TR(0x5e9ecc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ecf:{NFSU2_TR(0x5e9ecf);
if(r1(R+518)){{goto L5e9ed8;}}
}
B5e9ed1:L5e9ed1:{c.instructions+=2;NFSU2_TR(0x5e9ed1);
w4(R+24,u32(0x4ull));
}
B5e9ed6:{NFSU2_TR(0x5e9ed6);
{goto L5e9f10;}
}
B5e9ed8:L5e9ed8:{c.instructions+=2;NFSU2_TR(0x5e9ed8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9edb:{NFSU2_TR(0x5e9edb);
if(r1(R+518)){{goto L5e9ee4;}}
}
B5e9edd:L5e9edd:{c.instructions+=2;NFSU2_TR(0x5e9edd);
w4(R+24,u32(0x4ull));
}
B5e9ee2:{NFSU2_TR(0x5e9ee2);
{goto L5e9f10;}
}
B5e9ee4:L5e9ee4:{c.instructions+=2;NFSU2_TR(0x5e9ee4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ee7:{NFSU2_TR(0x5e9ee7);
if(r1(R+518)){{goto L5e9f10;}}
}
B5e9ee9:L5e9ee9:{c.instructions+=2;NFSU2_TR(0x5e9ee9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x125dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x125dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9eef:{NFSU2_TR(0x5e9eef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9fae;}}
}
B5e9ef5:L5e9ef5:{c.instructions+=3;NFSU2_TR(0x5e9ef5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1261ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1261ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9efb:{NFSU2_TR(0x5e9efb);
__builtin_memmove((R+0),(R+28),4);
}
B5e9efd:{NFSU2_TR(0x5e9efd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e9f04;}}
}
B5e9eff:L5e9eff:{c.instructions+=1;NFSU2_TR(0x5e9eff);
w4(R+0,u32(0x1261ull));
}
B5e9f04:L5e9f04:{c.instructions+=5;NFSU2_TR(0x5e9f04);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e9f06:{NFSU2_TR(0x5e9f06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9f08:{NFSU2_TR(0x5e9f08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5e9f0b:{NFSU2_TR(0x5e9f0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B5e9f0e:{NFSU2_TR(0x5e9f0e);
__builtin_memmove((R+24),(R+4),4);
}
B5e9f10:L5e9f10:{c.instructions+=4;NFSU2_TR(0x5e9f10);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e9f15:{NFSU2_TR(0x5e9f15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9f17:{NFSU2_TR(0x5e9f17);
__builtin_memmove(gp(0x88e9a8),(R+24),4);
}
B5e9f1d:{NFSU2_TR(0x5e9f1d);
if(r1(R+518)){{goto L5e9f2c;}}
}
B5e9f1f:L5e9f1f:{c.instructions+=2;NFSU2_TR(0x5e9f1f);
u8 U[8];
__builtin_memmove((U+0),gp(0x88a330),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9f26:{NFSU2_TR(0x5e9f26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5ea0beu,5ea);}
}
B5e9f2c:L5e9f2c:{c.instructions+=2;NFSU2_TR(0x5e9f2c);
w4(R+4,u32(0x88a320ull));
}
B5e9f31:{NFSU2_TR(0x5e9f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f36ull));
TAIL_STATIC(0x5d98c0u,5d9);
}
B5e9f36:L5e9f36:{c.instructions+=2;NFSU2_TR(0x5e9f36);
w4(R+4,u32(0x88a320ull));
}
B5e9f3b:{NFSU2_TR(0x5e9f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f40ull));
TAIL_STATIC(0x5e41a0u,5e4);
}
B5e9f40:L5e9f40:{c.instructions+=2;NFSU2_TR(0x5e9f40);
w4(R+4,u32(0x88a320ull));
}
B5e9f45:{NFSU2_TR(0x5e9f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f4aull));
TAIL_STATIC(0x5d9430u,5d9);
}
B5e9f4a:L5e9f4a:{c.instructions+=3;NFSU2_TR(0x5e9f4a);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e9f4f:{NFSU2_TR(0x5e9f4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9f51:{NFSU2_TR(0x5e9f51);
if(r1(R+518)){{goto L5e9f58;}}
}
B5e9f53:L5e9f53:{c.instructions+=1;NFSU2_TR(0x5e9f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f58ull));
TAIL_STATIC(0x5e23d0u,5e2);
}
B5e9f58:L5e9f58:{c.instructions+=3;NFSU2_TR(0x5e9f58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9f59:{NFSU2_TR(0x5e9f59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9f5a:{NFSU2_TR(0x5e9f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f5full));
TAIL_STATIC(0x5e27d0u,5e2);
}
B5e9f5f:L5e9f5f:{c.instructions+=2;NFSU2_TR(0x5e9f5f);
__builtin_memmove((R+24),(R+0),4);
}
B5e9f61:{NFSU2_TR(0x5e9f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f66ull));
TAIL_STATIC(0x5e2bd0u,5e2);
}
B5e9f66:L5e9f66:{c.instructions+=3;NFSU2_TR(0x5e9f66);
s4(0x883db4,u32(u32(m4(0x883db4))-u32(r4(R+24))));
}
B5e9f6c:{NFSU2_TR(0x5e9f6c);
w4(R+4,u32(0x88a320ull));
}
B5e9f71:{NFSU2_TR(0x5e9f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f76ull));
TAIL_STATIC(0x5de990u,5de);
}
B5e9f76:L5e9f76:{c.instructions+=2;NFSU2_TR(0x5e9f76);
w4(R+4,u32(0x88a320ull));
}
B5e9f7b:{NFSU2_TR(0x5e9f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f80ull));
TAIL_STATIC(0x5d9710u,5d9);
}
B5e9f80:L5e9f80:{c.instructions+=3;NFSU2_TR(0x5e9f80);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e9f85:{NFSU2_TR(0x5e9f85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9f87:{NFSU2_TR(0x5e9f87);
if(r1(R+518)){{goto L5e9fb8;}}
}
B5e9f89:L5e9f89:{c.instructions+=1;NFSU2_TR(0x5e9f89);
__builtin_memmove((R+16),(R+16),4);
}
B5e9f90:L5e9f90:{c.instructions+=1;NFSU2_TR(0x5e9f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f95ull));
TAIL_STATIC(0x5e23d0u,5e2);
}
B5e9f95:L5e9f95:{c.instructions+=2;NFSU2_TR(0x5e9f95);
__builtin_memmove((R+12),(R+0),1);
}
B5e9f97:{NFSU2_TR(0x5e9f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9f9cull));
TAIL_STATIC(0x5e1e80u,5e1);
}
B5e9f9c:L5e9f9c:{c.instructions+=2;NFSU2_TR(0x5e9f9c);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5e9f9e:{NFSU2_TR(0x5e9f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9fa3ull));
TAIL_STATIC(0x5e2130u,5e2);
}
B5e9fa3:L5e9fa3:{c.instructions+=2;NFSU2_TR(0x5e9fa3);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5e9fa5:{NFSU2_TR(0x5e9fa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9f90u);}goto L5e9f90;}}
}
B5e9fa7:L5e9fa7:{c.instructions+=1;NFSU2_TR(0x5e9fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9facull));
TAIL_STATIC(0x5e2750u,5e2);
}
B5e9fac:L5e9fac:{c.instructions+=1;NFSU2_TR(0x5e9fac);
{goto L5e9fc1;}
}
B5e9fae:L5e9fae:{c.instructions+=2;NFSU2_TR(0x5e9fae);
w4(R+0,u32(0x125dull));
}
B5e9fb3:{NFSU2_TR(0x5e9fb3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9f04u);}goto L5e9f04;}
}
B5e9fb8:L5e9fb8:{c.instructions+=1;NFSU2_TR(0x5e9fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9fbdull));
TAIL_STATIC(0x5e2130u,5e2);
}
B5e9fbd:L5e9fbd:{c.instructions+=2;NFSU2_TR(0x5e9fbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9fbf:{NFSU2_TR(0x5e9fbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e9fb8u);}goto L5e9fb8;}}
}
B5e9fc1:L5e9fc1:{c.instructions+=2;NFSU2_TR(0x5e9fc1);
w4(R+4,u32(0x88a320ull));
}
B5e9fc6:{NFSU2_TR(0x5e9fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9fcbull));
TAIL_STATIC(0x5d95f0u,5d9);
}
B5e9fcb:L5e9fcb:{c.instructions+=6;NFSU2_TR(0x5e9fcb);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5e9fd1:{NFSU2_TR(0x5e9fd1);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e9fd6:{NFSU2_TR(0x5e9fd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9fd7:{NFSU2_TR(0x5e9fd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e9fd8:{NFSU2_TR(0x5e9fd8);
w4(R+4,u32(0x88a320ull));
}
B5e9fdd:{NFSU2_TR(0x5e9fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9fe2ull));
TAIL_STATIC(0x5de5c0u,5de);
}
B5e9fe2:L5e9fe2:{c.instructions+=2;NFSU2_TR(0x5e9fe2);
w4(R+4,u32(0x88a320ull));
}
B5e9fe7:{NFSU2_TR(0x5e9fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9fecull));
TAIL_STATIC(0x5de8d0u,5de);
}
B5e9fec:L5e9fec:{c.instructions+=1;NFSU2_TR(0x5e9fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9ff1ull));
TAIL_STATIC(0x5d8860u,5d8);
}
B5e9ff1:L5e9ff1:{c.instructions+=2;NFSU2_TR(0x5e9ff1);
__builtin_memmove((R+24),(R+0),4);
}
B5e9ff3:{NFSU2_TR(0x5e9ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e9ff8ull));
TAIL_STATIC(0x5e2bd0u,5e2);
}
B5e9ff8:L5e9ff8:{c.instructions+=2;NFSU2_TR(0x5e9ff8);
s4(0x883db4,u32(u32(m4(0x883db4))-u32(r4(R+24))));
}
B5e9ffe:{NFSU2_TR(0x5e9ffe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
TAIL_STATIC(0x5ea000u,5ea);
}
XIT:NFSU2_TR_EXIT(0x5e9,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
