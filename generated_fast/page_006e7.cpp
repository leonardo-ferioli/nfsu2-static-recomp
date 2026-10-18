#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e6(u8* __restrict R,Cpu& c);
u32 body_6e8(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_6f1(u8* __restrict R,Cpu& c);
u32 body_6f2(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e7(u8* __restrict R,Cpu& c);
u32 page_6e7(Cpu& c){return body_6e7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e7003:goto L6e7003;
case 0x6e7006:c.instructions+=7;goto B6e7006;
case 0x6e7009:c.instructions+=6;goto B6e7009;
case 0x6e700d:c.instructions+=5;goto B6e700d;
case 0x6e7011:c.instructions+=4;goto B6e7011;
case 0x6e7013:c.instructions+=3;goto B6e7013;
case 0x6e7015:c.instructions+=2;goto B6e7015;
case 0x6e7018:c.instructions+=1;goto B6e7018;
case 0x6e701a:goto L6e701a;
case 0x6e701e:c.instructions+=5;goto B6e701e;
case 0x6e7021:c.instructions+=4;goto B6e7021;
case 0x6e7022:c.instructions+=3;goto B6e7022;
case 0x6e7023:c.instructions+=2;goto B6e7023;
case 0x6e7025:c.instructions+=1;goto B6e7025;
case 0x6e702a:goto L6e702a;
case 0x6e702d:c.instructions+=4;goto B6e702d;
case 0x6e7031:c.instructions+=3;goto B6e7031;
case 0x6e7032:c.instructions+=2;goto B6e7032;
case 0x6e7034:c.instructions+=1;goto B6e7034;
case 0x6e7036:goto L6e7036;
case 0x6e7038:c.instructions+=1;goto B6e7038;
case 0x6e703a:goto L6e703a;
case 0x6e703e:c.instructions+=3;goto B6e703e;
case 0x6e703f:c.instructions+=2;goto B6e703f;
case 0x6e7041:c.instructions+=1;goto B6e7041;
case 0x6e7043:goto L6e7043;
case 0x6e7044:c.instructions+=6;goto B6e7044;
case 0x6e7045:c.instructions+=5;goto B6e7045;
case 0x6e7046:c.instructions+=4;goto B6e7046;
case 0x6e7048:c.instructions+=3;goto B6e7048;
case 0x6e7049:c.instructions+=2;goto B6e7049;
case 0x6e704c:c.instructions+=1;goto B6e704c;
case 0x6e704f:goto L6e704f;
case 0x6e7053:c.instructions+=9;goto B6e7053;
case 0x6e7057:c.instructions+=8;goto B6e7057;
case 0x6e7058:c.instructions+=7;goto B6e7058;
case 0x6e705a:c.instructions+=6;goto B6e705a;
case 0x6e705b:c.instructions+=5;goto B6e705b;
case 0x6e705c:c.instructions+=4;goto B6e705c;
case 0x6e705e:c.instructions+=3;goto B6e705e;
case 0x6e705f:c.instructions+=2;goto B6e705f;
case 0x6e7062:c.instructions+=1;goto B6e7062;
case 0x6e7070:goto L6e7070;
case 0x6e7073:c.instructions+=2;goto B6e7073;
case 0x6e7077:c.instructions+=1;goto B6e7077;
case 0x6e707c:goto L6e707c;
case 0x6e7080:c.instructions+=4;goto B6e7080;
case 0x6e7084:c.instructions+=3;goto B6e7084;
case 0x6e7087:c.instructions+=2;goto B6e7087;
case 0x6e708b:c.instructions+=1;goto B6e708b;
case 0x6e7090:goto L6e7090;
case 0x6e7093:c.instructions+=1;goto B6e7093;
case 0x6e70a0:goto L6e70a0;
case 0x6e70a3:c.instructions+=2;goto B6e70a3;
case 0x6e70a7:c.instructions+=1;goto B6e70a7;
case 0x6e70ac:goto L6e70ac;
case 0x6e70b0:c.instructions+=4;goto B6e70b0;
case 0x6e70b4:c.instructions+=3;goto B6e70b4;
case 0x6e70b7:c.instructions+=2;goto B6e70b7;
case 0x6e70bb:c.instructions+=1;goto B6e70bb;
case 0x6e70c0:goto L6e70c0;
case 0x6e70c3:c.instructions+=1;goto B6e70c3;
case 0x6e70d0:goto L6e70d0;
case 0x6e70d3:c.instructions+=4;goto B6e70d3;
case 0x6e70d4:c.instructions+=3;goto B6e70d4;
case 0x6e70d5:c.instructions+=2;goto B6e70d5;
case 0x6e70d9:c.instructions+=1;goto B6e70d9;
case 0x6e70de:goto L6e70de;
case 0x6e70e2:c.instructions+=4;goto B6e70e2;
case 0x6e70e6:c.instructions+=3;goto B6e70e6;
case 0x6e70ea:c.instructions+=2;goto B6e70ea;
case 0x6e70ed:c.instructions+=1;goto B6e70ed;
case 0x6e70f2:goto L6e70f2;
case 0x6e70f5:c.instructions+=2;goto B6e70f5;
case 0x6e70f7:c.instructions+=1;goto B6e70f7;
case 0x6e70f9:goto L6e70f9;
case 0x6e70fa:c.instructions+=3;goto B6e70fa;
case 0x6e70fe:c.instructions+=2;goto B6e70fe;
case 0x6e7101:c.instructions+=1;goto B6e7101;
case 0x6e7106:goto L6e7106;
case 0x6e710a:c.instructions+=3;goto B6e710a;
case 0x6e710c:c.instructions+=2;goto B6e710c;
case 0x6e7110:c.instructions+=1;goto B6e7110;
case 0x6e7115:goto L6e7115;
case 0x6e7117:c.instructions+=3;goto B6e7117;
case 0x6e7118:c.instructions+=2;goto B6e7118;
case 0x6e711a:c.instructions+=1;goto B6e711a;
case 0x6e711d:goto L6e711d;
case 0x6e7120:c.instructions+=1;goto B6e7120;
case 0x6e7121:goto L6e7121;
case 0x6e7122:c.instructions+=3;goto B6e7122;
case 0x6e7123:c.instructions+=2;goto B6e7123;
case 0x6e7126:c.instructions+=1;goto B6e7126;
case 0x6e7130:goto L6e7130;
case 0x6e7133:c.instructions+=60;goto B6e7133;
case 0x6e7137:c.instructions+=59;goto B6e7137;
case 0x6e7139:c.instructions+=58;goto B6e7139;
case 0x6e713f:c.instructions+=57;goto B6e713f;
case 0x6e7142:c.instructions+=56;goto B6e7142;
case 0x6e7148:c.instructions+=55;goto B6e7148;
case 0x6e714b:c.instructions+=54;goto B6e714b;
case 0x6e714f:c.instructions+=53;goto B6e714f;
case 0x6e7155:c.instructions+=52;goto B6e7155;
case 0x6e7159:c.instructions+=51;goto B6e7159;
case 0x6e715b:c.instructions+=50;goto B6e715b;
case 0x6e715d:c.instructions+=49;goto B6e715d;
case 0x6e7161:c.instructions+=48;goto B6e7161;
case 0x6e7163:c.instructions+=47;goto B6e7163;
case 0x6e7165:c.instructions+=46;goto B6e7165;
case 0x6e7169:c.instructions+=45;goto B6e7169;
case 0x6e716d:c.instructions+=44;goto B6e716d;
case 0x6e716f:c.instructions+=43;goto B6e716f;
case 0x6e7173:c.instructions+=42;goto B6e7173;
case 0x6e7175:c.instructions+=41;goto B6e7175;
case 0x6e7177:c.instructions+=40;goto B6e7177;
case 0x6e717b:c.instructions+=39;goto B6e717b;
case 0x6e717d:c.instructions+=38;goto B6e717d;
case 0x6e7181:c.instructions+=37;goto B6e7181;
case 0x6e7183:c.instructions+=36;goto B6e7183;
case 0x6e7187:c.instructions+=35;goto B6e7187;
case 0x6e718b:c.instructions+=34;goto B6e718b;
case 0x6e718f:c.instructions+=33;goto B6e718f;
case 0x6e7193:c.instructions+=32;goto B6e7193;
case 0x6e7195:c.instructions+=31;goto B6e7195;
case 0x6e7199:c.instructions+=30;goto B6e7199;
case 0x6e719d:c.instructions+=29;goto B6e719d;
case 0x6e719f:c.instructions+=28;goto B6e719f;
case 0x6e71a3:c.instructions+=27;goto B6e71a3;
case 0x6e71a7:c.instructions+=26;goto B6e71a7;
case 0x6e71ab:c.instructions+=25;goto B6e71ab;
case 0x6e71ad:c.instructions+=24;goto B6e71ad;
case 0x6e71af:c.instructions+=23;goto B6e71af;
case 0x6e71b1:c.instructions+=22;goto B6e71b1;
case 0x6e71b3:c.instructions+=21;goto B6e71b3;
case 0x6e71b5:c.instructions+=20;goto B6e71b5;
case 0x6e71b9:c.instructions+=19;goto B6e71b9;
case 0x6e71bb:c.instructions+=18;goto B6e71bb;
case 0x6e71bf:c.instructions+=17;goto B6e71bf;
case 0x6e71c3:c.instructions+=16;goto B6e71c3;
case 0x6e71c5:c.instructions+=15;goto B6e71c5;
case 0x6e71c8:c.instructions+=14;goto B6e71c8;
case 0x6e71cc:c.instructions+=13;goto B6e71cc;
case 0x6e71ce:c.instructions+=12;goto B6e71ce;
case 0x6e71d0:c.instructions+=11;goto B6e71d0;
case 0x6e71d2:c.instructions+=10;goto B6e71d2;
case 0x6e71d5:c.instructions+=9;goto B6e71d5;
case 0x6e71d9:c.instructions+=8;goto B6e71d9;
case 0x6e71db:c.instructions+=7;goto B6e71db;
case 0x6e71df:c.instructions+=6;goto B6e71df;
case 0x6e71e3:c.instructions+=5;goto B6e71e3;
case 0x6e71e5:c.instructions+=4;goto B6e71e5;
case 0x6e71e8:c.instructions+=3;goto B6e71e8;
case 0x6e71ea:c.instructions+=2;goto B6e71ea;
case 0x6e71ed:c.instructions+=1;goto B6e71ed;
case 0x6e71f0:goto L6e71f0;
case 0x6e71f3:c.instructions+=30;goto B6e71f3;
case 0x6e71f7:c.instructions+=29;goto B6e71f7;
case 0x6e71f9:c.instructions+=28;goto B6e71f9;
case 0x6e71fb:c.instructions+=27;goto B6e71fb;
case 0x6e71fe:c.instructions+=26;goto B6e71fe;
case 0x6e7204:c.instructions+=25;goto B6e7204;
case 0x6e7206:c.instructions+=24;goto B6e7206;
case 0x6e720c:c.instructions+=23;goto B6e720c;
case 0x6e720f:c.instructions+=22;goto B6e720f;
case 0x6e7211:c.instructions+=21;goto B6e7211;
case 0x6e7213:c.instructions+=20;goto B6e7213;
case 0x6e7217:c.instructions+=19;goto B6e7217;
case 0x6e721a:c.instructions+=18;goto B6e721a;
case 0x6e721c:c.instructions+=17;goto B6e721c;
case 0x6e721e:c.instructions+=16;goto B6e721e;
case 0x6e7221:c.instructions+=15;goto B6e7221;
case 0x6e7223:c.instructions+=14;goto B6e7223;
case 0x6e7227:c.instructions+=13;goto B6e7227;
case 0x6e7229:c.instructions+=12;goto B6e7229;
case 0x6e722c:c.instructions+=11;goto B6e722c;
case 0x6e722e:c.instructions+=10;goto B6e722e;
case 0x6e7232:c.instructions+=9;goto B6e7232;
case 0x6e7234:c.instructions+=8;goto B6e7234;
case 0x6e7236:c.instructions+=7;goto B6e7236;
case 0x6e7237:c.instructions+=6;goto B6e7237;
case 0x6e723b:c.instructions+=5;goto B6e723b;
case 0x6e723c:c.instructions+=4;goto B6e723c;
case 0x6e7240:c.instructions+=3;goto B6e7240;
case 0x6e7242:c.instructions+=2;goto B6e7242;
case 0x6e7244:c.instructions+=1;goto B6e7244;
case 0x6e7249:goto L6e7249;
case 0x6e724c:c.instructions+=1;goto B6e724c;
case 0x6e7250:goto L6e7250;
case 0x6e7254:c.instructions+=21;goto B6e7254;
case 0x6e7256:c.instructions+=20;goto B6e7256;
case 0x6e7258:c.instructions+=19;goto B6e7258;
case 0x6e725c:c.instructions+=18;goto B6e725c;
case 0x6e725e:c.instructions+=17;goto B6e725e;
case 0x6e7260:c.instructions+=16;goto B6e7260;
case 0x6e7263:c.instructions+=15;goto B6e7263;
case 0x6e7265:c.instructions+=14;goto B6e7265;
case 0x6e7267:c.instructions+=13;goto B6e7267;
case 0x6e726a:c.instructions+=12;goto B6e726a;
case 0x6e726c:c.instructions+=11;goto B6e726c;
case 0x6e726f:c.instructions+=10;goto B6e726f;
case 0x6e7271:c.instructions+=9;goto B6e7271;
case 0x6e7273:c.instructions+=8;goto B6e7273;
case 0x6e7276:c.instructions+=7;goto B6e7276;
case 0x6e7278:c.instructions+=6;goto B6e7278;
case 0x6e727b:c.instructions+=5;goto B6e727b;
case 0x6e727d:c.instructions+=4;goto B6e727d;
case 0x6e727f:c.instructions+=3;goto B6e727f;
case 0x6e7282:c.instructions+=2;goto B6e7282;
case 0x6e7285:c.instructions+=1;goto B6e7285;
case 0x6e7290:goto L6e7290;
case 0x6e7294:c.instructions+=16;goto B6e7294;
case 0x6e7296:c.instructions+=15;goto B6e7296;
case 0x6e7298:c.instructions+=14;goto B6e7298;
case 0x6e729c:c.instructions+=13;goto B6e729c;
case 0x6e729f:c.instructions+=12;goto B6e729f;
case 0x6e72a1:c.instructions+=11;goto B6e72a1;
case 0x6e72a4:c.instructions+=10;goto B6e72a4;
case 0x6e72a6:c.instructions+=9;goto B6e72a6;
case 0x6e72a8:c.instructions+=8;goto B6e72a8;
case 0x6e72ab:c.instructions+=7;goto B6e72ab;
case 0x6e72ad:c.instructions+=6;goto B6e72ad;
case 0x6e72b0:c.instructions+=5;goto B6e72b0;
case 0x6e72b2:c.instructions+=4;goto B6e72b2;
case 0x6e72b4:c.instructions+=3;goto B6e72b4;
case 0x6e72b7:c.instructions+=2;goto B6e72b7;
case 0x6e72ba:c.instructions+=1;goto B6e72ba;
case 0x6e72c0:goto L6e72c0;
case 0x6e72c4:c.instructions+=4;goto B6e72c4;
case 0x6e72c5:c.instructions+=3;goto B6e72c5;
case 0x6e72ca:c.instructions+=2;goto B6e72ca;
case 0x6e72cb:c.instructions+=1;goto B6e72cb;
case 0x6e72d0:goto L6e72d0;
case 0x6e72d4:c.instructions+=4;goto B6e72d4;
case 0x6e72d8:c.instructions+=3;goto B6e72d8;
case 0x6e72d9:c.instructions+=2;goto B6e72d9;
case 0x6e72da:c.instructions+=1;goto B6e72da;
case 0x6e72df:goto L6e72df;
case 0x6e72e3:c.instructions+=5;goto B6e72e3;
case 0x6e72e4:c.instructions+=4;goto B6e72e4;
case 0x6e72e5:c.instructions+=3;goto B6e72e5;
case 0x6e72ea:c.instructions+=2;goto B6e72ea;
case 0x6e72eb:c.instructions+=1;goto B6e72eb;
case 0x6e72f0:goto L6e72f0;
case 0x6e72f3:c.instructions+=2;goto B6e72f3;
case 0x6e72f4:c.instructions+=1;goto B6e72f4;
case 0x6e7300:goto L6e7300;
case 0x6e7304:c.instructions+=46;goto B6e7304;
case 0x6e7306:c.instructions+=45;goto B6e7306;
case 0x6e7308:c.instructions+=44;goto B6e7308;
case 0x6e730e:c.instructions+=43;goto B6e730e;
case 0x6e7310:c.instructions+=42;goto B6e7310;
case 0x6e7313:c.instructions+=41;goto B6e7313;
case 0x6e7315:c.instructions+=40;goto B6e7315;
case 0x6e7317:c.instructions+=39;goto B6e7317;
case 0x6e7319:c.instructions+=38;goto B6e7319;
case 0x6e731f:c.instructions+=37;goto B6e731f;
case 0x6e7321:c.instructions+=36;goto B6e7321;
case 0x6e7324:c.instructions+=35;goto B6e7324;
case 0x6e7326:c.instructions+=34;goto B6e7326;
case 0x6e7328:c.instructions+=33;goto B6e7328;
case 0x6e732e:c.instructions+=32;goto B6e732e;
case 0x6e7330:c.instructions+=31;goto B6e7330;
case 0x6e7333:c.instructions+=30;goto B6e7333;
case 0x6e7335:c.instructions+=29;goto B6e7335;
case 0x6e7337:c.instructions+=28;goto B6e7337;
case 0x6e7339:c.instructions+=27;goto B6e7339;
case 0x6e733f:c.instructions+=26;goto B6e733f;
case 0x6e7342:c.instructions+=25;goto B6e7342;
case 0x6e7346:c.instructions+=24;goto B6e7346;
case 0x6e7348:c.instructions+=23;goto B6e7348;
case 0x6e734a:c.instructions+=22;goto B6e734a;
case 0x6e734e:c.instructions+=21;goto B6e734e;
case 0x6e7350:c.instructions+=20;goto B6e7350;
case 0x6e7352:c.instructions+=19;goto B6e7352;
case 0x6e7355:c.instructions+=18;goto B6e7355;
case 0x6e7357:c.instructions+=17;goto B6e7357;
case 0x6e7359:c.instructions+=16;goto B6e7359;
case 0x6e735c:c.instructions+=15;goto B6e735c;
case 0x6e735e:c.instructions+=14;goto B6e735e;
case 0x6e7361:c.instructions+=13;goto B6e7361;
case 0x6e7363:c.instructions+=12;goto B6e7363;
case 0x6e7365:c.instructions+=11;goto B6e7365;
case 0x6e7368:c.instructions+=10;goto B6e7368;
case 0x6e736a:c.instructions+=9;goto B6e736a;
case 0x6e736d:c.instructions+=8;goto B6e736d;
case 0x6e736f:c.instructions+=7;goto B6e736f;
case 0x6e7371:c.instructions+=6;goto B6e7371;
case 0x6e7374:c.instructions+=5;goto B6e7374;
case 0x6e7377:c.instructions+=4;goto B6e7377;
case 0x6e737b:c.instructions+=3;goto B6e737b;
case 0x6e737f:c.instructions+=2;goto B6e737f;
case 0x6e7387:c.instructions+=1;goto B6e7387;
case 0x6e7390:goto L6e7390;
case 0x6e7394:c.instructions+=49;goto B6e7394;
case 0x6e7396:c.instructions+=48;goto B6e7396;
case 0x6e7398:c.instructions+=47;goto B6e7398;
case 0x6e739e:c.instructions+=46;goto B6e739e;
case 0x6e73a0:c.instructions+=45;goto B6e73a0;
case 0x6e73a3:c.instructions+=44;goto B6e73a3;
case 0x6e73a5:c.instructions+=43;goto B6e73a5;
case 0x6e73a7:c.instructions+=42;goto B6e73a7;
case 0x6e73ad:c.instructions+=41;goto B6e73ad;
case 0x6e73af:c.instructions+=40;goto B6e73af;
case 0x6e73b2:c.instructions+=39;goto B6e73b2;
case 0x6e73b4:c.instructions+=38;goto B6e73b4;
case 0x6e73b6:c.instructions+=37;goto B6e73b6;
case 0x6e73b8:c.instructions+=36;goto B6e73b8;
case 0x6e73be:c.instructions+=35;goto B6e73be;
case 0x6e73c1:c.instructions+=34;goto B6e73c1;
case 0x6e73c5:c.instructions+=33;goto B6e73c5;
case 0x6e73c7:c.instructions+=32;goto B6e73c7;
case 0x6e73c9:c.instructions+=31;goto B6e73c9;
case 0x6e73cd:c.instructions+=30;goto B6e73cd;
case 0x6e73d0:c.instructions+=29;goto B6e73d0;
case 0x6e73d2:c.instructions+=28;goto B6e73d2;
case 0x6e73d5:c.instructions+=27;goto B6e73d5;
case 0x6e73d7:c.instructions+=26;goto B6e73d7;
case 0x6e73d9:c.instructions+=25;goto B6e73d9;
case 0x6e73dc:c.instructions+=24;goto B6e73dc;
case 0x6e73de:c.instructions+=23;goto B6e73de;
case 0x6e73e1:c.instructions+=22;goto B6e73e1;
case 0x6e73e3:c.instructions+=21;goto B6e73e3;
case 0x6e73e5:c.instructions+=20;goto B6e73e5;
case 0x6e73e8:c.instructions+=19;goto B6e73e8;
case 0x6e73ea:c.instructions+=18;goto B6e73ea;
case 0x6e73ed:c.instructions+=17;goto B6e73ed;
case 0x6e73ef:c.instructions+=16;goto B6e73ef;
case 0x6e73f2:c.instructions+=15;goto B6e73f2;
case 0x6e73f8:c.instructions+=14;goto B6e73f8;
case 0x6e73fc:c.instructions+=13;goto B6e73fc;
case 0x6e7402:c.instructions+=12;goto B6e7402;
case 0x6e7405:c.instructions+=11;goto B6e7405;
case 0x6e7408:c.instructions+=10;goto B6e7408;
case 0x6e740e:c.instructions+=9;goto B6e740e;
case 0x6e7412:c.instructions+=8;goto B6e7412;
case 0x6e7418:c.instructions+=7;goto B6e7418;
case 0x6e741b:c.instructions+=6;goto B6e741b;
case 0x6e741e:c.instructions+=5;goto B6e741e;
case 0x6e7424:c.instructions+=4;goto B6e7424;
case 0x6e7428:c.instructions+=3;goto B6e7428;
case 0x6e742e:c.instructions+=2;goto B6e742e;
case 0x6e7431:c.instructions+=1;goto B6e7431;
case 0x6e7440:goto L6e7440;
case 0x6e7443:c.instructions+=22;goto B6e7443;
case 0x6e7446:c.instructions+=21;goto B6e7446;
case 0x6e7449:c.instructions+=20;goto B6e7449;
case 0x6e744a:c.instructions+=19;goto B6e744a;
case 0x6e744c:c.instructions+=18;goto B6e744c;
case 0x6e7451:c.instructions+=17;goto B6e7451;
case 0x6e7456:c.instructions+=16;goto B6e7456;
case 0x6e7457:c.instructions+=15;goto B6e7457;
case 0x6e7458:c.instructions+=14;goto B6e7458;
case 0x6e7459:c.instructions+=13;goto B6e7459;
case 0x6e745d:c.instructions+=12;goto B6e745d;
case 0x6e745f:c.instructions+=11;goto B6e745f;
case 0x6e7462:c.instructions+=10;goto B6e7462;
case 0x6e7464:c.instructions+=9;goto B6e7464;
case 0x6e7468:c.instructions+=8;goto B6e7468;
case 0x6e746c:c.instructions+=7;goto B6e746c;
case 0x6e7470:c.instructions+=6;goto B6e7470;
case 0x6e7472:c.instructions+=5;goto B6e7472;
case 0x6e7475:c.instructions+=4;goto B6e7475;
case 0x6e7478:c.instructions+=3;goto B6e7478;
case 0x6e747c:c.instructions+=2;goto B6e747c;
case 0x6e7480:c.instructions+=1;goto B6e7480;
case 0x6e7482:goto L6e7482;
case 0x6e7484:c.instructions+=1;goto B6e7484;
case 0x6e748a:goto L6e748a;
case 0x6e748e:c.instructions+=2;goto B6e748e;
case 0x6e7492:c.instructions+=1;goto B6e7492;
case 0x6e7495:goto L6e7495;
case 0x6e7497:c.instructions+=3;goto B6e7497;
case 0x6e749a:c.instructions+=2;goto B6e749a;
case 0x6e749c:c.instructions+=1;goto B6e749c;
case 0x6e749e:goto L6e749e;
case 0x6e74a0:goto L6e74a0;
case 0x6e74a2:c.instructions+=8;goto B6e74a2;
case 0x6e74a3:c.instructions+=7;goto B6e74a3;
case 0x6e74a7:c.instructions+=6;goto B6e74a7;
case 0x6e74a8:c.instructions+=5;goto B6e74a8;
case 0x6e74ac:c.instructions+=4;goto B6e74ac;
case 0x6e74ad:c.instructions+=3;goto B6e74ad;
case 0x6e74ae:c.instructions+=2;goto B6e74ae;
case 0x6e74b1:c.instructions+=1;goto B6e74b1;
case 0x6e74b3:goto L6e74b3;
case 0x6e74b6:c.instructions+=2;goto B6e74b6;
case 0x6e74b7:c.instructions+=1;goto B6e74b7;
case 0x6e74b9:goto L6e74b9;
case 0x6e74bd:goto L6e74bd;
case 0x6e74c0:c.instructions+=2;goto B6e74c0;
case 0x6e74c2:c.instructions+=1;goto B6e74c2;
case 0x6e74c4:goto L6e74c4;
case 0x6e74c5:c.instructions+=5;goto B6e74c5;
case 0x6e74c6:c.instructions+=4;goto B6e74c6;
case 0x6e74c7:c.instructions+=3;goto B6e74c7;
case 0x6e74c8:c.instructions+=2;goto B6e74c8;
case 0x6e74cb:c.instructions+=1;goto B6e74cb;
case 0x6e74ce:goto L6e74ce;
case 0x6e74d0:c.instructions+=3;goto B6e74d0;
case 0x6e74d2:c.instructions+=2;goto B6e74d2;
case 0x6e74d6:c.instructions+=1;goto B6e74d6;
case 0x6e74dc:goto L6e74dc;
case 0x6e74e0:c.instructions+=1;goto B6e74e0;
case 0x6e74e3:goto L6e74e3;
case 0x6e74e5:c.instructions+=9;goto B6e74e5;
case 0x6e74e7:c.instructions+=8;goto B6e74e7;
case 0x6e74ea:c.instructions+=7;goto B6e74ea;
case 0x6e74ef:c.instructions+=6;goto B6e74ef;
case 0x6e74f1:c.instructions+=5;goto B6e74f1;
case 0x6e74f5:c.instructions+=4;goto B6e74f5;
case 0x6e74f8:c.instructions+=3;goto B6e74f8;
case 0x6e74fb:c.instructions+=2;goto B6e74fb;
case 0x6e74fe:c.instructions+=1;goto B6e74fe;
case 0x6e7500:goto L6e7500;
case 0x6e7502:c.instructions+=1;goto B6e7502;
case 0x6e7504:goto L6e7504;
case 0x6e7508:c.instructions+=2;goto B6e7508;
case 0x6e750a:c.instructions+=1;goto B6e750a;
case 0x6e7510:goto L6e7510;
case 0x6e7512:c.instructions+=8;goto B6e7512;
case 0x6e7513:c.instructions+=7;goto B6e7513;
case 0x6e7517:c.instructions+=6;goto B6e7517;
case 0x6e7518:c.instructions+=5;goto B6e7518;
case 0x6e751c:c.instructions+=4;goto B6e751c;
case 0x6e751d:c.instructions+=3;goto B6e751d;
case 0x6e751e:c.instructions+=2;goto B6e751e;
case 0x6e7521:c.instructions+=1;goto B6e7521;
case 0x6e7523:goto L6e7523;
case 0x6e7526:c.instructions+=2;goto B6e7526;
case 0x6e7527:c.instructions+=1;goto B6e7527;
case 0x6e7529:goto L6e7529;
case 0x6e752d:c.instructions+=1;goto B6e752d;
case 0x6e752f:goto L6e752f;
case 0x6e7531:c.instructions+=1;goto B6e7531;
case 0x6e7533:goto L6e7533;
case 0x6e7535:c.instructions+=3;goto B6e7535;
case 0x6e753a:c.instructions+=2;goto B6e753a;
case 0x6e753f:c.instructions+=1;goto B6e753f;
case 0x6e7540:goto L6e7540;
case 0x6e7542:c.instructions+=3;goto B6e7542;
case 0x6e7545:c.instructions+=2;goto B6e7545;
case 0x6e754a:c.instructions+=1;goto B6e754a;
case 0x6e754c:goto L6e754c;
case 0x6e7551:c.instructions+=1;goto B6e7551;
case 0x6e7553:goto L6e7553;
case 0x6e7558:c.instructions+=1;goto B6e7558;
case 0x6e755a:goto L6e755a;
case 0x6e755e:c.instructions+=3;goto B6e755e;
case 0x6e7562:c.instructions+=2;goto B6e7562;
case 0x6e7564:c.instructions+=1;goto B6e7564;
case 0x6e7566:goto L6e7566;
case 0x6e756a:c.instructions+=2;goto B6e756a;
case 0x6e756e:c.instructions+=1;goto B6e756e;
case 0x6e7570:goto L6e7570;
case 0x6e7574:goto L6e7574;
case 0x6e7575:c.instructions+=1;goto B6e7575;
case 0x6e7577:goto L6e7577;
case 0x6e757b:c.instructions+=5;goto B6e757b;
case 0x6e757e:c.instructions+=4;goto B6e757e;
case 0x6e757f:c.instructions+=3;goto B6e757f;
case 0x6e7581:c.instructions+=2;goto B6e7581;
case 0x6e7585:c.instructions+=1;goto B6e7585;
case 0x6e758b:goto L6e758b;
case 0x6e758c:c.instructions+=5;goto B6e758c;
case 0x6e758d:c.instructions+=4;goto B6e758d;
case 0x6e758e:c.instructions+=3;goto B6e758e;
case 0x6e758f:c.instructions+=2;goto B6e758f;
case 0x6e7592:c.instructions+=1;goto B6e7592;
case 0x6e75a0:goto L6e75a0;
case 0x6e75a1:c.instructions+=10;goto B6e75a1;
case 0x6e75a2:c.instructions+=9;goto B6e75a2;
case 0x6e75a6:c.instructions+=8;goto B6e75a6;
case 0x6e75a9:c.instructions+=7;goto B6e75a9;
case 0x6e75aa:c.instructions+=6;goto B6e75aa;
case 0x6e75ab:c.instructions+=5;goto B6e75ab;
case 0x6e75ad:c.instructions+=4;goto B6e75ad;
case 0x6e75af:c.instructions+=3;goto B6e75af;
case 0x6e75b2:c.instructions+=2;goto B6e75b2;
case 0x6e75b6:c.instructions+=1;goto B6e75b6;
case 0x6e75b8:goto L6e75b8;
case 0x6e75ba:c.instructions+=4;goto B6e75ba;
case 0x6e75bd:c.instructions+=3;goto B6e75bd;
case 0x6e75be:c.instructions+=2;goto B6e75be;
case 0x6e75c0:c.instructions+=1;goto B6e75c0;
case 0x6e75c2:goto L6e75c2;
case 0x6e75c4:c.instructions+=1;goto B6e75c4;
case 0x6e75c6:goto L6e75c6;
case 0x6e75c8:c.instructions+=2;goto B6e75c8;
case 0x6e75cb:c.instructions+=1;goto B6e75cb;
case 0x6e75cd:goto L6e75cd;
case 0x6e75ce:c.instructions+=1;goto B6e75ce;
case 0x6e75d0:goto L6e75d0;
case 0x6e75d1:c.instructions+=1;goto B6e75d1;
case 0x6e75d3:goto L6e75d3;
case 0x6e75d8:c.instructions+=1;goto B6e75d8;
case 0x6e75dd:goto L6e75dd;
case 0x6e75e0:c.instructions+=1;goto B6e75e0;
case 0x6e75e2:goto L6e75e2;
case 0x6e75e8:c.instructions+=1;goto B6e75e8;
case 0x6e75ea:goto L6e75ea;
case 0x6e75f0:c.instructions+=1;goto B6e75f0;
case 0x6e75f2:goto L6e75f2;
case 0x6e75f8:goto L6e75f8;
case 0x6e75fb:c.instructions+=2;goto B6e75fb;
case 0x6e75fc:c.instructions+=1;goto B6e75fc;
case 0x6e75fe:goto L6e75fe;
case 0x6e7602:goto L6e7602;
case 0x6e7604:c.instructions+=1;goto B6e7604;
case 0x6e7606:goto L6e7606;
case 0x6e7609:c.instructions+=4;goto B6e7609;
case 0x6e760b:c.instructions+=3;goto B6e760b;
case 0x6e760d:c.instructions+=2;goto B6e760d;
case 0x6e7611:c.instructions+=1;goto B6e7611;
case 0x6e7613:goto L6e7613;
case 0x6e7615:c.instructions+=4;goto B6e7615;
case 0x6e7618:c.instructions+=3;goto B6e7618;
case 0x6e7619:c.instructions+=2;goto B6e7619;
case 0x6e761b:c.instructions+=1;goto B6e761b;
case 0x6e761d:goto L6e761d;
case 0x6e761f:c.instructions+=1;goto B6e761f;
case 0x6e7621:goto L6e7621;
case 0x6e7623:c.instructions+=2;goto B6e7623;
case 0x6e7626:c.instructions+=1;goto B6e7626;
case 0x6e7628:goto L6e7628;
case 0x6e7629:c.instructions+=1;goto B6e7629;
case 0x6e762b:goto L6e762b;
case 0x6e762c:c.instructions+=1;goto B6e762c;
case 0x6e762e:goto L6e762e;
case 0x6e7633:c.instructions+=1;goto B6e7633;
case 0x6e7638:goto L6e7638;
case 0x6e763b:c.instructions+=1;goto B6e763b;
case 0x6e763d:goto L6e763d;
case 0x6e7643:c.instructions+=1;goto B6e7643;
case 0x6e7645:goto L6e7645;
case 0x6e764b:c.instructions+=1;goto B6e764b;
case 0x6e764d:goto L6e764d;
case 0x6e7653:goto L6e7653;
case 0x6e7656:c.instructions+=2;goto B6e7656;
case 0x6e7657:c.instructions+=1;goto B6e7657;
case 0x6e7659:goto L6e7659;
case 0x6e765d:goto L6e765d;
case 0x6e765f:c.instructions+=1;goto B6e765f;
case 0x6e7661:goto L6e7661;
case 0x6e7662:c.instructions+=4;goto B6e7662;
case 0x6e7663:c.instructions+=3;goto B6e7663;
case 0x6e7664:c.instructions+=2;goto B6e7664;
case 0x6e7665:c.instructions+=1;goto B6e7665;
case 0x6e7670:goto L6e7670;
case 0x6e7671:c.instructions+=15;goto B6e7671;
case 0x6e7674:c.instructions+=14;goto B6e7674;
case 0x6e7679:c.instructions+=13;goto B6e7679;
case 0x6e767c:c.instructions+=12;goto B6e767c;
case 0x6e767d:c.instructions+=11;goto B6e767d;
case 0x6e767e:c.instructions+=10;goto B6e767e;
case 0x6e7681:c.instructions+=9;goto B6e7681;
case 0x6e7685:c.instructions+=8;goto B6e7685;
case 0x6e7688:c.instructions+=7;goto B6e7688;
case 0x6e768c:c.instructions+=6;goto B6e768c;
case 0x6e7690:c.instructions+=5;goto B6e7690;
case 0x6e7692:c.instructions+=4;goto B6e7692;
case 0x6e7695:c.instructions+=3;goto B6e7695;
case 0x6e7696:c.instructions+=2;goto B6e7696;
case 0x6e769a:c.instructions+=1;goto B6e769a;
case 0x6e769c:goto L6e769c;
case 0x6e769e:c.instructions+=1;goto B6e769e;
case 0x6e76a4:goto L6e76a4;
case 0x6e76a8:c.instructions+=2;goto B6e76a8;
case 0x6e76ab:c.instructions+=1;goto B6e76ab;
case 0x6e76b0:goto L6e76b0;
case 0x6e76b2:c.instructions+=3;goto B6e76b2;
case 0x6e76b5:c.instructions+=2;goto B6e76b5;
case 0x6e76b7:c.instructions+=1;goto B6e76b7;
case 0x6e76b9:goto L6e76b9;
case 0x6e76c0:goto L6e76c0;
case 0x6e76c2:c.instructions+=5;goto B6e76c2;
case 0x6e76c6:c.instructions+=4;goto B6e76c6;
case 0x6e76c7:c.instructions+=3;goto B6e76c7;
case 0x6e76c8:c.instructions+=2;goto B6e76c8;
case 0x6e76cb:c.instructions+=1;goto B6e76cb;
case 0x6e76cd:goto L6e76cd;
case 0x6e76d0:c.instructions+=2;goto B6e76d0;
case 0x6e76d1:c.instructions+=1;goto B6e76d1;
case 0x6e76d3:goto L6e76d3;
case 0x6e76d7:goto L6e76d7;
case 0x6e76da:c.instructions+=2;goto B6e76da;
case 0x6e76dc:c.instructions+=1;goto B6e76dc;
case 0x6e76de:goto L6e76de;
case 0x6e76df:c.instructions+=4;goto B6e76df;
case 0x6e76e0:c.instructions+=3;goto B6e76e0;
case 0x6e76e1:c.instructions+=2;goto B6e76e1;
case 0x6e76e2:c.instructions+=1;goto B6e76e2;
case 0x6e76e5:goto L6e76e5;
case 0x6e76e7:c.instructions+=2;goto B6e76e7;
case 0x6e76e9:c.instructions+=1;goto B6e76e9;
case 0x6e76ef:goto L6e76ef;
case 0x6e76f0:c.instructions+=2;goto B6e76f0;
case 0x6e76f4:c.instructions+=1;goto B6e76f4;
case 0x6e76f7:goto L6e76f7;
case 0x6e76f9:c.instructions+=10;goto B6e76f9;
case 0x6e76fd:c.instructions+=9;goto B6e76fd;
case 0x6e76ff:c.instructions+=8;goto B6e76ff;
case 0x6e7702:c.instructions+=7;goto B6e7702;
case 0x6e7707:c.instructions+=6;goto B6e7707;
case 0x6e7709:c.instructions+=5;goto B6e7709;
case 0x6e770b:c.instructions+=4;goto B6e770b;
case 0x6e770e:c.instructions+=3;goto B6e770e;
case 0x6e7711:c.instructions+=2;goto B6e7711;
case 0x6e7714:c.instructions+=1;goto B6e7714;
case 0x6e7716:goto L6e7716;
case 0x6e7718:c.instructions+=1;goto B6e7718;
case 0x6e771a:goto L6e771a;
case 0x6e771c:c.instructions+=1;goto B6e771c;
case 0x6e7720:goto L6e7720;
case 0x6e7722:c.instructions+=5;goto B6e7722;
case 0x6e7726:c.instructions+=4;goto B6e7726;
case 0x6e7727:c.instructions+=3;goto B6e7727;
case 0x6e7728:c.instructions+=2;goto B6e7728;
case 0x6e772b:c.instructions+=1;goto B6e772b;
case 0x6e772d:goto L6e772d;
case 0x6e7730:c.instructions+=2;goto B6e7730;
case 0x6e7731:c.instructions+=1;goto B6e7731;
case 0x6e7733:goto L6e7733;
case 0x6e7735:goto L6e7735;
case 0x6e7737:c.instructions+=1;goto B6e7737;
case 0x6e7739:goto L6e7739;
case 0x6e773d:c.instructions+=2;goto B6e773d;
case 0x6e773f:c.instructions+=1;goto B6e773f;
case 0x6e7740:goto L6e7740;
case 0x6e7742:c.instructions+=3;goto B6e7742;
case 0x6e7745:c.instructions+=2;goto B6e7745;
case 0x6e774a:c.instructions+=1;goto B6e774a;
case 0x6e774c:goto L6e774c;
case 0x6e7751:c.instructions+=1;goto B6e7751;
case 0x6e7753:goto L6e7753;
case 0x6e7758:c.instructions+=1;goto B6e7758;
case 0x6e775a:goto L6e775a;
case 0x6e775d:c.instructions+=1;goto B6e775d;
case 0x6e775f:goto L6e775f;
case 0x6e7762:goto L6e7762;
case 0x6e7763:c.instructions+=1;goto B6e7763;
case 0x6e7765:goto L6e7765;
case 0x6e7769:goto L6e7769;
case 0x6e776d:c.instructions+=4;goto B6e776d;
case 0x6e7770:c.instructions+=3;goto B6e7770;
case 0x6e7771:c.instructions+=2;goto B6e7771;
case 0x6e7773:c.instructions+=1;goto B6e7773;
case 0x6e7779:goto L6e7779;
case 0x6e777a:goto L6e777a;
case 0x6e777b:c.instructions+=4;goto B6e777b;
case 0x6e777c:c.instructions+=3;goto B6e777c;
case 0x6e777d:c.instructions+=2;goto B6e777d;
case 0x6e777e:c.instructions+=1;goto B6e777e;
case 0x6e7790:goto L6e7790;
case 0x6e7793:c.instructions+=7;goto B6e7793;
case 0x6e7797:c.instructions+=6;goto B6e7797;
case 0x6e779b:c.instructions+=5;goto B6e779b;
case 0x6e77a1:c.instructions+=4;goto B6e77a1;
case 0x6e77a5:c.instructions+=3;goto B6e77a5;
case 0x6e77a7:c.instructions+=2;goto B6e77a7;
case 0x6e77aa:c.instructions+=1;goto B6e77aa;
case 0x6e77ac:goto L6e77ac;
case 0x6e77b2:c.instructions+=5;goto B6e77b2;
case 0x6e77b6:c.instructions+=4;goto B6e77b6;
case 0x6e77ba:c.instructions+=3;goto B6e77ba;
case 0x6e77be:c.instructions+=2;goto B6e77be;
case 0x6e77c2:c.instructions+=1;goto B6e77c2;
case 0x6e77c4:goto L6e77c4;
case 0x6e77ca:c.instructions+=4;goto B6e77ca;
case 0x6e77ce:c.instructions+=3;goto B6e77ce;
case 0x6e77d2:c.instructions+=2;goto B6e77d2;
case 0x6e77d6:c.instructions+=1;goto B6e77d6;
case 0x6e77da:goto L6e77da;
case 0x6e77dc:c.instructions+=2;goto B6e77dc;
case 0x6e77e0:c.instructions+=1;goto B6e77e0;
case 0x6e77e2:goto L6e77e2;
case 0x6e77e6:c.instructions+=6;goto B6e77e6;
case 0x6e77ea:c.instructions+=5;goto B6e77ea;
case 0x6e77eb:c.instructions+=4;goto B6e77eb;
case 0x6e77ec:c.instructions+=3;goto B6e77ec;
case 0x6e77f0:c.instructions+=2;goto B6e77f0;
case 0x6e77f2:c.instructions+=1;goto B6e77f2;
case 0x6e77f7:goto L6e77f7;
case 0x6e77fa:c.instructions+=1;goto B6e77fa;
case 0x6e77fd:goto L6e77fd;
case 0x6e7801:c.instructions+=4;goto B6e7801;
case 0x6e7804:c.instructions+=3;goto B6e7804;
case 0x6e7805:c.instructions+=2;goto B6e7805;
case 0x6e7807:c.instructions+=1;goto B6e7807;
case 0x6e7809:goto L6e7809;
case 0x6e780d:c.instructions+=5;goto B6e780d;
case 0x6e780e:c.instructions+=4;goto B6e780e;
case 0x6e7812:c.instructions+=3;goto B6e7812;
case 0x6e7813:c.instructions+=2;goto B6e7813;
case 0x6e7814:c.instructions+=1;goto B6e7814;
case 0x6e7819:goto L6e7819;
case 0x6e781c:c.instructions+=1;goto B6e781c;
case 0x6e781f:goto L6e781f;
case 0x6e7823:c.instructions+=6;goto B6e7823;
case 0x6e7827:c.instructions+=5;goto B6e7827;
case 0x6e782b:c.instructions+=4;goto B6e782b;
case 0x6e7831:c.instructions+=3;goto B6e7831;
case 0x6e7833:c.instructions+=2;goto B6e7833;
case 0x6e7836:c.instructions+=1;goto B6e7836;
case 0x6e7838:goto L6e7838;
case 0x6e783c:c.instructions+=2;goto B6e783c;
case 0x6e783e:c.instructions+=1;goto B6e783e;
case 0x6e7840:goto L6e7840;
case 0x6e7844:c.instructions+=9;goto B6e7844;
case 0x6e7845:c.instructions+=8;goto B6e7845;
case 0x6e7849:c.instructions+=7;goto B6e7849;
case 0x6e784a:c.instructions+=6;goto B6e784a;
case 0x6e784d:c.instructions+=5;goto B6e784d;
case 0x6e784e:c.instructions+=4;goto B6e784e;
case 0x6e784f:c.instructions+=3;goto B6e784f;
case 0x6e7853:c.instructions+=2;goto B6e7853;
case 0x6e7854:c.instructions+=1;goto B6e7854;
case 0x6e7859:goto L6e7859;
case 0x6e785c:c.instructions+=1;goto B6e785c;
case 0x6e785f:goto L6e785f;
case 0x6e7863:c.instructions+=5;goto B6e7863;
case 0x6e7864:c.instructions+=4;goto B6e7864;
case 0x6e7868:c.instructions+=3;goto B6e7868;
case 0x6e7869:c.instructions+=2;goto B6e7869;
case 0x6e786a:c.instructions+=1;goto B6e786a;
case 0x6e786f:goto L6e786f;
case 0x6e7872:c.instructions+=1;goto B6e7872;
case 0x6e7880:goto L6e7880;
case 0x6e7881:c.instructions+=2;goto B6e7881;
case 0x6e7883:c.instructions+=1;goto B6e7883;
case 0x6e7888:goto L6e7888;
case 0x6e788a:c.instructions+=12;goto B6e788a;
case 0x6e788d:c.instructions+=11;goto B6e788d;
case 0x6e7890:c.instructions+=10;goto B6e7890;
case 0x6e7893:c.instructions+=9;goto B6e7893;
case 0x6e7896:c.instructions+=8;goto B6e7896;
case 0x6e7899:c.instructions+=7;goto B6e7899;
case 0x6e789f:c.instructions+=6;goto B6e789f;
case 0x6e78a2:c.instructions+=5;goto B6e78a2;
case 0x6e78a5:c.instructions+=4;goto B6e78a5;
case 0x6e78ac:c.instructions+=3;goto B6e78ac;
case 0x6e78ae:c.instructions+=2;goto B6e78ae;
case 0x6e78af:c.instructions+=1;goto B6e78af;
case 0x6e78b0:goto L6e78b0;
case 0x6e78b1:c.instructions+=4;goto B6e78b1;
case 0x6e78b4:c.instructions+=3;goto B6e78b4;
case 0x6e78b7:c.instructions+=2;goto B6e78b7;
case 0x6e78b9:c.instructions+=1;goto B6e78b9;
case 0x6e78bb:goto L6e78bb;
case 0x6e78bf:c.instructions+=1;goto B6e78bf;
case 0x6e78c1:goto L6e78c1;
case 0x6e78c5:c.instructions+=2;goto B6e78c5;
case 0x6e78ca:c.instructions+=1;goto B6e78ca;
case 0x6e78cc:goto L6e78cc;
case 0x6e78d0:c.instructions+=7;goto B6e78d0;
case 0x6e78d3:c.instructions+=6;goto B6e78d3;
case 0x6e78d7:c.instructions+=5;goto B6e78d7;
case 0x6e78d9:c.instructions+=4;goto B6e78d9;
case 0x6e78dd:c.instructions+=3;goto B6e78dd;
case 0x6e78df:c.instructions+=2;goto B6e78df;
case 0x6e78e0:c.instructions+=1;goto B6e78e0;
case 0x6e78f0:goto L6e78f0;
case 0x6e78f1:c.instructions+=7;goto B6e78f1;
case 0x6e78f2:c.instructions+=6;goto B6e78f2;
case 0x6e78f4:c.instructions+=5;goto B6e78f4;
case 0x6e78f5:c.instructions+=4;goto B6e78f5;
case 0x6e78f8:c.instructions+=3;goto B6e78f8;
case 0x6e78fc:c.instructions+=2;goto B6e78fc;
case 0x6e78ff:c.instructions+=1;goto B6e78ff;
case 0x6e7905:goto L6e7905;
case 0x6e790b:c.instructions+=6;goto B6e790b;
case 0x6e790d:c.instructions+=5;goto B6e790d;
case 0x6e7910:c.instructions+=4;goto B6e7910;
case 0x6e7911:c.instructions+=3;goto B6e7911;
case 0x6e7914:c.instructions+=2;goto B6e7914;
case 0x6e7915:c.instructions+=1;goto B6e7915;
case 0x6e7918:goto L6e7918;
case 0x6e791b:c.instructions+=8;goto B6e791b;
case 0x6e791e:c.instructions+=7;goto B6e791e;
case 0x6e7922:c.instructions+=6;goto B6e7922;
case 0x6e7928:c.instructions+=5;goto B6e7928;
case 0x6e792a:c.instructions+=4;goto B6e792a;
case 0x6e792d:c.instructions+=3;goto B6e792d;
case 0x6e7930:c.instructions+=2;goto B6e7930;
case 0x6e7931:c.instructions+=1;goto B6e7931;
case 0x6e7934:goto L6e7934;
case 0x6e7937:c.instructions+=8;goto B6e7937;
case 0x6e793a:c.instructions+=7;goto B6e793a;
case 0x6e793e:c.instructions+=6;goto B6e793e;
case 0x6e7944:c.instructions+=5;goto B6e7944;
case 0x6e7946:c.instructions+=4;goto B6e7946;
case 0x6e7949:c.instructions+=3;goto B6e7949;
case 0x6e794c:c.instructions+=2;goto B6e794c;
case 0x6e794d:c.instructions+=1;goto B6e794d;
case 0x6e7950:goto L6e7950;
case 0x6e7953:c.instructions+=4;goto B6e7953;
case 0x6e7955:c.instructions+=3;goto B6e7955;
case 0x6e7959:c.instructions+=2;goto B6e7959;
case 0x6e795c:c.instructions+=1;goto B6e795c;
case 0x6e7962:goto L6e7962;
case 0x6e7964:c.instructions+=1;goto B6e7964;
case 0x6e7965:goto L6e7965;
case 0x6e7967:c.instructions+=38;goto B6e7967;
case 0x6e796d:c.instructions+=37;goto B6e796d;
case 0x6e7970:c.instructions+=36;goto B6e7970;
case 0x6e7973:c.instructions+=35;goto B6e7973;
case 0x6e7976:c.instructions+=34;goto B6e7976;
case 0x6e7979:c.instructions+=33;goto B6e7979;
case 0x6e797d:c.instructions+=32;goto B6e797d;
case 0x6e7980:c.instructions+=31;goto B6e7980;
case 0x6e7984:c.instructions+=30;goto B6e7984;
case 0x6e7988:c.instructions+=29;goto B6e7988;
case 0x6e798b:c.instructions+=28;goto B6e798b;
case 0x6e798c:c.instructions+=27;goto B6e798c;
case 0x6e798e:c.instructions+=26;goto B6e798e;
case 0x6e7992:c.instructions+=25;goto B6e7992;
case 0x6e7996:c.instructions+=24;goto B6e7996;
case 0x6e7999:c.instructions+=23;goto B6e7999;
case 0x6e799d:c.instructions+=22;goto B6e799d;
case 0x6e79a0:c.instructions+=21;goto B6e79a0;
case 0x6e79a6:c.instructions+=20;goto B6e79a6;
case 0x6e79a8:c.instructions+=19;goto B6e79a8;
case 0x6e79ab:c.instructions+=18;goto B6e79ab;
case 0x6e79af:c.instructions+=17;goto B6e79af;
case 0x6e79b3:c.instructions+=16;goto B6e79b3;
case 0x6e79b7:c.instructions+=15;goto B6e79b7;
case 0x6e79ba:c.instructions+=14;goto B6e79ba;
case 0x6e79be:c.instructions+=13;goto B6e79be;
case 0x6e79c1:c.instructions+=12;goto B6e79c1;
case 0x6e79c7:c.instructions+=11;goto B6e79c7;
case 0x6e79c9:c.instructions+=10;goto B6e79c9;
case 0x6e79cd:c.instructions+=9;goto B6e79cd;
case 0x6e79d0:c.instructions+=8;goto B6e79d0;
case 0x6e79d6:c.instructions+=7;goto B6e79d6;
case 0x6e79da:c.instructions+=6;goto B6e79da;
case 0x6e79dc:c.instructions+=5;goto B6e79dc;
case 0x6e79df:c.instructions+=4;goto B6e79df;
case 0x6e79e1:c.instructions+=3;goto B6e79e1;
case 0x6e79e5:c.instructions+=2;goto B6e79e5;
case 0x6e79e7:c.instructions+=1;goto B6e79e7;
case 0x6e79ed:goto L6e79ed;
case 0x6e79ee:goto L6e79ee;
case 0x6e79ef:goto L6e79ef;
case 0x6e79f0:c.instructions+=3;goto B6e79f0;
case 0x6e79f1:c.instructions+=2;goto B6e79f1;
case 0x6e79f2:c.instructions+=1;goto B6e79f2;
case 0x6e7a00:goto L6e7a00;
case 0x6e7a01:c.instructions+=2;goto B6e7a01;
case 0x6e7a03:c.instructions+=1;goto B6e7a03;
case 0x6e7a08:goto L6e7a08;
case 0x6e7a0d:c.instructions+=1;goto B6e7a0d;
case 0x6e7a0f:goto L6e7a0f;
case 0x6e7a11:c.instructions+=2;goto B6e7a11;
case 0x6e7a12:c.instructions+=1;goto B6e7a12;
case 0x6e7a18:goto L6e7a18;
case 0x6e7a1b:goto L6e7a1b;
case 0x6e7a1d:c.instructions+=2;goto B6e7a1d;
case 0x6e7a1e:c.instructions+=1;goto B6e7a1e;
case 0x6e7a30:goto L6e7a30;
case 0x6e7a31:c.instructions+=5;goto B6e7a31;
case 0x6e7a33:c.instructions+=4;goto B6e7a33;
case 0x6e7a36:c.instructions+=3;goto B6e7a36;
case 0x6e7a38:c.instructions+=2;goto B6e7a38;
case 0x6e7a3e:c.instructions+=1;goto B6e7a3e;
case 0x6e7a40:goto L6e7a40;
case 0x6e7a46:c.instructions+=4;goto B6e7a46;
case 0x6e7a49:c.instructions+=3;goto B6e7a49;
case 0x6e7a4b:c.instructions+=2;goto B6e7a4b;
case 0x6e7a4c:c.instructions+=1;goto B6e7a4c;
case 0x6e7a4f:goto L6e7a4f;
case 0x6e7a55:c.instructions+=4;goto B6e7a55;
case 0x6e7a58:c.instructions+=3;goto B6e7a58;
case 0x6e7a5a:c.instructions+=2;goto B6e7a5a;
case 0x6e7a5b:c.instructions+=1;goto B6e7a5b;
case 0x6e7a5e:goto L6e7a5e;
case 0x6e7a64:c.instructions+=4;goto B6e7a64;
case 0x6e7a67:c.instructions+=3;goto B6e7a67;
case 0x6e7a69:c.instructions+=2;goto B6e7a69;
case 0x6e7a6a:c.instructions+=1;goto B6e7a6a;
case 0x6e7a6d:goto L6e7a6d;
case 0x6e7a6f:c.instructions+=2;goto B6e7a6f;
case 0x6e7a70:c.instructions+=1;goto B6e7a70;
case 0x6e7a80:goto L6e7a80;
case 0x6e7a86:c.instructions+=10;goto B6e7a86;
case 0x6e7a8d:c.instructions+=9;goto B6e7a8d;
case 0x6e7a8e:c.instructions+=8;goto B6e7a8e;
case 0x6e7a8f:c.instructions+=7;goto B6e7a8f;
case 0x6e7a90:c.instructions+=6;goto B6e7a90;
case 0x6e7a94:c.instructions+=5;goto B6e7a94;
case 0x6e7a97:c.instructions+=4;goto B6e7a97;
case 0x6e7a9a:c.instructions+=3;goto B6e7a9a;
case 0x6e7a9c:c.instructions+=2;goto B6e7a9c;
case 0x6e7a9d:c.instructions+=1;goto B6e7a9d;
case 0x6e7a9f:goto L6e7a9f;
case 0x6e7aa2:c.instructions+=6;goto B6e7aa2;
case 0x6e7aa6:c.instructions+=5;goto B6e7aa6;
case 0x6e7aa9:c.instructions+=4;goto B6e7aa9;
case 0x6e7aad:c.instructions+=3;goto B6e7aad;
case 0x6e7ab4:c.instructions+=2;goto B6e7ab4;
case 0x6e7ab7:c.instructions+=1;goto B6e7ab7;
case 0x6e7abb:goto L6e7abb;
case 0x6e7ac2:c.instructions+=6;goto B6e7ac2;
case 0x6e7ac5:c.instructions+=5;goto B6e7ac5;
case 0x6e7acb:c.instructions+=4;goto B6e7acb;
case 0x6e7ad2:c.instructions+=3;goto B6e7ad2;
case 0x6e7ad4:c.instructions+=2;goto B6e7ad4;
case 0x6e7ad7:c.instructions+=1;goto B6e7ad7;
case 0x6e7ad9:goto L6e7ad9;
case 0x6e7adf:c.instructions+=4;goto B6e7adf;
case 0x6e7ae3:c.instructions+=3;goto B6e7ae3;
case 0x6e7ae7:c.instructions+=2;goto B6e7ae7;
case 0x6e7aeb:c.instructions+=1;goto B6e7aeb;
case 0x6e7aed:goto L6e7aed;
case 0x6e7af3:c.instructions+=3;goto B6e7af3;
case 0x6e7af7:c.instructions+=2;goto B6e7af7;
case 0x6e7afb:c.instructions+=1;goto B6e7afb;
case 0x6e7aff:goto L6e7aff;
case 0x6e7b02:c.instructions+=5;goto B6e7b02;
case 0x6e7b04:c.instructions+=4;goto B6e7b04;
case 0x6e7b08:c.instructions+=3;goto B6e7b08;
case 0x6e7b0c:c.instructions+=2;goto B6e7b0c;
case 0x6e7b10:c.instructions+=1;goto B6e7b10;
case 0x6e7b12:goto L6e7b12;
case 0x6e7b14:c.instructions+=1;goto B6e7b14;
case 0x6e7b16:goto L6e7b16;
case 0x6e7b18:c.instructions+=1;goto B6e7b18;
case 0x6e7b1a:goto L6e7b1a;
case 0x6e7b1e:c.instructions+=2;goto B6e7b1e;
case 0x6e7b20:c.instructions+=1;goto B6e7b20;
case 0x6e7b22:goto L6e7b22;
case 0x6e7b25:c.instructions+=1;goto B6e7b25;
case 0x6e7b27:goto L6e7b27;
case 0x6e7b2a:c.instructions+=2;goto B6e7b2a;
case 0x6e7b2c:c.instructions+=1;goto B6e7b2c;
case 0x6e7b2e:goto L6e7b2e;
case 0x6e7b30:c.instructions+=1;goto B6e7b30;
case 0x6e7b32:goto L6e7b32;
case 0x6e7b35:c.instructions+=2;goto B6e7b35;
case 0x6e7b38:c.instructions+=1;goto B6e7b38;
case 0x6e7b3a:goto L6e7b3a;
case 0x6e7b3c:c.instructions+=1;goto B6e7b3c;
case 0x6e7b3e:goto L6e7b3e;
case 0x6e7b3f:goto L6e7b3f;
case 0x6e7b43:c.instructions+=3;goto B6e7b43;
case 0x6e7b45:c.instructions+=2;goto B6e7b45;
case 0x6e7b48:c.instructions+=1;goto B6e7b48;
case 0x6e7b4a:goto L6e7b4a;
case 0x6e7b4e:c.instructions+=3;goto B6e7b4e;
case 0x6e7b51:c.instructions+=2;goto B6e7b51;
case 0x6e7b53:c.instructions+=1;goto B6e7b53;
case 0x6e7b55:goto L6e7b55;
case 0x6e7b58:goto L6e7b58;
case 0x6e7b5b:c.instructions+=2;goto B6e7b5b;
case 0x6e7b5d:c.instructions+=1;goto B6e7b5d;
case 0x6e7b5f:goto L6e7b5f;
case 0x6e7b60:c.instructions+=3;goto B6e7b60;
case 0x6e7b63:c.instructions+=2;goto B6e7b63;
case 0x6e7b65:c.instructions+=1;goto B6e7b65;
case 0x6e7b67:goto L6e7b67;
case 0x6e7b69:goto L6e7b69;
case 0x6e7b6b:c.instructions+=1;goto B6e7b6b;
case 0x6e7b6d:goto L6e7b6d;
case 0x6e7b70:goto L6e7b70;
case 0x6e7b73:c.instructions+=2;goto B6e7b73;
case 0x6e7b75:c.instructions+=1;goto B6e7b75;
case 0x6e7b77:goto L6e7b77;
case 0x6e7b78:c.instructions+=3;goto B6e7b78;
case 0x6e7b7b:c.instructions+=2;goto B6e7b7b;
case 0x6e7b7d:c.instructions+=1;goto B6e7b7d;
case 0x6e7b7f:goto L6e7b7f;
case 0x6e7b82:goto L6e7b82;
case 0x6e7b86:c.instructions+=37;goto B6e7b86;
case 0x6e7b89:c.instructions+=36;goto B6e7b89;
case 0x6e7b8e:c.instructions+=35;goto B6e7b8e;
case 0x6e7b90:c.instructions+=34;goto B6e7b90;
case 0x6e7b95:c.instructions+=33;goto B6e7b95;
case 0x6e7b97:c.instructions+=32;goto B6e7b97;
case 0x6e7b99:c.instructions+=31;goto B6e7b99;
case 0x6e7b9b:c.instructions+=30;goto B6e7b9b;
case 0x6e7b9d:c.instructions+=29;goto B6e7b9d;
case 0x6e7b9f:c.instructions+=28;goto B6e7b9f;
case 0x6e7ba1:c.instructions+=27;goto B6e7ba1;
case 0x6e7ba5:c.instructions+=26;goto B6e7ba5;
case 0x6e7ba7:c.instructions+=25;goto B6e7ba7;
case 0x6e7bab:c.instructions+=24;goto B6e7bab;
case 0x6e7baf:c.instructions+=23;goto B6e7baf;
case 0x6e7bb1:c.instructions+=22;goto B6e7bb1;
case 0x6e7bb6:c.instructions+=21;goto B6e7bb6;
case 0x6e7bba:c.instructions+=20;goto B6e7bba;
case 0x6e7bbc:c.instructions+=19;goto B6e7bbc;
case 0x6e7bc0:c.instructions+=18;goto B6e7bc0;
case 0x6e7bc2:c.instructions+=17;goto B6e7bc2;
case 0x6e7bc6:c.instructions+=16;goto B6e7bc6;
case 0x6e7bca:c.instructions+=15;goto B6e7bca;
case 0x6e7bcb:c.instructions+=14;goto B6e7bcb;
case 0x6e7bce:c.instructions+=13;goto B6e7bce;
case 0x6e7bcf:c.instructions+=12;goto B6e7bcf;
case 0x6e7bd2:c.instructions+=11;goto B6e7bd2;
case 0x6e7bd5:c.instructions+=10;goto B6e7bd5;
case 0x6e7bd9:c.instructions+=9;goto B6e7bd9;
case 0x6e7bdb:c.instructions+=8;goto B6e7bdb;
case 0x6e7bde:c.instructions+=7;goto B6e7bde;
case 0x6e7be0:c.instructions+=6;goto B6e7be0;
case 0x6e7be4:c.instructions+=5;goto B6e7be4;
case 0x6e7be6:c.instructions+=4;goto B6e7be6;
case 0x6e7be8:c.instructions+=3;goto B6e7be8;
case 0x6e7bec:c.instructions+=2;goto B6e7bec;
case 0x6e7bf0:c.instructions+=1;goto B6e7bf0;
case 0x6e7bf2:goto L6e7bf2;
case 0x6e7bf5:c.instructions+=8;goto B6e7bf5;
case 0x6e7bf9:c.instructions+=7;goto B6e7bf9;
case 0x6e7bfe:c.instructions+=6;goto B6e7bfe;
case 0x6e7c00:c.instructions+=5;goto B6e7c00;
case 0x6e7c03:c.instructions+=4;goto B6e7c03;
case 0x6e7c07:c.instructions+=3;goto B6e7c07;
case 0x6e7c08:c.instructions+=2;goto B6e7c08;
case 0x6e7c0a:c.instructions+=1;goto B6e7c0a;
case 0x6e7c0c:goto L6e7c0c;
case 0x6e7c10:c.instructions+=3;goto B6e7c10;
case 0x6e7c14:c.instructions+=2;goto B6e7c14;
case 0x6e7c16:c.instructions+=1;goto B6e7c16;
case 0x6e7c18:goto L6e7c18;
case 0x6e7c1d:c.instructions+=3;goto B6e7c1d;
case 0x6e7c1f:c.instructions+=2;goto B6e7c1f;
case 0x6e7c24:c.instructions+=1;goto B6e7c24;
case 0x6e7c26:goto L6e7c26;
case 0x6e7c2b:goto L6e7c2b;
case 0x6e7c2f:c.instructions+=2;goto B6e7c2f;
case 0x6e7c32:c.instructions+=1;goto B6e7c32;
case 0x6e7c34:goto L6e7c34;
case 0x6e7c37:c.instructions+=10;goto B6e7c37;
case 0x6e7c3a:c.instructions+=9;goto B6e7c3a;
case 0x6e7c3d:c.instructions+=8;goto B6e7c3d;
case 0x6e7c41:c.instructions+=7;goto B6e7c41;
case 0x6e7c44:c.instructions+=6;goto B6e7c44;
case 0x6e7c48:c.instructions+=5;goto B6e7c48;
case 0x6e7c4b:c.instructions+=4;goto B6e7c4b;
case 0x6e7c4e:c.instructions+=3;goto B6e7c4e;
case 0x6e7c52:c.instructions+=2;goto B6e7c52;
case 0x6e7c59:c.instructions+=1;goto B6e7c59;
case 0x6e7c5e:goto L6e7c5e;
case 0x6e7c61:c.instructions+=1;goto B6e7c61;
case 0x6e7c63:goto L6e7c63;
case 0x6e7c67:c.instructions+=1;goto B6e7c67;
case 0x6e7c69:goto L6e7c69;
case 0x6e7c6d:c.instructions+=2;goto B6e7c6d;
case 0x6e7c6f:c.instructions+=1;goto B6e7c6f;
case 0x6e7c71:goto L6e7c71;
case 0x6e7c73:c.instructions+=1;goto B6e7c73;
case 0x6e7c75:goto L6e7c75;
case 0x6e7c77:c.instructions+=2;goto B6e7c77;
case 0x6e7c79:c.instructions+=1;goto B6e7c79;
case 0x6e7c7b:goto L6e7c7b;
case 0x6e7c7f:c.instructions+=1;goto B6e7c7f;
case 0x6e7c81:goto L6e7c81;
case 0x6e7c86:c.instructions+=8;goto B6e7c86;
case 0x6e7c88:c.instructions+=7;goto B6e7c88;
case 0x6e7c8b:c.instructions+=6;goto B6e7c8b;
case 0x6e7c90:c.instructions+=5;goto B6e7c90;
case 0x6e7c92:c.instructions+=4;goto B6e7c92;
case 0x6e7c99:c.instructions+=3;goto B6e7c99;
case 0x6e7c9c:c.instructions+=2;goto B6e7c9c;
case 0x6e7c9f:c.instructions+=1;goto B6e7c9f;
case 0x6e7ca1:goto L6e7ca1;
case 0x6e7ca5:c.instructions+=10;goto B6e7ca5;
case 0x6e7ca9:c.instructions+=9;goto B6e7ca9;
case 0x6e7cac:c.instructions+=8;goto B6e7cac;
case 0x6e7cb0:c.instructions+=7;goto B6e7cb0;
case 0x6e7cb2:c.instructions+=6;goto B6e7cb2;
case 0x6e7cb6:c.instructions+=5;goto B6e7cb6;
case 0x6e7cb9:c.instructions+=4;goto B6e7cb9;
case 0x6e7cbb:c.instructions+=3;goto B6e7cbb;
case 0x6e7cbe:c.instructions+=2;goto B6e7cbe;
case 0x6e7cc1:c.instructions+=1;goto B6e7cc1;
case 0x6e7cc5:goto L6e7cc5;
case 0x6e7cc9:c.instructions+=4;goto B6e7cc9;
case 0x6e7cca:c.instructions+=3;goto B6e7cca;
case 0x6e7ccd:c.instructions+=2;goto B6e7ccd;
case 0x6e7ccf:c.instructions+=1;goto B6e7ccf;
case 0x6e7cd1:goto L6e7cd1;
case 0x6e7cd3:goto L6e7cd3;
case 0x6e7cd7:c.instructions+=2;goto B6e7cd7;
case 0x6e7cd9:c.instructions+=1;goto B6e7cd9;
case 0x6e7cdf:goto L6e7cdf;
case 0x6e7ce3:c.instructions+=14;goto B6e7ce3;
case 0x6e7ce7:c.instructions+=13;goto B6e7ce7;
case 0x6e7cea:c.instructions+=12;goto B6e7cea;
case 0x6e7ced:c.instructions+=11;goto B6e7ced;
case 0x6e7cef:c.instructions+=10;goto B6e7cef;
case 0x6e7cf3:c.instructions+=9;goto B6e7cf3;
case 0x6e7cf7:c.instructions+=8;goto B6e7cf7;
case 0x6e7cf9:c.instructions+=7;goto B6e7cf9;
case 0x6e7cfb:c.instructions+=6;goto B6e7cfb;
case 0x6e7cfd:c.instructions+=5;goto B6e7cfd;
case 0x6e7d01:c.instructions+=4;goto B6e7d01;
case 0x6e7d05:c.instructions+=3;goto B6e7d05;
case 0x6e7d09:c.instructions+=2;goto B6e7d09;
case 0x6e7d0d:c.instructions+=1;goto B6e7d0d;
case 0x6e7d10:goto L6e7d10;
case 0x6e7d12:c.instructions+=2;goto B6e7d12;
case 0x6e7d14:c.instructions+=1;goto B6e7d14;
case 0x6e7d16:goto L6e7d16;
case 0x6e7d18:c.instructions+=1;goto B6e7d18;
case 0x6e7d20:goto L6e7d20;
case 0x6e7d24:c.instructions+=9;goto B6e7d24;
case 0x6e7d28:c.instructions+=8;goto B6e7d28;
case 0x6e7d2a:c.instructions+=7;goto B6e7d2a;
case 0x6e7d2d:c.instructions+=6;goto B6e7d2d;
case 0x6e7d32:c.instructions+=5;goto B6e7d32;
case 0x6e7d34:c.instructions+=4;goto B6e7d34;
case 0x6e7d3b:c.instructions+=3;goto B6e7d3b;
case 0x6e7d3e:c.instructions+=2;goto B6e7d3e;
case 0x6e7d41:c.instructions+=1;goto B6e7d41;
case 0x6e7d43:goto L6e7d43;
case 0x6e7d46:c.instructions+=11;goto B6e7d46;
case 0x6e7d4a:c.instructions+=10;goto B6e7d4a;
case 0x6e7d4d:c.instructions+=9;goto B6e7d4d;
case 0x6e7d50:c.instructions+=8;goto B6e7d50;
case 0x6e7d54:c.instructions+=7;goto B6e7d54;
case 0x6e7d56:c.instructions+=6;goto B6e7d56;
case 0x6e7d59:c.instructions+=5;goto B6e7d59;
case 0x6e7d5d:c.instructions+=4;goto B6e7d5d;
case 0x6e7d60:c.instructions+=3;goto B6e7d60;
case 0x6e7d63:c.instructions+=2;goto B6e7d63;
case 0x6e7d65:c.instructions+=1;goto B6e7d65;
case 0x6e7d67:goto L6e7d67;
case 0x6e7d6b:c.instructions+=5;goto B6e7d6b;
case 0x6e7d6c:c.instructions+=4;goto B6e7d6c;
case 0x6e7d6f:c.instructions+=3;goto B6e7d6f;
case 0x6e7d70:c.instructions+=2;goto B6e7d70;
case 0x6e7d72:c.instructions+=1;goto B6e7d72;
case 0x6e7d74:goto L6e7d74;
case 0x6e7d78:c.instructions+=1;goto B6e7d78;
case 0x6e7d7c:goto L6e7d7c;
case 0x6e7d80:c.instructions+=9;goto B6e7d80;
case 0x6e7d84:c.instructions+=8;goto B6e7d84;
case 0x6e7d88:c.instructions+=7;goto B6e7d88;
case 0x6e7d8a:c.instructions+=6;goto B6e7d8a;
case 0x6e7d8c:c.instructions+=5;goto B6e7d8c;
case 0x6e7d8d:c.instructions+=4;goto B6e7d8d;
case 0x6e7d91:c.instructions+=3;goto B6e7d91;
case 0x6e7d95:c.instructions+=2;goto B6e7d95;
case 0x6e7d99:c.instructions+=1;goto B6e7d99;
case 0x6e7d9f:goto L6e7d9f;
case 0x6e7da4:goto L6e7da4;
case 0x6e7daa:goto L6e7daa;
case 0x6e7dae:c.instructions+=9;goto B6e7dae;
case 0x6e7db2:c.instructions+=8;goto B6e7db2;
case 0x6e7db6:c.instructions+=7;goto B6e7db6;
case 0x6e7db9:c.instructions+=6;goto B6e7db9;
case 0x6e7dbc:c.instructions+=5;goto B6e7dbc;
case 0x6e7dbe:c.instructions+=4;goto B6e7dbe;
case 0x6e7dbf:c.instructions+=3;goto B6e7dbf;
case 0x6e7dc1:c.instructions+=2;goto B6e7dc1;
case 0x6e7dc5:c.instructions+=1;goto B6e7dc5;
case 0x6e7dcb:goto L6e7dcb;
case 0x6e7dcf:c.instructions+=10;goto B6e7dcf;
case 0x6e7dd3:c.instructions+=9;goto B6e7dd3;
case 0x6e7dd7:c.instructions+=8;goto B6e7dd7;
case 0x6e7dd9:c.instructions+=7;goto B6e7dd9;
case 0x6e7ddb:c.instructions+=6;goto B6e7ddb;
case 0x6e7ddd:c.instructions+=5;goto B6e7ddd;
case 0x6e7dde:c.instructions+=4;goto B6e7dde;
case 0x6e7de2:c.instructions+=3;goto B6e7de2;
case 0x6e7de6:c.instructions+=2;goto B6e7de6;
case 0x6e7dea:c.instructions+=1;goto B6e7dea;
case 0x6e7df0:goto L6e7df0;
case 0x6e7df2:c.instructions+=2;goto B6e7df2;
case 0x6e7df4:c.instructions+=1;goto B6e7df4;
case 0x6e7df6:goto L6e7df6;
case 0x6e7df8:c.instructions+=1;goto B6e7df8;
case 0x6e7e00:goto L6e7e00;
case 0x6e7e04:c.instructions+=9;goto B6e7e04;
case 0x6e7e08:c.instructions+=8;goto B6e7e08;
case 0x6e7e0a:c.instructions+=7;goto B6e7e0a;
case 0x6e7e0d:c.instructions+=6;goto B6e7e0d;
case 0x6e7e12:c.instructions+=5;goto B6e7e12;
case 0x6e7e14:c.instructions+=4;goto B6e7e14;
case 0x6e7e1b:c.instructions+=3;goto B6e7e1b;
case 0x6e7e1e:c.instructions+=2;goto B6e7e1e;
case 0x6e7e21:c.instructions+=1;goto B6e7e21;
case 0x6e7e23:goto L6e7e23;
case 0x6e7e26:c.instructions+=11;goto B6e7e26;
case 0x6e7e2a:c.instructions+=10;goto B6e7e2a;
case 0x6e7e2d:c.instructions+=9;goto B6e7e2d;
case 0x6e7e30:c.instructions+=8;goto B6e7e30;
case 0x6e7e34:c.instructions+=7;goto B6e7e34;
case 0x6e7e36:c.instructions+=6;goto B6e7e36;
case 0x6e7e39:c.instructions+=5;goto B6e7e39;
case 0x6e7e3d:c.instructions+=4;goto B6e7e3d;
case 0x6e7e40:c.instructions+=3;goto B6e7e40;
case 0x6e7e43:c.instructions+=2;goto B6e7e43;
case 0x6e7e45:c.instructions+=1;goto B6e7e45;
case 0x6e7e47:goto L6e7e47;
case 0x6e7e4b:c.instructions+=5;goto B6e7e4b;
case 0x6e7e4c:c.instructions+=4;goto B6e7e4c;
case 0x6e7e4f:c.instructions+=3;goto B6e7e4f;
case 0x6e7e50:c.instructions+=2;goto B6e7e50;
case 0x6e7e52:c.instructions+=1;goto B6e7e52;
case 0x6e7e54:goto L6e7e54;
case 0x6e7e58:c.instructions+=1;goto B6e7e58;
case 0x6e7e5c:goto L6e7e5c;
case 0x6e7e60:c.instructions+=9;goto B6e7e60;
case 0x6e7e64:c.instructions+=8;goto B6e7e64;
case 0x6e7e68:c.instructions+=7;goto B6e7e68;
case 0x6e7e6a:c.instructions+=6;goto B6e7e6a;
case 0x6e7e6c:c.instructions+=5;goto B6e7e6c;
case 0x6e7e6d:c.instructions+=4;goto B6e7e6d;
case 0x6e7e71:c.instructions+=3;goto B6e7e71;
case 0x6e7e75:c.instructions+=2;goto B6e7e75;
case 0x6e7e79:c.instructions+=1;goto B6e7e79;
case 0x6e7e7f:goto L6e7e7f;
case 0x6e7e83:c.instructions+=8;goto B6e7e83;
case 0x6e7e87:c.instructions+=7;goto B6e7e87;
case 0x6e7e8a:c.instructions+=6;goto B6e7e8a;
case 0x6e7e8d:c.instructions+=5;goto B6e7e8d;
case 0x6e7e8f:c.instructions+=4;goto B6e7e8f;
case 0x6e7e92:c.instructions+=3;goto B6e7e92;
case 0x6e7e96:c.instructions+=2;goto B6e7e96;
case 0x6e7e9e:c.instructions+=1;goto B6e7e9e;
case 0x6e7ea0:goto L6e7ea0;
case 0x6e7ea4:c.instructions+=5;goto B6e7ea4;
case 0x6e7eab:c.instructions+=4;goto B6e7eab;
case 0x6e7ead:c.instructions+=3;goto B6e7ead;
case 0x6e7eaf:c.instructions+=2;goto B6e7eaf;
case 0x6e7eb2:c.instructions+=1;goto B6e7eb2;
case 0x6e7eb8:goto L6e7eb8;
case 0x6e7ebf:c.instructions+=3;goto B6e7ebf;
case 0x6e7ec1:c.instructions+=2;goto B6e7ec1;
case 0x6e7ec3:c.instructions+=1;goto B6e7ec3;
case 0x6e7ec5:goto L6e7ec5;
case 0x6e7ec7:c.instructions+=1;goto B6e7ec7;
case 0x6e7ec9:goto L6e7ec9;
case 0x6e7ed0:c.instructions+=4;goto B6e7ed0;
case 0x6e7ed6:c.instructions+=3;goto B6e7ed6;
case 0x6e7ed8:c.instructions+=2;goto B6e7ed8;
case 0x6e7edb:c.instructions+=1;goto B6e7edb;
case 0x6e7edd:goto L6e7edd;
case 0x6e7ee0:c.instructions+=6;goto B6e7ee0;
case 0x6e7ee4:c.instructions+=5;goto B6e7ee4;
case 0x6e7ee6:c.instructions+=4;goto B6e7ee6;
case 0x6e7eea:c.instructions+=3;goto B6e7eea;
case 0x6e7ef1:c.instructions+=2;goto B6e7ef1;
case 0x6e7ef5:c.instructions+=1;goto B6e7ef5;
case 0x6e7ef7:goto L6e7ef7;
case 0x6e7ef9:c.instructions+=1;goto B6e7ef9;
case 0x6e7efb:goto L6e7efb;
case 0x6e7f00:c.instructions+=7;goto B6e7f00;
case 0x6e7f04:c.instructions+=6;goto B6e7f04;
case 0x6e7f08:c.instructions+=5;goto B6e7f08;
case 0x6e7f0f:c.instructions+=4;goto B6e7f0f;
case 0x6e7f11:c.instructions+=3;goto B6e7f11;
case 0x6e7f13:c.instructions+=2;goto B6e7f13;
case 0x6e7f16:c.instructions+=1;goto B6e7f16;
case 0x6e7f1c:goto L6e7f1c;
case 0x6e7f20:c.instructions+=7;goto B6e7f20;
case 0x6e7f27:c.instructions+=6;goto B6e7f27;
case 0x6e7f29:c.instructions+=5;goto B6e7f29;
case 0x6e7f2d:c.instructions+=4;goto B6e7f2d;
case 0x6e7f2f:c.instructions+=3;goto B6e7f2f;
case 0x6e7f33:c.instructions+=2;goto B6e7f33;
case 0x6e7f35:c.instructions+=1;goto B6e7f35;
case 0x6e7f37:goto L6e7f37;
case 0x6e7f3b:goto L6e7f3b;
case 0x6e7f3d:goto L6e7f3d;
case 0x6e7f3f:c.instructions+=3;goto B6e7f3f;
case 0x6e7f42:c.instructions+=2;goto B6e7f42;
case 0x6e7f46:c.instructions+=1;goto B6e7f46;
case 0x6e7f4c:goto L6e7f4c;
case 0x6e7f50:c.instructions+=3;goto B6e7f50;
case 0x6e7f51:c.instructions+=2;goto B6e7f51;
case 0x6e7f53:c.instructions+=1;goto B6e7f53;
case 0x6e7f59:goto L6e7f59;
case 0x6e7f5d:c.instructions+=19;goto B6e7f5d;
case 0x6e7f61:c.instructions+=18;goto B6e7f61;
case 0x6e7f63:c.instructions+=17;goto B6e7f63;
case 0x6e7f65:c.instructions+=16;goto B6e7f65;
case 0x6e7f68:c.instructions+=15;goto B6e7f68;
case 0x6e7f6d:c.instructions+=14;goto B6e7f6d;
case 0x6e7f6f:c.instructions+=13;goto B6e7f6f;
case 0x6e7f71:c.instructions+=12;goto B6e7f71;
case 0x6e7f74:c.instructions+=11;goto B6e7f74;
case 0x6e7f75:c.instructions+=10;goto B6e7f75;
case 0x6e7f78:c.instructions+=9;goto B6e7f78;
case 0x6e7f79:c.instructions+=8;goto B6e7f79;
case 0x6e7f7c:c.instructions+=7;goto B6e7f7c;
case 0x6e7f7f:c.instructions+=6;goto B6e7f7f;
case 0x6e7f81:c.instructions+=5;goto B6e7f81;
case 0x6e7f85:c.instructions+=4;goto B6e7f85;
case 0x6e7f89:c.instructions+=3;goto B6e7f89;
case 0x6e7f8c:c.instructions+=2;goto B6e7f8c;
case 0x6e7f90:c.instructions+=1;goto B6e7f90;
case 0x6e7f92:goto L6e7f92;
case 0x6e7f94:c.instructions+=2;goto B6e7f94;
case 0x6e7f96:c.instructions+=1;goto B6e7f96;
case 0x6e7f9c:goto L6e7f9c;
case 0x6e7fa0:goto L6e7fa0;
case 0x6e7fa5:c.instructions+=8;goto B6e7fa5;
case 0x6e7fa7:c.instructions+=7;goto B6e7fa7;
case 0x6e7faa:c.instructions+=6;goto B6e7faa;
case 0x6e7faf:c.instructions+=5;goto B6e7faf;
case 0x6e7fb1:c.instructions+=4;goto B6e7fb1;
case 0x6e7fb8:c.instructions+=3;goto B6e7fb8;
case 0x6e7fbb:c.instructions+=2;goto B6e7fbb;
case 0x6e7fbe:c.instructions+=1;goto B6e7fbe;
case 0x6e7fc0:goto L6e7fc0;
case 0x6e7fc3:c.instructions+=10;goto B6e7fc3;
case 0x6e7fc6:c.instructions+=9;goto B6e7fc6;
case 0x6e7fc9:c.instructions+=8;goto B6e7fc9;
case 0x6e7fcc:c.instructions+=7;goto B6e7fcc;
case 0x6e7fcf:c.instructions+=6;goto B6e7fcf;
case 0x6e7fd2:c.instructions+=5;goto B6e7fd2;
case 0x6e7fd6:c.instructions+=4;goto B6e7fd6;
case 0x6e7fd8:c.instructions+=3;goto B6e7fd8;
case 0x6e7fdf:c.instructions+=2;goto B6e7fdf;
case 0x6e7fe2:c.instructions+=1;goto B6e7fe2;
case 0x6e7fe6:goto L6e7fe6;
case 0x6e7fea:c.instructions+=4;goto B6e7fea;
case 0x6e7fed:c.instructions+=3;goto B6e7fed;
case 0x6e7fee:c.instructions+=2;goto B6e7fee;
case 0x6e7ff0:c.instructions+=1;goto B6e7ff0;
case 0x6e7ff2:goto L6e7ff2;
case 0x6e7ff7:goto L6e7ff7;
case 0x6e7ff9:c.instructions+=1;goto B6e7ff9;
case 0x6e7ffe:goto L6e7ffe;
default:missing_instruction(c.pc);}
B6e7003:L6e7003:{c.instructions+=8;NFSU2_TR(0x6e7003);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e7006:{NFSU2_TR(0x6e7006);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7009:{NFSU2_TR(0x6e7009);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e700d:{NFSU2_TR(0x6e700d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e7011:{NFSU2_TR(0x6e7011);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e7013:{NFSU2_TR(0x6e7013);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e7015:{NFSU2_TR(0x6e7015);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e7018:{NFSU2_TR(0x6e7018);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e703a;}}
}
B6e701a:L6e701a:{c.instructions+=6;NFSU2_TR(0x6e701a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e701e:{NFSU2_TR(0x6e701e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e7021:{NFSU2_TR(0x6e7021);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7022:{NFSU2_TR(0x6e7022);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7023:{NFSU2_TR(0x6e7023);
__builtin_memmove((R+4),(R+12),4);
}
B6e7025:{NFSU2_TR(0x6e7025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e702aull));
TAIL_STATIC(0x6e6d40u,6e6);
}
B6e702a:L6e702a:{c.instructions+=5;NFSU2_TR(0x6e702a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e702d:{NFSU2_TR(0x6e702d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e7031:{NFSU2_TR(0x6e7031);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7032:{NFSU2_TR(0x6e7032);
__builtin_memmove((R+4),(R+20),4);
}
B6e7034:{NFSU2_TR(0x6e7034);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7036ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6e7036:L6e7036:{c.instructions+=2;NFSU2_TR(0x6e7036);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e7038:{NFSU2_TR(0x6e7038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e704f;}}
}
B6e703a:L6e703a:{c.instructions+=4;NFSU2_TR(0x6e703a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e703e:{NFSU2_TR(0x6e703e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e703f:{NFSU2_TR(0x6e703f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7041:{NFSU2_TR(0x6e7041);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e6fe8u,6e6);}
}
B6e7043:L6e7043:{c.instructions+=7;NFSU2_TR(0x6e7043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e7044:{NFSU2_TR(0x6e7044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7045:{NFSU2_TR(0x6e7045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e7046:{NFSU2_TR(0x6e7046);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e7048:{NFSU2_TR(0x6e7048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e7049:{NFSU2_TR(0x6e7049);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e704c:{NFSU2_TR(0x6e704c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e704f:L6e704f:{c.instructions+=10;NFSU2_TR(0x6e704f);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7053:{NFSU2_TR(0x6e7053);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7057:{NFSU2_TR(0x6e7057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e7058:{NFSU2_TR(0x6e7058);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e705a:{NFSU2_TR(0x6e705a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e705b:{NFSU2_TR(0x6e705b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e705c:{NFSU2_TR(0x6e705c);
w1(R+0,u8(0x1ull));
}
B6e705e:{NFSU2_TR(0x6e705e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e705f:{NFSU2_TR(0x6e705f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e7062:{NFSU2_TR(0x6e7062);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7070:L6e7070:{c.instructions+=3;NFSU2_TR(0x6e7070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6e7073:{NFSU2_TR(0x6e7073);
__builtin_memmove((R+4),(R+16),4);
}
B6e7077:{NFSU2_TR(0x6e7077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e707cull));
TAIL_STATIC(0x6f0c70u,6f0);
}
B6e707c:L6e707c:{c.instructions+=5;NFSU2_TR(0x6e707c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7080:{NFSU2_TR(0x6e7080);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7084:{NFSU2_TR(0x6e7084);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7087:{NFSU2_TR(0x6e7087);
__builtin_memmove((R+4),(R+16),4);
}
B6e708b:{NFSU2_TR(0x6e708b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7090ull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e7090:L6e7090:{c.instructions+=2;NFSU2_TR(0x6e7090);
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
B6e7093:{NFSU2_TR(0x6e7093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e70a0:L6e70a0:{c.instructions+=3;NFSU2_TR(0x6e70a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6e70a3:{NFSU2_TR(0x6e70a3);
__builtin_memmove((R+4),(R+16),4);
}
B6e70a7:{NFSU2_TR(0x6e70a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e70acull));
TAIL_STATIC(0x6f1020u,6f1);
}
B6e70ac:L6e70ac:{c.instructions+=5;NFSU2_TR(0x6e70ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e70b0:{NFSU2_TR(0x6e70b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e70b4:{NFSU2_TR(0x6e70b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e70b7:{NFSU2_TR(0x6e70b7);
__builtin_memmove((R+4),(R+16),4);
}
B6e70bb:{NFSU2_TR(0x6e70bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e70c0ull));
TAIL_STATIC(0x6f1040u,6f1);
}
B6e70c0:L6e70c0:{c.instructions+=2;NFSU2_TR(0x6e70c0);
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
B6e70c3:{NFSU2_TR(0x6e70c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e70d0:L6e70d0:{c.instructions+=5;NFSU2_TR(0x6e70d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6e70d3:{NFSU2_TR(0x6e70d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e70d4:{NFSU2_TR(0x6e70d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e70d5:{NFSU2_TR(0x6e70d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e70d9:{NFSU2_TR(0x6e70d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e70deull));
TAIL_STATIC(0x6f2800u,6f2);
}
B6e70de:L6e70de:{c.instructions+=5;NFSU2_TR(0x6e70de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e70e2:{NFSU2_TR(0x6e70e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e70e6:{NFSU2_TR(0x6e70e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e70ea:{NFSU2_TR(0x6e70ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e70ed:{NFSU2_TR(0x6e70ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e70f2ull));
TAIL_STATIC(0x6f2830u,6f2);
}
B6e70f2:L6e70f2:{c.instructions+=3;NFSU2_TR(0x6e70f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e70f5:{NFSU2_TR(0x6e70f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e70f7:{NFSU2_TR(0x6e70f7);
if(r1(R+518)){{goto L6e7121;}}
}
B6e70f9:L6e70f9:{c.instructions+=4;NFSU2_TR(0x6e70f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e70fa:{NFSU2_TR(0x6e70fa);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e70fe:{NFSU2_TR(0x6e70fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7101:{NFSU2_TR(0x6e7101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7106ull));
TAIL_STATIC(0x6f1020u,6f1);
}
B6e7106:L6e7106:{c.instructions+=4;NFSU2_TR(0x6e7106);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e710a:{NFSU2_TR(0x6e710a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6e710c:{NFSU2_TR(0x6e710c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e7110:{NFSU2_TR(0x6e7110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7115ull));
TAIL_STATIC(0x6f1040u,6f1);
}
B6e7115:L6e7115:{c.instructions+=4;NFSU2_TR(0x6e7115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7117:{NFSU2_TR(0x6e7117);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7118:{NFSU2_TR(0x6e7118);
__builtin_memmove((R+4),(R+24),4);
}
B6e711a:{NFSU2_TR(0x6e711a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e711dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e711d:L6e711d:{c.instructions+=2;NFSU2_TR(0x6e711d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7120:{NFSU2_TR(0x6e7120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7121:L6e7121:{c.instructions+=4;NFSU2_TR(0x6e7121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e7122:{NFSU2_TR(0x6e7122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e7123:{NFSU2_TR(0x6e7123);
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
B6e7126:{NFSU2_TR(0x6e7126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7130:L6e7130:{c.instructions+=61;NFSU2_TR(0x6e7130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6e7133:{NFSU2_TR(0x6e7133);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7137:{NFSU2_TR(0x6e7137);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7139:{NFSU2_TR(0x6e7139);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e713f:{NFSU2_TR(0x6e713f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7142:{NFSU2_TR(0x6e7142);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7148:{NFSU2_TR(0x6e7148);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e714b:{NFSU2_TR(0x6e714b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e714f:{NFSU2_TR(0x6e714f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7155:{NFSU2_TR(0x6e7155);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7159:{NFSU2_TR(0x6e7159);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e715b:{NFSU2_TR(0x6e715b);
__asm__ volatile(".byte 0xd9,0xff":::"memory");
}
B6e715d:{NFSU2_TR(0x6e715d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7161:{NFSU2_TR(0x6e7161);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e7163:{NFSU2_TR(0x6e7163);
__asm__ volatile(".byte 0xd9,0xff":::"memory");
}
B6e7165:{NFSU2_TR(0x6e7165);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7169:{NFSU2_TR(0x6e7169);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e716d:{NFSU2_TR(0x6e716d);
__asm__ volatile(".byte 0xd9,0xff":::"memory");
}
B6e716f:{NFSU2_TR(0x6e716f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7173:{NFSU2_TR(0x6e7173);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e7175:{NFSU2_TR(0x6e7175);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B6e7177:{NFSU2_TR(0x6e7177);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e717b:{NFSU2_TR(0x6e717b);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B6e717d:{NFSU2_TR(0x6e717d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7181:{NFSU2_TR(0x6e7181);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B6e7183:{NFSU2_TR(0x6e7183);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7187:{NFSU2_TR(0x6e7187);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e718b:{NFSU2_TR(0x6e718b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e718f:{NFSU2_TR(0x6e718f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7193:{NFSU2_TR(0x6e7193);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e7195:{NFSU2_TR(0x6e7195);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7199:{NFSU2_TR(0x6e7199);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e719d:{NFSU2_TR(0x6e719d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e719f:{NFSU2_TR(0x6e719f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e71a3:{NFSU2_TR(0x6e71a3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e71a7:{NFSU2_TR(0x6e71a7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e71ab:{NFSU2_TR(0x6e71ab);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6e71ad:{NFSU2_TR(0x6e71ad);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e71af:{NFSU2_TR(0x6e71af);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6e71b1:{NFSU2_TR(0x6e71b1);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6e71b3:{NFSU2_TR(0x6e71b3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e71b5:{NFSU2_TR(0x6e71b5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e71b9:{NFSU2_TR(0x6e71b9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6e71bb:{NFSU2_TR(0x6e71bb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e71bf:{NFSU2_TR(0x6e71bf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e71c3:{NFSU2_TR(0x6e71c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e71c5:{NFSU2_TR(0x6e71c5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e71c8:{NFSU2_TR(0x6e71c8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e71cc:{NFSU2_TR(0x6e71cc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e71ce:{NFSU2_TR(0x6e71ce);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6e71d0:{NFSU2_TR(0x6e71d0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6e71d2:{NFSU2_TR(0x6e71d2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e71d5:{NFSU2_TR(0x6e71d5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e71d9:{NFSU2_TR(0x6e71d9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e71db:{NFSU2_TR(0x6e71db);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e71df:{NFSU2_TR(0x6e71df);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e71e3:{NFSU2_TR(0x6e71e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e71e5:{NFSU2_TR(0x6e71e5);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e71e8:{NFSU2_TR(0x6e71e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e71ea:{NFSU2_TR(0x6e71ea);
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
B6e71ed:{NFSU2_TR(0x6e71ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e71f0:L6e71f0:{c.instructions+=31;NFSU2_TR(0x6e71f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e71f3:{NFSU2_TR(0x6e71f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e71f7:{NFSU2_TR(0x6e71f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e71f9:{NFSU2_TR(0x6e71f9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e71fb:{NFSU2_TR(0x6e71fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e71fe:{NFSU2_TR(0x6e71fe);
{u32 ea_=u32(u32(8133832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7204:{NFSU2_TR(0x6e7204);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7206:{NFSU2_TR(0x6e7206);
{u32 ea_=u32(u32(8008776u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e720c:{NFSU2_TR(0x6e720c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e720f:{NFSU2_TR(0x6e720f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e7211:{NFSU2_TR(0x6e7211);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6e7213:{NFSU2_TR(0x6e7213);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7217:{NFSU2_TR(0x6e7217);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e721a:{NFSU2_TR(0x6e721a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e721c:{NFSU2_TR(0x6e721c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e721e:{NFSU2_TR(0x6e721e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e7221:{NFSU2_TR(0x6e7221);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e7223:{NFSU2_TR(0x6e7223);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7227:{NFSU2_TR(0x6e7227);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e7229:{NFSU2_TR(0x6e7229);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e722c:{NFSU2_TR(0x6e722c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e722e:{NFSU2_TR(0x6e722e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7232:{NFSU2_TR(0x6e7232);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e7234:{NFSU2_TR(0x6e7234);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e7236:{NFSU2_TR(0x6e7236);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7237:{NFSU2_TR(0x6e7237);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e723b:{NFSU2_TR(0x6e723b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e723c:{NFSU2_TR(0x6e723c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7240:{NFSU2_TR(0x6e7240);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e7242:{NFSU2_TR(0x6e7242);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e7244:{NFSU2_TR(0x6e7244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7249ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7130u);}goto L6e7130;}
}
B6e7249:L6e7249:{c.instructions+=2;NFSU2_TR(0x6e7249);
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
B6e724c:{NFSU2_TR(0x6e724c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7250:L6e7250:{c.instructions+=22;NFSU2_TR(0x6e7250);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7254:{NFSU2_TR(0x6e7254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7256:{NFSU2_TR(0x6e7256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7258:{NFSU2_TR(0x6e7258);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e725c:{NFSU2_TR(0x6e725c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e725e:{NFSU2_TR(0x6e725e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7260:{NFSU2_TR(0x6e7260);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e7263:{NFSU2_TR(0x6e7263);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7265:{NFSU2_TR(0x6e7265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7267:{NFSU2_TR(0x6e7267);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e726a:{NFSU2_TR(0x6e726a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e726c:{NFSU2_TR(0x6e726c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e726f:{NFSU2_TR(0x6e726f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7271:{NFSU2_TR(0x6e7271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7273:{NFSU2_TR(0x6e7273);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7276:{NFSU2_TR(0x6e7276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7278:{NFSU2_TR(0x6e7278);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e727b:{NFSU2_TR(0x6e727b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e727d:{NFSU2_TR(0x6e727d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e727f:{NFSU2_TR(0x6e727f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7282:{NFSU2_TR(0x6e7282);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x4ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x4ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6e7285:{NFSU2_TR(0x6e7285);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7290:L6e7290:{c.instructions+=17;NFSU2_TR(0x6e7290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7294:{NFSU2_TR(0x6e7294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7296:{NFSU2_TR(0x6e7296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7298:{NFSU2_TR(0x6e7298);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e729c:{NFSU2_TR(0x6e729c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e729f:{NFSU2_TR(0x6e729f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e72a1:{NFSU2_TR(0x6e72a1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e72a4:{NFSU2_TR(0x6e72a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e72a6:{NFSU2_TR(0x6e72a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e72a8:{NFSU2_TR(0x6e72a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e72ab:{NFSU2_TR(0x6e72ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e72ad:{NFSU2_TR(0x6e72ad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e72b0:{NFSU2_TR(0x6e72b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e72b2:{NFSU2_TR(0x6e72b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e72b4:{NFSU2_TR(0x6e72b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e72b7:{NFSU2_TR(0x6e72b7);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x4ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x4ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6e72ba:{NFSU2_TR(0x6e72ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e72c0:L6e72c0:{c.instructions+=5;NFSU2_TR(0x6e72c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e72c4:{NFSU2_TR(0x6e72c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72c5:{NFSU2_TR(0x6e72c5);
u8 U[4];
w4(U+0,u32(0x8ab4a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72ca:{NFSU2_TR(0x6e72ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72cb:{NFSU2_TR(0x6e72cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e72d0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e71f0u);}goto L6e71f0;}
}
B6e72d0:L6e72d0:{c.instructions+=5;NFSU2_TR(0x6e72d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e72d4:{NFSU2_TR(0x6e72d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e72d8:{NFSU2_TR(0x6e72d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72d9:{NFSU2_TR(0x6e72d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72da:{NFSU2_TR(0x6e72da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e72dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e71f0u);}goto L6e71f0;}
}
B6e72df:L6e72df:{c.instructions+=6;NFSU2_TR(0x6e72df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e72e3:{NFSU2_TR(0x6e72e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72e4:{NFSU2_TR(0x6e72e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72e5:{NFSU2_TR(0x6e72e5);
u8 U[4];
w4(U+0,u32(0x8ab4a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72ea:{NFSU2_TR(0x6e72ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e72eb:{NFSU2_TR(0x6e72eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e72f0ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e72f0:L6e72f0:{c.instructions+=3;NFSU2_TR(0x6e72f0);
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
B6e72f3:{NFSU2_TR(0x6e72f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e72f4:{NFSU2_TR(0x6e72f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7300:L6e7300:{c.instructions+=47;NFSU2_TR(0x6e7300);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7304:{NFSU2_TR(0x6e7304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7306:{NFSU2_TR(0x6e7306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7308:{NFSU2_TR(0x6e7308);
__builtin_memmove(gp(0x8ab4a8),(R+8),4);
}
B6e730e:{NFSU2_TR(0x6e730e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7310:{NFSU2_TR(0x6e7310);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e7313:{NFSU2_TR(0x6e7313);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7315:{NFSU2_TR(0x6e7315);
__builtin_memmove((R+4),(R+8),4);
}
B6e7317:{NFSU2_TR(0x6e7317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7319:{NFSU2_TR(0x6e7319);
__builtin_memmove(gp(0x8ab4ac),(R+4),4);
}
B6e731f:{NFSU2_TR(0x6e731f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7321:{NFSU2_TR(0x6e7321);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e7324:{NFSU2_TR(0x6e7324);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7326:{NFSU2_TR(0x6e7326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7328:{NFSU2_TR(0x6e7328);
__builtin_memmove(gp(0x8ab4b0),(R+8),4);
}
B6e732e:{NFSU2_TR(0x6e732e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7330:{NFSU2_TR(0x6e7330);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e7333:{NFSU2_TR(0x6e7333);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7335:{NFSU2_TR(0x6e7335);
__builtin_memmove((R+4),(R+8),4);
}
B6e7337:{NFSU2_TR(0x6e7337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7339:{NFSU2_TR(0x6e7339);
__builtin_memmove(gp(0x8ab4b4),(R+4),4);
}
B6e733f:{NFSU2_TR(0x6e733f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6e7342:{NFSU2_TR(0x6e7342);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7346:{NFSU2_TR(0x6e7346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7348:{NFSU2_TR(0x6e7348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e734a:{NFSU2_TR(0x6e734a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e734e:{NFSU2_TR(0x6e734e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e7350:{NFSU2_TR(0x6e7350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7352:{NFSU2_TR(0x6e7352);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e7355:{NFSU2_TR(0x6e7355);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7357:{NFSU2_TR(0x6e7357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7359:{NFSU2_TR(0x6e7359);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e735c:{NFSU2_TR(0x6e735c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e735e:{NFSU2_TR(0x6e735e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e7361:{NFSU2_TR(0x6e7361);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e7363:{NFSU2_TR(0x6e7363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7365:{NFSU2_TR(0x6e7365);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7368:{NFSU2_TR(0x6e7368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e736a:{NFSU2_TR(0x6e736a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e736d:{NFSU2_TR(0x6e736d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e736f:{NFSU2_TR(0x6e736f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7371:{NFSU2_TR(0x6e7371);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7374:{NFSU2_TR(0x6e7374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6e7377:{NFSU2_TR(0x6e7377);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e737b:{NFSU2_TR(0x6e737b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e737f:{NFSU2_TR(0x6e737f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ab4a8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e7387:{NFSU2_TR(0x6e7387);
TAIL_STATIC(0x6e4450u,6e4);
}
B6e7390:L6e7390:{c.instructions+=50;NFSU2_TR(0x6e7390);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7394:{NFSU2_TR(0x6e7394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7396:{NFSU2_TR(0x6e7396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7398:{NFSU2_TR(0x6e7398);
__builtin_memmove(gp(0x8ab4b8),(R+8),4);
}
B6e739e:{NFSU2_TR(0x6e739e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e73a0:{NFSU2_TR(0x6e73a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e73a3:{NFSU2_TR(0x6e73a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e73a5:{NFSU2_TR(0x6e73a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e73a7:{NFSU2_TR(0x6e73a7);
__builtin_memmove(gp(0x8ab4bc),(R+4),4);
}
B6e73ad:{NFSU2_TR(0x6e73ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73af:{NFSU2_TR(0x6e73af);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e73b2:{NFSU2_TR(0x6e73b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e73b4:{NFSU2_TR(0x6e73b4);
__builtin_memmove((R+4),(R+8),4);
}
B6e73b6:{NFSU2_TR(0x6e73b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73b8:{NFSU2_TR(0x6e73b8);
__builtin_memmove(gp(0x8ab4c0),(R+8),4);
}
B6e73be:{NFSU2_TR(0x6e73be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6e73c1:{NFSU2_TR(0x6e73c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e73c5:{NFSU2_TR(0x6e73c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73c7:{NFSU2_TR(0x6e73c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73c9:{NFSU2_TR(0x6e73c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e73cd:{NFSU2_TR(0x6e73cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e73d0:{NFSU2_TR(0x6e73d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73d2:{NFSU2_TR(0x6e73d2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e73d5:{NFSU2_TR(0x6e73d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e73d7:{NFSU2_TR(0x6e73d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73d9:{NFSU2_TR(0x6e73d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e73dc:{NFSU2_TR(0x6e73dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73de:{NFSU2_TR(0x6e73de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e73e1:{NFSU2_TR(0x6e73e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e73e3:{NFSU2_TR(0x6e73e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73e5:{NFSU2_TR(0x6e73e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e73e8:{NFSU2_TR(0x6e73e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e73ea:{NFSU2_TR(0x6e73ea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e73ed:{NFSU2_TR(0x6e73ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e73ef:{NFSU2_TR(0x6e73ef);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e73f2:{NFSU2_TR(0x6e73f2);
{u32 ea_=u32(u32(9090232u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e73f8:{NFSU2_TR(0x6e73f8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e73fc:{NFSU2_TR(0x6e73fc);
{u32 ea_=u32(u32(9090232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7402:{NFSU2_TR(0x6e7402);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7405:{NFSU2_TR(0x6e7405);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7408:{NFSU2_TR(0x6e7408);
{u32 ea_=u32(u32(9090236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e740e:{NFSU2_TR(0x6e740e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7412:{NFSU2_TR(0x6e7412);
{u32 ea_=u32(u32(9090236u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7418:{NFSU2_TR(0x6e7418);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e741b:{NFSU2_TR(0x6e741b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e741e:{NFSU2_TR(0x6e741e);
{u32 ea_=u32(u32(9090240u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e7424:{NFSU2_TR(0x6e7424);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7428:{NFSU2_TR(0x6e7428);
{u32 ea_=u32(u32(9090240u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e742e:{NFSU2_TR(0x6e742e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7431:{NFSU2_TR(0x6e7431);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7440:L6e7440:{c.instructions+=23;NFSU2_TR(0x6e7440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6e7443:{NFSU2_TR(0x6e7443);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7446:{NFSU2_TR(0x6e7446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7449:{NFSU2_TR(0x6e7449);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e744a:{NFSU2_TR(0x6e744a);
__builtin_memmove((R+12),(R+0),4);
}
B6e744c:{NFSU2_TR(0x6e744c);
u8 U[32];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6e7451:{NFSU2_TR(0x6e7451);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B6e7456:{NFSU2_TR(0x6e7456);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7457:{NFSU2_TR(0x6e7457);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7458:{NFSU2_TR(0x6e7458);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7459:{NFSU2_TR(0x6e7459);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e745d:{NFSU2_TR(0x6e745d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e745f:{NFSU2_TR(0x6e745f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e7462:{NFSU2_TR(0x6e7462);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B6e7464:{NFSU2_TR(0x6e7464);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6e7468:{NFSU2_TR(0x6e7468);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e746c:{NFSU2_TR(0x6e746c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7470:{NFSU2_TR(0x6e7470);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7472:{NFSU2_TR(0x6e7472);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e7475:{NFSU2_TR(0x6e7475);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e7478:{NFSU2_TR(0x6e7478);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e747c:{NFSU2_TR(0x6e747c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7480:{NFSU2_TR(0x6e7480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e74ce;}}
}
B6e7482:L6e7482:{c.instructions+=2;NFSU2_TR(0x6e7482);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6e7484:{NFSU2_TR(0x6e7484);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e758b;}}
}
B6e748a:L6e748a:{c.instructions+=3;NFSU2_TR(0x6e748a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e748e:{NFSU2_TR(0x6e748e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7492:{NFSU2_TR(0x6e7492);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e7495:L6e7495:{c.instructions+=4;NFSU2_TR(0x6e7495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e7497:{NFSU2_TR(0x6e7497);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e749a:{NFSU2_TR(0x6e749a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e749c:{NFSU2_TR(0x6e749c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e74bd;}}
}
B6e749e:L6e749e:{c.instructions+=1;NFSU2_TR(0x6e749e);
__builtin_memmove((R+28),(R+28),4);
}
B6e74a0:L6e74a0:{c.instructions+=9;NFSU2_TR(0x6e74a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e74a2:{NFSU2_TR(0x6e74a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e74a3:{NFSU2_TR(0x6e74a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e74a7:{NFSU2_TR(0x6e74a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e74a8:{NFSU2_TR(0x6e74a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e74ac:{NFSU2_TR(0x6e74ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e74ad:{NFSU2_TR(0x6e74ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e74ae:{NFSU2_TR(0x6e74ae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e74b1:{NFSU2_TR(0x6e74b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e74b3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e74b3:L6e74b3:{c.instructions+=3;NFSU2_TR(0x6e74b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e74b6:{NFSU2_TR(0x6e74b6);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e74b7:{NFSU2_TR(0x6e74b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e74a0u);}goto L6e74a0;}}
}
B6e74b9:L6e74b9:{c.instructions+=1;NFSU2_TR(0x6e74b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e74bd:L6e74bd:{c.instructions+=3;NFSU2_TR(0x6e74bd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e74c0:{NFSU2_TR(0x6e74c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6e74c2:{NFSU2_TR(0x6e74c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7495u);}goto L6e7495;}}
}
B6e74c4:L6e74c4:{c.instructions+=6;NFSU2_TR(0x6e74c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e74c5:{NFSU2_TR(0x6e74c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e74c6:{NFSU2_TR(0x6e74c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e74c7:{NFSU2_TR(0x6e74c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e74c8:{NFSU2_TR(0x6e74c8);
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
B6e74cb:{NFSU2_TR(0x6e74cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e74ce:L6e74ce:{c.instructions+=4;NFSU2_TR(0x6e74ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e74d0:{NFSU2_TR(0x6e74d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6e74d2:{NFSU2_TR(0x6e74d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e74d6:{NFSU2_TR(0x6e74d6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e758b;}}
}
B6e74dc:L6e74dc:{c.instructions+=2;NFSU2_TR(0x6e74dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e74e0:{NFSU2_TR(0x6e74e0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e74e3:L6e74e3:{c.instructions+=10;NFSU2_TR(0x6e74e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e74e5:{NFSU2_TR(0x6e74e5);
__builtin_memmove((R+4),(R+28),4);
}
B6e74e7:{NFSU2_TR(0x6e74e7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e74ea:{NFSU2_TR(0x6e74ea);
w4(R+20,u32(0x1ull));
}
B6e74ef:{NFSU2_TR(0x6e74ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e74f1:{NFSU2_TR(0x6e74f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e74f5:{NFSU2_TR(0x6e74f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B6e74f8:{NFSU2_TR(0x6e74f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e74fb:{NFSU2_TR(0x6e74fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e74fe:{NFSU2_TR(0x6e74fe);
if(r1(R+518)){{goto L6e752f;}}
}
B6e7500:L6e7500:{c.instructions+=2;NFSU2_TR(0x6e7500);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7502:{NFSU2_TR(0x6e7502);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7577;}}
}
B6e7504:L6e7504:{c.instructions+=3;NFSU2_TR(0x6e7504);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7508:{NFSU2_TR(0x6e7508);
__builtin_memmove((R+28),(R+0),4);
}
B6e750a:{NFSU2_TR(0x6e750a);
__builtin_memmove((R+12),(R+12),4);
}
B6e7510:L6e7510:{c.instructions+=9;NFSU2_TR(0x6e7510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7512:{NFSU2_TR(0x6e7512);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7513:{NFSU2_TR(0x6e7513);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e7517:{NFSU2_TR(0x6e7517);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7518:{NFSU2_TR(0x6e7518);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e751c:{NFSU2_TR(0x6e751c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e751d:{NFSU2_TR(0x6e751d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e751e:{NFSU2_TR(0x6e751e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e7521:{NFSU2_TR(0x6e7521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7523ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e7523:L6e7523:{c.instructions+=3;NFSU2_TR(0x6e7523);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e7526:{NFSU2_TR(0x6e7526);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e7527:{NFSU2_TR(0x6e7527);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7510u);}goto L6e7510;}}
}
B6e7529:L6e7529:{c.instructions+=2;NFSU2_TR(0x6e7529);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e752d:{NFSU2_TR(0x6e752d);
{goto L6e7577;}
}
B6e752f:L6e752f:{c.instructions+=2;NFSU2_TR(0x6e752f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7531:{NFSU2_TR(0x6e7531);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7577;}}
}
B6e7533:L6e7533:{c.instructions+=4;NFSU2_TR(0x6e7533);
__builtin_memmove((R+4),(R+0),4);
}
B6e7535:{NFSU2_TR(0x6e7535);
w4(R+20,u32(0xcull));
}
B6e753a:{NFSU2_TR(0x6e753a);
w4(R+28,u32(0x10ull));
}
B6e753f:{NFSU2_TR(0x6e753f);
}
B6e7540:L6e7540:{c.instructions+=4;NFSU2_TR(0x6e7540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7542:{NFSU2_TR(0x6e7542);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e7545:{NFSU2_TR(0x6e7545);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e72c0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e754a:{NFSU2_TR(0x6e754a);
if(r1(R+518)){{goto L6e7566;}}
}
B6e754c:L6e754c:{c.instructions+=2;NFSU2_TR(0x6e754c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e7390ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7551:{NFSU2_TR(0x6e7551);
if(r1(R+518)){{goto L6e7566;}}
}
B6e7553:L6e7553:{c.instructions+=2;NFSU2_TR(0x6e7553);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e7300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7558:{NFSU2_TR(0x6e7558);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7574;}}
}
B6e755a:L6e755a:{c.instructions+=4;NFSU2_TR(0x6e755a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e755e:{NFSU2_TR(0x6e755e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7562:{NFSU2_TR(0x6e7562);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e7564:{NFSU2_TR(0x6e7564);
{goto L6e7570;}
}
B6e7566:L6e7566:{c.instructions+=3;NFSU2_TR(0x6e7566);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e756a:{NFSU2_TR(0x6e756a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e756e:{NFSU2_TR(0x6e756e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6e7570:L6e7570:{c.instructions+=1;NFSU2_TR(0x6e7570);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7574:L6e7574:{c.instructions+=2;NFSU2_TR(0x6e7574);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e7575:{NFSU2_TR(0x6e7575);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7540u);}goto L6e7540;}}
}
B6e7577:L6e7577:{c.instructions+=6;NFSU2_TR(0x6e7577);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e757b:{NFSU2_TR(0x6e757b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e757e:{NFSU2_TR(0x6e757e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e757f:{NFSU2_TR(0x6e757f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6e7581:{NFSU2_TR(0x6e7581);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7585:{NFSU2_TR(0x6e7585);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e74e3u);}goto L6e74e3;}}
}
B6e758b:L6e758b:{c.instructions+=6;NFSU2_TR(0x6e758b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e758c:{NFSU2_TR(0x6e758c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e758d:{NFSU2_TR(0x6e758d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e758e:{NFSU2_TR(0x6e758e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e758f:{NFSU2_TR(0x6e758f);
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
B6e7592:{NFSU2_TR(0x6e7592);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e75a0:L6e75a0:{c.instructions+=11;NFSU2_TR(0x6e75a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e75a1:{NFSU2_TR(0x6e75a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e75a2:{NFSU2_TR(0x6e75a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e75a6:{NFSU2_TR(0x6e75a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e75a9:{NFSU2_TR(0x6e75a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e75aa:{NFSU2_TR(0x6e75aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e75ab:{NFSU2_TR(0x6e75ab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e75ad:{NFSU2_TR(0x6e75ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e75af:{NFSU2_TR(0x6e75af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e75b2:{NFSU2_TR(0x6e75b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e75b6:{NFSU2_TR(0x6e75b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7606;}}
}
B6e75b8:L6e75b8:{c.instructions+=5;NFSU2_TR(0x6e75b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e75ba:{NFSU2_TR(0x6e75ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e75bd:{NFSU2_TR(0x6e75bd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e75be:{NFSU2_TR(0x6e75be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e75c0:{NFSU2_TR(0x6e75c0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7602;}}
}
B6e75c2:L6e75c2:{c.instructions+=2;NFSU2_TR(0x6e75c2);
__builtin_memmove((R+12),(R+0),4);
}
B6e75c4:{NFSU2_TR(0x6e75c4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6e75c6:L6e75c6:{c.instructions+=3;NFSU2_TR(0x6e75c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e75c8:{NFSU2_TR(0x6e75c8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e75cb:{NFSU2_TR(0x6e75cb);
if(r1(R+518)){{goto L6e75f2;}}
}
B6e75cd:L6e75cd:{c.instructions+=2;NFSU2_TR(0x6e75cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e75ce:{NFSU2_TR(0x6e75ce);
if(r1(R+518)){{goto L6e75ea;}}
}
B6e75d0:L6e75d0:{c.instructions+=2;NFSU2_TR(0x6e75d0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e75d1:{NFSU2_TR(0x6e75d1);
if(r1(R+518)){{goto L6e75e2;}}
}
B6e75d3:L6e75d3:{c.instructions+=2;NFSU2_TR(0x6e75d3);
u8 U[4];
w4(U+0,u32(0x7c1cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e75d8:{NFSU2_TR(0x6e75d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e75ddull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6e75dd:L6e75dd:{c.instructions+=2;NFSU2_TR(0x6e75dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e75e0:{NFSU2_TR(0x6e75e0);
{goto L6e75f8;}
}
B6e75e2:L6e75e2:{c.instructions+=2;NFSU2_TR(0x6e75e2);
u8 U[4];
w4(U+0,u32(0x6e7290ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e75e8:{NFSU2_TR(0x6e75e8);
{goto L6e75f8;}
}
B6e75ea:L6e75ea:{c.instructions+=2;NFSU2_TR(0x6e75ea);
u8 U[4];
w4(U+0,u32(0x6e71f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e75f0:{NFSU2_TR(0x6e75f0);
{goto L6e75f8;}
}
B6e75f2:L6e75f2:{c.instructions+=1;NFSU2_TR(0x6e75f2);
u8 U[4];
w4(U+0,u32(0x6e7250ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e75f8:L6e75f8:{c.instructions+=3;NFSU2_TR(0x6e75f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e75fb:{NFSU2_TR(0x6e75fb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6e75fc:{NFSU2_TR(0x6e75fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e75c6u);}goto L6e75c6;}}
}
B6e75fe:L6e75fe:{c.instructions+=1;NFSU2_TR(0x6e75fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7602:L6e7602:{c.instructions+=2;NFSU2_TR(0x6e7602);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7604:{NFSU2_TR(0x6e7604);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e75b8u);}goto L6e75b8;}}
}
B6e7606:L6e7606:{c.instructions+=5;NFSU2_TR(0x6e7606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7609:{NFSU2_TR(0x6e7609);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e760b:{NFSU2_TR(0x6e760b);
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
B6e760d:{NFSU2_TR(0x6e760d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6e7611:{NFSU2_TR(0x6e7611);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7661;}}
}
B6e7613:L6e7613:{c.instructions+=5;NFSU2_TR(0x6e7613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7615:{NFSU2_TR(0x6e7615);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e7618:{NFSU2_TR(0x6e7618);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e7619:{NFSU2_TR(0x6e7619);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e761b:{NFSU2_TR(0x6e761b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e765d;}}
}
B6e761d:L6e761d:{c.instructions+=2;NFSU2_TR(0x6e761d);
__builtin_memmove((R+28),(R+0),4);
}
B6e761f:{NFSU2_TR(0x6e761f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6e7621:L6e7621:{c.instructions+=3;NFSU2_TR(0x6e7621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7623:{NFSU2_TR(0x6e7623);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e7626:{NFSU2_TR(0x6e7626);
if(r1(R+518)){{goto L6e764d;}}
}
B6e7628:L6e7628:{c.instructions+=2;NFSU2_TR(0x6e7628);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e7629:{NFSU2_TR(0x6e7629);
if(r1(R+518)){{goto L6e7645;}}
}
B6e762b:L6e762b:{c.instructions+=2;NFSU2_TR(0x6e762b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e762c:{NFSU2_TR(0x6e762c);
if(r1(R+518)){{goto L6e763d;}}
}
B6e762e:L6e762e:{c.instructions+=2;NFSU2_TR(0x6e762e);
u8 U[4];
w4(U+0,u32(0x7c1cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7633:{NFSU2_TR(0x6e7633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7638ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6e7638:L6e7638:{c.instructions+=2;NFSU2_TR(0x6e7638);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e763b:{NFSU2_TR(0x6e763b);
{goto L6e7653;}
}
B6e763d:L6e763d:{c.instructions+=2;NFSU2_TR(0x6e763d);
u8 U[4];
w4(U+0,u32(0x6e7390ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e7643:{NFSU2_TR(0x6e7643);
{goto L6e7653;}
}
B6e7645:L6e7645:{c.instructions+=2;NFSU2_TR(0x6e7645);
u8 U[4];
w4(U+0,u32(0x6e72c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e764b:{NFSU2_TR(0x6e764b);
{goto L6e7653;}
}
B6e764d:L6e764d:{c.instructions+=1;NFSU2_TR(0x6e764d);
u8 U[4];
w4(U+0,u32(0x6e7300ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e7653:L6e7653:{c.instructions+=3;NFSU2_TR(0x6e7653);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e7656:{NFSU2_TR(0x6e7656);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e7657:{NFSU2_TR(0x6e7657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7621u);}goto L6e7621;}}
}
B6e7659:L6e7659:{c.instructions+=1;NFSU2_TR(0x6e7659);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e765d:L6e765d:{c.instructions+=2;NFSU2_TR(0x6e765d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6e765f:{NFSU2_TR(0x6e765f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7613u);}goto L6e7613;}}
}
B6e7661:L6e7661:{c.instructions+=5;NFSU2_TR(0x6e7661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e7662:{NFSU2_TR(0x6e7662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7663:{NFSU2_TR(0x6e7663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e7664:{NFSU2_TR(0x6e7664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e7665:{NFSU2_TR(0x6e7665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7670:L6e7670:{c.instructions+=16;NFSU2_TR(0x6e7670);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7671:{NFSU2_TR(0x6e7671);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7674:{NFSU2_TR(0x6e7674);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6e7679:{NFSU2_TR(0x6e7679);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e767c:{NFSU2_TR(0x6e767c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e767d:{NFSU2_TR(0x6e767d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e767e:{NFSU2_TR(0x6e767e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7681:{NFSU2_TR(0x6e7681);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e7685:{NFSU2_TR(0x6e7685);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e7688:{NFSU2_TR(0x6e7688);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e768c:{NFSU2_TR(0x6e768c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7690:{NFSU2_TR(0x6e7690);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7692:{NFSU2_TR(0x6e7692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e7695:{NFSU2_TR(0x6e7695);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7696:{NFSU2_TR(0x6e7696);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e769a:{NFSU2_TR(0x6e769a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e76e5;}}
}
B6e769c:L6e769c:{c.instructions+=2;NFSU2_TR(0x6e769c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6e769e:{NFSU2_TR(0x6e769e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e777a;}}
}
B6e76a4:L6e76a4:{c.instructions+=3;NFSU2_TR(0x6e76a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e76a8:{NFSU2_TR(0x6e76a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e76ab:{NFSU2_TR(0x6e76ab);
{goto L6e76b0;}
}
B6e76b0:L6e76b0:{c.instructions+=4;NFSU2_TR(0x6e76b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e76b2:{NFSU2_TR(0x6e76b2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e76b5:{NFSU2_TR(0x6e76b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e76b7:{NFSU2_TR(0x6e76b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e76d7;}}
}
B6e76b9:L6e76b9:{c.instructions+=1;NFSU2_TR(0x6e76b9);
__builtin_memmove((R+16),(R+16),4);
}
B6e76c0:L6e76c0:{c.instructions+=6;NFSU2_TR(0x6e76c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e76c2:{NFSU2_TR(0x6e76c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e76c6:{NFSU2_TR(0x6e76c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e76c7:{NFSU2_TR(0x6e76c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e76c8:{NFSU2_TR(0x6e76c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e76cb:{NFSU2_TR(0x6e76cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e76cdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e76cd:L6e76cd:{c.instructions+=3;NFSU2_TR(0x6e76cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e76d0:{NFSU2_TR(0x6e76d0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e76d1:{NFSU2_TR(0x6e76d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e76c0u);}goto L6e76c0;}}
}
B6e76d3:L6e76d3:{c.instructions+=1;NFSU2_TR(0x6e76d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e76d7:L6e76d7:{c.instructions+=3;NFSU2_TR(0x6e76d7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e76da:{NFSU2_TR(0x6e76da);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6e76dc:{NFSU2_TR(0x6e76dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e76b0u);}goto L6e76b0;}}
}
B6e76de:L6e76de:{c.instructions+=5;NFSU2_TR(0x6e76de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e76df:{NFSU2_TR(0x6e76df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e76e0:{NFSU2_TR(0x6e76e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e76e1:{NFSU2_TR(0x6e76e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e76e2:{NFSU2_TR(0x6e76e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e76e5:L6e76e5:{c.instructions+=3;NFSU2_TR(0x6e76e5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e76e7:{NFSU2_TR(0x6e76e7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6e76e9:{NFSU2_TR(0x6e76e9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e777a;}}
}
B6e76ef:L6e76ef:{c.instructions+=3;NFSU2_TR(0x6e76ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e76f0:{NFSU2_TR(0x6e76f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e76f4:{NFSU2_TR(0x6e76f4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6e76f7:L6e76f7:{c.instructions+=11;NFSU2_TR(0x6e76f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e76f9:{NFSU2_TR(0x6e76f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e76fd:{NFSU2_TR(0x6e76fd);
__builtin_memmove((R+4),(R+12),4);
}
B6e76ff:{NFSU2_TR(0x6e76ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e7702:{NFSU2_TR(0x6e7702);
w4(R+8,u32(0x1ull));
}
B6e7707:{NFSU2_TR(0x6e7707);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e7709:{NFSU2_TR(0x6e7709);
__builtin_memmove((R+4),(R+12),4);
}
B6e770b:{NFSU2_TR(0x6e770b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e770e:{NFSU2_TR(0x6e770e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e7711:{NFSU2_TR(0x6e7711);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7714:{NFSU2_TR(0x6e7714);
if(r1(R+518)){{goto L6e7735;}}
}
B6e7716:L6e7716:{c.instructions+=2;NFSU2_TR(0x6e7716);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7718:{NFSU2_TR(0x6e7718);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7769;}}
}
B6e771a:L6e771a:{c.instructions+=2;NFSU2_TR(0x6e771a);
__builtin_memmove((R+28),(R+0),4);
}
B6e771c:{NFSU2_TR(0x6e771c);
__builtin_memmove((R+16),(R+16),4);
}
B6e7720:L6e7720:{c.instructions+=6;NFSU2_TR(0x6e7720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7722:{NFSU2_TR(0x6e7722);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e7726:{NFSU2_TR(0x6e7726);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7727:{NFSU2_TR(0x6e7727);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7728:{NFSU2_TR(0x6e7728);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e772b:{NFSU2_TR(0x6e772b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e772dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e772d:L6e772d:{c.instructions+=3;NFSU2_TR(0x6e772d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e7730:{NFSU2_TR(0x6e7730);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e7731:{NFSU2_TR(0x6e7731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7720u);}goto L6e7720;}}
}
B6e7733:L6e7733:{c.instructions+=1;NFSU2_TR(0x6e7733);
{goto L6e7769;}
}
B6e7735:L6e7735:{c.instructions+=2;NFSU2_TR(0x6e7735);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7737:{NFSU2_TR(0x6e7737);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7769;}}
}
B6e7739:L6e7739:{c.instructions+=3;NFSU2_TR(0x6e7739);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e773d:{NFSU2_TR(0x6e773d);
__builtin_memmove((R+8),(R+0),4);
}
B6e773f:{NFSU2_TR(0x6e773f);
}
B6e7740:L6e7740:{c.instructions+=4;NFSU2_TR(0x6e7740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7742:{NFSU2_TR(0x6e7742);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e7745:{NFSU2_TR(0x6e7745);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e71f0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e774a:{NFSU2_TR(0x6e774a);
if(r1(R+518)){{goto L6e775f;}}
}
B6e774c:L6e774c:{c.instructions+=2;NFSU2_TR(0x6e774c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e7290ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7751:{NFSU2_TR(0x6e7751);
if(r1(R+518)){{goto L6e775f;}}
}
B6e7753:L6e7753:{c.instructions+=2;NFSU2_TR(0x6e7753);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e7250ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7758:{NFSU2_TR(0x6e7758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7762;}}
}
B6e775a:L6e775a:{c.instructions+=2;NFSU2_TR(0x6e775a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e775d:{NFSU2_TR(0x6e775d);
{goto L6e7762;}
}
B6e775f:L6e775f:{c.instructions+=1;NFSU2_TR(0x6e775f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6e7762:L6e7762:{c.instructions+=2;NFSU2_TR(0x6e7762);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6e7763:{NFSU2_TR(0x6e7763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7740u);}goto L6e7740;}}
}
B6e7765:L6e7765:{c.instructions+=1;NFSU2_TR(0x6e7765);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7769:L6e7769:{c.instructions+=5;NFSU2_TR(0x6e7769);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e776d:{NFSU2_TR(0x6e776d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e7770:{NFSU2_TR(0x6e7770);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e7771:{NFSU2_TR(0x6e7771);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6e7773:{NFSU2_TR(0x6e7773);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e76f7u);}goto L6e76f7;}}
}
B6e7779:L6e7779:{c.instructions+=1;NFSU2_TR(0x6e7779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e777a:L6e777a:{c.instructions+=5;NFSU2_TR(0x6e777a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e777b:{NFSU2_TR(0x6e777b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e777c:{NFSU2_TR(0x6e777c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e777d:{NFSU2_TR(0x6e777d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e777e:{NFSU2_TR(0x6e777e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7790:L6e7790:{c.instructions+=8;NFSU2_TR(0x6e7790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e7793:{NFSU2_TR(0x6e7793);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7797:{NFSU2_TR(0x6e7797);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e779b:{NFSU2_TR(0x6e779b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e77a1:{NFSU2_TR(0x6e77a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e77a5:{NFSU2_TR(0x6e77a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e77a7:{NFSU2_TR(0x6e77a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e77aa:{NFSU2_TR(0x6e77aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e77c4;}}
}
B6e77ac:L6e77ac:{c.instructions+=6;NFSU2_TR(0x6e77ac);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e77b2:{NFSU2_TR(0x6e77b2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e77b6:{NFSU2_TR(0x6e77b6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e77ba:{NFSU2_TR(0x6e77ba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e77be:{NFSU2_TR(0x6e77be);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e77c2:{NFSU2_TR(0x6e77c2);
{goto L6e77da;}
}
B6e77c4:L6e77c4:{c.instructions+=5;NFSU2_TR(0x6e77c4);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e77ca:{NFSU2_TR(0x6e77ca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e77ce:{NFSU2_TR(0x6e77ce);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e77d2:{NFSU2_TR(0x6e77d2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e77d6:{NFSU2_TR(0x6e77d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e77da:L6e77da:{c.instructions+=3;NFSU2_TR(0x6e77da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e77dc:{NFSU2_TR(0x6e77dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e77e0:{NFSU2_TR(0x6e77e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e77fd;}}
}
B6e77e2:L6e77e2:{c.instructions+=7;NFSU2_TR(0x6e77e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e77e6:{NFSU2_TR(0x6e77e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e77ea:{NFSU2_TR(0x6e77ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e77eb:{NFSU2_TR(0x6e77eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e77ec:{NFSU2_TR(0x6e77ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e77f0:{NFSU2_TR(0x6e77f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e77f2:{NFSU2_TR(0x6e77f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e77f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7670u);}goto L6e7670;}
}
B6e77f7:L6e77f7:{c.instructions+=2;NFSU2_TR(0x6e77f7);
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
B6e77fa:{NFSU2_TR(0x6e77fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e77fd:L6e77fd:{c.instructions+=5;NFSU2_TR(0x6e77fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e7801:{NFSU2_TR(0x6e7801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7804:{NFSU2_TR(0x6e7804);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e7805:{NFSU2_TR(0x6e7805);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7807:{NFSU2_TR(0x6e7807);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e781f;}}
}
B6e7809:L6e7809:{c.instructions+=6;NFSU2_TR(0x6e7809);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e780d:{NFSU2_TR(0x6e780d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e780e:{NFSU2_TR(0x6e780e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7812:{NFSU2_TR(0x6e7812);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7813:{NFSU2_TR(0x6e7813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7814:{NFSU2_TR(0x6e7814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7819ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7670u);}goto L6e7670;}
}
B6e7819:L6e7819:{c.instructions+=2;NFSU2_TR(0x6e7819);
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
B6e781c:{NFSU2_TR(0x6e781c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e781f:L6e781f:{c.instructions+=7;NFSU2_TR(0x6e781f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7823:{NFSU2_TR(0x6e7823);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e7827:{NFSU2_TR(0x6e7827);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e782b:{NFSU2_TR(0x6e782b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e7831:{NFSU2_TR(0x6e7831);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e7833:{NFSU2_TR(0x6e7833);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e7836:{NFSU2_TR(0x6e7836);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e785f;}}
}
B6e7838:L6e7838:{c.instructions+=3;NFSU2_TR(0x6e7838);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e783c:{NFSU2_TR(0x6e783c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e783e:{NFSU2_TR(0x6e783e);
if(r1(R+518)){{goto L6e785f;}}
}
B6e7840:L6e7840:{c.instructions+=10;NFSU2_TR(0x6e7840);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7844:{NFSU2_TR(0x6e7844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7845:{NFSU2_TR(0x6e7845);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7849:{NFSU2_TR(0x6e7849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e784a:{NFSU2_TR(0x6e784a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e784d:{NFSU2_TR(0x6e784d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e784e:{NFSU2_TR(0x6e784e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e784f:{NFSU2_TR(0x6e784f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7853:{NFSU2_TR(0x6e7853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7854:{NFSU2_TR(0x6e7854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7859ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7440u);}goto L6e7440;}
}
B6e7859:L6e7859:{c.instructions+=2;NFSU2_TR(0x6e7859);
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
B6e785c:{NFSU2_TR(0x6e785c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e785f:L6e785f:{c.instructions+=6;NFSU2_TR(0x6e785f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7863:{NFSU2_TR(0x6e7863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7864:{NFSU2_TR(0x6e7864);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7868:{NFSU2_TR(0x6e7868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7869:{NFSU2_TR(0x6e7869);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e786a:{NFSU2_TR(0x6e786a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e786full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7670u);}goto L6e7670;}
}
B6e786f:L6e786f:{c.instructions+=2;NFSU2_TR(0x6e786f);
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
B6e7872:{NFSU2_TR(0x6e7872);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7880:L6e7880:{c.instructions+=3;NFSU2_TR(0x6e7880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7881:{NFSU2_TR(0x6e7881);
__builtin_memmove((R+24),(R+4),4);
}
B6e7883:{NFSU2_TR(0x6e7883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7888ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e7888:L6e7888:{c.instructions+=13;NFSU2_TR(0x6e7888);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e788a:{NFSU2_TR(0x6e788a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e788d:{NFSU2_TR(0x6e788d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7890:{NFSU2_TR(0x6e7890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7893:{NFSU2_TR(0x6e7893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7896:{NFSU2_TR(0x6e7896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7899:{NFSU2_TR(0x6e7899);
u8 U[4];
w4(U+0,u32(0x7c1d28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e789f:{NFSU2_TR(0x6e789f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e78a2:{NFSU2_TR(0x6e78a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e78a5:{NFSU2_TR(0x6e78a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e78ac:{NFSU2_TR(0x6e78ac);
__builtin_memmove((R+0),(R+24),4);
}
B6e78ae:{NFSU2_TR(0x6e78ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e78af:{NFSU2_TR(0x6e78af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e78b0:L6e78b0:{c.instructions+=5;NFSU2_TR(0x6e78b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e78b1:{NFSU2_TR(0x6e78b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e78b4:{NFSU2_TR(0x6e78b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e78b7:{NFSU2_TR(0x6e78b7);
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
B6e78b9:{NFSU2_TR(0x6e78b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e78c1;}}
}
B6e78bb:L6e78bb:{c.instructions+=2;NFSU2_TR(0x6e78bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e78bf:{NFSU2_TR(0x6e78bf);
{goto L6e78cc;}
}
B6e78c1:L6e78c1:{c.instructions+=3;NFSU2_TR(0x6e78c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e78c5:{NFSU2_TR(0x6e78c5);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B6e78ca:{NFSU2_TR(0x6e78ca);
u8 U[4];
w1(R+523,scarry<u16>(r2(R+0),u16(0x1ull)));
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e78cc:L6e78cc:{c.instructions+=8;NFSU2_TR(0x6e78cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e78d0:{NFSU2_TR(0x6e78d0);
w4(R+4,u32(r2(R+0)));
}
B6e78d3:{NFSU2_TR(0x6e78d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e78d7:{NFSU2_TR(0x6e78d7);
w1(R+0,u8(0x1ull));
}
B6e78d9:{NFSU2_TR(0x6e78d9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e78dd:{NFSU2_TR(0x6e78dd);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e78df:{NFSU2_TR(0x6e78df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e78e0:{NFSU2_TR(0x6e78e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e78f0:L6e78f0:{c.instructions+=8;NFSU2_TR(0x6e78f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e78f1:{NFSU2_TR(0x6e78f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e78f2:{NFSU2_TR(0x6e78f2);
__builtin_memmove((R+24),(R+4),4);
}
B6e78f4:{NFSU2_TR(0x6e78f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e78f5:{NFSU2_TR(0x6e78f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e78f8:{NFSU2_TR(0x6e78f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e78fc:{NFSU2_TR(0x6e78fc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e78ff:{NFSU2_TR(0x6e78ff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e79ef;}}
}
B6e7905:L6e7905:{c.instructions+=7;NFSU2_TR(0x6e7905);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e790b:{NFSU2_TR(0x6e790b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e790d:{NFSU2_TR(0x6e790d);
w4(R+0,u32(r2(R+0)));
}
B6e7910:{NFSU2_TR(0x6e7910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7911:{NFSU2_TR(0x6e7911);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6e7914:{NFSU2_TR(0x6e7914);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7915:{NFSU2_TR(0x6e7915);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7918ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e7918:L6e7918:{c.instructions+=9;NFSU2_TR(0x6e7918);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e791b:{NFSU2_TR(0x6e791b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e791e:{NFSU2_TR(0x6e791e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e7922:{NFSU2_TR(0x6e7922);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e7928:{NFSU2_TR(0x6e7928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e792a:{NFSU2_TR(0x6e792a);
w4(R+0,u32(r2(R+0)));
}
B6e792d:{NFSU2_TR(0x6e792d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6e7930:{NFSU2_TR(0x6e7930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7931:{NFSU2_TR(0x6e7931);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7934ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e7934:L6e7934:{c.instructions+=9;NFSU2_TR(0x6e7934);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7937:{NFSU2_TR(0x6e7937);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e793a:{NFSU2_TR(0x6e793a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e793e:{NFSU2_TR(0x6e793e);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e7944:{NFSU2_TR(0x6e7944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e7946:{NFSU2_TR(0x6e7946);
w4(R+0,u32(r2(R+0)));
}
B6e7949:{NFSU2_TR(0x6e7949);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6e794c:{NFSU2_TR(0x6e794c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e794d:{NFSU2_TR(0x6e794d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7950ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e7950:L6e7950:{c.instructions+=5;NFSU2_TR(0x6e7950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7953:{NFSU2_TR(0x6e7953);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e7955:{NFSU2_TR(0x6e7955);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6e7959:{NFSU2_TR(0x6e7959);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e795c:{NFSU2_TR(0x6e795c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e79ee;}}
}
B6e7962:L6e7962:{c.instructions+=2;NFSU2_TR(0x6e7962);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e7964:{NFSU2_TR(0x6e7964);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7965:L6e7965:{c.instructions+=39;NFSU2_TR(0x6e7965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e7967:{NFSU2_TR(0x6e7967);
{u32 ea_=u32(u32(8133912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e796d:{NFSU2_TR(0x6e796d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7970:{NFSU2_TR(0x6e7970);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e7973:{NFSU2_TR(0x6e7973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7976:{NFSU2_TR(0x6e7976);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7979:{NFSU2_TR(0x6e7979);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e797d:{NFSU2_TR(0x6e797d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7980:{NFSU2_TR(0x6e7980);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7984:{NFSU2_TR(0x6e7984);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e7988:{NFSU2_TR(0x6e7988);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6e798b:{NFSU2_TR(0x6e798b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e798c:{NFSU2_TR(0x6e798c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e798e:{NFSU2_TR(0x6e798e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e7992:{NFSU2_TR(0x6e7992);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7996:{NFSU2_TR(0x6e7996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7999:{NFSU2_TR(0x6e7999);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e799d:{NFSU2_TR(0x6e799d);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e79a0:{NFSU2_TR(0x6e79a0);
{u32 ea_=u32(u32(8133912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e79a6:{NFSU2_TR(0x6e79a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e79a8:{NFSU2_TR(0x6e79a8);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e79ab:{NFSU2_TR(0x6e79ab);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e79af:{NFSU2_TR(0x6e79af);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e79b3:{NFSU2_TR(0x6e79b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e79b7:{NFSU2_TR(0x6e79b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e79ba:{NFSU2_TR(0x6e79ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e79be:{NFSU2_TR(0x6e79be);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e79c1:{NFSU2_TR(0x6e79c1);
{u32 ea_=u32(u32(8133912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e79c7:{NFSU2_TR(0x6e79c7);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e79c9:{NFSU2_TR(0x6e79c9);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e79cd:{NFSU2_TR(0x6e79cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e79d0:{NFSU2_TR(0x6e79d0);
{u32 ea_=u32(u32(8133904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e79d6:{NFSU2_TR(0x6e79d6);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e79da:{NFSU2_TR(0x6e79da);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e79dc:{NFSU2_TR(0x6e79dc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e79df:{NFSU2_TR(0x6e79df);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e79e1:{NFSU2_TR(0x6e79e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e79e5:{NFSU2_TR(0x6e79e5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6e79e7:{NFSU2_TR(0x6e79e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7965u);}goto L6e7965;}}
}
B6e79ed:L6e79ed:{c.instructions+=1;NFSU2_TR(0x6e79ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e79ee:L6e79ee:{c.instructions+=1;NFSU2_TR(0x6e79ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e79ef:L6e79ef:{c.instructions+=4;NFSU2_TR(0x6e79ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e79f0:{NFSU2_TR(0x6e79f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e79f1:{NFSU2_TR(0x6e79f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e79f2:{NFSU2_TR(0x6e79f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7a00:L6e7a00:{c.instructions+=3;NFSU2_TR(0x6e7a00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a01:{NFSU2_TR(0x6e7a01);
__builtin_memmove((R+24),(R+4),4);
}
B6e7a03:{NFSU2_TR(0x6e7a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7a08ull));
{goto L6e7a30;}
}
B6e7a08:L6e7a08:{c.instructions+=2;NFSU2_TR(0x6e7a08);
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
B6e7a0d:{NFSU2_TR(0x6e7a0d);
if(r1(R+518)){{goto L6e7a1b;}}
}
B6e7a0f:L6e7a0f:{c.instructions+=3;NFSU2_TR(0x6e7a0f);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a11:{NFSU2_TR(0x6e7a11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a12:{NFSU2_TR(0x6e7a12);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7a18ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e7a18:L6e7a18:{c.instructions+=1;NFSU2_TR(0x6e7a18);
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
B6e7a1b:L6e7a1b:{c.instructions+=3;NFSU2_TR(0x6e7a1b);
__builtin_memmove((R+0),(R+24),4);
}
B6e7a1d:{NFSU2_TR(0x6e7a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7a1e:{NFSU2_TR(0x6e7a1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e7a30:L6e7a30:{c.instructions+=6;NFSU2_TR(0x6e7a30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a31:{NFSU2_TR(0x6e7a31);
__builtin_memmove((R+24),(R+4),4);
}
B6e7a33:{NFSU2_TR(0x6e7a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7a36:{NFSU2_TR(0x6e7a36);
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
B6e7a38:{NFSU2_TR(0x6e7a38);
u8 U[4];
w4(U+0,u32(0x7c1d28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e7a3e:{NFSU2_TR(0x6e7a3e);
if(r1(R+518)){{goto L6e7a6d;}}
}
B6e7a40:L6e7a40:{c.instructions+=5;NFSU2_TR(0x6e7a40);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e7a46:{NFSU2_TR(0x6e7a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7a49:{NFSU2_TR(0x6e7a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7a4b:{NFSU2_TR(0x6e7a4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a4c:{NFSU2_TR(0x6e7a4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7a4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e7a4f:L6e7a4f:{c.instructions+=5;NFSU2_TR(0x6e7a4f);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e7a55:{NFSU2_TR(0x6e7a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7a58:{NFSU2_TR(0x6e7a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7a5a:{NFSU2_TR(0x6e7a5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a5b:{NFSU2_TR(0x6e7a5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7a5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e7a5e:L6e7a5e:{c.instructions+=5;NFSU2_TR(0x6e7a5e);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e7a64:{NFSU2_TR(0x6e7a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7a67:{NFSU2_TR(0x6e7a67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e7a69:{NFSU2_TR(0x6e7a69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a6a:{NFSU2_TR(0x6e7a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e7a6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e7a6d:L6e7a6d:{c.instructions+=3;NFSU2_TR(0x6e7a6d);
__builtin_memmove((R+4),(R+24),4);
}
B6e7a6f:{NFSU2_TR(0x6e7a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7a70:{NFSU2_TR(0x6e7a70);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e7a80:L6e7a80:{c.instructions+=11;NFSU2_TR(0x6e7a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B6e7a86:{NFSU2_TR(0x6e7a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7a8d:{NFSU2_TR(0x6e7a8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a8e:{NFSU2_TR(0x6e7a8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a8f:{NFSU2_TR(0x6e7a8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a90:{NFSU2_TR(0x6e7a90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7a94:{NFSU2_TR(0x6e7a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7a97:{NFSU2_TR(0x6e7a97);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6e7a9a:{NFSU2_TR(0x6e7a9a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e7a9c:{NFSU2_TR(0x6e7a9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e7a9d:{NFSU2_TR(0x6e7a9d);
if(r1(R+518)){{goto L6e7abb;}}
}
B6e7a9f:L6e7a9f:{c.instructions+=7;NFSU2_TR(0x6e7a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7aa2:{NFSU2_TR(0x6e7aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7aa6:{NFSU2_TR(0x6e7aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7aa9:{NFSU2_TR(0x6e7aa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7aad:{NFSU2_TR(0x6e7aad);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7ab4:{NFSU2_TR(0x6e7ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7ab7:{NFSU2_TR(0x6e7ab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7abb:L6e7abb:{c.instructions+=7;NFSU2_TR(0x6e7abb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7ac2:{NFSU2_TR(0x6e7ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e7ac5:{NFSU2_TR(0x6e7ac5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e7acb:{NFSU2_TR(0x6e7acb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7ad2:{NFSU2_TR(0x6e7ad2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e7ad4:{NFSU2_TR(0x6e7ad4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e7ad7:{NFSU2_TR(0x6e7ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7aed;}}
}
B6e7ad9:L6e7ad9:{c.instructions+=5;NFSU2_TR(0x6e7ad9);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e7adf:{NFSU2_TR(0x6e7adf);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7ae3:{NFSU2_TR(0x6e7ae3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7ae7:{NFSU2_TR(0x6e7ae7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e7aeb:{NFSU2_TR(0x6e7aeb);
{goto L6e7aff;}
}
B6e7aed:L6e7aed:{c.instructions+=4;NFSU2_TR(0x6e7aed);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7af3:{NFSU2_TR(0x6e7af3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7af7:{NFSU2_TR(0x6e7af7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7afb:{NFSU2_TR(0x6e7afb);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e7aff:L6e7aff:{c.instructions+=6;NFSU2_TR(0x6e7aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7b02:{NFSU2_TR(0x6e7b02);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7b04:{NFSU2_TR(0x6e7b04);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7b08:{NFSU2_TR(0x6e7b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7b0c:{NFSU2_TR(0x6e7b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7b10:{NFSU2_TR(0x6e7b10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7b27;}}
}
B6e7b12:L6e7b12:{c.instructions+=2;NFSU2_TR(0x6e7b12);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e7b14:{NFSU2_TR(0x6e7b14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e7b1a;}}
}
B6e7b16:L6e7b16:{c.instructions+=2;NFSU2_TR(0x6e7b16);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e7b18:{NFSU2_TR(0x6e7b18);
{goto L6e7b82;}
}
B6e7b1a:L6e7b1a:{c.instructions+=3;NFSU2_TR(0x6e7b1a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e7b1e:{NFSU2_TR(0x6e7b1e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7b20:{NFSU2_TR(0x6e7b20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e7b82;}}
}
B6e7b22:L6e7b22:{c.instructions+=2;NFSU2_TR(0x6e7b22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7b25:{NFSU2_TR(0x6e7b25);
{goto L6e7b82;}
}
B6e7b27:L6e7b27:{c.instructions+=3;NFSU2_TR(0x6e7b27);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e7b2a:{NFSU2_TR(0x6e7b2a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7b2c:{NFSU2_TR(0x6e7b2c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e7b32;}}
}
B6e7b2e:L6e7b2e:{c.instructions+=2;NFSU2_TR(0x6e7b2e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e7b30:{NFSU2_TR(0x6e7b30);
{goto L6e7b82;}
}
B6e7b32:L6e7b32:{c.instructions+=3;NFSU2_TR(0x6e7b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7b35:{NFSU2_TR(0x6e7b35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7b38:{NFSU2_TR(0x6e7b38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e7b3e;}}
}
B6e7b3a:L6e7b3a:{c.instructions+=2;NFSU2_TR(0x6e7b3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e7b3c:{NFSU2_TR(0x6e7b3c);
{goto L6e7b3f;}
}
B6e7b3e:L6e7b3e:{c.instructions+=1;NFSU2_TR(0x6e7b3e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e7b3f:L6e7b3f:{c.instructions+=4;NFSU2_TR(0x6e7b3f);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e7b43:{NFSU2_TR(0x6e7b43);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e7b45:{NFSU2_TR(0x6e7b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e7b48:{NFSU2_TR(0x6e7b48);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e7b69;}}
}
B6e7b4a:L6e7b4a:{c.instructions+=4;NFSU2_TR(0x6e7b4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e7b4e:{NFSU2_TR(0x6e7b4e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B6e7b51:{NFSU2_TR(0x6e7b51);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7b53:{NFSU2_TR(0x6e7b53);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e7b7f;}}
}
B6e7b55:L6e7b55:{c.instructions+=1;NFSU2_TR(0x6e7b55);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e7b58:L6e7b58:{c.instructions+=3;NFSU2_TR(0x6e7b58);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B6e7b5b:{NFSU2_TR(0x6e7b5b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e7b5d:{NFSU2_TR(0x6e7b5d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e7b7f;}}
}
B6e7b5f:L6e7b5f:{c.instructions+=4;NFSU2_TR(0x6e7b5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e7b60:{NFSU2_TR(0x6e7b60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e7b63:{NFSU2_TR(0x6e7b63);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7b65:{NFSU2_TR(0x6e7b65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7b58u);}goto L6e7b58;}}
}
B6e7b67:L6e7b67:{c.instructions+=1;NFSU2_TR(0x6e7b67);
{goto L6e7b7f;}
}
B6e7b69:L6e7b69:{c.instructions+=2;NFSU2_TR(0x6e7b69);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7b6b:{NFSU2_TR(0x6e7b6b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7b7f;}}
}
B6e7b6d:L6e7b6d:{c.instructions+=1;NFSU2_TR(0x6e7b6d);
__builtin_memmove((R+4),(R+4),4);
}
B6e7b70:L6e7b70:{c.instructions+=3;NFSU2_TR(0x6e7b70);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e7b73:{NFSU2_TR(0x6e7b73);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e7b75:{NFSU2_TR(0x6e7b75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7b7f;}}
}
B6e7b77:L6e7b77:{c.instructions+=4;NFSU2_TR(0x6e7b77);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e7b78:{NFSU2_TR(0x6e7b78);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6e7b7b:{NFSU2_TR(0x6e7b7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7b7d:{NFSU2_TR(0x6e7b7d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7b70u);}goto L6e7b70;}}
}
B6e7b7f:L6e7b7f:{c.instructions+=1;NFSU2_TR(0x6e7b7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7b82:L6e7b82:{c.instructions+=38;NFSU2_TR(0x6e7b82);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e7b86:{NFSU2_TR(0x6e7b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7b89:{NFSU2_TR(0x6e7b89);
w4(R+4,u32(0x1full));
}
B6e7b8e:{NFSU2_TR(0x6e7b8e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6e7b90:{NFSU2_TR(0x6e7b90);
w4(R+28,u32(0x7fffffffull));
}
B6e7b95:{NFSU2_TR(0x6e7b95);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B6e7b97:{NFSU2_TR(0x6e7b97);
__builtin_memmove((R+4),(R+0),4);
}
B6e7b99:{NFSU2_TR(0x6e7b99);
__builtin_memmove((R+8),(R+24),4);
}
B6e7b9b:{NFSU2_TR(0x6e7b9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6e7b9d:{NFSU2_TR(0x6e7b9d);
__builtin_memmove((R+4),(R+28),4);
}
B6e7b9f:{NFSU2_TR(0x6e7b9f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B6e7ba1:{NFSU2_TR(0x6e7ba1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7ba5:{NFSU2_TR(0x6e7ba5);
__builtin_memmove((R+4),(R+0),4);
}
B6e7ba7:{NFSU2_TR(0x6e7ba7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7bab:{NFSU2_TR(0x6e7bab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7baf:{NFSU2_TR(0x6e7baf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B6e7bb1:{NFSU2_TR(0x6e7bb1);
w4(R+4,u32(0x1ull));
}
B6e7bb6:{NFSU2_TR(0x6e7bb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7bba:{NFSU2_TR(0x6e7bba);
__builtin_memmove((R+4),(R+0),4);
}
B6e7bbc:{NFSU2_TR(0x6e7bbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7bc0:{NFSU2_TR(0x6e7bc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e7bc2:{NFSU2_TR(0x6e7bc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7bc6:{NFSU2_TR(0x6e7bc6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e7bca:{NFSU2_TR(0x6e7bca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e7bcb:{NFSU2_TR(0x6e7bcb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e7bce:{NFSU2_TR(0x6e7bce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e7bcf:{NFSU2_TR(0x6e7bcf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6e7bd2:{NFSU2_TR(0x6e7bd2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e7bd5:{NFSU2_TR(0x6e7bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7bd9:{NFSU2_TR(0x6e7bd9);
__builtin_memmove((R+8),(R+12),4);
}
B6e7bdb:{NFSU2_TR(0x6e7bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e7bde:{NFSU2_TR(0x6e7bde);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6e7be0:{NFSU2_TR(0x6e7be0);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e7be4:{NFSU2_TR(0x6e7be4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e7be6:{NFSU2_TR(0x6e7be6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7be8:{NFSU2_TR(0x6e7be8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7bec:{NFSU2_TR(0x6e7bec);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7bf0:{NFSU2_TR(0x6e7bf0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7c0c;}}
}
B6e7bf2:L6e7bf2:{c.instructions+=9;NFSU2_TR(0x6e7bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7bf5:{NFSU2_TR(0x6e7bf5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e7bf9:{NFSU2_TR(0x6e7bf9);
w4(R+0,u32(0xaaaaaaabull));
}
B6e7bfe:{NFSU2_TR(0x6e7bfe);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e7c00:{NFSU2_TR(0x6e7c00);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6e7c03:{NFSU2_TR(0x6e7c03);
u8 U[13];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6e7c07:{NFSU2_TR(0x6e7c07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e7c08:{NFSU2_TR(0x6e7c08);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7c0a:{NFSU2_TR(0x6e7c0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7bf2u);}goto L6e7bf2;}}
}
B6e7c0c:L6e7c0c:{c.instructions+=4;NFSU2_TR(0x6e7c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7c10:{NFSU2_TR(0x6e7c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7c14:{NFSU2_TR(0x6e7c14);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7c16:{NFSU2_TR(0x6e7c16);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e7c26;}}
}
B6e7c18:L6e7c18:{c.instructions+=4;NFSU2_TR(0x6e7c18);
__builtin_memmove((R+0),gp(0x811e32),1);
}
B6e7c1d:{NFSU2_TR(0x6e7c1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e7c1f:{NFSU2_TR(0x6e7c1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e7c24:{NFSU2_TR(0x6e7c24);
if(r1(R+518)){{goto L6e7c2b;}}
}
B6e7c26:L6e7c26:{c.instructions+=1;NFSU2_TR(0x6e7c26);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e7c2b:L6e7c2b:{c.instructions+=3;NFSU2_TR(0x6e7c2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7c2f:{NFSU2_TR(0x6e7c2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7c32:{NFSU2_TR(0x6e7c32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7c5e;}}
}
B6e7c34:L6e7c34:{c.instructions+=11;NFSU2_TR(0x6e7c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7c37:{NFSU2_TR(0x6e7c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7c3a:{NFSU2_TR(0x6e7c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7c3d:{NFSU2_TR(0x6e7c3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7c41:{NFSU2_TR(0x6e7c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7c44:{NFSU2_TR(0x6e7c44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7c48:{NFSU2_TR(0x6e7c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7c4b:{NFSU2_TR(0x6e7c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7c4e:{NFSU2_TR(0x6e7c4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7c52:{NFSU2_TR(0x6e7c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e7c59:{NFSU2_TR(0x6e7c59);
{goto L6e7e7f;}
}
B6e7c5e:L6e7c5e:{c.instructions+=2;NFSU2_TR(0x6e7c5e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e7c61:{NFSU2_TR(0x6e7c61);
if(r1(R+518)){{goto L6e7c75;}}
}
B6e7c63:L6e7c63:{c.instructions+=2;NFSU2_TR(0x6e7c63);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7c67:{NFSU2_TR(0x6e7c67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7c75;}}
}
B6e7c69:L6e7c69:{c.instructions+=3;NFSU2_TR(0x6e7c69);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e7c6d:{NFSU2_TR(0x6e7c6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e7c6f:{NFSU2_TR(0x6e7c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7c75;}}
}
B6e7c71:L6e7c71:{c.instructions+=2;NFSU2_TR(0x6e7c71);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B6e7c73:{NFSU2_TR(0x6e7c73);
{goto L6e7cd3;}
}
B6e7c75:L6e7c75:{c.instructions+=3;NFSU2_TR(0x6e7c75);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e7c77:{NFSU2_TR(0x6e7c77);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7c79:{NFSU2_TR(0x6e7c79);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7cd1;}}
}
B6e7c7b:L6e7c7b:{c.instructions+=2;NFSU2_TR(0x6e7c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7c7f:{NFSU2_TR(0x6e7c7f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e7c81:L6e7c81:{c.instructions+=9;NFSU2_TR(0x6e7c81);
u8 U[13];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e7c86:{NFSU2_TR(0x6e7c86);
__builtin_memmove((R+4),(R+0),4);
}
B6e7c88:{NFSU2_TR(0x6e7c88);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e7c8b:{NFSU2_TR(0x6e7c8b);
w4(R+20,u32(0x1ull));
}
B6e7c90:{NFSU2_TR(0x6e7c90);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e7c92:{NFSU2_TR(0x6e7c92);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7c99:{NFSU2_TR(0x6e7c99);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e7c9c:{NFSU2_TR(0x6e7c9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7c9f:{NFSU2_TR(0x6e7c9f);
if(r1(R+518)){{goto L6e7cc5;}}
}
B6e7ca1:L6e7ca1:{c.instructions+=11;NFSU2_TR(0x6e7ca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7ca5:{NFSU2_TR(0x6e7ca5);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e7ca9:{NFSU2_TR(0x6e7ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7cac:{NFSU2_TR(0x6e7cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7cb0:{NFSU2_TR(0x6e7cb0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6e7cb2:{NFSU2_TR(0x6e7cb2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7cb6:{NFSU2_TR(0x6e7cb6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7cb9:{NFSU2_TR(0x6e7cb9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7cbb:{NFSU2_TR(0x6e7cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7cbe:{NFSU2_TR(0x6e7cbe);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7cc1:{NFSU2_TR(0x6e7cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7cc5:L6e7cc5:{c.instructions+=5;NFSU2_TR(0x6e7cc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e7cc9:{NFSU2_TR(0x6e7cc9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e7cca:{NFSU2_TR(0x6e7cca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e7ccd:{NFSU2_TR(0x6e7ccd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7ccf:{NFSU2_TR(0x6e7ccf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7c81u);}goto L6e7c81;}}
}
B6e7cd1:L6e7cd1:{c.instructions+=1;NFSU2_TR(0x6e7cd1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e7cd3:L6e7cd3:{c.instructions+=3;NFSU2_TR(0x6e7cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7cd7:{NFSU2_TR(0x6e7cd7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e7cd9:{NFSU2_TR(0x6e7cd9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e7da4;}}
}
B6e7cdf:L6e7cdf:{c.instructions+=15;NFSU2_TR(0x6e7cdf);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e7ce3:{NFSU2_TR(0x6e7ce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7ce7:{NFSU2_TR(0x6e7ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e7cea:{NFSU2_TR(0x6e7cea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e7ced:{NFSU2_TR(0x6e7ced);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6e7cef:{NFSU2_TR(0x6e7cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7cf3:{NFSU2_TR(0x6e7cf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B6e7cf7:{NFSU2_TR(0x6e7cf7);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6e7cf9:{NFSU2_TR(0x6e7cf9);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B6e7cfb:{NFSU2_TR(0x6e7cfb);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B6e7cfd:{NFSU2_TR(0x6e7cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d01:{NFSU2_TR(0x6e7d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d05:{NFSU2_TR(0x6e7d05);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d09:{NFSU2_TR(0x6e7d09);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d0d:{NFSU2_TR(0x6e7d0d);
__builtin_memmove((R+4),(R+4),4);
}
B6e7d10:L6e7d10:{c.instructions+=3;NFSU2_TR(0x6e7d10);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e7d12:{NFSU2_TR(0x6e7d12);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7d14:{NFSU2_TR(0x6e7d14);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7d7c;}}
}
B6e7d16:L6e7d16:{c.instructions+=2;NFSU2_TR(0x6e7d16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e7d18:{NFSU2_TR(0x6e7d18);
{goto L6e7d20;}
}
B6e7d20:L6e7d20:{c.instructions+=10;NFSU2_TR(0x6e7d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7d24:{NFSU2_TR(0x6e7d24);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6e7d28:{NFSU2_TR(0x6e7d28);
__builtin_memmove((R+4),(R+0),4);
}
B6e7d2a:{NFSU2_TR(0x6e7d2a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e7d2d:{NFSU2_TR(0x6e7d2d);
w4(R+20,u32(0x1ull));
}
B6e7d32:{NFSU2_TR(0x6e7d32);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e7d34:{NFSU2_TR(0x6e7d34);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7d3b:{NFSU2_TR(0x6e7d3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e7d3e:{NFSU2_TR(0x6e7d3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7d41:{NFSU2_TR(0x6e7d41);
if(r1(R+518)){{goto L6e7d67;}}
}
B6e7d43:L6e7d43:{c.instructions+=12;NFSU2_TR(0x6e7d43);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+20,u32(r1(U+0)));
}
B6e7d46:{NFSU2_TR(0x6e7d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7d4a:{NFSU2_TR(0x6e7d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7d4d:{NFSU2_TR(0x6e7d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7d50:{NFSU2_TR(0x6e7d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d54:{NFSU2_TR(0x6e7d54);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e7d56:{NFSU2_TR(0x6e7d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e7d59:{NFSU2_TR(0x6e7d59);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7d5d:{NFSU2_TR(0x6e7d5d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7d60:{NFSU2_TR(0x6e7d60);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7d63:{NFSU2_TR(0x6e7d63);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7d65:{NFSU2_TR(0x6e7d65);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7d67:L6e7d67:{c.instructions+=6;NFSU2_TR(0x6e7d67);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e7d6b:{NFSU2_TR(0x6e7d6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e7d6c:{NFSU2_TR(0x6e7d6c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e7d6f:{NFSU2_TR(0x6e7d6f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e7d70:{NFSU2_TR(0x6e7d70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7d72:{NFSU2_TR(0x6e7d72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7d20u);}goto L6e7d20;}}
}
B6e7d74:L6e7d74:{c.instructions+=2;NFSU2_TR(0x6e7d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7d78:{NFSU2_TR(0x6e7d78);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7d7c:L6e7d7c:{c.instructions+=10;NFSU2_TR(0x6e7d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7d80:{NFSU2_TR(0x6e7d80);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7d84:{NFSU2_TR(0x6e7d84);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7d88:{NFSU2_TR(0x6e7d88);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6e7d8a:{NFSU2_TR(0x6e7d8a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B6e7d8c:{NFSU2_TR(0x6e7d8c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e7d8d:{NFSU2_TR(0x6e7d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d91:{NFSU2_TR(0x6e7d91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d95:{NFSU2_TR(0x6e7d95);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7d99:{NFSU2_TR(0x6e7d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7d10u);}goto L6e7d10;}}
}
B6e7d9f:L6e7d9f:{c.instructions+=1;NFSU2_TR(0x6e7d9f);
{goto L6e7e7f;}
}
B6e7da4:L6e7da4:{c.instructions+=1;NFSU2_TR(0x6e7da4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7e7f;}}
}
B6e7daa:L6e7daa:{c.instructions+=10;NFSU2_TR(0x6e7daa);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e7dae:{NFSU2_TR(0x6e7dae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7db2:{NFSU2_TR(0x6e7db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7db6:{NFSU2_TR(0x6e7db6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e7db9:{NFSU2_TR(0x6e7db9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e7dbc:{NFSU2_TR(0x6e7dbc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6e7dbe:{NFSU2_TR(0x6e7dbe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e7dbf:{NFSU2_TR(0x6e7dbf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7dc1:{NFSU2_TR(0x6e7dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7dc5:{NFSU2_TR(0x6e7dc5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e7e7f;}}
}
B6e7dcb:L6e7dcb:{c.instructions+=11;NFSU2_TR(0x6e7dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7dcf:{NFSU2_TR(0x6e7dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7dd3:{NFSU2_TR(0x6e7dd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B6e7dd7:{NFSU2_TR(0x6e7dd7);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6e7dd9:{NFSU2_TR(0x6e7dd9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B6e7ddb:{NFSU2_TR(0x6e7ddb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B6e7ddd:{NFSU2_TR(0x6e7ddd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e7dde:{NFSU2_TR(0x6e7dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7de2:{NFSU2_TR(0x6e7de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7de6:{NFSU2_TR(0x6e7de6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7dea:{NFSU2_TR(0x6e7dea);
__builtin_memmove((R+12),(R+12),4);
}
B6e7df0:L6e7df0:{c.instructions+=3;NFSU2_TR(0x6e7df0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e7df2:{NFSU2_TR(0x6e7df2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7df4:{NFSU2_TR(0x6e7df4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e7e5c;}}
}
B6e7df6:L6e7df6:{c.instructions+=2;NFSU2_TR(0x6e7df6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e7df8:{NFSU2_TR(0x6e7df8);
{goto L6e7e00;}
}
B6e7e00:L6e7e00:{c.instructions+=10;NFSU2_TR(0x6e7e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7e04:{NFSU2_TR(0x6e7e04);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6e7e08:{NFSU2_TR(0x6e7e08);
__builtin_memmove((R+4),(R+0),4);
}
B6e7e0a:{NFSU2_TR(0x6e7e0a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e7e0d:{NFSU2_TR(0x6e7e0d);
w4(R+20,u32(0x1ull));
}
B6e7e12:{NFSU2_TR(0x6e7e12);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e7e14:{NFSU2_TR(0x6e7e14);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7e1b:{NFSU2_TR(0x6e7e1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e7e1e:{NFSU2_TR(0x6e7e1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7e21:{NFSU2_TR(0x6e7e21);
if(r1(R+518)){{goto L6e7e47;}}
}
B6e7e23:L6e7e23:{c.instructions+=12;NFSU2_TR(0x6e7e23);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+20,u32(r1(U+0)));
}
B6e7e26:{NFSU2_TR(0x6e7e26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7e2a:{NFSU2_TR(0x6e7e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7e2d:{NFSU2_TR(0x6e7e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7e30:{NFSU2_TR(0x6e7e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e34:{NFSU2_TR(0x6e7e34);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e7e36:{NFSU2_TR(0x6e7e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e7e39:{NFSU2_TR(0x6e7e39);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7e3d:{NFSU2_TR(0x6e7e3d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7e40:{NFSU2_TR(0x6e7e40);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7e43:{NFSU2_TR(0x6e7e43);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e7e45:{NFSU2_TR(0x6e7e45);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7e47:L6e7e47:{c.instructions+=6;NFSU2_TR(0x6e7e47);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e7e4b:{NFSU2_TR(0x6e7e4b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e7e4c:{NFSU2_TR(0x6e7e4c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e7e4f:{NFSU2_TR(0x6e7e4f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e7e50:{NFSU2_TR(0x6e7e50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7e52:{NFSU2_TR(0x6e7e52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7e00u);}goto L6e7e00;}}
}
B6e7e54:L6e7e54:{c.instructions+=2;NFSU2_TR(0x6e7e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e7e58:{NFSU2_TR(0x6e7e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7e5c:L6e7e5c:{c.instructions+=10;NFSU2_TR(0x6e7e5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7e60:{NFSU2_TR(0x6e7e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e7e64:{NFSU2_TR(0x6e7e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7e68:{NFSU2_TR(0x6e7e68);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B6e7e6a:{NFSU2_TR(0x6e7e6a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6e7e6c:{NFSU2_TR(0x6e7e6c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e7e6d:{NFSU2_TR(0x6e7e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e71:{NFSU2_TR(0x6e7e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e75:{NFSU2_TR(0x6e7e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e79:{NFSU2_TR(0x6e7e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7df0u);}goto L6e7df0;}}
}
B6e7e7f:L6e7e7f:{c.instructions+=9;NFSU2_TR(0x6e7e7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7e83:{NFSU2_TR(0x6e7e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7e87:{NFSU2_TR(0x6e7e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e8a:{NFSU2_TR(0x6e7e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7e8d:{NFSU2_TR(0x6e7e8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7e8f:{NFSU2_TR(0x6e7e8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e7e92:{NFSU2_TR(0x6e7e92);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e96:{NFSU2_TR(0x6e7e96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e7e9e:{NFSU2_TR(0x6e7e9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7ec5;}}
}
B6e7ea0:L6e7ea0:{c.instructions+=6;NFSU2_TR(0x6e7ea0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7ea4:{NFSU2_TR(0x6e7ea4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7eab:{NFSU2_TR(0x6e7eab);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e7ead:{NFSU2_TR(0x6e7ead);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e7eaf:{NFSU2_TR(0x6e7eaf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e7eb2:{NFSU2_TR(0x6e7eb2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e7ff7;}}
}
B6e7eb8:L6e7eb8:{c.instructions+=4;NFSU2_TR(0x6e7eb8);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7ebf:{NFSU2_TR(0x6e7ebf);
w1(R+0,u8(0x1ull));
}
B6e7ec1:{NFSU2_TR(0x6e7ec1);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e7ec3:{NFSU2_TR(0x6e7ec3);
{goto L6e7f37;}
}
B6e7ec5:L6e7ec5:{c.instructions+=2;NFSU2_TR(0x6e7ec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7ec7:{NFSU2_TR(0x6e7ec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7efb;}}
}
B6e7ec9:L6e7ec9:{c.instructions+=5;NFSU2_TR(0x6e7ec9);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7ed0:{NFSU2_TR(0x6e7ed0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e7ed6:{NFSU2_TR(0x6e7ed6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e7ed8:{NFSU2_TR(0x6e7ed8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e7edb:{NFSU2_TR(0x6e7edb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e7ef7;}}
}
B6e7edd:L6e7edd:{c.instructions+=7;NFSU2_TR(0x6e7edd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B6e7ee0:{NFSU2_TR(0x6e7ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7ee4:{NFSU2_TR(0x6e7ee4);
w1(R+0,u8(0x1ull));
}
B6e7ee6:{NFSU2_TR(0x6e7ee6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7eea:{NFSU2_TR(0x6e7eea);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e7ef1:{NFSU2_TR(0x6e7ef1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7ef5:{NFSU2_TR(0x6e7ef5);
{goto L6e7f3d;}
}
B6e7ef7:L6e7ef7:{c.instructions+=2;NFSU2_TR(0x6e7ef7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e7ef9:{NFSU2_TR(0x6e7ef9);
{goto L6e7f3d;}
}
B6e7efb:L6e7efb:{c.instructions+=8;NFSU2_TR(0x6e7efb);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e7f00:{NFSU2_TR(0x6e7f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7f04:{NFSU2_TR(0x6e7f04);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7f08:{NFSU2_TR(0x6e7f08);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7f0f:{NFSU2_TR(0x6e7f0f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e7f11:{NFSU2_TR(0x6e7f11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e7f13:{NFSU2_TR(0x6e7f13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e7f16:{NFSU2_TR(0x6e7f16);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e7ff7;}}
}
B6e7f1c:L6e7f1c:{c.instructions+=8;NFSU2_TR(0x6e7f1c);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e7f20:{NFSU2_TR(0x6e7f20);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7f27:{NFSU2_TR(0x6e7f27);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e7f29:{NFSU2_TR(0x6e7f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7f2d:{NFSU2_TR(0x6e7f2d);
w1(R+0,u8(0x1ull));
}
B6e7f2f:{NFSU2_TR(0x6e7f2f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e7f33:{NFSU2_TR(0x6e7f33);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e7f35:{NFSU2_TR(0x6e7f35);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6e7f37:L6e7f37:{c.instructions+=1;NFSU2_TR(0x6e7f37);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7f3b:L6e7f3b:{c.instructions+=1;NFSU2_TR(0x6e7f3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e7f3d:L6e7f3d:{c.instructions+=4;NFSU2_TR(0x6e7f3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e7f3f:{NFSU2_TR(0x6e7f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7f42:{NFSU2_TR(0x6e7f42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7f46:{NFSU2_TR(0x6e7f46);
if(r1(R+518)){TAIL_STATIC(0x6e816fu,6e8);}
}
B6e7f4c:L6e7f4c:{c.instructions+=4;NFSU2_TR(0x6e7f4c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e7f50:{NFSU2_TR(0x6e7f50);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e7f51:{NFSU2_TR(0x6e7f51);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7f53:{NFSU2_TR(0x6e7f53);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e816fu,6e8);}
}
B6e7f59:L6e7f59:{c.instructions+=20;NFSU2_TR(0x6e7f59);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7f5d:{NFSU2_TR(0x6e7f5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e7f61:{NFSU2_TR(0x6e7f61);
__builtin_memmove((R+0),(R+20),4);
}
B6e7f63:{NFSU2_TR(0x6e7f63);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6e7f65:{NFSU2_TR(0x6e7f65);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e7f68:{NFSU2_TR(0x6e7f68);
w4(R+8,u32(0x1ull));
}
B6e7f6d:{NFSU2_TR(0x6e7f6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e7f6f:{NFSU2_TR(0x6e7f6f);
__builtin_memmove((R+28),(R+12),4);
}
B6e7f71:{NFSU2_TR(0x6e7f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e7f74:{NFSU2_TR(0x6e7f74);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e7f75:{NFSU2_TR(0x6e7f75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e7f78:{NFSU2_TR(0x6e7f78);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e7f79:{NFSU2_TR(0x6e7f79);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e7f7c:{NFSU2_TR(0x6e7f7c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e7f7f:{NFSU2_TR(0x6e7f7f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e7f81:{NFSU2_TR(0x6e7f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7f85:{NFSU2_TR(0x6e7f85);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e7f89:{NFSU2_TR(0x6e7f89);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7f8c:{NFSU2_TR(0x6e7f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e7f90:{NFSU2_TR(0x6e7f90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e7ffe;}}
}
B6e7f92:L6e7f92:{c.instructions+=3;NFSU2_TR(0x6e7f92);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e7f94:{NFSU2_TR(0x6e7f94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e7f96:{NFSU2_TR(0x6e7f96);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6e81c1u,6e8);}
}
B6e7f9c:L6e7f9c:{c.instructions+=1;NFSU2_TR(0x6e7f9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e7fa0:L6e7fa0:{c.instructions+=9;NFSU2_TR(0x6e7fa0);
u8 U[13];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e7fa5:{NFSU2_TR(0x6e7fa5);
__builtin_memmove((R+4),(R+0),4);
}
B6e7fa7:{NFSU2_TR(0x6e7fa7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e7faa:{NFSU2_TR(0x6e7faa);
w4(R+20,u32(0x1ull));
}
B6e7faf:{NFSU2_TR(0x6e7faf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e7fb1:{NFSU2_TR(0x6e7fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7fb8:{NFSU2_TR(0x6e7fb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e7fbb:{NFSU2_TR(0x6e7fbb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e7fbe:{NFSU2_TR(0x6e7fbe);
if(r1(R+518)){{goto L6e7fe6;}}
}
B6e7fc0:L6e7fc0:{c.instructions+=11;NFSU2_TR(0x6e7fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7fc3:{NFSU2_TR(0x6e7fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e7fc6:{NFSU2_TR(0x6e7fc6);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e7fc9:{NFSU2_TR(0x6e7fc9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B6e7fcc:{NFSU2_TR(0x6e7fcc);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e7fcf:{NFSU2_TR(0x6e7fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e7fd2:{NFSU2_TR(0x6e7fd2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e7fd6:{NFSU2_TR(0x6e7fd6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e7fd8:{NFSU2_TR(0x6e7fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e7fdf:{NFSU2_TR(0x6e7fdf);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e7fe2:{NFSU2_TR(0x6e7fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e7fe6:L6e7fe6:{c.instructions+=5;NFSU2_TR(0x6e7fe6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e7fea:{NFSU2_TR(0x6e7fea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e7fed:{NFSU2_TR(0x6e7fed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e7fee:{NFSU2_TR(0x6e7fee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e7ff0:{NFSU2_TR(0x6e7ff0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7fa0u);}goto L6e7fa0;}}
}
B6e7ff2:L6e7ff2:{c.instructions+=1;NFSU2_TR(0x6e7ff2);
TAIL_STATIC(0x6e81c1u,6e8);
}
B6e7ff7:L6e7ff7:{c.instructions+=2;NFSU2_TR(0x6e7ff7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e7ff9:{NFSU2_TR(0x6e7ff9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e7f3bu);}goto L6e7f3b;}
}
B6e7ffe:L6e7ffe:{c.instructions+=1;NFSU2_TR(0x6e7ffe);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x6e8002u,6e8);
}
XIT:NFSU2_TR_EXIT(0x6e7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
