#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 page_5d7(Cpu& c){return body_5d7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d7002:goto L5d7002;
case 0x5d7004:goto L5d7004;
case 0x5d7006:c.instructions+=4;goto B5d7006;
case 0x5d700a:c.instructions+=3;goto B5d700a;
case 0x5d700c:c.instructions+=2;goto B5d700c;
case 0x5d700f:c.instructions+=1;goto B5d700f;
case 0x5d7011:goto L5d7011;
case 0x5d7015:c.instructions+=5;goto B5d7015;
case 0x5d7019:c.instructions+=4;goto B5d7019;
case 0x5d701b:c.instructions+=3;goto B5d701b;
case 0x5d701d:c.instructions+=2;goto B5d701d;
case 0x5d7020:c.instructions+=1;goto B5d7020;
case 0x5d7022:goto L5d7022;
case 0x5d7026:c.instructions+=5;goto B5d7026;
case 0x5d702a:c.instructions+=4;goto B5d702a;
case 0x5d702e:c.instructions+=3;goto B5d702e;
case 0x5d7030:c.instructions+=2;goto B5d7030;
case 0x5d7033:c.instructions+=1;goto B5d7033;
case 0x5d7035:goto L5d7035;
case 0x5d7039:c.instructions+=4;goto B5d7039;
case 0x5d703b:c.instructions+=3;goto B5d703b;
case 0x5d703d:c.instructions+=2;goto B5d703d;
case 0x5d7040:c.instructions+=1;goto B5d7040;
case 0x5d7042:goto L5d7042;
case 0x5d7045:c.instructions+=12;goto B5d7045;
case 0x5d7048:c.instructions+=11;goto B5d7048;
case 0x5d704c:c.instructions+=10;goto B5d704c;
case 0x5d704e:c.instructions+=9;goto B5d704e;
case 0x5d7050:c.instructions+=8;goto B5d7050;
case 0x5d7052:c.instructions+=7;goto B5d7052;
case 0x5d7054:c.instructions+=6;goto B5d7054;
case 0x5d7056:c.instructions+=5;goto B5d7056;
case 0x5d7059:c.instructions+=4;goto B5d7059;
case 0x5d705d:c.instructions+=3;goto B5d705d;
case 0x5d705f:c.instructions+=2;goto B5d705f;
case 0x5d7062:c.instructions+=1;goto B5d7062;
case 0x5d7064:goto L5d7064;
case 0x5d7068:c.instructions+=3;goto B5d7068;
case 0x5d706a:c.instructions+=2;goto B5d706a;
case 0x5d706d:c.instructions+=1;goto B5d706d;
case 0x5d7071:goto L5d7071;
case 0x5d7074:c.instructions+=3;goto B5d7074;
case 0x5d7077:c.instructions+=2;goto B5d7077;
case 0x5d7078:c.instructions+=1;goto B5d7078;
case 0x5d707a:goto L5d707a;
case 0x5d707e:c.instructions+=6;goto B5d707e;
case 0x5d707f:c.instructions+=5;goto B5d707f;
case 0x5d7080:c.instructions+=4;goto B5d7080;
case 0x5d7081:c.instructions+=3;goto B5d7081;
case 0x5d7082:c.instructions+=2;goto B5d7082;
case 0x5d7085:c.instructions+=1;goto B5d7085;
case 0x5d7090:goto L5d7090;
case 0x5d7091:c.instructions+=10;goto B5d7091;
case 0x5d7092:c.instructions+=9;goto B5d7092;
case 0x5d7096:c.instructions+=8;goto B5d7096;
case 0x5d7098:c.instructions+=7;goto B5d7098;
case 0x5d709a:c.instructions+=6;goto B5d709a;
case 0x5d709b:c.instructions+=5;goto B5d709b;
case 0x5d709e:c.instructions+=4;goto B5d709e;
case 0x5d709f:c.instructions+=3;goto B5d709f;
case 0x5d70a2:c.instructions+=2;goto B5d70a2;
case 0x5d70a3:c.instructions+=1;goto B5d70a3;
case 0x5d70a8:goto L5d70a8;
case 0x5d70ab:c.instructions+=2;goto B5d70ab;
case 0x5d70ad:c.instructions+=1;goto B5d70ad;
case 0x5d70af:goto L5d70af;
case 0x5d70b0:c.instructions+=3;goto B5d70b0;
case 0x5d70b2:c.instructions+=2;goto B5d70b2;
case 0x5d70b3:c.instructions+=1;goto B5d70b3;
case 0x5d70b6:goto L5d70b6;
case 0x5d70ba:c.instructions+=5;goto B5d70ba;
case 0x5d70bb:c.instructions+=4;goto B5d70bb;
case 0x5d70be:c.instructions+=3;goto B5d70be;
case 0x5d70bf:c.instructions+=2;goto B5d70bf;
case 0x5d70c1:c.instructions+=1;goto B5d70c1;
case 0x5d70c6:goto L5d70c6;
case 0x5d70c9:c.instructions+=3;goto B5d70c9;
case 0x5d70ca:c.instructions+=2;goto B5d70ca;
case 0x5d70cb:c.instructions+=1;goto B5d70cb;
case 0x5d70d0:goto L5d70d0;
case 0x5d70d1:c.instructions+=16;goto B5d70d1;
case 0x5d70d3:c.instructions+=15;goto B5d70d3;
case 0x5d70d6:c.instructions+=14;goto B5d70d6;
case 0x5d70d9:c.instructions+=13;goto B5d70d9;
case 0x5d70dc:c.instructions+=12;goto B5d70dc;
case 0x5d70dd:c.instructions+=11;goto B5d70dd;
case 0x5d70de:c.instructions+=10;goto B5d70de;
case 0x5d70df:c.instructions+=9;goto B5d70df;
case 0x5d70e1:c.instructions+=8;goto B5d70e1;
case 0x5d70e4:c.instructions+=7;goto B5d70e4;
case 0x5d70e5:c.instructions+=6;goto B5d70e5;
case 0x5d70e6:c.instructions+=5;goto B5d70e6;
case 0x5d70e9:c.instructions+=4;goto B5d70e9;
case 0x5d70ec:c.instructions+=3;goto B5d70ec;
case 0x5d70ed:c.instructions+=2;goto B5d70ed;
case 0x5d70ee:c.instructions+=1;goto B5d70ee;
case 0x5d70f3:goto L5d70f3;
case 0x5d70f6:c.instructions+=2;goto B5d70f6;
case 0x5d70f8:c.instructions+=1;goto B5d70f8;
case 0x5d70fa:goto L5d70fa;
case 0x5d70fd:c.instructions+=6;goto B5d70fd;
case 0x5d70fe:c.instructions+=5;goto B5d70fe;
case 0x5d70ff:c.instructions+=4;goto B5d70ff;
case 0x5d7100:c.instructions+=3;goto B5d7100;
case 0x5d7102:c.instructions+=2;goto B5d7102;
case 0x5d7103:c.instructions+=1;goto B5d7103;
case 0x5d7106:goto L5d7106;
case 0x5d7109:c.instructions+=5;goto B5d7109;
case 0x5d710b:c.instructions+=4;goto B5d710b;
case 0x5d710c:c.instructions+=3;goto B5d710c;
case 0x5d710d:c.instructions+=2;goto B5d710d;
case 0x5d710e:c.instructions+=1;goto B5d710e;
case 0x5d7113:goto L5d7113;
case 0x5d7116:c.instructions+=2;goto B5d7116;
case 0x5d7118:c.instructions+=1;goto B5d7118;
case 0x5d711a:goto L5d711a;
case 0x5d711e:c.instructions+=5;goto B5d711e;
case 0x5d711f:c.instructions+=4;goto B5d711f;
case 0x5d7122:c.instructions+=3;goto B5d7122;
case 0x5d7125:c.instructions+=2;goto B5d7125;
case 0x5d7126:c.instructions+=1;goto B5d7126;
case 0x5d712b:goto L5d712b;
case 0x5d712e:c.instructions+=2;goto B5d712e;
case 0x5d7130:c.instructions+=1;goto B5d7130;
case 0x5d7132:goto L5d7132;
case 0x5d7138:c.instructions+=6;goto B5d7138;
case 0x5d7139:c.instructions+=5;goto B5d7139;
case 0x5d713a:c.instructions+=4;goto B5d713a;
case 0x5d713b:c.instructions+=3;goto B5d713b;
case 0x5d713d:c.instructions+=2;goto B5d713d;
case 0x5d713e:c.instructions+=1;goto B5d713e;
case 0x5d7141:goto L5d7141;
case 0x5d7145:c.instructions+=5;goto B5d7145;
case 0x5d7148:c.instructions+=4;goto B5d7148;
case 0x5d714a:c.instructions+=3;goto B5d714a;
case 0x5d714c:c.instructions+=2;goto B5d714c;
case 0x5d7150:c.instructions+=1;goto B5d7150;
case 0x5d7156:goto L5d7156;
case 0x5d7159:c.instructions+=1;goto B5d7159;
case 0x5d7160:goto L5d7160;
case 0x5d7163:c.instructions+=29;goto B5d7163;
case 0x5d7165:c.instructions+=28;goto B5d7165;
case 0x5d7166:c.instructions+=27;goto B5d7166;
case 0x5d7168:c.instructions+=26;goto B5d7168;
case 0x5d716b:c.instructions+=25;goto B5d716b;
case 0x5d716d:c.instructions+=24;goto B5d716d;
case 0x5d716f:c.instructions+=23;goto B5d716f;
case 0x5d7173:c.instructions+=22;goto B5d7173;
case 0x5d7176:c.instructions+=21;goto B5d7176;
case 0x5d717a:c.instructions+=20;goto B5d717a;
case 0x5d717d:c.instructions+=19;goto B5d717d;
case 0x5d7181:c.instructions+=18;goto B5d7181;
case 0x5d7185:c.instructions+=17;goto B5d7185;
case 0x5d7188:c.instructions+=16;goto B5d7188;
case 0x5d718c:c.instructions+=15;goto B5d718c;
case 0x5d718e:c.instructions+=14;goto B5d718e;
case 0x5d7192:c.instructions+=13;goto B5d7192;
case 0x5d7196:c.instructions+=12;goto B5d7196;
case 0x5d7198:c.instructions+=11;goto B5d7198;
case 0x5d719a:c.instructions+=10;goto B5d719a;
case 0x5d719e:c.instructions+=9;goto B5d719e;
case 0x5d71a2:c.instructions+=8;goto B5d71a2;
case 0x5d71a6:c.instructions+=7;goto B5d71a6;
case 0x5d71aa:c.instructions+=6;goto B5d71aa;
case 0x5d71ac:c.instructions+=5;goto B5d71ac;
case 0x5d71ad:c.instructions+=4;goto B5d71ad;
case 0x5d71ae:c.instructions+=3;goto B5d71ae;
case 0x5d71b0:c.instructions+=2;goto B5d71b0;
case 0x5d71b4:c.instructions+=1;goto B5d71b4;
case 0x5d71b9:goto L5d71b9;
case 0x5d71bd:c.instructions+=17;goto B5d71bd;
case 0x5d71bf:c.instructions+=16;goto B5d71bf;
case 0x5d71c2:c.instructions+=15;goto B5d71c2;
case 0x5d71c6:c.instructions+=14;goto B5d71c6;
case 0x5d71ca:c.instructions+=13;goto B5d71ca;
case 0x5d71ce:c.instructions+=12;goto B5d71ce;
case 0x5d71d2:c.instructions+=11;goto B5d71d2;
case 0x5d71d4:c.instructions+=10;goto B5d71d4;
case 0x5d71d8:c.instructions+=9;goto B5d71d8;
case 0x5d71dc:c.instructions+=8;goto B5d71dc;
case 0x5d71e0:c.instructions+=7;goto B5d71e0;
case 0x5d71e4:c.instructions+=6;goto B5d71e4;
case 0x5d71e6:c.instructions+=5;goto B5d71e6;
case 0x5d71ea:c.instructions+=4;goto B5d71ea;
case 0x5d71f0:c.instructions+=3;goto B5d71f0;
case 0x5d71f2:c.instructions+=2;goto B5d71f2;
case 0x5d71f5:c.instructions+=1;goto B5d71f5;
case 0x5d71f7:goto L5d71f7;
case 0x5d71f9:c.instructions+=6;goto B5d71f9;
case 0x5d71fb:c.instructions+=5;goto B5d71fb;
case 0x5d71ff:c.instructions+=4;goto B5d71ff;
case 0x5d7203:c.instructions+=3;goto B5d7203;
case 0x5d7205:c.instructions+=2;goto B5d7205;
case 0x5d7207:c.instructions+=1;goto B5d7207;
case 0x5d7209:goto L5d7209;
case 0x5d720d:c.instructions+=4;goto B5d720d;
case 0x5d7211:c.instructions+=3;goto B5d7211;
case 0x5d7213:c.instructions+=2;goto B5d7213;
case 0x5d7216:c.instructions+=1;goto B5d7216;
case 0x5d7218:goto L5d7218;
case 0x5d721c:c.instructions+=10;goto B5d721c;
case 0x5d7220:c.instructions+=9;goto B5d7220;
case 0x5d7222:c.instructions+=8;goto B5d7222;
case 0x5d7224:c.instructions+=7;goto B5d7224;
case 0x5d7226:c.instructions+=6;goto B5d7226;
case 0x5d7228:c.instructions+=5;goto B5d7228;
case 0x5d722a:c.instructions+=4;goto B5d722a;
case 0x5d722c:c.instructions+=3;goto B5d722c;
case 0x5d722e:c.instructions+=2;goto B5d722e;
case 0x5d7230:c.instructions+=1;goto B5d7230;
case 0x5d7232:goto L5d7232;
case 0x5d7234:goto L5d7234;
case 0x5d7238:c.instructions+=3;goto B5d7238;
case 0x5d723a:c.instructions+=2;goto B5d723a;
case 0x5d723d:c.instructions+=1;goto B5d723d;
case 0x5d723f:goto L5d723f;
case 0x5d7243:c.instructions+=1;goto B5d7243;
case 0x5d7245:goto L5d7245;
case 0x5d7247:goto L5d7247;
case 0x5d724b:c.instructions+=4;goto B5d724b;
case 0x5d724d:c.instructions+=3;goto B5d724d;
case 0x5d7250:c.instructions+=2;goto B5d7250;
case 0x5d7252:c.instructions+=1;goto B5d7252;
case 0x5d7258:goto L5d7258;
case 0x5d725c:c.instructions+=6;goto B5d725c;
case 0x5d725d:c.instructions+=5;goto B5d725d;
case 0x5d725e:c.instructions+=4;goto B5d725e;
case 0x5d725f:c.instructions+=3;goto B5d725f;
case 0x5d7261:c.instructions+=2;goto B5d7261;
case 0x5d7262:c.instructions+=1;goto B5d7262;
case 0x5d7270:goto L5d7270;
case 0x5d7271:c.instructions+=15;goto B5d7271;
case 0x5d7273:c.instructions+=14;goto B5d7273;
case 0x5d7276:c.instructions+=13;goto B5d7276;
case 0x5d7279:c.instructions+=12;goto B5d7279;
case 0x5d727c:c.instructions+=11;goto B5d727c;
case 0x5d727d:c.instructions+=10;goto B5d727d;
case 0x5d727e:c.instructions+=9;goto B5d727e;
case 0x5d727f:c.instructions+=8;goto B5d727f;
case 0x5d7281:c.instructions+=7;goto B5d7281;
case 0x5d7283:c.instructions+=6;goto B5d7283;
case 0x5d7284:c.instructions+=5;goto B5d7284;
case 0x5d7287:c.instructions+=4;goto B5d7287;
case 0x5d7288:c.instructions+=3;goto B5d7288;
case 0x5d728b:c.instructions+=2;goto B5d728b;
case 0x5d728c:c.instructions+=1;goto B5d728c;
case 0x5d7291:goto L5d7291;
case 0x5d7294:c.instructions+=2;goto B5d7294;
case 0x5d7296:c.instructions+=1;goto B5d7296;
case 0x5d7298:goto L5d7298;
case 0x5d729c:c.instructions+=5;goto B5d729c;
case 0x5d729f:c.instructions+=4;goto B5d729f;
case 0x5d72a2:c.instructions+=3;goto B5d72a2;
case 0x5d72a3:c.instructions+=2;goto B5d72a3;
case 0x5d72a4:c.instructions+=1;goto B5d72a4;
case 0x5d72a9:goto L5d72a9;
case 0x5d72ac:c.instructions+=2;goto B5d72ac;
case 0x5d72ae:c.instructions+=1;goto B5d72ae;
case 0x5d72b0:goto L5d72b0;
case 0x5d72b6:c.instructions+=6;goto B5d72b6;
case 0x5d72b7:c.instructions+=5;goto B5d72b7;
case 0x5d72b8:c.instructions+=4;goto B5d72b8;
case 0x5d72b9:c.instructions+=3;goto B5d72b9;
case 0x5d72bb:c.instructions+=2;goto B5d72bb;
case 0x5d72bc:c.instructions+=1;goto B5d72bc;
case 0x5d72bf:goto L5d72bf;
case 0x5d72c2:c.instructions+=16;goto B5d72c2;
case 0x5d72c4:c.instructions+=15;goto B5d72c4;
case 0x5d72c6:c.instructions+=14;goto B5d72c6;
case 0x5d72c9:c.instructions+=13;goto B5d72c9;
case 0x5d72cb:c.instructions+=12;goto B5d72cb;
case 0x5d72cd:c.instructions+=11;goto B5d72cd;
case 0x5d72d0:c.instructions+=10;goto B5d72d0;
case 0x5d72d2:c.instructions+=9;goto B5d72d2;
case 0x5d72d4:c.instructions+=8;goto B5d72d4;
case 0x5d72d6:c.instructions+=7;goto B5d72d6;
case 0x5d72d8:c.instructions+=6;goto B5d72d8;
case 0x5d72da:c.instructions+=5;goto B5d72da;
case 0x5d72dc:c.instructions+=4;goto B5d72dc;
case 0x5d72de:c.instructions+=3;goto B5d72de;
case 0x5d72e0:c.instructions+=2;goto B5d72e0;
case 0x5d72e4:c.instructions+=1;goto B5d72e4;
case 0x5d72ea:goto L5d72ea;
case 0x5d72f0:goto L5d72f0;
case 0x5d72f1:c.instructions+=29;goto B5d72f1;
case 0x5d72f5:c.instructions+=28;goto B5d72f5;
case 0x5d72f6:c.instructions+=27;goto B5d72f6;
case 0x5d72f9:c.instructions+=26;goto B5d72f9;
case 0x5d72fb:c.instructions+=25;goto B5d72fb;
case 0x5d72fd:c.instructions+=24;goto B5d72fd;
case 0x5d72ff:c.instructions+=23;goto B5d72ff;
case 0x5d7303:c.instructions+=22;goto B5d7303;
case 0x5d7306:c.instructions+=21;goto B5d7306;
case 0x5d730a:c.instructions+=20;goto B5d730a;
case 0x5d730d:c.instructions+=19;goto B5d730d;
case 0x5d7311:c.instructions+=18;goto B5d7311;
case 0x5d7315:c.instructions+=17;goto B5d7315;
case 0x5d7318:c.instructions+=16;goto B5d7318;
case 0x5d731c:c.instructions+=15;goto B5d731c;
case 0x5d731e:c.instructions+=14;goto B5d731e;
case 0x5d7322:c.instructions+=13;goto B5d7322;
case 0x5d7326:c.instructions+=12;goto B5d7326;
case 0x5d7328:c.instructions+=11;goto B5d7328;
case 0x5d732a:c.instructions+=10;goto B5d732a;
case 0x5d732e:c.instructions+=9;goto B5d732e;
case 0x5d7332:c.instructions+=8;goto B5d7332;
case 0x5d7334:c.instructions+=7;goto B5d7334;
case 0x5d7338:c.instructions+=6;goto B5d7338;
case 0x5d733a:c.instructions+=5;goto B5d733a;
case 0x5d733e:c.instructions+=4;goto B5d733e;
case 0x5d733f:c.instructions+=3;goto B5d733f;
case 0x5d7340:c.instructions+=2;goto B5d7340;
case 0x5d7344:c.instructions+=1;goto B5d7344;
case 0x5d7349:goto L5d7349;
case 0x5d734d:c.instructions+=17;goto B5d734d;
case 0x5d734f:c.instructions+=16;goto B5d734f;
case 0x5d7352:c.instructions+=15;goto B5d7352;
case 0x5d7356:c.instructions+=14;goto B5d7356;
case 0x5d735a:c.instructions+=13;goto B5d735a;
case 0x5d735e:c.instructions+=12;goto B5d735e;
case 0x5d7362:c.instructions+=11;goto B5d7362;
case 0x5d7364:c.instructions+=10;goto B5d7364;
case 0x5d7368:c.instructions+=9;goto B5d7368;
case 0x5d736c:c.instructions+=8;goto B5d736c;
case 0x5d7370:c.instructions+=7;goto B5d7370;
case 0x5d7374:c.instructions+=6;goto B5d7374;
case 0x5d7376:c.instructions+=5;goto B5d7376;
case 0x5d737a:c.instructions+=4;goto B5d737a;
case 0x5d7380:c.instructions+=3;goto B5d7380;
case 0x5d7382:c.instructions+=2;goto B5d7382;
case 0x5d7385:c.instructions+=1;goto B5d7385;
case 0x5d7387:goto L5d7387;
case 0x5d7389:c.instructions+=6;goto B5d7389;
case 0x5d738b:c.instructions+=5;goto B5d738b;
case 0x5d738f:c.instructions+=4;goto B5d738f;
case 0x5d7393:c.instructions+=3;goto B5d7393;
case 0x5d7395:c.instructions+=2;goto B5d7395;
case 0x5d7397:c.instructions+=1;goto B5d7397;
case 0x5d7399:goto L5d7399;
case 0x5d739d:c.instructions+=4;goto B5d739d;
case 0x5d73a1:c.instructions+=3;goto B5d73a1;
case 0x5d73a3:c.instructions+=2;goto B5d73a3;
case 0x5d73a6:c.instructions+=1;goto B5d73a6;
case 0x5d73a8:goto L5d73a8;
case 0x5d73ac:c.instructions+=10;goto B5d73ac;
case 0x5d73b0:c.instructions+=9;goto B5d73b0;
case 0x5d73b2:c.instructions+=8;goto B5d73b2;
case 0x5d73b4:c.instructions+=7;goto B5d73b4;
case 0x5d73b6:c.instructions+=6;goto B5d73b6;
case 0x5d73b8:c.instructions+=5;goto B5d73b8;
case 0x5d73ba:c.instructions+=4;goto B5d73ba;
case 0x5d73bc:c.instructions+=3;goto B5d73bc;
case 0x5d73be:c.instructions+=2;goto B5d73be;
case 0x5d73c0:c.instructions+=1;goto B5d73c0;
case 0x5d73c2:goto L5d73c2;
case 0x5d73c4:goto L5d73c4;
case 0x5d73c8:c.instructions+=3;goto B5d73c8;
case 0x5d73ca:c.instructions+=2;goto B5d73ca;
case 0x5d73cd:c.instructions+=1;goto B5d73cd;
case 0x5d73cf:goto L5d73cf;
case 0x5d73d3:c.instructions+=1;goto B5d73d3;
case 0x5d73d5:goto L5d73d5;
case 0x5d73d7:goto L5d73d7;
case 0x5d73db:c.instructions+=4;goto B5d73db;
case 0x5d73df:c.instructions+=3;goto B5d73df;
case 0x5d73e2:c.instructions+=2;goto B5d73e2;
case 0x5d73e4:c.instructions+=1;goto B5d73e4;
case 0x5d73ea:goto L5d73ea;
case 0x5d73ee:c.instructions+=6;goto B5d73ee;
case 0x5d73ef:c.instructions+=5;goto B5d73ef;
case 0x5d73f0:c.instructions+=4;goto B5d73f0;
case 0x5d73f1:c.instructions+=3;goto B5d73f1;
case 0x5d73f3:c.instructions+=2;goto B5d73f3;
case 0x5d73f4:c.instructions+=1;goto B5d73f4;
case 0x5d7400:goto L5d7400;
case 0x5d7401:c.instructions+=4;goto B5d7401;
case 0x5d7402:c.instructions+=3;goto B5d7402;
case 0x5d7406:c.instructions+=2;goto B5d7406;
case 0x5d740b:c.instructions+=1;goto B5d740b;
case 0x5d7410:goto L5d7410;
case 0x5d7412:c.instructions+=2;goto B5d7412;
case 0x5d7413:c.instructions+=1;goto B5d7413;
case 0x5d7418:goto L5d7418;
case 0x5d741a:c.instructions+=4;goto B5d741a;
case 0x5d741b:c.instructions+=3;goto B5d741b;
case 0x5d741c:c.instructions+=2;goto B5d741c;
case 0x5d741d:c.instructions+=1;goto B5d741d;
case 0x5d7422:goto L5d7422;
case 0x5d7425:c.instructions+=2;goto B5d7425;
case 0x5d7427:c.instructions+=1;goto B5d7427;
case 0x5d7429:goto L5d7429;
case 0x5d742c:c.instructions+=2;goto B5d742c;
case 0x5d7432:c.instructions+=1;goto B5d7432;
case 0x5d7434:goto L5d7434;
case 0x5d7435:c.instructions+=3;goto B5d7435;
case 0x5d7437:c.instructions+=2;goto B5d7437;
case 0x5d7438:c.instructions+=1;goto B5d7438;
case 0x5d7439:goto L5d7439;
case 0x5d743a:c.instructions+=3;goto B5d743a;
case 0x5d743c:c.instructions+=2;goto B5d743c;
case 0x5d743d:c.instructions+=1;goto B5d743d;
case 0x5d7440:goto L5d7440;
case 0x5d7444:c.instructions+=3;goto B5d7444;
case 0x5d7446:c.instructions+=2;goto B5d7446;
case 0x5d744c:c.instructions+=1;goto B5d744c;
case 0x5d7450:goto L5d7450;
case 0x5d7452:c.instructions+=1;goto B5d7452;
case 0x5d7454:goto L5d7454;
case 0x5d7455:c.instructions+=3;goto B5d7455;
case 0x5d7458:c.instructions+=2;goto B5d7458;
case 0x5d745b:c.instructions+=1;goto B5d745b;
case 0x5d745d:goto L5d745d;
case 0x5d745f:c.instructions+=1;goto B5d745f;
case 0x5d7462:goto L5d7462;
case 0x5d7464:c.instructions+=1;goto B5d7464;
case 0x5d7470:goto L5d7470;
case 0x5d7472:c.instructions+=1;goto B5d7472;
case 0x5d7478:goto L5d7478;
case 0x5d747b:c.instructions+=1;goto B5d747b;
case 0x5d747d:goto L5d747d;
case 0x5d747e:c.instructions+=3;goto B5d747e;
case 0x5d7481:c.instructions+=2;goto B5d7481;
case 0x5d7484:c.instructions+=1;goto B5d7484;
case 0x5d7486:goto L5d7486;
case 0x5d7489:goto L5d7489;
case 0x5d748d:c.instructions+=2;goto B5d748d;
case 0x5d7494:c.instructions+=1;goto B5d7494;
case 0x5d74a0:goto L5d74a0;
case 0x5d74a1:c.instructions+=62;goto B5d74a1;
case 0x5d74a3:c.instructions+=61;goto B5d74a3;
case 0x5d74a6:c.instructions+=60;goto B5d74a6;
case 0x5d74a9:c.instructions+=59;goto B5d74a9;
case 0x5d74ac:c.instructions+=58;goto B5d74ac;
case 0x5d74af:c.instructions+=57;goto B5d74af;
case 0x5d74b2:c.instructions+=56;goto B5d74b2;
case 0x5d74b5:c.instructions+=55;goto B5d74b5;
case 0x5d74b8:c.instructions+=54;goto B5d74b8;
case 0x5d74bc:c.instructions+=53;goto B5d74bc;
case 0x5d74be:c.instructions+=52;goto B5d74be;
case 0x5d74c4:c.instructions+=51;goto B5d74c4;
case 0x5d74c8:c.instructions+=50;goto B5d74c8;
case 0x5d74ce:c.instructions+=49;goto B5d74ce;
case 0x5d74d2:c.instructions+=48;goto B5d74d2;
case 0x5d74d8:c.instructions+=47;goto B5d74d8;
case 0x5d74da:c.instructions+=46;goto B5d74da;
case 0x5d74dc:c.instructions+=45;goto B5d74dc;
case 0x5d74de:c.instructions+=44;goto B5d74de;
case 0x5d74e0:c.instructions+=43;goto B5d74e0;
case 0x5d74e2:c.instructions+=42;goto B5d74e2;
case 0x5d74e6:c.instructions+=41;goto B5d74e6;
case 0x5d74ea:c.instructions+=40;goto B5d74ea;
case 0x5d74ec:c.instructions+=39;goto B5d74ec;
case 0x5d74ee:c.instructions+=38;goto B5d74ee;
case 0x5d74f0:c.instructions+=37;goto B5d74f0;
case 0x5d74f3:c.instructions+=36;goto B5d74f3;
case 0x5d74f6:c.instructions+=35;goto B5d74f6;
case 0x5d74f9:c.instructions+=34;goto B5d74f9;
case 0x5d74fd:c.instructions+=33;goto B5d74fd;
case 0x5d7501:c.instructions+=32;goto B5d7501;
case 0x5d7503:c.instructions+=31;goto B5d7503;
case 0x5d7507:c.instructions+=30;goto B5d7507;
case 0x5d750b:c.instructions+=29;goto B5d750b;
case 0x5d750f:c.instructions+=28;goto B5d750f;
case 0x5d7513:c.instructions+=27;goto B5d7513;
case 0x5d7519:c.instructions+=26;goto B5d7519;
case 0x5d751d:c.instructions+=25;goto B5d751d;
case 0x5d7523:c.instructions+=24;goto B5d7523;
case 0x5d7527:c.instructions+=23;goto B5d7527;
case 0x5d752d:c.instructions+=22;goto B5d752d;
case 0x5d7531:c.instructions+=21;goto B5d7531;
case 0x5d7533:c.instructions+=20;goto B5d7533;
case 0x5d7537:c.instructions+=19;goto B5d7537;
case 0x5d753b:c.instructions+=18;goto B5d753b;
case 0x5d753d:c.instructions+=17;goto B5d753d;
case 0x5d753f:c.instructions+=16;goto B5d753f;
case 0x5d7541:c.instructions+=15;goto B5d7541;
case 0x5d7543:c.instructions+=14;goto B5d7543;
case 0x5d7545:c.instructions+=13;goto B5d7545;
case 0x5d7547:c.instructions+=12;goto B5d7547;
case 0x5d7549:c.instructions+=11;goto B5d7549;
case 0x5d754d:c.instructions+=10;goto B5d754d;
case 0x5d7551:c.instructions+=9;goto B5d7551;
case 0x5d7553:c.instructions+=8;goto B5d7553;
case 0x5d7555:c.instructions+=7;goto B5d7555;
case 0x5d7557:c.instructions+=6;goto B5d7557;
case 0x5d7559:c.instructions+=5;goto B5d7559;
case 0x5d755b:c.instructions+=4;goto B5d755b;
case 0x5d755d:c.instructions+=3;goto B5d755d;
case 0x5d755f:c.instructions+=2;goto B5d755f;
case 0x5d7562:c.instructions+=1;goto B5d7562;
case 0x5d7564:goto L5d7564;
case 0x5d7569:c.instructions+=3;goto B5d7569;
case 0x5d756b:c.instructions+=2;goto B5d756b;
case 0x5d756c:c.instructions+=1;goto B5d756c;
case 0x5d756d:goto L5d756d;
case 0x5d756f:c.instructions+=3;goto B5d756f;
case 0x5d7571:c.instructions+=2;goto B5d7571;
case 0x5d7572:c.instructions+=1;goto B5d7572;
case 0x5d7580:goto L5d7580;
case 0x5d7584:c.instructions+=10;goto B5d7584;
case 0x5d7585:c.instructions+=9;goto B5d7585;
case 0x5d7587:c.instructions+=8;goto B5d7587;
case 0x5d758d:c.instructions+=7;goto B5d758d;
case 0x5d758e:c.instructions+=6;goto B5d758e;
case 0x5d758f:c.instructions+=5;goto B5d758f;
case 0x5d7590:c.instructions+=4;goto B5d7590;
case 0x5d7596:c.instructions+=3;goto B5d7596;
case 0x5d7598:c.instructions+=2;goto B5d7598;
case 0x5d759e:c.instructions+=1;goto B5d759e;
case 0x5d75a1:goto L5d75a1;
case 0x5d75a5:c.instructions+=1;goto B5d75a5;
case 0x5d75a7:goto L5d75a7;
case 0x5d75a9:c.instructions+=5;goto B5d75a9;
case 0x5d75ac:c.instructions+=4;goto B5d75ac;
case 0x5d75ad:c.instructions+=3;goto B5d75ad;
case 0x5d75b0:c.instructions+=2;goto B5d75b0;
case 0x5d75b2:c.instructions+=1;goto B5d75b2;
case 0x5d75b4:goto L5d75b4;
case 0x5d75b7:c.instructions+=1;goto B5d75b7;
case 0x5d75b9:goto L5d75b9;
case 0x5d75ba:c.instructions+=1;goto B5d75ba;
case 0x5d75bc:goto L5d75bc;
case 0x5d75bd:c.instructions+=2;goto B5d75bd;
case 0x5d75be:c.instructions+=1;goto B5d75be;
case 0x5d75c1:goto L5d75c1;
case 0x5d75c4:c.instructions+=1;goto B5d75c4;
case 0x5d75c6:goto L5d75c6;
case 0x5d75cd:goto L5d75cd;
case 0x5d75ce:c.instructions+=4;goto B5d75ce;
case 0x5d75d1:c.instructions+=3;goto B5d75d1;
case 0x5d75d4:c.instructions+=2;goto B5d75d4;
case 0x5d75d7:c.instructions+=1;goto B5d75d7;
case 0x5d75d9:goto L5d75d9;
case 0x5d75da:c.instructions+=4;goto B5d75da;
case 0x5d75db:c.instructions+=3;goto B5d75db;
case 0x5d75dc:c.instructions+=2;goto B5d75dc;
case 0x5d75dd:c.instructions+=1;goto B5d75dd;
case 0x5d75e0:goto L5d75e0;
case 0x5d75e4:c.instructions+=7;goto B5d75e4;
case 0x5d75e6:c.instructions+=6;goto B5d75e6;
case 0x5d75ea:c.instructions+=5;goto B5d75ea;
case 0x5d75eb:c.instructions+=4;goto B5d75eb;
case 0x5d75ec:c.instructions+=3;goto B5d75ec;
case 0x5d75ed:c.instructions+=2;goto B5d75ed;
case 0x5d75ef:c.instructions+=1;goto B5d75ef;
case 0x5d75f1:goto L5d75f1;
case 0x5d75f5:c.instructions+=2;goto B5d75f5;
case 0x5d75f7:c.instructions+=1;goto B5d75f7;
case 0x5d75f9:goto L5d75f9;
case 0x5d75fb:c.instructions+=3;goto B5d75fb;
case 0x5d75fe:c.instructions+=2;goto B5d75fe;
case 0x5d7602:c.instructions+=1;goto B5d7602;
case 0x5d7607:goto L5d7607;
case 0x5d7609:goto L5d7609;
case 0x5d7614:c.instructions+=1;goto B5d7614;
case 0x5d7619:goto L5d7619;
case 0x5d7620:c.instructions+=3;goto B5d7620;
case 0x5d7627:c.instructions+=2;goto B5d7627;
case 0x5d7629:c.instructions+=1;goto B5d7629;
case 0x5d762b:goto L5d762b;
case 0x5d7631:goto L5d7631;
case 0x5d7632:c.instructions+=4;goto B5d7632;
case 0x5d7634:c.instructions+=3;goto B5d7634;
case 0x5d7638:c.instructions+=2;goto B5d7638;
case 0x5d763c:c.instructions+=1;goto B5d763c;
case 0x5d763e:goto L5d763e;
case 0x5d7644:goto L5d7644;
case 0x5d7646:c.instructions+=35;goto B5d7646;
case 0x5d7648:c.instructions+=34;goto B5d7648;
case 0x5d764e:c.instructions+=33;goto B5d764e;
case 0x5d7651:c.instructions+=32;goto B5d7651;
case 0x5d7653:c.instructions+=31;goto B5d7653;
case 0x5d7655:c.instructions+=30;goto B5d7655;
case 0x5d7658:c.instructions+=29;goto B5d7658;
case 0x5d765c:c.instructions+=28;goto B5d765c;
case 0x5d765e:c.instructions+=27;goto B5d765e;
case 0x5d7660:c.instructions+=26;goto B5d7660;
case 0x5d7663:c.instructions+=25;goto B5d7663;
case 0x5d7665:c.instructions+=24;goto B5d7665;
case 0x5d7668:c.instructions+=23;goto B5d7668;
case 0x5d766a:c.instructions+=22;goto B5d766a;
case 0x5d766d:c.instructions+=21;goto B5d766d;
case 0x5d766f:c.instructions+=20;goto B5d766f;
case 0x5d7672:c.instructions+=19;goto B5d7672;
case 0x5d7674:c.instructions+=18;goto B5d7674;
case 0x5d7677:c.instructions+=17;goto B5d7677;
case 0x5d7679:c.instructions+=16;goto B5d7679;
case 0x5d767c:c.instructions+=15;goto B5d767c;
case 0x5d767e:c.instructions+=14;goto B5d767e;
case 0x5d7681:c.instructions+=13;goto B5d7681;
case 0x5d7683:c.instructions+=12;goto B5d7683;
case 0x5d7686:c.instructions+=11;goto B5d7686;
case 0x5d7688:c.instructions+=10;goto B5d7688;
case 0x5d768b:c.instructions+=9;goto B5d768b;
case 0x5d768d:c.instructions+=8;goto B5d768d;
case 0x5d7690:c.instructions+=7;goto B5d7690;
case 0x5d7692:c.instructions+=6;goto B5d7692;
case 0x5d7695:c.instructions+=5;goto B5d7695;
case 0x5d7698:c.instructions+=4;goto B5d7698;
case 0x5d769a:c.instructions+=3;goto B5d769a;
case 0x5d76a0:c.instructions+=2;goto B5d76a0;
case 0x5d76a2:c.instructions+=1;goto B5d76a2;
case 0x5d76a8:goto L5d76a8;
case 0x5d76ab:c.instructions+=4;goto B5d76ab;
case 0x5d76ae:c.instructions+=3;goto B5d76ae;
case 0x5d76b2:c.instructions+=2;goto B5d76b2;
case 0x5d76b9:c.instructions+=1;goto B5d76b9;
case 0x5d76bb:goto L5d76bb;
case 0x5d76c2:goto L5d76c2;
case 0x5d76c4:c.instructions+=5;goto B5d76c4;
case 0x5d76c7:c.instructions+=4;goto B5d76c7;
case 0x5d76ce:c.instructions+=3;goto B5d76ce;
case 0x5d76d0:c.instructions+=2;goto B5d76d0;
case 0x5d76d3:c.instructions+=1;goto B5d76d3;
case 0x5d76d5:goto L5d76d5;
case 0x5d76d9:c.instructions+=1;goto B5d76d9;
case 0x5d76db:goto L5d76db;
case 0x5d76dc:c.instructions+=2;goto B5d76dc;
case 0x5d76dd:c.instructions+=1;goto B5d76dd;
case 0x5d76df:goto L5d76df;
case 0x5d76e2:c.instructions+=1;goto B5d76e2;
case 0x5d76e4:goto L5d76e4;
case 0x5d76e8:c.instructions+=1;goto B5d76e8;
case 0x5d76eb:goto L5d76eb;
case 0x5d76ef:c.instructions+=1;goto B5d76ef;
case 0x5d76f1:goto L5d76f1;
case 0x5d76f7:c.instructions+=4;goto B5d76f7;
case 0x5d76fd:c.instructions+=3;goto B5d76fd;
case 0x5d76ff:c.instructions+=2;goto B5d76ff;
case 0x5d7702:c.instructions+=1;goto B5d7702;
case 0x5d7704:goto L5d7704;
case 0x5d770b:goto L5d770b;
case 0x5d770c:c.instructions+=3;goto B5d770c;
case 0x5d770d:c.instructions+=2;goto B5d770d;
case 0x5d770e:c.instructions+=1;goto B5d770e;
case 0x5d7720:goto L5d7720;
case 0x5d7721:c.instructions+=8;goto B5d7721;
case 0x5d7722:c.instructions+=7;goto B5d7722;
case 0x5d7723:c.instructions+=6;goto B5d7723;
case 0x5d7727:c.instructions+=5;goto B5d7727;
case 0x5d772a:c.instructions+=4;goto B5d772a;
case 0x5d772c:c.instructions+=3;goto B5d772c;
case 0x5d772e:c.instructions+=2;goto B5d772e;
case 0x5d7732:c.instructions+=1;goto B5d7732;
case 0x5d7734:goto L5d7734;
case 0x5d7735:c.instructions+=4;goto B5d7735;
case 0x5d7736:c.instructions+=3;goto B5d7736;
case 0x5d7739:c.instructions+=2;goto B5d7739;
case 0x5d773c:c.instructions+=1;goto B5d773c;
case 0x5d7740:goto L5d7740;
case 0x5d7746:c.instructions+=7;goto B5d7746;
case 0x5d7748:c.instructions+=6;goto B5d7748;
case 0x5d7749:c.instructions+=5;goto B5d7749;
case 0x5d774b:c.instructions+=4;goto B5d774b;
case 0x5d774c:c.instructions+=3;goto B5d774c;
case 0x5d774d:c.instructions+=2;goto B5d774d;
case 0x5d7751:c.instructions+=1;goto B5d7751;
case 0x5d7756:goto L5d7756;
case 0x5d7759:c.instructions+=5;goto B5d7759;
case 0x5d775a:c.instructions+=4;goto B5d775a;
case 0x5d775d:c.instructions+=3;goto B5d775d;
case 0x5d7760:c.instructions+=2;goto B5d7760;
case 0x5d7762:c.instructions+=1;goto B5d7762;
case 0x5d7764:goto L5d7764;
case 0x5d7765:c.instructions+=1;goto B5d7765;
case 0x5d7766:goto L5d7766;
case 0x5d7767:c.instructions+=3;goto B5d7767;
case 0x5d7768:c.instructions+=2;goto B5d7768;
case 0x5d7769:c.instructions+=1;goto B5d7769;
case 0x5d7770:goto L5d7770;
case 0x5d7771:c.instructions+=14;goto B5d7771;
case 0x5d7777:c.instructions+=13;goto B5d7777;
case 0x5d7778:c.instructions+=12;goto B5d7778;
case 0x5d777c:c.instructions+=11;goto B5d777c;
case 0x5d7782:c.instructions+=10;goto B5d7782;
case 0x5d7784:c.instructions+=9;goto B5d7784;
case 0x5d7787:c.instructions+=8;goto B5d7787;
case 0x5d7789:c.instructions+=7;goto B5d7789;
case 0x5d778d:c.instructions+=6;goto B5d778d;
case 0x5d7790:c.instructions+=5;goto B5d7790;
case 0x5d7793:c.instructions+=4;goto B5d7793;
case 0x5d779a:c.instructions+=3;goto B5d779a;
case 0x5d779d:c.instructions+=2;goto B5d779d;
case 0x5d77a0:c.instructions+=1;goto B5d77a0;
case 0x5d77a5:goto L5d77a5;
case 0x5d77ab:c.instructions+=3;goto B5d77ab;
case 0x5d77ad:c.instructions+=2;goto B5d77ad;
case 0x5d77b0:c.instructions+=1;goto B5d77b0;
case 0x5d77b2:goto L5d77b2;
case 0x5d77b8:c.instructions+=2;goto B5d77b8;
case 0x5d77bc:c.instructions+=1;goto B5d77bc;
case 0x5d77be:goto L5d77be;
case 0x5d77c0:c.instructions+=1;goto B5d77c0;
case 0x5d77c6:goto L5d77c6;
case 0x5d77ca:c.instructions+=7;goto B5d77ca;
case 0x5d77cd:c.instructions+=6;goto B5d77cd;
case 0x5d77d0:c.instructions+=5;goto B5d77d0;
case 0x5d77d8:c.instructions+=4;goto B5d77d8;
case 0x5d77df:c.instructions+=3;goto B5d77df;
case 0x5d77e0:c.instructions+=2;goto B5d77e0;
case 0x5d77e1:c.instructions+=1;goto B5d77e1;
case 0x5d77f0:goto L5d77f0;
case 0x5d77f3:c.instructions+=19;goto B5d77f3;
case 0x5d77f4:c.instructions+=18;goto B5d77f4;
case 0x5d77f8:c.instructions+=17;goto B5d77f8;
case 0x5d77f9:c.instructions+=16;goto B5d77f9;
case 0x5d77fd:c.instructions+=15;goto B5d77fd;
case 0x5d77fe:c.instructions+=14;goto B5d77fe;
case 0x5d77ff:c.instructions+=13;goto B5d77ff;
case 0x5d7802:c.instructions+=12;goto B5d7802;
case 0x5d7806:c.instructions+=11;goto B5d7806;
case 0x5d780e:c.instructions+=10;goto B5d780e;
case 0x5d7811:c.instructions+=9;goto B5d7811;
case 0x5d7814:c.instructions+=8;goto B5d7814;
case 0x5d7815:c.instructions+=7;goto B5d7815;
case 0x5d7819:c.instructions+=6;goto B5d7819;
case 0x5d781a:c.instructions+=5;goto B5d781a;
case 0x5d781b:c.instructions+=4;goto B5d781b;
case 0x5d781c:c.instructions+=3;goto B5d781c;
case 0x5d7824:c.instructions+=2;goto B5d7824;
case 0x5d782c:c.instructions+=1;goto B5d782c;
case 0x5d7831:goto L5d7831;
case 0x5d7834:c.instructions+=19;goto B5d7834;
case 0x5d7837:c.instructions+=18;goto B5d7837;
case 0x5d783d:c.instructions+=17;goto B5d783d;
case 0x5d7840:c.instructions+=16;goto B5d7840;
case 0x5d7842:c.instructions+=15;goto B5d7842;
case 0x5d784a:c.instructions+=14;goto B5d784a;
case 0x5d7852:c.instructions+=13;goto B5d7852;
case 0x5d785a:c.instructions+=12;goto B5d785a;
case 0x5d7862:c.instructions+=11;goto B5d7862;
case 0x5d786a:c.instructions+=10;goto B5d786a;
case 0x5d7872:c.instructions+=9;goto B5d7872;
case 0x5d787a:c.instructions+=8;goto B5d787a;
case 0x5d7882:c.instructions+=7;goto B5d7882;
case 0x5d788a:c.instructions+=6;goto B5d788a;
case 0x5d7892:c.instructions+=5;goto B5d7892;
case 0x5d789a:c.instructions+=4;goto B5d789a;
case 0x5d78a2:c.instructions+=3;goto B5d78a2;
case 0x5d78aa:c.instructions+=2;goto B5d78aa;
case 0x5d78b2:c.instructions+=1;goto B5d78b2;
case 0x5d78b4:goto L5d78b4;
case 0x5d78b9:c.instructions+=8;goto B5d78b9;
case 0x5d78bd:c.instructions+=7;goto B5d78bd;
case 0x5d78c1:c.instructions+=6;goto B5d78c1;
case 0x5d78c2:c.instructions+=5;goto B5d78c2;
case 0x5d78c3:c.instructions+=4;goto B5d78c3;
case 0x5d78c9:c.instructions+=3;goto B5d78c9;
case 0x5d78ca:c.instructions+=2;goto B5d78ca;
case 0x5d78cc:c.instructions+=1;goto B5d78cc;
case 0x5d78d1:goto L5d78d1;
case 0x5d78d3:c.instructions+=2;goto B5d78d3;
case 0x5d78d5:c.instructions+=1;goto B5d78d5;
case 0x5d78da:goto L5d78da;
case 0x5d78de:c.instructions+=3;goto B5d78de;
case 0x5d78e0:c.instructions+=2;goto B5d78e0;
case 0x5d78e2:c.instructions+=1;goto B5d78e2;
case 0x5d78e7:goto L5d78e7;
case 0x5d78eb:c.instructions+=3;goto B5d78eb;
case 0x5d78ed:c.instructions+=2;goto B5d78ed;
case 0x5d78ef:c.instructions+=1;goto B5d78ef;
case 0x5d78f4:goto L5d78f4;
case 0x5d78f8:c.instructions+=3;goto B5d78f8;
case 0x5d78fa:c.instructions+=2;goto B5d78fa;
case 0x5d78fc:c.instructions+=1;goto B5d78fc;
case 0x5d7901:goto L5d7901;
case 0x5d7905:c.instructions+=3;goto B5d7905;
case 0x5d7907:c.instructions+=2;goto B5d7907;
case 0x5d7909:c.instructions+=1;goto B5d7909;
case 0x5d790e:goto L5d790e;
case 0x5d7912:c.instructions+=3;goto B5d7912;
case 0x5d7914:c.instructions+=2;goto B5d7914;
case 0x5d7916:c.instructions+=1;goto B5d7916;
case 0x5d791b:goto L5d791b;
case 0x5d791f:c.instructions+=3;goto B5d791f;
case 0x5d7921:c.instructions+=2;goto B5d7921;
case 0x5d7923:c.instructions+=1;goto B5d7923;
case 0x5d7928:goto L5d7928;
case 0x5d792c:goto L5d792c;
case 0x5d7932:c.instructions+=2;goto B5d7932;
case 0x5d7934:c.instructions+=1;goto B5d7934;
case 0x5d7936:goto L5d7936;
case 0x5d793b:c.instructions+=8;goto B5d793b;
case 0x5d793f:c.instructions+=7;goto B5d793f;
case 0x5d7943:c.instructions+=6;goto B5d7943;
case 0x5d7944:c.instructions+=5;goto B5d7944;
case 0x5d7945:c.instructions+=4;goto B5d7945;
case 0x5d794b:c.instructions+=3;goto B5d794b;
case 0x5d794c:c.instructions+=2;goto B5d794c;
case 0x5d794e:c.instructions+=1;goto B5d794e;
case 0x5d7953:goto L5d7953;
case 0x5d7955:c.instructions+=2;goto B5d7955;
case 0x5d7957:c.instructions+=1;goto B5d7957;
case 0x5d795c:goto L5d795c;
case 0x5d7960:c.instructions+=3;goto B5d7960;
case 0x5d7962:c.instructions+=2;goto B5d7962;
case 0x5d7964:c.instructions+=1;goto B5d7964;
case 0x5d7969:goto L5d7969;
case 0x5d796d:c.instructions+=3;goto B5d796d;
case 0x5d796f:c.instructions+=2;goto B5d796f;
case 0x5d7971:c.instructions+=1;goto B5d7971;
case 0x5d7976:goto L5d7976;
case 0x5d797a:c.instructions+=3;goto B5d797a;
case 0x5d797c:c.instructions+=2;goto B5d797c;
case 0x5d797e:c.instructions+=1;goto B5d797e;
case 0x5d7983:goto L5d7983;
case 0x5d7987:c.instructions+=3;goto B5d7987;
case 0x5d7989:c.instructions+=2;goto B5d7989;
case 0x5d798b:c.instructions+=1;goto B5d798b;
case 0x5d7990:goto L5d7990;
case 0x5d7994:c.instructions+=3;goto B5d7994;
case 0x5d7996:c.instructions+=2;goto B5d7996;
case 0x5d7998:c.instructions+=1;goto B5d7998;
case 0x5d799d:goto L5d799d;
case 0x5d79a1:c.instructions+=3;goto B5d79a1;
case 0x5d79a3:c.instructions+=2;goto B5d79a3;
case 0x5d79a5:c.instructions+=1;goto B5d79a5;
case 0x5d79aa:goto L5d79aa;
case 0x5d79ae:goto L5d79ae;
case 0x5d79b3:goto L5d79b3;
case 0x5d79b9:c.instructions+=51;goto B5d79b9;
case 0x5d79bc:c.instructions+=50;goto B5d79bc;
case 0x5d79be:c.instructions+=49;goto B5d79be;
case 0x5d79c2:c.instructions+=48;goto B5d79c2;
case 0x5d79c4:c.instructions+=47;goto B5d79c4;
case 0x5d79c6:c.instructions+=46;goto B5d79c6;
case 0x5d79ca:c.instructions+=45;goto B5d79ca;
case 0x5d79cd:c.instructions+=44;goto B5d79cd;
case 0x5d79cf:c.instructions+=43;goto B5d79cf;
case 0x5d79d0:c.instructions+=42;goto B5d79d0;
case 0x5d79d1:c.instructions+=41;goto B5d79d1;
case 0x5d79d2:c.instructions+=40;goto B5d79d2;
case 0x5d79d8:c.instructions+=39;goto B5d79d8;
case 0x5d79dc:c.instructions+=38;goto B5d79dc;
case 0x5d79e3:c.instructions+=37;goto B5d79e3;
case 0x5d79e5:c.instructions+=36;goto B5d79e5;
case 0x5d79e6:c.instructions+=35;goto B5d79e6;
case 0x5d79e8:c.instructions+=34;goto B5d79e8;
case 0x5d79ec:c.instructions+=33;goto B5d79ec;
case 0x5d79ee:c.instructions+=32;goto B5d79ee;
case 0x5d79f1:c.instructions+=31;goto B5d79f1;
case 0x5d79f5:c.instructions+=30;goto B5d79f5;
case 0x5d79f7:c.instructions+=29;goto B5d79f7;
case 0x5d79f9:c.instructions+=28;goto B5d79f9;
case 0x5d79fd:c.instructions+=27;goto B5d79fd;
case 0x5d79ff:c.instructions+=26;goto B5d79ff;
case 0x5d7a02:c.instructions+=25;goto B5d7a02;
case 0x5d7a06:c.instructions+=24;goto B5d7a06;
case 0x5d7a08:c.instructions+=23;goto B5d7a08;
case 0x5d7a0a:c.instructions+=22;goto B5d7a0a;
case 0x5d7a0e:c.instructions+=21;goto B5d7a0e;
case 0x5d7a10:c.instructions+=20;goto B5d7a10;
case 0x5d7a13:c.instructions+=19;goto B5d7a13;
case 0x5d7a17:c.instructions+=18;goto B5d7a17;
case 0x5d7a19:c.instructions+=17;goto B5d7a19;
case 0x5d7a1b:c.instructions+=16;goto B5d7a1b;
case 0x5d7a1f:c.instructions+=15;goto B5d7a1f;
case 0x5d7a21:c.instructions+=14;goto B5d7a21;
case 0x5d7a27:c.instructions+=13;goto B5d7a27;
case 0x5d7a2b:c.instructions+=12;goto B5d7a2b;
case 0x5d7a2d:c.instructions+=11;goto B5d7a2d;
case 0x5d7a2f:c.instructions+=10;goto B5d7a2f;
case 0x5d7a33:c.instructions+=9;goto B5d7a33;
case 0x5d7a35:c.instructions+=8;goto B5d7a35;
case 0x5d7a3b:c.instructions+=7;goto B5d7a3b;
case 0x5d7a3f:c.instructions+=6;goto B5d7a3f;
case 0x5d7a41:c.instructions+=5;goto B5d7a41;
case 0x5d7a45:c.instructions+=4;goto B5d7a45;
case 0x5d7a47:c.instructions+=3;goto B5d7a47;
case 0x5d7a4d:c.instructions+=2;goto B5d7a4d;
case 0x5d7a50:c.instructions+=1;goto B5d7a50;
case 0x5d7a60:goto L5d7a60;
case 0x5d7a64:c.instructions+=12;goto B5d7a64;
case 0x5d7a68:c.instructions+=11;goto B5d7a68;
case 0x5d7a6a:c.instructions+=10;goto B5d7a6a;
case 0x5d7a6d:c.instructions+=9;goto B5d7a6d;
case 0x5d7a70:c.instructions+=8;goto B5d7a70;
case 0x5d7a72:c.instructions+=7;goto B5d7a72;
case 0x5d7a75:c.instructions+=6;goto B5d7a75;
case 0x5d7a78:c.instructions+=5;goto B5d7a78;
case 0x5d7a7b:c.instructions+=4;goto B5d7a7b;
case 0x5d7a7c:c.instructions+=3;goto B5d7a7c;
case 0x5d7a82:c.instructions+=2;goto B5d7a82;
case 0x5d7a89:c.instructions+=1;goto B5d7a89;
case 0x5d7a8b:goto L5d7a8b;
case 0x5d7a8e:c.instructions+=13;goto B5d7a8e;
case 0x5d7a91:c.instructions+=12;goto B5d7a91;
case 0x5d7a94:c.instructions+=11;goto B5d7a94;
case 0x5d7a9a:c.instructions+=10;goto B5d7a9a;
case 0x5d7a9b:c.instructions+=9;goto B5d7a9b;
case 0x5d7aa1:c.instructions+=8;goto B5d7aa1;
case 0x5d7aa7:c.instructions+=7;goto B5d7aa7;
case 0x5d7aad:c.instructions+=6;goto B5d7aad;
case 0x5d7ab3:c.instructions+=5;goto B5d7ab3;
case 0x5d7aba:c.instructions+=4;goto B5d7aba;
case 0x5d7abd:c.instructions+=3;goto B5d7abd;
case 0x5d7ac0:c.instructions+=2;goto B5d7ac0;
case 0x5d7ac3:c.instructions+=1;goto B5d7ac3;
case 0x5d7ac4:goto L5d7ac4;
case 0x5d7ac6:c.instructions+=4;goto B5d7ac6;
case 0x5d7acc:c.instructions+=3;goto B5d7acc;
case 0x5d7acf:c.instructions+=2;goto B5d7acf;
case 0x5d7ad0:c.instructions+=1;goto B5d7ad0;
case 0x5d7ae0:goto L5d7ae0;
case 0x5d7aea:c.instructions+=1;goto B5d7aea;
case 0x5d7af0:goto L5d7af0;
case 0x5d7af2:c.instructions+=4;goto B5d7af2;
case 0x5d7af7:c.instructions+=3;goto B5d7af7;
case 0x5d7af9:c.instructions+=2;goto B5d7af9;
case 0x5d7afb:c.instructions+=1;goto B5d7afb;
case 0x5d7b00:goto L5d7b00;
case 0x5d7b02:c.instructions+=5;goto B5d7b02;
case 0x5d7b07:c.instructions+=4;goto B5d7b07;
case 0x5d7b09:c.instructions+=3;goto B5d7b09;
case 0x5d7b0b:c.instructions+=2;goto B5d7b0b;
case 0x5d7b10:c.instructions+=1;goto B5d7b10;
case 0x5d7b15:goto L5d7b15;
case 0x5d7b18:c.instructions+=2;goto B5d7b18;
case 0x5d7b1d:c.instructions+=1;goto B5d7b1d;
case 0x5d7b20:goto L5d7b20;
case 0x5d7b25:c.instructions+=2;goto B5d7b25;
case 0x5d7b27:c.instructions+=1;goto B5d7b27;
case 0x5d7b29:goto L5d7b29;
case 0x5d7b2f:c.instructions+=2;goto B5d7b2f;
case 0x5d7b31:c.instructions+=1;goto B5d7b31;
case 0x5d7b33:goto L5d7b33;
case 0x5d7b37:c.instructions+=2;goto B5d7b37;
case 0x5d7b3d:c.instructions+=1;goto B5d7b3d;
case 0x5d7b3f:goto L5d7b3f;
case 0x5d7b42:c.instructions+=2;goto B5d7b42;
case 0x5d7b44:c.instructions+=1;goto B5d7b44;
case 0x5d7b45:goto L5d7b45;
case 0x5d7b47:c.instructions+=1;goto B5d7b47;
case 0x5d7b50:goto L5d7b50;
case 0x5d7b54:c.instructions+=3;goto B5d7b54;
case 0x5d7b56:c.instructions+=2;goto B5d7b56;
case 0x5d7b5b:c.instructions+=1;goto B5d7b5b;
case 0x5d7b60:goto L5d7b60;
case 0x5d7b62:c.instructions+=1;goto B5d7b62;
case 0x5d7b64:goto L5d7b64;
case 0x5d7b6a:c.instructions+=3;goto B5d7b6a;
case 0x5d7b6b:c.instructions+=2;goto B5d7b6b;
case 0x5d7b71:c.instructions+=1;goto B5d7b71;
case 0x5d7b73:goto L5d7b73;
case 0x5d7b75:goto L5d7b75;
case 0x5d7b80:goto L5d7b80;
case 0x5d7b81:c.instructions+=4;goto B5d7b81;
case 0x5d7b82:c.instructions+=3;goto B5d7b82;
case 0x5d7b84:c.instructions+=2;goto B5d7b84;
case 0x5d7b89:c.instructions+=1;goto B5d7b89;
case 0x5d7b90:goto L5d7b90;
case 0x5d7b93:c.instructions+=2;goto B5d7b93;
case 0x5d7b94:c.instructions+=1;goto B5d7b94;
case 0x5d7b99:goto L5d7b99;
case 0x5d7b9b:c.instructions+=4;goto B5d7b9b;
case 0x5d7ba1:c.instructions+=3;goto B5d7ba1;
case 0x5d7ba4:c.instructions+=2;goto B5d7ba4;
case 0x5d7baa:c.instructions+=1;goto B5d7baa;
case 0x5d7bac:goto L5d7bac;
case 0x5d7bae:c.instructions+=3;goto B5d7bae;
case 0x5d7baf:c.instructions+=2;goto B5d7baf;
case 0x5d7bb0:c.instructions+=1;goto B5d7bb0;
case 0x5d7bc0:goto L5d7bc0;
case 0x5d7bc1:c.instructions+=9;goto B5d7bc1;
case 0x5d7bc3:c.instructions+=8;goto B5d7bc3;
case 0x5d7bc6:c.instructions+=7;goto B5d7bc6;
case 0x5d7bcc:c.instructions+=6;goto B5d7bcc;
case 0x5d7bcd:c.instructions+=5;goto B5d7bcd;
case 0x5d7bce:c.instructions+=4;goto B5d7bce;
case 0x5d7bd0:c.instructions+=3;goto B5d7bd0;
case 0x5d7bd1:c.instructions+=2;goto B5d7bd1;
case 0x5d7bd5:c.instructions+=1;goto B5d7bd5;
case 0x5d7bda:goto L5d7bda;
case 0x5d7bdd:c.instructions+=28;goto B5d7bdd;
case 0x5d7be0:c.instructions+=27;goto B5d7be0;
case 0x5d7be3:c.instructions+=26;goto B5d7be3;
case 0x5d7be6:c.instructions+=25;goto B5d7be6;
case 0x5d7bea:c.instructions+=24;goto B5d7bea;
case 0x5d7bed:c.instructions+=23;goto B5d7bed;
case 0x5d7bf1:c.instructions+=22;goto B5d7bf1;
case 0x5d7bf4:c.instructions+=21;goto B5d7bf4;
case 0x5d7bf8:c.instructions+=20;goto B5d7bf8;
case 0x5d7bfb:c.instructions+=19;goto B5d7bfb;
case 0x5d7bff:c.instructions+=18;goto B5d7bff;
case 0x5d7c02:c.instructions+=17;goto B5d7c02;
case 0x5d7c04:c.instructions+=16;goto B5d7c04;
case 0x5d7c08:c.instructions+=15;goto B5d7c08;
case 0x5d7c0b:c.instructions+=14;goto B5d7c0b;
case 0x5d7c0f:c.instructions+=13;goto B5d7c0f;
case 0x5d7c13:c.instructions+=12;goto B5d7c13;
case 0x5d7c16:c.instructions+=11;goto B5d7c16;
case 0x5d7c1b:c.instructions+=10;goto B5d7c1b;
case 0x5d7c1f:c.instructions+=9;goto B5d7c1f;
case 0x5d7c22:c.instructions+=8;goto B5d7c22;
case 0x5d7c26:c.instructions+=7;goto B5d7c26;
case 0x5d7c2a:c.instructions+=6;goto B5d7c2a;
case 0x5d7c2d:c.instructions+=5;goto B5d7c2d;
case 0x5d7c31:c.instructions+=4;goto B5d7c31;
case 0x5d7c35:c.instructions+=3;goto B5d7c35;
case 0x5d7c38:c.instructions+=2;goto B5d7c38;
case 0x5d7c3c:c.instructions+=1;goto B5d7c3c;
case 0x5d7c3e:goto L5d7c3e;
case 0x5d7c42:c.instructions+=4;goto B5d7c42;
case 0x5d7c46:c.instructions+=3;goto B5d7c46;
case 0x5d7c4c:c.instructions+=2;goto B5d7c4c;
case 0x5d7c52:c.instructions+=1;goto B5d7c52;
case 0x5d7c54:goto L5d7c54;
case 0x5d7c59:goto L5d7c59;
case 0x5d7c5f:c.instructions+=8;goto B5d7c5f;
case 0x5d7c65:c.instructions+=7;goto B5d7c65;
case 0x5d7c69:c.instructions+=6;goto B5d7c69;
case 0x5d7c6d:c.instructions+=5;goto B5d7c6d;
case 0x5d7c71:c.instructions+=4;goto B5d7c71;
case 0x5d7c75:c.instructions+=3;goto B5d7c75;
case 0x5d7c78:c.instructions+=2;goto B5d7c78;
case 0x5d7c7a:c.instructions+=1;goto B5d7c7a;
case 0x5d7c7c:goto L5d7c7c;
case 0x5d7c81:c.instructions+=5;goto B5d7c81;
case 0x5d7c84:c.instructions+=4;goto B5d7c84;
case 0x5d7c8a:c.instructions+=3;goto B5d7c8a;
case 0x5d7c8f:c.instructions+=2;goto B5d7c8f;
case 0x5d7c91:c.instructions+=1;goto B5d7c91;
case 0x5d7c93:goto L5d7c93;
case 0x5d7c98:goto L5d7c98;
case 0x5d7c99:c.instructions+=1;goto B5d7c99;
case 0x5d7c9e:goto L5d7c9e;
case 0x5d7ca1:c.instructions+=5;goto B5d7ca1;
case 0x5d7ca4:c.instructions+=4;goto B5d7ca4;
case 0x5d7ca9:c.instructions+=3;goto B5d7ca9;
case 0x5d7caa:c.instructions+=2;goto B5d7caa;
case 0x5d7cac:c.instructions+=1;goto B5d7cac;
case 0x5d7cb1:goto L5d7cb1;
case 0x5d7cb6:c.instructions+=4;goto B5d7cb6;
case 0x5d7cb8:c.instructions+=3;goto B5d7cb8;
case 0x5d7cbc:c.instructions+=2;goto B5d7cbc;
case 0x5d7cc3:c.instructions+=1;goto B5d7cc3;
case 0x5d7cc5:goto L5d7cc5;
case 0x5d7cc8:c.instructions+=2;goto B5d7cc8;
case 0x5d7cca:c.instructions+=1;goto B5d7cca;
case 0x5d7ccc:goto L5d7ccc;
case 0x5d7ccf:c.instructions+=16;goto B5d7ccf;
case 0x5d7cd2:c.instructions+=15;goto B5d7cd2;
case 0x5d7cd5:c.instructions+=14;goto B5d7cd5;
case 0x5d7cd8:c.instructions+=13;goto B5d7cd8;
case 0x5d7cdb:c.instructions+=12;goto B5d7cdb;
case 0x5d7cde:c.instructions+=11;goto B5d7cde;
case 0x5d7ce1:c.instructions+=10;goto B5d7ce1;
case 0x5d7ce3:c.instructions+=9;goto B5d7ce3;
case 0x5d7ce6:c.instructions+=8;goto B5d7ce6;
case 0x5d7ce8:c.instructions+=7;goto B5d7ce8;
case 0x5d7cea:c.instructions+=6;goto B5d7cea;
case 0x5d7ced:c.instructions+=5;goto B5d7ced;
case 0x5d7cef:c.instructions+=4;goto B5d7cef;
case 0x5d7cf5:c.instructions+=3;goto B5d7cf5;
case 0x5d7cf7:c.instructions+=2;goto B5d7cf7;
case 0x5d7cfa:c.instructions+=1;goto B5d7cfa;
case 0x5d7cfc:goto L5d7cfc;
case 0x5d7d01:c.instructions+=8;goto B5d7d01;
case 0x5d7d02:c.instructions+=7;goto B5d7d02;
case 0x5d7d07:c.instructions+=6;goto B5d7d07;
case 0x5d7d09:c.instructions+=5;goto B5d7d09;
case 0x5d7d0b:c.instructions+=4;goto B5d7d0b;
case 0x5d7d0e:c.instructions+=3;goto B5d7d0e;
case 0x5d7d11:c.instructions+=2;goto B5d7d11;
case 0x5d7d13:c.instructions+=1;goto B5d7d13;
case 0x5d7d15:goto L5d7d15;
case 0x5d7d17:c.instructions+=7;goto B5d7d17;
case 0x5d7d19:c.instructions+=6;goto B5d7d19;
case 0x5d7d1a:c.instructions+=5;goto B5d7d1a;
case 0x5d7d1b:c.instructions+=4;goto B5d7d1b;
case 0x5d7d1f:c.instructions+=3;goto B5d7d1f;
case 0x5d7d20:c.instructions+=2;goto B5d7d20;
case 0x5d7d22:c.instructions+=1;goto B5d7d22;
case 0x5d7d27:goto L5d7d27;
case 0x5d7d28:c.instructions+=5;goto B5d7d28;
case 0x5d7d29:c.instructions+=4;goto B5d7d29;
case 0x5d7d2a:c.instructions+=3;goto B5d7d2a;
case 0x5d7d2c:c.instructions+=2;goto B5d7d2c;
case 0x5d7d2d:c.instructions+=1;goto B5d7d2d;
case 0x5d7d30:goto L5d7d30;
case 0x5d7d36:c.instructions+=6;goto B5d7d36;
case 0x5d7d3a:c.instructions+=5;goto B5d7d3a;
case 0x5d7d3c:c.instructions+=4;goto B5d7d3c;
case 0x5d7d41:c.instructions+=3;goto B5d7d41;
case 0x5d7d44:c.instructions+=2;goto B5d7d44;
case 0x5d7d4a:c.instructions+=1;goto B5d7d4a;
case 0x5d7d50:goto L5d7d50;
case 0x5d7d51:c.instructions+=7;goto B5d7d51;
case 0x5d7d52:c.instructions+=6;goto B5d7d52;
case 0x5d7d56:c.instructions+=5;goto B5d7d56;
case 0x5d7d59:c.instructions+=4;goto B5d7d59;
case 0x5d7d5a:c.instructions+=3;goto B5d7d5a;
case 0x5d7d5c:c.instructions+=2;goto B5d7d5c;
case 0x5d7d5e:c.instructions+=1;goto B5d7d5e;
case 0x5d7d64:goto L5d7d64;
case 0x5d7d65:c.instructions+=3;goto B5d7d65;
case 0x5d7d66:c.instructions+=2;goto B5d7d66;
case 0x5d7d6a:c.instructions+=1;goto B5d7d6a;
case 0x5d7d70:goto L5d7d70;
case 0x5d7d73:c.instructions+=3;goto B5d7d73;
case 0x5d7d76:c.instructions+=2;goto B5d7d76;
case 0x5d7d78:c.instructions+=1;goto B5d7d78;
case 0x5d7d7a:goto L5d7d7a;
case 0x5d7d7d:c.instructions+=4;goto B5d7d7d;
case 0x5d7d82:c.instructions+=3;goto B5d7d82;
case 0x5d7d84:c.instructions+=2;goto B5d7d84;
case 0x5d7d8a:c.instructions+=1;goto B5d7d8a;
case 0x5d7d90:goto L5d7d90;
case 0x5d7d92:c.instructions+=6;goto B5d7d92;
case 0x5d7d95:c.instructions+=5;goto B5d7d95;
case 0x5d7d96:c.instructions+=4;goto B5d7d96;
case 0x5d7d99:c.instructions+=3;goto B5d7d99;
case 0x5d7d9a:c.instructions+=2;goto B5d7d9a;
case 0x5d7d9c:c.instructions+=1;goto B5d7d9c;
case 0x5d7da1:goto L5d7da1;
case 0x5d7da3:c.instructions+=1;goto B5d7da3;
case 0x5d7da9:goto L5d7da9;
case 0x5d7dac:c.instructions+=6;goto B5d7dac;
case 0x5d7db1:c.instructions+=5;goto B5d7db1;
case 0x5d7db4:c.instructions+=4;goto B5d7db4;
case 0x5d7db5:c.instructions+=3;goto B5d7db5;
case 0x5d7dbb:c.instructions+=2;goto B5d7dbb;
case 0x5d7dbc:c.instructions+=1;goto B5d7dbc;
case 0x5d7dc1:goto L5d7dc1;
case 0x5d7dc5:c.instructions+=3;goto B5d7dc5;
case 0x5d7dc8:c.instructions+=2;goto B5d7dc8;
case 0x5d7dca:c.instructions+=1;goto B5d7dca;
case 0x5d7dcf:goto L5d7dcf;
case 0x5d7dd3:c.instructions+=6;goto B5d7dd3;
case 0x5d7dd7:c.instructions+=5;goto B5d7dd7;
case 0x5d7ddb:c.instructions+=4;goto B5d7ddb;
case 0x5d7de1:c.instructions+=3;goto B5d7de1;
case 0x5d7de3:c.instructions+=2;goto B5d7de3;
case 0x5d7de6:c.instructions+=1;goto B5d7de6;
case 0x5d7de8:goto L5d7de8;
case 0x5d7dec:c.instructions+=4;goto B5d7dec;
case 0x5d7df2:c.instructions+=3;goto B5d7df2;
case 0x5d7df4:c.instructions+=2;goto B5d7df4;
case 0x5d7df7:c.instructions+=1;goto B5d7df7;
case 0x5d7df9:goto L5d7df9;
case 0x5d7dfe:c.instructions+=1;goto B5d7dfe;
case 0x5d7e00:goto L5d7e00;
case 0x5d7e04:c.instructions+=7;goto B5d7e04;
case 0x5d7e0a:c.instructions+=6;goto B5d7e0a;
case 0x5d7e10:c.instructions+=5;goto B5d7e10;
case 0x5d7e16:c.instructions+=4;goto B5d7e16;
case 0x5d7e1c:c.instructions+=3;goto B5d7e1c;
case 0x5d7e1e:c.instructions+=2;goto B5d7e1e;
case 0x5d7e24:c.instructions+=1;goto B5d7e24;
case 0x5d7e29:goto L5d7e29;
case 0x5d7e2d:goto L5d7e2d;
case 0x5d7e31:c.instructions+=4;goto B5d7e31;
case 0x5d7e32:c.instructions+=3;goto B5d7e32;
case 0x5d7e33:c.instructions+=2;goto B5d7e33;
case 0x5d7e35:c.instructions+=1;goto B5d7e35;
case 0x5d7e3a:goto L5d7e3a;
case 0x5d7e3c:c.instructions+=8;goto B5d7e3c;
case 0x5d7e3f:c.instructions+=7;goto B5d7e3f;
case 0x5d7e41:c.instructions+=6;goto B5d7e41;
case 0x5d7e44:c.instructions+=5;goto B5d7e44;
case 0x5d7e49:c.instructions+=4;goto B5d7e49;
case 0x5d7e4f:c.instructions+=3;goto B5d7e4f;
case 0x5d7e52:c.instructions+=2;goto B5d7e52;
case 0x5d7e59:c.instructions+=1;goto B5d7e59;
case 0x5d7e5b:goto L5d7e5b;
case 0x5d7e5e:c.instructions+=2;goto B5d7e5e;
case 0x5d7e60:c.instructions+=1;goto B5d7e60;
case 0x5d7e66:goto L5d7e66;
case 0x5d7e67:c.instructions+=1;goto B5d7e67;
case 0x5d7e68:goto L5d7e68;
case 0x5d7e69:c.instructions+=3;goto B5d7e69;
case 0x5d7e6a:c.instructions+=2;goto B5d7e6a;
case 0x5d7e6b:c.instructions+=1;goto B5d7e6b;
case 0x5d7e70:goto L5d7e70;
case 0x5d7e73:c.instructions+=4;goto B5d7e73;
case 0x5d7e74:c.instructions+=3;goto B5d7e74;
case 0x5d7e7a:c.instructions+=2;goto B5d7e7a;
case 0x5d7e7f:c.instructions+=1;goto B5d7e7f;
case 0x5d7e84:goto L5d7e84;
case 0x5d7e86:c.instructions+=2;goto B5d7e86;
case 0x5d7e8a:c.instructions+=1;goto B5d7e8a;
case 0x5d7e8c:goto L5d7e8c;
case 0x5d7e8d:c.instructions+=3;goto B5d7e8d;
case 0x5d7e8e:c.instructions+=2;goto B5d7e8e;
case 0x5d7e92:c.instructions+=1;goto B5d7e92;
case 0x5d7e93:goto L5d7e93;
case 0x5d7e95:c.instructions+=7;goto B5d7e95;
case 0x5d7e98:c.instructions+=6;goto B5d7e98;
case 0x5d7e99:c.instructions+=5;goto B5d7e99;
case 0x5d7e9c:c.instructions+=4;goto B5d7e9c;
case 0x5d7e9d:c.instructions+=3;goto B5d7e9d;
case 0x5d7e9f:c.instructions+=2;goto B5d7e9f;
case 0x5d7ea3:c.instructions+=1;goto B5d7ea3;
case 0x5d7ea8:goto L5d7ea8;
case 0x5d7eab:c.instructions+=1;goto B5d7eab;
case 0x5d7ead:goto L5d7ead;
case 0x5d7eaf:c.instructions+=4;goto B5d7eaf;
case 0x5d7eb0:c.instructions+=3;goto B5d7eb0;
case 0x5d7eb1:c.instructions+=2;goto B5d7eb1;
case 0x5d7eb3:c.instructions+=1;goto B5d7eb3;
case 0x5d7eb8:goto L5d7eb8;
case 0x5d7eba:c.instructions+=1;goto B5d7eba;
case 0x5d7ebc:goto L5d7ebc;
case 0x5d7ec1:c.instructions+=5;goto B5d7ec1;
case 0x5d7ec4:c.instructions+=4;goto B5d7ec4;
case 0x5d7ec6:c.instructions+=3;goto B5d7ec6;
case 0x5d7ec8:c.instructions+=2;goto B5d7ec8;
case 0x5d7ece:c.instructions+=1;goto B5d7ece;
case 0x5d7ed0:goto L5d7ed0;
case 0x5d7ed3:c.instructions+=9;goto B5d7ed3;
case 0x5d7ed6:c.instructions+=8;goto B5d7ed6;
case 0x5d7ed8:c.instructions+=7;goto B5d7ed8;
case 0x5d7eda:c.instructions+=6;goto B5d7eda;
case 0x5d7edd:c.instructions+=5;goto B5d7edd;
case 0x5d7ee2:c.instructions+=4;goto B5d7ee2;
case 0x5d7ee8:c.instructions+=3;goto B5d7ee8;
case 0x5d7eeb:c.instructions+=2;goto B5d7eeb;
case 0x5d7ef2:c.instructions+=1;goto B5d7ef2;
case 0x5d7ef4:goto L5d7ef4;
case 0x5d7ef5:c.instructions+=2;goto B5d7ef5;
case 0x5d7ef6:c.instructions+=1;goto B5d7ef6;
case 0x5d7efb:goto L5d7efb;
case 0x5d7efe:goto L5d7efe;
case 0x5d7f02:c.instructions+=2;goto B5d7f02;
case 0x5d7f06:c.instructions+=1;goto B5d7f06;
case 0x5d7f08:goto L5d7f08;
case 0x5d7f09:c.instructions+=2;goto B5d7f09;
case 0x5d7f0a:c.instructions+=1;goto B5d7f0a;
case 0x5d7f0b:goto L5d7f0b;
case 0x5d7f0c:c.instructions+=2;goto B5d7f0c;
case 0x5d7f0f:c.instructions+=1;goto B5d7f0f;
case 0x5d7f10:goto L5d7f10;
case 0x5d7f11:c.instructions+=53;goto B5d7f11;
case 0x5d7f13:c.instructions+=52;goto B5d7f13;
case 0x5d7f16:c.instructions+=51;goto B5d7f16;
case 0x5d7f19:c.instructions+=50;goto B5d7f19;
case 0x5d7f1a:c.instructions+=49;goto B5d7f1a;
case 0x5d7f1b:c.instructions+=48;goto B5d7f1b;
case 0x5d7f1d:c.instructions+=47;goto B5d7f1d;
case 0x5d7f1e:c.instructions+=46;goto B5d7f1e;
case 0x5d7f21:c.instructions+=45;goto B5d7f21;
case 0x5d7f24:c.instructions+=44;goto B5d7f24;
case 0x5d7f27:c.instructions+=43;goto B5d7f27;
case 0x5d7f2a:c.instructions+=42;goto B5d7f2a;
case 0x5d7f2d:c.instructions+=41;goto B5d7f2d;
case 0x5d7f2f:c.instructions+=40;goto B5d7f2f;
case 0x5d7f32:c.instructions+=39;goto B5d7f32;
case 0x5d7f35:c.instructions+=38;goto B5d7f35;
case 0x5d7f39:c.instructions+=37;goto B5d7f39;
case 0x5d7f3b:c.instructions+=36;goto B5d7f3b;
case 0x5d7f3e:c.instructions+=35;goto B5d7f3e;
case 0x5d7f41:c.instructions+=34;goto B5d7f41;
case 0x5d7f46:c.instructions+=33;goto B5d7f46;
case 0x5d7f49:c.instructions+=32;goto B5d7f49;
case 0x5d7f4b:c.instructions+=31;goto B5d7f4b;
case 0x5d7f4e:c.instructions+=30;goto B5d7f4e;
case 0x5d7f52:c.instructions+=29;goto B5d7f52;
case 0x5d7f55:c.instructions+=28;goto B5d7f55;
case 0x5d7f5a:c.instructions+=27;goto B5d7f5a;
case 0x5d7f5d:c.instructions+=26;goto B5d7f5d;
case 0x5d7f5f:c.instructions+=25;goto B5d7f5f;
case 0x5d7f63:c.instructions+=24;goto B5d7f63;
case 0x5d7f66:c.instructions+=23;goto B5d7f66;
case 0x5d7f6b:c.instructions+=22;goto B5d7f6b;
case 0x5d7f6e:c.instructions+=21;goto B5d7f6e;
case 0x5d7f73:c.instructions+=20;goto B5d7f73;
case 0x5d7f76:c.instructions+=19;goto B5d7f76;
case 0x5d7f7a:c.instructions+=18;goto B5d7f7a;
case 0x5d7f7d:c.instructions+=17;goto B5d7f7d;
case 0x5d7f81:c.instructions+=16;goto B5d7f81;
case 0x5d7f85:c.instructions+=15;goto B5d7f85;
case 0x5d7f88:c.instructions+=14;goto B5d7f88;
case 0x5d7f89:c.instructions+=13;goto B5d7f89;
case 0x5d7f8f:c.instructions+=12;goto B5d7f8f;
case 0x5d7f91:c.instructions+=11;goto B5d7f91;
case 0x5d7f94:c.instructions+=10;goto B5d7f94;
case 0x5d7f98:c.instructions+=9;goto B5d7f98;
case 0x5d7f9e:c.instructions+=8;goto B5d7f9e;
case 0x5d7fa1:c.instructions+=7;goto B5d7fa1;
case 0x5d7fa5:c.instructions+=6;goto B5d7fa5;
case 0x5d7fab:c.instructions+=5;goto B5d7fab;
case 0x5d7fae:c.instructions+=4;goto B5d7fae;
case 0x5d7fb2:c.instructions+=3;goto B5d7fb2;
case 0x5d7fb8:c.instructions+=2;goto B5d7fb8;
case 0x5d7fbb:c.instructions+=1;goto B5d7fbb;
case 0x5d7fc0:goto L5d7fc0;
case 0x5d7fc3:c.instructions+=3;goto B5d7fc3;
case 0x5d7fc5:c.instructions+=2;goto B5d7fc5;
case 0x5d7fc9:c.instructions+=1;goto B5d7fc9;
case 0x5d7fcb:goto L5d7fcb;
case 0x5d7fcf:goto L5d7fcf;
case 0x5d7fd1:c.instructions+=1;goto B5d7fd1;
case 0x5d7fd3:goto L5d7fd3;
case 0x5d7fd8:c.instructions+=5;goto B5d7fd8;
case 0x5d7fdd:c.instructions+=4;goto B5d7fdd;
case 0x5d7fe0:c.instructions+=3;goto B5d7fe0;
case 0x5d7fe3:c.instructions+=2;goto B5d7fe3;
case 0x5d7fe6:c.instructions+=1;goto B5d7fe6;
case 0x5d7fe9:goto L5d7fe9;
case 0x5d7fec:c.instructions+=7;goto B5d7fec;
case 0x5d7ff0:c.instructions+=6;goto B5d7ff0;
case 0x5d7ff2:c.instructions+=5;goto B5d7ff2;
case 0x5d7ff3:c.instructions+=4;goto B5d7ff3;
case 0x5d7ff7:c.instructions+=3;goto B5d7ff7;
case 0x5d7ff8:c.instructions+=2;goto B5d7ff8;
case 0x5d7ffc:c.instructions+=1;goto B5d7ffc;
default:missing_instruction(c.pc);}
B5d7002:L5d7002:{c.instructions+=1;NFSU2_TR(0x5d7002);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B5d7004:L5d7004:{c.instructions+=5;NFSU2_TR(0x5d7004);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7006:{NFSU2_TR(0x5d7006);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d700a:{NFSU2_TR(0x5d700a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d700c:{NFSU2_TR(0x5d700c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d700f:{NFSU2_TR(0x5d700f);
if(r1(R+514)){{goto L5d7022;}}
}
B5d7011:L5d7011:{c.instructions+=6;NFSU2_TR(0x5d7011);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7015:{NFSU2_TR(0x5d7015);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5d7019:{NFSU2_TR(0x5d7019);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d701b:{NFSU2_TR(0x5d701b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d701d:{NFSU2_TR(0x5d701d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7020:{NFSU2_TR(0x5d7020);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d7042;}}
}
B5d7022:L5d7022:{c.instructions+=6;NFSU2_TR(0x5d7022);
{u32 ea_=u32(r4(R+20)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7026:{NFSU2_TR(0x5d7026);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5d702a:{NFSU2_TR(0x5d702a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d702e:{NFSU2_TR(0x5d702e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d7030:{NFSU2_TR(0x5d7030);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7033:{NFSU2_TR(0x5d7033);
if(r1(R+514)){{goto L5d7071;}}
}
B5d7035:L5d7035:{c.instructions+=5;NFSU2_TR(0x5d7035);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7039:{NFSU2_TR(0x5d7039);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d703b:{NFSU2_TR(0x5d703b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d703d:{NFSU2_TR(0x5d703d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7040:{NFSU2_TR(0x5d7040);
if(r1(R+514)){{goto L5d7071;}}
}
B5d7042:L5d7042:{c.instructions+=13;NFSU2_TR(0x5d7042);
{u32 ea_=u32(r4(R+20)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7045:{NFSU2_TR(0x5d7045);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7048:{NFSU2_TR(0x5d7048);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d704c:{NFSU2_TR(0x5d704c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d704e:{NFSU2_TR(0x5d704e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d7050:{NFSU2_TR(0x5d7050);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7052:{NFSU2_TR(0x5d7052);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7054:{NFSU2_TR(0x5d7054);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d7056:{NFSU2_TR(0x5d7056);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d7059:{NFSU2_TR(0x5d7059);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d705d:{NFSU2_TR(0x5d705d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d705f:{NFSU2_TR(0x5d705f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d7062:{NFSU2_TR(0x5d7062);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7071;}}
}
B5d7064:L5d7064:{c.instructions+=4;NFSU2_TR(0x5d7064);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d7068:{NFSU2_TR(0x5d7068);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d706a:{NFSU2_TR(0x5d706a);
__builtin_memmove((R+0),(R+518),1);
}
B5d706d:{NFSU2_TR(0x5d706d);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d7071:L5d7071:{c.instructions+=4;NFSU2_TR(0x5d7071);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d7074:{NFSU2_TR(0x5d7074);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5d7077:{NFSU2_TR(0x5d7077);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5d7078:{NFSU2_TR(0x5d7078);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7004u);}goto L5d7004;}}
}
B5d707a:L5d707a:{c.instructions+=7;NFSU2_TR(0x5d707a);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d707e:{NFSU2_TR(0x5d707e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d707f:{NFSU2_TR(0x5d707f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7080:{NFSU2_TR(0x5d7080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7081:{NFSU2_TR(0x5d7081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7082:{NFSU2_TR(0x5d7082);
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
B5d7085:{NFSU2_TR(0x5d7085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7090:L5d7090:{c.instructions+=11;NFSU2_TR(0x5d7090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7091:{NFSU2_TR(0x5d7091);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7092:{NFSU2_TR(0x5d7092);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d7096:{NFSU2_TR(0x5d7096);
__builtin_memmove((R+24),(R+4),4);
}
B5d7098:{NFSU2_TR(0x5d7098);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d709a:{NFSU2_TR(0x5d709a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d709b:{NFSU2_TR(0x5d709b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d709e:{NFSU2_TR(0x5d709e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d709f:{NFSU2_TR(0x5d709f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d70a2:{NFSU2_TR(0x5d70a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70a3:{NFSU2_TR(0x5d70a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d70a8ull));
TAIL_STATIC(0x43d410u,43d);
}
B5d70a8:L5d70a8:{c.instructions+=3;NFSU2_TR(0x5d70a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d70ab:{NFSU2_TR(0x5d70ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d70ad:{NFSU2_TR(0x5d70ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d70b6;}}
}
B5d70af:L5d70af:{c.instructions+=4;NFSU2_TR(0x5d70af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d70b0:{NFSU2_TR(0x5d70b0);
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
B5d70b2:{NFSU2_TR(0x5d70b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d70b3:{NFSU2_TR(0x5d70b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d70b6:L5d70b6:{c.instructions+=6;NFSU2_TR(0x5d70b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d70ba:{NFSU2_TR(0x5d70ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70bb:{NFSU2_TR(0x5d70bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B5d70be:{NFSU2_TR(0x5d70be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70bf:{NFSU2_TR(0x5d70bf);
__builtin_memmove((R+0),(R+28),4);
}
B5d70c1:{NFSU2_TR(0x5d70c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d70c6ull));
TAIL_STATIC(0x5d6dd0u,5d6);
}
B5d70c6:L5d70c6:{c.instructions+=4;NFSU2_TR(0x5d70c6);
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
B5d70c9:{NFSU2_TR(0x5d70c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d70ca:{NFSU2_TR(0x5d70ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d70cb:{NFSU2_TR(0x5d70cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d70d0:L5d70d0:{c.instructions+=17;NFSU2_TR(0x5d70d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70d1:{NFSU2_TR(0x5d70d1);
__builtin_memmove((R+20),(R+16),4);
}
B5d70d3:{NFSU2_TR(0x5d70d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5d70d6:{NFSU2_TR(0x5d70d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5d70d9:{NFSU2_TR(0x5d70d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d70dc:{NFSU2_TR(0x5d70dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70dd:{NFSU2_TR(0x5d70dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70de:{NFSU2_TR(0x5d70de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70df:{NFSU2_TR(0x5d70df);
__builtin_memmove((R+28),(R+4),4);
}
B5d70e1:{NFSU2_TR(0x5d70e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d70e4:{NFSU2_TR(0x5d70e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70e5:{NFSU2_TR(0x5d70e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70e6:{NFSU2_TR(0x5d70e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d70e9:{NFSU2_TR(0x5d70e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d70ec:{NFSU2_TR(0x5d70ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70ed:{NFSU2_TR(0x5d70ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d70ee:{NFSU2_TR(0x5d70ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d70f3ull));
TAIL_STATIC(0x43d410u,43d);
}
B5d70f3:L5d70f3:{c.instructions+=3;NFSU2_TR(0x5d70f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d70f6:{NFSU2_TR(0x5d70f6);
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
B5d70f8:{NFSU2_TR(0x5d70f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7106;}}
}
B5d70fa:L5d70fa:{c.instructions+=7;NFSU2_TR(0x5d70fa);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d70fd:{NFSU2_TR(0x5d70fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d70fe:{NFSU2_TR(0x5d70fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d70ff:{NFSU2_TR(0x5d70ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7100:{NFSU2_TR(0x5d7100);
__builtin_memmove((R+16),(R+20),4);
}
B5d7102:{NFSU2_TR(0x5d7102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7103:{NFSU2_TR(0x5d7103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7106:L5d7106:{c.instructions+=6;NFSU2_TR(0x5d7106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7109:{NFSU2_TR(0x5d7109);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d710b:{NFSU2_TR(0x5d710b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d710c:{NFSU2_TR(0x5d710c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d710d:{NFSU2_TR(0x5d710d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d710e:{NFSU2_TR(0x5d710e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7113ull));
TAIL_STATIC(0x43d410u,43d);
}
B5d7113:L5d7113:{c.instructions+=3;NFSU2_TR(0x5d7113);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d7116:{NFSU2_TR(0x5d7116);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7118:{NFSU2_TR(0x5d7118);
if(r1(R+518)){{goto L5d7141;}}
}
B5d711a:L5d711a:{c.instructions+=6;NFSU2_TR(0x5d711a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d711e:{NFSU2_TR(0x5d711e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d711f:{NFSU2_TR(0x5d711f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7122:{NFSU2_TR(0x5d7122);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7125:{NFSU2_TR(0x5d7125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7126:{NFSU2_TR(0x5d7126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d712bull));
TAIL_STATIC(0x5d6dd0u,5d6);
}
B5d712b:L5d712b:{c.instructions+=3;NFSU2_TR(0x5d712b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d712e:{NFSU2_TR(0x5d712e);
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
B5d7130:{NFSU2_TR(0x5d7130);
if(r1(R+518)){{goto L5d7141;}}
}
B5d7132:L5d7132:{c.instructions+=7;NFSU2_TR(0x5d7132);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7138:{NFSU2_TR(0x5d7138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7139:{NFSU2_TR(0x5d7139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d713a:{NFSU2_TR(0x5d713a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d713b:{NFSU2_TR(0x5d713b);
__builtin_memmove((R+16),(R+20),4);
}
B5d713d:{NFSU2_TR(0x5d713d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d713e:{NFSU2_TR(0x5d713e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7141:L5d7141:{c.instructions+=6;NFSU2_TR(0x5d7141);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d7145:{NFSU2_TR(0x5d7145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7148:{NFSU2_TR(0x5d7148);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d714a:{NFSU2_TR(0x5d714a);
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
B5d714c:{NFSU2_TR(0x5d714c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7150:{NFSU2_TR(0x5d7150);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d7258;}}
}
B5d7156:L5d7156:{c.instructions+=2;NFSU2_TR(0x5d7156);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7159:{NFSU2_TR(0x5d7159);
__builtin_memmove((R+16),(R+16),4);
}
B5d7160:L5d7160:{c.instructions+=30;NFSU2_TR(0x5d7160);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7163:{NFSU2_TR(0x5d7163);
__builtin_memmove((R+0),(R+12),4);
}
B5d7165:{NFSU2_TR(0x5d7165);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d7166:{NFSU2_TR(0x5d7166);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d7166);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d7166);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d7168:{NFSU2_TR(0x5d7168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d716b:{NFSU2_TR(0x5d716b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d716d:{NFSU2_TR(0x5d716d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d716f:{NFSU2_TR(0x5d716f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7173:{NFSU2_TR(0x5d7173);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7176:{NFSU2_TR(0x5d7176);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d717a:{NFSU2_TR(0x5d717a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d717d:{NFSU2_TR(0x5d717d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7181:{NFSU2_TR(0x5d7181);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7185:{NFSU2_TR(0x5d7185);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7188:{NFSU2_TR(0x5d7188);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d718c:{NFSU2_TR(0x5d718c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d718e:{NFSU2_TR(0x5d718e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7192:{NFSU2_TR(0x5d7192);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d7196:{NFSU2_TR(0x5d7196);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7198:{NFSU2_TR(0x5d7198);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d719a:{NFSU2_TR(0x5d719a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d719e:{NFSU2_TR(0x5d719e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d71a2:{NFSU2_TR(0x5d71a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d71a6:{NFSU2_TR(0x5d71a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d71aa:{NFSU2_TR(0x5d71aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d71ac:{NFSU2_TR(0x5d71ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d71ad:{NFSU2_TR(0x5d71ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d71ae:{NFSU2_TR(0x5d71ae);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d71b0:{NFSU2_TR(0x5d71b0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d71b4:{NFSU2_TR(0x5d71b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d71b9ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5d71b9:L5d71b9:{c.instructions+=18;NFSU2_TR(0x5d71b9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d71bd:{NFSU2_TR(0x5d71bd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d71bf:{NFSU2_TR(0x5d71bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d71c2:{NFSU2_TR(0x5d71c2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d71c6:{NFSU2_TR(0x5d71c6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d71ca:{NFSU2_TR(0x5d71ca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d71ce:{NFSU2_TR(0x5d71ce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d71d2:{NFSU2_TR(0x5d71d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d71d4:{NFSU2_TR(0x5d71d4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d71d8:{NFSU2_TR(0x5d71d8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d71dc:{NFSU2_TR(0x5d71dc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d71e0:{NFSU2_TR(0x5d71e0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d71e4:{NFSU2_TR(0x5d71e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d71e6:{NFSU2_TR(0x5d71e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d71ea:{NFSU2_TR(0x5d71ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d71f0:{NFSU2_TR(0x5d71f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d71f2:{NFSU2_TR(0x5d71f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d71f5:{NFSU2_TR(0x5d71f5);
if(r1(R+514)){{goto L5d7209;}}
}
B5d71f7:L5d71f7:{c.instructions+=7;NFSU2_TR(0x5d71f7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d71f9:{NFSU2_TR(0x5d71f9);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d71fb:{NFSU2_TR(0x5d71fb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d71ff:{NFSU2_TR(0x5d71ff);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7203:{NFSU2_TR(0x5d7203);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7205:{NFSU2_TR(0x5d7205);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d7207:{NFSU2_TR(0x5d7207);
{goto L5d7234;}
}
B5d7209:L5d7209:{c.instructions+=5;NFSU2_TR(0x5d7209);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d720d:{NFSU2_TR(0x5d720d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d7211:{NFSU2_TR(0x5d7211);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d7213:{NFSU2_TR(0x5d7213);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d7216:{NFSU2_TR(0x5d7216);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7232;}}
}
B5d7218:L5d7218:{c.instructions+=11;NFSU2_TR(0x5d7218);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d721c:{NFSU2_TR(0x5d721c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7220:{NFSU2_TR(0x5d7220);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7222:{NFSU2_TR(0x5d7222);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d7224:{NFSU2_TR(0x5d7224);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7226:{NFSU2_TR(0x5d7226);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d7228:{NFSU2_TR(0x5d7228);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d722a:{NFSU2_TR(0x5d722a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d722c:{NFSU2_TR(0x5d722c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d722e:{NFSU2_TR(0x5d722e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d7230:{NFSU2_TR(0x5d7230);
{goto L5d7234;}
}
B5d7232:L5d7232:{c.instructions+=1;NFSU2_TR(0x5d7232);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d7234:L5d7234:{c.instructions+=4;NFSU2_TR(0x5d7234);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d7238:{NFSU2_TR(0x5d7238);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d723a:{NFSU2_TR(0x5d723a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d723d:{NFSU2_TR(0x5d723d);
if(r1(R+514)){{goto L5d7245;}}
}
B5d723f:L5d723f:{c.instructions+=2;NFSU2_TR(0x5d723f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7243:{NFSU2_TR(0x5d7243);
{goto L5d7247;}
}
B5d7245:L5d7245:{c.instructions+=1;NFSU2_TR(0x5d7245);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d7247:L5d7247:{c.instructions+=5;NFSU2_TR(0x5d7247);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d724b:{NFSU2_TR(0x5d724b);
__builtin_memmove((R+0),(R+12),4);
}
B5d724d:{NFSU2_TR(0x5d724d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5d7250:{NFSU2_TR(0x5d7250);
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
B5d7252:{NFSU2_TR(0x5d7252);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7160u);}goto L5d7160;}}
}
B5d7258:L5d7258:{c.instructions+=7;NFSU2_TR(0x5d7258);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d725c:{NFSU2_TR(0x5d725c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d725d:{NFSU2_TR(0x5d725d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d725e:{NFSU2_TR(0x5d725e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d725f:{NFSU2_TR(0x5d725f);
__builtin_memmove((R+16),(R+20),4);
}
B5d7261:{NFSU2_TR(0x5d7261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7262:{NFSU2_TR(0x5d7262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7270:L5d7270:{c.instructions+=16;NFSU2_TR(0x5d7270);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7271:{NFSU2_TR(0x5d7271);
__builtin_memmove((R+20),(R+16),4);
}
B5d7273:{NFSU2_TR(0x5d7273);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5d7276:{NFSU2_TR(0x5d7276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5d7279:{NFSU2_TR(0x5d7279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d727c:{NFSU2_TR(0x5d727c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d727d:{NFSU2_TR(0x5d727d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d727e:{NFSU2_TR(0x5d727e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d727f:{NFSU2_TR(0x5d727f);
__builtin_memmove((R+12),(R+4),4);
}
B5d7281:{NFSU2_TR(0x5d7281);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7283:{NFSU2_TR(0x5d7283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7284:{NFSU2_TR(0x5d7284);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7287:{NFSU2_TR(0x5d7287);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7288:{NFSU2_TR(0x5d7288);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d728b:{NFSU2_TR(0x5d728b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d728c:{NFSU2_TR(0x5d728c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7291ull));
TAIL_STATIC(0x43d410u,43d);
}
B5d7291:L5d7291:{c.instructions+=3;NFSU2_TR(0x5d7291);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d7294:{NFSU2_TR(0x5d7294);
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
B5d7296:{NFSU2_TR(0x5d7296);
if(r1(R+518)){{goto L5d72b0;}}
}
B5d7298:L5d7298:{c.instructions+=6;NFSU2_TR(0x5d7298);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d729c:{NFSU2_TR(0x5d729c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d729f:{NFSU2_TR(0x5d729f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d72a2:{NFSU2_TR(0x5d72a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d72a3:{NFSU2_TR(0x5d72a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d72a4:{NFSU2_TR(0x5d72a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d72a9ull));
TAIL_STATIC(0x5d6dd0u,5d6);
}
B5d72a9:L5d72a9:{c.instructions+=3;NFSU2_TR(0x5d72a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d72ac:{NFSU2_TR(0x5d72ac);
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
B5d72ae:{NFSU2_TR(0x5d72ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d72bf;}}
}
B5d72b0:L5d72b0:{c.instructions+=7;NFSU2_TR(0x5d72b0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d72b6:{NFSU2_TR(0x5d72b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d72b7:{NFSU2_TR(0x5d72b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d72b8:{NFSU2_TR(0x5d72b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d72b9:{NFSU2_TR(0x5d72b9);
__builtin_memmove((R+16),(R+20),4);
}
B5d72bb:{NFSU2_TR(0x5d72bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d72bc:{NFSU2_TR(0x5d72bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d72bf:L5d72bf:{c.instructions+=17;NFSU2_TR(0x5d72bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d72c2:{NFSU2_TR(0x5d72c2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d72c4:{NFSU2_TR(0x5d72c4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d72c6:{NFSU2_TR(0x5d72c6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d72c9:{NFSU2_TR(0x5d72c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d72cb:{NFSU2_TR(0x5d72cb);
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
B5d72cd:{NFSU2_TR(0x5d72cd);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d72d0:{NFSU2_TR(0x5d72d0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d72d2:{NFSU2_TR(0x5d72d2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d72d4:{NFSU2_TR(0x5d72d4);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d72d6:{NFSU2_TR(0x5d72d6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d72d8:{NFSU2_TR(0x5d72d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d72da:{NFSU2_TR(0x5d72da);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d72dc:{NFSU2_TR(0x5d72dc);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d72de:{NFSU2_TR(0x5d72de);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d72e0:{NFSU2_TR(0x5d72e0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d72e4:{NFSU2_TR(0x5d72e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d73ea;}}
}
B5d72ea:L5d72ea:{c.instructions+=1;NFSU2_TR(0x5d72ea);
__builtin_memmove((R+12),(R+12),4);
}
B5d72f0:L5d72f0:{c.instructions+=30;NFSU2_TR(0x5d72f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d72f1:{NFSU2_TR(0x5d72f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d72f5:{NFSU2_TR(0x5d72f5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d72f6:{NFSU2_TR(0x5d72f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d72f9:{NFSU2_TR(0x5d72f9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d72f9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d72f9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d72fb:{NFSU2_TR(0x5d72fb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d72fd:{NFSU2_TR(0x5d72fd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d72ff:{NFSU2_TR(0x5d72ff);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7303:{NFSU2_TR(0x5d7303);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7306:{NFSU2_TR(0x5d7306);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d730a:{NFSU2_TR(0x5d730a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d730d:{NFSU2_TR(0x5d730d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7311:{NFSU2_TR(0x5d7311);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7315:{NFSU2_TR(0x5d7315);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7318:{NFSU2_TR(0x5d7318);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d731c:{NFSU2_TR(0x5d731c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d731e:{NFSU2_TR(0x5d731e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7322:{NFSU2_TR(0x5d7322);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d7326:{NFSU2_TR(0x5d7326);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7328:{NFSU2_TR(0x5d7328);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d732a:{NFSU2_TR(0x5d732a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d732e:{NFSU2_TR(0x5d732e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7332:{NFSU2_TR(0x5d7332);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7334:{NFSU2_TR(0x5d7334);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d7338:{NFSU2_TR(0x5d7338);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d733a:{NFSU2_TR(0x5d733a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d733e:{NFSU2_TR(0x5d733e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d733f:{NFSU2_TR(0x5d733f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7340:{NFSU2_TR(0x5d7340);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7344:{NFSU2_TR(0x5d7344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7349ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5d7349:L5d7349:{c.instructions+=18;NFSU2_TR(0x5d7349);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d734d:{NFSU2_TR(0x5d734d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d734f:{NFSU2_TR(0x5d734f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d7352:{NFSU2_TR(0x5d7352);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7356:{NFSU2_TR(0x5d7356);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d735a:{NFSU2_TR(0x5d735a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d735e:{NFSU2_TR(0x5d735e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7362:{NFSU2_TR(0x5d7362);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7364:{NFSU2_TR(0x5d7364);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7368:{NFSU2_TR(0x5d7368);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d736c:{NFSU2_TR(0x5d736c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7370:{NFSU2_TR(0x5d7370);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7374:{NFSU2_TR(0x5d7374);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7376:{NFSU2_TR(0x5d7376);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d737a:{NFSU2_TR(0x5d737a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d7380:{NFSU2_TR(0x5d7380);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d7382:{NFSU2_TR(0x5d7382);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7385:{NFSU2_TR(0x5d7385);
if(r1(R+514)){{goto L5d7399;}}
}
B5d7387:L5d7387:{c.instructions+=7;NFSU2_TR(0x5d7387);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7389:{NFSU2_TR(0x5d7389);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d738b:{NFSU2_TR(0x5d738b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d738f:{NFSU2_TR(0x5d738f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7393:{NFSU2_TR(0x5d7393);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7395:{NFSU2_TR(0x5d7395);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d7397:{NFSU2_TR(0x5d7397);
{goto L5d73c4;}
}
B5d7399:L5d7399:{c.instructions+=5;NFSU2_TR(0x5d7399);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d739d:{NFSU2_TR(0x5d739d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d73a1:{NFSU2_TR(0x5d73a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d73a3:{NFSU2_TR(0x5d73a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d73a6:{NFSU2_TR(0x5d73a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d73c2;}}
}
B5d73a8:L5d73a8:{c.instructions+=11;NFSU2_TR(0x5d73a8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d73ac:{NFSU2_TR(0x5d73ac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d73b0:{NFSU2_TR(0x5d73b0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d73b2:{NFSU2_TR(0x5d73b2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d73b4:{NFSU2_TR(0x5d73b4);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d73b6:{NFSU2_TR(0x5d73b6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d73b8:{NFSU2_TR(0x5d73b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d73ba:{NFSU2_TR(0x5d73ba);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d73bc:{NFSU2_TR(0x5d73bc);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d73be:{NFSU2_TR(0x5d73be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d73c0:{NFSU2_TR(0x5d73c0);
{goto L5d73c4;}
}
B5d73c2:L5d73c2:{c.instructions+=1;NFSU2_TR(0x5d73c2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d73c4:L5d73c4:{c.instructions+=4;NFSU2_TR(0x5d73c4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d73c8:{NFSU2_TR(0x5d73c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d73ca:{NFSU2_TR(0x5d73ca);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d73cd:{NFSU2_TR(0x5d73cd);
if(r1(R+514)){{goto L5d73d5;}}
}
B5d73cf:L5d73cf:{c.instructions+=2;NFSU2_TR(0x5d73cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d73d3:{NFSU2_TR(0x5d73d3);
{goto L5d73d7;}
}
B5d73d5:L5d73d5:{c.instructions+=1;NFSU2_TR(0x5d73d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d73d7:L5d73d7:{c.instructions+=5;NFSU2_TR(0x5d73d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d73db:{NFSU2_TR(0x5d73db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d73df:{NFSU2_TR(0x5d73df);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5d73e2:{NFSU2_TR(0x5d73e2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5d73e4:{NFSU2_TR(0x5d73e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d72f0u);}goto L5d72f0;}}
}
B5d73ea:L5d73ea:{c.instructions+=7;NFSU2_TR(0x5d73ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d73ee:{NFSU2_TR(0x5d73ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d73ef:{NFSU2_TR(0x5d73ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d73f0:{NFSU2_TR(0x5d73f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d73f1:{NFSU2_TR(0x5d73f1);
__builtin_memmove((R+16),(R+20),4);
}
B5d73f3:{NFSU2_TR(0x5d73f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d73f4:{NFSU2_TR(0x5d73f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7400:L5d7400:{c.instructions+=5;NFSU2_TR(0x5d7400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7401:{NFSU2_TR(0x5d7401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7402:{NFSU2_TR(0x5d7402);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d7406:{NFSU2_TR(0x5d7406);
w4(R+24,u32(0x800e00ull));
}
B5d740b:{NFSU2_TR(0x5d740b);
{goto L5d7410;}
}
B5d7410:L5d7410:{c.instructions+=3;NFSU2_TR(0x5d7410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7412:{NFSU2_TR(0x5d7412);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7413:{NFSU2_TR(0x5d7413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7418ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5d7418:L5d7418:{c.instructions+=5;NFSU2_TR(0x5d7418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d741a:{NFSU2_TR(0x5d741a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d741b:{NFSU2_TR(0x5d741b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d741c:{NFSU2_TR(0x5d741c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d741d:{NFSU2_TR(0x5d741d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7422ull));
TAIL_STATIC(0x43dd10u,43d);
}
B5d7422:L5d7422:{c.instructions+=3;NFSU2_TR(0x5d7422);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d7425:{NFSU2_TR(0x5d7425);
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
B5d7427:{NFSU2_TR(0x5d7427);
if(r1(R+518)){{goto L5d7439;}}
}
B5d7429:L5d7429:{c.instructions+=3;NFSU2_TR(0x5d7429);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5d742c:{NFSU2_TR(0x5d742c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x800e18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x800e18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d7432:{NFSU2_TR(0x5d7432);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7410u);}goto L5d7410;}}
}
B5d7434:L5d7434:{c.instructions+=4;NFSU2_TR(0x5d7434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7435:{NFSU2_TR(0x5d7435);
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
B5d7437:{NFSU2_TR(0x5d7437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7438:{NFSU2_TR(0x5d7438);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7439:L5d7439:{c.instructions+=4;NFSU2_TR(0x5d7439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d743a:{NFSU2_TR(0x5d743a);
__builtin_memmove((R+0),(R+24),4);
}
B5d743c:{NFSU2_TR(0x5d743c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d743d:{NFSU2_TR(0x5d743d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7440:L5d7440:{c.instructions+=4;NFSU2_TR(0x5d7440);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7444:{NFSU2_TR(0x5d7444);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d7446:{NFSU2_TR(0x5d7446);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x641cull))));
}
B5d744c:{NFSU2_TR(0x5d744c);
__builtin_memmove((R+16),(R+16),4);
}
B5d7450:L5d7450:{c.instructions+=2;NFSU2_TR(0x5d7450);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5d7452:{NFSU2_TR(0x5d7452);
if(r1(R+518)){{goto L5d7462;}}
}
B5d7454:L5d7454:{c.instructions+=4;NFSU2_TR(0x5d7454);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d7455:{NFSU2_TR(0x5d7455);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5d7458:{NFSU2_TR(0x5d7458);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d745b:{NFSU2_TR(0x5d745b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7450u);}goto L5d7450;}}
}
B5d745d:L5d745d:{c.instructions+=2;NFSU2_TR(0x5d745d);
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
B5d745f:{NFSU2_TR(0x5d745f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7462:L5d7462:{c.instructions+=2;NFSU2_TR(0x5d7462);
w1(R+0,u8(0x1ull));
}
B5d7464:{NFSU2_TR(0x5d7464);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7470:L5d7470:{c.instructions+=2;NFSU2_TR(0x5d7470);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d7472:{NFSU2_TR(0x5d7472);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x641cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d7478:L5d7478:{c.instructions+=2;NFSU2_TR(0x5d7478);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5d747b:{NFSU2_TR(0x5d747b);
if(r1(R+518)){{goto L5d7489;}}
}
B5d747d:L5d747d:{c.instructions+=4;NFSU2_TR(0x5d747d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d747e:{NFSU2_TR(0x5d747e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5d7481:{NFSU2_TR(0x5d7481);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d7484:{NFSU2_TR(0x5d7484);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7478u);}goto L5d7478;}}
}
B5d7486:L5d7486:{c.instructions+=1;NFSU2_TR(0x5d7486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7489:L5d7489:{c.instructions+=3;NFSU2_TR(0x5d7489);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d748d:{NFSU2_TR(0x5d748d);
u8 U[16];
w4(U+0,u32(u32(u32(0x641cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d7494:{NFSU2_TR(0x5d7494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d74a0:L5d74a0:{c.instructions+=63;NFSU2_TR(0x5d74a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d74a1:{NFSU2_TR(0x5d74a1);
__builtin_memmove((R+20),(R+16),4);
}
B5d74a3:{NFSU2_TR(0x5d74a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d74a6:{NFSU2_TR(0x5d74a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B5d74a9:{NFSU2_TR(0x5d74a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d74ac:{NFSU2_TR(0x5d74ac);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74af:{NFSU2_TR(0x5d74af);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74b2:{NFSU2_TR(0x5d74b2);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74b5:{NFSU2_TR(0x5d74b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d74b8:{NFSU2_TR(0x5d74b8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d74bc:{NFSU2_TR(0x5d74bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d74be:{NFSU2_TR(0x5d74be);
{u32 ea_=u32(u32(8973040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d74c4:{NFSU2_TR(0x5d74c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d74c8:{NFSU2_TR(0x5d74c8);
{u32 ea_=u32(u32(8973044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d74ce:{NFSU2_TR(0x5d74ce);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74d2:{NFSU2_TR(0x5d74d2);
{u32 ea_=u32(u32(8973048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d74d8:{NFSU2_TR(0x5d74d8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d74da:{NFSU2_TR(0x5d74da);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d74dc:{NFSU2_TR(0x5d74dc);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d74de:{NFSU2_TR(0x5d74de);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d74e0:{NFSU2_TR(0x5d74e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d74e2:{NFSU2_TR(0x5d74e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74e6:{NFSU2_TR(0x5d74e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d74ea:{NFSU2_TR(0x5d74ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d74ec:{NFSU2_TR(0x5d74ec);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d74ee:{NFSU2_TR(0x5d74ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d74f0:{NFSU2_TR(0x5d74f0);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74f3:{NFSU2_TR(0x5d74f3);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74f6:{NFSU2_TR(0x5d74f6);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d74f9:{NFSU2_TR(0x5d74f9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d74fd:{NFSU2_TR(0x5d74fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7501:{NFSU2_TR(0x5d7501);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d7503:{NFSU2_TR(0x5d7503);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7507:{NFSU2_TR(0x5d7507);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d750b:{NFSU2_TR(0x5d750b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d750f:{NFSU2_TR(0x5d750f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7513:{NFSU2_TR(0x5d7513);
{u32 ea_=u32(u32(8973040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7519:{NFSU2_TR(0x5d7519);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d751d:{NFSU2_TR(0x5d751d);
{u32 ea_=u32(u32(8973044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7523:{NFSU2_TR(0x5d7523);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7527:{NFSU2_TR(0x5d7527);
{u32 ea_=u32(u32(8973048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d752d:{NFSU2_TR(0x5d752d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7531:{NFSU2_TR(0x5d7531);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d7533:{NFSU2_TR(0x5d7533);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7537:{NFSU2_TR(0x5d7537);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d753b:{NFSU2_TR(0x5d753b);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5d753d:{NFSU2_TR(0x5d753d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d753f:{NFSU2_TR(0x5d753f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7541:{NFSU2_TR(0x5d7541);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d7543:{NFSU2_TR(0x5d7543);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7545:{NFSU2_TR(0x5d7545);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d7547:{NFSU2_TR(0x5d7547);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7549:{NFSU2_TR(0x5d7549);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d754d:{NFSU2_TR(0x5d754d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7551:{NFSU2_TR(0x5d7551);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7553:{NFSU2_TR(0x5d7553);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d7555:{NFSU2_TR(0x5d7555);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d7557:{NFSU2_TR(0x5d7557);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d7559:{NFSU2_TR(0x5d7559);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d755b:{NFSU2_TR(0x5d755b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d755d:{NFSU2_TR(0x5d755d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d755f:{NFSU2_TR(0x5d755f);
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
B5d7562:{NFSU2_TR(0x5d7562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d756d;}}
}
B5d7564:L5d7564:{c.instructions+=4;NFSU2_TR(0x5d7564);
w4(R+0,u32(0x1ull));
}
B5d7569:{NFSU2_TR(0x5d7569);
__builtin_memmove((R+16),(R+20),4);
}
B5d756b:{NFSU2_TR(0x5d756b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d756c:{NFSU2_TR(0x5d756c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d756d:L5d756d:{c.instructions+=4;NFSU2_TR(0x5d756d);
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
B5d756f:{NFSU2_TR(0x5d756f);
__builtin_memmove((R+16),(R+20),4);
}
B5d7571:{NFSU2_TR(0x5d7571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7572:{NFSU2_TR(0x5d7572);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7580:L5d7580:{c.instructions+=11;NFSU2_TR(0x5d7580);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7584:{NFSU2_TR(0x5d7584);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7585:{NFSU2_TR(0x5d7585);
__builtin_memmove((R+12),(R+4),4);
}
B5d7587:{NFSU2_TR(0x5d7587);
{u32 ea_=u32(r4(R+12)+u32(940u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d758d:{NFSU2_TR(0x5d758d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d758e:{NFSU2_TR(0x5d758e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d758f:{NFSU2_TR(0x5d758f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7590:{NFSU2_TR(0x5d7590);
{u32 ea_=u32(r4(R+12)+u32(940u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7596:{NFSU2_TR(0x5d7596);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d7598:{NFSU2_TR(0x5d7598);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d759e:{NFSU2_TR(0x5d759e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d75a1:L5d75a1:{c.instructions+=2;NFSU2_TR(0x5d75a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d75a5:{NFSU2_TR(0x5d75a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d75cd;}}
}
B5d75a7:L5d75a7:{c.instructions+=6;NFSU2_TR(0x5d75a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d75a9:{NFSU2_TR(0x5d75a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d75ac:{NFSU2_TR(0x5d75ac);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d75ad:{NFSU2_TR(0x5d75ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d75b0:{NFSU2_TR(0x5d75b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d75b2:{NFSU2_TR(0x5d75b2);
if(r1(R+518)){{goto L5d75c6;}}
}
B5d75b4:L5d75b4:{c.instructions+=2;NFSU2_TR(0x5d75b4);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d75b7:{NFSU2_TR(0x5d75b7);
if(r1(R+518)){{goto L5d75c6;}}
}
B5d75b9:L5d75b9:{c.instructions+=2;NFSU2_TR(0x5d75b9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d75ba:{NFSU2_TR(0x5d75ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d75cd;}}
}
B5d75bc:L5d75bc:{c.instructions+=3;NFSU2_TR(0x5d75bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d75bd:{NFSU2_TR(0x5d75bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d75be:{NFSU2_TR(0x5d75be);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d75c1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5d75c1:L5d75c1:{c.instructions+=2;NFSU2_TR(0x5d75c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d75c4:{NFSU2_TR(0x5d75c4);
{goto L5d75cd;}
}
B5d75c6:L5d75c6:{c.instructions+=1;NFSU2_TR(0x5d75c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d75cd:L5d75cd:{c.instructions+=5;NFSU2_TR(0x5d75cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d75ce:{NFSU2_TR(0x5d75ce);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x58ull))));
}
B5d75d1:{NFSU2_TR(0x5d75d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5d75d4:{NFSU2_TR(0x5d75d4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5d75d7:{NFSU2_TR(0x5d75d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d75a1u);}goto L5d75a1;}}
}
B5d75d9:L5d75d9:{c.instructions+=5;NFSU2_TR(0x5d75d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d75da:{NFSU2_TR(0x5d75da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d75db:{NFSU2_TR(0x5d75db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d75dc:{NFSU2_TR(0x5d75dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d75dd:{NFSU2_TR(0x5d75dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d75e0:L5d75e0:{c.instructions+=8;NFSU2_TR(0x5d75e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d75e4:{NFSU2_TR(0x5d75e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d75e6:{NFSU2_TR(0x5d75e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d75ea:{NFSU2_TR(0x5d75ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d75eb:{NFSU2_TR(0x5d75eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d75ec:{NFSU2_TR(0x5d75ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d75ed:{NFSU2_TR(0x5d75ed);
__builtin_memmove((R+12),(R+4),4);
}
B5d75ef:{NFSU2_TR(0x5d75ef);
if(r1(R+518)){{goto L5d7619;}}
}
B5d75f1:L5d75f1:{c.instructions+=3;NFSU2_TR(0x5d75f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d75f5:{NFSU2_TR(0x5d75f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d75f7:{NFSU2_TR(0x5d75f7);
if(r1(R+518)){{goto L5d7609;}}
}
B5d75f9:L5d75f9:{c.instructions+=4;NFSU2_TR(0x5d75f9);
__builtin_memmove((R+0),(R+8),4);
}
B5d75fb:{NFSU2_TR(0x5d75fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d75fe:{NFSU2_TR(0x5d75fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5d7602:{NFSU2_TR(0x5d7602);
w4(R+4,u32(0x16ull));
}
B5d7607:L5d7607:{c.instructions+=1;NFSU2_TR(0x5d7607);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d7609;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7607u);}goto L5d7607;}
}
B5d7609:L5d7609:{c.instructions+=2;NFSU2_TR(0x5d7609);
u8 U[16];
w4(U+0,u32(u32(u32(0x388ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5d7614:{NFSU2_TR(0x5d7614);
{goto L5d76a8;}
}
B5d7619:L5d7619:{c.instructions+=4;NFSU2_TR(0x5d7619);
u8 U[16];
w4(U+0,u32(u32(u32(0x388ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5d7620:{NFSU2_TR(0x5d7620);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(904u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d7627:{NFSU2_TR(0x5d7627);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d7629:{NFSU2_TR(0x5d7629);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d7631;}}
}
B5d762b:L5d762b:{c.instructions+=1;NFSU2_TR(0x5d762b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d7631:L5d7631:{c.instructions+=5;NFSU2_TR(0x5d7631);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d7632:{NFSU2_TR(0x5d7632);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d7634:{NFSU2_TR(0x5d7634);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7638:{NFSU2_TR(0x5d7638);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d763c:{NFSU2_TR(0x5d763c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d7644;}}
}
B5d763e:L5d763e:{c.instructions+=1;NFSU2_TR(0x5d763e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d7644:L5d7644:{c.instructions+=36;NFSU2_TR(0x5d7644);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d7646:{NFSU2_TR(0x5d7646);
__builtin_memmove((R+4),(R+8),4);
}
B5d7648:{NFSU2_TR(0x5d7648);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d764e:{NFSU2_TR(0x5d764e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d7651:{NFSU2_TR(0x5d7651);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5d7653:{NFSU2_TR(0x5d7653);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7655:{NFSU2_TR(0x5d7655);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d7658:{NFSU2_TR(0x5d7658);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d765c:{NFSU2_TR(0x5d765c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d765e:{NFSU2_TR(0x5d765e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7660:{NFSU2_TR(0x5d7660);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7663:{NFSU2_TR(0x5d7663);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7665:{NFSU2_TR(0x5d7665);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7668:{NFSU2_TR(0x5d7668);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d766a:{NFSU2_TR(0x5d766a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d766d:{NFSU2_TR(0x5d766d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d766f:{NFSU2_TR(0x5d766f);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7672:{NFSU2_TR(0x5d7672);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7674:{NFSU2_TR(0x5d7674);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7677:{NFSU2_TR(0x5d7677);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7679:{NFSU2_TR(0x5d7679);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d767c:{NFSU2_TR(0x5d767c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d767e:{NFSU2_TR(0x5d767e);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7681:{NFSU2_TR(0x5d7681);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7683:{NFSU2_TR(0x5d7683);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7686:{NFSU2_TR(0x5d7686);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d7688:{NFSU2_TR(0x5d7688);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d768b:{NFSU2_TR(0x5d768b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d768d:{NFSU2_TR(0x5d768d);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7690:{NFSU2_TR(0x5d7690);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7692:{NFSU2_TR(0x5d7692);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7695:{NFSU2_TR(0x5d7695);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7698:{NFSU2_TR(0x5d7698);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d769a:{NFSU2_TR(0x5d769a);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d76a0:{NFSU2_TR(0x5d76a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d76a2:{NFSU2_TR(0x5d76a2);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d76a8:L5d76a8:{c.instructions+=5;NFSU2_TR(0x5d76a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d76ab:{NFSU2_TR(0x5d76ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d76ae:{NFSU2_TR(0x5d76ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x6ull))));
}
B5d76b2:{NFSU2_TR(0x5d76b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d76b9:{NFSU2_TR(0x5d76b9);
if(r1(R+512)){{goto L5d76c2;}}
}
B5d76bb:L5d76bb:{c.instructions+=1;NFSU2_TR(0x5d76bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d76c2:L5d76c2:{c.instructions+=6;NFSU2_TR(0x5d76c2);
__builtin_memmove((R+4),(R+8),4);
}
B5d76c4:{NFSU2_TR(0x5d76c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d76c7:{NFSU2_TR(0x5d76c7);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5d76ce:{NFSU2_TR(0x5d76ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d76d0:{NFSU2_TR(0x5d76d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5d76d3:{NFSU2_TR(0x5d76d3);
if(r1(R+518)){{goto L5d76e4;}}
}
B5d76d5:L5d76d5:{c.instructions+=2;NFSU2_TR(0x5d76d5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d76d9:{NFSU2_TR(0x5d76d9);
if(r1(R+518)){{goto L5d76e4;}}
}
B5d76db:L5d76db:{c.instructions+=3;NFSU2_TR(0x5d76db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d76dc:{NFSU2_TR(0x5d76dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d76dd:{NFSU2_TR(0x5d76dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d76dfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d76df:L5d76df:{c.instructions+=2;NFSU2_TR(0x5d76df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d76e2:{NFSU2_TR(0x5d76e2);
{goto L5d76eb;}
}
B5d76e4:L5d76e4:{c.instructions+=2;NFSU2_TR(0x5d76e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d76e8:{NFSU2_TR(0x5d76e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d76eb:L5d76eb:{c.instructions+=2;NFSU2_TR(0x5d76eb);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d76ef:{NFSU2_TR(0x5d76ef);
if(r1(R+518)){{goto L5d770b;}}
}
B5d76f1:L5d76f1:{c.instructions+=5;NFSU2_TR(0x5d76f1);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d76f7:{NFSU2_TR(0x5d76f7);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d76fd:{NFSU2_TR(0x5d76fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d76ff:{NFSU2_TR(0x5d76ff);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7702:{NFSU2_TR(0x5d7702);
if(r1(R+514)){{goto L5d770b;}}
}
B5d7704:L5d7704:{c.instructions+=1;NFSU2_TR(0x5d7704);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d770b:L5d770b:{c.instructions+=4;NFSU2_TR(0x5d770b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d770c:{NFSU2_TR(0x5d770c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d770d:{NFSU2_TR(0x5d770d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d770e:{NFSU2_TR(0x5d770e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7720:L5d7720:{c.instructions+=9;NFSU2_TR(0x5d7720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7721:{NFSU2_TR(0x5d7721);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7722:{NFSU2_TR(0x5d7722);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7723:{NFSU2_TR(0x5d7723);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d7727:{NFSU2_TR(0x5d7727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d772a:{NFSU2_TR(0x5d772a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d772c:{NFSU2_TR(0x5d772c);
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
B5d772e:{NFSU2_TR(0x5d772e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7732:{NFSU2_TR(0x5d7732);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d7766;}}
}
B5d7734:L5d7734:{c.instructions+=5;NFSU2_TR(0x5d7734);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7735:{NFSU2_TR(0x5d7735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7736:{NFSU2_TR(0x5d7736);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7739:{NFSU2_TR(0x5d7739);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d773c:{NFSU2_TR(0x5d773c);
__builtin_memmove((R+16),(R+16),4);
}
B5d7740:L5d7740:{c.instructions+=8;NFSU2_TR(0x5d7740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7746:{NFSU2_TR(0x5d7746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d7748:{NFSU2_TR(0x5d7748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7749:{NFSU2_TR(0x5d7749);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d774b:{NFSU2_TR(0x5d774b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d774c:{NFSU2_TR(0x5d774c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d774d:{NFSU2_TR(0x5d774d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7751:{NFSU2_TR(0x5d7751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7756ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d75e0u);}goto L5d75e0;}
}
B5d7756:L5d7756:{c.instructions+=6;NFSU2_TR(0x5d7756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7759:{NFSU2_TR(0x5d7759);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5d775a:{NFSU2_TR(0x5d775a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x58ull))));
}
B5d775d:{NFSU2_TR(0x5d775d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d7760:{NFSU2_TR(0x5d7760);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d7762:{NFSU2_TR(0x5d7762);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7740u);}goto L5d7740;}}
}
B5d7764:L5d7764:{c.instructions+=2;NFSU2_TR(0x5d7764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7765:{NFSU2_TR(0x5d7765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7766:L5d7766:{c.instructions+=4;NFSU2_TR(0x5d7766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7767:{NFSU2_TR(0x5d7767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7768:{NFSU2_TR(0x5d7768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7769:{NFSU2_TR(0x5d7769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7770:L5d7770:{c.instructions+=15;NFSU2_TR(0x5d7770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7771:{NFSU2_TR(0x5d7771);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7777:{NFSU2_TR(0x5d7777);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7778:{NFSU2_TR(0x5d7778);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d777c:{NFSU2_TR(0x5d777c);
{u32 ea_=u32(u32(8392392u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7782:{NFSU2_TR(0x5d7782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7784:{NFSU2_TR(0x5d7784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7787:{NFSU2_TR(0x5d7787);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d7789:{NFSU2_TR(0x5d7789);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d778d:{NFSU2_TR(0x5d778d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d7790:{NFSU2_TR(0x5d7790);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5d7793:{NFSU2_TR(0x5d7793);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5d779a:{NFSU2_TR(0x5d779a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d779d:{NFSU2_TR(0x5d779d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d77a0:{NFSU2_TR(0x5d77a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d77a5ull));
TAIL_STATIC(0x5925b0u,592);
}
B5d77a5:L5d77a5:{c.instructions+=4;NFSU2_TR(0x5d77a5);
{u32 ea_=u32(u32(8392392u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d77ab:{NFSU2_TR(0x5d77ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d77ad:{NFSU2_TR(0x5d77ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d77b0:{NFSU2_TR(0x5d77b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d77be;}}
}
B5d77b2:L5d77b2:{c.instructions+=3;NFSU2_TR(0x5d77b2);
{u32 ea_=u32(u32(8392392u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d77b8:{NFSU2_TR(0x5d77b8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d77bc:{NFSU2_TR(0x5d77bc);
{goto L5d77c6;}
}
B5d77be:L5d77be:{c.instructions+=2;NFSU2_TR(0x5d77be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d77c0:{NFSU2_TR(0x5d77c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d77c6:L5d77c6:{c.instructions+=8;NFSU2_TR(0x5d77c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d77ca:{NFSU2_TR(0x5d77ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d77cd:{NFSU2_TR(0x5d77cd);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x58ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d77d0:{NFSU2_TR(0x5d77d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5d77d8:{NFSU2_TR(0x5d77d8);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d77df:{NFSU2_TR(0x5d77df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d77e0:{NFSU2_TR(0x5d77e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d77e1:{NFSU2_TR(0x5d77e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d77f0:L5d77f0:{c.instructions+=20;NFSU2_TR(0x5d77f0);
w1(R+512,u8((r4(R+16))<(u32(0x38ull))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B5d77f3:{NFSU2_TR(0x5d77f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d77f4:{NFSU2_TR(0x5d77f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d77f8:{NFSU2_TR(0x5d77f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d77f9:{NFSU2_TR(0x5d77f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d77fd:{NFSU2_TR(0x5d77fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d77fe:{NFSU2_TR(0x5d77fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d77ff:{NFSU2_TR(0x5d77ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d7802:{NFSU2_TR(0x5d7802);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7806:{NFSU2_TR(0x5d7806);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5d780e:{NFSU2_TR(0x5d780e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7811:{NFSU2_TR(0x5d7811);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d7814:{NFSU2_TR(0x5d7814);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7815:{NFSU2_TR(0x5d7815);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d7819:{NFSU2_TR(0x5d7819);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d781a:{NFSU2_TR(0x5d781a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d781b:{NFSU2_TR(0x5d781b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d781c:{NFSU2_TR(0x5d781c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7824:{NFSU2_TR(0x5d7824);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d782c:{NFSU2_TR(0x5d782c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7831ull));
TAIL_STATIC(0x5f0c50u,5f0);
}
B5d7831:L5d7831:{c.instructions+=20;NFSU2_TR(0x5d7831);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5d7834:{NFSU2_TR(0x5d7834);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5d7837:{NFSU2_TR(0x5d7837);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ea14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d783d:{NFSU2_TR(0x5d783d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d7840:{NFSU2_TR(0x5d7840);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7842:{NFSU2_TR(0x5d7842);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d784a:{NFSU2_TR(0x5d784a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7852:{NFSU2_TR(0x5d7852);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d785a:{NFSU2_TR(0x5d785a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7862:{NFSU2_TR(0x5d7862);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d786a:{NFSU2_TR(0x5d786a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7872:{NFSU2_TR(0x5d7872);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d787a:{NFSU2_TR(0x5d787a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7882:{NFSU2_TR(0x5d7882);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d788a:{NFSU2_TR(0x5d788a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7892:{NFSU2_TR(0x5d7892);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d789a:{NFSU2_TR(0x5d789a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d78a2:{NFSU2_TR(0x5d78a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d78aa:{NFSU2_TR(0x5d78aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d78b2:{NFSU2_TR(0x5d78b2);
if(r1(R+518)){{goto L5d792c;}}
}
B5d78b4:L5d78b4:{c.instructions+=9;NFSU2_TR(0x5d78b4);
__builtin_memmove((R+0),gp(0x7a47f4),4);
}
B5d78b9:{NFSU2_TR(0x5d78b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d78bd:{NFSU2_TR(0x5d78bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d78c1:{NFSU2_TR(0x5d78c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78c2:{NFSU2_TR(0x5d78c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78c3:{NFSU2_TR(0x5d78c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ea08ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d78c9:{NFSU2_TR(0x5d78c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78ca:{NFSU2_TR(0x5d78ca);
__builtin_memmove((R+4),(R+24),4);
}
B5d78cc:{NFSU2_TR(0x5d78cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d78d1ull));
TAIL_STATIC(0x5fa660u,5fa);
}
B5d78d1:L5d78d1:{c.instructions+=3;NFSU2_TR(0x5d78d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78d3:{NFSU2_TR(0x5d78d3);
__builtin_memmove((R+4),(R+24),4);
}
B5d78d5:{NFSU2_TR(0x5d78d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d78daull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d78da:L5d78da:{c.instructions+=4;NFSU2_TR(0x5d78da);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d78de:{NFSU2_TR(0x5d78de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78e0:{NFSU2_TR(0x5d78e0);
__builtin_memmove((R+4),(R+24),4);
}
B5d78e2:{NFSU2_TR(0x5d78e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d78e7ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d78e7:L5d78e7:{c.instructions+=4;NFSU2_TR(0x5d78e7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d78eb:{NFSU2_TR(0x5d78eb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78ed:{NFSU2_TR(0x5d78ed);
__builtin_memmove((R+4),(R+24),4);
}
B5d78ef:{NFSU2_TR(0x5d78ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d78f4ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d78f4:L5d78f4:{c.instructions+=4;NFSU2_TR(0x5d78f4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d78f8:{NFSU2_TR(0x5d78f8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d78fa:{NFSU2_TR(0x5d78fa);
__builtin_memmove((R+4),(R+24),4);
}
B5d78fc:{NFSU2_TR(0x5d78fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7901ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d7901:L5d7901:{c.instructions+=4;NFSU2_TR(0x5d7901);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7905:{NFSU2_TR(0x5d7905);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7907:{NFSU2_TR(0x5d7907);
__builtin_memmove((R+4),(R+24),4);
}
B5d7909:{NFSU2_TR(0x5d7909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d790eull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d790e:L5d790e:{c.instructions+=4;NFSU2_TR(0x5d790e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7912:{NFSU2_TR(0x5d7912);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7914:{NFSU2_TR(0x5d7914);
__builtin_memmove((R+4),(R+24),4);
}
B5d7916:{NFSU2_TR(0x5d7916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d791bull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d791b:L5d791b:{c.instructions+=4;NFSU2_TR(0x5d791b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d791f:{NFSU2_TR(0x5d791f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7921:{NFSU2_TR(0x5d7921);
__builtin_memmove((R+4),(R+24),4);
}
B5d7923:{NFSU2_TR(0x5d7923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7928ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d7928:L5d7928:{c.instructions+=1;NFSU2_TR(0x5d7928);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d792c:L5d792c:{c.instructions+=3;NFSU2_TR(0x5d792c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88f21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7932:{NFSU2_TR(0x5d7932);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7934:{NFSU2_TR(0x5d7934);
if(r1(R+518)){{goto L5d79ae;}}
}
B5d7936:L5d7936:{c.instructions+=9;NFSU2_TR(0x5d7936);
__builtin_memmove((R+0),gp(0x7a47f4),4);
}
B5d793b:{NFSU2_TR(0x5d793b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d793f:{NFSU2_TR(0x5d793f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7943:{NFSU2_TR(0x5d7943);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7944:{NFSU2_TR(0x5d7944);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7945:{NFSU2_TR(0x5d7945);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88f210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d794b:{NFSU2_TR(0x5d794b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d794c:{NFSU2_TR(0x5d794c);
__builtin_memmove((R+4),(R+24),4);
}
B5d794e:{NFSU2_TR(0x5d794e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7953ull));
TAIL_STATIC(0x5fa660u,5fa);
}
B5d7953:L5d7953:{c.instructions+=3;NFSU2_TR(0x5d7953);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7955:{NFSU2_TR(0x5d7955);
__builtin_memmove((R+4),(R+24),4);
}
B5d7957:{NFSU2_TR(0x5d7957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d795cull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d795c:L5d795c:{c.instructions+=4;NFSU2_TR(0x5d795c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7960:{NFSU2_TR(0x5d7960);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7962:{NFSU2_TR(0x5d7962);
__builtin_memmove((R+4),(R+24),4);
}
B5d7964:{NFSU2_TR(0x5d7964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7969ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d7969:L5d7969:{c.instructions+=4;NFSU2_TR(0x5d7969);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d796d:{NFSU2_TR(0x5d796d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d796f:{NFSU2_TR(0x5d796f);
__builtin_memmove((R+4),(R+24),4);
}
B5d7971:{NFSU2_TR(0x5d7971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7976ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d7976:L5d7976:{c.instructions+=4;NFSU2_TR(0x5d7976);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d797a:{NFSU2_TR(0x5d797a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d797c:{NFSU2_TR(0x5d797c);
__builtin_memmove((R+4),(R+24),4);
}
B5d797e:{NFSU2_TR(0x5d797e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7983ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d7983:L5d7983:{c.instructions+=4;NFSU2_TR(0x5d7983);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7987:{NFSU2_TR(0x5d7987);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7989:{NFSU2_TR(0x5d7989);
__builtin_memmove((R+4),(R+24),4);
}
B5d798b:{NFSU2_TR(0x5d798b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7990ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d7990:L5d7990:{c.instructions+=4;NFSU2_TR(0x5d7990);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7994:{NFSU2_TR(0x5d7994);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7996:{NFSU2_TR(0x5d7996);
__builtin_memmove((R+4),(R+24),4);
}
B5d7998:{NFSU2_TR(0x5d7998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d799dull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d799d:L5d799d:{c.instructions+=4;NFSU2_TR(0x5d799d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d79a1:{NFSU2_TR(0x5d79a1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d79a3:{NFSU2_TR(0x5d79a3);
__builtin_memmove((R+4),(R+24),4);
}
B5d79a5:{NFSU2_TR(0x5d79a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d79aaull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B5d79aa:L5d79aa:{c.instructions+=1;NFSU2_TR(0x5d79aa);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d79ae:L5d79ae:{c.instructions+=1;NFSU2_TR(0x5d79ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d79b3ull));
TAIL_STATIC(0x60fa80u,60f);
}
B5d79b3:L5d79b3:{c.instructions+=52;NFSU2_TR(0x5d79b3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d79b9:{NFSU2_TR(0x5d79b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B5d79bc:{NFSU2_TR(0x5d79bc);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5d79be:{NFSU2_TR(0x5d79be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d79c2:{NFSU2_TR(0x5d79c2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d79c4:{NFSU2_TR(0x5d79c4);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d79c6:{NFSU2_TR(0x5d79c6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d79ca:{NFSU2_TR(0x5d79ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d79cd:{NFSU2_TR(0x5d79cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d79cf:{NFSU2_TR(0x5d79cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d79d0:{NFSU2_TR(0x5d79d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d79d1:{NFSU2_TR(0x5d79d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d79d2:{NFSU2_TR(0x5d79d2);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d79d8:{NFSU2_TR(0x5d79d8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d79dc:{NFSU2_TR(0x5d79dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d79e3:{NFSU2_TR(0x5d79e3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d79e5:{NFSU2_TR(0x5d79e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d79e6:{NFSU2_TR(0x5d79e6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d79e8:{NFSU2_TR(0x5d79e8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d79ec:{NFSU2_TR(0x5d79ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d79ee:{NFSU2_TR(0x5d79ee);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d79f1:{NFSU2_TR(0x5d79f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d79f5:{NFSU2_TR(0x5d79f5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d79f7:{NFSU2_TR(0x5d79f7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d79f9:{NFSU2_TR(0x5d79f9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d79fd:{NFSU2_TR(0x5d79fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d79ff:{NFSU2_TR(0x5d79ff);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7a02:{NFSU2_TR(0x5d7a02);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7a06:{NFSU2_TR(0x5d7a06);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d7a08:{NFSU2_TR(0x5d7a08);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7a0a:{NFSU2_TR(0x5d7a0a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7a0e:{NFSU2_TR(0x5d7a0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7a10:{NFSU2_TR(0x5d7a10);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7a13:{NFSU2_TR(0x5d7a13);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7a17:{NFSU2_TR(0x5d7a17);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d7a19:{NFSU2_TR(0x5d7a19);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7a1b:{NFSU2_TR(0x5d7a1b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7a1f:{NFSU2_TR(0x5d7a1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7a21:{NFSU2_TR(0x5d7a21);
{u32 ea_=u32(r4(R+0)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7a27:{NFSU2_TR(0x5d7a27);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7a2b:{NFSU2_TR(0x5d7a2b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d7a2d:{NFSU2_TR(0x5d7a2d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d7a2f:{NFSU2_TR(0x5d7a2f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7a33:{NFSU2_TR(0x5d7a33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7a35:{NFSU2_TR(0x5d7a35);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7a3b:{NFSU2_TR(0x5d7a3b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7a3f:{NFSU2_TR(0x5d7a3f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d7a41:{NFSU2_TR(0x5d7a41);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7a45:{NFSU2_TR(0x5d7a45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7a47:{NFSU2_TR(0x5d7a47);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7a4d:{NFSU2_TR(0x5d7a4d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7a50:{NFSU2_TR(0x5d7a50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7a60:L5d7a60:{c.instructions+=13;NFSU2_TR(0x5d7a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7a64:{NFSU2_TR(0x5d7a64);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7a68:{NFSU2_TR(0x5d7a68);
__builtin_memmove((R+0),(R+4),4);
}
B5d7a6a:{NFSU2_TR(0x5d7a6a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d7a6d:{NFSU2_TR(0x5d7a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d7a70:{NFSU2_TR(0x5d7a70);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d7a72:{NFSU2_TR(0x5d7a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d7a75:{NFSU2_TR(0x5d7a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7a78:{NFSU2_TR(0x5d7a78);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7a7b:{NFSU2_TR(0x5d7a7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7a7c:{NFSU2_TR(0x5d7a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d7a82:{NFSU2_TR(0x5d7a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7a89:{NFSU2_TR(0x5d7a89);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d7ac4;}}
}
B5d7a8b:L5d7a8b:{c.instructions+=14;NFSU2_TR(0x5d7a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d7a8e:{NFSU2_TR(0x5d7a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d7a91:{NFSU2_TR(0x5d7a91);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5d7a94:{NFSU2_TR(0x5d7a94);
{u32 ea_=u32(r4(R+4)+u32(8392276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7a9a:{NFSU2_TR(0x5d7a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7a9b:{NFSU2_TR(0x5d7a9b);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7aa1:{NFSU2_TR(0x5d7aa1);
{u32 ea_=u32(r4(R+4)+u32(8392348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7aa7:{NFSU2_TR(0x5d7aa7);
{u32 ea_=u32(r4(R+4)+u32(8392324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7aad:{NFSU2_TR(0x5d7aad);
{u32 ea_=u32(r4(R+4)+u32(8392300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7ab3:{NFSU2_TR(0x5d7ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7aba:{NFSU2_TR(0x5d7aba);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7abd:{NFSU2_TR(0x5d7abd);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7ac0:{NFSU2_TR(0x5d7ac0);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7ac3:{NFSU2_TR(0x5d7ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7ac4:L5d7ac4:{c.instructions+=5;NFSU2_TR(0x5d7ac4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7ac6:{NFSU2_TR(0x5d7ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7acc:{NFSU2_TR(0x5d7acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7acf:{NFSU2_TR(0x5d7acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7ad0:{NFSU2_TR(0x5d7ad0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7ae0:L5d7ae0:{c.instructions+=2;NFSU2_TR(0x5d7ae0);
s4(0x883e34,u32(0x1ull));
}
B5d7aea:{NFSU2_TR(0x5d7aea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7af0:L5d7af0:{c.instructions+=5;NFSU2_TR(0x5d7af0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7af2:{NFSU2_TR(0x5d7af2);
u8 U[4];
w4(U+0,u32(0x7a5204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7af7:{NFSU2_TR(0x5d7af7);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7af9:{NFSU2_TR(0x5d7af9);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7afb:{NFSU2_TR(0x5d7afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7b00ull));
TAIL_STATIC(0x440df0u,440);
}
B5d7b00:L5d7b00:{c.instructions+=6;NFSU2_TR(0x5d7b00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b02:{NFSU2_TR(0x5d7b02);
u8 U[4];
w4(U+0,u32(0x7a51ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b07:{NFSU2_TR(0x5d7b07);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b09:{NFSU2_TR(0x5d7b09);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b0b:{NFSU2_TR(0x5d7b0b);
__builtin_memmove(gp(0x883e38),(R+0),4);
}
B5d7b10:{NFSU2_TR(0x5d7b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7b15ull));
TAIL_STATIC(0x440df0u,440);
}
B5d7b15:L5d7b15:{c.instructions+=3;NFSU2_TR(0x5d7b15);
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
B5d7b18:{NFSU2_TR(0x5d7b18);
__builtin_memmove(gp(0x883e3c),(R+0),4);
}
B5d7b1d:{NFSU2_TR(0x5d7b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7b20:L5d7b20:{c.instructions+=3;NFSU2_TR(0x5d7b20);
__builtin_memmove((R+0),gp(0x8650a4),4);
}
B5d7b25:{NFSU2_TR(0x5d7b25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7b27:{NFSU2_TR(0x5d7b27);
if(r1(R+518)){{goto L5d7b45;}}
}
B5d7b29:L5d7b29:{c.instructions+=3;NFSU2_TR(0x5d7b29);
__builtin_memmove((R+4),gp(0x883e48),4);
}
B5d7b2f:{NFSU2_TR(0x5d7b2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7b31:{NFSU2_TR(0x5d7b31);
if(r1(R+518)){{goto L5d7b45;}}
}
B5d7b33:L5d7b33:{c.instructions+=3;NFSU2_TR(0x5d7b33);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7b37:{NFSU2_TR(0x5d7b37);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2000ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5d7b3d:{NFSU2_TR(0x5d7b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d7b45;}}
}
B5d7b3f:L5d7b3f:{c.instructions+=3;NFSU2_TR(0x5d7b3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d7b42:{NFSU2_TR(0x5d7b42);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7b44:{NFSU2_TR(0x5d7b44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7b45:L5d7b45:{c.instructions+=2;NFSU2_TR(0x5d7b45);
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
B5d7b47:{NFSU2_TR(0x5d7b47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7b50:L5d7b50:{c.instructions+=4;NFSU2_TR(0x5d7b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7b54:{NFSU2_TR(0x5d7b54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d7b56:{NFSU2_TR(0x5d7b56);
w4(R+4,u32(0x800ee4ull));
}
B5d7b5b:{NFSU2_TR(0x5d7b5b);
{goto L5d7b60;}
}
B5d7b60:L5d7b60:{c.instructions+=2;NFSU2_TR(0x5d7b60);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5d7b62:{NFSU2_TR(0x5d7b62);
if(r1(R+518)){{goto L5d7b75;}}
}
B5d7b64:L5d7b64:{c.instructions+=4;NFSU2_TR(0x5d7b64);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x98ull))));
}
B5d7b6a:{NFSU2_TR(0x5d7b6a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d7b6b:{NFSU2_TR(0x5d7b6b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80201cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80201cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d7b71:{NFSU2_TR(0x5d7b71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7b60u);}goto L5d7b60;}}
}
B5d7b73:L5d7b73:{c.instructions+=1;NFSU2_TR(0x5d7b73);
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
B5d7b75:L5d7b75:{c.instructions+=1;NFSU2_TR(0x5d7b75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7b80:L5d7b80:{c.instructions+=5;NFSU2_TR(0x5d7b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b81:{NFSU2_TR(0x5d7b81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b82:{NFSU2_TR(0x5d7b82);
__builtin_memmove((R+28),(R+4),4);
}
B5d7b84:{NFSU2_TR(0x5d7b84);
w4(R+24,u32(0x800ee4ull));
}
B5d7b89:{NFSU2_TR(0x5d7b89);
__builtin_memmove((R+16),(R+16),4);
}
B5d7b90:L5d7b90:{c.instructions+=3;NFSU2_TR(0x5d7b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7b93:{NFSU2_TR(0x5d7b93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7b94:{NFSU2_TR(0x5d7b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7b99ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d7b99:L5d7b99:{c.instructions+=5;NFSU2_TR(0x5d7b99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d7b9b:{NFSU2_TR(0x5d7b9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x98ull))));
}
B5d7ba1:{NFSU2_TR(0x5d7ba1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d7ba4:{NFSU2_TR(0x5d7ba4);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x80201cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80201cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80201cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7baa:{NFSU2_TR(0x5d7baa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7b90u);}goto L5d7b90;}}
}
B5d7bac:L5d7bac:{c.instructions+=4;NFSU2_TR(0x5d7bac);
__builtin_memmove((R+0),(R+28),4);
}
B5d7bae:{NFSU2_TR(0x5d7bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7baf:{NFSU2_TR(0x5d7baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7bb0:{NFSU2_TR(0x5d7bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7bc0:L5d7bc0:{c.instructions+=10;NFSU2_TR(0x5d7bc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7bc1:{NFSU2_TR(0x5d7bc1);
__builtin_memmove((R+20),(R+16),4);
}
B5d7bc3:{NFSU2_TR(0x5d7bc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d7bc6:{NFSU2_TR(0x5d7bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B5d7bcc:{NFSU2_TR(0x5d7bcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7bcd:{NFSU2_TR(0x5d7bcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7bce:{NFSU2_TR(0x5d7bce);
__builtin_memmove((R+24),(R+4),4);
}
B5d7bd0:{NFSU2_TR(0x5d7bd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7bd1:{NFSU2_TR(0x5d7bd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7bd5:{NFSU2_TR(0x5d7bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7bdaull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B5d7bda:L5d7bda:{c.instructions+=29;NFSU2_TR(0x5d7bda);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7bdd:{NFSU2_TR(0x5d7bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7be0:{NFSU2_TR(0x5d7be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7be3:{NFSU2_TR(0x5d7be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d7be6:{NFSU2_TR(0x5d7be6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7bea:{NFSU2_TR(0x5d7bea);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7bed:{NFSU2_TR(0x5d7bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7bf1:{NFSU2_TR(0x5d7bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7bf4:{NFSU2_TR(0x5d7bf4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7bf8:{NFSU2_TR(0x5d7bf8);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7bfb:{NFSU2_TR(0x5d7bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7bff:{NFSU2_TR(0x5d7bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7c02:{NFSU2_TR(0x5d7c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7c04:{NFSU2_TR(0x5d7c04);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7c08:{NFSU2_TR(0x5d7c08);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7c0b:{NFSU2_TR(0x5d7c0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c0f:{NFSU2_TR(0x5d7c0f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7c13:{NFSU2_TR(0x5d7c13);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7c16:{NFSU2_TR(0x5d7c16);
w4(R+4,u32(0x1ull));
}
B5d7c1b:{NFSU2_TR(0x5d7c1b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7c1f:{NFSU2_TR(0x5d7c1f);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7c22:{NFSU2_TR(0x5d7c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c26:{NFSU2_TR(0x5d7c26);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7c2a:{NFSU2_TR(0x5d7c2a);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7c2d:{NFSU2_TR(0x5d7c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c31:{NFSU2_TR(0x5d7c31);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7c35:{NFSU2_TR(0x5d7c35);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7c38:{NFSU2_TR(0x5d7c38);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7c3c:{NFSU2_TR(0x5d7c3c);
if(r1(R+518)){{goto L5d7c54;}}
}
B5d7c3e:L5d7c3e:{c.instructions+=5;NFSU2_TR(0x5d7c3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5d7c42:{NFSU2_TR(0x5d7c42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c46:{NFSU2_TR(0x5d7c46);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d7c4c:{NFSU2_TR(0x5d7c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x800f20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7c52:{NFSU2_TR(0x5d7c52);
{goto L5d7c59;}
}
B5d7c54:L5d7c54:{c.instructions+=1;NFSU2_TR(0x5d7c54);
w4(R+0,u32(0xff00f000ull));
}
B5d7c59:L5d7c59:{c.instructions+=9;NFSU2_TR(0x5d7c59);
__builtin_memmove((R+28),gp(0x82da5c),4);
}
B5d7c5f:{NFSU2_TR(0x5d7c5f);
__builtin_memmove((R+8),gp(0x82da60),4);
}
B5d7c65:{NFSU2_TR(0x5d7c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c69:{NFSU2_TR(0x5d7c69);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c6d:{NFSU2_TR(0x5d7c6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c71:{NFSU2_TR(0x5d7c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7c75:{NFSU2_TR(0x5d7c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d7c78:{NFSU2_TR(0x5d7c78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d7c7a:{NFSU2_TR(0x5d7c7a);
if(r1(R+512)){{goto L5d7c93;}}
}
B5d7c7c:L5d7c7c:{c.instructions+=6;NFSU2_TR(0x5d7c7c);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B5d7c81:{NFSU2_TR(0x5d7c81);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5d7c84:{NFSU2_TR(0x5d7c84);
__builtin_memmove(gp(0x82da6c),(R+4),4);
}
B5d7c8a:{NFSU2_TR(0x5d7c8a);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B5d7c8f:{NFSU2_TR(0x5d7c8f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d7c91:{NFSU2_TR(0x5d7c91);
{goto L5d7c98;}
}
B5d7c93:L5d7c93:{c.instructions+=1;NFSU2_TR(0x5d7c93);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B5d7c98:L5d7c98:{c.instructions+=2;NFSU2_TR(0x5d7c98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7c99:{NFSU2_TR(0x5d7c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7c9eull));
TAIL_STATIC(0x43c780u,43c);
}
B5d7c9e:L5d7c9e:{c.instructions+=6;NFSU2_TR(0x5d7c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d7ca1:{NFSU2_TR(0x5d7ca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d7ca4:{NFSU2_TR(0x5d7ca4);
u8 U[4];
w4(U+0,u32(0x3f666666ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7ca9:{NFSU2_TR(0x5d7ca9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7caa:{NFSU2_TR(0x5d7caa);
__builtin_memmove((R+4),(R+12),4);
}
B5d7cac:{NFSU2_TR(0x5d7cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7cb1ull));
TAIL_STATIC(0x48ae30u,48a);
}
B5d7cb1:L5d7cb1:{c.instructions+=5;NFSU2_TR(0x5d7cb1);
__builtin_memmove((R+0),gp(0x802044),4);
}
B5d7cb6:{NFSU2_TR(0x5d7cb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7cb8:{NFSU2_TR(0x5d7cb8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7cbc:{NFSU2_TR(0x5d7cbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x876d50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5d7cc3:{NFSU2_TR(0x5d7cc3);
if(r1(R+518)){{goto L5d7d15;}}
}
B5d7cc5:L5d7cc5:{c.instructions+=3;NFSU2_TR(0x5d7cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7cc8:{NFSU2_TR(0x5d7cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7cca:{NFSU2_TR(0x5d7cca);
if(r1(R+518)){{goto L5d7d15;}}
}
B5d7ccc:L5d7ccc:{c.instructions+=17;NFSU2_TR(0x5d7ccc);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7ccf:{NFSU2_TR(0x5d7ccf);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7cd2:{NFSU2_TR(0x5d7cd2);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7cd5:{NFSU2_TR(0x5d7cd5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7cd8:{NFSU2_TR(0x5d7cd8);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7cdb:{NFSU2_TR(0x5d7cdb);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7cde:{NFSU2_TR(0x5d7cde);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7ce1:{NFSU2_TR(0x5d7ce1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d7ce3:{NFSU2_TR(0x5d7ce3);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7ce6:{NFSU2_TR(0x5d7ce6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7ce8:{NFSU2_TR(0x5d7ce8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d7cea:{NFSU2_TR(0x5d7cea);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7ced:{NFSU2_TR(0x5d7ced);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d7cef:{NFSU2_TR(0x5d7cef);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d7cf5:{NFSU2_TR(0x5d7cf5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d7cf7:{NFSU2_TR(0x5d7cf7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7cfa:{NFSU2_TR(0x5d7cfa);
if(r1(R+514)){{goto L5d7d15;}}
}
B5d7cfc:L5d7cfc:{c.instructions+=9;NFSU2_TR(0x5d7cfc);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5d7d01:{NFSU2_TR(0x5d7d01);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d7d02:{NFSU2_TR(0x5d7d02);
w4(R+24,u32(0xaull));
}
B5d7d07:{NFSU2_TR(0x5d7d07);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d7d07);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d7d07);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d7d09:{NFSU2_TR(0x5d7d09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d7d0b:{NFSU2_TR(0x5d7d0b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d7d0e:{NFSU2_TR(0x5d7d0e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B5d7d11:{NFSU2_TR(0x5d7d11);
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
B5d7d13:{NFSU2_TR(0x5d7d13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7d27;}}
}
B5d7d15:L5d7d15:{c.instructions+=8;NFSU2_TR(0x5d7d15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d17:{NFSU2_TR(0x5d7d17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d19:{NFSU2_TR(0x5d7d19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d1a:{NFSU2_TR(0x5d7d1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d1b:{NFSU2_TR(0x5d7d1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d7d1f:{NFSU2_TR(0x5d7d1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d20:{NFSU2_TR(0x5d7d20);
__builtin_memmove((R+4),(R+12),4);
}
B5d7d22:{NFSU2_TR(0x5d7d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7d27ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B5d7d27:L5d7d27:{c.instructions+=6;NFSU2_TR(0x5d7d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7d28:{NFSU2_TR(0x5d7d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7d29:{NFSU2_TR(0x5d7d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7d2a:{NFSU2_TR(0x5d7d2a);
__builtin_memmove((R+16),(R+20),4);
}
B5d7d2c:{NFSU2_TR(0x5d7d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7d2d:{NFSU2_TR(0x5d7d2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7d30:L5d7d30:{c.instructions+=7;NFSU2_TR(0x5d7d30);
__builtin_memmove((R+4),gp(0x88ea90),4);
}
B5d7d36:{NFSU2_TR(0x5d7d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7d3a:{NFSU2_TR(0x5d7d3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d7d3c:{NFSU2_TR(0x5d7d3c);
__builtin_memmove(gp(0x88ea90),(R+0),4);
}
B5d7d41:{NFSU2_TR(0x5d7d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7d44:{NFSU2_TR(0x5d7d44);
u8 U[4];
w4(U+0,u32(0x88ea8cull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d7d4a:{NFSU2_TR(0x5d7d4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7d50:L5d7d50:{c.instructions+=8;NFSU2_TR(0x5d7d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d51:{NFSU2_TR(0x5d7d51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d52:{NFSU2_TR(0x5d7d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d7d56:{NFSU2_TR(0x5d7d56);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B5d7d59:{NFSU2_TR(0x5d7d59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d5a:{NFSU2_TR(0x5d7d5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5d7d5c:{NFSU2_TR(0x5d7d5c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7d5e:{NFSU2_TR(0x5d7d5e);
if(r1(R+518)){{goto L5d7e68;}}
}
B5d7d64:L5d7d64:{c.instructions+=4;NFSU2_TR(0x5d7d64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d65:{NFSU2_TR(0x5d7d65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d66:{NFSU2_TR(0x5d7d66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d7d6a:{NFSU2_TR(0x5d7d6a);
__builtin_memmove((R+12),(R+12),4);
}
B5d7d70:L5d7d70:{c.instructions+=4;NFSU2_TR(0x5d7d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d7d73:{NFSU2_TR(0x5d7d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7d76:{NFSU2_TR(0x5d7d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7d78:{NFSU2_TR(0x5d7d78);
if(r1(R+518)){{goto L5d7d90;}}
}
B5d7d7a:L5d7d7a:{c.instructions+=5;NFSU2_TR(0x5d7d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7d7d:{NFSU2_TR(0x5d7d7d);
w4(R+8,u32(0x1ull));
}
B5d7d82:{NFSU2_TR(0x5d7d82);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B5d7d84:{NFSU2_TR(0x5d7d84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d7d8a:{NFSU2_TR(0x5d7d8a);
if(r1(R+518)){{goto L5d7e5b;}}
}
B5d7d90:L5d7d90:{c.instructions+=7;NFSU2_TR(0x5d7d90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d92:{NFSU2_TR(0x5d7d92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d7d95:{NFSU2_TR(0x5d7d95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d96:{NFSU2_TR(0x5d7d96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7d99:{NFSU2_TR(0x5d7d99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7d9a:{NFSU2_TR(0x5d7d9a);
__builtin_memmove((R+4),(R+28),4);
}
B5d7d9c:{NFSU2_TR(0x5d7d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7da1ull));
TAIL_STATIC(0x48ac60u,48a);
}
B5d7da1:L5d7da1:{c.instructions+=2;NFSU2_TR(0x5d7da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7da3:{NFSU2_TR(0x5d7da3);
if(r1(R+518)){{goto L5d7e5b;}}
}
B5d7da9:L5d7da9:{c.instructions+=7;NFSU2_TR(0x5d7da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7dac:{NFSU2_TR(0x5d7dac);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7db1:{NFSU2_TR(0x5d7db1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7db4:{NFSU2_TR(0x5d7db4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7db5:{NFSU2_TR(0x5d7db5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d7dbb:{NFSU2_TR(0x5d7dbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7dbc:{NFSU2_TR(0x5d7dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7dc1ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5d7dc1:L5d7dc1:{c.instructions+=4;NFSU2_TR(0x5d7dc1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7dc5:{NFSU2_TR(0x5d7dc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d7dc8:{NFSU2_TR(0x5d7dc8);
__builtin_memmove((R+4),(R+28),4);
}
B5d7dca:{NFSU2_TR(0x5d7dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7dcfull));
TAIL_STATIC(0x48ac70u,48a);
}
B5d7dcf:L5d7dcf:{c.instructions+=7;NFSU2_TR(0x5d7dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7dd3:{NFSU2_TR(0x5d7dd3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d7dd7:{NFSU2_TR(0x5d7dd7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d7ddb:{NFSU2_TR(0x5d7ddb);
{u32 ea_=u32(u32(8013372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d7de1:{NFSU2_TR(0x5d7de1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d7de3:{NFSU2_TR(0x5d7de3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d7de6:{NFSU2_TR(0x5d7de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7e5b;}}
}
B5d7de8:L5d7de8:{c.instructions+=5;NFSU2_TR(0x5d7de8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7dec:{NFSU2_TR(0x5d7dec);
{u32 ea_=u32(u32(8013376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d7df2:{NFSU2_TR(0x5d7df2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d7df4:{NFSU2_TR(0x5d7df4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d7df7:{NFSU2_TR(0x5d7df7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7e00;}}
}
B5d7df9:L5d7df9:{c.instructions+=2;NFSU2_TR(0x5d7df9);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d7dfe:{NFSU2_TR(0x5d7dfe);
{goto L5d7e2d;}
}
B5d7e00:L5d7e00:{c.instructions+=8;NFSU2_TR(0x5d7e00);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7e04:{NFSU2_TR(0x5d7e04);
{u32 ea_=u32(u32(8013372u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7e0a:{NFSU2_TR(0x5d7e0a);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7e10:{NFSU2_TR(0x5d7e10);
{u32 ea_=u32(u32(8013376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7e16:{NFSU2_TR(0x5d7e16);
{u32 ea_=u32(u32(8013372u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7e1c:{NFSU2_TR(0x5d7e1c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d7e1e:{NFSU2_TR(0x5d7e1e);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d7e24:{NFSU2_TR(0x5d7e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7e29ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d7e29:L5d7e29:{c.instructions+=1;NFSU2_TR(0x5d7e29);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d7e2d:L5d7e2d:{c.instructions+=5;NFSU2_TR(0x5d7e2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d7e31:{NFSU2_TR(0x5d7e31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e32:{NFSU2_TR(0x5d7e32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e33:{NFSU2_TR(0x5d7e33);
__builtin_memmove((R+4),(R+24),4);
}
B5d7e35:{NFSU2_TR(0x5d7e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7e3aull));
TAIL_STATIC(0x5d30d0u,5d3);
}
B5d7e3a:L5d7e3a:{c.instructions+=9;NFSU2_TR(0x5d7e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7e3c:{NFSU2_TR(0x5d7e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7e3f:{NFSU2_TR(0x5d7e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d7e41:{NFSU2_TR(0x5d7e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7e44:{NFSU2_TR(0x5d7e44);
__builtin_memmove((R+0),gp(0x88f270),4);
}
B5d7e49:{NFSU2_TR(0x5d7e49);
__builtin_memmove(gp(0x88f270),(R+24),4);
}
B5d7e4f:{NFSU2_TR(0x5d7e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7e52:{NFSU2_TR(0x5d7e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x88f270ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7e59:{NFSU2_TR(0x5d7e59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d7e5b:L5d7e5b:{c.instructions+=3;NFSU2_TR(0x5d7e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5d7e5e:{NFSU2_TR(0x5d7e5e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7e60:{NFSU2_TR(0x5d7e60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7d70u);}goto L5d7d70;}}
}
B5d7e66:L5d7e66:{c.instructions+=2;NFSU2_TR(0x5d7e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7e67:{NFSU2_TR(0x5d7e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7e68:L5d7e68:{c.instructions+=4;NFSU2_TR(0x5d7e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7e69:{NFSU2_TR(0x5d7e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7e6a:{NFSU2_TR(0x5d7e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7e6b:{NFSU2_TR(0x5d7e6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7e70:L5d7e70:{c.instructions+=5;NFSU2_TR(0x5d7e70);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d7e73:{NFSU2_TR(0x5d7e73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e74:{NFSU2_TR(0x5d7e74);
__builtin_memmove((R+24),gp(0x88f1bc),4);
}
B5d7e7a:{NFSU2_TR(0x5d7e7a);
w4(R+4,u32(0x88f1bcull));
}
B5d7e7f:{NFSU2_TR(0x5d7e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7e84ull));
TAIL_STATIC(0x502fd0u,502);
}
B5d7e84:L5d7e84:{c.instructions+=3;NFSU2_TR(0x5d7e84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d7e86:{NFSU2_TR(0x5d7e86);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7e8a:{NFSU2_TR(0x5d7e8a);
if(r1(R+518)){{goto L5d7f0b;}}
}
B5d7e8c:L5d7e8c:{c.instructions+=4;NFSU2_TR(0x5d7e8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e8d:{NFSU2_TR(0x5d7e8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e8e:{NFSU2_TR(0x5d7e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d7e92:{NFSU2_TR(0x5d7e92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e93:L5d7e93:{c.instructions+=8;NFSU2_TR(0x5d7e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7e95:{NFSU2_TR(0x5d7e95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7e98:{NFSU2_TR(0x5d7e98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e99:{NFSU2_TR(0x5d7e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7e9c:{NFSU2_TR(0x5d7e9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7e9d:{NFSU2_TR(0x5d7e9d);
__builtin_memmove((R+4),(R+20),4);
}
B5d7e9f:{NFSU2_TR(0x5d7e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7ea3:{NFSU2_TR(0x5d7ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7ea8ull));
TAIL_STATIC(0x48ad50u,48a);
}
B5d7ea8:L5d7ea8:{c.instructions+=2;NFSU2_TR(0x5d7ea8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d7eab:{NFSU2_TR(0x5d7eab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d7efe;}}
}
B5d7ead:L5d7ead:{c.instructions+=5;NFSU2_TR(0x5d7ead);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7eaf:{NFSU2_TR(0x5d7eaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7eb0:{NFSU2_TR(0x5d7eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7eb1:{NFSU2_TR(0x5d7eb1);
__builtin_memmove((R+4),(R+20),4);
}
B5d7eb3:{NFSU2_TR(0x5d7eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7eb8ull));
TAIL_STATIC(0x48ac60u,48a);
}
B5d7eb8:L5d7eb8:{c.instructions+=2;NFSU2_TR(0x5d7eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d7eba:{NFSU2_TR(0x5d7eba);
if(r1(R+518)){{goto L5d7efe;}}
}
B5d7ebc:L5d7ebc:{c.instructions+=6;NFSU2_TR(0x5d7ebc);
__builtin_memmove((R+0),gp(0x7fb71c),4);
}
B5d7ec1:{NFSU2_TR(0x5d7ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d7ec4:{NFSU2_TR(0x5d7ec4);
__builtin_memmove((R+4),(R+0),4);
}
B5d7ec6:{NFSU2_TR(0x5d7ec6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5d7ec8:{NFSU2_TR(0x5d7ec8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x12cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d7ece:{NFSU2_TR(0x5d7ece);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d7ef4;}}
}
B5d7ed0:L5d7ed0:{c.instructions+=10;NFSU2_TR(0x5d7ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d7ed3:{NFSU2_TR(0x5d7ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7ed6:{NFSU2_TR(0x5d7ed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d7ed8:{NFSU2_TR(0x5d7ed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d7eda:{NFSU2_TR(0x5d7eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7edd:{NFSU2_TR(0x5d7edd);
__builtin_memmove((R+0),gp(0x88f1bc),4);
}
B5d7ee2:{NFSU2_TR(0x5d7ee2);
__builtin_memmove(gp(0x88f1bc),(R+24),4);
}
B5d7ee8:{NFSU2_TR(0x5d7ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7eeb:{NFSU2_TR(0x5d7eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x88f1bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d7ef2:{NFSU2_TR(0x5d7ef2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d7ef4:L5d7ef4:{c.instructions+=3;NFSU2_TR(0x5d7ef4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7ef5:{NFSU2_TR(0x5d7ef5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7ef6:{NFSU2_TR(0x5d7ef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7efbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7d50u);}goto L5d7d50;}
}
B5d7efb:L5d7efb:{c.instructions+=1;NFSU2_TR(0x5d7efb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d7efe:L5d7efe:{c.instructions+=3;NFSU2_TR(0x5d7efe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d7f02:{NFSU2_TR(0x5d7f02);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d7f06:{NFSU2_TR(0x5d7f06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d7e93u);}goto L5d7e93;}}
}
B5d7f08:L5d7f08:{c.instructions+=3;NFSU2_TR(0x5d7f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d7f09:{NFSU2_TR(0x5d7f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d7f0a:{NFSU2_TR(0x5d7f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7f0b:L5d7f0b:{c.instructions+=3;NFSU2_TR(0x5d7f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d7f0c:{NFSU2_TR(0x5d7f0c);
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
B5d7f0f:{NFSU2_TR(0x5d7f0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d7f10:L5d7f10:{c.instructions+=54;NFSU2_TR(0x5d7f10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7f11:{NFSU2_TR(0x5d7f11);
__builtin_memmove((R+20),(R+16),4);
}
B5d7f13:{NFSU2_TR(0x5d7f13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d7f16:{NFSU2_TR(0x5d7f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5d7f19:{NFSU2_TR(0x5d7f19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7f1a:{NFSU2_TR(0x5d7f1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7f1b:{NFSU2_TR(0x5d7f1b);
__builtin_memmove((R+24),(R+4),4);
}
B5d7f1d:{NFSU2_TR(0x5d7f1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7f1e:{NFSU2_TR(0x5d7f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d7f21:{NFSU2_TR(0x5d7f21);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d7f24:{NFSU2_TR(0x5d7f24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d7f27:{NFSU2_TR(0x5d7f27);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d7f2a:{NFSU2_TR(0x5d7f2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d7f2d:{NFSU2_TR(0x5d7f2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d7f2f:{NFSU2_TR(0x5d7f2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d7f32:{NFSU2_TR(0x5d7f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7f35:{NFSU2_TR(0x5d7f35);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5d7f39:{NFSU2_TR(0x5d7f39);
__builtin_memmove((R+8),(R+0),4);
}
B5d7f3b:{NFSU2_TR(0x5d7f3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d7f3e:{NFSU2_TR(0x5d7f3e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B5d7f41:{NFSU2_TR(0x5d7f41);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B5d7f46:{NFSU2_TR(0x5d7f46);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d7f49:{NFSU2_TR(0x5d7f49);
__builtin_memmove((R+8),(R+0),4);
}
B5d7f4b:{NFSU2_TR(0x5d7f4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d7f4e:{NFSU2_TR(0x5d7f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7f52:{NFSU2_TR(0x5d7f52);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B5d7f55:{NFSU2_TR(0x5d7f55);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B5d7f5a:{NFSU2_TR(0x5d7f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d7f5d:{NFSU2_TR(0x5d7f5d);
__builtin_memmove((R+8),(R+0),4);
}
B5d7f5f:{NFSU2_TR(0x5d7f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7f63:{NFSU2_TR(0x5d7f63);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d7f66:{NFSU2_TR(0x5d7f66);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B5d7f6b:{NFSU2_TR(0x5d7f6b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B5d7f6e:{NFSU2_TR(0x5d7f6e);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5d7f73:{NFSU2_TR(0x5d7f73);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d7f76:{NFSU2_TR(0x5d7f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7f7a:{NFSU2_TR(0x5d7f7a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d7f7d:{NFSU2_TR(0x5d7f7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7f81:{NFSU2_TR(0x5d7f81);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d7f85:{NFSU2_TR(0x5d7f85);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d7f88:{NFSU2_TR(0x5d7f88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7f89:{NFSU2_TR(0x5d7f89);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7f8f:{NFSU2_TR(0x5d7f8f);
__builtin_memmove((R+4),(R+28),4);
}
B5d7f91:{NFSU2_TR(0x5d7f91);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7f94:{NFSU2_TR(0x5d7f94);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d7f98:{NFSU2_TR(0x5d7f98);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7f9e:{NFSU2_TR(0x5d7f9e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7fa1:{NFSU2_TR(0x5d7fa1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d7fa5:{NFSU2_TR(0x5d7fa5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7fab:{NFSU2_TR(0x5d7fab);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7fae:{NFSU2_TR(0x5d7fae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d7fb2:{NFSU2_TR(0x5d7fb2);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d7fb8:{NFSU2_TR(0x5d7fb8);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7fbb:{NFSU2_TR(0x5d7fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d7fc0ull));
TAIL_STATIC(0x5d2cc0u,5d2);
}
B5d7fc0:L5d7fc0:{c.instructions+=4;NFSU2_TR(0x5d7fc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d7fc3:{NFSU2_TR(0x5d7fc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d7fc5:{NFSU2_TR(0x5d7fc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d7fc9:{NFSU2_TR(0x5d7fc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d7fcf;}}
}
B5d7fcb:L5d7fcb:{c.instructions+=1;NFSU2_TR(0x5d7fcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d7fcf:L5d7fcf:{c.instructions+=2;NFSU2_TR(0x5d7fcf);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d7fd1:{NFSU2_TR(0x5d7fd1);
if(r1(R+518)){{goto L5d7fe9;}}
}
B5d7fd3:L5d7fd3:{c.instructions+=6;NFSU2_TR(0x5d7fd3);
w4(R+4,u32(0xc5000000ull));
}
B5d7fd8:{NFSU2_TR(0x5d7fd8);
w4(R+0,u32(0x45000000ull));
}
B5d7fdd:{NFSU2_TR(0x5d7fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7fe0:{NFSU2_TR(0x5d7fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7fe3:{NFSU2_TR(0x5d7fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7fe6:{NFSU2_TR(0x5d7fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d7fe9:L5d7fe9:{c.instructions+=8;NFSU2_TR(0x5d7fe9);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d7fec:{NFSU2_TR(0x5d7fec);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d7ff0:{NFSU2_TR(0x5d7ff0);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d7ff2:{NFSU2_TR(0x5d7ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7ff3:{NFSU2_TR(0x5d7ff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d7ff7:{NFSU2_TR(0x5d7ff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d7ff8:{NFSU2_TR(0x5d7ff8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d7ffc:{NFSU2_TR(0x5d7ffc);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x5d8000u,5d8);
}
XIT:NFSU2_TR_EXIT(0x5d7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
