#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4f8(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f7(u8* __restrict R,Cpu& c);
u32 page_4f7(Cpu& c){return body_4f7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f7003:goto L4f7003;
case 0x4f7004:c.instructions+=2;goto B4f7004;
case 0x4f7009:c.instructions+=1;goto B4f7009;
case 0x4f700e:goto L4f700e;
case 0x4f7014:c.instructions+=2;goto B4f7014;
case 0x4f7015:c.instructions+=1;goto B4f7015;
case 0x4f701a:goto L4f701a;
case 0x4f701d:c.instructions+=3;goto B4f701d;
case 0x4f701f:c.instructions+=2;goto B4f701f;
case 0x4f7022:c.instructions+=1;goto B4f7022;
case 0x4f7027:goto L4f7027;
case 0x4f702d:c.instructions+=1;goto B4f702d;
case 0x4f7032:goto L4f7032;
case 0x4f7038:c.instructions+=4;goto B4f7038;
case 0x4f703a:c.instructions+=3;goto B4f703a;
case 0x4f703c:c.instructions+=2;goto B4f703c;
case 0x4f703f:c.instructions+=1;goto B4f703f;
case 0x4f7041:goto L4f7041;
case 0x4f7044:c.instructions+=3;goto B4f7044;
case 0x4f7049:c.instructions+=2;goto B4f7049;
case 0x4f704a:c.instructions+=1;goto B4f704a;
case 0x4f704f:goto L4f704f;
case 0x4f7051:c.instructions+=3;goto B4f7051;
case 0x4f7056:c.instructions+=2;goto B4f7056;
case 0x4f7057:c.instructions+=1;goto B4f7057;
case 0x4f705c:goto L4f705c;
case 0x4f7061:c.instructions+=1;goto B4f7061;
case 0x4f7066:goto L4f7066;
case 0x4f7069:c.instructions+=2;goto B4f7069;
case 0x4f706a:c.instructions+=1;goto B4f706a;
case 0x4f706b:goto L4f706b;
case 0x4f7070:goto L4f7070;
case 0x4f7072:c.instructions+=3;goto B4f7072;
case 0x4f7075:c.instructions+=2;goto B4f7075;
case 0x4f7077:c.instructions+=1;goto B4f7077;
case 0x4f7079:goto L4f7079;
case 0x4f707e:goto L4f707e;
case 0x4f7080:c.instructions+=1;goto B4f7080;
case 0x4f7082:goto L4f7082;
case 0x4f7085:c.instructions+=1;goto B4f7085;
case 0x4f7087:goto L4f7087;
case 0x4f708a:c.instructions+=3;goto B4f708a;
case 0x4f708f:c.instructions+=2;goto B4f708f;
case 0x4f7090:c.instructions+=1;goto B4f7090;
case 0x4f7095:goto L4f7095;
case 0x4f7097:c.instructions+=3;goto B4f7097;
case 0x4f709c:c.instructions+=2;goto B4f709c;
case 0x4f709d:c.instructions+=1;goto B4f709d;
case 0x4f70a2:goto L4f70a2;
case 0x4f70a7:c.instructions+=1;goto B4f70a7;
case 0x4f70ac:goto L4f70ac;
case 0x4f70af:c.instructions+=3;goto B4f70af;
case 0x4f70b0:c.instructions+=2;goto B4f70b0;
case 0x4f70b1:c.instructions+=1;goto B4f70b1;
case 0x4f70b3:goto L4f70b3;
case 0x4f70b5:goto L4f70b5;
case 0x4f70b8:c.instructions+=4;goto B4f70b8;
case 0x4f70ba:c.instructions+=3;goto B4f70ba;
case 0x4f70bd:c.instructions+=2;goto B4f70bd;
case 0x4f70c0:c.instructions+=1;goto B4f70c0;
case 0x4f70c2:goto L4f70c2;
case 0x4f70c5:c.instructions+=4;goto B4f70c5;
case 0x4f70c6:c.instructions+=3;goto B4f70c6;
case 0x4f70ca:c.instructions+=2;goto B4f70ca;
case 0x4f70cb:c.instructions+=1;goto B4f70cb;
case 0x4f70d0:goto L4f70d0;
case 0x4f70d3:c.instructions+=2;goto B4f70d3;
case 0x4f70d5:c.instructions+=1;goto B4f70d5;
case 0x4f70da:goto L4f70da;
case 0x4f70e0:c.instructions+=5;goto B4f70e0;
case 0x4f70e3:c.instructions+=4;goto B4f70e3;
case 0x4f70e4:c.instructions+=3;goto B4f70e4;
case 0x4f70e8:c.instructions+=2;goto B4f70e8;
case 0x4f70e9:c.instructions+=1;goto B4f70e9;
case 0x4f70ee:goto L4f70ee;
case 0x4f70f1:c.instructions+=2;goto B4f70f1;
case 0x4f70f3:c.instructions+=1;goto B4f70f3;
case 0x4f70f8:goto L4f70f8;
case 0x4f70fe:c.instructions+=1;goto B4f70fe;
case 0x4f7103:goto L4f7103;
case 0x4f7106:c.instructions+=6;goto B4f7106;
case 0x4f7107:c.instructions+=5;goto B4f7107;
case 0x4f710c:c.instructions+=4;goto B4f710c;
case 0x4f7110:c.instructions+=3;goto B4f7110;
case 0x4f7112:c.instructions+=2;goto B4f7112;
case 0x4f7113:c.instructions+=1;goto B4f7113;
case 0x4f7118:goto L4f7118;
case 0x4f711c:c.instructions+=2;goto B4f711c;
case 0x4f711d:c.instructions+=1;goto B4f711d;
case 0x4f7122:goto L4f7122;
case 0x4f7123:c.instructions+=3;goto B4f7123;
case 0x4f7126:c.instructions+=2;goto B4f7126;
case 0x4f7127:c.instructions+=1;goto B4f7127;
case 0x4f712c:goto L4f712c;
case 0x4f712e:c.instructions+=3;goto B4f712e;
case 0x4f7131:c.instructions+=2;goto B4f7131;
case 0x4f7133:c.instructions+=1;goto B4f7133;
case 0x4f7135:goto L4f7135;
case 0x4f713a:goto L4f713a;
case 0x4f713c:c.instructions+=1;goto B4f713c;
case 0x4f713e:goto L4f713e;
case 0x4f7141:c.instructions+=1;goto B4f7141;
case 0x4f7143:goto L4f7143;
case 0x4f7145:goto L4f7145;
case 0x4f7148:c.instructions+=4;goto B4f7148;
case 0x4f714a:c.instructions+=3;goto B4f714a;
case 0x4f714d:c.instructions+=2;goto B4f714d;
case 0x4f7150:c.instructions+=1;goto B4f7150;
case 0x4f7152:goto L4f7152;
case 0x4f7154:c.instructions+=2;goto B4f7154;
case 0x4f7157:c.instructions+=1;goto B4f7157;
case 0x4f7159:goto L4f7159;
case 0x4f715d:c.instructions+=8;goto B4f715d;
case 0x4f715e:c.instructions+=7;goto B4f715e;
case 0x4f7160:c.instructions+=6;goto B4f7160;
case 0x4f7161:c.instructions+=5;goto B4f7161;
case 0x4f7162:c.instructions+=4;goto B4f7162;
case 0x4f7163:c.instructions+=3;goto B4f7163;
case 0x4f716a:c.instructions+=2;goto B4f716a;
case 0x4f716d:c.instructions+=1;goto B4f716d;
case 0x4f7170:goto L4f7170;
case 0x4f7172:c.instructions+=22;goto B4f7172;
case 0x4f7177:c.instructions+=21;goto B4f7177;
case 0x4f717d:c.instructions+=20;goto B4f717d;
case 0x4f717e:c.instructions+=19;goto B4f717e;
case 0x4f7185:c.instructions+=18;goto B4f7185;
case 0x4f7186:c.instructions+=17;goto B4f7186;
case 0x4f718a:c.instructions+=16;goto B4f718a;
case 0x4f718b:c.instructions+=15;goto B4f718b;
case 0x4f718c:c.instructions+=14;goto B4f718c;
case 0x4f718e:c.instructions+=13;goto B4f718e;
case 0x4f7190:c.instructions+=12;goto B4f7190;
case 0x4f7191:c.instructions+=11;goto B4f7191;
case 0x4f7195:c.instructions+=10;goto B4f7195;
case 0x4f7197:c.instructions+=9;goto B4f7197;
case 0x4f719a:c.instructions+=8;goto B4f719a;
case 0x4f719d:c.instructions+=7;goto B4f719d;
case 0x4f71a4:c.instructions+=6;goto B4f71a4;
case 0x4f71a7:c.instructions+=5;goto B4f71a7;
case 0x4f71aa:c.instructions+=4;goto B4f71aa;
case 0x4f71ad:c.instructions+=3;goto B4f71ad;
case 0x4f71b2:c.instructions+=2;goto B4f71b2;
case 0x4f71b6:c.instructions+=1;goto B4f71b6;
case 0x4f71bb:goto L4f71bb;
case 0x4f71be:c.instructions+=3;goto B4f71be;
case 0x4f71bf:c.instructions+=2;goto B4f71bf;
case 0x4f71c0:c.instructions+=1;goto B4f71c0;
case 0x4f71c5:goto L4f71c5;
case 0x4f71c7:c.instructions+=3;goto B4f71c7;
case 0x4f71ca:c.instructions+=2;goto B4f71ca;
case 0x4f71cc:c.instructions+=1;goto B4f71cc;
case 0x4f71ce:goto L4f71ce;
case 0x4f71d3:goto L4f71d3;
case 0x4f71d5:c.instructions+=1;goto B4f71d5;
case 0x4f71d7:goto L4f71d7;
case 0x4f71da:c.instructions+=1;goto B4f71da;
case 0x4f71dc:goto L4f71dc;
case 0x4f71de:goto L4f71de;
case 0x4f71e1:c.instructions+=4;goto B4f71e1;
case 0x4f71e3:c.instructions+=3;goto B4f71e3;
case 0x4f71e6:c.instructions+=2;goto B4f71e6;
case 0x4f71e9:c.instructions+=1;goto B4f71e9;
case 0x4f71eb:goto L4f71eb;
case 0x4f71f0:c.instructions+=2;goto B4f71f0;
case 0x4f71f3:c.instructions+=1;goto B4f71f3;
case 0x4f71f8:goto L4f71f8;
case 0x4f71fb:c.instructions+=3;goto B4f71fb;
case 0x4f71fc:c.instructions+=2;goto B4f71fc;
case 0x4f71fd:c.instructions+=1;goto B4f71fd;
case 0x4f7202:goto L4f7202;
case 0x4f7204:c.instructions+=3;goto B4f7204;
case 0x4f7207:c.instructions+=2;goto B4f7207;
case 0x4f7209:c.instructions+=1;goto B4f7209;
case 0x4f720b:goto L4f720b;
case 0x4f7210:goto L4f7210;
case 0x4f7212:c.instructions+=1;goto B4f7212;
case 0x4f7214:goto L4f7214;
case 0x4f7217:c.instructions+=1;goto B4f7217;
case 0x4f7219:goto L4f7219;
case 0x4f721b:goto L4f721b;
case 0x4f721e:c.instructions+=4;goto B4f721e;
case 0x4f7220:c.instructions+=3;goto B4f7220;
case 0x4f7223:c.instructions+=2;goto B4f7223;
case 0x4f7226:c.instructions+=1;goto B4f7226;
case 0x4f7228:goto L4f7228;
case 0x4f722d:c.instructions+=2;goto B4f722d;
case 0x4f7230:c.instructions+=1;goto B4f7230;
case 0x4f7235:goto L4f7235;
case 0x4f7236:c.instructions+=3;goto B4f7236;
case 0x4f7239:c.instructions+=2;goto B4f7239;
case 0x4f723a:c.instructions+=1;goto B4f723a;
case 0x4f723f:goto L4f723f;
case 0x4f7241:c.instructions+=3;goto B4f7241;
case 0x4f7244:c.instructions+=2;goto B4f7244;
case 0x4f7246:c.instructions+=1;goto B4f7246;
case 0x4f7248:goto L4f7248;
case 0x4f724d:goto L4f724d;
case 0x4f724f:c.instructions+=1;goto B4f724f;
case 0x4f7251:goto L4f7251;
case 0x4f7254:c.instructions+=1;goto B4f7254;
case 0x4f7256:goto L4f7256;
case 0x4f7258:goto L4f7258;
case 0x4f725b:c.instructions+=4;goto B4f725b;
case 0x4f725d:c.instructions+=3;goto B4f725d;
case 0x4f7260:c.instructions+=2;goto B4f7260;
case 0x4f7263:c.instructions+=1;goto B4f7263;
case 0x4f7265:goto L4f7265;
case 0x4f726a:c.instructions+=1;goto B4f726a;
case 0x4f726f:goto L4f726f;
case 0x4f7272:c.instructions+=3;goto B4f7272;
case 0x4f7273:c.instructions+=2;goto B4f7273;
case 0x4f7274:c.instructions+=1;goto B4f7274;
case 0x4f7279:goto L4f7279;
case 0x4f727b:c.instructions+=3;goto B4f727b;
case 0x4f727e:c.instructions+=2;goto B4f727e;
case 0x4f7280:c.instructions+=1;goto B4f7280;
case 0x4f7282:goto L4f7282;
case 0x4f7287:goto L4f7287;
case 0x4f7289:c.instructions+=1;goto B4f7289;
case 0x4f728b:goto L4f728b;
case 0x4f728e:c.instructions+=1;goto B4f728e;
case 0x4f7290:goto L4f7290;
case 0x4f7292:goto L4f7292;
case 0x4f7295:c.instructions+=4;goto B4f7295;
case 0x4f7297:c.instructions+=3;goto B4f7297;
case 0x4f729a:c.instructions+=2;goto B4f729a;
case 0x4f729d:c.instructions+=1;goto B4f729d;
case 0x4f729f:goto L4f729f;
case 0x4f72a4:c.instructions+=1;goto B4f72a4;
case 0x4f72a9:goto L4f72a9;
case 0x4f72ac:c.instructions+=3;goto B4f72ac;
case 0x4f72ad:c.instructions+=2;goto B4f72ad;
case 0x4f72ae:c.instructions+=1;goto B4f72ae;
case 0x4f72b3:goto L4f72b3;
case 0x4f72b5:c.instructions+=3;goto B4f72b5;
case 0x4f72b8:c.instructions+=2;goto B4f72b8;
case 0x4f72ba:c.instructions+=1;goto B4f72ba;
case 0x4f72bc:goto L4f72bc;
case 0x4f72c1:goto L4f72c1;
case 0x4f72c3:c.instructions+=1;goto B4f72c3;
case 0x4f72c5:goto L4f72c5;
case 0x4f72c8:c.instructions+=1;goto B4f72c8;
case 0x4f72ca:goto L4f72ca;
case 0x4f72cc:goto L4f72cc;
case 0x4f72cf:c.instructions+=4;goto B4f72cf;
case 0x4f72d1:c.instructions+=3;goto B4f72d1;
case 0x4f72d4:c.instructions+=2;goto B4f72d4;
case 0x4f72d7:c.instructions+=1;goto B4f72d7;
case 0x4f72d9:goto L4f72d9;
case 0x4f72de:c.instructions+=1;goto B4f72de;
case 0x4f72e3:goto L4f72e3;
case 0x4f72e4:c.instructions+=3;goto B4f72e4;
case 0x4f72e7:c.instructions+=2;goto B4f72e7;
case 0x4f72e8:c.instructions+=1;goto B4f72e8;
case 0x4f72ed:goto L4f72ed;
case 0x4f72ef:c.instructions+=3;goto B4f72ef;
case 0x4f72f2:c.instructions+=2;goto B4f72f2;
case 0x4f72f4:c.instructions+=1;goto B4f72f4;
case 0x4f72f6:goto L4f72f6;
case 0x4f72fb:goto L4f72fb;
case 0x4f72fd:c.instructions+=1;goto B4f72fd;
case 0x4f72ff:goto L4f72ff;
case 0x4f7302:c.instructions+=1;goto B4f7302;
case 0x4f7304:goto L4f7304;
case 0x4f7306:goto L4f7306;
case 0x4f7309:c.instructions+=4;goto B4f7309;
case 0x4f730b:c.instructions+=3;goto B4f730b;
case 0x4f730e:c.instructions+=2;goto B4f730e;
case 0x4f7311:c.instructions+=1;goto B4f7311;
case 0x4f7313:goto L4f7313;
case 0x4f7314:c.instructions+=4;goto B4f7314;
case 0x4f7315:c.instructions+=3;goto B4f7315;
case 0x4f7317:c.instructions+=2;goto B4f7317;
case 0x4f731a:c.instructions+=1;goto B4f731a;
case 0x4f731f:goto L4f731f;
case 0x4f7323:c.instructions+=8;goto B4f7323;
case 0x4f7326:c.instructions+=7;goto B4f7326;
case 0x4f7327:c.instructions+=6;goto B4f7327;
case 0x4f7329:c.instructions+=5;goto B4f7329;
case 0x4f732a:c.instructions+=4;goto B4f732a;
case 0x4f732b:c.instructions+=3;goto B4f732b;
case 0x4f7332:c.instructions+=2;goto B4f7332;
case 0x4f7335:c.instructions+=1;goto B4f7335;
case 0x4f7340:goto L4f7340;
case 0x4f7342:c.instructions+=23;goto B4f7342;
case 0x4f7347:c.instructions+=22;goto B4f7347;
case 0x4f734d:c.instructions+=21;goto B4f734d;
case 0x4f734e:c.instructions+=20;goto B4f734e;
case 0x4f7355:c.instructions+=19;goto B4f7355;
case 0x4f7356:c.instructions+=18;goto B4f7356;
case 0x4f735a:c.instructions+=17;goto B4f735a;
case 0x4f735b:c.instructions+=16;goto B4f735b;
case 0x4f735c:c.instructions+=15;goto B4f735c;
case 0x4f735e:c.instructions+=14;goto B4f735e;
case 0x4f7360:c.instructions+=13;goto B4f7360;
case 0x4f7361:c.instructions+=12;goto B4f7361;
case 0x4f7365:c.instructions+=11;goto B4f7365;
case 0x4f7367:c.instructions+=10;goto B4f7367;
case 0x4f736a:c.instructions+=9;goto B4f736a;
case 0x4f736d:c.instructions+=8;goto B4f736d;
case 0x4f7370:c.instructions+=7;goto B4f7370;
case 0x4f7377:c.instructions+=6;goto B4f7377;
case 0x4f737a:c.instructions+=5;goto B4f737a;
case 0x4f737d:c.instructions+=4;goto B4f737d;
case 0x4f7382:c.instructions+=3;goto B4f7382;
case 0x4f7383:c.instructions+=2;goto B4f7383;
case 0x4f7387:c.instructions+=1;goto B4f7387;
case 0x4f738c:goto L4f738c;
case 0x4f738e:c.instructions+=3;goto B4f738e;
case 0x4f7391:c.instructions+=2;goto B4f7391;
case 0x4f7393:c.instructions+=1;goto B4f7393;
case 0x4f7395:goto L4f7395;
case 0x4f739a:goto L4f739a;
case 0x4f739c:c.instructions+=1;goto B4f739c;
case 0x4f739e:goto L4f739e;
case 0x4f73a1:c.instructions+=1;goto B4f73a1;
case 0x4f73a3:goto L4f73a3;
case 0x4f73a5:goto L4f73a5;
case 0x4f73a8:c.instructions+=4;goto B4f73a8;
case 0x4f73aa:c.instructions+=3;goto B4f73aa;
case 0x4f73ad:c.instructions+=2;goto B4f73ad;
case 0x4f73b0:c.instructions+=1;goto B4f73b0;
case 0x4f73b2:goto L4f73b2;
case 0x4f73b3:c.instructions+=4;goto B4f73b3;
case 0x4f73b4:c.instructions+=3;goto B4f73b4;
case 0x4f73b6:c.instructions+=2;goto B4f73b6;
case 0x4f73b9:c.instructions+=1;goto B4f73b9;
case 0x4f73be:goto L4f73be;
case 0x4f73c2:c.instructions+=7;goto B4f73c2;
case 0x4f73c3:c.instructions+=6;goto B4f73c3;
case 0x4f73c5:c.instructions+=5;goto B4f73c5;
case 0x4f73c6:c.instructions+=4;goto B4f73c6;
case 0x4f73c7:c.instructions+=3;goto B4f73c7;
case 0x4f73ce:c.instructions+=2;goto B4f73ce;
case 0x4f73d1:c.instructions+=1;goto B4f73d1;
case 0x4f73e0:goto L4f73e0;
case 0x4f73e2:c.instructions+=24;goto B4f73e2;
case 0x4f73e7:c.instructions+=23;goto B4f73e7;
case 0x4f73ed:c.instructions+=22;goto B4f73ed;
case 0x4f73ee:c.instructions+=21;goto B4f73ee;
case 0x4f73f5:c.instructions+=20;goto B4f73f5;
case 0x4f73f6:c.instructions+=19;goto B4f73f6;
case 0x4f73fa:c.instructions+=18;goto B4f73fa;
case 0x4f73fb:c.instructions+=17;goto B4f73fb;
case 0x4f73fc:c.instructions+=16;goto B4f73fc;
case 0x4f73fd:c.instructions+=15;goto B4f73fd;
case 0x4f73ff:c.instructions+=14;goto B4f73ff;
case 0x4f7401:c.instructions+=13;goto B4f7401;
case 0x4f7402:c.instructions+=12;goto B4f7402;
case 0x4f7406:c.instructions+=11;goto B4f7406;
case 0x4f7408:c.instructions+=10;goto B4f7408;
case 0x4f740b:c.instructions+=9;goto B4f740b;
case 0x4f740e:c.instructions+=8;goto B4f740e;
case 0x4f7415:c.instructions+=7;goto B4f7415;
case 0x4f7418:c.instructions+=6;goto B4f7418;
case 0x4f741b:c.instructions+=5;goto B4f741b;
case 0x4f741e:c.instructions+=4;goto B4f741e;
case 0x4f7423:c.instructions+=3;goto B4f7423;
case 0x4f7427:c.instructions+=2;goto B4f7427;
case 0x4f742a:c.instructions+=1;goto B4f742a;
case 0x4f742f:goto L4f742f;
case 0x4f7432:c.instructions+=3;goto B4f7432;
case 0x4f7433:c.instructions+=2;goto B4f7433;
case 0x4f7434:c.instructions+=1;goto B4f7434;
case 0x4f7439:goto L4f7439;
case 0x4f743b:c.instructions+=3;goto B4f743b;
case 0x4f743e:c.instructions+=2;goto B4f743e;
case 0x4f7440:c.instructions+=1;goto B4f7440;
case 0x4f7442:goto L4f7442;
case 0x4f7447:goto L4f7447;
case 0x4f7449:c.instructions+=1;goto B4f7449;
case 0x4f744b:goto L4f744b;
case 0x4f744e:c.instructions+=1;goto B4f744e;
case 0x4f7450:goto L4f7450;
case 0x4f7452:goto L4f7452;
case 0x4f7455:c.instructions+=4;goto B4f7455;
case 0x4f7457:c.instructions+=3;goto B4f7457;
case 0x4f745a:c.instructions+=2;goto B4f745a;
case 0x4f745d:c.instructions+=1;goto B4f745d;
case 0x4f745f:goto L4f745f;
case 0x4f7464:c.instructions+=1;goto B4f7464;
case 0x4f7469:goto L4f7469;
case 0x4f746c:c.instructions+=3;goto B4f746c;
case 0x4f746d:c.instructions+=2;goto B4f746d;
case 0x4f746e:c.instructions+=1;goto B4f746e;
case 0x4f7473:goto L4f7473;
case 0x4f7475:c.instructions+=3;goto B4f7475;
case 0x4f7478:c.instructions+=2;goto B4f7478;
case 0x4f747a:c.instructions+=1;goto B4f747a;
case 0x4f747c:goto L4f747c;
case 0x4f7481:goto L4f7481;
case 0x4f7483:c.instructions+=1;goto B4f7483;
case 0x4f7485:goto L4f7485;
case 0x4f7488:c.instructions+=1;goto B4f7488;
case 0x4f748a:goto L4f748a;
case 0x4f748c:goto L4f748c;
case 0x4f748f:c.instructions+=4;goto B4f748f;
case 0x4f7491:c.instructions+=3;goto B4f7491;
case 0x4f7494:c.instructions+=2;goto B4f7494;
case 0x4f7497:c.instructions+=1;goto B4f7497;
case 0x4f7499:goto L4f7499;
case 0x4f749e:c.instructions+=1;goto B4f749e;
case 0x4f74a3:goto L4f74a3;
case 0x4f74a4:c.instructions+=3;goto B4f74a4;
case 0x4f74a7:c.instructions+=2;goto B4f74a7;
case 0x4f74a8:c.instructions+=1;goto B4f74a8;
case 0x4f74ad:goto L4f74ad;
case 0x4f74af:c.instructions+=3;goto B4f74af;
case 0x4f74b2:c.instructions+=2;goto B4f74b2;
case 0x4f74b4:c.instructions+=1;goto B4f74b4;
case 0x4f74b6:goto L4f74b6;
case 0x4f74bb:goto L4f74bb;
case 0x4f74bd:c.instructions+=1;goto B4f74bd;
case 0x4f74bf:goto L4f74bf;
case 0x4f74c2:c.instructions+=1;goto B4f74c2;
case 0x4f74c4:goto L4f74c4;
case 0x4f74c6:goto L4f74c6;
case 0x4f74c9:c.instructions+=4;goto B4f74c9;
case 0x4f74cb:c.instructions+=3;goto B4f74cb;
case 0x4f74ce:c.instructions+=2;goto B4f74ce;
case 0x4f74d1:c.instructions+=1;goto B4f74d1;
case 0x4f74d3:goto L4f74d3;
case 0x4f74d8:c.instructions+=1;goto B4f74d8;
case 0x4f74dd:goto L4f74dd;
case 0x4f74e0:c.instructions+=3;goto B4f74e0;
case 0x4f74e1:c.instructions+=2;goto B4f74e1;
case 0x4f74e2:c.instructions+=1;goto B4f74e2;
case 0x4f74e7:goto L4f74e7;
case 0x4f74e9:c.instructions+=3;goto B4f74e9;
case 0x4f74ec:c.instructions+=2;goto B4f74ec;
case 0x4f74ee:c.instructions+=1;goto B4f74ee;
case 0x4f74f0:goto L4f74f0;
case 0x4f74f5:goto L4f74f5;
case 0x4f74f7:c.instructions+=1;goto B4f74f7;
case 0x4f74f9:goto L4f74f9;
case 0x4f74fc:c.instructions+=1;goto B4f74fc;
case 0x4f74fe:goto L4f74fe;
case 0x4f7500:goto L4f7500;
case 0x4f7503:c.instructions+=4;goto B4f7503;
case 0x4f7505:c.instructions+=3;goto B4f7505;
case 0x4f7508:c.instructions+=2;goto B4f7508;
case 0x4f750b:c.instructions+=1;goto B4f750b;
case 0x4f750d:goto L4f750d;
case 0x4f7512:c.instructions+=1;goto B4f7512;
case 0x4f7517:goto L4f7517;
case 0x4f751a:c.instructions+=3;goto B4f751a;
case 0x4f751b:c.instructions+=2;goto B4f751b;
case 0x4f751c:c.instructions+=1;goto B4f751c;
case 0x4f7521:goto L4f7521;
case 0x4f7523:c.instructions+=3;goto B4f7523;
case 0x4f7526:c.instructions+=2;goto B4f7526;
case 0x4f7528:c.instructions+=1;goto B4f7528;
case 0x4f752a:goto L4f752a;
case 0x4f752f:goto L4f752f;
case 0x4f7531:c.instructions+=1;goto B4f7531;
case 0x4f7533:goto L4f7533;
case 0x4f7536:c.instructions+=1;goto B4f7536;
case 0x4f7538:goto L4f7538;
case 0x4f753a:goto L4f753a;
case 0x4f753d:c.instructions+=4;goto B4f753d;
case 0x4f753f:c.instructions+=3;goto B4f753f;
case 0x4f7542:c.instructions+=2;goto B4f7542;
case 0x4f7545:c.instructions+=1;goto B4f7545;
case 0x4f7547:goto L4f7547;
case 0x4f754c:c.instructions+=1;goto B4f754c;
case 0x4f7551:goto L4f7551;
case 0x4f7552:c.instructions+=3;goto B4f7552;
case 0x4f7555:c.instructions+=2;goto B4f7555;
case 0x4f7556:c.instructions+=1;goto B4f7556;
case 0x4f755b:goto L4f755b;
case 0x4f755d:c.instructions+=3;goto B4f755d;
case 0x4f7560:c.instructions+=2;goto B4f7560;
case 0x4f7562:c.instructions+=1;goto B4f7562;
case 0x4f7564:goto L4f7564;
case 0x4f7569:goto L4f7569;
case 0x4f756b:c.instructions+=1;goto B4f756b;
case 0x4f756d:goto L4f756d;
case 0x4f7570:c.instructions+=1;goto B4f7570;
case 0x4f7572:goto L4f7572;
case 0x4f7574:goto L4f7574;
case 0x4f7577:c.instructions+=4;goto B4f7577;
case 0x4f7579:c.instructions+=3;goto B4f7579;
case 0x4f757c:c.instructions+=2;goto B4f757c;
case 0x4f757f:c.instructions+=1;goto B4f757f;
case 0x4f7581:goto L4f7581;
case 0x4f7586:c.instructions+=1;goto B4f7586;
case 0x4f758b:goto L4f758b;
case 0x4f758e:c.instructions+=3;goto B4f758e;
case 0x4f758f:c.instructions+=2;goto B4f758f;
case 0x4f7590:c.instructions+=1;goto B4f7590;
case 0x4f7595:goto L4f7595;
case 0x4f7597:c.instructions+=3;goto B4f7597;
case 0x4f759a:c.instructions+=2;goto B4f759a;
case 0x4f759c:c.instructions+=1;goto B4f759c;
case 0x4f759e:goto L4f759e;
case 0x4f75a3:goto L4f75a3;
case 0x4f75a5:c.instructions+=1;goto B4f75a5;
case 0x4f75a7:goto L4f75a7;
case 0x4f75aa:c.instructions+=1;goto B4f75aa;
case 0x4f75ac:goto L4f75ac;
case 0x4f75ae:goto L4f75ae;
case 0x4f75b1:c.instructions+=4;goto B4f75b1;
case 0x4f75b3:c.instructions+=3;goto B4f75b3;
case 0x4f75b6:c.instructions+=2;goto B4f75b6;
case 0x4f75b9:c.instructions+=1;goto B4f75b9;
case 0x4f75bb:goto L4f75bb;
case 0x4f75be:c.instructions+=3;goto B4f75be;
case 0x4f75c3:c.instructions+=2;goto B4f75c3;
case 0x4f75c4:c.instructions+=1;goto B4f75c4;
case 0x4f75c9:goto L4f75c9;
case 0x4f75cb:c.instructions+=3;goto B4f75cb;
case 0x4f75ce:c.instructions+=2;goto B4f75ce;
case 0x4f75d0:c.instructions+=1;goto B4f75d0;
case 0x4f75d2:goto L4f75d2;
case 0x4f75d7:goto L4f75d7;
case 0x4f75d9:c.instructions+=1;goto B4f75d9;
case 0x4f75db:goto L4f75db;
case 0x4f75de:c.instructions+=1;goto B4f75de;
case 0x4f75e0:goto L4f75e0;
case 0x4f75e2:goto L4f75e2;
case 0x4f75e5:c.instructions+=4;goto B4f75e5;
case 0x4f75e7:c.instructions+=3;goto B4f75e7;
case 0x4f75ea:c.instructions+=2;goto B4f75ea;
case 0x4f75ed:c.instructions+=1;goto B4f75ed;
case 0x4f75ef:goto L4f75ef;
case 0x4f75f4:c.instructions+=2;goto B4f75f4;
case 0x4f75f7:c.instructions+=1;goto B4f75f7;
case 0x4f75fc:goto L4f75fc;
case 0x4f75fd:c.instructions+=3;goto B4f75fd;
case 0x4f7600:c.instructions+=2;goto B4f7600;
case 0x4f7601:c.instructions+=1;goto B4f7601;
case 0x4f7606:goto L4f7606;
case 0x4f7608:c.instructions+=3;goto B4f7608;
case 0x4f760b:c.instructions+=2;goto B4f760b;
case 0x4f760d:c.instructions+=1;goto B4f760d;
case 0x4f760f:goto L4f760f;
case 0x4f7614:goto L4f7614;
case 0x4f7616:c.instructions+=1;goto B4f7616;
case 0x4f7618:goto L4f7618;
case 0x4f761b:c.instructions+=1;goto B4f761b;
case 0x4f761d:goto L4f761d;
case 0x4f761f:goto L4f761f;
case 0x4f7622:c.instructions+=4;goto B4f7622;
case 0x4f7624:c.instructions+=3;goto B4f7624;
case 0x4f7627:c.instructions+=2;goto B4f7627;
case 0x4f762a:c.instructions+=1;goto B4f762a;
case 0x4f762c:goto L4f762c;
case 0x4f7631:c.instructions+=2;goto B4f7631;
case 0x4f7634:c.instructions+=1;goto B4f7634;
case 0x4f7639:goto L4f7639;
case 0x4f763c:c.instructions+=3;goto B4f763c;
case 0x4f763d:c.instructions+=2;goto B4f763d;
case 0x4f763e:c.instructions+=1;goto B4f763e;
case 0x4f7643:goto L4f7643;
case 0x4f7645:c.instructions+=3;goto B4f7645;
case 0x4f7648:c.instructions+=2;goto B4f7648;
case 0x4f764a:c.instructions+=1;goto B4f764a;
case 0x4f764c:goto L4f764c;
case 0x4f7651:goto L4f7651;
case 0x4f7653:c.instructions+=1;goto B4f7653;
case 0x4f7655:goto L4f7655;
case 0x4f7658:c.instructions+=1;goto B4f7658;
case 0x4f765a:goto L4f765a;
case 0x4f765c:goto L4f765c;
case 0x4f765f:c.instructions+=4;goto B4f765f;
case 0x4f7661:c.instructions+=3;goto B4f7661;
case 0x4f7664:c.instructions+=2;goto B4f7664;
case 0x4f7667:c.instructions+=1;goto B4f7667;
case 0x4f7669:goto L4f7669;
case 0x4f766e:c.instructions+=2;goto B4f766e;
case 0x4f7671:c.instructions+=1;goto B4f7671;
case 0x4f7676:goto L4f7676;
case 0x4f7679:c.instructions+=3;goto B4f7679;
case 0x4f767a:c.instructions+=2;goto B4f767a;
case 0x4f767b:c.instructions+=1;goto B4f767b;
case 0x4f7680:goto L4f7680;
case 0x4f7682:c.instructions+=3;goto B4f7682;
case 0x4f7685:c.instructions+=2;goto B4f7685;
case 0x4f7687:c.instructions+=1;goto B4f7687;
case 0x4f7689:goto L4f7689;
case 0x4f768e:goto L4f768e;
case 0x4f7690:c.instructions+=1;goto B4f7690;
case 0x4f7692:goto L4f7692;
case 0x4f7695:c.instructions+=1;goto B4f7695;
case 0x4f7697:goto L4f7697;
case 0x4f7699:goto L4f7699;
case 0x4f769c:c.instructions+=4;goto B4f769c;
case 0x4f769e:c.instructions+=3;goto B4f769e;
case 0x4f76a1:c.instructions+=2;goto B4f76a1;
case 0x4f76a4:c.instructions+=1;goto B4f76a4;
case 0x4f76a6:goto L4f76a6;
case 0x4f76a9:c.instructions+=4;goto B4f76a9;
case 0x4f76ae:c.instructions+=3;goto B4f76ae;
case 0x4f76af:c.instructions+=2;goto B4f76af;
case 0x4f76b2:c.instructions+=1;goto B4f76b2;
case 0x4f76b7:goto L4f76b7;
case 0x4f76b9:c.instructions+=3;goto B4f76b9;
case 0x4f76bc:c.instructions+=2;goto B4f76bc;
case 0x4f76be:c.instructions+=1;goto B4f76be;
case 0x4f76c0:goto L4f76c0;
case 0x4f76c5:goto L4f76c5;
case 0x4f76c7:c.instructions+=1;goto B4f76c7;
case 0x4f76c9:goto L4f76c9;
case 0x4f76cc:c.instructions+=1;goto B4f76cc;
case 0x4f76ce:goto L4f76ce;
case 0x4f76d0:goto L4f76d0;
case 0x4f76d3:c.instructions+=4;goto B4f76d3;
case 0x4f76d5:c.instructions+=3;goto B4f76d5;
case 0x4f76d8:c.instructions+=2;goto B4f76d8;
case 0x4f76db:c.instructions+=1;goto B4f76db;
case 0x4f76dd:goto L4f76dd;
case 0x4f76e0:c.instructions+=1;goto B4f76e0;
case 0x4f76e2:goto L4f76e2;
case 0x4f76e3:c.instructions+=2;goto B4f76e3;
case 0x4f76e8:c.instructions+=1;goto B4f76e8;
case 0x4f76ed:goto L4f76ed;
case 0x4f76f0:c.instructions+=3;goto B4f76f0;
case 0x4f76f1:c.instructions+=2;goto B4f76f1;
case 0x4f76f2:c.instructions+=1;goto B4f76f2;
case 0x4f76f7:goto L4f76f7;
case 0x4f76f9:c.instructions+=3;goto B4f76f9;
case 0x4f76fc:c.instructions+=2;goto B4f76fc;
case 0x4f76fe:c.instructions+=1;goto B4f76fe;
case 0x4f7700:goto L4f7700;
case 0x4f7705:goto L4f7705;
case 0x4f7707:c.instructions+=1;goto B4f7707;
case 0x4f7709:goto L4f7709;
case 0x4f770c:c.instructions+=1;goto B4f770c;
case 0x4f770e:goto L4f770e;
case 0x4f7710:goto L4f7710;
case 0x4f7713:c.instructions+=4;goto B4f7713;
case 0x4f7715:c.instructions+=3;goto B4f7715;
case 0x4f7718:c.instructions+=2;goto B4f7718;
case 0x4f771b:c.instructions+=1;goto B4f771b;
case 0x4f771d:goto L4f771d;
case 0x4f771e:c.instructions+=2;goto B4f771e;
case 0x4f7723:c.instructions+=1;goto B4f7723;
case 0x4f7728:goto L4f7728;
case 0x4f772b:c.instructions+=3;goto B4f772b;
case 0x4f772c:c.instructions+=2;goto B4f772c;
case 0x4f772d:c.instructions+=1;goto B4f772d;
case 0x4f7732:goto L4f7732;
case 0x4f7734:c.instructions+=3;goto B4f7734;
case 0x4f7737:c.instructions+=2;goto B4f7737;
case 0x4f7739:c.instructions+=1;goto B4f7739;
case 0x4f773b:goto L4f773b;
case 0x4f7740:goto L4f7740;
case 0x4f7742:c.instructions+=1;goto B4f7742;
case 0x4f7744:goto L4f7744;
case 0x4f7747:c.instructions+=1;goto B4f7747;
case 0x4f7749:goto L4f7749;
case 0x4f774b:goto L4f774b;
case 0x4f774e:c.instructions+=4;goto B4f774e;
case 0x4f7750:c.instructions+=3;goto B4f7750;
case 0x4f7753:c.instructions+=2;goto B4f7753;
case 0x4f7756:c.instructions+=1;goto B4f7756;
case 0x4f7758:goto L4f7758;
case 0x4f7759:c.instructions+=2;goto B4f7759;
case 0x4f775e:c.instructions+=1;goto B4f775e;
case 0x4f7763:goto L4f7763;
case 0x4f7764:c.instructions+=3;goto B4f7764;
case 0x4f7767:c.instructions+=2;goto B4f7767;
case 0x4f7768:c.instructions+=1;goto B4f7768;
case 0x4f776d:goto L4f776d;
case 0x4f776f:c.instructions+=3;goto B4f776f;
case 0x4f7772:c.instructions+=2;goto B4f7772;
case 0x4f7774:c.instructions+=1;goto B4f7774;
case 0x4f7776:goto L4f7776;
case 0x4f777b:goto L4f777b;
case 0x4f777d:c.instructions+=1;goto B4f777d;
case 0x4f777f:goto L4f777f;
case 0x4f7782:c.instructions+=1;goto B4f7782;
case 0x4f7784:goto L4f7784;
case 0x4f7786:goto L4f7786;
case 0x4f7789:c.instructions+=4;goto B4f7789;
case 0x4f778b:c.instructions+=3;goto B4f778b;
case 0x4f778e:c.instructions+=2;goto B4f778e;
case 0x4f7791:c.instructions+=1;goto B4f7791;
case 0x4f7793:goto L4f7793;
case 0x4f7794:c.instructions+=2;goto B4f7794;
case 0x4f7799:c.instructions+=1;goto B4f7799;
case 0x4f779e:goto L4f779e;
case 0x4f77a1:c.instructions+=3;goto B4f77a1;
case 0x4f77a2:c.instructions+=2;goto B4f77a2;
case 0x4f77a3:c.instructions+=1;goto B4f77a3;
case 0x4f77a8:goto L4f77a8;
case 0x4f77aa:c.instructions+=3;goto B4f77aa;
case 0x4f77ad:c.instructions+=2;goto B4f77ad;
case 0x4f77af:c.instructions+=1;goto B4f77af;
case 0x4f77b1:goto L4f77b1;
case 0x4f77b6:goto L4f77b6;
case 0x4f77b8:c.instructions+=1;goto B4f77b8;
case 0x4f77ba:goto L4f77ba;
case 0x4f77bd:c.instructions+=1;goto B4f77bd;
case 0x4f77bf:goto L4f77bf;
case 0x4f77c1:goto L4f77c1;
case 0x4f77c4:c.instructions+=4;goto B4f77c4;
case 0x4f77c6:c.instructions+=3;goto B4f77c6;
case 0x4f77c9:c.instructions+=2;goto B4f77c9;
case 0x4f77cc:c.instructions+=1;goto B4f77cc;
case 0x4f77ce:goto L4f77ce;
case 0x4f77cf:c.instructions+=2;goto B4f77cf;
case 0x4f77d4:c.instructions+=1;goto B4f77d4;
case 0x4f77d9:goto L4f77d9;
case 0x4f77dc:c.instructions+=3;goto B4f77dc;
case 0x4f77dd:c.instructions+=2;goto B4f77dd;
case 0x4f77de:c.instructions+=1;goto B4f77de;
case 0x4f77e3:goto L4f77e3;
case 0x4f77e5:c.instructions+=3;goto B4f77e5;
case 0x4f77e8:c.instructions+=2;goto B4f77e8;
case 0x4f77ea:c.instructions+=1;goto B4f77ea;
case 0x4f77ec:goto L4f77ec;
case 0x4f77f1:goto L4f77f1;
case 0x4f77f3:c.instructions+=1;goto B4f77f3;
case 0x4f77f5:goto L4f77f5;
case 0x4f77f8:c.instructions+=1;goto B4f77f8;
case 0x4f77fa:goto L4f77fa;
case 0x4f77fc:goto L4f77fc;
case 0x4f77ff:c.instructions+=4;goto B4f77ff;
case 0x4f7801:c.instructions+=3;goto B4f7801;
case 0x4f7804:c.instructions+=2;goto B4f7804;
case 0x4f7807:c.instructions+=1;goto B4f7807;
case 0x4f7809:goto L4f7809;
case 0x4f780a:c.instructions+=2;goto B4f780a;
case 0x4f780f:c.instructions+=1;goto B4f780f;
case 0x4f7814:goto L4f7814;
case 0x4f7815:c.instructions+=3;goto B4f7815;
case 0x4f7818:c.instructions+=2;goto B4f7818;
case 0x4f7819:c.instructions+=1;goto B4f7819;
case 0x4f781e:goto L4f781e;
case 0x4f7820:c.instructions+=3;goto B4f7820;
case 0x4f7823:c.instructions+=2;goto B4f7823;
case 0x4f7825:c.instructions+=1;goto B4f7825;
case 0x4f7827:goto L4f7827;
case 0x4f782c:goto L4f782c;
case 0x4f782e:c.instructions+=1;goto B4f782e;
case 0x4f7830:goto L4f7830;
case 0x4f7833:c.instructions+=1;goto B4f7833;
case 0x4f7835:goto L4f7835;
case 0x4f7837:goto L4f7837;
case 0x4f783a:c.instructions+=4;goto B4f783a;
case 0x4f783c:c.instructions+=3;goto B4f783c;
case 0x4f783f:c.instructions+=2;goto B4f783f;
case 0x4f7842:c.instructions+=1;goto B4f7842;
case 0x4f7844:goto L4f7844;
case 0x4f7845:c.instructions+=2;goto B4f7845;
case 0x4f784a:c.instructions+=1;goto B4f784a;
case 0x4f784f:goto L4f784f;
case 0x4f7852:c.instructions+=3;goto B4f7852;
case 0x4f7853:c.instructions+=2;goto B4f7853;
case 0x4f7854:c.instructions+=1;goto B4f7854;
case 0x4f7859:goto L4f7859;
case 0x4f785b:c.instructions+=3;goto B4f785b;
case 0x4f785e:c.instructions+=2;goto B4f785e;
case 0x4f7860:c.instructions+=1;goto B4f7860;
case 0x4f7862:goto L4f7862;
case 0x4f7867:goto L4f7867;
case 0x4f7869:c.instructions+=1;goto B4f7869;
case 0x4f786b:goto L4f786b;
case 0x4f786e:c.instructions+=1;goto B4f786e;
case 0x4f7870:goto L4f7870;
case 0x4f7872:goto L4f7872;
case 0x4f7875:c.instructions+=4;goto B4f7875;
case 0x4f7877:c.instructions+=3;goto B4f7877;
case 0x4f787a:c.instructions+=2;goto B4f787a;
case 0x4f787d:c.instructions+=1;goto B4f787d;
case 0x4f787f:goto L4f787f;
case 0x4f7880:c.instructions+=2;goto B4f7880;
case 0x4f7885:c.instructions+=1;goto B4f7885;
case 0x4f788a:goto L4f788a;
case 0x4f788d:c.instructions+=3;goto B4f788d;
case 0x4f788e:c.instructions+=2;goto B4f788e;
case 0x4f788f:c.instructions+=1;goto B4f788f;
case 0x4f7894:goto L4f7894;
case 0x4f7896:c.instructions+=3;goto B4f7896;
case 0x4f7899:c.instructions+=2;goto B4f7899;
case 0x4f789b:c.instructions+=1;goto B4f789b;
case 0x4f789d:goto L4f789d;
case 0x4f78a2:goto L4f78a2;
case 0x4f78a4:c.instructions+=1;goto B4f78a4;
case 0x4f78a6:goto L4f78a6;
case 0x4f78a9:c.instructions+=1;goto B4f78a9;
case 0x4f78ab:goto L4f78ab;
case 0x4f78ad:goto L4f78ad;
case 0x4f78b0:c.instructions+=4;goto B4f78b0;
case 0x4f78b2:c.instructions+=3;goto B4f78b2;
case 0x4f78b5:c.instructions+=2;goto B4f78b5;
case 0x4f78b8:c.instructions+=1;goto B4f78b8;
case 0x4f78ba:goto L4f78ba;
case 0x4f78bb:c.instructions+=2;goto B4f78bb;
case 0x4f78c0:c.instructions+=1;goto B4f78c0;
case 0x4f78c5:goto L4f78c5;
case 0x4f78c6:c.instructions+=3;goto B4f78c6;
case 0x4f78c9:c.instructions+=2;goto B4f78c9;
case 0x4f78ca:c.instructions+=1;goto B4f78ca;
case 0x4f78cf:goto L4f78cf;
case 0x4f78d1:c.instructions+=3;goto B4f78d1;
case 0x4f78d4:c.instructions+=2;goto B4f78d4;
case 0x4f78d6:c.instructions+=1;goto B4f78d6;
case 0x4f78d8:goto L4f78d8;
case 0x4f78dd:goto L4f78dd;
case 0x4f78df:c.instructions+=1;goto B4f78df;
case 0x4f78e1:goto L4f78e1;
case 0x4f78e4:c.instructions+=1;goto B4f78e4;
case 0x4f78e6:goto L4f78e6;
case 0x4f78e8:goto L4f78e8;
case 0x4f78eb:c.instructions+=4;goto B4f78eb;
case 0x4f78ed:c.instructions+=3;goto B4f78ed;
case 0x4f78f0:c.instructions+=2;goto B4f78f0;
case 0x4f78f3:c.instructions+=1;goto B4f78f3;
case 0x4f78f5:goto L4f78f5;
case 0x4f78f6:c.instructions+=2;goto B4f78f6;
case 0x4f78fb:c.instructions+=1;goto B4f78fb;
case 0x4f7900:goto L4f7900;
case 0x4f7903:c.instructions+=3;goto B4f7903;
case 0x4f7904:c.instructions+=2;goto B4f7904;
case 0x4f7905:c.instructions+=1;goto B4f7905;
case 0x4f790a:goto L4f790a;
case 0x4f790c:c.instructions+=3;goto B4f790c;
case 0x4f790f:c.instructions+=2;goto B4f790f;
case 0x4f7911:c.instructions+=1;goto B4f7911;
case 0x4f7913:goto L4f7913;
case 0x4f7918:goto L4f7918;
case 0x4f791a:c.instructions+=1;goto B4f791a;
case 0x4f791c:goto L4f791c;
case 0x4f791f:c.instructions+=1;goto B4f791f;
case 0x4f7921:goto L4f7921;
case 0x4f7923:goto L4f7923;
case 0x4f7926:c.instructions+=4;goto B4f7926;
case 0x4f7928:c.instructions+=3;goto B4f7928;
case 0x4f792b:c.instructions+=2;goto B4f792b;
case 0x4f792e:c.instructions+=1;goto B4f792e;
case 0x4f7930:goto L4f7930;
case 0x4f7931:c.instructions+=2;goto B4f7931;
case 0x4f7936:c.instructions+=1;goto B4f7936;
case 0x4f793b:goto L4f793b;
case 0x4f793e:c.instructions+=3;goto B4f793e;
case 0x4f793f:c.instructions+=2;goto B4f793f;
case 0x4f7940:c.instructions+=1;goto B4f7940;
case 0x4f7945:goto L4f7945;
case 0x4f7947:c.instructions+=3;goto B4f7947;
case 0x4f794a:c.instructions+=2;goto B4f794a;
case 0x4f794c:c.instructions+=1;goto B4f794c;
case 0x4f794e:goto L4f794e;
case 0x4f7953:goto L4f7953;
case 0x4f7955:c.instructions+=1;goto B4f7955;
case 0x4f7957:goto L4f7957;
case 0x4f795a:c.instructions+=1;goto B4f795a;
case 0x4f795c:goto L4f795c;
case 0x4f795e:goto L4f795e;
case 0x4f7961:c.instructions+=4;goto B4f7961;
case 0x4f7963:c.instructions+=3;goto B4f7963;
case 0x4f7966:c.instructions+=2;goto B4f7966;
case 0x4f7969:c.instructions+=1;goto B4f7969;
case 0x4f796b:goto L4f796b;
case 0x4f796c:c.instructions+=2;goto B4f796c;
case 0x4f7971:c.instructions+=1;goto B4f7971;
case 0x4f7976:goto L4f7976;
case 0x4f7977:c.instructions+=3;goto B4f7977;
case 0x4f797a:c.instructions+=2;goto B4f797a;
case 0x4f797b:c.instructions+=1;goto B4f797b;
case 0x4f7980:goto L4f7980;
case 0x4f7982:c.instructions+=3;goto B4f7982;
case 0x4f7985:c.instructions+=2;goto B4f7985;
case 0x4f7987:c.instructions+=1;goto B4f7987;
case 0x4f7989:goto L4f7989;
case 0x4f798e:goto L4f798e;
case 0x4f7990:c.instructions+=1;goto B4f7990;
case 0x4f7992:goto L4f7992;
case 0x4f7995:c.instructions+=1;goto B4f7995;
case 0x4f7997:goto L4f7997;
case 0x4f7999:goto L4f7999;
case 0x4f799c:c.instructions+=4;goto B4f799c;
case 0x4f799e:c.instructions+=3;goto B4f799e;
case 0x4f79a1:c.instructions+=2;goto B4f79a1;
case 0x4f79a4:c.instructions+=1;goto B4f79a4;
case 0x4f79a6:goto L4f79a6;
case 0x4f79a7:c.instructions+=2;goto B4f79a7;
case 0x4f79ac:c.instructions+=1;goto B4f79ac;
case 0x4f79b1:goto L4f79b1;
case 0x4f79b4:c.instructions+=3;goto B4f79b4;
case 0x4f79b5:c.instructions+=2;goto B4f79b5;
case 0x4f79b6:c.instructions+=1;goto B4f79b6;
case 0x4f79bb:goto L4f79bb;
case 0x4f79bd:c.instructions+=3;goto B4f79bd;
case 0x4f79c0:c.instructions+=2;goto B4f79c0;
case 0x4f79c2:c.instructions+=1;goto B4f79c2;
case 0x4f79c4:goto L4f79c4;
case 0x4f79c9:goto L4f79c9;
case 0x4f79cb:c.instructions+=1;goto B4f79cb;
case 0x4f79cd:goto L4f79cd;
case 0x4f79d0:c.instructions+=1;goto B4f79d0;
case 0x4f79d2:goto L4f79d2;
case 0x4f79d4:goto L4f79d4;
case 0x4f79d7:c.instructions+=4;goto B4f79d7;
case 0x4f79d9:c.instructions+=3;goto B4f79d9;
case 0x4f79dc:c.instructions+=2;goto B4f79dc;
case 0x4f79df:c.instructions+=1;goto B4f79df;
case 0x4f79e1:goto L4f79e1;
case 0x4f79e2:c.instructions+=2;goto B4f79e2;
case 0x4f79e7:c.instructions+=1;goto B4f79e7;
case 0x4f79ec:goto L4f79ec;
case 0x4f79ef:c.instructions+=3;goto B4f79ef;
case 0x4f79f0:c.instructions+=2;goto B4f79f0;
case 0x4f79f1:c.instructions+=1;goto B4f79f1;
case 0x4f79f6:goto L4f79f6;
case 0x4f79f8:c.instructions+=3;goto B4f79f8;
case 0x4f79fb:c.instructions+=2;goto B4f79fb;
case 0x4f79fd:c.instructions+=1;goto B4f79fd;
case 0x4f79ff:goto L4f79ff;
case 0x4f7a04:goto L4f7a04;
case 0x4f7a06:c.instructions+=1;goto B4f7a06;
case 0x4f7a08:goto L4f7a08;
case 0x4f7a0b:c.instructions+=1;goto B4f7a0b;
case 0x4f7a0d:goto L4f7a0d;
case 0x4f7a0f:goto L4f7a0f;
case 0x4f7a12:c.instructions+=4;goto B4f7a12;
case 0x4f7a14:c.instructions+=3;goto B4f7a14;
case 0x4f7a17:c.instructions+=2;goto B4f7a17;
case 0x4f7a1a:c.instructions+=1;goto B4f7a1a;
case 0x4f7a1c:goto L4f7a1c;
case 0x4f7a1d:c.instructions+=2;goto B4f7a1d;
case 0x4f7a22:c.instructions+=1;goto B4f7a22;
case 0x4f7a27:goto L4f7a27;
case 0x4f7a28:c.instructions+=3;goto B4f7a28;
case 0x4f7a2b:c.instructions+=2;goto B4f7a2b;
case 0x4f7a2c:c.instructions+=1;goto B4f7a2c;
case 0x4f7a31:goto L4f7a31;
case 0x4f7a33:c.instructions+=3;goto B4f7a33;
case 0x4f7a36:c.instructions+=2;goto B4f7a36;
case 0x4f7a38:c.instructions+=1;goto B4f7a38;
case 0x4f7a3a:goto L4f7a3a;
case 0x4f7a3f:goto L4f7a3f;
case 0x4f7a41:c.instructions+=1;goto B4f7a41;
case 0x4f7a43:goto L4f7a43;
case 0x4f7a46:c.instructions+=1;goto B4f7a46;
case 0x4f7a48:goto L4f7a48;
case 0x4f7a4a:goto L4f7a4a;
case 0x4f7a4d:c.instructions+=4;goto B4f7a4d;
case 0x4f7a4f:c.instructions+=3;goto B4f7a4f;
case 0x4f7a52:c.instructions+=2;goto B4f7a52;
case 0x4f7a55:c.instructions+=1;goto B4f7a55;
case 0x4f7a57:goto L4f7a57;
case 0x4f7a58:c.instructions+=2;goto B4f7a58;
case 0x4f7a5d:c.instructions+=1;goto B4f7a5d;
case 0x4f7a62:goto L4f7a62;
case 0x4f7a65:c.instructions+=3;goto B4f7a65;
case 0x4f7a66:c.instructions+=2;goto B4f7a66;
case 0x4f7a67:c.instructions+=1;goto B4f7a67;
case 0x4f7a6c:goto L4f7a6c;
case 0x4f7a6e:c.instructions+=3;goto B4f7a6e;
case 0x4f7a71:c.instructions+=2;goto B4f7a71;
case 0x4f7a73:c.instructions+=1;goto B4f7a73;
case 0x4f7a75:goto L4f7a75;
case 0x4f7a7a:goto L4f7a7a;
case 0x4f7a7c:c.instructions+=1;goto B4f7a7c;
case 0x4f7a7e:goto L4f7a7e;
case 0x4f7a81:c.instructions+=1;goto B4f7a81;
case 0x4f7a83:goto L4f7a83;
case 0x4f7a85:goto L4f7a85;
case 0x4f7a88:c.instructions+=4;goto B4f7a88;
case 0x4f7a8a:c.instructions+=3;goto B4f7a8a;
case 0x4f7a8d:c.instructions+=2;goto B4f7a8d;
case 0x4f7a90:c.instructions+=1;goto B4f7a90;
case 0x4f7a92:goto L4f7a92;
case 0x4f7a93:c.instructions+=2;goto B4f7a93;
case 0x4f7a96:c.instructions+=1;goto B4f7a96;
case 0x4f7a9c:goto L4f7a9c;
case 0x4f7aa0:c.instructions+=2;goto B4f7aa0;
case 0x4f7aa1:c.instructions+=1;goto B4f7aa1;
case 0x4f7aa6:goto L4f7aa6;
case 0x4f7aa9:c.instructions+=4;goto B4f7aa9;
case 0x4f7aaa:c.instructions+=3;goto B4f7aaa;
case 0x4f7aab:c.instructions+=2;goto B4f7aab;
case 0x4f7aad:c.instructions+=1;goto B4f7aad;
case 0x4f7ab2:goto L4f7ab2;
case 0x4f7ab6:c.instructions+=9;goto B4f7ab6;
case 0x4f7ab7:c.instructions+=8;goto B4f7ab7;
case 0x4f7aba:c.instructions+=7;goto B4f7aba;
case 0x4f7abc:c.instructions+=6;goto B4f7abc;
case 0x4f7abd:c.instructions+=5;goto B4f7abd;
case 0x4f7abe:c.instructions+=4;goto B4f7abe;
case 0x4f7abf:c.instructions+=3;goto B4f7abf;
case 0x4f7ac6:c.instructions+=2;goto B4f7ac6;
case 0x4f7ac9:c.instructions+=1;goto B4f7ac9;
case 0x4f7ad0:goto L4f7ad0;
case 0x4f7ad2:c.instructions+=27;goto B4f7ad2;
case 0x4f7ad7:c.instructions+=26;goto B4f7ad7;
case 0x4f7add:c.instructions+=25;goto B4f7add;
case 0x4f7ade:c.instructions+=24;goto B4f7ade;
case 0x4f7ae5:c.instructions+=23;goto B4f7ae5;
case 0x4f7ae6:c.instructions+=22;goto B4f7ae6;
case 0x4f7aea:c.instructions+=21;goto B4f7aea;
case 0x4f7aeb:c.instructions+=20;goto B4f7aeb;
case 0x4f7aec:c.instructions+=19;goto B4f7aec;
case 0x4f7aee:c.instructions+=18;goto B4f7aee;
case 0x4f7af0:c.instructions+=17;goto B4f7af0;
case 0x4f7af1:c.instructions+=16;goto B4f7af1;
case 0x4f7af5:c.instructions+=15;goto B4f7af5;
case 0x4f7af7:c.instructions+=14;goto B4f7af7;
case 0x4f7afa:c.instructions+=13;goto B4f7afa;
case 0x4f7afd:c.instructions+=12;goto B4f7afd;
case 0x4f7b04:c.instructions+=11;goto B4f7b04;
case 0x4f7b07:c.instructions+=10;goto B4f7b07;
case 0x4f7b0a:c.instructions+=9;goto B4f7b0a;
case 0x4f7b0d:c.instructions+=8;goto B4f7b0d;
case 0x4f7b10:c.instructions+=7;goto B4f7b10;
case 0x4f7b14:c.instructions+=6;goto B4f7b14;
case 0x4f7b16:c.instructions+=5;goto B4f7b16;
case 0x4f7b19:c.instructions+=4;goto B4f7b19;
case 0x4f7b1e:c.instructions+=3;goto B4f7b1e;
case 0x4f7b23:c.instructions+=2;goto B4f7b23;
case 0x4f7b26:c.instructions+=1;goto B4f7b26;
case 0x4f7b2b:goto L4f7b2b;
case 0x4f7b2e:c.instructions+=3;goto B4f7b2e;
case 0x4f7b2f:c.instructions+=2;goto B4f7b2f;
case 0x4f7b30:c.instructions+=1;goto B4f7b30;
case 0x4f7b35:goto L4f7b35;
case 0x4f7b37:c.instructions+=3;goto B4f7b37;
case 0x4f7b3a:c.instructions+=2;goto B4f7b3a;
case 0x4f7b3c:c.instructions+=1;goto B4f7b3c;
case 0x4f7b3e:goto L4f7b3e;
case 0x4f7b43:goto L4f7b43;
case 0x4f7b45:c.instructions+=1;goto B4f7b45;
case 0x4f7b47:goto L4f7b47;
case 0x4f7b4a:c.instructions+=1;goto B4f7b4a;
case 0x4f7b4c:goto L4f7b4c;
case 0x4f7b4e:goto L4f7b4e;
case 0x4f7b51:c.instructions+=4;goto B4f7b51;
case 0x4f7b53:c.instructions+=3;goto B4f7b53;
case 0x4f7b56:c.instructions+=2;goto B4f7b56;
case 0x4f7b59:c.instructions+=1;goto B4f7b59;
case 0x4f7b5b:goto L4f7b5b;
case 0x4f7b60:c.instructions+=2;goto B4f7b60;
case 0x4f7b63:c.instructions+=1;goto B4f7b63;
case 0x4f7b68:goto L4f7b68;
case 0x4f7b6b:c.instructions+=3;goto B4f7b6b;
case 0x4f7b6c:c.instructions+=2;goto B4f7b6c;
case 0x4f7b6d:c.instructions+=1;goto B4f7b6d;
case 0x4f7b72:goto L4f7b72;
case 0x4f7b74:c.instructions+=3;goto B4f7b74;
case 0x4f7b77:c.instructions+=2;goto B4f7b77;
case 0x4f7b79:c.instructions+=1;goto B4f7b79;
case 0x4f7b7b:goto L4f7b7b;
case 0x4f7b80:goto L4f7b80;
case 0x4f7b82:c.instructions+=1;goto B4f7b82;
case 0x4f7b84:goto L4f7b84;
case 0x4f7b87:c.instructions+=1;goto B4f7b87;
case 0x4f7b89:goto L4f7b89;
case 0x4f7b8b:goto L4f7b8b;
case 0x4f7b8e:c.instructions+=4;goto B4f7b8e;
case 0x4f7b90:c.instructions+=3;goto B4f7b90;
case 0x4f7b93:c.instructions+=2;goto B4f7b93;
case 0x4f7b96:c.instructions+=1;goto B4f7b96;
case 0x4f7b98:goto L4f7b98;
case 0x4f7b9d:c.instructions+=2;goto B4f7b9d;
case 0x4f7ba0:c.instructions+=1;goto B4f7ba0;
case 0x4f7ba5:goto L4f7ba5;
case 0x4f7ba6:c.instructions+=3;goto B4f7ba6;
case 0x4f7ba9:c.instructions+=2;goto B4f7ba9;
case 0x4f7baa:c.instructions+=1;goto B4f7baa;
case 0x4f7baf:goto L4f7baf;
case 0x4f7bb1:c.instructions+=3;goto B4f7bb1;
case 0x4f7bb4:c.instructions+=2;goto B4f7bb4;
case 0x4f7bb6:c.instructions+=1;goto B4f7bb6;
case 0x4f7bb8:goto L4f7bb8;
case 0x4f7bbd:goto L4f7bbd;
case 0x4f7bbf:c.instructions+=1;goto B4f7bbf;
case 0x4f7bc1:goto L4f7bc1;
case 0x4f7bc4:c.instructions+=1;goto B4f7bc4;
case 0x4f7bc6:goto L4f7bc6;
case 0x4f7bc8:goto L4f7bc8;
case 0x4f7bcb:c.instructions+=4;goto B4f7bcb;
case 0x4f7bcd:c.instructions+=3;goto B4f7bcd;
case 0x4f7bd0:c.instructions+=2;goto B4f7bd0;
case 0x4f7bd3:c.instructions+=1;goto B4f7bd3;
case 0x4f7bd5:goto L4f7bd5;
case 0x4f7bda:c.instructions+=2;goto B4f7bda;
case 0x4f7bdd:c.instructions+=1;goto B4f7bdd;
case 0x4f7be2:goto L4f7be2;
case 0x4f7be5:c.instructions+=3;goto B4f7be5;
case 0x4f7be6:c.instructions+=2;goto B4f7be6;
case 0x4f7be7:c.instructions+=1;goto B4f7be7;
case 0x4f7bec:goto L4f7bec;
case 0x4f7bee:c.instructions+=3;goto B4f7bee;
case 0x4f7bf1:c.instructions+=2;goto B4f7bf1;
case 0x4f7bf3:c.instructions+=1;goto B4f7bf3;
case 0x4f7bf5:goto L4f7bf5;
case 0x4f7bfa:goto L4f7bfa;
case 0x4f7bfc:c.instructions+=1;goto B4f7bfc;
case 0x4f7bfe:goto L4f7bfe;
case 0x4f7c01:c.instructions+=1;goto B4f7c01;
case 0x4f7c03:goto L4f7c03;
case 0x4f7c05:goto L4f7c05;
case 0x4f7c08:c.instructions+=4;goto B4f7c08;
case 0x4f7c0a:c.instructions+=3;goto B4f7c0a;
case 0x4f7c0d:c.instructions+=2;goto B4f7c0d;
case 0x4f7c10:c.instructions+=1;goto B4f7c10;
case 0x4f7c12:goto L4f7c12;
case 0x4f7c17:c.instructions+=2;goto B4f7c17;
case 0x4f7c1a:c.instructions+=1;goto B4f7c1a;
case 0x4f7c1f:goto L4f7c1f;
case 0x4f7c22:c.instructions+=3;goto B4f7c22;
case 0x4f7c23:c.instructions+=2;goto B4f7c23;
case 0x4f7c24:c.instructions+=1;goto B4f7c24;
case 0x4f7c29:goto L4f7c29;
case 0x4f7c2b:c.instructions+=3;goto B4f7c2b;
case 0x4f7c2e:c.instructions+=2;goto B4f7c2e;
case 0x4f7c30:c.instructions+=1;goto B4f7c30;
case 0x4f7c32:goto L4f7c32;
case 0x4f7c37:goto L4f7c37;
case 0x4f7c39:c.instructions+=1;goto B4f7c39;
case 0x4f7c3b:goto L4f7c3b;
case 0x4f7c3e:c.instructions+=1;goto B4f7c3e;
case 0x4f7c40:goto L4f7c40;
case 0x4f7c42:goto L4f7c42;
case 0x4f7c45:c.instructions+=4;goto B4f7c45;
case 0x4f7c47:c.instructions+=3;goto B4f7c47;
case 0x4f7c4a:c.instructions+=2;goto B4f7c4a;
case 0x4f7c4d:c.instructions+=1;goto B4f7c4d;
case 0x4f7c4f:goto L4f7c4f;
case 0x4f7c54:c.instructions+=2;goto B4f7c54;
case 0x4f7c57:c.instructions+=1;goto B4f7c57;
case 0x4f7c5c:goto L4f7c5c;
case 0x4f7c5d:c.instructions+=3;goto B4f7c5d;
case 0x4f7c60:c.instructions+=2;goto B4f7c60;
case 0x4f7c61:c.instructions+=1;goto B4f7c61;
case 0x4f7c66:goto L4f7c66;
case 0x4f7c68:c.instructions+=3;goto B4f7c68;
case 0x4f7c6b:c.instructions+=2;goto B4f7c6b;
case 0x4f7c6d:c.instructions+=1;goto B4f7c6d;
case 0x4f7c6f:goto L4f7c6f;
case 0x4f7c74:goto L4f7c74;
case 0x4f7c76:c.instructions+=1;goto B4f7c76;
case 0x4f7c78:goto L4f7c78;
case 0x4f7c7b:c.instructions+=1;goto B4f7c7b;
case 0x4f7c7d:goto L4f7c7d;
case 0x4f7c7f:goto L4f7c7f;
case 0x4f7c82:c.instructions+=4;goto B4f7c82;
case 0x4f7c84:c.instructions+=3;goto B4f7c84;
case 0x4f7c87:c.instructions+=2;goto B4f7c87;
case 0x4f7c8a:c.instructions+=1;goto B4f7c8a;
case 0x4f7c8c:goto L4f7c8c;
case 0x4f7c91:c.instructions+=2;goto B4f7c91;
case 0x4f7c94:c.instructions+=1;goto B4f7c94;
case 0x4f7c99:goto L4f7c99;
case 0x4f7c9c:c.instructions+=3;goto B4f7c9c;
case 0x4f7c9d:c.instructions+=2;goto B4f7c9d;
case 0x4f7c9e:c.instructions+=1;goto B4f7c9e;
case 0x4f7ca3:goto L4f7ca3;
case 0x4f7ca5:c.instructions+=3;goto B4f7ca5;
case 0x4f7ca8:c.instructions+=2;goto B4f7ca8;
case 0x4f7caa:c.instructions+=1;goto B4f7caa;
case 0x4f7cac:goto L4f7cac;
case 0x4f7cb1:goto L4f7cb1;
case 0x4f7cb3:c.instructions+=1;goto B4f7cb3;
case 0x4f7cb5:goto L4f7cb5;
case 0x4f7cb8:c.instructions+=1;goto B4f7cb8;
case 0x4f7cba:goto L4f7cba;
case 0x4f7cbc:goto L4f7cbc;
case 0x4f7cbf:c.instructions+=4;goto B4f7cbf;
case 0x4f7cc1:c.instructions+=3;goto B4f7cc1;
case 0x4f7cc4:c.instructions+=2;goto B4f7cc4;
case 0x4f7cc7:c.instructions+=1;goto B4f7cc7;
case 0x4f7cc9:goto L4f7cc9;
case 0x4f7cce:c.instructions+=1;goto B4f7cce;
case 0x4f7cd3:goto L4f7cd3;
case 0x4f7cd6:c.instructions+=3;goto B4f7cd6;
case 0x4f7cd7:c.instructions+=2;goto B4f7cd7;
case 0x4f7cd8:c.instructions+=1;goto B4f7cd8;
case 0x4f7cdd:goto L4f7cdd;
case 0x4f7cdf:c.instructions+=3;goto B4f7cdf;
case 0x4f7ce2:c.instructions+=2;goto B4f7ce2;
case 0x4f7ce4:c.instructions+=1;goto B4f7ce4;
case 0x4f7ce6:goto L4f7ce6;
case 0x4f7ceb:goto L4f7ceb;
case 0x4f7ced:c.instructions+=1;goto B4f7ced;
case 0x4f7cef:goto L4f7cef;
case 0x4f7cf2:c.instructions+=1;goto B4f7cf2;
case 0x4f7cf4:goto L4f7cf4;
case 0x4f7cf6:goto L4f7cf6;
case 0x4f7cf9:c.instructions+=4;goto B4f7cf9;
case 0x4f7cfb:c.instructions+=3;goto B4f7cfb;
case 0x4f7cfe:c.instructions+=2;goto B4f7cfe;
case 0x4f7d01:c.instructions+=1;goto B4f7d01;
case 0x4f7d03:goto L4f7d03;
case 0x4f7d08:c.instructions+=1;goto B4f7d08;
case 0x4f7d0d:goto L4f7d0d;
case 0x4f7d0e:c.instructions+=3;goto B4f7d0e;
case 0x4f7d11:c.instructions+=2;goto B4f7d11;
case 0x4f7d12:c.instructions+=1;goto B4f7d12;
case 0x4f7d17:goto L4f7d17;
case 0x4f7d19:c.instructions+=3;goto B4f7d19;
case 0x4f7d1c:c.instructions+=2;goto B4f7d1c;
case 0x4f7d1e:c.instructions+=1;goto B4f7d1e;
case 0x4f7d20:goto L4f7d20;
case 0x4f7d25:goto L4f7d25;
case 0x4f7d27:c.instructions+=1;goto B4f7d27;
case 0x4f7d29:goto L4f7d29;
case 0x4f7d2c:c.instructions+=1;goto B4f7d2c;
case 0x4f7d2e:goto L4f7d2e;
case 0x4f7d30:goto L4f7d30;
case 0x4f7d33:c.instructions+=4;goto B4f7d33;
case 0x4f7d35:c.instructions+=3;goto B4f7d35;
case 0x4f7d38:c.instructions+=2;goto B4f7d38;
case 0x4f7d3b:c.instructions+=1;goto B4f7d3b;
case 0x4f7d3d:goto L4f7d3d;
case 0x4f7d42:c.instructions+=1;goto B4f7d42;
case 0x4f7d47:goto L4f7d47;
case 0x4f7d4a:c.instructions+=3;goto B4f7d4a;
case 0x4f7d4b:c.instructions+=2;goto B4f7d4b;
case 0x4f7d4c:c.instructions+=1;goto B4f7d4c;
case 0x4f7d51:goto L4f7d51;
case 0x4f7d53:c.instructions+=3;goto B4f7d53;
case 0x4f7d56:c.instructions+=2;goto B4f7d56;
case 0x4f7d58:c.instructions+=1;goto B4f7d58;
case 0x4f7d5a:goto L4f7d5a;
case 0x4f7d5f:goto L4f7d5f;
case 0x4f7d61:c.instructions+=1;goto B4f7d61;
case 0x4f7d63:goto L4f7d63;
case 0x4f7d66:c.instructions+=1;goto B4f7d66;
case 0x4f7d68:goto L4f7d68;
case 0x4f7d6a:goto L4f7d6a;
case 0x4f7d6d:c.instructions+=4;goto B4f7d6d;
case 0x4f7d6f:c.instructions+=3;goto B4f7d6f;
case 0x4f7d72:c.instructions+=2;goto B4f7d72;
case 0x4f7d75:c.instructions+=1;goto B4f7d75;
case 0x4f7d77:goto L4f7d77;
case 0x4f7d7c:c.instructions+=1;goto B4f7d7c;
case 0x4f7d81:goto L4f7d81;
case 0x4f7d84:c.instructions+=3;goto B4f7d84;
case 0x4f7d85:c.instructions+=2;goto B4f7d85;
case 0x4f7d86:c.instructions+=1;goto B4f7d86;
case 0x4f7d8b:goto L4f7d8b;
case 0x4f7d8d:c.instructions+=3;goto B4f7d8d;
case 0x4f7d90:c.instructions+=2;goto B4f7d90;
case 0x4f7d92:c.instructions+=1;goto B4f7d92;
case 0x4f7d94:goto L4f7d94;
case 0x4f7d99:goto L4f7d99;
case 0x4f7d9b:c.instructions+=1;goto B4f7d9b;
case 0x4f7d9d:goto L4f7d9d;
case 0x4f7da0:c.instructions+=1;goto B4f7da0;
case 0x4f7da2:goto L4f7da2;
case 0x4f7da4:goto L4f7da4;
case 0x4f7da7:c.instructions+=4;goto B4f7da7;
case 0x4f7da9:c.instructions+=3;goto B4f7da9;
case 0x4f7dac:c.instructions+=2;goto B4f7dac;
case 0x4f7daf:c.instructions+=1;goto B4f7daf;
case 0x4f7db1:goto L4f7db1;
case 0x4f7db6:c.instructions+=1;goto B4f7db6;
case 0x4f7dbb:goto L4f7dbb;
case 0x4f7dbc:c.instructions+=3;goto B4f7dbc;
case 0x4f7dbf:c.instructions+=2;goto B4f7dbf;
case 0x4f7dc0:c.instructions+=1;goto B4f7dc0;
case 0x4f7dc5:goto L4f7dc5;
case 0x4f7dc7:c.instructions+=3;goto B4f7dc7;
case 0x4f7dca:c.instructions+=2;goto B4f7dca;
case 0x4f7dcc:c.instructions+=1;goto B4f7dcc;
case 0x4f7dce:goto L4f7dce;
case 0x4f7dd3:goto L4f7dd3;
case 0x4f7dd5:c.instructions+=1;goto B4f7dd5;
case 0x4f7dd7:goto L4f7dd7;
case 0x4f7dda:c.instructions+=1;goto B4f7dda;
case 0x4f7ddc:goto L4f7ddc;
case 0x4f7dde:goto L4f7dde;
case 0x4f7de1:c.instructions+=4;goto B4f7de1;
case 0x4f7de3:c.instructions+=3;goto B4f7de3;
case 0x4f7de6:c.instructions+=2;goto B4f7de6;
case 0x4f7de9:c.instructions+=1;goto B4f7de9;
case 0x4f7deb:goto L4f7deb;
case 0x4f7df0:c.instructions+=2;goto B4f7df0;
case 0x4f7df3:c.instructions+=1;goto B4f7df3;
case 0x4f7df8:goto L4f7df8;
case 0x4f7dfb:c.instructions+=3;goto B4f7dfb;
case 0x4f7dfc:c.instructions+=2;goto B4f7dfc;
case 0x4f7dfd:c.instructions+=1;goto B4f7dfd;
case 0x4f7e02:goto L4f7e02;
case 0x4f7e04:c.instructions+=3;goto B4f7e04;
case 0x4f7e07:c.instructions+=2;goto B4f7e07;
case 0x4f7e09:c.instructions+=1;goto B4f7e09;
case 0x4f7e0b:goto L4f7e0b;
case 0x4f7e10:goto L4f7e10;
case 0x4f7e12:c.instructions+=1;goto B4f7e12;
case 0x4f7e14:goto L4f7e14;
case 0x4f7e17:c.instructions+=1;goto B4f7e17;
case 0x4f7e19:goto L4f7e19;
case 0x4f7e1b:goto L4f7e1b;
case 0x4f7e1e:c.instructions+=4;goto B4f7e1e;
case 0x4f7e20:c.instructions+=3;goto B4f7e20;
case 0x4f7e23:c.instructions+=2;goto B4f7e23;
case 0x4f7e26:c.instructions+=1;goto B4f7e26;
case 0x4f7e28:goto L4f7e28;
case 0x4f7e2d:c.instructions+=2;goto B4f7e2d;
case 0x4f7e30:c.instructions+=1;goto B4f7e30;
case 0x4f7e35:goto L4f7e35;
case 0x4f7e38:c.instructions+=3;goto B4f7e38;
case 0x4f7e39:c.instructions+=2;goto B4f7e39;
case 0x4f7e3a:c.instructions+=1;goto B4f7e3a;
case 0x4f7e3f:goto L4f7e3f;
case 0x4f7e41:c.instructions+=3;goto B4f7e41;
case 0x4f7e44:c.instructions+=2;goto B4f7e44;
case 0x4f7e46:c.instructions+=1;goto B4f7e46;
case 0x4f7e48:goto L4f7e48;
case 0x4f7e4d:goto L4f7e4d;
case 0x4f7e4f:c.instructions+=1;goto B4f7e4f;
case 0x4f7e51:goto L4f7e51;
case 0x4f7e54:c.instructions+=1;goto B4f7e54;
case 0x4f7e56:goto L4f7e56;
case 0x4f7e58:goto L4f7e58;
case 0x4f7e5b:c.instructions+=4;goto B4f7e5b;
case 0x4f7e5d:c.instructions+=3;goto B4f7e5d;
case 0x4f7e60:c.instructions+=2;goto B4f7e60;
case 0x4f7e63:c.instructions+=1;goto B4f7e63;
case 0x4f7e65:goto L4f7e65;
case 0x4f7e6a:c.instructions+=1;goto B4f7e6a;
case 0x4f7e6f:goto L4f7e6f;
case 0x4f7e70:c.instructions+=3;goto B4f7e70;
case 0x4f7e73:c.instructions+=2;goto B4f7e73;
case 0x4f7e74:c.instructions+=1;goto B4f7e74;
case 0x4f7e79:goto L4f7e79;
case 0x4f7e7b:c.instructions+=3;goto B4f7e7b;
case 0x4f7e7e:c.instructions+=2;goto B4f7e7e;
case 0x4f7e80:c.instructions+=1;goto B4f7e80;
case 0x4f7e82:goto L4f7e82;
case 0x4f7e87:goto L4f7e87;
case 0x4f7e89:c.instructions+=1;goto B4f7e89;
case 0x4f7e8b:goto L4f7e8b;
case 0x4f7e8e:c.instructions+=1;goto B4f7e8e;
case 0x4f7e90:goto L4f7e90;
case 0x4f7e92:goto L4f7e92;
case 0x4f7e95:c.instructions+=4;goto B4f7e95;
case 0x4f7e97:c.instructions+=3;goto B4f7e97;
case 0x4f7e9a:c.instructions+=2;goto B4f7e9a;
case 0x4f7e9d:c.instructions+=1;goto B4f7e9d;
case 0x4f7e9f:goto L4f7e9f;
case 0x4f7ea4:c.instructions+=2;goto B4f7ea4;
case 0x4f7ea7:c.instructions+=1;goto B4f7ea7;
case 0x4f7eac:goto L4f7eac;
case 0x4f7eaf:c.instructions+=3;goto B4f7eaf;
case 0x4f7eb0:c.instructions+=2;goto B4f7eb0;
case 0x4f7eb1:c.instructions+=1;goto B4f7eb1;
case 0x4f7eb6:goto L4f7eb6;
case 0x4f7eb8:c.instructions+=3;goto B4f7eb8;
case 0x4f7ebb:c.instructions+=2;goto B4f7ebb;
case 0x4f7ebd:c.instructions+=1;goto B4f7ebd;
case 0x4f7ebf:goto L4f7ebf;
case 0x4f7ec4:goto L4f7ec4;
case 0x4f7ec6:c.instructions+=1;goto B4f7ec6;
case 0x4f7ec8:goto L4f7ec8;
case 0x4f7ecb:c.instructions+=1;goto B4f7ecb;
case 0x4f7ecd:goto L4f7ecd;
case 0x4f7ecf:goto L4f7ecf;
case 0x4f7ed2:c.instructions+=4;goto B4f7ed2;
case 0x4f7ed4:c.instructions+=3;goto B4f7ed4;
case 0x4f7ed7:c.instructions+=2;goto B4f7ed7;
case 0x4f7eda:c.instructions+=1;goto B4f7eda;
case 0x4f7edc:goto L4f7edc;
case 0x4f7ee1:c.instructions+=2;goto B4f7ee1;
case 0x4f7ee4:c.instructions+=1;goto B4f7ee4;
case 0x4f7ee9:goto L4f7ee9;
case 0x4f7eec:c.instructions+=3;goto B4f7eec;
case 0x4f7eed:c.instructions+=2;goto B4f7eed;
case 0x4f7eee:c.instructions+=1;goto B4f7eee;
case 0x4f7ef3:goto L4f7ef3;
case 0x4f7ef5:c.instructions+=3;goto B4f7ef5;
case 0x4f7ef8:c.instructions+=2;goto B4f7ef8;
case 0x4f7efa:c.instructions+=1;goto B4f7efa;
case 0x4f7efc:goto L4f7efc;
case 0x4f7f01:goto L4f7f01;
case 0x4f7f03:c.instructions+=1;goto B4f7f03;
case 0x4f7f05:goto L4f7f05;
case 0x4f7f08:c.instructions+=1;goto B4f7f08;
case 0x4f7f0a:goto L4f7f0a;
case 0x4f7f0c:goto L4f7f0c;
case 0x4f7f0f:c.instructions+=4;goto B4f7f0f;
case 0x4f7f11:c.instructions+=3;goto B4f7f11;
case 0x4f7f14:c.instructions+=2;goto B4f7f14;
case 0x4f7f17:c.instructions+=1;goto B4f7f17;
case 0x4f7f19:goto L4f7f19;
case 0x4f7f1e:c.instructions+=15;goto B4f7f1e;
case 0x4f7f21:c.instructions+=14;goto B4f7f21;
case 0x4f7f24:c.instructions+=13;goto B4f7f24;
case 0x4f7f27:c.instructions+=12;goto B4f7f27;
case 0x4f7f2a:c.instructions+=11;goto B4f7f2a;
case 0x4f7f2d:c.instructions+=10;goto B4f7f2d;
case 0x4f7f34:c.instructions+=9;goto B4f7f34;
case 0x4f7f3b:c.instructions+=8;goto B4f7f3b;
case 0x4f7f3e:c.instructions+=7;goto B4f7f3e;
case 0x4f7f41:c.instructions+=6;goto B4f7f41;
case 0x4f7f45:c.instructions+=5;goto B4f7f45;
case 0x4f7f48:c.instructions+=4;goto B4f7f48;
case 0x4f7f4e:c.instructions+=3;goto B4f7f4e;
case 0x4f7f4f:c.instructions+=2;goto B4f7f4f;
case 0x4f7f53:c.instructions+=1;goto B4f7f53;
case 0x4f7f55:goto L4f7f55;
case 0x4f7f5b:c.instructions+=1;goto B4f7f5b;
case 0x4f7f61:goto L4f7f61;
case 0x4f7f66:c.instructions+=1;goto B4f7f66;
case 0x4f7f6b:goto L4f7f6b;
case 0x4f7f6c:c.instructions+=3;goto B4f7f6c;
case 0x4f7f6f:c.instructions+=2;goto B4f7f6f;
case 0x4f7f70:c.instructions+=1;goto B4f7f70;
case 0x4f7f75:goto L4f7f75;
case 0x4f7f77:c.instructions+=3;goto B4f7f77;
case 0x4f7f7a:c.instructions+=2;goto B4f7f7a;
case 0x4f7f7c:c.instructions+=1;goto B4f7f7c;
case 0x4f7f7e:goto L4f7f7e;
case 0x4f7f83:goto L4f7f83;
case 0x4f7f85:c.instructions+=1;goto B4f7f85;
case 0x4f7f87:goto L4f7f87;
case 0x4f7f8a:c.instructions+=1;goto B4f7f8a;
case 0x4f7f8c:goto L4f7f8c;
case 0x4f7f8e:goto L4f7f8e;
case 0x4f7f91:c.instructions+=4;goto B4f7f91;
case 0x4f7f93:c.instructions+=3;goto B4f7f93;
case 0x4f7f96:c.instructions+=2;goto B4f7f96;
case 0x4f7f99:c.instructions+=1;goto B4f7f99;
case 0x4f7f9b:goto L4f7f9b;
case 0x4f7fa0:c.instructions+=1;goto B4f7fa0;
case 0x4f7fa5:goto L4f7fa5;
case 0x4f7fa8:c.instructions+=3;goto B4f7fa8;
case 0x4f7fa9:c.instructions+=2;goto B4f7fa9;
case 0x4f7faa:c.instructions+=1;goto B4f7faa;
case 0x4f7faf:goto L4f7faf;
case 0x4f7fb1:c.instructions+=3;goto B4f7fb1;
case 0x4f7fb4:c.instructions+=2;goto B4f7fb4;
case 0x4f7fb6:c.instructions+=1;goto B4f7fb6;
case 0x4f7fb8:goto L4f7fb8;
case 0x4f7fbd:goto L4f7fbd;
case 0x4f7fbf:c.instructions+=1;goto B4f7fbf;
case 0x4f7fc1:goto L4f7fc1;
case 0x4f7fc4:c.instructions+=1;goto B4f7fc4;
case 0x4f7fc6:goto L4f7fc6;
case 0x4f7fc8:goto L4f7fc8;
case 0x4f7fcb:c.instructions+=4;goto B4f7fcb;
case 0x4f7fcd:c.instructions+=3;goto B4f7fcd;
case 0x4f7fd0:c.instructions+=2;goto B4f7fd0;
case 0x4f7fd3:c.instructions+=1;goto B4f7fd3;
case 0x4f7fd5:goto L4f7fd5;
case 0x4f7fda:c.instructions+=1;goto B4f7fda;
case 0x4f7fdf:goto L4f7fdf;
case 0x4f7fe2:c.instructions+=3;goto B4f7fe2;
case 0x4f7fe3:c.instructions+=2;goto B4f7fe3;
case 0x4f7fe4:c.instructions+=1;goto B4f7fe4;
case 0x4f7fe9:goto L4f7fe9;
case 0x4f7feb:c.instructions+=3;goto B4f7feb;
case 0x4f7fee:c.instructions+=2;goto B4f7fee;
case 0x4f7ff0:c.instructions+=1;goto B4f7ff0;
case 0x4f7ff2:goto L4f7ff2;
case 0x4f7ff7:goto L4f7ff7;
case 0x4f7ff9:c.instructions+=1;goto B4f7ff9;
case 0x4f7ffb:goto L4f7ffb;
case 0x4f7ffe:c.instructions+=1;goto B4f7ffe;
default:missing_instruction(c.pc);}
B4f7003:L4f7003:{c.instructions+=3;NFSU2_TR(0x4f7003);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7004:{NFSU2_TR(0x4f7004);
w4(R+4,u32(0x89e7a0ull));
}
B4f7009:{NFSU2_TR(0x4f7009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f700eull));
TAIL_STATIC(0x5ed980u,5ed);
}
B4f700e:L4f700e:{c.instructions+=3;NFSU2_TR(0x4f700e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4f7014:{NFSU2_TR(0x4f7014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7015:{NFSU2_TR(0x4f7015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f701aull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4f701a:L4f701a:{c.instructions+=4;NFSU2_TR(0x4f701a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f701d:{NFSU2_TR(0x4f701d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f701f:{NFSU2_TR(0x4f701f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f7022:{NFSU2_TR(0x4f7022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7027ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B4f7027:L4f7027:{c.instructions+=2;NFSU2_TR(0x4f7027);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f702d:{NFSU2_TR(0x4f702d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7032ull));
TAIL_STATIC(0x457b00u,457);
}
B4f7032:L4f7032:{c.instructions+=5;NFSU2_TR(0x4f7032);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B4f7038:{NFSU2_TR(0x4f7038);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f703a:{NFSU2_TR(0x4f703a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4f703c:{NFSU2_TR(0x4f703c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f703f:{NFSU2_TR(0x4f703f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f7087;}}
}
B4f7041:L4f7041:{c.instructions+=4;NFSU2_TR(0x4f7041);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7044:{NFSU2_TR(0x4f7044);
u8 U[4];
w4(U+0,u32(0x7988f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7049:{NFSU2_TR(0x4f7049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f704a:{NFSU2_TR(0x4f704a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f704full));
TAIL_STATIC(0x51cf70u,51c);
}
B4f704f:L4f704f:{c.instructions+=4;NFSU2_TR(0x4f704f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7051:{NFSU2_TR(0x4f7051);
u8 U[4];
w4(U+0,u32(0x7988f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7056:{NFSU2_TR(0x4f7056);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7057:{NFSU2_TR(0x4f7057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f705cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f705c:L4f705c:{c.instructions+=2;NFSU2_TR(0x4f705c);
u8 U[4];
w4(U+0,u32(0x7988e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7061:{NFSU2_TR(0x4f7061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7066ull));
TAIL_STATIC(0x505450u,505);
}
B4f7066:L4f7066:{c.instructions+=3;NFSU2_TR(0x4f7066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7069:{NFSU2_TR(0x4f7069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f706a:{NFSU2_TR(0x4f706a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f706b:L4f706b:{c.instructions+=1;NFSU2_TR(0x4f706b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7070ull));
TAIL_STATIC(0x537a60u,537);
}
B4f7070:L4f7070:{c.instructions+=4;NFSU2_TR(0x4f7070);
__builtin_memmove((R+28),(R+0),4);
}
B4f7072:{NFSU2_TR(0x4f7072);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4f7075:{NFSU2_TR(0x4f7075);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7077:{NFSU2_TR(0x4f7077);
if(r1(R+518)){{goto L4f70c2;}}
}
B4f7079:L4f7079:{c.instructions+=1;NFSU2_TR(0x4f7079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f707eull));
TAIL_STATIC(0x440ec0u,440);
}
B4f707e:L4f707e:{c.instructions+=2;NFSU2_TR(0x4f707e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7080:{NFSU2_TR(0x4f7080);
if(r1(R+518)){{goto L4f70b3;}}
}
B4f7082:L4f7082:{c.instructions+=2;NFSU2_TR(0x4f7082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7085:{NFSU2_TR(0x4f7085);
{goto L4f70b5;}
}
B4f7087:L4f7087:{c.instructions+=4;NFSU2_TR(0x4f7087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f708a:{NFSU2_TR(0x4f708a);
u8 U[4];
w4(U+0,u32(0x7988d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f708f:{NFSU2_TR(0x4f708f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7090:{NFSU2_TR(0x4f7090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7095ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f7095:L4f7095:{c.instructions+=4;NFSU2_TR(0x4f7095);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7097:{NFSU2_TR(0x4f7097);
u8 U[4];
w4(U+0,u32(0x7988d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f709c:{NFSU2_TR(0x4f709c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f709d:{NFSU2_TR(0x4f709d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f70a2ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f70a2:L4f70a2:{c.instructions+=2;NFSU2_TR(0x4f70a2);
u8 U[4];
w4(U+0,u32(0x7988c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70a7:{NFSU2_TR(0x4f70a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f70acull));
TAIL_STATIC(0x505450u,505);
}
B4f70ac:L4f70ac:{c.instructions+=4;NFSU2_TR(0x4f70ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f70af:{NFSU2_TR(0x4f70af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70b0:{NFSU2_TR(0x4f70b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70b1:{NFSU2_TR(0x4f70b1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f706bu);}goto L4f706b;}
}
B4f70b3:L4f70b3:{c.instructions+=1;NFSU2_TR(0x4f70b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f70b5:L4f70b5:{c.instructions+=5;NFSU2_TR(0x4f70b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f70b8:{NFSU2_TR(0x4f70b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f70ba:{NFSU2_TR(0x4f70ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f70bd:{NFSU2_TR(0x4f70bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f70c0:{NFSU2_TR(0x4f70c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f70c2:L4f70c2:{c.instructions+=5;NFSU2_TR(0x4f70c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f70c5:{NFSU2_TR(0x4f70c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70c6:{NFSU2_TR(0x4f70c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f70ca:{NFSU2_TR(0x4f70ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70cb:{NFSU2_TR(0x4f70cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f70d0ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4f70d0:L4f70d0:{c.instructions+=3;NFSU2_TR(0x4f70d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f70d3:{NFSU2_TR(0x4f70d3);
__builtin_memmove((R+4),(R+0),4);
}
B4f70d5:{NFSU2_TR(0x4f70d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f70daull));
TAIL_STATIC(0x5054d0u,505);
}
B4f70da:L4f70da:{c.instructions+=6;NFSU2_TR(0x4f70da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f70e0:{NFSU2_TR(0x4f70e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f70e3:{NFSU2_TR(0x4f70e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70e4:{NFSU2_TR(0x4f70e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f70e8:{NFSU2_TR(0x4f70e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f70e9:{NFSU2_TR(0x4f70e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f70eeull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4f70ee:L4f70ee:{c.instructions+=3;NFSU2_TR(0x4f70ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f70f1:{NFSU2_TR(0x4f70f1);
__builtin_memmove((R+4),(R+0),4);
}
B4f70f3:{NFSU2_TR(0x4f70f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f70f8ull));
TAIL_STATIC(0x5054d0u,505);
}
B4f70f8:L4f70f8:{c.instructions+=2;NFSU2_TR(0x4f70f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f70fe:{NFSU2_TR(0x4f70fe);
w4(R+0,u32(0x1ull));
}
B4f7103:L4f7103:{c.instructions+=7;NFSU2_TR(0x4f7103);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f7106:{NFSU2_TR(0x4f7106);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7107:{NFSU2_TR(0x4f7107);
u8 U[4];
w4(U+0,u32(0x7988a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f710c:{NFSU2_TR(0x4f710c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f7110:{NFSU2_TR(0x4f7110);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7112:{NFSU2_TR(0x4f7112);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7113:{NFSU2_TR(0x4f7113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7118ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f7118:L4f7118:{c.instructions+=3;NFSU2_TR(0x4f7118);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f711c:{NFSU2_TR(0x4f711c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f711d:{NFSU2_TR(0x4f711d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7122ull));
TAIL_STATIC(0x505450u,505);
}
B4f7122:L4f7122:{c.instructions+=4;NFSU2_TR(0x4f7122);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7123:{NFSU2_TR(0x4f7123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7126:{NFSU2_TR(0x4f7126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7127:{NFSU2_TR(0x4f7127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f712cull));
TAIL_STATIC(0x537a60u,537);
}
B4f712c:L4f712c:{c.instructions+=4;NFSU2_TR(0x4f712c);
__builtin_memmove((R+28),(R+0),4);
}
B4f712e:{NFSU2_TR(0x4f712e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f7131:{NFSU2_TR(0x4f7131);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7133:{NFSU2_TR(0x4f7133);
if(r1(R+518)){{goto L4f7152;}}
}
B4f7135:L4f7135:{c.instructions+=1;NFSU2_TR(0x4f7135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f713aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f713a:L4f713a:{c.instructions+=2;NFSU2_TR(0x4f713a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f713c:{NFSU2_TR(0x4f713c);
if(r1(R+518)){{goto L4f7143;}}
}
B4f713e:L4f713e:{c.instructions+=2;NFSU2_TR(0x4f713e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7141:{NFSU2_TR(0x4f7141);
{goto L4f7145;}
}
B4f7143:L4f7143:{c.instructions+=1;NFSU2_TR(0x4f7143);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7145:L4f7145:{c.instructions+=5;NFSU2_TR(0x4f7145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7148:{NFSU2_TR(0x4f7148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f714a:{NFSU2_TR(0x4f714a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f714d:{NFSU2_TR(0x4f714d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7150:{NFSU2_TR(0x4f7150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7152:L4f7152:{c.instructions+=3;NFSU2_TR(0x4f7152);
__builtin_memmove((R+0),(R+20),4);
}
B4f7154:{NFSU2_TR(0x4f7154);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f7157:{NFSU2_TR(0x4f7157);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f7103u);}goto L4f7103;}}
}
B4f7159:L4f7159:{c.instructions+=9;NFSU2_TR(0x4f7159);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f715d:{NFSU2_TR(0x4f715d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f715e:{NFSU2_TR(0x4f715e);
__builtin_memmove((R+0),(R+24),4);
}
B4f7160:{NFSU2_TR(0x4f7160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f7161:{NFSU2_TR(0x4f7161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f7162:{NFSU2_TR(0x4f7162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f7163:{NFSU2_TR(0x4f7163);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f716a:{NFSU2_TR(0x4f716a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f716d:{NFSU2_TR(0x4f716d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f7170:L4f7170:{c.instructions+=23;NFSU2_TR(0x4f7170);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7172:{NFSU2_TR(0x4f7172);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7177:{NFSU2_TR(0x4f7177);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f717d:{NFSU2_TR(0x4f717d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f717e:{NFSU2_TR(0x4f717e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7185:{NFSU2_TR(0x4f7185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7186:{NFSU2_TR(0x4f7186);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f718a:{NFSU2_TR(0x4f718a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f718b:{NFSU2_TR(0x4f718b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f718c:{NFSU2_TR(0x4f718c);
__builtin_memmove((R+24),(R+4),4);
}
B4f718e:{NFSU2_TR(0x4f718e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f7190:{NFSU2_TR(0x4f7190);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7191:{NFSU2_TR(0x4f7191);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7195:{NFSU2_TR(0x4f7195);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f7197:{NFSU2_TR(0x4f7197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f719a:{NFSU2_TR(0x4f719a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f719d:{NFSU2_TR(0x4f719d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f71a4:{NFSU2_TR(0x4f71a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71a7:{NFSU2_TR(0x4f71a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71aa:{NFSU2_TR(0x4f71aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71ad:{NFSU2_TR(0x4f71ad);
u8 U[4];
w4(U+0,u32(0x798a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f71b2:{NFSU2_TR(0x4f71b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71b6:{NFSU2_TR(0x4f71b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f71bbull));
TAIL_STATIC(0x505450u,505);
}
B4f71bb:L4f71bb:{c.instructions+=4;NFSU2_TR(0x4f71bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f71be:{NFSU2_TR(0x4f71be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f71bf:{NFSU2_TR(0x4f71bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f71c0:{NFSU2_TR(0x4f71c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f71c5ull));
TAIL_STATIC(0x537a10u,537);
}
B4f71c5:L4f71c5:{c.instructions+=4;NFSU2_TR(0x4f71c5);
__builtin_memmove((R+28),(R+0),4);
}
B4f71c7:{NFSU2_TR(0x4f71c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f71ca:{NFSU2_TR(0x4f71ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f71cc:{NFSU2_TR(0x4f71cc);
if(r1(R+518)){{goto L4f71eb;}}
}
B4f71ce:L4f71ce:{c.instructions+=1;NFSU2_TR(0x4f71ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f71d3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f71d3:L4f71d3:{c.instructions+=2;NFSU2_TR(0x4f71d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f71d5:{NFSU2_TR(0x4f71d5);
if(r1(R+518)){{goto L4f71dc;}}
}
B4f71d7:L4f71d7:{c.instructions+=2;NFSU2_TR(0x4f71d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71da:{NFSU2_TR(0x4f71da);
{goto L4f71de;}
}
B4f71dc:L4f71dc:{c.instructions+=1;NFSU2_TR(0x4f71dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f71de:L4f71de:{c.instructions+=5;NFSU2_TR(0x4f71de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f71e1:{NFSU2_TR(0x4f71e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f71e3:{NFSU2_TR(0x4f71e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71e6:{NFSU2_TR(0x4f71e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71e9:{NFSU2_TR(0x4f71e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f71eb:L4f71eb:{c.instructions+=3;NFSU2_TR(0x4f71eb);
u8 U[4];
w4(U+0,u32(0x798a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f71f0:{NFSU2_TR(0x4f71f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f71f3:{NFSU2_TR(0x4f71f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f71f8ull));
TAIL_STATIC(0x505450u,505);
}
B4f71f8:L4f71f8:{c.instructions+=4;NFSU2_TR(0x4f71f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f71fb:{NFSU2_TR(0x4f71fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f71fc:{NFSU2_TR(0x4f71fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f71fd:{NFSU2_TR(0x4f71fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7202ull));
TAIL_STATIC(0x537a60u,537);
}
B4f7202:L4f7202:{c.instructions+=4;NFSU2_TR(0x4f7202);
__builtin_memmove((R+28),(R+0),4);
}
B4f7204:{NFSU2_TR(0x4f7204);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7207:{NFSU2_TR(0x4f7207);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7209:{NFSU2_TR(0x4f7209);
if(r1(R+518)){{goto L4f7228;}}
}
B4f720b:L4f720b:{c.instructions+=1;NFSU2_TR(0x4f720b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7210ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7210:L4f7210:{c.instructions+=2;NFSU2_TR(0x4f7210);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7212:{NFSU2_TR(0x4f7212);
if(r1(R+518)){{goto L4f7219;}}
}
B4f7214:L4f7214:{c.instructions+=2;NFSU2_TR(0x4f7214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7217:{NFSU2_TR(0x4f7217);
{goto L4f721b;}
}
B4f7219:L4f7219:{c.instructions+=1;NFSU2_TR(0x4f7219);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f721b:L4f721b:{c.instructions+=5;NFSU2_TR(0x4f721b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f721e:{NFSU2_TR(0x4f721e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7220:{NFSU2_TR(0x4f7220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7223:{NFSU2_TR(0x4f7223);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7226:{NFSU2_TR(0x4f7226);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7228:L4f7228:{c.instructions+=3;NFSU2_TR(0x4f7228);
u8 U[4];
w4(U+0,u32(0x798a34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f722d:{NFSU2_TR(0x4f722d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7230:{NFSU2_TR(0x4f7230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7235ull));
TAIL_STATIC(0x505450u,505);
}
B4f7235:L4f7235:{c.instructions+=4;NFSU2_TR(0x4f7235);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7236:{NFSU2_TR(0x4f7236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7239:{NFSU2_TR(0x4f7239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f723a:{NFSU2_TR(0x4f723a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f723full));
TAIL_STATIC(0x5379c0u,537);
}
B4f723f:L4f723f:{c.instructions+=4;NFSU2_TR(0x4f723f);
__builtin_memmove((R+28),(R+0),4);
}
B4f7241:{NFSU2_TR(0x4f7241);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7244:{NFSU2_TR(0x4f7244);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7246:{NFSU2_TR(0x4f7246);
if(r1(R+518)){{goto L4f7265;}}
}
B4f7248:L4f7248:{c.instructions+=1;NFSU2_TR(0x4f7248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f724dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f724d:L4f724d:{c.instructions+=2;NFSU2_TR(0x4f724d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f724f:{NFSU2_TR(0x4f724f);
if(r1(R+518)){{goto L4f7256;}}
}
B4f7251:L4f7251:{c.instructions+=2;NFSU2_TR(0x4f7251);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7254:{NFSU2_TR(0x4f7254);
{goto L4f7258;}
}
B4f7256:L4f7256:{c.instructions+=1;NFSU2_TR(0x4f7256);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7258:L4f7258:{c.instructions+=5;NFSU2_TR(0x4f7258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f725b:{NFSU2_TR(0x4f725b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f725d:{NFSU2_TR(0x4f725d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7260:{NFSU2_TR(0x4f7260);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7263:{NFSU2_TR(0x4f7263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7265:L4f7265:{c.instructions+=2;NFSU2_TR(0x4f7265);
u8 U[4];
w4(U+0,u32(0x798a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f726a:{NFSU2_TR(0x4f726a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f726full));
TAIL_STATIC(0x505450u,505);
}
B4f726f:L4f726f:{c.instructions+=4;NFSU2_TR(0x4f726f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7272:{NFSU2_TR(0x4f7272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7273:{NFSU2_TR(0x4f7273);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7274:{NFSU2_TR(0x4f7274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7279ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7279:L4f7279:{c.instructions+=4;NFSU2_TR(0x4f7279);
__builtin_memmove((R+28),(R+0),4);
}
B4f727b:{NFSU2_TR(0x4f727b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f727e:{NFSU2_TR(0x4f727e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7280:{NFSU2_TR(0x4f7280);
if(r1(R+518)){{goto L4f729f;}}
}
B4f7282:L4f7282:{c.instructions+=1;NFSU2_TR(0x4f7282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7287ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7287:L4f7287:{c.instructions+=2;NFSU2_TR(0x4f7287);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7289:{NFSU2_TR(0x4f7289);
if(r1(R+518)){{goto L4f7290;}}
}
B4f728b:L4f728b:{c.instructions+=2;NFSU2_TR(0x4f728b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f728e:{NFSU2_TR(0x4f728e);
{goto L4f7292;}
}
B4f7290:L4f7290:{c.instructions+=1;NFSU2_TR(0x4f7290);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7292:L4f7292:{c.instructions+=5;NFSU2_TR(0x4f7292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7295:{NFSU2_TR(0x4f7295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7297:{NFSU2_TR(0x4f7297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f729a:{NFSU2_TR(0x4f729a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f729d:{NFSU2_TR(0x4f729d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f729f:L4f729f:{c.instructions+=2;NFSU2_TR(0x4f729f);
u8 U[4];
w4(U+0,u32(0x798a14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f72a4:{NFSU2_TR(0x4f72a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f72a9ull));
TAIL_STATIC(0x505450u,505);
}
B4f72a9:L4f72a9:{c.instructions+=4;NFSU2_TR(0x4f72a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f72ac:{NFSU2_TR(0x4f72ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f72ad:{NFSU2_TR(0x4f72ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f72ae:{NFSU2_TR(0x4f72ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f72b3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f72b3:L4f72b3:{c.instructions+=4;NFSU2_TR(0x4f72b3);
__builtin_memmove((R+28),(R+0),4);
}
B4f72b5:{NFSU2_TR(0x4f72b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f72b8:{NFSU2_TR(0x4f72b8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f72ba:{NFSU2_TR(0x4f72ba);
if(r1(R+518)){{goto L4f72d9;}}
}
B4f72bc:L4f72bc:{c.instructions+=1;NFSU2_TR(0x4f72bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f72c1ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f72c1:L4f72c1:{c.instructions+=2;NFSU2_TR(0x4f72c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f72c3:{NFSU2_TR(0x4f72c3);
if(r1(R+518)){{goto L4f72ca;}}
}
B4f72c5:L4f72c5:{c.instructions+=2;NFSU2_TR(0x4f72c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f72c8:{NFSU2_TR(0x4f72c8);
{goto L4f72cc;}
}
B4f72ca:L4f72ca:{c.instructions+=1;NFSU2_TR(0x4f72ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f72cc:L4f72cc:{c.instructions+=5;NFSU2_TR(0x4f72cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f72cf:{NFSU2_TR(0x4f72cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f72d1:{NFSU2_TR(0x4f72d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f72d4:{NFSU2_TR(0x4f72d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f72d7:{NFSU2_TR(0x4f72d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f72d9:L4f72d9:{c.instructions+=2;NFSU2_TR(0x4f72d9);
u8 U[4];
w4(U+0,u32(0x798a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f72de:{NFSU2_TR(0x4f72de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f72e3ull));
TAIL_STATIC(0x505450u,505);
}
B4f72e3:L4f72e3:{c.instructions+=4;NFSU2_TR(0x4f72e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f72e4:{NFSU2_TR(0x4f72e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f72e7:{NFSU2_TR(0x4f72e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f72e8:{NFSU2_TR(0x4f72e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f72edull));
TAIL_STATIC(0x5379c0u,537);
}
B4f72ed:L4f72ed:{c.instructions+=4;NFSU2_TR(0x4f72ed);
__builtin_memmove((R+28),(R+0),4);
}
B4f72ef:{NFSU2_TR(0x4f72ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f72f2:{NFSU2_TR(0x4f72f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f72f4:{NFSU2_TR(0x4f72f4);
if(r1(R+518)){{goto L4f7313;}}
}
B4f72f6:L4f72f6:{c.instructions+=1;NFSU2_TR(0x4f72f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f72fbull));
TAIL_STATIC(0x440ec0u,440);
}
B4f72fb:L4f72fb:{c.instructions+=2;NFSU2_TR(0x4f72fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f72fd:{NFSU2_TR(0x4f72fd);
if(r1(R+518)){{goto L4f7304;}}
}
B4f72ff:L4f72ff:{c.instructions+=2;NFSU2_TR(0x4f72ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7302:{NFSU2_TR(0x4f7302);
{goto L4f7306;}
}
B4f7304:L4f7304:{c.instructions+=1;NFSU2_TR(0x4f7304);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7306:L4f7306:{c.instructions+=5;NFSU2_TR(0x4f7306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7309:{NFSU2_TR(0x4f7309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f730b:{NFSU2_TR(0x4f730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f730e:{NFSU2_TR(0x4f730e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7311:{NFSU2_TR(0x4f7311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7313:L4f7313:{c.instructions+=5;NFSU2_TR(0x4f7313);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7314:{NFSU2_TR(0x4f7314);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7315:{NFSU2_TR(0x4f7315);
__builtin_memmove((R+4),(R+24),4);
}
B4f7317:{NFSU2_TR(0x4f7317);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f731a:{NFSU2_TR(0x4f731a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f731full));
TAIL_STATIC(0x4c6690u,4c6);
}
B4f731f:L4f731f:{c.instructions+=9;NFSU2_TR(0x4f731f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7323:{NFSU2_TR(0x4f7323);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f7326:{NFSU2_TR(0x4f7326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f7327:{NFSU2_TR(0x4f7327);
__builtin_memmove((R+0),(R+24),4);
}
B4f7329:{NFSU2_TR(0x4f7329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f732a:{NFSU2_TR(0x4f732a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f732b:{NFSU2_TR(0x4f732b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7332:{NFSU2_TR(0x4f7332);
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
B4f7335:{NFSU2_TR(0x4f7335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f7340:L4f7340:{c.instructions+=24;NFSU2_TR(0x4f7340);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7342:{NFSU2_TR(0x4f7342);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7347:{NFSU2_TR(0x4f7347);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f734d:{NFSU2_TR(0x4f734d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f734e:{NFSU2_TR(0x4f734e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7355:{NFSU2_TR(0x4f7355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7356:{NFSU2_TR(0x4f7356);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f735a:{NFSU2_TR(0x4f735a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f735b:{NFSU2_TR(0x4f735b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f735c:{NFSU2_TR(0x4f735c);
__builtin_memmove((R+24),(R+4),4);
}
B4f735e:{NFSU2_TR(0x4f735e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f7360:{NFSU2_TR(0x4f7360);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7361:{NFSU2_TR(0x4f7361);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7365:{NFSU2_TR(0x4f7365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f7367:{NFSU2_TR(0x4f7367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f736a:{NFSU2_TR(0x4f736a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f736d:{NFSU2_TR(0x4f736d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7370:{NFSU2_TR(0x4f7370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x20000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f7377:{NFSU2_TR(0x4f7377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f737a:{NFSU2_TR(0x4f737a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f737d:{NFSU2_TR(0x4f737d);
u8 U[4];
w4(U+0,u32(0x2da220aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7382:{NFSU2_TR(0x4f7382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7383:{NFSU2_TR(0x4f7383);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7387:{NFSU2_TR(0x4f7387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f738cull));
TAIL_STATIC(0x537a10u,537);
}
B4f738c:L4f738c:{c.instructions+=4;NFSU2_TR(0x4f738c);
__builtin_memmove((R+28),(R+0),4);
}
B4f738e:{NFSU2_TR(0x4f738e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f7391:{NFSU2_TR(0x4f7391);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7393:{NFSU2_TR(0x4f7393);
if(r1(R+518)){{goto L4f73b2;}}
}
B4f7395:L4f7395:{c.instructions+=1;NFSU2_TR(0x4f7395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f739aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f739a:L4f739a:{c.instructions+=2;NFSU2_TR(0x4f739a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f739c:{NFSU2_TR(0x4f739c);
if(r1(R+518)){{goto L4f73a3;}}
}
B4f739e:L4f739e:{c.instructions+=2;NFSU2_TR(0x4f739e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f73a1:{NFSU2_TR(0x4f73a1);
{goto L4f73a5;}
}
B4f73a3:L4f73a3:{c.instructions+=1;NFSU2_TR(0x4f73a3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f73a5:L4f73a5:{c.instructions+=5;NFSU2_TR(0x4f73a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f73a8:{NFSU2_TR(0x4f73a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f73aa:{NFSU2_TR(0x4f73aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f73ad:{NFSU2_TR(0x4f73ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f73b0:{NFSU2_TR(0x4f73b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f73b2:L4f73b2:{c.instructions+=5;NFSU2_TR(0x4f73b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73b3:{NFSU2_TR(0x4f73b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73b4:{NFSU2_TR(0x4f73b4);
__builtin_memmove((R+4),(R+24),4);
}
B4f73b6:{NFSU2_TR(0x4f73b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f73b9:{NFSU2_TR(0x4f73b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f73beull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4f73be:L4f73be:{c.instructions+=8;NFSU2_TR(0x4f73be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f73c2:{NFSU2_TR(0x4f73c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f73c3:{NFSU2_TR(0x4f73c3);
__builtin_memmove((R+0),(R+24),4);
}
B4f73c5:{NFSU2_TR(0x4f73c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f73c6:{NFSU2_TR(0x4f73c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f73c7:{NFSU2_TR(0x4f73c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f73ce:{NFSU2_TR(0x4f73ce);
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
B4f73d1:{NFSU2_TR(0x4f73d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f73e0:L4f73e0:{c.instructions+=25;NFSU2_TR(0x4f73e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73e2:{NFSU2_TR(0x4f73e2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73e7:{NFSU2_TR(0x4f73e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f73ed:{NFSU2_TR(0x4f73ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73ee:{NFSU2_TR(0x4f73ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f73f5:{NFSU2_TR(0x4f73f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73f6:{NFSU2_TR(0x4f73f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f73fa:{NFSU2_TR(0x4f73fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73fb:{NFSU2_TR(0x4f73fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73fc:{NFSU2_TR(0x4f73fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f73fd:{NFSU2_TR(0x4f73fd);
__builtin_memmove((R+24),(R+4),4);
}
B4f73ff:{NFSU2_TR(0x4f73ff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f7401:{NFSU2_TR(0x4f7401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7402:{NFSU2_TR(0x4f7402);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7406:{NFSU2_TR(0x4f7406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f7408:{NFSU2_TR(0x4f7408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f740b:{NFSU2_TR(0x4f740b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f740e:{NFSU2_TR(0x4f740e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f7415:{NFSU2_TR(0x4f7415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7418:{NFSU2_TR(0x4f7418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f741b:{NFSU2_TR(0x4f741b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f741e:{NFSU2_TR(0x4f741e);
u8 U[4];
w4(U+0,u32(0x798b18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7423:{NFSU2_TR(0x4f7423);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7427:{NFSU2_TR(0x4f7427);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f742a:{NFSU2_TR(0x4f742a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f742full));
TAIL_STATIC(0x505450u,505);
}
B4f742f:L4f742f:{c.instructions+=4;NFSU2_TR(0x4f742f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7432:{NFSU2_TR(0x4f7432);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7433:{NFSU2_TR(0x4f7433);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7434:{NFSU2_TR(0x4f7434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7439ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7439:L4f7439:{c.instructions+=4;NFSU2_TR(0x4f7439);
__builtin_memmove((R+28),(R+0),4);
}
B4f743b:{NFSU2_TR(0x4f743b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f743e:{NFSU2_TR(0x4f743e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7440:{NFSU2_TR(0x4f7440);
if(r1(R+518)){{goto L4f745f;}}
}
B4f7442:L4f7442:{c.instructions+=1;NFSU2_TR(0x4f7442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7447ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7447:L4f7447:{c.instructions+=2;NFSU2_TR(0x4f7447);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7449:{NFSU2_TR(0x4f7449);
if(r1(R+518)){{goto L4f7450;}}
}
B4f744b:L4f744b:{c.instructions+=2;NFSU2_TR(0x4f744b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f744e:{NFSU2_TR(0x4f744e);
{goto L4f7452;}
}
B4f7450:L4f7450:{c.instructions+=1;NFSU2_TR(0x4f7450);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7452:L4f7452:{c.instructions+=5;NFSU2_TR(0x4f7452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7455:{NFSU2_TR(0x4f7455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7457:{NFSU2_TR(0x4f7457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f745a:{NFSU2_TR(0x4f745a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f745d:{NFSU2_TR(0x4f745d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f745f:L4f745f:{c.instructions+=2;NFSU2_TR(0x4f745f);
u8 U[4];
w4(U+0,u32(0x798b04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7464:{NFSU2_TR(0x4f7464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7469ull));
TAIL_STATIC(0x505450u,505);
}
B4f7469:L4f7469:{c.instructions+=4;NFSU2_TR(0x4f7469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f746c:{NFSU2_TR(0x4f746c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f746d:{NFSU2_TR(0x4f746d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f746e:{NFSU2_TR(0x4f746e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7473ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7473:L4f7473:{c.instructions+=4;NFSU2_TR(0x4f7473);
__builtin_memmove((R+28),(R+0),4);
}
B4f7475:{NFSU2_TR(0x4f7475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7478:{NFSU2_TR(0x4f7478);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f747a:{NFSU2_TR(0x4f747a);
if(r1(R+518)){{goto L4f7499;}}
}
B4f747c:L4f747c:{c.instructions+=1;NFSU2_TR(0x4f747c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7481ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7481:L4f7481:{c.instructions+=2;NFSU2_TR(0x4f7481);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7483:{NFSU2_TR(0x4f7483);
if(r1(R+518)){{goto L4f748a;}}
}
B4f7485:L4f7485:{c.instructions+=2;NFSU2_TR(0x4f7485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7488:{NFSU2_TR(0x4f7488);
{goto L4f748c;}
}
B4f748a:L4f748a:{c.instructions+=1;NFSU2_TR(0x4f748a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f748c:L4f748c:{c.instructions+=5;NFSU2_TR(0x4f748c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f748f:{NFSU2_TR(0x4f748f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7491:{NFSU2_TR(0x4f7491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7494:{NFSU2_TR(0x4f7494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7497:{NFSU2_TR(0x4f7497);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7499:L4f7499:{c.instructions+=2;NFSU2_TR(0x4f7499);
u8 U[4];
w4(U+0,u32(0x798af4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f749e:{NFSU2_TR(0x4f749e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f74a3ull));
TAIL_STATIC(0x505450u,505);
}
B4f74a3:L4f74a3:{c.instructions+=4;NFSU2_TR(0x4f74a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f74a4:{NFSU2_TR(0x4f74a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f74a7:{NFSU2_TR(0x4f74a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f74a8:{NFSU2_TR(0x4f74a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f74adull));
TAIL_STATIC(0x5379c0u,537);
}
B4f74ad:L4f74ad:{c.instructions+=4;NFSU2_TR(0x4f74ad);
__builtin_memmove((R+28),(R+0),4);
}
B4f74af:{NFSU2_TR(0x4f74af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f74b2:{NFSU2_TR(0x4f74b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f74b4:{NFSU2_TR(0x4f74b4);
if(r1(R+518)){{goto L4f74d3;}}
}
B4f74b6:L4f74b6:{c.instructions+=1;NFSU2_TR(0x4f74b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f74bbull));
TAIL_STATIC(0x440ec0u,440);
}
B4f74bb:L4f74bb:{c.instructions+=2;NFSU2_TR(0x4f74bb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f74bd:{NFSU2_TR(0x4f74bd);
if(r1(R+518)){{goto L4f74c4;}}
}
B4f74bf:L4f74bf:{c.instructions+=2;NFSU2_TR(0x4f74bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f74c2:{NFSU2_TR(0x4f74c2);
{goto L4f74c6;}
}
B4f74c4:L4f74c4:{c.instructions+=1;NFSU2_TR(0x4f74c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f74c6:L4f74c6:{c.instructions+=5;NFSU2_TR(0x4f74c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f74c9:{NFSU2_TR(0x4f74c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f74cb:{NFSU2_TR(0x4f74cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f74ce:{NFSU2_TR(0x4f74ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f74d1:{NFSU2_TR(0x4f74d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f74d3:L4f74d3:{c.instructions+=2;NFSU2_TR(0x4f74d3);
u8 U[4];
w4(U+0,u32(0x798ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f74d8:{NFSU2_TR(0x4f74d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f74ddull));
TAIL_STATIC(0x505450u,505);
}
B4f74dd:L4f74dd:{c.instructions+=4;NFSU2_TR(0x4f74dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f74e0:{NFSU2_TR(0x4f74e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f74e1:{NFSU2_TR(0x4f74e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f74e2:{NFSU2_TR(0x4f74e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f74e7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f74e7:L4f74e7:{c.instructions+=4;NFSU2_TR(0x4f74e7);
__builtin_memmove((R+28),(R+0),4);
}
B4f74e9:{NFSU2_TR(0x4f74e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f74ec:{NFSU2_TR(0x4f74ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f74ee:{NFSU2_TR(0x4f74ee);
if(r1(R+518)){{goto L4f750d;}}
}
B4f74f0:L4f74f0:{c.instructions+=1;NFSU2_TR(0x4f74f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f74f5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f74f5:L4f74f5:{c.instructions+=2;NFSU2_TR(0x4f74f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f74f7:{NFSU2_TR(0x4f74f7);
if(r1(R+518)){{goto L4f74fe;}}
}
B4f74f9:L4f74f9:{c.instructions+=2;NFSU2_TR(0x4f74f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f74fc:{NFSU2_TR(0x4f74fc);
{goto L4f7500;}
}
B4f74fe:L4f74fe:{c.instructions+=1;NFSU2_TR(0x4f74fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7500:L4f7500:{c.instructions+=5;NFSU2_TR(0x4f7500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7503:{NFSU2_TR(0x4f7503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7505:{NFSU2_TR(0x4f7505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7508:{NFSU2_TR(0x4f7508);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f750b:{NFSU2_TR(0x4f750b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f750d:L4f750d:{c.instructions+=2;NFSU2_TR(0x4f750d);
u8 U[4];
w4(U+0,u32(0x798ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7512:{NFSU2_TR(0x4f7512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7517ull));
TAIL_STATIC(0x505450u,505);
}
B4f7517:L4f7517:{c.instructions+=4;NFSU2_TR(0x4f7517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f751a:{NFSU2_TR(0x4f751a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f751b:{NFSU2_TR(0x4f751b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f751c:{NFSU2_TR(0x4f751c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7521ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7521:L4f7521:{c.instructions+=4;NFSU2_TR(0x4f7521);
__builtin_memmove((R+28),(R+0),4);
}
B4f7523:{NFSU2_TR(0x4f7523);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7526:{NFSU2_TR(0x4f7526);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7528:{NFSU2_TR(0x4f7528);
if(r1(R+518)){{goto L4f7547;}}
}
B4f752a:L4f752a:{c.instructions+=1;NFSU2_TR(0x4f752a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f752full));
TAIL_STATIC(0x440ec0u,440);
}
B4f752f:L4f752f:{c.instructions+=2;NFSU2_TR(0x4f752f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7531:{NFSU2_TR(0x4f7531);
if(r1(R+518)){{goto L4f7538;}}
}
B4f7533:L4f7533:{c.instructions+=2;NFSU2_TR(0x4f7533);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7536:{NFSU2_TR(0x4f7536);
{goto L4f753a;}
}
B4f7538:L4f7538:{c.instructions+=1;NFSU2_TR(0x4f7538);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f753a:L4f753a:{c.instructions+=5;NFSU2_TR(0x4f753a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f753d:{NFSU2_TR(0x4f753d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f753f:{NFSU2_TR(0x4f753f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7542:{NFSU2_TR(0x4f7542);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7545:{NFSU2_TR(0x4f7545);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7547:L4f7547:{c.instructions+=2;NFSU2_TR(0x4f7547);
u8 U[4];
w4(U+0,u32(0x798ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f754c:{NFSU2_TR(0x4f754c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7551ull));
TAIL_STATIC(0x505450u,505);
}
B4f7551:L4f7551:{c.instructions+=4;NFSU2_TR(0x4f7551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7552:{NFSU2_TR(0x4f7552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7555:{NFSU2_TR(0x4f7555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7556:{NFSU2_TR(0x4f7556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f755bull));
TAIL_STATIC(0x5379c0u,537);
}
B4f755b:L4f755b:{c.instructions+=4;NFSU2_TR(0x4f755b);
__builtin_memmove((R+28),(R+0),4);
}
B4f755d:{NFSU2_TR(0x4f755d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7560:{NFSU2_TR(0x4f7560);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7562:{NFSU2_TR(0x4f7562);
if(r1(R+518)){{goto L4f7581;}}
}
B4f7564:L4f7564:{c.instructions+=1;NFSU2_TR(0x4f7564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7569ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7569:L4f7569:{c.instructions+=2;NFSU2_TR(0x4f7569);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f756b:{NFSU2_TR(0x4f756b);
if(r1(R+518)){{goto L4f7572;}}
}
B4f756d:L4f756d:{c.instructions+=2;NFSU2_TR(0x4f756d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7570:{NFSU2_TR(0x4f7570);
{goto L4f7574;}
}
B4f7572:L4f7572:{c.instructions+=1;NFSU2_TR(0x4f7572);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7574:L4f7574:{c.instructions+=5;NFSU2_TR(0x4f7574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7577:{NFSU2_TR(0x4f7577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7579:{NFSU2_TR(0x4f7579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f757c:{NFSU2_TR(0x4f757c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f757f:{NFSU2_TR(0x4f757f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7581:L4f7581:{c.instructions+=2;NFSU2_TR(0x4f7581);
u8 U[4];
w4(U+0,u32(0x798a98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7586:{NFSU2_TR(0x4f7586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f758bull));
TAIL_STATIC(0x505450u,505);
}
B4f758b:L4f758b:{c.instructions+=4;NFSU2_TR(0x4f758b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f758e:{NFSU2_TR(0x4f758e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f758f:{NFSU2_TR(0x4f758f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7590:{NFSU2_TR(0x4f7590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7595ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7595:L4f7595:{c.instructions+=4;NFSU2_TR(0x4f7595);
__builtin_memmove((R+28),(R+0),4);
}
B4f7597:{NFSU2_TR(0x4f7597);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f759a:{NFSU2_TR(0x4f759a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f759c:{NFSU2_TR(0x4f759c);
if(r1(R+518)){{goto L4f75bb;}}
}
B4f759e:L4f759e:{c.instructions+=1;NFSU2_TR(0x4f759e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f75a3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f75a3:L4f75a3:{c.instructions+=2;NFSU2_TR(0x4f75a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f75a5:{NFSU2_TR(0x4f75a5);
if(r1(R+518)){{goto L4f75ac;}}
}
B4f75a7:L4f75a7:{c.instructions+=2;NFSU2_TR(0x4f75a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75aa:{NFSU2_TR(0x4f75aa);
{goto L4f75ae;}
}
B4f75ac:L4f75ac:{c.instructions+=1;NFSU2_TR(0x4f75ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f75ae:L4f75ae:{c.instructions+=5;NFSU2_TR(0x4f75ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f75b1:{NFSU2_TR(0x4f75b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f75b3:{NFSU2_TR(0x4f75b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75b6:{NFSU2_TR(0x4f75b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75b9:{NFSU2_TR(0x4f75b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f75bb:L4f75bb:{c.instructions+=4;NFSU2_TR(0x4f75bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f75be:{NFSU2_TR(0x4f75be);
u8 U[4];
w4(U+0,u32(0xd80c97e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f75c3:{NFSU2_TR(0x4f75c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f75c4:{NFSU2_TR(0x4f75c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f75c9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f75c9:L4f75c9:{c.instructions+=4;NFSU2_TR(0x4f75c9);
__builtin_memmove((R+28),(R+0),4);
}
B4f75cb:{NFSU2_TR(0x4f75cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f75ce:{NFSU2_TR(0x4f75ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f75d0:{NFSU2_TR(0x4f75d0);
if(r1(R+518)){{goto L4f75ef;}}
}
B4f75d2:L4f75d2:{c.instructions+=1;NFSU2_TR(0x4f75d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f75d7ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f75d7:L4f75d7:{c.instructions+=2;NFSU2_TR(0x4f75d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f75d9:{NFSU2_TR(0x4f75d9);
if(r1(R+518)){{goto L4f75e0;}}
}
B4f75db:L4f75db:{c.instructions+=2;NFSU2_TR(0x4f75db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75de:{NFSU2_TR(0x4f75de);
{goto L4f75e2;}
}
B4f75e0:L4f75e0:{c.instructions+=1;NFSU2_TR(0x4f75e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f75e2:L4f75e2:{c.instructions+=5;NFSU2_TR(0x4f75e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f75e5:{NFSU2_TR(0x4f75e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f75e7:{NFSU2_TR(0x4f75e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75ea:{NFSU2_TR(0x4f75ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75ed:{NFSU2_TR(0x4f75ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f75ef:L4f75ef:{c.instructions+=3;NFSU2_TR(0x4f75ef);
u8 U[4];
w4(U+0,u32(0x798a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f75f4:{NFSU2_TR(0x4f75f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f75f7:{NFSU2_TR(0x4f75f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f75fcull));
TAIL_STATIC(0x505450u,505);
}
B4f75fc:L4f75fc:{c.instructions+=4;NFSU2_TR(0x4f75fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f75fd:{NFSU2_TR(0x4f75fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7600:{NFSU2_TR(0x4f7600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7601:{NFSU2_TR(0x4f7601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7606ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7606:L4f7606:{c.instructions+=4;NFSU2_TR(0x4f7606);
__builtin_memmove((R+28),(R+0),4);
}
B4f7608:{NFSU2_TR(0x4f7608);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f760b:{NFSU2_TR(0x4f760b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f760d:{NFSU2_TR(0x4f760d);
if(r1(R+518)){{goto L4f762c;}}
}
B4f760f:L4f760f:{c.instructions+=1;NFSU2_TR(0x4f760f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7614ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7614:L4f7614:{c.instructions+=2;NFSU2_TR(0x4f7614);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7616:{NFSU2_TR(0x4f7616);
if(r1(R+518)){{goto L4f761d;}}
}
B4f7618:L4f7618:{c.instructions+=2;NFSU2_TR(0x4f7618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f761b:{NFSU2_TR(0x4f761b);
{goto L4f761f;}
}
B4f761d:L4f761d:{c.instructions+=1;NFSU2_TR(0x4f761d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f761f:L4f761f:{c.instructions+=5;NFSU2_TR(0x4f761f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7622:{NFSU2_TR(0x4f7622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7624:{NFSU2_TR(0x4f7624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7627:{NFSU2_TR(0x4f7627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f762a:{NFSU2_TR(0x4f762a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f762c:L4f762c:{c.instructions+=3;NFSU2_TR(0x4f762c);
u8 U[4];
w4(U+0,u32(0x798a74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7631:{NFSU2_TR(0x4f7631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7634:{NFSU2_TR(0x4f7634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7639ull));
TAIL_STATIC(0x505450u,505);
}
B4f7639:L4f7639:{c.instructions+=4;NFSU2_TR(0x4f7639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f763c:{NFSU2_TR(0x4f763c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f763d:{NFSU2_TR(0x4f763d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f763e:{NFSU2_TR(0x4f763e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7643ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7643:L4f7643:{c.instructions+=4;NFSU2_TR(0x4f7643);
__builtin_memmove((R+28),(R+0),4);
}
B4f7645:{NFSU2_TR(0x4f7645);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7648:{NFSU2_TR(0x4f7648);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f764a:{NFSU2_TR(0x4f764a);
if(r1(R+518)){{goto L4f7669;}}
}
B4f764c:L4f764c:{c.instructions+=1;NFSU2_TR(0x4f764c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7651ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7651:L4f7651:{c.instructions+=2;NFSU2_TR(0x4f7651);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7653:{NFSU2_TR(0x4f7653);
if(r1(R+518)){{goto L4f765a;}}
}
B4f7655:L4f7655:{c.instructions+=2;NFSU2_TR(0x4f7655);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7658:{NFSU2_TR(0x4f7658);
{goto L4f765c;}
}
B4f765a:L4f765a:{c.instructions+=1;NFSU2_TR(0x4f765a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f765c:L4f765c:{c.instructions+=5;NFSU2_TR(0x4f765c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f765f:{NFSU2_TR(0x4f765f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7661:{NFSU2_TR(0x4f7661);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7664:{NFSU2_TR(0x4f7664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7667:{NFSU2_TR(0x4f7667);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7669:L4f7669:{c.instructions+=3;NFSU2_TR(0x4f7669);
u8 U[4];
w4(U+0,u32(0x798a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f766e:{NFSU2_TR(0x4f766e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7671:{NFSU2_TR(0x4f7671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7676ull));
TAIL_STATIC(0x505450u,505);
}
B4f7676:L4f7676:{c.instructions+=4;NFSU2_TR(0x4f7676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7679:{NFSU2_TR(0x4f7679);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f767a:{NFSU2_TR(0x4f767a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f767b:{NFSU2_TR(0x4f767b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7680ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7680:L4f7680:{c.instructions+=4;NFSU2_TR(0x4f7680);
__builtin_memmove((R+28),(R+0),4);
}
B4f7682:{NFSU2_TR(0x4f7682);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7685:{NFSU2_TR(0x4f7685);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7687:{NFSU2_TR(0x4f7687);
if(r1(R+518)){{goto L4f76a6;}}
}
B4f7689:L4f7689:{c.instructions+=1;NFSU2_TR(0x4f7689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f768eull));
TAIL_STATIC(0x440ec0u,440);
}
B4f768e:L4f768e:{c.instructions+=2;NFSU2_TR(0x4f768e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7690:{NFSU2_TR(0x4f7690);
if(r1(R+518)){{goto L4f7697;}}
}
B4f7692:L4f7692:{c.instructions+=2;NFSU2_TR(0x4f7692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7695:{NFSU2_TR(0x4f7695);
{goto L4f7699;}
}
B4f7697:L4f7697:{c.instructions+=1;NFSU2_TR(0x4f7697);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7699:L4f7699:{c.instructions+=5;NFSU2_TR(0x4f7699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f769c:{NFSU2_TR(0x4f769c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f769e:{NFSU2_TR(0x4f769e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76a1:{NFSU2_TR(0x4f76a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76a4:{NFSU2_TR(0x4f76a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f76a6:L4f76a6:{c.instructions+=5;NFSU2_TR(0x4f76a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f76a9:{NFSU2_TR(0x4f76a9);
u8 U[4];
w4(U+0,u32(0x697d2bcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f76ae:{NFSU2_TR(0x4f76ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f76af:{NFSU2_TR(0x4f76af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76b2:{NFSU2_TR(0x4f76b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f76b7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f76b7:L4f76b7:{c.instructions+=4;NFSU2_TR(0x4f76b7);
__builtin_memmove((R+28),(R+0),4);
}
B4f76b9:{NFSU2_TR(0x4f76b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f76bc:{NFSU2_TR(0x4f76bc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f76be:{NFSU2_TR(0x4f76be);
if(r1(R+518)){{goto L4f76dd;}}
}
B4f76c0:L4f76c0:{c.instructions+=1;NFSU2_TR(0x4f76c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f76c5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f76c5:L4f76c5:{c.instructions+=2;NFSU2_TR(0x4f76c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f76c7:{NFSU2_TR(0x4f76c7);
if(r1(R+518)){{goto L4f76ce;}}
}
B4f76c9:L4f76c9:{c.instructions+=2;NFSU2_TR(0x4f76c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76cc:{NFSU2_TR(0x4f76cc);
{goto L4f76d0;}
}
B4f76ce:L4f76ce:{c.instructions+=1;NFSU2_TR(0x4f76ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f76d0:L4f76d0:{c.instructions+=5;NFSU2_TR(0x4f76d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f76d3:{NFSU2_TR(0x4f76d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f76d5:{NFSU2_TR(0x4f76d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76d8:{NFSU2_TR(0x4f76d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76db:{NFSU2_TR(0x4f76db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f76dd:L4f76dd:{c.instructions+=2;NFSU2_TR(0x4f76dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f76e0:{NFSU2_TR(0x4f76e0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f76e2:L4f76e2:{c.instructions+=3;NFSU2_TR(0x4f76e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f76e3:{NFSU2_TR(0x4f76e3);
u8 U[4];
w4(U+0,u32(0x78e220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f76e8:{NFSU2_TR(0x4f76e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f76edull));
TAIL_STATIC(0x50b990u,50b);
}
B4f76ed:L4f76ed:{c.instructions+=4;NFSU2_TR(0x4f76ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f76f0:{NFSU2_TR(0x4f76f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f76f1:{NFSU2_TR(0x4f76f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f76f2:{NFSU2_TR(0x4f76f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f76f7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f76f7:L4f76f7:{c.instructions+=4;NFSU2_TR(0x4f76f7);
__builtin_memmove((R+20),(R+0),4);
}
B4f76f9:{NFSU2_TR(0x4f76f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f76fc:{NFSU2_TR(0x4f76fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f76fe:{NFSU2_TR(0x4f76fe);
if(r1(R+518)){{goto L4f771d;}}
}
B4f7700:L4f7700:{c.instructions+=1;NFSU2_TR(0x4f7700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7705ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7705:L4f7705:{c.instructions+=2;NFSU2_TR(0x4f7705);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7707:{NFSU2_TR(0x4f7707);
if(r1(R+518)){{goto L4f770e;}}
}
B4f7709:L4f7709:{c.instructions+=2;NFSU2_TR(0x4f7709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f770c:{NFSU2_TR(0x4f770c);
{goto L4f7710;}
}
B4f770e:L4f770e:{c.instructions+=1;NFSU2_TR(0x4f770e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7710:L4f7710:{c.instructions+=5;NFSU2_TR(0x4f7710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7713:{NFSU2_TR(0x4f7713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7715:{NFSU2_TR(0x4f7715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7718:{NFSU2_TR(0x4f7718);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f771b:{NFSU2_TR(0x4f771b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f771d:L4f771d:{c.instructions+=3;NFSU2_TR(0x4f771d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f771e:{NFSU2_TR(0x4f771e);
u8 U[4];
w4(U+0,u32(0x78e208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7723:{NFSU2_TR(0x4f7723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7728ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7728:L4f7728:{c.instructions+=4;NFSU2_TR(0x4f7728);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f772b:{NFSU2_TR(0x4f772b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f772c:{NFSU2_TR(0x4f772c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f772d:{NFSU2_TR(0x4f772d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7732ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7732:L4f7732:{c.instructions+=4;NFSU2_TR(0x4f7732);
__builtin_memmove((R+20),(R+0),4);
}
B4f7734:{NFSU2_TR(0x4f7734);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7737:{NFSU2_TR(0x4f7737);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7739:{NFSU2_TR(0x4f7739);
if(r1(R+518)){{goto L4f7758;}}
}
B4f773b:L4f773b:{c.instructions+=1;NFSU2_TR(0x4f773b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7740ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7740:L4f7740:{c.instructions+=2;NFSU2_TR(0x4f7740);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7742:{NFSU2_TR(0x4f7742);
if(r1(R+518)){{goto L4f7749;}}
}
B4f7744:L4f7744:{c.instructions+=2;NFSU2_TR(0x4f7744);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7747:{NFSU2_TR(0x4f7747);
{goto L4f774b;}
}
B4f7749:L4f7749:{c.instructions+=1;NFSU2_TR(0x4f7749);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f774b:L4f774b:{c.instructions+=5;NFSU2_TR(0x4f774b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f774e:{NFSU2_TR(0x4f774e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7750:{NFSU2_TR(0x4f7750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7753:{NFSU2_TR(0x4f7753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7756:{NFSU2_TR(0x4f7756);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7758:L4f7758:{c.instructions+=3;NFSU2_TR(0x4f7758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7759:{NFSU2_TR(0x4f7759);
u8 U[4];
w4(U+0,u32(0x78e1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f775e:{NFSU2_TR(0x4f775e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7763ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7763:L4f7763:{c.instructions+=4;NFSU2_TR(0x4f7763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7764:{NFSU2_TR(0x4f7764);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7767:{NFSU2_TR(0x4f7767);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7768:{NFSU2_TR(0x4f7768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f776dull));
TAIL_STATIC(0x5379c0u,537);
}
B4f776d:L4f776d:{c.instructions+=4;NFSU2_TR(0x4f776d);
__builtin_memmove((R+20),(R+0),4);
}
B4f776f:{NFSU2_TR(0x4f776f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7772:{NFSU2_TR(0x4f7772);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7774:{NFSU2_TR(0x4f7774);
if(r1(R+518)){{goto L4f7793;}}
}
B4f7776:L4f7776:{c.instructions+=1;NFSU2_TR(0x4f7776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f777bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f777b:L4f777b:{c.instructions+=2;NFSU2_TR(0x4f777b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f777d:{NFSU2_TR(0x4f777d);
if(r1(R+518)){{goto L4f7784;}}
}
B4f777f:L4f777f:{c.instructions+=2;NFSU2_TR(0x4f777f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7782:{NFSU2_TR(0x4f7782);
{goto L4f7786;}
}
B4f7784:L4f7784:{c.instructions+=1;NFSU2_TR(0x4f7784);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7786:L4f7786:{c.instructions+=5;NFSU2_TR(0x4f7786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7789:{NFSU2_TR(0x4f7789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f778b:{NFSU2_TR(0x4f778b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f778e:{NFSU2_TR(0x4f778e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7791:{NFSU2_TR(0x4f7791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7793:L4f7793:{c.instructions+=3;NFSU2_TR(0x4f7793);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7794:{NFSU2_TR(0x4f7794);
u8 U[4];
w4(U+0,u32(0x78e1c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7799:{NFSU2_TR(0x4f7799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f779eull));
TAIL_STATIC(0x50b990u,50b);
}
B4f779e:L4f779e:{c.instructions+=4;NFSU2_TR(0x4f779e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f77a1:{NFSU2_TR(0x4f77a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f77a2:{NFSU2_TR(0x4f77a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f77a3:{NFSU2_TR(0x4f77a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f77a8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f77a8:L4f77a8:{c.instructions+=4;NFSU2_TR(0x4f77a8);
__builtin_memmove((R+20),(R+0),4);
}
B4f77aa:{NFSU2_TR(0x4f77aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f77ad:{NFSU2_TR(0x4f77ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f77af:{NFSU2_TR(0x4f77af);
if(r1(R+518)){{goto L4f77ce;}}
}
B4f77b1:L4f77b1:{c.instructions+=1;NFSU2_TR(0x4f77b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f77b6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f77b6:L4f77b6:{c.instructions+=2;NFSU2_TR(0x4f77b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f77b8:{NFSU2_TR(0x4f77b8);
if(r1(R+518)){{goto L4f77bf;}}
}
B4f77ba:L4f77ba:{c.instructions+=2;NFSU2_TR(0x4f77ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f77bd:{NFSU2_TR(0x4f77bd);
{goto L4f77c1;}
}
B4f77bf:L4f77bf:{c.instructions+=1;NFSU2_TR(0x4f77bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f77c1:L4f77c1:{c.instructions+=5;NFSU2_TR(0x4f77c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f77c4:{NFSU2_TR(0x4f77c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f77c6:{NFSU2_TR(0x4f77c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f77c9:{NFSU2_TR(0x4f77c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f77cc:{NFSU2_TR(0x4f77cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f77ce:L4f77ce:{c.instructions+=3;NFSU2_TR(0x4f77ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f77cf:{NFSU2_TR(0x4f77cf);
u8 U[4];
w4(U+0,u32(0x78e1acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f77d4:{NFSU2_TR(0x4f77d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f77d9ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f77d9:L4f77d9:{c.instructions+=4;NFSU2_TR(0x4f77d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f77dc:{NFSU2_TR(0x4f77dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f77dd:{NFSU2_TR(0x4f77dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f77de:{NFSU2_TR(0x4f77de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f77e3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f77e3:L4f77e3:{c.instructions+=4;NFSU2_TR(0x4f77e3);
__builtin_memmove((R+20),(R+0),4);
}
B4f77e5:{NFSU2_TR(0x4f77e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f77e8:{NFSU2_TR(0x4f77e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f77ea:{NFSU2_TR(0x4f77ea);
if(r1(R+518)){{goto L4f7809;}}
}
B4f77ec:L4f77ec:{c.instructions+=1;NFSU2_TR(0x4f77ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f77f1ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f77f1:L4f77f1:{c.instructions+=2;NFSU2_TR(0x4f77f1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f77f3:{NFSU2_TR(0x4f77f3);
if(r1(R+518)){{goto L4f77fa;}}
}
B4f77f5:L4f77f5:{c.instructions+=2;NFSU2_TR(0x4f77f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f77f8:{NFSU2_TR(0x4f77f8);
{goto L4f77fc;}
}
B4f77fa:L4f77fa:{c.instructions+=1;NFSU2_TR(0x4f77fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f77fc:L4f77fc:{c.instructions+=5;NFSU2_TR(0x4f77fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f77ff:{NFSU2_TR(0x4f77ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7801:{NFSU2_TR(0x4f7801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7804:{NFSU2_TR(0x4f7804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7807:{NFSU2_TR(0x4f7807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7809:L4f7809:{c.instructions+=3;NFSU2_TR(0x4f7809);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f780a:{NFSU2_TR(0x4f780a);
u8 U[4];
w4(U+0,u32(0x78e198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f780f:{NFSU2_TR(0x4f780f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7814ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7814:L4f7814:{c.instructions+=4;NFSU2_TR(0x4f7814);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7815:{NFSU2_TR(0x4f7815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7818:{NFSU2_TR(0x4f7818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7819:{NFSU2_TR(0x4f7819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f781eull));
TAIL_STATIC(0x5379c0u,537);
}
B4f781e:L4f781e:{c.instructions+=4;NFSU2_TR(0x4f781e);
__builtin_memmove((R+20),(R+0),4);
}
B4f7820:{NFSU2_TR(0x4f7820);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7823:{NFSU2_TR(0x4f7823);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7825:{NFSU2_TR(0x4f7825);
if(r1(R+518)){{goto L4f7844;}}
}
B4f7827:L4f7827:{c.instructions+=1;NFSU2_TR(0x4f7827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f782cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f782c:L4f782c:{c.instructions+=2;NFSU2_TR(0x4f782c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f782e:{NFSU2_TR(0x4f782e);
if(r1(R+518)){{goto L4f7835;}}
}
B4f7830:L4f7830:{c.instructions+=2;NFSU2_TR(0x4f7830);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7833:{NFSU2_TR(0x4f7833);
{goto L4f7837;}
}
B4f7835:L4f7835:{c.instructions+=1;NFSU2_TR(0x4f7835);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7837:L4f7837:{c.instructions+=5;NFSU2_TR(0x4f7837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f783a:{NFSU2_TR(0x4f783a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f783c:{NFSU2_TR(0x4f783c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f783f:{NFSU2_TR(0x4f783f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7842:{NFSU2_TR(0x4f7842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7844:L4f7844:{c.instructions+=3;NFSU2_TR(0x4f7844);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7845:{NFSU2_TR(0x4f7845);
u8 U[4];
w4(U+0,u32(0x78e17cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f784a:{NFSU2_TR(0x4f784a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f784full));
TAIL_STATIC(0x50b990u,50b);
}
B4f784f:L4f784f:{c.instructions+=4;NFSU2_TR(0x4f784f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7852:{NFSU2_TR(0x4f7852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7853:{NFSU2_TR(0x4f7853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7854:{NFSU2_TR(0x4f7854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7859ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7859:L4f7859:{c.instructions+=4;NFSU2_TR(0x4f7859);
__builtin_memmove((R+20),(R+0),4);
}
B4f785b:{NFSU2_TR(0x4f785b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f785e:{NFSU2_TR(0x4f785e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7860:{NFSU2_TR(0x4f7860);
if(r1(R+518)){{goto L4f787f;}}
}
B4f7862:L4f7862:{c.instructions+=1;NFSU2_TR(0x4f7862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7867ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7867:L4f7867:{c.instructions+=2;NFSU2_TR(0x4f7867);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7869:{NFSU2_TR(0x4f7869);
if(r1(R+518)){{goto L4f7870;}}
}
B4f786b:L4f786b:{c.instructions+=2;NFSU2_TR(0x4f786b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f786e:{NFSU2_TR(0x4f786e);
{goto L4f7872;}
}
B4f7870:L4f7870:{c.instructions+=1;NFSU2_TR(0x4f7870);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7872:L4f7872:{c.instructions+=5;NFSU2_TR(0x4f7872);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7875:{NFSU2_TR(0x4f7875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7877:{NFSU2_TR(0x4f7877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f787a:{NFSU2_TR(0x4f787a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f787d:{NFSU2_TR(0x4f787d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f787f:L4f787f:{c.instructions+=3;NFSU2_TR(0x4f787f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7880:{NFSU2_TR(0x4f7880);
u8 U[4];
w4(U+0,u32(0x78e168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7885:{NFSU2_TR(0x4f7885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f788aull));
TAIL_STATIC(0x50b990u,50b);
}
B4f788a:L4f788a:{c.instructions+=4;NFSU2_TR(0x4f788a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f788d:{NFSU2_TR(0x4f788d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f788e:{NFSU2_TR(0x4f788e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f788f:{NFSU2_TR(0x4f788f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7894ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7894:L4f7894:{c.instructions+=4;NFSU2_TR(0x4f7894);
__builtin_memmove((R+20),(R+0),4);
}
B4f7896:{NFSU2_TR(0x4f7896);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7899:{NFSU2_TR(0x4f7899);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f789b:{NFSU2_TR(0x4f789b);
if(r1(R+518)){{goto L4f78ba;}}
}
B4f789d:L4f789d:{c.instructions+=1;NFSU2_TR(0x4f789d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f78a2ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f78a2:L4f78a2:{c.instructions+=2;NFSU2_TR(0x4f78a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f78a4:{NFSU2_TR(0x4f78a4);
if(r1(R+518)){{goto L4f78ab;}}
}
B4f78a6:L4f78a6:{c.instructions+=2;NFSU2_TR(0x4f78a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f78a9:{NFSU2_TR(0x4f78a9);
{goto L4f78ad;}
}
B4f78ab:L4f78ab:{c.instructions+=1;NFSU2_TR(0x4f78ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f78ad:L4f78ad:{c.instructions+=5;NFSU2_TR(0x4f78ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f78b0:{NFSU2_TR(0x4f78b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f78b2:{NFSU2_TR(0x4f78b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f78b5:{NFSU2_TR(0x4f78b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f78b8:{NFSU2_TR(0x4f78b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f78ba:L4f78ba:{c.instructions+=3;NFSU2_TR(0x4f78ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f78bb:{NFSU2_TR(0x4f78bb);
u8 U[4];
w4(U+0,u32(0x78e150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f78c0:{NFSU2_TR(0x4f78c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f78c5ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f78c5:L4f78c5:{c.instructions+=4;NFSU2_TR(0x4f78c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f78c6:{NFSU2_TR(0x4f78c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f78c9:{NFSU2_TR(0x4f78c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f78ca:{NFSU2_TR(0x4f78ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f78cfull));
TAIL_STATIC(0x5379c0u,537);
}
B4f78cf:L4f78cf:{c.instructions+=4;NFSU2_TR(0x4f78cf);
__builtin_memmove((R+20),(R+0),4);
}
B4f78d1:{NFSU2_TR(0x4f78d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f78d4:{NFSU2_TR(0x4f78d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f78d6:{NFSU2_TR(0x4f78d6);
if(r1(R+518)){{goto L4f78f5;}}
}
B4f78d8:L4f78d8:{c.instructions+=1;NFSU2_TR(0x4f78d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f78ddull));
TAIL_STATIC(0x440ec0u,440);
}
B4f78dd:L4f78dd:{c.instructions+=2;NFSU2_TR(0x4f78dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f78df:{NFSU2_TR(0x4f78df);
if(r1(R+518)){{goto L4f78e6;}}
}
B4f78e1:L4f78e1:{c.instructions+=2;NFSU2_TR(0x4f78e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f78e4:{NFSU2_TR(0x4f78e4);
{goto L4f78e8;}
}
B4f78e6:L4f78e6:{c.instructions+=1;NFSU2_TR(0x4f78e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f78e8:L4f78e8:{c.instructions+=5;NFSU2_TR(0x4f78e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f78eb:{NFSU2_TR(0x4f78eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f78ed:{NFSU2_TR(0x4f78ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f78f0:{NFSU2_TR(0x4f78f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f78f3:{NFSU2_TR(0x4f78f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f78f5:L4f78f5:{c.instructions+=3;NFSU2_TR(0x4f78f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f78f6:{NFSU2_TR(0x4f78f6);
u8 U[4];
w4(U+0,u32(0x78e134ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f78fb:{NFSU2_TR(0x4f78fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7900ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7900:L4f7900:{c.instructions+=4;NFSU2_TR(0x4f7900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7903:{NFSU2_TR(0x4f7903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7904:{NFSU2_TR(0x4f7904);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7905:{NFSU2_TR(0x4f7905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f790aull));
TAIL_STATIC(0x5379c0u,537);
}
B4f790a:L4f790a:{c.instructions+=4;NFSU2_TR(0x4f790a);
__builtin_memmove((R+20),(R+0),4);
}
B4f790c:{NFSU2_TR(0x4f790c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f790f:{NFSU2_TR(0x4f790f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7911:{NFSU2_TR(0x4f7911);
if(r1(R+518)){{goto L4f7930;}}
}
B4f7913:L4f7913:{c.instructions+=1;NFSU2_TR(0x4f7913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7918ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7918:L4f7918:{c.instructions+=2;NFSU2_TR(0x4f7918);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f791a:{NFSU2_TR(0x4f791a);
if(r1(R+518)){{goto L4f7921;}}
}
B4f791c:L4f791c:{c.instructions+=2;NFSU2_TR(0x4f791c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f791f:{NFSU2_TR(0x4f791f);
{goto L4f7923;}
}
B4f7921:L4f7921:{c.instructions+=1;NFSU2_TR(0x4f7921);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7923:L4f7923:{c.instructions+=5;NFSU2_TR(0x4f7923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7926:{NFSU2_TR(0x4f7926);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7928:{NFSU2_TR(0x4f7928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f792b:{NFSU2_TR(0x4f792b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f792e:{NFSU2_TR(0x4f792e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7930:L4f7930:{c.instructions+=3;NFSU2_TR(0x4f7930);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7931:{NFSU2_TR(0x4f7931);
u8 U[4];
w4(U+0,u32(0x78e11cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7936:{NFSU2_TR(0x4f7936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f793bull));
TAIL_STATIC(0x50b990u,50b);
}
B4f793b:L4f793b:{c.instructions+=4;NFSU2_TR(0x4f793b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f793e:{NFSU2_TR(0x4f793e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f793f:{NFSU2_TR(0x4f793f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7940:{NFSU2_TR(0x4f7940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7945ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7945:L4f7945:{c.instructions+=4;NFSU2_TR(0x4f7945);
__builtin_memmove((R+20),(R+0),4);
}
B4f7947:{NFSU2_TR(0x4f7947);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f794a:{NFSU2_TR(0x4f794a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f794c:{NFSU2_TR(0x4f794c);
if(r1(R+518)){{goto L4f796b;}}
}
B4f794e:L4f794e:{c.instructions+=1;NFSU2_TR(0x4f794e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7953ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7953:L4f7953:{c.instructions+=2;NFSU2_TR(0x4f7953);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7955:{NFSU2_TR(0x4f7955);
if(r1(R+518)){{goto L4f795c;}}
}
B4f7957:L4f7957:{c.instructions+=2;NFSU2_TR(0x4f7957);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f795a:{NFSU2_TR(0x4f795a);
{goto L4f795e;}
}
B4f795c:L4f795c:{c.instructions+=1;NFSU2_TR(0x4f795c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f795e:L4f795e:{c.instructions+=5;NFSU2_TR(0x4f795e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7961:{NFSU2_TR(0x4f7961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7963:{NFSU2_TR(0x4f7963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7966:{NFSU2_TR(0x4f7966);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7969:{NFSU2_TR(0x4f7969);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f796b:L4f796b:{c.instructions+=3;NFSU2_TR(0x4f796b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f796c:{NFSU2_TR(0x4f796c);
u8 U[4];
w4(U+0,u32(0x78e104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7971:{NFSU2_TR(0x4f7971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7976ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7976:L4f7976:{c.instructions+=4;NFSU2_TR(0x4f7976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7977:{NFSU2_TR(0x4f7977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f797a:{NFSU2_TR(0x4f797a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f797b:{NFSU2_TR(0x4f797b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7980ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7980:L4f7980:{c.instructions+=4;NFSU2_TR(0x4f7980);
__builtin_memmove((R+20),(R+0),4);
}
B4f7982:{NFSU2_TR(0x4f7982);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7985:{NFSU2_TR(0x4f7985);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7987:{NFSU2_TR(0x4f7987);
if(r1(R+518)){{goto L4f79a6;}}
}
B4f7989:L4f7989:{c.instructions+=1;NFSU2_TR(0x4f7989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f798eull));
TAIL_STATIC(0x440ec0u,440);
}
B4f798e:L4f798e:{c.instructions+=2;NFSU2_TR(0x4f798e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7990:{NFSU2_TR(0x4f7990);
if(r1(R+518)){{goto L4f7997;}}
}
B4f7992:L4f7992:{c.instructions+=2;NFSU2_TR(0x4f7992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7995:{NFSU2_TR(0x4f7995);
{goto L4f7999;}
}
B4f7997:L4f7997:{c.instructions+=1;NFSU2_TR(0x4f7997);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7999:L4f7999:{c.instructions+=5;NFSU2_TR(0x4f7999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f799c:{NFSU2_TR(0x4f799c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f799e:{NFSU2_TR(0x4f799e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f79a1:{NFSU2_TR(0x4f79a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f79a4:{NFSU2_TR(0x4f79a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f79a6:L4f79a6:{c.instructions+=3;NFSU2_TR(0x4f79a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79a7:{NFSU2_TR(0x4f79a7);
u8 U[4];
w4(U+0,u32(0x78e0ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79ac:{NFSU2_TR(0x4f79ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f79b1ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f79b1:L4f79b1:{c.instructions+=4;NFSU2_TR(0x4f79b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f79b4:{NFSU2_TR(0x4f79b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79b5:{NFSU2_TR(0x4f79b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79b6:{NFSU2_TR(0x4f79b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f79bbull));
TAIL_STATIC(0x5379c0u,537);
}
B4f79bb:L4f79bb:{c.instructions+=4;NFSU2_TR(0x4f79bb);
__builtin_memmove((R+20),(R+0),4);
}
B4f79bd:{NFSU2_TR(0x4f79bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f79c0:{NFSU2_TR(0x4f79c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f79c2:{NFSU2_TR(0x4f79c2);
if(r1(R+518)){{goto L4f79e1;}}
}
B4f79c4:L4f79c4:{c.instructions+=1;NFSU2_TR(0x4f79c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f79c9ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f79c9:L4f79c9:{c.instructions+=2;NFSU2_TR(0x4f79c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f79cb:{NFSU2_TR(0x4f79cb);
if(r1(R+518)){{goto L4f79d2;}}
}
B4f79cd:L4f79cd:{c.instructions+=2;NFSU2_TR(0x4f79cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f79d0:{NFSU2_TR(0x4f79d0);
{goto L4f79d4;}
}
B4f79d2:L4f79d2:{c.instructions+=1;NFSU2_TR(0x4f79d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f79d4:L4f79d4:{c.instructions+=5;NFSU2_TR(0x4f79d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f79d7:{NFSU2_TR(0x4f79d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f79d9:{NFSU2_TR(0x4f79d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f79dc:{NFSU2_TR(0x4f79dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f79df:{NFSU2_TR(0x4f79df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f79e1:L4f79e1:{c.instructions+=3;NFSU2_TR(0x4f79e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79e2:{NFSU2_TR(0x4f79e2);
u8 U[4];
w4(U+0,u32(0x78e0d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79e7:{NFSU2_TR(0x4f79e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f79ecull));
TAIL_STATIC(0x50b990u,50b);
}
B4f79ec:L4f79ec:{c.instructions+=4;NFSU2_TR(0x4f79ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f79ef:{NFSU2_TR(0x4f79ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79f0:{NFSU2_TR(0x4f79f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f79f1:{NFSU2_TR(0x4f79f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f79f6ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f79f6:L4f79f6:{c.instructions+=4;NFSU2_TR(0x4f79f6);
__builtin_memmove((R+20),(R+0),4);
}
B4f79f8:{NFSU2_TR(0x4f79f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f79fb:{NFSU2_TR(0x4f79fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f79fd:{NFSU2_TR(0x4f79fd);
if(r1(R+518)){{goto L4f7a1c;}}
}
B4f79ff:L4f79ff:{c.instructions+=1;NFSU2_TR(0x4f79ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a04ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7a04:L4f7a04:{c.instructions+=2;NFSU2_TR(0x4f7a04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7a06:{NFSU2_TR(0x4f7a06);
if(r1(R+518)){{goto L4f7a0d;}}
}
B4f7a08:L4f7a08:{c.instructions+=2;NFSU2_TR(0x4f7a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a0b:{NFSU2_TR(0x4f7a0b);
{goto L4f7a0f;}
}
B4f7a0d:L4f7a0d:{c.instructions+=1;NFSU2_TR(0x4f7a0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7a0f:L4f7a0f:{c.instructions+=5;NFSU2_TR(0x4f7a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7a12:{NFSU2_TR(0x4f7a12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7a14:{NFSU2_TR(0x4f7a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a17:{NFSU2_TR(0x4f7a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a1a:{NFSU2_TR(0x4f7a1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7a1c:L4f7a1c:{c.instructions+=3;NFSU2_TR(0x4f7a1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a1d:{NFSU2_TR(0x4f7a1d);
u8 U[4];
w4(U+0,u32(0x78e0bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a22:{NFSU2_TR(0x4f7a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a27ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7a27:L4f7a27:{c.instructions+=4;NFSU2_TR(0x4f7a27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a28:{NFSU2_TR(0x4f7a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7a2b:{NFSU2_TR(0x4f7a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a2c:{NFSU2_TR(0x4f7a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a31ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7a31:L4f7a31:{c.instructions+=4;NFSU2_TR(0x4f7a31);
__builtin_memmove((R+20),(R+0),4);
}
B4f7a33:{NFSU2_TR(0x4f7a33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7a36:{NFSU2_TR(0x4f7a36);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7a38:{NFSU2_TR(0x4f7a38);
if(r1(R+518)){{goto L4f7a57;}}
}
B4f7a3a:L4f7a3a:{c.instructions+=1;NFSU2_TR(0x4f7a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a3full));
TAIL_STATIC(0x440ec0u,440);
}
B4f7a3f:L4f7a3f:{c.instructions+=2;NFSU2_TR(0x4f7a3f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7a41:{NFSU2_TR(0x4f7a41);
if(r1(R+518)){{goto L4f7a48;}}
}
B4f7a43:L4f7a43:{c.instructions+=2;NFSU2_TR(0x4f7a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a46:{NFSU2_TR(0x4f7a46);
{goto L4f7a4a;}
}
B4f7a48:L4f7a48:{c.instructions+=1;NFSU2_TR(0x4f7a48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7a4a:L4f7a4a:{c.instructions+=5;NFSU2_TR(0x4f7a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7a4d:{NFSU2_TR(0x4f7a4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7a4f:{NFSU2_TR(0x4f7a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a52:{NFSU2_TR(0x4f7a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a55:{NFSU2_TR(0x4f7a55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7a57:L4f7a57:{c.instructions+=3;NFSU2_TR(0x4f7a57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a58:{NFSU2_TR(0x4f7a58);
u8 U[4];
w4(U+0,u32(0x78e0a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a5d:{NFSU2_TR(0x4f7a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a62ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f7a62:L4f7a62:{c.instructions+=4;NFSU2_TR(0x4f7a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7a65:{NFSU2_TR(0x4f7a65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a66:{NFSU2_TR(0x4f7a66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7a67:{NFSU2_TR(0x4f7a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a6cull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7a6c:L4f7a6c:{c.instructions+=4;NFSU2_TR(0x4f7a6c);
__builtin_memmove((R+20),(R+0),4);
}
B4f7a6e:{NFSU2_TR(0x4f7a6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f7a71:{NFSU2_TR(0x4f7a71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7a73:{NFSU2_TR(0x4f7a73);
if(r1(R+518)){{goto L4f7a92;}}
}
B4f7a75:L4f7a75:{c.instructions+=1;NFSU2_TR(0x4f7a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7a7aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7a7a:L4f7a7a:{c.instructions+=2;NFSU2_TR(0x4f7a7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7a7c:{NFSU2_TR(0x4f7a7c);
if(r1(R+518)){{goto L4f7a83;}}
}
B4f7a7e:L4f7a7e:{c.instructions+=2;NFSU2_TR(0x4f7a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a81:{NFSU2_TR(0x4f7a81);
{goto L4f7a85;}
}
B4f7a83:L4f7a83:{c.instructions+=1;NFSU2_TR(0x4f7a83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7a85:L4f7a85:{c.instructions+=5;NFSU2_TR(0x4f7a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7a88:{NFSU2_TR(0x4f7a88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7a8a:{NFSU2_TR(0x4f7a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a8d:{NFSU2_TR(0x4f7a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7a90:{NFSU2_TR(0x4f7a90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7a92:L4f7a92:{c.instructions+=3;NFSU2_TR(0x4f7a92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4f7a93:{NFSU2_TR(0x4f7a93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f7a96:{NFSU2_TR(0x4f7a96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f76e2u);}goto L4f76e2;}}
}
B4f7a9c:L4f7a9c:{c.instructions+=3;NFSU2_TR(0x4f7a9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7aa0:{NFSU2_TR(0x4f7aa0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7aa1:{NFSU2_TR(0x4f7aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7aa6ull));
TAIL_STATIC(0x4ecc80u,4ec);
}
B4f7aa6:L4f7aa6:{c.instructions+=5;NFSU2_TR(0x4f7aa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f7aa9:{NFSU2_TR(0x4f7aa9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7aaa:{NFSU2_TR(0x4f7aaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7aab:{NFSU2_TR(0x4f7aab);
__builtin_memmove((R+4),(R+24),4);
}
B4f7aad:{NFSU2_TR(0x4f7aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ab2ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4f7ab2:L4f7ab2:{c.instructions+=10;NFSU2_TR(0x4f7ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7ab6:{NFSU2_TR(0x4f7ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f7ab7:{NFSU2_TR(0x4f7ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f7aba:{NFSU2_TR(0x4f7aba);
__builtin_memmove((R+0),(R+24),4);
}
B4f7abc:{NFSU2_TR(0x4f7abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f7abd:{NFSU2_TR(0x4f7abd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f7abe:{NFSU2_TR(0x4f7abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f7abf:{NFSU2_TR(0x4f7abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ac6:{NFSU2_TR(0x4f7ac6);
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
B4f7ac9:{NFSU2_TR(0x4f7ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f7ad0:L4f7ad0:{c.instructions+=28;NFSU2_TR(0x4f7ad0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ad2:{NFSU2_TR(0x4f7ad2);
u8 U[4];
w4(U+0,u32(0x776983ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ad7:{NFSU2_TR(0x4f7ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7add:{NFSU2_TR(0x4f7add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ade:{NFSU2_TR(0x4f7ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ae5:{NFSU2_TR(0x4f7ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ae6:{NFSU2_TR(0x4f7ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7aea:{NFSU2_TR(0x4f7aea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7aeb:{NFSU2_TR(0x4f7aeb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7aec:{NFSU2_TR(0x4f7aec);
__builtin_memmove((R+24),(R+4),4);
}
B4f7aee:{NFSU2_TR(0x4f7aee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f7af0:{NFSU2_TR(0x4f7af0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7af1:{NFSU2_TR(0x4f7af1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7af5:{NFSU2_TR(0x4f7af5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f7af7:{NFSU2_TR(0x4f7af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7afa:{NFSU2_TR(0x4f7afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7afd:{NFSU2_TR(0x4f7afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x20000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b04:{NFSU2_TR(0x4f7b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b07:{NFSU2_TR(0x4f7b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b0a:{NFSU2_TR(0x4f7b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b0d:{NFSU2_TR(0x4f7b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f7b10:{NFSU2_TR(0x4f7b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b14:{NFSU2_TR(0x4f7b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7b16:{NFSU2_TR(0x4f7b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b19:{NFSU2_TR(0x4f7b19);
u8 U[4];
w4(U+0,u32(0x798c74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b1e:{NFSU2_TR(0x4f7b1e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f7b23:{NFSU2_TR(0x4f7b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b26:{NFSU2_TR(0x4f7b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7b2bull));
TAIL_STATIC(0x505450u,505);
}
B4f7b2b:L4f7b2b:{c.instructions+=4;NFSU2_TR(0x4f7b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7b2e:{NFSU2_TR(0x4f7b2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b2f:{NFSU2_TR(0x4f7b2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b30:{NFSU2_TR(0x4f7b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7b35ull));
TAIL_STATIC(0x537a60u,537);
}
B4f7b35:L4f7b35:{c.instructions+=4;NFSU2_TR(0x4f7b35);
__builtin_memmove((R+28),(R+0),4);
}
B4f7b37:{NFSU2_TR(0x4f7b37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7b3a:{NFSU2_TR(0x4f7b3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7b3c:{NFSU2_TR(0x4f7b3c);
if(r1(R+518)){{goto L4f7b5b;}}
}
B4f7b3e:L4f7b3e:{c.instructions+=1;NFSU2_TR(0x4f7b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7b43ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7b43:L4f7b43:{c.instructions+=2;NFSU2_TR(0x4f7b43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7b45:{NFSU2_TR(0x4f7b45);
if(r1(R+518)){{goto L4f7b4c;}}
}
B4f7b47:L4f7b47:{c.instructions+=2;NFSU2_TR(0x4f7b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b4a:{NFSU2_TR(0x4f7b4a);
{goto L4f7b4e;}
}
B4f7b4c:L4f7b4c:{c.instructions+=1;NFSU2_TR(0x4f7b4c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7b4e:L4f7b4e:{c.instructions+=5;NFSU2_TR(0x4f7b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7b51:{NFSU2_TR(0x4f7b51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7b53:{NFSU2_TR(0x4f7b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b56:{NFSU2_TR(0x4f7b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b59:{NFSU2_TR(0x4f7b59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7b5b:L4f7b5b:{c.instructions+=3;NFSU2_TR(0x4f7b5b);
u8 U[4];
w4(U+0,u32(0x798c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b60:{NFSU2_TR(0x4f7b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b63:{NFSU2_TR(0x4f7b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7b68ull));
TAIL_STATIC(0x505450u,505);
}
B4f7b68:L4f7b68:{c.instructions+=4;NFSU2_TR(0x4f7b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7b6b:{NFSU2_TR(0x4f7b6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b6c:{NFSU2_TR(0x4f7b6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b6d:{NFSU2_TR(0x4f7b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7b72ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7b72:L4f7b72:{c.instructions+=4;NFSU2_TR(0x4f7b72);
__builtin_memmove((R+28),(R+0),4);
}
B4f7b74:{NFSU2_TR(0x4f7b74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7b77:{NFSU2_TR(0x4f7b77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7b79:{NFSU2_TR(0x4f7b79);
if(r1(R+518)){{goto L4f7b98;}}
}
B4f7b7b:L4f7b7b:{c.instructions+=1;NFSU2_TR(0x4f7b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7b80ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7b80:L4f7b80:{c.instructions+=2;NFSU2_TR(0x4f7b80);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7b82:{NFSU2_TR(0x4f7b82);
if(r1(R+518)){{goto L4f7b89;}}
}
B4f7b84:L4f7b84:{c.instructions+=2;NFSU2_TR(0x4f7b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b87:{NFSU2_TR(0x4f7b87);
{goto L4f7b8b;}
}
B4f7b89:L4f7b89:{c.instructions+=1;NFSU2_TR(0x4f7b89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7b8b:L4f7b8b:{c.instructions+=5;NFSU2_TR(0x4f7b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7b8e:{NFSU2_TR(0x4f7b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7b90:{NFSU2_TR(0x4f7b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b93:{NFSU2_TR(0x4f7b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7b96:{NFSU2_TR(0x4f7b96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7b98:L4f7b98:{c.instructions+=3;NFSU2_TR(0x4f7b98);
u8 U[4];
w4(U+0,u32(0x798c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7b9d:{NFSU2_TR(0x4f7b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ba0:{NFSU2_TR(0x4f7ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ba5ull));
TAIL_STATIC(0x505450u,505);
}
B4f7ba5:L4f7ba5:{c.instructions+=4;NFSU2_TR(0x4f7ba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ba6:{NFSU2_TR(0x4f7ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7ba9:{NFSU2_TR(0x4f7ba9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7baa:{NFSU2_TR(0x4f7baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7bafull));
TAIL_STATIC(0x537a10u,537);
}
B4f7baf:L4f7baf:{c.instructions+=4;NFSU2_TR(0x4f7baf);
__builtin_memmove((R+28),(R+0),4);
}
B4f7bb1:{NFSU2_TR(0x4f7bb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7bb4:{NFSU2_TR(0x4f7bb4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7bb6:{NFSU2_TR(0x4f7bb6);
if(r1(R+518)){{goto L4f7bd5;}}
}
B4f7bb8:L4f7bb8:{c.instructions+=1;NFSU2_TR(0x4f7bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7bbdull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7bbd:L4f7bbd:{c.instructions+=2;NFSU2_TR(0x4f7bbd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7bbf:{NFSU2_TR(0x4f7bbf);
if(r1(R+518)){{goto L4f7bc6;}}
}
B4f7bc1:L4f7bc1:{c.instructions+=2;NFSU2_TR(0x4f7bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7bc4:{NFSU2_TR(0x4f7bc4);
{goto L4f7bc8;}
}
B4f7bc6:L4f7bc6:{c.instructions+=1;NFSU2_TR(0x4f7bc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7bc8:L4f7bc8:{c.instructions+=5;NFSU2_TR(0x4f7bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7bcb:{NFSU2_TR(0x4f7bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7bcd:{NFSU2_TR(0x4f7bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7bd0:{NFSU2_TR(0x4f7bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7bd3:{NFSU2_TR(0x4f7bd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7bd5:L4f7bd5:{c.instructions+=3;NFSU2_TR(0x4f7bd5);
u8 U[4];
w4(U+0,u32(0x798c48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7bda:{NFSU2_TR(0x4f7bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7bdd:{NFSU2_TR(0x4f7bdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7be2ull));
TAIL_STATIC(0x505450u,505);
}
B4f7be2:L4f7be2:{c.instructions+=4;NFSU2_TR(0x4f7be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7be5:{NFSU2_TR(0x4f7be5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7be6:{NFSU2_TR(0x4f7be6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7be7:{NFSU2_TR(0x4f7be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7becull));
TAIL_STATIC(0x537a10u,537);
}
B4f7bec:L4f7bec:{c.instructions+=4;NFSU2_TR(0x4f7bec);
__builtin_memmove((R+28),(R+0),4);
}
B4f7bee:{NFSU2_TR(0x4f7bee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7bf1:{NFSU2_TR(0x4f7bf1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7bf3:{NFSU2_TR(0x4f7bf3);
if(r1(R+518)){{goto L4f7c12;}}
}
B4f7bf5:L4f7bf5:{c.instructions+=1;NFSU2_TR(0x4f7bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7bfaull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7bfa:L4f7bfa:{c.instructions+=2;NFSU2_TR(0x4f7bfa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7bfc:{NFSU2_TR(0x4f7bfc);
if(r1(R+518)){{goto L4f7c03;}}
}
B4f7bfe:L4f7bfe:{c.instructions+=2;NFSU2_TR(0x4f7bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c01:{NFSU2_TR(0x4f7c01);
{goto L4f7c05;}
}
B4f7c03:L4f7c03:{c.instructions+=1;NFSU2_TR(0x4f7c03);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7c05:L4f7c05:{c.instructions+=5;NFSU2_TR(0x4f7c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7c08:{NFSU2_TR(0x4f7c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7c0a:{NFSU2_TR(0x4f7c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c0d:{NFSU2_TR(0x4f7c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c10:{NFSU2_TR(0x4f7c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7c12:L4f7c12:{c.instructions+=3;NFSU2_TR(0x4f7c12);
u8 U[4];
w4(U+0,u32(0x798c38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c17:{NFSU2_TR(0x4f7c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c1a:{NFSU2_TR(0x4f7c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c1full));
TAIL_STATIC(0x505450u,505);
}
B4f7c1f:L4f7c1f:{c.instructions+=4;NFSU2_TR(0x4f7c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7c22:{NFSU2_TR(0x4f7c22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c23:{NFSU2_TR(0x4f7c23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c24:{NFSU2_TR(0x4f7c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c29ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7c29:L4f7c29:{c.instructions+=4;NFSU2_TR(0x4f7c29);
__builtin_memmove((R+28),(R+0),4);
}
B4f7c2b:{NFSU2_TR(0x4f7c2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7c2e:{NFSU2_TR(0x4f7c2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7c30:{NFSU2_TR(0x4f7c30);
if(r1(R+518)){{goto L4f7c4f;}}
}
B4f7c32:L4f7c32:{c.instructions+=1;NFSU2_TR(0x4f7c32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c37ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7c37:L4f7c37:{c.instructions+=2;NFSU2_TR(0x4f7c37);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7c39:{NFSU2_TR(0x4f7c39);
if(r1(R+518)){{goto L4f7c40;}}
}
B4f7c3b:L4f7c3b:{c.instructions+=2;NFSU2_TR(0x4f7c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c3e:{NFSU2_TR(0x4f7c3e);
{goto L4f7c42;}
}
B4f7c40:L4f7c40:{c.instructions+=1;NFSU2_TR(0x4f7c40);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7c42:L4f7c42:{c.instructions+=5;NFSU2_TR(0x4f7c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7c45:{NFSU2_TR(0x4f7c45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7c47:{NFSU2_TR(0x4f7c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c4a:{NFSU2_TR(0x4f7c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c4d:{NFSU2_TR(0x4f7c4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7c4f:L4f7c4f:{c.instructions+=3;NFSU2_TR(0x4f7c4f);
u8 U[4];
w4(U+0,u32(0x798c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c54:{NFSU2_TR(0x4f7c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c57:{NFSU2_TR(0x4f7c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c5cull));
TAIL_STATIC(0x505450u,505);
}
B4f7c5c:L4f7c5c:{c.instructions+=4;NFSU2_TR(0x4f7c5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c5d:{NFSU2_TR(0x4f7c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7c60:{NFSU2_TR(0x4f7c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c61:{NFSU2_TR(0x4f7c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c66ull));
TAIL_STATIC(0x537a60u,537);
}
B4f7c66:L4f7c66:{c.instructions+=4;NFSU2_TR(0x4f7c66);
__builtin_memmove((R+28),(R+0),4);
}
B4f7c68:{NFSU2_TR(0x4f7c68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7c6b:{NFSU2_TR(0x4f7c6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7c6d:{NFSU2_TR(0x4f7c6d);
if(r1(R+518)){{goto L4f7c8c;}}
}
B4f7c6f:L4f7c6f:{c.instructions+=1;NFSU2_TR(0x4f7c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c74ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7c74:L4f7c74:{c.instructions+=2;NFSU2_TR(0x4f7c74);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7c76:{NFSU2_TR(0x4f7c76);
if(r1(R+518)){{goto L4f7c7d;}}
}
B4f7c78:L4f7c78:{c.instructions+=2;NFSU2_TR(0x4f7c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c7b:{NFSU2_TR(0x4f7c7b);
{goto L4f7c7f;}
}
B4f7c7d:L4f7c7d:{c.instructions+=1;NFSU2_TR(0x4f7c7d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7c7f:L4f7c7f:{c.instructions+=5;NFSU2_TR(0x4f7c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7c82:{NFSU2_TR(0x4f7c82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7c84:{NFSU2_TR(0x4f7c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c87:{NFSU2_TR(0x4f7c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c8a:{NFSU2_TR(0x4f7c8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7c8c:L4f7c8c:{c.instructions+=3;NFSU2_TR(0x4f7c8c);
u8 U[4];
w4(U+0,u32(0x798c08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c91:{NFSU2_TR(0x4f7c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7c94:{NFSU2_TR(0x4f7c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7c99ull));
TAIL_STATIC(0x505450u,505);
}
B4f7c99:L4f7c99:{c.instructions+=4;NFSU2_TR(0x4f7c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7c9c:{NFSU2_TR(0x4f7c9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c9d:{NFSU2_TR(0x4f7c9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7c9e:{NFSU2_TR(0x4f7c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ca3ull));
TAIL_STATIC(0x537a60u,537);
}
B4f7ca3:L4f7ca3:{c.instructions+=4;NFSU2_TR(0x4f7ca3);
__builtin_memmove((R+28),(R+0),4);
}
B4f7ca5:{NFSU2_TR(0x4f7ca5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7ca8:{NFSU2_TR(0x4f7ca8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7caa:{NFSU2_TR(0x4f7caa);
if(r1(R+518)){{goto L4f7cc9;}}
}
B4f7cac:L4f7cac:{c.instructions+=1;NFSU2_TR(0x4f7cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7cb1ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7cb1:L4f7cb1:{c.instructions+=2;NFSU2_TR(0x4f7cb1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7cb3:{NFSU2_TR(0x4f7cb3);
if(r1(R+518)){{goto L4f7cba;}}
}
B4f7cb5:L4f7cb5:{c.instructions+=2;NFSU2_TR(0x4f7cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7cb8:{NFSU2_TR(0x4f7cb8);
{goto L4f7cbc;}
}
B4f7cba:L4f7cba:{c.instructions+=1;NFSU2_TR(0x4f7cba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7cbc:L4f7cbc:{c.instructions+=5;NFSU2_TR(0x4f7cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7cbf:{NFSU2_TR(0x4f7cbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7cc1:{NFSU2_TR(0x4f7cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7cc4:{NFSU2_TR(0x4f7cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7cc7:{NFSU2_TR(0x4f7cc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7cc9:L4f7cc9:{c.instructions+=2;NFSU2_TR(0x4f7cc9);
u8 U[4];
w4(U+0,u32(0x7989c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7cce:{NFSU2_TR(0x4f7cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7cd3ull));
TAIL_STATIC(0x505450u,505);
}
B4f7cd3:L4f7cd3:{c.instructions+=4;NFSU2_TR(0x4f7cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7cd6:{NFSU2_TR(0x4f7cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7cd7:{NFSU2_TR(0x4f7cd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7cd8:{NFSU2_TR(0x4f7cd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7cddull));
TAIL_STATIC(0x537a10u,537);
}
B4f7cdd:L4f7cdd:{c.instructions+=4;NFSU2_TR(0x4f7cdd);
__builtin_memmove((R+28),(R+0),4);
}
B4f7cdf:{NFSU2_TR(0x4f7cdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7ce2:{NFSU2_TR(0x4f7ce2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7ce4:{NFSU2_TR(0x4f7ce4);
if(r1(R+518)){{goto L4f7d03;}}
}
B4f7ce6:L4f7ce6:{c.instructions+=1;NFSU2_TR(0x4f7ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7cebull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7ceb:L4f7ceb:{c.instructions+=2;NFSU2_TR(0x4f7ceb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7ced:{NFSU2_TR(0x4f7ced);
if(r1(R+518)){{goto L4f7cf4;}}
}
B4f7cef:L4f7cef:{c.instructions+=2;NFSU2_TR(0x4f7cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7cf2:{NFSU2_TR(0x4f7cf2);
{goto L4f7cf6;}
}
B4f7cf4:L4f7cf4:{c.instructions+=1;NFSU2_TR(0x4f7cf4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7cf6:L4f7cf6:{c.instructions+=5;NFSU2_TR(0x4f7cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7cf9:{NFSU2_TR(0x4f7cf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7cfb:{NFSU2_TR(0x4f7cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7cfe:{NFSU2_TR(0x4f7cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d01:{NFSU2_TR(0x4f7d01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7d03:L4f7d03:{c.instructions+=2;NFSU2_TR(0x4f7d03);
u8 U[4];
w4(U+0,u32(0x798bf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d08:{NFSU2_TR(0x4f7d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d0dull));
TAIL_STATIC(0x505450u,505);
}
B4f7d0d:L4f7d0d:{c.instructions+=4;NFSU2_TR(0x4f7d0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d0e:{NFSU2_TR(0x4f7d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7d11:{NFSU2_TR(0x4f7d11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d12:{NFSU2_TR(0x4f7d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d17ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7d17:L4f7d17:{c.instructions+=4;NFSU2_TR(0x4f7d17);
__builtin_memmove((R+28),(R+0),4);
}
B4f7d19:{NFSU2_TR(0x4f7d19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7d1c:{NFSU2_TR(0x4f7d1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7d1e:{NFSU2_TR(0x4f7d1e);
if(r1(R+518)){{goto L4f7d3d;}}
}
B4f7d20:L4f7d20:{c.instructions+=1;NFSU2_TR(0x4f7d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d25ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7d25:L4f7d25:{c.instructions+=2;NFSU2_TR(0x4f7d25);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7d27:{NFSU2_TR(0x4f7d27);
if(r1(R+518)){{goto L4f7d2e;}}
}
B4f7d29:L4f7d29:{c.instructions+=2;NFSU2_TR(0x4f7d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d2c:{NFSU2_TR(0x4f7d2c);
{goto L4f7d30;}
}
B4f7d2e:L4f7d2e:{c.instructions+=1;NFSU2_TR(0x4f7d2e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7d30:L4f7d30:{c.instructions+=5;NFSU2_TR(0x4f7d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7d33:{NFSU2_TR(0x4f7d33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7d35:{NFSU2_TR(0x4f7d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d38:{NFSU2_TR(0x4f7d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d3b:{NFSU2_TR(0x4f7d3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7d3d:L4f7d3d:{c.instructions+=2;NFSU2_TR(0x4f7d3d);
u8 U[4];
w4(U+0,u32(0x7989b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d42:{NFSU2_TR(0x4f7d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d47ull));
TAIL_STATIC(0x505450u,505);
}
B4f7d47:L4f7d47:{c.instructions+=4;NFSU2_TR(0x4f7d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7d4a:{NFSU2_TR(0x4f7d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d4b:{NFSU2_TR(0x4f7d4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d4c:{NFSU2_TR(0x4f7d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d51ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7d51:L4f7d51:{c.instructions+=4;NFSU2_TR(0x4f7d51);
__builtin_memmove((R+28),(R+0),4);
}
B4f7d53:{NFSU2_TR(0x4f7d53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7d56:{NFSU2_TR(0x4f7d56);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7d58:{NFSU2_TR(0x4f7d58);
if(r1(R+518)){{goto L4f7d77;}}
}
B4f7d5a:L4f7d5a:{c.instructions+=1;NFSU2_TR(0x4f7d5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d5full));
TAIL_STATIC(0x440ec0u,440);
}
B4f7d5f:L4f7d5f:{c.instructions+=2;NFSU2_TR(0x4f7d5f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7d61:{NFSU2_TR(0x4f7d61);
if(r1(R+518)){{goto L4f7d68;}}
}
B4f7d63:L4f7d63:{c.instructions+=2;NFSU2_TR(0x4f7d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d66:{NFSU2_TR(0x4f7d66);
{goto L4f7d6a;}
}
B4f7d68:L4f7d68:{c.instructions+=1;NFSU2_TR(0x4f7d68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7d6a:L4f7d6a:{c.instructions+=5;NFSU2_TR(0x4f7d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7d6d:{NFSU2_TR(0x4f7d6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7d6f:{NFSU2_TR(0x4f7d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d72:{NFSU2_TR(0x4f7d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7d75:{NFSU2_TR(0x4f7d75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7d77:L4f7d77:{c.instructions+=2;NFSU2_TR(0x4f7d77);
u8 U[4];
w4(U+0,u32(0x798bdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d7c:{NFSU2_TR(0x4f7d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d81ull));
TAIL_STATIC(0x505450u,505);
}
B4f7d81:L4f7d81:{c.instructions+=4;NFSU2_TR(0x4f7d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7d84:{NFSU2_TR(0x4f7d84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d85:{NFSU2_TR(0x4f7d85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7d86:{NFSU2_TR(0x4f7d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d8bull));
TAIL_STATIC(0x537a60u,537);
}
B4f7d8b:L4f7d8b:{c.instructions+=4;NFSU2_TR(0x4f7d8b);
__builtin_memmove((R+28),(R+0),4);
}
B4f7d8d:{NFSU2_TR(0x4f7d8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7d90:{NFSU2_TR(0x4f7d90);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7d92:{NFSU2_TR(0x4f7d92);
if(r1(R+518)){{goto L4f7db1;}}
}
B4f7d94:L4f7d94:{c.instructions+=1;NFSU2_TR(0x4f7d94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7d99ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7d99:L4f7d99:{c.instructions+=2;NFSU2_TR(0x4f7d99);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7d9b:{NFSU2_TR(0x4f7d9b);
if(r1(R+518)){{goto L4f7da2;}}
}
B4f7d9d:L4f7d9d:{c.instructions+=2;NFSU2_TR(0x4f7d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7da0:{NFSU2_TR(0x4f7da0);
{goto L4f7da4;}
}
B4f7da2:L4f7da2:{c.instructions+=1;NFSU2_TR(0x4f7da2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7da4:L4f7da4:{c.instructions+=5;NFSU2_TR(0x4f7da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7da7:{NFSU2_TR(0x4f7da7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7da9:{NFSU2_TR(0x4f7da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7dac:{NFSU2_TR(0x4f7dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7daf:{NFSU2_TR(0x4f7daf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7db1:L4f7db1:{c.instructions+=2;NFSU2_TR(0x4f7db1);
u8 U[4];
w4(U+0,u32(0x798bccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7db6:{NFSU2_TR(0x4f7db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7dbbull));
TAIL_STATIC(0x505450u,505);
}
B4f7dbb:L4f7dbb:{c.instructions+=4;NFSU2_TR(0x4f7dbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7dbc:{NFSU2_TR(0x4f7dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7dbf:{NFSU2_TR(0x4f7dbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7dc0:{NFSU2_TR(0x4f7dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7dc5ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7dc5:L4f7dc5:{c.instructions+=4;NFSU2_TR(0x4f7dc5);
__builtin_memmove((R+28),(R+0),4);
}
B4f7dc7:{NFSU2_TR(0x4f7dc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7dca:{NFSU2_TR(0x4f7dca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7dcc:{NFSU2_TR(0x4f7dcc);
if(r1(R+518)){{goto L4f7deb;}}
}
B4f7dce:L4f7dce:{c.instructions+=1;NFSU2_TR(0x4f7dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7dd3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7dd3:L4f7dd3:{c.instructions+=2;NFSU2_TR(0x4f7dd3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7dd5:{NFSU2_TR(0x4f7dd5);
if(r1(R+518)){{goto L4f7ddc;}}
}
B4f7dd7:L4f7dd7:{c.instructions+=2;NFSU2_TR(0x4f7dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7dda:{NFSU2_TR(0x4f7dda);
{goto L4f7dde;}
}
B4f7ddc:L4f7ddc:{c.instructions+=1;NFSU2_TR(0x4f7ddc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7dde:L4f7dde:{c.instructions+=5;NFSU2_TR(0x4f7dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7de1:{NFSU2_TR(0x4f7de1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7de3:{NFSU2_TR(0x4f7de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7de6:{NFSU2_TR(0x4f7de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7de9:{NFSU2_TR(0x4f7de9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7deb:L4f7deb:{c.instructions+=3;NFSU2_TR(0x4f7deb);
u8 U[4];
w4(U+0,u32(0x798bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7df0:{NFSU2_TR(0x4f7df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7df3:{NFSU2_TR(0x4f7df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7df8ull));
TAIL_STATIC(0x505450u,505);
}
B4f7df8:L4f7df8:{c.instructions+=4;NFSU2_TR(0x4f7df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7dfb:{NFSU2_TR(0x4f7dfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7dfc:{NFSU2_TR(0x4f7dfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7dfd:{NFSU2_TR(0x4f7dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e02ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7e02:L4f7e02:{c.instructions+=4;NFSU2_TR(0x4f7e02);
__builtin_memmove((R+28),(R+0),4);
}
B4f7e04:{NFSU2_TR(0x4f7e04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7e07:{NFSU2_TR(0x4f7e07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7e09:{NFSU2_TR(0x4f7e09);
if(r1(R+518)){{goto L4f7e28;}}
}
B4f7e0b:L4f7e0b:{c.instructions+=1;NFSU2_TR(0x4f7e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e10ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7e10:L4f7e10:{c.instructions+=2;NFSU2_TR(0x4f7e10);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7e12:{NFSU2_TR(0x4f7e12);
if(r1(R+518)){{goto L4f7e19;}}
}
B4f7e14:L4f7e14:{c.instructions+=2;NFSU2_TR(0x4f7e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e17:{NFSU2_TR(0x4f7e17);
{goto L4f7e1b;}
}
B4f7e19:L4f7e19:{c.instructions+=1;NFSU2_TR(0x4f7e19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7e1b:L4f7e1b:{c.instructions+=5;NFSU2_TR(0x4f7e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7e1e:{NFSU2_TR(0x4f7e1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7e20:{NFSU2_TR(0x4f7e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e23:{NFSU2_TR(0x4f7e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e26:{NFSU2_TR(0x4f7e26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7e28:L4f7e28:{c.instructions+=3;NFSU2_TR(0x4f7e28);
u8 U[4];
w4(U+0,u32(0x798b94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7e2d:{NFSU2_TR(0x4f7e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e30:{NFSU2_TR(0x4f7e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e35ull));
TAIL_STATIC(0x505450u,505);
}
B4f7e35:L4f7e35:{c.instructions+=4;NFSU2_TR(0x4f7e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7e38:{NFSU2_TR(0x4f7e38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7e39:{NFSU2_TR(0x4f7e39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7e3a:{NFSU2_TR(0x4f7e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e3full));
TAIL_STATIC(0x537a60u,537);
}
B4f7e3f:L4f7e3f:{c.instructions+=4;NFSU2_TR(0x4f7e3f);
__builtin_memmove((R+28),(R+0),4);
}
B4f7e41:{NFSU2_TR(0x4f7e41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7e44:{NFSU2_TR(0x4f7e44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7e46:{NFSU2_TR(0x4f7e46);
if(r1(R+518)){{goto L4f7e65;}}
}
B4f7e48:L4f7e48:{c.instructions+=1;NFSU2_TR(0x4f7e48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e4dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7e4d:L4f7e4d:{c.instructions+=2;NFSU2_TR(0x4f7e4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7e4f:{NFSU2_TR(0x4f7e4f);
if(r1(R+518)){{goto L4f7e56;}}
}
B4f7e51:L4f7e51:{c.instructions+=2;NFSU2_TR(0x4f7e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e54:{NFSU2_TR(0x4f7e54);
{goto L4f7e58;}
}
B4f7e56:L4f7e56:{c.instructions+=1;NFSU2_TR(0x4f7e56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7e58:L4f7e58:{c.instructions+=5;NFSU2_TR(0x4f7e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7e5b:{NFSU2_TR(0x4f7e5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7e5d:{NFSU2_TR(0x4f7e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e60:{NFSU2_TR(0x4f7e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e63:{NFSU2_TR(0x4f7e63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7e65:L4f7e65:{c.instructions+=2;NFSU2_TR(0x4f7e65);
u8 U[4];
w4(U+0,u32(0x798b78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7e6a:{NFSU2_TR(0x4f7e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e6full));
TAIL_STATIC(0x505450u,505);
}
B4f7e6f:L4f7e6f:{c.instructions+=4;NFSU2_TR(0x4f7e6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7e70:{NFSU2_TR(0x4f7e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7e73:{NFSU2_TR(0x4f7e73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7e74:{NFSU2_TR(0x4f7e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e79ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7e79:L4f7e79:{c.instructions+=4;NFSU2_TR(0x4f7e79);
__builtin_memmove((R+28),(R+0),4);
}
B4f7e7b:{NFSU2_TR(0x4f7e7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7e7e:{NFSU2_TR(0x4f7e7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7e80:{NFSU2_TR(0x4f7e80);
if(r1(R+518)){{goto L4f7e9f;}}
}
B4f7e82:L4f7e82:{c.instructions+=1;NFSU2_TR(0x4f7e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7e87ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7e87:L4f7e87:{c.instructions+=2;NFSU2_TR(0x4f7e87);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7e89:{NFSU2_TR(0x4f7e89);
if(r1(R+518)){{goto L4f7e90;}}
}
B4f7e8b:L4f7e8b:{c.instructions+=2;NFSU2_TR(0x4f7e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e8e:{NFSU2_TR(0x4f7e8e);
{goto L4f7e92;}
}
B4f7e90:L4f7e90:{c.instructions+=1;NFSU2_TR(0x4f7e90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7e92:L4f7e92:{c.instructions+=5;NFSU2_TR(0x4f7e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7e95:{NFSU2_TR(0x4f7e95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7e97:{NFSU2_TR(0x4f7e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e9a:{NFSU2_TR(0x4f7e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7e9d:{NFSU2_TR(0x4f7e9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7e9f:L4f7e9f:{c.instructions+=3;NFSU2_TR(0x4f7e9f);
u8 U[4];
w4(U+0,u32(0x798b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ea4:{NFSU2_TR(0x4f7ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ea7:{NFSU2_TR(0x4f7ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7eacull));
TAIL_STATIC(0x505450u,505);
}
B4f7eac:L4f7eac:{c.instructions+=4;NFSU2_TR(0x4f7eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7eaf:{NFSU2_TR(0x4f7eaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7eb0:{NFSU2_TR(0x4f7eb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7eb1:{NFSU2_TR(0x4f7eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7eb6ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7eb6:L4f7eb6:{c.instructions+=4;NFSU2_TR(0x4f7eb6);
__builtin_memmove((R+28),(R+0),4);
}
B4f7eb8:{NFSU2_TR(0x4f7eb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7ebb:{NFSU2_TR(0x4f7ebb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7ebd:{NFSU2_TR(0x4f7ebd);
if(r1(R+518)){{goto L4f7edc;}}
}
B4f7ebf:L4f7ebf:{c.instructions+=1;NFSU2_TR(0x4f7ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ec4ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7ec4:L4f7ec4:{c.instructions+=2;NFSU2_TR(0x4f7ec4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7ec6:{NFSU2_TR(0x4f7ec6);
if(r1(R+518)){{goto L4f7ecd;}}
}
B4f7ec8:L4f7ec8:{c.instructions+=2;NFSU2_TR(0x4f7ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ecb:{NFSU2_TR(0x4f7ecb);
{goto L4f7ecf;}
}
B4f7ecd:L4f7ecd:{c.instructions+=1;NFSU2_TR(0x4f7ecd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7ecf:L4f7ecf:{c.instructions+=5;NFSU2_TR(0x4f7ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7ed2:{NFSU2_TR(0x4f7ed2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7ed4:{NFSU2_TR(0x4f7ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ed7:{NFSU2_TR(0x4f7ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7eda:{NFSU2_TR(0x4f7eda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7edc:L4f7edc:{c.instructions+=3;NFSU2_TR(0x4f7edc);
u8 U[4];
w4(U+0,u32(0x798b48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7ee1:{NFSU2_TR(0x4f7ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ee4:{NFSU2_TR(0x4f7ee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ee9ull));
TAIL_STATIC(0x505450u,505);
}
B4f7ee9:L4f7ee9:{c.instructions+=4;NFSU2_TR(0x4f7ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7eec:{NFSU2_TR(0x4f7eec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7eed:{NFSU2_TR(0x4f7eed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7eee:{NFSU2_TR(0x4f7eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ef3ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7ef3:L4f7ef3:{c.instructions+=4;NFSU2_TR(0x4f7ef3);
__builtin_memmove((R+28),(R+0),4);
}
B4f7ef5:{NFSU2_TR(0x4f7ef5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7ef8:{NFSU2_TR(0x4f7ef8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7efa:{NFSU2_TR(0x4f7efa);
if(r1(R+518)){{goto L4f7f19;}}
}
B4f7efc:L4f7efc:{c.instructions+=1;NFSU2_TR(0x4f7efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7f01ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7f01:L4f7f01:{c.instructions+=2;NFSU2_TR(0x4f7f01);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7f03:{NFSU2_TR(0x4f7f03);
if(r1(R+518)){{goto L4f7f0a;}}
}
B4f7f05:L4f7f05:{c.instructions+=2;NFSU2_TR(0x4f7f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f08:{NFSU2_TR(0x4f7f08);
{goto L4f7f0c;}
}
B4f7f0a:L4f7f0a:{c.instructions+=1;NFSU2_TR(0x4f7f0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7f0c:L4f7f0c:{c.instructions+=5;NFSU2_TR(0x4f7f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7f0f:{NFSU2_TR(0x4f7f0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7f11:{NFSU2_TR(0x4f7f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f14:{NFSU2_TR(0x4f7f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f17:{NFSU2_TR(0x4f7f17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7f19:L4f7f19:{c.instructions+=16;NFSU2_TR(0x4f7f19);
w4(R+0,u32(0xffcaf48aull));
}
B4f7f1e:{NFSU2_TR(0x4f7f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f21:{NFSU2_TR(0x4f7f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f24:{NFSU2_TR(0x4f7f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f27:{NFSU2_TR(0x4f7f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f2a:{NFSU2_TR(0x4f7f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f2d:{NFSU2_TR(0x4f7f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0xffcf3030ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f34:{NFSU2_TR(0x4f7f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f3b:{NFSU2_TR(0x4f7f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f3e:{NFSU2_TR(0x4f7f3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f7f41:{NFSU2_TR(0x4f7f41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f7f45:{NFSU2_TR(0x4f7f45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f7f48:{NFSU2_TR(0x4f7f48);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f7f4e:{NFSU2_TR(0x4f7f4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7f4f:{NFSU2_TR(0x4f7f4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f7f53:{NFSU2_TR(0x4f7f53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f7f61;}}
}
B4f7f55:L4f7f55:{c.instructions+=2;NFSU2_TR(0x4f7f55);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7f5b:{NFSU2_TR(0x4f7f5b);
if(r1(R+518)){TAIL_STATIC(0x4f8014u,4f8);}
}
B4f7f61:L4f7f61:{c.instructions+=2;NFSU2_TR(0x4f7f61);
u8 U[4];
w4(U+0,u32(0x798b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7f66:{NFSU2_TR(0x4f7f66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7f6bull));
TAIL_STATIC(0x505450u,505);
}
B4f7f6b:L4f7f6b:{c.instructions+=4;NFSU2_TR(0x4f7f6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7f6c:{NFSU2_TR(0x4f7f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f7f6f:{NFSU2_TR(0x4f7f6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7f70:{NFSU2_TR(0x4f7f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7f75ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7f75:L4f7f75:{c.instructions+=4;NFSU2_TR(0x4f7f75);
__builtin_memmove((R+28),(R+0),4);
}
B4f7f77:{NFSU2_TR(0x4f7f77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7f7a:{NFSU2_TR(0x4f7f7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7f7c:{NFSU2_TR(0x4f7f7c);
if(r1(R+518)){{goto L4f7f9b;}}
}
B4f7f7e:L4f7f7e:{c.instructions+=1;NFSU2_TR(0x4f7f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7f83ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7f83:L4f7f83:{c.instructions+=2;NFSU2_TR(0x4f7f83);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7f85:{NFSU2_TR(0x4f7f85);
if(r1(R+518)){{goto L4f7f8c;}}
}
B4f7f87:L4f7f87:{c.instructions+=2;NFSU2_TR(0x4f7f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f8a:{NFSU2_TR(0x4f7f8a);
{goto L4f7f8e;}
}
B4f7f8c:L4f7f8c:{c.instructions+=1;NFSU2_TR(0x4f7f8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7f8e:L4f7f8e:{c.instructions+=5;NFSU2_TR(0x4f7f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7f91:{NFSU2_TR(0x4f7f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7f93:{NFSU2_TR(0x4f7f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f96:{NFSU2_TR(0x4f7f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7f99:{NFSU2_TR(0x4f7f99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7f9b:L4f7f9b:{c.instructions+=2;NFSU2_TR(0x4f7f9b);
u8 U[4];
w4(U+0,u32(0x7986b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7fa0:{NFSU2_TR(0x4f7fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7fa5ull));
TAIL_STATIC(0x505450u,505);
}
B4f7fa5:L4f7fa5:{c.instructions+=4;NFSU2_TR(0x4f7fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7fa8:{NFSU2_TR(0x4f7fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7fa9:{NFSU2_TR(0x4f7fa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7faa:{NFSU2_TR(0x4f7faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7fafull));
TAIL_STATIC(0x5379c0u,537);
}
B4f7faf:L4f7faf:{c.instructions+=4;NFSU2_TR(0x4f7faf);
__builtin_memmove((R+28),(R+0),4);
}
B4f7fb1:{NFSU2_TR(0x4f7fb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7fb4:{NFSU2_TR(0x4f7fb4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7fb6:{NFSU2_TR(0x4f7fb6);
if(r1(R+518)){{goto L4f7fd5;}}
}
B4f7fb8:L4f7fb8:{c.instructions+=1;NFSU2_TR(0x4f7fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7fbdull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7fbd:L4f7fbd:{c.instructions+=2;NFSU2_TR(0x4f7fbd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7fbf:{NFSU2_TR(0x4f7fbf);
if(r1(R+518)){{goto L4f7fc6;}}
}
B4f7fc1:L4f7fc1:{c.instructions+=2;NFSU2_TR(0x4f7fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7fc4:{NFSU2_TR(0x4f7fc4);
{goto L4f7fc8;}
}
B4f7fc6:L4f7fc6:{c.instructions+=1;NFSU2_TR(0x4f7fc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f7fc8:L4f7fc8:{c.instructions+=5;NFSU2_TR(0x4f7fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f7fcb:{NFSU2_TR(0x4f7fcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f7fcd:{NFSU2_TR(0x4f7fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7fd0:{NFSU2_TR(0x4f7fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7fd3:{NFSU2_TR(0x4f7fd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f7fd5:L4f7fd5:{c.instructions+=2;NFSU2_TR(0x4f7fd5);
u8 U[4];
w4(U+0,u32(0x798b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7fda:{NFSU2_TR(0x4f7fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7fdfull));
TAIL_STATIC(0x505450u,505);
}
B4f7fdf:L4f7fdf:{c.instructions+=4;NFSU2_TR(0x4f7fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f7fe2:{NFSU2_TR(0x4f7fe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7fe3:{NFSU2_TR(0x4f7fe3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f7fe4:{NFSU2_TR(0x4f7fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7fe9ull));
TAIL_STATIC(0x537a10u,537);
}
B4f7fe9:L4f7fe9:{c.instructions+=4;NFSU2_TR(0x4f7fe9);
__builtin_memmove((R+28),(R+0),4);
}
B4f7feb:{NFSU2_TR(0x4f7feb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f7fee:{NFSU2_TR(0x4f7fee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7ff0:{NFSU2_TR(0x4f7ff0);
if(r1(R+518)){TAIL_STATIC(0x4f800fu,4f8);}
}
B4f7ff2:L4f7ff2:{c.instructions+=1;NFSU2_TR(0x4f7ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f7ff7ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f7ff7:L4f7ff7:{c.instructions+=2;NFSU2_TR(0x4f7ff7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f7ff9:{NFSU2_TR(0x4f7ff9);
if(r1(R+518)){TAIL_STATIC(0x4f8000u,4f8);}
}
B4f7ffb:L4f7ffb:{c.instructions+=2;NFSU2_TR(0x4f7ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f7ffe:{NFSU2_TR(0x4f7ffe);
TAIL_STATIC(0x4f8002u,4f8);
}
XIT:NFSU2_TR_EXIT(0x4f7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
