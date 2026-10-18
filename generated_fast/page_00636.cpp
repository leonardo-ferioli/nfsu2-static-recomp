#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_635(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x636,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x636,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_636(u8* __restrict R,Cpu& c);
u32 page_636(Cpu& c){return body_636(c.regs.data(),c);}
__attribute__((noinline)) u32 body_636(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x636001:goto L636001;
case 0x636006:c.instructions+=2;goto B636006;
case 0x636008:c.instructions+=1;goto B636008;
case 0x63600a:goto L63600a;
case 0x636010:c.instructions+=7;goto B636010;
case 0x636013:c.instructions+=6;goto B636013;
case 0x636016:c.instructions+=5;goto B636016;
case 0x636019:c.instructions+=4;goto B636019;
case 0x63601c:c.instructions+=3;goto B63601c;
case 0x63601e:c.instructions+=2;goto B63601e;
case 0x636020:c.instructions+=1;goto B636020;
case 0x636022:goto L636022;
case 0x636025:c.instructions+=1;goto B636025;
case 0x636028:goto L636028;
case 0x63602a:c.instructions+=3;goto B63602a;
case 0x63602d:c.instructions+=2;goto B63602d;
case 0x636030:c.instructions+=1;goto B636030;
case 0x636036:goto L636036;
case 0x636038:c.instructions+=1;goto B636038;
case 0x63603e:goto L63603e;
case 0x63603f:c.instructions+=3;goto B63603f;
case 0x636042:c.instructions+=2;goto B636042;
case 0x636044:c.instructions+=1;goto B636044;
case 0x636046:goto L636046;
case 0x63604e:goto L63604e;
case 0x636053:c.instructions+=1;goto B636053;
case 0x636058:goto L636058;
case 0x63605c:c.instructions+=5;goto B63605c;
case 0x636060:c.instructions+=4;goto B636060;
case 0x636063:c.instructions+=3;goto B636063;
case 0x636068:c.instructions+=2;goto B636068;
case 0x63606a:c.instructions+=1;goto B63606a;
case 0x63606c:goto L63606c;
case 0x636072:c.instructions+=7;goto B636072;
case 0x636075:c.instructions+=6;goto B636075;
case 0x636078:c.instructions+=5;goto B636078;
case 0x63607b:c.instructions+=4;goto B63607b;
case 0x63607e:c.instructions+=3;goto B63607e;
case 0x636080:c.instructions+=2;goto B636080;
case 0x636082:c.instructions+=1;goto B636082;
case 0x636084:goto L636084;
case 0x636087:c.instructions+=2;goto B636087;
case 0x63608a:c.instructions+=1;goto B63608a;
case 0x636090:goto L636090;
case 0x636092:c.instructions+=3;goto B636092;
case 0x636095:c.instructions+=2;goto B636095;
case 0x636098:c.instructions+=1;goto B636098;
case 0x63609e:goto L63609e;
case 0x6360a0:c.instructions+=1;goto B6360a0;
case 0x6360a6:goto L6360a6;
case 0x6360a7:c.instructions+=3;goto B6360a7;
case 0x6360aa:c.instructions+=2;goto B6360aa;
case 0x6360ac:c.instructions+=1;goto B6360ac;
case 0x6360ae:goto L6360ae;
case 0x6360b6:goto L6360b6;
case 0x6360ba:c.instructions+=13;goto B6360ba;
case 0x6360be:c.instructions+=12;goto B6360be;
case 0x6360c2:c.instructions+=11;goto B6360c2;
case 0x6360c6:c.instructions+=10;goto B6360c6;
case 0x6360c7:c.instructions+=9;goto B6360c7;
case 0x6360ce:c.instructions+=8;goto B6360ce;
case 0x6360cf:c.instructions+=7;goto B6360cf;
case 0x6360d0:c.instructions+=6;goto B6360d0;
case 0x6360d3:c.instructions+=5;goto B6360d3;
case 0x6360d9:c.instructions+=4;goto B6360d9;
case 0x6360da:c.instructions+=3;goto B6360da;
case 0x6360e0:c.instructions+=2;goto B6360e0;
case 0x6360e1:c.instructions+=1;goto B6360e1;
case 0x6360e6:goto L6360e6;
case 0x6360ea:c.instructions+=3;goto B6360ea;
case 0x6360ed:c.instructions+=2;goto B6360ed;
case 0x6360ef:c.instructions+=1;goto B6360ef;
case 0x6360f5:goto L6360f5;
case 0x6360fb:c.instructions+=3;goto B6360fb;
case 0x6360fc:c.instructions+=2;goto B6360fc;
case 0x6360fd:c.instructions+=1;goto B6360fd;
case 0x636102:goto L636102;
case 0x636108:c.instructions+=3;goto B636108;
case 0x63610b:c.instructions+=2;goto B63610b;
case 0x63610d:c.instructions+=1;goto B63610d;
case 0x63610f:goto L63610f;
case 0x636111:goto L636111;
case 0x636117:c.instructions+=2;goto B636117;
case 0x636119:c.instructions+=1;goto B636119;
case 0x63611b:goto L63611b;
case 0x63611c:c.instructions+=2;goto B63611c;
case 0x63611f:c.instructions+=1;goto B63611f;
case 0x636121:goto L636121;
case 0x636123:goto L636123;
case 0x636125:c.instructions+=1;goto B636125;
case 0x63612b:goto L63612b;
case 0x63612e:c.instructions+=2;goto B63612e;
case 0x636132:c.instructions+=1;goto B636132;
case 0x636137:goto L636137;
case 0x636139:c.instructions+=1;goto B636139;
case 0x63613f:goto L63613f;
case 0x636142:c.instructions+=2;goto B636142;
case 0x636146:c.instructions+=1;goto B636146;
case 0x63614b:goto L63614b;
case 0x63614d:c.instructions+=1;goto B63614d;
case 0x636153:goto L636153;
case 0x636156:c.instructions+=2;goto B636156;
case 0x63615a:c.instructions+=1;goto B63615a;
case 0x63615f:goto L63615f;
case 0x636165:c.instructions+=1;goto B636165;
case 0x63616c:goto L63616c;
case 0x636172:c.instructions+=2;goto B636172;
case 0x636174:c.instructions+=1;goto B636174;
case 0x63617a:goto L63617a;
case 0x63617f:c.instructions+=1;goto B63617f;
case 0x636184:goto L636184;
case 0x636188:c.instructions+=5;goto B636188;
case 0x63618c:c.instructions+=4;goto B63618c;
case 0x63618f:c.instructions+=3;goto B63618f;
case 0x636194:c.instructions+=2;goto B636194;
case 0x636196:c.instructions+=1;goto B636196;
case 0x636198:goto L636198;
case 0x63619e:c.instructions+=7;goto B63619e;
case 0x6361a1:c.instructions+=6;goto B6361a1;
case 0x6361a4:c.instructions+=5;goto B6361a4;
case 0x6361a7:c.instructions+=4;goto B6361a7;
case 0x6361aa:c.instructions+=3;goto B6361aa;
case 0x6361ac:c.instructions+=2;goto B6361ac;
case 0x6361ae:c.instructions+=1;goto B6361ae;
case 0x6361b0:goto L6361b0;
case 0x6361b3:c.instructions+=1;goto B6361b3;
case 0x6361b6:goto L6361b6;
case 0x6361b8:c.instructions+=3;goto B6361b8;
case 0x6361bb:c.instructions+=2;goto B6361bb;
case 0x6361be:c.instructions+=1;goto B6361be;
case 0x6361c4:goto L6361c4;
case 0x6361c6:c.instructions+=1;goto B6361c6;
case 0x6361cc:goto L6361cc;
case 0x6361cd:c.instructions+=3;goto B6361cd;
case 0x6361d0:c.instructions+=2;goto B6361d0;
case 0x6361d2:c.instructions+=1;goto B6361d2;
case 0x6361d4:goto L6361d4;
case 0x6361dc:goto L6361dc;
case 0x6361e1:c.instructions+=1;goto B6361e1;
case 0x6361e6:goto L6361e6;
case 0x6361ea:c.instructions+=5;goto B6361ea;
case 0x6361ee:c.instructions+=4;goto B6361ee;
case 0x6361f1:c.instructions+=3;goto B6361f1;
case 0x6361f6:c.instructions+=2;goto B6361f6;
case 0x6361f8:c.instructions+=1;goto B6361f8;
case 0x6361fa:goto L6361fa;
case 0x636200:c.instructions+=7;goto B636200;
case 0x636203:c.instructions+=6;goto B636203;
case 0x636206:c.instructions+=5;goto B636206;
case 0x636209:c.instructions+=4;goto B636209;
case 0x63620c:c.instructions+=3;goto B63620c;
case 0x63620e:c.instructions+=2;goto B63620e;
case 0x636210:c.instructions+=1;goto B636210;
case 0x636212:goto L636212;
case 0x636215:c.instructions+=1;goto B636215;
case 0x636218:goto L636218;
case 0x63621a:c.instructions+=3;goto B63621a;
case 0x63621d:c.instructions+=2;goto B63621d;
case 0x636220:c.instructions+=1;goto B636220;
case 0x636226:goto L636226;
case 0x636228:c.instructions+=1;goto B636228;
case 0x63622e:goto L63622e;
case 0x63622f:c.instructions+=3;goto B63622f;
case 0x636232:c.instructions+=2;goto B636232;
case 0x636234:c.instructions+=1;goto B636234;
case 0x636236:goto L636236;
case 0x63623e:goto L63623e;
case 0x636243:c.instructions+=1;goto B636243;
case 0x636248:goto L636248;
case 0x63624c:c.instructions+=5;goto B63624c;
case 0x636250:c.instructions+=4;goto B636250;
case 0x636253:c.instructions+=3;goto B636253;
case 0x636258:c.instructions+=2;goto B636258;
case 0x63625a:c.instructions+=1;goto B63625a;
case 0x63625c:goto L63625c;
case 0x636262:c.instructions+=7;goto B636262;
case 0x636265:c.instructions+=6;goto B636265;
case 0x636268:c.instructions+=5;goto B636268;
case 0x63626b:c.instructions+=4;goto B63626b;
case 0x63626e:c.instructions+=3;goto B63626e;
case 0x636270:c.instructions+=2;goto B636270;
case 0x636272:c.instructions+=1;goto B636272;
case 0x636274:goto L636274;
case 0x636277:c.instructions+=2;goto B636277;
case 0x63627a:c.instructions+=1;goto B63627a;
case 0x636280:goto L636280;
case 0x636282:c.instructions+=3;goto B636282;
case 0x636285:c.instructions+=2;goto B636285;
case 0x636288:c.instructions+=1;goto B636288;
case 0x63628e:goto L63628e;
case 0x636290:c.instructions+=1;goto B636290;
case 0x636296:goto L636296;
case 0x636297:c.instructions+=3;goto B636297;
case 0x63629a:c.instructions+=2;goto B63629a;
case 0x63629c:c.instructions+=1;goto B63629c;
case 0x63629e:goto L63629e;
case 0x6362a6:goto L6362a6;
case 0x6362aa:c.instructions+=13;goto B6362aa;
case 0x6362ae:c.instructions+=12;goto B6362ae;
case 0x6362b2:c.instructions+=11;goto B6362b2;
case 0x6362b6:c.instructions+=10;goto B6362b6;
case 0x6362b7:c.instructions+=9;goto B6362b7;
case 0x6362be:c.instructions+=8;goto B6362be;
case 0x6362bf:c.instructions+=7;goto B6362bf;
case 0x6362c0:c.instructions+=6;goto B6362c0;
case 0x6362c3:c.instructions+=5;goto B6362c3;
case 0x6362c9:c.instructions+=4;goto B6362c9;
case 0x6362ca:c.instructions+=3;goto B6362ca;
case 0x6362d0:c.instructions+=2;goto B6362d0;
case 0x6362d1:c.instructions+=1;goto B6362d1;
case 0x6362d6:goto L6362d6;
case 0x6362d9:goto L6362d9;
case 0x6362df:c.instructions+=4;goto B6362df;
case 0x6362e5:c.instructions+=3;goto B6362e5;
case 0x6362e7:c.instructions+=2;goto B6362e7;
case 0x6362eb:c.instructions+=1;goto B6362eb;
case 0x6362f1:goto L6362f1;
case 0x6362f6:c.instructions+=1;goto B6362f6;
case 0x6362fb:goto L6362fb;
case 0x6362ff:c.instructions+=5;goto B6362ff;
case 0x636303:c.instructions+=4;goto B636303;
case 0x636306:c.instructions+=3;goto B636306;
case 0x63630b:c.instructions+=2;goto B63630b;
case 0x63630d:c.instructions+=1;goto B63630d;
case 0x636313:goto L636313;
case 0x636319:c.instructions+=7;goto B636319;
case 0x63631c:c.instructions+=6;goto B63631c;
case 0x63631f:c.instructions+=5;goto B63631f;
case 0x636322:c.instructions+=4;goto B636322;
case 0x636325:c.instructions+=3;goto B636325;
case 0x636327:c.instructions+=2;goto B636327;
case 0x636329:c.instructions+=1;goto B636329;
case 0x63632f:goto L63632f;
case 0x636332:c.instructions+=1;goto B636332;
case 0x636335:goto L636335;
case 0x636337:c.instructions+=3;goto B636337;
case 0x63633a:c.instructions+=2;goto B63633a;
case 0x63633d:c.instructions+=1;goto B63633d;
case 0x63633f:goto L63633f;
case 0x636341:c.instructions+=1;goto B636341;
case 0x636343:goto L636343;
case 0x636344:c.instructions+=3;goto B636344;
case 0x636347:c.instructions+=2;goto B636347;
case 0x636349:c.instructions+=1;goto B636349;
case 0x63634b:goto L63634b;
case 0x636350:goto L636350;
case 0x636352:c.instructions+=1;goto B636352;
case 0x636358:goto L636358;
case 0x63635b:c.instructions+=2;goto B63635b;
case 0x63635f:c.instructions+=1;goto B63635f;
case 0x636364:goto L636364;
case 0x636366:c.instructions+=1;goto B636366;
case 0x63636c:goto L63636c;
case 0x63636f:c.instructions+=2;goto B63636f;
case 0x636373:c.instructions+=1;goto B636373;
case 0x636378:goto L636378;
case 0x63637a:c.instructions+=1;goto B63637a;
case 0x636380:goto L636380;
case 0x636383:c.instructions+=2;goto B636383;
case 0x636387:c.instructions+=1;goto B636387;
case 0x63638c:goto L63638c;
case 0x63638e:c.instructions+=1;goto B63638e;
case 0x636394:goto L636394;
case 0x636397:c.instructions+=2;goto B636397;
case 0x636399:c.instructions+=1;goto B636399;
case 0x63639f:goto L63639f;
case 0x6363a3:c.instructions+=2;goto B6363a3;
case 0x6363a8:c.instructions+=1;goto B6363a8;
case 0x6363ad:goto L6363ad;
case 0x6363af:c.instructions+=2;goto B6363af;
case 0x6363b1:c.instructions+=1;goto B6363b1;
case 0x6363b7:goto L6363b7;
case 0x6363bc:c.instructions+=2;goto B6363bc;
case 0x6363bd:c.instructions+=1;goto B6363bd;
case 0x6363c2:goto L6363c2;
case 0x6363c5:c.instructions+=2;goto B6363c5;
case 0x6363c7:c.instructions+=1;goto B6363c7;
case 0x6363c9:goto L6363c9;
case 0x6363cc:c.instructions+=22;goto B6363cc;
case 0x6363cf:c.instructions+=21;goto B6363cf;
case 0x6363d2:c.instructions+=20;goto B6363d2;
case 0x6363d5:c.instructions+=19;goto B6363d5;
case 0x6363d8:c.instructions+=18;goto B6363d8;
case 0x6363db:c.instructions+=17;goto B6363db;
case 0x6363de:c.instructions+=16;goto B6363de;
case 0x6363e1:c.instructions+=15;goto B6363e1;
case 0x6363e3:c.instructions+=14;goto B6363e3;
case 0x6363e6:c.instructions+=13;goto B6363e6;
case 0x6363ea:c.instructions+=12;goto B6363ea;
case 0x6363ed:c.instructions+=11;goto B6363ed;
case 0x6363f0:c.instructions+=10;goto B6363f0;
case 0x6363f2:c.instructions+=9;goto B6363f2;
case 0x6363f5:c.instructions+=8;goto B6363f5;
case 0x6363f9:c.instructions+=7;goto B6363f9;
case 0x6363fc:c.instructions+=6;goto B6363fc;
case 0x6363ff:c.instructions+=5;goto B6363ff;
case 0x636401:c.instructions+=4;goto B636401;
case 0x636404:c.instructions+=3;goto B636404;
case 0x636408:c.instructions+=2;goto B636408;
case 0x63640b:c.instructions+=1;goto B63640b;
case 0x63640d:goto L63640d;
case 0x63640f:goto L63640f;
case 0x636413:c.instructions+=4;goto B636413;
case 0x636416:c.instructions+=3;goto B636416;
case 0x636419:c.instructions+=2;goto B636419;
case 0x63641b:c.instructions+=1;goto B63641b;
case 0x63641d:goto L63641d;
case 0x636422:c.instructions+=1;goto B636422;
case 0x636427:goto L636427;
case 0x63642b:c.instructions+=5;goto B63642b;
case 0x63642f:c.instructions+=4;goto B63642f;
case 0x636432:c.instructions+=3;goto B636432;
case 0x636437:c.instructions+=2;goto B636437;
case 0x636439:c.instructions+=1;goto B636439;
case 0x63643f:goto L63643f;
case 0x636445:c.instructions+=7;goto B636445;
case 0x636448:c.instructions+=6;goto B636448;
case 0x63644b:c.instructions+=5;goto B63644b;
case 0x63644e:c.instructions+=4;goto B63644e;
case 0x636451:c.instructions+=3;goto B636451;
case 0x636453:c.instructions+=2;goto B636453;
case 0x636455:c.instructions+=1;goto B636455;
case 0x63645b:goto L63645b;
case 0x63645e:c.instructions+=1;goto B63645e;
case 0x636461:goto L636461;
case 0x636463:c.instructions+=3;goto B636463;
case 0x636466:c.instructions+=2;goto B636466;
case 0x636469:c.instructions+=1;goto B636469;
case 0x63646b:goto L63646b;
case 0x63646d:c.instructions+=1;goto B63646d;
case 0x63646f:goto L63646f;
case 0x636470:c.instructions+=3;goto B636470;
case 0x636473:c.instructions+=2;goto B636473;
case 0x636475:c.instructions+=1;goto B636475;
case 0x636477:goto L636477;
case 0x63647c:goto L63647c;
case 0x63647e:c.instructions+=1;goto B63647e;
case 0x636484:goto L636484;
case 0x636487:c.instructions+=2;goto B636487;
case 0x636489:c.instructions+=1;goto B636489;
case 0x63648f:goto L63648f;
case 0x636493:c.instructions+=2;goto B636493;
case 0x636498:c.instructions+=1;goto B636498;
case 0x63649d:goto L63649d;
case 0x63649f:c.instructions+=2;goto B63649f;
case 0x6364a1:c.instructions+=1;goto B6364a1;
case 0x6364a7:goto L6364a7;
case 0x6364ac:c.instructions+=2;goto B6364ac;
case 0x6364ad:c.instructions+=1;goto B6364ad;
case 0x6364b2:goto L6364b2;
case 0x6364b5:c.instructions+=2;goto B6364b5;
case 0x6364b7:c.instructions+=1;goto B6364b7;
case 0x6364b9:goto L6364b9;
case 0x6364bc:c.instructions+=22;goto B6364bc;
case 0x6364bf:c.instructions+=21;goto B6364bf;
case 0x6364c2:c.instructions+=20;goto B6364c2;
case 0x6364c5:c.instructions+=19;goto B6364c5;
case 0x6364c8:c.instructions+=18;goto B6364c8;
case 0x6364cb:c.instructions+=17;goto B6364cb;
case 0x6364ce:c.instructions+=16;goto B6364ce;
case 0x6364d1:c.instructions+=15;goto B6364d1;
case 0x6364d3:c.instructions+=14;goto B6364d3;
case 0x6364d6:c.instructions+=13;goto B6364d6;
case 0x6364da:c.instructions+=12;goto B6364da;
case 0x6364dd:c.instructions+=11;goto B6364dd;
case 0x6364e0:c.instructions+=10;goto B6364e0;
case 0x6364e2:c.instructions+=9;goto B6364e2;
case 0x6364e5:c.instructions+=8;goto B6364e5;
case 0x6364e9:c.instructions+=7;goto B6364e9;
case 0x6364ec:c.instructions+=6;goto B6364ec;
case 0x6364ef:c.instructions+=5;goto B6364ef;
case 0x6364f1:c.instructions+=4;goto B6364f1;
case 0x6364f4:c.instructions+=3;goto B6364f4;
case 0x6364f8:c.instructions+=2;goto B6364f8;
case 0x6364fb:c.instructions+=1;goto B6364fb;
case 0x6364fd:goto L6364fd;
case 0x6364ff:goto L6364ff;
case 0x636502:c.instructions+=9;goto B636502;
case 0x636504:c.instructions+=8;goto B636504;
case 0x636507:c.instructions+=7;goto B636507;
case 0x63650a:c.instructions+=6;goto B63650a;
case 0x63650e:c.instructions+=5;goto B63650e;
case 0x636512:c.instructions+=4;goto B636512;
case 0x636515:c.instructions+=3;goto B636515;
case 0x636518:c.instructions+=2;goto B636518;
case 0x63651a:c.instructions+=1;goto B63651a;
case 0x63651c:goto L63651c;
case 0x636520:c.instructions+=4;goto B636520;
case 0x636523:c.instructions+=3;goto B636523;
case 0x636525:c.instructions+=2;goto B636525;
case 0x636528:c.instructions+=1;goto B636528;
case 0x63652d:goto L63652d;
case 0x63652f:c.instructions+=7;goto B63652f;
case 0x636532:c.instructions+=6;goto B636532;
case 0x636535:c.instructions+=5;goto B636535;
case 0x63653a:c.instructions+=4;goto B63653a;
case 0x63653e:c.instructions+=3;goto B63653e;
case 0x636542:c.instructions+=2;goto B636542;
case 0x636546:c.instructions+=1;goto B636546;
case 0x63654b:goto L63654b;
case 0x63654f:c.instructions+=4;goto B63654f;
case 0x636553:c.instructions+=3;goto B636553;
case 0x636556:c.instructions+=2;goto B636556;
case 0x63655b:c.instructions+=1;goto B63655b;
case 0x63655d:goto L63655d;
case 0x636563:c.instructions+=7;goto B636563;
case 0x636566:c.instructions+=6;goto B636566;
case 0x636569:c.instructions+=5;goto B636569;
case 0x63656d:c.instructions+=4;goto B63656d;
case 0x636570:c.instructions+=3;goto B636570;
case 0x636572:c.instructions+=2;goto B636572;
case 0x636574:c.instructions+=1;goto B636574;
case 0x636576:goto L636576;
case 0x636579:c.instructions+=2;goto B636579;
case 0x63657c:c.instructions+=1;goto B63657c;
case 0x636580:goto L636580;
case 0x636582:c.instructions+=3;goto B636582;
case 0x636585:c.instructions+=2;goto B636585;
case 0x636588:c.instructions+=1;goto B636588;
case 0x63658e:goto L63658e;
case 0x636590:c.instructions+=1;goto B636590;
case 0x636596:goto L636596;
case 0x636597:c.instructions+=3;goto B636597;
case 0x63659a:c.instructions+=2;goto B63659a;
case 0x63659c:c.instructions+=1;goto B63659c;
case 0x63659e:goto L63659e;
case 0x6365a2:goto L6365a2;
case 0x6365a7:c.instructions+=1;goto B6365a7;
case 0x6365ac:goto L6365ac;
case 0x6365b0:c.instructions+=5;goto B6365b0;
case 0x6365b4:c.instructions+=4;goto B6365b4;
case 0x6365b8:c.instructions+=3;goto B6365b8;
case 0x6365bb:c.instructions+=2;goto B6365bb;
case 0x6365c0:c.instructions+=1;goto B6365c0;
case 0x6365c6:goto L6365c6;
case 0x6365cb:c.instructions+=7;goto B6365cb;
case 0x6365ce:c.instructions+=6;goto B6365ce;
case 0x6365d1:c.instructions+=5;goto B6365d1;
case 0x6365d5:c.instructions+=4;goto B6365d5;
case 0x6365d8:c.instructions+=3;goto B6365d8;
case 0x6365da:c.instructions+=2;goto B6365da;
case 0x6365dc:c.instructions+=1;goto B6365dc;
case 0x6365e2:goto L6365e2;
case 0x6365e5:c.instructions+=3;goto B6365e5;
case 0x6365e9:c.instructions+=2;goto B6365e9;
case 0x6365ec:c.instructions+=1;goto B6365ec;
case 0x6365f0:goto L6365f0;
case 0x6365f3:c.instructions+=5;goto B6365f3;
case 0x6365f7:c.instructions+=4;goto B6365f7;
case 0x6365fa:c.instructions+=3;goto B6365fa;
case 0x6365fe:c.instructions+=2;goto B6365fe;
case 0x636600:c.instructions+=1;goto B636600;
case 0x636606:goto L636606;
case 0x636608:c.instructions+=1;goto B636608;
case 0x63660e:goto L63660e;
case 0x63660f:c.instructions+=3;goto B63660f;
case 0x636612:c.instructions+=2;goto B636612;
case 0x636614:c.instructions+=1;goto B636614;
case 0x636616:goto L636616;
case 0x63661b:goto L63661b;
case 0x63661d:c.instructions+=1;goto B63661d;
case 0x636623:goto L636623;
case 0x636626:c.instructions+=2;goto B636626;
case 0x636628:c.instructions+=1;goto B636628;
case 0x63662e:goto L63662e;
case 0x636633:c.instructions+=2;goto B636633;
case 0x636634:c.instructions+=1;goto B636634;
case 0x636639:goto L636639;
case 0x63663d:c.instructions+=3;goto B63663d;
case 0x636640:c.instructions+=2;goto B636640;
case 0x636642:c.instructions+=1;goto B636642;
case 0x636644:goto L636644;
case 0x636647:c.instructions+=23;goto B636647;
case 0x63664a:c.instructions+=22;goto B63664a;
case 0x63664e:c.instructions+=21;goto B63664e;
case 0x636651:c.instructions+=20;goto B636651;
case 0x636658:c.instructions+=19;goto B636658;
case 0x63665c:c.instructions+=18;goto B63665c;
case 0x636660:c.instructions+=17;goto B636660;
case 0x636663:c.instructions+=16;goto B636663;
case 0x636667:c.instructions+=15;goto B636667;
case 0x63666b:c.instructions+=14;goto B63666b;
case 0x63666d:c.instructions+=13;goto B63666d;
case 0x636671:c.instructions+=12;goto B636671;
case 0x636674:c.instructions+=11;goto B636674;
case 0x636678:c.instructions+=10;goto B636678;
case 0x63667c:c.instructions+=9;goto B63667c;
case 0x63667f:c.instructions+=8;goto B63667f;
case 0x636681:c.instructions+=7;goto B636681;
case 0x636685:c.instructions+=6;goto B636685;
case 0x636688:c.instructions+=5;goto B636688;
case 0x63668b:c.instructions+=4;goto B63668b;
case 0x63668d:c.instructions+=3;goto B63668d;
case 0x636691:c.instructions+=2;goto B636691;
case 0x636694:c.instructions+=1;goto B636694;
case 0x636696:goto L636696;
case 0x636698:goto L636698;
case 0x63669b:c.instructions+=11;goto B63669b;
case 0x63669d:c.instructions+=10;goto B63669d;
case 0x6366a1:c.instructions+=9;goto B6366a1;
case 0x6366a5:c.instructions+=8;goto B6366a5;
case 0x6366a8:c.instructions+=7;goto B6366a8;
case 0x6366ae:c.instructions+=6;goto B6366ae;
case 0x6366b1:c.instructions+=5;goto B6366b1;
case 0x6366b4:c.instructions+=4;goto B6366b4;
case 0x6366b7:c.instructions+=3;goto B6366b7;
case 0x6366b9:c.instructions+=2;goto B6366b9;
case 0x6366bb:c.instructions+=1;goto B6366bb;
case 0x6366c0:goto L6366c0;
case 0x6366c2:c.instructions+=1;goto B6366c2;
case 0x6366c8:goto L6366c8;
case 0x6366cb:c.instructions+=2;goto B6366cb;
case 0x6366cd:c.instructions+=1;goto B6366cd;
case 0x6366d3:goto L6366d3;
case 0x6366d9:c.instructions+=2;goto B6366d9;
case 0x6366da:c.instructions+=1;goto B6366da;
case 0x6366df:goto L6366df;
case 0x6366e2:c.instructions+=2;goto B6366e2;
case 0x6366e4:c.instructions+=1;goto B6366e4;
case 0x6366e6:goto L6366e6;
case 0x6366e9:c.instructions+=23;goto B6366e9;
case 0x6366ec:c.instructions+=22;goto B6366ec;
case 0x6366f0:c.instructions+=21;goto B6366f0;
case 0x6366f3:c.instructions+=20;goto B6366f3;
case 0x6366fa:c.instructions+=19;goto B6366fa;
case 0x6366fe:c.instructions+=18;goto B6366fe;
case 0x636702:c.instructions+=17;goto B636702;
case 0x636705:c.instructions+=16;goto B636705;
case 0x636709:c.instructions+=15;goto B636709;
case 0x63670d:c.instructions+=14;goto B63670d;
case 0x63670f:c.instructions+=13;goto B63670f;
case 0x636713:c.instructions+=12;goto B636713;
case 0x636716:c.instructions+=11;goto B636716;
case 0x63671a:c.instructions+=10;goto B63671a;
case 0x63671e:c.instructions+=9;goto B63671e;
case 0x636721:c.instructions+=8;goto B636721;
case 0x636723:c.instructions+=7;goto B636723;
case 0x636727:c.instructions+=6;goto B636727;
case 0x63672a:c.instructions+=5;goto B63672a;
case 0x63672d:c.instructions+=4;goto B63672d;
case 0x63672f:c.instructions+=3;goto B63672f;
case 0x636733:c.instructions+=2;goto B636733;
case 0x636736:c.instructions+=1;goto B636736;
case 0x636738:goto L636738;
case 0x63673a:goto L63673a;
case 0x63673e:c.instructions+=5;goto B63673e;
case 0x636744:c.instructions+=4;goto B636744;
case 0x63674a:c.instructions+=3;goto B63674a;
case 0x63674d:c.instructions+=2;goto B63674d;
case 0x63674f:c.instructions+=1;goto B63674f;
case 0x636751:goto L636751;
case 0x636755:c.instructions+=4;goto B636755;
case 0x636758:c.instructions+=3;goto B636758;
case 0x63675e:c.instructions+=2;goto B63675e;
case 0x636760:c.instructions+=1;goto B636760;
case 0x636766:goto L636766;
case 0x63676b:c.instructions+=1;goto B63676b;
case 0x636770:goto L636770;
case 0x636774:c.instructions+=3;goto B636774;
case 0x636777:c.instructions+=2;goto B636777;
case 0x63677c:c.instructions+=1;goto B63677c;
case 0x63677e:goto L63677e;
case 0x636784:c.instructions+=7;goto B636784;
case 0x636787:c.instructions+=6;goto B636787;
case 0x63678a:c.instructions+=5;goto B63678a;
case 0x63678e:c.instructions+=4;goto B63678e;
case 0x636791:c.instructions+=3;goto B636791;
case 0x636793:c.instructions+=2;goto B636793;
case 0x636795:c.instructions+=1;goto B636795;
case 0x636797:goto L636797;
case 0x63679a:c.instructions+=2;goto B63679a;
case 0x63679d:c.instructions+=1;goto B63679d;
case 0x6367a0:goto L6367a0;
case 0x6367a2:c.instructions+=3;goto B6367a2;
case 0x6367a5:c.instructions+=2;goto B6367a5;
case 0x6367a8:c.instructions+=1;goto B6367a8;
case 0x6367aa:goto L6367aa;
case 0x6367ac:c.instructions+=1;goto B6367ac;
case 0x6367ae:goto L6367ae;
case 0x6367af:c.instructions+=3;goto B6367af;
case 0x6367b2:c.instructions+=2;goto B6367b2;
case 0x6367b4:c.instructions+=1;goto B6367b4;
case 0x6367b6:goto L6367b6;
case 0x6367b8:goto L6367b8;
case 0x6367bc:c.instructions+=11;goto B6367bc;
case 0x6367be:c.instructions+=10;goto B6367be;
case 0x6367c1:c.instructions+=9;goto B6367c1;
case 0x6367c7:c.instructions+=8;goto B6367c7;
case 0x6367ce:c.instructions+=7;goto B6367ce;
case 0x6367d5:c.instructions+=6;goto B6367d5;
case 0x6367d6:c.instructions+=5;goto B6367d6;
case 0x6367d7:c.instructions+=4;goto B6367d7;
case 0x6367d8:c.instructions+=3;goto B6367d8;
case 0x6367da:c.instructions+=2;goto B6367da;
case 0x6367db:c.instructions+=1;goto B6367db;
case 0x6367dc:goto L6367dc;
case 0x6367de:c.instructions+=1;goto B6367de;
case 0x6367e0:goto L6367e0;
case 0x6367e3:c.instructions+=1;goto B6367e3;
case 0x6367e5:goto L6367e5;
case 0x6367ec:c.instructions+=8;goto B6367ec;
case 0x6367ed:c.instructions+=7;goto B6367ed;
case 0x6367ee:c.instructions+=6;goto B6367ee;
case 0x6367f5:c.instructions+=5;goto B6367f5;
case 0x6367fc:c.instructions+=4;goto B6367fc;
case 0x6367fd:c.instructions+=3;goto B6367fd;
case 0x6367ff:c.instructions+=2;goto B6367ff;
case 0x636800:c.instructions+=1;goto B636800;
case 0x636840:goto L636840;
case 0x636844:c.instructions+=11;goto B636844;
case 0x636845:c.instructions+=10;goto B636845;
case 0x636846:c.instructions+=9;goto B636846;
case 0x636847:c.instructions+=8;goto B636847;
case 0x636849:c.instructions+=7;goto B636849;
case 0x63684b:c.instructions+=6;goto B63684b;
case 0x63684d:c.instructions+=5;goto B63684d;
case 0x63684e:c.instructions+=4;goto B63684e;
case 0x636851:c.instructions+=3;goto B636851;
case 0x636854:c.instructions+=2;goto B636854;
case 0x636855:c.instructions+=1;goto B636855;
case 0x63685a:goto L63685a;
case 0x636860:c.instructions+=6;goto B636860;
case 0x636866:c.instructions+=5;goto B636866;
case 0x63686c:c.instructions+=4;goto B63686c;
case 0x63686f:c.instructions+=3;goto B63686f;
case 0x636872:c.instructions+=2;goto B636872;
case 0x636874:c.instructions+=1;goto B636874;
case 0x636876:goto L636876;
case 0x636879:c.instructions+=1;goto B636879;
case 0x63687c:goto L63687c;
case 0x636882:c.instructions+=2;goto B636882;
case 0x636888:c.instructions+=1;goto B636888;
case 0x63688a:goto L63688a;
case 0x636890:c.instructions+=1;goto B636890;
case 0x636896:goto L636896;
case 0x63689c:c.instructions+=2;goto B63689c;
case 0x6368a2:c.instructions+=1;goto B6368a2;
case 0x6368a4:goto L6368a4;
case 0x6368aa:c.instructions+=1;goto B6368aa;
case 0x6368b0:goto L6368b0;
case 0x6368b6:c.instructions+=2;goto B6368b6;
case 0x6368bc:c.instructions+=1;goto B6368bc;
case 0x6368be:goto L6368be;
case 0x6368c4:c.instructions+=1;goto B6368c4;
case 0x6368ca:goto L6368ca;
case 0x6368d0:c.instructions+=2;goto B6368d0;
case 0x6368d6:c.instructions+=1;goto B6368d6;
case 0x6368d8:goto L6368d8;
case 0x6368de:c.instructions+=1;goto B6368de;
case 0x6368e4:goto L6368e4;
case 0x6368ea:c.instructions+=2;goto B6368ea;
case 0x6368f0:c.instructions+=1;goto B6368f0;
case 0x6368f2:goto L6368f2;
case 0x6368f8:c.instructions+=1;goto B6368f8;
case 0x6368fe:goto L6368fe;
case 0x636904:c.instructions+=2;goto B636904;
case 0x63690a:c.instructions+=1;goto B63690a;
case 0x63690c:goto L63690c;
case 0x636912:c.instructions+=1;goto B636912;
case 0x636918:goto L636918;
case 0x63691e:c.instructions+=2;goto B63691e;
case 0x636924:c.instructions+=1;goto B636924;
case 0x636926:goto L636926;
case 0x63692c:c.instructions+=1;goto B63692c;
case 0x636932:goto L636932;
case 0x636938:c.instructions+=2;goto B636938;
case 0x63693e:c.instructions+=1;goto B63693e;
case 0x636940:goto L636940;
case 0x636946:c.instructions+=1;goto B636946;
case 0x63694c:goto L63694c;
case 0x636952:c.instructions+=3;goto B636952;
case 0x636953:c.instructions+=2;goto B636953;
case 0x636958:c.instructions+=1;goto B636958;
case 0x63695a:goto L63695a;
case 0x63695c:goto L63695c;
case 0x636962:c.instructions+=2;goto B636962;
case 0x636965:c.instructions+=1;goto B636965;
case 0x636967:goto L636967;
case 0x63696a:c.instructions+=1;goto B63696a;
case 0x63696d:goto L63696d;
case 0x636973:c.instructions+=2;goto B636973;
case 0x636979:c.instructions+=1;goto B636979;
case 0x63697b:goto L63697b;
case 0x636981:c.instructions+=1;goto B636981;
case 0x636987:goto L636987;
case 0x63698d:c.instructions+=2;goto B63698d;
case 0x636993:c.instructions+=1;goto B636993;
case 0x636995:goto L636995;
case 0x63699b:c.instructions+=1;goto B63699b;
case 0x6369a1:goto L6369a1;
case 0x6369a6:c.instructions+=1;goto B6369a6;
case 0x6369ab:goto L6369ab;
case 0x6369b1:c.instructions+=3;goto B6369b1;
case 0x6369b4:c.instructions+=2;goto B6369b4;
case 0x6369b6:c.instructions+=1;goto B6369b6;
case 0x6369b8:goto L6369b8;
case 0x6369be:c.instructions+=1;goto B6369be;
case 0x6369c4:goto L6369c4;
case 0x6369c9:c.instructions+=1;goto B6369c9;
case 0x6369ce:goto L6369ce;
case 0x6369d4:c.instructions+=3;goto B6369d4;
case 0x6369d7:c.instructions+=2;goto B6369d7;
case 0x6369d9:c.instructions+=1;goto B6369d9;
case 0x6369db:goto L6369db;
case 0x6369e1:c.instructions+=1;goto B6369e1;
case 0x6369e7:goto L6369e7;
case 0x6369ed:c.instructions+=3;goto B6369ed;
case 0x6369f2:c.instructions+=2;goto B6369f2;
case 0x6369f8:c.instructions+=1;goto B6369f8;
case 0x6369fa:goto L6369fa;
case 0x6369fc:goto L6369fc;
case 0x636a02:c.instructions+=3;goto B636a02;
case 0x636a05:c.instructions+=2;goto B636a05;
case 0x636a06:c.instructions+=1;goto B636a06;
case 0x636a08:goto L636a08;
case 0x636a0b:c.instructions+=1;goto B636a0b;
case 0x636a0e:goto L636a0e;
case 0x636a14:c.instructions+=2;goto B636a14;
case 0x636a1a:c.instructions+=1;goto B636a1a;
case 0x636a1c:goto L636a1c;
case 0x636a22:c.instructions+=1;goto B636a22;
case 0x636a28:goto L636a28;
case 0x636a2e:c.instructions+=2;goto B636a2e;
case 0x636a34:c.instructions+=1;goto B636a34;
case 0x636a36:goto L636a36;
case 0x636a3c:c.instructions+=1;goto B636a3c;
case 0x636a42:goto L636a42;
case 0x636a47:c.instructions+=1;goto B636a47;
case 0x636a4c:goto L636a4c;
case 0x636a52:c.instructions+=3;goto B636a52;
case 0x636a55:c.instructions+=2;goto B636a55;
case 0x636a57:c.instructions+=1;goto B636a57;
case 0x636a59:goto L636a59;
case 0x636a5f:c.instructions+=1;goto B636a5f;
case 0x636a65:goto L636a65;
case 0x636a6b:c.instructions+=2;goto B636a6b;
case 0x636a71:c.instructions+=1;goto B636a71;
case 0x636a73:goto L636a73;
case 0x636a79:c.instructions+=1;goto B636a79;
case 0x636a7f:goto L636a7f;
case 0x636a85:c.instructions+=2;goto B636a85;
case 0x636a8b:c.instructions+=1;goto B636a8b;
case 0x636a8d:goto L636a8d;
case 0x636a93:c.instructions+=1;goto B636a93;
case 0x636a99:goto L636a99;
case 0x636a9f:c.instructions+=2;goto B636a9f;
case 0x636aa5:c.instructions+=1;goto B636aa5;
case 0x636aa7:goto L636aa7;
case 0x636aad:c.instructions+=1;goto B636aad;
case 0x636ab3:goto L636ab3;
case 0x636ab4:c.instructions+=3;goto B636ab4;
case 0x636ab5:c.instructions+=2;goto B636ab5;
case 0x636ab6:c.instructions+=1;goto B636ab6;
case 0x636ac0:goto L636ac0;
case 0x636ac2:c.instructions+=6;goto B636ac2;
case 0x636ac3:c.instructions+=5;goto B636ac3;
case 0x636ac5:c.instructions+=4;goto B636ac5;
case 0x636ac8:c.instructions+=3;goto B636ac8;
case 0x636acb:c.instructions+=2;goto B636acb;
case 0x636ad0:c.instructions+=1;goto B636ad0;
case 0x636ad2:goto L636ad2;
case 0x636ad4:c.instructions+=4;goto B636ad4;
case 0x636ad7:c.instructions+=3;goto B636ad7;
case 0x636ada:c.instructions+=2;goto B636ada;
case 0x636adb:c.instructions+=1;goto B636adb;
case 0x636add:goto L636add;
case 0x636ae0:c.instructions+=1;goto B636ae0;
case 0x636ae5:goto L636ae5;
case 0x636ae7:c.instructions+=4;goto B636ae7;
case 0x636aea:c.instructions+=3;goto B636aea;
case 0x636aed:c.instructions+=2;goto B636aed;
case 0x636aee:c.instructions+=1;goto B636aee;
case 0x636af0:goto L636af0;
case 0x636af3:c.instructions+=1;goto B636af3;
case 0x636af8:goto L636af8;
case 0x636afa:c.instructions+=4;goto B636afa;
case 0x636afd:c.instructions+=3;goto B636afd;
case 0x636b00:c.instructions+=2;goto B636b00;
case 0x636b01:c.instructions+=1;goto B636b01;
case 0x636b03:goto L636b03;
case 0x636b06:c.instructions+=2;goto B636b06;
case 0x636b0b:c.instructions+=1;goto B636b0b;
case 0x636b10:goto L636b10;
case 0x636b12:c.instructions+=4;goto B636b12;
case 0x636b15:c.instructions+=3;goto B636b15;
case 0x636b18:c.instructions+=2;goto B636b18;
case 0x636b19:c.instructions+=1;goto B636b19;
case 0x636b1b:goto L636b1b;
case 0x636b1e:c.instructions+=1;goto B636b1e;
case 0x636b23:goto L636b23;
case 0x636b25:c.instructions+=4;goto B636b25;
case 0x636b28:c.instructions+=3;goto B636b28;
case 0x636b2b:c.instructions+=2;goto B636b2b;
case 0x636b2c:c.instructions+=1;goto B636b2c;
case 0x636b2e:goto L636b2e;
case 0x636b34:c.instructions+=2;goto B636b34;
case 0x636b39:c.instructions+=1;goto B636b39;
case 0x636b40:goto L636b40;
case 0x636b42:c.instructions+=4;goto B636b42;
case 0x636b45:c.instructions+=3;goto B636b45;
case 0x636b48:c.instructions+=2;goto B636b48;
case 0x636b49:c.instructions+=1;goto B636b49;
case 0x636b4b:goto L636b4b;
case 0x636b51:c.instructions+=1;goto B636b51;
case 0x636b56:goto L636b56;
case 0x636b58:c.instructions+=4;goto B636b58;
case 0x636b5b:c.instructions+=3;goto B636b5b;
case 0x636b5e:c.instructions+=2;goto B636b5e;
case 0x636b5f:c.instructions+=1;goto B636b5f;
case 0x636b61:goto L636b61;
case 0x636b67:c.instructions+=2;goto B636b67;
case 0x636b6c:c.instructions+=1;goto B636b6c;
case 0x636b70:goto L636b70;
case 0x636b72:c.instructions+=4;goto B636b72;
case 0x636b75:c.instructions+=3;goto B636b75;
case 0x636b78:c.instructions+=2;goto B636b78;
case 0x636b79:c.instructions+=1;goto B636b79;
case 0x636b7b:goto L636b7b;
case 0x636b81:c.instructions+=1;goto B636b81;
case 0x636b86:goto L636b86;
case 0x636b88:c.instructions+=4;goto B636b88;
case 0x636b8b:c.instructions+=3;goto B636b8b;
case 0x636b8e:c.instructions+=2;goto B636b8e;
case 0x636b8f:c.instructions+=1;goto B636b8f;
case 0x636b91:goto L636b91;
case 0x636b97:c.instructions+=2;goto B636b97;
case 0x636b9c:c.instructions+=1;goto B636b9c;
case 0x636ba0:goto L636ba0;
case 0x636ba2:c.instructions+=4;goto B636ba2;
case 0x636ba5:c.instructions+=3;goto B636ba5;
case 0x636ba8:c.instructions+=2;goto B636ba8;
case 0x636ba9:c.instructions+=1;goto B636ba9;
case 0x636bab:goto L636bab;
case 0x636bb1:c.instructions+=1;goto B636bb1;
case 0x636bb6:goto L636bb6;
case 0x636bb8:c.instructions+=4;goto B636bb8;
case 0x636bbb:c.instructions+=3;goto B636bbb;
case 0x636bbe:c.instructions+=2;goto B636bbe;
case 0x636bbf:c.instructions+=1;goto B636bbf;
case 0x636bc1:goto L636bc1;
case 0x636bc7:c.instructions+=2;goto B636bc7;
case 0x636bcc:c.instructions+=1;goto B636bcc;
case 0x636bd0:goto L636bd0;
case 0x636bd2:c.instructions+=4;goto B636bd2;
case 0x636bd5:c.instructions+=3;goto B636bd5;
case 0x636bd8:c.instructions+=2;goto B636bd8;
case 0x636bd9:c.instructions+=1;goto B636bd9;
case 0x636bdb:goto L636bdb;
case 0x636bdc:c.instructions+=1;goto B636bdc;
case 0x636be0:goto L636be0;
case 0x636be3:c.instructions+=5;goto B636be3;
case 0x636be4:c.instructions+=4;goto B636be4;
case 0x636be8:c.instructions+=3;goto B636be8;
case 0x636bea:c.instructions+=2;goto B636bea;
case 0x636bef:c.instructions+=1;goto B636bef;
case 0x636bf1:goto L636bf1;
case 0x636bf4:c.instructions+=4;goto B636bf4;
case 0x636bf7:c.instructions+=3;goto B636bf7;
case 0x636bfc:c.instructions+=2;goto B636bfc;
case 0x636bfe:c.instructions+=1;goto B636bfe;
case 0x636c00:goto L636c00;
case 0x636c05:c.instructions+=1;goto B636c05;
case 0x636c10:goto L636c10;
case 0x636c17:c.instructions+=1;goto B636c17;
case 0x636c1c:goto L636c1c;
case 0x636c22:c.instructions+=2;goto B636c22;
case 0x636c28:c.instructions+=1;goto B636c28;
case 0x636c2a:goto L636c2a;
case 0x636c2f:c.instructions+=3;goto B636c2f;
case 0x636c30:c.instructions+=2;goto B636c30;
case 0x636c33:c.instructions+=1;goto B636c33;
case 0x636c34:goto L636c34;
case 0x636c39:c.instructions+=1;goto B636c39;
case 0x636c3b:goto L636c3b;
case 0x636c3e:c.instructions+=8;goto B636c3e;
case 0x636c43:c.instructions+=7;goto B636c43;
case 0x636c46:c.instructions+=6;goto B636c46;
case 0x636c49:c.instructions+=5;goto B636c49;
case 0x636c4f:c.instructions+=4;goto B636c4f;
case 0x636c54:c.instructions+=3;goto B636c54;
case 0x636c55:c.instructions+=2;goto B636c55;
case 0x636c58:c.instructions+=1;goto B636c58;
case 0x636c59:goto L636c59;
case 0x636c5e:c.instructions+=1;goto B636c5e;
case 0x636c60:goto L636c60;
case 0x636c63:c.instructions+=5;goto B636c63;
case 0x636c69:c.instructions+=4;goto B636c69;
case 0x636c6e:c.instructions+=3;goto B636c6e;
case 0x636c6f:c.instructions+=2;goto B636c6f;
case 0x636c72:c.instructions+=1;goto B636c72;
case 0x636c73:goto L636c73;
case 0x636c78:c.instructions+=1;goto B636c78;
case 0x636c7a:goto L636c7a;
case 0x636c7d:c.instructions+=7;goto B636c7d;
case 0x636c82:c.instructions+=6;goto B636c82;
case 0x636c87:c.instructions+=5;goto B636c87;
case 0x636c8c:c.instructions+=4;goto B636c8c;
case 0x636c91:c.instructions+=3;goto B636c91;
case 0x636c92:c.instructions+=2;goto B636c92;
case 0x636c95:c.instructions+=1;goto B636c95;
case 0x636c96:goto L636c96;
case 0x636c9b:c.instructions+=1;goto B636c9b;
case 0x636c9d:goto L636c9d;
case 0x636ca0:c.instructions+=11;goto B636ca0;
case 0x636ca5:c.instructions+=10;goto B636ca5;
case 0x636caa:c.instructions+=9;goto B636caa;
case 0x636caf:c.instructions+=8;goto B636caf;
case 0x636cb2:c.instructions+=7;goto B636cb2;
case 0x636cb8:c.instructions+=6;goto B636cb8;
case 0x636cbb:c.instructions+=5;goto B636cbb;
case 0x636cc1:c.instructions+=4;goto B636cc1;
case 0x636cc6:c.instructions+=3;goto B636cc6;
case 0x636cc7:c.instructions+=2;goto B636cc7;
case 0x636cca:c.instructions+=1;goto B636cca;
case 0x636ccb:goto L636ccb;
case 0x636cd0:c.instructions+=1;goto B636cd0;
case 0x636cd6:goto L636cd6;
case 0x636cd9:c.instructions+=51;goto B636cd9;
case 0x636cdd:c.instructions+=50;goto B636cdd;
case 0x636ce1:c.instructions+=49;goto B636ce1;
case 0x636ce5:c.instructions+=48;goto B636ce5;
case 0x636ce9:c.instructions+=47;goto B636ce9;
case 0x636ced:c.instructions+=46;goto B636ced;
case 0x636cee:c.instructions+=45;goto B636cee;
case 0x636cef:c.instructions+=44;goto B636cef;
case 0x636cf2:c.instructions+=43;goto B636cf2;
case 0x636cf3:c.instructions+=42;goto B636cf3;
case 0x636cf6:c.instructions+=41;goto B636cf6;
case 0x636cfa:c.instructions+=40;goto B636cfa;
case 0x636cfe:c.instructions+=39;goto B636cfe;
case 0x636d02:c.instructions+=38;goto B636d02;
case 0x636d06:c.instructions+=37;goto B636d06;
case 0x636d09:c.instructions+=36;goto B636d09;
case 0x636d0c:c.instructions+=35;goto B636d0c;
case 0x636d10:c.instructions+=34;goto B636d10;
case 0x636d14:c.instructions+=33;goto B636d14;
case 0x636d18:c.instructions+=32;goto B636d18;
case 0x636d1b:c.instructions+=31;goto B636d1b;
case 0x636d1e:c.instructions+=30;goto B636d1e;
case 0x636d20:c.instructions+=29;goto B636d20;
case 0x636d23:c.instructions+=28;goto B636d23;
case 0x636d26:c.instructions+=27;goto B636d26;
case 0x636d29:c.instructions+=26;goto B636d29;
case 0x636d2c:c.instructions+=25;goto B636d2c;
case 0x636d2f:c.instructions+=24;goto B636d2f;
case 0x636d32:c.instructions+=23;goto B636d32;
case 0x636d35:c.instructions+=22;goto B636d35;
case 0x636d38:c.instructions+=21;goto B636d38;
case 0x636d3b:c.instructions+=20;goto B636d3b;
case 0x636d3e:c.instructions+=19;goto B636d3e;
case 0x636d41:c.instructions+=18;goto B636d41;
case 0x636d47:c.instructions+=17;goto B636d47;
case 0x636d4a:c.instructions+=16;goto B636d4a;
case 0x636d50:c.instructions+=15;goto B636d50;
case 0x636d53:c.instructions+=14;goto B636d53;
case 0x636d58:c.instructions+=13;goto B636d58;
case 0x636d5b:c.instructions+=12;goto B636d5b;
case 0x636d61:c.instructions+=11;goto B636d61;
case 0x636d64:c.instructions+=10;goto B636d64;
case 0x636d69:c.instructions+=9;goto B636d69;
case 0x636d6c:c.instructions+=8;goto B636d6c;
case 0x636d72:c.instructions+=7;goto B636d72;
case 0x636d75:c.instructions+=6;goto B636d75;
case 0x636d7a:c.instructions+=5;goto B636d7a;
case 0x636d7d:c.instructions+=4;goto B636d7d;
case 0x636d80:c.instructions+=3;goto B636d80;
case 0x636d82:c.instructions+=2;goto B636d82;
case 0x636d84:c.instructions+=1;goto B636d84;
case 0x636d86:goto L636d86;
case 0x636d89:c.instructions+=3;goto B636d89;
case 0x636d8d:c.instructions+=2;goto B636d8d;
case 0x636d8f:c.instructions+=1;goto B636d8f;
case 0x636d91:goto L636d91;
case 0x636d94:c.instructions+=3;goto B636d94;
case 0x636d96:c.instructions+=2;goto B636d96;
case 0x636d98:c.instructions+=1;goto B636d98;
case 0x636d9a:goto L636d9a;
case 0x636d9c:c.instructions+=1;goto B636d9c;
case 0x636da0:goto L636da0;
case 0x636da3:c.instructions+=4;goto B636da3;
case 0x636da6:c.instructions+=3;goto B636da6;
case 0x636da8:c.instructions+=2;goto B636da8;
case 0x636daa:c.instructions+=1;goto B636daa;
case 0x636dac:goto L636dac;
case 0x636daf:c.instructions+=1;goto B636daf;
case 0x636db4:goto L636db4;
case 0x636db7:c.instructions+=2;goto B636db7;
case 0x636dba:c.instructions+=1;goto B636dba;
case 0x636dbc:goto L636dbc;
case 0x636dc2:c.instructions+=2;goto B636dc2;
case 0x636dc6:c.instructions+=1;goto B636dc6;
case 0x636dc9:goto L636dc9;
case 0x636dcb:c.instructions+=2;goto B636dcb;
case 0x636dce:c.instructions+=1;goto B636dce;
case 0x636dd0:goto L636dd0;
case 0x636dd6:c.instructions+=2;goto B636dd6;
case 0x636dda:c.instructions+=1;goto B636dda;
case 0x636ddc:goto L636ddc;
case 0x636ddf:c.instructions+=2;goto B636ddf;
case 0x636de2:c.instructions+=1;goto B636de2;
case 0x636de4:goto L636de4;
case 0x636dea:c.instructions+=2;goto B636dea;
case 0x636dee:c.instructions+=1;goto B636dee;
case 0x636df1:goto L636df1;
case 0x636df4:c.instructions+=2;goto B636df4;
case 0x636df7:c.instructions+=1;goto B636df7;
case 0x636df9:goto L636df9;
case 0x636dff:c.instructions+=2;goto B636dff;
case 0x636e03:c.instructions+=1;goto B636e03;
case 0x636e06:goto L636e06;
case 0x636e09:c.instructions+=2;goto B636e09;
case 0x636e0a:c.instructions+=1;goto B636e0a;
case 0x636e0c:goto L636e0c;
case 0x636e0f:c.instructions+=4;goto B636e0f;
case 0x636e10:c.instructions+=3;goto B636e10;
case 0x636e13:c.instructions+=2;goto B636e13;
case 0x636e15:c.instructions+=1;goto B636e15;
case 0x636e17:goto L636e17;
case 0x636e1a:c.instructions+=4;goto B636e1a;
case 0x636e1c:c.instructions+=3;goto B636e1c;
case 0x636e1e:c.instructions+=2;goto B636e1e;
case 0x636e22:c.instructions+=1;goto B636e22;
case 0x636e28:goto L636e28;
case 0x636e2c:c.instructions+=1;goto B636e2c;
case 0x636e30:goto L636e30;
case 0x636e34:c.instructions+=5;goto B636e34;
case 0x636e37:c.instructions+=4;goto B636e37;
case 0x636e39:c.instructions+=3;goto B636e39;
case 0x636e3d:c.instructions+=2;goto B636e3d;
case 0x636e3f:c.instructions+=1;goto B636e3f;
case 0x636e44:goto L636e44;
case 0x636e47:c.instructions+=12;goto B636e47;
case 0x636e49:c.instructions+=11;goto B636e49;
case 0x636e4b:c.instructions+=10;goto B636e4b;
case 0x636e4e:c.instructions+=9;goto B636e4e;
case 0x636e51:c.instructions+=8;goto B636e51;
case 0x636e53:c.instructions+=7;goto B636e53;
case 0x636e57:c.instructions+=6;goto B636e57;
case 0x636e5a:c.instructions+=5;goto B636e5a;
case 0x636e5e:c.instructions+=4;goto B636e5e;
case 0x636e60:c.instructions+=3;goto B636e60;
case 0x636e61:c.instructions+=2;goto B636e61;
case 0x636e63:c.instructions+=1;goto B636e63;
case 0x636e65:goto L636e65;
case 0x636e67:c.instructions+=1;goto B636e67;
case 0x636e69:goto L636e69;
case 0x636e6c:c.instructions+=2;goto B636e6c;
case 0x636e70:c.instructions+=1;goto B636e70;
case 0x636e72:goto L636e72;
case 0x636e77:goto L636e77;
case 0x636e7a:c.instructions+=1;goto B636e7a;
case 0x636e80:goto L636e80;
case 0x636e85:c.instructions+=1;goto B636e85;
case 0x636e87:goto L636e87;
case 0x636e89:goto L636e89;
case 0x636e8e:c.instructions+=1;goto B636e8e;
case 0x636e90:goto L636e90;
case 0x636e95:c.instructions+=1;goto B636e95;
case 0x636e97:goto L636e97;
case 0x636e9c:c.instructions+=1;goto B636e9c;
case 0x636ea2:goto L636ea2;
case 0x636ea9:c.instructions+=1;goto B636ea9;
case 0x636eae:goto L636eae;
case 0x636eb5:c.instructions+=1;goto B636eb5;
case 0x636eba:goto L636eba;
case 0x636ec1:c.instructions+=1;goto B636ec1;
case 0x636ec6:goto L636ec6;
case 0x636ecd:c.instructions+=1;goto B636ecd;
case 0x636ed2:goto L636ed2;
case 0x636ed7:c.instructions+=1;goto B636ed7;
case 0x636ed9:goto L636ed9;
case 0x636ede:c.instructions+=1;goto B636ede;
case 0x636ee0:goto L636ee0;
case 0x636ee5:c.instructions+=1;goto B636ee5;
case 0x636eeb:goto L636eeb;
case 0x636ef2:c.instructions+=1;goto B636ef2;
case 0x636ef4:goto L636ef4;
case 0x636efb:c.instructions+=1;goto B636efb;
case 0x636efd:goto L636efd;
case 0x636f04:c.instructions+=1;goto B636f04;
case 0x636f06:goto L636f06;
case 0x636f09:c.instructions+=1;goto B636f09;
case 0x636f0b:goto L636f0b;
case 0x636f0f:c.instructions+=2;goto B636f0f;
case 0x636f12:c.instructions+=1;goto B636f12;
case 0x636f14:goto L636f14;
case 0x636f1b:c.instructions+=1;goto B636f1b;
case 0x636f22:goto L636f22;
case 0x636f27:c.instructions+=1;goto B636f27;
case 0x636f29:goto L636f29;
case 0x636f2e:c.instructions+=1;goto B636f2e;
case 0x636f30:goto L636f30;
case 0x636f35:c.instructions+=1;goto B636f35;
case 0x636f37:goto L636f37;
case 0x636f39:goto L636f39;
case 0x636f40:goto L636f40;
case 0x636f47:c.instructions+=1;goto B636f47;
case 0x636f49:goto L636f49;
case 0x636f50:c.instructions+=1;goto B636f50;
case 0x636f52:goto L636f52;
case 0x636f59:c.instructions+=1;goto B636f59;
case 0x636f5b:goto L636f5b;
case 0x636f62:goto L636f62;
case 0x636f69:goto L636f69;
case 0x636f6b:c.instructions+=1;goto B636f6b;
case 0x636f6d:goto L636f6d;
case 0x636f70:c.instructions+=1;goto B636f70;
case 0x636f72:goto L636f72;
case 0x636f74:goto L636f74;
case 0x636f77:goto L636f77;
case 0x636f79:c.instructions+=1;goto B636f79;
case 0x636f7b:goto L636f7b;
case 0x636f7e:c.instructions+=1;goto B636f7e;
case 0x636f80:goto L636f80;
case 0x636f82:goto L636f82;
case 0x636f85:goto L636f85;
case 0x636f89:c.instructions+=8;goto B636f89;
case 0x636f8d:c.instructions+=7;goto B636f8d;
case 0x636f90:c.instructions+=6;goto B636f90;
case 0x636f91:c.instructions+=5;goto B636f91;
case 0x636f94:c.instructions+=4;goto B636f94;
case 0x636f96:c.instructions+=3;goto B636f96;
case 0x636f9a:c.instructions+=2;goto B636f9a;
case 0x636f9e:c.instructions+=1;goto B636f9e;
case 0x636fa4:goto L636fa4;
case 0x636fa9:c.instructions+=23;goto B636fa9;
case 0x636fab:c.instructions+=22;goto B636fab;
case 0x636fb1:c.instructions+=21;goto B636fb1;
case 0x636fb4:c.instructions+=20;goto B636fb4;
case 0x636fba:c.instructions+=19;goto B636fba;
case 0x636fc0:c.instructions+=18;goto B636fc0;
case 0x636fc6:c.instructions+=17;goto B636fc6;
case 0x636fc7:c.instructions+=16;goto B636fc7;
case 0x636fcd:c.instructions+=15;goto B636fcd;
case 0x636fd0:c.instructions+=14;goto B636fd0;
case 0x636fd2:c.instructions+=13;goto B636fd2;
case 0x636fd8:c.instructions+=12;goto B636fd8;
case 0x636fde:c.instructions+=11;goto B636fde;
case 0x636fe2:c.instructions+=10;goto B636fe2;
case 0x636fe5:c.instructions+=9;goto B636fe5;
case 0x636fe6:c.instructions+=8;goto B636fe6;
case 0x636fe7:c.instructions+=7;goto B636fe7;
case 0x636fe9:c.instructions+=6;goto B636fe9;
case 0x636fea:c.instructions+=5;goto B636fea;
case 0x636ff0:c.instructions+=4;goto B636ff0;
case 0x636ff5:c.instructions+=3;goto B636ff5;
case 0x636ff6:c.instructions+=2;goto B636ff6;
case 0x636ff9:c.instructions+=1;goto B636ff9;
case 0x636ffa:goto L636ffa;
case 0x636ffc:c.instructions+=2;goto B636ffc;
case 0x636ffd:c.instructions+=1;goto B636ffd;
default:missing_instruction(c.pc);}
B636001:L636001:{c.instructions+=3;NFSU2_TR(0x636001);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B636006:{NFSU2_TR(0x636006);
__builtin_memmove((R+28),(R+0),4);
}
B636008:{NFSU2_TR(0x636008);
if(r1(R+518)){{goto L636046;}}
}
B63600a:L63600a:{c.instructions+=8;NFSU2_TR(0x63600a);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636010:{NFSU2_TR(0x636010);
w4(R+0,u32(r2(R+4)));
}
B636013:{NFSU2_TR(0x636013);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636016:{NFSU2_TR(0x636016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636019:{NFSU2_TR(0x636019);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B63601c:{NFSU2_TR(0x63601c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63601e:{NFSU2_TR(0x63601e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636020:{NFSU2_TR(0x636020);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L636046;}}
}
B636022:L636022:{c.instructions+=2;NFSU2_TR(0x636022);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636025:{NFSU2_TR(0x636025);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636028:L636028:{c.instructions+=4;NFSU2_TR(0x636028);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63602a:{NFSU2_TR(0x63602a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B63602d:{NFSU2_TR(0x63602d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636030:{NFSU2_TR(0x636030);
if(r1(R+518)){{goto L636137;}}
}
B636036:L636036:{c.instructions+=2;NFSU2_TR(0x636036);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636038:{NFSU2_TR(0x636038);
if(r1(R+518)){{goto L636137;}}
}
B63603e:L63603e:{c.instructions+=4;NFSU2_TR(0x63603e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63603f:{NFSU2_TR(0x63603f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636042:{NFSU2_TR(0x636042);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B636044:{NFSU2_TR(0x636044);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636028u);}goto L636028;}}
}
B636046:L636046:{c.instructions+=1;NFSU2_TR(0x636046);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63604e:L63604e:{c.instructions+=2;NFSU2_TR(0x63604e);
u8 U[4];
w4(U+0,u32(0x7a8ba8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636053:{NFSU2_TR(0x636053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636058ull));
TAIL_STATIC(0x43db50u,43d);
}
B636058:L636058:{c.instructions+=6;NFSU2_TR(0x636058);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63605c:{NFSU2_TR(0x63605c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B636060:{NFSU2_TR(0x636060);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636063:{NFSU2_TR(0x636063);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B636068:{NFSU2_TR(0x636068);
__builtin_memmove((R+28),(R+0),4);
}
B63606a:{NFSU2_TR(0x63606a);
if(r1(R+518)){{goto L6360ae;}}
}
B63606c:L63606c:{c.instructions+=8;NFSU2_TR(0x63606c);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636072:{NFSU2_TR(0x636072);
w4(R+0,u32(r2(R+4)));
}
B636075:{NFSU2_TR(0x636075);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636078:{NFSU2_TR(0x636078);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63607b:{NFSU2_TR(0x63607b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B63607e:{NFSU2_TR(0x63607e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636080:{NFSU2_TR(0x636080);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636082:{NFSU2_TR(0x636082);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6360ae;}}
}
B636084:L636084:{c.instructions+=3;NFSU2_TR(0x636084);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636087:{NFSU2_TR(0x636087);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B63608a:{NFSU2_TR(0x63608a);
__builtin_memmove((R+12),(R+12),4);
}
B636090:L636090:{c.instructions+=4;NFSU2_TR(0x636090);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636092:{NFSU2_TR(0x636092);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B636095:{NFSU2_TR(0x636095);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636098:{NFSU2_TR(0x636098);
if(r1(R+518)){{goto L63614b;}}
}
B63609e:L63609e:{c.instructions+=2;NFSU2_TR(0x63609e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6360a0:{NFSU2_TR(0x6360a0);
if(r1(R+518)){{goto L63614b;}}
}
B6360a6:L6360a6:{c.instructions+=4;NFSU2_TR(0x6360a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6360a7:{NFSU2_TR(0x6360a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6360aa:{NFSU2_TR(0x6360aa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6360ac:{NFSU2_TR(0x6360ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636090u);}goto L636090;}}
}
B6360ae:L6360ae:{c.instructions+=1;NFSU2_TR(0x6360ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6360b6:L6360b6:{c.instructions+=14;NFSU2_TR(0x6360b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6360ba:{NFSU2_TR(0x6360ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6360be:{NFSU2_TR(0x6360be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6360c2:{NFSU2_TR(0x6360c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6360c6:{NFSU2_TR(0x6360c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360c7:{NFSU2_TR(0x6360c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d49ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6360ce:{NFSU2_TR(0x6360ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360cf:{NFSU2_TR(0x6360cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360d0:{NFSU2_TR(0x6360d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6360d3:{NFSU2_TR(0x6360d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8a3f60ull))));
}
B6360d9:{NFSU2_TR(0x6360d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360da:{NFSU2_TR(0x6360da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6360e0:{NFSU2_TR(0x6360e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360e1:{NFSU2_TR(0x6360e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6360e6ull));
TAIL_STATIC(0x48b920u,48b);
}
B6360e6:L6360e6:{c.instructions+=4;NFSU2_TR(0x6360e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6360ea:{NFSU2_TR(0x6360ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6360ed:{NFSU2_TR(0x6360ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6360ef:{NFSU2_TR(0x6360ef);
if(r1(R+518)){{goto L6362d9;}}
}
B6360f5:L6360f5:{c.instructions+=4;NFSU2_TR(0x6360f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6360fb:{NFSU2_TR(0x6360fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360fc:{NFSU2_TR(0x6360fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6360fd:{NFSU2_TR(0x6360fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636102ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B636102:L636102:{c.instructions+=4;NFSU2_TR(0x636102);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B636108:{NFSU2_TR(0x636108);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63610b:{NFSU2_TR(0x63610b);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B63610d:{NFSU2_TR(0x63610d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63617a;}}
}
B63610f:L63610f:{c.instructions+=1;NFSU2_TR(0x63610f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B636111:L636111:{c.instructions+=3;NFSU2_TR(0x636111);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a05d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B636117:{NFSU2_TR(0x636117);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B636119:{NFSU2_TR(0x636119);
if(r1(R+518)){{goto L63615f;}}
}
B63611b:L63611b:{c.instructions+=3;NFSU2_TR(0x63611b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63611c:{NFSU2_TR(0x63611c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63611f:{NFSU2_TR(0x63611f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636111u);}goto L636111;}}
}
B636121:L636121:{c.instructions+=1;NFSU2_TR(0x636121);
{goto L63616c;}
}
B636123:L636123:{c.instructions+=2;NFSU2_TR(0x636123);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636125:{NFSU2_TR(0x636125);
if(r1(R+518)){TAIL_STATIC(0x635fe4u,635);}
}
B63612b:L63612b:{c.instructions+=3;NFSU2_TR(0x63612b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63612e:{NFSU2_TR(0x63612e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636132:{NFSU2_TR(0x636132);
TAIL_STATIC(0x635fecu,635);
}
B636137:L636137:{c.instructions+=2;NFSU2_TR(0x636137);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636139:{NFSU2_TR(0x636139);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636046u);}goto L636046;}}
}
B63613f:L63613f:{c.instructions+=3;NFSU2_TR(0x63613f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636142:{NFSU2_TR(0x636142);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636146:{NFSU2_TR(0x636146);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63604eu);}goto L63604e;}
}
B63614b:L63614b:{c.instructions+=2;NFSU2_TR(0x63614b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63614d:{NFSU2_TR(0x63614d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6360aeu);}goto L6360ae;}}
}
B636153:L636153:{c.instructions+=3;NFSU2_TR(0x636153);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636156:{NFSU2_TR(0x636156);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63615a:{NFSU2_TR(0x63615a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6360b6u);}goto L6360b6;}
}
B63615f:L63615f:{c.instructions+=2;NFSU2_TR(0x63615f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B636165:{NFSU2_TR(0x636165);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a05d4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63616c:L63616c:{c.instructions+=3;NFSU2_TR(0x63616c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B636172:{NFSU2_TR(0x636172);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B636174:{NFSU2_TR(0x636174);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6362d9;}}
}
B63617a:L63617a:{c.instructions+=2;NFSU2_TR(0x63617a);
u8 U[4];
w4(U+0,u32(0x7a8ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63617f:{NFSU2_TR(0x63617f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636184ull));
TAIL_STATIC(0x43db50u,43d);
}
B636184:L636184:{c.instructions+=6;NFSU2_TR(0x636184);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636188:{NFSU2_TR(0x636188);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B63618c:{NFSU2_TR(0x63618c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63618f:{NFSU2_TR(0x63618f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B636194:{NFSU2_TR(0x636194);
__builtin_memmove((R+28),(R+0),4);
}
B636196:{NFSU2_TR(0x636196);
if(r1(R+518)){{goto L6361d4;}}
}
B636198:L636198:{c.instructions+=8;NFSU2_TR(0x636198);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B63619e:{NFSU2_TR(0x63619e);
w4(R+0,u32(r2(R+4)));
}
B6361a1:{NFSU2_TR(0x6361a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6361a4:{NFSU2_TR(0x6361a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6361a7:{NFSU2_TR(0x6361a7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B6361aa:{NFSU2_TR(0x6361aa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6361ac:{NFSU2_TR(0x6361ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6361ae:{NFSU2_TR(0x6361ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6361d4;}}
}
B6361b0:L6361b0:{c.instructions+=2;NFSU2_TR(0x6361b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6361b3:{NFSU2_TR(0x6361b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6361b6:L6361b6:{c.instructions+=4;NFSU2_TR(0x6361b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6361b8:{NFSU2_TR(0x6361b8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B6361bb:{NFSU2_TR(0x6361bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6361be:{NFSU2_TR(0x6361be);
if(r1(R+518)){{goto L636350;}}
}
B6361c4:L6361c4:{c.instructions+=2;NFSU2_TR(0x6361c4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6361c6:{NFSU2_TR(0x6361c6);
if(r1(R+518)){{goto L636350;}}
}
B6361cc:L6361cc:{c.instructions+=4;NFSU2_TR(0x6361cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6361cd:{NFSU2_TR(0x6361cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6361d0:{NFSU2_TR(0x6361d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6361d2:{NFSU2_TR(0x6361d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6361b6u);}goto L6361b6;}}
}
B6361d4:L6361d4:{c.instructions+=1;NFSU2_TR(0x6361d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6361dc:L6361dc:{c.instructions+=2;NFSU2_TR(0x6361dc);
u8 U[4];
w4(U+0,u32(0x7a8b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6361e1:{NFSU2_TR(0x6361e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6361e6ull));
TAIL_STATIC(0x43db50u,43d);
}
B6361e6:L6361e6:{c.instructions+=6;NFSU2_TR(0x6361e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6361ea:{NFSU2_TR(0x6361ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6361ee:{NFSU2_TR(0x6361ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6361f1:{NFSU2_TR(0x6361f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6361f6:{NFSU2_TR(0x6361f6);
__builtin_memmove((R+28),(R+0),4);
}
B6361f8:{NFSU2_TR(0x6361f8);
if(r1(R+518)){{goto L636236;}}
}
B6361fa:L6361fa:{c.instructions+=8;NFSU2_TR(0x6361fa);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636200:{NFSU2_TR(0x636200);
w4(R+0,u32(r2(R+4)));
}
B636203:{NFSU2_TR(0x636203);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636206:{NFSU2_TR(0x636206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636209:{NFSU2_TR(0x636209);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B63620c:{NFSU2_TR(0x63620c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63620e:{NFSU2_TR(0x63620e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636210:{NFSU2_TR(0x636210);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L636236;}}
}
B636212:L636212:{c.instructions+=2;NFSU2_TR(0x636212);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636215:{NFSU2_TR(0x636215);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636218:L636218:{c.instructions+=4;NFSU2_TR(0x636218);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63621a:{NFSU2_TR(0x63621a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B63621d:{NFSU2_TR(0x63621d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636220:{NFSU2_TR(0x636220);
if(r1(R+518)){{goto L636364;}}
}
B636226:L636226:{c.instructions+=2;NFSU2_TR(0x636226);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636228:{NFSU2_TR(0x636228);
if(r1(R+518)){{goto L636364;}}
}
B63622e:L63622e:{c.instructions+=4;NFSU2_TR(0x63622e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63622f:{NFSU2_TR(0x63622f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636232:{NFSU2_TR(0x636232);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B636234:{NFSU2_TR(0x636234);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636218u);}goto L636218;}}
}
B636236:L636236:{c.instructions+=1;NFSU2_TR(0x636236);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63623e:L63623e:{c.instructions+=2;NFSU2_TR(0x63623e);
u8 U[4];
w4(U+0,u32(0x7a8b90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636243:{NFSU2_TR(0x636243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636248ull));
TAIL_STATIC(0x43db50u,43d);
}
B636248:L636248:{c.instructions+=6;NFSU2_TR(0x636248);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63624c:{NFSU2_TR(0x63624c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B636250:{NFSU2_TR(0x636250);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636253:{NFSU2_TR(0x636253);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B636258:{NFSU2_TR(0x636258);
__builtin_memmove((R+28),(R+0),4);
}
B63625a:{NFSU2_TR(0x63625a);
if(r1(R+518)){{goto L63629e;}}
}
B63625c:L63625c:{c.instructions+=8;NFSU2_TR(0x63625c);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636262:{NFSU2_TR(0x636262);
w4(R+0,u32(r2(R+4)));
}
B636265:{NFSU2_TR(0x636265);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636268:{NFSU2_TR(0x636268);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63626b:{NFSU2_TR(0x63626b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B63626e:{NFSU2_TR(0x63626e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636270:{NFSU2_TR(0x636270);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636272:{NFSU2_TR(0x636272);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63629e;}}
}
B636274:L636274:{c.instructions+=3;NFSU2_TR(0x636274);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636277:{NFSU2_TR(0x636277);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B63627a:{NFSU2_TR(0x63627a);
__builtin_memmove((R+12),(R+12),4);
}
B636280:L636280:{c.instructions+=4;NFSU2_TR(0x636280);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636282:{NFSU2_TR(0x636282);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B636285:{NFSU2_TR(0x636285);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636288:{NFSU2_TR(0x636288);
if(r1(R+518)){{goto L636378;}}
}
B63628e:L63628e:{c.instructions+=2;NFSU2_TR(0x63628e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636290:{NFSU2_TR(0x636290);
if(r1(R+518)){{goto L636378;}}
}
B636296:L636296:{c.instructions+=4;NFSU2_TR(0x636296);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B636297:{NFSU2_TR(0x636297);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B63629a:{NFSU2_TR(0x63629a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63629c:{NFSU2_TR(0x63629c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636280u);}goto L636280;}}
}
B63629e:L63629e:{c.instructions+=1;NFSU2_TR(0x63629e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6362a6:L6362a6:{c.instructions+=14;NFSU2_TR(0x6362a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6362aa:{NFSU2_TR(0x6362aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6362ae:{NFSU2_TR(0x6362ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6362b2:{NFSU2_TR(0x6362b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6362b6:{NFSU2_TR(0x6362b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6362b7:{NFSU2_TR(0x6362b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6362be:{NFSU2_TR(0x6362be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6362bf:{NFSU2_TR(0x6362bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6362c0:{NFSU2_TR(0x6362c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6362c3:{NFSU2_TR(0x6362c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8a3f60ull))));
}
B6362c9:{NFSU2_TR(0x6362c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6362ca:{NFSU2_TR(0x6362ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6362d0:{NFSU2_TR(0x6362d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6362d1:{NFSU2_TR(0x6362d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6362d6ull));
TAIL_STATIC(0x48b920u,48b);
}
B6362d6:L6362d6:{c.instructions+=1;NFSU2_TR(0x6362d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6362d9:L6362d9:{c.instructions+=5;NFSU2_TR(0x6362d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6362df:{NFSU2_TR(0x6362df);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
}
B6362e5:{NFSU2_TR(0x6362e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6362e7:{NFSU2_TR(0x6362e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6362eb:{NFSU2_TR(0x6362eb);
if(r1(R+518)){{goto L63651c;}}
}
B6362f1:L6362f1:{c.instructions+=2;NFSU2_TR(0x6362f1);
u8 U[4];
w4(U+0,u32(0x7a8b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6362f6:{NFSU2_TR(0x6362f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6362fbull));
TAIL_STATIC(0x43db50u,43d);
}
B6362fb:L6362fb:{c.instructions+=6;NFSU2_TR(0x6362fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6362ff:{NFSU2_TR(0x6362ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B636303:{NFSU2_TR(0x636303);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636306:{NFSU2_TR(0x636306);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B63630b:{NFSU2_TR(0x63630b);
__builtin_memmove((R+28),(R+0),4);
}
B63630d:{NFSU2_TR(0x63630d);
if(r1(R+518)){{goto L63641d;}}
}
B636313:L636313:{c.instructions+=8;NFSU2_TR(0x636313);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636319:{NFSU2_TR(0x636319);
w4(R+0,u32(r2(R+4)));
}
B63631c:{NFSU2_TR(0x63631c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63631f:{NFSU2_TR(0x63631f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636322:{NFSU2_TR(0x636322);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B636325:{NFSU2_TR(0x636325);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636327:{NFSU2_TR(0x636327);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636329:{NFSU2_TR(0x636329);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63641d;}}
}
B63632f:L63632f:{c.instructions+=2;NFSU2_TR(0x63632f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636332:{NFSU2_TR(0x636332);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636335:L636335:{c.instructions+=4;NFSU2_TR(0x636335);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636337:{NFSU2_TR(0x636337);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B63633a:{NFSU2_TR(0x63633a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63633d:{NFSU2_TR(0x63633d);
if(r1(R+518)){{goto L63638c;}}
}
B63633f:L63633f:{c.instructions+=2;NFSU2_TR(0x63633f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636341:{NFSU2_TR(0x636341);
if(r1(R+518)){{goto L63638c;}}
}
B636343:L636343:{c.instructions+=4;NFSU2_TR(0x636343);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B636344:{NFSU2_TR(0x636344);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636347:{NFSU2_TR(0x636347);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B636349:{NFSU2_TR(0x636349);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636335u);}goto L636335;}}
}
B63634b:L63634b:{c.instructions+=1;NFSU2_TR(0x63634b);
{goto L63641d;}
}
B636350:L636350:{c.instructions+=2;NFSU2_TR(0x636350);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636352:{NFSU2_TR(0x636352);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6361d4u);}goto L6361d4;}}
}
B636358:L636358:{c.instructions+=3;NFSU2_TR(0x636358);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63635b:{NFSU2_TR(0x63635b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63635f:{NFSU2_TR(0x63635f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6361dcu);}goto L6361dc;}
}
B636364:L636364:{c.instructions+=2;NFSU2_TR(0x636364);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636366:{NFSU2_TR(0x636366);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636236u);}goto L636236;}}
}
B63636c:L63636c:{c.instructions+=3;NFSU2_TR(0x63636c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63636f:{NFSU2_TR(0x63636f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636373:{NFSU2_TR(0x636373);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63623eu);}goto L63623e;}
}
B636378:L636378:{c.instructions+=2;NFSU2_TR(0x636378);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63637a:{NFSU2_TR(0x63637a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63629eu);}goto L63629e;}}
}
B636380:L636380:{c.instructions+=3;NFSU2_TR(0x636380);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636383:{NFSU2_TR(0x636383);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636387:{NFSU2_TR(0x636387);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6362a6u);}goto L6362a6;}
}
B63638c:L63638c:{c.instructions+=2;NFSU2_TR(0x63638c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63638e:{NFSU2_TR(0x63638e);
if(r1(R+518)){{goto L63641d;}}
}
B636394:L636394:{c.instructions+=3;NFSU2_TR(0x636394);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636397:{NFSU2_TR(0x636397);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636399:{NFSU2_TR(0x636399);
if(r1(R+518)){{goto L63641d;}}
}
B63639f:L63639f:{c.instructions+=3;NFSU2_TR(0x63639f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6363a3:{NFSU2_TR(0x6363a3);
u8 U[4];
w4(U+0,u32(0xe3de69dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6363a8:{NFSU2_TR(0x6363a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6363adull));
TAIL_STATIC(0x48d8f0u,48d);
}
B6363ad:L6363ad:{c.instructions+=3;NFSU2_TR(0x6363ad);
__builtin_memmove((R+24),(R+0),4);
}
B6363af:{NFSU2_TR(0x6363af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6363b1:{NFSU2_TR(0x6363b1);
if(r1(R+518)){{goto L63641d;}}
}
B6363b7:L6363b7:{c.instructions+=3;NFSU2_TR(0x6363b7);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B6363bc:{NFSU2_TR(0x6363bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6363bd:{NFSU2_TR(0x6363bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6363c2ull));
TAIL_STATIC(0x440e50u,440);
}
B6363c2:L6363c2:{c.instructions+=3;NFSU2_TR(0x6363c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6363c5:{NFSU2_TR(0x6363c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6363c7:{NFSU2_TR(0x6363c7);
if(r1(R+518)){{goto L63640d;}}
}
B6363c9:L6363c9:{c.instructions+=23;NFSU2_TR(0x6363c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363cc:{NFSU2_TR(0x6363cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6363cf:{NFSU2_TR(0x6363cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363d2:{NFSU2_TR(0x6363d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6363d5:{NFSU2_TR(0x6363d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363d8:{NFSU2_TR(0x6363d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6363db:{NFSU2_TR(0x6363db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6363de:{NFSU2_TR(0x6363de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363e1:{NFSU2_TR(0x6363e1);
__builtin_memmove((R+4),(R+8),4);
}
B6363e3:{NFSU2_TR(0x6363e3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6363e6:{NFSU2_TR(0x6363e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363ea:{NFSU2_TR(0x6363ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6363ed:{NFSU2_TR(0x6363ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363f0:{NFSU2_TR(0x6363f0);
__builtin_memmove((R+4),(R+8),4);
}
B6363f2:{NFSU2_TR(0x6363f2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6363f5:{NFSU2_TR(0x6363f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363f9:{NFSU2_TR(0x6363f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6363fc:{NFSU2_TR(0x6363fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6363ff:{NFSU2_TR(0x6363ff);
__builtin_memmove((R+4),(R+8),4);
}
B636401:{NFSU2_TR(0x636401);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B636404:{NFSU2_TR(0x636404);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636408:{NFSU2_TR(0x636408);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63640b:{NFSU2_TR(0x63640b);
{goto L63640f;}
}
B63640d:L63640d:{c.instructions+=1;NFSU2_TR(0x63640d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63640f:L63640f:{c.instructions+=5;NFSU2_TR(0x63640f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636413:{NFSU2_TR(0x636413);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636416:{NFSU2_TR(0x636416);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636419:{NFSU2_TR(0x636419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63641b:{NFSU2_TR(0x63641b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63641d:L63641d:{c.instructions+=2;NFSU2_TR(0x63641d);
u8 U[4];
w4(U+0,u32(0x7a8b78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636422:{NFSU2_TR(0x636422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636427ull));
TAIL_STATIC(0x43db50u,43d);
}
B636427:L636427:{c.instructions+=6;NFSU2_TR(0x636427);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63642b:{NFSU2_TR(0x63642b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B63642f:{NFSU2_TR(0x63642f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636432:{NFSU2_TR(0x636432);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B636437:{NFSU2_TR(0x636437);
__builtin_memmove((R+28),(R+0),4);
}
B636439:{NFSU2_TR(0x636439);
if(r1(R+518)){{goto L63651c;}}
}
B63643f:L63643f:{c.instructions+=8;NFSU2_TR(0x63643f);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636445:{NFSU2_TR(0x636445);
w4(R+0,u32(r2(R+4)));
}
B636448:{NFSU2_TR(0x636448);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63644b:{NFSU2_TR(0x63644b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63644e:{NFSU2_TR(0x63644e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B636451:{NFSU2_TR(0x636451);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636453:{NFSU2_TR(0x636453);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636455:{NFSU2_TR(0x636455);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63651c;}}
}
B63645b:L63645b:{c.instructions+=2;NFSU2_TR(0x63645b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63645e:{NFSU2_TR(0x63645e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636461:L636461:{c.instructions+=4;NFSU2_TR(0x636461);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636463:{NFSU2_TR(0x636463);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B636466:{NFSU2_TR(0x636466);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636469:{NFSU2_TR(0x636469);
if(r1(R+518)){{goto L63647c;}}
}
B63646b:L63646b:{c.instructions+=2;NFSU2_TR(0x63646b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B63646d:{NFSU2_TR(0x63646d);
if(r1(R+518)){{goto L63647c;}}
}
B63646f:L63646f:{c.instructions+=4;NFSU2_TR(0x63646f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B636470:{NFSU2_TR(0x636470);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636473:{NFSU2_TR(0x636473);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B636475:{NFSU2_TR(0x636475);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636461u);}goto L636461;}}
}
B636477:L636477:{c.instructions+=1;NFSU2_TR(0x636477);
{goto L63651c;}
}
B63647c:L63647c:{c.instructions+=2;NFSU2_TR(0x63647c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63647e:{NFSU2_TR(0x63647e);
if(r1(R+518)){{goto L63651c;}}
}
B636484:L636484:{c.instructions+=3;NFSU2_TR(0x636484);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636487:{NFSU2_TR(0x636487);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636489:{NFSU2_TR(0x636489);
if(r1(R+518)){{goto L63651c;}}
}
B63648f:L63648f:{c.instructions+=3;NFSU2_TR(0x63648f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636493:{NFSU2_TR(0x636493);
u8 U[4];
w4(U+0,u32(0x601a6cceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636498:{NFSU2_TR(0x636498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63649dull));
TAIL_STATIC(0x48d8f0u,48d);
}
B63649d:L63649d:{c.instructions+=3;NFSU2_TR(0x63649d);
__builtin_memmove((R+24),(R+0),4);
}
B63649f:{NFSU2_TR(0x63649f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6364a1:{NFSU2_TR(0x6364a1);
if(r1(R+518)){{goto L63651c;}}
}
B6364a7:L6364a7:{c.instructions+=3;NFSU2_TR(0x6364a7);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B6364ac:{NFSU2_TR(0x6364ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6364ad:{NFSU2_TR(0x6364ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6364b2ull));
TAIL_STATIC(0x440e50u,440);
}
B6364b2:L6364b2:{c.instructions+=3;NFSU2_TR(0x6364b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6364b5:{NFSU2_TR(0x6364b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6364b7:{NFSU2_TR(0x6364b7);
if(r1(R+518)){{goto L6364fd;}}
}
B6364b9:L6364b9:{c.instructions+=23;NFSU2_TR(0x6364b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364bc:{NFSU2_TR(0x6364bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6364bf:{NFSU2_TR(0x6364bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364c2:{NFSU2_TR(0x6364c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6364c5:{NFSU2_TR(0x6364c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364c8:{NFSU2_TR(0x6364c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6364cb:{NFSU2_TR(0x6364cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6364ce:{NFSU2_TR(0x6364ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364d1:{NFSU2_TR(0x6364d1);
__builtin_memmove((R+4),(R+8),4);
}
B6364d3:{NFSU2_TR(0x6364d3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6364d6:{NFSU2_TR(0x6364d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364da:{NFSU2_TR(0x6364da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6364dd:{NFSU2_TR(0x6364dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364e0:{NFSU2_TR(0x6364e0);
__builtin_memmove((R+4),(R+8),4);
}
B6364e2:{NFSU2_TR(0x6364e2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6364e5:{NFSU2_TR(0x6364e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364e9:{NFSU2_TR(0x6364e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6364ec:{NFSU2_TR(0x6364ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364ef:{NFSU2_TR(0x6364ef);
__builtin_memmove((R+4),(R+8),4);
}
B6364f1:{NFSU2_TR(0x6364f1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6364f4:{NFSU2_TR(0x6364f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364f8:{NFSU2_TR(0x6364f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6364fb:{NFSU2_TR(0x6364fb);
{goto L6364ff;}
}
B6364fd:L6364fd:{c.instructions+=1;NFSU2_TR(0x6364fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6364ff:L6364ff:{c.instructions+=10;NFSU2_TR(0x6364ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636502:{NFSU2_TR(0x636502);
__builtin_memmove((R+4),(R+8),4);
}
B636504:{NFSU2_TR(0x636504);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B636507:{NFSU2_TR(0x636507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63650a:{NFSU2_TR(0x63650a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63650e:{NFSU2_TR(0x63650e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636512:{NFSU2_TR(0x636512);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636515:{NFSU2_TR(0x636515);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636518:{NFSU2_TR(0x636518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63651a:{NFSU2_TR(0x63651a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63651c:L63651c:{c.instructions+=5;NFSU2_TR(0x63651c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636520:{NFSU2_TR(0x636520);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636523:{NFSU2_TR(0x636523);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636525:{NFSU2_TR(0x636525);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B636528:{NFSU2_TR(0x636528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63652dull));
TAIL_STATIC(0x5b5350u,5b5);
}
B63652d:L63652d:{c.instructions+=8;NFSU2_TR(0x63652d);
__builtin_memmove((R+12),(R+0),4);
}
B63652f:{NFSU2_TR(0x63652f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636532:{NFSU2_TR(0x636532);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636535:{NFSU2_TR(0x636535);
u8 U[4];
w4(U+0,u32(0x7a8b6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63653a:{NFSU2_TR(0x63653a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63653e:{NFSU2_TR(0x63653e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636542:{NFSU2_TR(0x636542);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636546:{NFSU2_TR(0x636546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63654bull));
TAIL_STATIC(0x43db50u,43d);
}
B63654b:L63654b:{c.instructions+=5;NFSU2_TR(0x63654b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63654f:{NFSU2_TR(0x63654f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B636553:{NFSU2_TR(0x636553);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636556:{NFSU2_TR(0x636556);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B63655b:{NFSU2_TR(0x63655b);
if(r1(R+518)){{goto L6365a2;}}
}
B63655d:L63655d:{c.instructions+=8;NFSU2_TR(0x63655d);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636563:{NFSU2_TR(0x636563);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B636566:{NFSU2_TR(0x636566);
w4(R+4,u32(r2(R+4)));
}
B636569:{NFSU2_TR(0x636569);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B63656d:{NFSU2_TR(0x63656d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636570:{NFSU2_TR(0x636570);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636572:{NFSU2_TR(0x636572);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636574:{NFSU2_TR(0x636574);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6365a2;}}
}
B636576:L636576:{c.instructions+=3;NFSU2_TR(0x636576);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636579:{NFSU2_TR(0x636579);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B63657c:{NFSU2_TR(0x63657c);
__builtin_memmove((R+16),(R+16),4);
}
B636580:L636580:{c.instructions+=4;NFSU2_TR(0x636580);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636582:{NFSU2_TR(0x636582);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B636585:{NFSU2_TR(0x636585);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636588:{NFSU2_TR(0x636588);
if(r1(R+518)){{goto L63661b;}}
}
B63658e:L63658e:{c.instructions+=2;NFSU2_TR(0x63658e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636590:{NFSU2_TR(0x636590);
if(r1(R+518)){{goto L63661b;}}
}
B636596:L636596:{c.instructions+=4;NFSU2_TR(0x636596);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B636597:{NFSU2_TR(0x636597);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B63659a:{NFSU2_TR(0x63659a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63659c:{NFSU2_TR(0x63659c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636580u);}goto L636580;}}
}
B63659e:L63659e:{c.instructions+=1;NFSU2_TR(0x63659e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6365a2:L6365a2:{c.instructions+=2;NFSU2_TR(0x6365a2);
u8 U[4];
w4(U+0,u32(0x7a8b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6365a7:{NFSU2_TR(0x6365a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6365acull));
TAIL_STATIC(0x43db50u,43d);
}
B6365ac:L6365ac:{c.instructions+=6;NFSU2_TR(0x6365ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6365b0:{NFSU2_TR(0x6365b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6365b4:{NFSU2_TR(0x6365b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6365b8:{NFSU2_TR(0x6365b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6365bb:{NFSU2_TR(0x6365bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6365c0:{NFSU2_TR(0x6365c0);
if(r1(R+518)){{goto L636751;}}
}
B6365c6:L6365c6:{c.instructions+=8;NFSU2_TR(0x6365c6);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B6365cb:{NFSU2_TR(0x6365cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6365ce:{NFSU2_TR(0x6365ce);
w4(R+4,u32(r2(R+4)));
}
B6365d1:{NFSU2_TR(0x6365d1);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B6365d5:{NFSU2_TR(0x6365d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6365d8:{NFSU2_TR(0x6365d8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6365da:{NFSU2_TR(0x6365da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6365dc:{NFSU2_TR(0x6365dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L636751;}}
}
B6365e2:L6365e2:{c.instructions+=4;NFSU2_TR(0x6365e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6365e5:{NFSU2_TR(0x6365e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6365e9:{NFSU2_TR(0x6365e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6365ec:{NFSU2_TR(0x6365ec);
__builtin_memmove((R+16),(R+16),4);
}
B6365f0:L6365f0:{c.instructions+=6;NFSU2_TR(0x6365f0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B6365f3:{NFSU2_TR(0x6365f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6365f7:{NFSU2_TR(0x6365f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6365fa:{NFSU2_TR(0x6365fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6365fe:{NFSU2_TR(0x6365fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636600:{NFSU2_TR(0x636600);
if(r1(R+518)){{goto L6366c0;}}
}
B636606:L636606:{c.instructions+=2;NFSU2_TR(0x636606);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636608:{NFSU2_TR(0x636608);
if(r1(R+518)){{goto L6366c0;}}
}
B63660e:L63660e:{c.instructions+=4;NFSU2_TR(0x63660e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63660f:{NFSU2_TR(0x63660f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B636612:{NFSU2_TR(0x636612);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B636614:{NFSU2_TR(0x636614);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6365f0u);}goto L6365f0;}}
}
B636616:L636616:{c.instructions+=1;NFSU2_TR(0x636616);
{goto L636751;}
}
B63661b:L63661b:{c.instructions+=2;NFSU2_TR(0x63661b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63661d:{NFSU2_TR(0x63661d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63659eu);}goto L63659e;}}
}
B636623:L636623:{c.instructions+=3;NFSU2_TR(0x636623);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636626:{NFSU2_TR(0x636626);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636628:{NFSU2_TR(0x636628);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63659eu);}goto L63659e;}}
}
B63662e:L63662e:{c.instructions+=3;NFSU2_TR(0x63662e);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B636633:{NFSU2_TR(0x636633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636634:{NFSU2_TR(0x636634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636639ull));
TAIL_STATIC(0x440e50u,440);
}
B636639:L636639:{c.instructions+=4;NFSU2_TR(0x636639);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63663d:{NFSU2_TR(0x63663d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636640:{NFSU2_TR(0x636640);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636642:{NFSU2_TR(0x636642);
if(r1(R+518)){{goto L636696;}}
}
B636644:L636644:{c.instructions+=24;NFSU2_TR(0x636644);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B636647:{NFSU2_TR(0x636647);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63664a:{NFSU2_TR(0x63664a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63664e:{NFSU2_TR(0x63664e);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B636651:{NFSU2_TR(0x636651);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B636658:{NFSU2_TR(0x636658);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63665c:{NFSU2_TR(0x63665c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636660:{NFSU2_TR(0x636660);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B636663:{NFSU2_TR(0x636663);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636667:{NFSU2_TR(0x636667);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63666b:{NFSU2_TR(0x63666b);
__builtin_memmove((R+8),(R+4),4);
}
B63666d:{NFSU2_TR(0x63666d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636671:{NFSU2_TR(0x636671);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B636674:{NFSU2_TR(0x636674);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636678:{NFSU2_TR(0x636678);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63667c:{NFSU2_TR(0x63667c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63667f:{NFSU2_TR(0x63667f);
__builtin_memmove((R+8),(R+4),4);
}
B636681:{NFSU2_TR(0x636681);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636685:{NFSU2_TR(0x636685);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B636688:{NFSU2_TR(0x636688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63668b:{NFSU2_TR(0x63668b);
__builtin_memmove((R+8),(R+4),4);
}
B63668d:{NFSU2_TR(0x63668d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636691:{NFSU2_TR(0x636691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636694:{NFSU2_TR(0x636694);
{goto L636698;}
}
B636696:L636696:{c.instructions+=1;NFSU2_TR(0x636696);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B636698:L636698:{c.instructions+=12;NFSU2_TR(0x636698);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63669b:{NFSU2_TR(0x63669b);
__builtin_memmove((R+8),(R+4),4);
}
B63669d:{NFSU2_TR(0x63669d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6366a1:{NFSU2_TR(0x6366a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6366a5:{NFSU2_TR(0x6366a5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B6366a8:{NFSU2_TR(0x6366a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x630ull))));
}
B6366ae:{NFSU2_TR(0x6366ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6366b1:{NFSU2_TR(0x6366b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6366b4:{NFSU2_TR(0x6366b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6366b7:{NFSU2_TR(0x6366b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6366b9:{NFSU2_TR(0x6366b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6366bb:{NFSU2_TR(0x6366bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6365a2u);}goto L6365a2;}
}
B6366c0:L6366c0:{c.instructions+=2;NFSU2_TR(0x6366c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6366c2:{NFSU2_TR(0x6366c2);
if(r1(R+518)){{goto L636751;}}
}
B6366c8:L6366c8:{c.instructions+=3;NFSU2_TR(0x6366c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6366cb:{NFSU2_TR(0x6366cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6366cd:{NFSU2_TR(0x6366cd);
if(r1(R+518)){{goto L636751;}}
}
B6366d3:L6366d3:{c.instructions+=3;NFSU2_TR(0x6366d3);
__builtin_memmove((R+4),gp(0x8a1c1c),4);
}
B6366d9:{NFSU2_TR(0x6366d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6366da:{NFSU2_TR(0x6366da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6366dfull));
TAIL_STATIC(0x440e50u,440);
}
B6366df:L6366df:{c.instructions+=3;NFSU2_TR(0x6366df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6366e2:{NFSU2_TR(0x6366e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6366e4:{NFSU2_TR(0x6366e4);
if(r1(R+518)){{goto L636738;}}
}
B6366e6:L6366e6:{c.instructions+=24;NFSU2_TR(0x6366e6);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6366e9:{NFSU2_TR(0x6366e9);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6366ec:{NFSU2_TR(0x6366ec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6366f0:{NFSU2_TR(0x6366f0);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6366f3:{NFSU2_TR(0x6366f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6366fa:{NFSU2_TR(0x6366fa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6366fe:{NFSU2_TR(0x6366fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636702:{NFSU2_TR(0x636702);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B636705:{NFSU2_TR(0x636705);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636709:{NFSU2_TR(0x636709);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63670d:{NFSU2_TR(0x63670d);
__builtin_memmove((R+4),(R+8),4);
}
B63670f:{NFSU2_TR(0x63670f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636713:{NFSU2_TR(0x636713);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B636716:{NFSU2_TR(0x636716);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63671a:{NFSU2_TR(0x63671a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63671e:{NFSU2_TR(0x63671e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636721:{NFSU2_TR(0x636721);
__builtin_memmove((R+4),(R+8),4);
}
B636723:{NFSU2_TR(0x636723);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636727:{NFSU2_TR(0x636727);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B63672a:{NFSU2_TR(0x63672a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63672d:{NFSU2_TR(0x63672d);
__builtin_memmove((R+4),(R+8),4);
}
B63672f:{NFSU2_TR(0x63672f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636733:{NFSU2_TR(0x636733);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636736:{NFSU2_TR(0x636736);
{goto L63673a;}
}
B636738:L636738:{c.instructions+=1;NFSU2_TR(0x636738);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63673a:L63673a:{c.instructions+=6;NFSU2_TR(0x63673a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63673e:{NFSU2_TR(0x63673e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x634ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636744:{NFSU2_TR(0x636744);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x630ull))));
}
B63674a:{NFSU2_TR(0x63674a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63674d:{NFSU2_TR(0x63674d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63674f:{NFSU2_TR(0x63674f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B636751:L636751:{c.instructions+=5;NFSU2_TR(0x636751);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636755:{NFSU2_TR(0x636755);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636758:{NFSU2_TR(0x636758);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63675e:{NFSU2_TR(0x63675e);
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
B636760:{NFSU2_TR(0x636760);
if(r1(R+518)){{goto L6367e5;}}
}
B636766:L636766:{c.instructions+=2;NFSU2_TR(0x636766);
u8 U[4];
w4(U+0,u32(0x7a8780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63676b:{NFSU2_TR(0x63676b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636770ull));
TAIL_STATIC(0x43db50u,43d);
}
B636770:L636770:{c.instructions+=4;NFSU2_TR(0x636770);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B636774:{NFSU2_TR(0x636774);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636777:{NFSU2_TR(0x636777);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B63677c:{NFSU2_TR(0x63677c);
if(r1(R+518)){{goto L6367b6;}}
}
B63677e:L63677e:{c.instructions+=8;NFSU2_TR(0x63677e);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B636784:{NFSU2_TR(0x636784);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B636787:{NFSU2_TR(0x636787);
w4(R+4,u32(r2(R+4)));
}
B63678a:{NFSU2_TR(0x63678a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B63678e:{NFSU2_TR(0x63678e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636791:{NFSU2_TR(0x636791);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636793:{NFSU2_TR(0x636793);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636795:{NFSU2_TR(0x636795);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6367b6;}}
}
B636797:L636797:{c.instructions+=3;NFSU2_TR(0x636797);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63679a:{NFSU2_TR(0x63679a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B63679d:{NFSU2_TR(0x63679d);
__builtin_memmove((R+4),(R+4),4);
}
B6367a0:L6367a0:{c.instructions+=4;NFSU2_TR(0x6367a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6367a2:{NFSU2_TR(0x6367a2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B6367a5:{NFSU2_TR(0x6367a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6367a8:{NFSU2_TR(0x6367a8);
if(r1(R+518)){{goto L6367dc;}}
}
B6367aa:L6367aa:{c.instructions+=2;NFSU2_TR(0x6367aa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6367ac:{NFSU2_TR(0x6367ac);
if(r1(R+518)){{goto L6367dc;}}
}
B6367ae:L6367ae:{c.instructions+=4;NFSU2_TR(0x6367ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6367af:{NFSU2_TR(0x6367af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6367b2:{NFSU2_TR(0x6367b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6367b4:{NFSU2_TR(0x6367b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6367a0u);}goto L6367a0;}}
}
B6367b6:L6367b6:{c.instructions+=1;NFSU2_TR(0x6367b6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6367b8:L6367b8:{c.instructions+=12;NFSU2_TR(0x6367b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6367bc:{NFSU2_TR(0x6367bc);
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
B6367be:{NFSU2_TR(0x6367be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6367c1:{NFSU2_TR(0x6367c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6367c7:{NFSU2_TR(0x6367c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6367ce:{NFSU2_TR(0x6367ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6367d5:{NFSU2_TR(0x6367d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6367d6:{NFSU2_TR(0x6367d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6367d7:{NFSU2_TR(0x6367d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6367d8:{NFSU2_TR(0x6367d8);
__builtin_memmove((R+16),(R+20),4);
}
B6367da:{NFSU2_TR(0x6367da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6367db:{NFSU2_TR(0x6367db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6367dc:L6367dc:{c.instructions+=2;NFSU2_TR(0x6367dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6367de:{NFSU2_TR(0x6367de);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6367b6u);}goto L6367b6;}}
}
B6367e0:L6367e0:{c.instructions+=2;NFSU2_TR(0x6367e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6367e3:{NFSU2_TR(0x6367e3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6367b8u);}goto L6367b8;}
}
B6367e5:L6367e5:{c.instructions+=9;NFSU2_TR(0x6367e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6367ec:{NFSU2_TR(0x6367ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6367ed:{NFSU2_TR(0x6367ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6367ee:{NFSU2_TR(0x6367ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d48ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6367f5:{NFSU2_TR(0x6367f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6367fc:{NFSU2_TR(0x6367fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6367fd:{NFSU2_TR(0x6367fd);
__builtin_memmove((R+16),(R+20),4);
}
B6367ff:{NFSU2_TR(0x6367ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B636800:{NFSU2_TR(0x636800);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636840:L636840:{c.instructions+=12;NFSU2_TR(0x636840);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636844:{NFSU2_TR(0x636844);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636845:{NFSU2_TR(0x636845);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636846:{NFSU2_TR(0x636846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636847:{NFSU2_TR(0x636847);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636849:{NFSU2_TR(0x636849);
__builtin_memmove((R+12),(R+4),4);
}
B63684b:{NFSU2_TR(0x63684b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63684d:{NFSU2_TR(0x63684d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63684e:{NFSU2_TR(0x63684e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636851:{NFSU2_TR(0x636851);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B636854:{NFSU2_TR(0x636854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636855:{NFSU2_TR(0x636855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63685aull));
TAIL_STATIC(0x631e20u,631);
}
B63685a:L63685a:{c.instructions+=7;NFSU2_TR(0x63685a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636860:{NFSU2_TR(0x636860);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x63cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636866:{NFSU2_TR(0x636866);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x638ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63686c:{NFSU2_TR(0x63686c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63686f:{NFSU2_TR(0x63686f);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B636872:{NFSU2_TR(0x636872);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636874:{NFSU2_TR(0x636874);
if(r1(R+518)){{goto L63687c;}}
}
B636876:L636876:{c.instructions+=2;NFSU2_TR(0x636876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636879:{NFSU2_TR(0x636879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63687c:L63687c:{c.instructions+=3;NFSU2_TR(0x63687c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636882:{NFSU2_TR(0x636882);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636888:{NFSU2_TR(0x636888);
if(r1(R+518)){{goto L636896;}}
}
B63688a:L63688a:{c.instructions+=2;NFSU2_TR(0x63688a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636890:{NFSU2_TR(0x636890);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x650ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636896:L636896:{c.instructions+=3;NFSU2_TR(0x636896);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63689c:{NFSU2_TR(0x63689c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6368a2:{NFSU2_TR(0x6368a2);
if(r1(R+518)){{goto L6368b0;}}
}
B6368a4:L6368a4:{c.instructions+=2;NFSU2_TR(0x6368a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x69cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368aa:{NFSU2_TR(0x6368aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6a0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368b0:L6368b0:{c.instructions+=3;NFSU2_TR(0x6368b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6368b6:{NFSU2_TR(0x6368b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6368bc:{NFSU2_TR(0x6368bc);
if(r1(R+518)){{goto L6368ca;}}
}
B6368be:L6368be:{c.instructions+=2;NFSU2_TR(0x6368be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368c4:{NFSU2_TR(0x6368c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6b0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368ca:L6368ca:{c.instructions+=3;NFSU2_TR(0x6368ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6368d0:{NFSU2_TR(0x6368d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6368d6:{NFSU2_TR(0x6368d6);
if(r1(R+518)){{goto L6368e4;}}
}
B6368d8:L6368d8:{c.instructions+=2;NFSU2_TR(0x6368d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368de:{NFSU2_TR(0x6368de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368e4:L6368e4:{c.instructions+=3;NFSU2_TR(0x6368e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6368ea:{NFSU2_TR(0x6368ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6368f0:{NFSU2_TR(0x6368f0);
if(r1(R+518)){{goto L6368fe;}}
}
B6368f2:L6368f2:{c.instructions+=2;NFSU2_TR(0x6368f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368f8:{NFSU2_TR(0x6368f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6d0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6368fe:L6368fe:{c.instructions+=3;NFSU2_TR(0x6368fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636904:{NFSU2_TR(0x636904);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x65cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63690a:{NFSU2_TR(0x63690a);
if(r1(R+518)){{goto L636918;}}
}
B63690c:L63690c:{c.instructions+=2;NFSU2_TR(0x63690c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x65cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636912:{NFSU2_TR(0x636912);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x660ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636918:L636918:{c.instructions+=3;NFSU2_TR(0x636918);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63691e:{NFSU2_TR(0x63691e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x66cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636924:{NFSU2_TR(0x636924);
if(r1(R+518)){{goto L636932;}}
}
B636926:L636926:{c.instructions+=2;NFSU2_TR(0x636926);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x66cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63692c:{NFSU2_TR(0x63692c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x670ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636932:L636932:{c.instructions+=3;NFSU2_TR(0x636932);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636938:{NFSU2_TR(0x636938);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x67cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63693e:{NFSU2_TR(0x63693e);
if(r1(R+518)){{goto L63694c;}}
}
B636940:L636940:{c.instructions+=2;NFSU2_TR(0x636940);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x67cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636946:{NFSU2_TR(0x636946);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x680ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63694c:L63694c:{c.instructions+=4;NFSU2_TR(0x63694c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xac8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B636952:{NFSU2_TR(0x636952);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636953:{NFSU2_TR(0x636953);
w4(R+4,u32(0x124ull));
}
B636958:{NFSU2_TR(0x636958);
__builtin_memmove((R+28),(R+0),4);
}
B63695a:L63695a:{c.instructions+=1;NFSU2_TR(0x63695a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L63695c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63695au);}goto L63695a;}
}
B63695c:L63695c:{c.instructions+=3;NFSU2_TR(0x63695c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636962:{NFSU2_TR(0x636962);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636965:{NFSU2_TR(0x636965);
if(r1(R+518)){{goto L63696d;}}
}
B636967:L636967:{c.instructions+=2;NFSU2_TR(0x636967);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63696a:{NFSU2_TR(0x63696a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63696d:L63696d:{c.instructions+=3;NFSU2_TR(0x63696d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636973:{NFSU2_TR(0x636973);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xadcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636979:{NFSU2_TR(0x636979);
if(r1(R+518)){{goto L636987;}}
}
B63697b:L63697b:{c.instructions+=2;NFSU2_TR(0x63697b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xadcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636981:{NFSU2_TR(0x636981);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xae0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636987:L636987:{c.instructions+=3;NFSU2_TR(0x636987);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63698d:{NFSU2_TR(0x63698d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636993:{NFSU2_TR(0x636993);
if(r1(R+518)){{goto L6369a1;}}
}
B636995:L636995:{c.instructions+=2;NFSU2_TR(0x636995);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63699b:{NFSU2_TR(0x63699b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaf0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6369a1:L6369a1:{c.instructions+=2;NFSU2_TR(0x6369a1);
u8 U[4];
w4(U+0,u32(0x7a8520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6369a6:{NFSU2_TR(0x6369a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6369abull));
TAIL_STATIC(0x43db50u,43d);
}
B6369ab:L6369ab:{c.instructions+=4;NFSU2_TR(0x6369ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xafcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6369b1:{NFSU2_TR(0x6369b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6369b4:{NFSU2_TR(0x6369b4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6369b6:{NFSU2_TR(0x6369b6);
if(r1(R+518)){{goto L6369c4;}}
}
B6369b8:L6369b8:{c.instructions+=2;NFSU2_TR(0x6369b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xafcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6369be:{NFSU2_TR(0x6369be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb00ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6369c4:L6369c4:{c.instructions+=2;NFSU2_TR(0x6369c4);
u8 U[4];
w4(U+0,u32(0x7a8520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6369c9:{NFSU2_TR(0x6369c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6369ceull));
TAIL_STATIC(0x43db50u,43d);
}
B6369ce:L6369ce:{c.instructions+=4;NFSU2_TR(0x6369ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6369d4:{NFSU2_TR(0x6369d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6369d7:{NFSU2_TR(0x6369d7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6369d9:{NFSU2_TR(0x6369d9);
if(r1(R+518)){{goto L6369e7;}}
}
B6369db:L6369db:{c.instructions+=2;NFSU2_TR(0x6369db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6369e1:{NFSU2_TR(0x6369e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6369e7:L6369e7:{c.instructions+=4;NFSU2_TR(0x6369e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6369ed:{NFSU2_TR(0x6369ed);
w4(R+4,u32(0x124ull));
}
B6369f2:{NFSU2_TR(0x6369f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x638ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6369f8:{NFSU2_TR(0x6369f8);
__builtin_memmove((R+28),(R+0),4);
}
B6369fa:L6369fa:{c.instructions+=1;NFSU2_TR(0x6369fa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6369fc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6369fau);}goto L6369fa;}
}
B6369fc:L6369fc:{c.instructions+=4;NFSU2_TR(0x6369fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636a02:{NFSU2_TR(0x636a02);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636a05:{NFSU2_TR(0x636a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B636a06:{NFSU2_TR(0x636a06);
if(r1(R+518)){{goto L636a0e;}}
}
B636a08:L636a08:{c.instructions+=2;NFSU2_TR(0x636a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a0b:{NFSU2_TR(0x636a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a0e:L636a0e:{c.instructions+=3;NFSU2_TR(0x636a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636a14:{NFSU2_TR(0x636a14);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636a1a:{NFSU2_TR(0x636a1a);
if(r1(R+518)){{goto L636a28;}}
}
B636a1c:L636a1c:{c.instructions+=2;NFSU2_TR(0x636a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a22:{NFSU2_TR(0x636a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a28:L636a28:{c.instructions+=3;NFSU2_TR(0x636a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636a2e:{NFSU2_TR(0x636a2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636a34:{NFSU2_TR(0x636a34);
if(r1(R+518)){{goto L636a42;}}
}
B636a36:L636a36:{c.instructions+=2;NFSU2_TR(0x636a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a3c:{NFSU2_TR(0x636a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf80ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a42:L636a42:{c.instructions+=2;NFSU2_TR(0x636a42);
u8 U[4];
w4(U+0,u32(0x7a8520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636a47:{NFSU2_TR(0x636a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636a4cull));
TAIL_STATIC(0x43db50u,43d);
}
B636a4c:L636a4c:{c.instructions+=4;NFSU2_TR(0x636a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636a52:{NFSU2_TR(0x636a52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B636a55:{NFSU2_TR(0x636a55);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636a57:{NFSU2_TR(0x636a57);
if(r1(R+518)){{goto L636a65;}}
}
B636a59:L636a59:{c.instructions+=2;NFSU2_TR(0x636a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a5f:{NFSU2_TR(0x636a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf90ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a65:L636a65:{c.instructions+=3;NFSU2_TR(0x636a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636a6b:{NFSU2_TR(0x636a6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636a71:{NFSU2_TR(0x636a71);
if(r1(R+518)){{goto L636a7f;}}
}
B636a73:L636a73:{c.instructions+=2;NFSU2_TR(0x636a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a79:{NFSU2_TR(0x636a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfa0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a7f:L636a7f:{c.instructions+=3;NFSU2_TR(0x636a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636a85:{NFSU2_TR(0x636a85);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x177cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B636a8b:{NFSU2_TR(0x636a8b);
if(r1(R+518)){{goto L636a99;}}
}
B636a8d:L636a8d:{c.instructions+=2;NFSU2_TR(0x636a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x177cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a93:{NFSU2_TR(0x636a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1780ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636a99:L636a99:{c.instructions+=3;NFSU2_TR(0x636a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636a9f:{NFSU2_TR(0x636a9f);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x179cull))));
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
B636aa5:{NFSU2_TR(0x636aa5);
if(r1(R+518)){{goto L636ab3;}}
}
B636aa7:L636aa7:{c.instructions+=2;NFSU2_TR(0x636aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x179cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636aad:{NFSU2_TR(0x636aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636ab3:L636ab3:{c.instructions+=4;NFSU2_TR(0x636ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636ab4:{NFSU2_TR(0x636ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B636ab5:{NFSU2_TR(0x636ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B636ab6:{NFSU2_TR(0x636ab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636ac0:L636ac0:{c.instructions+=7;NFSU2_TR(0x636ac0);
__builtin_memmove((R+0),(R+4),4);
}
B636ac2:{NFSU2_TR(0x636ac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636ac3:{NFSU2_TR(0x636ac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B636ac5:{NFSU2_TR(0x636ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636ac8:{NFSU2_TR(0x636ac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636acb:{NFSU2_TR(0x636acb);
w4(R+4,u32(0x3ull));
}
B636ad0:{NFSU2_TR(0x636ad0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B636ad2:L636ad2:{c.instructions+=5;NFSU2_TR(0x636ad2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636ad4:{NFSU2_TR(0x636ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636ad7:{NFSU2_TR(0x636ad7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636ada:{NFSU2_TR(0x636ada);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636adb:{NFSU2_TR(0x636adb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636ad2u);}goto L636ad2;}}
}
B636add:L636add:{c.instructions+=2;NFSU2_TR(0x636add);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+8),(U+0),4);
}
B636ae0:{NFSU2_TR(0x636ae0);
w4(R+4,u32(0x3ull));
}
B636ae5:L636ae5:{c.instructions+=5;NFSU2_TR(0x636ae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636ae7:{NFSU2_TR(0x636ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636aea:{NFSU2_TR(0x636aea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636aed:{NFSU2_TR(0x636aed);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636aee:{NFSU2_TR(0x636aee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636ae5u);}goto L636ae5;}}
}
B636af0:L636af0:{c.instructions+=2;NFSU2_TR(0x636af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636af3:{NFSU2_TR(0x636af3);
w4(R+4,u32(0x3ull));
}
B636af8:L636af8:{c.instructions+=5;NFSU2_TR(0x636af8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636afa:{NFSU2_TR(0x636afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636afd:{NFSU2_TR(0x636afd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b00:{NFSU2_TR(0x636b00);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b01:{NFSU2_TR(0x636b01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636af8u);}goto L636af8;}}
}
B636b03:L636b03:{c.instructions+=3;NFSU2_TR(0x636b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b06:{NFSU2_TR(0x636b06);
w4(R+4,u32(0x3ull));
}
B636b0b:{NFSU2_TR(0x636b0b);
{goto L636b10;}
}
B636b10:L636b10:{c.instructions+=5;NFSU2_TR(0x636b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636b12:{NFSU2_TR(0x636b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636b15:{NFSU2_TR(0x636b15);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b18:{NFSU2_TR(0x636b18);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b19:{NFSU2_TR(0x636b19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636b10u);}goto L636b10;}}
}
B636b1b:L636b1b:{c.instructions+=2;NFSU2_TR(0x636b1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b1e:{NFSU2_TR(0x636b1e);
w4(R+4,u32(0x3ull));
}
B636b23:L636b23:{c.instructions+=5;NFSU2_TR(0x636b23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636b25:{NFSU2_TR(0x636b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636b28:{NFSU2_TR(0x636b28);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b2b:{NFSU2_TR(0x636b2b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b2c:{NFSU2_TR(0x636b2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636b23u);}goto L636b23;}}
}
B636b2e:L636b2e:{c.instructions+=3;NFSU2_TR(0x636b2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b34:{NFSU2_TR(0x636b34);
w4(R+4,u32(0x3ull));
}
B636b39:{NFSU2_TR(0x636b39);
__builtin_memmove((R+16),(R+16),4);
}
B636b40:L636b40:{c.instructions+=5;NFSU2_TR(0x636b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636b42:{NFSU2_TR(0x636b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636b45:{NFSU2_TR(0x636b45);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b48:{NFSU2_TR(0x636b48);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b49:{NFSU2_TR(0x636b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636b40u);}goto L636b40;}}
}
B636b4b:L636b4b:{c.instructions+=2;NFSU2_TR(0x636b4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b51:{NFSU2_TR(0x636b51);
w4(R+4,u32(0x3ull));
}
B636b56:L636b56:{c.instructions+=5;NFSU2_TR(0x636b56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636b58:{NFSU2_TR(0x636b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636b5b:{NFSU2_TR(0x636b5b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b5e:{NFSU2_TR(0x636b5e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b5f:{NFSU2_TR(0x636b5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636b56u);}goto L636b56;}}
}
B636b61:L636b61:{c.instructions+=3;NFSU2_TR(0x636b61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b67:{NFSU2_TR(0x636b67);
w4(R+4,u32(0x3ull));
}
B636b6c:{NFSU2_TR(0x636b6c);
__builtin_memmove((R+16),(R+16),4);
}
B636b70:L636b70:{c.instructions+=5;NFSU2_TR(0x636b70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636b72:{NFSU2_TR(0x636b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636b75:{NFSU2_TR(0x636b75);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b78:{NFSU2_TR(0x636b78);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b79:{NFSU2_TR(0x636b79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636b70u);}goto L636b70;}}
}
B636b7b:L636b7b:{c.instructions+=2;NFSU2_TR(0x636b7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b81:{NFSU2_TR(0x636b81);
w4(R+4,u32(0x3ull));
}
B636b86:L636b86:{c.instructions+=5;NFSU2_TR(0x636b86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636b88:{NFSU2_TR(0x636b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636b8b:{NFSU2_TR(0x636b8b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636b8e:{NFSU2_TR(0x636b8e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636b8f:{NFSU2_TR(0x636b8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636b86u);}goto L636b86;}}
}
B636b91:L636b91:{c.instructions+=3;NFSU2_TR(0x636b91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((R+8),(U+0),4);
}
B636b97:{NFSU2_TR(0x636b97);
w4(R+4,u32(0x3ull));
}
B636b9c:{NFSU2_TR(0x636b9c);
__builtin_memmove((R+16),(R+16),4);
}
B636ba0:L636ba0:{c.instructions+=5;NFSU2_TR(0x636ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636ba2:{NFSU2_TR(0x636ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636ba5:{NFSU2_TR(0x636ba5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636ba8:{NFSU2_TR(0x636ba8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636ba9:{NFSU2_TR(0x636ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636ba0u);}goto L636ba0;}}
}
B636bab:L636bab:{c.instructions+=2;NFSU2_TR(0x636bab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636bb1:{NFSU2_TR(0x636bb1);
w4(R+4,u32(0x3ull));
}
B636bb6:L636bb6:{c.instructions+=5;NFSU2_TR(0x636bb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636bb8:{NFSU2_TR(0x636bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636bbb:{NFSU2_TR(0x636bbb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636bbe:{NFSU2_TR(0x636bbe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B636bbf:{NFSU2_TR(0x636bbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636bb6u);}goto L636bb6;}}
}
B636bc1:L636bc1:{c.instructions+=3;NFSU2_TR(0x636bc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B636bc7:{NFSU2_TR(0x636bc7);
w4(R+4,u32(0x3ull));
}
B636bcc:{NFSU2_TR(0x636bcc);
__builtin_memmove((R+16),(R+16),4);
}
B636bd0:L636bd0:{c.instructions+=5;NFSU2_TR(0x636bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636bd2:{NFSU2_TR(0x636bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636bd5:{NFSU2_TR(0x636bd5);
w1(R+512,carry<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636bd8:{NFSU2_TR(0x636bd8);
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
B636bd9:{NFSU2_TR(0x636bd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636bd0u);}goto L636bd0;}}
}
B636bdb:L636bdb:{c.instructions+=2;NFSU2_TR(0x636bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636bdc:{NFSU2_TR(0x636bdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636be0:L636be0:{c.instructions+=6;NFSU2_TR(0x636be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B636be3:{NFSU2_TR(0x636be3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636be4:{NFSU2_TR(0x636be4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B636be8:{NFSU2_TR(0x636be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B636bea:{NFSU2_TR(0x636bea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34600ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636bef:{NFSU2_TR(0x636bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636c34;}}
}
B636bf1:L636bf1:{c.instructions+=5;NFSU2_TR(0x636bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B636bf4:{NFSU2_TR(0x636bf4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B636bf7:{NFSU2_TR(0x636bf7);
__builtin_memmove(gp(0x8a1ccc),(R+0),4);
}
B636bfc:{NFSU2_TR(0x636bfc);
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
B636bfe:{NFSU2_TR(0x636bfe);
{goto L636c10;}
}
B636c00:L636c00:{c.instructions+=2;NFSU2_TR(0x636c00);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B636c05:{NFSU2_TR(0x636c05);
{goto L636c10;}
}
B636c10:L636c10:{c.instructions+=2;NFSU2_TR(0x636c10);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B636c17:{NFSU2_TR(0x636c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636c1cull));
TAIL_STATIC(0x4022c0u,402);
}
B636c1c:L636c1c:{c.instructions+=3;NFSU2_TR(0x636c1c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x890ull))));
}
B636c22:{NFSU2_TR(0x636c22);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x189e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x189e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x189e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B636c28:{NFSU2_TR(0x636c28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636c00u);}goto L636c00;}}
}
B636c2a:L636c2a:{c.instructions+=4;NFSU2_TR(0x636c2a);
w4(R+0,u32(0x1ull));
}
B636c2f:{NFSU2_TR(0x636c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636c30:{NFSU2_TR(0x636c30);
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
B636c33:{NFSU2_TR(0x636c33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636c34:L636c34:{c.instructions+=2;NFSU2_TR(0x636c34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34601ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636c39:{NFSU2_TR(0x636c39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636c59;}}
}
B636c3b:L636c3b:{c.instructions+=9;NFSU2_TR(0x636c3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B636c3e:{NFSU2_TR(0x636c3e);
__builtin_memmove(gp(0x8a1cd4),(R+0),4);
}
B636c43:{NFSU2_TR(0x636c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636c46:{NFSU2_TR(0x636c46);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B636c49:{NFSU2_TR(0x636c49);
__builtin_memmove(gp(0x8a1cd8),(R+4),4);
}
B636c4f:{NFSU2_TR(0x636c4f);
w4(R+0,u32(0x1ull));
}
B636c54:{NFSU2_TR(0x636c54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636c55:{NFSU2_TR(0x636c55);
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
B636c58:{NFSU2_TR(0x636c58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636c59:L636c59:{c.instructions+=2;NFSU2_TR(0x636c59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34608ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636c5e:{NFSU2_TR(0x636c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636c73;}}
}
B636c60:L636c60:{c.instructions+=6;NFSU2_TR(0x636c60);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B636c63:{NFSU2_TR(0x636c63);
__builtin_memmove(gp(0x8a1cdc),(R+24),4);
}
B636c69:{NFSU2_TR(0x636c69);
w4(R+0,u32(0x1ull));
}
B636c6e:{NFSU2_TR(0x636c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636c6f:{NFSU2_TR(0x636c6f);
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
B636c72:{NFSU2_TR(0x636c72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636c73:L636c73:{c.instructions+=2;NFSU2_TR(0x636c73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34609ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636c78:{NFSU2_TR(0x636c78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636c96;}}
}
B636c7a:L636c7a:{c.instructions+=8;NFSU2_TR(0x636c7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B636c7d:{NFSU2_TR(0x636c7d);
__builtin_memmove(gp(0x8a1ce0),(R+0),4);
}
B636c82:{NFSU2_TR(0x636c82);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B636c87:{NFSU2_TR(0x636c87);
__builtin_memmove(gp(0x8a1ce4),(R+0),4);
}
B636c8c:{NFSU2_TR(0x636c8c);
w4(R+0,u32(0x1ull));
}
B636c91:{NFSU2_TR(0x636c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636c92:{NFSU2_TR(0x636c92);
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
B636c95:{NFSU2_TR(0x636c95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636c96:L636c96:{c.instructions+=2;NFSU2_TR(0x636c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34607ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636c9b:{NFSU2_TR(0x636c9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636ccb;}}
}
B636c9d:L636c9d:{c.instructions+=12;NFSU2_TR(0x636c9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B636ca0:{NFSU2_TR(0x636ca0);
__builtin_memmove(gp(0x8a1ce8),(R+0),4);
}
B636ca5:{NFSU2_TR(0x636ca5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x550ull))));
}
B636caa:{NFSU2_TR(0x636caa);
__builtin_memmove(gp(0x8a1cec),(R+0),4);
}
B636caf:{NFSU2_TR(0x636caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636cb2:{NFSU2_TR(0x636cb2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x550ull))));
}
B636cb8:{NFSU2_TR(0x636cb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B636cbb:{NFSU2_TR(0x636cbb);
__builtin_memmove(gp(0x8a1cf0),(R+8),4);
}
B636cc1:{NFSU2_TR(0x636cc1);
w4(R+0,u32(0x1ull));
}
B636cc6:{NFSU2_TR(0x636cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636cc7:{NFSU2_TR(0x636cc7);
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
B636cca:{NFSU2_TR(0x636cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636ccb:L636ccb:{c.instructions+=2;NFSU2_TR(0x636ccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80034602ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636cd0:{NFSU2_TR(0x636cd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636ffa;}}
}
B636cd6:L636cd6:{c.instructions+=52;NFSU2_TR(0x636cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636cd9:{NFSU2_TR(0x636cd9);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B636cdd:{NFSU2_TR(0x636cdd);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B636ce1:{NFSU2_TR(0x636ce1);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B636ce5:{NFSU2_TR(0x636ce5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B636ce9:{NFSU2_TR(0x636ce9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B636ced:{NFSU2_TR(0x636ced);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636cee:{NFSU2_TR(0x636cee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636cef:{NFSU2_TR(0x636cef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B636cf2:{NFSU2_TR(0x636cf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B636cf3:{NFSU2_TR(0x636cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B636cf6:{NFSU2_TR(0x636cf6);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B636cfa:{NFSU2_TR(0x636cfa);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B636cfe:{NFSU2_TR(0x636cfe);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B636d02:{NFSU2_TR(0x636d02);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B636d06:{NFSU2_TR(0x636d06);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636d09:{NFSU2_TR(0x636d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d0c:{NFSU2_TR(0x636d0c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B636d10:{NFSU2_TR(0x636d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d14:{NFSU2_TR(0x636d14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636d18:{NFSU2_TR(0x636d18);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B636d1b:{NFSU2_TR(0x636d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d1e:{NFSU2_TR(0x636d1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B636d20:{NFSU2_TR(0x636d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d23:{NFSU2_TR(0x636d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B636d26:{NFSU2_TR(0x636d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d29:{NFSU2_TR(0x636d29);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B636d2c:{NFSU2_TR(0x636d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d2f:{NFSU2_TR(0x636d2f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B636d32:{NFSU2_TR(0x636d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d35:{NFSU2_TR(0x636d35);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B636d38:{NFSU2_TR(0x636d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d3b:{NFSU2_TR(0x636d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636d3e:{NFSU2_TR(0x636d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636d41:{NFSU2_TR(0x636d41);
__builtin_memmove(gp(0x8a1cc8),(R+24),4);
}
B636d47:{NFSU2_TR(0x636d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636d4a:{NFSU2_TR(0x636d4a);
__builtin_memmove(gp(0x8a1cb0),(R+8),4);
}
B636d50:{NFSU2_TR(0x636d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636d53:{NFSU2_TR(0x636d53);
__builtin_memmove(gp(0x8a1cb4),(R+0),4);
}
B636d58:{NFSU2_TR(0x636d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636d5b:{NFSU2_TR(0x636d5b);
__builtin_memmove(gp(0x8a1cb8),(R+8),4);
}
B636d61:{NFSU2_TR(0x636d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636d64:{NFSU2_TR(0x636d64);
__builtin_memmove(gp(0x8a1cbc),(R+0),4);
}
B636d69:{NFSU2_TR(0x636d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636d6c:{NFSU2_TR(0x636d6c);
__builtin_memmove(gp(0x8a1cc0),(R+8),4);
}
B636d72:{NFSU2_TR(0x636d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636d75:{NFSU2_TR(0x636d75);
__builtin_memmove(gp(0x8a1cc4),(R+0),4);
}
B636d7a:{NFSU2_TR(0x636d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636d7d:{NFSU2_TR(0x636d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636d80:{NFSU2_TR(0x636d80);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B636d82:{NFSU2_TR(0x636d82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B636d84:{NFSU2_TR(0x636d84);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L636d91;}}
}
B636d86:L636d86:{c.instructions+=4;NFSU2_TR(0x636d86);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B636d89:{NFSU2_TR(0x636d89);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B636d8d:{NFSU2_TR(0x636d8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B636d8f:{NFSU2_TR(0x636d8f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636d86u);}goto L636d86;}}
}
B636d91:L636d91:{c.instructions+=4;NFSU2_TR(0x636d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636d94:{NFSU2_TR(0x636d94);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B636d96:{NFSU2_TR(0x636d96);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636d98:{NFSU2_TR(0x636d98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L636e17;}}
}
B636d9a:L636d9a:{c.instructions+=2;NFSU2_TR(0x636d9a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B636d9c:{NFSU2_TR(0x636d9c);
__builtin_memmove((R+16),(R+16),4);
}
B636da0:L636da0:{c.instructions+=5;NFSU2_TR(0x636da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636da3:{NFSU2_TR(0x636da3);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B636da6:{NFSU2_TR(0x636da6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B636da8:{NFSU2_TR(0x636da8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B636daa:{NFSU2_TR(0x636daa);
if(r1(R+518)){{goto L636e0c;}}
}
B636dac:L636dac:{c.instructions+=2;NFSU2_TR(0x636dac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B636daf:{NFSU2_TR(0x636daf);
w4(R+8,u32(0x2ull));
}
B636db4:L636db4:{c.instructions+=3;NFSU2_TR(0x636db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636db7:{NFSU2_TR(0x636db7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636dba:{NFSU2_TR(0x636dba);
if(r1(R+518)){{goto L636dc9;}}
}
B636dbc:L636dbc:{c.instructions+=3;NFSU2_TR(0x636dbc);
__builtin_memmove((R+20),gp(0x8a1cb0),4);
}
B636dc2:{NFSU2_TR(0x636dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636dc6:{NFSU2_TR(0x636dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636dc9:L636dc9:{c.instructions+=3;NFSU2_TR(0x636dc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B636dcb:{NFSU2_TR(0x636dcb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636dce:{NFSU2_TR(0x636dce);
if(r1(R+518)){{goto L636ddc;}}
}
B636dd0:L636dd0:{c.instructions+=3;NFSU2_TR(0x636dd0);
__builtin_memmove((R+20),gp(0x8a1cb0),4);
}
B636dd6:{NFSU2_TR(0x636dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636dda:{NFSU2_TR(0x636dda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B636ddc:L636ddc:{c.instructions+=3;NFSU2_TR(0x636ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636ddf:{NFSU2_TR(0x636ddf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636de2:{NFSU2_TR(0x636de2);
if(r1(R+518)){{goto L636df1;}}
}
B636de4:L636de4:{c.instructions+=3;NFSU2_TR(0x636de4);
__builtin_memmove((R+20),gp(0x8a1cb0),4);
}
B636dea:{NFSU2_TR(0x636dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636dee:{NFSU2_TR(0x636dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636df1:L636df1:{c.instructions+=3;NFSU2_TR(0x636df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636df4:{NFSU2_TR(0x636df4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636df7:{NFSU2_TR(0x636df7);
if(r1(R+518)){{goto L636e06;}}
}
B636df9:L636df9:{c.instructions+=3;NFSU2_TR(0x636df9);
__builtin_memmove((R+20),gp(0x8a1cb0),4);
}
B636dff:{NFSU2_TR(0x636dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B636e03:{NFSU2_TR(0x636e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636e06:L636e06:{c.instructions+=3;NFSU2_TR(0x636e06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B636e09:{NFSU2_TR(0x636e09);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B636e0a:{NFSU2_TR(0x636e0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636db4u);}goto L636db4;}}
}
B636e0c:L636e0c:{c.instructions+=5;NFSU2_TR(0x636e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636e0f:{NFSU2_TR(0x636e0f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B636e10:{NFSU2_TR(0x636e10);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B636e13:{NFSU2_TR(0x636e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B636e15:{NFSU2_TR(0x636e15);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636da0u);}goto L636da0;}}
}
B636e17:L636e17:{c.instructions+=5;NFSU2_TR(0x636e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636e1a:{NFSU2_TR(0x636e1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B636e1c:{NFSU2_TR(0x636e1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636e1e:{NFSU2_TR(0x636e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636e22:{NFSU2_TR(0x636e22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L636fa4;}}
}
B636e28:L636e28:{c.instructions+=2;NFSU2_TR(0x636e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636e2c:{NFSU2_TR(0x636e2c);
__builtin_memmove((R+16),(R+16),4);
}
B636e30:L636e30:{c.instructions+=6;NFSU2_TR(0x636e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B636e34:{NFSU2_TR(0x636e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B636e37:{NFSU2_TR(0x636e37);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B636e39:{NFSU2_TR(0x636e39);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B636e3d:{NFSU2_TR(0x636e3d);
__builtin_memmove((R+4),(R+28),4);
}
B636e3f:{NFSU2_TR(0x636e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x636e44ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B636e44:L636e44:{c.instructions+=13;NFSU2_TR(0x636e44);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B636e47:{NFSU2_TR(0x636e47);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B636e49:{NFSU2_TR(0x636e49);
__builtin_memmove((R+8),(R+4),1);
}
B636e4b:{NFSU2_TR(0x636e4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B636e4e:{NFSU2_TR(0x636e4e);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B636e51:{NFSU2_TR(0x636e51);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B636e53:{NFSU2_TR(0x636e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636e57:{NFSU2_TR(0x636e57);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B636e5a:{NFSU2_TR(0x636e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636e5e:{NFSU2_TR(0x636e5e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B636e60:{NFSU2_TR(0x636e60);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B636e61:{NFSU2_TR(0x636e61);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636e63:{NFSU2_TR(0x636e63);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L636e69;}}
}
B636e65:L636e65:{c.instructions+=2;NFSU2_TR(0x636e65);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B636e67:{NFSU2_TR(0x636e67);
{goto L636e77;}
}
B636e69:L636e69:{c.instructions+=3;NFSU2_TR(0x636e69);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636e6c:{NFSU2_TR(0x636e6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B636e70:{NFSU2_TR(0x636e70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L636e77;}}
}
B636e72:L636e72:{c.instructions+=1;NFSU2_TR(0x636e72);
w4(R+4,u32(0x2ull));
}
B636e77:L636e77:{c.instructions+=2;NFSU2_TR(0x636e77);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636e7a:{NFSU2_TR(0x636e7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636f06;}}
}
B636e80:L636e80:{c.instructions+=2;NFSU2_TR(0x636e80);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x3797533ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3797533ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636e85:{NFSU2_TR(0x636e85);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L636ed2;}}
}
B636e87:L636e87:{c.instructions+=1;NFSU2_TR(0x636e87);
if(r1(R+518)){{goto L636ec6;}}
}
B636e89:L636e89:{c.instructions+=2;NFSU2_TR(0x636e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xda27ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636e8e:{NFSU2_TR(0x636e8e);
if(r1(R+518)){{goto L636eba;}}
}
B636e90:L636e90:{c.instructions+=2;NFSU2_TR(0x636e90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2daab07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636e95:{NFSU2_TR(0x636e95);
if(r1(R+518)){{goto L636eae;}}
}
B636e97:L636e97:{c.instructions+=2;NFSU2_TR(0x636e97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3437a52ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636e9c:{NFSU2_TR(0x636e9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636f85;}}
}
B636ea2:L636ea2:{c.instructions+=2;NFSU2_TR(0x636ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2b94ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636ea9:{NFSU2_TR(0x636ea9);
{goto L636f69;}
}
B636eae:L636eae:{c.instructions+=2;NFSU2_TR(0x636eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2b7cull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636eb5:{NFSU2_TR(0x636eb5);
{goto L636f69;}
}
B636eba:L636eba:{c.instructions+=2;NFSU2_TR(0x636eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2bdcull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636ec1:{NFSU2_TR(0x636ec1);
{goto L636f69;}
}
B636ec6:L636ec6:{c.instructions+=2;NFSU2_TR(0x636ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2bacull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636ecd:{NFSU2_TR(0x636ecd);
{goto L636f69;}
}
B636ed2:L636ed2:{c.instructions+=2;NFSU2_TR(0x636ed2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3e871f1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636ed7:{NFSU2_TR(0x636ed7);
if(r1(R+518)){{goto L636efd;}}
}
B636ed9:L636ed9:{c.instructions+=2;NFSU2_TR(0x636ed9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66350f0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636ede:{NFSU2_TR(0x636ede);
if(r1(R+518)){{goto L636ef4;}}
}
B636ee0:L636ee0:{c.instructions+=2;NFSU2_TR(0x636ee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd6640dffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636ee5:{NFSU2_TR(0x636ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636f85;}}
}
B636eeb:L636eeb:{c.instructions+=2;NFSU2_TR(0x636eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2bf4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636ef2:{NFSU2_TR(0x636ef2);
{goto L636f69;}
}
B636ef4:L636ef4:{c.instructions+=2;NFSU2_TR(0x636ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2c0cull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636efb:{NFSU2_TR(0x636efb);
{goto L636f69;}
}
B636efd:L636efd:{c.instructions+=2;NFSU2_TR(0x636efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2bc4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636f04:{NFSU2_TR(0x636f04);
{goto L636f69;}
}
B636f06:L636f06:{c.instructions+=2;NFSU2_TR(0x636f06);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B636f09:{NFSU2_TR(0x636f09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636f85;}}
}
B636f0b:L636f0b:{c.instructions+=3;NFSU2_TR(0x636f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636f0f:{NFSU2_TR(0x636f0f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B636f12:{NFSU2_TR(0x636f12);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L636f37;}}
}
B636f14:L636f14:{c.instructions+=2;NFSU2_TR(0x636f14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x637018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B636f1b:{NFSU2_TR(0x636f1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x637004ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B636f22:L636f22:{c.instructions+=2;NFSU2_TR(0x636f22);
w4(R+0,u32(0x1ull));
}
B636f27:{NFSU2_TR(0x636f27);
{goto L636f39;}
}
B636f29:L636f29:{c.instructions+=2;NFSU2_TR(0x636f29);
w4(R+0,u32(0x2ull));
}
B636f2e:{NFSU2_TR(0x636f2e);
{goto L636f39;}
}
B636f30:L636f30:{c.instructions+=2;NFSU2_TR(0x636f30);
w4(R+0,u32(0x3ull));
}
B636f35:{NFSU2_TR(0x636f35);
{goto L636f39;}
}
B636f37:L636f37:{c.instructions+=1;NFSU2_TR(0x636f37);
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
B636f39:L636f39:{c.instructions+=1;NFSU2_TR(0x636f39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x63702cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B636f40:L636f40:{c.instructions+=2;NFSU2_TR(0x636f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2c6cull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636f47:{NFSU2_TR(0x636f47);
{goto L636f62;}
}
B636f49:L636f49:{c.instructions+=2;NFSU2_TR(0x636f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2c54ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636f50:{NFSU2_TR(0x636f50);
{goto L636f62;}
}
B636f52:L636f52:{c.instructions+=2;NFSU2_TR(0x636f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2c3cull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636f59:{NFSU2_TR(0x636f59);
{goto L636f62;}
}
B636f5b:L636f5b:{c.instructions+=1;NFSU2_TR(0x636f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2c84ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B636f62:L636f62:{c.instructions+=1;NFSU2_TR(0x636f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8a2c24ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B636f69:L636f69:{c.instructions+=2;NFSU2_TR(0x636f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636f6b:{NFSU2_TR(0x636f6b);
if(r1(R+518)){{goto L636f77;}}
}
B636f6d:L636f6d:{c.instructions+=2;NFSU2_TR(0x636f6d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636f70:{NFSU2_TR(0x636f70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636f74;}}
}
B636f72:L636f72:{c.instructions+=1;NFSU2_TR(0x636f72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B636f74:L636f74:{c.instructions+=1;NFSU2_TR(0x636f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B636f77:L636f77:{c.instructions+=2;NFSU2_TR(0x636f77);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B636f79:{NFSU2_TR(0x636f79);
if(r1(R+518)){{goto L636f85;}}
}
B636f7b:L636f7b:{c.instructions+=2;NFSU2_TR(0x636f7b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B636f7e:{NFSU2_TR(0x636f7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L636f82;}}
}
B636f80:L636f80:{c.instructions+=1;NFSU2_TR(0x636f80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B636f82:L636f82:{c.instructions+=1;NFSU2_TR(0x636f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B636f85:L636f85:{c.instructions+=9;NFSU2_TR(0x636f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636f89:{NFSU2_TR(0x636f89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636f8d:{NFSU2_TR(0x636f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636f90:{NFSU2_TR(0x636f90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B636f91:{NFSU2_TR(0x636f91);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xeull))));
}
B636f94:{NFSU2_TR(0x636f94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B636f96:{NFSU2_TR(0x636f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636f9a:{NFSU2_TR(0x636f9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636f9e:{NFSU2_TR(0x636f9e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x636e30u);}goto L636e30;}}
}
B636fa4:L636fa4:{c.instructions+=24;NFSU2_TR(0x636fa4);
__builtin_memmove((R+0),gp(0x8a2b6c),4);
}
B636fa9:{NFSU2_TR(0x636fa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B636fab:{NFSU2_TR(0x636fab);
__builtin_memmove(gp(0x8a2b6c),(R+24),4);
}
B636fb1:{NFSU2_TR(0x636fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B636fb4:{NFSU2_TR(0x636fb4);
u8 U[4];
w4(U+0,u32(0x8a2b68ull));
s4(u32(r4(R+24)),r4(U+0));
}
B636fba:{NFSU2_TR(0x636fba);
__builtin_memmove((R+28),gp(0x8a2b70),4);
}
B636fc0:{NFSU2_TR(0x636fc0);
__builtin_memmove((R+8),gp(0x8a2b74),4);
}
B636fc6:{NFSU2_TR(0x636fc6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B636fc7:{NFSU2_TR(0x636fc7);
__builtin_memmove(gp(0x8a2b70),(R+28),4);
}
B636fcd:{NFSU2_TR(0x636fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B636fd0:{NFSU2_TR(0x636fd0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B636fd2:{NFSU2_TR(0x636fd2);
__builtin_memmove((R+4),gp(0x8a2b78),4);
}
B636fd8:{NFSU2_TR(0x636fd8);
__builtin_memmove(gp(0x8a2b74),(R+8),4);
}
B636fde:{NFSU2_TR(0x636fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B636fe2:{NFSU2_TR(0x636fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B636fe5:{NFSU2_TR(0x636fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B636fe6:{NFSU2_TR(0x636fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B636fe7:{NFSU2_TR(0x636fe7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B636fe9:{NFSU2_TR(0x636fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B636fea:{NFSU2_TR(0x636fea);
__builtin_memmove(gp(0x8a2b78),(R+4),4);
}
B636ff0:{NFSU2_TR(0x636ff0);
w4(R+0,u32(0x1ull));
}
B636ff5:{NFSU2_TR(0x636ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636ff6:{NFSU2_TR(0x636ff6);
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
B636ff9:{NFSU2_TR(0x636ff9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B636ffa:L636ffa:{c.instructions+=3;NFSU2_TR(0x636ffa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B636ffc:{NFSU2_TR(0x636ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B636ffd:{NFSU2_TR(0x636ffd);
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
TAIL_STATIC(0x637000u,637);
}
XIT:NFSU2_TR_EXIT(0x636,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
