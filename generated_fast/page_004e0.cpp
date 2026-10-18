#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4e1(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e0(u8* __restrict R,Cpu& c);
u32 page_4e0(Cpu& c){return body_4e0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e0005:goto L4e0005;
case 0x4e000b:c.instructions+=8;goto B4e000b;
case 0x4e000d:c.instructions+=7;goto B4e000d;
case 0x4e0010:c.instructions+=6;goto B4e0010;
case 0x4e0013:c.instructions+=5;goto B4e0013;
case 0x4e0019:c.instructions+=4;goto B4e0019;
case 0x4e001f:c.instructions+=3;goto B4e001f;
case 0x4e0021:c.instructions+=2;goto B4e0021;
case 0x4e0024:c.instructions+=1;goto B4e0024;
case 0x4e002a:goto L4e002a;
case 0x4e002d:c.instructions+=3;goto B4e002d;
case 0x4e0033:c.instructions+=2;goto B4e0033;
case 0x4e0035:c.instructions+=1;goto B4e0035;
case 0x4e0037:goto L4e0037;
case 0x4e003d:c.instructions+=2;goto B4e003d;
case 0x4e003e:c.instructions+=1;goto B4e003e;
case 0x4e0043:goto L4e0043;
case 0x4e0046:c.instructions+=5;goto B4e0046;
case 0x4e0047:c.instructions+=4;goto B4e0047;
case 0x4e0051:c.instructions+=3;goto B4e0051;
case 0x4e0052:c.instructions+=2;goto B4e0052;
case 0x4e0053:c.instructions+=1;goto B4e0053;
case 0x4e0056:goto L4e0056;
case 0x4e005c:c.instructions+=2;goto B4e005c;
case 0x4e005e:c.instructions+=1;goto B4e005e;
case 0x4e0060:goto L4e0060;
case 0x4e0065:goto L4e0065;
case 0x4e0067:c.instructions+=4;goto B4e0067;
case 0x4e006d:c.instructions+=3;goto B4e006d;
case 0x4e006e:c.instructions+=2;goto B4e006e;
case 0x4e0070:c.instructions+=1;goto B4e0070;
case 0x4e0075:goto L4e0075;
case 0x4e0077:c.instructions+=3;goto B4e0077;
case 0x4e0079:c.instructions+=2;goto B4e0079;
case 0x4e007a:c.instructions+=1;goto B4e007a;
case 0x4e007f:goto L4e007f;
case 0x4e0082:c.instructions+=5;goto B4e0082;
case 0x4e0083:c.instructions+=4;goto B4e0083;
case 0x4e008d:c.instructions+=3;goto B4e008d;
case 0x4e008e:c.instructions+=2;goto B4e008e;
case 0x4e008f:c.instructions+=1;goto B4e008f;
case 0x4e0092:goto L4e0092;
case 0x4e0098:c.instructions+=2;goto B4e0098;
case 0x4e0099:c.instructions+=1;goto B4e0099;
case 0x4e009e:goto L4e009e;
case 0x4e00a1:c.instructions+=5;goto B4e00a1;
case 0x4e00a2:c.instructions+=4;goto B4e00a2;
case 0x4e00ac:c.instructions+=3;goto B4e00ac;
case 0x4e00ad:c.instructions+=2;goto B4e00ad;
case 0x4e00ae:c.instructions+=1;goto B4e00ae;
case 0x4e00b1:goto L4e00b1;
case 0x4e00b6:c.instructions+=1;goto B4e00b6;
case 0x4e00b8:goto L4e00b8;
case 0x4e00bd:c.instructions+=1;goto B4e00bd;
case 0x4e00bf:goto L4e00bf;
case 0x4e00c2:c.instructions+=4;goto B4e00c2;
case 0x4e00c4:c.instructions+=3;goto B4e00c4;
case 0x4e00c9:c.instructions+=2;goto B4e00c9;
case 0x4e00ca:c.instructions+=1;goto B4e00ca;
case 0x4e00cf:goto L4e00cf;
case 0x4e00d2:c.instructions+=4;goto B4e00d2;
case 0x4e00d3:c.instructions+=3;goto B4e00d3;
case 0x4e00d4:c.instructions+=2;goto B4e00d4;
case 0x4e00d5:c.instructions+=1;goto B4e00d5;
case 0x4e00d8:goto L4e00d8;
case 0x4e00db:c.instructions+=4;goto B4e00db;
case 0x4e00e1:c.instructions+=3;goto B4e00e1;
case 0x4e00e2:c.instructions+=2;goto B4e00e2;
case 0x4e00e7:c.instructions+=1;goto B4e00e7;
case 0x4e00ec:goto L4e00ec;
case 0x4e00ef:c.instructions+=5;goto B4e00ef;
case 0x4e00f2:c.instructions+=4;goto B4e00f2;
case 0x4e00f3:c.instructions+=3;goto B4e00f3;
case 0x4e00f5:c.instructions+=2;goto B4e00f5;
case 0x4e00f6:c.instructions+=1;goto B4e00f6;
case 0x4e00fb:goto L4e00fb;
case 0x4e00fe:c.instructions+=4;goto B4e00fe;
case 0x4e0101:c.instructions+=3;goto B4e0101;
case 0x4e0103:c.instructions+=2;goto B4e0103;
case 0x4e0108:c.instructions+=1;goto B4e0108;
case 0x4e010d:goto L4e010d;
case 0x4e0110:c.instructions+=4;goto B4e0110;
case 0x4e0111:c.instructions+=3;goto B4e0111;
case 0x4e0116:c.instructions+=2;goto B4e0116;
case 0x4e0117:c.instructions+=1;goto B4e0117;
case 0x4e011c:goto L4e011c;
case 0x4e011f:goto L4e011f;
case 0x4e0120:c.instructions+=3;goto B4e0120;
case 0x4e0121:c.instructions+=2;goto B4e0121;
case 0x4e0122:c.instructions+=1;goto B4e0122;
case 0x4e0160:goto L4e0160;
case 0x4e0162:c.instructions+=14;goto B4e0162;
case 0x4e0167:c.instructions+=13;goto B4e0167;
case 0x4e016d:c.instructions+=12;goto B4e016d;
case 0x4e016e:c.instructions+=11;goto B4e016e;
case 0x4e0175:c.instructions+=10;goto B4e0175;
case 0x4e0178:c.instructions+=9;goto B4e0178;
case 0x4e0179:c.instructions+=8;goto B4e0179;
case 0x4e017a:c.instructions+=7;goto B4e017a;
case 0x4e017c:c.instructions+=6;goto B4e017c;
case 0x4e0182:c.instructions+=5;goto B4e0182;
case 0x4e0184:c.instructions+=4;goto B4e0184;
case 0x4e0186:c.instructions+=3;goto B4e0186;
case 0x4e0187:c.instructions+=2;goto B4e0187;
case 0x4e018b:c.instructions+=1;goto B4e018b;
case 0x4e018d:goto L4e018d;
case 0x4e0190:c.instructions+=1;goto B4e0190;
case 0x4e0192:goto L4e0192;
case 0x4e0198:c.instructions+=3;goto B4e0198;
case 0x4e019d:c.instructions+=2;goto B4e019d;
case 0x4e01a1:c.instructions+=1;goto B4e01a1;
case 0x4e01a3:goto L4e01a3;
case 0x4e01a7:goto L4e01a7;
case 0x4e01aa:c.instructions+=2;goto B4e01aa;
case 0x4e01ad:c.instructions+=1;goto B4e01ad;
case 0x4e01b2:goto L4e01b2;
case 0x4e01b6:c.instructions+=3;goto B4e01b6;
case 0x4e01b7:c.instructions+=2;goto B4e01b7;
case 0x4e01b9:c.instructions+=1;goto B4e01b9;
case 0x4e01be:goto L4e01be;
case 0x4e01c0:c.instructions+=2;goto B4e01c0;
case 0x4e01c2:c.instructions+=1;goto B4e01c2;
case 0x4e01c8:goto L4e01c8;
case 0x4e01ca:c.instructions+=2;goto B4e01ca;
case 0x4e01cc:c.instructions+=1;goto B4e01cc;
case 0x4e01cf:goto L4e01cf;
case 0x4e01d5:c.instructions+=3;goto B4e01d5;
case 0x4e01db:c.instructions+=2;goto B4e01db;
case 0x4e01df:c.instructions+=1;goto B4e01df;
case 0x4e01e5:goto L4e01e5;
case 0x4e01eb:c.instructions+=1;goto B4e01eb;
case 0x4e01f1:goto L4e01f1;
case 0x4e01f7:c.instructions+=2;goto B4e01f7;
case 0x4e01fc:c.instructions+=1;goto B4e01fc;
case 0x4e01fe:goto L4e01fe;
case 0x4e0203:goto L4e0203;
case 0x4e0205:c.instructions+=5;goto B4e0205;
case 0x4e0208:c.instructions+=4;goto B4e0208;
case 0x4e020c:c.instructions+=3;goto B4e020c;
case 0x4e020e:c.instructions+=2;goto B4e020e;
case 0x4e0212:c.instructions+=1;goto B4e0212;
case 0x4e0214:goto L4e0214;
case 0x4e0217:c.instructions+=13;goto B4e0217;
case 0x4e021b:c.instructions+=12;goto B4e021b;
case 0x4e021e:c.instructions+=11;goto B4e021e;
case 0x4e0222:c.instructions+=10;goto B4e0222;
case 0x4e0228:c.instructions+=9;goto B4e0228;
case 0x4e0229:c.instructions+=8;goto B4e0229;
case 0x4e022a:c.instructions+=7;goto B4e022a;
case 0x4e022e:c.instructions+=6;goto B4e022e;
case 0x4e022f:c.instructions+=5;goto B4e022f;
case 0x4e0233:c.instructions+=4;goto B4e0233;
case 0x4e0234:c.instructions+=3;goto B4e0234;
case 0x4e0235:c.instructions+=2;goto B4e0235;
case 0x4e0237:c.instructions+=1;goto B4e0237;
case 0x4e023c:goto L4e023c;
case 0x4e0242:c.instructions+=3;goto B4e0242;
case 0x4e0248:c.instructions+=2;goto B4e0248;
case 0x4e024e:c.instructions+=1;goto B4e024e;
case 0x4e0253:goto L4e0253;
case 0x4e0255:c.instructions+=1;goto B4e0255;
case 0x4e025a:goto L4e025a;
case 0x4e025f:goto L4e025f;
case 0x4e0261:c.instructions+=5;goto B4e0261;
case 0x4e0264:c.instructions+=4;goto B4e0264;
case 0x4e0268:c.instructions+=3;goto B4e0268;
case 0x4e026a:c.instructions+=2;goto B4e026a;
case 0x4e0272:c.instructions+=1;goto B4e0272;
case 0x4e0274:goto L4e0274;
case 0x4e0277:c.instructions+=2;goto B4e0277;
case 0x4e027d:c.instructions+=1;goto B4e027d;
case 0x4e0282:goto L4e0282;
case 0x4e0286:c.instructions+=7;goto B4e0286;
case 0x4e028c:c.instructions+=6;goto B4e028c;
case 0x4e0292:c.instructions+=5;goto B4e0292;
case 0x4e0298:c.instructions+=4;goto B4e0298;
case 0x4e029e:c.instructions+=3;goto B4e029e;
case 0x4e02a4:c.instructions+=2;goto B4e02a4;
case 0x4e02aa:c.instructions+=1;goto B4e02aa;
case 0x4e02ac:goto L4e02ac;
case 0x4e02ae:c.instructions+=1;goto B4e02ae;
case 0x4e02b0:goto L4e02b0;
case 0x4e02b5:c.instructions+=1;goto B4e02b5;
case 0x4e02ba:goto L4e02ba;
case 0x4e02bc:c.instructions+=5;goto B4e02bc;
case 0x4e02bf:c.instructions+=4;goto B4e02bf;
case 0x4e02c3:c.instructions+=3;goto B4e02c3;
case 0x4e02c5:c.instructions+=2;goto B4e02c5;
case 0x4e02cd:c.instructions+=1;goto B4e02cd;
case 0x4e02cf:goto L4e02cf;
case 0x4e02d2:c.instructions+=4;goto B4e02d2;
case 0x4e02d5:c.instructions+=3;goto B4e02d5;
case 0x4e02db:c.instructions+=2;goto B4e02db;
case 0x4e02df:c.instructions+=1;goto B4e02df;
case 0x4e02e4:goto L4e02e4;
case 0x4e02e8:c.instructions+=6;goto B4e02e8;
case 0x4e02e9:c.instructions+=5;goto B4e02e9;
case 0x4e02ea:c.instructions+=4;goto B4e02ea;
case 0x4e02eb:c.instructions+=3;goto B4e02eb;
case 0x4e02ed:c.instructions+=2;goto B4e02ed;
case 0x4e02f2:c.instructions+=1;goto B4e02f2;
case 0x4e02f7:goto L4e02f7;
case 0x4e02fb:c.instructions+=7;goto B4e02fb;
case 0x4e0301:c.instructions+=6;goto B4e0301;
case 0x4e0307:c.instructions+=5;goto B4e0307;
case 0x4e030d:c.instructions+=4;goto B4e030d;
case 0x4e0313:c.instructions+=3;goto B4e0313;
case 0x4e0319:c.instructions+=2;goto B4e0319;
case 0x4e031f:c.instructions+=1;goto B4e031f;
case 0x4e0321:goto L4e0321;
case 0x4e0323:goto L4e0323;
case 0x4e032a:goto L4e032a;
case 0x4e0331:goto L4e0331;
case 0x4e0337:c.instructions+=2;goto B4e0337;
case 0x4e033f:c.instructions+=1;goto B4e033f;
case 0x4e0341:goto L4e0341;
case 0x4e0347:c.instructions+=1;goto B4e0347;
case 0x4e0349:goto L4e0349;
case 0x4e034b:c.instructions+=1;goto B4e034b;
case 0x4e0350:goto L4e0350;
case 0x4e0352:c.instructions+=7;goto B4e0352;
case 0x4e0353:c.instructions+=6;goto B4e0353;
case 0x4e0354:c.instructions+=5;goto B4e0354;
case 0x4e0358:c.instructions+=4;goto B4e0358;
case 0x4e035e:c.instructions+=3;goto B4e035e;
case 0x4e035f:c.instructions+=2;goto B4e035f;
case 0x4e0361:c.instructions+=1;goto B4e0361;
case 0x4e0364:goto L4e0364;
case 0x4e0367:c.instructions+=14;goto B4e0367;
case 0x4e036b:c.instructions+=13;goto B4e036b;
case 0x4e036e:c.instructions+=12;goto B4e036e;
case 0x4e0371:c.instructions+=11;goto B4e0371;
case 0x4e0373:c.instructions+=10;goto B4e0373;
case 0x4e0376:c.instructions+=9;goto B4e0376;
case 0x4e0378:c.instructions+=8;goto B4e0378;
case 0x4e037c:c.instructions+=7;goto B4e037c;
case 0x4e037f:c.instructions+=6;goto B4e037f;
case 0x4e0382:c.instructions+=5;goto B4e0382;
case 0x4e0383:c.instructions+=4;goto B4e0383;
case 0x4e0384:c.instructions+=3;goto B4e0384;
case 0x4e0386:c.instructions+=2;goto B4e0386;
case 0x4e0389:c.instructions+=1;goto B4e0389;
case 0x4e038e:goto L4e038e;
case 0x4e0390:c.instructions+=2;goto B4e0390;
case 0x4e0392:c.instructions+=1;goto B4e0392;
case 0x4e0398:goto L4e0398;
case 0x4e039b:c.instructions+=2;goto B4e039b;
case 0x4e039d:c.instructions+=1;goto B4e039d;
case 0x4e039f:goto L4e039f;
case 0x4e03a2:c.instructions+=1;goto B4e03a2;
case 0x4e03a4:goto L4e03a4;
case 0x4e03a6:goto L4e03a6;
case 0x4e03a9:c.instructions+=1;goto B4e03a9;
case 0x4e03ae:goto L4e03ae;
case 0x4e03b3:c.instructions+=2;goto B4e03b3;
case 0x4e03b5:c.instructions+=1;goto B4e03b5;
case 0x4e03ba:goto L4e03ba;
case 0x4e03bd:c.instructions+=2;goto B4e03bd;
case 0x4e03bf:c.instructions+=1;goto B4e03bf;
case 0x4e03c1:goto L4e03c1;
case 0x4e03c6:c.instructions+=1;goto B4e03c6;
case 0x4e03cb:goto L4e03cb;
case 0x4e03ce:c.instructions+=2;goto B4e03ce;
case 0x4e03d0:c.instructions+=1;goto B4e03d0;
case 0x4e03d2:goto L4e03d2;
case 0x4e03d7:c.instructions+=1;goto B4e03d7;
case 0x4e03dc:goto L4e03dc;
case 0x4e03df:c.instructions+=2;goto B4e03df;
case 0x4e03e1:c.instructions+=1;goto B4e03e1;
case 0x4e03e3:goto L4e03e3;
case 0x4e03e8:c.instructions+=1;goto B4e03e8;
case 0x4e03ed:goto L4e03ed;
case 0x4e03f0:c.instructions+=2;goto B4e03f0;
case 0x4e03f2:c.instructions+=1;goto B4e03f2;
case 0x4e03f4:goto L4e03f4;
case 0x4e03f7:c.instructions+=1;goto B4e03f7;
case 0x4e03f9:goto L4e03f9;
case 0x4e03fb:goto L4e03fb;
case 0x4e03fc:c.instructions+=2;goto B4e03fc;
case 0x4e0401:c.instructions+=1;goto B4e0401;
case 0x4e0406:goto L4e0406;
case 0x4e0408:c.instructions+=2;goto B4e0408;
case 0x4e0412:c.instructions+=1;goto B4e0412;
case 0x4e0414:goto L4e0414;
case 0x4e0416:c.instructions+=3;goto B4e0416;
case 0x4e041b:c.instructions+=2;goto B4e041b;
case 0x4e041d:c.instructions+=1;goto B4e041d;
case 0x4e0422:goto L4e0422;
case 0x4e0426:c.instructions+=6;goto B4e0426;
case 0x4e0427:c.instructions+=5;goto B4e0427;
case 0x4e0428:c.instructions+=4;goto B4e0428;
case 0x4e0429:c.instructions+=3;goto B4e0429;
case 0x4e0430:c.instructions+=2;goto B4e0430;
case 0x4e0433:c.instructions+=1;goto B4e0433;
case 0x4e0440:goto L4e0440;
case 0x4e0441:c.instructions+=25;goto B4e0441;
case 0x4e0443:c.instructions+=24;goto B4e0443;
case 0x4e0445:c.instructions+=23;goto B4e0445;
case 0x4e044a:c.instructions+=22;goto B4e044a;
case 0x4e0450:c.instructions+=21;goto B4e0450;
case 0x4e0451:c.instructions+=20;goto B4e0451;
case 0x4e0458:c.instructions+=19;goto B4e0458;
case 0x4e045b:c.instructions+=18;goto B4e045b;
case 0x4e045c:c.instructions+=17;goto B4e045c;
case 0x4e045d:c.instructions+=16;goto B4e045d;
case 0x4e045f:c.instructions+=15;goto B4e045f;
case 0x4e0462:c.instructions+=14;goto B4e0462;
case 0x4e0468:c.instructions+=13;goto B4e0468;
case 0x4e0469:c.instructions+=12;goto B4e0469;
case 0x4e046c:c.instructions+=11;goto B4e046c;
case 0x4e046e:c.instructions+=10;goto B4e046e;
case 0x4e0471:c.instructions+=9;goto B4e0471;
case 0x4e0474:c.instructions+=8;goto B4e0474;
case 0x4e047b:c.instructions+=7;goto B4e047b;
case 0x4e047d:c.instructions+=6;goto B4e047d;
case 0x4e0480:c.instructions+=5;goto B4e0480;
case 0x4e0483:c.instructions+=4;goto B4e0483;
case 0x4e0486:c.instructions+=3;goto B4e0486;
case 0x4e048b:c.instructions+=2;goto B4e048b;
case 0x4e0490:c.instructions+=1;goto B4e0490;
case 0x4e0495:goto L4e0495;
case 0x4e0497:goto L4e0497;
case 0x4e049d:c.instructions+=3;goto B4e049d;
case 0x4e049e:c.instructions+=2;goto B4e049e;
case 0x4e04a2:c.instructions+=1;goto B4e04a2;
case 0x4e04a7:goto L4e04a7;
case 0x4e04aa:c.instructions+=4;goto B4e04aa;
case 0x4e04af:c.instructions+=3;goto B4e04af;
case 0x4e04b0:c.instructions+=2;goto B4e04b0;
case 0x4e04b3:c.instructions+=1;goto B4e04b3;
case 0x4e04b8:goto L4e04b8;
case 0x4e04bb:c.instructions+=4;goto B4e04bb;
case 0x4e04c0:c.instructions+=3;goto B4e04c0;
case 0x4e04c1:c.instructions+=2;goto B4e04c1;
case 0x4e04c6:c.instructions+=1;goto B4e04c6;
case 0x4e04cb:goto L4e04cb;
case 0x4e04ce:c.instructions+=3;goto B4e04ce;
case 0x4e04cf:c.instructions+=2;goto B4e04cf;
case 0x4e04d0:c.instructions+=1;goto B4e04d0;
case 0x4e04d5:goto L4e04d5;
case 0x4e04da:c.instructions+=3;goto B4e04da;
case 0x4e04db:c.instructions+=2;goto B4e04db;
case 0x4e04e2:c.instructions+=1;goto B4e04e2;
case 0x4e04e7:goto L4e04e7;
case 0x4e04ea:c.instructions+=4;goto B4e04ea;
case 0x4e04ec:c.instructions+=3;goto B4e04ec;
case 0x4e04f1:c.instructions+=2;goto B4e04f1;
case 0x4e04f4:c.instructions+=1;goto B4e04f4;
case 0x4e04f9:goto L4e04f9;
case 0x4e04fb:c.instructions+=2;goto B4e04fb;
case 0x4e04fe:c.instructions+=1;goto B4e04fe;
case 0x4e0504:goto L4e0504;
case 0x4e0506:goto L4e0506;
case 0x4e0509:c.instructions+=1;goto B4e0509;
case 0x4e0510:goto L4e0510;
case 0x4e0512:c.instructions+=1;goto B4e0512;
case 0x4e0517:goto L4e0517;
case 0x4e0519:c.instructions+=1;goto B4e0519;
case 0x4e051b:goto L4e051b;
case 0x4e0520:c.instructions+=1;goto B4e0520;
case 0x4e0525:goto L4e0525;
case 0x4e0527:c.instructions+=1;goto B4e0527;
case 0x4e052d:goto L4e052d;
case 0x4e052f:c.instructions+=1;goto B4e052f;
case 0x4e0534:goto L4e0534;
case 0x4e0537:c.instructions+=4;goto B4e0537;
case 0x4e053a:c.instructions+=3;goto B4e053a;
case 0x4e053c:c.instructions+=2;goto B4e053c;
case 0x4e0540:c.instructions+=1;goto B4e0540;
case 0x4e0542:goto L4e0542;
case 0x4e0545:c.instructions+=4;goto B4e0545;
case 0x4e0546:c.instructions+=3;goto B4e0546;
case 0x4e0547:c.instructions+=2;goto B4e0547;
case 0x4e0549:c.instructions+=1;goto B4e0549;
case 0x4e054e:goto L4e054e;
case 0x4e0550:c.instructions+=1;goto B4e0550;
case 0x4e0552:goto L4e0552;
case 0x4e0554:goto L4e0554;
case 0x4e0557:c.instructions+=7;goto B4e0557;
case 0x4e0559:c.instructions+=6;goto B4e0559;
case 0x4e055c:c.instructions+=5;goto B4e055c;
case 0x4e055e:c.instructions+=4;goto B4e055e;
case 0x4e0562:c.instructions+=3;goto B4e0562;
case 0x4e0565:c.instructions+=2;goto B4e0565;
case 0x4e0567:c.instructions+=1;goto B4e0567;
case 0x4e056c:goto L4e056c;
case 0x4e056e:c.instructions+=3;goto B4e056e;
case 0x4e0571:c.instructions+=2;goto B4e0571;
case 0x4e0573:c.instructions+=1;goto B4e0573;
case 0x4e0575:goto L4e0575;
case 0x4e0578:c.instructions+=7;goto B4e0578;
case 0x4e057a:c.instructions+=6;goto B4e057a;
case 0x4e057d:c.instructions+=5;goto B4e057d;
case 0x4e0580:c.instructions+=4;goto B4e0580;
case 0x4e0583:c.instructions+=3;goto B4e0583;
case 0x4e0586:c.instructions+=2;goto B4e0586;
case 0x4e0589:c.instructions+=1;goto B4e0589;
case 0x4e058e:goto L4e058e;
case 0x4e0590:goto L4e0590;
case 0x4e0592:c.instructions+=1;goto B4e0592;
case 0x4e0594:goto L4e0594;
case 0x4e0596:goto L4e0596;
case 0x4e0599:c.instructions+=8;goto B4e0599;
case 0x4e059c:c.instructions+=7;goto B4e059c;
case 0x4e059f:c.instructions+=6;goto B4e059f;
case 0x4e05a1:c.instructions+=5;goto B4e05a1;
case 0x4e05a4:c.instructions+=4;goto B4e05a4;
case 0x4e05a6:c.instructions+=3;goto B4e05a6;
case 0x4e05a9:c.instructions+=2;goto B4e05a9;
case 0x4e05ab:c.instructions+=1;goto B4e05ab;
case 0x4e05b0:goto L4e05b0;
case 0x4e05b3:c.instructions+=2;goto B4e05b3;
case 0x4e05b5:c.instructions+=1;goto B4e05b5;
case 0x4e05b7:goto L4e05b7;
case 0x4e05ba:c.instructions+=5;goto B4e05ba;
case 0x4e05bd:c.instructions+=4;goto B4e05bd;
case 0x4e05c4:c.instructions+=3;goto B4e05c4;
case 0x4e05c7:c.instructions+=2;goto B4e05c7;
case 0x4e05ca:c.instructions+=1;goto B4e05ca;
case 0x4e05cc:goto L4e05cc;
case 0x4e05ce:goto L4e05ce;
case 0x4e05d1:c.instructions+=8;goto B4e05d1;
case 0x4e05d4:c.instructions+=7;goto B4e05d4;
case 0x4e05d7:c.instructions+=6;goto B4e05d7;
case 0x4e05da:c.instructions+=5;goto B4e05da;
case 0x4e05dd:c.instructions+=4;goto B4e05dd;
case 0x4e05df:c.instructions+=3;goto B4e05df;
case 0x4e05e2:c.instructions+=2;goto B4e05e2;
case 0x4e05e5:c.instructions+=1;goto B4e05e5;
case 0x4e05e7:goto L4e05e7;
case 0x4e05ea:c.instructions+=3;goto B4e05ea;
case 0x4e05eb:c.instructions+=2;goto B4e05eb;
case 0x4e05f0:c.instructions+=1;goto B4e05f0;
case 0x4e05f5:goto L4e05f5;
case 0x4e05f7:c.instructions+=2;goto B4e05f7;
case 0x4e05fa:c.instructions+=1;goto B4e05fa;
case 0x4e0600:goto L4e0600;
case 0x4e0605:c.instructions+=3;goto B4e0605;
case 0x4e0607:c.instructions+=2;goto B4e0607;
case 0x4e0609:c.instructions+=1;goto B4e0609;
case 0x4e060f:goto L4e060f;
case 0x4e0615:c.instructions+=6;goto B4e0615;
case 0x4e0618:c.instructions+=5;goto B4e0618;
case 0x4e061b:c.instructions+=4;goto B4e061b;
case 0x4e061e:c.instructions+=3;goto B4e061e;
case 0x4e0620:c.instructions+=2;goto B4e0620;
case 0x4e0622:c.instructions+=1;goto B4e0622;
case 0x4e0624:goto L4e0624;
case 0x4e0627:c.instructions+=5;goto B4e0627;
case 0x4e0629:c.instructions+=4;goto B4e0629;
case 0x4e062d:c.instructions+=3;goto B4e062d;
case 0x4e0633:c.instructions+=2;goto B4e0633;
case 0x4e0635:c.instructions+=1;goto B4e0635;
case 0x4e0637:goto L4e0637;
case 0x4e0639:c.instructions+=1;goto B4e0639;
case 0x4e063e:goto L4e063e;
case 0x4e0641:c.instructions+=4;goto B4e0641;
case 0x4e0644:c.instructions+=3;goto B4e0644;
case 0x4e0646:c.instructions+=2;goto B4e0646;
case 0x4e064a:c.instructions+=1;goto B4e064a;
case 0x4e064c:goto L4e064c;
case 0x4e064f:c.instructions+=4;goto B4e064f;
case 0x4e0650:c.instructions+=3;goto B4e0650;
case 0x4e0651:c.instructions+=2;goto B4e0651;
case 0x4e0653:c.instructions+=1;goto B4e0653;
case 0x4e0658:goto L4e0658;
case 0x4e065a:goto L4e065a;
case 0x4e065c:goto L4e065c;
case 0x4e065f:c.instructions+=6;goto B4e065f;
case 0x4e0661:c.instructions+=5;goto B4e0661;
case 0x4e0664:c.instructions+=4;goto B4e0664;
case 0x4e0667:c.instructions+=3;goto B4e0667;
case 0x4e0669:c.instructions+=2;goto B4e0669;
case 0x4e066e:c.instructions+=1;goto B4e066e;
case 0x4e0672:goto L4e0672;
case 0x4e0675:c.instructions+=8;goto B4e0675;
case 0x4e0678:c.instructions+=7;goto B4e0678;
case 0x4e0679:c.instructions+=6;goto B4e0679;
case 0x4e067c:c.instructions+=5;goto B4e067c;
case 0x4e067f:c.instructions+=4;goto B4e067f;
case 0x4e0682:c.instructions+=3;goto B4e0682;
case 0x4e0684:c.instructions+=2;goto B4e0684;
case 0x4e0686:c.instructions+=1;goto B4e0686;
case 0x4e0688:goto L4e0688;
case 0x4e068a:c.instructions+=1;goto B4e068a;
case 0x4e068f:goto L4e068f;
case 0x4e0691:c.instructions+=5;goto B4e0691;
case 0x4e0694:c.instructions+=4;goto B4e0694;
case 0x4e0697:c.instructions+=3;goto B4e0697;
case 0x4e0699:c.instructions+=2;goto B4e0699;
case 0x4e069d:c.instructions+=1;goto B4e069d;
case 0x4e069f:goto L4e069f;
case 0x4e06a4:c.instructions+=6;goto B4e06a4;
case 0x4e06a7:c.instructions+=5;goto B4e06a7;
case 0x4e06ac:c.instructions+=4;goto B4e06ac;
case 0x4e06ad:c.instructions+=3;goto B4e06ad;
case 0x4e06b0:c.instructions+=2;goto B4e06b0;
case 0x4e06b7:c.instructions+=1;goto B4e06b7;
case 0x4e06bc:goto L4e06bc;
case 0x4e06bf:c.instructions+=14;goto B4e06bf;
case 0x4e06c2:c.instructions+=13;goto B4e06c2;
case 0x4e06c5:c.instructions+=12;goto B4e06c5;
case 0x4e06c8:c.instructions+=11;goto B4e06c8;
case 0x4e06cb:c.instructions+=10;goto B4e06cb;
case 0x4e06ce:c.instructions+=9;goto B4e06ce;
case 0x4e06d1:c.instructions+=8;goto B4e06d1;
case 0x4e06d4:c.instructions+=7;goto B4e06d4;
case 0x4e06db:c.instructions+=6;goto B4e06db;
case 0x4e06de:c.instructions+=5;goto B4e06de;
case 0x4e06e2:c.instructions+=4;goto B4e06e2;
case 0x4e06e5:c.instructions+=3;goto B4e06e5;
case 0x4e06eb:c.instructions+=2;goto B4e06eb;
case 0x4e06ee:c.instructions+=1;goto B4e06ee;
case 0x4e06f0:goto L4e06f0;
case 0x4e06f2:goto L4e06f2;
case 0x4e06f5:c.instructions+=5;goto B4e06f5;
case 0x4e06f7:c.instructions+=4;goto B4e06f7;
case 0x4e06fa:c.instructions+=3;goto B4e06fa;
case 0x4e06fe:c.instructions+=2;goto B4e06fe;
case 0x4e0701:c.instructions+=1;goto B4e0701;
case 0x4e0703:goto L4e0703;
case 0x4e0705:c.instructions+=1;goto B4e0705;
case 0x4e070a:goto L4e070a;
case 0x4e070d:c.instructions+=3;goto B4e070d;
case 0x4e0714:c.instructions+=2;goto B4e0714;
case 0x4e0716:c.instructions+=1;goto B4e0716;
case 0x4e071c:goto L4e071c;
case 0x4e0721:c.instructions+=1;goto B4e0721;
case 0x4e0726:goto L4e0726;
case 0x4e0728:c.instructions+=1;goto B4e0728;
case 0x4e072a:goto L4e072a;
case 0x4e072f:c.instructions+=1;goto B4e072f;
case 0x4e0734:goto L4e0734;
case 0x4e0737:c.instructions+=1;goto B4e0737;
case 0x4e0739:goto L4e0739;
case 0x4e073e:c.instructions+=1;goto B4e073e;
case 0x4e0743:goto L4e0743;
case 0x4e0746:c.instructions+=1;goto B4e0746;
case 0x4e0748:goto L4e0748;
case 0x4e074d:c.instructions+=1;goto B4e074d;
case 0x4e0752:goto L4e0752;
case 0x4e0755:c.instructions+=1;goto B4e0755;
case 0x4e0757:goto L4e0757;
case 0x4e0759:c.instructions+=3;goto B4e0759;
case 0x4e075b:c.instructions+=2;goto B4e075b;
case 0x4e075e:c.instructions+=1;goto B4e075e;
case 0x4e0760:goto L4e0760;
case 0x4e0763:c.instructions+=2;goto B4e0763;
case 0x4e0764:c.instructions+=1;goto B4e0764;
case 0x4e0769:goto L4e0769;
case 0x4e076c:c.instructions+=8;goto B4e076c;
case 0x4e076f:c.instructions+=7;goto B4e076f;
case 0x4e0772:c.instructions+=6;goto B4e0772;
case 0x4e0775:c.instructions+=5;goto B4e0775;
case 0x4e0778:c.instructions+=4;goto B4e0778;
case 0x4e0779:c.instructions+=3;goto B4e0779;
case 0x4e077a:c.instructions+=2;goto B4e077a;
case 0x4e077b:c.instructions+=1;goto B4e077b;
case 0x4e0780:goto L4e0780;
case 0x4e0783:c.instructions+=4;goto B4e0783;
case 0x4e0785:c.instructions+=3;goto B4e0785;
case 0x4e078a:c.instructions+=2;goto B4e078a;
case 0x4e078b:c.instructions+=1;goto B4e078b;
case 0x4e0790:goto L4e0790;
case 0x4e0793:c.instructions+=1;goto B4e0793;
case 0x4e0795:goto L4e0795;
case 0x4e0798:c.instructions+=2;goto B4e0798;
case 0x4e0799:c.instructions+=1;goto B4e0799;
case 0x4e079e:goto L4e079e;
case 0x4e07a1:c.instructions+=1;goto B4e07a1;
case 0x4e07a3:goto L4e07a3;
case 0x4e07a5:c.instructions+=4;goto B4e07a5;
case 0x4e07a7:c.instructions+=3;goto B4e07a7;
case 0x4e07ac:c.instructions+=2;goto B4e07ac;
case 0x4e07af:c.instructions+=1;goto B4e07af;
case 0x4e07b1:goto L4e07b1;
case 0x4e07b4:c.instructions+=1;goto B4e07b4;
case 0x4e07b9:goto L4e07b9;
case 0x4e07bc:c.instructions+=1;goto B4e07bc;
case 0x4e07be:goto L4e07be;
case 0x4e07c0:c.instructions+=2;goto B4e07c0;
case 0x4e07c2:c.instructions+=1;goto B4e07c2;
case 0x4e07c4:goto L4e07c4;
case 0x4e07c6:goto L4e07c6;
case 0x4e07c8:c.instructions+=1;goto B4e07c8;
case 0x4e07ca:goto L4e07ca;
case 0x4e07cd:c.instructions+=3;goto B4e07cd;
case 0x4e07d0:c.instructions+=2;goto B4e07d0;
case 0x4e07d1:c.instructions+=1;goto B4e07d1;
case 0x4e07d6:goto L4e07d6;
case 0x4e07d9:c.instructions+=2;goto B4e07d9;
case 0x4e07db:c.instructions+=1;goto B4e07db;
case 0x4e07dd:goto L4e07dd;
case 0x4e07de:c.instructions+=2;goto B4e07de;
case 0x4e07e0:c.instructions+=1;goto B4e07e0;
case 0x4e07e5:goto L4e07e5;
case 0x4e07e8:c.instructions+=7;goto B4e07e8;
case 0x4e07eb:c.instructions+=6;goto B4e07eb;
case 0x4e07ee:c.instructions+=5;goto B4e07ee;
case 0x4e07f4:c.instructions+=4;goto B4e07f4;
case 0x4e07f5:c.instructions+=3;goto B4e07f5;
case 0x4e07fa:c.instructions+=2;goto B4e07fa;
case 0x4e07fb:c.instructions+=1;goto B4e07fb;
case 0x4e0800:goto L4e0800;
case 0x4e0803:c.instructions+=2;goto B4e0803;
case 0x4e0804:c.instructions+=1;goto B4e0804;
case 0x4e0809:goto L4e0809;
case 0x4e080c:c.instructions+=9;goto B4e080c;
case 0x4e080f:c.instructions+=8;goto B4e080f;
case 0x4e0810:c.instructions+=7;goto B4e0810;
case 0x4e0812:c.instructions+=6;goto B4e0812;
case 0x4e0813:c.instructions+=5;goto B4e0813;
case 0x4e0814:c.instructions+=4;goto B4e0814;
case 0x4e081b:c.instructions+=3;goto B4e081b;
case 0x4e081d:c.instructions+=2;goto B4e081d;
case 0x4e081e:c.instructions+=1;goto B4e081e;
case 0x4e0830:goto L4e0830;
case 0x4e0831:c.instructions+=2;goto B4e0831;
case 0x4e0833:c.instructions+=1;goto B4e0833;
case 0x4e0838:goto L4e0838;
case 0x4e083d:c.instructions+=1;goto B4e083d;
case 0x4e083f:goto L4e083f;
case 0x4e0840:c.instructions+=1;goto B4e0840;
case 0x4e0845:goto L4e0845;
case 0x4e0848:goto L4e0848;
case 0x4e084a:c.instructions+=2;goto B4e084a;
case 0x4e084b:c.instructions+=1;goto B4e084b;
case 0x4e0850:goto L4e0850;
case 0x4e0852:c.instructions+=15;goto B4e0852;
case 0x4e0857:c.instructions+=14;goto B4e0857;
case 0x4e085d:c.instructions+=13;goto B4e085d;
case 0x4e085e:c.instructions+=12;goto B4e085e;
case 0x4e0865:c.instructions+=11;goto B4e0865;
case 0x4e0866:c.instructions+=10;goto B4e0866;
case 0x4e0867:c.instructions+=9;goto B4e0867;
case 0x4e0868:c.instructions+=8;goto B4e0868;
case 0x4e086a:c.instructions+=7;goto B4e086a;
case 0x4e086e:c.instructions+=6;goto B4e086e;
case 0x4e0874:c.instructions+=5;goto B4e0874;
case 0x4e0877:c.instructions+=4;goto B4e0877;
case 0x4e087a:c.instructions+=3;goto B4e087a;
case 0x4e087c:c.instructions+=2;goto B4e087c;
case 0x4e0884:c.instructions+=1;goto B4e0884;
case 0x4e0886:goto L4e0886;
case 0x4e0888:c.instructions+=5;goto B4e0888;
case 0x4e088b:c.instructions+=4;goto B4e088b;
case 0x4e088d:c.instructions+=3;goto B4e088d;
case 0x4e088e:c.instructions+=2;goto B4e088e;
case 0x4e0891:c.instructions+=1;goto B4e0891;
case 0x4e0896:goto L4e0896;
case 0x4e0898:c.instructions+=3;goto B4e0898;
case 0x4e089b:c.instructions+=2;goto B4e089b;
case 0x4e089d:c.instructions+=1;goto B4e089d;
case 0x4e089f:goto L4e089f;
case 0x4e08a2:c.instructions+=4;goto B4e08a2;
case 0x4e08a5:c.instructions+=3;goto B4e08a5;
case 0x4e08a7:c.instructions+=2;goto B4e08a7;
case 0x4e08af:c.instructions+=1;goto B4e08af;
case 0x4e08b1:goto L4e08b1;
case 0x4e08b3:c.instructions+=5;goto B4e08b3;
case 0x4e08b6:c.instructions+=4;goto B4e08b6;
case 0x4e08b8:c.instructions+=3;goto B4e08b8;
case 0x4e08b9:c.instructions+=2;goto B4e08b9;
case 0x4e08bc:c.instructions+=1;goto B4e08bc;
case 0x4e08c1:goto L4e08c1;
case 0x4e08c3:c.instructions+=3;goto B4e08c3;
case 0x4e08c6:c.instructions+=2;goto B4e08c6;
case 0x4e08c8:c.instructions+=1;goto B4e08c8;
case 0x4e08ca:goto L4e08ca;
case 0x4e08ce:c.instructions+=5;goto B4e08ce;
case 0x4e08cf:c.instructions+=4;goto B4e08cf;
case 0x4e08d0:c.instructions+=3;goto B4e08d0;
case 0x4e08d7:c.instructions+=2;goto B4e08d7;
case 0x4e08da:c.instructions+=1;goto B4e08da;
case 0x4e08e0:goto L4e08e0;
case 0x4e08e1:c.instructions+=6;goto B4e08e1;
case 0x4e08e3:c.instructions+=5;goto B4e08e3;
case 0x4e08e6:c.instructions+=4;goto B4e08e6;
case 0x4e08eb:c.instructions+=3;goto B4e08eb;
case 0x4e08ec:c.instructions+=2;goto B4e08ec;
case 0x4e08ee:c.instructions+=1;goto B4e08ee;
case 0x4e08f4:goto L4e08f4;
case 0x4e08fa:goto L4e08fa;
case 0x4e08ff:c.instructions+=1;goto B4e08ff;
case 0x4e0905:goto L4e0905;
case 0x4e0907:goto L4e0907;
case 0x4e090c:c.instructions+=1;goto B4e090c;
case 0x4e090e:goto L4e090e;
case 0x4e0913:c.instructions+=1;goto B4e0913;
case 0x4e0915:goto L4e0915;
case 0x4e091a:c.instructions+=1;goto B4e091a;
case 0x4e0920:goto L4e0920;
case 0x4e0923:c.instructions+=2;goto B4e0923;
case 0x4e0925:c.instructions+=1;goto B4e0925;
case 0x4e092a:goto L4e092a;
case 0x4e092b:c.instructions+=2;goto B4e092b;
case 0x4e092c:c.instructions+=1;goto B4e092c;
case 0x4e092f:goto L4e092f;
case 0x4e0931:c.instructions+=1;goto B4e0931;
case 0x4e0936:goto L4e0936;
case 0x4e0938:c.instructions+=1;goto B4e0938;
case 0x4e093d:goto L4e093d;
case 0x4e0941:c.instructions+=3;goto B4e0941;
case 0x4e0942:c.instructions+=2;goto B4e0942;
case 0x4e0943:c.instructions+=1;goto B4e0943;
case 0x4e0946:goto L4e0946;
case 0x4e0948:c.instructions+=1;goto B4e0948;
case 0x4e094d:goto L4e094d;
case 0x4e0950:c.instructions+=5;goto B4e0950;
case 0x4e0953:c.instructions+=4;goto B4e0953;
case 0x4e0954:c.instructions+=3;goto B4e0954;
case 0x4e0956:c.instructions+=2;goto B4e0956;
case 0x4e0957:c.instructions+=1;goto B4e0957;
case 0x4e095c:goto L4e095c;
case 0x4e095f:c.instructions+=3;goto B4e095f;
case 0x4e0960:c.instructions+=2;goto B4e0960;
case 0x4e0961:c.instructions+=1;goto B4e0961;
case 0x4e0964:goto L4e0964;
case 0x4e0967:c.instructions+=5;goto B4e0967;
case 0x4e096a:c.instructions+=4;goto B4e096a;
case 0x4e096d:c.instructions+=3;goto B4e096d;
case 0x4e096e:c.instructions+=2;goto B4e096e;
case 0x4e0973:c.instructions+=1;goto B4e0973;
case 0x4e0978:goto L4e0978;
case 0x4e097c:c.instructions+=4;goto B4e097c;
case 0x4e0980:c.instructions+=3;goto B4e0980;
case 0x4e0981:c.instructions+=2;goto B4e0981;
case 0x4e0982:c.instructions+=1;goto B4e0982;
case 0x4e0985:goto L4e0985;
case 0x4e098a:c.instructions+=1;goto B4e098a;
case 0x4e098c:goto L4e098c;
case 0x4e0991:c.instructions+=1;goto B4e0991;
case 0x4e0993:goto L4e0993;
case 0x4e0998:c.instructions+=1;goto B4e0998;
case 0x4e099e:goto L4e099e;
case 0x4e09a1:c.instructions+=3;goto B4e09a1;
case 0x4e09a3:c.instructions+=2;goto B4e09a3;
case 0x4e09a4:c.instructions+=1;goto B4e09a4;
case 0x4e09a6:goto L4e09a6;
case 0x4e09a9:c.instructions+=3;goto B4e09a9;
case 0x4e09aa:c.instructions+=2;goto B4e09aa;
case 0x4e09ac:c.instructions+=1;goto B4e09ac;
case 0x4e09b1:goto L4e09b1;
case 0x4e09b2:c.instructions+=3;goto B4e09b2;
case 0x4e09b3:c.instructions+=2;goto B4e09b3;
case 0x4e09b4:c.instructions+=1;goto B4e09b4;
case 0x4e09b7:goto L4e09b7;
case 0x4e09ba:c.instructions+=3;goto B4e09ba;
case 0x4e09bd:c.instructions+=2;goto B4e09bd;
case 0x4e09bf:c.instructions+=1;goto B4e09bf;
case 0x4e09c1:goto L4e09c1;
case 0x4e09c4:goto L4e09c4;
case 0x4e09c6:c.instructions+=2;goto B4e09c6;
case 0x4e09c8:c.instructions+=1;goto B4e09c8;
case 0x4e09cd:goto L4e09cd;
case 0x4e09d0:c.instructions+=3;goto B4e09d0;
case 0x4e09d1:c.instructions+=2;goto B4e09d1;
case 0x4e09d3:c.instructions+=1;goto B4e09d3;
case 0x4e09d8:goto L4e09d8;
case 0x4e09d9:c.instructions+=3;goto B4e09d9;
case 0x4e09da:c.instructions+=2;goto B4e09da;
case 0x4e09db:c.instructions+=1;goto B4e09db;
case 0x4e09de:goto L4e09de;
case 0x4e09e1:c.instructions+=5;goto B4e09e1;
case 0x4e09e4:c.instructions+=4;goto B4e09e4;
case 0x4e09e5:c.instructions+=3;goto B4e09e5;
case 0x4e09e7:c.instructions+=2;goto B4e09e7;
case 0x4e09e8:c.instructions+=1;goto B4e09e8;
case 0x4e09ed:goto L4e09ed;
case 0x4e09f0:c.instructions+=4;goto B4e09f0;
case 0x4e09f4:c.instructions+=3;goto B4e09f4;
case 0x4e09f5:c.instructions+=2;goto B4e09f5;
case 0x4e09f6:c.instructions+=1;goto B4e09f6;
case 0x4e09f9:goto L4e09f9;
case 0x4e09fb:c.instructions+=2;goto B4e09fb;
case 0x4e09fd:c.instructions+=1;goto B4e09fd;
case 0x4e0a02:goto L4e0a02;
case 0x4e0a03:c.instructions+=2;goto B4e0a03;
case 0x4e0a04:c.instructions+=1;goto B4e0a04;
case 0x4e0a07:goto L4e0a07;
case 0x4e0a0c:c.instructions+=1;goto B4e0a0c;
case 0x4e0a11:goto L4e0a11;
case 0x4e0a13:c.instructions+=1;goto B4e0a13;
case 0x4e0a19:goto L4e0a19;
case 0x4e0a1c:c.instructions+=3;goto B4e0a1c;
case 0x4e0a1f:c.instructions+=2;goto B4e0a1f;
case 0x4e0a21:c.instructions+=1;goto B4e0a21;
case 0x4e0a23:goto L4e0a23;
case 0x4e0a26:goto L4e0a26;
case 0x4e0a27:c.instructions+=3;goto B4e0a27;
case 0x4e0a2a:c.instructions+=2;goto B4e0a2a;
case 0x4e0a2c:c.instructions+=1;goto B4e0a2c;
case 0x4e0a31:goto L4e0a31;
case 0x4e0a32:c.instructions+=2;goto B4e0a32;
case 0x4e0a33:c.instructions+=1;goto B4e0a33;
case 0x4e0a36:goto L4e0a36;
case 0x4e0a3b:c.instructions+=1;goto B4e0a3b;
case 0x4e0a3d:goto L4e0a3d;
case 0x4e0a3f:goto L4e0a3f;
case 0x4e0a44:c.instructions+=1;goto B4e0a44;
case 0x4e0a46:goto L4e0a46;
case 0x4e0a4b:c.instructions+=1;goto B4e0a4b;
case 0x4e0a51:goto L4e0a51;
case 0x4e0a56:c.instructions+=1;goto B4e0a56;
case 0x4e0a5c:goto L4e0a5c;
case 0x4e0a61:c.instructions+=1;goto B4e0a61;
case 0x4e0a66:goto L4e0a66;
case 0x4e0a68:c.instructions+=1;goto B4e0a68;
case 0x4e0a6e:goto L4e0a6e;
case 0x4e0a71:c.instructions+=3;goto B4e0a71;
case 0x4e0a74:c.instructions+=2;goto B4e0a74;
case 0x4e0a76:c.instructions+=1;goto B4e0a76;
case 0x4e0a78:goto L4e0a78;
case 0x4e0a7b:goto L4e0a7b;
case 0x4e0a7c:c.instructions+=3;goto B4e0a7c;
case 0x4e0a7f:c.instructions+=2;goto B4e0a7f;
case 0x4e0a81:c.instructions+=1;goto B4e0a81;
case 0x4e0a86:goto L4e0a86;
case 0x4e0a87:c.instructions+=2;goto B4e0a87;
case 0x4e0a88:c.instructions+=1;goto B4e0a88;
case 0x4e0a8b:goto L4e0a8b;
case 0x4e0a8e:c.instructions+=2;goto B4e0a8e;
case 0x4e0a90:c.instructions+=1;goto B4e0a90;
case 0x4e0a96:goto L4e0a96;
case 0x4e0a99:c.instructions+=2;goto B4e0a99;
case 0x4e0a9a:c.instructions+=1;goto B4e0a9a;
case 0x4e0a9f:goto L4e0a9f;
case 0x4e0aa0:c.instructions+=2;goto B4e0aa0;
case 0x4e0aa1:c.instructions+=1;goto B4e0aa1;
case 0x4e0aa4:goto L4e0aa4;
case 0x4e0aa6:c.instructions+=1;goto B4e0aa6;
case 0x4e0aab:goto L4e0aab;
case 0x4e0ab0:goto L4e0ab0;
case 0x4e0ab5:c.instructions+=1;goto B4e0ab5;
case 0x4e0ab7:goto L4e0ab7;
case 0x4e0abc:c.instructions+=1;goto B4e0abc;
case 0x4e0abe:goto L4e0abe;
case 0x4e0ac1:c.instructions+=2;goto B4e0ac1;
case 0x4e0ac3:c.instructions+=1;goto B4e0ac3;
case 0x4e0ac8:goto L4e0ac8;
case 0x4e0ac9:c.instructions+=2;goto B4e0ac9;
case 0x4e0aca:c.instructions+=1;goto B4e0aca;
case 0x4e0acd:goto L4e0acd;
case 0x4e0ad0:c.instructions+=2;goto B4e0ad0;
case 0x4e0ad2:c.instructions+=1;goto B4e0ad2;
case 0x4e0ad4:goto L4e0ad4;
case 0x4e0ad7:c.instructions+=2;goto B4e0ad7;
case 0x4e0ad8:c.instructions+=1;goto B4e0ad8;
case 0x4e0add:goto L4e0add;
case 0x4e0ae2:goto L4e0ae2;
case 0x4e0ae3:c.instructions+=1;goto B4e0ae3;
case 0x4e0ae8:goto L4e0ae8;
case 0x4e0aeb:c.instructions+=2;goto B4e0aeb;
case 0x4e0aed:c.instructions+=1;goto B4e0aed;
case 0x4e0aef:goto L4e0aef;
case 0x4e0af4:goto L4e0af4;
case 0x4e0af5:c.instructions+=1;goto B4e0af5;
case 0x4e0afa:goto L4e0afa;
case 0x4e0afd:goto L4e0afd;
case 0x4e0b03:c.instructions+=2;goto B4e0b03;
case 0x4e0b05:c.instructions+=1;goto B4e0b05;
case 0x4e0b0a:goto L4e0b0a;
case 0x4e0b0b:c.instructions+=2;goto B4e0b0b;
case 0x4e0b0c:c.instructions+=1;goto B4e0b0c;
case 0x4e0b0f:goto L4e0b0f;
case 0x4e0b12:c.instructions+=1;goto B4e0b12;
case 0x4e0b17:goto L4e0b17;
case 0x4e0b18:c.instructions+=2;goto B4e0b18;
case 0x4e0b19:c.instructions+=1;goto B4e0b19;
case 0x4e0b20:goto L4e0b20;
case 0x4e0b21:c.instructions+=5;goto B4e0b21;
case 0x4e0b23:c.instructions+=4;goto B4e0b23;
case 0x4e0b26:c.instructions+=3;goto B4e0b26;
case 0x4e0b28:c.instructions+=2;goto B4e0b28;
case 0x4e0b2e:c.instructions+=1;goto B4e0b2e;
case 0x4e0b30:goto L4e0b30;
case 0x4e0b31:c.instructions+=1;goto B4e0b31;
case 0x4e0b36:goto L4e0b36;
case 0x4e0b39:goto L4e0b39;
case 0x4e0b3e:c.instructions+=1;goto B4e0b3e;
case 0x4e0b40:goto L4e0b40;
case 0x4e0b41:c.instructions+=1;goto B4e0b41;
case 0x4e0b46:goto L4e0b46;
case 0x4e0b49:goto L4e0b49;
case 0x4e0b4b:c.instructions+=2;goto B4e0b4b;
case 0x4e0b4c:c.instructions+=1;goto B4e0b4c;
case 0x4e0b50:goto L4e0b50;
case 0x4e0b52:c.instructions+=14;goto B4e0b52;
case 0x4e0b57:c.instructions+=13;goto B4e0b57;
case 0x4e0b5d:c.instructions+=12;goto B4e0b5d;
case 0x4e0b5e:c.instructions+=11;goto B4e0b5e;
case 0x4e0b65:c.instructions+=10;goto B4e0b65;
case 0x4e0b68:c.instructions+=9;goto B4e0b68;
case 0x4e0b69:c.instructions+=8;goto B4e0b69;
case 0x4e0b6a:c.instructions+=7;goto B4e0b6a;
case 0x4e0b6b:c.instructions+=6;goto B4e0b6b;
case 0x4e0b6c:c.instructions+=5;goto B4e0b6c;
case 0x4e0b6e:c.instructions+=4;goto B4e0b6e;
case 0x4e0b70:c.instructions+=3;goto B4e0b70;
case 0x4e0b71:c.instructions+=2;goto B4e0b71;
case 0x4e0b75:c.instructions+=1;goto B4e0b75;
case 0x4e0b7a:goto L4e0b7a;
case 0x4e0b7e:c.instructions+=11;goto B4e0b7e;
case 0x4e0b81:c.instructions+=10;goto B4e0b81;
case 0x4e0b87:c.instructions+=9;goto B4e0b87;
case 0x4e0b8e:c.instructions+=8;goto B4e0b8e;
case 0x4e0b95:c.instructions+=7;goto B4e0b95;
case 0x4e0b9c:c.instructions+=6;goto B4e0b9c;
case 0x4e0ba3:c.instructions+=5;goto B4e0ba3;
case 0x4e0ba7:c.instructions+=4;goto B4e0ba7;
case 0x4e0ba9:c.instructions+=3;goto B4e0ba9;
case 0x4e0bad:c.instructions+=2;goto B4e0bad;
case 0x4e0bb1:c.instructions+=1;goto B4e0bb1;
case 0x4e0bb6:goto L4e0bb6;
case 0x4e0bb9:c.instructions+=2;goto B4e0bb9;
case 0x4e0bbb:c.instructions+=1;goto B4e0bbb;
case 0x4e0bbd:goto L4e0bbd;
case 0x4e0bc0:c.instructions+=14;goto B4e0bc0;
case 0x4e0bc3:c.instructions+=13;goto B4e0bc3;
case 0x4e0bc7:c.instructions+=12;goto B4e0bc7;
case 0x4e0bca:c.instructions+=11;goto B4e0bca;
case 0x4e0bcd:c.instructions+=10;goto B4e0bcd;
case 0x4e0bd1:c.instructions+=9;goto B4e0bd1;
case 0x4e0bd4:c.instructions+=8;goto B4e0bd4;
case 0x4e0bd7:c.instructions+=7;goto B4e0bd7;
case 0x4e0bda:c.instructions+=6;goto B4e0bda;
case 0x4e0bdd:c.instructions+=5;goto B4e0bdd;
case 0x4e0be0:c.instructions+=4;goto B4e0be0;
case 0x4e0be3:c.instructions+=3;goto B4e0be3;
case 0x4e0be6:c.instructions+=2;goto B4e0be6;
case 0x4e0be9:c.instructions+=1;goto B4e0be9;
case 0x4e0beb:goto L4e0beb;
case 0x4e0bed:goto L4e0bed;
case 0x4e0bf1:c.instructions+=10;goto B4e0bf1;
case 0x4e0bf4:c.instructions+=9;goto B4e0bf4;
case 0x4e0bf7:c.instructions+=8;goto B4e0bf7;
case 0x4e0bf9:c.instructions+=7;goto B4e0bf9;
case 0x4e0bfa:c.instructions+=6;goto B4e0bfa;
case 0x4e0bfb:c.instructions+=5;goto B4e0bfb;
case 0x4e0bfc:c.instructions+=4;goto B4e0bfc;
case 0x4e0bfd:c.instructions+=3;goto B4e0bfd;
case 0x4e0c04:c.instructions+=2;goto B4e0c04;
case 0x4e0c07:c.instructions+=1;goto B4e0c07;
case 0x4e0c10:goto L4e0c10;
case 0x4e0c11:c.instructions+=2;goto B4e0c11;
case 0x4e0c13:c.instructions+=1;goto B4e0c13;
case 0x4e0c18:goto L4e0c18;
case 0x4e0c1d:c.instructions+=1;goto B4e0c1d;
case 0x4e0c1f:goto L4e0c1f;
case 0x4e0c20:c.instructions+=1;goto B4e0c20;
case 0x4e0c25:goto L4e0c25;
case 0x4e0c28:goto L4e0c28;
case 0x4e0c2a:c.instructions+=2;goto B4e0c2a;
case 0x4e0c2b:c.instructions+=1;goto B4e0c2b;
case 0x4e0c30:goto L4e0c30;
case 0x4e0c32:c.instructions+=10;goto B4e0c32;
case 0x4e0c37:c.instructions+=9;goto B4e0c37;
case 0x4e0c3d:c.instructions+=8;goto B4e0c3d;
case 0x4e0c3e:c.instructions+=7;goto B4e0c3e;
case 0x4e0c45:c.instructions+=6;goto B4e0c45;
case 0x4e0c46:c.instructions+=5;goto B4e0c46;
case 0x4e0c47:c.instructions+=4;goto B4e0c47;
case 0x4e0c48:c.instructions+=3;goto B4e0c48;
case 0x4e0c4a:c.instructions+=2;goto B4e0c4a;
case 0x4e0c4c:c.instructions+=1;goto B4e0c4c;
case 0x4e0c51:goto L4e0c51;
case 0x4e0c54:c.instructions+=4;goto B4e0c54;
case 0x4e0c58:c.instructions+=3;goto B4e0c58;
case 0x4e0c5a:c.instructions+=2;goto B4e0c5a;
case 0x4e0c62:c.instructions+=1;goto B4e0c62;
case 0x4e0c64:goto L4e0c64;
case 0x4e0c6b:c.instructions+=3;goto B4e0c6b;
case 0x4e0c6c:c.instructions+=2;goto B4e0c6c;
case 0x4e0c6e:c.instructions+=1;goto B4e0c6e;
case 0x4e0c73:goto L4e0c73;
case 0x4e0c75:c.instructions+=1;goto B4e0c75;
case 0x4e0c77:goto L4e0c77;
case 0x4e0c79:goto L4e0c79;
case 0x4e0c80:c.instructions+=4;goto B4e0c80;
case 0x4e0c81:c.instructions+=3;goto B4e0c81;
case 0x4e0c86:c.instructions+=2;goto B4e0c86;
case 0x4e0c8e:c.instructions+=1;goto B4e0c8e;
case 0x4e0c93:goto L4e0c93;
case 0x4e0c95:c.instructions+=2;goto B4e0c95;
case 0x4e0c98:c.instructions+=1;goto B4e0c98;
case 0x4e0c9d:goto L4e0c9d;
case 0x4e0ca0:c.instructions+=2;goto B4e0ca0;
case 0x4e0ca2:c.instructions+=1;goto B4e0ca2;
case 0x4e0ca4:goto L4e0ca4;
case 0x4e0caa:c.instructions+=3;goto B4e0caa;
case 0x4e0cad:c.instructions+=2;goto B4e0cad;
case 0x4e0cb0:c.instructions+=1;goto B4e0cb0;
case 0x4e0cb2:goto L4e0cb2;
case 0x4e0cb4:goto L4e0cb4;
case 0x4e0cb8:c.instructions+=11;goto B4e0cb8;
case 0x4e0cbb:c.instructions+=10;goto B4e0cbb;
case 0x4e0cbd:c.instructions+=9;goto B4e0cbd;
case 0x4e0cc0:c.instructions+=8;goto B4e0cc0;
case 0x4e0cc2:c.instructions+=7;goto B4e0cc2;
case 0x4e0cc6:c.instructions+=6;goto B4e0cc6;
case 0x4e0cc7:c.instructions+=5;goto B4e0cc7;
case 0x4e0cca:c.instructions+=4;goto B4e0cca;
case 0x4e0ccb:c.instructions+=3;goto B4e0ccb;
case 0x4e0cd2:c.instructions+=2;goto B4e0cd2;
case 0x4e0cd5:c.instructions+=1;goto B4e0cd5;
case 0x4e0ce0:goto L4e0ce0;
case 0x4e0ce1:c.instructions+=14;goto B4e0ce1;
case 0x4e0ce3:c.instructions+=13;goto B4e0ce3;
case 0x4e0ce6:c.instructions+=12;goto B4e0ce6;
case 0x4e0ce8:c.instructions+=11;goto B4e0ce8;
case 0x4e0ced:c.instructions+=10;goto B4e0ced;
case 0x4e0cf3:c.instructions+=9;goto B4e0cf3;
case 0x4e0cf4:c.instructions+=8;goto B4e0cf4;
case 0x4e0cfb:c.instructions+=7;goto B4e0cfb;
case 0x4e0cfe:c.instructions+=6;goto B4e0cfe;
case 0x4e0cff:c.instructions+=5;goto B4e0cff;
case 0x4e0d00:c.instructions+=4;goto B4e0d00;
case 0x4e0d01:c.instructions+=3;goto B4e0d01;
case 0x4e0d02:c.instructions+=2;goto B4e0d02;
case 0x4e0d04:c.instructions+=1;goto B4e0d04;
case 0x4e0d09:goto L4e0d09;
case 0x4e0d0d:c.instructions+=9;goto B4e0d0d;
case 0x4e0d11:c.instructions+=8;goto B4e0d11;
case 0x4e0d15:c.instructions+=7;goto B4e0d15;
case 0x4e0d19:c.instructions+=6;goto B4e0d19;
case 0x4e0d1d:c.instructions+=5;goto B4e0d1d;
case 0x4e0d1f:c.instructions+=4;goto B4e0d1f;
case 0x4e0d20:c.instructions+=3;goto B4e0d20;
case 0x4e0d22:c.instructions+=2;goto B4e0d22;
case 0x4e0d26:c.instructions+=1;goto B4e0d26;
case 0x4e0d2b:goto L4e0d2b;
case 0x4e0d2f:c.instructions+=3;goto B4e0d2f;
case 0x4e0d30:c.instructions+=2;goto B4e0d30;
case 0x4e0d32:c.instructions+=1;goto B4e0d32;
case 0x4e0d37:goto L4e0d37;
case 0x4e0d3b:c.instructions+=2;goto B4e0d3b;
case 0x4e0d3d:c.instructions+=1;goto B4e0d3d;
case 0x4e0d3f:goto L4e0d3f;
case 0x4e0d42:c.instructions+=1;goto B4e0d42;
case 0x4e0d44:goto L4e0d44;
case 0x4e0d46:goto L4e0d46;
case 0x4e0d4a:c.instructions+=1;goto B4e0d4a;
case 0x4e0d4f:goto L4e0d4f;
case 0x4e0d51:c.instructions+=2;goto B4e0d51;
case 0x4e0d55:c.instructions+=1;goto B4e0d55;
case 0x4e0d57:goto L4e0d57;
case 0x4e0d59:c.instructions+=1;goto B4e0d59;
case 0x4e0d5e:goto L4e0d5e;
case 0x4e0d61:c.instructions+=2;goto B4e0d61;
case 0x4e0d63:c.instructions+=1;goto B4e0d63;
case 0x4e0d65:goto L4e0d65;
case 0x4e0d68:c.instructions+=11;goto B4e0d68;
case 0x4e0d6b:c.instructions+=10;goto B4e0d6b;
case 0x4e0d6e:c.instructions+=9;goto B4e0d6e;
case 0x4e0d71:c.instructions+=8;goto B4e0d71;
case 0x4e0d74:c.instructions+=7;goto B4e0d74;
case 0x4e0d77:c.instructions+=6;goto B4e0d77;
case 0x4e0d7b:c.instructions+=5;goto B4e0d7b;
case 0x4e0d7e:c.instructions+=4;goto B4e0d7e;
case 0x4e0d81:c.instructions+=3;goto B4e0d81;
case 0x4e0d87:c.instructions+=2;goto B4e0d87;
case 0x4e0d8a:c.instructions+=1;goto B4e0d8a;
case 0x4e0d8c:goto L4e0d8c;
case 0x4e0d8e:goto L4e0d8e;
case 0x4e0d90:c.instructions+=4;goto B4e0d90;
case 0x4e0d92:c.instructions+=3;goto B4e0d92;
case 0x4e0d93:c.instructions+=2;goto B4e0d93;
case 0x4e0d99:c.instructions+=1;goto B4e0d99;
case 0x4e0d9e:goto L4e0d9e;
case 0x4e0da3:c.instructions+=2;goto B4e0da3;
case 0x4e0da5:c.instructions+=1;goto B4e0da5;
case 0x4e0daa:goto L4e0daa;
case 0x4e0dab:c.instructions+=2;goto B4e0dab;
case 0x4e0dac:c.instructions+=1;goto B4e0dac;
case 0x4e0db1:goto L4e0db1;
case 0x4e0db7:c.instructions+=6;goto B4e0db7;
case 0x4e0dba:c.instructions+=5;goto B4e0dba;
case 0x4e0dbb:c.instructions+=4;goto B4e0dbb;
case 0x4e0dc1:c.instructions+=3;goto B4e0dc1;
case 0x4e0dc4:c.instructions+=2;goto B4e0dc4;
case 0x4e0dc6:c.instructions+=1;goto B4e0dc6;
case 0x4e0dc8:goto L4e0dc8;
case 0x4e0dcb:c.instructions+=1;goto B4e0dcb;
case 0x4e0dcd:goto L4e0dcd;
case 0x4e0dcf:goto L4e0dcf;
case 0x4e0dd3:c.instructions+=1;goto B4e0dd3;
case 0x4e0dd5:goto L4e0dd5;
case 0x4e0ddb:c.instructions+=2;goto B4e0ddb;
case 0x4e0ddd:c.instructions+=1;goto B4e0ddd;
case 0x4e0de2:goto L4e0de2;
case 0x4e0de4:c.instructions+=2;goto B4e0de4;
case 0x4e0de6:c.instructions+=1;goto B4e0de6;
case 0x4e0deb:goto L4e0deb;
case 0x4e0ded:c.instructions+=1;goto B4e0ded;
case 0x4e0df2:goto L4e0df2;
case 0x4e0df4:c.instructions+=1;goto B4e0df4;
case 0x4e0df9:goto L4e0df9;
case 0x4e0dfd:c.instructions+=4;goto B4e0dfd;
case 0x4e0e01:c.instructions+=3;goto B4e0e01;
case 0x4e0e03:c.instructions+=2;goto B4e0e03;
case 0x4e0e0b:c.instructions+=1;goto B4e0e0b;
case 0x4e0e0d:goto L4e0e0d;
case 0x4e0e10:goto L4e0e10;
case 0x4e0e12:c.instructions+=7;goto B4e0e12;
case 0x4e0e14:c.instructions+=6;goto B4e0e14;
case 0x4e0e17:c.instructions+=5;goto B4e0e17;
case 0x4e0e19:c.instructions+=4;goto B4e0e19;
case 0x4e0e1c:c.instructions+=3;goto B4e0e1c;
case 0x4e0e1f:c.instructions+=2;goto B4e0e1f;
case 0x4e0e21:c.instructions+=1;goto B4e0e21;
case 0x4e0e23:goto L4e0e23;
case 0x4e0e25:c.instructions+=2;goto B4e0e25;
case 0x4e0e27:c.instructions+=1;goto B4e0e27;
case 0x4e0e29:goto L4e0e29;
case 0x4e0e2d:c.instructions+=3;goto B4e0e2d;
case 0x4e0e31:c.instructions+=2;goto B4e0e31;
case 0x4e0e33:c.instructions+=1;goto B4e0e33;
case 0x4e0e35:goto L4e0e35;
case 0x4e0e39:c.instructions+=8;goto B4e0e39;
case 0x4e0e3a:c.instructions+=7;goto B4e0e3a;
case 0x4e0e41:c.instructions+=6;goto B4e0e41;
case 0x4e0e42:c.instructions+=5;goto B4e0e42;
case 0x4e0e43:c.instructions+=4;goto B4e0e43;
case 0x4e0e44:c.instructions+=3;goto B4e0e44;
case 0x4e0e46:c.instructions+=2;goto B4e0e46;
case 0x4e0e47:c.instructions+=1;goto B4e0e47;
case 0x4e0e50:goto L4e0e50;
case 0x4e0e51:c.instructions+=9;goto B4e0e51;
case 0x4e0e52:c.instructions+=8;goto B4e0e52;
case 0x4e0e54:c.instructions+=7;goto B4e0e54;
case 0x4e0e58:c.instructions+=6;goto B4e0e58;
case 0x4e0e5a:c.instructions+=5;goto B4e0e5a;
case 0x4e0e60:c.instructions+=4;goto B4e0e60;
case 0x4e0e61:c.instructions+=3;goto B4e0e61;
case 0x4e0e64:c.instructions+=2;goto B4e0e64;
case 0x4e0e6a:c.instructions+=1;goto B4e0e6a;
case 0x4e0e6c:goto L4e0e6c;
case 0x4e0e6f:c.instructions+=2;goto B4e0e6f;
case 0x4e0e71:c.instructions+=1;goto B4e0e71;
case 0x4e0e73:goto L4e0e73;
case 0x4e0e76:c.instructions+=1;goto B4e0e76;
case 0x4e0e78:goto L4e0e78;
case 0x4e0e7a:goto L4e0e7a;
case 0x4e0e7d:c.instructions+=1;goto B4e0e7d;
case 0x4e0e83:goto L4e0e83;
case 0x4e0e85:c.instructions+=3;goto B4e0e85;
case 0x4e0e87:c.instructions+=2;goto B4e0e87;
case 0x4e0e8d:c.instructions+=1;goto B4e0e8d;
case 0x4e0e92:goto L4e0e92;
case 0x4e0e95:c.instructions+=4;goto B4e0e95;
case 0x4e0e97:c.instructions+=3;goto B4e0e97;
case 0x4e0e99:c.instructions+=2;goto B4e0e99;
case 0x4e0e9a:c.instructions+=1;goto B4e0e9a;
case 0x4e0e9c:goto L4e0e9c;
case 0x4e0e9f:c.instructions+=2;goto B4e0e9f;
case 0x4e0ea1:c.instructions+=1;goto B4e0ea1;
case 0x4e0ea3:goto L4e0ea3;
case 0x4e0ea6:c.instructions+=1;goto B4e0ea6;
case 0x4e0ea8:goto L4e0ea8;
case 0x4e0eaa:goto L4e0eaa;
case 0x4e0ead:c.instructions+=1;goto B4e0ead;
case 0x4e0eb3:goto L4e0eb3;
case 0x4e0eb5:c.instructions+=3;goto B4e0eb5;
case 0x4e0eb7:c.instructions+=2;goto B4e0eb7;
case 0x4e0ebd:c.instructions+=1;goto B4e0ebd;
case 0x4e0ec2:goto L4e0ec2;
case 0x4e0ec5:c.instructions+=3;goto B4e0ec5;
case 0x4e0ec7:c.instructions+=2;goto B4e0ec7;
case 0x4e0ec9:c.instructions+=1;goto B4e0ec9;
case 0x4e0eca:goto L4e0eca;
case 0x4e0ecf:goto L4e0ecf;
case 0x4e0ed6:c.instructions+=3;goto B4e0ed6;
case 0x4e0ed9:c.instructions+=2;goto B4e0ed9;
case 0x4e0edb:c.instructions+=1;goto B4e0edb;
case 0x4e0edd:goto L4e0edd;
case 0x4e0ee2:c.instructions+=3;goto B4e0ee2;
case 0x4e0ee4:c.instructions+=2;goto B4e0ee4;
case 0x4e0eea:c.instructions+=1;goto B4e0eea;
case 0x4e0eef:goto L4e0eef;
case 0x4e0ef5:c.instructions+=2;goto B4e0ef5;
case 0x4e0ef7:c.instructions+=1;goto B4e0ef7;
case 0x4e0ef9:goto L4e0ef9;
case 0x4e0efc:c.instructions+=6;goto B4e0efc;
case 0x4e0efe:c.instructions+=5;goto B4e0efe;
case 0x4e0f01:c.instructions+=4;goto B4e0f01;
case 0x4e0f02:c.instructions+=3;goto B4e0f02;
case 0x4e0f05:c.instructions+=2;goto B4e0f05;
case 0x4e0f06:c.instructions+=1;goto B4e0f06;
case 0x4e0f09:goto L4e0f09;
case 0x4e0f0b:c.instructions+=2;goto B4e0f0b;
case 0x4e0f0d:c.instructions+=1;goto B4e0f0d;
case 0x4e0f12:goto L4e0f12;
case 0x4e0f14:c.instructions+=1;goto B4e0f14;
case 0x4e0f19:goto L4e0f19;
case 0x4e0f1f:c.instructions+=4;goto B4e0f1f;
case 0x4e0f22:c.instructions+=3;goto B4e0f22;
case 0x4e0f25:c.instructions+=2;goto B4e0f25;
case 0x4e0f27:c.instructions+=1;goto B4e0f27;
case 0x4e0f29:goto L4e0f29;
case 0x4e0f2c:c.instructions+=5;goto B4e0f2c;
case 0x4e0f2f:c.instructions+=4;goto B4e0f2f;
case 0x4e0f30:c.instructions+=3;goto B4e0f30;
case 0x4e0f31:c.instructions+=2;goto B4e0f31;
case 0x4e0f37:c.instructions+=1;goto B4e0f37;
case 0x4e0f3c:goto L4e0f3c;
case 0x4e0f3d:c.instructions+=3;goto B4e0f3d;
case 0x4e0f3e:c.instructions+=2;goto B4e0f3e;
case 0x4e0f3f:c.instructions+=1;goto B4e0f3f;
case 0x4e0f42:goto L4e0f42;
case 0x4e0f45:c.instructions+=6;goto B4e0f45;
case 0x4e0f48:c.instructions+=5;goto B4e0f48;
case 0x4e0f4e:c.instructions+=4;goto B4e0f4e;
case 0x4e0f4f:c.instructions+=3;goto B4e0f4f;
case 0x4e0f54:c.instructions+=2;goto B4e0f54;
case 0x4e0f55:c.instructions+=1;goto B4e0f55;
case 0x4e0f5a:goto L4e0f5a;
case 0x4e0f5b:c.instructions+=3;goto B4e0f5b;
case 0x4e0f5c:c.instructions+=2;goto B4e0f5c;
case 0x4e0f5d:c.instructions+=1;goto B4e0f5d;
case 0x4e0f60:goto L4e0f60;
case 0x4e0f61:c.instructions+=7;goto B4e0f61;
case 0x4e0f63:c.instructions+=6;goto B4e0f63;
case 0x4e0f66:c.instructions+=5;goto B4e0f66;
case 0x4e0f6b:c.instructions+=4;goto B4e0f6b;
case 0x4e0f6c:c.instructions+=3;goto B4e0f6c;
case 0x4e0f6d:c.instructions+=2;goto B4e0f6d;
case 0x4e0f6f:c.instructions+=1;goto B4e0f6f;
case 0x4e0f75:goto L4e0f75;
case 0x4e0f7b:goto L4e0f7b;
case 0x4e0f80:c.instructions+=1;goto B4e0f80;
case 0x4e0f86:goto L4e0f86;
case 0x4e0f8c:goto L4e0f8c;
case 0x4e0f91:c.instructions+=1;goto B4e0f91;
case 0x4e0f93:goto L4e0f93;
case 0x4e0f98:c.instructions+=1;goto B4e0f98;
case 0x4e0f9e:goto L4e0f9e;
case 0x4e0fa3:c.instructions+=1;goto B4e0fa3;
case 0x4e0fa9:goto L4e0fa9;
case 0x4e0fac:c.instructions+=2;goto B4e0fac;
case 0x4e0fb2:c.instructions+=1;goto B4e0fb2;
case 0x4e0fb8:goto L4e0fb8;
case 0x4e0fbe:c.instructions+=2;goto B4e0fbe;
case 0x4e0fc0:c.instructions+=1;goto B4e0fc0;
case 0x4e0fc5:goto L4e0fc5;
case 0x4e0fc8:c.instructions+=1;goto B4e0fc8;
case 0x4e0fce:goto L4e0fce;
case 0x4e0fd1:c.instructions+=5;goto B4e0fd1;
case 0x4e0fd4:c.instructions+=4;goto B4e0fd4;
case 0x4e0fd5:c.instructions+=3;goto B4e0fd5;
case 0x4e0fd7:c.instructions+=2;goto B4e0fd7;
case 0x4e0fd8:c.instructions+=1;goto B4e0fd8;
case 0x4e0fdd:goto L4e0fdd;
case 0x4e0fe0:c.instructions+=7;goto B4e0fe0;
case 0x4e0fe5:c.instructions+=6;goto B4e0fe5;
case 0x4e0fe7:c.instructions+=5;goto B4e0fe7;
case 0x4e0fec:c.instructions+=4;goto B4e0fec;
case 0x4e0ff1:c.instructions+=3;goto B4e0ff1;
case 0x4e0ff6:c.instructions+=2;goto B4e0ff6;
case 0x4e0ffb:c.instructions+=1;goto B4e0ffb;
default:missing_instruction(c.pc);}
B4e0005:L4e0005:{c.instructions+=9;NFSU2_TR(0x4e0005);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e000b:{NFSU2_TR(0x4e000b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4e000d:{NFSU2_TR(0x4e000d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0010:{NFSU2_TR(0x4e0010);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e0013:{NFSU2_TR(0x4e0013);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e0019:{NFSU2_TR(0x4e0019);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e001f:{NFSU2_TR(0x4e001f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e0021:{NFSU2_TR(0x4e0021);
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
B4e0024:{NFSU2_TR(0x4e0024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e011f;}}
}
B4e002a:L4e002a:{c.instructions+=4;NFSU2_TR(0x4e002a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e002d:{NFSU2_TR(0x4e002d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e0033:{NFSU2_TR(0x4e0033);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e0035:{NFSU2_TR(0x4e0035);
if(r1(R+518)){{goto L4e0056;}}
}
B4e0037:L4e0037:{c.instructions+=3;NFSU2_TR(0x4e0037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e003d:{NFSU2_TR(0x4e003d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e003e:{NFSU2_TR(0x4e003e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0043ull));
TAIL_STATIC(0x4a7930u,4a7);
}
B4e0043:L4e0043:{c.instructions+=6;NFSU2_TR(0x4e0043);
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
B4e0046:{NFSU2_TR(0x4e0046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0047:{NFSU2_TR(0x4e0047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0051:{NFSU2_TR(0x4e0051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0052:{NFSU2_TR(0x4e0052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0053:{NFSU2_TR(0x4e0053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0056:L4e0056:{c.instructions+=3;NFSU2_TR(0x4e0056);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x931ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e005c:{NFSU2_TR(0x4e005c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e005e:{NFSU2_TR(0x4e005e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0092;}}
}
B4e0060:L4e0060:{c.instructions+=1;NFSU2_TR(0x4e0060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0065ull));
TAIL_STATIC(0x511e00u,511);
}
B4e0065:L4e0065:{c.instructions+=5;NFSU2_TR(0x4e0065);
__builtin_memmove((R+28),(R+0),4);
}
B4e0067:{NFSU2_TR(0x4e0067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e006d:{NFSU2_TR(0x4e006d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e006e:{NFSU2_TR(0x4e006e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0070:{NFSU2_TR(0x4e0070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0075ull));
TAIL_STATIC(0x4a7900u,4a7);
}
B4e0075:L4e0075:{c.instructions+=4;NFSU2_TR(0x4e0075);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0077:{NFSU2_TR(0x4e0077);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0079:{NFSU2_TR(0x4e0079);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e007a:{NFSU2_TR(0x4e007a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e007full));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4e007f:L4e007f:{c.instructions+=6;NFSU2_TR(0x4e007f);
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
B4e0082:{NFSU2_TR(0x4e0082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0083:{NFSU2_TR(0x4e0083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e008d:{NFSU2_TR(0x4e008d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e008e:{NFSU2_TR(0x4e008e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e008f:{NFSU2_TR(0x4e008f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0092:L4e0092:{c.instructions+=3;NFSU2_TR(0x4e0092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0098:{NFSU2_TR(0x4e0098);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0099:{NFSU2_TR(0x4e0099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e009eull));
TAIL_STATIC(0x4a7960u,4a7);
}
B4e009e:L4e009e:{c.instructions+=6;NFSU2_TR(0x4e009e);
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
B4e00a1:{NFSU2_TR(0x4e00a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e00a2:{NFSU2_TR(0x4e00a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e00ac:{NFSU2_TR(0x4e00ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e00ad:{NFSU2_TR(0x4e00ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e00ae:{NFSU2_TR(0x4e00ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e00b1:L4e00b1:{c.instructions+=2;NFSU2_TR(0x4e00b1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd05fc3a3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd05fc3a3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd05fc3a3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e00b6:{NFSU2_TR(0x4e00b6);
if(r1(R+518)){{goto L4e00d8;}}
}
B4e00b8:L4e00b8:{c.instructions+=2;NFSU2_TR(0x4e00b8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e00bd:{NFSU2_TR(0x4e00bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e011f;}}
}
B4e00bf:L4e00bf:{c.instructions+=5;NFSU2_TR(0x4e00bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e00c2:{NFSU2_TR(0x4e00c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00c4:{NFSU2_TR(0x4e00c4);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00c9:{NFSU2_TR(0x4e00c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00ca:{NFSU2_TR(0x4e00ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e00cfull));
TAIL_STATIC(0x537980u,537);
}
B4e00cf:L4e00cf:{c.instructions+=5;NFSU2_TR(0x4e00cf);
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
B4e00d2:{NFSU2_TR(0x4e00d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e00d3:{NFSU2_TR(0x4e00d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e00d4:{NFSU2_TR(0x4e00d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e00d5:{NFSU2_TR(0x4e00d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e00d8:L4e00d8:{c.instructions+=5;NFSU2_TR(0x4e00d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e00db:{NFSU2_TR(0x4e00db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e00e1:{NFSU2_TR(0x4e00e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00e2:{NFSU2_TR(0x4e00e2);
w4(R+4,u32(0x85ad40ull));
}
B4e00e7:{NFSU2_TR(0x4e00e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e00ecull));
TAIL_STATIC(0x500bd0u,500);
}
B4e00ec:L4e00ec:{c.instructions+=6;NFSU2_TR(0x4e00ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e00ef:{NFSU2_TR(0x4e00ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e00f2:{NFSU2_TR(0x4e00f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00f3:{NFSU2_TR(0x4e00f3);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00f5:{NFSU2_TR(0x4e00f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e00f6:{NFSU2_TR(0x4e00f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e00fbull));
TAIL_STATIC(0x50d150u,50d);
}
B4e00fb:L4e00fb:{c.instructions+=5;NFSU2_TR(0x4e00fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e00fe:{NFSU2_TR(0x4e00fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e0101:{NFSU2_TR(0x4e0101);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0103:{NFSU2_TR(0x4e0103);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0108:{NFSU2_TR(0x4e0108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e010dull));
TAIL_STATIC(0x43db50u,43d);
}
B4e010d:L4e010d:{c.instructions+=5;NFSU2_TR(0x4e010d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0110:{NFSU2_TR(0x4e0110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0111:{NFSU2_TR(0x4e0111);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0116:{NFSU2_TR(0x4e0116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0117:{NFSU2_TR(0x4e0117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e011cull));
TAIL_STATIC(0x537c60u,537);
}
B4e011c:L4e011c:{c.instructions+=1;NFSU2_TR(0x4e011c);
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
B4e011f:L4e011f:{c.instructions+=4;NFSU2_TR(0x4e011f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0120:{NFSU2_TR(0x4e0120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0121:{NFSU2_TR(0x4e0121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0122:{NFSU2_TR(0x4e0122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0160:L4e0160:{c.instructions+=15;NFSU2_TR(0x4e0160);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0162:{NFSU2_TR(0x4e0162);
u8 U[4];
w4(U+0,u32(0x775997ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0167:{NFSU2_TR(0x4e0167);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e016d:{NFSU2_TR(0x4e016d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e016e:{NFSU2_TR(0x4e016e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0175:{NFSU2_TR(0x4e0175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B4e0178:{NFSU2_TR(0x4e0178);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0179:{NFSU2_TR(0x4e0179);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e017a:{NFSU2_TR(0x4e017a);
__builtin_memmove((R+24),(R+4),4);
}
B4e017c:{NFSU2_TR(0x4e017c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0182:{NFSU2_TR(0x4e0182);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e0184:{NFSU2_TR(0x4e0184);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e0186:{NFSU2_TR(0x4e0186);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0187:{NFSU2_TR(0x4e0187);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e018b:{NFSU2_TR(0x4e018b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4e01a3;}}
}
B4e018d:L4e018d:{c.instructions+=2;NFSU2_TR(0x4e018d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e0190:{NFSU2_TR(0x4e0190);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e01a3;}}
}
B4e0192:L4e0192:{c.instructions+=4;NFSU2_TR(0x4e0192);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4e0198:{NFSU2_TR(0x4e0198);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B4e019d:{NFSU2_TR(0x4e019d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e01a1:{NFSU2_TR(0x4e01a1);
{goto L4e01a7;}
}
B4e01a3:L4e01a3:{c.instructions+=1;NFSU2_TR(0x4e01a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e01a7:L4e01a7:{c.instructions+=3;NFSU2_TR(0x4e01a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e01aa:{NFSU2_TR(0x4e01aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e01ad:{NFSU2_TR(0x4e01ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e01b2ull));
TAIL_STATIC(0x479100u,479);
}
B4e01b2:L4e01b2:{c.instructions+=4;NFSU2_TR(0x4e01b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e01b6:{NFSU2_TR(0x4e01b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e01b7:{NFSU2_TR(0x4e01b7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e01b9:{NFSU2_TR(0x4e01b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e01beull));
TAIL_STATIC(0x5162d0u,516);
}
B4e01be:L4e01be:{c.instructions+=3;NFSU2_TR(0x4e01be);
__builtin_memmove((R+28),(R+0),4);
}
B4e01c0:{NFSU2_TR(0x4e01c0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4e01c2:{NFSU2_TR(0x4e01c2);
if(r1(R+518)){{goto L4e0398;}}
}
B4e01c8:L4e01c8:{c.instructions+=3;NFSU2_TR(0x4e01c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e01ca:{NFSU2_TR(0x4e01ca);
__builtin_memmove((R+4),(R+28),4);
}
B4e01cc:{NFSU2_TR(0x4e01cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e01cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e01cf:L4e01cf:{c.instructions+=4;NFSU2_TR(0x4e01cf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4e01d5:{NFSU2_TR(0x4e01d5);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e01db:{NFSU2_TR(0x4e01db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e01df:{NFSU2_TR(0x4e01df);
if(r1(R+518)){{goto L4e02b0;}}
}
B4e01e5:L4e01e5:{c.instructions+=2;NFSU2_TR(0x4e01e5);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4e01eb:{NFSU2_TR(0x4e01eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e02b0;}}
}
B4e01f1:L4e01f1:{c.instructions+=3;NFSU2_TR(0x4e01f1);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4e01f7:{NFSU2_TR(0x4e01f7);
u8 U[4];
w4(U+0,u32(0x940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e01fc:{NFSU2_TR(0x4e01fc);
if(r1(R+518)){{goto L4e025a;}}
}
B4e01fe:L4e01fe:{c.instructions+=1;NFSU2_TR(0x4e01fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0203ull));
TAIL_STATIC(0x575620u,575);
}
B4e0203:L4e0203:{c.instructions+=6;NFSU2_TR(0x4e0203);
__builtin_memmove((R+24),(R+0),4);
}
B4e0205:{NFSU2_TR(0x4e0205);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0208:{NFSU2_TR(0x4e0208);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e020c:{NFSU2_TR(0x4e020c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e020e:{NFSU2_TR(0x4e020e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0212:{NFSU2_TR(0x4e0212);
if(r1(R+518)){{goto L4e0253;}}
}
B4e0214:L4e0214:{c.instructions+=14;NFSU2_TR(0x4e0214);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0217:{NFSU2_TR(0x4e0217);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e021b:{NFSU2_TR(0x4e021b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e021e:{NFSU2_TR(0x4e021e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0222:{NFSU2_TR(0x4e0222);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0228:{NFSU2_TR(0x4e0228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0229:{NFSU2_TR(0x4e0229);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e022a:{NFSU2_TR(0x4e022a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e022e:{NFSU2_TR(0x4e022e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e022f:{NFSU2_TR(0x4e022f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0233:{NFSU2_TR(0x4e0233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0234:{NFSU2_TR(0x4e0234);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0235:{NFSU2_TR(0x4e0235);
__builtin_memmove((R+4),(R+24),4);
}
B4e0237:{NFSU2_TR(0x4e0237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e023cull));
TAIL_STATIC(0x511db0u,511);
}
B4e023c:L4e023c:{c.instructions+=4;NFSU2_TR(0x4e023c);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e0242:{NFSU2_TR(0x4e0242);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x931ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0248:{NFSU2_TR(0x4e0248);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e024e:{NFSU2_TR(0x4e024e);
{goto L4e0331;}
}
B4e0253:L4e0253:{c.instructions+=2;NFSU2_TR(0x4e0253);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0255:{NFSU2_TR(0x4e0255);
{goto L4e0331;}
}
B4e025a:L4e025a:{c.instructions+=1;NFSU2_TR(0x4e025a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e025full));
TAIL_STATIC(0x575620u,575);
}
B4e025f:L4e025f:{c.instructions+=6;NFSU2_TR(0x4e025f);
__builtin_memmove((R+24),(R+0),4);
}
B4e0261:{NFSU2_TR(0x4e0261);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0264:{NFSU2_TR(0x4e0264);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0268:{NFSU2_TR(0x4e0268);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e026a:{NFSU2_TR(0x4e026a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0272:{NFSU2_TR(0x4e0272);
if(r1(R+518)){{goto L4e02ac;}}
}
B4e0274:L4e0274:{c.instructions+=3;NFSU2_TR(0x4e0274);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0277:{NFSU2_TR(0x4e0277);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e027d:{NFSU2_TR(0x4e027d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0282ull));
TAIL_STATIC(0x40c910u,40c);
}
B4e0282:L4e0282:{c.instructions+=8;NFSU2_TR(0x4e0282);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0286:{NFSU2_TR(0x4e0286);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e028c:{NFSU2_TR(0x4e028c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0292:{NFSU2_TR(0x4e0292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0298:{NFSU2_TR(0x4e0298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e029e:{NFSU2_TR(0x4e029e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e02a4:{NFSU2_TR(0x4e02a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x931ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e02aa:{NFSU2_TR(0x4e02aa);
{goto L4e032a;}
}
B4e02ac:L4e02ac:{c.instructions+=2;NFSU2_TR(0x4e02ac);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e02ae:{NFSU2_TR(0x4e02ae);
{goto L4e032a;}
}
B4e02b0:L4e02b0:{c.instructions+=2;NFSU2_TR(0x4e02b0);
u8 U[4];
w4(U+0,u32(0x940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e02b5:{NFSU2_TR(0x4e02b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e02baull));
TAIL_STATIC(0x575620u,575);
}
B4e02ba:L4e02ba:{c.instructions+=6;NFSU2_TR(0x4e02ba);
__builtin_memmove((R+24),(R+0),4);
}
B4e02bc:{NFSU2_TR(0x4e02bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e02bf:{NFSU2_TR(0x4e02bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e02c3:{NFSU2_TR(0x4e02c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e02c5:{NFSU2_TR(0x4e02c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e02cd:{NFSU2_TR(0x4e02cd);
if(r1(R+518)){{goto L4e0321;}}
}
B4e02cf:L4e02cf:{c.instructions+=5;NFSU2_TR(0x4e02cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e02d2:{NFSU2_TR(0x4e02d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e02d5:{NFSU2_TR(0x4e02d5);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e02db:{NFSU2_TR(0x4e02db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e02df:{NFSU2_TR(0x4e02df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e02e4ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4e02e4:L4e02e4:{c.instructions+=7;NFSU2_TR(0x4e02e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e02e8:{NFSU2_TR(0x4e02e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e02e9:{NFSU2_TR(0x4e02e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e02ea:{NFSU2_TR(0x4e02ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e02eb:{NFSU2_TR(0x4e02eb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e02ed:{NFSU2_TR(0x4e02ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e02f2:{NFSU2_TR(0x4e02f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e02f7ull));
TAIL_STATIC(0x610270u,610);
}
B4e02f7:L4e02f7:{c.instructions+=8;NFSU2_TR(0x4e02f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e02fb:{NFSU2_TR(0x4e02fb);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e0301:{NFSU2_TR(0x4e0301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0307:{NFSU2_TR(0x4e0307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e030d:{NFSU2_TR(0x4e030d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0313:{NFSU2_TR(0x4e0313);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0319:{NFSU2_TR(0x4e0319);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x931ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e031f:{NFSU2_TR(0x4e031f);
{goto L4e0323;}
}
B4e0321:L4e0321:{c.instructions+=1;NFSU2_TR(0x4e0321);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0323:L4e0323:{c.instructions+=1;NFSU2_TR(0x4e0323);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e032a:L4e032a:{c.instructions+=1;NFSU2_TR(0x4e032a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x931ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0331:L4e0331:{c.instructions+=3;NFSU2_TR(0x4e0331);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x931ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4e0337:{NFSU2_TR(0x4e0337);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e033f:{NFSU2_TR(0x4e033f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0364;}}
}
B4e0341:L4e0341:{c.instructions+=2;NFSU2_TR(0x4e0341);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4e0347:{NFSU2_TR(0x4e0347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0364;}}
}
B4e0349:L4e0349:{c.instructions+=2;NFSU2_TR(0x4e0349);
__builtin_memmove((R+4),(R+24),4);
}
B4e034b:{NFSU2_TR(0x4e034b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0350ull));
TAIL_STATIC(0x511e00u,511);
}
B4e0350:L4e0350:{c.instructions+=8;NFSU2_TR(0x4e0350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e0352:{NFSU2_TR(0x4e0352);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0353:{NFSU2_TR(0x4e0353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0354:{NFSU2_TR(0x4e0354);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0358:{NFSU2_TR(0x4e0358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e035e:{NFSU2_TR(0x4e035e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e035f:{NFSU2_TR(0x4e035f);
__builtin_memmove((R+4),(R+28),4);
}
B4e0361:{NFSU2_TR(0x4e0361);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0364ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e0364:L4e0364:{c.instructions+=15;NFSU2_TR(0x4e0364);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e0367:{NFSU2_TR(0x4e0367);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e036b:{NFSU2_TR(0x4e036b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e036e:{NFSU2_TR(0x4e036e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0371:{NFSU2_TR(0x4e0371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e0373:{NFSU2_TR(0x4e0373);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0376:{NFSU2_TR(0x4e0376);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e0378:{NFSU2_TR(0x4e0378);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e037c:{NFSU2_TR(0x4e037c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e037f:{NFSU2_TR(0x4e037f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0382:{NFSU2_TR(0x4e0382);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0383:{NFSU2_TR(0x4e0383);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e0384:{NFSU2_TR(0x4e0384);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0386:{NFSU2_TR(0x4e0386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0389:{NFSU2_TR(0x4e0389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e038eull));
TAIL_STATIC(0x5162d0u,516);
}
B4e038e:L4e038e:{c.instructions+=3;NFSU2_TR(0x4e038e);
__builtin_memmove((R+28),(R+0),4);
}
B4e0390:{NFSU2_TR(0x4e0390);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4e0392:{NFSU2_TR(0x4e0392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e01c8u);}goto L4e01c8;}}
}
B4e0398:L4e0398:{c.instructions+=3;NFSU2_TR(0x4e0398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e039b:{NFSU2_TR(0x4e039b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e039d:{NFSU2_TR(0x4e039d);
if(r1(R+518)){{goto L4e03a4;}}
}
B4e039f:L4e039f:{c.instructions+=2;NFSU2_TR(0x4e039f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e03a2:{NFSU2_TR(0x4e03a2);
{goto L4e03a6;}
}
B4e03a4:L4e03a4:{c.instructions+=1;NFSU2_TR(0x4e03a4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e03a6:L4e03a6:{c.instructions+=2;NFSU2_TR(0x4e03a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e03a9:{NFSU2_TR(0x4e03a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e03aeull));
TAIL_STATIC(0x511e00u,511);
}
B4e03ae:L4e03ae:{c.instructions+=3;NFSU2_TR(0x4e03ae);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e03b3:{NFSU2_TR(0x4e03b3);
__builtin_memmove((R+28),(R+0),4);
}
B4e03b5:{NFSU2_TR(0x4e03b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e03baull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e03ba:L4e03ba:{c.instructions+=3;NFSU2_TR(0x4e03ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e03bd:{NFSU2_TR(0x4e03bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e03bf:{NFSU2_TR(0x4e03bf);
if(r1(R+518)){{goto L4e03d2;}}
}
B4e03c1:L4e03c1:{c.instructions+=2;NFSU2_TR(0x4e03c1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e03c6:{NFSU2_TR(0x4e03c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e03cbull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e03cb:L4e03cb:{c.instructions+=3;NFSU2_TR(0x4e03cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e03ce:{NFSU2_TR(0x4e03ce);
__builtin_memmove((R+24),(R+0),4);
}
B4e03d0:{NFSU2_TR(0x4e03d0);
{goto L4e03fb;}
}
B4e03d2:L4e03d2:{c.instructions+=2;NFSU2_TR(0x4e03d2);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e03d7:{NFSU2_TR(0x4e03d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e03dcull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e03dc:L4e03dc:{c.instructions+=3;NFSU2_TR(0x4e03dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e03df:{NFSU2_TR(0x4e03df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e03e1:{NFSU2_TR(0x4e03e1);
if(r1(R+518)){{goto L4e03f9;}}
}
B4e03e3:L4e03e3:{c.instructions+=2;NFSU2_TR(0x4e03e3);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e03e8:{NFSU2_TR(0x4e03e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e03edull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e03ed:L4e03ed:{c.instructions+=3;NFSU2_TR(0x4e03ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e03f0:{NFSU2_TR(0x4e03f0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e03f2:{NFSU2_TR(0x4e03f2);
if(r1(R+518)){{goto L4e03f9;}}
}
B4e03f4:L4e03f4:{c.instructions+=2;NFSU2_TR(0x4e03f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e03f7:{NFSU2_TR(0x4e03f7);
{goto L4e03fb;}
}
B4e03f9:L4e03f9:{c.instructions+=1;NFSU2_TR(0x4e03f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e03fb:L4e03fb:{c.instructions+=3;NFSU2_TR(0x4e03fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e03fc:{NFSU2_TR(0x4e03fc);
w4(R+4,u32(0x8371b0ull));
}
B4e0401:{NFSU2_TR(0x4e0401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0406ull));
TAIL_STATIC(0x413440u,413);
}
B4e0406:L4e0406:{c.instructions+=3;NFSU2_TR(0x4e0406);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0408:{NFSU2_TR(0x4e0408);
s4(0x83623c,u32(0x1ull));
}
B4e0412:{NFSU2_TR(0x4e0412);
if(r1(R+518)){{goto L4e0422;}}
}
B4e0414:L4e0414:{c.instructions+=4;NFSU2_TR(0x4e0414);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0416:{NFSU2_TR(0x4e0416);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e041b:{NFSU2_TR(0x4e041b);
__builtin_memmove((R+4),(R+24),4);
}
B4e041d:{NFSU2_TR(0x4e041d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0422ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e0422:L4e0422:{c.instructions+=7;NFSU2_TR(0x4e0422);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0426:{NFSU2_TR(0x4e0426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0427:{NFSU2_TR(0x4e0427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0428:{NFSU2_TR(0x4e0428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0429:{NFSU2_TR(0x4e0429);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0430:{NFSU2_TR(0x4e0430);
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
B4e0433:{NFSU2_TR(0x4e0433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0440:L4e0440:{c.instructions+=26;NFSU2_TR(0x4e0440);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0441:{NFSU2_TR(0x4e0441);
__builtin_memmove((R+20),(R+16),4);
}
B4e0443:{NFSU2_TR(0x4e0443);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0445:{NFSU2_TR(0x4e0445);
u8 U[4];
w4(U+0,u32(0x775a02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e044a:{NFSU2_TR(0x4e044a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0450:{NFSU2_TR(0x4e0450);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0451:{NFSU2_TR(0x4e0451);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0458:{NFSU2_TR(0x4e0458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4e045b:{NFSU2_TR(0x4e045b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e045c:{NFSU2_TR(0x4e045c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e045d:{NFSU2_TR(0x4e045d);
__builtin_memmove((R+24),(R+4),4);
}
B4e045f:{NFSU2_TR(0x4e045f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0462:{NFSU2_TR(0x4e0462);
u8 U[4];
w4(U+0,u32(0x7975fcull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e0468:{NFSU2_TR(0x4e0468);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0469:{NFSU2_TR(0x4e0469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e046c:{NFSU2_TR(0x4e046c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4e046e:{NFSU2_TR(0x4e046e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0471:{NFSU2_TR(0x4e0471);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e0474:{NFSU2_TR(0x4e0474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e047b:{NFSU2_TR(0x4e047b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e047d:{NFSU2_TR(0x4e047d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0480:{NFSU2_TR(0x4e0480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0483:{NFSU2_TR(0x4e0483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0486:{NFSU2_TR(0x4e0486);
w4(R+0,u32(0x1ull));
}
B4e048b:{NFSU2_TR(0x4e048b);
w4(R+4,u32(0xfull));
}
B4e0490:{NFSU2_TR(0x4e0490);
w4(R+28,u32(0x835f38ull));
}
B4e0495:L4e0495:{c.instructions+=1;NFSU2_TR(0x4e0495);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e0497;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0495u);}goto L4e0495;}
}
B4e0497:L4e0497:{c.instructions+=4;NFSU2_TR(0x4e0497);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B4e049d:{NFSU2_TR(0x4e049d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e049e:{NFSU2_TR(0x4e049e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e04a2:{NFSU2_TR(0x4e04a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e04a7ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4e04a7:L4e04a7:{c.instructions+=5;NFSU2_TR(0x4e04a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e04aa:{NFSU2_TR(0x4e04aa);
u8 U[4];
w4(U+0,u32(0x90fe80f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04af:{NFSU2_TR(0x4e04af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04b0:{NFSU2_TR(0x4e04b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e04b3:{NFSU2_TR(0x4e04b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e04b8ull));
TAIL_STATIC(0x537a60u,537);
}
B4e04b8:L4e04b8:{c.instructions+=5;NFSU2_TR(0x4e04b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e04bb:{NFSU2_TR(0x4e04bb);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4e04c0:{NFSU2_TR(0x4e04c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04c1:{NFSU2_TR(0x4e04c1);
u8 U[4];
w4(U+0,u32(0x791858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04c6:{NFSU2_TR(0x4e04c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e04cbull));
TAIL_STATIC(0x50b990u,50b);
}
B4e04cb:L4e04cb:{c.instructions+=4;NFSU2_TR(0x4e04cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e04ce:{NFSU2_TR(0x4e04ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04cf:{NFSU2_TR(0x4e04cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04d0:{NFSU2_TR(0x4e04d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e04d5ull));
TAIL_STATIC(0x50c990u,50c);
}
B4e04d5:L4e04d5:{c.instructions+=4;NFSU2_TR(0x4e04d5);
u8 U[4];
w4(U+0,u32(0xe2848973ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04da:{NFSU2_TR(0x4e04da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04db:{NFSU2_TR(0x4e04db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e04e2:{NFSU2_TR(0x4e04e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e04e7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e04e7:L4e04e7:{c.instructions+=5;NFSU2_TR(0x4e04e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e04ea:{NFSU2_TR(0x4e04ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e04ec:{NFSU2_TR(0x4e04ec);
w4(R+4,u32(0x85ad40ull));
}
B4e04f1:{NFSU2_TR(0x4e04f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e04f4:{NFSU2_TR(0x4e04f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e04f9ull));
TAIL_STATIC(0x500ee0u,500);
}
B4e04f9:L4e04f9:{c.instructions+=3;NFSU2_TR(0x4e04f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e04fb:{NFSU2_TR(0x4e04fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e04fe:{NFSU2_TR(0x4e04fe);
if(r1(R+518)){{goto L4e0600;}}
}
B4e0504:L4e0504:{c.instructions+=1;NFSU2_TR(0x4e0504);
{goto L4e0510;}
}
B4e0506:L4e0506:{c.instructions+=2;NFSU2_TR(0x4e0506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0509:{NFSU2_TR(0x4e0509);
__builtin_memmove((R+16),(R+16),4);
}
B4e0510:L4e0510:{c.instructions+=2;NFSU2_TR(0x4e0510);
__builtin_memmove((R+4),(R+0),4);
}
B4e0512:{NFSU2_TR(0x4e0512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0517ull));
TAIL_STATIC(0x533110u,533);
}
B4e0517:L4e0517:{c.instructions+=2;NFSU2_TR(0x4e0517);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e0519:{NFSU2_TR(0x4e0519);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e052d;}}
}
B4e051b:L4e051b:{c.instructions+=2;NFSU2_TR(0x4e051b);
w4(R+4,u32(0x85b940ull));
}
B4e0520:{NFSU2_TR(0x4e0520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0525ull));
TAIL_STATIC(0x501690u,501);
}
B4e0525:L4e0525:{c.instructions+=2;NFSU2_TR(0x4e0525);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e0527:{NFSU2_TR(0x4e0527);
if(r1(R+518)){{goto L4e05e7;}}
}
B4e052d:L4e052d:{c.instructions+=2;NFSU2_TR(0x4e052d);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e052f:{NFSU2_TR(0x4e052f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0534ull));
TAIL_STATIC(0x575620u,575);
}
B4e0534:L4e0534:{c.instructions+=5;NFSU2_TR(0x4e0534);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0537:{NFSU2_TR(0x4e0537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e053a:{NFSU2_TR(0x4e053a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e053c:{NFSU2_TR(0x4e053c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0540:{NFSU2_TR(0x4e0540);
if(r1(R+518)){{goto L4e0552;}}
}
B4e0542:L4e0542:{c.instructions+=5;NFSU2_TR(0x4e0542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0545:{NFSU2_TR(0x4e0545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0546:{NFSU2_TR(0x4e0546);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0547:{NFSU2_TR(0x4e0547);
__builtin_memmove((R+4),(R+0),4);
}
B4e0549:{NFSU2_TR(0x4e0549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e054eull));
TAIL_STATIC(0x4b0670u,4b0);
}
B4e054e:L4e054e:{c.instructions+=2;NFSU2_TR(0x4e054e);
__builtin_memmove((R+24),(R+0),4);
}
B4e0550:{NFSU2_TR(0x4e0550);
{goto L4e0554;}
}
B4e0552:L4e0552:{c.instructions+=1;NFSU2_TR(0x4e0552);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0554:L4e0554:{c.instructions+=8;NFSU2_TR(0x4e0554);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0557:{NFSU2_TR(0x4e0557);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e0559:{NFSU2_TR(0x4e0559);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e055c:{NFSU2_TR(0x4e055c);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e055e:{NFSU2_TR(0x4e055e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0562:{NFSU2_TR(0x4e0562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0565:{NFSU2_TR(0x4e0565);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4e0567:{NFSU2_TR(0x4e0567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e056cull));
TAIL_STATIC(0x575620u,575);
}
B4e056c:L4e056c:{c.instructions+=4;NFSU2_TR(0x4e056c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e056e:{NFSU2_TR(0x4e056e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0571:{NFSU2_TR(0x4e0571);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0573:{NFSU2_TR(0x4e0573);
if(r1(R+518)){{goto L4e0594;}}
}
B4e0575:L4e0575:{c.instructions+=8;NFSU2_TR(0x4e0575);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0578:{NFSU2_TR(0x4e0578);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4e057a:{NFSU2_TR(0x4e057a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e057d:{NFSU2_TR(0x4e057d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0580:{NFSU2_TR(0x4e0580);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0583:{NFSU2_TR(0x4e0583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0586:{NFSU2_TR(0x4e0586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e0589:{NFSU2_TR(0x4e0589);
w4(R+4,u32(0x6ull));
}
B4e058e:L4e058e:{c.instructions+=1;NFSU2_TR(0x4e058e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4e0590;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e058eu);}goto L4e058e;}
}
B4e0590:L4e0590:{c.instructions+=2;NFSU2_TR(0x4e0590);
__builtin_memmove((R+24),(R+0),4);
}
B4e0592:{NFSU2_TR(0x4e0592);
{goto L4e0596;}
}
B4e0594:L4e0594:{c.instructions+=1;NFSU2_TR(0x4e0594);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0596:L4e0596:{c.instructions+=9;NFSU2_TR(0x4e0596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0599:{NFSU2_TR(0x4e0599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e059c:{NFSU2_TR(0x4e059c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4e059f:{NFSU2_TR(0x4e059f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e05a1:{NFSU2_TR(0x4e05a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05a4:{NFSU2_TR(0x4e05a4);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e05a6:{NFSU2_TR(0x4e05a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05a9:{NFSU2_TR(0x4e05a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4e05ab:{NFSU2_TR(0x4e05ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e05b0ull));
TAIL_STATIC(0x575620u,575);
}
B4e05b0:L4e05b0:{c.instructions+=3;NFSU2_TR(0x4e05b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e05b3:{NFSU2_TR(0x4e05b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e05b5:{NFSU2_TR(0x4e05b5);
if(r1(R+518)){{goto L4e05cc;}}
}
B4e05b7:L4e05b7:{c.instructions+=6;NFSU2_TR(0x4e05b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e05ba:{NFSU2_TR(0x4e05ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e05bd:{NFSU2_TR(0x4e05bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e05c4:{NFSU2_TR(0x4e05c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05c7:{NFSU2_TR(0x4e05c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05ca:{NFSU2_TR(0x4e05ca);
{goto L4e05ce;}
}
B4e05cc:L4e05cc:{c.instructions+=1;NFSU2_TR(0x4e05cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e05ce:L4e05ce:{c.instructions+=9;NFSU2_TR(0x4e05ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e05d1:{NFSU2_TR(0x4e05d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e05d4:{NFSU2_TR(0x4e05d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e05d7:{NFSU2_TR(0x4e05d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e05da:{NFSU2_TR(0x4e05da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4e05dd:{NFSU2_TR(0x4e05dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e05df:{NFSU2_TR(0x4e05df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05e2:{NFSU2_TR(0x4e05e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05e5:{NFSU2_TR(0x4e05e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e05e7:L4e05e7:{c.instructions+=4;NFSU2_TR(0x4e05e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e05ea:{NFSU2_TR(0x4e05ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e05eb:{NFSU2_TR(0x4e05eb);
w4(R+4,u32(0x85ad40ull));
}
B4e05f0:{NFSU2_TR(0x4e05f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e05f5ull));
TAIL_STATIC(0x500ee0u,500);
}
B4e05f5:L4e05f5:{c.instructions+=3;NFSU2_TR(0x4e05f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e05f7:{NFSU2_TR(0x4e05f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e05fa:{NFSU2_TR(0x4e05fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0506u);}goto L4e0506;}}
}
B4e0600:L4e0600:{c.instructions+=4;NFSU2_TR(0x4e0600);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4e0605:{NFSU2_TR(0x4e0605);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e0607:{NFSU2_TR(0x4e0607);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0609:{NFSU2_TR(0x4e0609);
if(r1(R+518)){{goto L4e0703;}}
}
B4e060f:L4e060f:{c.instructions+=7;NFSU2_TR(0x4e060f);
__builtin_memmove(gp(0x835f70),(R+4),4);
}
B4e0615:{NFSU2_TR(0x4e0615);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0618:{NFSU2_TR(0x4e0618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e061b:{NFSU2_TR(0x4e061b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e061e:{NFSU2_TR(0x4e061e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4e0620:{NFSU2_TR(0x4e0620);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0622:{NFSU2_TR(0x4e0622);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e0688;}}
}
B4e0624:L4e0624:{c.instructions+=6;NFSU2_TR(0x4e0624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0627:{NFSU2_TR(0x4e0627);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4e0629:{NFSU2_TR(0x4e0629);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4e062d:{NFSU2_TR(0x4e062d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e0633:{NFSU2_TR(0x4e0633);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e0635:{NFSU2_TR(0x4e0635);
if(r1(R+518)){{goto L4e0672;}}
}
B4e0637:L4e0637:{c.instructions+=2;NFSU2_TR(0x4e0637);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0639:{NFSU2_TR(0x4e0639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e063eull));
TAIL_STATIC(0x575620u,575);
}
B4e063e:L4e063e:{c.instructions+=5;NFSU2_TR(0x4e063e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0641:{NFSU2_TR(0x4e0641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0644:{NFSU2_TR(0x4e0644);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0646:{NFSU2_TR(0x4e0646);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e064a:{NFSU2_TR(0x4e064a);
if(r1(R+518)){{goto L4e065a;}}
}
B4e064c:L4e064c:{c.instructions+=5;NFSU2_TR(0x4e064c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e064f:{NFSU2_TR(0x4e064f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0650:{NFSU2_TR(0x4e0650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0651:{NFSU2_TR(0x4e0651);
__builtin_memmove((R+4),(R+0),4);
}
B4e0653:{NFSU2_TR(0x4e0653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0658ull));
TAIL_STATIC(0x4b0740u,4b0);
}
B4e0658:L4e0658:{c.instructions+=1;NFSU2_TR(0x4e0658);
{goto L4e065c;}
}
B4e065a:L4e065a:{c.instructions+=1;NFSU2_TR(0x4e065a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e065c:L4e065c:{c.instructions+=7;NFSU2_TR(0x4e065c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e065f:{NFSU2_TR(0x4e065f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e0661:{NFSU2_TR(0x4e0661);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0664:{NFSU2_TR(0x4e0664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0667:{NFSU2_TR(0x4e0667);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e0669:{NFSU2_TR(0x4e0669);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4e066e:{NFSU2_TR(0x4e066e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0672:L4e0672:{c.instructions+=9;NFSU2_TR(0x4e0672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0675:{NFSU2_TR(0x4e0675);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0678:{NFSU2_TR(0x4e0678);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4e0679:{NFSU2_TR(0x4e0679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e067c:{NFSU2_TR(0x4e067c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e067f:{NFSU2_TR(0x4e067f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e0682:{NFSU2_TR(0x4e0682);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4e0684:{NFSU2_TR(0x4e0684);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e0686:{NFSU2_TR(0x4e0686);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0624u);}goto L4e0624;}}
}
B4e0688:L4e0688:{c.instructions+=2;NFSU2_TR(0x4e0688);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e068a:{NFSU2_TR(0x4e068a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e068full));
TAIL_STATIC(0x575620u,575);
}
B4e068f:L4e068f:{c.instructions+=6;NFSU2_TR(0x4e068f);
__builtin_memmove((R+28),(R+0),4);
}
B4e0691:{NFSU2_TR(0x4e0691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0694:{NFSU2_TR(0x4e0694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0697:{NFSU2_TR(0x4e0697);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0699:{NFSU2_TR(0x4e0699);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e069d:{NFSU2_TR(0x4e069d);
if(r1(R+518)){{goto L4e06f0;}}
}
B4e069f:L4e069f:{c.instructions+=7;NFSU2_TR(0x4e069f);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4e06a4:{NFSU2_TR(0x4e06a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e06a7:{NFSU2_TR(0x4e06a7);
u8 U[4];
w4(U+0,u32(0xdd9ef5ffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e06ac:{NFSU2_TR(0x4e06ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e06ad:{NFSU2_TR(0x4e06ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e06b0:{NFSU2_TR(0x4e06b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e06b7:{NFSU2_TR(0x4e06b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e06bcull));
TAIL_STATIC(0x5379c0u,537);
}
B4e06bc:L4e06bc:{c.instructions+=15;NFSU2_TR(0x4e06bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e06bf:{NFSU2_TR(0x4e06bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e06c2:{NFSU2_TR(0x4e06c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e06c5:{NFSU2_TR(0x4e06c5);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e06c8:{NFSU2_TR(0x4e06c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e06cb:{NFSU2_TR(0x4e06cb);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e06ce:{NFSU2_TR(0x4e06ce);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e06d1:{NFSU2_TR(0x4e06d1);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e06d4:{NFSU2_TR(0x4e06d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4e06db:{NFSU2_TR(0x4e06db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e06de:{NFSU2_TR(0x4e06de);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e06e2:{NFSU2_TR(0x4e06e2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e06e5:{NFSU2_TR(0x4e06e5);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e06eb:{NFSU2_TR(0x4e06eb);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e06ee:{NFSU2_TR(0x4e06ee);
{goto L4e06f2;}
}
B4e06f0:L4e06f0:{c.instructions+=1;NFSU2_TR(0x4e06f0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e06f2:L4e06f2:{c.instructions+=6;NFSU2_TR(0x4e06f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e06f5:{NFSU2_TR(0x4e06f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e06f7:{NFSU2_TR(0x4e06f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e06fa:{NFSU2_TR(0x4e06fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e06fe:{NFSU2_TR(0x4e06fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0701:{NFSU2_TR(0x4e0701);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4e0703:L4e0703:{c.instructions+=2;NFSU2_TR(0x4e0703);
__builtin_memmove((R+4),(R+24),4);
}
B4e0705:{NFSU2_TR(0x4e0705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e070aull));
TAIL_STATIC(0x4b09e0u,4b0);
}
B4e070a:L4e070a:{c.instructions+=4;NFSU2_TR(0x4e070a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e070d:{NFSU2_TR(0x4e070d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0714:{NFSU2_TR(0x4e0714);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4e0716:{NFSU2_TR(0x4e0716);
if(r1(R+518)){{goto L4e07e5;}}
}
B4e071c:L4e071c:{c.instructions+=2;NFSU2_TR(0x4e071c);
w4(R+4,u32(0x838590ull));
}
B4e0721:{NFSU2_TR(0x4e0721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0726ull));
TAIL_STATIC(0x501100u,501);
}
B4e0726:L4e0726:{c.instructions+=2;NFSU2_TR(0x4e0726);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0728:{NFSU2_TR(0x4e0728);
if(r1(R+518)){{goto L4e07a3;}}
}
B4e072a:L4e072a:{c.instructions+=2;NFSU2_TR(0x4e072a);
w4(R+4,u32(0x838590ull));
}
B4e072f:{NFSU2_TR(0x4e072f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0734ull));
TAIL_STATIC(0x501100u,501);
}
B4e0734:L4e0734:{c.instructions+=2;NFSU2_TR(0x4e0734);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0737:{NFSU2_TR(0x4e0737);
if(r1(R+518)){{goto L4e07a3;}}
}
B4e0739:L4e0739:{c.instructions+=2;NFSU2_TR(0x4e0739);
w4(R+4,u32(0x838590ull));
}
B4e073e:{NFSU2_TR(0x4e073e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0743ull));
TAIL_STATIC(0x501100u,501);
}
B4e0743:L4e0743:{c.instructions+=2;NFSU2_TR(0x4e0743);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0746:{NFSU2_TR(0x4e0746);
if(r1(R+518)){{goto L4e07a3;}}
}
B4e0748:L4e0748:{c.instructions+=2;NFSU2_TR(0x4e0748);
w4(R+4,u32(0x838590ull));
}
B4e074d:{NFSU2_TR(0x4e074d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0752ull));
TAIL_STATIC(0x501100u,501);
}
B4e0752:L4e0752:{c.instructions+=2;NFSU2_TR(0x4e0752);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0755:{NFSU2_TR(0x4e0755);
if(r1(R+518)){{goto L4e07a3;}}
}
B4e0757:L4e0757:{c.instructions+=4;NFSU2_TR(0x4e0757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4e0759:{NFSU2_TR(0x4e0759);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e075b:{NFSU2_TR(0x4e075b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e075e:{NFSU2_TR(0x4e075e);
if(r1(R+518)){{goto L4e0795;}}
}
B4e0760:L4e0760:{c.instructions+=3;NFSU2_TR(0x4e0760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0763:{NFSU2_TR(0x4e0763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0764:{NFSU2_TR(0x4e0764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0769ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4e0769:L4e0769:{c.instructions+=9;NFSU2_TR(0x4e0769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e076c:{NFSU2_TR(0x4e076c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e076f:{NFSU2_TR(0x4e076f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0772:{NFSU2_TR(0x4e0772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0775:{NFSU2_TR(0x4e0775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0778:{NFSU2_TR(0x4e0778);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0779:{NFSU2_TR(0x4e0779);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e077a:{NFSU2_TR(0x4e077a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e077b:{NFSU2_TR(0x4e077b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0780ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4e0780:L4e0780:{c.instructions+=5;NFSU2_TR(0x4e0780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0783:{NFSU2_TR(0x4e0783);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0785:{NFSU2_TR(0x4e0785);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e078a:{NFSU2_TR(0x4e078a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e078b:{NFSU2_TR(0x4e078b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0790ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4e0790:L4e0790:{c.instructions+=2;NFSU2_TR(0x4e0790);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e0793:{NFSU2_TR(0x4e0793);
{goto L4e07e5;}
}
B4e0795:L4e0795:{c.instructions+=3;NFSU2_TR(0x4e0795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0798:{NFSU2_TR(0x4e0798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0799:{NFSU2_TR(0x4e0799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e079eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e079e:L4e079e:{c.instructions+=2;NFSU2_TR(0x4e079e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e07a1:{NFSU2_TR(0x4e07a1);
{goto L4e07e5;}
}
B4e07a3:L4e07a3:{c.instructions+=5;NFSU2_TR(0x4e07a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4e07a5:{NFSU2_TR(0x4e07a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e07a7:{NFSU2_TR(0x4e07a7);
__builtin_memmove((R+0),gp(0x838590),4);
}
B4e07ac:{NFSU2_TR(0x4e07ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e07af:{NFSU2_TR(0x4e07af);
if(r1(R+518)){{goto L4e07e5;}}
}
B4e07b1:L4e07b1:{c.instructions+=2;NFSU2_TR(0x4e07b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e07b4:{NFSU2_TR(0x4e07b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e07b9ull));
TAIL_STATIC(0x514160u,514);
}
B4e07b9:L4e07b9:{c.instructions+=2;NFSU2_TR(0x4e07b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e07bc:{NFSU2_TR(0x4e07bc);
if(r1(R+518)){{goto L4e07c6;}}
}
B4e07be:L4e07be:{c.instructions+=3;NFSU2_TR(0x4e07be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4e07c0:{NFSU2_TR(0x4e07c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e07c2:{NFSU2_TR(0x4e07c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e07b1u);}goto L4e07b1;}}
}
B4e07c4:L4e07c4:{c.instructions+=1;NFSU2_TR(0x4e07c4);
{goto L4e07e5;}
}
B4e07c6:L4e07c6:{c.instructions+=2;NFSU2_TR(0x4e07c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e07c8:{NFSU2_TR(0x4e07c8);
if(r1(R+518)){{goto L4e07e5;}}
}
B4e07ca:L4e07ca:{c.instructions+=4;NFSU2_TR(0x4e07ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e07cd:{NFSU2_TR(0x4e07cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e07d0:{NFSU2_TR(0x4e07d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e07d1:{NFSU2_TR(0x4e07d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e07d6ull));
TAIL_STATIC(0x4964d0u,496);
}
B4e07d6:L4e07d6:{c.instructions+=3;NFSU2_TR(0x4e07d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e07d9:{NFSU2_TR(0x4e07d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e07db:{NFSU2_TR(0x4e07db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e07e5;}}
}
B4e07dd:L4e07dd:{c.instructions+=3;NFSU2_TR(0x4e07dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e07de:{NFSU2_TR(0x4e07de);
__builtin_memmove((R+4),(R+24),4);
}
B4e07e0:{NFSU2_TR(0x4e07e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e07e5ull));
TAIL_STATIC(0x4967f0u,496);
}
B4e07e5:L4e07e5:{c.instructions+=8;NFSU2_TR(0x4e07e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e07e8:{NFSU2_TR(0x4e07e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e07eb:{NFSU2_TR(0x4e07eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4e07ee:{NFSU2_TR(0x4e07ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f42d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e07f4:{NFSU2_TR(0x4e07f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e07f5:{NFSU2_TR(0x4e07f5);
u8 U[4];
w4(U+0,u32(0x42faad5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e07fa:{NFSU2_TR(0x4e07fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e07fb:{NFSU2_TR(0x4e07fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0800ull));
TAIL_STATIC(0x537a10u,537);
}
B4e0800:L4e0800:{c.instructions+=3;NFSU2_TR(0x4e0800);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e0803:{NFSU2_TR(0x4e0803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0804:{NFSU2_TR(0x4e0804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0809ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e0809:L4e0809:{c.instructions+=10;NFSU2_TR(0x4e0809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e080c:{NFSU2_TR(0x4e080c);
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
B4e080f:{NFSU2_TR(0x4e080f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0810:{NFSU2_TR(0x4e0810);
__builtin_memmove((R+0),(R+24),4);
}
B4e0812:{NFSU2_TR(0x4e0812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0813:{NFSU2_TR(0x4e0813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0814:{NFSU2_TR(0x4e0814);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e081b:{NFSU2_TR(0x4e081b);
__builtin_memmove((R+16),(R+20),4);
}
B4e081d:{NFSU2_TR(0x4e081d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e081e:{NFSU2_TR(0x4e081e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0830:L4e0830:{c.instructions+=3;NFSU2_TR(0x4e0830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0831:{NFSU2_TR(0x4e0831);
__builtin_memmove((R+24),(R+4),4);
}
B4e0833:{NFSU2_TR(0x4e0833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0838ull));
{goto L4e0850;}
}
B4e0838:L4e0838:{c.instructions+=2;NFSU2_TR(0x4e0838);
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
B4e083d:{NFSU2_TR(0x4e083d);
if(r1(R+518)){{goto L4e0848;}}
}
B4e083f:L4e083f:{c.instructions+=2;NFSU2_TR(0x4e083f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0840:{NFSU2_TR(0x4e0840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0845ull));
TAIL_STATIC(0x575630u,575);
}
B4e0845:L4e0845:{c.instructions+=1;NFSU2_TR(0x4e0845);
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
B4e0848:L4e0848:{c.instructions+=3;NFSU2_TR(0x4e0848);
__builtin_memmove((R+0),(R+24),4);
}
B4e084a:{NFSU2_TR(0x4e084a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e084b:{NFSU2_TR(0x4e084b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0850:L4e0850:{c.instructions+=16;NFSU2_TR(0x4e0850);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0852:{NFSU2_TR(0x4e0852);
u8 U[4];
w4(U+0,u32(0x775a1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0857:{NFSU2_TR(0x4e0857);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e085d:{NFSU2_TR(0x4e085d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e085e:{NFSU2_TR(0x4e085e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0865:{NFSU2_TR(0x4e0865);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0866:{NFSU2_TR(0x4e0866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0867:{NFSU2_TR(0x4e0867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0868:{NFSU2_TR(0x4e0868);
__builtin_memmove((R+28),(R+4),4);
}
B4e086a:{NFSU2_TR(0x4e086a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e086e:{NFSU2_TR(0x4e086e);
u8 U[4];
w4(U+0,u32(0x7975fcull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e0874:{NFSU2_TR(0x4e0874);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0877:{NFSU2_TR(0x4e0877);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e087a:{NFSU2_TR(0x4e087a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e087c:{NFSU2_TR(0x4e087c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0884:{NFSU2_TR(0x4e0884);
if(r1(R+518)){{goto L4e089f;}}
}
B4e0886:L4e0886:{c.instructions+=6;NFSU2_TR(0x4e0886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e0888:{NFSU2_TR(0x4e0888);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e088b:{NFSU2_TR(0x4e088b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e088d:{NFSU2_TR(0x4e088d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e088e:{NFSU2_TR(0x4e088e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0891:{NFSU2_TR(0x4e0891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0896ull));
TAIL_STATIC(0x575630u,575);
}
B4e0896:L4e0896:{c.instructions+=4;NFSU2_TR(0x4e0896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e0898:{NFSU2_TR(0x4e0898);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e089b:{NFSU2_TR(0x4e089b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e089d:{NFSU2_TR(0x4e089d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0886u);}goto L4e0886;}}
}
B4e089f:L4e089f:{c.instructions+=5;NFSU2_TR(0x4e089f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e08a2:{NFSU2_TR(0x4e08a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e08a5:{NFSU2_TR(0x4e08a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e08a7:{NFSU2_TR(0x4e08a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e08af:{NFSU2_TR(0x4e08af);
if(r1(R+518)){{goto L4e08ca;}}
}
B4e08b1:L4e08b1:{c.instructions+=6;NFSU2_TR(0x4e08b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e08b3:{NFSU2_TR(0x4e08b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e08b6:{NFSU2_TR(0x4e08b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e08b8:{NFSU2_TR(0x4e08b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e08b9:{NFSU2_TR(0x4e08b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e08bc:{NFSU2_TR(0x4e08bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e08c1ull));
TAIL_STATIC(0x575630u,575);
}
B4e08c1:L4e08c1:{c.instructions+=4;NFSU2_TR(0x4e08c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e08c3:{NFSU2_TR(0x4e08c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e08c6:{NFSU2_TR(0x4e08c6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e08c8:{NFSU2_TR(0x4e08c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e08b1u);}goto L4e08b1;}}
}
B4e08ca:L4e08ca:{c.instructions+=6;NFSU2_TR(0x4e08ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e08ce:{NFSU2_TR(0x4e08ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e08cf:{NFSU2_TR(0x4e08cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e08d0:{NFSU2_TR(0x4e08d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e08d7:{NFSU2_TR(0x4e08d7);
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
B4e08da:{NFSU2_TR(0x4e08da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e08e0:L4e08e0:{c.instructions+=7;NFSU2_TR(0x4e08e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e08e1:{NFSU2_TR(0x4e08e1);
__builtin_memmove((R+20),(R+16),4);
}
B4e08e3:{NFSU2_TR(0x4e08e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e08e6:{NFSU2_TR(0x4e08e6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e08eb:{NFSU2_TR(0x4e08eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e08ec:{NFSU2_TR(0x4e08ec);
__builtin_memmove((R+24),(R+4),4);
}
B4e08ee:{NFSU2_TR(0x4e08ee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e0a36;}}
}
B4e08f4:L4e08f4:{c.instructions+=1;NFSU2_TR(0x4e08f4);
if(r1(R+518)){{goto L4e0a07;}}
}
B4e08fa:L4e08fa:{c.instructions+=2;NFSU2_TR(0x4e08fa);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x51123592ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e08ff:{NFSU2_TR(0x4e08ff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e0985;}}
}
B4e0905:L4e0905:{c.instructions+=1;NFSU2_TR(0x4e0905);
if(r1(R+518)){{goto L4e0964;}}
}
B4e0907:L4e0907:{c.instructions+=2;NFSU2_TR(0x4e0907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e090c:{NFSU2_TR(0x4e090c);
if(r1(R+518)){{goto L4e0946;}}
}
B4e090e:L4e090e:{c.instructions+=2;NFSU2_TR(0x4e090e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0913:{NFSU2_TR(0x4e0913);
if(r1(R+518)){{goto L4e092f;}}
}
B4e0915:L4e0915:{c.instructions+=2;NFSU2_TR(0x4e0915);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x5073ef13ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5073ef13ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e091a:{NFSU2_TR(0x4e091a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0b17;}}
}
B4e0920:L4e0920:{c.instructions+=3;NFSU2_TR(0x4e0920);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0923:{NFSU2_TR(0x4e0923);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0925:{NFSU2_TR(0x4e0925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e092aull));
TAIL_STATIC(0x4cbda0u,4cb);
}
B4e092a:L4e092a:{c.instructions+=3;NFSU2_TR(0x4e092a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e092b:{NFSU2_TR(0x4e092b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e092c:{NFSU2_TR(0x4e092c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e092f:L4e092f:{c.instructions+=2;NFSU2_TR(0x4e092f);
__builtin_memmove((R+4),(R+24),4);
}
B4e0931:{NFSU2_TR(0x4e0931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0936ull));
TAIL_STATIC(0x496ce0u,496);
}
B4e0936:L4e0936:{c.instructions+=2;NFSU2_TR(0x4e0936);
__builtin_memmove((R+4),(R+24),4);
}
B4e0938:{NFSU2_TR(0x4e0938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e093dull));
TAIL_STATIC(0x4b0fe0u,4b0);
}
B4e093d:L4e093d:{c.instructions+=4;NFSU2_TR(0x4e093d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0941:{NFSU2_TR(0x4e0941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0942:{NFSU2_TR(0x4e0942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0943:{NFSU2_TR(0x4e0943);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0946:L4e0946:{c.instructions+=2;NFSU2_TR(0x4e0946);
__builtin_memmove((R+4),(R+24),4);
}
B4e0948:{NFSU2_TR(0x4e0948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e094dull));
TAIL_STATIC(0x4b0ef0u,4b0);
}
B4e094d:L4e094d:{c.instructions+=6;NFSU2_TR(0x4e094d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0950:{NFSU2_TR(0x4e0950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0953:{NFSU2_TR(0x4e0953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0954:{NFSU2_TR(0x4e0954);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0956:{NFSU2_TR(0x4e0956);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0957:{NFSU2_TR(0x4e0957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e095cull));
TAIL_STATIC(0x50d150u,50d);
}
B4e095c:L4e095c:{c.instructions+=4;NFSU2_TR(0x4e095c);
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
B4e095f:{NFSU2_TR(0x4e095f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0960:{NFSU2_TR(0x4e0960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0961:{NFSU2_TR(0x4e0961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0964:L4e0964:{c.instructions+=6;NFSU2_TR(0x4e0964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0967:{NFSU2_TR(0x4e0967);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e096a:{NFSU2_TR(0x4e096a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4e096d:{NFSU2_TR(0x4e096d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e096e:{NFSU2_TR(0x4e096e);
w4(R+4,u32(0x838590ull));
}
B4e0973:{NFSU2_TR(0x4e0973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0978ull));
TAIL_STATIC(0x529480u,529);
}
B4e0978:L4e0978:{c.instructions+=5;NFSU2_TR(0x4e0978);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e097c:{NFSU2_TR(0x4e097c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0980:{NFSU2_TR(0x4e0980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0981:{NFSU2_TR(0x4e0981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0982:{NFSU2_TR(0x4e0982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0985:L4e0985:{c.instructions+=2;NFSU2_TR(0x4e0985);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e098a:{NFSU2_TR(0x4e098a);
if(r1(R+518)){{goto L4e09f9;}}
}
B4e098c:L4e098c:{c.instructions+=2;NFSU2_TR(0x4e098c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0991:{NFSU2_TR(0x4e0991);
if(r1(R+518)){{goto L4e09de;}}
}
B4e0993:L4e0993:{c.instructions+=2;NFSU2_TR(0x4e0993);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e0998:{NFSU2_TR(0x4e0998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0b17;}}
}
B4e099e:L4e099e:{c.instructions+=4;NFSU2_TR(0x4e099e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e09a1:{NFSU2_TR(0x4e09a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e09a3:{NFSU2_TR(0x4e09a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09a4:{NFSU2_TR(0x4e09a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e09b7;}}
}
B4e09a6:L4e09a6:{c.instructions+=4;NFSU2_TR(0x4e09a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e09a9:{NFSU2_TR(0x4e09a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09aa:{NFSU2_TR(0x4e09aa);
__builtin_memmove((R+4),(R+24),4);
}
B4e09ac:{NFSU2_TR(0x4e09ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e09b1ull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4e09b1:L4e09b1:{c.instructions+=4;NFSU2_TR(0x4e09b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e09b2:{NFSU2_TR(0x4e09b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e09b3:{NFSU2_TR(0x4e09b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e09b4:{NFSU2_TR(0x4e09b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e09b7:L4e09b7:{c.instructions+=4;NFSU2_TR(0x4e09b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e09ba:{NFSU2_TR(0x4e09ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e09bd:{NFSU2_TR(0x4e09bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e09bf:{NFSU2_TR(0x4e09bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e09c4;}}
}
B4e09c1:L4e09c1:{c.instructions+=1;NFSU2_TR(0x4e09c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e09c4:L4e09c4:{c.instructions+=3;NFSU2_TR(0x4e09c4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09c6:{NFSU2_TR(0x4e09c6);
__builtin_memmove((R+28),(R+0),4);
}
B4e09c8:{NFSU2_TR(0x4e09c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e09cdull));
TAIL_STATIC(0x50d180u,50d);
}
B4e09cd:L4e09cd:{c.instructions+=4;NFSU2_TR(0x4e09cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e09d0:{NFSU2_TR(0x4e09d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09d1:{NFSU2_TR(0x4e09d1);
__builtin_memmove((R+4),(R+24),4);
}
B4e09d3:{NFSU2_TR(0x4e09d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e09d8ull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4e09d8:L4e09d8:{c.instructions+=4;NFSU2_TR(0x4e09d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e09d9:{NFSU2_TR(0x4e09d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e09da:{NFSU2_TR(0x4e09da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e09db:{NFSU2_TR(0x4e09db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e09de:L4e09de:{c.instructions+=6;NFSU2_TR(0x4e09de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e09e1:{NFSU2_TR(0x4e09e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e09e4:{NFSU2_TR(0x4e09e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09e5:{NFSU2_TR(0x4e09e5);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09e7:{NFSU2_TR(0x4e09e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09e8:{NFSU2_TR(0x4e09e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e09edull));
TAIL_STATIC(0x50d150u,50d);
}
B4e09ed:L4e09ed:{c.instructions+=5;NFSU2_TR(0x4e09ed);
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
B4e09f0:{NFSU2_TR(0x4e09f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e09f4:{NFSU2_TR(0x4e09f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e09f5:{NFSU2_TR(0x4e09f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e09f6:{NFSU2_TR(0x4e09f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e09f9:L4e09f9:{c.instructions+=3;NFSU2_TR(0x4e09f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e09fb:{NFSU2_TR(0x4e09fb);
__builtin_memmove((R+4),(R+24),4);
}
B4e09fd:{NFSU2_TR(0x4e09fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0a02ull));
TAIL_STATIC(0x4b1060u,4b1);
}
B4e0a02:L4e0a02:{c.instructions+=3;NFSU2_TR(0x4e0a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0a03:{NFSU2_TR(0x4e0a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0a04:{NFSU2_TR(0x4e0a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0a07:L4e0a07:{c.instructions+=2;NFSU2_TR(0x4e0a07);
w4(R+4,u32(0x838590ull));
}
B4e0a0c:{NFSU2_TR(0x4e0a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0a11ull));
TAIL_STATIC(0x4ae930u,4ae);
}
B4e0a11:L4e0a11:{c.instructions+=2;NFSU2_TR(0x4e0a11);
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
B4e0a13:{NFSU2_TR(0x4e0a13);
if(r1(R+518)){{goto L4e0b17;}}
}
B4e0a19:L4e0a19:{c.instructions+=4;NFSU2_TR(0x4e0a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0a1c:{NFSU2_TR(0x4e0a1c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B4e0a1f:{NFSU2_TR(0x4e0a1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0a21:{NFSU2_TR(0x4e0a21);
if(r1(R+518)){{goto L4e0a26;}}
}
B4e0a23:L4e0a23:{c.instructions+=1;NFSU2_TR(0x4e0a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0a26:L4e0a26:{c.instructions+=4;NFSU2_TR(0x4e0a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0a27:{NFSU2_TR(0x4e0a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0a2a:{NFSU2_TR(0x4e0a2a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0a2c:{NFSU2_TR(0x4e0a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0a31ull));
TAIL_STATIC(0x4b0850u,4b0);
}
B4e0a31:L4e0a31:{c.instructions+=3;NFSU2_TR(0x4e0a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0a32:{NFSU2_TR(0x4e0a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0a33:{NFSU2_TR(0x4e0a33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0a36:L4e0a36:{c.instructions+=2;NFSU2_TR(0x4e0a36);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0a3b:{NFSU2_TR(0x4e0a3b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e0ab0;}}
}
B4e0a3d:L4e0a3d:{c.instructions+=1;NFSU2_TR(0x4e0a3d);
if(r1(R+518)){{goto L4e0aa4;}}
}
B4e0a3f:L4e0a3f:{c.instructions+=2;NFSU2_TR(0x4e0a3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0a44:{NFSU2_TR(0x4e0a44);
if(r1(R+518)){{goto L4e0a8b;}}
}
B4e0a46:L4e0a46:{c.instructions+=2;NFSU2_TR(0x4e0a46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0a4b:{NFSU2_TR(0x4e0a4b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0936u);}goto L4e0936;}}
}
B4e0a51:L4e0a51:{c.instructions+=2;NFSU2_TR(0x4e0a51);
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
B4e0a56:{NFSU2_TR(0x4e0a56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0b17;}}
}
B4e0a5c:L4e0a5c:{c.instructions+=2;NFSU2_TR(0x4e0a5c);
w4(R+4,u32(0x838590ull));
}
B4e0a61:{NFSU2_TR(0x4e0a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0a66ull));
TAIL_STATIC(0x4ae930u,4ae);
}
B4e0a66:L4e0a66:{c.instructions+=2;NFSU2_TR(0x4e0a66);
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
B4e0a68:{NFSU2_TR(0x4e0a68);
if(r1(R+518)){{goto L4e0b17;}}
}
B4e0a6e:L4e0a6e:{c.instructions+=4;NFSU2_TR(0x4e0a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0a71:{NFSU2_TR(0x4e0a71);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B4e0a74:{NFSU2_TR(0x4e0a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0a76:{NFSU2_TR(0x4e0a76);
if(r1(R+518)){{goto L4e0a7b;}}
}
B4e0a78:L4e0a78:{c.instructions+=1;NFSU2_TR(0x4e0a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0a7b:L4e0a7b:{c.instructions+=4;NFSU2_TR(0x4e0a7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0a7c:{NFSU2_TR(0x4e0a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0a7f:{NFSU2_TR(0x4e0a7f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0a81:{NFSU2_TR(0x4e0a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0a86ull));
TAIL_STATIC(0x4b0850u,4b0);
}
B4e0a86:L4e0a86:{c.instructions+=3;NFSU2_TR(0x4e0a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0a87:{NFSU2_TR(0x4e0a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0a88:{NFSU2_TR(0x4e0a88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0a8b:L4e0a8b:{c.instructions+=3;NFSU2_TR(0x4e0a8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e0a8e:{NFSU2_TR(0x4e0a8e);
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
B4e0a90:{NFSU2_TR(0x4e0a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0b17;}}
}
B4e0a96:L4e0a96:{c.instructions+=3;NFSU2_TR(0x4e0a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0a99:{NFSU2_TR(0x4e0a99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0a9a:{NFSU2_TR(0x4e0a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0a9full));
TAIL_STATIC(0x4cbee0u,4cb);
}
B4e0a9f:L4e0a9f:{c.instructions+=3;NFSU2_TR(0x4e0a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0aa0:{NFSU2_TR(0x4e0aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0aa1:{NFSU2_TR(0x4e0aa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0aa4:L4e0aa4:{c.instructions+=2;NFSU2_TR(0x4e0aa4);
__builtin_memmove((R+4),(R+24),4);
}
B4e0aa6:{NFSU2_TR(0x4e0aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0aabull));
TAIL_STATIC(0x4b10c0u,4b1);
}
B4e0aab:L4e0aab:{c.instructions+=1;NFSU2_TR(0x4e0aab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e094du);}goto L4e094d;}
}
B4e0ab0:L4e0ab0:{c.instructions+=2;NFSU2_TR(0x4e0ab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0ab5:{NFSU2_TR(0x4e0ab5);
if(r1(R+518)){{goto L4e0acd;}}
}
B4e0ab7:L4e0ab7:{c.instructions+=2;NFSU2_TR(0x4e0ab7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e0abc:{NFSU2_TR(0x4e0abc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0b17;}}
}
B4e0abe:L4e0abe:{c.instructions+=3;NFSU2_TR(0x4e0abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0ac1:{NFSU2_TR(0x4e0ac1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ac3:{NFSU2_TR(0x4e0ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0ac8ull));
TAIL_STATIC(0x4cbda0u,4cb);
}
B4e0ac8:L4e0ac8:{c.instructions+=3;NFSU2_TR(0x4e0ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0ac9:{NFSU2_TR(0x4e0ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0aca:{NFSU2_TR(0x4e0aca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0acd:L4e0acd:{c.instructions+=3;NFSU2_TR(0x4e0acd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e0ad0:{NFSU2_TR(0x4e0ad0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e0ad2:{NFSU2_TR(0x4e0ad2);
if(r1(R+518)){{goto L4e0b0f;}}
}
B4e0ad4:L4e0ad4:{c.instructions+=3;NFSU2_TR(0x4e0ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0ad7:{NFSU2_TR(0x4e0ad7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ad8:{NFSU2_TR(0x4e0ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0addull));
TAIL_STATIC(0x5379a0u,537);
}
B4e0add:L4e0add:{c.instructions+=1;NFSU2_TR(0x4e0add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0ae2ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e0ae2:L4e0ae2:{c.instructions+=2;NFSU2_TR(0x4e0ae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ae3:{NFSU2_TR(0x4e0ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0ae8ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e0ae8:L4e0ae8:{c.instructions+=3;NFSU2_TR(0x4e0ae8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e0aeb:{NFSU2_TR(0x4e0aeb);
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
B4e0aed:{NFSU2_TR(0x4e0aed);
if(r1(R+518)){{goto L4e0afd;}}
}
B4e0aef:L4e0aef:{c.instructions+=1;NFSU2_TR(0x4e0aef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0af4ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e0af4:L4e0af4:{c.instructions+=2;NFSU2_TR(0x4e0af4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0af5:{NFSU2_TR(0x4e0af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0afaull));
TAIL_STATIC(0x5379a0u,537);
}
B4e0afa:L4e0afa:{c.instructions+=1;NFSU2_TR(0x4e0afa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0afd:L4e0afd:{c.instructions+=3;NFSU2_TR(0x4e0afd);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4e0b03:{NFSU2_TR(0x4e0b03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b05:{NFSU2_TR(0x4e0b05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0b0aull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4e0b0a:L4e0b0a:{c.instructions+=3;NFSU2_TR(0x4e0b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0b0b:{NFSU2_TR(0x4e0b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0b0c:{NFSU2_TR(0x4e0b0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0b0f:L4e0b0f:{c.instructions+=2;NFSU2_TR(0x4e0b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0b12:{NFSU2_TR(0x4e0b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0b17ull));
TAIL_STATIC(0x4b09e0u,4b0);
}
B4e0b17:L4e0b17:{c.instructions+=3;NFSU2_TR(0x4e0b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0b18:{NFSU2_TR(0x4e0b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0b19:{NFSU2_TR(0x4e0b19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0b20:L4e0b20:{c.instructions+=6;NFSU2_TR(0x4e0b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b21:{NFSU2_TR(0x4e0b21);
__builtin_memmove((R+24),(R+4),4);
}
B4e0b23:{NFSU2_TR(0x4e0b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0b26:{NFSU2_TR(0x4e0b26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0b28:{NFSU2_TR(0x4e0b28);
u8 U[4];
w4(U+0,u32(0x790efcull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e0b2e:{NFSU2_TR(0x4e0b2e);
if(r1(R+518)){{goto L4e0b39;}}
}
B4e0b30:L4e0b30:{c.instructions+=2;NFSU2_TR(0x4e0b30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b31:{NFSU2_TR(0x4e0b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0b36ull));
TAIL_STATIC(0x575630u,575);
}
B4e0b36:L4e0b36:{c.instructions+=1;NFSU2_TR(0x4e0b36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0b39:L4e0b39:{c.instructions+=2;NFSU2_TR(0x4e0b39);
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
B4e0b3e:{NFSU2_TR(0x4e0b3e);
if(r1(R+518)){{goto L4e0b49;}}
}
B4e0b40:L4e0b40:{c.instructions+=2;NFSU2_TR(0x4e0b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b41:{NFSU2_TR(0x4e0b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0b46ull));
TAIL_STATIC(0x575630u,575);
}
B4e0b46:L4e0b46:{c.instructions+=1;NFSU2_TR(0x4e0b46);
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
B4e0b49:L4e0b49:{c.instructions+=3;NFSU2_TR(0x4e0b49);
__builtin_memmove((R+0),(R+24),4);
}
B4e0b4b:{NFSU2_TR(0x4e0b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0b4c:{NFSU2_TR(0x4e0b4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0b50:L4e0b50:{c.instructions+=15;NFSU2_TR(0x4e0b50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b52:{NFSU2_TR(0x4e0b52);
u8 U[4];
w4(U+0,u32(0x775a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b57:{NFSU2_TR(0x4e0b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0b5d:{NFSU2_TR(0x4e0b5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b5e:{NFSU2_TR(0x4e0b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0b65:{NFSU2_TR(0x4e0b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4e0b68:{NFSU2_TR(0x4e0b68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b69:{NFSU2_TR(0x4e0b69);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b6a:{NFSU2_TR(0x4e0b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b6b:{NFSU2_TR(0x4e0b6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b6c:{NFSU2_TR(0x4e0b6c);
__builtin_memmove((R+28),(R+4),4);
}
B4e0b6e:{NFSU2_TR(0x4e0b6e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e0b70:{NFSU2_TR(0x4e0b70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0b71:{NFSU2_TR(0x4e0b71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0b75:{NFSU2_TR(0x4e0b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0b7aull));
TAIL_STATIC(0x4b1200u,4b1);
}
B4e0b7a:L4e0b7a:{c.instructions+=12;NFSU2_TR(0x4e0b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0b7e:{NFSU2_TR(0x4e0b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4e0b81:{NFSU2_TR(0x4e0b81);
u8 U[4];
w4(U+0,u32(0x797600ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e0b87:{NFSU2_TR(0x4e0b87);
{u32 ea_=u32((r4(R+24)*4u)+u32(8340364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e0b8e:{NFSU2_TR(0x4e0b8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4388ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4e0b95:{NFSU2_TR(0x4e0b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4394ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B4e0b9c:{NFSU2_TR(0x4e0b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4388ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4e0ba3:{NFSU2_TR(0x4e0ba3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e0ba7:{NFSU2_TR(0x4e0ba7);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ba9:{NFSU2_TR(0x4e0ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bad:{NFSU2_TR(0x4e0bad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bb1:{NFSU2_TR(0x4e0bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0bb6ull));
TAIL_STATIC(0x575620u,575);
}
B4e0bb6:L4e0bb6:{c.instructions+=3;NFSU2_TR(0x4e0bb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0bb9:{NFSU2_TR(0x4e0bb9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0bbb:{NFSU2_TR(0x4e0bbb);
if(r1(R+518)){{goto L4e0beb;}}
}
B4e0bbd:L4e0bbd:{c.instructions+=15;NFSU2_TR(0x4e0bbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e0bc0:{NFSU2_TR(0x4e0bc0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e0bc3:{NFSU2_TR(0x4e0bc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0bc7:{NFSU2_TR(0x4e0bc7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e0bca:{NFSU2_TR(0x4e0bca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0bcd:{NFSU2_TR(0x4e0bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0bd1:{NFSU2_TR(0x4e0bd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0bd4:{NFSU2_TR(0x4e0bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bd7:{NFSU2_TR(0x4e0bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bda:{NFSU2_TR(0x4e0bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bdd:{NFSU2_TR(0x4e0bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0be0:{NFSU2_TR(0x4e0be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0be3:{NFSU2_TR(0x4e0be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0be6:{NFSU2_TR(0x4e0be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0be9:{NFSU2_TR(0x4e0be9);
{goto L4e0bed;}
}
B4e0beb:L4e0beb:{c.instructions+=1;NFSU2_TR(0x4e0beb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e0bed:L4e0bed:{c.instructions+=11;NFSU2_TR(0x4e0bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0bf1:{NFSU2_TR(0x4e0bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bf4:{NFSU2_TR(0x4e0bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0bf7:{NFSU2_TR(0x4e0bf7);
__builtin_memmove((R+0),(R+28),4);
}
B4e0bf9:{NFSU2_TR(0x4e0bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0bfa:{NFSU2_TR(0x4e0bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0bfb:{NFSU2_TR(0x4e0bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0bfc:{NFSU2_TR(0x4e0bfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0bfd:{NFSU2_TR(0x4e0bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0c04:{NFSU2_TR(0x4e0c04);
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
B4e0c07:{NFSU2_TR(0x4e0c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0c10:L4e0c10:{c.instructions+=3;NFSU2_TR(0x4e0c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c11:{NFSU2_TR(0x4e0c11);
__builtin_memmove((R+24),(R+4),4);
}
B4e0c13:{NFSU2_TR(0x4e0c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0c18ull));
TAIL_STATIC(0x4cc0c0u,4cc);
}
B4e0c18:L4e0c18:{c.instructions+=2;NFSU2_TR(0x4e0c18);
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
B4e0c1d:{NFSU2_TR(0x4e0c1d);
if(r1(R+518)){{goto L4e0c28;}}
}
B4e0c1f:L4e0c1f:{c.instructions+=2;NFSU2_TR(0x4e0c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c20:{NFSU2_TR(0x4e0c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0c25ull));
TAIL_STATIC(0x575630u,575);
}
B4e0c25:L4e0c25:{c.instructions+=1;NFSU2_TR(0x4e0c25);
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
B4e0c28:L4e0c28:{c.instructions+=3;NFSU2_TR(0x4e0c28);
__builtin_memmove((R+0),(R+24),4);
}
B4e0c2a:{NFSU2_TR(0x4e0c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0c2b:{NFSU2_TR(0x4e0c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0c30:L4e0c30:{c.instructions+=11;NFSU2_TR(0x4e0c30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c32:{NFSU2_TR(0x4e0c32);
u8 U[4];
w4(U+0,u32(0x775a64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c37:{NFSU2_TR(0x4e0c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0c3d:{NFSU2_TR(0x4e0c3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c3e:{NFSU2_TR(0x4e0c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0c45:{NFSU2_TR(0x4e0c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c46:{NFSU2_TR(0x4e0c46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c47:{NFSU2_TR(0x4e0c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c48:{NFSU2_TR(0x4e0c48);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c4a:{NFSU2_TR(0x4e0c4a);
__builtin_memmove((R+28),(R+4),4);
}
B4e0c4c:{NFSU2_TR(0x4e0c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0c51ull));
TAIL_STATIC(0x575620u,575);
}
B4e0c51:L4e0c51:{c.instructions+=5;NFSU2_TR(0x4e0c51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0c54:{NFSU2_TR(0x4e0c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0c58:{NFSU2_TR(0x4e0c58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0c5a:{NFSU2_TR(0x4e0c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0c62:{NFSU2_TR(0x4e0c62);
if(r1(R+518)){{goto L4e0c77;}}
}
B4e0c64:L4e0c64:{c.instructions+=4;NFSU2_TR(0x4e0c64);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4e0c6b:{NFSU2_TR(0x4e0c6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c6c:{NFSU2_TR(0x4e0c6c);
__builtin_memmove((R+4),(R+0),4);
}
B4e0c6e:{NFSU2_TR(0x4e0c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0c73ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0b50u);}goto L4e0b50;}
}
B4e0c73:L4e0c73:{c.instructions+=2;NFSU2_TR(0x4e0c73);
__builtin_memmove((R+24),(R+0),4);
}
B4e0c75:{NFSU2_TR(0x4e0c75);
{goto L4e0c79;}
}
B4e0c77:L4e0c77:{c.instructions+=1;NFSU2_TR(0x4e0c77);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0c79:L4e0c79:{c.instructions+=5;NFSU2_TR(0x4e0c79);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4e0c80:{NFSU2_TR(0x4e0c80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c81:{NFSU2_TR(0x4e0c81);
u8 U[4];
w4(U+0,u32(0x797618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c86:{NFSU2_TR(0x4e0c86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0c8e:{NFSU2_TR(0x4e0c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0c93ull));
TAIL_STATIC(0x50b990u,50b);
}
B4e0c93:L4e0c93:{c.instructions+=3;NFSU2_TR(0x4e0c93);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0c95:{NFSU2_TR(0x4e0c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0c98:{NFSU2_TR(0x4e0c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0c9dull));
TAIL_STATIC(0x575620u,575);
}
B4e0c9d:L4e0c9d:{c.instructions+=3;NFSU2_TR(0x4e0c9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e0ca0:{NFSU2_TR(0x4e0ca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0ca2:{NFSU2_TR(0x4e0ca2);
if(r1(R+518)){{goto L4e0cb2;}}
}
B4e0ca4:L4e0ca4:{c.instructions+=4;NFSU2_TR(0x4e0ca4);
u8 U[4];
w4(U+0,u32(0x790f04ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e0caa:{NFSU2_TR(0x4e0caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0cad:{NFSU2_TR(0x4e0cad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e0cb0:{NFSU2_TR(0x4e0cb0);
{goto L4e0cb4;}
}
B4e0cb2:L4e0cb2:{c.instructions+=1;NFSU2_TR(0x4e0cb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e0cb4:L4e0cb4:{c.instructions+=12;NFSU2_TR(0x4e0cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0cb8:{NFSU2_TR(0x4e0cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0cbb:{NFSU2_TR(0x4e0cbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e0cbd:{NFSU2_TR(0x4e0cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0cc0:{NFSU2_TR(0x4e0cc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e0cc2:{NFSU2_TR(0x4e0cc2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0cc6:{NFSU2_TR(0x4e0cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0cc7:{NFSU2_TR(0x4e0cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0cca:{NFSU2_TR(0x4e0cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0ccb:{NFSU2_TR(0x4e0ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0cd2:{NFSU2_TR(0x4e0cd2);
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
B4e0cd5:{NFSU2_TR(0x4e0cd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0ce0:L4e0ce0:{c.instructions+=15;NFSU2_TR(0x4e0ce0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ce1:{NFSU2_TR(0x4e0ce1);
__builtin_memmove((R+20),(R+16),4);
}
B4e0ce3:{NFSU2_TR(0x4e0ce3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4e0ce6:{NFSU2_TR(0x4e0ce6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ce8:{NFSU2_TR(0x4e0ce8);
u8 U[4];
w4(U+0,u32(0x775a78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ced:{NFSU2_TR(0x4e0ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0cf3:{NFSU2_TR(0x4e0cf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0cf4:{NFSU2_TR(0x4e0cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0cfb:{NFSU2_TR(0x4e0cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4e0cfe:{NFSU2_TR(0x4e0cfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0cff:{NFSU2_TR(0x4e0cff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d00:{NFSU2_TR(0x4e0d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d01:{NFSU2_TR(0x4e0d01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d02:{NFSU2_TR(0x4e0d02);
__builtin_memmove((R+28),(R+4),4);
}
B4e0d04:{NFSU2_TR(0x4e0d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0d09ull));
TAIL_STATIC(0x4b1520u,4b1);
}
B4e0d09:L4e0d09:{c.instructions+=10;NFSU2_TR(0x4e0d09);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e0d0d:{NFSU2_TR(0x4e0d0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0d11:{NFSU2_TR(0x4e0d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d15:{NFSU2_TR(0x4e0d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d19:{NFSU2_TR(0x4e0d19);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e0d1d:{NFSU2_TR(0x4e0d1d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e0d1f:{NFSU2_TR(0x4e0d1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d20:{NFSU2_TR(0x4e0d20);
__builtin_memmove((R+4),(R+28),4);
}
B4e0d22:{NFSU2_TR(0x4e0d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d26:{NFSU2_TR(0x4e0d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0d2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0c30u);}goto L4e0c30;}
}
B4e0d2b:L4e0d2b:{c.instructions+=4;NFSU2_TR(0x4e0d2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e0d2f:{NFSU2_TR(0x4e0d2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d30:{NFSU2_TR(0x4e0d30);
__builtin_memmove((R+4),(R+28),4);
}
B4e0d32:{NFSU2_TR(0x4e0d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0d37ull));
TAIL_STATIC(0x4b1360u,4b1);
}
B4e0d37:L4e0d37:{c.instructions+=3;NFSU2_TR(0x4e0d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0d3b:{NFSU2_TR(0x4e0d3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0d3d:{NFSU2_TR(0x4e0d3d);
if(r1(R+518)){{goto L4e0d44;}}
}
B4e0d3f:L4e0d3f:{c.instructions+=2;NFSU2_TR(0x4e0d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0d42:{NFSU2_TR(0x4e0d42);
{goto L4e0d46;}
}
B4e0d44:L4e0d44:{c.instructions+=1;NFSU2_TR(0x4e0d44);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0d46:L4e0d46:{c.instructions+=2;NFSU2_TR(0x4e0d46);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0d4a:{NFSU2_TR(0x4e0d4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0d4full));
TAIL_STATIC(0x431780u,431);
}
B4e0d4f:L4e0d4f:{c.instructions+=3;NFSU2_TR(0x4e0d4f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0d51:{NFSU2_TR(0x4e0d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d55:{NFSU2_TR(0x4e0d55);
if(r1(R+518)){{goto L4e0dd5;}}
}
B4e0d57:L4e0d57:{c.instructions+=2;NFSU2_TR(0x4e0d57);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d59:{NFSU2_TR(0x4e0d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0d5eull));
TAIL_STATIC(0x575620u,575);
}
B4e0d5e:L4e0d5e:{c.instructions+=3;NFSU2_TR(0x4e0d5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e0d61:{NFSU2_TR(0x4e0d61);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0d63:{NFSU2_TR(0x4e0d63);
if(r1(R+518)){{goto L4e0d8c;}}
}
B4e0d65:L4e0d65:{c.instructions+=12;NFSU2_TR(0x4e0d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0d68:{NFSU2_TR(0x4e0d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d6b:{NFSU2_TR(0x4e0d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d6e:{NFSU2_TR(0x4e0d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d71:{NFSU2_TR(0x4e0d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d74:{NFSU2_TR(0x4e0d74);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0d77:{NFSU2_TR(0x4e0d77);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e0d7b:{NFSU2_TR(0x4e0d7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0d7e:{NFSU2_TR(0x4e0d7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0d81:{NFSU2_TR(0x4e0d81);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e0d87:{NFSU2_TR(0x4e0d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0d8a:{NFSU2_TR(0x4e0d8a);
{goto L4e0d8e;}
}
B4e0d8c:L4e0d8c:{c.instructions+=1;NFSU2_TR(0x4e0d8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e0d8e:L4e0d8e:{c.instructions+=5;NFSU2_TR(0x4e0d8e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d90:{NFSU2_TR(0x4e0d90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d92:{NFSU2_TR(0x4e0d92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0d93:{NFSU2_TR(0x4e0d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0d99:{NFSU2_TR(0x4e0d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0d9eull));
TAIL_STATIC(0x52ed80u,52e);
}
B4e0d9e:L4e0d9e:{c.instructions+=3;NFSU2_TR(0x4e0d9e);
u8 U[4];
w4(U+0,u32(0x797634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0da3:{NFSU2_TR(0x4e0da3);
__builtin_memmove((R+20),(R+0),4);
}
B4e0da5:{NFSU2_TR(0x4e0da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0daaull));
TAIL_STATIC(0x505450u,505);
}
B4e0daa:L4e0daa:{c.instructions+=3;NFSU2_TR(0x4e0daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0dab:{NFSU2_TR(0x4e0dab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0dac:{NFSU2_TR(0x4e0dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0db1ull));
TAIL_STATIC(0x50c990u,50c);
}
B4e0db1:L4e0db1:{c.instructions+=7;NFSU2_TR(0x4e0db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0db7:{NFSU2_TR(0x4e0db7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e0dba:{NFSU2_TR(0x4e0dba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4e0dbb:{NFSU2_TR(0x4e0dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0dc1:{NFSU2_TR(0x4e0dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e0dc4:{NFSU2_TR(0x4e0dc4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0dc6:{NFSU2_TR(0x4e0dc6);
if(r1(R+518)){{goto L4e0dcd;}}
}
B4e0dc8:L4e0dc8:{c.instructions+=2;NFSU2_TR(0x4e0dc8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4e0dcb:{NFSU2_TR(0x4e0dcb);
{goto L4e0dcf;}
}
B4e0dcd:L4e0dcd:{c.instructions+=1;NFSU2_TR(0x4e0dcd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e0dcf:L4e0dcf:{c.instructions+=2;NFSU2_TR(0x4e0dcf);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e0dd3:{NFSU2_TR(0x4e0dd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0d57u);}goto L4e0d57;}}
}
B4e0dd5:L4e0dd5:{c.instructions+=3;NFSU2_TR(0x4e0dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0ddb:{NFSU2_TR(0x4e0ddb);
__builtin_memmove((R+4),(R+24),4);
}
B4e0ddd:{NFSU2_TR(0x4e0ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0de2ull));
TAIL_STATIC(0x538740u,538);
}
B4e0de2:L4e0de2:{c.instructions+=3;NFSU2_TR(0x4e0de2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0de4:{NFSU2_TR(0x4e0de4);
__builtin_memmove((R+4),(R+24),4);
}
B4e0de6:{NFSU2_TR(0x4e0de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0debull));
TAIL_STATIC(0x52eb90u,52e);
}
B4e0deb:L4e0deb:{c.instructions+=2;NFSU2_TR(0x4e0deb);
__builtin_memmove((R+4),(R+24),4);
}
B4e0ded:{NFSU2_TR(0x4e0ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0df2ull));
TAIL_STATIC(0x538760u,538);
}
B4e0df2:L4e0df2:{c.instructions+=2;NFSU2_TR(0x4e0df2);
__builtin_memmove((R+4),(R+28),4);
}
B4e0df4:{NFSU2_TR(0x4e0df4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0df9ull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4e0df9:L4e0df9:{c.instructions+=5;NFSU2_TR(0x4e0df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0dfd:{NFSU2_TR(0x4e0dfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0e01:{NFSU2_TR(0x4e0e01);
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
B4e0e03:{NFSU2_TR(0x4e0e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e0e0b:{NFSU2_TR(0x4e0e0b);
if(r1(R+518)){{goto L4e0e35;}}
}
B4e0e0d:L4e0e0d:{c.instructions+=1;NFSU2_TR(0x4e0e0d);
__builtin_memmove((R+4),(R+4),4);
}
B4e0e10:L4e0e10:{c.instructions+=8;NFSU2_TR(0x4e0e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e0e12:{NFSU2_TR(0x4e0e12);
__builtin_memmove((R+8),(R+0),4);
}
B4e0e14:{NFSU2_TR(0x4e0e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0e17:{NFSU2_TR(0x4e0e17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e0e19:{NFSU2_TR(0x4e0e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0e1c:{NFSU2_TR(0x4e0e1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0e1f:{NFSU2_TR(0x4e0e1f);
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
B4e0e21:{NFSU2_TR(0x4e0e21);
if(r1(R+518)){{goto L4e0e29;}}
}
B4e0e23:L4e0e23:{c.instructions+=3;NFSU2_TR(0x4e0e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e0e25:{NFSU2_TR(0x4e0e25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e27:{NFSU2_TR(0x4e0e27);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0e29ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4e0e29:L4e0e29:{c.instructions+=4;NFSU2_TR(0x4e0e29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0e2d:{NFSU2_TR(0x4e0e2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e0e31:{NFSU2_TR(0x4e0e31);
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
B4e0e33:{NFSU2_TR(0x4e0e33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0e10u);}goto L4e0e10;}}
}
B4e0e35:L4e0e35:{c.instructions+=9;NFSU2_TR(0x4e0e35);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0e39:{NFSU2_TR(0x4e0e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0e3a:{NFSU2_TR(0x4e0e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0e41:{NFSU2_TR(0x4e0e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0e42:{NFSU2_TR(0x4e0e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0e43:{NFSU2_TR(0x4e0e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0e44:{NFSU2_TR(0x4e0e44);
__builtin_memmove((R+16),(R+20),4);
}
B4e0e46:{NFSU2_TR(0x4e0e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e0e47:{NFSU2_TR(0x4e0e47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0e50:L4e0e50:{c.instructions+=10;NFSU2_TR(0x4e0e50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e51:{NFSU2_TR(0x4e0e51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e52:{NFSU2_TR(0x4e0e52);
__builtin_memmove((R+24),(R+4),4);
}
B4e0e54:{NFSU2_TR(0x4e0e54);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e0e58:{NFSU2_TR(0x4e0e58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e0e5a:{NFSU2_TR(0x4e0e5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e0e60:{NFSU2_TR(0x4e0e60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e61:{NFSU2_TR(0x4e0e61);
w4(R+12,u32(r1(R+0)));
}
B4e0e64:{NFSU2_TR(0x4e0e64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0e6a:{NFSU2_TR(0x4e0e6a);
if(r1(R+518)){{goto L4e0e9c;}}
}
B4e0e6c:L4e0e6c:{c.instructions+=3;NFSU2_TR(0x4e0e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0e6f:{NFSU2_TR(0x4e0e6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0e71:{NFSU2_TR(0x4e0e71);
if(r1(R+518)){{goto L4e0e78;}}
}
B4e0e73:L4e0e73:{c.instructions+=2;NFSU2_TR(0x4e0e73);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B4e0e76:{NFSU2_TR(0x4e0e76);
{goto L4e0e7a;}
}
B4e0e78:L4e0e78:{c.instructions+=1;NFSU2_TR(0x4e0e78);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e0e7a:L4e0e7a:{c.instructions+=2;NFSU2_TR(0x4e0e7a);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
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
B4e0e7d:{NFSU2_TR(0x4e0e7d);
if(r1(R+518)){{goto L4e0f5a;}}
}
B4e0e83:L4e0e83:{c.instructions+=4;NFSU2_TR(0x4e0e83);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4e0e85:{NFSU2_TR(0x4e0e85);
__builtin_memmove((R+4),(R+28),4);
}
B4e0e87:{NFSU2_TR(0x4e0e87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0e8d:{NFSU2_TR(0x4e0e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0e92ull));
TAIL_STATIC(0x54eb40u,54e);
}
B4e0e92:L4e0e92:{c.instructions+=5;NFSU2_TR(0x4e0e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0e95:{NFSU2_TR(0x4e0e95);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e97:{NFSU2_TR(0x4e0e97);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e99:{NFSU2_TR(0x4e0e99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0e9a:{NFSU2_TR(0x4e0e9a);
{goto L4e0eca;}
}
B4e0e9c:L4e0e9c:{c.instructions+=3;NFSU2_TR(0x4e0e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0e9f:{NFSU2_TR(0x4e0e9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0ea1:{NFSU2_TR(0x4e0ea1);
if(r1(R+518)){{goto L4e0ea8;}}
}
B4e0ea3:L4e0ea3:{c.instructions+=2;NFSU2_TR(0x4e0ea3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B4e0ea6:{NFSU2_TR(0x4e0ea6);
{goto L4e0eaa;}
}
B4e0ea8:L4e0ea8:{c.instructions+=1;NFSU2_TR(0x4e0ea8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e0eaa:L4e0eaa:{c.instructions+=2;NFSU2_TR(0x4e0eaa);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
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
B4e0ead:{NFSU2_TR(0x4e0ead);
if(r1(R+518)){{goto L4e0f5a;}}
}
B4e0eb3:L4e0eb3:{c.instructions+=4;NFSU2_TR(0x4e0eb3);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4e0eb5:{NFSU2_TR(0x4e0eb5);
__builtin_memmove((R+4),(R+28),4);
}
B4e0eb7:{NFSU2_TR(0x4e0eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e0ebd:{NFSU2_TR(0x4e0ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0ec2ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4e0ec2:L4e0ec2:{c.instructions+=4;NFSU2_TR(0x4e0ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0ec5:{NFSU2_TR(0x4e0ec5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ec7:{NFSU2_TR(0x4e0ec7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ec9:{NFSU2_TR(0x4e0ec9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0eca:L4e0eca:{c.instructions+=1;NFSU2_TR(0x4e0eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0ecfull));
TAIL_STATIC(0x50d150u,50d);
}
B4e0ecf:L4e0ecf:{c.instructions+=4;NFSU2_TR(0x4e0ecf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4e0ed6:{NFSU2_TR(0x4e0ed6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e0ed9:{NFSU2_TR(0x4e0ed9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e0edb:{NFSU2_TR(0x4e0edb);
if(r1(R+518)){{goto L4e0f09;}}
}
B4e0edd:L4e0edd:{c.instructions+=4;NFSU2_TR(0x4e0edd);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e0ee2:{NFSU2_TR(0x4e0ee2);
__builtin_memmove((R+4),(R+24),4);
}
B4e0ee4:{NFSU2_TR(0x4e0ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e0eea:{NFSU2_TR(0x4e0eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0eefull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e0ce0u);}goto L4e0ce0;}
}
B4e0eef:L4e0eef:{c.instructions+=3;NFSU2_TR(0x4e0eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0ef5:{NFSU2_TR(0x4e0ef5);
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
B4e0ef7:{NFSU2_TR(0x4e0ef7);
if(r1(R+518)){{goto L4e0f09;}}
}
B4e0ef9:L4e0ef9:{c.instructions+=7;NFSU2_TR(0x4e0ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0efc:{NFSU2_TR(0x4e0efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e0efe:{NFSU2_TR(0x4e0efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e0f01:{NFSU2_TR(0x4e0f01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f02:{NFSU2_TR(0x4e0f02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e0f05:{NFSU2_TR(0x4e0f05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f06:{NFSU2_TR(0x4e0f06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0f09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e0f09:L4e0f09:{c.instructions+=3;NFSU2_TR(0x4e0f09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f0b:{NFSU2_TR(0x4e0f0b);
__builtin_memmove((R+4),(R+28),4);
}
B4e0f0d:{NFSU2_TR(0x4e0f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0f12ull));
TAIL_STATIC(0x538500u,538);
}
B4e0f12:L4e0f12:{c.instructions+=2;NFSU2_TR(0x4e0f12);
__builtin_memmove((R+4),(R+24),4);
}
B4e0f14:{NFSU2_TR(0x4e0f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0f19ull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4e0f19:L4e0f19:{c.instructions+=5;NFSU2_TR(0x4e0f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0f1f:{NFSU2_TR(0x4e0f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0f22:{NFSU2_TR(0x4e0f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0f25:{NFSU2_TR(0x4e0f25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0f27:{NFSU2_TR(0x4e0f27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e0f42;}}
}
B4e0f29:L4e0f29:{c.instructions+=6;NFSU2_TR(0x4e0f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0f2c:{NFSU2_TR(0x4e0f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0f2f:{NFSU2_TR(0x4e0f2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f30:{NFSU2_TR(0x4e0f30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f31:{NFSU2_TR(0x4e0f31);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e0f37:{NFSU2_TR(0x4e0f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0f3cull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e0f3c:L4e0f3c:{c.instructions+=4;NFSU2_TR(0x4e0f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0f3d:{NFSU2_TR(0x4e0f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0f3e:{NFSU2_TR(0x4e0f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0f3f:{NFSU2_TR(0x4e0f3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0f42:L4e0f42:{c.instructions+=7;NFSU2_TR(0x4e0f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0f45:{NFSU2_TR(0x4e0f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0f48:{NFSU2_TR(0x4e0f48);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e0f4e:{NFSU2_TR(0x4e0f4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f4f:{NFSU2_TR(0x4e0f4f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000000ull))));
}
B4e0f54:{NFSU2_TR(0x4e0f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f55:{NFSU2_TR(0x4e0f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0f5aull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e0f5a:L4e0f5a:{c.instructions+=4;NFSU2_TR(0x4e0f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0f5b:{NFSU2_TR(0x4e0f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e0f5c:{NFSU2_TR(0x4e0f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e0f5d:{NFSU2_TR(0x4e0f5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e0f60:L4e0f60:{c.instructions+=8;NFSU2_TR(0x4e0f60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f61:{NFSU2_TR(0x4e0f61);
__builtin_memmove((R+20),(R+16),4);
}
B4e0f63:{NFSU2_TR(0x4e0f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0f66:{NFSU2_TR(0x4e0f66);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0f6b:{NFSU2_TR(0x4e0f6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f6c:{NFSU2_TR(0x4e0f6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0f6d:{NFSU2_TR(0x4e0f6d);
__builtin_memmove((R+24),(R+4),4);
}
B4e0f6f:{NFSU2_TR(0x4e0f6f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e10e7u,4e1);}
}
B4e0f75:L4e0f75:{c.instructions+=1;NFSU2_TR(0x4e0f75);
if(r1(R+518)){TAIL_STATIC(0x4e10d8u,4e1);}
}
B4e0f7b:L4e0f7b:{c.instructions+=2;NFSU2_TR(0x4e0f7b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x51123592ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0f80:{NFSU2_TR(0x4e0f80);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e107eu,4e1);}
}
B4e0f86:L4e0f86:{c.instructions+=1;NFSU2_TR(0x4e0f86);
if(r1(R+518)){TAIL_STATIC(0x4e104eu,4e1);}
}
B4e0f8c:L4e0f8c:{c.instructions+=2;NFSU2_TR(0x4e0f8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e0f91:{NFSU2_TR(0x4e0f91);
if(r1(R+518)){{goto L4e0fa9;}}
}
B4e0f93:L4e0f93:{c.instructions+=2;NFSU2_TR(0x4e0f93);
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
B4e0f98:{NFSU2_TR(0x4e0f98);
if(r1(R+518)){TAIL_STATIC(0x4e1041u,4e1);}
}
B4e0f9e:L4e0f9e:{c.instructions+=2;NFSU2_TR(0x4e0f9e);
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
B4e0fa3:{NFSU2_TR(0x4e0fa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e135fu,4e1);}
}
B4e0fa9:L4e0fa9:{c.instructions+=3;NFSU2_TR(0x4e0fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0fac:{NFSU2_TR(0x4e0fac);
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
B4e0fb2:{NFSU2_TR(0x4e0fb2);
if(r1(R+518)){TAIL_STATIC(0x4e135fu,4e1);}
}
B4e0fb8:L4e0fb8:{c.instructions+=3;NFSU2_TR(0x4e0fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e0fbe:{NFSU2_TR(0x4e0fbe);
__builtin_memmove((R+4),(R+28),4);
}
B4e0fc0:{NFSU2_TR(0x4e0fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0fc5ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B4e0fc5:L4e0fc5:{c.instructions+=2;NFSU2_TR(0x4e0fc5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4e0fc8:{NFSU2_TR(0x4e0fc8);
if(r1(R+518)){TAIL_STATIC(0x4e135fu,4e1);}
}
B4e0fce:L4e0fce:{c.instructions+=6;NFSU2_TR(0x4e0fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e0fd1:{NFSU2_TR(0x4e0fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e0fd4:{NFSU2_TR(0x4e0fd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0fd5:{NFSU2_TR(0x4e0fd5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0fd7:{NFSU2_TR(0x4e0fd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0fd8:{NFSU2_TR(0x4e0fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e0fddull));
TAIL_STATIC(0x50d150u,50d);
}
B4e0fdd:L4e0fdd:{c.instructions+=8;NFSU2_TR(0x4e0fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e0fe0:{NFSU2_TR(0x4e0fe0);
u8 U[4];
w4(U+0,u32(0xec9488bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0fe5:{NFSU2_TR(0x4e0fe5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0fe7:{NFSU2_TR(0x4e0fe7);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0fec:{NFSU2_TR(0x4e0fec);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ff1:{NFSU2_TR(0x4e0ff1);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ff6:{NFSU2_TR(0x4e0ff6);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e0ffb:{NFSU2_TR(0x4e0ffb);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4e1000u,4e1);
}
XIT:NFSU2_TR_EXIT(0x4e0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
