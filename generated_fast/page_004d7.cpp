#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d6(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d7(u8* __restrict R,Cpu& c);
u32 page_4d7(Cpu& c){return body_4d7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d7010:goto L4d7010;
case 0x4d7012:c.instructions+=12;goto B4d7012;
case 0x4d7017:c.instructions+=11;goto B4d7017;
case 0x4d701d:c.instructions+=10;goto B4d701d;
case 0x4d701e:c.instructions+=9;goto B4d701e;
case 0x4d7025:c.instructions+=8;goto B4d7025;
case 0x4d7026:c.instructions+=7;goto B4d7026;
case 0x4d7027:c.instructions+=6;goto B4d7027;
case 0x4d7029:c.instructions+=5;goto B4d7029;
case 0x4d702d:c.instructions+=4;goto B4d702d;
case 0x4d7033:c.instructions+=3;goto B4d7033;
case 0x4d7036:c.instructions+=2;goto B4d7036;
case 0x4d703e:c.instructions+=1;goto B4d703e;
case 0x4d7043:goto L4d7043;
case 0x4d7045:c.instructions+=2;goto B4d7045;
case 0x4d704d:c.instructions+=1;goto B4d704d;
case 0x4d7052:goto L4d7052;
case 0x4d7056:c.instructions+=4;goto B4d7056;
case 0x4d7057:c.instructions+=3;goto B4d7057;
case 0x4d705e:c.instructions+=2;goto B4d705e;
case 0x4d7061:c.instructions+=1;goto B4d7061;
case 0x4d7070:goto L4d7070;
case 0x4d7072:c.instructions+=7;goto B4d7072;
case 0x4d7077:c.instructions+=6;goto B4d7077;
case 0x4d707d:c.instructions+=5;goto B4d707d;
case 0x4d707e:c.instructions+=4;goto B4d707e;
case 0x4d7085:c.instructions+=3;goto B4d7085;
case 0x4d7086:c.instructions+=2;goto B4d7086;
case 0x4d708b:c.instructions+=1;goto B4d708b;
case 0x4d7090:goto L4d7090;
case 0x4d7093:c.instructions+=4;goto B4d7093;
case 0x4d7097:c.instructions+=3;goto B4d7097;
case 0x4d7099:c.instructions+=2;goto B4d7099;
case 0x4d70a1:c.instructions+=1;goto B4d70a1;
case 0x4d70a3:goto L4d70a3;
case 0x4d70a7:c.instructions+=3;goto B4d70a7;
case 0x4d70a8:c.instructions+=2;goto B4d70a8;
case 0x4d70aa:c.instructions+=1;goto B4d70aa;
case 0x4d70af:goto L4d70af;
case 0x4d70b1:goto L4d70b1;
case 0x4d70b3:goto L4d70b3;
case 0x4d70b9:c.instructions+=6;goto B4d70b9;
case 0x4d70bc:c.instructions+=5;goto B4d70bc;
case 0x4d70c2:c.instructions+=4;goto B4d70c2;
case 0x4d70c6:c.instructions+=3;goto B4d70c6;
case 0x4d70cd:c.instructions+=2;goto B4d70cd;
case 0x4d70d0:c.instructions+=1;goto B4d70d0;
case 0x4d70e0:goto L4d70e0;
case 0x4d70e1:c.instructions+=4;goto B4d70e1;
case 0x4d70e2:c.instructions+=3;goto B4d70e2;
case 0x4d70e4:c.instructions+=2;goto B4d70e4;
case 0x4d70e6:c.instructions+=1;goto B4d70e6;
case 0x4d70eb:goto L4d70eb;
case 0x4d70ee:c.instructions+=2;goto B4d70ee;
case 0x4d70f0:c.instructions+=1;goto B4d70f0;
case 0x4d70f2:goto L4d70f2;
case 0x4d70f5:c.instructions+=6;goto B4d70f5;
case 0x4d70f7:c.instructions+=5;goto B4d70f7;
case 0x4d70fa:c.instructions+=4;goto B4d70fa;
case 0x4d70fe:c.instructions+=3;goto B4d70fe;
case 0x4d7104:c.instructions+=2;goto B4d7104;
case 0x4d7106:c.instructions+=1;goto B4d7106;
case 0x4d7108:goto L4d7108;
case 0x4d710a:goto L4d710a;
case 0x4d710e:c.instructions+=9;goto B4d710e;
case 0x4d7112:c.instructions+=8;goto B4d7112;
case 0x4d7116:c.instructions+=7;goto B4d7116;
case 0x4d7118:c.instructions+=6;goto B4d7118;
case 0x4d711a:c.instructions+=5;goto B4d711a;
case 0x4d711d:c.instructions+=4;goto B4d711d;
case 0x4d711e:c.instructions+=3;goto B4d711e;
case 0x4d7120:c.instructions+=2;goto B4d7120;
case 0x4d7123:c.instructions+=1;goto B4d7123;
case 0x4d7128:goto L4d7128;
case 0x4d712c:c.instructions+=5;goto B4d712c;
case 0x4d712e:c.instructions+=4;goto B4d712e;
case 0x4d7130:c.instructions+=3;goto B4d7130;
case 0x4d7131:c.instructions+=2;goto B4d7131;
case 0x4d7133:c.instructions+=1;goto B4d7133;
case 0x4d7138:goto L4d7138;
case 0x4d713b:c.instructions+=3;goto B4d713b;
case 0x4d713c:c.instructions+=2;goto B4d713c;
case 0x4d713e:c.instructions+=1;goto B4d713e;
case 0x4d7143:goto L4d7143;
case 0x4d7144:c.instructions+=2;goto B4d7144;
case 0x4d7146:c.instructions+=1;goto B4d7146;
case 0x4d714b:goto L4d714b;
case 0x4d714d:c.instructions+=2;goto B4d714d;
case 0x4d714f:c.instructions+=1;goto B4d714f;
case 0x4d7154:goto L4d7154;
case 0x4d7155:c.instructions+=3;goto B4d7155;
case 0x4d7157:c.instructions+=2;goto B4d7157;
case 0x4d7158:c.instructions+=1;goto B4d7158;
case 0x4d7160:goto L4d7160;
case 0x4d7161:c.instructions+=6;goto B4d7161;
case 0x4d7162:c.instructions+=5;goto B4d7162;
case 0x4d7164:c.instructions+=4;goto B4d7164;
case 0x4d7167:c.instructions+=3;goto B4d7167;
case 0x4d7168:c.instructions+=2;goto B4d7168;
case 0x4d7169:c.instructions+=1;goto B4d7169;
case 0x4d716e:goto L4d716e;
case 0x4d7171:c.instructions+=5;goto B4d7171;
case 0x4d7174:c.instructions+=4;goto B4d7174;
case 0x4d7179:c.instructions+=3;goto B4d7179;
case 0x4d717e:c.instructions+=2;goto B4d717e;
case 0x4d717f:c.instructions+=1;goto B4d717f;
case 0x4d7184:goto L4d7184;
case 0x4d7187:c.instructions+=2;goto B4d7187;
case 0x4d7188:c.instructions+=1;goto B4d7188;
case 0x4d718d:goto L4d718d;
case 0x4d7190:c.instructions+=5;goto B4d7190;
case 0x4d7193:c.instructions+=4;goto B4d7193;
case 0x4d7198:c.instructions+=3;goto B4d7198;
case 0x4d719d:c.instructions+=2;goto B4d719d;
case 0x4d719e:c.instructions+=1;goto B4d719e;
case 0x4d71a3:goto L4d71a3;
case 0x4d71a6:c.instructions+=2;goto B4d71a6;
case 0x4d71a7:c.instructions+=1;goto B4d71a7;
case 0x4d71ac:goto L4d71ac;
case 0x4d71af:c.instructions+=2;goto B4d71af;
case 0x4d71b4:c.instructions+=1;goto B4d71b4;
case 0x4d71b9:goto L4d71b9;
case 0x4d71ba:c.instructions+=2;goto B4d71ba;
case 0x4d71bb:c.instructions+=1;goto B4d71bb;
case 0x4d71c0:goto L4d71c0;
case 0x4d71c1:c.instructions+=1;goto B4d71c1;
case 0x4d71c6:goto L4d71c6;
case 0x4d71c9:c.instructions+=2;goto B4d71c9;
case 0x4d71cb:c.instructions+=1;goto B4d71cb;
case 0x4d71d0:goto L4d71d0;
case 0x4d71d3:c.instructions+=4;goto B4d71d3;
case 0x4d71d6:c.instructions+=3;goto B4d71d6;
case 0x4d71d9:c.instructions+=2;goto B4d71d9;
case 0x4d71da:c.instructions+=1;goto B4d71da;
case 0x4d71df:goto L4d71df;
case 0x4d71e2:c.instructions+=3;goto B4d71e2;
case 0x4d71e3:c.instructions+=2;goto B4d71e3;
case 0x4d71e5:c.instructions+=1;goto B4d71e5;
case 0x4d71e8:goto L4d71e8;
case 0x4d71ea:c.instructions+=2;goto B4d71ea;
case 0x4d71ec:c.instructions+=1;goto B4d71ec;
case 0x4d71ef:goto L4d71ef;
case 0x4d71f4:goto L4d71f4;
case 0x4d71f5:c.instructions+=1;goto B4d71f5;
case 0x4d71fa:goto L4d71fa;
case 0x4d71fd:c.instructions+=2;goto B4d71fd;
case 0x4d71ff:c.instructions+=1;goto B4d71ff;
case 0x4d7201:goto L4d7201;
case 0x4d7204:c.instructions+=4;goto B4d7204;
case 0x4d7206:c.instructions+=3;goto B4d7206;
case 0x4d720b:c.instructions+=2;goto B4d720b;
case 0x4d720c:c.instructions+=1;goto B4d720c;
case 0x4d7211:goto L4d7211;
case 0x4d7212:c.instructions+=1;goto B4d7212;
case 0x4d7217:goto L4d7217;
case 0x4d721a:goto L4d721a;
case 0x4d7220:c.instructions+=1;goto B4d7220;
case 0x4d7225:goto L4d7225;
case 0x4d7228:c.instructions+=5;goto B4d7228;
case 0x4d722b:c.instructions+=4;goto B4d722b;
case 0x4d722c:c.instructions+=3;goto B4d722c;
case 0x4d722d:c.instructions+=2;goto B4d722d;
case 0x4d7233:c.instructions+=1;goto B4d7233;
case 0x4d7238:goto L4d7238;
case 0x4d7239:c.instructions+=3;goto B4d7239;
case 0x4d723a:c.instructions+=2;goto B4d723a;
case 0x4d723b:c.instructions+=1;goto B4d723b;
case 0x4d7240:goto L4d7240;
case 0x4d7245:c.instructions+=5;goto B4d7245;
case 0x4d724a:c.instructions+=4;goto B4d724a;
case 0x4d724b:c.instructions+=3;goto B4d724b;
case 0x4d724c:c.instructions+=2;goto B4d724c;
case 0x4d724e:c.instructions+=1;goto B4d724e;
case 0x4d7250:goto L4d7250;
case 0x4d7255:c.instructions+=1;goto B4d7255;
case 0x4d7257:goto L4d7257;
case 0x4d7259:c.instructions+=2;goto B4d7259;
case 0x4d725e:c.instructions+=1;goto B4d725e;
case 0x4d7263:goto L4d7263;
case 0x4d7265:c.instructions+=2;goto B4d7265;
case 0x4d7267:c.instructions+=1;goto B4d7267;
case 0x4d726c:goto L4d726c;
case 0x4d726d:c.instructions+=3;goto B4d726d;
case 0x4d726f:c.instructions+=2;goto B4d726f;
case 0x4d7271:c.instructions+=1;goto B4d7271;
case 0x4d7276:goto L4d7276;
case 0x4d7277:c.instructions+=2;goto B4d7277;
case 0x4d7278:c.instructions+=1;goto B4d7278;
case 0x4d7279:goto L4d7279;
case 0x4d727e:c.instructions+=4;goto B4d727e;
case 0x4d7281:c.instructions+=3;goto B4d7281;
case 0x4d7283:c.instructions+=2;goto B4d7283;
case 0x4d7285:c.instructions+=1;goto B4d7285;
case 0x4d7287:goto L4d7287;
case 0x4d7288:c.instructions+=3;goto B4d7288;
case 0x4d7289:c.instructions+=2;goto B4d7289;
case 0x4d728c:c.instructions+=1;goto B4d728c;
case 0x4d7290:goto L4d7290;
case 0x4d7297:c.instructions+=2;goto B4d7297;
case 0x4d7299:c.instructions+=1;goto B4d7299;
case 0x4d729e:goto L4d729e;
case 0x4d72a1:c.instructions+=2;goto B4d72a1;
case 0x4d72a3:c.instructions+=1;goto B4d72a3;
case 0x4d72a5:goto L4d72a5;
case 0x4d72a8:c.instructions+=1;goto B4d72a8;
case 0x4d72aa:goto L4d72aa;
case 0x4d72ac:goto L4d72ac;
case 0x4d72af:c.instructions+=9;goto B4d72af;
case 0x4d72b1:c.instructions+=8;goto B4d72b1;
case 0x4d72b4:c.instructions+=7;goto B4d72b4;
case 0x4d72b7:c.instructions+=6;goto B4d72b7;
case 0x4d72b9:c.instructions+=5;goto B4d72b9;
case 0x4d72bf:c.instructions+=4;goto B4d72bf;
case 0x4d72c2:c.instructions+=3;goto B4d72c2;
case 0x4d72c3:c.instructions+=2;goto B4d72c3;
case 0x4d72c5:c.instructions+=1;goto B4d72c5;
case 0x4d72c7:goto L4d72c7;
case 0x4d72c8:c.instructions+=1;goto B4d72c8;
case 0x4d72c9:goto L4d72c9;
case 0x4d72cb:c.instructions+=1;goto B4d72cb;
case 0x4d72d0:goto L4d72d0;
case 0x4d72d6:c.instructions+=5;goto B4d72d6;
case 0x4d72d9:c.instructions+=4;goto B4d72d9;
case 0x4d72da:c.instructions+=3;goto B4d72da;
case 0x4d72dc:c.instructions+=2;goto B4d72dc;
case 0x4d72de:c.instructions+=1;goto B4d72de;
case 0x4d72e3:goto L4d72e3;
case 0x4d72e4:c.instructions+=2;goto B4d72e4;
case 0x4d72e5:c.instructions+=1;goto B4d72e5;
case 0x4d72f0:goto L4d72f0;
case 0x4d72f2:c.instructions+=7;goto B4d72f2;
case 0x4d72f7:c.instructions+=6;goto B4d72f7;
case 0x4d72fd:c.instructions+=5;goto B4d72fd;
case 0x4d72fe:c.instructions+=4;goto B4d72fe;
case 0x4d7305:c.instructions+=3;goto B4d7305;
case 0x4d7306:c.instructions+=2;goto B4d7306;
case 0x4d7308:c.instructions+=1;goto B4d7308;
case 0x4d730d:goto L4d730d;
case 0x4d7310:c.instructions+=4;goto B4d7310;
case 0x4d7314:c.instructions+=3;goto B4d7314;
case 0x4d7316:c.instructions+=2;goto B4d7316;
case 0x4d731e:c.instructions+=1;goto B4d731e;
case 0x4d7320:goto L4d7320;
case 0x4d7324:c.instructions+=3;goto B4d7324;
case 0x4d7325:c.instructions+=2;goto B4d7325;
case 0x4d7327:c.instructions+=1;goto B4d7327;
case 0x4d732c:goto L4d732c;
case 0x4d7330:c.instructions+=3;goto B4d7330;
case 0x4d7337:c.instructions+=2;goto B4d7337;
case 0x4d733a:c.instructions+=1;goto B4d733a;
case 0x4d733b:goto L4d733b;
case 0x4d733f:c.instructions+=4;goto B4d733f;
case 0x4d7341:c.instructions+=3;goto B4d7341;
case 0x4d7348:c.instructions+=2;goto B4d7348;
case 0x4d734b:c.instructions+=1;goto B4d734b;
case 0x4d7350:goto L4d7350;
case 0x4d7354:c.instructions+=2;goto B4d7354;
case 0x4d7359:c.instructions+=1;goto B4d7359;
case 0x4d735b:goto L4d735b;
case 0x4d7360:c.instructions+=1;goto B4d7360;
case 0x4d7362:goto L4d7362;
case 0x4d7368:c.instructions+=7;goto B4d7368;
case 0x4d736b:c.instructions+=6;goto B4d736b;
case 0x4d736c:c.instructions+=5;goto B4d736c;
case 0x4d736f:c.instructions+=4;goto B4d736f;
case 0x4d7372:c.instructions+=3;goto B4d7372;
case 0x4d7374:c.instructions+=2;goto B4d7374;
case 0x4d7375:c.instructions+=1;goto B4d7375;
case 0x4d7377:goto L4d7377;
case 0x4d737a:c.instructions+=8;goto B4d737a;
case 0x4d737d:c.instructions+=7;goto B4d737d;
case 0x4d737f:c.instructions+=6;goto B4d737f;
case 0x4d7381:c.instructions+=5;goto B4d7381;
case 0x4d7384:c.instructions+=4;goto B4d7384;
case 0x4d7386:c.instructions+=3;goto B4d7386;
case 0x4d7387:c.instructions+=2;goto B4d7387;
case 0x4d7388:c.instructions+=1;goto B4d7388;
case 0x4d738d:goto L4d738d;
case 0x4d7390:c.instructions+=1;goto B4d7390;
case 0x4d7393:goto L4d7393;
case 0x4d7399:c.instructions+=1;goto B4d7399;
case 0x4d739e:goto L4d739e;
case 0x4d73b0:goto L4d73b0;
case 0x4d73b1:c.instructions+=7;goto B4d73b1;
case 0x4d73b2:c.instructions+=6;goto B4d73b2;
case 0x4d73b6:c.instructions+=5;goto B4d73b6;
case 0x4d73b7:c.instructions+=4;goto B4d73b7;
case 0x4d73bb:c.instructions+=3;goto B4d73bb;
case 0x4d73bd:c.instructions+=2;goto B4d73bd;
case 0x4d73bf:c.instructions+=1;goto B4d73bf;
case 0x4d73c1:goto L4d73c1;
case 0x4d73c2:c.instructions+=2;goto B4d73c2;
case 0x4d73c9:c.instructions+=1;goto B4d73c9;
case 0x4d73d0:goto L4d73d0;
case 0x4d73d6:c.instructions+=7;goto B4d73d6;
case 0x4d73dd:c.instructions+=6;goto B4d73dd;
case 0x4d73e0:c.instructions+=5;goto B4d73e0;
case 0x4d73e1:c.instructions+=4;goto B4d73e1;
case 0x4d73e2:c.instructions+=3;goto B4d73e2;
case 0x4d73e3:c.instructions+=2;goto B4d73e3;
case 0x4d73e5:c.instructions+=1;goto B4d73e5;
case 0x4d73ea:goto L4d73ea;
case 0x4d73eb:c.instructions+=3;goto B4d73eb;
case 0x4d73ee:c.instructions+=2;goto B4d73ee;
case 0x4d73f0:c.instructions+=1;goto B4d73f0;
case 0x4d73f2:goto L4d73f2;
case 0x4d73f3:goto L4d73f3;
case 0x4d73f4:c.instructions+=3;goto B4d73f4;
case 0x4d73f5:c.instructions+=2;goto B4d73f5;
case 0x4d73f6:c.instructions+=1;goto B4d73f6;
case 0x4d7400:goto L4d7400;
case 0x4d7405:c.instructions+=7;goto B4d7405;
case 0x4d7408:c.instructions+=6;goto B4d7408;
case 0x4d740b:c.instructions+=5;goto B4d740b;
case 0x4d740c:c.instructions+=4;goto B4d740c;
case 0x4d740d:c.instructions+=3;goto B4d740d;
case 0x4d740e:c.instructions+=2;goto B4d740e;
case 0x4d7410:c.instructions+=1;goto B4d7410;
case 0x4d7416:goto L4d7416;
case 0x4d741d:c.instructions+=1;goto B4d741d;
case 0x4d7423:goto L4d7423;
case 0x4d7425:c.instructions+=7;goto B4d7425;
case 0x4d742a:c.instructions+=6;goto B4d742a;
case 0x4d742b:c.instructions+=5;goto B4d742b;
case 0x4d742f:c.instructions+=4;goto B4d742f;
case 0x4d7434:c.instructions+=3;goto B4d7434;
case 0x4d7438:c.instructions+=2;goto B4d7438;
case 0x4d7440:c.instructions+=1;goto B4d7440;
case 0x4d7442:goto L4d7442;
case 0x4d7446:goto L4d7446;
case 0x4d7447:c.instructions+=3;goto B4d7447;
case 0x4d7448:c.instructions+=2;goto B4d7448;
case 0x4d744a:c.instructions+=1;goto B4d744a;
case 0x4d744f:goto L4d744f;
case 0x4d7450:c.instructions+=3;goto B4d7450;
case 0x4d7451:c.instructions+=2;goto B4d7451;
case 0x4d7453:c.instructions+=1;goto B4d7453;
case 0x4d7458:goto L4d7458;
case 0x4d745b:c.instructions+=3;goto B4d745b;
case 0x4d7461:c.instructions+=2;goto B4d7461;
case 0x4d7462:c.instructions+=1;goto B4d7462;
case 0x4d7467:goto L4d7467;
case 0x4d746a:c.instructions+=5;goto B4d746a;
case 0x4d746d:c.instructions+=4;goto B4d746d;
case 0x4d746e:c.instructions+=3;goto B4d746e;
case 0x4d7473:c.instructions+=2;goto B4d7473;
case 0x4d7477:c.instructions+=1;goto B4d7477;
case 0x4d747c:goto L4d747c;
case 0x4d747d:c.instructions+=4;goto B4d747d;
case 0x4d747e:c.instructions+=3;goto B4d747e;
case 0x4d7483:c.instructions+=2;goto B4d7483;
case 0x4d7487:c.instructions+=1;goto B4d7487;
case 0x4d748c:goto L4d748c;
case 0x4d7490:c.instructions+=6;goto B4d7490;
case 0x4d7493:c.instructions+=5;goto B4d7493;
case 0x4d7494:c.instructions+=4;goto B4d7494;
case 0x4d7495:c.instructions+=3;goto B4d7495;
case 0x4d7499:c.instructions+=2;goto B4d7499;
case 0x4d749a:c.instructions+=1;goto B4d749a;
case 0x4d749f:goto L4d749f;
case 0x4d74a2:c.instructions+=2;goto B4d74a2;
case 0x4d74a3:c.instructions+=1;goto B4d74a3;
case 0x4d74a8:goto L4d74a8;
case 0x4d74ab:c.instructions+=2;goto B4d74ab;
case 0x4d74b0:c.instructions+=1;goto B4d74b0;
case 0x4d74b5:goto L4d74b5;
case 0x4d74b7:c.instructions+=1;goto B4d74b7;
case 0x4d74b9:goto L4d74b9;
case 0x4d74c0:c.instructions+=1;goto B4d74c0;
case 0x4d74c2:goto L4d74c2;
case 0x4d74c6:c.instructions+=4;goto B4d74c6;
case 0x4d74c7:c.instructions+=3;goto B4d74c7;
case 0x4d74c8:c.instructions+=2;goto B4d74c8;
case 0x4d74ca:c.instructions+=1;goto B4d74ca;
case 0x4d74cf:goto L4d74cf;
case 0x4d74d1:goto L4d74d1;
case 0x4d74d4:c.instructions+=6;goto B4d74d4;
case 0x4d74d6:c.instructions+=5;goto B4d74d6;
case 0x4d74da:c.instructions+=4;goto B4d74da;
case 0x4d74db:c.instructions+=3;goto B4d74db;
case 0x4d74df:c.instructions+=2;goto B4d74df;
case 0x4d74e3:c.instructions+=1;goto B4d74e3;
case 0x4d74e8:goto L4d74e8;
case 0x4d74eb:c.instructions+=7;goto B4d74eb;
case 0x4d74ef:c.instructions+=6;goto B4d74ef;
case 0x4d74f0:c.instructions+=5;goto B4d74f0;
case 0x4d74f5:c.instructions+=4;goto B4d74f5;
case 0x4d74f6:c.instructions+=3;goto B4d74f6;
case 0x4d74fb:c.instructions+=2;goto B4d74fb;
case 0x4d74ff:c.instructions+=1;goto B4d74ff;
case 0x4d7504:goto L4d7504;
case 0x4d7507:c.instructions+=4;goto B4d7507;
case 0x4d7508:c.instructions+=3;goto B4d7508;
case 0x4d750c:c.instructions+=2;goto B4d750c;
case 0x4d750d:c.instructions+=1;goto B4d750d;
case 0x4d7512:goto L4d7512;
case 0x4d7515:goto L4d7515;
case 0x4d7519:c.instructions+=8;goto B4d7519;
case 0x4d751d:c.instructions+=7;goto B4d751d;
case 0x4d7520:c.instructions+=6;goto B4d7520;
case 0x4d7521:c.instructions+=5;goto B4d7521;
case 0x4d7526:c.instructions+=4;goto B4d7526;
case 0x4d7527:c.instructions+=3;goto B4d7527;
case 0x4d752c:c.instructions+=2;goto B4d752c;
case 0x4d7530:c.instructions+=1;goto B4d7530;
case 0x4d7535:goto L4d7535;
case 0x4d7538:c.instructions+=4;goto B4d7538;
case 0x4d7539:c.instructions+=3;goto B4d7539;
case 0x4d753d:c.instructions+=2;goto B4d753d;
case 0x4d753e:c.instructions+=1;goto B4d753e;
case 0x4d7543:goto L4d7543;
case 0x4d7547:c.instructions+=6;goto B4d7547;
case 0x4d754a:c.instructions+=5;goto B4d754a;
case 0x4d7550:c.instructions+=4;goto B4d7550;
case 0x4d7551:c.instructions+=3;goto B4d7551;
case 0x4d7555:c.instructions+=2;goto B4d7555;
case 0x4d7559:c.instructions+=1;goto B4d7559;
case 0x4d755f:goto L4d755f;
case 0x4d7560:c.instructions+=4;goto B4d7560;
case 0x4d7561:c.instructions+=3;goto B4d7561;
case 0x4d7562:c.instructions+=2;goto B4d7562;
case 0x4d7565:c.instructions+=1;goto B4d7565;
case 0x4d7566:goto L4d7566;
case 0x4d756b:c.instructions+=1;goto B4d756b;
case 0x4d756d:goto L4d756d;
case 0x4d7570:c.instructions+=1;goto B4d7570;
case 0x4d7576:goto L4d7576;
case 0x4d757d:c.instructions+=1;goto B4d757d;
case 0x4d7583:goto L4d7583;
case 0x4d7588:c.instructions+=2;goto B4d7588;
case 0x4d758a:c.instructions+=1;goto B4d758a;
case 0x4d758f:goto L4d758f;
case 0x4d7591:c.instructions+=1;goto B4d7591;
case 0x4d7597:goto L4d7597;
case 0x4d7598:c.instructions+=2;goto B4d7598;
case 0x4d759b:c.instructions+=1;goto B4d759b;
case 0x4d75a0:goto L4d75a0;
case 0x4d75a3:c.instructions+=4;goto B4d75a3;
case 0x4d75a4:c.instructions+=3;goto B4d75a4;
case 0x4d75a5:c.instructions+=2;goto B4d75a5;
case 0x4d75a7:c.instructions+=1;goto B4d75a7;
case 0x4d75ac:goto L4d75ac;
case 0x4d75ad:c.instructions+=3;goto B4d75ad;
case 0x4d75ae:c.instructions+=2;goto B4d75ae;
case 0x4d75b0:c.instructions+=1;goto B4d75b0;
case 0x4d75b5:goto L4d75b5;
case 0x4d75b8:c.instructions+=3;goto B4d75b8;
case 0x4d75b9:c.instructions+=2;goto B4d75b9;
case 0x4d75bf:c.instructions+=1;goto B4d75bf;
case 0x4d75c4:goto L4d75c4;
case 0x4d75c7:c.instructions+=5;goto B4d75c7;
case 0x4d75ca:c.instructions+=4;goto B4d75ca;
case 0x4d75cb:c.instructions+=3;goto B4d75cb;
case 0x4d75d0:c.instructions+=2;goto B4d75d0;
case 0x4d75d4:c.instructions+=1;goto B4d75d4;
case 0x4d75d9:goto L4d75d9;
case 0x4d75da:c.instructions+=4;goto B4d75da;
case 0x4d75db:c.instructions+=3;goto B4d75db;
case 0x4d75e0:c.instructions+=2;goto B4d75e0;
case 0x4d75e4:c.instructions+=1;goto B4d75e4;
case 0x4d75e9:goto L4d75e9;
case 0x4d75ed:c.instructions+=6;goto B4d75ed;
case 0x4d75f1:c.instructions+=5;goto B4d75f1;
case 0x4d75f4:c.instructions+=4;goto B4d75f4;
case 0x4d75f5:c.instructions+=3;goto B4d75f5;
case 0x4d75f6:c.instructions+=2;goto B4d75f6;
case 0x4d75f7:c.instructions+=1;goto B4d75f7;
case 0x4d75fc:goto L4d75fc;
case 0x4d75ff:c.instructions+=2;goto B4d75ff;
case 0x4d7600:c.instructions+=1;goto B4d7600;
case 0x4d7605:goto L4d7605;
case 0x4d7607:c.instructions+=9;goto B4d7607;
case 0x4d760e:c.instructions+=8;goto B4d760e;
case 0x4d7611:c.instructions+=7;goto B4d7611;
case 0x4d7614:c.instructions+=6;goto B4d7614;
case 0x4d7615:c.instructions+=5;goto B4d7615;
case 0x4d761a:c.instructions+=4;goto B4d761a;
case 0x4d761b:c.instructions+=3;goto B4d761b;
case 0x4d7620:c.instructions+=2;goto B4d7620;
case 0x4d7624:c.instructions+=1;goto B4d7624;
case 0x4d7629:goto L4d7629;
case 0x4d762d:c.instructions+=4;goto B4d762d;
case 0x4d7630:c.instructions+=3;goto B4d7630;
case 0x4d7631:c.instructions+=2;goto B4d7631;
case 0x4d7632:c.instructions+=1;goto B4d7632;
case 0x4d7637:goto L4d7637;
case 0x4d763a:c.instructions+=7;goto B4d763a;
case 0x4d763d:c.instructions+=6;goto B4d763d;
case 0x4d763f:c.instructions+=5;goto B4d763f;
case 0x4d7643:c.instructions+=4;goto B4d7643;
case 0x4d7644:c.instructions+=3;goto B4d7644;
case 0x4d7648:c.instructions+=2;goto B4d7648;
case 0x4d764c:c.instructions+=1;goto B4d764c;
case 0x4d7651:goto L4d7651;
case 0x4d7654:c.instructions+=6;goto B4d7654;
case 0x4d7658:c.instructions+=5;goto B4d7658;
case 0x4d7659:c.instructions+=4;goto B4d7659;
case 0x4d765e:c.instructions+=3;goto B4d765e;
case 0x4d765f:c.instructions+=2;goto B4d765f;
case 0x4d7664:c.instructions+=1;goto B4d7664;
case 0x4d7669:goto L4d7669;
case 0x4d766c:c.instructions+=3;goto B4d766c;
case 0x4d766d:c.instructions+=2;goto B4d766d;
case 0x4d766e:c.instructions+=1;goto B4d766e;
case 0x4d7673:goto L4d7673;
case 0x4d7676:c.instructions+=2;goto B4d7676;
case 0x4d767b:c.instructions+=1;goto B4d767b;
case 0x4d7680:goto L4d7680;
case 0x4d7682:c.instructions+=1;goto B4d7682;
case 0x4d7688:goto L4d7688;
case 0x4d7689:c.instructions+=4;goto B4d7689;
case 0x4d768a:c.instructions+=3;goto B4d768a;
case 0x4d768b:c.instructions+=2;goto B4d768b;
case 0x4d768e:c.instructions+=1;goto B4d768e;
case 0x4d768f:goto L4d768f;
case 0x4d7694:c.instructions+=3;goto B4d7694;
case 0x4d7696:c.instructions+=2;goto B4d7696;
case 0x4d7698:c.instructions+=1;goto B4d7698;
case 0x4d769e:goto L4d769e;
case 0x4d76a0:goto L4d76a0;
case 0x4d76a1:c.instructions+=2;goto B4d76a1;
case 0x4d76a4:c.instructions+=1;goto B4d76a4;
case 0x4d76a9:goto L4d76a9;
case 0x4d76ab:c.instructions+=5;goto B4d76ab;
case 0x4d76ae:c.instructions+=4;goto B4d76ae;
case 0x4d76af:c.instructions+=3;goto B4d76af;
case 0x4d76b0:c.instructions+=2;goto B4d76b0;
case 0x4d76b2:c.instructions+=1;goto B4d76b2;
case 0x4d76b7:goto L4d76b7;
case 0x4d76ba:c.instructions+=4;goto B4d76ba;
case 0x4d76bb:c.instructions+=3;goto B4d76bb;
case 0x4d76bc:c.instructions+=2;goto B4d76bc;
case 0x4d76be:c.instructions+=1;goto B4d76be;
case 0x4d76c3:goto L4d76c3;
case 0x4d76c6:c.instructions+=4;goto B4d76c6;
case 0x4d76c9:c.instructions+=3;goto B4d76c9;
case 0x4d76cf:c.instructions+=2;goto B4d76cf;
case 0x4d76d0:c.instructions+=1;goto B4d76d0;
case 0x4d76d5:goto L4d76d5;
case 0x4d76d8:c.instructions+=5;goto B4d76d8;
case 0x4d76db:c.instructions+=4;goto B4d76db;
case 0x4d76dc:c.instructions+=3;goto B4d76dc;
case 0x4d76e1:c.instructions+=2;goto B4d76e1;
case 0x4d76e5:c.instructions+=1;goto B4d76e5;
case 0x4d76ea:goto L4d76ea;
case 0x4d76eb:c.instructions+=4;goto B4d76eb;
case 0x4d76ec:c.instructions+=3;goto B4d76ec;
case 0x4d76f1:c.instructions+=2;goto B4d76f1;
case 0x4d76f5:c.instructions+=1;goto B4d76f5;
case 0x4d76fa:goto L4d76fa;
case 0x4d76fe:c.instructions+=6;goto B4d76fe;
case 0x4d7701:c.instructions+=5;goto B4d7701;
case 0x4d7702:c.instructions+=4;goto B4d7702;
case 0x4d7703:c.instructions+=3;goto B4d7703;
case 0x4d7707:c.instructions+=2;goto B4d7707;
case 0x4d7708:c.instructions+=1;goto B4d7708;
case 0x4d770d:goto L4d770d;
case 0x4d7710:c.instructions+=2;goto B4d7710;
case 0x4d7711:c.instructions+=1;goto B4d7711;
case 0x4d7716:goto L4d7716;
case 0x4d7719:c.instructions+=8;goto B4d7719;
case 0x4d771c:c.instructions+=7;goto B4d771c;
case 0x4d771f:c.instructions+=6;goto B4d771f;
case 0x4d7721:c.instructions+=5;goto B4d7721;
case 0x4d7725:c.instructions+=4;goto B4d7725;
case 0x4d7726:c.instructions+=3;goto B4d7726;
case 0x4d772a:c.instructions+=2;goto B4d772a;
case 0x4d772e:c.instructions+=1;goto B4d772e;
case 0x4d7733:goto L4d7733;
case 0x4d7736:c.instructions+=7;goto B4d7736;
case 0x4d773a:c.instructions+=6;goto B4d773a;
case 0x4d773b:c.instructions+=5;goto B4d773b;
case 0x4d7740:c.instructions+=4;goto B4d7740;
case 0x4d7741:c.instructions+=3;goto B4d7741;
case 0x4d7746:c.instructions+=2;goto B4d7746;
case 0x4d774a:c.instructions+=1;goto B4d774a;
case 0x4d774f:goto L4d774f;
case 0x4d7752:c.instructions+=4;goto B4d7752;
case 0x4d7753:c.instructions+=3;goto B4d7753;
case 0x4d7757:c.instructions+=2;goto B4d7757;
case 0x4d7758:c.instructions+=1;goto B4d7758;
case 0x4d775d:goto L4d775d;
case 0x4d7760:c.instructions+=7;goto B4d7760;
case 0x4d7763:c.instructions+=6;goto B4d7763;
case 0x4d7766:c.instructions+=5;goto B4d7766;
case 0x4d7767:c.instructions+=4;goto B4d7767;
case 0x4d776c:c.instructions+=3;goto B4d776c;
case 0x4d776d:c.instructions+=2;goto B4d776d;
case 0x4d7772:c.instructions+=1;goto B4d7772;
case 0x4d7777:goto L4d7777;
case 0x4d777a:c.instructions+=3;goto B4d777a;
case 0x4d777b:c.instructions+=2;goto B4d777b;
case 0x4d777c:c.instructions+=1;goto B4d777c;
case 0x4d7781:goto L4d7781;
case 0x4d7786:c.instructions+=3;goto B4d7786;
case 0x4d7789:c.instructions+=2;goto B4d7789;
case 0x4d778b:c.instructions+=1;goto B4d778b;
case 0x4d7791:goto L4d7791;
case 0x4d7792:c.instructions+=4;goto B4d7792;
case 0x4d7793:c.instructions+=3;goto B4d7793;
case 0x4d7794:c.instructions+=2;goto B4d7794;
case 0x4d7797:c.instructions+=1;goto B4d7797;
case 0x4d77a0:goto L4d77a0;
case 0x4d77a5:c.instructions+=7;goto B4d77a5;
case 0x4d77a8:c.instructions+=6;goto B4d77a8;
case 0x4d77ab:c.instructions+=5;goto B4d77ab;
case 0x4d77ac:c.instructions+=4;goto B4d77ac;
case 0x4d77ad:c.instructions+=3;goto B4d77ad;
case 0x4d77ae:c.instructions+=2;goto B4d77ae;
case 0x4d77b0:c.instructions+=1;goto B4d77b0;
case 0x4d77b6:goto L4d77b6;
case 0x4d77bd:c.instructions+=1;goto B4d77bd;
case 0x4d77c3:goto L4d77c3;
case 0x4d77c8:c.instructions+=1;goto B4d77c8;
case 0x4d77d0:goto L4d77d0;
case 0x4d77d3:c.instructions+=3;goto B4d77d3;
case 0x4d77d4:c.instructions+=2;goto B4d77d4;
case 0x4d77da:c.instructions+=1;goto B4d77da;
case 0x4d77df:goto L4d77df;
case 0x4d77e5:c.instructions+=5;goto B4d77e5;
case 0x4d77e7:c.instructions+=4;goto B4d77e7;
case 0x4d77ea:c.instructions+=3;goto B4d77ea;
case 0x4d77ed:c.instructions+=2;goto B4d77ed;
case 0x4d77ee:c.instructions+=1;goto B4d77ee;
case 0x4d77f3:goto L4d77f3;
case 0x4d77f6:c.instructions+=2;goto B4d77f6;
case 0x4d77fa:c.instructions+=1;goto B4d77fa;
case 0x4d77fc:goto L4d77fc;
case 0x4d7802:c.instructions+=2;goto B4d7802;
case 0x4d7804:c.instructions+=1;goto B4d7804;
case 0x4d7806:goto L4d7806;
case 0x4d780d:c.instructions+=1;goto B4d780d;
case 0x4d780f:goto L4d780f;
case 0x4d7816:c.instructions+=1;goto B4d7816;
case 0x4d7818:goto L4d7818;
case 0x4d781b:c.instructions+=4;goto B4d781b;
case 0x4d781d:c.instructions+=3;goto B4d781d;
case 0x4d7822:c.instructions+=2;goto B4d7822;
case 0x4d7826:c.instructions+=1;goto B4d7826;
case 0x4d782b:goto L4d782b;
case 0x4d782e:c.instructions+=4;goto B4d782e;
case 0x4d782f:c.instructions+=3;goto B4d782f;
case 0x4d7830:c.instructions+=2;goto B4d7830;
case 0x4d7835:c.instructions+=1;goto B4d7835;
case 0x4d783a:goto L4d783a;
case 0x4d783e:c.instructions+=4;goto B4d783e;
case 0x4d7841:c.instructions+=3;goto B4d7841;
case 0x4d7842:c.instructions+=2;goto B4d7842;
case 0x4d7843:c.instructions+=1;goto B4d7843;
case 0x4d7848:goto L4d7848;
case 0x4d784b:goto L4d784b;
case 0x4d784e:c.instructions+=6;goto B4d784e;
case 0x4d784f:c.instructions+=5;goto B4d784f;
case 0x4d7854:c.instructions+=4;goto B4d7854;
case 0x4d7855:c.instructions+=3;goto B4d7855;
case 0x4d785a:c.instructions+=2;goto B4d785a;
case 0x4d785e:c.instructions+=1;goto B4d785e;
case 0x4d7863:goto L4d7863;
case 0x4d7867:c.instructions+=4;goto B4d7867;
case 0x4d786a:c.instructions+=3;goto B4d786a;
case 0x4d786b:c.instructions+=2;goto B4d786b;
case 0x4d786c:c.instructions+=1;goto B4d786c;
case 0x4d7871:goto L4d7871;
case 0x4d7874:c.instructions+=6;goto B4d7874;
case 0x4d7877:c.instructions+=5;goto B4d7877;
case 0x4d7878:c.instructions+=4;goto B4d7878;
case 0x4d787b:c.instructions+=3;goto B4d787b;
case 0x4d787c:c.instructions+=2;goto B4d787c;
case 0x4d787e:c.instructions+=1;goto B4d787e;
case 0x4d7883:goto L4d7883;
case 0x4d7886:c.instructions+=4;goto B4d7886;
case 0x4d7889:c.instructions+=3;goto B4d7889;
case 0x4d788f:c.instructions+=2;goto B4d788f;
case 0x4d7890:c.instructions+=1;goto B4d7890;
case 0x4d7895:goto L4d7895;
case 0x4d7898:c.instructions+=5;goto B4d7898;
case 0x4d789b:c.instructions+=4;goto B4d789b;
case 0x4d789c:c.instructions+=3;goto B4d789c;
case 0x4d78a1:c.instructions+=2;goto B4d78a1;
case 0x4d78a5:c.instructions+=1;goto B4d78a5;
case 0x4d78aa:goto L4d78aa;
case 0x4d78ab:c.instructions+=3;goto B4d78ab;
case 0x4d78b0:c.instructions+=2;goto B4d78b0;
case 0x4d78b4:c.instructions+=1;goto B4d78b4;
case 0x4d78b9:goto L4d78b9;
case 0x4d78bd:c.instructions+=6;goto B4d78bd;
case 0x4d78c0:c.instructions+=5;goto B4d78c0;
case 0x4d78c1:c.instructions+=4;goto B4d78c1;
case 0x4d78c2:c.instructions+=3;goto B4d78c2;
case 0x4d78c6:c.instructions+=2;goto B4d78c6;
case 0x4d78c7:c.instructions+=1;goto B4d78c7;
case 0x4d78cc:goto L4d78cc;
case 0x4d78cf:c.instructions+=2;goto B4d78cf;
case 0x4d78d0:c.instructions+=1;goto B4d78d0;
case 0x4d78d5:goto L4d78d5;
case 0x4d78d8:c.instructions+=7;goto B4d78d8;
case 0x4d78db:c.instructions+=6;goto B4d78db;
case 0x4d78de:c.instructions+=5;goto B4d78de;
case 0x4d78df:c.instructions+=4;goto B4d78df;
case 0x4d78e4:c.instructions+=3;goto B4d78e4;
case 0x4d78e5:c.instructions+=2;goto B4d78e5;
case 0x4d78ea:c.instructions+=1;goto B4d78ea;
case 0x4d78ef:goto L4d78ef;
case 0x4d78f2:c.instructions+=3;goto B4d78f2;
case 0x4d78f3:c.instructions+=2;goto B4d78f3;
case 0x4d78f4:c.instructions+=1;goto B4d78f4;
case 0x4d78f9:goto L4d78f9;
case 0x4d78fc:c.instructions+=4;goto B4d78fc;
case 0x4d78fd:c.instructions+=3;goto B4d78fd;
case 0x4d7900:c.instructions+=2;goto B4d7900;
case 0x4d7903:c.instructions+=1;goto B4d7903;
case 0x4d7909:goto L4d7909;
case 0x4d790a:c.instructions+=4;goto B4d790a;
case 0x4d790b:c.instructions+=3;goto B4d790b;
case 0x4d790c:c.instructions+=2;goto B4d790c;
case 0x4d790f:c.instructions+=1;goto B4d790f;
case 0x4d7910:goto L4d7910;
case 0x4d7915:c.instructions+=1;goto B4d7915;
case 0x4d7917:goto L4d7917;
case 0x4d791a:c.instructions+=1;goto B4d791a;
case 0x4d7920:goto L4d7920;
case 0x4d7927:c.instructions+=1;goto B4d7927;
case 0x4d792d:goto L4d792d;
case 0x4d7932:c.instructions+=2;goto B4d7932;
case 0x4d7934:c.instructions+=1;goto B4d7934;
case 0x4d7939:goto L4d7939;
case 0x4d793b:c.instructions+=1;goto B4d793b;
case 0x4d7941:goto L4d7941;
case 0x4d7942:c.instructions+=2;goto B4d7942;
case 0x4d7948:c.instructions+=1;goto B4d7948;
case 0x4d794d:goto L4d794d;
case 0x4d794f:c.instructions+=7;goto B4d794f;
case 0x4d7952:c.instructions+=6;goto B4d7952;
case 0x4d7955:c.instructions+=5;goto B4d7955;
case 0x4d7956:c.instructions+=4;goto B4d7956;
case 0x4d7957:c.instructions+=3;goto B4d7957;
case 0x4d7958:c.instructions+=2;goto B4d7958;
case 0x4d795a:c.instructions+=1;goto B4d795a;
case 0x4d795f:goto L4d795f;
case 0x4d7962:c.instructions+=4;goto B4d7962;
case 0x4d7963:c.instructions+=3;goto B4d7963;
case 0x4d7964:c.instructions+=2;goto B4d7964;
case 0x4d7966:c.instructions+=1;goto B4d7966;
case 0x4d796b:goto L4d796b;
case 0x4d796e:c.instructions+=4;goto B4d796e;
case 0x4d7971:c.instructions+=3;goto B4d7971;
case 0x4d7977:c.instructions+=2;goto B4d7977;
case 0x4d7978:c.instructions+=1;goto B4d7978;
case 0x4d797d:goto L4d797d;
case 0x4d7980:c.instructions+=5;goto B4d7980;
case 0x4d7983:c.instructions+=4;goto B4d7983;
case 0x4d7984:c.instructions+=3;goto B4d7984;
case 0x4d7989:c.instructions+=2;goto B4d7989;
case 0x4d798d:c.instructions+=1;goto B4d798d;
case 0x4d7992:goto L4d7992;
case 0x4d7993:c.instructions+=4;goto B4d7993;
case 0x4d7994:c.instructions+=3;goto B4d7994;
case 0x4d7999:c.instructions+=2;goto B4d7999;
case 0x4d799d:c.instructions+=1;goto B4d799d;
case 0x4d79a2:goto L4d79a2;
case 0x4d79a6:c.instructions+=6;goto B4d79a6;
case 0x4d79a9:c.instructions+=5;goto B4d79a9;
case 0x4d79aa:c.instructions+=4;goto B4d79aa;
case 0x4d79ab:c.instructions+=3;goto B4d79ab;
case 0x4d79af:c.instructions+=2;goto B4d79af;
case 0x4d79b0:c.instructions+=1;goto B4d79b0;
case 0x4d79b5:goto L4d79b5;
case 0x4d79b8:c.instructions+=2;goto B4d79b8;
case 0x4d79b9:c.instructions+=1;goto B4d79b9;
case 0x4d79be:goto L4d79be;
case 0x4d79c1:c.instructions+=7;goto B4d79c1;
case 0x4d79c4:c.instructions+=6;goto B4d79c4;
case 0x4d79c7:c.instructions+=5;goto B4d79c7;
case 0x4d79c8:c.instructions+=4;goto B4d79c8;
case 0x4d79cd:c.instructions+=3;goto B4d79cd;
case 0x4d79ce:c.instructions+=2;goto B4d79ce;
case 0x4d79d3:c.instructions+=1;goto B4d79d3;
case 0x4d79d8:goto L4d79d8;
case 0x4d79db:c.instructions+=3;goto B4d79db;
case 0x4d79dc:c.instructions+=2;goto B4d79dc;
case 0x4d79dd:c.instructions+=1;goto B4d79dd;
case 0x4d79e2:goto L4d79e2;
case 0x4d79e5:c.instructions+=2;goto B4d79e5;
case 0x4d79ea:c.instructions+=1;goto B4d79ea;
case 0x4d79ef:goto L4d79ef;
case 0x4d79f1:c.instructions+=1;goto B4d79f1;
case 0x4d79f7:goto L4d79f7;
case 0x4d79f8:c.instructions+=4;goto B4d79f8;
case 0x4d79f9:c.instructions+=3;goto B4d79f9;
case 0x4d79fa:c.instructions+=2;goto B4d79fa;
case 0x4d79fd:c.instructions+=1;goto B4d79fd;
case 0x4d79fe:goto L4d79fe;
case 0x4d7a03:c.instructions+=3;goto B4d7a03;
case 0x4d7a05:c.instructions+=2;goto B4d7a05;
case 0x4d7a07:c.instructions+=1;goto B4d7a07;
case 0x4d7a0d:goto L4d7a0d;
case 0x4d7a10:goto L4d7a10;
case 0x4d7a11:c.instructions+=2;goto B4d7a11;
case 0x4d7a17:c.instructions+=1;goto B4d7a17;
case 0x4d7a1c:goto L4d7a1c;
case 0x4d7a1e:c.instructions+=6;goto B4d7a1e;
case 0x4d7a21:c.instructions+=5;goto B4d7a21;
case 0x4d7a23:c.instructions+=4;goto B4d7a23;
case 0x4d7a24:c.instructions+=3;goto B4d7a24;
case 0x4d7a25:c.instructions+=2;goto B4d7a25;
case 0x4d7a27:c.instructions+=1;goto B4d7a27;
case 0x4d7a2c:goto L4d7a2c;
case 0x4d7a2f:c.instructions+=4;goto B4d7a2f;
case 0x4d7a30:c.instructions+=3;goto B4d7a30;
case 0x4d7a31:c.instructions+=2;goto B4d7a31;
case 0x4d7a33:c.instructions+=1;goto B4d7a33;
case 0x4d7a38:goto L4d7a38;
case 0x4d7a3b:c.instructions+=4;goto B4d7a3b;
case 0x4d7a3e:c.instructions+=3;goto B4d7a3e;
case 0x4d7a44:c.instructions+=2;goto B4d7a44;
case 0x4d7a45:c.instructions+=1;goto B4d7a45;
case 0x4d7a4a:goto L4d7a4a;
case 0x4d7a4d:c.instructions+=5;goto B4d7a4d;
case 0x4d7a50:c.instructions+=4;goto B4d7a50;
case 0x4d7a51:c.instructions+=3;goto B4d7a51;
case 0x4d7a56:c.instructions+=2;goto B4d7a56;
case 0x4d7a5a:c.instructions+=1;goto B4d7a5a;
case 0x4d7a5f:goto L4d7a5f;
case 0x4d7a60:c.instructions+=4;goto B4d7a60;
case 0x4d7a61:c.instructions+=3;goto B4d7a61;
case 0x4d7a66:c.instructions+=2;goto B4d7a66;
case 0x4d7a6a:c.instructions+=1;goto B4d7a6a;
case 0x4d7a6f:goto L4d7a6f;
case 0x4d7a73:c.instructions+=6;goto B4d7a73;
case 0x4d7a76:c.instructions+=5;goto B4d7a76;
case 0x4d7a77:c.instructions+=4;goto B4d7a77;
case 0x4d7a78:c.instructions+=3;goto B4d7a78;
case 0x4d7a7c:c.instructions+=2;goto B4d7a7c;
case 0x4d7a7d:c.instructions+=1;goto B4d7a7d;
case 0x4d7a82:goto L4d7a82;
case 0x4d7a85:c.instructions+=2;goto B4d7a85;
case 0x4d7a86:c.instructions+=1;goto B4d7a86;
case 0x4d7a8b:goto L4d7a8b;
case 0x4d7a8e:c.instructions+=7;goto B4d7a8e;
case 0x4d7a91:c.instructions+=6;goto B4d7a91;
case 0x4d7a94:c.instructions+=5;goto B4d7a94;
case 0x4d7a95:c.instructions+=4;goto B4d7a95;
case 0x4d7a9a:c.instructions+=3;goto B4d7a9a;
case 0x4d7a9b:c.instructions+=2;goto B4d7a9b;
case 0x4d7aa0:c.instructions+=1;goto B4d7aa0;
case 0x4d7aa5:goto L4d7aa5;
case 0x4d7aa8:c.instructions+=3;goto B4d7aa8;
case 0x4d7aa9:c.instructions+=2;goto B4d7aa9;
case 0x4d7aaa:c.instructions+=1;goto B4d7aaa;
case 0x4d7aaf:goto L4d7aaf;
case 0x4d7ab4:c.instructions+=3;goto B4d7ab4;
case 0x4d7ab7:c.instructions+=2;goto B4d7ab7;
case 0x4d7ab9:c.instructions+=1;goto B4d7ab9;
case 0x4d7abf:goto L4d7abf;
case 0x4d7ac0:c.instructions+=4;goto B4d7ac0;
case 0x4d7ac1:c.instructions+=3;goto B4d7ac1;
case 0x4d7ac2:c.instructions+=2;goto B4d7ac2;
case 0x4d7ac5:c.instructions+=1;goto B4d7ac5;
case 0x4d7ad0:goto L4d7ad0;
case 0x4d7ad2:c.instructions+=7;goto B4d7ad2;
case 0x4d7ad7:c.instructions+=6;goto B4d7ad7;
case 0x4d7add:c.instructions+=5;goto B4d7add;
case 0x4d7ade:c.instructions+=4;goto B4d7ade;
case 0x4d7ae5:c.instructions+=3;goto B4d7ae5;
case 0x4d7ae6:c.instructions+=2;goto B4d7ae6;
case 0x4d7aeb:c.instructions+=1;goto B4d7aeb;
case 0x4d7af0:goto L4d7af0;
case 0x4d7af3:c.instructions+=4;goto B4d7af3;
case 0x4d7af7:c.instructions+=3;goto B4d7af7;
case 0x4d7af9:c.instructions+=2;goto B4d7af9;
case 0x4d7b01:c.instructions+=1;goto B4d7b01;
case 0x4d7b03:goto L4d7b03;
case 0x4d7b07:c.instructions+=3;goto B4d7b07;
case 0x4d7b08:c.instructions+=2;goto B4d7b08;
case 0x4d7b0a:c.instructions+=1;goto B4d7b0a;
case 0x4d7b0f:goto L4d7b0f;
case 0x4d7b13:c.instructions+=3;goto B4d7b13;
case 0x4d7b1a:c.instructions+=2;goto B4d7b1a;
case 0x4d7b1d:c.instructions+=1;goto B4d7b1d;
case 0x4d7b1e:goto L4d7b1e;
case 0x4d7b22:c.instructions+=4;goto B4d7b22;
case 0x4d7b24:c.instructions+=3;goto B4d7b24;
case 0x4d7b2b:c.instructions+=2;goto B4d7b2b;
case 0x4d7b2e:c.instructions+=1;goto B4d7b2e;
case 0x4d7b30:goto L4d7b30;
case 0x4d7b31:c.instructions+=4;goto B4d7b31;
case 0x4d7b33:c.instructions+=3;goto B4d7b33;
case 0x4d7b36:c.instructions+=2;goto B4d7b36;
case 0x4d7b37:c.instructions+=1;goto B4d7b37;
case 0x4d7b3c:goto L4d7b3c;
case 0x4d7b3f:c.instructions+=2;goto B4d7b3f;
case 0x4d7b41:c.instructions+=1;goto B4d7b41;
case 0x4d7b43:goto L4d7b43;
case 0x4d7b45:c.instructions+=2;goto B4d7b45;
case 0x4d7b46:c.instructions+=1;goto B4d7b46;
case 0x4d7b4b:goto L4d7b4b;
case 0x4d7b4e:c.instructions+=2;goto B4d7b4e;
case 0x4d7b4f:c.instructions+=1;goto B4d7b4f;
case 0x4d7b54:goto L4d7b54;
case 0x4d7b57:c.instructions+=2;goto B4d7b57;
case 0x4d7b59:c.instructions+=1;goto B4d7b59;
case 0x4d7b5b:goto L4d7b5b;
case 0x4d7b5d:c.instructions+=2;goto B4d7b5d;
case 0x4d7b5e:c.instructions+=1;goto B4d7b5e;
case 0x4d7b63:goto L4d7b63;
case 0x4d7b66:c.instructions+=2;goto B4d7b66;
case 0x4d7b67:c.instructions+=1;goto B4d7b67;
case 0x4d7b6c:goto L4d7b6c;
case 0x4d7b6f:c.instructions+=2;goto B4d7b6f;
case 0x4d7b71:c.instructions+=1;goto B4d7b71;
case 0x4d7b73:goto L4d7b73;
case 0x4d7b75:c.instructions+=2;goto B4d7b75;
case 0x4d7b76:c.instructions+=1;goto B4d7b76;
case 0x4d7b7b:goto L4d7b7b;
case 0x4d7b7e:c.instructions+=2;goto B4d7b7e;
case 0x4d7b7f:c.instructions+=1;goto B4d7b7f;
case 0x4d7b84:goto L4d7b84;
case 0x4d7b87:c.instructions+=2;goto B4d7b87;
case 0x4d7b89:c.instructions+=1;goto B4d7b89;
case 0x4d7b8b:goto L4d7b8b;
case 0x4d7b8d:c.instructions+=2;goto B4d7b8d;
case 0x4d7b8e:c.instructions+=1;goto B4d7b8e;
case 0x4d7b93:goto L4d7b93;
case 0x4d7b96:c.instructions+=2;goto B4d7b96;
case 0x4d7b97:c.instructions+=1;goto B4d7b97;
case 0x4d7b9c:goto L4d7b9c;
case 0x4d7b9f:c.instructions+=2;goto B4d7b9f;
case 0x4d7ba1:c.instructions+=1;goto B4d7ba1;
case 0x4d7ba3:goto L4d7ba3;
case 0x4d7ba5:c.instructions+=2;goto B4d7ba5;
case 0x4d7ba6:c.instructions+=1;goto B4d7ba6;
case 0x4d7bab:goto L4d7bab;
case 0x4d7bae:c.instructions+=2;goto B4d7bae;
case 0x4d7baf:c.instructions+=1;goto B4d7baf;
case 0x4d7bb4:goto L4d7bb4;
case 0x4d7bb7:c.instructions+=2;goto B4d7bb7;
case 0x4d7bb9:c.instructions+=1;goto B4d7bb9;
case 0x4d7bbb:goto L4d7bbb;
case 0x4d7bbe:c.instructions+=2;goto B4d7bbe;
case 0x4d7bc0:c.instructions+=1;goto B4d7bc0;
case 0x4d7bc2:goto L4d7bc2;
case 0x4d7bc4:c.instructions+=2;goto B4d7bc4;
case 0x4d7bc5:c.instructions+=1;goto B4d7bc5;
case 0x4d7bca:goto L4d7bca;
case 0x4d7bcb:c.instructions+=1;goto B4d7bcb;
case 0x4d7bd0:goto L4d7bd0;
case 0x4d7bd3:c.instructions+=6;goto B4d7bd3;
case 0x4d7bd4:c.instructions+=5;goto B4d7bd4;
case 0x4d7bd6:c.instructions+=4;goto B4d7bd6;
case 0x4d7bd9:c.instructions+=3;goto B4d7bd9;
case 0x4d7bdb:c.instructions+=2;goto B4d7bdb;
case 0x4d7bdc:c.instructions+=1;goto B4d7bdc;
case 0x4d7bde:goto L4d7bde;
case 0x4d7be3:goto L4d7be3;
case 0x4d7be5:c.instructions+=1;goto B4d7be5;
case 0x4d7be7:goto L4d7be7;
case 0x4d7be9:c.instructions+=1;goto B4d7be9;
case 0x4d7bee:goto L4d7bee;
case 0x4d7bf0:goto L4d7bf0;
case 0x4d7bf6:c.instructions+=3;goto B4d7bf6;
case 0x4d7bf8:c.instructions+=2;goto B4d7bf8;
case 0x4d7bff:c.instructions+=1;goto B4d7bff;
case 0x4d7c01:goto L4d7c01;
case 0x4d7c08:goto L4d7c08;
case 0x4d7c0a:c.instructions+=1;goto B4d7c0a;
case 0x4d7c0c:goto L4d7c0c;
case 0x4d7c0f:c.instructions+=2;goto B4d7c0f;
case 0x4d7c11:c.instructions+=1;goto B4d7c11;
case 0x4d7c13:goto L4d7c13;
case 0x4d7c15:c.instructions+=1;goto B4d7c15;
case 0x4d7c1a:goto L4d7c1a;
case 0x4d7c1c:goto L4d7c1c;
case 0x4d7c1e:c.instructions+=2;goto B4d7c1e;
case 0x4d7c25:c.instructions+=1;goto B4d7c25;
case 0x4d7c27:goto L4d7c27;
case 0x4d7c2e:goto L4d7c2e;
case 0x4d7c30:c.instructions+=1;goto B4d7c30;
case 0x4d7c32:goto L4d7c32;
case 0x4d7c36:c.instructions+=1;goto B4d7c36;
case 0x4d7c38:goto L4d7c38;
case 0x4d7c3d:c.instructions+=3;goto B4d7c3d;
case 0x4d7c3f:c.instructions+=2;goto B4d7c3f;
case 0x4d7c46:c.instructions+=1;goto B4d7c46;
case 0x4d7c48:goto L4d7c48;
case 0x4d7c4f:goto L4d7c4f;
case 0x4d7c51:c.instructions+=1;goto B4d7c51;
case 0x4d7c53:goto L4d7c53;
case 0x4d7c57:goto L4d7c57;
case 0x4d7c5b:c.instructions+=2;goto B4d7c5b;
case 0x4d7c60:c.instructions+=1;goto B4d7c60;
case 0x4d7c66:goto L4d7c66;
case 0x4d7c6c:goto L4d7c6c;
case 0x4d7c71:c.instructions+=1;goto B4d7c71;
case 0x4d7c73:goto L4d7c73;
case 0x4d7c75:goto L4d7c75;
case 0x4d7c7a:c.instructions+=1;goto B4d7c7a;
case 0x4d7c7c:goto L4d7c7c;
case 0x4d7c81:c.instructions+=1;goto B4d7c81;
case 0x4d7c83:goto L4d7c83;
case 0x4d7c88:c.instructions+=1;goto B4d7c88;
case 0x4d7c8a:goto L4d7c8a;
case 0x4d7c8b:c.instructions+=3;goto B4d7c8b;
case 0x4d7c8c:c.instructions+=2;goto B4d7c8c;
case 0x4d7c8f:c.instructions+=1;goto B4d7c8f;
case 0x4d7c92:goto L4d7c92;
case 0x4d7c94:c.instructions+=1;goto B4d7c94;
case 0x4d7c99:goto L4d7c99;
case 0x4d7c9a:c.instructions+=3;goto B4d7c9a;
case 0x4d7c9b:c.instructions+=2;goto B4d7c9b;
case 0x4d7c9e:c.instructions+=1;goto B4d7c9e;
case 0x4d7ca1:goto L4d7ca1;
case 0x4d7ca3:c.instructions+=1;goto B4d7ca3;
case 0x4d7ca8:goto L4d7ca8;
case 0x4d7ca9:c.instructions+=3;goto B4d7ca9;
case 0x4d7caa:c.instructions+=2;goto B4d7caa;
case 0x4d7cad:c.instructions+=1;goto B4d7cad;
case 0x4d7cb0:goto L4d7cb0;
case 0x4d7cb2:c.instructions+=1;goto B4d7cb2;
case 0x4d7cb7:goto L4d7cb7;
case 0x4d7cb8:c.instructions+=3;goto B4d7cb8;
case 0x4d7cb9:c.instructions+=2;goto B4d7cb9;
case 0x4d7cbc:c.instructions+=1;goto B4d7cbc;
case 0x4d7cbf:goto L4d7cbf;
case 0x4d7cc4:c.instructions+=1;goto B4d7cc4;
case 0x4d7cc6:goto L4d7cc6;
case 0x4d7ccb:c.instructions+=1;goto B4d7ccb;
case 0x4d7cd1:goto L4d7cd1;
case 0x4d7cd4:c.instructions+=3;goto B4d7cd4;
case 0x4d7cd6:c.instructions+=2;goto B4d7cd6;
case 0x4d7cdb:c.instructions+=1;goto B4d7cdb;
case 0x4d7ce0:goto L4d7ce0;
case 0x4d7ce3:c.instructions+=4;goto B4d7ce3;
case 0x4d7ce4:c.instructions+=3;goto B4d7ce4;
case 0x4d7ce9:c.instructions+=2;goto B4d7ce9;
case 0x4d7cea:c.instructions+=1;goto B4d7cea;
case 0x4d7cef:goto L4d7cef;
case 0x4d7cf2:c.instructions+=3;goto B4d7cf2;
case 0x4d7cf5:c.instructions+=2;goto B4d7cf5;
case 0x4d7cf7:c.instructions+=1;goto B4d7cf7;
case 0x4d7cf9:goto L4d7cf9;
case 0x4d7cfc:c.instructions+=2;goto B4d7cfc;
case 0x4d7cfe:c.instructions+=1;goto B4d7cfe;
case 0x4d7d00:goto L4d7d00;
case 0x4d7d02:c.instructions+=1;goto B4d7d02;
case 0x4d7d07:goto L4d7d07;
case 0x4d7d08:c.instructions+=4;goto B4d7d08;
case 0x4d7d0c:c.instructions+=3;goto B4d7d0c;
case 0x4d7d0d:c.instructions+=2;goto B4d7d0d;
case 0x4d7d10:c.instructions+=1;goto B4d7d10;
case 0x4d7d13:goto L4d7d13;
case 0x4d7d15:c.instructions+=1;goto B4d7d15;
case 0x4d7d1a:goto L4d7d1a;
case 0x4d7d1b:c.instructions+=3;goto B4d7d1b;
case 0x4d7d1c:c.instructions+=2;goto B4d7d1c;
case 0x4d7d1f:c.instructions+=1;goto B4d7d1f;
case 0x4d7d22:goto L4d7d22;
case 0x4d7d24:c.instructions+=1;goto B4d7d24;
case 0x4d7d29:goto L4d7d29;
case 0x4d7d2a:c.instructions+=3;goto B4d7d2a;
case 0x4d7d2b:c.instructions+=2;goto B4d7d2b;
case 0x4d7d2e:c.instructions+=1;goto B4d7d2e;
case 0x4d7d31:goto L4d7d31;
case 0x4d7d36:c.instructions+=1;goto B4d7d36;
case 0x4d7d3c:goto L4d7d3c;
case 0x4d7d3e:goto L4d7d3e;
case 0x4d7d43:c.instructions+=1;goto B4d7d43;
case 0x4d7d49:goto L4d7d49;
case 0x4d7d4e:c.instructions+=1;goto B4d7d4e;
case 0x4d7d54:goto L4d7d54;
case 0x4d7d56:c.instructions+=1;goto B4d7d56;
case 0x4d7d5b:goto L4d7d5b;
case 0x4d7d5c:c.instructions+=3;goto B4d7d5c;
case 0x4d7d5d:c.instructions+=2;goto B4d7d5d;
case 0x4d7d60:c.instructions+=1;goto B4d7d60;
case 0x4d7d63:goto L4d7d63;
case 0x4d7d66:c.instructions+=2;goto B4d7d66;
case 0x4d7d68:c.instructions+=1;goto B4d7d68;
case 0x4d7d6e:goto L4d7d6e;
case 0x4d7d73:c.instructions+=3;goto B4d7d73;
case 0x4d7d76:c.instructions+=2;goto B4d7d76;
case 0x4d7d78:c.instructions+=1;goto B4d7d78;
case 0x4d7d7e:goto L4d7d7e;
case 0x4d7d84:c.instructions+=2;goto B4d7d84;
case 0x4d7d87:c.instructions+=1;goto B4d7d87;
case 0x4d7d8d:goto L4d7d8d;
case 0x4d7d90:c.instructions+=2;goto B4d7d90;
case 0x4d7d95:c.instructions+=1;goto B4d7d95;
case 0x4d7d9a:goto L4d7d9a;
case 0x4d7d9d:c.instructions+=3;goto B4d7d9d;
case 0x4d7d9e:c.instructions+=2;goto B4d7d9e;
case 0x4d7da3:c.instructions+=1;goto B4d7da3;
case 0x4d7da8:goto L4d7da8;
case 0x4d7dab:c.instructions+=3;goto B4d7dab;
case 0x4d7dac:c.instructions+=2;goto B4d7dac;
case 0x4d7dad:c.instructions+=1;goto B4d7dad;
case 0x4d7db2:goto L4d7db2;
case 0x4d7db5:c.instructions+=2;goto B4d7db5;
case 0x4d7db7:c.instructions+=1;goto B4d7db7;
case 0x4d7db9:goto L4d7db9;
case 0x4d7dbc:c.instructions+=3;goto B4d7dbc;
case 0x4d7dbe:c.instructions+=2;goto B4d7dbe;
case 0x4d7dc3:c.instructions+=1;goto B4d7dc3;
case 0x4d7dc8:goto L4d7dc8;
case 0x4d7dcb:c.instructions+=3;goto B4d7dcb;
case 0x4d7dcc:c.instructions+=2;goto B4d7dcc;
case 0x4d7dd1:c.instructions+=1;goto B4d7dd1;
case 0x4d7dd6:goto L4d7dd6;
case 0x4d7dd9:c.instructions+=3;goto B4d7dd9;
case 0x4d7dda:c.instructions+=2;goto B4d7dda;
case 0x4d7ddb:c.instructions+=1;goto B4d7ddb;
case 0x4d7de0:goto L4d7de0;
case 0x4d7de3:goto L4d7de3;
case 0x4d7de6:c.instructions+=2;goto B4d7de6;
case 0x4d7deb:c.instructions+=1;goto B4d7deb;
case 0x4d7df0:goto L4d7df0;
case 0x4d7df3:c.instructions+=3;goto B4d7df3;
case 0x4d7df4:c.instructions+=2;goto B4d7df4;
case 0x4d7df9:c.instructions+=1;goto B4d7df9;
case 0x4d7dfe:goto L4d7dfe;
case 0x4d7e01:c.instructions+=3;goto B4d7e01;
case 0x4d7e02:c.instructions+=2;goto B4d7e02;
case 0x4d7e03:c.instructions+=1;goto B4d7e03;
case 0x4d7e08:goto L4d7e08;
case 0x4d7e0b:c.instructions+=2;goto B4d7e0b;
case 0x4d7e0d:c.instructions+=1;goto B4d7e0d;
case 0x4d7e0f:goto L4d7e0f;
case 0x4d7e12:c.instructions+=3;goto B4d7e12;
case 0x4d7e14:c.instructions+=2;goto B4d7e14;
case 0x4d7e19:c.instructions+=1;goto B4d7e19;
case 0x4d7e1e:goto L4d7e1e;
case 0x4d7e21:c.instructions+=3;goto B4d7e21;
case 0x4d7e22:c.instructions+=2;goto B4d7e22;
case 0x4d7e27:c.instructions+=1;goto B4d7e27;
case 0x4d7e2c:goto L4d7e2c;
case 0x4d7e2f:c.instructions+=3;goto B4d7e2f;
case 0x4d7e30:c.instructions+=2;goto B4d7e30;
case 0x4d7e31:c.instructions+=1;goto B4d7e31;
case 0x4d7e36:goto L4d7e36;
case 0x4d7e39:goto L4d7e39;
case 0x4d7e3f:c.instructions+=1;goto B4d7e3f;
case 0x4d7e44:goto L4d7e44;
case 0x4d7e4a:c.instructions+=2;goto B4d7e4a;
case 0x4d7e4c:c.instructions+=1;goto B4d7e4c;
case 0x4d7e4e:goto L4d7e4e;
case 0x4d7e51:c.instructions+=2;goto B4d7e51;
case 0x4d7e57:c.instructions+=1;goto B4d7e57;
case 0x4d7e59:goto L4d7e59;
case 0x4d7e5f:goto L4d7e5f;
case 0x4d7e65:c.instructions+=9;goto B4d7e65;
case 0x4d7e6b:c.instructions+=8;goto B4d7e6b;
case 0x4d7e6f:c.instructions+=7;goto B4d7e6f;
case 0x4d7e70:c.instructions+=6;goto B4d7e70;
case 0x4d7e76:c.instructions+=5;goto B4d7e76;
case 0x4d7e7a:c.instructions+=4;goto B4d7e7a;
case 0x4d7e7b:c.instructions+=3;goto B4d7e7b;
case 0x4d7e7c:c.instructions+=2;goto B4d7e7c;
case 0x4d7e80:c.instructions+=1;goto B4d7e80;
case 0x4d7e85:goto L4d7e85;
case 0x4d7e89:c.instructions+=10;goto B4d7e89;
case 0x4d7e8f:c.instructions+=9;goto B4d7e8f;
case 0x4d7e95:c.instructions+=8;goto B4d7e95;
case 0x4d7e98:c.instructions+=7;goto B4d7e98;
case 0x4d7e9e:c.instructions+=6;goto B4d7e9e;
case 0x4d7ea2:c.instructions+=5;goto B4d7ea2;
case 0x4d7ea8:c.instructions+=4;goto B4d7ea8;
case 0x4d7eaa:c.instructions+=3;goto B4d7eaa;
case 0x4d7ead:c.instructions+=2;goto B4d7ead;
case 0x4d7eae:c.instructions+=1;goto B4d7eae;
case 0x4d7eb3:goto L4d7eb3;
case 0x4d7eb7:c.instructions+=6;goto B4d7eb7;
case 0x4d7ebd:c.instructions+=5;goto B4d7ebd;
case 0x4d7ec3:c.instructions+=4;goto B4d7ec3;
case 0x4d7ec6:c.instructions+=3;goto B4d7ec6;
case 0x4d7ec9:c.instructions+=2;goto B4d7ec9;
case 0x4d7eca:c.instructions+=1;goto B4d7eca;
case 0x4d7ecf:goto L4d7ecf;
case 0x4d7ed5:c.instructions+=4;goto B4d7ed5;
case 0x4d7edb:c.instructions+=3;goto B4d7edb;
case 0x4d7edc:c.instructions+=2;goto B4d7edc;
case 0x4d7edd:c.instructions+=1;goto B4d7edd;
case 0x4d7ee2:goto L4d7ee2;
case 0x4d7ee7:c.instructions+=5;goto B4d7ee7;
case 0x4d7eea:c.instructions+=4;goto B4d7eea;
case 0x4d7ef0:c.instructions+=3;goto B4d7ef0;
case 0x4d7ef3:c.instructions+=2;goto B4d7ef3;
case 0x4d7ef4:c.instructions+=1;goto B4d7ef4;
case 0x4d7ef9:goto L4d7ef9;
case 0x4d7efb:c.instructions+=1;goto B4d7efb;
case 0x4d7efd:goto L4d7efd;
case 0x4d7f01:c.instructions+=1;goto B4d7f01;
case 0x4d7f03:goto L4d7f03;
case 0x4d7f08:goto L4d7f08;
case 0x4d7f0e:c.instructions+=4;goto B4d7f0e;
case 0x4d7f14:c.instructions+=3;goto B4d7f14;
case 0x4d7f15:c.instructions+=2;goto B4d7f15;
case 0x4d7f17:c.instructions+=1;goto B4d7f17;
case 0x4d7f19:goto L4d7f19;
case 0x4d7f1b:goto L4d7f1b;
case 0x4d7f21:c.instructions+=4;goto B4d7f21;
case 0x4d7f22:c.instructions+=3;goto B4d7f22;
case 0x4d7f27:c.instructions+=2;goto B4d7f27;
case 0x4d7f28:c.instructions+=1;goto B4d7f28;
case 0x4d7f2d:goto L4d7f2d;
case 0x4d7f33:c.instructions+=2;goto B4d7f33;
case 0x4d7f34:c.instructions+=1;goto B4d7f34;
case 0x4d7f39:goto L4d7f39;
case 0x4d7f3f:c.instructions+=4;goto B4d7f3f;
case 0x4d7f40:c.instructions+=3;goto B4d7f40;
case 0x4d7f45:c.instructions+=2;goto B4d7f45;
case 0x4d7f46:c.instructions+=1;goto B4d7f46;
case 0x4d7f4b:goto L4d7f4b;
case 0x4d7f51:c.instructions+=3;goto B4d7f51;
case 0x4d7f54:c.instructions+=2;goto B4d7f54;
case 0x4d7f56:c.instructions+=1;goto B4d7f56;
case 0x4d7f58:goto L4d7f58;
case 0x4d7f5b:c.instructions+=2;goto B4d7f5b;
case 0x4d7f61:c.instructions+=1;goto B4d7f61;
case 0x4d7f63:goto L4d7f63;
case 0x4d7f69:goto L4d7f69;
case 0x4d7f6f:c.instructions+=3;goto B4d7f6f;
case 0x4d7f75:c.instructions+=2;goto B4d7f75;
case 0x4d7f7b:c.instructions+=1;goto B4d7f7b;
case 0x4d7f80:goto L4d7f80;
case 0x4d7f82:c.instructions+=5;goto B4d7f82;
case 0x4d7f86:c.instructions+=4;goto B4d7f86;
case 0x4d7f87:c.instructions+=3;goto B4d7f87;
case 0x4d7f8b:c.instructions+=2;goto B4d7f8b;
case 0x4d7f8f:c.instructions+=1;goto B4d7f8f;
case 0x4d7f94:goto L4d7f94;
case 0x4d7f9a:c.instructions+=5;goto B4d7f9a;
case 0x4d7f9e:c.instructions+=4;goto B4d7f9e;
case 0x4d7f9f:c.instructions+=3;goto B4d7f9f;
case 0x4d7fa4:c.instructions+=2;goto B4d7fa4;
case 0x4d7fa5:c.instructions+=1;goto B4d7fa5;
case 0x4d7faa:goto L4d7faa;
case 0x4d7fad:c.instructions+=4;goto B4d7fad;
case 0x4d7fb0:c.instructions+=3;goto B4d7fb0;
case 0x4d7fb1:c.instructions+=2;goto B4d7fb1;
case 0x4d7fb2:c.instructions+=1;goto B4d7fb2;
case 0x4d7fb7:goto L4d7fb7;
case 0x4d7fba:c.instructions+=4;goto B4d7fba;
case 0x4d7fbb:c.instructions+=3;goto B4d7fbb;
case 0x4d7fbc:c.instructions+=2;goto B4d7fbc;
case 0x4d7fbf:c.instructions+=1;goto B4d7fbf;
case 0x4d7fc2:goto L4d7fc2;
case 0x4d7fc7:c.instructions+=1;goto B4d7fc7;
case 0x4d7fc9:goto L4d7fc9;
case 0x4d7fce:c.instructions+=1;goto B4d7fce;
case 0x4d7fd0:goto L4d7fd0;
case 0x4d7fd2:c.instructions+=1;goto B4d7fd2;
case 0x4d7fd7:goto L4d7fd7;
case 0x4d7fd8:c.instructions+=3;goto B4d7fd8;
case 0x4d7fd9:c.instructions+=2;goto B4d7fd9;
case 0x4d7fdc:c.instructions+=1;goto B4d7fdc;
case 0x4d7fdf:goto L4d7fdf;
case 0x4d7fe2:c.instructions+=5;goto B4d7fe2;
case 0x4d7fe5:c.instructions+=4;goto B4d7fe5;
case 0x4d7fe7:c.instructions+=3;goto B4d7fe7;
case 0x4d7fec:c.instructions+=2;goto B4d7fec;
case 0x4d7fef:c.instructions+=1;goto B4d7fef;
case 0x4d7ff4:goto L4d7ff4;
case 0x4d7ff7:c.instructions+=4;goto B4d7ff7;
case 0x4d7ff8:c.instructions+=3;goto B4d7ff8;
case 0x4d7ffd:c.instructions+=2;goto B4d7ffd;
case 0x4d7ffe:c.instructions+=1;goto B4d7ffe;
default:missing_instruction(c.pc);}
B4d7010:L4d7010:{c.instructions+=13;NFSU2_TR(0x4d7010);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7012:{NFSU2_TR(0x4d7012);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7017:{NFSU2_TR(0x4d7017);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d701d:{NFSU2_TR(0x4d701d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d701e:{NFSU2_TR(0x4d701e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7025:{NFSU2_TR(0x4d7025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7026:{NFSU2_TR(0x4d7026);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7027:{NFSU2_TR(0x4d7027);
__builtin_memmove((R+24),(R+4),4);
}
B4d7029:{NFSU2_TR(0x4d7029);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d702d:{NFSU2_TR(0x4d702d);
u8 U[4];
w4(U+0,u32(0x796474ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d7033:{NFSU2_TR(0x4d7033);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7036:{NFSU2_TR(0x4d7036);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d703e:{NFSU2_TR(0x4d703e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7043ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d7043:L4d7043:{c.instructions+=3;NFSU2_TR(0x4d7043);
__builtin_memmove((R+4),(R+24),4);
}
B4d7045:{NFSU2_TR(0x4d7045);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d704d:{NFSU2_TR(0x4d704d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7052ull));
TAIL_STATIC(0x510d40u,510);
}
B4d7052:L4d7052:{c.instructions+=5;NFSU2_TR(0x4d7052);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7056:{NFSU2_TR(0x4d7056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7057:{NFSU2_TR(0x4d7057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d705e:{NFSU2_TR(0x4d705e);
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
B4d7061:{NFSU2_TR(0x4d7061);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7070:L4d7070:{c.instructions+=8;NFSU2_TR(0x4d7070);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7072:{NFSU2_TR(0x4d7072);
u8 U[4];
w4(U+0,u32(0x774ad4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7077:{NFSU2_TR(0x4d7077);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d707d:{NFSU2_TR(0x4d707d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d707e:{NFSU2_TR(0x4d707e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7085:{NFSU2_TR(0x4d7085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7086:{NFSU2_TR(0x4d7086);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d708b:{NFSU2_TR(0x4d708b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7090ull));
TAIL_STATIC(0x575620u,575);
}
B4d7090:L4d7090:{c.instructions+=5;NFSU2_TR(0x4d7090);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7093:{NFSU2_TR(0x4d7093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d7097:{NFSU2_TR(0x4d7097);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7099:{NFSU2_TR(0x4d7099);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d70a1:{NFSU2_TR(0x4d70a1);
if(r1(R+518)){{goto L4d70b1;}}
}
B4d70a3:L4d70a3:{c.instructions+=4;NFSU2_TR(0x4d70a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d70a7:{NFSU2_TR(0x4d70a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d70a8:{NFSU2_TR(0x4d70a8);
__builtin_memmove((R+4),(R+0),4);
}
B4d70aa:{NFSU2_TR(0x4d70aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d70afull));
TAIL_STATIC(0x4d6d50u,4d6);
}
B4d70af:L4d70af:{c.instructions+=1;NFSU2_TR(0x4d70af);
{goto L4d70b3;}
}
B4d70b1:L4d70b1:{c.instructions+=1;NFSU2_TR(0x4d70b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d70b3:L4d70b3:{c.instructions+=7;NFSU2_TR(0x4d70b3);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4d70b9:{NFSU2_TR(0x4d70b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d70bc:{NFSU2_TR(0x4d70bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d70c2:{NFSU2_TR(0x4d70c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d70c6:{NFSU2_TR(0x4d70c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d70cd:{NFSU2_TR(0x4d70cd);
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
B4d70d0:{NFSU2_TR(0x4d70d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d70e0:L4d70e0:{c.instructions+=5;NFSU2_TR(0x4d70e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d70e1:{NFSU2_TR(0x4d70e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d70e2:{NFSU2_TR(0x4d70e2);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d70e4:{NFSU2_TR(0x4d70e4);
__builtin_memmove((R+28),(R+4),4);
}
B4d70e6:{NFSU2_TR(0x4d70e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d70ebull));
TAIL_STATIC(0x575620u,575);
}
B4d70eb:L4d70eb:{c.instructions+=3;NFSU2_TR(0x4d70eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d70ee:{NFSU2_TR(0x4d70ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d70f0:{NFSU2_TR(0x4d70f0);
if(r1(R+518)){{goto L4d7108;}}
}
B4d70f2:L4d70f2:{c.instructions+=7;NFSU2_TR(0x4d70f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d70f5:{NFSU2_TR(0x4d70f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d70f7:{NFSU2_TR(0x4d70f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d70fa:{NFSU2_TR(0x4d70fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d70fe:{NFSU2_TR(0x4d70fe);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d7104:{NFSU2_TR(0x4d7104);
__builtin_memmove((R+24),(R+0),4);
}
B4d7106:{NFSU2_TR(0x4d7106);
{goto L4d710a;}
}
B4d7108:L4d7108:{c.instructions+=1;NFSU2_TR(0x4d7108);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d710a:L4d710a:{c.instructions+=10;NFSU2_TR(0x4d710a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d710e:{NFSU2_TR(0x4d710e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7112:{NFSU2_TR(0x4d7112);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7116:{NFSU2_TR(0x4d7116);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7118:{NFSU2_TR(0x4d7118);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d711a:{NFSU2_TR(0x4d711a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d711d:{NFSU2_TR(0x4d711d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d711e:{NFSU2_TR(0x4d711e);
__builtin_memmove((R+4),(R+24),4);
}
B4d7120:{NFSU2_TR(0x4d7120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7123:{NFSU2_TR(0x4d7123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7128ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d7128:L4d7128:{c.instructions+=6;NFSU2_TR(0x4d7128);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d712c:{NFSU2_TR(0x4d712c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d712e:{NFSU2_TR(0x4d712e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7130:{NFSU2_TR(0x4d7130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7131:{NFSU2_TR(0x4d7131);
__builtin_memmove((R+4),(R+24),4);
}
B4d7133:{NFSU2_TR(0x4d7133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7138ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d7138:L4d7138:{c.instructions+=4;NFSU2_TR(0x4d7138);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B4d713b:{NFSU2_TR(0x4d713b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d713c:{NFSU2_TR(0x4d713c);
__builtin_memmove((R+4),(R+28),4);
}
B4d713e:{NFSU2_TR(0x4d713e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7143ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d7143:L4d7143:{c.instructions+=3;NFSU2_TR(0x4d7143);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7144:{NFSU2_TR(0x4d7144);
__builtin_memmove((R+4),(R+28),4);
}
B4d7146:{NFSU2_TR(0x4d7146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d714bull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d714b:L4d714b:{c.instructions+=3;NFSU2_TR(0x4d714b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d714d:{NFSU2_TR(0x4d714d);
__builtin_memmove((R+4),(R+28),4);
}
B4d714f:{NFSU2_TR(0x4d714f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7154ull));
TAIL_STATIC(0x538500u,538);
}
B4d7154:L4d7154:{c.instructions+=4;NFSU2_TR(0x4d7154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7155:{NFSU2_TR(0x4d7155);
__builtin_memmove((R+0),(R+24),4);
}
B4d7157:{NFSU2_TR(0x4d7157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7158:{NFSU2_TR(0x4d7158);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7160:L4d7160:{c.instructions+=7;NFSU2_TR(0x4d7160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7161:{NFSU2_TR(0x4d7161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7162:{NFSU2_TR(0x4d7162);
__builtin_memmove((R+24),(R+4),4);
}
B4d7164:{NFSU2_TR(0x4d7164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7167:{NFSU2_TR(0x4d7167);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7168:{NFSU2_TR(0x4d7168);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7169:{NFSU2_TR(0x4d7169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d716eull));
TAIL_STATIC(0x4a3d50u,4a3);
}
B4d716e:L4d716e:{c.instructions+=6;NFSU2_TR(0x4d716e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7171:{NFSU2_TR(0x4d7171);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7174:{NFSU2_TR(0x4d7174);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7179:{NFSU2_TR(0x4d7179);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d717e:{NFSU2_TR(0x4d717e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d717f:{NFSU2_TR(0x4d717f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7184ull));
TAIL_STATIC(0x537a10u,537);
}
B4d7184:L4d7184:{c.instructions+=3;NFSU2_TR(0x4d7184);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7187:{NFSU2_TR(0x4d7187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7188:{NFSU2_TR(0x4d7188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d718dull));
TAIL_STATIC(0x50c900u,50c);
}
B4d718d:L4d718d:{c.instructions+=6;NFSU2_TR(0x4d718d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7190:{NFSU2_TR(0x4d7190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7193:{NFSU2_TR(0x4d7193);
u8 U[4];
w4(U+0,u32(0x79ad657full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7198:{NFSU2_TR(0x4d7198);
u8 U[4];
w4(U+0,u32(0xb5074ab4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d719d:{NFSU2_TR(0x4d719d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d719e:{NFSU2_TR(0x4d719e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71a3ull));
TAIL_STATIC(0x537a10u,537);
}
B4d71a3:L4d71a3:{c.instructions+=3;NFSU2_TR(0x4d71a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d71a6:{NFSU2_TR(0x4d71a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71a7:{NFSU2_TR(0x4d71a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71acull));
TAIL_STATIC(0x50c900u,50c);
}
B4d71ac:L4d71ac:{c.instructions+=3;NFSU2_TR(0x4d71ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d71af:{NFSU2_TR(0x4d71af);
u8 U[4];
w4(U+0,u32(0x7964a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71b4:{NFSU2_TR(0x4d71b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71b9ull));
TAIL_STATIC(0x505450u,505);
}
B4d71b9:L4d71b9:{c.instructions+=3;NFSU2_TR(0x4d71b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71ba:{NFSU2_TR(0x4d71ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71bb:{NFSU2_TR(0x4d71bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71c0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d71c0:L4d71c0:{c.instructions+=2;NFSU2_TR(0x4d71c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71c1:{NFSU2_TR(0x4d71c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71c6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d71c6:L4d71c6:{c.instructions+=3;NFSU2_TR(0x4d71c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4d71c9:{NFSU2_TR(0x4d71c9);
__builtin_memmove((R+4),(R+24),4);
}
B4d71cb:{NFSU2_TR(0x4d71cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71d0ull));
TAIL_STATIC(0x4bee10u,4be);
}
B4d71d0:L4d71d0:{c.instructions+=5;NFSU2_TR(0x4d71d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d71d3:{NFSU2_TR(0x4d71d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d71d6:{NFSU2_TR(0x4d71d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d71d9:{NFSU2_TR(0x4d71d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71da:{NFSU2_TR(0x4d71da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71dfull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4d71df:L4d71df:{c.instructions+=4;NFSU2_TR(0x4d71df);
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
B4d71e2:{NFSU2_TR(0x4d71e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71e3:{NFSU2_TR(0x4d71e3);
__builtin_memmove((R+4),(R+28),4);
}
B4d71e5:{NFSU2_TR(0x4d71e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d71e8:L4d71e8:{c.instructions+=3;NFSU2_TR(0x4d71e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4d71ea:{NFSU2_TR(0x4d71ea);
__builtin_memmove((R+4),(R+24),4);
}
B4d71ec:{NFSU2_TR(0x4d71ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d71ef:L4d71ef:{c.instructions+=1;NFSU2_TR(0x4d71ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71f4ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4d71f4:L4d71f4:{c.instructions+=2;NFSU2_TR(0x4d71f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d71f5:{NFSU2_TR(0x4d71f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d71faull));
TAIL_STATIC(0x52cf60u,52c);
}
B4d71fa:L4d71fa:{c.instructions+=3;NFSU2_TR(0x4d71fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d71fd:{NFSU2_TR(0x4d71fd);
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
B4d71ff:{NFSU2_TR(0x4d71ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d721a;}}
}
B4d7201:L4d7201:{c.instructions+=5;NFSU2_TR(0x4d7201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7204:{NFSU2_TR(0x4d7204);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7206:{NFSU2_TR(0x4d7206);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d720b:{NFSU2_TR(0x4d720b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d720c:{NFSU2_TR(0x4d720c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7211ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4d7211:L4d7211:{c.instructions+=2;NFSU2_TR(0x4d7211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7212:{NFSU2_TR(0x4d7212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7217ull));
TAIL_STATIC(0x555f10u,555);
}
B4d7217:L4d7217:{c.instructions+=1;NFSU2_TR(0x4d7217);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d721a:L4d721a:{c.instructions+=2;NFSU2_TR(0x4d721a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d7220:{NFSU2_TR(0x4d7220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7225ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4d7225:L4d7225:{c.instructions+=6;NFSU2_TR(0x4d7225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7228:{NFSU2_TR(0x4d7228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d722b:{NFSU2_TR(0x4d722b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d722c:{NFSU2_TR(0x4d722c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d722d:{NFSU2_TR(0x4d722d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d7233:{NFSU2_TR(0x4d7233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7238ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4d7238:L4d7238:{c.instructions+=4;NFSU2_TR(0x4d7238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7239:{NFSU2_TR(0x4d7239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d723a:{NFSU2_TR(0x4d723a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d723b:{NFSU2_TR(0x4d723b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7240:L4d7240:{c.instructions+=6;NFSU2_TR(0x4d7240);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4d7245:{NFSU2_TR(0x4d7245);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4d724a:{NFSU2_TR(0x4d724a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d724b:{NFSU2_TR(0x4d724b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d724c:{NFSU2_TR(0x4d724c);
__builtin_memmove((R+20),(R+4),4);
}
B4d724e:{NFSU2_TR(0x4d724e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4d7279;}}
}
B4d7250:L4d7250:{c.instructions+=2;NFSU2_TR(0x4d7250);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7255:{NFSU2_TR(0x4d7255);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4d7279;}}
}
B4d7257:L4d7257:{c.instructions+=3;NFSU2_TR(0x4d7257);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7259:{NFSU2_TR(0x4d7259);
w4(R+4,u32(0x864630ull));
}
B4d725e:{NFSU2_TR(0x4d725e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7263ull));
TAIL_STATIC(0x43be80u,43b);
}
B4d7263:L4d7263:{c.instructions+=3;NFSU2_TR(0x4d7263);
__builtin_memmove((R+4),(R+20),4);
}
B4d7265:{NFSU2_TR(0x4d7265);
__builtin_memmove((R+24),(R+0),4);
}
B4d7267:{NFSU2_TR(0x4d7267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d726cull));
TAIL_STATIC(0x4bf140u,4bf);
}
B4d726c:L4d726c:{c.instructions+=4;NFSU2_TR(0x4d726c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d726d:{NFSU2_TR(0x4d726d);
__builtin_memmove((R+4),(R+20),4);
}
B4d726f:{NFSU2_TR(0x4d726f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7271:{NFSU2_TR(0x4d7271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7276ull));
TAIL_STATIC(0x4a41a0u,4a4);
}
B4d7276:L4d7276:{c.instructions+=3;NFSU2_TR(0x4d7276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7277:{NFSU2_TR(0x4d7277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d7278:{NFSU2_TR(0x4d7278);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7279:L4d7279:{c.instructions+=5;NFSU2_TR(0x4d7279);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4d727e:{NFSU2_TR(0x4d727e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7281:{NFSU2_TR(0x4d7281);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d7283:{NFSU2_TR(0x4d7283);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7285:{NFSU2_TR(0x4d7285);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d72c9;}}
}
B4d7287:L4d7287:{c.instructions+=4;NFSU2_TR(0x4d7287);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7288:{NFSU2_TR(0x4d7288);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7289:{NFSU2_TR(0x4d7289);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d728c:{NFSU2_TR(0x4d728c);
__builtin_memmove((R+16),(R+16),4);
}
B4d7290:L4d7290:{c.instructions+=3;NFSU2_TR(0x4d7290);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x851044ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4d7297:{NFSU2_TR(0x4d7297);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7299:{NFSU2_TR(0x4d7299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d729eull));
TAIL_STATIC(0x575620u,575);
}
B4d729e:L4d729e:{c.instructions+=3;NFSU2_TR(0x4d729e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d72a1:{NFSU2_TR(0x4d72a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d72a3:{NFSU2_TR(0x4d72a3);
if(r1(R+518)){{goto L4d72aa;}}
}
B4d72a5:L4d72a5:{c.instructions+=2;NFSU2_TR(0x4d72a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d72a8:{NFSU2_TR(0x4d72a8);
{goto L4d72ac;}
}
B4d72aa:L4d72aa:{c.instructions+=1;NFSU2_TR(0x4d72aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d72ac:L4d72ac:{c.instructions+=10;NFSU2_TR(0x4d72ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d72af:{NFSU2_TR(0x4d72af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d72b1:{NFSU2_TR(0x4d72b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d72b4:{NFSU2_TR(0x4d72b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d72b7:{NFSU2_TR(0x4d72b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d72b9:{NFSU2_TR(0x4d72b9);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4d72bf:{NFSU2_TR(0x4d72bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d72c2:{NFSU2_TR(0x4d72c2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4d72c3:{NFSU2_TR(0x4d72c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d72c5:{NFSU2_TR(0x4d72c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d7290u);}goto L4d7290;}}
}
B4d72c7:L4d72c7:{c.instructions+=2;NFSU2_TR(0x4d72c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d72c8:{NFSU2_TR(0x4d72c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d72c9:L4d72c9:{c.instructions+=2;NFSU2_TR(0x4d72c9);
__builtin_memmove((R+4),(R+20),4);
}
B4d72cb:{NFSU2_TR(0x4d72cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d72d0ull));
TAIL_STATIC(0x4bf290u,4bf);
}
B4d72d0:L4d72d0:{c.instructions+=6;NFSU2_TR(0x4d72d0);
__builtin_memmove((R+8),gp(0x890118),4);
}
B4d72d6:{NFSU2_TR(0x4d72d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d72d9:{NFSU2_TR(0x4d72d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d72da:{NFSU2_TR(0x4d72da);
__builtin_memmove((R+4),(R+20),4);
}
B4d72dc:{NFSU2_TR(0x4d72dc);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d72de:{NFSU2_TR(0x4d72de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d72e3ull));
TAIL_STATIC(0x4a41a0u,4a4);
}
B4d72e3:L4d72e3:{c.instructions+=3;NFSU2_TR(0x4d72e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d72e4:{NFSU2_TR(0x4d72e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d72e5:{NFSU2_TR(0x4d72e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d72f0:L4d72f0:{c.instructions+=8;NFSU2_TR(0x4d72f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d72f2:{NFSU2_TR(0x4d72f2);
u8 U[4];
w4(U+0,u32(0x774af4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d72f7:{NFSU2_TR(0x4d72f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d72fd:{NFSU2_TR(0x4d72fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d72fe:{NFSU2_TR(0x4d72fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7305:{NFSU2_TR(0x4d7305);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7306:{NFSU2_TR(0x4d7306);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7308:{NFSU2_TR(0x4d7308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d730dull));
TAIL_STATIC(0x575620u,575);
}
B4d730d:L4d730d:{c.instructions+=5;NFSU2_TR(0x4d730d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7310:{NFSU2_TR(0x4d7310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d7314:{NFSU2_TR(0x4d7314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7316:{NFSU2_TR(0x4d7316);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d731e:{NFSU2_TR(0x4d731e);
if(r1(R+518)){{goto L4d733b;}}
}
B4d7320:L4d7320:{c.instructions+=4;NFSU2_TR(0x4d7320);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7324:{NFSU2_TR(0x4d7324);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7325:{NFSU2_TR(0x4d7325);
__builtin_memmove((R+4),(R+0),4);
}
B4d7327:{NFSU2_TR(0x4d7327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d732cull));
TAIL_STATIC(0x4bf8e0u,4bf);
}
B4d732c:L4d732c:{c.instructions+=4;NFSU2_TR(0x4d732c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7330:{NFSU2_TR(0x4d7330);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7337:{NFSU2_TR(0x4d7337);
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
B4d733a:{NFSU2_TR(0x4d733a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d733b:L4d733b:{c.instructions+=5;NFSU2_TR(0x4d733b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d733f:{NFSU2_TR(0x4d733f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d7341:{NFSU2_TR(0x4d7341);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7348:{NFSU2_TR(0x4d7348);
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
B4d734b:{NFSU2_TR(0x4d734b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7350:L4d7350:{c.instructions+=3;NFSU2_TR(0x4d7350);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7354:{NFSU2_TR(0x4d7354);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7359:{NFSU2_TR(0x4d7359);
if(r1(R+518)){{goto L4d7393;}}
}
B4d735b:L4d735b:{c.instructions+=2;NFSU2_TR(0x4d735b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d7360:{NFSU2_TR(0x4d7360);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d739e;}}
}
B4d7362:L4d7362:{c.instructions+=8;NFSU2_TR(0x4d7362);
__builtin_memmove((R+8),gp(0x8363dc),4);
}
B4d7368:{NFSU2_TR(0x4d7368);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d736b:{NFSU2_TR(0x4d736b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d736c:{NFSU2_TR(0x4d736c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d736f:{NFSU2_TR(0x4d736f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d7372:{NFSU2_TR(0x4d7372);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4d7374:{NFSU2_TR(0x4d7374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7375:{NFSU2_TR(0x4d7375);
if(r1(R+518)){{goto L4d739e;}}
}
B4d7377:L4d7377:{c.instructions+=9;NFSU2_TR(0x4d7377);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d737a:{NFSU2_TR(0x4d737a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d737d:{NFSU2_TR(0x4d737d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d737f:{NFSU2_TR(0x4d737f);
__builtin_memmove((R+0),(R+4),4);
}
B4d7381:{NFSU2_TR(0x4d7381);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7384:{NFSU2_TR(0x4d7384);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7386:{NFSU2_TR(0x4d7386);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7387:{NFSU2_TR(0x4d7387);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7388:{NFSU2_TR(0x4d7388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d738dull));
TAIL_STATIC(0x537980u,537);
}
B4d738d:L4d738d:{c.instructions+=2;NFSU2_TR(0x4d738d);
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
B4d7390:{NFSU2_TR(0x4d7390);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7393:L4d7393:{c.instructions+=2;NFSU2_TR(0x4d7393);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4d7399:{NFSU2_TR(0x4d7399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d739eull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4d739e:L4d739e:{c.instructions+=1;NFSU2_TR(0x4d739e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d73b0:L4d73b0:{c.instructions+=8;NFSU2_TR(0x4d73b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73b1:{NFSU2_TR(0x4d73b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73b2:{NFSU2_TR(0x4d73b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4d73b6:{NFSU2_TR(0x4d73b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73b7:{NFSU2_TR(0x4d73b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d73bb:{NFSU2_TR(0x4d73bb);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4d73bd:{NFSU2_TR(0x4d73bd);
__builtin_memmove((R+12),(R+4),4);
}
B4d73bf:{NFSU2_TR(0x4d73bf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4d73f3;}}
}
B4d73c1:L4d73c1:{c.instructions+=3;NFSU2_TR(0x4d73c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73c2:{NFSU2_TR(0x4d73c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xc8ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4d73c9:{NFSU2_TR(0x4d73c9);
__builtin_memmove((R+16),(R+16),4);
}
B4d73d0:L4d73d0:{c.instructions+=8;NFSU2_TR(0x4d73d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d73d6:{NFSU2_TR(0x4d73d6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d73dd:{NFSU2_TR(0x4d73dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4d73e0:{NFSU2_TR(0x4d73e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73e1:{NFSU2_TR(0x4d73e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73e2:{NFSU2_TR(0x4d73e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d73e3:{NFSU2_TR(0x4d73e3);
__builtin_memmove((R+4),(R+12),4);
}
B4d73e5:{NFSU2_TR(0x4d73e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d73eaull));
TAIL_STATIC(0x4bfd40u,4bf);
}
B4d73ea:L4d73ea:{c.instructions+=4;NFSU2_TR(0x4d73ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4d73eb:{NFSU2_TR(0x4d73eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4d73ee:{NFSU2_TR(0x4d73ee);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4d73f0:{NFSU2_TR(0x4d73f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d73d0u);}goto L4d73d0;}}
}
B4d73f2:L4d73f2:{c.instructions+=1;NFSU2_TR(0x4d73f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d73f3:L4d73f3:{c.instructions+=4;NFSU2_TR(0x4d73f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d73f4:{NFSU2_TR(0x4d73f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d73f5:{NFSU2_TR(0x4d73f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d73f6:{NFSU2_TR(0x4d73f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7400:L4d7400:{c.instructions+=8;NFSU2_TR(0x4d7400);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4d7405:{NFSU2_TR(0x4d7405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B4d7408:{NFSU2_TR(0x4d7408);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d740b:{NFSU2_TR(0x4d740b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d740c:{NFSU2_TR(0x4d740c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d740d:{NFSU2_TR(0x4d740d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d740e:{NFSU2_TR(0x4d740e);
__builtin_memmove((R+24),(R+4),4);
}
B4d7410:{NFSU2_TR(0x4d7410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7566;}}
}
B4d7416:L4d7416:{c.instructions+=2;NFSU2_TR(0x4d7416);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d741d:{NFSU2_TR(0x4d741d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d768f;}}
}
B4d7423:L4d7423:{c.instructions+=8;NFSU2_TR(0x4d7423);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d7425:{NFSU2_TR(0x4d7425);
w4(R+0,u32(0x78daa8ull));
}
B4d742a:{NFSU2_TR(0x4d742a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4d742b:{NFSU2_TR(0x4d742b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d742f:{NFSU2_TR(0x4d742f);
w4(R+12,u32(0x85036cull));
}
B4d7434:{NFSU2_TR(0x4d7434);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7438:{NFSU2_TR(0x4d7438);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d7440:{NFSU2_TR(0x4d7440);
{goto L4d7446;}
}
B4d7442:L4d7442:{c.instructions+=1;NFSU2_TR(0x4d7442);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7446:L4d7446:{c.instructions+=4;NFSU2_TR(0x4d7446);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7447:{NFSU2_TR(0x4d7447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7448:{NFSU2_TR(0x4d7448);
__builtin_memmove((R+4),(R+24),4);
}
B4d744a:{NFSU2_TR(0x4d744a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d744full));
TAIL_STATIC(0x4c0300u,4c0);
}
B4d744f:L4d744f:{c.instructions+=4;NFSU2_TR(0x4d744f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7450:{NFSU2_TR(0x4d7450);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7451:{NFSU2_TR(0x4d7451);
__builtin_memmove((R+4),(R+24),4);
}
B4d7453:{NFSU2_TR(0x4d7453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7458ull));
TAIL_STATIC(0x4c03a0u,4c0);
}
B4d7458:L4d7458:{c.instructions+=4;NFSU2_TR(0x4d7458);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d745b:{NFSU2_TR(0x4d745b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d7461:{NFSU2_TR(0x4d7461);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7462:{NFSU2_TR(0x4d7462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7467ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d7467:L4d7467:{c.instructions+=6;NFSU2_TR(0x4d7467);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d746a:{NFSU2_TR(0x4d746a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d746d:{NFSU2_TR(0x4d746d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d746e:{NFSU2_TR(0x4d746e);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7473:{NFSU2_TR(0x4d7473);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7477:{NFSU2_TR(0x4d7477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d747cull));
TAIL_STATIC(0x50b990u,50b);
}
B4d747c:L4d747c:{c.instructions+=5;NFSU2_TR(0x4d747c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4d747d:{NFSU2_TR(0x4d747d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d747e:{NFSU2_TR(0x4d747e);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7483:{NFSU2_TR(0x4d7483);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7487:{NFSU2_TR(0x4d7487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d748cull));
TAIL_STATIC(0x50b990u,50b);
}
B4d748c:L4d748c:{c.instructions+=7;NFSU2_TR(0x4d748c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7490:{NFSU2_TR(0x4d7490);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7493:{NFSU2_TR(0x4d7493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7494:{NFSU2_TR(0x4d7494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7495:{NFSU2_TR(0x4d7495);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7499:{NFSU2_TR(0x4d7499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d749a:{NFSU2_TR(0x4d749a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d749full));
TAIL_STATIC(0x537a10u,537);
}
B4d749f:L4d749f:{c.instructions+=3;NFSU2_TR(0x4d749f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d74a2:{NFSU2_TR(0x4d74a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74a3:{NFSU2_TR(0x4d74a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d74a8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d74a8:L4d74a8:{c.instructions+=3;NFSU2_TR(0x4d74a8);
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
B4d74ab:{NFSU2_TR(0x4d74ab);
w4(R+4,u32(0x83aab4ull));
}
B4d74b0:{NFSU2_TR(0x4d74b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d74b5ull));
TAIL_STATIC(0x502780u,502);
}
B4d74b5:L4d74b5:{c.instructions+=2;NFSU2_TR(0x4d74b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d74b7:{NFSU2_TR(0x4d74b7);
if(r1(R+518)){{goto L4d74d1;}}
}
B4d74b9:L4d74b9:{c.instructions+=2;NFSU2_TR(0x4d74b9);
u8 U[8];
__builtin_memmove((U+0),gp(0x83abc4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d74c0:{NFSU2_TR(0x4d74c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d74d1;}}
}
B4d74c2:L4d74c2:{c.instructions+=5;NFSU2_TR(0x4d74c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d74c6:{NFSU2_TR(0x4d74c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74c7:{NFSU2_TR(0x4d74c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74c8:{NFSU2_TR(0x4d74c8);
__builtin_memmove((R+4),(R+24),4);
}
B4d74ca:{NFSU2_TR(0x4d74ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d74cfull));
TAIL_STATIC(0x4a48d0u,4a4);
}
B4d74cf:L4d74cf:{c.instructions+=1;NFSU2_TR(0x4d74cf);
{goto L4d7515;}
}
B4d74d1:L4d74d1:{c.instructions+=7;NFSU2_TR(0x4d74d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d74d4:{NFSU2_TR(0x4d74d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74d6:{NFSU2_TR(0x4d74d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d74da:{NFSU2_TR(0x4d74da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74db:{NFSU2_TR(0x4d74db);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d74df:{NFSU2_TR(0x4d74df);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d74e3:{NFSU2_TR(0x4d74e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d74e8ull));
TAIL_STATIC(0x577240u,577);
}
B4d74e8:L4d74e8:{c.instructions+=8;NFSU2_TR(0x4d74e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d74eb:{NFSU2_TR(0x4d74eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d74ef:{NFSU2_TR(0x4d74ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74f0:{NFSU2_TR(0x4d74f0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74f5:{NFSU2_TR(0x4d74f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74f6:{NFSU2_TR(0x4d74f6);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d74fb:{NFSU2_TR(0x4d74fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d74ff:{NFSU2_TR(0x4d74ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7504ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7504:L4d7504:{c.instructions+=5;NFSU2_TR(0x4d7504);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7507:{NFSU2_TR(0x4d7507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7508:{NFSU2_TR(0x4d7508);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d750c:{NFSU2_TR(0x4d750c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d750d:{NFSU2_TR(0x4d750d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7512ull));
TAIL_STATIC(0x537b80u,537);
}
B4d7512:L4d7512:{c.instructions+=1;NFSU2_TR(0x4d7512);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7515:L4d7515:{c.instructions+=9;NFSU2_TR(0x4d7515);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7519:{NFSU2_TR(0x4d7519);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B4d751d:{NFSU2_TR(0x4d751d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7520:{NFSU2_TR(0x4d7520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7521:{NFSU2_TR(0x4d7521);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7526:{NFSU2_TR(0x4d7526);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7527:{NFSU2_TR(0x4d7527);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d752c:{NFSU2_TR(0x4d752c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7530:{NFSU2_TR(0x4d7530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7535ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7535:L4d7535:{c.instructions+=5;NFSU2_TR(0x4d7535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7538:{NFSU2_TR(0x4d7538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7539:{NFSU2_TR(0x4d7539);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d753d:{NFSU2_TR(0x4d753d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d753e:{NFSU2_TR(0x4d753e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7543ull));
TAIL_STATIC(0x537b80u,537);
}
B4d7543:L4d7543:{c.instructions+=7;NFSU2_TR(0x4d7543);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7547:{NFSU2_TR(0x4d7547);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d754a:{NFSU2_TR(0x4d754a);
w1(R+512,carry<u32>(r4(R+12),u32(0x224ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x224ull))));
}
B4d7550:{NFSU2_TR(0x4d7550);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d7551:{NFSU2_TR(0x4d7551);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7555:{NFSU2_TR(0x4d7555);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7559:{NFSU2_TR(0x4d7559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d7442u);}goto L4d7442;}}
}
B4d755f:L4d755f:{c.instructions+=5;NFSU2_TR(0x4d755f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7560:{NFSU2_TR(0x4d7560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7561:{NFSU2_TR(0x4d7561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d7562:{NFSU2_TR(0x4d7562);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d7565:{NFSU2_TR(0x4d7565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7566:L4d7566:{c.instructions+=2;NFSU2_TR(0x4d7566);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d756b:{NFSU2_TR(0x4d756b);
if(r1(R+518)){{goto L4d7576;}}
}
B4d756d:L4d756d:{c.instructions+=2;NFSU2_TR(0x4d756d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d7570:{NFSU2_TR(0x4d7570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d768f;}}
}
B4d7576:L4d7576:{c.instructions+=2;NFSU2_TR(0x4d7576);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d757d:{NFSU2_TR(0x4d757d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d768f;}}
}
B4d7583:L4d7583:{c.instructions+=3;NFSU2_TR(0x4d7583);
w4(R+4,u32(0x89cf48ull));
}
B4d7588:{NFSU2_TR(0x4d7588);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d758a:{NFSU2_TR(0x4d758a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d758full));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4d758f:L4d758f:{c.instructions+=2;NFSU2_TR(0x4d758f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7591:{NFSU2_TR(0x4d7591);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d7791;}}
}
B4d7597:L4d7597:{c.instructions+=3;NFSU2_TR(0x4d7597);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7598:{NFSU2_TR(0x4d7598);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d759b:{NFSU2_TR(0x4d759b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75a0ull));
TAIL_STATIC(0x43be60u,43b);
}
B4d75a0:L4d75a0:{c.instructions+=5;NFSU2_TR(0x4d75a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d75a3:{NFSU2_TR(0x4d75a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75a4:{NFSU2_TR(0x4d75a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75a5:{NFSU2_TR(0x4d75a5);
__builtin_memmove((R+4),(R+24),4);
}
B4d75a7:{NFSU2_TR(0x4d75a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75acull));
TAIL_STATIC(0x4c0300u,4c0);
}
B4d75ac:L4d75ac:{c.instructions+=4;NFSU2_TR(0x4d75ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75ad:{NFSU2_TR(0x4d75ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75ae:{NFSU2_TR(0x4d75ae);
__builtin_memmove((R+4),(R+24),4);
}
B4d75b0:{NFSU2_TR(0x4d75b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75b5ull));
TAIL_STATIC(0x4c03a0u,4c0);
}
B4d75b5:L4d75b5:{c.instructions+=4;NFSU2_TR(0x4d75b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d75b8:{NFSU2_TR(0x4d75b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75b9:{NFSU2_TR(0x4d75b9);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d75bf:{NFSU2_TR(0x4d75bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75c4ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d75c4:L4d75c4:{c.instructions+=6;NFSU2_TR(0x4d75c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d75c7:{NFSU2_TR(0x4d75c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d75ca:{NFSU2_TR(0x4d75ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75cb:{NFSU2_TR(0x4d75cb);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75d0:{NFSU2_TR(0x4d75d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d75d4:{NFSU2_TR(0x4d75d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75d9ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d75d9:L4d75d9:{c.instructions+=5;NFSU2_TR(0x4d75d9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4d75da:{NFSU2_TR(0x4d75da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75db:{NFSU2_TR(0x4d75db);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75e0:{NFSU2_TR(0x4d75e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d75e4:{NFSU2_TR(0x4d75e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75e9ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d75e9:L4d75e9:{c.instructions+=7;NFSU2_TR(0x4d75e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d75ed:{NFSU2_TR(0x4d75ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d75f1:{NFSU2_TR(0x4d75f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d75f4:{NFSU2_TR(0x4d75f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75f5:{NFSU2_TR(0x4d75f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75f6:{NFSU2_TR(0x4d75f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d75f7:{NFSU2_TR(0x4d75f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d75fcull));
TAIL_STATIC(0x537a10u,537);
}
B4d75fc:L4d75fc:{c.instructions+=3;NFSU2_TR(0x4d75fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d75ff:{NFSU2_TR(0x4d75ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7600:{NFSU2_TR(0x4d7600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7605ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d7605:L4d7605:{c.instructions+=10;NFSU2_TR(0x4d7605);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d7607:{NFSU2_TR(0x4d7607);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78daa7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4d760e:{NFSU2_TR(0x4d760e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7611:{NFSU2_TR(0x4d7611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7614:{NFSU2_TR(0x4d7614);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7615:{NFSU2_TR(0x4d7615);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d761a:{NFSU2_TR(0x4d761a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d761b:{NFSU2_TR(0x4d761b);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7620:{NFSU2_TR(0x4d7620);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7624:{NFSU2_TR(0x4d7624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7629ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7629:L4d7629:{c.instructions+=5;NFSU2_TR(0x4d7629);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d762d:{NFSU2_TR(0x4d762d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7630:{NFSU2_TR(0x4d7630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7631:{NFSU2_TR(0x4d7631);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7632:{NFSU2_TR(0x4d7632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7637ull));
TAIL_STATIC(0x537b80u,537);
}
B4d7637:L4d7637:{c.instructions+=8;NFSU2_TR(0x4d7637);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d763a:{NFSU2_TR(0x4d763a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d763d:{NFSU2_TR(0x4d763d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d763f:{NFSU2_TR(0x4d763f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7643:{NFSU2_TR(0x4d7643);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7644:{NFSU2_TR(0x4d7644);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7648:{NFSU2_TR(0x4d7648);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d764c:{NFSU2_TR(0x4d764c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7651ull));
TAIL_STATIC(0x577240u,577);
}
B4d7651:L4d7651:{c.instructions+=7;NFSU2_TR(0x4d7651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7654:{NFSU2_TR(0x4d7654);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d7658:{NFSU2_TR(0x4d7658);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7659:{NFSU2_TR(0x4d7659);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d765e:{NFSU2_TR(0x4d765e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d765f:{NFSU2_TR(0x4d765f);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7664:{NFSU2_TR(0x4d7664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7669ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7669:L4d7669:{c.instructions+=4;NFSU2_TR(0x4d7669);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d766c:{NFSU2_TR(0x4d766c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d766d:{NFSU2_TR(0x4d766d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d766e:{NFSU2_TR(0x4d766e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7673ull));
TAIL_STATIC(0x537b80u,537);
}
B4d7673:L4d7673:{c.instructions+=3;NFSU2_TR(0x4d7673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7676:{NFSU2_TR(0x4d7676);
w4(R+4,u32(0x89cf48ull));
}
B4d767b:{NFSU2_TR(0x4d767b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7680ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4d7680:L4d7680:{c.instructions+=2;NFSU2_TR(0x4d7680);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d7682:{NFSU2_TR(0x4d7682);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d7597u);}goto L4d7597;}}
}
B4d7688:L4d7688:{c.instructions+=5;NFSU2_TR(0x4d7688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7689:{NFSU2_TR(0x4d7689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d768a:{NFSU2_TR(0x4d768a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d768b:{NFSU2_TR(0x4d768b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d768e:{NFSU2_TR(0x4d768e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d768f:L4d768f:{c.instructions+=4;NFSU2_TR(0x4d768f);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4d7694:{NFSU2_TR(0x4d7694);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d7696:{NFSU2_TR(0x4d7696);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7698:{NFSU2_TR(0x4d7698);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d7791;}}
}
B4d769e:L4d769e:{c.instructions+=1;NFSU2_TR(0x4d769e);
__builtin_memmove((R+28),(R+28),4);
}
B4d76a0:L4d76a0:{c.instructions+=3;NFSU2_TR(0x4d76a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76a1:{NFSU2_TR(0x4d76a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d76a4:{NFSU2_TR(0x4d76a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d76a9ull));
TAIL_STATIC(0x43be60u,43b);
}
B4d76a9:L4d76a9:{c.instructions+=6;NFSU2_TR(0x4d76a9);
__builtin_memmove((R+28),(R+0),4);
}
B4d76ab:{NFSU2_TR(0x4d76ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d76ae:{NFSU2_TR(0x4d76ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76af:{NFSU2_TR(0x4d76af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76b0:{NFSU2_TR(0x4d76b0);
__builtin_memmove((R+4),(R+24),4);
}
B4d76b2:{NFSU2_TR(0x4d76b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d76b7ull));
TAIL_STATIC(0x4c0300u,4c0);
}
B4d76b7:L4d76b7:{c.instructions+=5;NFSU2_TR(0x4d76b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d76ba:{NFSU2_TR(0x4d76ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76bb:{NFSU2_TR(0x4d76bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76bc:{NFSU2_TR(0x4d76bc);
__builtin_memmove((R+4),(R+24),4);
}
B4d76be:{NFSU2_TR(0x4d76be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d76c3ull));
TAIL_STATIC(0x4c03a0u,4c0);
}
B4d76c3:L4d76c3:{c.instructions+=5;NFSU2_TR(0x4d76c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d76c6:{NFSU2_TR(0x4d76c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d76c9:{NFSU2_TR(0x4d76c9);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d76cf:{NFSU2_TR(0x4d76cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76d0:{NFSU2_TR(0x4d76d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d76d5ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d76d5:L4d76d5:{c.instructions+=6;NFSU2_TR(0x4d76d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d76d8:{NFSU2_TR(0x4d76d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d76db:{NFSU2_TR(0x4d76db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76dc:{NFSU2_TR(0x4d76dc);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76e1:{NFSU2_TR(0x4d76e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d76e5:{NFSU2_TR(0x4d76e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d76eaull));
TAIL_STATIC(0x50b990u,50b);
}
B4d76ea:L4d76ea:{c.instructions+=5;NFSU2_TR(0x4d76ea);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4d76eb:{NFSU2_TR(0x4d76eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76ec:{NFSU2_TR(0x4d76ec);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d76f1:{NFSU2_TR(0x4d76f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d76f5:{NFSU2_TR(0x4d76f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d76faull));
TAIL_STATIC(0x50b990u,50b);
}
B4d76fa:L4d76fa:{c.instructions+=7;NFSU2_TR(0x4d76fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d76fe:{NFSU2_TR(0x4d76fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7701:{NFSU2_TR(0x4d7701);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7702:{NFSU2_TR(0x4d7702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7703:{NFSU2_TR(0x4d7703);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7707:{NFSU2_TR(0x4d7707);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7708:{NFSU2_TR(0x4d7708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d770dull));
TAIL_STATIC(0x537a10u,537);
}
B4d770d:L4d770d:{c.instructions+=3;NFSU2_TR(0x4d770d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7710:{NFSU2_TR(0x4d7710);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7711:{NFSU2_TR(0x4d7711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7716ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d7716:L4d7716:{c.instructions+=9;NFSU2_TR(0x4d7716);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7719:{NFSU2_TR(0x4d7719);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d771c:{NFSU2_TR(0x4d771c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d771f:{NFSU2_TR(0x4d771f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7721:{NFSU2_TR(0x4d7721);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d7725:{NFSU2_TR(0x4d7725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7726:{NFSU2_TR(0x4d7726);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d772a:{NFSU2_TR(0x4d772a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d772e:{NFSU2_TR(0x4d772e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7733ull));
TAIL_STATIC(0x577240u,577);
}
B4d7733:L4d7733:{c.instructions+=8;NFSU2_TR(0x4d7733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7736:{NFSU2_TR(0x4d7736);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d773a:{NFSU2_TR(0x4d773a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d773b:{NFSU2_TR(0x4d773b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7740:{NFSU2_TR(0x4d7740);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7741:{NFSU2_TR(0x4d7741);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7746:{NFSU2_TR(0x4d7746);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d774a:{NFSU2_TR(0x4d774a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d774full));
TAIL_STATIC(0x50b990u,50b);
}
B4d774f:L4d774f:{c.instructions+=5;NFSU2_TR(0x4d774f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7752:{NFSU2_TR(0x4d7752);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7753:{NFSU2_TR(0x4d7753);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7757:{NFSU2_TR(0x4d7757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7758:{NFSU2_TR(0x4d7758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d775dull));
TAIL_STATIC(0x537b80u,537);
}
B4d775d:L4d775d:{c.instructions+=8;NFSU2_TR(0x4d775d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7760:{NFSU2_TR(0x4d7760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7763:{NFSU2_TR(0x4d7763);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7766:{NFSU2_TR(0x4d7766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7767:{NFSU2_TR(0x4d7767);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d776c:{NFSU2_TR(0x4d776c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d776d:{NFSU2_TR(0x4d776d);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7772:{NFSU2_TR(0x4d7772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7777ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7777:L4d7777:{c.instructions+=4;NFSU2_TR(0x4d7777);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d777a:{NFSU2_TR(0x4d777a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d777b:{NFSU2_TR(0x4d777b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d777c:{NFSU2_TR(0x4d777c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7781ull));
TAIL_STATIC(0x537b80u,537);
}
B4d7781:L4d7781:{c.instructions+=4;NFSU2_TR(0x4d7781);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4d7786:{NFSU2_TR(0x4d7786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7789:{NFSU2_TR(0x4d7789);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d778b:{NFSU2_TR(0x4d778b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d76a0u);}goto L4d76a0;}}
}
B4d7791:L4d7791:{c.instructions+=5;NFSU2_TR(0x4d7791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7792:{NFSU2_TR(0x4d7792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7793:{NFSU2_TR(0x4d7793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d7794:{NFSU2_TR(0x4d7794);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d7797:{NFSU2_TR(0x4d7797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d77a0:L4d77a0:{c.instructions+=8;NFSU2_TR(0x4d77a0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4d77a5:{NFSU2_TR(0x4d77a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4d77a8:{NFSU2_TR(0x4d77a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d77ab:{NFSU2_TR(0x4d77ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d77ac:{NFSU2_TR(0x4d77ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d77ad:{NFSU2_TR(0x4d77ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d77ae:{NFSU2_TR(0x4d77ae);
__builtin_memmove((R+24),(R+4),4);
}
B4d77b0:{NFSU2_TR(0x4d77b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7910;}}
}
B4d77b6:L4d77b6:{c.instructions+=2;NFSU2_TR(0x4d77b6);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d77bd:{NFSU2_TR(0x4d77bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d79fe;}}
}
B4d77c3:L4d77c3:{c.instructions+=2;NFSU2_TR(0x4d77c3);
w4(R+28,u32(0x1ull));
}
B4d77c8:{NFSU2_TR(0x4d77c8);
{goto L4d77d0;}
}
B4d77d0:L4d77d0:{c.instructions+=4;NFSU2_TR(0x4d77d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d77d3:{NFSU2_TR(0x4d77d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d77d4:{NFSU2_TR(0x4d77d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d77da:{NFSU2_TR(0x4d77da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d77dfull));
TAIL_STATIC(0x43be60u,43b);
}
B4d77df:L4d77df:{c.instructions+=6;NFSU2_TR(0x4d77df);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d77e5:{NFSU2_TR(0x4d77e5);
__builtin_memmove((R+12),(R+0),4);
}
B4d77e7:{NFSU2_TR(0x4d77e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d77ea:{NFSU2_TR(0x4d77ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d77ed:{NFSU2_TR(0x4d77ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d77ee:{NFSU2_TR(0x4d77ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d77f3ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d77f3:L4d77f3:{c.instructions+=3;NFSU2_TR(0x4d77f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d77f6:{NFSU2_TR(0x4d77f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d77fa:{NFSU2_TR(0x4d77fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d784b;}}
}
B4d77fc:L4d77fc:{c.instructions+=3;NFSU2_TR(0x4d77fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4d7802:{NFSU2_TR(0x4d7802);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7804:{NFSU2_TR(0x4d7804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d784b;}}
}
B4d7806:L4d7806:{c.instructions+=2;NFSU2_TR(0x4d7806);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d780d:{NFSU2_TR(0x4d780d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7818;}}
}
B4d780f:L4d780f:{c.instructions+=2;NFSU2_TR(0x4d780f);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d7816:{NFSU2_TR(0x4d7816);
if(r1(R+518)){{goto L4d784b;}}
}
B4d7818:L4d7818:{c.instructions+=5;NFSU2_TR(0x4d7818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d781b:{NFSU2_TR(0x4d781b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d781d:{NFSU2_TR(0x4d781d);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7822:{NFSU2_TR(0x4d7822);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7826:{NFSU2_TR(0x4d7826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d782bull));
TAIL_STATIC(0x50b990u,50b);
}
B4d782b:L4d782b:{c.instructions+=5;NFSU2_TR(0x4d782b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d782e:{NFSU2_TR(0x4d782e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d782f:{NFSU2_TR(0x4d782f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7830:{NFSU2_TR(0x4d7830);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7835:{NFSU2_TR(0x4d7835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d783aull));
TAIL_STATIC(0x50b990u,50b);
}
B4d783a:L4d783a:{c.instructions+=5;NFSU2_TR(0x4d783a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d783e:{NFSU2_TR(0x4d783e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7841:{NFSU2_TR(0x4d7841);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7842:{NFSU2_TR(0x4d7842);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7843:{NFSU2_TR(0x4d7843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7848ull));
TAIL_STATIC(0x537c60u,537);
}
B4d7848:L4d7848:{c.instructions+=1;NFSU2_TR(0x4d7848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d784b:L4d784b:{c.instructions+=7;NFSU2_TR(0x4d784b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d784e:{NFSU2_TR(0x4d784e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d784f:{NFSU2_TR(0x4d784f);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7854:{NFSU2_TR(0x4d7854);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7855:{NFSU2_TR(0x4d7855);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d785a:{NFSU2_TR(0x4d785a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d785e:{NFSU2_TR(0x4d785e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7863ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7863:L4d7863:{c.instructions+=5;NFSU2_TR(0x4d7863);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7867:{NFSU2_TR(0x4d7867);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d786a:{NFSU2_TR(0x4d786a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d786b:{NFSU2_TR(0x4d786b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d786c:{NFSU2_TR(0x4d786c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7871ull));
TAIL_STATIC(0x537b80u,537);
}
B4d7871:L4d7871:{c.instructions+=7;NFSU2_TR(0x4d7871);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7874:{NFSU2_TR(0x4d7874);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7877:{NFSU2_TR(0x4d7877);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7878:{NFSU2_TR(0x4d7878);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d787b:{NFSU2_TR(0x4d787b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d787c:{NFSU2_TR(0x4d787c);
__builtin_memmove((R+4),(R+24),4);
}
B4d787e:{NFSU2_TR(0x4d787e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7883ull));
TAIL_STATIC(0x4c03a0u,4c0);
}
B4d7883:L4d7883:{c.instructions+=5;NFSU2_TR(0x4d7883);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7886:{NFSU2_TR(0x4d7886);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7889:{NFSU2_TR(0x4d7889);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d788f:{NFSU2_TR(0x4d788f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7890:{NFSU2_TR(0x4d7890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7895ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d7895:L4d7895:{c.instructions+=6;NFSU2_TR(0x4d7895);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7898:{NFSU2_TR(0x4d7898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d789b:{NFSU2_TR(0x4d789b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d789c:{NFSU2_TR(0x4d789c);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78a1:{NFSU2_TR(0x4d78a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d78a5:{NFSU2_TR(0x4d78a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d78aaull));
TAIL_STATIC(0x50b990u,50b);
}
B4d78aa:L4d78aa:{c.instructions+=4;NFSU2_TR(0x4d78aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78ab:{NFSU2_TR(0x4d78ab);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78b0:{NFSU2_TR(0x4d78b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d78b4:{NFSU2_TR(0x4d78b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d78b9ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d78b9:L4d78b9:{c.instructions+=7;NFSU2_TR(0x4d78b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d78bd:{NFSU2_TR(0x4d78bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d78c0:{NFSU2_TR(0x4d78c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78c1:{NFSU2_TR(0x4d78c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78c2:{NFSU2_TR(0x4d78c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d78c6:{NFSU2_TR(0x4d78c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78c7:{NFSU2_TR(0x4d78c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d78ccull));
TAIL_STATIC(0x537a10u,537);
}
B4d78cc:L4d78cc:{c.instructions+=3;NFSU2_TR(0x4d78cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d78cf:{NFSU2_TR(0x4d78cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78d0:{NFSU2_TR(0x4d78d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d78d5ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d78d5:L4d78d5:{c.instructions+=8;NFSU2_TR(0x4d78d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d78d8:{NFSU2_TR(0x4d78d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d78db:{NFSU2_TR(0x4d78db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d78de:{NFSU2_TR(0x4d78de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78df:{NFSU2_TR(0x4d78df);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78e4:{NFSU2_TR(0x4d78e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78e5:{NFSU2_TR(0x4d78e5);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78ea:{NFSU2_TR(0x4d78ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d78efull));
TAIL_STATIC(0x50b990u,50b);
}
B4d78ef:L4d78ef:{c.instructions+=4;NFSU2_TR(0x4d78ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d78f2:{NFSU2_TR(0x4d78f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78f3:{NFSU2_TR(0x4d78f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d78f4:{NFSU2_TR(0x4d78f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d78f9ull));
TAIL_STATIC(0x537b80u,537);
}
B4d78f9:L4d78f9:{c.instructions+=5;NFSU2_TR(0x4d78f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d78fc:{NFSU2_TR(0x4d78fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4d78fd:{NFSU2_TR(0x4d78fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7900:{NFSU2_TR(0x4d7900);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d7903:{NFSU2_TR(0x4d7903);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d77d0u);}goto L4d77d0;}}
}
B4d7909:L4d7909:{c.instructions+=5;NFSU2_TR(0x4d7909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d790a:{NFSU2_TR(0x4d790a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d790b:{NFSU2_TR(0x4d790b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d790c:{NFSU2_TR(0x4d790c);
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
B4d790f:{NFSU2_TR(0x4d790f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7910:L4d7910:{c.instructions+=2;NFSU2_TR(0x4d7910);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7915:{NFSU2_TR(0x4d7915);
if(r1(R+518)){{goto L4d7920;}}
}
B4d7917:L4d7917:{c.instructions+=2;NFSU2_TR(0x4d7917);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d791a:{NFSU2_TR(0x4d791a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d79fe;}}
}
B4d7920:L4d7920:{c.instructions+=2;NFSU2_TR(0x4d7920);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d7927:{NFSU2_TR(0x4d7927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d79fe;}}
}
B4d792d:L4d792d:{c.instructions+=3;NFSU2_TR(0x4d792d);
w4(R+4,u32(0x89cf48ull));
}
B4d7932:{NFSU2_TR(0x4d7932);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d7934:{NFSU2_TR(0x4d7934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7939ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4d7939:L4d7939:{c.instructions+=2;NFSU2_TR(0x4d7939);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d793b:{NFSU2_TR(0x4d793b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d7abf;}}
}
B4d7941:L4d7941:{c.instructions+=3;NFSU2_TR(0x4d7941);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7942:{NFSU2_TR(0x4d7942);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7948:{NFSU2_TR(0x4d7948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d794dull));
TAIL_STATIC(0x43be60u,43b);
}
B4d794d:L4d794d:{c.instructions+=8;NFSU2_TR(0x4d794d);
__builtin_memmove((R+28),(R+0),4);
}
B4d794f:{NFSU2_TR(0x4d794f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7952:{NFSU2_TR(0x4d7952);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7955:{NFSU2_TR(0x4d7955);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7956:{NFSU2_TR(0x4d7956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7957:{NFSU2_TR(0x4d7957);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7958:{NFSU2_TR(0x4d7958);
__builtin_memmove((R+4),(R+24),4);
}
B4d795a:{NFSU2_TR(0x4d795a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d795full));
TAIL_STATIC(0x4c0a00u,4c0);
}
B4d795f:L4d795f:{c.instructions+=5;NFSU2_TR(0x4d795f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7962:{NFSU2_TR(0x4d7962);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7963:{NFSU2_TR(0x4d7963);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7964:{NFSU2_TR(0x4d7964);
__builtin_memmove((R+4),(R+24),4);
}
B4d7966:{NFSU2_TR(0x4d7966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d796bull));
TAIL_STATIC(0x4c03a0u,4c0);
}
B4d796b:L4d796b:{c.instructions+=5;NFSU2_TR(0x4d796b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d796e:{NFSU2_TR(0x4d796e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7971:{NFSU2_TR(0x4d7971);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d7977:{NFSU2_TR(0x4d7977);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7978:{NFSU2_TR(0x4d7978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d797dull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d797d:L4d797d:{c.instructions+=6;NFSU2_TR(0x4d797d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7980:{NFSU2_TR(0x4d7980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7983:{NFSU2_TR(0x4d7983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7984:{NFSU2_TR(0x4d7984);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7989:{NFSU2_TR(0x4d7989);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d798d:{NFSU2_TR(0x4d798d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7992ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7992:L4d7992:{c.instructions+=5;NFSU2_TR(0x4d7992);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4d7993:{NFSU2_TR(0x4d7993);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7994:{NFSU2_TR(0x4d7994);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7999:{NFSU2_TR(0x4d7999);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d799d:{NFSU2_TR(0x4d799d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d79a2ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d79a2:L4d79a2:{c.instructions+=7;NFSU2_TR(0x4d79a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d79a6:{NFSU2_TR(0x4d79a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d79a9:{NFSU2_TR(0x4d79a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79aa:{NFSU2_TR(0x4d79aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79ab:{NFSU2_TR(0x4d79ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d79af:{NFSU2_TR(0x4d79af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79b0:{NFSU2_TR(0x4d79b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d79b5ull));
TAIL_STATIC(0x537a10u,537);
}
B4d79b5:L4d79b5:{c.instructions+=3;NFSU2_TR(0x4d79b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d79b8:{NFSU2_TR(0x4d79b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79b9:{NFSU2_TR(0x4d79b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d79beull));
TAIL_STATIC(0x50c900u,50c);
}
B4d79be:L4d79be:{c.instructions+=8;NFSU2_TR(0x4d79be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d79c1:{NFSU2_TR(0x4d79c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d79c4:{NFSU2_TR(0x4d79c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d79c7:{NFSU2_TR(0x4d79c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79c8:{NFSU2_TR(0x4d79c8);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79cd:{NFSU2_TR(0x4d79cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79ce:{NFSU2_TR(0x4d79ce);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79d3:{NFSU2_TR(0x4d79d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d79d8ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d79d8:L4d79d8:{c.instructions+=4;NFSU2_TR(0x4d79d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d79db:{NFSU2_TR(0x4d79db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79dc:{NFSU2_TR(0x4d79dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d79dd:{NFSU2_TR(0x4d79dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d79e2ull));
TAIL_STATIC(0x537b80u,537);
}
B4d79e2:L4d79e2:{c.instructions+=3;NFSU2_TR(0x4d79e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d79e5:{NFSU2_TR(0x4d79e5);
w4(R+4,u32(0x89cf48ull));
}
B4d79ea:{NFSU2_TR(0x4d79ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d79efull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4d79ef:L4d79ef:{c.instructions+=2;NFSU2_TR(0x4d79ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d79f1:{NFSU2_TR(0x4d79f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d7941u);}goto L4d7941;}}
}
B4d79f7:L4d79f7:{c.instructions+=5;NFSU2_TR(0x4d79f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d79f8:{NFSU2_TR(0x4d79f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d79f9:{NFSU2_TR(0x4d79f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d79fa:{NFSU2_TR(0x4d79fa);
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
B4d79fd:{NFSU2_TR(0x4d79fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d79fe:L4d79fe:{c.instructions+=4;NFSU2_TR(0x4d79fe);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4d7a03:{NFSU2_TR(0x4d7a03);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d7a05:{NFSU2_TR(0x4d7a05);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7a07:{NFSU2_TR(0x4d7a07);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d7abf;}}
}
B4d7a0d:L4d7a0d:{c.instructions+=1;NFSU2_TR(0x4d7a0d);
__builtin_memmove((R+4),(R+4),4);
}
B4d7a10:L4d7a10:{c.instructions+=3;NFSU2_TR(0x4d7a10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a11:{NFSU2_TR(0x4d7a11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7a17:{NFSU2_TR(0x4d7a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a1cull));
TAIL_STATIC(0x43be60u,43b);
}
B4d7a1c:L4d7a1c:{c.instructions+=7;NFSU2_TR(0x4d7a1c);
__builtin_memmove((R+12),(R+0),4);
}
B4d7a1e:{NFSU2_TR(0x4d7a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7a21:{NFSU2_TR(0x4d7a21);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a23:{NFSU2_TR(0x4d7a23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a24:{NFSU2_TR(0x4d7a24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a25:{NFSU2_TR(0x4d7a25);
__builtin_memmove((R+4),(R+24),4);
}
B4d7a27:{NFSU2_TR(0x4d7a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a2cull));
TAIL_STATIC(0x4c0a00u,4c0);
}
B4d7a2c:L4d7a2c:{c.instructions+=5;NFSU2_TR(0x4d7a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7a2f:{NFSU2_TR(0x4d7a2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a30:{NFSU2_TR(0x4d7a30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a31:{NFSU2_TR(0x4d7a31);
__builtin_memmove((R+4),(R+24),4);
}
B4d7a33:{NFSU2_TR(0x4d7a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a38ull));
TAIL_STATIC(0x4c03a0u,4c0);
}
B4d7a38:L4d7a38:{c.instructions+=5;NFSU2_TR(0x4d7a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7a3b:{NFSU2_TR(0x4d7a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7a3e:{NFSU2_TR(0x4d7a3e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4d7a44:{NFSU2_TR(0x4d7a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a45:{NFSU2_TR(0x4d7a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a4aull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4d7a4a:L4d7a4a:{c.instructions+=6;NFSU2_TR(0x4d7a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7a4d:{NFSU2_TR(0x4d7a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7a50:{NFSU2_TR(0x4d7a50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a51:{NFSU2_TR(0x4d7a51);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a56:{NFSU2_TR(0x4d7a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7a5a:{NFSU2_TR(0x4d7a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a5full));
TAIL_STATIC(0x50b990u,50b);
}
B4d7a5f:L4d7a5f:{c.instructions+=5;NFSU2_TR(0x4d7a5f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4d7a60:{NFSU2_TR(0x4d7a60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a61:{NFSU2_TR(0x4d7a61);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a66:{NFSU2_TR(0x4d7a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7a6a:{NFSU2_TR(0x4d7a6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a6full));
TAIL_STATIC(0x50b990u,50b);
}
B4d7a6f:L4d7a6f:{c.instructions+=7;NFSU2_TR(0x4d7a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7a73:{NFSU2_TR(0x4d7a73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7a76:{NFSU2_TR(0x4d7a76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a77:{NFSU2_TR(0x4d7a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a78:{NFSU2_TR(0x4d7a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7a7c:{NFSU2_TR(0x4d7a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a7d:{NFSU2_TR(0x4d7a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a82ull));
TAIL_STATIC(0x537a10u,537);
}
B4d7a82:L4d7a82:{c.instructions+=3;NFSU2_TR(0x4d7a82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7a85:{NFSU2_TR(0x4d7a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a86:{NFSU2_TR(0x4d7a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7a8bull));
TAIL_STATIC(0x50c900u,50c);
}
B4d7a8b:L4d7a8b:{c.instructions+=8;NFSU2_TR(0x4d7a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7a8e:{NFSU2_TR(0x4d7a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d7a91:{NFSU2_TR(0x4d7a91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7a94:{NFSU2_TR(0x4d7a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a95:{NFSU2_TR(0x4d7a95);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a9a:{NFSU2_TR(0x4d7a9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7a9b:{NFSU2_TR(0x4d7a9b);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7aa0:{NFSU2_TR(0x4d7aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7aa5ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d7aa5:L4d7aa5:{c.instructions+=4;NFSU2_TR(0x4d7aa5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7aa8:{NFSU2_TR(0x4d7aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7aa9:{NFSU2_TR(0x4d7aa9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7aaa:{NFSU2_TR(0x4d7aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7aafull));
TAIL_STATIC(0x537b80u,537);
}
B4d7aaf:L4d7aaf:{c.instructions+=4;NFSU2_TR(0x4d7aaf);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4d7ab4:{NFSU2_TR(0x4d7ab4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7ab7:{NFSU2_TR(0x4d7ab7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d7ab9:{NFSU2_TR(0x4d7ab9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d7a10u);}goto L4d7a10;}}
}
B4d7abf:L4d7abf:{c.instructions+=5;NFSU2_TR(0x4d7abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7ac0:{NFSU2_TR(0x4d7ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7ac1:{NFSU2_TR(0x4d7ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d7ac2:{NFSU2_TR(0x4d7ac2);
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
B4d7ac5:{NFSU2_TR(0x4d7ac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7ad0:L4d7ad0:{c.instructions+=8;NFSU2_TR(0x4d7ad0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ad2:{NFSU2_TR(0x4d7ad2);
u8 U[4];
w4(U+0,u32(0x774b14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ad7:{NFSU2_TR(0x4d7ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7add:{NFSU2_TR(0x4d7add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ade:{NFSU2_TR(0x4d7ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7ae5:{NFSU2_TR(0x4d7ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ae6:{NFSU2_TR(0x4d7ae6);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7aeb:{NFSU2_TR(0x4d7aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7af0ull));
TAIL_STATIC(0x575620u,575);
}
B4d7af0:L4d7af0:{c.instructions+=5;NFSU2_TR(0x4d7af0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7af3:{NFSU2_TR(0x4d7af3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d7af7:{NFSU2_TR(0x4d7af7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7af9:{NFSU2_TR(0x4d7af9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d7b01:{NFSU2_TR(0x4d7b01);
if(r1(R+518)){{goto L4d7b1e;}}
}
B4d7b03:L4d7b03:{c.instructions+=4;NFSU2_TR(0x4d7b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7b07:{NFSU2_TR(0x4d7b07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b08:{NFSU2_TR(0x4d7b08);
__builtin_memmove((R+4),(R+0),4);
}
B4d7b0a:{NFSU2_TR(0x4d7b0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7b0full));
TAIL_STATIC(0x4c0aa0u,4c0);
}
B4d7b0f:L4d7b0f:{c.instructions+=4;NFSU2_TR(0x4d7b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7b13:{NFSU2_TR(0x4d7b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7b1a:{NFSU2_TR(0x4d7b1a);
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
B4d7b1d:{NFSU2_TR(0x4d7b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7b1e:L4d7b1e:{c.instructions+=5;NFSU2_TR(0x4d7b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7b22:{NFSU2_TR(0x4d7b22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d7b24:{NFSU2_TR(0x4d7b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7b2b:{NFSU2_TR(0x4d7b2b);
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
B4d7b2e:{NFSU2_TR(0x4d7b2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7b30:L4d7b30:{c.instructions+=5;NFSU2_TR(0x4d7b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b31:{NFSU2_TR(0x4d7b31);
__builtin_memmove((R+24),(R+4),4);
}
B4d7b33:{NFSU2_TR(0x4d7b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7b36:{NFSU2_TR(0x4d7b36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b37:{NFSU2_TR(0x4d7b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7b3cull));
TAIL_STATIC(0x52d100u,52d);
}
B4d7b3c:L4d7b3c:{c.instructions+=3;NFSU2_TR(0x4d7b3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7b3f:{NFSU2_TR(0x4d7b3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7b41:{NFSU2_TR(0x4d7b41);
if(r1(R+518)){{goto L4d7b4b;}}
}
B4d7b43:L4d7b43:{c.instructions+=3;NFSU2_TR(0x4d7b43);
__builtin_memmove((R+4),(R+24),4);
}
B4d7b45:{NFSU2_TR(0x4d7b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7b46:{NFSU2_TR(0x4d7b46);
TAIL_STATIC(0x4a4ca0u,4a4);
}
B4d7b4b:L4d7b4b:{c.instructions+=3;NFSU2_TR(0x4d7b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7b4e:{NFSU2_TR(0x4d7b4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b4f:{NFSU2_TR(0x4d7b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7b54ull));
TAIL_STATIC(0x52d100u,52d);
}
B4d7b54:L4d7b54:{c.instructions+=3;NFSU2_TR(0x4d7b54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7b57:{NFSU2_TR(0x4d7b57);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7b59:{NFSU2_TR(0x4d7b59);
if(r1(R+518)){{goto L4d7b63;}}
}
B4d7b5b:L4d7b5b:{c.instructions+=3;NFSU2_TR(0x4d7b5b);
__builtin_memmove((R+4),(R+24),4);
}
B4d7b5d:{NFSU2_TR(0x4d7b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7b5e:{NFSU2_TR(0x4d7b5e);
TAIL_STATIC(0x4a4fb0u,4a4);
}
B4d7b63:L4d7b63:{c.instructions+=3;NFSU2_TR(0x4d7b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7b66:{NFSU2_TR(0x4d7b66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b67:{NFSU2_TR(0x4d7b67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7b6cull));
TAIL_STATIC(0x52d100u,52d);
}
B4d7b6c:L4d7b6c:{c.instructions+=3;NFSU2_TR(0x4d7b6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7b6f:{NFSU2_TR(0x4d7b6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7b71:{NFSU2_TR(0x4d7b71);
if(r1(R+518)){{goto L4d7b7b;}}
}
B4d7b73:L4d7b73:{c.instructions+=3;NFSU2_TR(0x4d7b73);
__builtin_memmove((R+4),(R+24),4);
}
B4d7b75:{NFSU2_TR(0x4d7b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7b76:{NFSU2_TR(0x4d7b76);
TAIL_STATIC(0x4a4dd0u,4a4);
}
B4d7b7b:L4d7b7b:{c.instructions+=3;NFSU2_TR(0x4d7b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7b7e:{NFSU2_TR(0x4d7b7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b7f:{NFSU2_TR(0x4d7b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7b84ull));
TAIL_STATIC(0x52d100u,52d);
}
B4d7b84:L4d7b84:{c.instructions+=3;NFSU2_TR(0x4d7b84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7b87:{NFSU2_TR(0x4d7b87);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7b89:{NFSU2_TR(0x4d7b89);
if(r1(R+518)){{goto L4d7b93;}}
}
B4d7b8b:L4d7b8b:{c.instructions+=3;NFSU2_TR(0x4d7b8b);
__builtin_memmove((R+4),(R+24),4);
}
B4d7b8d:{NFSU2_TR(0x4d7b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7b8e:{NFSU2_TR(0x4d7b8e);
TAIL_STATIC(0x4a5090u,4a5);
}
B4d7b93:L4d7b93:{c.instructions+=3;NFSU2_TR(0x4d7b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7b96:{NFSU2_TR(0x4d7b96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7b97:{NFSU2_TR(0x4d7b97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7b9cull));
TAIL_STATIC(0x52d100u,52d);
}
B4d7b9c:L4d7b9c:{c.instructions+=3;NFSU2_TR(0x4d7b9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7b9f:{NFSU2_TR(0x4d7b9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7ba1:{NFSU2_TR(0x4d7ba1);
if(r1(R+518)){{goto L4d7bab;}}
}
B4d7ba3:L4d7ba3:{c.instructions+=3;NFSU2_TR(0x4d7ba3);
__builtin_memmove((R+4),(R+24),4);
}
B4d7ba5:{NFSU2_TR(0x4d7ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7ba6:{NFSU2_TR(0x4d7ba6);
TAIL_STATIC(0x4c1220u,4c1);
}
B4d7bab:L4d7bab:{c.instructions+=3;NFSU2_TR(0x4d7bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7bae:{NFSU2_TR(0x4d7bae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7baf:{NFSU2_TR(0x4d7baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7bb4ull));
TAIL_STATIC(0x52d100u,52d);
}
B4d7bb4:L4d7bb4:{c.instructions+=3;NFSU2_TR(0x4d7bb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7bb7:{NFSU2_TR(0x4d7bb7);
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
B4d7bb9:{NFSU2_TR(0x4d7bb9);
if(r1(R+518)){{goto L4d7bca;}}
}
B4d7bbb:L4d7bbb:{c.instructions+=3;NFSU2_TR(0x4d7bbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d7bbe:{NFSU2_TR(0x4d7bbe);
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
B4d7bc0:{NFSU2_TR(0x4d7bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7bca;}}
}
B4d7bc2:L4d7bc2:{c.instructions+=3;NFSU2_TR(0x4d7bc2);
__builtin_memmove((R+4),(R+24),4);
}
B4d7bc4:{NFSU2_TR(0x4d7bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7bc5:{NFSU2_TR(0x4d7bc5);
TAIL_STATIC(0x4a5200u,4a5);
}
B4d7bca:L4d7bca:{c.instructions+=2;NFSU2_TR(0x4d7bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7bcb:{NFSU2_TR(0x4d7bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7bd0:L4d7bd0:{c.instructions+=7;NFSU2_TR(0x4d7bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4d7bd3:{NFSU2_TR(0x4d7bd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7bd4:{NFSU2_TR(0x4d7bd4);
__builtin_memmove((R+24),(R+4),4);
}
B4d7bd6:{NFSU2_TR(0x4d7bd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d7bd9:{NFSU2_TR(0x4d7bd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7bdb:{NFSU2_TR(0x4d7bdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7bdc:{NFSU2_TR(0x4d7bdc);
if(r1(R+518)){{goto L4d7c38;}}
}
B4d7bde:L4d7bde:{c.instructions+=1;NFSU2_TR(0x4d7bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7be3ull));
TAIL_STATIC(0x50c600u,50c);
}
B4d7be3:L4d7be3:{c.instructions+=2;NFSU2_TR(0x4d7be3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7be5:{NFSU2_TR(0x4d7be5);
if(r1(R+518)){{goto L4d7bf0;}}
}
B4d7be7:L4d7be7:{c.instructions+=2;NFSU2_TR(0x4d7be7);
__builtin_memmove((R+4),(R+24),4);
}
B4d7be9:{NFSU2_TR(0x4d7be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7beeull));
TAIL_STATIC(0x4a5200u,4a5);
}
B4d7bee:L4d7bee:{c.instructions+=1;NFSU2_TR(0x4d7bee);
{goto L4d7c57;}
}
B4d7bf0:L4d7bf0:{c.instructions+=4;NFSU2_TR(0x4d7bf0);
__builtin_memmove((R+4),gp(0x8763f0),1);
}
B4d7bf6:{NFSU2_TR(0x4d7bf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7bf8:{NFSU2_TR(0x4d7bf8);
w4(R+0,u32(m1(0x8763f2)));
}
B4d7bff:{NFSU2_TR(0x4d7bff);
if(r1(R+518)){{goto L4d7c08;}}
}
B4d7c01:L4d7c01:{c.instructions+=1;NFSU2_TR(0x4d7c01);
w4(R+0,u32(m1(0x8763f5)));
}
B4d7c08:L4d7c08:{c.instructions+=2;NFSU2_TR(0x4d7c08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c0a:{NFSU2_TR(0x4d7c0a);
if(r1(R+518)){{goto L4d7c1c;}}
}
B4d7c0c:L4d7c0c:{c.instructions+=3;NFSU2_TR(0x4d7c0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d7c0f:{NFSU2_TR(0x4d7c0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7c11:{NFSU2_TR(0x4d7c11);
if(r1(R+518)){{goto L4d7c57;}}
}
B4d7c13:L4d7c13:{c.instructions+=2;NFSU2_TR(0x4d7c13);
__builtin_memmove((R+4),(R+24),4);
}
B4d7c15:{NFSU2_TR(0x4d7c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7c1aull));
TAIL_STATIC(0x4a5200u,4a5);
}
B4d7c1a:L4d7c1a:{c.instructions+=1;NFSU2_TR(0x4d7c1a);
{goto L4d7c57;}
}
B4d7c1c:L4d7c1c:{c.instructions+=3;NFSU2_TR(0x4d7c1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7c1e:{NFSU2_TR(0x4d7c1e);
w4(R+0,u32(m1(0x8763f3)));
}
B4d7c25:{NFSU2_TR(0x4d7c25);
if(r1(R+518)){{goto L4d7c2e;}}
}
B4d7c27:L4d7c27:{c.instructions+=1;NFSU2_TR(0x4d7c27);
w4(R+0,u32(m1(0x8763f6)));
}
B4d7c2e:L4d7c2e:{c.instructions+=2;NFSU2_TR(0x4d7c2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c30:{NFSU2_TR(0x4d7c30);
if(r1(R+518)){{goto L4d7c57;}}
}
B4d7c32:L4d7c32:{c.instructions+=2;NFSU2_TR(0x4d7c32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d7c36:{NFSU2_TR(0x4d7c36);
{goto L4d7c57;}
}
B4d7c38:L4d7c38:{c.instructions+=4;NFSU2_TR(0x4d7c38);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B4d7c3d:{NFSU2_TR(0x4d7c3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7c3f:{NFSU2_TR(0x4d7c3f);
w4(R+0,u32(m1(0x8763f3)));
}
B4d7c46:{NFSU2_TR(0x4d7c46);
if(r1(R+518)){{goto L4d7c4f;}}
}
B4d7c48:L4d7c48:{c.instructions+=1;NFSU2_TR(0x4d7c48);
w4(R+0,u32(m1(0x8763f6)));
}
B4d7c4f:L4d7c4f:{c.instructions+=2;NFSU2_TR(0x4d7c4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c51:{NFSU2_TR(0x4d7c51);
if(r1(R+518)){{goto L4d7c57;}}
}
B4d7c53:L4d7c53:{c.instructions+=1;NFSU2_TR(0x4d7c53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d7c57:L4d7c57:{c.instructions+=3;NFSU2_TR(0x4d7c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7c5b:{NFSU2_TR(0x4d7c5b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c60:{NFSU2_TR(0x4d7c60);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d7d31;}}
}
B4d7c66:L4d7c66:{c.instructions+=1;NFSU2_TR(0x4d7c66);
if(r1(R+518)){{goto L4d7d22;}}
}
B4d7c6c:L4d7c6c:{c.instructions+=2;NFSU2_TR(0x4d7c6c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c71:{NFSU2_TR(0x4d7c71);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d7cbf;}}
}
B4d7c73:L4d7c73:{c.instructions+=1;NFSU2_TR(0x4d7c73);
if(r1(R+518)){{goto L4d7cb0;}}
}
B4d7c75:L4d7c75:{c.instructions+=2;NFSU2_TR(0x4d7c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c7a:{NFSU2_TR(0x4d7c7a);
if(r1(R+518)){{goto L4d7ca1;}}
}
B4d7c7c:L4d7c7c:{c.instructions+=2;NFSU2_TR(0x4d7c7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c81:{NFSU2_TR(0x4d7c81);
if(r1(R+518)){{goto L4d7c92;}}
}
B4d7c83:L4d7c83:{c.instructions+=2;NFSU2_TR(0x4d7c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7c8d5450ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7c88:{NFSU2_TR(0x4d7c88);
if(r1(R+518)){{goto L4d7cd1;}}
}
B4d7c8a:L4d7c8a:{c.instructions+=4;NFSU2_TR(0x4d7c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7c8b:{NFSU2_TR(0x4d7c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7c8c:{NFSU2_TR(0x4d7c8c);
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
B4d7c8f:{NFSU2_TR(0x4d7c8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7c92:L4d7c92:{c.instructions+=2;NFSU2_TR(0x4d7c92);
__builtin_memmove((R+4),(R+24),4);
}
B4d7c94:{NFSU2_TR(0x4d7c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7c99ull));
TAIL_STATIC(0x4a4ca0u,4a4);
}
B4d7c99:L4d7c99:{c.instructions+=4;NFSU2_TR(0x4d7c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7c9a:{NFSU2_TR(0x4d7c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7c9b:{NFSU2_TR(0x4d7c9b);
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
B4d7c9e:{NFSU2_TR(0x4d7c9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7ca1:L4d7ca1:{c.instructions+=2;NFSU2_TR(0x4d7ca1);
__builtin_memmove((R+4),(R+24),4);
}
B4d7ca3:{NFSU2_TR(0x4d7ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7ca8ull));
TAIL_STATIC(0x4a4e80u,4a4);
}
B4d7ca8:L4d7ca8:{c.instructions+=4;NFSU2_TR(0x4d7ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7ca9:{NFSU2_TR(0x4d7ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7caa:{NFSU2_TR(0x4d7caa);
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
B4d7cad:{NFSU2_TR(0x4d7cad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7cb0:L4d7cb0:{c.instructions+=2;NFSU2_TR(0x4d7cb0);
__builtin_memmove((R+4),(R+24),4);
}
B4d7cb2:{NFSU2_TR(0x4d7cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7cb7ull));
TAIL_STATIC(0x4c1220u,4c1);
}
B4d7cb7:L4d7cb7:{c.instructions+=4;NFSU2_TR(0x4d7cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7cb8:{NFSU2_TR(0x4d7cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7cb9:{NFSU2_TR(0x4d7cb9);
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
B4d7cbc:{NFSU2_TR(0x4d7cbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7cbf:L4d7cbf:{c.instructions+=2;NFSU2_TR(0x4d7cbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7cc4:{NFSU2_TR(0x4d7cc4);
if(r1(R+518)){{goto L4d7d13;}}
}
B4d7cc6:L4d7cc6:{c.instructions+=2;NFSU2_TR(0x4d7cc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7ccb:{NFSU2_TR(0x4d7ccb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4d8014u,4d8);}
}
B4d7cd1:L4d7cd1:{c.instructions+=4;NFSU2_TR(0x4d7cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7cd4:{NFSU2_TR(0x4d7cd4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7cd6:{NFSU2_TR(0x4d7cd6);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7cdb:{NFSU2_TR(0x4d7cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7ce0ull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7ce0:L4d7ce0:{c.instructions+=5;NFSU2_TR(0x4d7ce0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7ce3:{NFSU2_TR(0x4d7ce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ce4:{NFSU2_TR(0x4d7ce4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ce9:{NFSU2_TR(0x4d7ce9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7cea:{NFSU2_TR(0x4d7cea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7cefull));
TAIL_STATIC(0x537c60u,537);
}
B4d7cef:L4d7cef:{c.instructions+=4;NFSU2_TR(0x4d7cef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d7cf2:{NFSU2_TR(0x4d7cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7cf5:{NFSU2_TR(0x4d7cf5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7cf7:{NFSU2_TR(0x4d7cf7);
if(r1(R+518)){{goto L4d7d07;}}
}
B4d7cf9:L4d7cf9:{c.instructions+=3;NFSU2_TR(0x4d7cf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d7cfc:{NFSU2_TR(0x4d7cfc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7cfe:{NFSU2_TR(0x4d7cfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7d07;}}
}
B4d7d00:L4d7d00:{c.instructions+=2;NFSU2_TR(0x4d7d00);
__builtin_memmove((R+4),(R+24),4);
}
B4d7d02:{NFSU2_TR(0x4d7d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7d07ull));
TAIL_STATIC(0x4a5200u,4a5);
}
B4d7d07:L4d7d07:{c.instructions+=5;NFSU2_TR(0x4d7d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7d08:{NFSU2_TR(0x4d7d08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d7d0c:{NFSU2_TR(0x4d7d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7d0d:{NFSU2_TR(0x4d7d0d);
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
B4d7d10:{NFSU2_TR(0x4d7d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7d13:L4d7d13:{c.instructions+=2;NFSU2_TR(0x4d7d13);
__builtin_memmove((R+4),(R+24),4);
}
B4d7d15:{NFSU2_TR(0x4d7d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7d1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d7b30u);}goto L4d7b30;}
}
B4d7d1a:L4d7d1a:{c.instructions+=4;NFSU2_TR(0x4d7d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7d1b:{NFSU2_TR(0x4d7d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7d1c:{NFSU2_TR(0x4d7d1c);
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
B4d7d1f:{NFSU2_TR(0x4d7d1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7d22:L4d7d22:{c.instructions+=2;NFSU2_TR(0x4d7d22);
__builtin_memmove((R+4),(R+24),4);
}
B4d7d24:{NFSU2_TR(0x4d7d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7d29ull));
TAIL_STATIC(0x4a4fb0u,4a4);
}
B4d7d29:L4d7d29:{c.instructions+=4;NFSU2_TR(0x4d7d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7d2a:{NFSU2_TR(0x4d7d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7d2b:{NFSU2_TR(0x4d7d2b);
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
B4d7d2e:{NFSU2_TR(0x4d7d2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7d31:L4d7d31:{c.instructions+=2;NFSU2_TR(0x4d7d31);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7d36:{NFSU2_TR(0x4d7d36);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d7fc2;}}
}
B4d7d3c:L4d7d3c:{c.instructions+=1;NFSU2_TR(0x4d7d3c);
if(r1(R+518)){{goto L4d7d63;}}
}
B4d7d3e:L4d7d3e:{c.instructions+=2;NFSU2_TR(0x4d7d3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfbfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7d43:{NFSU2_TR(0x4d7d43);
if(r1(R+518)){TAIL_STATIC(0x4d800du,4d8);}
}
B4d7d49:L4d7d49:{c.instructions+=2;NFSU2_TR(0x4d7d49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7d4e:{NFSU2_TR(0x4d7d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4d8014u,4d8);}
}
B4d7d54:L4d7d54:{c.instructions+=2;NFSU2_TR(0x4d7d54);
__builtin_memmove((R+4),(R+24),4);
}
B4d7d56:{NFSU2_TR(0x4d7d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7d5bull));
TAIL_STATIC(0x4a5090u,4a5);
}
B4d7d5b:L4d7d5b:{c.instructions+=4;NFSU2_TR(0x4d7d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7d5c:{NFSU2_TR(0x4d7d5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7d5d:{NFSU2_TR(0x4d7d5d);
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
B4d7d60:{NFSU2_TR(0x4d7d60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7d63:L4d7d63:{c.instructions+=3;NFSU2_TR(0x4d7d63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d7d66:{NFSU2_TR(0x4d7d66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7d68:{NFSU2_TR(0x4d7d68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7e39;}}
}
B4d7d6e:L4d7d6e:{c.instructions+=4;NFSU2_TR(0x4d7d6e);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4d7d73:{NFSU2_TR(0x4d7d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7d76:{NFSU2_TR(0x4d7d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7d78:{NFSU2_TR(0x4d7d78);
if(r1(R+518)){{goto L4d7e39;}}
}
B4d7d7e:L4d7d7e:{c.instructions+=3;NFSU2_TR(0x4d7d7e);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4d7d84:{NFSU2_TR(0x4d7d84);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4d7d87:{NFSU2_TR(0x4d7d87);
if(r1(R+518)){{goto L4d7e39;}}
}
B4d7d8d:L4d7d8d:{c.instructions+=3;NFSU2_TR(0x4d7d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7d90:{NFSU2_TR(0x4d7d90);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7d95:{NFSU2_TR(0x4d7d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7d9aull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7d9a:L4d7d9a:{c.instructions+=4;NFSU2_TR(0x4d7d9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7d9d:{NFSU2_TR(0x4d7d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7d9e:{NFSU2_TR(0x4d7d9e);
u8 U[4];
w4(U+0,u32(0x790590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7da3:{NFSU2_TR(0x4d7da3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7da8ull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7da8:L4d7da8:{c.instructions+=4;NFSU2_TR(0x4d7da8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7dab:{NFSU2_TR(0x4d7dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dac:{NFSU2_TR(0x4d7dac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dad:{NFSU2_TR(0x4d7dad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7db2ull));
TAIL_STATIC(0x537d40u,537);
}
B4d7db2:L4d7db2:{c.instructions+=3;NFSU2_TR(0x4d7db2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d7db5:{NFSU2_TR(0x4d7db5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7db7:{NFSU2_TR(0x4d7db7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7de3;}}
}
B4d7db9:L4d7db9:{c.instructions+=4;NFSU2_TR(0x4d7db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7dbc:{NFSU2_TR(0x4d7dbc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dbe:{NFSU2_TR(0x4d7dbe);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dc3:{NFSU2_TR(0x4d7dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7dc8ull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7dc8:L4d7dc8:{c.instructions+=4;NFSU2_TR(0x4d7dc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7dcb:{NFSU2_TR(0x4d7dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dcc:{NFSU2_TR(0x4d7dcc);
u8 U[4];
w4(U+0,u32(0x790590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dd1:{NFSU2_TR(0x4d7dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7dd6ull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7dd6:L4d7dd6:{c.instructions+=4;NFSU2_TR(0x4d7dd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7dd9:{NFSU2_TR(0x4d7dd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7dda:{NFSU2_TR(0x4d7dda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ddb:{NFSU2_TR(0x4d7ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7de0ull));
TAIL_STATIC(0x537c60u,537);
}
B4d7de0:L4d7de0:{c.instructions+=1;NFSU2_TR(0x4d7de0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7de3:L4d7de3:{c.instructions+=3;NFSU2_TR(0x4d7de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7de6:{NFSU2_TR(0x4d7de6);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7deb:{NFSU2_TR(0x4d7deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7df0ull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7df0:L4d7df0:{c.instructions+=4;NFSU2_TR(0x4d7df0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7df3:{NFSU2_TR(0x4d7df3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7df4:{NFSU2_TR(0x4d7df4);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7df9:{NFSU2_TR(0x4d7df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7dfeull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7dfe:L4d7dfe:{c.instructions+=4;NFSU2_TR(0x4d7dfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7e01:{NFSU2_TR(0x4d7e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e02:{NFSU2_TR(0x4d7e02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e03:{NFSU2_TR(0x4d7e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7e08ull));
TAIL_STATIC(0x537d40u,537);
}
B4d7e08:L4d7e08:{c.instructions+=3;NFSU2_TR(0x4d7e08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d7e0b:{NFSU2_TR(0x4d7e0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d7e0d:{NFSU2_TR(0x4d7e0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d7e39;}}
}
B4d7e0f:L4d7e0f:{c.instructions+=4;NFSU2_TR(0x4d7e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7e12:{NFSU2_TR(0x4d7e12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e14:{NFSU2_TR(0x4d7e14);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e19:{NFSU2_TR(0x4d7e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7e1eull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7e1e:L4d7e1e:{c.instructions+=4;NFSU2_TR(0x4d7e1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7e21:{NFSU2_TR(0x4d7e21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e22:{NFSU2_TR(0x4d7e22);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e27:{NFSU2_TR(0x4d7e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7e2cull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7e2c:L4d7e2c:{c.instructions+=4;NFSU2_TR(0x4d7e2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7e2f:{NFSU2_TR(0x4d7e2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e30:{NFSU2_TR(0x4d7e30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e31:{NFSU2_TR(0x4d7e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7e36ull));
TAIL_STATIC(0x537c60u,537);
}
B4d7e36:L4d7e36:{c.instructions+=1;NFSU2_TR(0x4d7e36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d7e39:L4d7e39:{c.instructions+=2;NFSU2_TR(0x4d7e39);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B4d7e3f:{NFSU2_TR(0x4d7e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7e44ull));
TAIL_STATIC(0x52cdd0u,52c);
}
B4d7e44:L4d7e44:{c.instructions+=3;NFSU2_TR(0x4d7e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7e4a:{NFSU2_TR(0x4d7e4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7e4c:{NFSU2_TR(0x4d7e4c);
if(r1(R+518)){{goto L4d7e59;}}
}
B4d7e4e:L4d7e4e:{c.instructions+=3;NFSU2_TR(0x4d7e4e);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4d7e51:{NFSU2_TR(0x4d7e51);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d7e57:{NFSU2_TR(0x4d7e57);
{goto L4d7e5f;}
}
B4d7e59:L4d7e59:{c.instructions+=1;NFSU2_TR(0x4d7e59);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d7e5f:L4d7e5f:{c.instructions+=10;NFSU2_TR(0x4d7e5f);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4d7e65:{NFSU2_TR(0x4d7e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7e6b:{NFSU2_TR(0x4d7e6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d7e6f:{NFSU2_TR(0x4d7e6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e70:{NFSU2_TR(0x4d7e70);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4d7e76:{NFSU2_TR(0x4d7e76);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d7e7a:{NFSU2_TR(0x4d7e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e7b:{NFSU2_TR(0x4d7e7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7e7c:{NFSU2_TR(0x4d7e7c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d7e80:{NFSU2_TR(0x4d7e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7e85ull));
TAIL_STATIC(0x51d730u,51d);
}
B4d7e85:L4d7e85:{c.instructions+=11;NFSU2_TR(0x4d7e85);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d7e89:{NFSU2_TR(0x4d7e89);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d7e8f:{NFSU2_TR(0x4d7e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7e95:{NFSU2_TR(0x4d7e95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d7e98:{NFSU2_TR(0x4d7e98);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d7e9e:{NFSU2_TR(0x4d7e9e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d7ea2:{NFSU2_TR(0x4d7ea2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d7ea8:{NFSU2_TR(0x4d7ea8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4d7eaa:{NFSU2_TR(0x4d7eaa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d7ead:{NFSU2_TR(0x4d7ead);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7eae:{NFSU2_TR(0x4d7eae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7eb3ull));
TAIL_STATIC(0x495540u,495);
}
B4d7eb3:L4d7eb3:{c.instructions+=7;NFSU2_TR(0x4d7eb3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d7eb7:{NFSU2_TR(0x4d7eb7);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d7ebd:{NFSU2_TR(0x4d7ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7ec3:{NFSU2_TR(0x4d7ec3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7ec6:{NFSU2_TR(0x4d7ec6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d7ec9:{NFSU2_TR(0x4d7ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7eca:{NFSU2_TR(0x4d7eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7ecfull));
TAIL_STATIC(0x495590u,495);
}
B4d7ecf:L4d7ecf:{c.instructions+=5;NFSU2_TR(0x4d7ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7ed5:{NFSU2_TR(0x4d7ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7edb:{NFSU2_TR(0x4d7edb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7edc:{NFSU2_TR(0x4d7edc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7edd:{NFSU2_TR(0x4d7edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7ee2ull));
TAIL_STATIC(0x495540u,495);
}
B4d7ee2:L4d7ee2:{c.instructions+=6;NFSU2_TR(0x4d7ee2);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B4d7ee7:{NFSU2_TR(0x4d7ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7eea:{NFSU2_TR(0x4d7eea);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4d7ef0:{NFSU2_TR(0x4d7ef0);
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
B4d7ef3:{NFSU2_TR(0x4d7ef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ef4:{NFSU2_TR(0x4d7ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7ef9ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4d7ef9:L4d7ef9:{c.instructions+=2;NFSU2_TR(0x4d7ef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7efb:{NFSU2_TR(0x4d7efb);
if(r1(R+518)){{goto L4d7f03;}}
}
B4d7efd:L4d7efd:{c.instructions+=2;NFSU2_TR(0x4d7efd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B4d7f01:{NFSU2_TR(0x4d7f01);
{goto L4d7f08;}
}
B4d7f03:L4d7f03:{c.instructions+=1;NFSU2_TR(0x4d7f03);
w4(R+28,u32(0xfffffffeull));
}
B4d7f08:L4d7f08:{c.instructions+=5;NFSU2_TR(0x4d7f08);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4d7f0e:{NFSU2_TR(0x4d7f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7f14:{NFSU2_TR(0x4d7f14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4d7f15:{NFSU2_TR(0x4d7f15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d7f17:{NFSU2_TR(0x4d7f17);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d7f1b;}}
}
B4d7f19:L4d7f19:{c.instructions+=1;NFSU2_TR(0x4d7f19);
__builtin_memmove((R+28),(R+0),4);
}
B4d7f1b:L4d7f1b:{c.instructions+=5;NFSU2_TR(0x4d7f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7f21:{NFSU2_TR(0x4d7f21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f22:{NFSU2_TR(0x4d7f22);
u8 U[4];
w4(U+0,u32(0x7909fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f27:{NFSU2_TR(0x4d7f27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f28:{NFSU2_TR(0x4d7f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7f2dull));
TAIL_STATIC(0x537be0u,537);
}
B4d7f2d:L4d7f2d:{c.instructions+=3;NFSU2_TR(0x4d7f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7f33:{NFSU2_TR(0x4d7f33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f34:{NFSU2_TR(0x4d7f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7f39ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4d7f39:L4d7f39:{c.instructions+=5;NFSU2_TR(0x4d7f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7f3f:{NFSU2_TR(0x4d7f3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f40:{NFSU2_TR(0x4d7f40);
u8 U[4];
w4(U+0,u32(0x7909f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f45:{NFSU2_TR(0x4d7f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f46:{NFSU2_TR(0x4d7f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7f4bull));
TAIL_STATIC(0x537be0u,537);
}
B4d7f4b:L4d7f4b:{c.instructions+=4;NFSU2_TR(0x4d7f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7f51:{NFSU2_TR(0x4d7f51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d7f54:{NFSU2_TR(0x4d7f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7f56:{NFSU2_TR(0x4d7f56);
if(r1(R+518)){{goto L4d7f63;}}
}
B4d7f58:L4d7f58:{c.instructions+=3;NFSU2_TR(0x4d7f58);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4d7f5b:{NFSU2_TR(0x4d7f5b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d7f61:{NFSU2_TR(0x4d7f61);
{goto L4d7f69;}
}
B4d7f63:L4d7f63:{c.instructions+=1;NFSU2_TR(0x4d7f63);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d7f69:L4d7f69:{c.instructions+=4;NFSU2_TR(0x4d7f69);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4d7f6f:{NFSU2_TR(0x4d7f6f);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d7f75:{NFSU2_TR(0x4d7f75);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d7f7b:{NFSU2_TR(0x4d7f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7f80ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4d7f80:L4d7f80:{c.instructions+=6;NFSU2_TR(0x4d7f80);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f82:{NFSU2_TR(0x4d7f82);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d7f86:{NFSU2_TR(0x4d7f86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f87:{NFSU2_TR(0x4d7f87);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d7f8b:{NFSU2_TR(0x4d7f8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d7f8f:{NFSU2_TR(0x4d7f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7f94ull));
TAIL_STATIC(0x577240u,577);
}
B4d7f94:L4d7f94:{c.instructions+=6;NFSU2_TR(0x4d7f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d7f9a:{NFSU2_TR(0x4d7f9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d7f9e:{NFSU2_TR(0x4d7f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7f9f:{NFSU2_TR(0x4d7f9f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7fa4:{NFSU2_TR(0x4d7fa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7fa5:{NFSU2_TR(0x4d7fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7faaull));
TAIL_STATIC(0x537be0u,537);
}
B4d7faa:L4d7faa:{c.instructions+=5;NFSU2_TR(0x4d7faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d7fad:{NFSU2_TR(0x4d7fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d7fb0:{NFSU2_TR(0x4d7fb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7fb1:{NFSU2_TR(0x4d7fb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7fb2:{NFSU2_TR(0x4d7fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7fb7ull));
TAIL_STATIC(0x52cec0u,52c);
}
B4d7fb7:L4d7fb7:{c.instructions+=5;NFSU2_TR(0x4d7fb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d7fba:{NFSU2_TR(0x4d7fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7fbb:{NFSU2_TR(0x4d7fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7fbc:{NFSU2_TR(0x4d7fbc);
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
B4d7fbf:{NFSU2_TR(0x4d7fbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7fc2:L4d7fc2:{c.instructions+=2;NFSU2_TR(0x4d7fc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd97360e9ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7fc7:{NFSU2_TR(0x4d7fc7);
if(r1(R+518)){{goto L4d7fdf;}}
}
B4d7fc9:L4d7fc9:{c.instructions+=2;NFSU2_TR(0x4d7fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d7fce:{NFSU2_TR(0x4d7fce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4d8014u,4d8);}
}
B4d7fd0:L4d7fd0:{c.instructions+=2;NFSU2_TR(0x4d7fd0);
__builtin_memmove((R+4),(R+24),4);
}
B4d7fd2:{NFSU2_TR(0x4d7fd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7fd7ull));
TAIL_STATIC(0x4a4dd0u,4a4);
}
B4d7fd7:L4d7fd7:{c.instructions+=4;NFSU2_TR(0x4d7fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d7fd8:{NFSU2_TR(0x4d7fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d7fd9:{NFSU2_TR(0x4d7fd9);
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
B4d7fdc:{NFSU2_TR(0x4d7fdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d7fdf:L4d7fdf:{c.instructions+=6;NFSU2_TR(0x4d7fdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4d7fe2:{NFSU2_TR(0x4d7fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d7fe5:{NFSU2_TR(0x4d7fe5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7fe7:{NFSU2_TR(0x4d7fe7);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7fec:{NFSU2_TR(0x4d7fec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d7fef:{NFSU2_TR(0x4d7fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d7ff4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4d7ff4:L4d7ff4:{c.instructions+=5;NFSU2_TR(0x4d7ff4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d7ff7:{NFSU2_TR(0x4d7ff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ff8:{NFSU2_TR(0x4d7ff8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ffd:{NFSU2_TR(0x4d7ffd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d7ffe:{NFSU2_TR(0x4d7ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8003ull));
TAIL_STATIC(0x537c60u,537);
}
XIT:NFSU2_TR_EXIT(0x4d7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
