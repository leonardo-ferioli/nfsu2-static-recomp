#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4aa(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4c8(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c7(u8* __restrict R,Cpu& c);
u32 page_4c7(Cpu& c){return body_4c7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c7000:goto L4c7000;
case 0x4c7002:goto L4c7002;
case 0x4c7006:c.instructions+=4;goto B4c7006;
case 0x4c7009:c.instructions+=3;goto B4c7009;
case 0x4c700f:c.instructions+=2;goto B4c700f;
case 0x4c7015:c.instructions+=1;goto B4c7015;
case 0x4c701a:goto L4c701a;
case 0x4c701b:c.instructions+=1;goto B4c701b;
case 0x4c701d:goto L4c701d;
case 0x4c7023:c.instructions+=1;goto B4c7023;
case 0x4c7024:goto L4c7024;
case 0x4c7026:c.instructions+=2;goto B4c7026;
case 0x4c7027:c.instructions+=1;goto B4c7027;
case 0x4c702c:goto L4c702c;
case 0x4c702f:c.instructions+=2;goto B4c702f;
case 0x4c7031:c.instructions+=1;goto B4c7031;
case 0x4c7036:goto L4c7036;
case 0x4c7038:c.instructions+=1;goto B4c7038;
case 0x4c703a:goto L4c703a;
case 0x4c703e:c.instructions+=6;goto B4c703e;
case 0x4c703f:c.instructions+=5;goto B4c703f;
case 0x4c7040:c.instructions+=4;goto B4c7040;
case 0x4c7043:c.instructions+=3;goto B4c7043;
case 0x4c7044:c.instructions+=2;goto B4c7044;
case 0x4c704a:c.instructions+=1;goto B4c704a;
case 0x4c704f:goto L4c704f;
case 0x4c7051:goto L4c7051;
case 0x4c7058:goto L4c7058;
case 0x4c705d:c.instructions+=7;goto B4c705d;
case 0x4c7063:c.instructions+=6;goto B4c7063;
case 0x4c7066:c.instructions+=5;goto B4c7066;
case 0x4c7067:c.instructions+=4;goto B4c7067;
case 0x4c706a:c.instructions+=3;goto B4c706a;
case 0x4c706d:c.instructions+=2;goto B4c706d;
case 0x4c706f:c.instructions+=1;goto B4c706f;
case 0x4c7075:goto L4c7075;
case 0x4c7079:c.instructions+=7;goto B4c7079;
case 0x4c707a:c.instructions+=6;goto B4c707a;
case 0x4c707b:c.instructions+=5;goto B4c707b;
case 0x4c707c:c.instructions+=4;goto B4c707c;
case 0x4c7080:c.instructions+=3;goto B4c7080;
case 0x4c7081:c.instructions+=2;goto B4c7081;
case 0x4c7083:c.instructions+=1;goto B4c7083;
case 0x4c7088:goto L4c7088;
case 0x4c7089:c.instructions+=2;goto B4c7089;
case 0x4c708c:c.instructions+=1;goto B4c708c;
case 0x4c7090:goto L4c7090;
case 0x4c7093:c.instructions+=10;goto B4c7093;
case 0x4c7097:c.instructions+=9;goto B4c7097;
case 0x4c7098:c.instructions+=8;goto B4c7098;
case 0x4c7099:c.instructions+=7;goto B4c7099;
case 0x4c709c:c.instructions+=6;goto B4c709c;
case 0x4c709e:c.instructions+=5;goto B4c709e;
case 0x4c70a4:c.instructions+=4;goto B4c70a4;
case 0x4c70aa:c.instructions+=3;goto B4c70aa;
case 0x4c70ac:c.instructions+=2;goto B4c70ac;
case 0x4c70b0:c.instructions+=1;goto B4c70b0;
case 0x4c70b5:goto L4c70b5;
case 0x4c70b7:c.instructions+=1;goto B4c70b7;
case 0x4c70b9:goto L4c70b9;
case 0x4c70bf:c.instructions+=2;goto B4c70bf;
case 0x4c70c1:c.instructions+=1;goto B4c70c1;
case 0x4c70c3:goto L4c70c3;
case 0x4c70c5:c.instructions+=1;goto B4c70c5;
case 0x4c70ca:goto L4c70ca;
case 0x4c70d0:c.instructions+=2;goto B4c70d0;
case 0x4c70d7:c.instructions+=1;goto B4c70d7;
case 0x4c70d9:goto L4c70d9;
case 0x4c70e0:goto L4c70e0;
case 0x4c70e3:c.instructions+=2;goto B4c70e3;
case 0x4c70e7:c.instructions+=1;goto B4c70e7;
case 0x4c70e9:goto L4c70e9;
case 0x4c70ef:c.instructions+=2;goto B4c70ef;
case 0x4c70f1:c.instructions+=1;goto B4c70f1;
case 0x4c70f3:goto L4c70f3;
case 0x4c70f9:c.instructions+=2;goto B4c70f9;
case 0x4c70fb:c.instructions+=1;goto B4c70fb;
case 0x4c70fd:goto L4c70fd;
case 0x4c7103:c.instructions+=2;goto B4c7103;
case 0x4c7105:c.instructions+=1;goto B4c7105;
case 0x4c7107:goto L4c7107;
case 0x4c710d:c.instructions+=2;goto B4c710d;
case 0x4c710f:c.instructions+=1;goto B4c710f;
case 0x4c7111:goto L4c7111;
case 0x4c7114:c.instructions+=2;goto B4c7114;
case 0x4c7118:c.instructions+=1;goto B4c7118;
case 0x4c711a:goto L4c711a;
case 0x4c7120:c.instructions+=4;goto B4c7120;
case 0x4c7126:c.instructions+=3;goto B4c7126;
case 0x4c7128:c.instructions+=2;goto B4c7128;
case 0x4c712b:c.instructions+=1;goto B4c712b;
case 0x4c712d:goto L4c712d;
case 0x4c7132:c.instructions+=2;goto B4c7132;
case 0x4c7136:c.instructions+=1;goto B4c7136;
case 0x4c7138:goto L4c7138;
case 0x4c713e:c.instructions+=1;goto B4c713e;
case 0x4c7142:goto L4c7142;
case 0x4c7145:c.instructions+=7;goto B4c7145;
case 0x4c7148:c.instructions+=6;goto B4c7148;
case 0x4c714b:c.instructions+=5;goto B4c714b;
case 0x4c714c:c.instructions+=4;goto B4c714c;
case 0x4c714f:c.instructions+=3;goto B4c714f;
case 0x4c7151:c.instructions+=2;goto B4c7151;
case 0x4c7153:c.instructions+=1;goto B4c7153;
case 0x4c7159:goto L4c7159;
case 0x4c715e:c.instructions+=5;goto B4c715e;
case 0x4c7162:c.instructions+=4;goto B4c7162;
case 0x4c7168:c.instructions+=3;goto B4c7168;
case 0x4c716a:c.instructions+=2;goto B4c716a;
case 0x4c716f:c.instructions+=1;goto B4c716f;
case 0x4c7171:goto L4c7171;
case 0x4c7173:c.instructions+=3;goto B4c7173;
case 0x4c7179:c.instructions+=2;goto B4c7179;
case 0x4c717d:c.instructions+=1;goto B4c717d;
case 0x4c717f:goto L4c717f;
case 0x4c7184:c.instructions+=1;goto B4c7184;
case 0x4c7189:goto L4c7189;
case 0x4c718c:c.instructions+=3;goto B4c718c;
case 0x4c718d:c.instructions+=2;goto B4c718d;
case 0x4c718e:c.instructions+=1;goto B4c718e;
case 0x4c7190:goto L4c7190;
case 0x4c7192:c.instructions+=3;goto B4c7192;
case 0x4c7198:c.instructions+=2;goto B4c7198;
case 0x4c719c:c.instructions+=1;goto B4c719c;
case 0x4c719e:goto L4c719e;
case 0x4c71a3:c.instructions+=1;goto B4c71a3;
case 0x4c71a8:goto L4c71a8;
case 0x4c71a9:c.instructions+=2;goto B4c71a9;
case 0x4c71ac:c.instructions+=1;goto B4c71ac;
case 0x4c71ad:goto L4c71ad;
case 0x4c71b2:goto L4c71b2;
case 0x4c71b7:c.instructions+=3;goto B4c71b7;
case 0x4c71ba:c.instructions+=2;goto B4c71ba;
case 0x4c71bc:c.instructions+=1;goto B4c71bc;
case 0x4c71be:goto L4c71be;
case 0x4c71c2:c.instructions+=1;goto B4c71c2;
case 0x4c71c7:goto L4c71c7;
case 0x4c71ca:c.instructions+=4;goto B4c71ca;
case 0x4c71cb:c.instructions+=3;goto B4c71cb;
case 0x4c71d0:c.instructions+=2;goto B4c71d0;
case 0x4c71d1:c.instructions+=1;goto B4c71d1;
case 0x4c71d6:goto L4c71d6;
case 0x4c71d9:c.instructions+=1;goto B4c71d9;
case 0x4c71db:goto L4c71db;
case 0x4c71de:c.instructions+=2;goto B4c71de;
case 0x4c71df:c.instructions+=1;goto B4c71df;
case 0x4c71e4:goto L4c71e4;
case 0x4c71e7:c.instructions+=2;goto B4c71e7;
case 0x4c71e8:c.instructions+=1;goto B4c71e8;
case 0x4c71ed:goto L4c71ed;
case 0x4c71f0:goto L4c71f0;
case 0x4c71f3:c.instructions+=5;goto B4c71f3;
case 0x4c71f9:c.instructions+=4;goto B4c71f9;
case 0x4c71fe:c.instructions+=3;goto B4c71fe;
case 0x4c7201:c.instructions+=2;goto B4c7201;
case 0x4c7202:c.instructions+=1;goto B4c7202;
case 0x4c7204:goto L4c7204;
case 0x4c7207:c.instructions+=7;goto B4c7207;
case 0x4c720b:c.instructions+=6;goto B4c720b;
case 0x4c7211:c.instructions+=5;goto B4c7211;
case 0x4c7212:c.instructions+=4;goto B4c7212;
case 0x4c7213:c.instructions+=3;goto B4c7213;
case 0x4c7214:c.instructions+=2;goto B4c7214;
case 0x4c7216:c.instructions+=1;goto B4c7216;
case 0x4c721b:goto L4c721b;
case 0x4c721e:c.instructions+=4;goto B4c721e;
case 0x4c721f:c.instructions+=3;goto B4c721f;
case 0x4c7222:c.instructions+=2;goto B4c7222;
case 0x4c7223:c.instructions+=1;goto B4c7223;
case 0x4c7228:goto L4c7228;
case 0x4c722b:c.instructions+=1;goto B4c722b;
case 0x4c722d:goto L4c722d;
case 0x4c7231:c.instructions+=3;goto B4c7231;
case 0x4c7234:c.instructions+=2;goto B4c7234;
case 0x4c723a:c.instructions+=1;goto B4c723a;
case 0x4c723f:goto L4c723f;
case 0x4c7241:c.instructions+=2;goto B4c7241;
case 0x4c7243:c.instructions+=1;goto B4c7243;
case 0x4c7246:goto L4c7246;
case 0x4c7248:c.instructions+=2;goto B4c7248;
case 0x4c724b:c.instructions+=1;goto B4c724b;
case 0x4c724d:goto L4c724d;
case 0x4c7250:c.instructions+=1;goto B4c7250;
case 0x4c7252:goto L4c7252;
case 0x4c7257:c.instructions+=1;goto B4c7257;
case 0x4c7259:goto L4c7259;
case 0x4c725c:c.instructions+=3;goto B4c725c;
case 0x4c7261:c.instructions+=2;goto B4c7261;
case 0x4c7262:c.instructions+=1;goto B4c7262;
case 0x4c7264:goto L4c7264;
case 0x4c7267:c.instructions+=1;goto B4c7267;
case 0x4c7269:goto L4c7269;
case 0x4c726c:c.instructions+=3;goto B4c726c;
case 0x4c7271:c.instructions+=2;goto B4c7271;
case 0x4c7272:c.instructions+=1;goto B4c7272;
case 0x4c7274:goto L4c7274;
case 0x4c7279:goto L4c7279;
case 0x4c727c:c.instructions+=1;goto B4c727c;
case 0x4c727d:goto L4c727d;
case 0x4c7282:goto L4c7282;
case 0x4c7284:c.instructions+=4;goto B4c7284;
case 0x4c7287:c.instructions+=3;goto B4c7287;
case 0x4c728a:c.instructions+=2;goto B4c728a;
case 0x4c728d:c.instructions+=1;goto B4c728d;
case 0x4c728f:goto L4c728f;
case 0x4c7293:c.instructions+=3;goto B4c7293;
case 0x4c7296:c.instructions+=2;goto B4c7296;
case 0x4c7298:c.instructions+=1;goto B4c7298;
case 0x4c729d:goto L4c729d;
case 0x4c72a1:c.instructions+=4;goto B4c72a1;
case 0x4c72a7:c.instructions+=3;goto B4c72a7;
case 0x4c72a9:c.instructions+=2;goto B4c72a9;
case 0x4c72ac:c.instructions+=1;goto B4c72ac;
case 0x4c72ae:goto L4c72ae;
case 0x4c72b4:c.instructions+=2;goto B4c72b4;
case 0x4c72b6:c.instructions+=1;goto B4c72b6;
case 0x4c72b8:goto L4c72b8;
case 0x4c72bc:c.instructions+=4;goto B4c72bc;
case 0x4c72c2:c.instructions+=3;goto B4c72c2;
case 0x4c72c4:c.instructions+=2;goto B4c72c4;
case 0x4c72c7:c.instructions+=1;goto B4c72c7;
case 0x4c72c9:goto L4c72c9;
case 0x4c72cf:c.instructions+=2;goto B4c72cf;
case 0x4c72d1:c.instructions+=1;goto B4c72d1;
case 0x4c72d3:goto L4c72d3;
case 0x4c72d9:c.instructions+=2;goto B4c72d9;
case 0x4c72df:c.instructions+=1;goto B4c72df;
case 0x4c72e6:goto L4c72e6;
case 0x4c72ec:c.instructions+=2;goto B4c72ec;
case 0x4c72ee:c.instructions+=1;goto B4c72ee;
case 0x4c72f0:goto L4c72f0;
case 0x4c72f3:c.instructions+=5;goto B4c72f3;
case 0x4c72f8:c.instructions+=4;goto B4c72f8;
case 0x4c72f9:c.instructions+=3;goto B4c72f9;
case 0x4c72fe:c.instructions+=2;goto B4c72fe;
case 0x4c72ff:c.instructions+=1;goto B4c72ff;
case 0x4c7304:goto L4c7304;
case 0x4c7307:c.instructions+=2;goto B4c7307;
case 0x4c730e:c.instructions+=1;goto B4c730e;
case 0x4c7310:goto L4c7310;
case 0x4c7316:c.instructions+=2;goto B4c7316;
case 0x4c7318:c.instructions+=1;goto B4c7318;
case 0x4c731a:goto L4c731a;
case 0x4c731d:c.instructions+=5;goto B4c731d;
case 0x4c7322:c.instructions+=4;goto B4c7322;
case 0x4c7323:c.instructions+=3;goto B4c7323;
case 0x4c7328:c.instructions+=2;goto B4c7328;
case 0x4c7329:c.instructions+=1;goto B4c7329;
case 0x4c732e:goto L4c732e;
case 0x4c7331:c.instructions+=3;goto B4c7331;
case 0x4c7338:c.instructions+=2;goto B4c7338;
case 0x4c733f:c.instructions+=1;goto B4c733f;
case 0x4c7341:goto L4c7341;
case 0x4c7346:goto L4c7346;
case 0x4c7349:c.instructions+=2;goto B4c7349;
case 0x4c734b:c.instructions+=1;goto B4c734b;
case 0x4c734d:goto L4c734d;
case 0x4c7353:c.instructions+=3;goto B4c7353;
case 0x4c7359:c.instructions+=2;goto B4c7359;
case 0x4c735b:c.instructions+=1;goto B4c735b;
case 0x4c7360:goto L4c7360;
case 0x4c7368:c.instructions+=2;goto B4c7368;
case 0x4c736a:c.instructions+=1;goto B4c736a;
case 0x4c736c:goto L4c736c;
case 0x4c736d:c.instructions+=2;goto B4c736d;
case 0x4c7370:c.instructions+=1;goto B4c7370;
case 0x4c7372:goto L4c7372;
case 0x4c7374:goto L4c7374;
case 0x4c7377:c.instructions+=4;goto B4c7377;
case 0x4c7378:c.instructions+=3;goto B4c7378;
case 0x4c737d:c.instructions+=2;goto B4c737d;
case 0x4c737e:c.instructions+=1;goto B4c737e;
case 0x4c7383:goto L4c7383;
case 0x4c7386:c.instructions+=2;goto B4c7386;
case 0x4c7388:c.instructions+=1;goto B4c7388;
case 0x4c738a:goto L4c738a;
case 0x4c7390:c.instructions+=4;goto B4c7390;
case 0x4c7393:c.instructions+=3;goto B4c7393;
case 0x4c7394:c.instructions+=2;goto B4c7394;
case 0x4c7395:c.instructions+=1;goto B4c7395;
case 0x4c7397:goto L4c7397;
case 0x4c739e:c.instructions+=1;goto B4c739e;
case 0x4c73a0:goto L4c73a0;
case 0x4c73a3:c.instructions+=2;goto B4c73a3;
case 0x4c73a8:c.instructions+=1;goto B4c73a8;
case 0x4c73a9:goto L4c73a9;
case 0x4c73ae:goto L4c73ae;
case 0x4c73b1:c.instructions+=1;goto B4c73b1;
case 0x4c73b6:goto L4c73b6;
case 0x4c73ba:c.instructions+=4;goto B4c73ba;
case 0x4c73c0:c.instructions+=3;goto B4c73c0;
case 0x4c73c2:c.instructions+=2;goto B4c73c2;
case 0x4c73c5:c.instructions+=1;goto B4c73c5;
case 0x4c73cb:goto L4c73cb;
case 0x4c73cf:c.instructions+=4;goto B4c73cf;
case 0x4c73d5:c.instructions+=3;goto B4c73d5;
case 0x4c73d7:c.instructions+=2;goto B4c73d7;
case 0x4c73da:c.instructions+=1;goto B4c73da;
case 0x4c73e0:goto L4c73e0;
case 0x4c73e6:c.instructions+=2;goto B4c73e6;
case 0x4c73e8:c.instructions+=1;goto B4c73e8;
case 0x4c73ee:goto L4c73ee;
case 0x4c73f4:c.instructions+=2;goto B4c73f4;
case 0x4c73fa:c.instructions+=1;goto B4c73fa;
case 0x4c7400:goto L4c7400;
case 0x4c7404:c.instructions+=4;goto B4c7404;
case 0x4c740a:c.instructions+=3;goto B4c740a;
case 0x4c740c:c.instructions+=2;goto B4c740c;
case 0x4c740f:c.instructions+=1;goto B4c740f;
case 0x4c7411:goto L4c7411;
case 0x4c7414:c.instructions+=3;goto B4c7414;
case 0x4c7419:c.instructions+=2;goto B4c7419;
case 0x4c741a:c.instructions+=1;goto B4c741a;
case 0x4c741f:goto L4c741f;
case 0x4c7422:c.instructions+=1;goto B4c7422;
case 0x4c7424:goto L4c7424;
case 0x4c7427:c.instructions+=3;goto B4c7427;
case 0x4c742c:c.instructions+=2;goto B4c742c;
case 0x4c742d:c.instructions+=1;goto B4c742d;
case 0x4c7432:goto L4c7432;
case 0x4c7435:c.instructions+=2;goto B4c7435;
case 0x4c743a:c.instructions+=1;goto B4c743a;
case 0x4c743f:goto L4c743f;
case 0x4c7441:c.instructions+=1;goto B4c7441;
case 0x4c7443:goto L4c7443;
case 0x4c7448:c.instructions+=2;goto B4c7448;
case 0x4c744a:c.instructions+=1;goto B4c744a;
case 0x4c744c:goto L4c744c;
case 0x4c744f:c.instructions+=1;goto B4c744f;
case 0x4c7451:goto L4c7451;
case 0x4c7457:c.instructions+=2;goto B4c7457;
case 0x4c7459:c.instructions+=1;goto B4c7459;
case 0x4c745b:goto L4c745b;
case 0x4c7461:c.instructions+=1;goto B4c7461;
case 0x4c7463:goto L4c7463;
case 0x4c746a:c.instructions+=1;goto B4c746a;
case 0x4c746c:goto L4c746c;
case 0x4c7473:goto L4c7473;
case 0x4c7476:c.instructions+=4;goto B4c7476;
case 0x4c7477:c.instructions+=3;goto B4c7477;
case 0x4c747c:c.instructions+=2;goto B4c747c;
case 0x4c747d:c.instructions+=1;goto B4c747d;
case 0x4c7482:goto L4c7482;
case 0x4c7485:c.instructions+=2;goto B4c7485;
case 0x4c7486:c.instructions+=1;goto B4c7486;
case 0x4c748b:goto L4c748b;
case 0x4c748e:c.instructions+=1;goto B4c748e;
case 0x4c7495:goto L4c7495;
case 0x4c7499:goto L4c7499;
case 0x4c749b:c.instructions+=1;goto B4c749b;
case 0x4c74a0:goto L4c74a0;
case 0x4c74a2:c.instructions+=2;goto B4c74a2;
case 0x4c74a8:c.instructions+=1;goto B4c74a8;
case 0x4c74ae:goto L4c74ae;
case 0x4c74b0:c.instructions+=1;goto B4c74b0;
case 0x4c74b6:goto L4c74b6;
case 0x4c74b9:c.instructions+=3;goto B4c74b9;
case 0x4c74be:c.instructions+=2;goto B4c74be;
case 0x4c74bf:c.instructions+=1;goto B4c74bf;
case 0x4c74c4:goto L4c74c4;
case 0x4c74c7:c.instructions+=4;goto B4c74c7;
case 0x4c74c8:c.instructions+=3;goto B4c74c8;
case 0x4c74cd:c.instructions+=2;goto B4c74cd;
case 0x4c74ce:c.instructions+=1;goto B4c74ce;
case 0x4c74d3:goto L4c74d3;
case 0x4c74d6:c.instructions+=2;goto B4c74d6;
case 0x4c74d7:c.instructions+=1;goto B4c74d7;
case 0x4c74dc:goto L4c74dc;
case 0x4c74df:c.instructions+=3;goto B4c74df;
case 0x4c74e4:c.instructions+=2;goto B4c74e4;
case 0x4c74eb:c.instructions+=1;goto B4c74eb;
case 0x4c74f0:goto L4c74f0;
case 0x4c74f2:c.instructions+=1;goto B4c74f2;
case 0x4c74f8:goto L4c74f8;
case 0x4c74fd:c.instructions+=2;goto B4c74fd;
case 0x4c74ff:c.instructions+=1;goto B4c74ff;
case 0x4c7505:goto L4c7505;
case 0x4c7508:c.instructions+=1;goto B4c7508;
case 0x4c750e:goto L4c750e;
case 0x4c7514:c.instructions+=2;goto B4c7514;
case 0x4c7516:c.instructions+=1;goto B4c7516;
case 0x4c751c:goto L4c751c;
case 0x4c7522:c.instructions+=1;goto B4c7522;
case 0x4c7528:goto L4c7528;
case 0x4c752f:c.instructions+=1;goto B4c752f;
case 0x4c7535:goto L4c7535;
case 0x4c753c:c.instructions+=1;goto B4c753c;
case 0x4c7541:goto L4c7541;
case 0x4c7547:c.instructions+=2;goto B4c7547;
case 0x4c7549:c.instructions+=1;goto B4c7549;
case 0x4c754f:goto L4c754f;
case 0x4c7552:c.instructions+=3;goto B4c7552;
case 0x4c7557:c.instructions+=2;goto B4c7557;
case 0x4c7558:c.instructions+=1;goto B4c7558;
case 0x4c755d:goto L4c755d;
case 0x4c7560:c.instructions+=2;goto B4c7560;
case 0x4c7562:c.instructions+=1;goto B4c7562;
case 0x4c7568:goto L4c7568;
case 0x4c756c:c.instructions+=3;goto B4c756c;
case 0x4c756f:c.instructions+=2;goto B4c756f;
case 0x4c7572:c.instructions+=1;goto B4c7572;
case 0x4c7574:goto L4c7574;
case 0x4c7577:c.instructions+=1;goto B4c7577;
case 0x4c7579:goto L4c7579;
case 0x4c7580:goto L4c7580;
case 0x4c7583:c.instructions+=2;goto B4c7583;
case 0x4c7584:c.instructions+=1;goto B4c7584;
case 0x4c7589:goto L4c7589;
case 0x4c758c:c.instructions+=1;goto B4c758c;
case 0x4c7591:goto L4c7591;
case 0x4c7593:c.instructions+=1;goto B4c7593;
case 0x4c7595:goto L4c7595;
case 0x4c7598:c.instructions+=3;goto B4c7598;
case 0x4c759d:c.instructions+=2;goto B4c759d;
case 0x4c759e:c.instructions+=1;goto B4c759e;
case 0x4c75a3:goto L4c75a3;
case 0x4c75a6:c.instructions+=2;goto B4c75a6;
case 0x4c75a8:c.instructions+=1;goto B4c75a8;
case 0x4c75aa:goto L4c75aa;
case 0x4c75ad:c.instructions+=2;goto B4c75ad;
case 0x4c75b0:c.instructions+=1;goto B4c75b0;
case 0x4c75b2:goto L4c75b2;
case 0x4c75b5:c.instructions+=1;goto B4c75b5;
case 0x4c75b7:goto L4c75b7;
case 0x4c75be:goto L4c75be;
case 0x4c75c1:c.instructions+=2;goto B4c75c1;
case 0x4c75c2:c.instructions+=1;goto B4c75c2;
case 0x4c75c7:goto L4c75c7;
case 0x4c75ca:goto L4c75ca;
case 0x4c75d0:c.instructions+=2;goto B4c75d0;
case 0x4c75d3:c.instructions+=1;goto B4c75d3;
case 0x4c75d9:goto L4c75d9;
case 0x4c75df:c.instructions+=2;goto B4c75df;
case 0x4c75e5:c.instructions+=1;goto B4c75e5;
case 0x4c75eb:goto L4c75eb;
case 0x4c75ed:c.instructions+=1;goto B4c75ed;
case 0x4c75f3:goto L4c75f3;
case 0x4c75f9:c.instructions+=2;goto B4c75f9;
case 0x4c75fb:c.instructions+=1;goto B4c75fb;
case 0x4c7601:goto L4c7601;
case 0x4c7607:c.instructions+=2;goto B4c7607;
case 0x4c7609:c.instructions+=1;goto B4c7609;
case 0x4c760f:goto L4c760f;
case 0x4c7613:c.instructions+=4;goto B4c7613;
case 0x4c7619:c.instructions+=3;goto B4c7619;
case 0x4c761b:c.instructions+=2;goto B4c761b;
case 0x4c761e:c.instructions+=1;goto B4c761e;
case 0x4c7620:goto L4c7620;
case 0x4c7626:c.instructions+=2;goto B4c7626;
case 0x4c7628:c.instructions+=1;goto B4c7628;
case 0x4c762a:goto L4c762a;
case 0x4c762d:c.instructions+=3;goto B4c762d;
case 0x4c7632:c.instructions+=2;goto B4c7632;
case 0x4c7633:c.instructions+=1;goto B4c7633;
case 0x4c7638:goto L4c7638;
case 0x4c763b:c.instructions+=4;goto B4c763b;
case 0x4c763c:c.instructions+=3;goto B4c763c;
case 0x4c7641:c.instructions+=2;goto B4c7641;
case 0x4c7642:c.instructions+=1;goto B4c7642;
case 0x4c7647:goto L4c7647;
case 0x4c764a:c.instructions+=2;goto B4c764a;
case 0x4c764b:c.instructions+=1;goto B4c764b;
case 0x4c7650:goto L4c7650;
case 0x4c7657:c.instructions+=1;goto B4c7657;
case 0x4c7659:goto L4c7659;
case 0x4c765d:c.instructions+=4;goto B4c765d;
case 0x4c7663:c.instructions+=3;goto B4c7663;
case 0x4c7665:c.instructions+=2;goto B4c7665;
case 0x4c7668:c.instructions+=1;goto B4c7668;
case 0x4c766a:goto L4c766a;
case 0x4c7670:c.instructions+=2;goto B4c7670;
case 0x4c7672:c.instructions+=1;goto B4c7672;
case 0x4c7674:goto L4c7674;
case 0x4c7677:c.instructions+=3;goto B4c7677;
case 0x4c767c:c.instructions+=2;goto B4c767c;
case 0x4c767d:c.instructions+=1;goto B4c767d;
case 0x4c7682:goto L4c7682;
case 0x4c7685:c.instructions+=4;goto B4c7685;
case 0x4c7686:c.instructions+=3;goto B4c7686;
case 0x4c768b:c.instructions+=2;goto B4c768b;
case 0x4c768c:c.instructions+=1;goto B4c768c;
case 0x4c7691:goto L4c7691;
case 0x4c7694:c.instructions+=2;goto B4c7694;
case 0x4c7695:c.instructions+=1;goto B4c7695;
case 0x4c769a:goto L4c769a;
case 0x4c76a1:goto L4c76a1;
case 0x4c76a4:goto L4c76a4;
case 0x4c76a9:c.instructions+=1;goto B4c76a9;
case 0x4c76ae:goto L4c76ae;
case 0x4c76b0:c.instructions+=1;goto B4c76b0;
case 0x4c76b6:goto L4c76b6;
case 0x4c76bb:c.instructions+=2;goto B4c76bb;
case 0x4c76bd:c.instructions+=1;goto B4c76bd;
case 0x4c76c3:goto L4c76c3;
case 0x4c76c6:c.instructions+=1;goto B4c76c6;
case 0x4c76cc:goto L4c76cc;
case 0x4c76d2:c.instructions+=2;goto B4c76d2;
case 0x4c76d4:c.instructions+=1;goto B4c76d4;
case 0x4c76da:goto L4c76da;
case 0x4c76e0:c.instructions+=1;goto B4c76e0;
case 0x4c76e6:goto L4c76e6;
case 0x4c76ed:c.instructions+=1;goto B4c76ed;
case 0x4c76f3:goto L4c76f3;
case 0x4c76fa:c.instructions+=1;goto B4c76fa;
case 0x4c76ff:goto L4c76ff;
case 0x4c7705:c.instructions+=2;goto B4c7705;
case 0x4c7707:c.instructions+=1;goto B4c7707;
case 0x4c7709:goto L4c7709;
case 0x4c770c:c.instructions+=3;goto B4c770c;
case 0x4c7711:c.instructions+=2;goto B4c7711;
case 0x4c7712:c.instructions+=1;goto B4c7712;
case 0x4c7717:goto L4c7717;
case 0x4c771a:c.instructions+=2;goto B4c771a;
case 0x4c771c:c.instructions+=1;goto B4c771c;
case 0x4c771e:goto L4c771e;
case 0x4c7721:c.instructions+=2;goto B4c7721;
case 0x4c7724:c.instructions+=1;goto B4c7724;
case 0x4c7726:goto L4c7726;
case 0x4c7729:c.instructions+=1;goto B4c7729;
case 0x4c772b:goto L4c772b;
case 0x4c7732:goto L4c7732;
case 0x4c7735:c.instructions+=2;goto B4c7735;
case 0x4c7736:c.instructions+=1;goto B4c7736;
case 0x4c773b:goto L4c773b;
case 0x4c773e:goto L4c773e;
case 0x4c7744:c.instructions+=2;goto B4c7744;
case 0x4c7746:c.instructions+=1;goto B4c7746;
case 0x4c7748:goto L4c7748;
case 0x4c774b:c.instructions+=3;goto B4c774b;
case 0x4c7750:c.instructions+=2;goto B4c7750;
case 0x4c7751:c.instructions+=1;goto B4c7751;
case 0x4c7756:goto L4c7756;
case 0x4c7759:c.instructions+=2;goto B4c7759;
case 0x4c775b:c.instructions+=1;goto B4c775b;
case 0x4c775d:goto L4c775d;
case 0x4c7760:c.instructions+=2;goto B4c7760;
case 0x4c7763:c.instructions+=1;goto B4c7763;
case 0x4c7765:goto L4c7765;
case 0x4c7768:c.instructions+=1;goto B4c7768;
case 0x4c776a:goto L4c776a;
case 0x4c7771:goto L4c7771;
case 0x4c7774:c.instructions+=2;goto B4c7774;
case 0x4c7775:c.instructions+=1;goto B4c7775;
case 0x4c777a:goto L4c777a;
case 0x4c777d:goto L4c777d;
case 0x4c7780:c.instructions+=4;goto B4c7780;
case 0x4c7786:c.instructions+=3;goto B4c7786;
case 0x4c7789:c.instructions+=2;goto B4c7789;
case 0x4c7791:c.instructions+=1;goto B4c7791;
case 0x4c7796:goto L4c7796;
case 0x4c7799:c.instructions+=6;goto B4c7799;
case 0x4c779c:c.instructions+=5;goto B4c779c;
case 0x4c779e:c.instructions+=4;goto B4c779e;
case 0x4c77a5:c.instructions+=3;goto B4c77a5;
case 0x4c77a8:c.instructions+=2;goto B4c77a8;
case 0x4c77aa:c.instructions+=1;goto B4c77aa;
case 0x4c77ac:goto L4c77ac;
case 0x4c77af:c.instructions+=7;goto B4c77af;
case 0x4c77b1:c.instructions+=6;goto B4c77b1;
case 0x4c77b5:c.instructions+=5;goto B4c77b5;
case 0x4c77b8:c.instructions+=4;goto B4c77b8;
case 0x4c77ba:c.instructions+=3;goto B4c77ba;
case 0x4c77bb:c.instructions+=2;goto B4c77bb;
case 0x4c77bc:c.instructions+=1;goto B4c77bc;
case 0x4c77c1:goto L4c77c1;
case 0x4c77c5:c.instructions+=5;goto B4c77c5;
case 0x4c77cb:c.instructions+=4;goto B4c77cb;
case 0x4c77ce:c.instructions+=3;goto B4c77ce;
case 0x4c77cf:c.instructions+=2;goto B4c77cf;
case 0x4c77d2:c.instructions+=1;goto B4c77d2;
case 0x4c77d7:goto L4c77d7;
case 0x4c77dd:c.instructions+=4;goto B4c77dd;
case 0x4c77df:c.instructions+=3;goto B4c77df;
case 0x4c77e1:c.instructions+=2;goto B4c77e1;
case 0x4c77e4:c.instructions+=1;goto B4c77e4;
case 0x4c77e6:goto L4c77e6;
case 0x4c77e8:c.instructions+=2;goto B4c77e8;
case 0x4c77f0:c.instructions+=1;goto B4c77f0;
case 0x4c77f2:goto L4c77f2;
case 0x4c77f6:goto L4c77f6;
case 0x4c77fc:c.instructions+=3;goto B4c77fc;
case 0x4c77fd:c.instructions+=2;goto B4c77fd;
case 0x4c77ff:c.instructions+=1;goto B4c77ff;
case 0x4c7804:goto L4c7804;
case 0x4c7808:c.instructions+=10;goto B4c7808;
case 0x4c7810:c.instructions+=9;goto B4c7810;
case 0x4c7818:c.instructions+=8;goto B4c7818;
case 0x4c781c:c.instructions+=7;goto B4c781c;
case 0x4c7824:c.instructions+=6;goto B4c7824;
case 0x4c782a:c.instructions+=5;goto B4c782a;
case 0x4c7832:c.instructions+=4;goto B4c7832;
case 0x4c7836:c.instructions+=3;goto B4c7836;
case 0x4c7838:c.instructions+=2;goto B4c7838;
case 0x4c783b:c.instructions+=1;goto B4c783b;
case 0x4c783d:goto L4c783d;
case 0x4c7841:c.instructions+=4;goto B4c7841;
case 0x4c7845:c.instructions+=3;goto B4c7845;
case 0x4c7847:c.instructions+=2;goto B4c7847;
case 0x4c784a:c.instructions+=1;goto B4c784a;
case 0x4c784c:goto L4c784c;
case 0x4c784e:c.instructions+=1;goto B4c784e;
case 0x4c7853:goto L4c7853;
case 0x4c7855:c.instructions+=1;goto B4c7855;
case 0x4c7857:goto L4c7857;
case 0x4c785a:c.instructions+=2;goto B4c785a;
case 0x4c785b:c.instructions+=1;goto B4c785b;
case 0x4c7860:goto L4c7860;
case 0x4c7866:c.instructions+=4;goto B4c7866;
case 0x4c7869:c.instructions+=3;goto B4c7869;
case 0x4c786a:c.instructions+=2;goto B4c786a;
case 0x4c786b:c.instructions+=1;goto B4c786b;
case 0x4c7870:goto L4c7870;
case 0x4c7873:c.instructions+=1;goto B4c7873;
case 0x4c7878:goto L4c7878;
case 0x4c787c:c.instructions+=4;goto B4c787c;
case 0x4c7882:c.instructions+=3;goto B4c7882;
case 0x4c7884:c.instructions+=2;goto B4c7884;
case 0x4c7887:c.instructions+=1;goto B4c7887;
case 0x4c7889:goto L4c7889;
case 0x4c788f:c.instructions+=1;goto B4c788f;
case 0x4c7891:goto L4c7891;
case 0x4c7894:c.instructions+=3;goto B4c7894;
case 0x4c7899:c.instructions+=2;goto B4c7899;
case 0x4c789a:c.instructions+=1;goto B4c789a;
case 0x4c789f:goto L4c789f;
case 0x4c78a2:goto L4c78a2;
case 0x4c78a5:c.instructions+=3;goto B4c78a5;
case 0x4c78aa:c.instructions+=2;goto B4c78aa;
case 0x4c78ab:c.instructions+=1;goto B4c78ab;
case 0x4c78b0:goto L4c78b0;
case 0x4c78b3:c.instructions+=2;goto B4c78b3;
case 0x4c78b5:c.instructions+=1;goto B4c78b5;
case 0x4c78bb:goto L4c78bb;
case 0x4c78be:c.instructions+=4;goto B4c78be;
case 0x4c78bf:c.instructions+=3;goto B4c78bf;
case 0x4c78c4:c.instructions+=2;goto B4c78c4;
case 0x4c78c5:c.instructions+=1;goto B4c78c5;
case 0x4c78ca:goto L4c78ca;
case 0x4c78cd:c.instructions+=1;goto B4c78cd;
case 0x4c78d2:goto L4c78d2;
case 0x4c78d6:c.instructions+=4;goto B4c78d6;
case 0x4c78dc:c.instructions+=3;goto B4c78dc;
case 0x4c78de:c.instructions+=2;goto B4c78de;
case 0x4c78e1:c.instructions+=1;goto B4c78e1;
case 0x4c78e7:goto L4c78e7;
case 0x4c78ed:c.instructions+=1;goto B4c78ed;
case 0x4c78ef:goto L4c78ef;
case 0x4c78f2:c.instructions+=3;goto B4c78f2;
case 0x4c78f7:c.instructions+=2;goto B4c78f7;
case 0x4c78f8:c.instructions+=1;goto B4c78f8;
case 0x4c78fd:goto L4c78fd;
case 0x4c7900:goto L4c7900;
case 0x4c7903:c.instructions+=3;goto B4c7903;
case 0x4c7908:c.instructions+=2;goto B4c7908;
case 0x4c7909:c.instructions+=1;goto B4c7909;
case 0x4c790e:goto L4c790e;
case 0x4c7911:c.instructions+=2;goto B4c7911;
case 0x4c7913:c.instructions+=1;goto B4c7913;
case 0x4c7915:goto L4c7915;
case 0x4c7918:c.instructions+=4;goto B4c7918;
case 0x4c7919:c.instructions+=3;goto B4c7919;
case 0x4c791e:c.instructions+=2;goto B4c791e;
case 0x4c791f:c.instructions+=1;goto B4c791f;
case 0x4c7924:goto L4c7924;
case 0x4c7927:goto L4c7927;
case 0x4c792c:c.instructions+=1;goto B4c792c;
case 0x4c7931:goto L4c7931;
case 0x4c7933:c.instructions+=1;goto B4c7933;
case 0x4c7939:goto L4c7939;
case 0x4c793e:c.instructions+=2;goto B4c793e;
case 0x4c7940:c.instructions+=1;goto B4c7940;
case 0x4c7946:goto L4c7946;
case 0x4c7949:c.instructions+=1;goto B4c7949;
case 0x4c794f:goto L4c794f;
case 0x4c7955:c.instructions+=1;goto B4c7955;
case 0x4c795b:goto L4c795b;
case 0x4c7962:c.instructions+=1;goto B4c7962;
case 0x4c7968:goto L4c7968;
case 0x4c796f:c.instructions+=1;goto B4c796f;
case 0x4c7974:goto L4c7974;
case 0x4c797a:c.instructions+=2;goto B4c797a;
case 0x4c797c:c.instructions+=1;goto B4c797c;
case 0x4c7982:goto L4c7982;
case 0x4c7988:c.instructions+=1;goto B4c7988;
case 0x4c798a:goto L4c798a;
case 0x4c7990:c.instructions+=6;goto B4c7990;
case 0x4c7992:c.instructions+=5;goto B4c7992;
case 0x4c7995:c.instructions+=4;goto B4c7995;
case 0x4c7997:c.instructions+=3;goto B4c7997;
case 0x4c799b:c.instructions+=2;goto B4c799b;
case 0x4c799f:c.instructions+=1;goto B4c799f;
case 0x4c79a1:goto L4c79a1;
case 0x4c79a7:goto L4c79a7;
case 0x4c79ae:c.instructions+=13;goto B4c79ae;
case 0x4c79b5:c.instructions+=12;goto B4c79b5;
case 0x4c79b9:c.instructions+=11;goto B4c79b9;
case 0x4c79be:c.instructions+=10;goto B4c79be;
case 0x4c79c0:c.instructions+=9;goto B4c79c0;
case 0x4c79c4:c.instructions+=8;goto B4c79c4;
case 0x4c79c8:c.instructions+=7;goto B4c79c8;
case 0x4c79cc:c.instructions+=6;goto B4c79cc;
case 0x4c79d0:c.instructions+=5;goto B4c79d0;
case 0x4c79d4:c.instructions+=4;goto B4c79d4;
case 0x4c79d8:c.instructions+=3;goto B4c79d8;
case 0x4c79dc:c.instructions+=2;goto B4c79dc;
case 0x4c79e0:c.instructions+=1;goto B4c79e0;
case 0x4c79e2:goto L4c79e2;
case 0x4c79e8:goto L4c79e8;
case 0x4c79ec:goto L4c79ec;
case 0x4c79ef:c.instructions+=3;goto B4c79ef;
case 0x4c79f4:c.instructions+=2;goto B4c79f4;
case 0x4c79f5:c.instructions+=1;goto B4c79f5;
case 0x4c79fa:goto L4c79fa;
case 0x4c79fd:c.instructions+=2;goto B4c79fd;
case 0x4c79ff:c.instructions+=1;goto B4c79ff;
case 0x4c7a01:goto L4c7a01;
case 0x4c7a04:c.instructions+=4;goto B4c7a04;
case 0x4c7a05:c.instructions+=3;goto B4c7a05;
case 0x4c7a0a:c.instructions+=2;goto B4c7a0a;
case 0x4c7a0b:c.instructions+=1;goto B4c7a0b;
case 0x4c7a10:goto L4c7a10;
case 0x4c7a13:goto L4c7a13;
case 0x4c7a17:c.instructions+=14;goto B4c7a17;
case 0x4c7a18:c.instructions+=13;goto B4c7a18;
case 0x4c7a1c:c.instructions+=12;goto B4c7a1c;
case 0x4c7a20:c.instructions+=11;goto B4c7a20;
case 0x4c7a24:c.instructions+=10;goto B4c7a24;
case 0x4c7a28:c.instructions+=9;goto B4c7a28;
case 0x4c7a2e:c.instructions+=8;goto B4c7a2e;
case 0x4c7a32:c.instructions+=7;goto B4c7a32;
case 0x4c7a34:c.instructions+=6;goto B4c7a34;
case 0x4c7a37:c.instructions+=5;goto B4c7a37;
case 0x4c7a38:c.instructions+=4;goto B4c7a38;
case 0x4c7a39:c.instructions+=3;goto B4c7a39;
case 0x4c7a3a:c.instructions+=2;goto B4c7a3a;
case 0x4c7a3c:c.instructions+=1;goto B4c7a3c;
case 0x4c7a41:goto L4c7a41;
case 0x4c7a47:c.instructions+=1;goto B4c7a47;
case 0x4c7a49:goto L4c7a49;
case 0x4c7a4d:c.instructions+=1;goto B4c7a4d;
case 0x4c7a52:goto L4c7a52;
case 0x4c7a55:c.instructions+=3;goto B4c7a55;
case 0x4c7a56:c.instructions+=2;goto B4c7a56;
case 0x4c7a57:c.instructions+=1;goto B4c7a57;
case 0x4c7a5c:goto L4c7a5c;
case 0x4c7a5f:goto L4c7a5f;
case 0x4c7a62:c.instructions+=2;goto B4c7a62;
case 0x4c7a63:c.instructions+=1;goto B4c7a63;
case 0x4c7a68:goto L4c7a68;
case 0x4c7a6b:goto L4c7a6b;
case 0x4c7a6c:goto L4c7a6c;
case 0x4c7a72:c.instructions+=5;goto B4c7a72;
case 0x4c7a78:c.instructions+=4;goto B4c7a78;
case 0x4c7a7e:c.instructions+=3;goto B4c7a7e;
case 0x4c7a80:c.instructions+=2;goto B4c7a80;
case 0x4c7a81:c.instructions+=1;goto B4c7a81;
case 0x4c7a83:goto L4c7a83;
case 0x4c7a86:c.instructions+=2;goto B4c7a86;
case 0x4c7a87:c.instructions+=1;goto B4c7a87;
case 0x4c7a8c:goto L4c7a8c;
case 0x4c7a8f:c.instructions+=2;goto B4c7a8f;
case 0x4c7a90:c.instructions+=1;goto B4c7a90;
case 0x4c7a95:goto L4c7a95;
case 0x4c7a98:goto L4c7a98;
case 0x4c7a99:c.instructions+=3;goto B4c7a99;
case 0x4c7a9a:c.instructions+=2;goto B4c7a9a;
case 0x4c7a9d:c.instructions+=1;goto B4c7a9d;
case 0x4c7aa0:goto L4c7aa0;
case 0x4c7aa1:c.instructions+=9;goto B4c7aa1;
case 0x4c7aa3:c.instructions+=8;goto B4c7aa3;
case 0x4c7aa6:c.instructions+=7;goto B4c7aa6;
case 0x4c7aa9:c.instructions+=6;goto B4c7aa9;
case 0x4c7aac:c.instructions+=5;goto B4c7aac;
case 0x4c7aae:c.instructions+=4;goto B4c7aae;
case 0x4c7ab1:c.instructions+=3;goto B4c7ab1;
case 0x4c7ab3:c.instructions+=2;goto B4c7ab3;
case 0x4c7ab5:c.instructions+=1;goto B4c7ab5;
case 0x4c7ab7:goto L4c7ab7;
case 0x4c7abe:c.instructions+=2;goto B4c7abe;
case 0x4c7ac0:c.instructions+=1;goto B4c7ac0;
case 0x4c7ac2:goto L4c7ac2;
case 0x4c7ac6:c.instructions+=5;goto B4c7ac6;
case 0x4c7ac9:c.instructions+=4;goto B4c7ac9;
case 0x4c7ace:c.instructions+=3;goto B4c7ace;
case 0x4c7ad3:c.instructions+=2;goto B4c7ad3;
case 0x4c7ad8:c.instructions+=1;goto B4c7ad8;
case 0x4c7add:goto L4c7add;
case 0x4c7ade:c.instructions+=5;goto B4c7ade;
case 0x4c7ae1:c.instructions+=4;goto B4c7ae1;
case 0x4c7ae4:c.instructions+=3;goto B4c7ae4;
case 0x4c7ae5:c.instructions+=2;goto B4c7ae5;
case 0x4c7ae7:c.instructions+=1;goto B4c7ae7;
case 0x4c7aec:goto L4c7aec;
case 0x4c7aed:c.instructions+=1;goto B4c7aed;
case 0x4c7af0:goto L4c7af0;
case 0x4c7af4:c.instructions+=5;goto B4c7af4;
case 0x4c7af7:c.instructions+=4;goto B4c7af7;
case 0x4c7afc:c.instructions+=3;goto B4c7afc;
case 0x4c7b01:c.instructions+=2;goto B4c7b01;
case 0x4c7b06:c.instructions+=1;goto B4c7b06;
case 0x4c7b0b:goto L4c7b0b;
case 0x4c7b0e:c.instructions+=5;goto B4c7b0e;
case 0x4c7b0f:c.instructions+=4;goto B4c7b0f;
case 0x4c7b12:c.instructions+=3;goto B4c7b12;
case 0x4c7b13:c.instructions+=2;goto B4c7b13;
case 0x4c7b15:c.instructions+=1;goto B4c7b15;
case 0x4c7b1a:goto L4c7b1a;
case 0x4c7b1b:c.instructions+=1;goto B4c7b1b;
case 0x4c7b20:goto L4c7b20;
case 0x4c7b21:c.instructions+=9;goto B4c7b21;
case 0x4c7b23:c.instructions+=8;goto B4c7b23;
case 0x4c7b26:c.instructions+=7;goto B4c7b26;
case 0x4c7b29:c.instructions+=6;goto B4c7b29;
case 0x4c7b2c:c.instructions+=5;goto B4c7b2c;
case 0x4c7b2e:c.instructions+=4;goto B4c7b2e;
case 0x4c7b31:c.instructions+=3;goto B4c7b31;
case 0x4c7b33:c.instructions+=2;goto B4c7b33;
case 0x4c7b35:c.instructions+=1;goto B4c7b35;
case 0x4c7b3b:goto L4c7b3b;
case 0x4c7b3f:c.instructions+=3;goto B4c7b3f;
case 0x4c7b42:c.instructions+=2;goto B4c7b42;
case 0x4c7b45:c.instructions+=1;goto B4c7b45;
case 0x4c7b4a:goto L4c7b4a;
case 0x4c7b4e:c.instructions+=4;goto B4c7b4e;
case 0x4c7b54:c.instructions+=3;goto B4c7b54;
case 0x4c7b56:c.instructions+=2;goto B4c7b56;
case 0x4c7b59:c.instructions+=1;goto B4c7b59;
case 0x4c7b5b:goto L4c7b5b;
case 0x4c7b5e:c.instructions+=2;goto B4c7b5e;
case 0x4c7b5f:c.instructions+=1;goto B4c7b5f;
case 0x4c7b64:goto L4c7b64;
case 0x4c7b67:c.instructions+=2;goto B4c7b67;
case 0x4c7b68:c.instructions+=1;goto B4c7b68;
case 0x4c7b6d:goto L4c7b6d;
case 0x4c7b70:c.instructions+=2;goto B4c7b70;
case 0x4c7b71:c.instructions+=1;goto B4c7b71;
case 0x4c7b74:goto L4c7b74;
case 0x4c7b78:c.instructions+=4;goto B4c7b78;
case 0x4c7b7e:c.instructions+=3;goto B4c7b7e;
case 0x4c7b80:c.instructions+=2;goto B4c7b80;
case 0x4c7b83:c.instructions+=1;goto B4c7b83;
case 0x4c7b89:goto L4c7b89;
case 0x4c7b90:c.instructions+=1;goto B4c7b90;
case 0x4c7b96:goto L4c7b96;
case 0x4c7b9b:c.instructions+=2;goto B4c7b9b;
case 0x4c7b9d:c.instructions+=1;goto B4c7b9d;
case 0x4c7b9f:goto L4c7b9f;
case 0x4c7ba4:c.instructions+=2;goto B4c7ba4;
case 0x4c7ba6:c.instructions+=1;goto B4c7ba6;
case 0x4c7ba8:goto L4c7ba8;
case 0x4c7bab:c.instructions+=2;goto B4c7bab;
case 0x4c7bac:c.instructions+=1;goto B4c7bac;
case 0x4c7bb1:goto L4c7bb1;
case 0x4c7bb4:c.instructions+=2;goto B4c7bb4;
case 0x4c7bb5:c.instructions+=1;goto B4c7bb5;
case 0x4c7bba:goto L4c7bba;
case 0x4c7bbe:c.instructions+=10;goto B4c7bbe;
case 0x4c7bc1:c.instructions+=9;goto B4c7bc1;
case 0x4c7bc4:c.instructions+=8;goto B4c7bc4;
case 0x4c7bc6:c.instructions+=7;goto B4c7bc6;
case 0x4c7bcb:c.instructions+=6;goto B4c7bcb;
case 0x4c7bd0:c.instructions+=5;goto B4c7bd0;
case 0x4c7bd5:c.instructions+=4;goto B4c7bd5;
case 0x4c7bd6:c.instructions+=3;goto B4c7bd6;
case 0x4c7bd7:c.instructions+=2;goto B4c7bd7;
case 0x4c7bd9:c.instructions+=1;goto B4c7bd9;
case 0x4c7bde:goto L4c7bde;
case 0x4c7bdf:c.instructions+=1;goto B4c7bdf;
case 0x4c7be2:goto L4c7be2;
case 0x4c7be5:c.instructions+=2;goto B4c7be5;
case 0x4c7be6:c.instructions+=1;goto B4c7be6;
case 0x4c7beb:goto L4c7beb;
case 0x4c7bee:c.instructions+=2;goto B4c7bee;
case 0x4c7bef:c.instructions+=1;goto B4c7bef;
case 0x4c7bf4:goto L4c7bf4;
case 0x4c7bf8:c.instructions+=9;goto B4c7bf8;
case 0x4c7bfe:c.instructions+=8;goto B4c7bfe;
case 0x4c7c01:c.instructions+=7;goto B4c7c01;
case 0x4c7c07:c.instructions+=6;goto B4c7c07;
case 0x4c7c0d:c.instructions+=5;goto B4c7c0d;
case 0x4c7c11:c.instructions+=4;goto B4c7c11;
case 0x4c7c15:c.instructions+=3;goto B4c7c15;
case 0x4c7c16:c.instructions+=2;goto B4c7c16;
case 0x4c7c17:c.instructions+=1;goto B4c7c17;
case 0x4c7c1c:goto L4c7c1c;
case 0x4c7c1f:c.instructions+=4;goto B4c7c1f;
case 0x4c7c22:c.instructions+=3;goto B4c7c22;
case 0x4c7c23:c.instructions+=2;goto B4c7c23;
case 0x4c7c24:c.instructions+=1;goto B4c7c24;
case 0x4c7c29:goto L4c7c29;
case 0x4c7c2d:c.instructions+=5;goto B4c7c2d;
case 0x4c7c33:c.instructions+=4;goto B4c7c33;
case 0x4c7c36:c.instructions+=3;goto B4c7c36;
case 0x4c7c37:c.instructions+=2;goto B4c7c37;
case 0x4c7c3d:c.instructions+=1;goto B4c7c3d;
case 0x4c7c40:goto L4c7c40;
case 0x4c7c43:c.instructions+=2;goto B4c7c43;
case 0x4c7c44:c.instructions+=1;goto B4c7c44;
case 0x4c7c49:goto L4c7c49;
case 0x4c7c4c:c.instructions+=2;goto B4c7c4c;
case 0x4c7c4d:c.instructions+=1;goto B4c7c4d;
case 0x4c7c52:goto L4c7c52;
case 0x4c7c57:c.instructions+=3;goto B4c7c57;
case 0x4c7c5a:c.instructions+=2;goto B4c7c5a;
case 0x4c7c5c:c.instructions+=1;goto B4c7c5c;
case 0x4c7c5e:goto L4c7c5e;
case 0x4c7c63:c.instructions+=2;goto B4c7c63;
case 0x4c7c65:c.instructions+=1;goto B4c7c65;
case 0x4c7c67:goto L4c7c67;
case 0x4c7c6b:c.instructions+=9;goto B4c7c6b;
case 0x4c7c6e:c.instructions+=8;goto B4c7c6e;
case 0x4c7c70:c.instructions+=7;goto B4c7c70;
case 0x4c7c75:c.instructions+=6;goto B4c7c75;
case 0x4c7c7a:c.instructions+=5;goto B4c7c7a;
case 0x4c7c7f:c.instructions+=4;goto B4c7c7f;
case 0x4c7c80:c.instructions+=3;goto B4c7c80;
case 0x4c7c81:c.instructions+=2;goto B4c7c81;
case 0x4c7c83:c.instructions+=1;goto B4c7c83;
case 0x4c7c88:goto L4c7c88;
case 0x4c7c89:c.instructions+=1;goto B4c7c89;
case 0x4c7c8c:goto L4c7c8c;
case 0x4c7c90:c.instructions+=9;goto B4c7c90;
case 0x4c7c93:c.instructions+=8;goto B4c7c93;
case 0x4c7c95:c.instructions+=7;goto B4c7c95;
case 0x4c7c9a:c.instructions+=6;goto B4c7c9a;
case 0x4c7c9f:c.instructions+=5;goto B4c7c9f;
case 0x4c7ca4:c.instructions+=4;goto B4c7ca4;
case 0x4c7ca5:c.instructions+=3;goto B4c7ca5;
case 0x4c7ca7:c.instructions+=2;goto B4c7ca7;
case 0x4c7ca8:c.instructions+=1;goto B4c7ca8;
case 0x4c7cad:goto L4c7cad;
case 0x4c7cae:c.instructions+=1;goto B4c7cae;
case 0x4c7cb1:goto L4c7cb1;
case 0x4c7cb4:c.instructions+=2;goto B4c7cb4;
case 0x4c7cb5:c.instructions+=1;goto B4c7cb5;
case 0x4c7cba:goto L4c7cba;
case 0x4c7cbd:c.instructions+=2;goto B4c7cbd;
case 0x4c7cbe:c.instructions+=1;goto B4c7cbe;
case 0x4c7cc3:goto L4c7cc3;
case 0x4c7cc8:c.instructions+=4;goto B4c7cc8;
case 0x4c7ccb:c.instructions+=3;goto B4c7ccb;
case 0x4c7cce:c.instructions+=2;goto B4c7cce;
case 0x4c7cd3:c.instructions+=1;goto B4c7cd3;
case 0x4c7cd9:goto L4c7cd9;
case 0x4c7cdb:c.instructions+=1;goto B4c7cdb;
case 0x4c7cdd:goto L4c7cdd;
case 0x4c7ce2:c.instructions+=2;goto B4c7ce2;
case 0x4c7ce4:c.instructions+=1;goto B4c7ce4;
case 0x4c7ce6:goto L4c7ce6;
case 0x4c7ce9:c.instructions+=8;goto B4c7ce9;
case 0x4c7ceb:c.instructions+=7;goto B4c7ceb;
case 0x4c7cf0:c.instructions+=6;goto B4c7cf0;
case 0x4c7cf5:c.instructions+=5;goto B4c7cf5;
case 0x4c7cfa:c.instructions+=4;goto B4c7cfa;
case 0x4c7cff:c.instructions+=3;goto B4c7cff;
case 0x4c7d00:c.instructions+=2;goto B4c7d00;
case 0x4c7d02:c.instructions+=1;goto B4c7d02;
case 0x4c7d07:goto L4c7d07;
case 0x4c7d09:c.instructions+=2;goto B4c7d09;
case 0x4c7d0e:c.instructions+=1;goto B4c7d0e;
case 0x4c7d13:goto L4c7d13;
case 0x4c7d17:c.instructions+=8;goto B4c7d17;
case 0x4c7d1c:c.instructions+=7;goto B4c7d1c;
case 0x4c7d22:c.instructions+=6;goto B4c7d22;
case 0x4c7d23:c.instructions+=5;goto B4c7d23;
case 0x4c7d26:c.instructions+=4;goto B4c7d26;
case 0x4c7d29:c.instructions+=3;goto B4c7d29;
case 0x4c7d2a:c.instructions+=2;goto B4c7d2a;
case 0x4c7d2c:c.instructions+=1;goto B4c7d2c;
case 0x4c7d31:goto L4c7d31;
case 0x4c7d32:c.instructions+=1;goto B4c7d32;
case 0x4c7d35:goto L4c7d35;
case 0x4c7d39:c.instructions+=10;goto B4c7d39;
case 0x4c7d3c:c.instructions+=9;goto B4c7d3c;
case 0x4c7d42:c.instructions+=8;goto B4c7d42;
case 0x4c7d48:c.instructions+=7;goto B4c7d48;
case 0x4c7d4e:c.instructions+=6;goto B4c7d4e;
case 0x4c7d54:c.instructions+=5;goto B4c7d54;
case 0x4c7d58:c.instructions+=4;goto B4c7d58;
case 0x4c7d5c:c.instructions+=3;goto B4c7d5c;
case 0x4c7d5d:c.instructions+=2;goto B4c7d5d;
case 0x4c7d5e:c.instructions+=1;goto B4c7d5e;
case 0x4c7d63:goto L4c7d63;
case 0x4c7d66:c.instructions+=4;goto B4c7d66;
case 0x4c7d69:c.instructions+=3;goto B4c7d69;
case 0x4c7d6a:c.instructions+=2;goto B4c7d6a;
case 0x4c7d6b:c.instructions+=1;goto B4c7d6b;
case 0x4c7d70:goto L4c7d70;
case 0x4c7d74:c.instructions+=5;goto B4c7d74;
case 0x4c7d7a:c.instructions+=4;goto B4c7d7a;
case 0x4c7d7d:c.instructions+=3;goto B4c7d7d;
case 0x4c7d7e:c.instructions+=2;goto B4c7d7e;
case 0x4c7d84:c.instructions+=1;goto B4c7d84;
case 0x4c7d87:goto L4c7d87;
case 0x4c7d89:c.instructions+=1;goto B4c7d89;
case 0x4c7d8b:goto L4c7d8b;
case 0x4c7d90:c.instructions+=2;goto B4c7d90;
case 0x4c7d92:c.instructions+=1;goto B4c7d92;
case 0x4c7d94:goto L4c7d94;
case 0x4c7d97:c.instructions+=8;goto B4c7d97;
case 0x4c7d99:c.instructions+=7;goto B4c7d99;
case 0x4c7d9e:c.instructions+=6;goto B4c7d9e;
case 0x4c7da3:c.instructions+=5;goto B4c7da3;
case 0x4c7da8:c.instructions+=4;goto B4c7da8;
case 0x4c7dad:c.instructions+=3;goto B4c7dad;
case 0x4c7dae:c.instructions+=2;goto B4c7dae;
case 0x4c7db0:c.instructions+=1;goto B4c7db0;
case 0x4c7db5:goto L4c7db5;
case 0x4c7db7:c.instructions+=3;goto B4c7db7;
case 0x4c7dbc:c.instructions+=2;goto B4c7dbc;
case 0x4c7dc1:c.instructions+=1;goto B4c7dc1;
case 0x4c7dc6:goto L4c7dc6;
case 0x4c7dc9:c.instructions+=8;goto B4c7dc9;
case 0x4c7dcb:c.instructions+=7;goto B4c7dcb;
case 0x4c7dd0:c.instructions+=6;goto B4c7dd0;
case 0x4c7dd5:c.instructions+=5;goto B4c7dd5;
case 0x4c7dda:c.instructions+=4;goto B4c7dda;
case 0x4c7ddf:c.instructions+=3;goto B4c7ddf;
case 0x4c7de0:c.instructions+=2;goto B4c7de0;
case 0x4c7de2:c.instructions+=1;goto B4c7de2;
case 0x4c7de7:goto L4c7de7;
case 0x4c7deb:c.instructions+=11;goto B4c7deb;
case 0x4c7df1:c.instructions+=10;goto B4c7df1;
case 0x4c7df4:c.instructions+=9;goto B4c7df4;
case 0x4c7df6:c.instructions+=8;goto B4c7df6;
case 0x4c7dfb:c.instructions+=7;goto B4c7dfb;
case 0x4c7e00:c.instructions+=6;goto B4c7e00;
case 0x4c7e05:c.instructions+=5;goto B4c7e05;
case 0x4c7e06:c.instructions+=4;goto B4c7e06;
case 0x4c7e09:c.instructions+=3;goto B4c7e09;
case 0x4c7e0b:c.instructions+=2;goto B4c7e0b;
case 0x4c7e0c:c.instructions+=1;goto B4c7e0c;
case 0x4c7e11:goto L4c7e11;
case 0x4c7e12:c.instructions+=1;goto B4c7e12;
case 0x4c7e20:goto L4c7e20;
case 0x4c7e21:c.instructions+=17;goto B4c7e21;
case 0x4c7e23:c.instructions+=16;goto B4c7e23;
case 0x4c7e2a:c.instructions+=15;goto B4c7e2a;
case 0x4c7e30:c.instructions+=14;goto B4c7e30;
case 0x4c7e31:c.instructions+=13;goto B4c7e31;
case 0x4c7e35:c.instructions+=12;goto B4c7e35;
case 0x4c7e38:c.instructions+=11;goto B4c7e38;
case 0x4c7e3b:c.instructions+=10;goto B4c7e3b;
case 0x4c7e3e:c.instructions+=9;goto B4c7e3e;
case 0x4c7e42:c.instructions+=8;goto B4c7e42;
case 0x4c7e44:c.instructions+=7;goto B4c7e44;
case 0x4c7e47:c.instructions+=6;goto B4c7e47;
case 0x4c7e4a:c.instructions+=5;goto B4c7e4a;
case 0x4c7e4d:c.instructions+=4;goto B4c7e4d;
case 0x4c7e50:c.instructions+=3;goto B4c7e50;
case 0x4c7e53:c.instructions+=2;goto B4c7e53;
case 0x4c7e59:c.instructions+=1;goto B4c7e59;
case 0x4c7e5e:goto L4c7e5e;
case 0x4c7e61:c.instructions+=17;goto B4c7e61;
case 0x4c7e64:c.instructions+=16;goto B4c7e64;
case 0x4c7e67:c.instructions+=15;goto B4c7e67;
case 0x4c7e6a:c.instructions+=14;goto B4c7e6a;
case 0x4c7e70:c.instructions+=13;goto B4c7e70;
case 0x4c7e73:c.instructions+=12;goto B4c7e73;
case 0x4c7e76:c.instructions+=11;goto B4c7e76;
case 0x4c7e79:c.instructions+=10;goto B4c7e79;
case 0x4c7e7c:c.instructions+=9;goto B4c7e7c;
case 0x4c7e83:c.instructions+=8;goto B4c7e83;
case 0x4c7e87:c.instructions+=7;goto B4c7e87;
case 0x4c7e8b:c.instructions+=6;goto B4c7e8b;
case 0x4c7e8e:c.instructions+=5;goto B4c7e8e;
case 0x4c7e8f:c.instructions+=4;goto B4c7e8f;
case 0x4c7e92:c.instructions+=3;goto B4c7e92;
case 0x4c7e94:c.instructions+=2;goto B4c7e94;
case 0x4c7e95:c.instructions+=1;goto B4c7e95;
case 0x4c7ea0:goto L4c7ea0;
case 0x4c7ea4:c.instructions+=4;goto B4c7ea4;
case 0x4c7eaa:c.instructions+=3;goto B4c7eaa;
case 0x4c7eac:c.instructions+=2;goto B4c7eac;
case 0x4c7eaf:c.instructions+=1;goto B4c7eaf;
case 0x4c7eb1:goto L4c7eb1;
case 0x4c7eb5:c.instructions+=4;goto B4c7eb5;
case 0x4c7ebb:c.instructions+=3;goto B4c7ebb;
case 0x4c7ebd:c.instructions+=2;goto B4c7ebd;
case 0x4c7ec0:c.instructions+=1;goto B4c7ec0;
case 0x4c7ec2:goto L4c7ec2;
case 0x4c7ec6:c.instructions+=2;goto B4c7ec6;
case 0x4c7ec8:c.instructions+=1;goto B4c7ec8;
case 0x4c7eca:goto L4c7eca;
case 0x4c7ed0:c.instructions+=3;goto B4c7ed0;
case 0x4c7ed3:c.instructions+=2;goto B4c7ed3;
case 0x4c7eda:c.instructions+=1;goto B4c7eda;
case 0x4c7edd:goto L4c7edd;
case 0x4c7ee1:c.instructions+=2;goto B4c7ee1;
case 0x4c7ee3:c.instructions+=1;goto B4c7ee3;
case 0x4c7ee5:goto L4c7ee5;
case 0x4c7eeb:c.instructions+=2;goto B4c7eeb;
case 0x4c7eee:c.instructions+=1;goto B4c7eee;
case 0x4c7ef5:goto L4c7ef5;
case 0x4c7f00:goto L4c7f00;
case 0x4c7f01:c.instructions+=14;goto B4c7f01;
case 0x4c7f03:c.instructions+=13;goto B4c7f03;
case 0x4c7f09:c.instructions+=12;goto B4c7f09;
case 0x4c7f0a:c.instructions+=11;goto B4c7f0a;
case 0x4c7f0b:c.instructions+=10;goto B4c7f0b;
case 0x4c7f0d:c.instructions+=9;goto B4c7f0d;
case 0x4c7f10:c.instructions+=8;goto B4c7f10;
case 0x4c7f13:c.instructions+=7;goto B4c7f13;
case 0x4c7f16:c.instructions+=6;goto B4c7f16;
case 0x4c7f17:c.instructions+=5;goto B4c7f17;
case 0x4c7f1a:c.instructions+=4;goto B4c7f1a;
case 0x4c7f1c:c.instructions+=3;goto B4c7f1c;
case 0x4c7f1e:c.instructions+=2;goto B4c7f1e;
case 0x4c7f20:c.instructions+=1;goto B4c7f20;
case 0x4c7f26:goto L4c7f26;
case 0x4c7f29:c.instructions+=4;goto B4c7f29;
case 0x4c7f2c:c.instructions+=3;goto B4c7f2c;
case 0x4c7f2f:c.instructions+=2;goto B4c7f2f;
case 0x4c7f31:c.instructions+=1;goto B4c7f31;
case 0x4c7f37:goto L4c7f37;
case 0x4c7f3b:c.instructions+=8;goto B4c7f3b;
case 0x4c7f41:c.instructions+=7;goto B4c7f41;
case 0x4c7f43:c.instructions+=6;goto B4c7f43;
case 0x4c7f46:c.instructions+=5;goto B4c7f46;
case 0x4c7f47:c.instructions+=4;goto B4c7f47;
case 0x4c7f4a:c.instructions+=3;goto B4c7f4a;
case 0x4c7f4d:c.instructions+=2;goto B4c7f4d;
case 0x4c7f50:c.instructions+=1;goto B4c7f50;
case 0x4c7f55:goto L4c7f55;
case 0x4c7f58:c.instructions+=4;goto B4c7f58;
case 0x4c7f5d:c.instructions+=3;goto B4c7f5d;
case 0x4c7f62:c.instructions+=2;goto B4c7f62;
case 0x4c7f63:c.instructions+=1;goto B4c7f63;
case 0x4c7f68:goto L4c7f68;
case 0x4c7f6b:c.instructions+=2;goto B4c7f6b;
case 0x4c7f6d:c.instructions+=1;goto B4c7f6d;
case 0x4c7f6f:goto L4c7f6f;
case 0x4c7f72:c.instructions+=2;goto B4c7f72;
case 0x4c7f74:c.instructions+=1;goto B4c7f74;
case 0x4c7f76:goto L4c7f76;
case 0x4c7f79:c.instructions+=5;goto B4c7f79;
case 0x4c7f7b:c.instructions+=4;goto B4c7f7b;
case 0x4c7f80:c.instructions+=3;goto B4c7f80;
case 0x4c7f85:c.instructions+=2;goto B4c7f85;
case 0x4c7f86:c.instructions+=1;goto B4c7f86;
case 0x4c7f8b:goto L4c7f8b;
case 0x4c7f90:c.instructions+=4;goto B4c7f90;
case 0x4c7f93:c.instructions+=3;goto B4c7f93;
case 0x4c7f96:c.instructions+=2;goto B4c7f96;
case 0x4c7f98:c.instructions+=1;goto B4c7f98;
case 0x4c7f9a:goto L4c7f9a;
case 0x4c7f9d:c.instructions+=4;goto B4c7f9d;
case 0x4c7fa2:c.instructions+=3;goto B4c7fa2;
case 0x4c7fa7:c.instructions+=2;goto B4c7fa7;
case 0x4c7fa8:c.instructions+=1;goto B4c7fa8;
case 0x4c7faa:goto L4c7faa;
case 0x4c7fad:c.instructions+=3;goto B4c7fad;
case 0x4c7fb2:c.instructions+=2;goto B4c7fb2;
case 0x4c7fb7:c.instructions+=1;goto B4c7fb7;
case 0x4c7fb8:goto L4c7fb8;
case 0x4c7fbd:goto L4c7fbd;
case 0x4c7fc0:c.instructions+=1;goto B4c7fc0;
case 0x4c7fc4:goto L4c7fc4;
case 0x4c7fc7:c.instructions+=3;goto B4c7fc7;
case 0x4c7fc8:c.instructions+=2;goto B4c7fc8;
case 0x4c7fcb:c.instructions+=1;goto B4c7fcb;
case 0x4c7fd1:goto L4c7fd1;
case 0x4c7fd8:goto L4c7fd8;
case 0x4c7fdd:c.instructions+=1;goto B4c7fdd;
case 0x4c7fe2:goto L4c7fe2;
case 0x4c7fe4:c.instructions+=1;goto B4c7fe4;
case 0x4c7fea:goto L4c7fea;
case 0x4c7fef:c.instructions+=1;goto B4c7fef;
case 0x4c7ff4:goto L4c7ff4;
case 0x4c7ff6:c.instructions+=1;goto B4c7ff6;
case 0x4c7ffc:goto L4c7ffc;
default:missing_instruction(c.pc);}
B4c7000:L4c7000:{c.instructions+=1;NFSU2_TR(0x4c7000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c701d;}}
}
B4c7002:L4c7002:{c.instructions+=5;NFSU2_TR(0x4c7002);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7006:{NFSU2_TR(0x4c7006);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7009:{NFSU2_TR(0x4c7009);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4c700f:{NFSU2_TR(0x4c700f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x83a9e0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x83a9e0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83a9e0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c7015:{NFSU2_TR(0x4c7015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c701aull));
TAIL_STATIC(0x502fd0u,502);
}
B4c701a:L4c701a:{c.instructions+=2;NFSU2_TR(0x4c701a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c701b:{NFSU2_TR(0x4c701b);
{goto L4c7024;}
}
B4c701d:L4c701d:{c.instructions+=2;NFSU2_TR(0x4c701d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90cull))));
}
B4c7023:{NFSU2_TR(0x4c7023);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7024:L4c7024:{c.instructions+=3;NFSU2_TR(0x4c7024);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7026:{NFSU2_TR(0x4c7026);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7027:{NFSU2_TR(0x4c7027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c702cull));
TAIL_STATIC(0x50c960u,50c);
}
B4c702c:L4c702c:{c.instructions+=3;NFSU2_TR(0x4c702c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c702f:{NFSU2_TR(0x4c702f);
__builtin_memmove((R+4),(R+12),4);
}
B4c7031:{NFSU2_TR(0x4c7031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7036ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B4c7036:L4c7036:{c.instructions+=2;NFSU2_TR(0x4c7036);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7038:{NFSU2_TR(0x4c7038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7051;}}
}
B4c703a:L4c703a:{c.instructions+=7;NFSU2_TR(0x4c703a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c703e:{NFSU2_TR(0x4c703e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c703f:{NFSU2_TR(0x4c703f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7040:{NFSU2_TR(0x4c7040);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c7043:{NFSU2_TR(0x4c7043);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7044:{NFSU2_TR(0x4c7044);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c704a:{NFSU2_TR(0x4c704a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c704full));
TAIL_STATIC(0x5f82d0u,5f8);
}
B4c704f:L4c704f:{c.instructions+=1;NFSU2_TR(0x4c704f);
{goto L4c7058;}
}
B4c7051:L4c7051:{c.instructions+=1;NFSU2_TR(0x4c7051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7058:L4c7058:{c.instructions+=8;NFSU2_TR(0x4c7058);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4c705d:{NFSU2_TR(0x4c705d);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c7063:{NFSU2_TR(0x4c7063);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7066:{NFSU2_TR(0x4c7066);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4c7067:{NFSU2_TR(0x4c7067);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c706a:{NFSU2_TR(0x4c706a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x34ull))));
}
B4c706d:{NFSU2_TR(0x4c706d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c706f:{NFSU2_TR(0x4c706f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4c6f80u,4c6);}
}
B4c7075:L4c7075:{c.instructions+=8;NFSU2_TR(0x4c7075);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c7079:{NFSU2_TR(0x4c7079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c707a:{NFSU2_TR(0x4c707a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c707b:{NFSU2_TR(0x4c707b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c707c:{NFSU2_TR(0x4c707c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7080:{NFSU2_TR(0x4c7080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7081:{NFSU2_TR(0x4c7081);
__builtin_memmove((R+4),(R+24),4);
}
B4c7083:{NFSU2_TR(0x4c7083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7088ull));
TAIL_STATIC(0x4aaed0u,4aa);
}
B4c7088:L4c7088:{c.instructions+=3;NFSU2_TR(0x4c7088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7089:{NFSU2_TR(0x4c7089);
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
B4c708c:{NFSU2_TR(0x4c708c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7090:L4c7090:{c.instructions+=11;NFSU2_TR(0x4c7090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4c7093:{NFSU2_TR(0x4c7093);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7097:{NFSU2_TR(0x4c7097);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7098:{NFSU2_TR(0x4c7098);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7099:{NFSU2_TR(0x4c7099);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c709c:{NFSU2_TR(0x4c709c);
__builtin_memmove((R+24),(R+4),4);
}
B4c709e:{NFSU2_TR(0x4c709e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c70a4:{NFSU2_TR(0x4c70a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c70aa:{NFSU2_TR(0x4c70aa);
__builtin_memmove((R+4),(R+28),4);
}
B4c70ac:{NFSU2_TR(0x4c70ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c70b0:{NFSU2_TR(0x4c70b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c70b5ull));
TAIL_STATIC(0x5ecd70u,5ec);
}
B4c70b5:L4c70b5:{c.instructions+=2;NFSU2_TR(0x4c70b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c70b7:{NFSU2_TR(0x4c70b7);
if(r1(R+518)){{goto L4c70d9;}}
}
B4c70b9:L4c70b9:{c.instructions+=3;NFSU2_TR(0x4c70b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c70bf:{NFSU2_TR(0x4c70bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c70c1:{NFSU2_TR(0x4c70c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c70e0;}}
}
B4c70c3:L4c70c3:{c.instructions+=2;NFSU2_TR(0x4c70c3);
__builtin_memmove((R+4),(R+28),4);
}
B4c70c5:{NFSU2_TR(0x4c70c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c70caull));
TAIL_STATIC(0x5ecd90u,5ec);
}
B4c70ca:L4c70ca:{c.instructions+=3;NFSU2_TR(0x4c70ca);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c70d0:{NFSU2_TR(0x4c70d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c70d7:{NFSU2_TR(0x4c70d7);
{goto L4c70e0;}
}
B4c70d9:L4c70d9:{c.instructions+=1;NFSU2_TR(0x4c70d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c70e0:L4c70e0:{c.instructions+=3;NFSU2_TR(0x4c70e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c70e3:{NFSU2_TR(0x4c70e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c70e7:{NFSU2_TR(0x4c70e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c711a;}}
}
B4c70e9:L4c70e9:{c.instructions+=3;NFSU2_TR(0x4c70e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c70ef:{NFSU2_TR(0x4c70ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c70f1:{NFSU2_TR(0x4c70f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c711a;}}
}
B4c70f3:L4c70f3:{c.instructions+=3;NFSU2_TR(0x4c70f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c70f9:{NFSU2_TR(0x4c70f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c70fb:{NFSU2_TR(0x4c70fb);
if(r1(R+518)){{goto L4c711a;}}
}
B4c70fd:L4c70fd:{c.instructions+=3;NFSU2_TR(0x4c70fd);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B4c7103:{NFSU2_TR(0x4c7103);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7105:{NFSU2_TR(0x4c7105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c711a;}}
}
B4c7107:L4c7107:{c.instructions+=3;NFSU2_TR(0x4c7107);
__builtin_memmove((R+4),gp(0x890108),4);
}
B4c710d:{NFSU2_TR(0x4c710d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c710f:{NFSU2_TR(0x4c710f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c711a;}}
}
B4c7111:L4c7111:{c.instructions+=3;NFSU2_TR(0x4c7111);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7114:{NFSU2_TR(0x4c7114);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7118:{NFSU2_TR(0x4c7118);
{goto L4c7142;}
}
B4c711a:L4c711a:{c.instructions+=5;NFSU2_TR(0x4c711a);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7120:{NFSU2_TR(0x4c7120);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7126:{NFSU2_TR(0x4c7126);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7128:{NFSU2_TR(0x4c7128);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c712b:{NFSU2_TR(0x4c712b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c7138;}}
}
B4c712d:L4c712d:{c.instructions+=3;NFSU2_TR(0x4c712d);
__builtin_memmove((R+0),gp(0x7fbed8),4);
}
B4c7132:{NFSU2_TR(0x4c7132);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7136:{NFSU2_TR(0x4c7136);
{goto L4c7142;}
}
B4c7138:L4c7138:{c.instructions+=2;NFSU2_TR(0x4c7138);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c713e:{NFSU2_TR(0x4c713e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7142:L4c7142:{c.instructions+=8;NFSU2_TR(0x4c7142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7145:{NFSU2_TR(0x4c7145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7148:{NFSU2_TR(0x4c7148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c714b:{NFSU2_TR(0x4c714b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c714c:{NFSU2_TR(0x4c714c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B4c714f:{NFSU2_TR(0x4c714f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4c7151:{NFSU2_TR(0x4c7151);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c7153:{NFSU2_TR(0x4c7153);
if(r1(R+518)){{goto L4c7a6c;}}
}
B4c7159:L4c7159:{c.instructions+=6;NFSU2_TR(0x4c7159);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4c715e:{NFSU2_TR(0x4c715e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7162:{NFSU2_TR(0x4c7162);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7168:{NFSU2_TR(0x4c7168);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c716a:{NFSU2_TR(0x4c716a);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4c716f:{NFSU2_TR(0x4c716f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7190;}}
}
B4c7171:L4c7171:{c.instructions+=4;NFSU2_TR(0x4c7171);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7173:{NFSU2_TR(0x4c7173);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7179:{NFSU2_TR(0x4c7179);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c717d:{NFSU2_TR(0x4c717d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c71db;}}
}
B4c717f:L4c717f:{c.instructions+=2;NFSU2_TR(0x4c717f);
u8 U[4];
w4(U+0,u32(0x8569a25full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7184:{NFSU2_TR(0x4c7184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7189ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c7189:L4c7189:{c.instructions+=4;NFSU2_TR(0x4c7189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c718c:{NFSU2_TR(0x4c718c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c718d:{NFSU2_TR(0x4c718d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c718e:{NFSU2_TR(0x4c718e);
{goto L4c71ad;}
}
B4c7190:L4c7190:{c.instructions+=4;NFSU2_TR(0x4c7190);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7192:{NFSU2_TR(0x4c7192);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7198:{NFSU2_TR(0x4c7198);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c719c:{NFSU2_TR(0x4c719c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c71db;}}
}
B4c719e:L4c719e:{c.instructions+=2;NFSU2_TR(0x4c719e);
u8 U[4];
w4(U+0,u32(0x8569ab44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71a3:{NFSU2_TR(0x4c71a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c71a8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c71a8:L4c71a8:{c.instructions+=3;NFSU2_TR(0x4c71a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71a9:{NFSU2_TR(0x4c71a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c71ac:{NFSU2_TR(0x4c71ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71ad:L4c71ad:{c.instructions+=1;NFSU2_TR(0x4c71ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c71b2ull));
TAIL_STATIC(0x537be0u,537);
}
B4c71b2:L4c71b2:{c.instructions+=4;NFSU2_TR(0x4c71b2);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4c71b7:{NFSU2_TR(0x4c71b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c71ba:{NFSU2_TR(0x4c71ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c71bc:{NFSU2_TR(0x4c71bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c71db;}}
}
B4c71be:L4c71be:{c.instructions+=2;NFSU2_TR(0x4c71be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c71c2:{NFSU2_TR(0x4c71c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c71c7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c71c7:L4c71c7:{c.instructions+=5;NFSU2_TR(0x4c71c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c71ca:{NFSU2_TR(0x4c71ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71cb:{NFSU2_TR(0x4c71cb);
u8 U[4];
w4(U+0,u32(0x795ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71d0:{NFSU2_TR(0x4c71d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71d1:{NFSU2_TR(0x4c71d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c71d6ull));
TAIL_STATIC(0x537be0u,537);
}
B4c71d6:L4c71d6:{c.instructions+=2;NFSU2_TR(0x4c71d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c71d9:{NFSU2_TR(0x4c71d9);
{goto L4c71f0;}
}
B4c71db:L4c71db:{c.instructions+=3;NFSU2_TR(0x4c71db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c71de:{NFSU2_TR(0x4c71de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71df:{NFSU2_TR(0x4c71df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c71e4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c71e4:L4c71e4:{c.instructions+=3;NFSU2_TR(0x4c71e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c71e7:{NFSU2_TR(0x4c71e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c71e8:{NFSU2_TR(0x4c71e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c71edull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c71ed:L4c71ed:{c.instructions+=1;NFSU2_TR(0x4c71ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c71f0:L4c71f0:{c.instructions+=6;NFSU2_TR(0x4c71f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c71f3:{NFSU2_TR(0x4c71f3);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B4c71f9:{NFSU2_TR(0x4c71f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
}
B4c71fe:{NFSU2_TR(0x4c71fe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7201:{NFSU2_TR(0x4c7201);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7202:{NFSU2_TR(0x4c7202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c722d;}}
}
B4c7204:L4c7204:{c.instructions+=8;NFSU2_TR(0x4c7204);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7207:{NFSU2_TR(0x4c7207);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c720b:{NFSU2_TR(0x4c720b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f0ull))));
}
B4c7211:{NFSU2_TR(0x4c7211);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7212:{NFSU2_TR(0x4c7212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7213:{NFSU2_TR(0x4c7213);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7214:{NFSU2_TR(0x4c7214);
__builtin_memmove((R+4),(R+24),4);
}
B4c7216:{NFSU2_TR(0x4c7216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c721bull));
TAIL_STATIC(0x4ab210u,4ab);
}
B4c721b:L4c721b:{c.instructions+=5;NFSU2_TR(0x4c721b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c721e:{NFSU2_TR(0x4c721e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c721f:{NFSU2_TR(0x4c721f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7222:{NFSU2_TR(0x4c7222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7223:{NFSU2_TR(0x4c7223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7228ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4c7228:L4c7228:{c.instructions+=2;NFSU2_TR(0x4c7228);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c722b:{NFSU2_TR(0x4c722b);
{goto L4c728f;}
}
B4c722d:L4c722d:{c.instructions+=4;NFSU2_TR(0x4c722d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7231:{NFSU2_TR(0x4c7231);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4c7234:{NFSU2_TR(0x4c7234);
{u32 ea_=u32(u32(7897628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c723a:{NFSU2_TR(0x4c723a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c723full));
TAIL_STATIC(0x75bed4u,75b);
}
B4c723f:L4c723f:{c.instructions+=3;NFSU2_TR(0x4c723f);
__builtin_memmove((R+12),(R+0),4);
}
B4c7241:{NFSU2_TR(0x4c7241);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c7243:{NFSU2_TR(0x4c7243);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c7246:L4c7246:{c.instructions+=3;NFSU2_TR(0x4c7246);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c7248:{NFSU2_TR(0x4c7248);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c724b:{NFSU2_TR(0x4c724b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c7264;}}
}
B4c724d:L4c724d:{c.instructions+=2;NFSU2_TR(0x4c724d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c7250:{NFSU2_TR(0x4c7250);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c7259;}}
}
B4c7252:L4c7252:{c.instructions+=2;NFSU2_TR(0x4c7252);
u8 U[4];
w4(U+0,u32(0xffc80b0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7257:{NFSU2_TR(0x4c7257);
{goto L4c7279;}
}
B4c7259:L4c7259:{c.instructions+=4;NFSU2_TR(0x4c7259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c725c:{NFSU2_TR(0x4c725c);
u8 U[4];
w4(U+0,u32(0xffccf48aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7261:{NFSU2_TR(0x4c7261);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7262:{NFSU2_TR(0x4c7262);
{goto L4c727d;}
}
B4c7264:L4c7264:{c.instructions+=2;NFSU2_TR(0x4c7264);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c7267:{NFSU2_TR(0x4c7267);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c7274;}}
}
B4c7269:L4c7269:{c.instructions+=4;NFSU2_TR(0x4c7269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c726c:{NFSU2_TR(0x4c726c);
u8 U[4];
w4(U+0,u32(0x7dc80b0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7271:{NFSU2_TR(0x4c7271);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7272:{NFSU2_TR(0x4c7272);
{goto L4c727d;}
}
B4c7274:L4c7274:{c.instructions+=1;NFSU2_TR(0x4c7274);
u8 U[4];
w4(U+0,u32(0x64ccf48aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7279:L4c7279:{c.instructions+=2;NFSU2_TR(0x4c7279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c727c:{NFSU2_TR(0x4c727c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c727d:L4c727d:{c.instructions+=1;NFSU2_TR(0x4c727d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7282ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c7282:L4c7282:{c.instructions+=5;NFSU2_TR(0x4c7282);
__builtin_memmove((R+0),(R+28),4);
}
B4c7284:{NFSU2_TR(0x4c7284);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7287:{NFSU2_TR(0x4c7287);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B4c728a:{NFSU2_TR(0x4c728a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c728d:{NFSU2_TR(0x4c728d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7246u);}goto L4c7246;}}
}
B4c728f:L4c728f:{c.instructions+=4;NFSU2_TR(0x4c728f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c7293:{NFSU2_TR(0x4c7293);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7296:{NFSU2_TR(0x4c7296);
__builtin_memmove((R+4),(R+12),4);
}
B4c7298:{NFSU2_TR(0x4c7298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c729dull));
TAIL_STATIC(0x5ecea0u,5ec);
}
B4c729d:L4c729d:{c.instructions+=5;NFSU2_TR(0x4c729d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c72a1:{NFSU2_TR(0x4c72a1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c72a7:{NFSU2_TR(0x4c72a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c72a9:{NFSU2_TR(0x4c72a9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c72ac:{NFSU2_TR(0x4c72ac);
if(r1(R+514)){{goto L4c7310;}}
}
B4c72ae:L4c72ae:{c.instructions+=3;NFSU2_TR(0x4c72ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c72b4:{NFSU2_TR(0x4c72b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c72b6:{NFSU2_TR(0x4c72b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7310;}}
}
B4c72b8:L4c72b8:{c.instructions+=5;NFSU2_TR(0x4c72b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c72bc:{NFSU2_TR(0x4c72bc);
{u32 ea_=u32(r4(R+28)+u32(500u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c72c2:{NFSU2_TR(0x4c72c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c72c4:{NFSU2_TR(0x4c72c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c72c7:{NFSU2_TR(0x4c72c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7310;}}
}
B4c72c9:L4c72c9:{c.instructions+=3;NFSU2_TR(0x4c72c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c72cf:{NFSU2_TR(0x4c72cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c72d1:{NFSU2_TR(0x4c72d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c72e6;}}
}
B4c72d3:L4c72d3:{c.instructions+=3;NFSU2_TR(0x4c72d3);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4c72d9:{NFSU2_TR(0x4c72d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c72df:{NFSU2_TR(0x4c72df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c72e6:L4c72e6:{c.instructions+=3;NFSU2_TR(0x4c72e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c72ec:{NFSU2_TR(0x4c72ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c72ee:{NFSU2_TR(0x4c72ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7341;}}
}
B4c72f0:L4c72f0:{c.instructions+=6;NFSU2_TR(0x4c72f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c72f3:{NFSU2_TR(0x4c72f3);
w4(R+20,u32(0x1ull));
}
B4c72f8:{NFSU2_TR(0x4c72f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c72f9:{NFSU2_TR(0x4c72f9);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c72fe:{NFSU2_TR(0x4c72fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c72ff:{NFSU2_TR(0x4c72ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7304ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c7304:L4c7304:{c.instructions+=3;NFSU2_TR(0x4c7304);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7307:{NFSU2_TR(0x4c7307);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c730e:{NFSU2_TR(0x4c730e);
{goto L4c7346;}
}
B4c7310:L4c7310:{c.instructions+=3;NFSU2_TR(0x4c7310);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7316:{NFSU2_TR(0x4c7316);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7318:{NFSU2_TR(0x4c7318);
if(r1(R+518)){{goto L4c7341;}}
}
B4c731a:L4c731a:{c.instructions+=6;NFSU2_TR(0x4c731a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c731d:{NFSU2_TR(0x4c731d);
w4(R+20,u32(0x1ull));
}
B4c7322:{NFSU2_TR(0x4c7322);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7323:{NFSU2_TR(0x4c7323);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7328:{NFSU2_TR(0x4c7328);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7329:{NFSU2_TR(0x4c7329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c732eull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c732e:L4c732e:{c.instructions+=4;NFSU2_TR(0x4c732e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7331:{NFSU2_TR(0x4c7331);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7338:{NFSU2_TR(0x4c7338);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c733f:{NFSU2_TR(0x4c733f);
{goto L4c7346;}
}
B4c7341:L4c7341:{c.instructions+=1;NFSU2_TR(0x4c7341);
w4(R+20,u32(0x1ull));
}
B4c7346:L4c7346:{c.instructions+=3;NFSU2_TR(0x4c7346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7349:{NFSU2_TR(0x4c7349);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c734b:{NFSU2_TR(0x4c734b);
if(r1(R+518)){{goto L4c73b6;}}
}
B4c734d:L4c734d:{c.instructions+=4;NFSU2_TR(0x4c734d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7353:{NFSU2_TR(0x4c7353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7359:{NFSU2_TR(0x4c7359);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c735b:{NFSU2_TR(0x4c735b);
{goto L4c7360;}
}
B4c7360:L4c7360:{c.instructions+=3;NFSU2_TR(0x4c7360);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f66a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(s32(s8(r1(U+8)))));
}
B4c7368:{NFSU2_TR(0x4c7368);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c736a:{NFSU2_TR(0x4c736a);
if(r1(R+518)){{goto L4c7397;}}
}
B4c736c:L4c736c:{c.instructions+=3;NFSU2_TR(0x4c736c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c736d:{NFSU2_TR(0x4c736d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B4c7370:{NFSU2_TR(0x4c7370);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7360u);}goto L4c7360;}}
}
B4c7372:L4c7372:{c.instructions+=1;NFSU2_TR(0x4c7372);
w1(R+0,u8(0x58ull));
}
B4c7374:L4c7374:{c.instructions+=5;NFSU2_TR(0x4c7374);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B4c7377:{NFSU2_TR(0x4c7377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7378:{NFSU2_TR(0x4c7378);
u8 U[4];
w4(U+0,u32(0x795abcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c737d:{NFSU2_TR(0x4c737d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c737e:{NFSU2_TR(0x4c737e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7383ull));
TAIL_STATIC(0x537be0u,537);
}
B4c7383:L4c7383:{c.instructions+=3;NFSU2_TR(0x4c7383);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7386:{NFSU2_TR(0x4c7386);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7388:{NFSU2_TR(0x4c7388);
if(r1(R+518)){{goto L4c73a0;}}
}
B4c738a:L4c738a:{c.instructions+=5;NFSU2_TR(0x4c738a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7390:{NFSU2_TR(0x4c7390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7393:{NFSU2_TR(0x4c7393);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7394:{NFSU2_TR(0x4c7394);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7395:{NFSU2_TR(0x4c7395);
{goto L4c73a9;}
}
B4c7397:L4c7397:{c.instructions+=2;NFSU2_TR(0x4c7397);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f66a5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c739e:{NFSU2_TR(0x4c739e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7374u);}goto L4c7374;}
}
B4c73a0:L4c73a0:{c.instructions+=3;NFSU2_TR(0x4c73a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c73a3:{NFSU2_TR(0x4c73a3);
u8 U[4];
w4(U+0,u32(0xffff8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c73a8:{NFSU2_TR(0x4c73a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c73a9:L4c73a9:{c.instructions+=1;NFSU2_TR(0x4c73a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c73aeull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c73ae:L4c73ae:{c.instructions+=2;NFSU2_TR(0x4c73ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c73b1:{NFSU2_TR(0x4c73b1);
w4(R+20,u32(0x1ull));
}
B4c73b6:L4c73b6:{c.instructions+=5;NFSU2_TR(0x4c73b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c73ba:{NFSU2_TR(0x4c73ba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c73c0:{NFSU2_TR(0x4c73c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c73c2:{NFSU2_TR(0x4c73c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c73c5:{NFSU2_TR(0x4c73c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7541;}}
}
B4c73cb:L4c73cb:{c.instructions+=5;NFSU2_TR(0x4c73cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c73cf:{NFSU2_TR(0x4c73cf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c73d5:{NFSU2_TR(0x4c73d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c73d7:{NFSU2_TR(0x4c73d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c73da:{NFSU2_TR(0x4c73da);
if(r1(R+514)){{goto L4c7541;}}
}
B4c73e0:L4c73e0:{c.instructions+=3;NFSU2_TR(0x4c73e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c73e6:{NFSU2_TR(0x4c73e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c73e8:{NFSU2_TR(0x4c73e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c754f;}}
}
B4c73ee:L4c73ee:{c.instructions+=3;NFSU2_TR(0x4c73ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c73f4:{NFSU2_TR(0x4c73f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c73fa:{NFSU2_TR(0x4c73fa);
if(r1(R+518)){{goto L4c7541;}}
}
B4c7400:L4c7400:{c.instructions+=5;NFSU2_TR(0x4c7400);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7404:{NFSU2_TR(0x4c7404);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c740a:{NFSU2_TR(0x4c740a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c740c:{NFSU2_TR(0x4c740c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c740f:{NFSU2_TR(0x4c740f);
if(r1(R+514)){{goto L4c7424;}}
}
B4c7411:L4c7411:{c.instructions+=4;NFSU2_TR(0x4c7411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7414:{NFSU2_TR(0x4c7414);
u8 U[4];
w4(U+0,u32(0x27d2dd45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7419:{NFSU2_TR(0x4c7419);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c741a:{NFSU2_TR(0x4c741a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c741full));
TAIL_STATIC(0x50c900u,50c);
}
B4c741f:L4c741f:{c.instructions+=2;NFSU2_TR(0x4c741f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7422:{NFSU2_TR(0x4c7422);
{goto L4c7473;}
}
B4c7424:L4c7424:{c.instructions+=4;NFSU2_TR(0x4c7424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7427:{NFSU2_TR(0x4c7427);
u8 U[4];
w4(U+0,u32(0x598b065ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c742c:{NFSU2_TR(0x4c742c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c742d:{NFSU2_TR(0x4c742d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7432ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c7432:L4c7432:{c.instructions+=3;NFSU2_TR(0x4c7432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7435:{NFSU2_TR(0x4c7435);
w4(R+4,u32(0x83a9d0ull));
}
B4c743a:{NFSU2_TR(0x4c743a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c743full));
TAIL_STATIC(0x5030c0u,503);
}
B4c743f:L4c743f:{c.instructions+=2;NFSU2_TR(0x4c743f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7441:{NFSU2_TR(0x4c7441);
if(r1(R+518)){{goto L4c7473;}}
}
B4c7443:L4c7443:{c.instructions+=3;NFSU2_TR(0x4c7443);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c7448:{NFSU2_TR(0x4c7448);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c744a:{NFSU2_TR(0x4c744a);
if(r1(R+518)){{goto L4c7473;}}
}
B4c744c:L4c744c:{c.instructions+=2;NFSU2_TR(0x4c744c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c744f:{NFSU2_TR(0x4c744f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7473;}}
}
B4c7451:L4c7451:{c.instructions+=3;NFSU2_TR(0x4c7451);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7457:{NFSU2_TR(0x4c7457);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7459:{NFSU2_TR(0x4c7459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7473;}}
}
B4c745b:L4c745b:{c.instructions+=2;NFSU2_TR(0x4c745b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c7461:{NFSU2_TR(0x4c7461);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c7473;}}
}
B4c7463:L4c7463:{c.instructions+=2;NFSU2_TR(0x4c7463);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c746a:{NFSU2_TR(0x4c746a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7473;}}
}
B4c746c:L4c746c:{c.instructions+=1;NFSU2_TR(0x4c746c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7473:L4c7473:{c.instructions+=5;NFSU2_TR(0x4c7473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7476:{NFSU2_TR(0x4c7476);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7477:{NFSU2_TR(0x4c7477);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c747c:{NFSU2_TR(0x4c747c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c747d:{NFSU2_TR(0x4c747d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7482ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c7482:L4c7482:{c.instructions+=3;NFSU2_TR(0x4c7482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7485:{NFSU2_TR(0x4c7485);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7486:{NFSU2_TR(0x4c7486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c748bull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c748b:L4c748b:{c.instructions+=2;NFSU2_TR(0x4c748b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c748e:{NFSU2_TR(0x4c748e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7495:L4c7495:{c.instructions+=1;NFSU2_TR(0x4c7495);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7499:L4c7499:{c.instructions+=2;NFSU2_TR(0x4c7499);
__builtin_memmove((R+4),(R+12),4);
}
B4c749b:{NFSU2_TR(0x4c749b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c74a0ull));
TAIL_STATIC(0x5ece20u,5ec);
}
B4c74a0:L4c74a0:{c.instructions+=3;NFSU2_TR(0x4c74a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c74a2:{NFSU2_TR(0x4c74a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c74a8:{NFSU2_TR(0x4c74a8);
if(r1(R+518)){{goto L4c7591;}}
}
B4c74ae:L4c74ae:{c.instructions+=2;NFSU2_TR(0x4c74ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c74b0:{NFSU2_TR(0x4c74b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7595;}}
}
B4c74b6:L4c74b6:{c.instructions+=4;NFSU2_TR(0x4c74b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c74b9:{NFSU2_TR(0x4c74b9);
u8 U[4];
w4(U+0,u32(0x75941dc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c74be:{NFSU2_TR(0x4c74be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c74bf:{NFSU2_TR(0x4c74bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c74c4ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c74c4:L4c74c4:{c.instructions+=5;NFSU2_TR(0x4c74c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c74c7:{NFSU2_TR(0x4c74c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c74c8:{NFSU2_TR(0x4c74c8);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c74cd:{NFSU2_TR(0x4c74cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c74ce:{NFSU2_TR(0x4c74ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c74d3ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c74d3:L4c74d3:{c.instructions+=3;NFSU2_TR(0x4c74d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c74d6:{NFSU2_TR(0x4c74d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c74d7:{NFSU2_TR(0x4c74d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c74dcull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c74dc:L4c74dc:{c.instructions+=4;NFSU2_TR(0x4c74dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c74df:{NFSU2_TR(0x4c74df);
w4(R+4,u32(0x83a9d0ull));
}
B4c74e4:{NFSU2_TR(0x4c74e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c74eb:{NFSU2_TR(0x4c74eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c74f0ull));
TAIL_STATIC(0x5030c0u,503);
}
B4c74f0:L4c74f0:{c.instructions+=2;NFSU2_TR(0x4c74f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c74f2:{NFSU2_TR(0x4c74f2);
if(r1(R+518)){{goto L4c75ca;}}
}
B4c74f8:L4c74f8:{c.instructions+=3;NFSU2_TR(0x4c74f8);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c74fd:{NFSU2_TR(0x4c74fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c74ff:{NFSU2_TR(0x4c74ff);
if(r1(R+518)){{goto L4c75ca;}}
}
B4c7505:L4c7505:{c.instructions+=2;NFSU2_TR(0x4c7505);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c7508:{NFSU2_TR(0x4c7508);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c76ff;}}
}
B4c750e:L4c750e:{c.instructions+=3;NFSU2_TR(0x4c750e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7514:{NFSU2_TR(0x4c7514);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7516:{NFSU2_TR(0x4c7516);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c75ca;}}
}
B4c751c:L4c751c:{c.instructions+=2;NFSU2_TR(0x4c751c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c7522:{NFSU2_TR(0x4c7522);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c75ca;}}
}
B4c7528:L4c7528:{c.instructions+=2;NFSU2_TR(0x4c7528);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c752f:{NFSU2_TR(0x4c752f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c75ca;}}
}
B4c7535:L4c7535:{c.instructions+=2;NFSU2_TR(0x4c7535);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c753c:{NFSU2_TR(0x4c753c);
{goto L4c75ca;}
}
B4c7541:L4c7541:{c.instructions+=3;NFSU2_TR(0x4c7541);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7547:{NFSU2_TR(0x4c7547);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7549:{NFSU2_TR(0x4c7549);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7495u);}goto L4c7495;}}
}
B4c754f:L4c754f:{c.instructions+=4;NFSU2_TR(0x4c754f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7552:{NFSU2_TR(0x4c7552);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7557:{NFSU2_TR(0x4c7557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7558:{NFSU2_TR(0x4c7558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c755dull));
TAIL_STATIC(0x51d040u,51d);
}
B4c755d:L4c755d:{c.instructions+=3;NFSU2_TR(0x4c755d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7560:{NFSU2_TR(0x4c7560);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7562:{NFSU2_TR(0x4c7562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7495u);}goto L4c7495;}}
}
B4c7568:L4c7568:{c.instructions+=4;NFSU2_TR(0x4c7568);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c756c:{NFSU2_TR(0x4c756c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c756f:{NFSU2_TR(0x4c756f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7572:{NFSU2_TR(0x4c7572);
if(r1(R+518)){{goto L4c7580;}}
}
B4c7574:L4c7574:{c.instructions+=2;NFSU2_TR(0x4c7574);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7577:{NFSU2_TR(0x4c7577);
if(r1(R+518)){{goto L4c7580;}}
}
B4c7579:L4c7579:{c.instructions+=1;NFSU2_TR(0x4c7579);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7580:L4c7580:{c.instructions+=3;NFSU2_TR(0x4c7580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7583:{NFSU2_TR(0x4c7583);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7584:{NFSU2_TR(0x4c7584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7589ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7589:L4c7589:{c.instructions+=2;NFSU2_TR(0x4c7589);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c758c:{NFSU2_TR(0x4c758c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7499u);}goto L4c7499;}
}
B4c7591:L4c7591:{c.instructions+=2;NFSU2_TR(0x4c7591);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7593:{NFSU2_TR(0x4c7593);
if(r1(R+518)){{goto L4c75ca;}}
}
B4c7595:L4c7595:{c.instructions+=4;NFSU2_TR(0x4c7595);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7598:{NFSU2_TR(0x4c7598);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c759d:{NFSU2_TR(0x4c759d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c759e:{NFSU2_TR(0x4c759e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c75a3ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c75a3:L4c75a3:{c.instructions+=3;NFSU2_TR(0x4c75a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c75a6:{NFSU2_TR(0x4c75a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c75a8:{NFSU2_TR(0x4c75a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c75ca;}}
}
B4c75aa:L4c75aa:{c.instructions+=3;NFSU2_TR(0x4c75aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c75ad:{NFSU2_TR(0x4c75ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c75b0:{NFSU2_TR(0x4c75b0);
if(r1(R+518)){{goto L4c75be;}}
}
B4c75b2:L4c75b2:{c.instructions+=2;NFSU2_TR(0x4c75b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c75b5:{NFSU2_TR(0x4c75b5);
if(r1(R+518)){{goto L4c75be;}}
}
B4c75b7:L4c75b7:{c.instructions+=1;NFSU2_TR(0x4c75b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c75be:L4c75be:{c.instructions+=3;NFSU2_TR(0x4c75be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c75c1:{NFSU2_TR(0x4c75c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c75c2:{NFSU2_TR(0x4c75c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c75c7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c75c7:L4c75c7:{c.instructions+=1;NFSU2_TR(0x4c75c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c75ca:L4c75ca:{c.instructions+=3;NFSU2_TR(0x4c75ca);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c75d0:{NFSU2_TR(0x4c75d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c75d3:{NFSU2_TR(0x4c75d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c76ff;}}
}
B4c75d9:L4c75d9:{c.instructions+=3;NFSU2_TR(0x4c75d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c75df:{NFSU2_TR(0x4c75df);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4c75e5:{NFSU2_TR(0x4c75e5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c76ff;}}
}
B4c75eb:L4c75eb:{c.instructions+=2;NFSU2_TR(0x4c75eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c75ed:{NFSU2_TR(0x4c75ed);
if(r1(R+518)){{goto L4c76ff;}}
}
B4c75f3:L4c75f3:{c.instructions+=3;NFSU2_TR(0x4c75f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c75f9:{NFSU2_TR(0x4c75f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c75fb:{NFSU2_TR(0x4c75fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c76ff;}}
}
B4c7601:L4c7601:{c.instructions+=3;NFSU2_TR(0x4c7601);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7607:{NFSU2_TR(0x4c7607);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7609:{NFSU2_TR(0x4c7609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c76ff;}}
}
B4c760f:L4c760f:{c.instructions+=5;NFSU2_TR(0x4c760f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7613:{NFSU2_TR(0x4c7613);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7619:{NFSU2_TR(0x4c7619);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c761b:{NFSU2_TR(0x4c761b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c761e:{NFSU2_TR(0x4c761e);
if(r1(R+514)){{goto L4c7659;}}
}
B4c7620:L4c7620:{c.instructions+=3;NFSU2_TR(0x4c7620);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7626:{NFSU2_TR(0x4c7626);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7628:{NFSU2_TR(0x4c7628);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7659;}}
}
B4c762a:L4c762a:{c.instructions+=4;NFSU2_TR(0x4c762a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c762d:{NFSU2_TR(0x4c762d);
u8 U[4];
w4(U+0,u32(0x2303d76cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7632:{NFSU2_TR(0x4c7632);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7633:{NFSU2_TR(0x4c7633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7638ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c7638:L4c7638:{c.instructions+=5;NFSU2_TR(0x4c7638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c763b:{NFSU2_TR(0x4c763b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c763c:{NFSU2_TR(0x4c763c);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7641:{NFSU2_TR(0x4c7641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7642:{NFSU2_TR(0x4c7642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7647ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c7647:L4c7647:{c.instructions+=3;NFSU2_TR(0x4c7647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c764a:{NFSU2_TR(0x4c764a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c764b:{NFSU2_TR(0x4c764b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7650ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7650:L4c7650:{c.instructions+=2;NFSU2_TR(0x4c7650);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7657:{NFSU2_TR(0x4c7657);
{goto L4c76a1;}
}
B4c7659:L4c7659:{c.instructions+=5;NFSU2_TR(0x4c7659);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c765d:{NFSU2_TR(0x4c765d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7663:{NFSU2_TR(0x4c7663);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7665:{NFSU2_TR(0x4c7665);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c7668:{NFSU2_TR(0x4c7668);
if(r1(R+514)){{goto L4c76a4;}}
}
B4c766a:L4c766a:{c.instructions+=3;NFSU2_TR(0x4c766a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7670:{NFSU2_TR(0x4c7670);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7672:{NFSU2_TR(0x4c7672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c76a4;}}
}
B4c7674:L4c7674:{c.instructions+=4;NFSU2_TR(0x4c7674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7677:{NFSU2_TR(0x4c7677);
u8 U[4];
w4(U+0,u32(0x27d75cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c767c:{NFSU2_TR(0x4c767c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c767d:{NFSU2_TR(0x4c767d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7682ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c7682:L4c7682:{c.instructions+=5;NFSU2_TR(0x4c7682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7685:{NFSU2_TR(0x4c7685);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7686:{NFSU2_TR(0x4c7686);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c768b:{NFSU2_TR(0x4c768b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c768c:{NFSU2_TR(0x4c768c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7691ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c7691:L4c7691:{c.instructions+=3;NFSU2_TR(0x4c7691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7694:{NFSU2_TR(0x4c7694);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7695:{NFSU2_TR(0x4c7695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c769aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c769a:L4c769a:{c.instructions+=1;NFSU2_TR(0x4c769a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c76a1:L4c76a1:{c.instructions+=1;NFSU2_TR(0x4c76a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c76a4:L4c76a4:{c.instructions+=2;NFSU2_TR(0x4c76a4);
w4(R+4,u32(0x83a9d0ull));
}
B4c76a9:{NFSU2_TR(0x4c76a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c76aeull));
TAIL_STATIC(0x5030c0u,503);
}
B4c76ae:L4c76ae:{c.instructions+=2;NFSU2_TR(0x4c76ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c76b0:{NFSU2_TR(0x4c76b0);
if(r1(R+518)){{goto L4c777d;}}
}
B4c76b6:L4c76b6:{c.instructions+=3;NFSU2_TR(0x4c76b6);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c76bb:{NFSU2_TR(0x4c76bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c76bd:{NFSU2_TR(0x4c76bd);
if(r1(R+518)){{goto L4c777d;}}
}
B4c76c3:L4c76c3:{c.instructions+=2;NFSU2_TR(0x4c76c3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c76c6:{NFSU2_TR(0x4c76c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c777d;}}
}
B4c76cc:L4c76cc:{c.instructions+=3;NFSU2_TR(0x4c76cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c76d2:{NFSU2_TR(0x4c76d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c76d4:{NFSU2_TR(0x4c76d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c777d;}}
}
B4c76da:L4c76da:{c.instructions+=2;NFSU2_TR(0x4c76da);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c76e0:{NFSU2_TR(0x4c76e0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c777d;}}
}
B4c76e6:L4c76e6:{c.instructions+=2;NFSU2_TR(0x4c76e6);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c76ed:{NFSU2_TR(0x4c76ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c777d;}}
}
B4c76f3:L4c76f3:{c.instructions+=2;NFSU2_TR(0x4c76f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c76fa:{NFSU2_TR(0x4c76fa);
{goto L4c777d;}
}
B4c76ff:L4c76ff:{c.instructions+=3;NFSU2_TR(0x4c76ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7705:{NFSU2_TR(0x4c7705);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7707:{NFSU2_TR(0x4c7707);
if(r1(R+518)){{goto L4c773e;}}
}
B4c7709:L4c7709:{c.instructions+=4;NFSU2_TR(0x4c7709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c770c:{NFSU2_TR(0x4c770c);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7711:{NFSU2_TR(0x4c7711);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7712:{NFSU2_TR(0x4c7712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7717ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c7717:L4c7717:{c.instructions+=3;NFSU2_TR(0x4c7717);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c771a:{NFSU2_TR(0x4c771a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c771c:{NFSU2_TR(0x4c771c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c773e;}}
}
B4c771e:L4c771e:{c.instructions+=3;NFSU2_TR(0x4c771e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7721:{NFSU2_TR(0x4c7721);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7724:{NFSU2_TR(0x4c7724);
if(r1(R+518)){{goto L4c7732;}}
}
B4c7726:L4c7726:{c.instructions+=2;NFSU2_TR(0x4c7726);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7729:{NFSU2_TR(0x4c7729);
if(r1(R+518)){{goto L4c7732;}}
}
B4c772b:L4c772b:{c.instructions+=1;NFSU2_TR(0x4c772b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7732:L4c7732:{c.instructions+=3;NFSU2_TR(0x4c7732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7735:{NFSU2_TR(0x4c7735);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7736:{NFSU2_TR(0x4c7736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c773bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c773b:L4c773b:{c.instructions+=1;NFSU2_TR(0x4c773b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c773e:L4c773e:{c.instructions+=3;NFSU2_TR(0x4c773e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7744:{NFSU2_TR(0x4c7744);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7746:{NFSU2_TR(0x4c7746);
if(r1(R+518)){{goto L4c777d;}}
}
B4c7748:L4c7748:{c.instructions+=4;NFSU2_TR(0x4c7748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c774b:{NFSU2_TR(0x4c774b);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7750:{NFSU2_TR(0x4c7750);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7751:{NFSU2_TR(0x4c7751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7756ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c7756:L4c7756:{c.instructions+=3;NFSU2_TR(0x4c7756);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7759:{NFSU2_TR(0x4c7759);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c775b:{NFSU2_TR(0x4c775b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c777d;}}
}
B4c775d:L4c775d:{c.instructions+=3;NFSU2_TR(0x4c775d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7760:{NFSU2_TR(0x4c7760);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7763:{NFSU2_TR(0x4c7763);
if(r1(R+518)){{goto L4c7771;}}
}
B4c7765:L4c7765:{c.instructions+=2;NFSU2_TR(0x4c7765);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7768:{NFSU2_TR(0x4c7768);
if(r1(R+518)){{goto L4c7771;}}
}
B4c776a:L4c776a:{c.instructions+=1;NFSU2_TR(0x4c776a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7771:L4c7771:{c.instructions+=3;NFSU2_TR(0x4c7771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7774:{NFSU2_TR(0x4c7774);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7775:{NFSU2_TR(0x4c7775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c777aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c777a:L4c777a:{c.instructions+=1;NFSU2_TR(0x4c777a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c777d:L4c777d:{c.instructions+=5;NFSU2_TR(0x4c777d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7780:{NFSU2_TR(0x4c7780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7786:{NFSU2_TR(0x4c7786);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c7789:{NFSU2_TR(0x4c7789);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7791:{NFSU2_TR(0x4c7791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7796ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4c7796:L4c7796:{c.instructions+=7;NFSU2_TR(0x4c7796);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B4c7799:{NFSU2_TR(0x4c7799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c779c:{NFSU2_TR(0x4c779c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4c779e:{NFSU2_TR(0x4c779e);
{u32 ea_=u32((r4(R+0)*4u)+u32(8372064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c77a5:{NFSU2_TR(0x4c77a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c77a8:{NFSU2_TR(0x4c77a8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c77aa:{NFSU2_TR(0x4c77aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c77d7;}}
}
B4c77ac:L4c77ac:{c.instructions+=8;NFSU2_TR(0x4c77ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c77af:{NFSU2_TR(0x4c77af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c77b1:{NFSU2_TR(0x4c77b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c77b5:{NFSU2_TR(0x4c77b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c77b8:{NFSU2_TR(0x4c77b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c77ba:{NFSU2_TR(0x4c77ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c77bb:{NFSU2_TR(0x4c77bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c77bc:{NFSU2_TR(0x4c77bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c77c1ull));
TAIL_STATIC(0x594f20u,594);
}
B4c77c1:L4c77c1:{c.instructions+=6;NFSU2_TR(0x4c77c1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c77c5:{NFSU2_TR(0x4c77c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c77cb:{NFSU2_TR(0x4c77cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c77ce:{NFSU2_TR(0x4c77ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c77cf:{NFSU2_TR(0x4c77cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c77d2:{NFSU2_TR(0x4c77d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c77d7ull));
TAIL_STATIC(0x594f00u,594);
}
B4c77d7:L4c77d7:{c.instructions+=5;NFSU2_TR(0x4c77d7);
{u32 ea_=u32(u32(7953128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c77dd:{NFSU2_TR(0x4c77dd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4c77df:{NFSU2_TR(0x4c77df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c77e1:{NFSU2_TR(0x4c77e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c77e4:{NFSU2_TR(0x4c77e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c77f2;}}
}
B4c77e6:L4c77e6:{c.instructions+=3;NFSU2_TR(0x4c77e6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c77e8:{NFSU2_TR(0x4c77e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x43fa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c77f0:{NFSU2_TR(0x4c77f0);
{goto L4c77f6;}
}
B4c77f2:L4c77f2:{c.instructions+=1;NFSU2_TR(0x4c77f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c77f6:L4c77f6:{c.instructions+=4;NFSU2_TR(0x4c77f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c77fc:{NFSU2_TR(0x4c77fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c77fd:{NFSU2_TR(0x4c77fd);
__builtin_memmove((R+4),(R+12),4);
}
B4c77ff:{NFSU2_TR(0x4c77ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7804ull));
TAIL_STATIC(0x5ecd30u,5ec);
}
B4c7804:L4c7804:{c.instructions+=11;NFSU2_TR(0x4c7804);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c7808:{NFSU2_TR(0x4c7808);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7810:{NFSU2_TR(0x4c7810);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7818:{NFSU2_TR(0x4c7818);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c781c:{NFSU2_TR(0x4c781c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7824:{NFSU2_TR(0x4c7824);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c782a:{NFSU2_TR(0x4c782a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x43400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7832:{NFSU2_TR(0x4c7832);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7836:{NFSU2_TR(0x4c7836);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7838:{NFSU2_TR(0x4c7838);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c783b:{NFSU2_TR(0x4c783b);
if(r1(R+514)){{goto L4c784c;}}
}
B4c783d:L4c783d:{c.instructions+=5;NFSU2_TR(0x4c783d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7841:{NFSU2_TR(0x4c7841);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7845:{NFSU2_TR(0x4c7845);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7847:{NFSU2_TR(0x4c7847);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c784a:{NFSU2_TR(0x4c784a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c7857;}}
}
B4c784c:L4c784c:{c.instructions+=2;NFSU2_TR(0x4c784c);
__builtin_memmove((R+4),(R+12),4);
}
B4c784e:{NFSU2_TR(0x4c784e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7853ull));
TAIL_STATIC(0x5ecd70u,5ec);
}
B4c7853:L4c7853:{c.instructions+=2;NFSU2_TR(0x4c7853);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7855:{NFSU2_TR(0x4c7855);
if(r1(R+518)){{goto L4c7878;}}
}
B4c7857:L4c7857:{c.instructions+=3;NFSU2_TR(0x4c7857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c785a:{NFSU2_TR(0x4c785a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c785b:{NFSU2_TR(0x4c785b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7860ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7860:L4c7860:{c.instructions+=5;NFSU2_TR(0x4c7860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7866:{NFSU2_TR(0x4c7866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7869:{NFSU2_TR(0x4c7869);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c786a:{NFSU2_TR(0x4c786a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c786b:{NFSU2_TR(0x4c786b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7870ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c7870:L4c7870:{c.instructions+=2;NFSU2_TR(0x4c7870);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7873:{NFSU2_TR(0x4c7873);
{goto L4c7a6b;}
}
B4c7878:L4c7878:{c.instructions+=5;NFSU2_TR(0x4c7878);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c787c:{NFSU2_TR(0x4c787c);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7882:{NFSU2_TR(0x4c7882);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7884:{NFSU2_TR(0x4c7884);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c7887:{NFSU2_TR(0x4c7887);
if(r1(R+514)){{goto L4c78d2;}}
}
B4c7889:L4c7889:{c.instructions+=2;NFSU2_TR(0x4c7889);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c788f:{NFSU2_TR(0x4c788f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c78a2;}}
}
B4c7891:L4c7891:{c.instructions+=4;NFSU2_TR(0x4c7891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7894:{NFSU2_TR(0x4c7894);
u8 U[4];
w4(U+0,u32(0xff800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7899:{NFSU2_TR(0x4c7899);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c789a:{NFSU2_TR(0x4c789a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c789full));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c789f:L4c789f:{c.instructions+=1;NFSU2_TR(0x4c789f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c78a2:L4c78a2:{c.instructions+=4;NFSU2_TR(0x4c78a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c78a5:{NFSU2_TR(0x4c78a5);
u8 U[4];
w4(U+0,u32(0x795adcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78aa:{NFSU2_TR(0x4c78aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78ab:{NFSU2_TR(0x4c78ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c78b0ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c78b0:L4c78b0:{c.instructions+=3;NFSU2_TR(0x4c78b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c78b3:{NFSU2_TR(0x4c78b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c78b5:{NFSU2_TR(0x4c78b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7a5f;}}
}
B4c78bb:L4c78bb:{c.instructions+=5;NFSU2_TR(0x4c78bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c78be:{NFSU2_TR(0x4c78be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78bf:{NFSU2_TR(0x4c78bf);
u8 U[4];
w4(U+0,u32(0x795adcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78c4:{NFSU2_TR(0x4c78c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78c5:{NFSU2_TR(0x4c78c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c78caull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c78ca:L4c78ca:{c.instructions+=2;NFSU2_TR(0x4c78ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c78cd:{NFSU2_TR(0x4c78cd);
{goto L4c7a5f;}
}
B4c78d2:L4c78d2:{c.instructions+=5;NFSU2_TR(0x4c78d2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c78d6:{NFSU2_TR(0x4c78d6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c78dc:{NFSU2_TR(0x4c78dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c78de:{NFSU2_TR(0x4c78de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c78e1:{NFSU2_TR(0x4c78e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7974;}}
}
B4c78e7:L4c78e7:{c.instructions+=2;NFSU2_TR(0x4c78e7);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c78ed:{NFSU2_TR(0x4c78ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7900;}}
}
B4c78ef:L4c78ef:{c.instructions+=4;NFSU2_TR(0x4c78ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c78f2:{NFSU2_TR(0x4c78f2);
u8 U[4];
w4(U+0,u32(0xff00ff00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78f7:{NFSU2_TR(0x4c78f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c78f8:{NFSU2_TR(0x4c78f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c78fdull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c78fd:L4c78fd:{c.instructions+=1;NFSU2_TR(0x4c78fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7900:L4c7900:{c.instructions+=4;NFSU2_TR(0x4c7900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7903:{NFSU2_TR(0x4c7903);
u8 U[4];
w4(U+0,u32(0x795ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7908:{NFSU2_TR(0x4c7908);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7909:{NFSU2_TR(0x4c7909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c790eull));
TAIL_STATIC(0x51d040u,51d);
}
B4c790e:L4c790e:{c.instructions+=3;NFSU2_TR(0x4c790e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7911:{NFSU2_TR(0x4c7911);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7913:{NFSU2_TR(0x4c7913);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7927;}}
}
B4c7915:L4c7915:{c.instructions+=5;NFSU2_TR(0x4c7915);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7918:{NFSU2_TR(0x4c7918);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7919:{NFSU2_TR(0x4c7919);
u8 U[4];
w4(U+0,u32(0x795ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c791e:{NFSU2_TR(0x4c791e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c791f:{NFSU2_TR(0x4c791f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7924ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c7924:L4c7924:{c.instructions+=1;NFSU2_TR(0x4c7924);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7927:L4c7927:{c.instructions+=2;NFSU2_TR(0x4c7927);
w4(R+4,u32(0x83a9d0ull));
}
B4c792c:{NFSU2_TR(0x4c792c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7931ull));
TAIL_STATIC(0x5030c0u,503);
}
B4c7931:L4c7931:{c.instructions+=2;NFSU2_TR(0x4c7931);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7933:{NFSU2_TR(0x4c7933);
if(r1(R+518)){{goto L4c7a5f;}}
}
B4c7939:L4c7939:{c.instructions+=3;NFSU2_TR(0x4c7939);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4c793e:{NFSU2_TR(0x4c793e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7940:{NFSU2_TR(0x4c7940);
if(r1(R+518)){{goto L4c7a5f;}}
}
B4c7946:L4c7946:{c.instructions+=2;NFSU2_TR(0x4c7946);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c7949:{NFSU2_TR(0x4c7949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7a5f;}}
}
B4c794f:L4c794f:{c.instructions+=2;NFSU2_TR(0x4c794f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4c7955:{NFSU2_TR(0x4c7955);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c7a5f;}}
}
B4c795b:L4c795b:{c.instructions+=2;NFSU2_TR(0x4c795b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c7962:{NFSU2_TR(0x4c7962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7a5f;}}
}
B4c7968:L4c7968:{c.instructions+=2;NFSU2_TR(0x4c7968);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c796f:{NFSU2_TR(0x4c796f);
{goto L4c7a5f;}
}
B4c7974:L4c7974:{c.instructions+=3;NFSU2_TR(0x4c7974);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c797a:{NFSU2_TR(0x4c797a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c797c:{NFSU2_TR(0x4c797c);
if(r1(R+518)){{goto L4c7a5f;}}
}
B4c7982:L4c7982:{c.instructions+=2;NFSU2_TR(0x4c7982);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7988:{NFSU2_TR(0x4c7988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c79ec;}}
}
B4c798a:L4c798a:{c.instructions+=7;NFSU2_TR(0x4c798a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7990:{NFSU2_TR(0x4c7990);
__builtin_memmove((R+4),(R+0),4);
}
B4c7992:{NFSU2_TR(0x4c7992);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4c7995:{NFSU2_TR(0x4c7995);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4c7997:{NFSU2_TR(0x4c7997);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c799b:{NFSU2_TR(0x4c799b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c799f:{NFSU2_TR(0x4c799f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c79a7;}}
}
B4c79a1:L4c79a1:{c.instructions+=1;NFSU2_TR(0x4c79a1);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c79a7:L4c79a7:{c.instructions+=14;NFSU2_TR(0x4c79a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4c79ae:{NFSU2_TR(0x4c79ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4c79b5:{NFSU2_TR(0x4c79b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c79b9:{NFSU2_TR(0x4c79b9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B4c79be:{NFSU2_TR(0x4c79be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4c79c0:{NFSU2_TR(0x4c79c0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c79c4:{NFSU2_TR(0x4c79c4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c79c8:{NFSU2_TR(0x4c79c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c79cc:{NFSU2_TR(0x4c79cc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c79d0:{NFSU2_TR(0x4c79d0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c79d4:{NFSU2_TR(0x4c79d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c79d8:{NFSU2_TR(0x4c79d8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c79dc:{NFSU2_TR(0x4c79dc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c79e0:{NFSU2_TR(0x4c79e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c79e8;}}
}
B4c79e2:L4c79e2:{c.instructions+=1;NFSU2_TR(0x4c79e2);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c79e8:L4c79e8:{c.instructions+=1;NFSU2_TR(0x4c79e8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c79ec:L4c79ec:{c.instructions+=4;NFSU2_TR(0x4c79ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c79ef:{NFSU2_TR(0x4c79ef);
u8 U[4];
w4(U+0,u32(0x795ac4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c79f4:{NFSU2_TR(0x4c79f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c79f5:{NFSU2_TR(0x4c79f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c79faull));
TAIL_STATIC(0x51d040u,51d);
}
B4c79fa:L4c79fa:{c.instructions+=3;NFSU2_TR(0x4c79fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c79fd:{NFSU2_TR(0x4c79fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c79ff:{NFSU2_TR(0x4c79ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7a13;}}
}
B4c7a01:L4c7a01:{c.instructions+=5;NFSU2_TR(0x4c7a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7a04:{NFSU2_TR(0x4c7a04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a05:{NFSU2_TR(0x4c7a05);
u8 U[4];
w4(U+0,u32(0x795ac4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a0a:{NFSU2_TR(0x4c7a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a0b:{NFSU2_TR(0x4c7a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a10ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c7a10:L4c7a10:{c.instructions+=1;NFSU2_TR(0x4c7a10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7a13:L4c7a13:{c.instructions+=15;NFSU2_TR(0x4c7a13);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7a17:{NFSU2_TR(0x4c7a17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a18:{NFSU2_TR(0x4c7a18);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c7a1c:{NFSU2_TR(0x4c7a1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c7a20:{NFSU2_TR(0x4c7a20);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7a24:{NFSU2_TR(0x4c7a24);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c7a28:{NFSU2_TR(0x4c7a28);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7a2e:{NFSU2_TR(0x4c7a2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c7a32:{NFSU2_TR(0x4c7a32);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4c7a34:{NFSU2_TR(0x4c7a34);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7a37:{NFSU2_TR(0x4c7a37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a38:{NFSU2_TR(0x4c7a38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a39:{NFSU2_TR(0x4c7a39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a3a:{NFSU2_TR(0x4c7a3a);
__builtin_memmove((R+4),(R+24),4);
}
B4c7a3c:{NFSU2_TR(0x4c7a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a41ull));
TAIL_STATIC(0x4ab0b0u,4ab);
}
B4c7a41:L4c7a41:{c.instructions+=2;NFSU2_TR(0x4c7a41);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7a47:{NFSU2_TR(0x4c7a47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7a5f;}}
}
B4c7a49:L4c7a49:{c.instructions+=2;NFSU2_TR(0x4c7a49);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c7a4d:{NFSU2_TR(0x4c7a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a52ull));
TAIL_STATIC(0x4a9e30u,4a9);
}
B4c7a52:L4c7a52:{c.instructions+=4;NFSU2_TR(0x4c7a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7a55:{NFSU2_TR(0x4c7a55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a56:{NFSU2_TR(0x4c7a56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a57:{NFSU2_TR(0x4c7a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a5cull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c7a5c:L4c7a5c:{c.instructions+=1;NFSU2_TR(0x4c7a5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7a5f:L4c7a5f:{c.instructions+=3;NFSU2_TR(0x4c7a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7a62:{NFSU2_TR(0x4c7a62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a63:{NFSU2_TR(0x4c7a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a68ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7a68:L4c7a68:{c.instructions+=1;NFSU2_TR(0x4c7a68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c7a6b:L4c7a6b:{c.instructions+=1;NFSU2_TR(0x4c7a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c7a6c:L4c7a6c:{c.instructions+=6;NFSU2_TR(0x4c7a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7a72:{NFSU2_TR(0x4c7a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7a78:{NFSU2_TR(0x4c7a78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7a7e:{NFSU2_TR(0x4c7a7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7a80:{NFSU2_TR(0x4c7a80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c7a81:{NFSU2_TR(0x4c7a81);
if(r1(R+518)){{goto L4c7a98;}}
}
B4c7a83:L4c7a83:{c.instructions+=3;NFSU2_TR(0x4c7a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7a86:{NFSU2_TR(0x4c7a86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a87:{NFSU2_TR(0x4c7a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a8cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7a8c:L4c7a8c:{c.instructions+=3;NFSU2_TR(0x4c7a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7a8f:{NFSU2_TR(0x4c7a8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7a90:{NFSU2_TR(0x4c7a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7a95ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7a95:L4c7a95:{c.instructions+=1;NFSU2_TR(0x4c7a95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7a98:L4c7a98:{c.instructions+=4;NFSU2_TR(0x4c7a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c7a99:{NFSU2_TR(0x4c7a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7a9a:{NFSU2_TR(0x4c7a9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c7a9d:{NFSU2_TR(0x4c7a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7aa0:L4c7aa0:{c.instructions+=10;NFSU2_TR(0x4c7aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7aa1:{NFSU2_TR(0x4c7aa1);
__builtin_memmove((R+24),(R+4),4);
}
B4c7aa3:{NFSU2_TR(0x4c7aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7aa6:{NFSU2_TR(0x4c7aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7aa9:{NFSU2_TR(0x4c7aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7aac:{NFSU2_TR(0x4c7aac);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4c7aae:{NFSU2_TR(0x4c7aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7ab1:{NFSU2_TR(0x4c7ab1);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4c7ab3:{NFSU2_TR(0x4c7ab3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c7ab5:{NFSU2_TR(0x4c7ab5);
if(r1(R+518)){{goto L4c7b1a;}}
}
B4c7ab7:L4c7ab7:{c.instructions+=3;NFSU2_TR(0x4c7ab7);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7abe:{NFSU2_TR(0x4c7abe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ac0:{NFSU2_TR(0x4c7ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7af0;}}
}
B4c7ac2:L4c7ac2:{c.instructions+=6;NFSU2_TR(0x4c7ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7ac6:{NFSU2_TR(0x4c7ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7ac9:{NFSU2_TR(0x4c7ac9);
u8 U[4];
w4(U+0,u32(0x40a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ace:{NFSU2_TR(0x4c7ace);
u8 U[4];
w4(U+0,u32(0x42d20000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ad3:{NFSU2_TR(0x4c7ad3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ad8:{NFSU2_TR(0x4c7ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7addull));
TAIL_STATIC(0x5eccd0u,5ec);
}
B4c7add:L4c7add:{c.instructions+=6;NFSU2_TR(0x4c7add);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ade:{NFSU2_TR(0x4c7ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7ae1:{NFSU2_TR(0x4c7ae1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7ae4:{NFSU2_TR(0x4c7ae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ae5:{NFSU2_TR(0x4c7ae5);
__builtin_memmove((R+4),(R+24),4);
}
B4c7ae7:{NFSU2_TR(0x4c7ae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7aecull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7aec:L4c7aec:{c.instructions+=2;NFSU2_TR(0x4c7aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7aed:{NFSU2_TR(0x4c7aed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7af0:L4c7af0:{c.instructions+=6;NFSU2_TR(0x4c7af0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7af4:{NFSU2_TR(0x4c7af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7af7:{NFSU2_TR(0x4c7af7);
u8 U[4];
w4(U+0,u32(0x41c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7afc:{NFSU2_TR(0x4c7afc);
u8 U[4];
w4(U+0,u32(0x41c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b01:{NFSU2_TR(0x4c7b01);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b06:{NFSU2_TR(0x4c7b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7b0bull));
TAIL_STATIC(0x5eccd0u,5ec);
}
B4c7b0b:L4c7b0b:{c.instructions+=6;NFSU2_TR(0x4c7b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7b0e:{NFSU2_TR(0x4c7b0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b0f:{NFSU2_TR(0x4c7b0f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7b12:{NFSU2_TR(0x4c7b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b13:{NFSU2_TR(0x4c7b13);
__builtin_memmove((R+4),(R+24),4);
}
B4c7b15:{NFSU2_TR(0x4c7b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7b1aull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7b1a:L4c7b1a:{c.instructions+=2;NFSU2_TR(0x4c7b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7b1b:{NFSU2_TR(0x4c7b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7b20:L4c7b20:{c.instructions+=10;NFSU2_TR(0x4c7b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b21:{NFSU2_TR(0x4c7b21);
__builtin_memmove((R+24),(R+4),4);
}
B4c7b23:{NFSU2_TR(0x4c7b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7b26:{NFSU2_TR(0x4c7b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7b29:{NFSU2_TR(0x4c7b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7b2c:{NFSU2_TR(0x4c7b2c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4c7b2e:{NFSU2_TR(0x4c7b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7b31:{NFSU2_TR(0x4c7b31);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4c7b33:{NFSU2_TR(0x4c7b33);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c7b35:{NFSU2_TR(0x4c7b35);
if(r1(R+518)){{goto L4c7e11;}}
}
B4c7b3b:L4c7b3b:{c.instructions+=4;NFSU2_TR(0x4c7b3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7b3f:{NFSU2_TR(0x4c7b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7b42:{NFSU2_TR(0x4c7b42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c7b45:{NFSU2_TR(0x4c7b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7b4aull));
TAIL_STATIC(0x5925b0u,592);
}
B4c7b4a:L4c7b4a:{c.instructions+=5;NFSU2_TR(0x4c7b4a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c7b4e:{NFSU2_TR(0x4c7b4e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7b54:{NFSU2_TR(0x4c7b54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7b56:{NFSU2_TR(0x4c7b56);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c7b59:{NFSU2_TR(0x4c7b59);
if(r1(R+514)){{goto L4c7b74;}}
}
B4c7b5b:L4c7b5b:{c.instructions+=3;NFSU2_TR(0x4c7b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7b5e:{NFSU2_TR(0x4c7b5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b5f:{NFSU2_TR(0x4c7b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7b64ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7b64:L4c7b64:{c.instructions+=3;NFSU2_TR(0x4c7b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7b67:{NFSU2_TR(0x4c7b67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7b68:{NFSU2_TR(0x4c7b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7b6dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7b6d:L4c7b6d:{c.instructions+=3;NFSU2_TR(0x4c7b6d);
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
B4c7b70:{NFSU2_TR(0x4c7b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7b71:{NFSU2_TR(0x4c7b71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7b74:L4c7b74:{c.instructions+=5;NFSU2_TR(0x4c7b74);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7b78:{NFSU2_TR(0x4c7b78);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7b7e:{NFSU2_TR(0x4c7b7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7b80:{NFSU2_TR(0x4c7b80);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c7b83:{NFSU2_TR(0x4c7b83);
if(r1(R+514)){{goto L4c7cb1;}}
}
B4c7b89:L4c7b89:{c.instructions+=2;NFSU2_TR(0x4c7b89);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7b90:{NFSU2_TR(0x4c7b90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7c40;}}
}
B4c7b96:L4c7b96:{c.instructions+=3;NFSU2_TR(0x4c7b96);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c7b9b:{NFSU2_TR(0x4c7b9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7b9d:{NFSU2_TR(0x4c7b9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7ba8;}}
}
B4c7b9f:L4c7b9f:{c.instructions+=3;NFSU2_TR(0x4c7b9f);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c7ba4:{NFSU2_TR(0x4c7ba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7ba6:{NFSU2_TR(0x4c7ba6);
if(r1(R+518)){{goto L4c7be2;}}
}
B4c7ba8:L4c7ba8:{c.instructions+=3;NFSU2_TR(0x4c7ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7bab:{NFSU2_TR(0x4c7bab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bac:{NFSU2_TR(0x4c7bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7bb1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7bb1:L4c7bb1:{c.instructions+=3;NFSU2_TR(0x4c7bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7bb4:{NFSU2_TR(0x4c7bb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bb5:{NFSU2_TR(0x4c7bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7bbaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7bba:L4c7bba:{c.instructions+=11;NFSU2_TR(0x4c7bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7bbe:{NFSU2_TR(0x4c7bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7bc1:{NFSU2_TR(0x4c7bc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7bc4:{NFSU2_TR(0x4c7bc4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bc6:{NFSU2_TR(0x4c7bc6);
u8 U[4];
w4(U+0,u32(0xc1100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bcb:{NFSU2_TR(0x4c7bcb);
u8 U[4];
w4(U+0,u32(0x42340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bd0:{NFSU2_TR(0x4c7bd0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bd5:{NFSU2_TR(0x4c7bd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bd6:{NFSU2_TR(0x4c7bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bd7:{NFSU2_TR(0x4c7bd7);
__builtin_memmove((R+4),(R+24),4);
}
B4c7bd9:{NFSU2_TR(0x4c7bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7bdeull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7bde:L4c7bde:{c.instructions+=2;NFSU2_TR(0x4c7bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7bdf:{NFSU2_TR(0x4c7bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7be2:L4c7be2:{c.instructions+=3;NFSU2_TR(0x4c7be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7be5:{NFSU2_TR(0x4c7be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7be6:{NFSU2_TR(0x4c7be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7bebull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7beb:L4c7beb:{c.instructions+=3;NFSU2_TR(0x4c7beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7bee:{NFSU2_TR(0x4c7bee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7bef:{NFSU2_TR(0x4c7bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7bf4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7bf4:L4c7bf4:{c.instructions+=10;NFSU2_TR(0x4c7bf4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7bf8:{NFSU2_TR(0x4c7bf8);
{u32 ea_=u32(u32(7953136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7bfe:{NFSU2_TR(0x4c7bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7c01:{NFSU2_TR(0x4c7c01);
{u32 ea_=u32(u32(7953136u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c7c07:{NFSU2_TR(0x4c7c07);
{u32 ea_=u32(u32(7953132u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c7c0d:{NFSU2_TR(0x4c7c0d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7c11:{NFSU2_TR(0x4c7c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7c15:{NFSU2_TR(0x4c7c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c16:{NFSU2_TR(0x4c7c16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c17:{NFSU2_TR(0x4c7c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7c1cull));
TAIL_STATIC(0x51ced0u,51c);
}
B4c7c1c:L4c7c1c:{c.instructions+=5;NFSU2_TR(0x4c7c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7c1f:{NFSU2_TR(0x4c7c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7c22:{NFSU2_TR(0x4c7c22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c23:{NFSU2_TR(0x4c7c23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c24:{NFSU2_TR(0x4c7c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7c29ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c7c29:L4c7c29:{c.instructions+=6;NFSU2_TR(0x4c7c29);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7c2d:{NFSU2_TR(0x4c7c2d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7c33:{NFSU2_TR(0x4c7c33);
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
B4c7c36:{NFSU2_TR(0x4c7c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7c37:{NFSU2_TR(0x4c7c37);
{u32 ea_=u32(u32(8610992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7c3d:{NFSU2_TR(0x4c7c3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7c40:L4c7c40:{c.instructions+=3;NFSU2_TR(0x4c7c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7c43:{NFSU2_TR(0x4c7c43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c44:{NFSU2_TR(0x4c7c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7c49ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7c49:L4c7c49:{c.instructions+=3;NFSU2_TR(0x4c7c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7c4c:{NFSU2_TR(0x4c7c4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c4d:{NFSU2_TR(0x4c7c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7c52ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c7c52:L4c7c52:{c.instructions+=4;NFSU2_TR(0x4c7c52);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c7c57:{NFSU2_TR(0x4c7c57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7c5a:{NFSU2_TR(0x4c7c5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7c5c:{NFSU2_TR(0x4c7c5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7c67;}}
}
B4c7c5e:L4c7c5e:{c.instructions+=3;NFSU2_TR(0x4c7c5e);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c7c63:{NFSU2_TR(0x4c7c63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7c65:{NFSU2_TR(0x4c7c65);
if(r1(R+518)){{goto L4c7c8c;}}
}
B4c7c67:L4c7c67:{c.instructions+=10;NFSU2_TR(0x4c7c67);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7c6b:{NFSU2_TR(0x4c7c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7c6e:{NFSU2_TR(0x4c7c6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c70:{NFSU2_TR(0x4c7c70);
u8 U[4];
w4(U+0,u32(0x42800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c75:{NFSU2_TR(0x4c7c75);
u8 U[4];
w4(U+0,u32(0x42800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c7a:{NFSU2_TR(0x4c7c7a);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c7f:{NFSU2_TR(0x4c7c7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c80:{NFSU2_TR(0x4c7c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c81:{NFSU2_TR(0x4c7c81);
__builtin_memmove((R+4),(R+24),4);
}
B4c7c83:{NFSU2_TR(0x4c7c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7c88ull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7c88:L4c7c88:{c.instructions+=2;NFSU2_TR(0x4c7c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7c89:{NFSU2_TR(0x4c7c89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7c8c:L4c7c8c:{c.instructions+=10;NFSU2_TR(0x4c7c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7c90:{NFSU2_TR(0x4c7c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7c93:{NFSU2_TR(0x4c7c93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c95:{NFSU2_TR(0x4c7c95);
u8 U[4];
w4(U+0,u32(0x42820000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c9a:{NFSU2_TR(0x4c7c9a);
u8 U[4];
w4(U+0,u32(0x42820000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7c9f:{NFSU2_TR(0x4c7c9f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ca4:{NFSU2_TR(0x4c7ca4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ca5:{NFSU2_TR(0x4c7ca5);
__builtin_memmove((R+4),(R+24),4);
}
B4c7ca7:{NFSU2_TR(0x4c7ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ca8:{NFSU2_TR(0x4c7ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7cadull));
TAIL_STATIC(0x4c67e0u,4c6);
}
B4c7cad:L4c7cad:{c.instructions+=2;NFSU2_TR(0x4c7cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7cae:{NFSU2_TR(0x4c7cae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7cb1:L4c7cb1:{c.instructions+=3;NFSU2_TR(0x4c7cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7cb4:{NFSU2_TR(0x4c7cb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7cb5:{NFSU2_TR(0x4c7cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7cbaull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7cba:L4c7cba:{c.instructions+=3;NFSU2_TR(0x4c7cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7cbd:{NFSU2_TR(0x4c7cbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7cbe:{NFSU2_TR(0x4c7cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7cc3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c7cc3:L4c7cc3:{c.instructions+=5;NFSU2_TR(0x4c7cc3);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B4c7cc8:{NFSU2_TR(0x4c7cc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c7ccb:{NFSU2_TR(0x4c7ccb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7cce:{NFSU2_TR(0x4c7cce);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c7cd3:{NFSU2_TR(0x4c7cd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7d87;}}
}
B4c7cd9:L4c7cd9:{c.instructions+=2;NFSU2_TR(0x4c7cd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7cdb:{NFSU2_TR(0x4c7cdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7ce6;}}
}
B4c7cdd:L4c7cdd:{c.instructions+=3;NFSU2_TR(0x4c7cdd);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c7ce2:{NFSU2_TR(0x4c7ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7ce4:{NFSU2_TR(0x4c7ce4);
if(r1(R+518)){{goto L4c7d35;}}
}
B4c7ce6:L4c7ce6:{c.instructions+=9;NFSU2_TR(0x4c7ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7ce9:{NFSU2_TR(0x4c7ce9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ceb:{NFSU2_TR(0x4c7ceb);
u8 U[4];
w4(U+0,u32(0xc1100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7cf0:{NFSU2_TR(0x4c7cf0);
u8 U[4];
w4(U+0,u32(0x42340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7cf5:{NFSU2_TR(0x4c7cf5);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7cfa:{NFSU2_TR(0x4c7cfa);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7cff:{NFSU2_TR(0x4c7cff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d00:{NFSU2_TR(0x4c7d00);
__builtin_memmove((R+4),(R+24),4);
}
B4c7d02:{NFSU2_TR(0x4c7d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7d07ull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7d07:L4c7d07:{c.instructions+=3;NFSU2_TR(0x4c7d07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d09:{NFSU2_TR(0x4c7d09);
u8 U[4];
w4(U+0,u32(0xc1100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d0e:{NFSU2_TR(0x4c7d0e);
u8 U[4];
w4(U+0,u32(0x42340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d13:L4c7d13:{c.instructions+=9;NFSU2_TR(0x4c7d13);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7d17:{NFSU2_TR(0x4c7d17);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d1c:{NFSU2_TR(0x4c7d1c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c7d22:{NFSU2_TR(0x4c7d22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d23:{NFSU2_TR(0x4c7d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7d26:{NFSU2_TR(0x4c7d26);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7d29:{NFSU2_TR(0x4c7d29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d2a:{NFSU2_TR(0x4c7d2a);
__builtin_memmove((R+4),(R+24),4);
}
B4c7d2c:{NFSU2_TR(0x4c7d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7d31ull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7d31:L4c7d31:{c.instructions+=2;NFSU2_TR(0x4c7d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7d32:{NFSU2_TR(0x4c7d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7d35:L4c7d35:{c.instructions+=11;NFSU2_TR(0x4c7d35);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7d39:{NFSU2_TR(0x4c7d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7d3c:{NFSU2_TR(0x4c7d3c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c7d42:{NFSU2_TR(0x4c7d42);
{u32 ea_=u32(u32(7953136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7d48:{NFSU2_TR(0x4c7d48);
{u32 ea_=u32(u32(7953136u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c7d4e:{NFSU2_TR(0x4c7d4e);
{u32 ea_=u32(u32(7953132u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c7d54:{NFSU2_TR(0x4c7d54);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7d58:{NFSU2_TR(0x4c7d58);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7d5c:{NFSU2_TR(0x4c7d5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d5d:{NFSU2_TR(0x4c7d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d5e:{NFSU2_TR(0x4c7d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7d63ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4c7d63:L4c7d63:{c.instructions+=5;NFSU2_TR(0x4c7d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7d66:{NFSU2_TR(0x4c7d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7d69:{NFSU2_TR(0x4c7d69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d6a:{NFSU2_TR(0x4c7d6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d6b:{NFSU2_TR(0x4c7d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7d70ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c7d70:L4c7d70:{c.instructions+=6;NFSU2_TR(0x4c7d70);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7d74:{NFSU2_TR(0x4c7d74);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c7d7a:{NFSU2_TR(0x4c7d7a);
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
B4c7d7d:{NFSU2_TR(0x4c7d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7d7e:{NFSU2_TR(0x4c7d7e);
{u32 ea_=u32(u32(8610992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7d84:{NFSU2_TR(0x4c7d84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7d87:L4c7d87:{c.instructions+=2;NFSU2_TR(0x4c7d87);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7d89:{NFSU2_TR(0x4c7d89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7d94;}}
}
B4c7d8b:L4c7d8b:{c.instructions+=3;NFSU2_TR(0x4c7d8b);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c7d90:{NFSU2_TR(0x4c7d90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c7d92:{NFSU2_TR(0x4c7d92);
if(r1(R+518)){{goto L4c7dc6;}}
}
B4c7d94:L4c7d94:{c.instructions+=9;NFSU2_TR(0x4c7d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7d97:{NFSU2_TR(0x4c7d97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d99:{NFSU2_TR(0x4c7d99);
u8 U[4];
w4(U+0,u32(0x42800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7d9e:{NFSU2_TR(0x4c7d9e);
u8 U[4];
w4(U+0,u32(0x42800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7da3:{NFSU2_TR(0x4c7da3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7da8:{NFSU2_TR(0x4c7da8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dad:{NFSU2_TR(0x4c7dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dae:{NFSU2_TR(0x4c7dae);
__builtin_memmove((R+4),(R+24),4);
}
B4c7db0:{NFSU2_TR(0x4c7db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7db5ull));
TAIL_STATIC(0x4c66f0u,4c6);
}
B4c7db5:L4c7db5:{c.instructions+=4;NFSU2_TR(0x4c7db5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7db7:{NFSU2_TR(0x4c7db7);
u8 U[4];
w4(U+0,u32(0x42800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dbc:{NFSU2_TR(0x4c7dbc);
u8 U[4];
w4(U+0,u32(0x42800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dc1:{NFSU2_TR(0x4c7dc1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c7d13u);}goto L4c7d13;}
}
B4c7dc6:L4c7dc6:{c.instructions+=9;NFSU2_TR(0x4c7dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7dc9:{NFSU2_TR(0x4c7dc9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dcb:{NFSU2_TR(0x4c7dcb);
u8 U[4];
w4(U+0,u32(0x42820000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dd0:{NFSU2_TR(0x4c7dd0);
u8 U[4];
w4(U+0,u32(0x42820000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dd5:{NFSU2_TR(0x4c7dd5);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dda:{NFSU2_TR(0x4c7dda);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7ddf:{NFSU2_TR(0x4c7ddf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7de0:{NFSU2_TR(0x4c7de0);
__builtin_memmove((R+4),(R+24),4);
}
B4c7de2:{NFSU2_TR(0x4c7de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7de7ull));
TAIL_STATIC(0x4c67e0u,4c6);
}
B4c7de7:L4c7de7:{c.instructions+=12;NFSU2_TR(0x4c7de7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7deb:{NFSU2_TR(0x4c7deb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c7df1:{NFSU2_TR(0x4c7df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7df4:{NFSU2_TR(0x4c7df4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7df6:{NFSU2_TR(0x4c7df6);
u8 U[4];
w4(U+0,u32(0x42820000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7dfb:{NFSU2_TR(0x4c7dfb);
u8 U[4];
w4(U+0,u32(0x42820000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7e00:{NFSU2_TR(0x4c7e00);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7e05:{NFSU2_TR(0x4c7e05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7e06:{NFSU2_TR(0x4c7e06);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7e09:{NFSU2_TR(0x4c7e09);
__builtin_memmove((R+4),(R+24),4);
}
B4c7e0b:{NFSU2_TR(0x4c7e0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7e0c:{NFSU2_TR(0x4c7e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7e11ull));
TAIL_STATIC(0x4c67e0u,4c6);
}
B4c7e11:L4c7e11:{c.instructions+=2;NFSU2_TR(0x4c7e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7e12:{NFSU2_TR(0x4c7e12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7e20:L4c7e20:{c.instructions+=18;NFSU2_TR(0x4c7e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7e21:{NFSU2_TR(0x4c7e21);
__builtin_memmove((R+24),(R+4),4);
}
B4c7e23:{NFSU2_TR(0x4c7e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7e2a:{NFSU2_TR(0x4c7e2a);
__builtin_memmove((R+4),gp(0x864624),4);
}
B4c7e30:{NFSU2_TR(0x4c7e30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7e31:{NFSU2_TR(0x4c7e31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7e35:{NFSU2_TR(0x4c7e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7e38:{NFSU2_TR(0x4c7e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c7e3b:{NFSU2_TR(0x4c7e3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4c7e3e:{NFSU2_TR(0x4c7e3e);
u8 U[13];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B4c7e42:{NFSU2_TR(0x4c7e42);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7e44:{NFSU2_TR(0x4c7e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4c7e47:{NFSU2_TR(0x4c7e47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c7e4a:{NFSU2_TR(0x4c7e4a);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7e4d:{NFSU2_TR(0x4c7e4d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c7e50:{NFSU2_TR(0x4c7e50);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7e53:{NFSU2_TR(0x4c7e53);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c7e59:{NFSU2_TR(0x4c7e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7e5eull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c7e5e:L4c7e5e:{c.instructions+=18;NFSU2_TR(0x4c7e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7e61:{NFSU2_TR(0x4c7e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7e64:{NFSU2_TR(0x4c7e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7e67:{NFSU2_TR(0x4c7e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7e6a:{NFSU2_TR(0x4c7e6a);
__builtin_memmove((R+8),gp(0x864624),4);
}
B4c7e70:{NFSU2_TR(0x4c7e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c7e73:{NFSU2_TR(0x4c7e73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4c7e76:{NFSU2_TR(0x4c7e76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c7e79:{NFSU2_TR(0x4c7e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7e7c:{NFSU2_TR(0x4c7e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7e83:{NFSU2_TR(0x4c7e83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7e87:{NFSU2_TR(0x4c7e87);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c7e8b:{NFSU2_TR(0x4c7e8b);
__builtin_memmove((R+4),(R+518),1);
}
B4c7e8e:{NFSU2_TR(0x4c7e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c7e8f:{NFSU2_TR(0x4c7e8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c7e92:{NFSU2_TR(0x4c7e92);
__builtin_memmove((R+0),(R+24),4);
}
B4c7e94:{NFSU2_TR(0x4c7e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c7e95:{NFSU2_TR(0x4c7e95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7ea0:L4c7ea0:{c.instructions+=5;NFSU2_TR(0x4c7ea0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7ea4:{NFSU2_TR(0x4c7ea4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7eaa:{NFSU2_TR(0x4c7eaa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7eac:{NFSU2_TR(0x4c7eac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7eaf:{NFSU2_TR(0x4c7eaf);
if(r1(R+518)){{goto L4c7edd;}}
}
B4c7eb1:L4c7eb1:{c.instructions+=5;NFSU2_TR(0x4c7eb1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c7eb5:{NFSU2_TR(0x4c7eb5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c7ebb:{NFSU2_TR(0x4c7ebb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c7ebd:{NFSU2_TR(0x4c7ebd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7ec0:{NFSU2_TR(0x4c7ec0);
if(r1(R+518)){{goto L4c7edd;}}
}
B4c7ec2:L4c7ec2:{c.instructions+=3;NFSU2_TR(0x4c7ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7ec6:{NFSU2_TR(0x4c7ec6);
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
B4c7ec8:{NFSU2_TR(0x4c7ec8);
if(r1(R+518)){{goto L4c7ef5;}}
}
B4c7eca:L4c7eca:{c.instructions+=4;NFSU2_TR(0x4c7eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7ed0:{NFSU2_TR(0x4c7ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7ed3:{NFSU2_TR(0x4c7ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0xffcaf48aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7eda:{NFSU2_TR(0x4c7eda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7edd:L4c7edd:{c.instructions+=3;NFSU2_TR(0x4c7edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7ee1:{NFSU2_TR(0x4c7ee1);
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
B4c7ee3:{NFSU2_TR(0x4c7ee3);
if(r1(R+518)){{goto L4c7ef5;}}
}
B4c7ee5:L4c7ee5:{c.instructions+=3;NFSU2_TR(0x4c7ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7eeb:{NFSU2_TR(0x4c7eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7eee:{NFSU2_TR(0x4c7eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
w4(U+4,u32(0xffff8020ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c7ef5:L4c7ef5:{c.instructions+=1;NFSU2_TR(0x4c7ef5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c7f00:L4c7f00:{c.instructions+=15;NFSU2_TR(0x4c7f00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f01:{NFSU2_TR(0x4c7f01);
__builtin_memmove((R+20),(R+16),4);
}
B4c7f03:{NFSU2_TR(0x4c7f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B4c7f09:{NFSU2_TR(0x4c7f09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f0a:{NFSU2_TR(0x4c7f0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f0b:{NFSU2_TR(0x4c7f0b);
__builtin_memmove((R+24),(R+4),4);
}
B4c7f0d:{NFSU2_TR(0x4c7f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7f10:{NFSU2_TR(0x4c7f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c7f13:{NFSU2_TR(0x4c7f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7f16:{NFSU2_TR(0x4c7f16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f17:{NFSU2_TR(0x4c7f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7f1a:{NFSU2_TR(0x4c7f1a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4c7f1c:{NFSU2_TR(0x4c7f1c);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4c7f1e:{NFSU2_TR(0x4c7f1e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c7f20:{NFSU2_TR(0x4c7f20);
if(r1(R+518)){TAIL_STATIC(0x4c83c9u,4c8);}
}
B4c7f26:L4c7f26:{c.instructions+=5;NFSU2_TR(0x4c7f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7f29:{NFSU2_TR(0x4c7f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7f2c:{NFSU2_TR(0x4c7f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c7f2f:{NFSU2_TR(0x4c7f2f);
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
B4c7f31:{NFSU2_TR(0x4c7f31);
if(r1(R+518)){TAIL_STATIC(0x4c83cdu,4c8);}
}
B4c7f37:L4c7f37:{c.instructions+=9;NFSU2_TR(0x4c7f37);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4c7f3b:{NFSU2_TR(0x4c7f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7f41:{NFSU2_TR(0x4c7f41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f43:{NFSU2_TR(0x4c7f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c7f46:{NFSU2_TR(0x4c7f46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f47:{NFSU2_TR(0x4c7f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c7f4a:{NFSU2_TR(0x4c7f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7f4d:{NFSU2_TR(0x4c7f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c7f50:{NFSU2_TR(0x4c7f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7f55ull));
TAIL_STATIC(0x577240u,577);
}
B4c7f55:L4c7f55:{c.instructions+=5;NFSU2_TR(0x4c7f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7f58:{NFSU2_TR(0x4c7f58);
u8 U[4];
w4(U+0,u32(0x657a31f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f5d:{NFSU2_TR(0x4c7f5d);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f62:{NFSU2_TR(0x4c7f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f63:{NFSU2_TR(0x4c7f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7f68ull));
TAIL_STATIC(0x537d40u,537);
}
B4c7f68:L4c7f68:{c.instructions+=3;NFSU2_TR(0x4c7f68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c7f6b:{NFSU2_TR(0x4c7f6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7f6d:{NFSU2_TR(0x4c7f6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7fc4;}}
}
B4c7f6f:L4c7f6f:{c.instructions+=3;NFSU2_TR(0x4c7f6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c7f72:{NFSU2_TR(0x4c7f72);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7f74:{NFSU2_TR(0x4c7f74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7fc4;}}
}
B4c7f76:L4c7f76:{c.instructions+=6;NFSU2_TR(0x4c7f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c7f79:{NFSU2_TR(0x4c7f79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f7b:{NFSU2_TR(0x4c7f7b);
u8 U[4];
w4(U+0,u32(0x657a31f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f80:{NFSU2_TR(0x4c7f80);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f85:{NFSU2_TR(0x4c7f85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f86:{NFSU2_TR(0x4c7f86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7f8bull));
TAIL_STATIC(0x537c60u,537);
}
B4c7f8b:L4c7f8b:{c.instructions+=5;NFSU2_TR(0x4c7f8b);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4c7f90:{NFSU2_TR(0x4c7f90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c7f93:{NFSU2_TR(0x4c7f93);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c7f96:{NFSU2_TR(0x4c7f96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7f98:{NFSU2_TR(0x4c7f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c7faa;}}
}
B4c7f9a:L4c7f9a:{c.instructions+=5;NFSU2_TR(0x4c7f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c7f9d:{NFSU2_TR(0x4c7f9d);
u8 U[4];
w4(U+0,u32(0x36819d93ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7fa2:{NFSU2_TR(0x4c7fa2);
u8 U[4];
w4(U+0,u32(0x4e4566e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7fa7:{NFSU2_TR(0x4c7fa7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7fa8:{NFSU2_TR(0x4c7fa8);
{goto L4c7fb8;}
}
B4c7faa:L4c7faa:{c.instructions+=4;NFSU2_TR(0x4c7faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7fad:{NFSU2_TR(0x4c7fad);
u8 U[4];
w4(U+0,u32(0x657a31f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7fb2:{NFSU2_TR(0x4c7fb2);
u8 U[4];
w4(U+0,u32(0x4e4566e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7fb7:{NFSU2_TR(0x4c7fb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c7fb8:L4c7fb8:{c.instructions+=1;NFSU2_TR(0x4c7fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7fbdull));
TAIL_STATIC(0x537c60u,537);
}
B4c7fbd:L4c7fbd:{c.instructions+=2;NFSU2_TR(0x4c7fbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c7fc0:{NFSU2_TR(0x4c7fc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c7fc4:L4c7fc4:{c.instructions+=4;NFSU2_TR(0x4c7fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c7fc7:{NFSU2_TR(0x4c7fc7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4c7fc8:{NFSU2_TR(0x4c7fc8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c7fcb:{NFSU2_TR(0x4c7fcb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4c83afu,4c8);}
}
B4c7fd1:L4c7fd1:{c.instructions+=1;NFSU2_TR(0x4c7fd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c83d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c7fd8:L4c7fd8:{c.instructions+=2;NFSU2_TR(0x4c7fd8);
w4(R+4,u32(0x89e7a0ull));
}
B4c7fdd:{NFSU2_TR(0x4c7fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7fe2ull));
TAIL_STATIC(0x401910u,401);
}
B4c7fe2:L4c7fe2:{c.instructions+=2;NFSU2_TR(0x4c7fe2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7fe4:{NFSU2_TR(0x4c7fe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4c80c7u,4c8);}
}
B4c7fea:L4c7fea:{c.instructions+=2;NFSU2_TR(0x4c7fea);
w4(R+4,u32(0x89e7a0ull));
}
B4c7fef:{NFSU2_TR(0x4c7fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c7ff4ull));
TAIL_STATIC(0x42fc40u,42f);
}
B4c7ff4:L4c7ff4:{c.instructions+=2;NFSU2_TR(0x4c7ff4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c7ff6:{NFSU2_TR(0x4c7ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4c80c7u,4c8);}
}
B4c7ffc:L4c7ffc:{c.instructions+=1;NFSU2_TR(0x4c7ffc);
__builtin_memmove((R+0),gp(0x89e7e6),1);
TAIL_STATIC(0x4c8001u,4c8);
}
XIT:NFSU2_TR_EXIT(0x4c7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
