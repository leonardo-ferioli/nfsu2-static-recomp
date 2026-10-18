#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5a5(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ab(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 page_5b7(Cpu& c){return body_5b7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b7001:goto L5b7001;
case 0x5b7004:c.instructions+=11;goto B5b7004;
case 0x5b7007:c.instructions+=10;goto B5b7007;
case 0x5b700a:c.instructions+=9;goto B5b700a;
case 0x5b700d:c.instructions+=8;goto B5b700d;
case 0x5b7012:c.instructions+=7;goto B5b7012;
case 0x5b7013:c.instructions+=6;goto B5b7013;
case 0x5b7016:c.instructions+=5;goto B5b7016;
case 0x5b701c:c.instructions+=4;goto B5b701c;
case 0x5b7023:c.instructions+=3;goto B5b7023;
case 0x5b7026:c.instructions+=2;goto B5b7026;
case 0x5b7029:c.instructions+=1;goto B5b7029;
case 0x5b702e:goto L5b702e;
case 0x5b7034:c.instructions+=2;goto B5b7034;
case 0x5b7035:c.instructions+=1;goto B5b7035;
case 0x5b703a:goto L5b703a;
case 0x5b703d:c.instructions+=4;goto B5b703d;
case 0x5b7040:c.instructions+=3;goto B5b7040;
case 0x5b7042:c.instructions+=2;goto B5b7042;
case 0x5b7046:c.instructions+=1;goto B5b7046;
case 0x5b7048:goto L5b7048;
case 0x5b704b:c.instructions+=4;goto B5b704b;
case 0x5b7051:c.instructions+=3;goto B5b7051;
case 0x5b7052:c.instructions+=2;goto B5b7052;
case 0x5b7054:c.instructions+=1;goto B5b7054;
case 0x5b7059:goto L5b7059;
case 0x5b705b:goto L5b705b;
case 0x5b705d:goto L5b705d;
case 0x5b705f:c.instructions+=3;goto B5b705f;
case 0x5b7062:c.instructions+=2;goto B5b7062;
case 0x5b7065:c.instructions+=1;goto B5b7065;
case 0x5b7067:goto L5b7067;
case 0x5b706a:c.instructions+=1;goto B5b706a;
case 0x5b706c:goto L5b706c;
case 0x5b706e:goto L5b706e;
case 0x5b7071:c.instructions+=8;goto B5b7071;
case 0x5b7074:c.instructions+=7;goto B5b7074;
case 0x5b7076:c.instructions+=6;goto B5b7076;
case 0x5b7079:c.instructions+=5;goto B5b7079;
case 0x5b707c:c.instructions+=4;goto B5b707c;
case 0x5b707e:c.instructions+=3;goto B5b707e;
case 0x5b7080:c.instructions+=2;goto B5b7080;
case 0x5b7082:c.instructions+=1;goto B5b7082;
case 0x5b7085:goto L5b7085;
case 0x5b7088:c.instructions+=20;goto B5b7088;
case 0x5b7092:c.instructions+=19;goto B5b7092;
case 0x5b7095:c.instructions+=18;goto B5b7095;
case 0x5b709b:c.instructions+=17;goto B5b709b;
case 0x5b70a1:c.instructions+=16;goto B5b70a1;
case 0x5b70a6:c.instructions+=15;goto B5b70a6;
case 0x5b70a8:c.instructions+=14;goto B5b70a8;
case 0x5b70ae:c.instructions+=13;goto B5b70ae;
case 0x5b70b4:c.instructions+=12;goto B5b70b4;
case 0x5b70b6:c.instructions+=11;goto B5b70b6;
case 0x5b70b7:c.instructions+=10;goto B5b70b7;
case 0x5b70bd:c.instructions+=9;goto B5b70bd;
case 0x5b70c0:c.instructions+=8;goto B5b70c0;
case 0x5b70c2:c.instructions+=7;goto B5b70c2;
case 0x5b70c7:c.instructions+=6;goto B5b70c7;
case 0x5b70ca:c.instructions+=5;goto B5b70ca;
case 0x5b70cd:c.instructions+=4;goto B5b70cd;
case 0x5b70d3:c.instructions+=3;goto B5b70d3;
case 0x5b70d6:c.instructions+=2;goto B5b70d6;
case 0x5b70dc:c.instructions+=1;goto B5b70dc;
case 0x5b70e1:goto L5b70e1;
case 0x5b70e3:c.instructions+=5;goto B5b70e3;
case 0x5b70e6:c.instructions+=4;goto B5b70e6;
case 0x5b70e9:c.instructions+=3;goto B5b70e9;
case 0x5b70eb:c.instructions+=2;goto B5b70eb;
case 0x5b70ef:c.instructions+=1;goto B5b70ef;
case 0x5b70f1:goto L5b70f1;
case 0x5b70f4:c.instructions+=8;goto B5b70f4;
case 0x5b70f7:c.instructions+=7;goto B5b70f7;
case 0x5b70fa:c.instructions+=6;goto B5b70fa;
case 0x5b70fd:c.instructions+=5;goto B5b70fd;
case 0x5b70fe:c.instructions+=4;goto B5b70fe;
case 0x5b70ff:c.instructions+=3;goto B5b70ff;
case 0x5b7100:c.instructions+=2;goto B5b7100;
case 0x5b7102:c.instructions+=1;goto B5b7102;
case 0x5b7107:goto L5b7107;
case 0x5b710d:c.instructions+=5;goto B5b710d;
case 0x5b7117:c.instructions+=4;goto B5b7117;
case 0x5b711d:c.instructions+=3;goto B5b711d;
case 0x5b7123:c.instructions+=2;goto B5b7123;
case 0x5b7129:c.instructions+=1;goto B5b7129;
case 0x5b712b:goto L5b712b;
case 0x5b712d:goto L5b712d;
case 0x5b7130:c.instructions+=7;goto B5b7130;
case 0x5b7133:c.instructions+=6;goto B5b7133;
case 0x5b7136:c.instructions+=5;goto B5b7136;
case 0x5b713b:c.instructions+=4;goto B5b713b;
case 0x5b713d:c.instructions+=3;goto B5b713d;
case 0x5b7140:c.instructions+=2;goto B5b7140;
case 0x5b7143:c.instructions+=1;goto B5b7143;
case 0x5b7148:goto L5b7148;
case 0x5b714b:c.instructions+=4;goto B5b714b;
case 0x5b7151:c.instructions+=3;goto B5b7151;
case 0x5b7153:c.instructions+=2;goto B5b7153;
case 0x5b7156:c.instructions+=1;goto B5b7156;
case 0x5b7158:goto L5b7158;
case 0x5b715b:c.instructions+=5;goto B5b715b;
case 0x5b7161:c.instructions+=4;goto B5b7161;
case 0x5b7164:c.instructions+=3;goto B5b7164;
case 0x5b7166:c.instructions+=2;goto B5b7166;
case 0x5b7169:c.instructions+=1;goto B5b7169;
case 0x5b716b:goto L5b716b;
case 0x5b716d:c.instructions+=1;goto B5b716d;
case 0x5b7173:goto L5b7173;
case 0x5b7179:c.instructions+=10;goto B5b7179;
case 0x5b717c:c.instructions+=9;goto B5b717c;
case 0x5b7182:c.instructions+=8;goto B5b7182;
case 0x5b7184:c.instructions+=7;goto B5b7184;
case 0x5b718a:c.instructions+=6;goto B5b718a;
case 0x5b7190:c.instructions+=5;goto B5b7190;
case 0x5b7196:c.instructions+=4;goto B5b7196;
case 0x5b7199:c.instructions+=3;goto B5b7199;
case 0x5b719b:c.instructions+=2;goto B5b719b;
case 0x5b719d:c.instructions+=1;goto B5b719d;
case 0x5b719f:goto L5b719f;
case 0x5b71a2:c.instructions+=1;goto B5b71a2;
case 0x5b71a4:goto L5b71a4;
case 0x5b71aa:c.instructions+=1;goto B5b71aa;
case 0x5b71ac:goto L5b71ac;
case 0x5b71ae:goto L5b71ae;
case 0x5b71b1:c.instructions+=7;goto B5b71b1;
case 0x5b71b4:c.instructions+=6;goto B5b71b4;
case 0x5b71b6:c.instructions+=5;goto B5b71b6;
case 0x5b71b9:c.instructions+=4;goto B5b71b9;
case 0x5b71bc:c.instructions+=3;goto B5b71bc;
case 0x5b71be:c.instructions+=2;goto B5b71be;
case 0x5b71c0:c.instructions+=1;goto B5b71c0;
case 0x5b71c3:goto L5b71c3;
case 0x5b71c6:c.instructions+=3;goto B5b71c6;
case 0x5b71cb:c.instructions+=2;goto B5b71cb;
case 0x5b71cc:c.instructions+=1;goto B5b71cc;
case 0x5b71d1:goto L5b71d1;
case 0x5b71d4:c.instructions+=2;goto B5b71d4;
case 0x5b71d6:c.instructions+=1;goto B5b71d6;
case 0x5b71d8:goto L5b71d8;
case 0x5b71db:c.instructions+=11;goto B5b71db;
case 0x5b71de:c.instructions+=10;goto B5b71de;
case 0x5b71e4:c.instructions+=9;goto B5b71e4;
case 0x5b71e6:c.instructions+=8;goto B5b71e6;
case 0x5b71eb:c.instructions+=7;goto B5b71eb;
case 0x5b71ee:c.instructions+=6;goto B5b71ee;
case 0x5b71f1:c.instructions+=5;goto B5b71f1;
case 0x5b71f4:c.instructions+=4;goto B5b71f4;
case 0x5b71f7:c.instructions+=3;goto B5b71f7;
case 0x5b71fa:c.instructions+=2;goto B5b71fa;
case 0x5b71fd:c.instructions+=1;goto B5b71fd;
case 0x5b71ff:goto L5b71ff;
case 0x5b7201:goto L5b7201;
case 0x5b7204:c.instructions+=6;goto B5b7204;
case 0x5b7207:c.instructions+=5;goto B5b7207;
case 0x5b720d:c.instructions+=4;goto B5b720d;
case 0x5b7210:c.instructions+=3;goto B5b7210;
case 0x5b7212:c.instructions+=2;goto B5b7212;
case 0x5b7218:c.instructions+=1;goto B5b7218;
case 0x5b721d:goto L5b721d;
case 0x5b7220:c.instructions+=4;goto B5b7220;
case 0x5b7223:c.instructions+=3;goto B5b7223;
case 0x5b7226:c.instructions+=2;goto B5b7226;
case 0x5b7229:c.instructions+=1;goto B5b7229;
case 0x5b7230:goto L5b7230;
case 0x5b7235:c.instructions+=2;goto B5b7235;
case 0x5b7236:c.instructions+=1;goto B5b7236;
case 0x5b723b:goto L5b723b;
case 0x5b723d:c.instructions+=5;goto B5b723d;
case 0x5b7240:c.instructions+=4;goto B5b7240;
case 0x5b7243:c.instructions+=3;goto B5b7243;
case 0x5b7245:c.instructions+=2;goto B5b7245;
case 0x5b7249:c.instructions+=1;goto B5b7249;
case 0x5b724b:goto L5b724b;
case 0x5b724e:c.instructions+=16;goto B5b724e;
case 0x5b7251:c.instructions+=15;goto B5b7251;
case 0x5b7254:c.instructions+=14;goto B5b7254;
case 0x5b7255:c.instructions+=13;goto B5b7255;
case 0x5b725b:c.instructions+=12;goto B5b725b;
case 0x5b725c:c.instructions+=11;goto B5b725c;
case 0x5b725f:c.instructions+=10;goto B5b725f;
case 0x5b7260:c.instructions+=9;goto B5b7260;
case 0x5b7262:c.instructions+=8;goto B5b7262;
case 0x5b7264:c.instructions+=7;goto B5b7264;
case 0x5b7267:c.instructions+=6;goto B5b7267;
case 0x5b726e:c.instructions+=5;goto B5b726e;
case 0x5b7271:c.instructions+=4;goto B5b7271;
case 0x5b7272:c.instructions+=3;goto B5b7272;
case 0x5b7276:c.instructions+=2;goto B5b7276;
case 0x5b7277:c.instructions+=1;goto B5b7277;
case 0x5b727c:goto L5b727c;
case 0x5b727e:goto L5b727e;
case 0x5b7280:goto L5b7280;
case 0x5b7283:c.instructions+=10;goto B5b7283;
case 0x5b7285:c.instructions+=9;goto B5b7285;
case 0x5b7288:c.instructions+=8;goto B5b7288;
case 0x5b728b:c.instructions+=7;goto B5b728b;
case 0x5b728e:c.instructions+=6;goto B5b728e;
case 0x5b7291:c.instructions+=5;goto B5b7291;
case 0x5b7296:c.instructions+=4;goto B5b7296;
case 0x5b7299:c.instructions+=3;goto B5b7299;
case 0x5b729c:c.instructions+=2;goto B5b729c;
case 0x5b729f:c.instructions+=1;goto B5b729f;
case 0x5b72a1:goto L5b72a1;
case 0x5b72a3:c.instructions+=1;goto B5b72a3;
case 0x5b72a8:goto L5b72a8;
case 0x5b72ab:c.instructions+=1;goto B5b72ab;
case 0x5b72b0:goto L5b72b0;
case 0x5b72b3:c.instructions+=8;goto B5b72b3;
case 0x5b72b4:c.instructions+=7;goto B5b72b4;
case 0x5b72b6:c.instructions+=6;goto B5b72b6;
case 0x5b72b7:c.instructions+=5;goto B5b72b7;
case 0x5b72b8:c.instructions+=4;goto B5b72b8;
case 0x5b72bf:c.instructions+=3;goto B5b72bf;
case 0x5b72c1:c.instructions+=2;goto B5b72c1;
case 0x5b72c2:c.instructions+=1;goto B5b72c2;
case 0x5b72d0:goto L5b72d0;
case 0x5b72d1:c.instructions+=7;goto B5b72d1;
case 0x5b72d3:c.instructions+=6;goto B5b72d3;
case 0x5b72d6:c.instructions+=5;goto B5b72d6;
case 0x5b72d7:c.instructions+=4;goto B5b72d7;
case 0x5b72d8:c.instructions+=3;goto B5b72d8;
case 0x5b72d9:c.instructions+=2;goto B5b72d9;
case 0x5b72db:c.instructions+=1;goto B5b72db;
case 0x5b72e0:goto L5b72e0;
case 0x5b72e3:c.instructions+=16;goto B5b72e3;
case 0x5b72ea:c.instructions+=15;goto B5b72ea;
case 0x5b72ed:c.instructions+=14;goto B5b72ed;
case 0x5b72f4:c.instructions+=13;goto B5b72f4;
case 0x5b72f7:c.instructions+=12;goto B5b72f7;
case 0x5b72fe:c.instructions+=11;goto B5b72fe;
case 0x5b7301:c.instructions+=10;goto B5b7301;
case 0x5b7308:c.instructions+=9;goto B5b7308;
case 0x5b730b:c.instructions+=8;goto B5b730b;
case 0x5b7310:c.instructions+=7;goto B5b7310;
case 0x5b7312:c.instructions+=6;goto B5b7312;
case 0x5b7314:c.instructions+=5;goto B5b7314;
case 0x5b7317:c.instructions+=4;goto B5b7317;
case 0x5b731a:c.instructions+=3;goto B5b731a;
case 0x5b731d:c.instructions+=2;goto B5b731d;
case 0x5b731f:c.instructions+=1;goto B5b731f;
case 0x5b7324:goto L5b7324;
case 0x5b7326:c.instructions+=1;goto B5b7326;
case 0x5b732b:goto L5b732b;
case 0x5b732d:c.instructions+=1;goto B5b732d;
case 0x5b7332:goto L5b7332;
case 0x5b7335:c.instructions+=3;goto B5b7335;
case 0x5b7336:c.instructions+=2;goto B5b7336;
case 0x5b7338:c.instructions+=1;goto B5b7338;
case 0x5b733d:goto L5b733d;
case 0x5b733f:c.instructions+=1;goto B5b733f;
case 0x5b7344:goto L5b7344;
case 0x5b7347:c.instructions+=2;goto B5b7347;
case 0x5b734d:c.instructions+=1;goto B5b734d;
case 0x5b7352:goto L5b7352;
case 0x5b7353:c.instructions+=22;goto B5b7353;
case 0x5b7355:c.instructions+=21;goto B5b7355;
case 0x5b7358:c.instructions+=20;goto B5b7358;
case 0x5b735b:c.instructions+=19;goto B5b735b;
case 0x5b7361:c.instructions+=18;goto B5b7361;
case 0x5b7364:c.instructions+=17;goto B5b7364;
case 0x5b7367:c.instructions+=16;goto B5b7367;
case 0x5b736a:c.instructions+=15;goto B5b736a;
case 0x5b736d:c.instructions+=14;goto B5b736d;
case 0x5b7373:c.instructions+=13;goto B5b7373;
case 0x5b7379:c.instructions+=12;goto B5b7379;
case 0x5b737b:c.instructions+=11;goto B5b737b;
case 0x5b7381:c.instructions+=10;goto B5b7381;
case 0x5b7387:c.instructions+=9;goto B5b7387;
case 0x5b738d:c.instructions+=8;goto B5b738d;
case 0x5b7393:c.instructions+=7;goto B5b7393;
case 0x5b7399:c.instructions+=6;goto B5b7399;
case 0x5b739f:c.instructions+=5;goto B5b739f;
case 0x5b73a5:c.instructions+=4;goto B5b73a5;
case 0x5b73a7:c.instructions+=3;goto B5b73a7;
case 0x5b73ad:c.instructions+=2;goto B5b73ad;
case 0x5b73b3:c.instructions+=1;goto B5b73b3;
case 0x5b73b9:goto L5b73b9;
case 0x5b73bc:c.instructions+=2;goto B5b73bc;
case 0x5b73be:c.instructions+=1;goto B5b73be;
case 0x5b73c0:goto L5b73c0;
case 0x5b73c3:c.instructions+=5;goto B5b73c3;
case 0x5b73c5:c.instructions+=4;goto B5b73c5;
case 0x5b73c6:c.instructions+=3;goto B5b73c6;
case 0x5b73c8:c.instructions+=2;goto B5b73c8;
case 0x5b73ce:c.instructions+=1;goto B5b73ce;
case 0x5b73d3:goto L5b73d3;
case 0x5b73d6:c.instructions+=28;goto B5b73d6;
case 0x5b73dc:c.instructions+=27;goto B5b73dc;
case 0x5b73e1:c.instructions+=26;goto B5b73e1;
case 0x5b73e4:c.instructions+=25;goto B5b73e4;
case 0x5b73ea:c.instructions+=24;goto B5b73ea;
case 0x5b73ec:c.instructions+=23;goto B5b73ec;
case 0x5b73f2:c.instructions+=22;goto B5b73f2;
case 0x5b73f4:c.instructions+=21;goto B5b73f4;
case 0x5b73fa:c.instructions+=20;goto B5b73fa;
case 0x5b7400:c.instructions+=19;goto B5b7400;
case 0x5b7406:c.instructions+=18;goto B5b7406;
case 0x5b740c:c.instructions+=17;goto B5b740c;
case 0x5b740f:c.instructions+=16;goto B5b740f;
case 0x5b7415:c.instructions+=15;goto B5b7415;
case 0x5b741a:c.instructions+=14;goto B5b741a;
case 0x5b741d:c.instructions+=13;goto B5b741d;
case 0x5b741f:c.instructions+=12;goto B5b741f;
case 0x5b7425:c.instructions+=11;goto B5b7425;
case 0x5b742b:c.instructions+=10;goto B5b742b;
case 0x5b742d:c.instructions+=9;goto B5b742d;
case 0x5b7433:c.instructions+=8;goto B5b7433;
case 0x5b7439:c.instructions+=7;goto B5b7439;
case 0x5b743f:c.instructions+=6;goto B5b743f;
case 0x5b7445:c.instructions+=5;goto B5b7445;
case 0x5b7448:c.instructions+=4;goto B5b7448;
case 0x5b744b:c.instructions+=3;goto B5b744b;
case 0x5b744c:c.instructions+=2;goto B5b744c;
case 0x5b744d:c.instructions+=1;goto B5b744d;
case 0x5b7452:goto L5b7452;
case 0x5b7455:c.instructions+=2;goto B5b7455;
case 0x5b7456:c.instructions+=1;goto B5b7456;
case 0x5b745c:goto L5b745c;
case 0x5b745f:goto L5b745f;
case 0x5b7465:c.instructions+=29;goto B5b7465;
case 0x5b746b:c.instructions+=28;goto B5b746b;
case 0x5b746e:c.instructions+=27;goto B5b746e;
case 0x5b7471:c.instructions+=26;goto B5b7471;
case 0x5b7472:c.instructions+=25;goto B5b7472;
case 0x5b7474:c.instructions+=24;goto B5b7474;
case 0x5b7476:c.instructions+=23;goto B5b7476;
case 0x5b747c:c.instructions+=22;goto B5b747c;
case 0x5b747e:c.instructions+=21;goto B5b747e;
case 0x5b7484:c.instructions+=20;goto B5b7484;
case 0x5b748a:c.instructions+=19;goto B5b748a;
case 0x5b748c:c.instructions+=18;goto B5b748c;
case 0x5b7492:c.instructions+=17;goto B5b7492;
case 0x5b7495:c.instructions+=16;goto B5b7495;
case 0x5b7497:c.instructions+=15;goto B5b7497;
case 0x5b749d:c.instructions+=14;goto B5b749d;
case 0x5b74a3:c.instructions+=13;goto B5b74a3;
case 0x5b74a6:c.instructions+=12;goto B5b74a6;
case 0x5b74a8:c.instructions+=11;goto B5b74a8;
case 0x5b74ae:c.instructions+=10;goto B5b74ae;
case 0x5b74b0:c.instructions+=9;goto B5b74b0;
case 0x5b74b6:c.instructions+=8;goto B5b74b6;
case 0x5b74bc:c.instructions+=7;goto B5b74bc;
case 0x5b74be:c.instructions+=6;goto B5b74be;
case 0x5b74c4:c.instructions+=5;goto B5b74c4;
case 0x5b74c7:c.instructions+=4;goto B5b74c7;
case 0x5b74c9:c.instructions+=3;goto B5b74c9;
case 0x5b74cf:c.instructions+=2;goto B5b74cf;
case 0x5b74d1:c.instructions+=1;goto B5b74d1;
case 0x5b74d6:goto L5b74d6;
case 0x5b74db:c.instructions+=2;goto B5b74db;
case 0x5b74e0:c.instructions+=1;goto B5b74e0;
case 0x5b74e2:goto L5b74e2;
case 0x5b74e7:c.instructions+=1;goto B5b74e7;
case 0x5b74e9:goto L5b74e9;
case 0x5b74ef:c.instructions+=2;goto B5b74ef;
case 0x5b74f1:c.instructions+=1;goto B5b74f1;
case 0x5b74f3:goto L5b74f3;
case 0x5b74f6:c.instructions+=1;goto B5b74f6;
case 0x5b74fb:goto L5b74fb;
case 0x5b74fd:c.instructions+=1;goto B5b74fd;
case 0x5b74ff:goto L5b74ff;
case 0x5b7502:c.instructions+=2;goto B5b7502;
case 0x5b7509:c.instructions+=1;goto B5b7509;
case 0x5b7510:goto L5b7510;
case 0x5b7513:c.instructions+=4;goto B5b7513;
case 0x5b7515:c.instructions+=3;goto B5b7515;
case 0x5b7516:c.instructions+=2;goto B5b7516;
case 0x5b7517:c.instructions+=1;goto B5b7517;
case 0x5b751c:goto L5b751c;
case 0x5b751f:c.instructions+=4;goto B5b751f;
case 0x5b7522:c.instructions+=3;goto B5b7522;
case 0x5b7523:c.instructions+=2;goto B5b7523;
case 0x5b7526:c.instructions+=1;goto B5b7526;
case 0x5b7528:goto L5b7528;
case 0x5b752b:c.instructions+=6;goto B5b752b;
case 0x5b752e:c.instructions+=5;goto B5b752e;
case 0x5b7532:c.instructions+=4;goto B5b7532;
case 0x5b7533:c.instructions+=3;goto B5b7533;
case 0x5b7534:c.instructions+=2;goto B5b7534;
case 0x5b7535:c.instructions+=1;goto B5b7535;
case 0x5b7537:goto L5b7537;
case 0x5b753d:c.instructions+=2;goto B5b753d;
case 0x5b753f:c.instructions+=1;goto B5b753f;
case 0x5b7541:goto L5b7541;
case 0x5b7546:c.instructions+=1;goto B5b7546;
case 0x5b754b:goto L5b754b;
case 0x5b754d:c.instructions+=1;goto B5b754d;
case 0x5b754f:goto L5b754f;
case 0x5b7554:c.instructions+=1;goto B5b7554;
case 0x5b7559:goto L5b7559;
case 0x5b755c:c.instructions+=3;goto B5b755c;
case 0x5b755e:c.instructions+=2;goto B5b755e;
case 0x5b755f:c.instructions+=1;goto B5b755f;
case 0x5b7570:goto L5b7570;
case 0x5b7571:c.instructions+=6;goto B5b7571;
case 0x5b7572:c.instructions+=5;goto B5b7572;
case 0x5b7576:c.instructions+=4;goto B5b7576;
case 0x5b757a:c.instructions+=3;goto B5b757a;
case 0x5b757b:c.instructions+=2;goto B5b757b;
case 0x5b757d:c.instructions+=1;goto B5b757d;
case 0x5b757f:goto L5b757f;
case 0x5b7581:c.instructions+=4;goto B5b7581;
case 0x5b7583:c.instructions+=3;goto B5b7583;
case 0x5b7585:c.instructions+=2;goto B5b7585;
case 0x5b7587:c.instructions+=1;goto B5b7587;
case 0x5b758c:goto L5b758c;
case 0x5b758f:c.instructions+=5;goto B5b758f;
case 0x5b7593:c.instructions+=4;goto B5b7593;
case 0x5b7597:c.instructions+=3;goto B5b7597;
case 0x5b7599:c.instructions+=2;goto B5b7599;
case 0x5b75a1:c.instructions+=1;goto B5b75a1;
case 0x5b75a3:goto L5b75a3;
case 0x5b75a5:c.instructions+=1;goto B5b75a5;
case 0x5b75aa:goto L5b75aa;
case 0x5b75ae:goto L5b75ae;
case 0x5b75b2:c.instructions+=6;goto B5b75b2;
case 0x5b75b6:c.instructions+=5;goto B5b75b6;
case 0x5b75b7:c.instructions+=4;goto B5b75b7;
case 0x5b75b9:c.instructions+=3;goto B5b75b9;
case 0x5b75ba:c.instructions+=2;goto B5b75ba;
case 0x5b75bc:c.instructions+=1;goto B5b75bc;
case 0x5b75c1:goto L5b75c1;
case 0x5b75c5:c.instructions+=2;goto B5b75c5;
case 0x5b75c7:c.instructions+=1;goto B5b75c7;
case 0x5b75c9:goto L5b75c9;
case 0x5b75cf:c.instructions+=3;goto B5b75cf;
case 0x5b75d1:c.instructions+=2;goto B5b75d1;
case 0x5b75d7:c.instructions+=1;goto B5b75d7;
case 0x5b75dc:goto L5b75dc;
case 0x5b75dd:c.instructions+=2;goto B5b75dd;
case 0x5b75e3:c.instructions+=1;goto B5b75e3;
case 0x5b75e8:goto L5b75e8;
case 0x5b75ea:c.instructions+=4;goto B5b75ea;
case 0x5b75ec:c.instructions+=3;goto B5b75ec;
case 0x5b75ee:c.instructions+=2;goto B5b75ee;
case 0x5b75f0:c.instructions+=1;goto B5b75f0;
case 0x5b75f5:goto L5b75f5;
case 0x5b75f6:c.instructions+=3;goto B5b75f6;
case 0x5b75f7:c.instructions+=2;goto B5b75f7;
case 0x5b75f8:c.instructions+=1;goto B5b75f8;
case 0x5b7600:goto L5b7600;
case 0x5b7602:c.instructions+=31;goto B5b7602;
case 0x5b7604:c.instructions+=30;goto B5b7604;
case 0x5b7609:c.instructions+=29;goto B5b7609;
case 0x5b760c:c.instructions+=28;goto B5b760c;
case 0x5b760f:c.instructions+=27;goto B5b760f;
case 0x5b7612:c.instructions+=26;goto B5b7612;
case 0x5b7615:c.instructions+=25;goto B5b7615;
case 0x5b7618:c.instructions+=24;goto B5b7618;
case 0x5b761b:c.instructions+=23;goto B5b761b;
case 0x5b761e:c.instructions+=22;goto B5b761e;
case 0x5b7621:c.instructions+=21;goto B5b7621;
case 0x5b7624:c.instructions+=20;goto B5b7624;
case 0x5b7627:c.instructions+=19;goto B5b7627;
case 0x5b762a:c.instructions+=18;goto B5b762a;
case 0x5b762d:c.instructions+=17;goto B5b762d;
case 0x5b7630:c.instructions+=16;goto B5b7630;
case 0x5b7633:c.instructions+=15;goto B5b7633;
case 0x5b7636:c.instructions+=14;goto B5b7636;
case 0x5b7639:c.instructions+=13;goto B5b7639;
case 0x5b763c:c.instructions+=12;goto B5b763c;
case 0x5b763f:c.instructions+=11;goto B5b763f;
case 0x5b7642:c.instructions+=10;goto B5b7642;
case 0x5b7645:c.instructions+=9;goto B5b7645;
case 0x5b7648:c.instructions+=8;goto B5b7648;
case 0x5b764b:c.instructions+=7;goto B5b764b;
case 0x5b764e:c.instructions+=6;goto B5b764e;
case 0x5b7650:c.instructions+=5;goto B5b7650;
case 0x5b7657:c.instructions+=4;goto B5b7657;
case 0x5b765a:c.instructions+=3;goto B5b765a;
case 0x5b765d:c.instructions+=2;goto B5b765d;
case 0x5b7660:c.instructions+=1;goto B5b7660;
case 0x5b7670:goto L5b7670;
case 0x5b7674:c.instructions+=1;goto B5b7674;
case 0x5b7680:goto L5b7680;
case 0x5b7686:c.instructions+=1;goto B5b7686;
case 0x5b7690:goto L5b7690;
case 0x5b7695:goto L5b7695;
case 0x5b769a:goto L5b769a;
case 0x5b769f:goto L5b769f;
case 0x5b76a4:goto L5b76a4;
case 0x5b76a6:c.instructions+=1;goto B5b76a6;
case 0x5b76ab:goto L5b76ab;
case 0x5b76ae:c.instructions+=1;goto B5b76ae;
case 0x5b76b3:goto L5b76b3;
case 0x5b76b8:goto L5b76b8;
case 0x5b76ba:c.instructions+=1;goto B5b76ba;
case 0x5b76bc:goto L5b76bc;
case 0x5b76be:c.instructions+=1;goto B5b76be;
case 0x5b76c3:goto L5b76c3;
case 0x5b76c8:c.instructions+=1;goto B5b76c8;
case 0x5b76ca:goto L5b76ca;
case 0x5b76ce:c.instructions+=4;goto B5b76ce;
case 0x5b76d1:c.instructions+=3;goto B5b76d1;
case 0x5b76d6:c.instructions+=2;goto B5b76d6;
case 0x5b76d7:c.instructions+=1;goto B5b76d7;
case 0x5b76dc:goto L5b76dc;
case 0x5b76df:c.instructions+=2;goto B5b76df;
case 0x5b76e1:c.instructions+=1;goto B5b76e1;
case 0x5b76e3:goto L5b76e3;
case 0x5b76ed:goto L5b76ed;
case 0x5b76f0:goto L5b76f0;
case 0x5b76f1:c.instructions+=15;goto B5b76f1;
case 0x5b76f3:c.instructions+=14;goto B5b76f3;
case 0x5b76f6:c.instructions+=13;goto B5b76f6;
case 0x5b76fc:c.instructions+=12;goto B5b76fc;
case 0x5b76fd:c.instructions+=11;goto B5b76fd;
case 0x5b76fe:c.instructions+=10;goto B5b76fe;
case 0x5b76ff:c.instructions+=9;goto B5b76ff;
case 0x5b7705:c.instructions+=8;goto B5b7705;
case 0x5b7706:c.instructions+=7;goto B5b7706;
case 0x5b770a:c.instructions+=6;goto B5b770a;
case 0x5b770b:c.instructions+=5;goto B5b770b;
case 0x5b7710:c.instructions+=4;goto B5b7710;
case 0x5b7712:c.instructions+=3;goto B5b7712;
case 0x5b7717:c.instructions+=2;goto B5b7717;
case 0x5b771c:c.instructions+=1;goto B5b771c;
case 0x5b771e:goto L5b771e;
case 0x5b7720:c.instructions+=2;goto B5b7720;
case 0x5b7726:c.instructions+=1;goto B5b7726;
case 0x5b7728:goto L5b7728;
case 0x5b772c:c.instructions+=11;goto B5b772c;
case 0x5b7730:c.instructions+=10;goto B5b7730;
case 0x5b7731:c.instructions+=9;goto B5b7731;
case 0x5b7736:c.instructions+=8;goto B5b7736;
case 0x5b773a:c.instructions+=7;goto B5b773a;
case 0x5b773b:c.instructions+=6;goto B5b773b;
case 0x5b773d:c.instructions+=5;goto B5b773d;
case 0x5b773f:c.instructions+=4;goto B5b773f;
case 0x5b7740:c.instructions+=3;goto B5b7740;
case 0x5b7748:c.instructions+=2;goto B5b7748;
case 0x5b7750:c.instructions+=1;goto B5b7750;
case 0x5b7752:goto L5b7752;
case 0x5b7754:c.instructions+=1;goto B5b7754;
case 0x5b7756:goto L5b7756;
case 0x5b775d:c.instructions+=1;goto B5b775d;
case 0x5b775f:goto L5b775f;
case 0x5b7766:goto L5b7766;
case 0x5b776a:c.instructions+=2;goto B5b776a;
case 0x5b776b:c.instructions+=1;goto B5b776b;
case 0x5b7771:goto L5b7771;
case 0x5b7775:c.instructions+=6;goto B5b7775;
case 0x5b7776:c.instructions+=5;goto B5b7776;
case 0x5b777b:c.instructions+=4;goto B5b777b;
case 0x5b777d:c.instructions+=3;goto B5b777d;
case 0x5b7782:c.instructions+=2;goto B5b7782;
case 0x5b7787:c.instructions+=1;goto B5b7787;
case 0x5b7789:goto L5b7789;
case 0x5b778b:c.instructions+=1;goto B5b778b;
case 0x5b778d:goto L5b778d;
case 0x5b7791:c.instructions+=6;goto B5b7791;
case 0x5b7792:c.instructions+=5;goto B5b7792;
case 0x5b7797:c.instructions+=4;goto B5b7797;
case 0x5b7799:c.instructions+=3;goto B5b7799;
case 0x5b779e:c.instructions+=2;goto B5b779e;
case 0x5b77a3:c.instructions+=1;goto B5b77a3;
case 0x5b77a5:goto L5b77a5;
case 0x5b77a7:c.instructions+=2;goto B5b77a7;
case 0x5b77ac:c.instructions+=1;goto B5b77ac;
case 0x5b77b0:goto L5b77b0;
case 0x5b77b2:goto L5b77b2;
case 0x5b77b6:c.instructions+=13;goto B5b77b6;
case 0x5b77b7:c.instructions+=12;goto B5b77b7;
case 0x5b77bb:c.instructions+=11;goto B5b77bb;
case 0x5b77bf:c.instructions+=10;goto B5b77bf;
case 0x5b77c0:c.instructions+=9;goto B5b77c0;
case 0x5b77c4:c.instructions+=8;goto B5b77c4;
case 0x5b77c5:c.instructions+=7;goto B5b77c5;
case 0x5b77c7:c.instructions+=6;goto B5b77c7;
case 0x5b77cc:c.instructions+=5;goto B5b77cc;
case 0x5b77d1:c.instructions+=4;goto B5b77d1;
case 0x5b77d2:c.instructions+=3;goto B5b77d2;
case 0x5b77da:c.instructions+=2;goto B5b77da;
case 0x5b77de:c.instructions+=1;goto B5b77de;
case 0x5b77e0:goto L5b77e0;
case 0x5b77e2:c.instructions+=2;goto B5b77e2;
case 0x5b77e8:c.instructions+=1;goto B5b77e8;
case 0x5b77ea:goto L5b77ea;
case 0x5b77eb:c.instructions+=5;goto B5b77eb;
case 0x5b77ef:c.instructions+=4;goto B5b77ef;
case 0x5b77f0:c.instructions+=3;goto B5b77f0;
case 0x5b77f4:c.instructions+=2;goto B5b77f4;
case 0x5b77f5:c.instructions+=1;goto B5b77f5;
case 0x5b77f7:goto L5b77f7;
case 0x5b77f9:c.instructions+=1;goto B5b77f9;
case 0x5b77fb:goto L5b77fb;
case 0x5b77fd:c.instructions+=1;goto B5b77fd;
case 0x5b7800:goto L5b7800;
case 0x5b7804:c.instructions+=4;goto B5b7804;
case 0x5b780a:c.instructions+=3;goto B5b780a;
case 0x5b780b:c.instructions+=2;goto B5b780b;
case 0x5b780d:c.instructions+=1;goto B5b780d;
case 0x5b780f:goto L5b780f;
case 0x5b7811:c.instructions+=2;goto B5b7811;
case 0x5b7816:c.instructions+=1;goto B5b7816;
case 0x5b781a:goto L5b781a;
case 0x5b781c:goto L5b781c;
case 0x5b7820:c.instructions+=12;goto B5b7820;
case 0x5b7821:c.instructions+=11;goto B5b7821;
case 0x5b7825:c.instructions+=10;goto B5b7825;
case 0x5b7829:c.instructions+=9;goto B5b7829;
case 0x5b782a:c.instructions+=8;goto B5b782a;
case 0x5b782e:c.instructions+=7;goto B5b782e;
case 0x5b782f:c.instructions+=6;goto B5b782f;
case 0x5b7831:c.instructions+=5;goto B5b7831;
case 0x5b7832:c.instructions+=4;goto B5b7832;
case 0x5b7837:c.instructions+=3;goto B5b7837;
case 0x5b7838:c.instructions+=2;goto B5b7838;
case 0x5b783c:c.instructions+=1;goto B5b783c;
case 0x5b783e:goto L5b783e;
case 0x5b7840:c.instructions+=1;goto B5b7840;
case 0x5b7842:goto L5b7842;
case 0x5b7843:c.instructions+=5;goto B5b7843;
case 0x5b7847:c.instructions+=4;goto B5b7847;
case 0x5b7848:c.instructions+=3;goto B5b7848;
case 0x5b784c:c.instructions+=2;goto B5b784c;
case 0x5b784d:c.instructions+=1;goto B5b784d;
case 0x5b784f:goto L5b784f;
case 0x5b7851:c.instructions+=1;goto B5b7851;
case 0x5b7857:goto L5b7857;
case 0x5b7859:c.instructions+=1;goto B5b7859;
case 0x5b785b:goto L5b785b;
case 0x5b785d:c.instructions+=1;goto B5b785d;
case 0x5b7860:goto L5b7860;
case 0x5b7864:c.instructions+=4;goto B5b7864;
case 0x5b786a:c.instructions+=3;goto B5b786a;
case 0x5b786b:c.instructions+=2;goto B5b786b;
case 0x5b786d:c.instructions+=1;goto B5b786d;
case 0x5b786f:goto L5b786f;
case 0x5b7873:c.instructions+=11;goto B5b7873;
case 0x5b7874:c.instructions+=10;goto B5b7874;
case 0x5b7878:c.instructions+=9;goto B5b7878;
case 0x5b787c:c.instructions+=8;goto B5b787c;
case 0x5b787d:c.instructions+=7;goto B5b787d;
case 0x5b7881:c.instructions+=6;goto B5b7881;
case 0x5b7882:c.instructions+=5;goto B5b7882;
case 0x5b7883:c.instructions+=4;goto B5b7883;
case 0x5b7888:c.instructions+=3;goto B5b7888;
case 0x5b7889:c.instructions+=2;goto B5b7889;
case 0x5b788d:c.instructions+=1;goto B5b788d;
case 0x5b788f:goto L5b788f;
case 0x5b7891:c.instructions+=13;goto B5b7891;
case 0x5b7893:c.instructions+=12;goto B5b7893;
case 0x5b7897:c.instructions+=11;goto B5b7897;
case 0x5b7898:c.instructions+=10;goto B5b7898;
case 0x5b789a:c.instructions+=9;goto B5b789a;
case 0x5b789c:c.instructions+=8;goto B5b789c;
case 0x5b789d:c.instructions+=7;goto B5b789d;
case 0x5b789e:c.instructions+=6;goto B5b789e;
case 0x5b78a3:c.instructions+=5;goto B5b78a3;
case 0x5b78a7:c.instructions+=4;goto B5b78a7;
case 0x5b78ac:c.instructions+=3;goto B5b78ac;
case 0x5b78ad:c.instructions+=2;goto B5b78ad;
case 0x5b78b5:c.instructions+=1;goto B5b78b5;
case 0x5b78bb:goto L5b78bb;
case 0x5b78bf:c.instructions+=11;goto B5b78bf;
case 0x5b78c0:c.instructions+=10;goto B5b78c0;
case 0x5b78c4:c.instructions+=9;goto B5b78c4;
case 0x5b78c8:c.instructions+=8;goto B5b78c8;
case 0x5b78c9:c.instructions+=7;goto B5b78c9;
case 0x5b78cd:c.instructions+=6;goto B5b78cd;
case 0x5b78ce:c.instructions+=5;goto B5b78ce;
case 0x5b78cf:c.instructions+=4;goto B5b78cf;
case 0x5b78d4:c.instructions+=3;goto B5b78d4;
case 0x5b78d5:c.instructions+=2;goto B5b78d5;
case 0x5b78d9:c.instructions+=1;goto B5b78d9;
case 0x5b78db:goto L5b78db;
case 0x5b78dd:c.instructions+=1;goto B5b78dd;
case 0x5b78df:goto L5b78df;
case 0x5b78e3:c.instructions+=2;goto B5b78e3;
case 0x5b78e4:c.instructions+=1;goto B5b78e4;
case 0x5b78e9:goto L5b78e9;
case 0x5b78ea:c.instructions+=3;goto B5b78ea;
case 0x5b78ed:c.instructions+=2;goto B5b78ed;
case 0x5b78f2:c.instructions+=1;goto B5b78f2;
case 0x5b78f8:goto L5b78f8;
case 0x5b78fc:c.instructions+=11;goto B5b78fc;
case 0x5b78fd:c.instructions+=10;goto B5b78fd;
case 0x5b7901:c.instructions+=9;goto B5b7901;
case 0x5b7905:c.instructions+=8;goto B5b7905;
case 0x5b7906:c.instructions+=7;goto B5b7906;
case 0x5b790a:c.instructions+=6;goto B5b790a;
case 0x5b790b:c.instructions+=5;goto B5b790b;
case 0x5b790c:c.instructions+=4;goto B5b790c;
case 0x5b7911:c.instructions+=3;goto B5b7911;
case 0x5b7912:c.instructions+=2;goto B5b7912;
case 0x5b7916:c.instructions+=1;goto B5b7916;
case 0x5b7918:goto L5b7918;
case 0x5b791a:c.instructions+=1;goto B5b791a;
case 0x5b791c:goto L5b791c;
case 0x5b7920:c.instructions+=2;goto B5b7920;
case 0x5b7921:c.instructions+=1;goto B5b7921;
case 0x5b7926:goto L5b7926;
case 0x5b7927:c.instructions+=3;goto B5b7927;
case 0x5b792a:c.instructions+=2;goto B5b792a;
case 0x5b792f:c.instructions+=1;goto B5b792f;
case 0x5b7935:goto L5b7935;
case 0x5b7939:c.instructions+=11;goto B5b7939;
case 0x5b793a:c.instructions+=10;goto B5b793a;
case 0x5b793e:c.instructions+=9;goto B5b793e;
case 0x5b7942:c.instructions+=8;goto B5b7942;
case 0x5b7943:c.instructions+=7;goto B5b7943;
case 0x5b7947:c.instructions+=6;goto B5b7947;
case 0x5b7948:c.instructions+=5;goto B5b7948;
case 0x5b7949:c.instructions+=4;goto B5b7949;
case 0x5b794e:c.instructions+=3;goto B5b794e;
case 0x5b794f:c.instructions+=2;goto B5b794f;
case 0x5b7953:c.instructions+=1;goto B5b7953;
case 0x5b7955:goto L5b7955;
case 0x5b7957:c.instructions+=1;goto B5b7957;
case 0x5b7959:goto L5b7959;
case 0x5b795e:c.instructions+=2;goto B5b795e;
case 0x5b7960:c.instructions+=1;goto B5b7960;
case 0x5b7962:goto L5b7962;
case 0x5b7967:c.instructions+=2;goto B5b7967;
case 0x5b7969:c.instructions+=1;goto B5b7969;
case 0x5b7970:goto L5b7970;
case 0x5b7972:c.instructions+=4;goto B5b7972;
case 0x5b7973:c.instructions+=3;goto B5b7973;
case 0x5b7977:c.instructions+=2;goto B5b7977;
case 0x5b7978:c.instructions+=1;goto B5b7978;
case 0x5b797d:goto L5b797d;
case 0x5b7980:c.instructions+=2;goto B5b7980;
case 0x5b7982:c.instructions+=1;goto B5b7982;
case 0x5b7984:goto L5b7984;
case 0x5b7987:c.instructions+=5;goto B5b7987;
case 0x5b798a:c.instructions+=4;goto B5b798a;
case 0x5b798b:c.instructions+=3;goto B5b798b;
case 0x5b798d:c.instructions+=2;goto B5b798d;
case 0x5b798f:c.instructions+=1;goto B5b798f;
case 0x5b7991:goto L5b7991;
case 0x5b7993:goto L5b7993;
case 0x5b7996:c.instructions+=3;goto B5b7996;
case 0x5b799d:c.instructions+=2;goto B5b799d;
case 0x5b79a2:c.instructions+=1;goto B5b79a2;
case 0x5b79a4:goto L5b79a4;
case 0x5b79aa:goto L5b79aa;
case 0x5b79ae:c.instructions+=11;goto B5b79ae;
case 0x5b79af:c.instructions+=10;goto B5b79af;
case 0x5b79b3:c.instructions+=9;goto B5b79b3;
case 0x5b79b7:c.instructions+=8;goto B5b79b7;
case 0x5b79b8:c.instructions+=7;goto B5b79b8;
case 0x5b79bc:c.instructions+=6;goto B5b79bc;
case 0x5b79bd:c.instructions+=5;goto B5b79bd;
case 0x5b79bf:c.instructions+=4;goto B5b79bf;
case 0x5b79c4:c.instructions+=3;goto B5b79c4;
case 0x5b79c5:c.instructions+=2;goto B5b79c5;
case 0x5b79c9:c.instructions+=1;goto B5b79c9;
case 0x5b79cb:goto L5b79cb;
case 0x5b79cd:c.instructions+=1;goto B5b79cd;
case 0x5b79cf:goto L5b79cf;
case 0x5b79d3:c.instructions+=3;goto B5b79d3;
case 0x5b79d8:c.instructions+=2;goto B5b79d8;
case 0x5b79d9:c.instructions+=1;goto B5b79d9;
case 0x5b79de:goto L5b79de;
case 0x5b79e1:c.instructions+=4;goto B5b79e1;
case 0x5b79e3:c.instructions+=3;goto B5b79e3;
case 0x5b79e6:c.instructions+=2;goto B5b79e6;
case 0x5b79eb:c.instructions+=1;goto B5b79eb;
case 0x5b79ed:goto L5b79ed;
case 0x5b79f4:goto L5b79f4;
case 0x5b79f8:c.instructions+=2;goto B5b79f8;
case 0x5b79f9:c.instructions+=1;goto B5b79f9;
case 0x5b79ff:goto L5b79ff;
case 0x5b7a00:c.instructions+=7;goto B5b7a00;
case 0x5b7a02:c.instructions+=6;goto B5b7a02;
case 0x5b7a03:c.instructions+=5;goto B5b7a03;
case 0x5b7a04:c.instructions+=4;goto B5b7a04;
case 0x5b7a05:c.instructions+=3;goto B5b7a05;
case 0x5b7a07:c.instructions+=2;goto B5b7a07;
case 0x5b7a08:c.instructions+=1;goto B5b7a08;
case 0x5b7a10:goto L5b7a10;
case 0x5b7a13:c.instructions+=4;goto B5b7a13;
case 0x5b7a17:c.instructions+=3;goto B5b7a17;
case 0x5b7a18:c.instructions+=2;goto B5b7a18;
case 0x5b7a20:c.instructions+=1;goto B5b7a20;
case 0x5b7a25:goto L5b7a25;
case 0x5b7a2a:c.instructions+=4;goto B5b7a2a;
case 0x5b7a2d:c.instructions+=3;goto B5b7a2d;
case 0x5b7a35:c.instructions+=2;goto B5b7a35;
case 0x5b7a3d:c.instructions+=1;goto B5b7a3d;
case 0x5b7a40:goto L5b7a40;
case 0x5b7a42:c.instructions+=3;goto B5b7a42;
case 0x5b7a43:c.instructions+=2;goto B5b7a43;
case 0x5b7a45:c.instructions+=1;goto B5b7a45;
case 0x5b7a47:goto L5b7a47;
case 0x5b7a49:c.instructions+=2;goto B5b7a49;
case 0x5b7a4d:c.instructions+=1;goto B5b7a4d;
case 0x5b7a4f:goto L5b7a4f;
case 0x5b7a57:goto L5b7a57;
case 0x5b7a5b:c.instructions+=2;goto B5b7a5b;
case 0x5b7a5c:c.instructions+=1;goto B5b7a5c;
case 0x5b7a61:goto L5b7a61;
case 0x5b7a64:c.instructions+=1;goto B5b7a64;
case 0x5b7a70:goto L5b7a70;
case 0x5b7a71:c.instructions+=2;goto B5b7a71;
case 0x5b7a73:c.instructions+=1;goto B5b7a73;
case 0x5b7a79:goto L5b7a79;
case 0x5b7a7b:c.instructions+=7;goto B5b7a7b;
case 0x5b7a81:c.instructions+=6;goto B5b7a81;
case 0x5b7a87:c.instructions+=5;goto B5b7a87;
case 0x5b7a8d:c.instructions+=4;goto B5b7a8d;
case 0x5b7a93:c.instructions+=3;goto B5b7a93;
case 0x5b7a99:c.instructions+=2;goto B5b7a99;
case 0x5b7a9f:c.instructions+=1;goto B5b7a9f;
case 0x5b7aa4:goto L5b7aa4;
case 0x5b7aa9:c.instructions+=2;goto B5b7aa9;
case 0x5b7aae:c.instructions+=1;goto B5b7aae;
case 0x5b7ab3:goto L5b7ab3;
case 0x5b7ab4:c.instructions+=2;goto B5b7ab4;
case 0x5b7ab5:c.instructions+=1;goto B5b7ab5;
case 0x5b7aba:goto L5b7aba;
case 0x5b7abd:c.instructions+=1;goto B5b7abd;
case 0x5b7ac2:goto L5b7ac2;
case 0x5b7ac4:c.instructions+=2;goto B5b7ac4;
case 0x5b7aca:c.instructions+=1;goto B5b7aca;
case 0x5b7acc:goto L5b7acc;
case 0x5b7ad2:c.instructions+=4;goto B5b7ad2;
case 0x5b7ad8:c.instructions+=3;goto B5b7ad8;
case 0x5b7adf:c.instructions+=2;goto B5b7adf;
case 0x5b7ae6:c.instructions+=1;goto B5b7ae6;
case 0x5b7aec:goto L5b7aec;
case 0x5b7aed:c.instructions+=1;goto B5b7aed;
case 0x5b7af0:goto L5b7af0;
case 0x5b7af5:c.instructions+=6;goto B5b7af5;
case 0x5b7af7:c.instructions+=5;goto B5b7af7;
case 0x5b7afa:c.instructions+=4;goto B5b7afa;
case 0x5b7afd:c.instructions+=3;goto B5b7afd;
case 0x5b7afe:c.instructions+=2;goto B5b7afe;
case 0x5b7b00:c.instructions+=1;goto B5b7b00;
case 0x5b7b10:goto L5b7b10;
case 0x5b7b15:c.instructions+=1;goto B5b7b15;
case 0x5b7b20:goto L5b7b20;
case 0x5b7b26:c.instructions+=8;goto B5b7b26;
case 0x5b7b27:c.instructions+=7;goto B5b7b27;
case 0x5b7b28:c.instructions+=6;goto B5b7b28;
case 0x5b7b29:c.instructions+=5;goto B5b7b29;
case 0x5b7b2a:c.instructions+=4;goto B5b7b2a;
case 0x5b7b2c:c.instructions+=3;goto B5b7b2c;
case 0x5b7b34:c.instructions+=2;goto B5b7b34;
case 0x5b7b39:c.instructions+=1;goto B5b7b39;
case 0x5b7b3d:goto L5b7b3d;
case 0x5b7b3f:goto L5b7b3f;
case 0x5b7b41:c.instructions+=4;goto B5b7b41;
case 0x5b7b42:c.instructions+=3;goto B5b7b42;
case 0x5b7b44:c.instructions+=2;goto B5b7b44;
case 0x5b7b49:c.instructions+=1;goto B5b7b49;
case 0x5b7b4e:goto L5b7b4e;
case 0x5b7b50:c.instructions+=2;goto B5b7b50;
case 0x5b7b53:c.instructions+=1;goto B5b7b53;
case 0x5b7b59:goto L5b7b59;
case 0x5b7b5f:c.instructions+=1;goto B5b7b5f;
case 0x5b7b60:goto L5b7b60;
case 0x5b7b64:c.instructions+=4;goto B5b7b64;
case 0x5b7b65:c.instructions+=3;goto B5b7b65;
case 0x5b7b66:c.instructions+=2;goto B5b7b66;
case 0x5b7b6e:c.instructions+=1;goto B5b7b6e;
case 0x5b7b73:goto L5b7b73;
case 0x5b7b75:c.instructions+=1;goto B5b7b75;
case 0x5b7b77:goto L5b7b77;
case 0x5b7b7b:c.instructions+=3;goto B5b7b7b;
case 0x5b7b7d:c.instructions+=2;goto B5b7b7d;
case 0x5b7b7e:c.instructions+=1;goto B5b7b7e;
case 0x5b7b83:goto L5b7b83;
case 0x5b7b86:c.instructions+=2;goto B5b7b86;
case 0x5b7b88:c.instructions+=1;goto B5b7b88;
case 0x5b7b8a:goto L5b7b8a;
case 0x5b7b8b:c.instructions+=2;goto B5b7b8b;
case 0x5b7b92:c.instructions+=1;goto B5b7b92;
case 0x5b7b94:goto L5b7b94;
case 0x5b7b96:c.instructions+=4;goto B5b7b96;
case 0x5b7b99:c.instructions+=3;goto B5b7b99;
case 0x5b7b9a:c.instructions+=2;goto B5b7b9a;
case 0x5b7b9c:c.instructions+=1;goto B5b7b9c;
case 0x5b7b9e:goto L5b7b9e;
case 0x5b7ba0:goto L5b7ba0;
case 0x5b7ba2:goto L5b7ba2;
case 0x5b7ba6:c.instructions+=4;goto B5b7ba6;
case 0x5b7bad:c.instructions+=3;goto B5b7bad;
case 0x5b7bae:c.instructions+=2;goto B5b7bae;
case 0x5b7bb0:c.instructions+=1;goto B5b7bb0;
case 0x5b7bb2:goto L5b7bb2;
case 0x5b7bb9:c.instructions+=4;goto B5b7bb9;
case 0x5b7bc0:c.instructions+=3;goto B5b7bc0;
case 0x5b7bc1:c.instructions+=2;goto B5b7bc1;
case 0x5b7bc2:c.instructions+=1;goto B5b7bc2;
case 0x5b7bc7:goto L5b7bc7;
case 0x5b7bca:c.instructions+=2;goto B5b7bca;
case 0x5b7bcc:c.instructions+=1;goto B5b7bcc;
case 0x5b7bce:goto L5b7bce;
case 0x5b7bcf:goto L5b7bcf;
case 0x5b7bd3:c.instructions+=3;goto B5b7bd3;
case 0x5b7bd4:c.instructions+=2;goto B5b7bd4;
case 0x5b7bd5:c.instructions+=1;goto B5b7bd5;
case 0x5b7bda:goto L5b7bda;
case 0x5b7bdc:c.instructions+=1;goto B5b7bdc;
case 0x5b7bde:goto L5b7bde;
case 0x5b7bdf:c.instructions+=1;goto B5b7bdf;
case 0x5b7be5:goto L5b7be5;
case 0x5b7bec:c.instructions+=3;goto B5b7bec;
case 0x5b7bed:c.instructions+=2;goto B5b7bed;
case 0x5b7bef:c.instructions+=1;goto B5b7bef;
case 0x5b7bf1:goto L5b7bf1;
case 0x5b7bf3:c.instructions+=1;goto B5b7bf3;
case 0x5b7bf5:goto L5b7bf5;
case 0x5b7bfa:c.instructions+=1;goto B5b7bfa;
case 0x5b7bfc:goto L5b7bfc;
case 0x5b7bfe:c.instructions+=3;goto B5b7bfe;
case 0x5b7bff:c.instructions+=2;goto B5b7bff;
case 0x5b7c01:c.instructions+=1;goto B5b7c01;
case 0x5b7c06:goto L5b7c06;
case 0x5b7c08:c.instructions+=2;goto B5b7c08;
case 0x5b7c0b:c.instructions+=1;goto B5b7c0b;
case 0x5b7c11:goto L5b7c11;
case 0x5b7c12:c.instructions+=6;goto B5b7c12;
case 0x5b7c13:c.instructions+=5;goto B5b7c13;
case 0x5b7c14:c.instructions+=4;goto B5b7c14;
case 0x5b7c16:c.instructions+=3;goto B5b7c16;
case 0x5b7c17:c.instructions+=2;goto B5b7c17;
case 0x5b7c1d:c.instructions+=1;goto B5b7c1d;
case 0x5b7c1e:goto L5b7c1e;
case 0x5b7c20:c.instructions+=9;goto B5b7c20;
case 0x5b7c22:c.instructions+=8;goto B5b7c22;
case 0x5b7c23:c.instructions+=7;goto B5b7c23;
case 0x5b7c24:c.instructions+=6;goto B5b7c24;
case 0x5b7c27:c.instructions+=5;goto B5b7c27;
case 0x5b7c28:c.instructions+=4;goto B5b7c28;
case 0x5b7c2a:c.instructions+=3;goto B5b7c2a;
case 0x5b7c2b:c.instructions+=2;goto B5b7c2b;
case 0x5b7c31:c.instructions+=1;goto B5b7c31;
case 0x5b7c40:goto L5b7c40;
case 0x5b7c41:c.instructions+=1;goto B5b7c41;
case 0x5b7c46:goto L5b7c46;
case 0x5b7c49:c.instructions+=1;goto B5b7c49;
case 0x5b7c4b:goto L5b7c4b;
case 0x5b7c52:goto L5b7c52;
case 0x5b7c57:c.instructions+=1;goto B5b7c57;
case 0x5b7c59:goto L5b7c59;
case 0x5b7c5e:c.instructions+=1;goto B5b7c5e;
case 0x5b7c60:goto L5b7c60;
case 0x5b7c65:c.instructions+=1;goto B5b7c65;
case 0x5b7c67:goto L5b7c67;
case 0x5b7c6c:c.instructions+=1;goto B5b7c6c;
case 0x5b7c6e:goto L5b7c6e;
case 0x5b7c73:c.instructions+=1;goto B5b7c73;
case 0x5b7c75:goto L5b7c75;
case 0x5b7c7a:c.instructions+=1;goto B5b7c7a;
case 0x5b7c7c:goto L5b7c7c;
case 0x5b7c81:c.instructions+=1;goto B5b7c81;
case 0x5b7c83:goto L5b7c83;
case 0x5b7c88:c.instructions+=1;goto B5b7c88;
case 0x5b7c8a:goto L5b7c8a;
case 0x5b7c8f:c.instructions+=1;goto B5b7c8f;
case 0x5b7c91:goto L5b7c91;
case 0x5b7c96:c.instructions+=1;goto B5b7c96;
case 0x5b7c98:goto L5b7c98;
case 0x5b7c9d:goto L5b7c9d;
case 0x5b7ca0:c.instructions+=1;goto B5b7ca0;
case 0x5b7ca2:goto L5b7ca2;
case 0x5b7ca9:goto L5b7ca9;
case 0x5b7cae:c.instructions+=1;goto B5b7cae;
case 0x5b7cb0:goto L5b7cb0;
case 0x5b7cb5:c.instructions+=1;goto B5b7cb5;
case 0x5b7cb7:goto L5b7cb7;
case 0x5b7cbc:c.instructions+=1;goto B5b7cbc;
case 0x5b7cbe:goto L5b7cbe;
case 0x5b7cc3:c.instructions+=1;goto B5b7cc3;
case 0x5b7cc5:goto L5b7cc5;
case 0x5b7cc9:goto L5b7cc9;
case 0x5b7ccb:c.instructions+=6;goto B5b7ccb;
case 0x5b7ccd:c.instructions+=5;goto B5b7ccd;
case 0x5b7ccf:c.instructions+=4;goto B5b7ccf;
case 0x5b7cd0:c.instructions+=3;goto B5b7cd0;
case 0x5b7cd5:c.instructions+=2;goto B5b7cd5;
case 0x5b7cd7:c.instructions+=1;goto B5b7cd7;
case 0x5b7cdd:goto L5b7cdd;
case 0x5b7cde:c.instructions+=1;goto B5b7cde;
case 0x5b7d40:goto L5b7d40;
case 0x5b7d41:c.instructions+=17;goto B5b7d41;
case 0x5b7d45:c.instructions+=16;goto B5b7d45;
case 0x5b7d49:c.instructions+=15;goto B5b7d49;
case 0x5b7d4d:c.instructions+=14;goto B5b7d4d;
case 0x5b7d51:c.instructions+=13;goto B5b7d51;
case 0x5b7d55:c.instructions+=12;goto B5b7d55;
case 0x5b7d56:c.instructions+=11;goto B5b7d56;
case 0x5b7d5c:c.instructions+=10;goto B5b7d5c;
case 0x5b7d60:c.instructions+=9;goto B5b7d60;
case 0x5b7d63:c.instructions+=8;goto B5b7d63;
case 0x5b7d64:c.instructions+=7;goto B5b7d64;
case 0x5b7d68:c.instructions+=6;goto B5b7d68;
case 0x5b7d6c:c.instructions+=5;goto B5b7d6c;
case 0x5b7d6d:c.instructions+=4;goto B5b7d6d;
case 0x5b7d73:c.instructions+=3;goto B5b7d73;
case 0x5b7d76:c.instructions+=2;goto B5b7d76;
case 0x5b7d77:c.instructions+=1;goto B5b7d77;
case 0x5b7d7c:goto L5b7d7c;
case 0x5b7d7d:c.instructions+=1;goto B5b7d7d;
case 0x5b7d80:goto L5b7d80;
case 0x5b7d81:c.instructions+=17;goto B5b7d81;
case 0x5b7d85:c.instructions+=16;goto B5b7d85;
case 0x5b7d89:c.instructions+=15;goto B5b7d89;
case 0x5b7d8d:c.instructions+=14;goto B5b7d8d;
case 0x5b7d91:c.instructions+=13;goto B5b7d91;
case 0x5b7d95:c.instructions+=12;goto B5b7d95;
case 0x5b7d96:c.instructions+=11;goto B5b7d96;
case 0x5b7d9c:c.instructions+=10;goto B5b7d9c;
case 0x5b7da0:c.instructions+=9;goto B5b7da0;
case 0x5b7da3:c.instructions+=8;goto B5b7da3;
case 0x5b7da4:c.instructions+=7;goto B5b7da4;
case 0x5b7da8:c.instructions+=6;goto B5b7da8;
case 0x5b7dac:c.instructions+=5;goto B5b7dac;
case 0x5b7dad:c.instructions+=4;goto B5b7dad;
case 0x5b7db3:c.instructions+=3;goto B5b7db3;
case 0x5b7db6:c.instructions+=2;goto B5b7db6;
case 0x5b7db7:c.instructions+=1;goto B5b7db7;
case 0x5b7dbc:goto L5b7dbc;
case 0x5b7dbd:c.instructions+=1;goto B5b7dbd;
case 0x5b7dc0:goto L5b7dc0;
case 0x5b7dc4:c.instructions+=5;goto B5b7dc4;
case 0x5b7dc6:c.instructions+=4;goto B5b7dc6;
case 0x5b7dca:c.instructions+=3;goto B5b7dca;
case 0x5b7dcb:c.instructions+=2;goto B5b7dcb;
case 0x5b7dcc:c.instructions+=1;goto B5b7dcc;
case 0x5b7dd1:goto L5b7dd1;
case 0x5b7dd4:c.instructions+=1;goto B5b7dd4;
case 0x5b7de0:goto L5b7de0;
case 0x5b7de1:c.instructions+=24;goto B5b7de1;
case 0x5b7de3:c.instructions+=23;goto B5b7de3;
case 0x5b7de6:c.instructions+=22;goto B5b7de6;
case 0x5b7de8:c.instructions+=21;goto B5b7de8;
case 0x5b7dea:c.instructions+=20;goto B5b7dea;
case 0x5b7df0:c.instructions+=19;goto B5b7df0;
case 0x5b7df3:c.instructions+=18;goto B5b7df3;
case 0x5b7df9:c.instructions+=17;goto B5b7df9;
case 0x5b7dfc:c.instructions+=16;goto B5b7dfc;
case 0x5b7e02:c.instructions+=15;goto B5b7e02;
case 0x5b7e0c:c.instructions+=14;goto B5b7e0c;
case 0x5b7e0f:c.instructions+=13;goto B5b7e0f;
case 0x5b7e15:c.instructions+=12;goto B5b7e15;
case 0x5b7e18:c.instructions+=11;goto B5b7e18;
case 0x5b7e1e:c.instructions+=10;goto B5b7e1e;
case 0x5b7e21:c.instructions+=9;goto B5b7e21;
case 0x5b7e26:c.instructions+=8;goto B5b7e26;
case 0x5b7e28:c.instructions+=7;goto B5b7e28;
case 0x5b7e2a:c.instructions+=6;goto B5b7e2a;
case 0x5b7e30:c.instructions+=5;goto B5b7e30;
case 0x5b7e3a:c.instructions+=4;goto B5b7e3a;
case 0x5b7e44:c.instructions+=3;goto B5b7e44;
case 0x5b7e46:c.instructions+=2;goto B5b7e46;
case 0x5b7e47:c.instructions+=1;goto B5b7e47;
case 0x5b7e4d:goto L5b7e4d;
case 0x5b7e57:c.instructions+=3;goto B5b7e57;
case 0x5b7e5c:c.instructions+=2;goto B5b7e5c;
case 0x5b7e5d:c.instructions+=1;goto B5b7e5d;
case 0x5b7e60:goto L5b7e60;
case 0x5b7e65:c.instructions+=3;goto B5b7e65;
case 0x5b7e67:c.instructions+=2;goto B5b7e67;
case 0x5b7e6c:c.instructions+=1;goto B5b7e6c;
case 0x5b7e6e:goto L5b7e6e;
case 0x5b7e78:goto L5b7e78;
case 0x5b7e80:goto L5b7e80;
case 0x5b7e85:c.instructions+=5;goto B5b7e85;
case 0x5b7e87:c.instructions+=4;goto B5b7e87;
case 0x5b7e89:c.instructions+=3;goto B5b7e89;
case 0x5b7e8b:c.instructions+=2;goto B5b7e8b;
case 0x5b7e8c:c.instructions+=1;goto B5b7e8c;
case 0x5b7e92:goto L5b7e92;
case 0x5b7e97:c.instructions+=1;goto B5b7e97;
case 0x5b7ea0:goto L5b7ea0;
case 0x5b7ea7:c.instructions+=9;goto B5b7ea7;
case 0x5b7eac:c.instructions+=8;goto B5b7eac;
case 0x5b7eae:c.instructions+=7;goto B5b7eae;
case 0x5b7eb4:c.instructions+=6;goto B5b7eb4;
case 0x5b7eb7:c.instructions+=5;goto B5b7eb7;
case 0x5b7eb9:c.instructions+=4;goto B5b7eb9;
case 0x5b7ebd:c.instructions+=3;goto B5b7ebd;
case 0x5b7ec1:c.instructions+=2;goto B5b7ec1;
case 0x5b7ec7:c.instructions+=1;goto B5b7ec7;
case 0x5b7ed0:goto L5b7ed0;
case 0x5b7ed4:c.instructions+=2;goto B5b7ed4;
case 0x5b7ed9:c.instructions+=1;goto B5b7ed9;
case 0x5b7ee0:goto L5b7ee0;
case 0x5b7ee1:c.instructions+=6;goto B5b7ee1;
case 0x5b7ee7:c.instructions+=5;goto B5b7ee7;
case 0x5b7eea:c.instructions+=4;goto B5b7eea;
case 0x5b7eec:c.instructions+=3;goto B5b7eec;
case 0x5b7eee:c.instructions+=2;goto B5b7eee;
case 0x5b7ef0:c.instructions+=1;goto B5b7ef0;
case 0x5b7ef2:goto L5b7ef2;
case 0x5b7ef7:c.instructions+=5;goto B5b7ef7;
case 0x5b7efc:c.instructions+=4;goto B5b7efc;
case 0x5b7f02:c.instructions+=3;goto B5b7f02;
case 0x5b7f08:c.instructions+=2;goto B5b7f08;
case 0x5b7f0e:c.instructions+=1;goto B5b7f0e;
case 0x5b7f14:goto L5b7f14;
case 0x5b7f1a:c.instructions+=1;goto B5b7f1a;
case 0x5b7f1c:goto L5b7f1c;
case 0x5b7f21:c.instructions+=5;goto B5b7f21;
case 0x5b7f26:c.instructions+=4;goto B5b7f26;
case 0x5b7f2c:c.instructions+=3;goto B5b7f2c;
case 0x5b7f32:c.instructions+=2;goto B5b7f32;
case 0x5b7f38:c.instructions+=1;goto B5b7f38;
case 0x5b7f3e:goto L5b7f3e;
case 0x5b7f44:c.instructions+=1;goto B5b7f44;
case 0x5b7f46:goto L5b7f46;
case 0x5b7f4b:c.instructions+=5;goto B5b7f4b;
case 0x5b7f50:c.instructions+=4;goto B5b7f50;
case 0x5b7f56:c.instructions+=3;goto B5b7f56;
case 0x5b7f5c:c.instructions+=2;goto B5b7f5c;
case 0x5b7f62:c.instructions+=1;goto B5b7f62;
case 0x5b7f68:goto L5b7f68;
case 0x5b7f6e:c.instructions+=1;goto B5b7f6e;
case 0x5b7f70:goto L5b7f70;
case 0x5b7f75:c.instructions+=5;goto B5b7f75;
case 0x5b7f7a:c.instructions+=4;goto B5b7f7a;
case 0x5b7f80:c.instructions+=3;goto B5b7f80;
case 0x5b7f86:c.instructions+=2;goto B5b7f86;
case 0x5b7f8c:c.instructions+=1;goto B5b7f8c;
case 0x5b7f92:goto L5b7f92;
case 0x5b7f98:c.instructions+=1;goto B5b7f98;
case 0x5b7f9a:goto L5b7f9a;
case 0x5b7f9f:c.instructions+=5;goto B5b7f9f;
case 0x5b7fa4:c.instructions+=4;goto B5b7fa4;
case 0x5b7faa:c.instructions+=3;goto B5b7faa;
case 0x5b7fb0:c.instructions+=2;goto B5b7fb0;
case 0x5b7fb6:c.instructions+=1;goto B5b7fb6;
case 0x5b7fbc:goto L5b7fbc;
case 0x5b7fc2:c.instructions+=2;goto B5b7fc2;
case 0x5b7fc3:c.instructions+=1;goto B5b7fc3;
case 0x5b7fc5:goto L5b7fc5;
case 0x5b7fca:c.instructions+=5;goto B5b7fca;
case 0x5b7fcf:c.instructions+=4;goto B5b7fcf;
case 0x5b7fd5:c.instructions+=3;goto B5b7fd5;
case 0x5b7fdb:c.instructions+=2;goto B5b7fdb;
case 0x5b7fe1:c.instructions+=1;goto B5b7fe1;
case 0x5b7fe7:goto L5b7fe7;
case 0x5b7ff0:goto L5b7ff0;
case 0x5b7ff5:c.instructions+=2;goto B5b7ff5;
case 0x5b7fff:c.instructions+=1;goto B5b7fff;
default:missing_instruction(c.pc);}
B5b7001:L5b7001:{c.instructions+=12;NFSU2_TR(0x5b7001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7004:{NFSU2_TR(0x5b7004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7007:{NFSU2_TR(0x5b7007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b700a:{NFSU2_TR(0x5b700a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b700d:{NFSU2_TR(0x5b700d);
u8 U[4];
w4(U+0,u32(0x7a277cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7012:{NFSU2_TR(0x5b7012);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7013:{NFSU2_TR(0x5b7013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7016:{NFSU2_TR(0x5b7016);
u8 U[4];
w4(U+0,u32(0x7a2590ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b701c:{NFSU2_TR(0x5b701c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x7a2584ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7023:{NFSU2_TR(0x5b7023);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7026:{NFSU2_TR(0x5b7026);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7029:{NFSU2_TR(0x5b7029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b702eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b702e:L5b702e:{c.instructions+=3;NFSU2_TR(0x5b702e);
__builtin_memmove((R+8),gp(0x86b2e0),4);
}
B5b7034:{NFSU2_TR(0x5b7034);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7035:{NFSU2_TR(0x5b7035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b703aull));
TAIL_STATIC(0x440e50u,440);
}
B5b703a:L5b703a:{c.instructions+=5;NFSU2_TR(0x5b703a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b703d:{NFSU2_TR(0x5b703d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7040:{NFSU2_TR(0x5b7040);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7042:{NFSU2_TR(0x5b7042);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b7046:{NFSU2_TR(0x5b7046);
if(r1(R+518)){{goto L5b705b;}}
}
B5b7048:L5b7048:{c.instructions+=5;NFSU2_TR(0x5b7048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b704b:{NFSU2_TR(0x5b704b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
}
B5b7051:{NFSU2_TR(0x5b7051);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7052:{NFSU2_TR(0x5b7052);
__builtin_memmove((R+4),(R+0),4);
}
B5b7054:{NFSU2_TR(0x5b7054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7059ull));
TAIL_STATIC(0x5a7f30u,5a7);
}
B5b7059:L5b7059:{c.instructions+=1;NFSU2_TR(0x5b7059);
{goto L5b705d;}
}
B5b705b:L5b705b:{c.instructions+=1;NFSU2_TR(0x5b705b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b705d:L5b705d:{c.instructions+=4;NFSU2_TR(0x5b705d);
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
B5b705f:{NFSU2_TR(0x5b705f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b7062:{NFSU2_TR(0x5b7062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7065:{NFSU2_TR(0x5b7065);
if(r1(R+518)){{goto L5b706c;}}
}
B5b7067:L5b7067:{c.instructions+=2;NFSU2_TR(0x5b7067);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b706a:{NFSU2_TR(0x5b706a);
{goto L5b706e;}
}
B5b706c:L5b706c:{c.instructions+=1;NFSU2_TR(0x5b706c);
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
B5b706e:L5b706e:{c.instructions+=9;NFSU2_TR(0x5b706e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7071:{NFSU2_TR(0x5b7071);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7074:{NFSU2_TR(0x5b7074);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b7076:{NFSU2_TR(0x5b7076);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7079:{NFSU2_TR(0x5b7079);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b707c:{NFSU2_TR(0x5b707c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b707e:{NFSU2_TR(0x5b707e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b7080:{NFSU2_TR(0x5b7080);
__builtin_memmove((R+4),(R+0),4);
}
B5b7082:{NFSU2_TR(0x5b7082);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7085ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b7085:L5b7085:{c.instructions+=21;NFSU2_TR(0x5b7085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7088:{NFSU2_TR(0x5b7088);
s4(0x7fc800,u32(0x0ull));
}
B5b7092:{NFSU2_TR(0x5b7092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7095:{NFSU2_TR(0x5b7095);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b709b:{NFSU2_TR(0x5b709b);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b70a1:{NFSU2_TR(0x5b70a1);
__builtin_memmove((R+0),gp(0x86b390),4);
}
B5b70a6:{NFSU2_TR(0x5b70a6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b70a8:{NFSU2_TR(0x5b70a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b70ae:{NFSU2_TR(0x5b70ae);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b70b4:{NFSU2_TR(0x5b70b4);
__builtin_memmove((R+4),(R+0),4);
}
B5b70b6:{NFSU2_TR(0x5b70b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b70b7:{NFSU2_TR(0x5b70b7);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b70bd:{NFSU2_TR(0x5b70bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b70c0:{NFSU2_TR(0x5b70c0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b70c2:{NFSU2_TR(0x5b70c2);
u8 U[4];
w4(U+0,u32(0x260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b70c7:{NFSU2_TR(0x5b70c7);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b70ca:{NFSU2_TR(0x5b70ca);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b70cd:{NFSU2_TR(0x5b70cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b70d3:{NFSU2_TR(0x5b70d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b70d6:{NFSU2_TR(0x5b70d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b70dc:{NFSU2_TR(0x5b70dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b70e1ull));
TAIL_STATIC(0x440820u,440);
}
B5b70e1:L5b70e1:{c.instructions+=6;NFSU2_TR(0x5b70e1);
__builtin_memmove((R+28),(R+0),4);
}
B5b70e3:{NFSU2_TR(0x5b70e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b70e6:{NFSU2_TR(0x5b70e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b70e9:{NFSU2_TR(0x5b70e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b70eb:{NFSU2_TR(0x5b70eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b70ef:{NFSU2_TR(0x5b70ef);
if(r1(R+518)){{goto L5b712b;}}
}
B5b70f1:L5b70f1:{c.instructions+=9;NFSU2_TR(0x5b70f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b70f4:{NFSU2_TR(0x5b70f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b70f7:{NFSU2_TR(0x5b70f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b70fa:{NFSU2_TR(0x5b70fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b70fd:{NFSU2_TR(0x5b70fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b70fe:{NFSU2_TR(0x5b70fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b70ff:{NFSU2_TR(0x5b70ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7100:{NFSU2_TR(0x5b7100);
__builtin_memmove((R+4),(R+28),4);
}
B5b7102:{NFSU2_TR(0x5b7102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7107ull));
TAIL_STATIC(0x5b0030u,5b0);
}
B5b7107:L5b7107:{c.instructions+=6;NFSU2_TR(0x5b7107);
u8 U[4];
w4(U+0,u32(0x7a25b0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5b710d:{NFSU2_TR(0x5b710d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7117:{NFSU2_TR(0x5b7117);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b711d:{NFSU2_TR(0x5b711d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7123:{NFSU2_TR(0x5b7123);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7129:{NFSU2_TR(0x5b7129);
{goto L5b712d;}
}
B5b712b:L5b712b:{c.instructions+=1;NFSU2_TR(0x5b712b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b712d:L5b712d:{c.instructions+=8;NFSU2_TR(0x5b712d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7130:{NFSU2_TR(0x5b7130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7133:{NFSU2_TR(0x5b7133);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7136:{NFSU2_TR(0x5b7136);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b713b:{NFSU2_TR(0x5b713b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b713d:{NFSU2_TR(0x5b713d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7140:{NFSU2_TR(0x5b7140);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b7143:{NFSU2_TR(0x5b7143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7148ull));
TAIL_STATIC(0x5b6990u,5b6);
}
B5b7148:L5b7148:{c.instructions+=5;NFSU2_TR(0x5b7148);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b714b:{NFSU2_TR(0x5b714b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b7151:{NFSU2_TR(0x5b7151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b7153:{NFSU2_TR(0x5b7153);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b7156:{NFSU2_TR(0x5b7156);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b71a4;}}
}
B5b7158:L5b7158:{c.instructions+=6;NFSU2_TR(0x5b7158);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b715b:{NFSU2_TR(0x5b715b);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7161:{NFSU2_TR(0x5b7161);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b7164:{NFSU2_TR(0x5b7164);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b7166:{NFSU2_TR(0x5b7166);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b7169:{NFSU2_TR(0x5b7169);
if(r1(R+514)){{goto L5b7173;}}
}
B5b716b:L5b716b:{c.instructions+=2;NFSU2_TR(0x5b716b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b716d:{NFSU2_TR(0x5b716d);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7173:L5b7173:{c.instructions+=11;NFSU2_TR(0x5b7173);
{u32 ea_=u32(u32(8001896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7179:{NFSU2_TR(0x5b7179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b717c:{NFSU2_TR(0x5b717c);
{u32 ea_=u32(u32(8001892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b7182:{NFSU2_TR(0x5b7182);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b7184:{NFSU2_TR(0x5b7184);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b718a:{NFSU2_TR(0x5b718a);
{u32 ea_=u32(u32(8001892u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b7190:{NFSU2_TR(0x5b7190);
{u32 ea_=u32(r4(R+0)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7196:{NFSU2_TR(0x5b7196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7199:{NFSU2_TR(0x5b7199);
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
B5b719b:{NFSU2_TR(0x5b719b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b719d:{NFSU2_TR(0x5b719d);
if(r1(R+518)){{goto L5b71ac;}}
}
B5b719f:L5b719f:{c.instructions+=2;NFSU2_TR(0x5b719f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b71a2:{NFSU2_TR(0x5b71a2);
{goto L5b71ae;}
}
B5b71a4:L5b71a4:{c.instructions+=2;NFSU2_TR(0x5b71a4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b71aa:{NFSU2_TR(0x5b71aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7173u);}goto L5b7173;}
}
B5b71ac:L5b71ac:{c.instructions+=1;NFSU2_TR(0x5b71ac);
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
B5b71ae:L5b71ae:{c.instructions+=8;NFSU2_TR(0x5b71ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b71b1:{NFSU2_TR(0x5b71b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b71b4:{NFSU2_TR(0x5b71b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5b71b6:{NFSU2_TR(0x5b71b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71b9:{NFSU2_TR(0x5b71b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71bc:{NFSU2_TR(0x5b71bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b71be:{NFSU2_TR(0x5b71be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b71c0:{NFSU2_TR(0x5b71c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b71c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b71c3:L5b71c3:{c.instructions+=4;NFSU2_TR(0x5b71c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b71c6:{NFSU2_TR(0x5b71c6);
__builtin_memmove((R+0),gp(0x86b2f4),4);
}
B5b71cb:{NFSU2_TR(0x5b71cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b71cc:{NFSU2_TR(0x5b71cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b71d1ull));
TAIL_STATIC(0x440e50u,440);
}
B5b71d1:L5b71d1:{c.instructions+=3;NFSU2_TR(0x5b71d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b71d4:{NFSU2_TR(0x5b71d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b71d6:{NFSU2_TR(0x5b71d6);
if(r1(R+518)){{goto L5b71ff;}}
}
B5b71d8:L5b71d8:{c.instructions+=12;NFSU2_TR(0x5b71d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b71db:{NFSU2_TR(0x5b71db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b71de:{NFSU2_TR(0x5b71de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x260ull))));
}
B5b71e4:{NFSU2_TR(0x5b71e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b71e6:{NFSU2_TR(0x5b71e6);
w4(R+4,u32(0x3f800000ull));
}
B5b71eb:{NFSU2_TR(0x5b71eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71ee:{NFSU2_TR(0x5b71ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71f1:{NFSU2_TR(0x5b71f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71f4:{NFSU2_TR(0x5b71f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71f7:{NFSU2_TR(0x5b71f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71fa:{NFSU2_TR(0x5b71fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b71fd:{NFSU2_TR(0x5b71fd);
{goto L5b7201;}
}
B5b71ff:L5b71ff:{c.instructions+=1;NFSU2_TR(0x5b71ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b7201:L5b7201:{c.instructions+=7;NFSU2_TR(0x5b7201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7204:{NFSU2_TR(0x5b7204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7207:{NFSU2_TR(0x5b7207);
{u32 ea_=u32(r4(R+4)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b720d:{NFSU2_TR(0x5b720d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7210:{NFSU2_TR(0x5b7210);
__builtin_memmove((R+4),(R+24),4);
}
B5b7212:{NFSU2_TR(0x5b7212);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7218:{NFSU2_TR(0x5b7218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b721dull));
TAIL_STATIC(0x5a29a0u,5a2);
}
B5b721d:L5b721d:{c.instructions+=5;NFSU2_TR(0x5b721d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7220:{NFSU2_TR(0x5b7220);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7223:{NFSU2_TR(0x5b7223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7226:{NFSU2_TR(0x5b7226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7229:{NFSU2_TR(0x5b7229);
__builtin_memmove((R+16),(R+16),4);
}
B5b7230:L5b7230:{c.instructions+=3;NFSU2_TR(0x5b7230);
__builtin_memmove((R+0),gp(0x86b2e8),4);
}
B5b7235:{NFSU2_TR(0x5b7235);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7236:{NFSU2_TR(0x5b7236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b723bull));
TAIL_STATIC(0x440e50u,440);
}
B5b723b:L5b723b:{c.instructions+=6;NFSU2_TR(0x5b723b);
__builtin_memmove((R+4),(R+0),4);
}
B5b723d:{NFSU2_TR(0x5b723d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b7240:{NFSU2_TR(0x5b7240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7243:{NFSU2_TR(0x5b7243);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7245:{NFSU2_TR(0x5b7245);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b7249:{NFSU2_TR(0x5b7249);
if(r1(R+518)){{goto L5b727e;}}
}
B5b724b:L5b724b:{c.instructions+=17;NFSU2_TR(0x5b724b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b724e:{NFSU2_TR(0x5b724e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7251:{NFSU2_TR(0x5b7251);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B5b7254:{NFSU2_TR(0x5b7254);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7255:{NFSU2_TR(0x5b7255);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x270ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b725b:{NFSU2_TR(0x5b725b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b725c:{NFSU2_TR(0x5b725c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b725f:{NFSU2_TR(0x5b725f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5b7260:{NFSU2_TR(0x5b7260);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5b7262:{NFSU2_TR(0x5b7262);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5b7264:{NFSU2_TR(0x5b7264);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b7267:{NFSU2_TR(0x5b7267);
u8 U[12];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b726e:{NFSU2_TR(0x5b726e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7271:{NFSU2_TR(0x5b7271);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7272:{NFSU2_TR(0x5b7272);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b7276:{NFSU2_TR(0x5b7276);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7277:{NFSU2_TR(0x5b7277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b727cull));
TAIL_STATIC(0x5a8160u,5a8);
}
B5b727c:L5b727c:{c.instructions+=1;NFSU2_TR(0x5b727c);
{goto L5b7280;}
}
B5b727e:L5b727e:{c.instructions+=1;NFSU2_TR(0x5b727e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b7280:L5b7280:{c.instructions+=11;NFSU2_TR(0x5b7280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7283:{NFSU2_TR(0x5b7283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b7285:{NFSU2_TR(0x5b7285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7288:{NFSU2_TR(0x5b7288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b728b:{NFSU2_TR(0x5b728b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5b728e:{NFSU2_TR(0x5b728e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5b7291:{NFSU2_TR(0x5b7291);
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
B5b7296:{NFSU2_TR(0x5b7296);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b7299:{NFSU2_TR(0x5b7299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b729c:{NFSU2_TR(0x5b729c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b729f:{NFSU2_TR(0x5b729f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7230u);}goto L5b7230;}}
}
B5b72a1:L5b72a1:{c.instructions+=2;NFSU2_TR(0x5b72a1);
__builtin_memmove((R+4),(R+24),4);
}
B5b72a3:{NFSU2_TR(0x5b72a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b72a8ull));
TAIL_STATIC(0x5a2a60u,5a2);
}
B5b72a8:L5b72a8:{c.instructions+=2;NFSU2_TR(0x5b72a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b72ab:{NFSU2_TR(0x5b72ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b72b0ull));
TAIL_STATIC(0x5a4410u,5a4);
}
B5b72b0:L5b72b0:{c.instructions+=9;NFSU2_TR(0x5b72b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b72b3:{NFSU2_TR(0x5b72b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b72b4:{NFSU2_TR(0x5b72b4);
__builtin_memmove((R+0),(R+24),4);
}
B5b72b6:{NFSU2_TR(0x5b72b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b72b7:{NFSU2_TR(0x5b72b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b72b8:{NFSU2_TR(0x5b72b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b72bf:{NFSU2_TR(0x5b72bf);
__builtin_memmove((R+16),(R+20),4);
}
B5b72c1:{NFSU2_TR(0x5b72c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b72c2:{NFSU2_TR(0x5b72c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b72d0:L5b72d0:{c.instructions+=8;NFSU2_TR(0x5b72d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b72d1:{NFSU2_TR(0x5b72d1);
__builtin_memmove((R+20),(R+16),4);
}
B5b72d3:{NFSU2_TR(0x5b72d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5b72d6:{NFSU2_TR(0x5b72d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b72d7:{NFSU2_TR(0x5b72d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b72d8:{NFSU2_TR(0x5b72d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b72d9:{NFSU2_TR(0x5b72d9);
__builtin_memmove((R+24),(R+4),4);
}
B5b72db:{NFSU2_TR(0x5b72db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b72e0ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5b72e0:L5b72e0:{c.instructions+=17;NFSU2_TR(0x5b72e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b72e3:{NFSU2_TR(0x5b72e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3c8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b72ea:{NFSU2_TR(0x5b72ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b72ed:{NFSU2_TR(0x5b72ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3c9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b72f4:{NFSU2_TR(0x5b72f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b72f7:{NFSU2_TR(0x5b72f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3caull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b72fe:{NFSU2_TR(0x5b72fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7301:{NFSU2_TR(0x5b7301);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b7308:{NFSU2_TR(0x5b7308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b730b:{NFSU2_TR(0x5b730b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
}
B5b7310:{NFSU2_TR(0x5b7310);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b7312:{NFSU2_TR(0x5b7312);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b7314:{NFSU2_TR(0x5b7314);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7317:{NFSU2_TR(0x5b7317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b731a:{NFSU2_TR(0x5b731a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b731d:{NFSU2_TR(0x5b731d);
__builtin_memmove((R+4),(R+24),4);
}
B5b731f:{NFSU2_TR(0x5b731f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7324ull));
TAIL_STATIC(0x5ab990u,5ab);
}
B5b7324:L5b7324:{c.instructions+=2;NFSU2_TR(0x5b7324);
__builtin_memmove((R+4),(R+24),4);
}
B5b7326:{NFSU2_TR(0x5b7326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b732bull));
TAIL_STATIC(0x5a49a0u,5a4);
}
B5b732b:L5b732b:{c.instructions+=2;NFSU2_TR(0x5b732b);
__builtin_memmove((R+4),(R+24),4);
}
B5b732d:{NFSU2_TR(0x5b732d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7332ull));
TAIL_STATIC(0x5abbf0u,5ab);
}
B5b7332:L5b7332:{c.instructions+=4;NFSU2_TR(0x5b7332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b7335:{NFSU2_TR(0x5b7335);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7336:{NFSU2_TR(0x5b7336);
__builtin_memmove((R+4),(R+24),4);
}
B5b7338:{NFSU2_TR(0x5b7338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b733dull));
TAIL_STATIC(0x5a4d80u,5a4);
}
B5b733d:L5b733d:{c.instructions+=2;NFSU2_TR(0x5b733d);
__builtin_memmove((R+4),(R+24),4);
}
B5b733f:{NFSU2_TR(0x5b733f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7344ull));
TAIL_STATIC(0x5b6300u,5b6);
}
B5b7344:L5b7344:{c.instructions+=3;NFSU2_TR(0x5b7344);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7347:{NFSU2_TR(0x5b7347);
{u32 ea_=u32(u32(8372336u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b734d:{NFSU2_TR(0x5b734d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7352ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5b7352:L5b7352:{c.instructions+=23;NFSU2_TR(0x5b7352);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b7353:{NFSU2_TR(0x5b7353);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b7355:{NFSU2_TR(0x5b7355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7358:{NFSU2_TR(0x5b7358);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b735b:{NFSU2_TR(0x5b735b);
__builtin_memmove((R+8),gp(0x86b390),4);
}
B5b7361:{NFSU2_TR(0x5b7361);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7364:{NFSU2_TR(0x5b7364);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7367:{NFSU2_TR(0x5b7367);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b736a:{NFSU2_TR(0x5b736a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b736d:{NFSU2_TR(0x5b736d);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7373:{NFSU2_TR(0x5b7373);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7379:{NFSU2_TR(0x5b7379);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b737b:{NFSU2_TR(0x5b737b);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7381:{NFSU2_TR(0x5b7381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7387:{NFSU2_TR(0x5b7387);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b738d:{NFSU2_TR(0x5b738d);
__builtin_memmove((R+4),gp(0x86b390),4);
}
B5b7393:{NFSU2_TR(0x5b7393);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7399:{NFSU2_TR(0x5b7399);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b739f:{NFSU2_TR(0x5b739f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b73a5:{NFSU2_TR(0x5b73a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b73a7:{NFSU2_TR(0x5b73a7);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b73ad:{NFSU2_TR(0x5b73ad);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b73b3:{NFSU2_TR(0x5b73b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b745f;}}
}
B5b73b9:L5b73b9:{c.instructions+=3;NFSU2_TR(0x5b73b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b73bc:{NFSU2_TR(0x5b73bc);
__builtin_memmove((R+28),(R+0),4);
}
B5b73be:{NFSU2_TR(0x5b73be);
__builtin_memmove((R+28),(R+28),4);
}
B5b73c0:L5b73c0:{c.instructions+=6;NFSU2_TR(0x5b73c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b73c3:{NFSU2_TR(0x5b73c3);
__builtin_memmove((R+0),(R+8),4);
}
B5b73c5:{NFSU2_TR(0x5b73c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b73c6:{NFSU2_TR(0x5b73c6);
__builtin_memmove((R+4),(R+12),4);
}
B5b73c8:{NFSU2_TR(0x5b73c8);
__builtin_memmove(gp(0x7fc800),(R+8),4);
}
B5b73ce:{NFSU2_TR(0x5b73ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b73d3ull));
TAIL_STATIC(0x5aa480u,5aa);
}
B5b73d3:L5b73d3:{c.instructions+=29;NFSU2_TR(0x5b73d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b73d6:{NFSU2_TR(0x5b73d6);
{u32 ea_=u32(r4(R+0)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b73dc:{NFSU2_TR(0x5b73dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
}
B5b73e1:{NFSU2_TR(0x5b73e1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b73e4:{NFSU2_TR(0x5b73e4);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b73ea:{NFSU2_TR(0x5b73ea);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b73ec:{NFSU2_TR(0x5b73ec);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b73f2:{NFSU2_TR(0x5b73f2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b73f4:{NFSU2_TR(0x5b73f4);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b73fa:{NFSU2_TR(0x5b73fa);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7400:{NFSU2_TR(0x5b7400);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b7406:{NFSU2_TR(0x5b7406);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b740c:{NFSU2_TR(0x5b740c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b740f:{NFSU2_TR(0x5b740f);
{u32 ea_=u32(r4(R+0)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7415:{NFSU2_TR(0x5b7415);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
}
B5b741a:{NFSU2_TR(0x5b741a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b741d:{NFSU2_TR(0x5b741d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b741f:{NFSU2_TR(0x5b741f);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b7425:{NFSU2_TR(0x5b7425);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b742b:{NFSU2_TR(0x5b742b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b742d:{NFSU2_TR(0x5b742d);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b7433:{NFSU2_TR(0x5b7433);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7439:{NFSU2_TR(0x5b7439);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b743f:{NFSU2_TR(0x5b743f);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7445:{NFSU2_TR(0x5b7445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7448:{NFSU2_TR(0x5b7448);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5b744b:{NFSU2_TR(0x5b744b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b744c:{NFSU2_TR(0x5b744c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b744d:{NFSU2_TR(0x5b744d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7452ull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B5b7452:L5b7452:{c.instructions+=3;NFSU2_TR(0x5b7452);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b7455:{NFSU2_TR(0x5b7455);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5b7456:{NFSU2_TR(0x5b7456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b73c0u);}goto L5b73c0;}}
}
B5b745c:L5b745c:{c.instructions+=1;NFSU2_TR(0x5b745c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b745f:L5b745f:{c.instructions+=30;NFSU2_TR(0x5b745f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7465:{NFSU2_TR(0x5b7465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b746b:{NFSU2_TR(0x5b746b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b746e:{NFSU2_TR(0x5b746e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7471:{NFSU2_TR(0x5b7471);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7472:{NFSU2_TR(0x5b7472);
__builtin_memmove((R+4),(R+24),4);
}
B5b7474:{NFSU2_TR(0x5b7474);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b7476:{NFSU2_TR(0x5b7476);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b747c:{NFSU2_TR(0x5b747c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b747e:{NFSU2_TR(0x5b747e);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b7484:{NFSU2_TR(0x5b7484);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b748a:{NFSU2_TR(0x5b748a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b748c:{NFSU2_TR(0x5b748c);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7492:{NFSU2_TR(0x5b7492);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7495:{NFSU2_TR(0x5b7495);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b7497:{NFSU2_TR(0x5b7497);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b749d:{NFSU2_TR(0x5b749d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b74a3:{NFSU2_TR(0x5b74a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b74a6:{NFSU2_TR(0x5b74a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b74a8:{NFSU2_TR(0x5b74a8);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b74ae:{NFSU2_TR(0x5b74ae);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b74b0:{NFSU2_TR(0x5b74b0);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b74b6:{NFSU2_TR(0x5b74b6);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b74bc:{NFSU2_TR(0x5b74bc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b74be:{NFSU2_TR(0x5b74be);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b74c4:{NFSU2_TR(0x5b74c4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b74c7:{NFSU2_TR(0x5b74c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b74c9:{NFSU2_TR(0x5b74c9);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b74cf:{NFSU2_TR(0x5b74cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b74d1:{NFSU2_TR(0x5b74d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b74d6ull));
TAIL_STATIC(0x5a5540u,5a5);
}
B5b74d6:L5b74d6:{c.instructions+=3;NFSU2_TR(0x5b74d6);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B5b74db:{NFSU2_TR(0x5b74db);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1130ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1130ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b74e0:{NFSU2_TR(0x5b74e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b74e9;}}
}
B5b74e2:L5b74e2:{c.instructions+=2;NFSU2_TR(0x5b74e2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1194ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1194ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b74e7:{NFSU2_TR(0x5b74e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b7528;}}
}
B5b74e9:L5b74e9:{c.instructions+=3;NFSU2_TR(0x5b74e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b74ef:{NFSU2_TR(0x5b74ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b74f1:{NFSU2_TR(0x5b74f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b7528;}}
}
B5b74f3:L5b74f3:{c.instructions+=2;NFSU2_TR(0x5b74f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b74f6:{NFSU2_TR(0x5b74f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b74fbull));
TAIL_STATIC(0x5f67f0u,5f6);
}
B5b74fb:L5b74fb:{c.instructions+=2;NFSU2_TR(0x5b74fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b74fd:{NFSU2_TR(0x5b74fd);
if(r1(R+518)){{goto L5b7528;}}
}
B5b74ff:L5b74ff:{c.instructions+=3;NFSU2_TR(0x5b74ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7502:{NFSU2_TR(0x5b7502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7509:{NFSU2_TR(0x5b7509);
__builtin_memmove((R+16),(R+16),4);
}
B5b7510:L5b7510:{c.instructions+=5;NFSU2_TR(0x5b7510);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7513:{NFSU2_TR(0x5b7513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b7515:{NFSU2_TR(0x5b7515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7516:{NFSU2_TR(0x5b7516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7517:{NFSU2_TR(0x5b7517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b751cull));
TAIL_STATIC(0x59dbb0u,59d);
}
B5b751c:L5b751c:{c.instructions+=5;NFSU2_TR(0x5b751c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b751f:{NFSU2_TR(0x5b751f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b7522:{NFSU2_TR(0x5b7522);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b7523:{NFSU2_TR(0x5b7523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7526:{NFSU2_TR(0x5b7526);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7510u);}goto L5b7510;}}
}
B5b7528:L5b7528:{c.instructions+=7;NFSU2_TR(0x5b7528);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b752b:{NFSU2_TR(0x5b752b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b752e:{NFSU2_TR(0x5b752e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B5b7532:{NFSU2_TR(0x5b7532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7533:{NFSU2_TR(0x5b7533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b7534:{NFSU2_TR(0x5b7534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b7535:{NFSU2_TR(0x5b7535);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b7559;}}
}
B5b7537:L5b7537:{c.instructions+=3;NFSU2_TR(0x5b7537);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b753d:{NFSU2_TR(0x5b753d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b753f:{NFSU2_TR(0x5b753f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b7559;}}
}
B5b7541:L5b7541:{c.instructions+=2;NFSU2_TR(0x5b7541);
w4(R+4,u32(0x89cf48ull));
}
B5b7546:{NFSU2_TR(0x5b7546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b754bull));
TAIL_STATIC(0x5efe70u,5ef);
}
B5b754b:L5b754b:{c.instructions+=2;NFSU2_TR(0x5b754b);
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
B5b754d:{NFSU2_TR(0x5b754d);
if(r1(R+518)){{goto L5b7559;}}
}
B5b754f:L5b754f:{c.instructions+=2;NFSU2_TR(0x5b754f);
w4(R+4,u32(0x89cf48ull));
}
B5b7554:{NFSU2_TR(0x5b7554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7559ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B5b7559:L5b7559:{c.instructions+=4;NFSU2_TR(0x5b7559);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b755c:{NFSU2_TR(0x5b755c);
__builtin_memmove((R+16),(R+20),4);
}
B5b755e:{NFSU2_TR(0x5b755e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b755f:{NFSU2_TR(0x5b755f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7570:L5b7570:{c.instructions+=7;NFSU2_TR(0x5b7570);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7571:{NFSU2_TR(0x5b7571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7572:{NFSU2_TR(0x5b7572);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b7576:{NFSU2_TR(0x5b7576);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b757a:{NFSU2_TR(0x5b757a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b757b:{NFSU2_TR(0x5b757b);
__builtin_memmove((R+28),(R+4),4);
}
B5b757d:{NFSU2_TR(0x5b757d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b758c;}}
}
B5b757f:L5b757f:{c.instructions+=5;NFSU2_TR(0x5b757f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7581:{NFSU2_TR(0x5b7581);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7583:{NFSU2_TR(0x5b7583);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7585:{NFSU2_TR(0x5b7585);
__builtin_memmove((R+4),(R+24),4);
}
B5b7587:{NFSU2_TR(0x5b7587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b758cull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b758c:L5b758c:{c.instructions+=6;NFSU2_TR(0x5b758c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b758f:{NFSU2_TR(0x5b758f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7593:{NFSU2_TR(0x5b7593);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b7597:{NFSU2_TR(0x5b7597);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b7599:{NFSU2_TR(0x5b7599);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b75a1:{NFSU2_TR(0x5b75a1);
if(r1(R+518)){{goto L5b75ae;}}
}
B5b75a3:L5b75a3:{c.instructions+=2;NFSU2_TR(0x5b75a3);
__builtin_memmove((R+4),(R+24),4);
}
B5b75a5:{NFSU2_TR(0x5b75a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b75aaull));
TAIL_STATIC(0x5b5490u,5b5);
}
B5b75aa:L5b75aa:{c.instructions+=1;NFSU2_TR(0x5b75aa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b75ae:L5b75ae:{c.instructions+=7;NFSU2_TR(0x5b75ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b75b2:{NFSU2_TR(0x5b75b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b75b6:{NFSU2_TR(0x5b75b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75b7:{NFSU2_TR(0x5b75b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75b9:{NFSU2_TR(0x5b75b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75ba:{NFSU2_TR(0x5b75ba);
__builtin_memmove((R+4),(R+28),4);
}
B5b75bc:{NFSU2_TR(0x5b75bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b75c1ull));
TAIL_STATIC(0x5b6ad0u,5b6);
}
B5b75c1:L5b75c1:{c.instructions+=3;NFSU2_TR(0x5b75c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b75c5:{NFSU2_TR(0x5b75c5);
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
B5b75c7:{NFSU2_TR(0x5b75c7);
if(r1(R+518)){{goto L5b75f5;}}
}
B5b75c9:L5b75c9:{c.instructions+=4;NFSU2_TR(0x5b75c9);
{u32 ea_=u32(r4(R+24)+u32(744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b75cf:{NFSU2_TR(0x5b75cf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75d1:{NFSU2_TR(0x5b75d1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b75d7:{NFSU2_TR(0x5b75d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b75dcull));
TAIL_STATIC(0x75bed4u,75b);
}
B5b75dc:L5b75dc:{c.instructions+=3;NFSU2_TR(0x5b75dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75dd:{NFSU2_TR(0x5b75dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b75e3:{NFSU2_TR(0x5b75e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b75e8ull));
TAIL_STATIC(0x5a64a0u,5a6);
}
B5b75e8:L5b75e8:{c.instructions+=5;NFSU2_TR(0x5b75e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75ea:{NFSU2_TR(0x5b75ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75ec:{NFSU2_TR(0x5b75ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b75ee:{NFSU2_TR(0x5b75ee);
__builtin_memmove((R+4),(R+28),4);
}
B5b75f0:{NFSU2_TR(0x5b75f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b75f5ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b75f5:L5b75f5:{c.instructions+=4;NFSU2_TR(0x5b75f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b75f6:{NFSU2_TR(0x5b75f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b75f7:{NFSU2_TR(0x5b75f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b75f8:{NFSU2_TR(0x5b75f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7600:L5b7600:{c.instructions+=32;NFSU2_TR(0x5b7600);
__builtin_memmove((R+0),(R+4),4);
}
B5b7602:{NFSU2_TR(0x5b7602);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7604:{NFSU2_TR(0x5b7604);
w4(R+8,u32(0x1ull));
}
B5b7609:{NFSU2_TR(0x5b7609);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b760c:{NFSU2_TR(0x5b760c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b760f:{NFSU2_TR(0x5b760f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7612:{NFSU2_TR(0x5b7612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7615:{NFSU2_TR(0x5b7615);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7618:{NFSU2_TR(0x5b7618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b761b:{NFSU2_TR(0x5b761b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b761e:{NFSU2_TR(0x5b761e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7621:{NFSU2_TR(0x5b7621);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7624:{NFSU2_TR(0x5b7624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7627:{NFSU2_TR(0x5b7627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b762a:{NFSU2_TR(0x5b762a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b762d:{NFSU2_TR(0x5b762d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7630:{NFSU2_TR(0x5b7630);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7633:{NFSU2_TR(0x5b7633);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7636:{NFSU2_TR(0x5b7636);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7639:{NFSU2_TR(0x5b7639);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b763c:{NFSU2_TR(0x5b763c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b763f:{NFSU2_TR(0x5b763f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7642:{NFSU2_TR(0x5b7642);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7645:{NFSU2_TR(0x5b7645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7648:{NFSU2_TR(0x5b7648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b764b:{NFSU2_TR(0x5b764b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b764e:{NFSU2_TR(0x5b764e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b7650:{NFSU2_TR(0x5b7650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x78ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7657:{NFSU2_TR(0x5b7657);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b765a:{NFSU2_TR(0x5b765a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b765d:{NFSU2_TR(0x5b765d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7660:{NFSU2_TR(0x5b7660);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7670:L5b7670:{c.instructions+=2;NFSU2_TR(0x5b7670);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7674:{NFSU2_TR(0x5b7674);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7680:L5b7680:{c.instructions+=2;NFSU2_TR(0x5b7680);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b7686:{NFSU2_TR(0x5b7686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7690:L5b7690:{c.instructions+=1;NFSU2_TR(0x5b7690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7695ull));
TAIL_STATIC(0x43e5b0u,43e);
}
B5b7695:L5b7695:{c.instructions+=1;NFSU2_TR(0x5b7695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b769aull));
TAIL_STATIC(0x440360u,440);
}
B5b769a:L5b769a:{c.instructions+=1;NFSU2_TR(0x5b769a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b769full));
TAIL_STATIC(0x6fbe2cu,6fb);
}
B5b769f:L5b769f:{c.instructions+=1;NFSU2_TR(0x5b769f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b76a4ull));
TAIL_STATIC(0x6f57eau,6f5);
}
B5b76a4:L5b76a4:{c.instructions+=2;NFSU2_TR(0x5b76a4);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76a6:{NFSU2_TR(0x5b76a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b76abull));
TAIL_STATIC(0x6f5c91u,6f5);
}
B5b76ab:L5b76ab:{c.instructions+=2;NFSU2_TR(0x5b76ab);
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
B5b76ae:{NFSU2_TR(0x5b76ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b76b3ull));
{goto L5b7a70;}
}
B5b76b3:L5b76b3:{c.instructions+=1;NFSU2_TR(0x5b76b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b76b8ull));
TAIL_STATIC(0x5c0d30u,5c0);
}
B5b76b8:L5b76b8:{c.instructions+=2;NFSU2_TR(0x5b76b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b76ba:{NFSU2_TR(0x5b76ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b76c3;}}
}
B5b76bc:L5b76bc:{c.instructions+=2;NFSU2_TR(0x5b76bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76be:{NFSU2_TR(0x5b76be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b76c3ull));
TAIL_STATIC(0x75d5a4u,75d);
}
B5b76c3:L5b76c3:{c.instructions+=2;NFSU2_TR(0x5b76c3);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B5b76c8:{NFSU2_TR(0x5b76c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b76ed;}}
}
B5b76ca:L5b76ca:{c.instructions+=5;NFSU2_TR(0x5b76ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b76ce:{NFSU2_TR(0x5b76ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b76d1:{NFSU2_TR(0x5b76d1);
u8 U[4];
w4(U+0,u32(0x7a3080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76d6:{NFSU2_TR(0x5b76d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76d7:{NFSU2_TR(0x5b76d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b76dcull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b76dc:L5b76dc:{c.instructions+=3;NFSU2_TR(0x5b76dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b76df:{NFSU2_TR(0x5b76df);
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
B5b76e1:{NFSU2_TR(0x5b76e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b76ed;}}
}
B5b76e3:L5b76e3:{c.instructions+=1;NFSU2_TR(0x5b76e3);
s4(0x8709cc,u32(0x1ull));
}
B5b76ed:L5b76ed:{c.instructions+=1;NFSU2_TR(0x5b76ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b76f0:L5b76f0:{c.instructions+=16;NFSU2_TR(0x5b76f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76f1:{NFSU2_TR(0x5b76f1);
__builtin_memmove((R+20),(R+16),4);
}
B5b76f3:{NFSU2_TR(0x5b76f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5b76f6:{NFSU2_TR(0x5b76f6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x120ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x120ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x120ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b76fc:{NFSU2_TR(0x5b76fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76fd:{NFSU2_TR(0x5b76fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76fe:{NFSU2_TR(0x5b76fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b76ff:{NFSU2_TR(0x5b76ff);
__builtin_memmove((R+24),gp(0x783008),4);
}
B5b7705:{NFSU2_TR(0x5b7705);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7706:{NFSU2_TR(0x5b7706);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b770a:{NFSU2_TR(0x5b770a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b770b:{NFSU2_TR(0x5b770b);
u8 U[4];
w4(U+0,u32(0x20019ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7710:{NFSU2_TR(0x5b7710);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7712:{NFSU2_TR(0x5b7712);
u8 U[4];
w4(U+0,u32(0x7a3118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7717:{NFSU2_TR(0x5b7717);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b771c:{NFSU2_TR(0x5b771c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b771eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b771e:L5b771e:{c.instructions+=3;NFSU2_TR(0x5b771e);
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
B5b7720:{NFSU2_TR(0x5b7720);
__builtin_memmove((R+20),gp(0x783004),4);
}
B5b7726:{NFSU2_TR(0x5b7726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b7766;}}
}
B5b7728:L5b7728:{c.instructions+=12;NFSU2_TR(0x5b7728);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b772c:{NFSU2_TR(0x5b772c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7730:{NFSU2_TR(0x5b7730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7731:{NFSU2_TR(0x5b7731);
u8 U[4];
w4(U+0,u32(0x86ff8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7736:{NFSU2_TR(0x5b7736);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b773a:{NFSU2_TR(0x5b773a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b773b:{NFSU2_TR(0x5b773b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b773d:{NFSU2_TR(0x5b773d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b773f:{NFSU2_TR(0x5b773f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7740:{NFSU2_TR(0x5b7740);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7748:{NFSU2_TR(0x5b7748);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7750:{NFSU2_TR(0x5b7750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7752ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7752:L5b7752:{c.instructions+=2;NFSU2_TR(0x5b7752);
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
B5b7754:{NFSU2_TR(0x5b7754);
if(r1(R+518)){{goto L5b775f;}}
}
B5b7756:L5b7756:{c.instructions+=2;NFSU2_TR(0x5b7756);
s1(0x86ff8c,u8(0x0ull));
}
B5b775d:{NFSU2_TR(0x5b775d);
{goto L5b7766;}
}
B5b775f:L5b775f:{c.instructions+=1;NFSU2_TR(0x5b775f);
s1(0x86ffa0,u8(0x0ull));
}
B5b7766:L5b7766:{c.instructions+=3;NFSU2_TR(0x5b7766);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b776a:{NFSU2_TR(0x5b776a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b776b:{NFSU2_TR(0x5b776b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7771ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7771:L5b7771:{c.instructions+=7;NFSU2_TR(0x5b7771);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7775:{NFSU2_TR(0x5b7775);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7776:{NFSU2_TR(0x5b7776);
u8 U[4];
w4(U+0,u32(0x2001full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b777b:{NFSU2_TR(0x5b777b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b777d:{NFSU2_TR(0x5b777d);
u8 U[4];
w4(U+0,u32(0x7a30e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7782:{NFSU2_TR(0x5b7782);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7787:{NFSU2_TR(0x5b7787);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7789ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7789:L5b7789:{c.instructions+=2;NFSU2_TR(0x5b7789);
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
B5b778b:{NFSU2_TR(0x5b778b);
if(r1(R+518)){{goto L5b77a5;}}
}
B5b778d:L5b778d:{c.instructions+=7;NFSU2_TR(0x5b778d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b7791:{NFSU2_TR(0x5b7791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7792:{NFSU2_TR(0x5b7792);
u8 U[4];
w4(U+0,u32(0x20019ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7797:{NFSU2_TR(0x5b7797);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7799:{NFSU2_TR(0x5b7799);
u8 U[4];
w4(U+0,u32(0x7a30e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b779e:{NFSU2_TR(0x5b779e);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77a3:{NFSU2_TR(0x5b77a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b77a5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b77a5:L5b77a5:{c.instructions+=3;NFSU2_TR(0x5b77a5);
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
B5b77a7:{NFSU2_TR(0x5b77a7);
w4(R+4,u32(0x41ull));
}
B5b77ac:{NFSU2_TR(0x5b77ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b77b0:L5b77b0:{c.instructions+=1;NFSU2_TR(0x5b77b0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b77b2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b77b0u);}goto L5b77b0;}
}
B5b77b2:L5b77b2:{c.instructions+=14;NFSU2_TR(0x5b77b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b77b6:{NFSU2_TR(0x5b77b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77b7:{NFSU2_TR(0x5b77b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b77bb:{NFSU2_TR(0x5b77bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b77bf:{NFSU2_TR(0x5b77bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77c0:{NFSU2_TR(0x5b77c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b77c4:{NFSU2_TR(0x5b77c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77c5:{NFSU2_TR(0x5b77c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77c7:{NFSU2_TR(0x5b77c7);
u8 U[4];
w4(U+0,u32(0x7a30dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77cc:{NFSU2_TR(0x5b77cc);
w4(R+12,u32(0x104ull));
}
B5b77d1:{NFSU2_TR(0x5b77d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77d2:{NFSU2_TR(0x5b77d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b77da:{NFSU2_TR(0x5b77da);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b77de:{NFSU2_TR(0x5b77de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b77e0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b77e0:L5b77e0:{c.instructions+=3;NFSU2_TR(0x5b77e0);
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
B5b77e2:{NFSU2_TR(0x5b77e2);
__builtin_memmove((R+24),gp(0x78313c),4);
}
B5b77e8:{NFSU2_TR(0x5b77e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b780f;}}
}
B5b77ea:L5b77ea:{c.instructions+=6;NFSU2_TR(0x5b77ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77eb:{NFSU2_TR(0x5b77eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b77ef:{NFSU2_TR(0x5b77ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77f0:{NFSU2_TR(0x5b77f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b77f4:{NFSU2_TR(0x5b77f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b77f5:{NFSU2_TR(0x5b77f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b77f7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b77f7:L5b77f7:{c.instructions+=2;NFSU2_TR(0x5b77f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b77f9:{NFSU2_TR(0x5b77f9);
if(r1(R+518)){{goto L5b780f;}}
}
B5b77fb:L5b77fb:{c.instructions+=2;NFSU2_TR(0x5b77fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b77fd:{NFSU2_TR(0x5b77fd);
__builtin_memmove((R+4),(R+4),4);
}
B5b7800:L5b7800:{c.instructions+=5;NFSU2_TR(0x5b7800);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5b7804:{NFSU2_TR(0x5b7804);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e9b4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b780a:{NFSU2_TR(0x5b780a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b780b:{NFSU2_TR(0x5b780b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b780d:{NFSU2_TR(0x5b780d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7800u);}goto L5b7800;}}
}
B5b780f:L5b780f:{c.instructions+=3;NFSU2_TR(0x5b780f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b7811:{NFSU2_TR(0x5b7811);
w4(R+4,u32(0x41ull));
}
B5b7816:{NFSU2_TR(0x5b7816);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b781a:L5b781a:{c.instructions+=1;NFSU2_TR(0x5b781a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b781c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b781au);}goto L5b781a;}
}
B5b781c:L5b781c:{c.instructions+=13;NFSU2_TR(0x5b781c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7820:{NFSU2_TR(0x5b7820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7821:{NFSU2_TR(0x5b7821);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7825:{NFSU2_TR(0x5b7825);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7829:{NFSU2_TR(0x5b7829);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b782a:{NFSU2_TR(0x5b782a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b782e:{NFSU2_TR(0x5b782e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b782f:{NFSU2_TR(0x5b782f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7831:{NFSU2_TR(0x5b7831);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7832:{NFSU2_TR(0x5b7832);
u8 U[4];
w4(U+0,u32(0x7a30d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7837:{NFSU2_TR(0x5b7837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7838:{NFSU2_TR(0x5b7838);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b783c:{NFSU2_TR(0x5b783c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b783eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b783e:L5b783e:{c.instructions+=2;NFSU2_TR(0x5b783e);
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
B5b7840:{NFSU2_TR(0x5b7840);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b786f;}}
}
B5b7842:L5b7842:{c.instructions+=6;NFSU2_TR(0x5b7842);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7843:{NFSU2_TR(0x5b7843);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7847:{NFSU2_TR(0x5b7847);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7848:{NFSU2_TR(0x5b7848);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b784c:{NFSU2_TR(0x5b784c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b784d:{NFSU2_TR(0x5b784d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b784full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b784f:L5b784f:{c.instructions+=2;NFSU2_TR(0x5b784f);
__builtin_memmove((R+24),(R+0),4);
}
B5b7851:{NFSU2_TR(0x5b7851);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7857ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7857:L5b7857:{c.instructions+=2;NFSU2_TR(0x5b7857);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b7859:{NFSU2_TR(0x5b7859);
if(r1(R+518)){{goto L5b786f;}}
}
B5b785b:L5b785b:{c.instructions+=2;NFSU2_TR(0x5b785b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b785d:{NFSU2_TR(0x5b785d);
__builtin_memmove((R+4),(R+4),4);
}
B5b7860:L5b7860:{c.instructions+=5;NFSU2_TR(0x5b7860);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5b7864:{NFSU2_TR(0x5b7864);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e8b0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b786a:{NFSU2_TR(0x5b786a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b786b:{NFSU2_TR(0x5b786b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b786d:{NFSU2_TR(0x5b786d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7860u);}goto L5b7860;}}
}
B5b786f:L5b786f:{c.instructions+=12;NFSU2_TR(0x5b786f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7873:{NFSU2_TR(0x5b7873);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7874:{NFSU2_TR(0x5b7874);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7878:{NFSU2_TR(0x5b7878);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b787c:{NFSU2_TR(0x5b787c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b787d:{NFSU2_TR(0x5b787d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b7881:{NFSU2_TR(0x5b7881);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7882:{NFSU2_TR(0x5b7882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7883:{NFSU2_TR(0x5b7883);
u8 U[4];
w4(U+0,u32(0x7a30c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7888:{NFSU2_TR(0x5b7888);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7889:{NFSU2_TR(0x5b7889);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b788d:{NFSU2_TR(0x5b788d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b788full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b788f:L5b788f:{c.instructions+=14;NFSU2_TR(0x5b788f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7891:{NFSU2_TR(0x5b7891);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5b7893:{NFSU2_TR(0x5b7893);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7897:{NFSU2_TR(0x5b7897);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7898:{NFSU2_TR(0x5b7898);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5b789a:{NFSU2_TR(0x5b789a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b789c:{NFSU2_TR(0x5b789c);
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
B5b789d:{NFSU2_TR(0x5b789d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b789e:{NFSU2_TR(0x5b789e);
__builtin_memmove(gp(0x870d20),(R+0),4);
}
B5b78a3:{NFSU2_TR(0x5b78a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b78a7:{NFSU2_TR(0x5b78a7);
u8 U[4];
w4(U+0,u32(0x7a30c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78ac:{NFSU2_TR(0x5b78ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78ad:{NFSU2_TR(0x5b78ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b78b5:{NFSU2_TR(0x5b78b5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783000),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b78bbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b78bb:L5b78bb:{c.instructions+=12;NFSU2_TR(0x5b78bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b78bf:{NFSU2_TR(0x5b78bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78c0:{NFSU2_TR(0x5b78c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b78c4:{NFSU2_TR(0x5b78c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b78c8:{NFSU2_TR(0x5b78c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78c9:{NFSU2_TR(0x5b78c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b78cd:{NFSU2_TR(0x5b78cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78ce:{NFSU2_TR(0x5b78ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78cf:{NFSU2_TR(0x5b78cf);
u8 U[4];
w4(U+0,u32(0x7a30b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78d4:{NFSU2_TR(0x5b78d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78d5:{NFSU2_TR(0x5b78d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b78d9:{NFSU2_TR(0x5b78d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b78dbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b78db:L5b78db:{c.instructions+=2;NFSU2_TR(0x5b78db);
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
B5b78dd:{NFSU2_TR(0x5b78dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b78f8;}}
}
B5b78df:L5b78df:{c.instructions+=3;NFSU2_TR(0x5b78df);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b78e3:{NFSU2_TR(0x5b78e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78e4:{NFSU2_TR(0x5b78e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b78e9ull));
TAIL_STATIC(0x75d65bu,75d);
}
B5b78e9:L5b78e9:{c.instructions+=4;NFSU2_TR(0x5b78e9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5b78ea:{NFSU2_TR(0x5b78ea);
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
B5b78ed:{NFSU2_TR(0x5b78ed);
__builtin_memmove(gp(0x86eab8),(R+0),4);
}
B5b78f2:{NFSU2_TR(0x5b78f2);
__builtin_memmove(gp(0x86eabc),(R+8),4);
}
B5b78f8:L5b78f8:{c.instructions+=12;NFSU2_TR(0x5b78f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b78fc:{NFSU2_TR(0x5b78fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b78fd:{NFSU2_TR(0x5b78fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7901:{NFSU2_TR(0x5b7901);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7905:{NFSU2_TR(0x5b7905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7906:{NFSU2_TR(0x5b7906);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b790a:{NFSU2_TR(0x5b790a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b790b:{NFSU2_TR(0x5b790b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b790c:{NFSU2_TR(0x5b790c);
u8 U[4];
w4(U+0,u32(0x7a30a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7911:{NFSU2_TR(0x5b7911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7912:{NFSU2_TR(0x5b7912);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7916:{NFSU2_TR(0x5b7916);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7918ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7918:L5b7918:{c.instructions+=2;NFSU2_TR(0x5b7918);
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
B5b791a:{NFSU2_TR(0x5b791a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b7935;}}
}
B5b791c:L5b791c:{c.instructions+=3;NFSU2_TR(0x5b791c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7920:{NFSU2_TR(0x5b7920);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7921:{NFSU2_TR(0x5b7921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7926ull));
TAIL_STATIC(0x75d65bu,75d);
}
B5b7926:L5b7926:{c.instructions+=4;NFSU2_TR(0x5b7926);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5b7927:{NFSU2_TR(0x5b7927);
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
B5b792a:{NFSU2_TR(0x5b792a);
__builtin_memmove(gp(0x86eac0),(R+0),4);
}
B5b792f:{NFSU2_TR(0x5b792f);
__builtin_memmove(gp(0x86eac4),(R+8),4);
}
B5b7935:L5b7935:{c.instructions+=12;NFSU2_TR(0x5b7935);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7939:{NFSU2_TR(0x5b7939);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b793a:{NFSU2_TR(0x5b793a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b793e:{NFSU2_TR(0x5b793e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b7942:{NFSU2_TR(0x5b7942);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7943:{NFSU2_TR(0x5b7943);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7947:{NFSU2_TR(0x5b7947);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7948:{NFSU2_TR(0x5b7948);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7949:{NFSU2_TR(0x5b7949);
u8 U[4];
w4(U+0,u32(0x7a309cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b794e:{NFSU2_TR(0x5b794e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b794f:{NFSU2_TR(0x5b794f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7953:{NFSU2_TR(0x5b7953);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7955ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7955:L5b7955:{c.instructions+=2;NFSU2_TR(0x5b7955);
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
B5b7957:{NFSU2_TR(0x5b7957);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b79a4;}}
}
B5b7959:L5b7959:{c.instructions+=3;NFSU2_TR(0x5b7959);
__builtin_memmove((R+0),gp(0x7fca08),4);
}
B5b795e:{NFSU2_TR(0x5b795e);
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
B5b7960:{NFSU2_TR(0x5b7960);
if(r1(R+518)){{goto L5b79aa;}}
}
B5b7962:L5b7962:{c.instructions+=3;NFSU2_TR(0x5b7962);
w4(R+0,u32(0x7fca08ull));
}
B5b7967:{NFSU2_TR(0x5b7967);
__builtin_memmove((R+24),(R+0),4);
}
B5b7969:{NFSU2_TR(0x5b7969);
__builtin_memmove((R+16),(R+16),4);
}
B5b7970:L5b7970:{c.instructions+=5;NFSU2_TR(0x5b7970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b7972:{NFSU2_TR(0x5b7972);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7973:{NFSU2_TR(0x5b7973);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7977:{NFSU2_TR(0x5b7977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7978:{NFSU2_TR(0x5b7978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b797dull));
TAIL_STATIC(0x75dd6fu,75d);
}
B5b797d:L5b797d:{c.instructions+=3;NFSU2_TR(0x5b797d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b7980:{NFSU2_TR(0x5b7980);
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
B5b7982:{NFSU2_TR(0x5b7982);
if(r1(R+518)){{goto L5b7993;}}
}
B5b7984:L5b7984:{c.instructions+=6;NFSU2_TR(0x5b7984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7987:{NFSU2_TR(0x5b7987);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5b798a:{NFSU2_TR(0x5b798a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b798b:{NFSU2_TR(0x5b798b);
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
B5b798d:{NFSU2_TR(0x5b798d);
__builtin_memmove((R+0),(R+24),4);
}
B5b798f:{NFSU2_TR(0x5b798f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7970u);}goto L5b7970;}}
}
B5b7991:L5b7991:{c.instructions+=1;NFSU2_TR(0x5b7991);
{goto L5b79aa;}
}
B5b7993:L5b7993:{c.instructions+=4;NFSU2_TR(0x5b7993);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5b7996:{NFSU2_TR(0x5b7996);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fca0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5b799d:{NFSU2_TR(0x5b799d);
__builtin_memmove(gp(0x7fca00),(R+0),4);
}
B5b79a2:{NFSU2_TR(0x5b79a2);
{goto L5b79aa;}
}
B5b79a4:L5b79a4:{c.instructions+=1;NFSU2_TR(0x5b79a4);
__builtin_memmove(gp(0x7fca00),(R+28),4);
}
B5b79aa:L5b79aa:{c.instructions+=12;NFSU2_TR(0x5b79aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b79ae:{NFSU2_TR(0x5b79ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79af:{NFSU2_TR(0x5b79af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b79b3:{NFSU2_TR(0x5b79b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b79b7:{NFSU2_TR(0x5b79b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79b8:{NFSU2_TR(0x5b79b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b79bc:{NFSU2_TR(0x5b79bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79bd:{NFSU2_TR(0x5b79bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79bf:{NFSU2_TR(0x5b79bf);
u8 U[4];
w4(U+0,u32(0x7a3088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79c4:{NFSU2_TR(0x5b79c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79c5:{NFSU2_TR(0x5b79c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b79c9:{NFSU2_TR(0x5b79c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b79cbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b79cb:L5b79cb:{c.instructions+=2;NFSU2_TR(0x5b79cb);
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
B5b79cd:{NFSU2_TR(0x5b79cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b79ed;}}
}
B5b79cf:L5b79cf:{c.instructions+=4;NFSU2_TR(0x5b79cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b79d3:{NFSU2_TR(0x5b79d3);
u8 U[4];
w4(U+0,u32(0x7a3084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79d8:{NFSU2_TR(0x5b79d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79d9:{NFSU2_TR(0x5b79d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b79deull));
TAIL_STATIC(0x75dd6fu,75d);
}
B5b79de:L5b79de:{c.instructions+=5;NFSU2_TR(0x5b79de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b79e1:{NFSU2_TR(0x5b79e1);
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
B5b79e3:{NFSU2_TR(0x5b79e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5b79e6:{NFSU2_TR(0x5b79e6);
__builtin_memmove(gp(0x8709c8),(R+0),1);
}
B5b79eb:{NFSU2_TR(0x5b79eb);
{goto L5b79f4;}
}
B5b79ed:L5b79ed:{c.instructions+=1;NFSU2_TR(0x5b79ed);
s1(0x8709c8,u8(0x1ull));
}
B5b79f4:L5b79f4:{c.instructions+=3;NFSU2_TR(0x5b79f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b79f8:{NFSU2_TR(0x5b79f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b79f9:{NFSU2_TR(0x5b79f9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b79ffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b79ff:L5b79ff:{c.instructions+=8;NFSU2_TR(0x5b79ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7a00:{NFSU2_TR(0x5b7a00);
w1(R+0,u8(0x1ull));
}
B5b7a02:{NFSU2_TR(0x5b7a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b7a03:{NFSU2_TR(0x5b7a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b7a04:{NFSU2_TR(0x5b7a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b7a05:{NFSU2_TR(0x5b7a05);
__builtin_memmove((R+16),(R+20),4);
}
B5b7a07:{NFSU2_TR(0x5b7a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b7a08:{NFSU2_TR(0x5b7a08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7a10:L5b7a10:{c.instructions+=5;NFSU2_TR(0x5b7a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B5b7a13:{NFSU2_TR(0x5b7a13);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b7a17:{NFSU2_TR(0x5b7a17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7a18:{NFSU2_TR(0x5b7a18);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7a20:{NFSU2_TR(0x5b7a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7a25ull));
TAIL_STATIC(0x6f86adu,6f8);
}
B5b7a25:L5b7a25:{c.instructions+=5;NFSU2_TR(0x5b7a25);
w4(R+0,u32(0x86e8b0ull));
}
B5b7a2a:{NFSU2_TR(0x5b7a2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b7a2d:{NFSU2_TR(0x5b7a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7a35:{NFSU2_TR(0x5b7a35);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x828528ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7a3d:{NFSU2_TR(0x5b7a3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7a40:L5b7a40:{c.instructions+=4;NFSU2_TR(0x5b7a40);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5b7a42:{NFSU2_TR(0x5b7a42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b7a43:{NFSU2_TR(0x5b7a43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b7a45:{NFSU2_TR(0x5b7a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7a40u);}goto L5b7a40;}}
}
B5b7a47:L5b7a47:{c.instructions+=3;NFSU2_TR(0x5b7a47);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b7a49:{NFSU2_TR(0x5b7a49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5b7a4d:{NFSU2_TR(0x5b7a4d);
if(r1(R+518)){{goto L5b7a57;}}
}
B5b7a4f:L5b7a4f:{c.instructions+=1;NFSU2_TR(0x5b7a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x86e8b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7a57:L5b7a57:{c.instructions+=3;NFSU2_TR(0x5b7a57);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7a5b:{NFSU2_TR(0x5b7a5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7a5c:{NFSU2_TR(0x5b7a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7a61ull));
TAIL_STATIC(0x6f86dau,6f8);
}
B5b7a61:L5b7a61:{c.instructions+=2;NFSU2_TR(0x5b7a61);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7a64:{NFSU2_TR(0x5b7a64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7a70:L5b7a70:{c.instructions+=3;NFSU2_TR(0x5b7a70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7a71:{NFSU2_TR(0x5b7a71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7a73:{NFSU2_TR(0x5b7a73);
u8 U[4];
__builtin_memmove((U+0),gp(0x783140),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7a79ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7a79:L5b7a79:{c.instructions+=8;NFSU2_TR(0x5b7a79);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b7a7b:{NFSU2_TR(0x5b7a7b);
__builtin_memmove(gp(0x86e9b4),(R+12),1);
}
B5b7a81:{NFSU2_TR(0x5b7a81);
__builtin_memmove(gp(0x86e8b0),(R+12),1);
}
B5b7a87:{NFSU2_TR(0x5b7a87);
__builtin_memmove(gp(0x86eab8),(R+12),4);
}
B5b7a8d:{NFSU2_TR(0x5b7a8d);
__builtin_memmove(gp(0x86eabc),(R+12),4);
}
B5b7a93:{NFSU2_TR(0x5b7a93);
__builtin_memmove(gp(0x86eac0),(R+12),4);
}
B5b7a99:{NFSU2_TR(0x5b7a99);
__builtin_memmove(gp(0x86eac4),(R+12),4);
}
B5b7a9f:{NFSU2_TR(0x5b7a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7aa4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b76f0u);}goto L5b76f0;}
}
B5b7aa4:L5b7aa4:{c.instructions+=3;NFSU2_TR(0x5b7aa4);
__builtin_memmove((R+0),gp(0x86e8b0),1);
}
B5b7aa9:{NFSU2_TR(0x5b7aa9);
__builtin_memmove(gp(0x80057f),(R+0),1);
}
B5b7aae:{NFSU2_TR(0x5b7aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7ab3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7a10u);}goto L5b7a10;}
}
B5b7ab3:L5b7ab3:{c.instructions+=3;NFSU2_TR(0x5b7ab3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7ab4:{NFSU2_TR(0x5b7ab4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7ab5:{NFSU2_TR(0x5b7ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7abaull));
TAIL_STATIC(0x6f7ca8u,6f7);
}
B5b7aba:L5b7aba:{c.instructions+=2;NFSU2_TR(0x5b7aba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b7abd:{NFSU2_TR(0x5b7abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7ac2ull));
TAIL_STATIC(0x5bf450u,5bf);
}
B5b7ac2:L5b7ac2:{c.instructions+=3;NFSU2_TR(0x5b7ac2);
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
B5b7ac4:{NFSU2_TR(0x5b7ac4);
__builtin_memmove(gp(0x8709c8),(R+12),1);
}
B5b7aca:{NFSU2_TR(0x5b7aca);
if(r1(R+518)){{goto L5b7aec;}}
}
B5b7acc:L5b7acc:{c.instructions+=5;NFSU2_TR(0x5b7acc);
__builtin_memmove((R+4),gp(0x80057f),1);
}
B5b7ad2:{NFSU2_TR(0x5b7ad2);
__builtin_memmove(gp(0x86e8b0),(R+4),1);
}
B5b7ad8:{NFSU2_TR(0x5b7ad8);
s1(0x86e8b1,u8(0x3aull));
}
B5b7adf:{NFSU2_TR(0x5b7adf);
s1(0x86e8b2,u8(0x5cull));
}
B5b7ae6:{NFSU2_TR(0x5b7ae6);
__builtin_memmove(gp(0x86e8b3),(R+12),1);
}
B5b7aec:L5b7aec:{c.instructions+=2;NFSU2_TR(0x5b7aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b7aed:{NFSU2_TR(0x5b7aed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7af0:L5b7af0:{c.instructions+=7;NFSU2_TR(0x5b7af0);
__builtin_memmove((R+0),gp(0x7fca00),4);
}
B5b7af5:{NFSU2_TR(0x5b7af5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b7af7:{NFSU2_TR(0x5b7af7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7afa:{NFSU2_TR(0x5b7afa);
__builtin_memmove((R+4),(R+518),1);
}
B5b7afd:{NFSU2_TR(0x5b7afd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5b7afe:{NFSU2_TR(0x5b7afe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7b00:{NFSU2_TR(0x5b7b00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7b10:L5b7b10:{c.instructions+=2;NFSU2_TR(0x5b7b10);
__builtin_memmove((R+0),gp(0x8709c8),1);
}
B5b7b15:{NFSU2_TR(0x5b7b15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7b20:L5b7b20:{c.instructions+=9;NFSU2_TR(0x5b7b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x22cull))));
}
B5b7b26:{NFSU2_TR(0x5b7b26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b27:{NFSU2_TR(0x5b7b27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b28:{NFSU2_TR(0x5b7b28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b29:{NFSU2_TR(0x5b7b29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b2a:{NFSU2_TR(0x5b7b2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b7b2c:{NFSU2_TR(0x5b7b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7b34:{NFSU2_TR(0x5b7b34);
w4(R+4,u32(0x49ull));
}
B5b7b39:{NFSU2_TR(0x5b7b39);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7b3d:L5b7b3d:{c.instructions+=1;NFSU2_TR(0x5b7b3d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b7b3f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7b3du);}goto L5b7b3d;}
}
B5b7b3f:L5b7b3f:{c.instructions+=5;NFSU2_TR(0x5b7b3f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7b41:{NFSU2_TR(0x5b7b41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b42:{NFSU2_TR(0x5b7b42);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b44:{NFSU2_TR(0x5b7b44);
w4(R+12,u32(0x3ull));
}
B5b7b49:{NFSU2_TR(0x5b7b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7b4eull));
TAIL_STATIC(0x76e9fcu,76e);
}
B5b7b4e:L5b7b4e:{c.instructions+=3;NFSU2_TR(0x5b7b4e);
__builtin_memmove((R+24),(R+0),4);
}
B5b7b50:{NFSU2_TR(0x5b7b50);
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
B5b7b53:{NFSU2_TR(0x5b7b53);
if(r1(R+518)){{goto L5b7c11;}}
}
B5b7b59:L5b7b59:{c.instructions+=2;NFSU2_TR(0x5b7b59);
__builtin_memmove((R+20),gp(0x783150),4);
}
B5b7b5f:{NFSU2_TR(0x5b7b5f);
}
B5b7b60:L5b7b60:{c.instructions+=5;NFSU2_TR(0x5b7b60);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b7b64:{NFSU2_TR(0x5b7b64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b65:{NFSU2_TR(0x5b7b65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b66:{NFSU2_TR(0x5b7b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x128ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7b6e:{NFSU2_TR(0x5b7b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7b73ull));
TAIL_STATIC(0x76e9f6u,76e);
}
B5b7b73:L5b7b73:{c.instructions+=2;NFSU2_TR(0x5b7b73);
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
B5b7b75:{NFSU2_TR(0x5b7b75);
if(r1(R+518)){{goto L5b7bde;}}
}
B5b7b77:L5b7b77:{c.instructions+=4;NFSU2_TR(0x5b7b77);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7b7b:{NFSU2_TR(0x5b7b7b);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b7d:{NFSU2_TR(0x5b7b7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7b7e:{NFSU2_TR(0x5b7b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7b83ull));
TAIL_STATIC(0x75d660u,75d);
}
B5b7b83:L5b7b83:{c.instructions+=3;NFSU2_TR(0x5b7b83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b7b86:{NFSU2_TR(0x5b7b86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b7b88:{NFSU2_TR(0x5b7b88);
if(r1(R+518)){{goto L5b7ba0;}}
}
B5b7b8a:L5b7b8a:{c.instructions+=3;NFSU2_TR(0x5b7b8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b7b8b:{NFSU2_TR(0x5b7b8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7b92:{NFSU2_TR(0x5b7b92);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5b7b94:L5b7b94:{c.instructions+=5;NFSU2_TR(0x5b7b94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5b7b96:{NFSU2_TR(0x5b7b96);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B5b7b99:{NFSU2_TR(0x5b7b99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b7b9a:{NFSU2_TR(0x5b7b9a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b7b9c:{NFSU2_TR(0x5b7b9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7b94u);}goto L5b7b94;}}
}
B5b7b9e:L5b7b9e:{c.instructions+=1;NFSU2_TR(0x5b7b9e);
{goto L5b7bb2;}
}
B5b7ba0:L5b7ba0:{c.instructions+=1;NFSU2_TR(0x5b7ba0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b7ba2:L5b7ba2:{c.instructions+=5;NFSU2_TR(0x5b7ba2);
u8 U[13];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5b7ba6:{NFSU2_TR(0x5b7ba6);
u8 U[13];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5b7bad:{NFSU2_TR(0x5b7bad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b7bae:{NFSU2_TR(0x5b7bae);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b7bb0:{NFSU2_TR(0x5b7bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7ba2u);}goto L5b7ba2;}}
}
B5b7bb2:L5b7bb2:{c.instructions+=5;NFSU2_TR(0x5b7bb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7bb9:{NFSU2_TR(0x5b7bb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b7bc0:{NFSU2_TR(0x5b7bc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bc1:{NFSU2_TR(0x5b7bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bc2:{NFSU2_TR(0x5b7bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7bc7ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B5b7bc7:L5b7bc7:{c.instructions+=3;NFSU2_TR(0x5b7bc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b7bca:{NFSU2_TR(0x5b7bca);
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
B5b7bcc:{NFSU2_TR(0x5b7bcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b7bcf;}}
}
B5b7bce:L5b7bce:{c.instructions+=1;NFSU2_TR(0x5b7bce);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7bcf:L5b7bcf:{c.instructions+=4;NFSU2_TR(0x5b7bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7bd3:{NFSU2_TR(0x5b7bd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bd4:{NFSU2_TR(0x5b7bd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bd5:{NFSU2_TR(0x5b7bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7bdaull));
TAIL_STATIC(0x76e9f0u,76e);
}
B5b7bda:L5b7bda:{c.instructions+=2;NFSU2_TR(0x5b7bda);
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
B5b7bdc:{NFSU2_TR(0x5b7bdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7b77u);}goto L5b7b77;}}
}
B5b7bde:L5b7bde:{c.instructions+=2;NFSU2_TR(0x5b7bde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bdf:{NFSU2_TR(0x5b7bdf);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7be5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7be5:L5b7be5:{c.instructions+=4;NFSU2_TR(0x5b7be5);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7bec:{NFSU2_TR(0x5b7bec);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B5b7bed:{NFSU2_TR(0x5b7bed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7bef:{NFSU2_TR(0x5b7bef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b7c1e;}}
}
B5b7bf1:L5b7bf1:{c.instructions+=2;NFSU2_TR(0x5b7bf1);
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
B5b7bf3:{NFSU2_TR(0x5b7bf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b7c1e;}}
}
B5b7bf5:L5b7bf5:{c.instructions+=2;NFSU2_TR(0x5b7bf5);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bfa:{NFSU2_TR(0x5b7bfa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7bfcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7bfc:L5b7bfc:{c.instructions+=4;NFSU2_TR(0x5b7bfc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7bfe:{NFSU2_TR(0x5b7bfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7bff:{NFSU2_TR(0x5b7bff);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7c01:{NFSU2_TR(0x5b7c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7c06ull));
TAIL_STATIC(0x76e9fcu,76e);
}
B5b7c06:L5b7c06:{c.instructions+=3;NFSU2_TR(0x5b7c06);
__builtin_memmove((R+24),(R+0),4);
}
B5b7c08:{NFSU2_TR(0x5b7c08);
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
B5b7c0b:{NFSU2_TR(0x5b7c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b7b60u);}goto L5b7b60;}}
}
B5b7c11:L5b7c11:{c.instructions+=7;NFSU2_TR(0x5b7c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7c12:{NFSU2_TR(0x5b7c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b7c13:{NFSU2_TR(0x5b7c13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b7c14:{NFSU2_TR(0x5b7c14);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b7c16:{NFSU2_TR(0x5b7c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b7c17:{NFSU2_TR(0x5b7c17);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7c1d:{NFSU2_TR(0x5b7c1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7c1e:L5b7c1e:{c.instructions+=10;NFSU2_TR(0x5b7c1e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b7c20:{NFSU2_TR(0x5b7c20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7c22:{NFSU2_TR(0x5b7c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b7c23:{NFSU2_TR(0x5b7c23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b7c24:{NFSU2_TR(0x5b7c24);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B5b7c27:{NFSU2_TR(0x5b7c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b7c28:{NFSU2_TR(0x5b7c28);
__builtin_memmove((R+0),(R+8),1);
}
B5b7c2a:{NFSU2_TR(0x5b7c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b7c2b:{NFSU2_TR(0x5b7c2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7c31:{NFSU2_TR(0x5b7c31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7c40:L5b7c40:{c.instructions+=2;NFSU2_TR(0x5b7c40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7c41:{NFSU2_TR(0x5b7c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7c46ull));
TAIL_STATIC(0x570a30u,570);
}
B5b7c46:L5b7c46:{c.instructions+=2;NFSU2_TR(0x5b7c46);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7c49:{NFSU2_TR(0x5b7c49);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b7cc5;}}
}
B5b7c4b:L5b7c4b:{c.instructions+=1;NFSU2_TR(0x5b7c4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b7ce0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b7c52:L5b7c52:{c.instructions+=2;NFSU2_TR(0x5b7c52);
w4(R+0,u32(0x7a340cull));
}
B5b7c57:{NFSU2_TR(0x5b7c57);
{goto L5b7cc9;}
}
B5b7c59:L5b7c59:{c.instructions+=2;NFSU2_TR(0x5b7c59);
w4(R+0,u32(0x7a33d8ull));
}
B5b7c5e:{NFSU2_TR(0x5b7c5e);
{goto L5b7cc9;}
}
B5b7c60:L5b7c60:{c.instructions+=2;NFSU2_TR(0x5b7c60);
w4(R+0,u32(0x7a33a4ull));
}
B5b7c65:{NFSU2_TR(0x5b7c65);
{goto L5b7cc9;}
}
B5b7c67:L5b7c67:{c.instructions+=2;NFSU2_TR(0x5b7c67);
w4(R+0,u32(0x7a3370ull));
}
B5b7c6c:{NFSU2_TR(0x5b7c6c);
{goto L5b7cc9;}
}
B5b7c6e:L5b7c6e:{c.instructions+=2;NFSU2_TR(0x5b7c6e);
w4(R+0,u32(0x7a333cull));
}
B5b7c73:{NFSU2_TR(0x5b7c73);
{goto L5b7cc9;}
}
B5b7c75:L5b7c75:{c.instructions+=2;NFSU2_TR(0x5b7c75);
w4(R+0,u32(0x7a3308ull));
}
B5b7c7a:{NFSU2_TR(0x5b7c7a);
{goto L5b7cc9;}
}
B5b7c7c:L5b7c7c:{c.instructions+=2;NFSU2_TR(0x5b7c7c);
w4(R+0,u32(0x7a32d4ull));
}
B5b7c81:{NFSU2_TR(0x5b7c81);
{goto L5b7cc9;}
}
B5b7c83:L5b7c83:{c.instructions+=2;NFSU2_TR(0x5b7c83);
w4(R+0,u32(0x7a32a0ull));
}
B5b7c88:{NFSU2_TR(0x5b7c88);
{goto L5b7cc9;}
}
B5b7c8a:L5b7c8a:{c.instructions+=2;NFSU2_TR(0x5b7c8a);
w4(R+0,u32(0x7a326cull));
}
B5b7c8f:{NFSU2_TR(0x5b7c8f);
{goto L5b7cc9;}
}
B5b7c91:L5b7c91:{c.instructions+=2;NFSU2_TR(0x5b7c91);
w4(R+0,u32(0x7a3238ull));
}
B5b7c96:{NFSU2_TR(0x5b7c96);
{goto L5b7cc9;}
}
B5b7c98:L5b7c98:{c.instructions+=1;NFSU2_TR(0x5b7c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7c9dull));
TAIL_STATIC(0x4ff970u,4ff);
}
B5b7c9d:L5b7c9d:{c.instructions+=2;NFSU2_TR(0x5b7c9d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7ca0:{NFSU2_TR(0x5b7ca0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b7cc5;}}
}
B5b7ca2:L5b7ca2:{c.instructions+=1;NFSU2_TR(0x5b7ca2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b7d14ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b7ca9:L5b7ca9:{c.instructions+=2;NFSU2_TR(0x5b7ca9);
w4(R+0,u32(0x7a3200ull));
}
B5b7cae:{NFSU2_TR(0x5b7cae);
{goto L5b7cc9;}
}
B5b7cb0:L5b7cb0:{c.instructions+=2;NFSU2_TR(0x5b7cb0);
w4(R+0,u32(0x7a31ccull));
}
B5b7cb5:{NFSU2_TR(0x5b7cb5);
{goto L5b7cc9;}
}
B5b7cb7:L5b7cb7:{c.instructions+=2;NFSU2_TR(0x5b7cb7);
w4(R+0,u32(0x7a3198ull));
}
B5b7cbc:{NFSU2_TR(0x5b7cbc);
{goto L5b7cc9;}
}
B5b7cbe:L5b7cbe:{c.instructions+=2;NFSU2_TR(0x5b7cbe);
w4(R+0,u32(0x7a3164ull));
}
B5b7cc3:{NFSU2_TR(0x5b7cc3);
{goto L5b7cc9;}
}
B5b7cc5:L5b7cc5:{c.instructions+=1;NFSU2_TR(0x5b7cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b7cc9:L5b7cc9:{c.instructions+=7;NFSU2_TR(0x5b7cc9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7ccb:{NFSU2_TR(0x5b7ccb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7ccd:{NFSU2_TR(0x5b7ccd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7ccf:{NFSU2_TR(0x5b7ccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7cd0:{NFSU2_TR(0x5b7cd0);
u8 U[4];
w4(U+0,u32(0x7a315cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7cd5:{NFSU2_TR(0x5b7cd5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7cd7:{NFSU2_TR(0x5b7cd7);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7cddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b7cdd:L5b7cdd:{c.instructions+=2;NFSU2_TR(0x5b7cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7cde:{NFSU2_TR(0x5b7cde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7d40:L5b7d40:{c.instructions+=18;NFSU2_TR(0x5b7d40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d41:{NFSU2_TR(0x5b7d41);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b7d45:{NFSU2_TR(0x5b7d45);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5b7d49:{NFSU2_TR(0x5b7d49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d4d:{NFSU2_TR(0x5b7d4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b7d51:{NFSU2_TR(0x5b7d51);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b7d55:{NFSU2_TR(0x5b7d55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d56:{NFSU2_TR(0x5b7d56);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b7d5c:{NFSU2_TR(0x5b7d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7d60:{NFSU2_TR(0x5b7d60);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7d63:{NFSU2_TR(0x5b7d63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d64:{NFSU2_TR(0x5b7d64);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b7d68:{NFSU2_TR(0x5b7d68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7d6c:{NFSU2_TR(0x5b7d6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d6d:{NFSU2_TR(0x5b7d6d);
{u32 ea_=u32(u32(7919972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b7d73:{NFSU2_TR(0x5b7d73);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7d76:{NFSU2_TR(0x5b7d76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d77:{NFSU2_TR(0x5b7d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7d7cull));
TAIL_STATIC(0x48b450u,48b);
}
B5b7d7c:L5b7d7c:{c.instructions+=2;NFSU2_TR(0x5b7d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7d7d:{NFSU2_TR(0x5b7d7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7d80:L5b7d80:{c.instructions+=18;NFSU2_TR(0x5b7d80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d81:{NFSU2_TR(0x5b7d81);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b7d85:{NFSU2_TR(0x5b7d85);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5b7d89:{NFSU2_TR(0x5b7d89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d8d:{NFSU2_TR(0x5b7d8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b7d91:{NFSU2_TR(0x5b7d91);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b7d95:{NFSU2_TR(0x5b7d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7d96:{NFSU2_TR(0x5b7d96);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b7d9c:{NFSU2_TR(0x5b7d9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7da0:{NFSU2_TR(0x5b7da0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7da3:{NFSU2_TR(0x5b7da3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7da4:{NFSU2_TR(0x5b7da4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b7da8:{NFSU2_TR(0x5b7da8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7dac:{NFSU2_TR(0x5b7dac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7dad:{NFSU2_TR(0x5b7dad);
{u32 ea_=u32(u32(7919972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b7db3:{NFSU2_TR(0x5b7db3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b7db6:{NFSU2_TR(0x5b7db6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7db7:{NFSU2_TR(0x5b7db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7dbcull));
TAIL_STATIC(0x48b450u,48b);
}
B5b7dbc:L5b7dbc:{c.instructions+=2;NFSU2_TR(0x5b7dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b7dbd:{NFSU2_TR(0x5b7dbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7dc0:L5b7dc0:{c.instructions+=6;NFSU2_TR(0x5b7dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7dc4:{NFSU2_TR(0x5b7dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b7dc6:{NFSU2_TR(0x5b7dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7dca:{NFSU2_TR(0x5b7dca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7dcb:{NFSU2_TR(0x5b7dcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7dcc:{NFSU2_TR(0x5b7dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7dd1ull));
TAIL_STATIC(0x4012b0u,401);
}
B5b7dd1:L5b7dd1:{c.instructions+=2;NFSU2_TR(0x5b7dd1);
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
B5b7dd4:{NFSU2_TR(0x5b7dd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7de0:L5b7de0:{c.instructions+=25;NFSU2_TR(0x5b7de0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7de1:{NFSU2_TR(0x5b7de1);
__builtin_memmove((R+20),(R+16),4);
}
B5b7de3:{NFSU2_TR(0x5b7de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b7de6:{NFSU2_TR(0x5b7de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b7de8:{NFSU2_TR(0x5b7de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b7dea:{NFSU2_TR(0x5b7dea);
__builtin_memmove(gp(0x873370),(R+4),4);
}
B5b7df0:{NFSU2_TR(0x5b7df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7df3:{NFSU2_TR(0x5b7df3);
__builtin_memmove(gp(0x873374),(R+8),4);
}
B5b7df9:{NFSU2_TR(0x5b7df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7dfc:{NFSU2_TR(0x5b7dfc);
__builtin_memmove(gp(0x873378),(R+4),4);
}
B5b7e02:{NFSU2_TR(0x5b7e02);
s4(0x87337c,u32(0x0ull));
}
B5b7e0c:{NFSU2_TR(0x5b7e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7e0f:{NFSU2_TR(0x5b7e0f);
__builtin_memmove(gp(0x8763c0),(R+8),4);
}
B5b7e15:{NFSU2_TR(0x5b7e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b7e18:{NFSU2_TR(0x5b7e18);
__builtin_memmove(gp(0x8763c4),(R+4),4);
}
B5b7e1e:{NFSU2_TR(0x5b7e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b7e21:{NFSU2_TR(0x5b7e21);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b7e26:{NFSU2_TR(0x5b7e26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7e28:{NFSU2_TR(0x5b7e28);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7e2a:{NFSU2_TR(0x5b7e2a);
__builtin_memmove(gp(0x8763c8),(R+8),4);
}
B5b7e30:{NFSU2_TR(0x5b7e30);
s4(0x8763cc,u32(0x0ull));
}
B5b7e3a:{NFSU2_TR(0x5b7e3a);
s4(0x870750,u32(0x0ull));
}
B5b7e44:{NFSU2_TR(0x5b7e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b7e46:{NFSU2_TR(0x5b7e46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7e47:{NFSU2_TR(0x5b7e47);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7e4dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b7e4d:L5b7e4d:{c.instructions+=4;NFSU2_TR(0x5b7e4d);
s4(0x87074c,u32(0x0ull));
}
B5b7e57:{NFSU2_TR(0x5b7e57);
w4(R+0,u32(0x1ull));
}
B5b7e5c:{NFSU2_TR(0x5b7e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b7e5d:{NFSU2_TR(0x5b7e5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7e60:L5b7e60:{c.instructions+=4;NFSU2_TR(0x5b7e60);
__builtin_memmove((R+0),gp(0x87074c),4);
}
B5b7e65:{NFSU2_TR(0x5b7e65);
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
B5b7e67:{NFSU2_TR(0x5b7e67);
w4(R+0,u32(0x1ull));
}
B5b7e6c:{NFSU2_TR(0x5b7e6c);
if(r1(R+518)){{goto L5b7e78;}}
}
B5b7e6e:L5b7e6e:{c.instructions+=1;NFSU2_TR(0x5b7e6e);
s4(0x87074c,u32(0x0ull));
}
B5b7e78:L5b7e78:{c.instructions+=1;NFSU2_TR(0x5b7e78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7e80:L5b7e80:{c.instructions+=6;NFSU2_TR(0x5b7e80);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5b7e85:{NFSU2_TR(0x5b7e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b7e87:{NFSU2_TR(0x5b7e87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7e89:{NFSU2_TR(0x5b7e89);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7e8b:{NFSU2_TR(0x5b7e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7e8c:{NFSU2_TR(0x5b7e8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b7e92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b7e92:L5b7e92:{c.instructions+=2;NFSU2_TR(0x5b7e92);
w4(R+0,u32(0x1ull));
}
B5b7e97:{NFSU2_TR(0x5b7e97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7ea0:L5b7ea0:{c.instructions+=10;NFSU2_TR(0x5b7ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b7ea7:{NFSU2_TR(0x5b7ea7);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5b7eac:{NFSU2_TR(0x5b7eac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b7eae:{NFSU2_TR(0x5b7eae);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B5b7eb4:{NFSU2_TR(0x5b7eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b7eb7:{NFSU2_TR(0x5b7eb7);
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
B5b7eb9:{NFSU2_TR(0x5b7eb9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b7ebd:{NFSU2_TR(0x5b7ebd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b7ec1:{NFSU2_TR(0x5b7ec1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
w2(U+4,u16(0xaull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b7ec7:{NFSU2_TR(0x5b7ec7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7ed0:L5b7ed0:{c.instructions+=3;NFSU2_TR(0x5b7ed0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b7ed4:{NFSU2_TR(0x5b7ed4);
__builtin_memmove(gp(0x870754),(R+0),1);
}
B5b7ed9:{NFSU2_TR(0x5b7ed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7ee0:L5b7ee0:{c.instructions+=7;NFSU2_TR(0x5b7ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b7ee1:{NFSU2_TR(0x5b7ee1);
__builtin_memmove((R+24),gp(0x874e70),4);
}
B5b7ee7:{NFSU2_TR(0x5b7ee7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5b7eea:{NFSU2_TR(0x5b7eea);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5b7eec:{NFSU2_TR(0x5b7eec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7eee:{NFSU2_TR(0x5b7eee);
w1(R+4,u8(0x80ull));
}
B5b7ef0:{NFSU2_TR(0x5b7ef0);
if(r1(R+518)){{goto L5b7f14;}}
}
B5b7ef2:L5b7ef2:{c.instructions+=6;NFSU2_TR(0x5b7ef2);
__builtin_memmove(gp(0x874c48),(R+0),4);
}
B5b7ef7:{NFSU2_TR(0x5b7ef7);
__builtin_memmove(gp(0x874c4c),(R+0),4);
}
B5b7efc:{NFSU2_TR(0x5b7efc);
__builtin_memmove(gp(0x874c51),(R+8),1);
}
B5b7f02:{NFSU2_TR(0x5b7f02);
__builtin_memmove(gp(0x874c50),(R+8),1);
}
B5b7f08:{NFSU2_TR(0x5b7f08);
__builtin_memmove(gp(0x874c53),(R+4),1);
}
B5b7f0e:{NFSU2_TR(0x5b7f0e);
__builtin_memmove(gp(0x874c52),(R+4),1);
}
B5b7f14:L5b7f14:{c.instructions+=2;NFSU2_TR(0x5b7f14);
u8 U[8];
__builtin_memmove((U+0),gp(0x8751e0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7f1a:{NFSU2_TR(0x5b7f1a);
if(r1(R+518)){{goto L5b7f3e;}}
}
B5b7f1c:L5b7f1c:{c.instructions+=6;NFSU2_TR(0x5b7f1c);
__builtin_memmove(gp(0x874fb8),(R+0),4);
}
B5b7f21:{NFSU2_TR(0x5b7f21);
__builtin_memmove(gp(0x874fbc),(R+0),4);
}
B5b7f26:{NFSU2_TR(0x5b7f26);
__builtin_memmove(gp(0x874fc1),(R+8),1);
}
B5b7f2c:{NFSU2_TR(0x5b7f2c);
__builtin_memmove(gp(0x874fc0),(R+8),1);
}
B5b7f32:{NFSU2_TR(0x5b7f32);
__builtin_memmove(gp(0x874fc3),(R+4),1);
}
B5b7f38:{NFSU2_TR(0x5b7f38);
__builtin_memmove(gp(0x874fc2),(R+4),1);
}
B5b7f3e:L5b7f3e:{c.instructions+=2;NFSU2_TR(0x5b7f3e);
u8 U[8];
__builtin_memmove((U+0),gp(0x875550),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7f44:{NFSU2_TR(0x5b7f44);
if(r1(R+518)){{goto L5b7f68;}}
}
B5b7f46:L5b7f46:{c.instructions+=6;NFSU2_TR(0x5b7f46);
__builtin_memmove(gp(0x875328),(R+0),4);
}
B5b7f4b:{NFSU2_TR(0x5b7f4b);
__builtin_memmove(gp(0x87532c),(R+0),4);
}
B5b7f50:{NFSU2_TR(0x5b7f50);
__builtin_memmove(gp(0x875331),(R+8),1);
}
B5b7f56:{NFSU2_TR(0x5b7f56);
__builtin_memmove(gp(0x875330),(R+8),1);
}
B5b7f5c:{NFSU2_TR(0x5b7f5c);
__builtin_memmove(gp(0x875333),(R+4),1);
}
B5b7f62:{NFSU2_TR(0x5b7f62);
__builtin_memmove(gp(0x875332),(R+4),1);
}
B5b7f68:L5b7f68:{c.instructions+=2;NFSU2_TR(0x5b7f68);
u8 U[8];
__builtin_memmove((U+0),gp(0x8758c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7f6e:{NFSU2_TR(0x5b7f6e);
if(r1(R+518)){{goto L5b7f92;}}
}
B5b7f70:L5b7f70:{c.instructions+=6;NFSU2_TR(0x5b7f70);
__builtin_memmove(gp(0x875698),(R+0),4);
}
B5b7f75:{NFSU2_TR(0x5b7f75);
__builtin_memmove(gp(0x87569c),(R+0),4);
}
B5b7f7a:{NFSU2_TR(0x5b7f7a);
__builtin_memmove(gp(0x8756a1),(R+8),1);
}
B5b7f80:{NFSU2_TR(0x5b7f80);
__builtin_memmove(gp(0x8756a0),(R+8),1);
}
B5b7f86:{NFSU2_TR(0x5b7f86);
__builtin_memmove(gp(0x8756a3),(R+4),1);
}
B5b7f8c:{NFSU2_TR(0x5b7f8c);
__builtin_memmove(gp(0x8756a2),(R+4),1);
}
B5b7f92:L5b7f92:{c.instructions+=2;NFSU2_TR(0x5b7f92);
u8 U[8];
__builtin_memmove((U+0),gp(0x875c30),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b7f98:{NFSU2_TR(0x5b7f98);
if(r1(R+518)){{goto L5b7fbc;}}
}
B5b7f9a:L5b7f9a:{c.instructions+=6;NFSU2_TR(0x5b7f9a);
__builtin_memmove(gp(0x875a08),(R+0),4);
}
B5b7f9f:{NFSU2_TR(0x5b7f9f);
__builtin_memmove(gp(0x875a0c),(R+0),4);
}
B5b7fa4:{NFSU2_TR(0x5b7fa4);
__builtin_memmove(gp(0x875a11),(R+8),1);
}
B5b7faa:{NFSU2_TR(0x5b7faa);
__builtin_memmove(gp(0x875a10),(R+8),1);
}
B5b7fb0:{NFSU2_TR(0x5b7fb0);
__builtin_memmove(gp(0x875a13),(R+4),1);
}
B5b7fb6:{NFSU2_TR(0x5b7fb6);
__builtin_memmove(gp(0x875a12),(R+4),1);
}
B5b7fbc:L5b7fbc:{c.instructions+=3;NFSU2_TR(0x5b7fbc);
u8 U[14];
__builtin_memmove((U+6),gp(0x875fa0),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b7fc2:{NFSU2_TR(0x5b7fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b7fc3:{NFSU2_TR(0x5b7fc3);
if(r1(R+518)){{goto L5b7fe7;}}
}
B5b7fc5:L5b7fc5:{c.instructions+=6;NFSU2_TR(0x5b7fc5);
__builtin_memmove(gp(0x875d78),(R+0),4);
}
B5b7fca:{NFSU2_TR(0x5b7fca);
__builtin_memmove(gp(0x875d7c),(R+0),4);
}
B5b7fcf:{NFSU2_TR(0x5b7fcf);
__builtin_memmove(gp(0x875d81),(R+8),1);
}
B5b7fd5:{NFSU2_TR(0x5b7fd5);
__builtin_memmove(gp(0x875d80),(R+8),1);
}
B5b7fdb:{NFSU2_TR(0x5b7fdb);
__builtin_memmove(gp(0x875d83),(R+4),1);
}
B5b7fe1:{NFSU2_TR(0x5b7fe1);
__builtin_memmove(gp(0x875d82),(R+4),1);
}
B5b7fe7:L5b7fe7:{c.instructions+=1;NFSU2_TR(0x5b7fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b7ff0:L5b7ff0:{c.instructions+=3;NFSU2_TR(0x5b7ff0);
__builtin_memmove((R+0),gp(0x87077c),4);
}
B5b7ff5:{NFSU2_TR(0x5b7ff5);
s4(0x87077c,u32(0x0ull));
}
B5b7fff:{NFSU2_TR(0x5b7fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5b7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
