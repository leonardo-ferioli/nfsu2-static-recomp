#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 page_6f7(Cpu& c){return body_6f7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f7000:goto L6f7000;
case 0x6f7003:c.instructions+=1;goto B6f7003;
case 0x6f7005:goto L6f7005;
case 0x6f7009:c.instructions+=1;goto B6f7009;
case 0x6f700b:goto L6f700b;
case 0x6f700d:c.instructions+=1;goto B6f700d;
case 0x6f7010:goto L6f7010;
case 0x6f7013:c.instructions+=2;goto B6f7013;
case 0x6f7017:c.instructions+=1;goto B6f7017;
case 0x6f7019:goto L6f7019;
case 0x6f701c:c.instructions+=3;goto B6f701c;
case 0x6f701f:c.instructions+=2;goto B6f701f;
case 0x6f7025:c.instructions+=1;goto B6f7025;
case 0x6f702a:goto L6f702a;
case 0x6f7030:c.instructions+=7;goto B6f7030;
case 0x6f7032:c.instructions+=6;goto B6f7032;
case 0x6f7034:c.instructions+=5;goto B6f7034;
case 0x6f7035:c.instructions+=4;goto B6f7035;
case 0x6f7038:c.instructions+=3;goto B6f7038;
case 0x6f7039:c.instructions+=2;goto B6f7039;
case 0x6f703c:c.instructions+=1;goto B6f703c;
case 0x6f7041:goto L6f7041;
case 0x6f7043:c.instructions+=3;goto B6f7043;
case 0x6f7044:c.instructions+=2;goto B6f7044;
case 0x6f7045:c.instructions+=1;goto B6f7045;
case 0x6f704a:goto L6f704a;
case 0x6f704f:c.instructions+=7;goto B6f704f;
case 0x6f7055:c.instructions+=6;goto B6f7055;
case 0x6f7057:c.instructions+=5;goto B6f7057;
case 0x6f7059:c.instructions+=4;goto B6f7059;
case 0x6f705a:c.instructions+=3;goto B6f705a;
case 0x6f705b:c.instructions+=2;goto B6f705b;
case 0x6f705c:c.instructions+=1;goto B6f705c;
case 0x6f7061:goto L6f7061;
case 0x6f7064:c.instructions+=2;goto B6f7064;
case 0x6f7067:c.instructions+=1;goto B6f7067;
case 0x6f706a:goto L6f706a;
case 0x6f706c:c.instructions+=3;goto B6f706c;
case 0x6f706d:c.instructions+=2;goto B6f706d;
case 0x6f706f:c.instructions+=1;goto B6f706f;
case 0x6f7071:goto L6f7071;
case 0x6f7073:c.instructions+=2;goto B6f7073;
case 0x6f7077:c.instructions+=1;goto B6f7077;
case 0x6f7079:goto L6f7079;
case 0x6f707b:c.instructions+=3;goto B6f707b;
case 0x6f707c:c.instructions+=2;goto B6f707c;
case 0x6f707e:c.instructions+=1;goto B6f707e;
case 0x6f7080:goto L6f7080;
case 0x6f7082:c.instructions+=2;goto B6f7082;
case 0x6f7084:c.instructions+=1;goto B6f7084;
case 0x6f7085:goto L6f7085;
case 0x6f7088:c.instructions+=3;goto B6f7088;
case 0x6f7089:c.instructions+=2;goto B6f7089;
case 0x6f708b:c.instructions+=1;goto B6f708b;
case 0x6f708d:goto L6f708d;
case 0x6f708f:c.instructions+=1;goto B6f708f;
case 0x6f7092:goto L6f7092;
case 0x6f7094:goto L6f7094;
case 0x6f7096:c.instructions+=2;goto B6f7096;
case 0x6f7099:c.instructions+=1;goto B6f7099;
case 0x6f709a:goto L6f709a;
case 0x6f709c:goto L6f709c;
case 0x6f70a1:goto L6f70a1;
case 0x6f70a2:c.instructions+=7;goto B6f70a2;
case 0x6f70a4:c.instructions+=6;goto B6f70a4;
case 0x6f70a7:c.instructions+=5;goto B6f70a7;
case 0x6f70a8:c.instructions+=4;goto B6f70a8;
case 0x6f70a9:c.instructions+=3;goto B6f70a9;
case 0x6f70aa:c.instructions+=2;goto B6f70aa;
case 0x6f70ab:c.instructions+=1;goto B6f70ab;
case 0x6f70ac:goto L6f70ac;
case 0x6f70b2:c.instructions+=4;goto B6f70b2;
case 0x6f70b3:c.instructions+=3;goto B6f70b3;
case 0x6f70b4:c.instructions+=2;goto B6f70b4;
case 0x6f70b7:c.instructions+=1;goto B6f70b7;
case 0x6f70bc:goto L6f70bc;
case 0x6f70c2:c.instructions+=2;goto B6f70c2;
case 0x6f70c4:c.instructions+=1;goto B6f70c4;
case 0x6f70c9:goto L6f70c9;
case 0x6f70cc:c.instructions+=2;goto B6f70cc;
case 0x6f70ce:c.instructions+=1;goto B6f70ce;
case 0x6f70d3:goto L6f70d3;
case 0x6f70d5:c.instructions+=3;goto B6f70d5;
case 0x6f70d6:c.instructions+=2;goto B6f70d6;
case 0x6f70d7:c.instructions+=1;goto B6f70d7;
case 0x6f70d8:goto L6f70d8;
case 0x6f70d9:c.instructions+=10;goto B6f70d9;
case 0x6f70db:c.instructions+=9;goto B6f70db;
case 0x6f70dc:c.instructions+=8;goto B6f70dc;
case 0x6f70dd:c.instructions+=7;goto B6f70dd;
case 0x6f70e0:c.instructions+=6;goto B6f70e0;
case 0x6f70e2:c.instructions+=5;goto B6f70e2;
case 0x6f70e4:c.instructions+=4;goto B6f70e4;
case 0x6f70e5:c.instructions+=3;goto B6f70e5;
case 0x6f70e8:c.instructions+=2;goto B6f70e8;
case 0x6f70ec:c.instructions+=1;goto B6f70ec;
case 0x6f70f1:goto L6f70f1;
case 0x6f70f3:c.instructions+=1;goto B6f70f3;
case 0x6f70f5:goto L6f70f5;
case 0x6f70f6:c.instructions+=2;goto B6f70f6;
case 0x6f70f9:c.instructions+=1;goto B6f70f9;
case 0x6f70fe:goto L6f70fe;
case 0x6f7101:c.instructions+=3;goto B6f7101;
case 0x6f7103:c.instructions+=2;goto B6f7103;
case 0x6f7106:c.instructions+=1;goto B6f7106;
case 0x6f7109:goto L6f7109;
case 0x6f710c:goto L6f710c;
case 0x6f710d:c.instructions+=3;goto B6f710d;
case 0x6f710e:c.instructions+=2;goto B6f710e;
case 0x6f710f:c.instructions+=1;goto B6f710f;
case 0x6f7112:goto L6f7112;
case 0x6f7118:c.instructions+=4;goto B6f7118;
case 0x6f7119:c.instructions+=3;goto B6f7119;
case 0x6f711a:c.instructions+=2;goto B6f711a;
case 0x6f711d:c.instructions+=1;goto B6f711d;
case 0x6f7122:goto L6f7122;
case 0x6f7128:c.instructions+=2;goto B6f7128;
case 0x6f712b:c.instructions+=1;goto B6f712b;
case 0x6f7130:goto L6f7130;
case 0x6f7133:c.instructions+=2;goto B6f7133;
case 0x6f7135:c.instructions+=1;goto B6f7135;
case 0x6f713a:goto L6f713a;
case 0x6f713e:c.instructions+=4;goto B6f713e;
case 0x6f7140:c.instructions+=3;goto B6f7140;
case 0x6f7141:c.instructions+=2;goto B6f7141;
case 0x6f7142:c.instructions+=1;goto B6f7142;
case 0x6f7143:goto L6f7143;
case 0x6f7144:c.instructions+=5;goto B6f7144;
case 0x6f7146:c.instructions+=4;goto B6f7146;
case 0x6f7147:c.instructions+=3;goto B6f7147;
case 0x6f7149:c.instructions+=2;goto B6f7149;
case 0x6f714c:c.instructions+=1;goto B6f714c;
case 0x6f7151:goto L6f7151;
case 0x6f7152:c.instructions+=4;goto B6f7152;
case 0x6f7153:c.instructions+=3;goto B6f7153;
case 0x6f7159:c.instructions+=2;goto B6f7159;
case 0x6f715c:c.instructions+=1;goto B6f715c;
case 0x6f7161:goto L6f7161;
case 0x6f7167:c.instructions+=3;goto B6f7167;
case 0x6f716a:c.instructions+=2;goto B6f716a;
case 0x6f716d:c.instructions+=1;goto B6f716d;
case 0x6f7172:goto L6f7172;
case 0x6f7175:c.instructions+=3;goto B6f7175;
case 0x6f7176:c.instructions+=2;goto B6f7176;
case 0x6f7177:c.instructions+=1;goto B6f7177;
case 0x6f717c:goto L6f717c;
case 0x6f717f:c.instructions+=4;goto B6f717f;
case 0x6f7185:c.instructions+=3;goto B6f7185;
case 0x6f7188:c.instructions+=2;goto B6f7188;
case 0x6f718a:c.instructions+=1;goto B6f718a;
case 0x6f718d:goto L6f718d;
case 0x6f718e:c.instructions+=1;goto B6f718e;
case 0x6f7193:goto L6f7193;
case 0x6f7194:c.instructions+=1;goto B6f7194;
case 0x6f7195:goto L6f7195;
case 0x6f7196:c.instructions+=6;goto B6f7196;
case 0x6f7198:c.instructions+=5;goto B6f7198;
case 0x6f7199:c.instructions+=4;goto B6f7199;
case 0x6f719c:c.instructions+=3;goto B6f719c;
case 0x6f719f:c.instructions+=2;goto B6f719f;
case 0x6f71a6:c.instructions+=1;goto B6f71a6;
case 0x6f71ac:goto L6f71ac;
case 0x6f71b0:c.instructions+=1;goto B6f71b0;
case 0x6f71b6:goto L6f71b6;
case 0x6f71b7:c.instructions+=2;goto B6f71b7;
case 0x6f71b8:c.instructions+=1;goto B6f71b8;
case 0x6f71bb:goto L6f71bb;
case 0x6f71bd:c.instructions+=1;goto B6f71bd;
case 0x6f71c2:goto L6f71c2;
case 0x6f71c5:c.instructions+=3;goto B6f71c5;
case 0x6f71c9:c.instructions+=2;goto B6f71c9;
case 0x6f71cb:c.instructions+=1;goto B6f71cb;
case 0x6f71cd:goto L6f71cd;
case 0x6f71d1:c.instructions+=2;goto B6f71d1;
case 0x6f71d4:c.instructions+=1;goto B6f71d4;
case 0x6f71d6:goto L6f71d6;
case 0x6f71d9:c.instructions+=1;goto B6f71d9;
case 0x6f71de:goto L6f71de;
case 0x6f71e1:goto L6f71e1;
case 0x6f71e3:c.instructions+=1;goto B6f71e3;
case 0x6f71e8:goto L6f71e8;
case 0x6f71ec:c.instructions+=1;goto B6f71ec;
case 0x6f71ee:goto L6f71ee;
case 0x6f71f1:c.instructions+=2;goto B6f71f1;
case 0x6f71f2:c.instructions+=1;goto B6f71f2;
case 0x6f71f7:goto L6f71f7;
case 0x6f71f8:c.instructions+=1;goto B6f71f8;
case 0x6f71fa:goto L6f71fa;
case 0x6f71fe:c.instructions+=1;goto B6f71fe;
case 0x6f7200:goto L6f7200;
case 0x6f7202:c.instructions+=3;goto B6f7202;
case 0x6f7203:c.instructions+=2;goto B6f7203;
case 0x6f7205:c.instructions+=1;goto B6f7205;
case 0x6f7208:goto L6f7208;
case 0x6f720c:c.instructions+=1;goto B6f720c;
case 0x6f720e:goto L6f720e;
case 0x6f7210:c.instructions+=1;goto B6f7210;
case 0x6f7215:goto L6f7215;
case 0x6f7216:c.instructions+=2;goto B6f7216;
case 0x6f7219:c.instructions+=1;goto B6f7219;
case 0x6f721e:goto L6f721e;
case 0x6f7222:c.instructions+=2;goto B6f7222;
case 0x6f7224:c.instructions+=1;goto B6f7224;
case 0x6f7229:goto L6f7229;
case 0x6f722d:c.instructions+=1;goto B6f722d;
case 0x6f722f:goto L6f722f;
case 0x6f7232:c.instructions+=1;goto B6f7232;
case 0x6f7234:goto L6f7234;
case 0x6f7238:goto L6f7238;
case 0x6f723b:c.instructions+=3;goto B6f723b;
case 0x6f723c:c.instructions+=2;goto B6f723c;
case 0x6f723f:c.instructions+=1;goto B6f723f;
case 0x6f7242:goto L6f7242;
case 0x6f7245:c.instructions+=2;goto B6f7245;
case 0x6f7248:c.instructions+=1;goto B6f7248;
case 0x6f724e:goto L6f724e;
case 0x6f7252:c.instructions+=1;goto B6f7252;
case 0x6f7258:goto L6f7258;
case 0x6f7259:c.instructions+=1;goto B6f7259;
case 0x6f725a:goto L6f725a;
case 0x6f7261:c.instructions+=4;goto B6f7261;
case 0x6f7263:c.instructions+=3;goto B6f7263;
case 0x6f7264:c.instructions+=2;goto B6f7264;
case 0x6f7265:c.instructions+=1;goto B6f7265;
case 0x6f7266:goto L6f7266;
case 0x6f7267:c.instructions+=6;goto B6f7267;
case 0x6f7269:c.instructions+=5;goto B6f7269;
case 0x6f726a:c.instructions+=4;goto B6f726a;
case 0x6f7270:c.instructions+=3;goto B6f7270;
case 0x6f7271:c.instructions+=2;goto B6f7271;
case 0x6f7274:c.instructions+=1;goto B6f7274;
case 0x6f7279:goto L6f7279;
case 0x6f727b:c.instructions+=5;goto B6f727b;
case 0x6f727e:c.instructions+=4;goto B6f727e;
case 0x6f727f:c.instructions+=3;goto B6f727f;
case 0x6f7282:c.instructions+=2;goto B6f7282;
case 0x6f7288:c.instructions+=1;goto B6f7288;
case 0x6f728d:goto L6f728d;
case 0x6f728f:c.instructions+=8;goto B6f728f;
case 0x6f7295:c.instructions+=7;goto B6f7295;
case 0x6f729a:c.instructions+=6;goto B6f729a;
case 0x6f729b:c.instructions+=5;goto B6f729b;
case 0x6f729c:c.instructions+=4;goto B6f729c;
case 0x6f729e:c.instructions+=3;goto B6f729e;
case 0x6f729f:c.instructions+=2;goto B6f729f;
case 0x6f72a0:c.instructions+=1;goto B6f72a0;
case 0x6f72a1:goto L6f72a1;
case 0x6f72a2:c.instructions+=12;goto B6f72a2;
case 0x6f72a4:c.instructions+=11;goto B6f72a4;
case 0x6f72a9:c.instructions+=10;goto B6f72a9;
case 0x6f72aa:c.instructions+=9;goto B6f72aa;
case 0x6f72ab:c.instructions+=8;goto B6f72ab;
case 0x6f72ae:c.instructions+=7;goto B6f72ae;
case 0x6f72b4:c.instructions+=6;goto B6f72b4;
case 0x6f72ba:c.instructions+=5;goto B6f72ba;
case 0x6f72bc:c.instructions+=4;goto B6f72bc;
case 0x6f72bd:c.instructions+=3;goto B6f72bd;
case 0x6f72be:c.instructions+=2;goto B6f72be;
case 0x6f72c1:c.instructions+=1;goto B6f72c1;
case 0x6f72c6:goto L6f72c6;
case 0x6f72c8:c.instructions+=1;goto B6f72c8;
case 0x6f72ca:goto L6f72ca;
case 0x6f72cd:c.instructions+=1;goto B6f72cd;
case 0x6f72cf:goto L6f72cf;
case 0x6f72d0:c.instructions+=4;goto B6f72d0;
case 0x6f72d3:c.instructions+=3;goto B6f72d3;
case 0x6f72d4:c.instructions+=2;goto B6f72d4;
case 0x6f72db:c.instructions+=1;goto B6f72db;
case 0x6f72e0:goto L6f72e0;
case 0x6f72e2:goto L6f72e2;
case 0x6f72e3:c.instructions+=1;goto B6f72e3;
case 0x6f72e8:goto L6f72e8;
case 0x6f72eb:c.instructions+=2;goto B6f72eb;
case 0x6f72ec:c.instructions+=1;goto B6f72ec;
case 0x6f72ee:goto L6f72ee;
case 0x6f72ef:c.instructions+=1;goto B6f72ef;
case 0x6f72f4:goto L6f72f4;
case 0x6f72f5:c.instructions+=2;goto B6f72f5;
case 0x6f72f8:c.instructions+=1;goto B6f72f8;
case 0x6f72fe:goto L6f72fe;
case 0x6f7301:c.instructions+=1;goto B6f7301;
case 0x6f7307:goto L6f7307;
case 0x6f730a:c.instructions+=2;goto B6f730a;
case 0x6f730b:c.instructions+=1;goto B6f730b;
case 0x6f7310:goto L6f7310;
case 0x6f7311:c.instructions+=2;goto B6f7311;
case 0x6f7314:c.instructions+=1;goto B6f7314;
case 0x6f7319:goto L6f7319;
case 0x6f731c:c.instructions+=1;goto B6f731c;
case 0x6f7321:goto L6f7321;
case 0x6f7327:c.instructions+=2;goto B6f7327;
case 0x6f7329:c.instructions+=1;goto B6f7329;
case 0x6f732c:goto L6f732c;
case 0x6f732d:goto L6f732d;
case 0x6f732f:c.instructions+=2;goto B6f732f;
case 0x6f7330:c.instructions+=1;goto B6f7330;
case 0x6f7335:goto L6f7335;
case 0x6f7336:c.instructions+=5;goto B6f7336;
case 0x6f7337:c.instructions+=4;goto B6f7337;
case 0x6f733d:c.instructions+=3;goto B6f733d;
case 0x6f733e:c.instructions+=2;goto B6f733e;
case 0x6f7341:c.instructions+=1;goto B6f7341;
case 0x6f7346:goto L6f7346;
case 0x6f7347:c.instructions+=3;goto B6f7347;
case 0x6f7348:c.instructions+=2;goto B6f7348;
case 0x6f7349:c.instructions+=1;goto B6f7349;
case 0x6f734a:goto L6f734a;
case 0x6f734b:c.instructions+=5;goto B6f734b;
case 0x6f734d:c.instructions+=4;goto B6f734d;
case 0x6f734e:c.instructions+=3;goto B6f734e;
case 0x6f7350:c.instructions+=2;goto B6f7350;
case 0x6f7352:c.instructions+=1;goto B6f7352;
case 0x6f7354:goto L6f7354;
case 0x6f7357:c.instructions+=2;goto B6f7357;
case 0x6f735a:c.instructions+=1;goto B6f735a;
case 0x6f735c:goto L6f735c;
case 0x6f735e:c.instructions+=3;goto B6f735e;
case 0x6f7361:c.instructions+=2;goto B6f7361;
case 0x6f7363:c.instructions+=1;goto B6f7363;
case 0x6f7365:goto L6f7365;
case 0x6f7368:c.instructions+=1;goto B6f7368;
case 0x6f736a:goto L6f736a;
case 0x6f736c:goto L6f736c;
case 0x6f736e:c.instructions+=1;goto B6f736e;
case 0x6f7370:goto L6f7370;
case 0x6f7372:goto L6f7372;
case 0x6f7373:c.instructions+=2;goto B6f7373;
case 0x6f7374:c.instructions+=1;goto B6f7374;
case 0x6f7377:goto L6f7377;
case 0x6f737b:c.instructions+=1;goto B6f737b;
case 0x6f737d:goto L6f737d;
case 0x6f737e:c.instructions+=2;goto B6f737e;
case 0x6f737f:c.instructions+=1;goto B6f737f;
case 0x6f7384:goto L6f7384;
case 0x6f7386:c.instructions+=1;goto B6f7386;
case 0x6f7388:goto L6f7388;
case 0x6f738e:c.instructions+=2;goto B6f738e;
case 0x6f7391:c.instructions+=1;goto B6f7391;
case 0x6f7396:goto L6f7396;
case 0x6f7399:c.instructions+=1;goto B6f7399;
case 0x6f739e:goto L6f739e;
case 0x6f73a2:c.instructions+=3;goto B6f73a2;
case 0x6f73a5:c.instructions+=2;goto B6f73a5;
case 0x6f73a6:c.instructions+=1;goto B6f73a6;
case 0x6f73ab:goto L6f73ab;
case 0x6f73ac:c.instructions+=5;goto B6f73ac;
case 0x6f73ae:c.instructions+=4;goto B6f73ae;
case 0x6f73b0:c.instructions+=3;goto B6f73b0;
case 0x6f73b2:c.instructions+=2;goto B6f73b2;
case 0x6f73b4:c.instructions+=1;goto B6f73b4;
case 0x6f73ba:goto L6f73ba;
case 0x6f73bd:c.instructions+=2;goto B6f73bd;
case 0x6f73c0:c.instructions+=1;goto B6f73c0;
case 0x6f73c5:goto L6f73c5;
case 0x6f73cb:c.instructions+=3;goto B6f73cb;
case 0x6f73d2:c.instructions+=2;goto B6f73d2;
case 0x6f73d4:c.instructions+=1;goto B6f73d4;
case 0x6f73d7:goto L6f73d7;
case 0x6f73d9:c.instructions+=7;goto B6f73d9;
case 0x6f73df:c.instructions+=6;goto B6f73df;
case 0x6f73e2:c.instructions+=5;goto B6f73e2;
case 0x6f73e5:c.instructions+=4;goto B6f73e5;
case 0x6f73e6:c.instructions+=3;goto B6f73e6;
case 0x6f73eb:c.instructions+=2;goto B6f73eb;
case 0x6f73ec:c.instructions+=1;goto B6f73ec;
case 0x6f73f1:goto L6f73f1;
case 0x6f73f4:c.instructions+=3;goto B6f73f4;
case 0x6f73f6:c.instructions+=2;goto B6f73f6;
case 0x6f73f9:c.instructions+=1;goto B6f73f9;
case 0x6f73ff:goto L6f73ff;
case 0x6f7402:c.instructions+=1;goto B6f7402;
case 0x6f7408:goto L6f7408;
case 0x6f740e:c.instructions+=2;goto B6f740e;
case 0x6f7411:c.instructions+=1;goto B6f7411;
case 0x6f7416:goto L6f7416;
case 0x6f7417:c.instructions+=10;goto B6f7417;
case 0x6f7419:c.instructions+=9;goto B6f7419;
case 0x6f741a:c.instructions+=8;goto B6f741a;
case 0x6f741b:c.instructions+=7;goto B6f741b;
case 0x6f741e:c.instructions+=6;goto B6f741e;
case 0x6f741f:c.instructions+=5;goto B6f741f;
case 0x6f7421:c.instructions+=4;goto B6f7421;
case 0x6f7423:c.instructions+=3;goto B6f7423;
case 0x6f7429:c.instructions+=2;goto B6f7429;
case 0x6f742c:c.instructions+=1;goto B6f742c;
case 0x6f742e:goto L6f742e;
case 0x6f7433:goto L6f7433;
case 0x6f7436:c.instructions+=15;goto B6f7436;
case 0x6f743a:c.instructions+=14;goto B6f743a;
case 0x6f743d:c.instructions+=13;goto B6f743d;
case 0x6f7440:c.instructions+=12;goto B6f7440;
case 0x6f7441:c.instructions+=11;goto B6f7441;
case 0x6f7443:c.instructions+=10;goto B6f7443;
case 0x6f7446:c.instructions+=9;goto B6f7446;
case 0x6f7449:c.instructions+=8;goto B6f7449;
case 0x6f744c:c.instructions+=7;goto B6f744c;
case 0x6f7453:c.instructions+=6;goto B6f7453;
case 0x6f7456:c.instructions+=5;goto B6f7456;
case 0x6f7459:c.instructions+=4;goto B6f7459;
case 0x6f745c:c.instructions+=3;goto B6f745c;
case 0x6f745f:c.instructions+=2;goto B6f745f;
case 0x6f7462:c.instructions+=1;goto B6f7462;
case 0x6f7467:goto L6f7467;
case 0x6f746a:c.instructions+=6;goto B6f746a;
case 0x6f746c:c.instructions+=5;goto B6f746c;
case 0x6f746d:c.instructions+=4;goto B6f746d;
case 0x6f746e:c.instructions+=3;goto B6f746e;
case 0x6f746f:c.instructions+=2;goto B6f746f;
case 0x6f7470:c.instructions+=1;goto B6f7470;
case 0x6f7473:goto L6f7473;
case 0x6f7474:c.instructions+=5;goto B6f7474;
case 0x6f7476:c.instructions+=4;goto B6f7476;
case 0x6f7478:c.instructions+=3;goto B6f7478;
case 0x6f747a:c.instructions+=2;goto B6f747a;
case 0x6f747d:c.instructions+=1;goto B6f747d;
case 0x6f747f:goto L6f747f;
case 0x6f7482:c.instructions+=2;goto B6f7482;
case 0x6f7484:c.instructions+=1;goto B6f7484;
case 0x6f7486:goto L6f7486;
case 0x6f7489:c.instructions+=2;goto B6f7489;
case 0x6f748c:c.instructions+=1;goto B6f748c;
case 0x6f748e:goto L6f748e;
case 0x6f7491:c.instructions+=2;goto B6f7491;
case 0x6f7492:c.instructions+=1;goto B6f7492;
case 0x6f7493:goto L6f7493;
case 0x6f7495:c.instructions+=3;goto B6f7495;
case 0x6f7498:c.instructions+=2;goto B6f7498;
case 0x6f749b:c.instructions+=1;goto B6f749b;
case 0x6f74a0:goto L6f74a0;
case 0x6f74a2:c.instructions+=1;goto B6f74a2;
case 0x6f74a4:goto L6f74a4;
case 0x6f74aa:c.instructions+=2;goto B6f74aa;
case 0x6f74ab:c.instructions+=1;goto B6f74ab;
case 0x6f74ac:goto L6f74ac;
case 0x6f74ae:c.instructions+=3;goto B6f74ae;
case 0x6f74b1:c.instructions+=2;goto B6f74b1;
case 0x6f74b4:c.instructions+=1;goto B6f74b4;
case 0x6f74b9:goto L6f74b9;
case 0x6f74ba:c.instructions+=1;goto B6f74ba;
case 0x6f74bb:goto L6f74bb;
case 0x6f74bc:c.instructions+=7;goto B6f74bc;
case 0x6f74be:c.instructions+=6;goto B6f74be;
case 0x6f74bf:c.instructions+=5;goto B6f74bf;
case 0x6f74c0:c.instructions+=4;goto B6f74c0;
case 0x6f74c2:c.instructions+=3;goto B6f74c2;
case 0x6f74c3:c.instructions+=2;goto B6f74c3;
case 0x6f74c6:c.instructions+=1;goto B6f74c6;
case 0x6f74cb:goto L6f74cb;
case 0x6f74cd:c.instructions+=3;goto B6f74cd;
case 0x6f74ce:c.instructions+=2;goto B6f74ce;
case 0x6f74d1:c.instructions+=1;goto B6f74d1;
case 0x6f74d6:goto L6f74d6;
case 0x6f74da:c.instructions+=8;goto B6f74da;
case 0x6f74dd:c.instructions+=7;goto B6f74dd;
case 0x6f74e0:c.instructions+=6;goto B6f74e0;
case 0x6f74e4:c.instructions+=5;goto B6f74e4;
case 0x6f74e7:c.instructions+=4;goto B6f74e7;
case 0x6f74ed:c.instructions+=3;goto B6f74ed;
case 0x6f74ef:c.instructions+=2;goto B6f74ef;
case 0x6f74f1:c.instructions+=1;goto B6f74f1;
case 0x6f74f3:goto L6f74f3;
case 0x6f74f4:goto L6f74f4;
case 0x6f74f8:c.instructions+=6;goto B6f74f8;
case 0x6f74fb:c.instructions+=5;goto B6f74fb;
case 0x6f74fe:c.instructions+=4;goto B6f74fe;
case 0x6f7504:c.instructions+=3;goto B6f7504;
case 0x6f7506:c.instructions+=2;goto B6f7506;
case 0x6f7508:c.instructions+=1;goto B6f7508;
case 0x6f750a:goto L6f750a;
case 0x6f750d:c.instructions+=3;goto B6f750d;
case 0x6f7510:c.instructions+=2;goto B6f7510;
case 0x6f7512:c.instructions+=1;goto B6f7512;
case 0x6f7514:goto L6f7514;
case 0x6f7517:c.instructions+=1;goto B6f7517;
case 0x6f7519:goto L6f7519;
case 0x6f751b:goto L6f751b;
case 0x6f751d:c.instructions+=1;goto B6f751d;
case 0x6f751f:goto L6f751f;
case 0x6f7520:goto L6f7520;
case 0x6f7521:c.instructions+=3;goto B6f7521;
case 0x6f7524:c.instructions+=2;goto B6f7524;
case 0x6f7527:c.instructions+=1;goto B6f7527;
case 0x6f752c:goto L6f752c;
case 0x6f752f:c.instructions+=1;goto B6f752f;
case 0x6f7534:goto L6f7534;
case 0x6f7537:c.instructions+=2;goto B6f7537;
case 0x6f7538:c.instructions+=1;goto B6f7538;
case 0x6f753d:goto L6f753d;
case 0x6f753e:c.instructions+=4;goto B6f753e;
case 0x6f753f:c.instructions+=3;goto B6f753f;
case 0x6f7540:c.instructions+=2;goto B6f7540;
case 0x6f7541:c.instructions+=1;goto B6f7541;
case 0x6f7542:goto L6f7542;
case 0x6f7543:c.instructions+=7;goto B6f7543;
case 0x6f7545:c.instructions+=6;goto B6f7545;
case 0x6f7546:c.instructions+=5;goto B6f7546;
case 0x6f7547:c.instructions+=4;goto B6f7547;
case 0x6f7548:c.instructions+=3;goto B6f7548;
case 0x6f7549:c.instructions+=2;goto B6f7549;
case 0x6f754c:c.instructions+=1;goto B6f754c;
case 0x6f7551:goto L6f7551;
case 0x6f7553:c.instructions+=4;goto B6f7553;
case 0x6f7554:c.instructions+=3;goto B6f7554;
case 0x6f7557:c.instructions+=2;goto B6f7557;
case 0x6f7559:c.instructions+=1;goto B6f7559;
case 0x6f755e:goto L6f755e;
case 0x6f7561:c.instructions+=2;goto B6f7561;
case 0x6f7564:c.instructions+=1;goto B6f7564;
case 0x6f7569:goto L6f7569;
case 0x6f756b:c.instructions+=3;goto B6f756b;
case 0x6f756e:c.instructions+=2;goto B6f756e;
case 0x6f756f:c.instructions+=1;goto B6f756f;
case 0x6f7571:goto L6f7571;
case 0x6f7573:c.instructions+=1;goto B6f7573;
case 0x6f7575:goto L6f7575;
case 0x6f7579:c.instructions+=1;goto B6f7579;
case 0x6f757b:goto L6f757b;
case 0x6f757e:c.instructions+=1;goto B6f757e;
case 0x6f7580:goto L6f7580;
case 0x6f7584:c.instructions+=1;goto B6f7584;
case 0x6f7586:goto L6f7586;
case 0x6f7588:c.instructions+=1;goto B6f7588;
case 0x6f7589:goto L6f7589;
case 0x6f758b:c.instructions+=1;goto B6f758b;
case 0x6f7590:goto L6f7590;
case 0x6f7591:c.instructions+=5;goto B6f7591;
case 0x6f7593:c.instructions+=4;goto B6f7593;
case 0x6f7594:c.instructions+=3;goto B6f7594;
case 0x6f7595:c.instructions+=2;goto B6f7595;
case 0x6f7596:c.instructions+=1;goto B6f7596;
case 0x6f7597:goto L6f7597;
case 0x6f7598:c.instructions+=7;goto B6f7598;
case 0x6f759a:c.instructions+=6;goto B6f759a;
case 0x6f759b:c.instructions+=5;goto B6f759b;
case 0x6f759c:c.instructions+=4;goto B6f759c;
case 0x6f759d:c.instructions+=3;goto B6f759d;
case 0x6f759e:c.instructions+=2;goto B6f759e;
case 0x6f75a1:c.instructions+=1;goto B6f75a1;
case 0x6f75a6:goto L6f75a6;
case 0x6f75a8:c.instructions+=4;goto B6f75a8;
case 0x6f75a9:c.instructions+=3;goto B6f75a9;
case 0x6f75ac:c.instructions+=2;goto B6f75ac;
case 0x6f75ae:c.instructions+=1;goto B6f75ae;
case 0x6f75b3:goto L6f75b3;
case 0x6f75b6:c.instructions+=2;goto B6f75b6;
case 0x6f75b9:c.instructions+=1;goto B6f75b9;
case 0x6f75be:goto L6f75be;
case 0x6f75c0:c.instructions+=2;goto B6f75c0;
case 0x6f75c1:c.instructions+=1;goto B6f75c1;
case 0x6f75c3:goto L6f75c3;
case 0x6f75c7:c.instructions+=1;goto B6f75c7;
case 0x6f75c9:goto L6f75c9;
case 0x6f75cb:c.instructions+=3;goto B6f75cb;
case 0x6f75cc:c.instructions+=2;goto B6f75cc;
case 0x6f75ce:c.instructions+=1;goto B6f75ce;
case 0x6f75d1:goto L6f75d1;
case 0x6f75d3:c.instructions+=1;goto B6f75d3;
case 0x6f75d8:goto L6f75d8;
case 0x6f75d9:c.instructions+=4;goto B6f75d9;
case 0x6f75da:c.instructions+=3;goto B6f75da;
case 0x6f75db:c.instructions+=2;goto B6f75db;
case 0x6f75dc:c.instructions+=1;goto B6f75dc;
case 0x6f75dd:goto L6f75dd;
case 0x6f75de:c.instructions+=4;goto B6f75de;
case 0x6f75e0:c.instructions+=3;goto B6f75e0;
case 0x6f75e1:c.instructions+=2;goto B6f75e1;
case 0x6f75e5:c.instructions+=1;goto B6f75e5;
case 0x6f75e7:goto L6f75e7;
case 0x6f75e9:c.instructions+=3;goto B6f75e9;
case 0x6f75ea:c.instructions+=2;goto B6f75ea;
case 0x6f75eb:c.instructions+=1;goto B6f75eb;
case 0x6f75ec:goto L6f75ec;
case 0x6f75ed:c.instructions+=2;goto B6f75ed;
case 0x6f75f0:c.instructions+=1;goto B6f75f0;
case 0x6f75f5:goto L6f75f5;
case 0x6f75f7:c.instructions+=3;goto B6f75f7;
case 0x6f75fb:c.instructions+=2;goto B6f75fb;
case 0x6f75fc:c.instructions+=1;goto B6f75fc;
case 0x6f75fe:goto L6f75fe;
case 0x6f7600:c.instructions+=2;goto B6f7600;
case 0x6f7601:c.instructions+=1;goto B6f7601;
case 0x6f7603:goto L6f7603;
case 0x6f7604:c.instructions+=2;goto B6f7604;
case 0x6f7605:c.instructions+=1;goto B6f7605;
case 0x6f7608:goto L6f7608;
case 0x6f760a:c.instructions+=1;goto B6f760a;
case 0x6f760f:goto L6f760f;
case 0x6f7612:c.instructions+=2;goto B6f7612;
case 0x6f7615:c.instructions+=1;goto B6f7615;
case 0x6f761a:goto L6f761a;
case 0x6f761b:c.instructions+=6;goto B6f761b;
case 0x6f761d:c.instructions+=5;goto B6f761d;
case 0x6f761f:c.instructions+=4;goto B6f761f;
case 0x6f7622:c.instructions+=3;goto B6f7622;
case 0x6f7625:c.instructions+=2;goto B6f7625;
case 0x6f7627:c.instructions+=1;goto B6f7627;
case 0x6f762c:goto L6f762c;
case 0x6f7630:c.instructions+=1;goto B6f7630;
case 0x6f7632:goto L6f7632;
case 0x6f7634:c.instructions+=1;goto B6f7634;
case 0x6f7639:goto L6f7639;
case 0x6f763b:c.instructions+=2;goto B6f763b;
case 0x6f763c:c.instructions+=1;goto B6f763c;
case 0x6f763e:goto L6f763e;
case 0x6f7643:goto L6f7643;
case 0x6f7645:c.instructions+=1;goto B6f7645;
case 0x6f764a:goto L6f764a;
case 0x6f764b:c.instructions+=1;goto B6f764b;
case 0x6f764d:goto L6f764d;
case 0x6f7650:c.instructions+=1;goto B6f7650;
case 0x6f7655:goto L6f7655;
case 0x6f7656:c.instructions+=4;goto B6f7656;
case 0x6f7658:c.instructions+=3;goto B6f7658;
case 0x6f765a:c.instructions+=2;goto B6f765a;
case 0x6f765d:c.instructions+=1;goto B6f765d;
case 0x6f7663:goto L6f7663;
case 0x6f7666:c.instructions+=1;goto B6f7666;
case 0x6f766c:goto L6f766c;
case 0x6f766e:goto L6f766e;
case 0x6f7671:c.instructions+=1;goto B6f7671;
case 0x6f7676:goto L6f7676;
case 0x6f7677:c.instructions+=2;goto B6f7677;
case 0x6f7678:c.instructions+=1;goto B6f7678;
case 0x6f7679:goto L6f7679;
case 0x6f767a:c.instructions+=2;goto B6f767a;
case 0x6f767b:c.instructions+=1;goto B6f767b;
case 0x6f767c:goto L6f767c;
case 0x6f767d:c.instructions+=6;goto B6f767d;
case 0x6f767f:c.instructions+=5;goto B6f767f;
case 0x6f7680:c.instructions+=4;goto B6f7680;
case 0x6f7681:c.instructions+=3;goto B6f7681;
case 0x6f7682:c.instructions+=2;goto B6f7682;
case 0x6f7685:c.instructions+=1;goto B6f7685;
case 0x6f768a:goto L6f768a;
case 0x6f768c:c.instructions+=4;goto B6f768c;
case 0x6f768d:c.instructions+=3;goto B6f768d;
case 0x6f7690:c.instructions+=2;goto B6f7690;
case 0x6f7692:c.instructions+=1;goto B6f7692;
case 0x6f7697:goto L6f7697;
case 0x6f7699:c.instructions+=3;goto B6f7699;
case 0x6f769c:c.instructions+=2;goto B6f769c;
case 0x6f769f:c.instructions+=1;goto B6f769f;
case 0x6f76a4:goto L6f76a4;
case 0x6f76a6:c.instructions+=2;goto B6f76a6;
case 0x6f76a8:c.instructions+=1;goto B6f76a8;
case 0x6f76ad:goto L6f76ad;
case 0x6f76af:c.instructions+=2;goto B6f76af;
case 0x6f76b1:c.instructions+=1;goto B6f76b1;
case 0x6f76b4:goto L6f76b4;
case 0x6f76ba:c.instructions+=5;goto B6f76ba;
case 0x6f76be:c.instructions+=4;goto B6f76be;
case 0x6f76c1:c.instructions+=3;goto B6f76c1;
case 0x6f76c3:c.instructions+=2;goto B6f76c3;
case 0x6f76c5:c.instructions+=1;goto B6f76c5;
case 0x6f76ca:goto L6f76ca;
case 0x6f76cb:c.instructions+=3;goto B6f76cb;
case 0x6f76d1:c.instructions+=2;goto B6f76d1;
case 0x6f76d3:c.instructions+=1;goto B6f76d3;
case 0x6f76d8:goto L6f76d8;
case 0x6f76db:c.instructions+=1;goto B6f76db;
case 0x6f76e0:goto L6f76e0;
case 0x6f76e2:c.instructions+=6;goto B6f76e2;
case 0x6f76e3:c.instructions+=5;goto B6f76e3;
case 0x6f76e4:c.instructions+=4;goto B6f76e4;
case 0x6f76e6:c.instructions+=3;goto B6f76e6;
case 0x6f76e7:c.instructions+=2;goto B6f76e7;
case 0x6f76e8:c.instructions+=1;goto B6f76e8;
case 0x6f76e9:goto L6f76e9;
case 0x6f76ea:c.instructions+=3;goto B6f76ea;
case 0x6f76ec:c.instructions+=2;goto B6f76ec;
case 0x6f76ed:c.instructions+=1;goto B6f76ed;
case 0x6f76f2:goto L6f76f2;
case 0x6f76f3:c.instructions+=7;goto B6f76f3;
case 0x6f76f5:c.instructions+=6;goto B6f76f5;
case 0x6f76f6:c.instructions+=5;goto B6f76f6;
case 0x6f76f7:c.instructions+=4;goto B6f76f7;
case 0x6f76f8:c.instructions+=3;goto B6f76f8;
case 0x6f76f9:c.instructions+=2;goto B6f76f9;
case 0x6f76fc:c.instructions+=1;goto B6f76fc;
case 0x6f7701:goto L6f7701;
case 0x6f7703:c.instructions+=4;goto B6f7703;
case 0x6f7704:c.instructions+=3;goto B6f7704;
case 0x6f7707:c.instructions+=2;goto B6f7707;
case 0x6f7709:c.instructions+=1;goto B6f7709;
case 0x6f770e:goto L6f770e;
case 0x6f7711:c.instructions+=2;goto B6f7711;
case 0x6f7714:c.instructions+=1;goto B6f7714;
case 0x6f7719:goto L6f7719;
case 0x6f771d:c.instructions+=2;goto B6f771d;
case 0x6f771e:c.instructions+=1;goto B6f771e;
case 0x6f7720:goto L6f7720;
case 0x6f7723:c.instructions+=2;goto B6f7723;
case 0x6f7726:c.instructions+=1;goto B6f7726;
case 0x6f7728:goto L6f7728;
case 0x6f772b:c.instructions+=4;goto B6f772b;
case 0x6f772f:c.instructions+=3;goto B6f772f;
case 0x6f7730:c.instructions+=2;goto B6f7730;
case 0x6f7733:c.instructions+=1;goto B6f7733;
case 0x6f7736:goto L6f7736;
case 0x6f7739:goto L6f7739;
case 0x6f773b:c.instructions+=1;goto B6f773b;
case 0x6f7740:goto L6f7740;
case 0x6f7741:c.instructions+=4;goto B6f7741;
case 0x6f7742:c.instructions+=3;goto B6f7742;
case 0x6f7743:c.instructions+=2;goto B6f7743;
case 0x6f7744:c.instructions+=1;goto B6f7744;
case 0x6f7745:goto L6f7745;
case 0x6f7746:c.instructions+=4;goto B6f7746;
case 0x6f7748:c.instructions+=3;goto B6f7748;
case 0x6f7749:c.instructions+=2;goto B6f7749;
case 0x6f774c:c.instructions+=1;goto B6f774c;
case 0x6f7751:goto L6f7751;
case 0x6f7753:c.instructions+=3;goto B6f7753;
case 0x6f7755:c.instructions+=2;goto B6f7755;
case 0x6f7756:c.instructions+=1;goto B6f7756;
case 0x6f7758:goto L6f7758;
case 0x6f7759:c.instructions+=3;goto B6f7759;
case 0x6f775c:c.instructions+=2;goto B6f775c;
case 0x6f775e:c.instructions+=1;goto B6f775e;
case 0x6f7763:goto L6f7763;
case 0x6f7765:c.instructions+=3;goto B6f7765;
case 0x6f7768:c.instructions+=2;goto B6f7768;
case 0x6f776b:c.instructions+=1;goto B6f776b;
case 0x6f7770:goto L6f7770;
case 0x6f7772:c.instructions+=2;goto B6f7772;
case 0x6f7774:c.instructions+=1;goto B6f7774;
case 0x6f7779:goto L6f7779;
case 0x6f777b:c.instructions+=2;goto B6f777b;
case 0x6f777c:c.instructions+=1;goto B6f777c;
case 0x6f777e:goto L6f777e;
case 0x6f7781:c.instructions+=5;goto B6f7781;
case 0x6f7784:c.instructions+=4;goto B6f7784;
case 0x6f7786:c.instructions+=3;goto B6f7786;
case 0x6f7787:c.instructions+=2;goto B6f7787;
case 0x6f7788:c.instructions+=1;goto B6f7788;
case 0x6f778d:goto L6f778d;
case 0x6f778e:c.instructions+=2;goto B6f778e;
case 0x6f778f:c.instructions+=1;goto B6f778f;
case 0x6f7790:goto L6f7790;
case 0x6f7791:c.instructions+=3;goto B6f7791;
case 0x6f7793:c.instructions+=2;goto B6f7793;
case 0x6f7795:c.instructions+=1;goto B6f7795;
case 0x6f779a:goto L6f779a;
case 0x6f779c:c.instructions+=2;goto B6f779c;
case 0x6f779d:c.instructions+=1;goto B6f779d;
case 0x6f779f:goto L6f779f;
case 0x6f77a2:c.instructions+=6;goto B6f77a2;
case 0x6f77a5:c.instructions+=5;goto B6f77a5;
case 0x6f77a7:c.instructions+=4;goto B6f77a7;
case 0x6f77aa:c.instructions+=3;goto B6f77aa;
case 0x6f77ad:c.instructions+=2;goto B6f77ad;
case 0x6f77ae:c.instructions+=1;goto B6f77ae;
case 0x6f77b3:goto L6f77b3;
case 0x6f77b5:goto L6f77b5;
case 0x6f77b7:goto L6f77b7;
case 0x6f77ba:c.instructions+=2;goto B6f77ba;
case 0x6f77bb:c.instructions+=1;goto B6f77bb;
case 0x6f77bc:goto L6f77bc;
case 0x6f77bd:c.instructions+=3;goto B6f77bd;
case 0x6f77bf:c.instructions+=2;goto B6f77bf;
case 0x6f77c1:c.instructions+=1;goto B6f77c1;
case 0x6f77c6:goto L6f77c6;
case 0x6f77c8:c.instructions+=2;goto B6f77c8;
case 0x6f77c9:c.instructions+=1;goto B6f77c9;
case 0x6f77cb:goto L6f77cb;
case 0x6f77ce:c.instructions+=9;goto B6f77ce;
case 0x6f77d1:c.instructions+=8;goto B6f77d1;
case 0x6f77d3:c.instructions+=7;goto B6f77d3;
case 0x6f77d6:c.instructions+=6;goto B6f77d6;
case 0x6f77d9:c.instructions+=5;goto B6f77d9;
case 0x6f77dc:c.instructions+=4;goto B6f77dc;
case 0x6f77df:c.instructions+=3;goto B6f77df;
case 0x6f77e2:c.instructions+=2;goto B6f77e2;
case 0x6f77e3:c.instructions+=1;goto B6f77e3;
case 0x6f77e8:goto L6f77e8;
case 0x6f77ea:goto L6f77ea;
case 0x6f77ec:goto L6f77ec;
case 0x6f77ef:c.instructions+=2;goto B6f77ef;
case 0x6f77f0:c.instructions+=1;goto B6f77f0;
case 0x6f77f1:goto L6f77f1;
case 0x6f77f2:c.instructions+=3;goto B6f77f2;
case 0x6f77f4:c.instructions+=2;goto B6f77f4;
case 0x6f77f6:c.instructions+=1;goto B6f77f6;
case 0x6f77fb:goto L6f77fb;
case 0x6f77fd:c.instructions+=2;goto B6f77fd;
case 0x6f77fe:c.instructions+=1;goto B6f77fe;
case 0x6f7800:goto L6f7800;
case 0x6f7803:c.instructions+=11;goto B6f7803;
case 0x6f7806:c.instructions+=10;goto B6f7806;
case 0x6f7808:c.instructions+=9;goto B6f7808;
case 0x6f780b:c.instructions+=8;goto B6f780b;
case 0x6f780e:c.instructions+=7;goto B6f780e;
case 0x6f7811:c.instructions+=6;goto B6f7811;
case 0x6f7814:c.instructions+=5;goto B6f7814;
case 0x6f7817:c.instructions+=4;goto B6f7817;
case 0x6f781a:c.instructions+=3;goto B6f781a;
case 0x6f781d:c.instructions+=2;goto B6f781d;
case 0x6f781e:c.instructions+=1;goto B6f781e;
case 0x6f7823:goto L6f7823;
case 0x6f7825:goto L6f7825;
case 0x6f7827:goto L6f7827;
case 0x6f782a:c.instructions+=2;goto B6f782a;
case 0x6f782b:c.instructions+=1;goto B6f782b;
case 0x6f782c:goto L6f782c;
case 0x6f782d:c.instructions+=3;goto B6f782d;
case 0x6f782f:c.instructions+=2;goto B6f782f;
case 0x6f7831:c.instructions+=1;goto B6f7831;
case 0x6f7836:goto L6f7836;
case 0x6f7838:c.instructions+=2;goto B6f7838;
case 0x6f7839:c.instructions+=1;goto B6f7839;
case 0x6f783b:goto L6f783b;
case 0x6f783e:c.instructions+=9;goto B6f783e;
case 0x6f7841:c.instructions+=8;goto B6f7841;
case 0x6f7843:c.instructions+=7;goto B6f7843;
case 0x6f7846:c.instructions+=6;goto B6f7846;
case 0x6f7849:c.instructions+=5;goto B6f7849;
case 0x6f784c:c.instructions+=4;goto B6f784c;
case 0x6f784f:c.instructions+=3;goto B6f784f;
case 0x6f7852:c.instructions+=2;goto B6f7852;
case 0x6f7853:c.instructions+=1;goto B6f7853;
case 0x6f7858:goto L6f7858;
case 0x6f785a:goto L6f785a;
case 0x6f785c:goto L6f785c;
case 0x6f785f:c.instructions+=2;goto B6f785f;
case 0x6f7860:c.instructions+=1;goto B6f7860;
case 0x6f7861:goto L6f7861;
case 0x6f7862:c.instructions+=3;goto B6f7862;
case 0x6f7864:c.instructions+=2;goto B6f7864;
case 0x6f7866:c.instructions+=1;goto B6f7866;
case 0x6f786b:goto L6f786b;
case 0x6f786d:c.instructions+=2;goto B6f786d;
case 0x6f786e:c.instructions+=1;goto B6f786e;
case 0x6f7870:goto L6f7870;
case 0x6f7873:c.instructions+=6;goto B6f7873;
case 0x6f7876:c.instructions+=5;goto B6f7876;
case 0x6f7878:c.instructions+=4;goto B6f7878;
case 0x6f787b:c.instructions+=3;goto B6f787b;
case 0x6f787e:c.instructions+=2;goto B6f787e;
case 0x6f787f:c.instructions+=1;goto B6f787f;
case 0x6f7884:goto L6f7884;
case 0x6f7886:goto L6f7886;
case 0x6f7888:goto L6f7888;
case 0x6f788b:c.instructions+=2;goto B6f788b;
case 0x6f788c:c.instructions+=1;goto B6f788c;
case 0x6f788d:goto L6f788d;
case 0x6f788e:c.instructions+=7;goto B6f788e;
case 0x6f7890:c.instructions+=6;goto B6f7890;
case 0x6f7891:c.instructions+=5;goto B6f7891;
case 0x6f7892:c.instructions+=4;goto B6f7892;
case 0x6f7895:c.instructions+=3;goto B6f7895;
case 0x6f7899:c.instructions+=2;goto B6f7899;
case 0x6f789a:c.instructions+=1;goto B6f789a;
case 0x6f789c:goto L6f789c;
case 0x6f78a1:goto L6f78a1;
case 0x6f78a4:c.instructions+=2;goto B6f78a4;
case 0x6f78a6:c.instructions+=1;goto B6f78a6;
case 0x6f78ab:goto L6f78ab;
case 0x6f78ae:c.instructions+=5;goto B6f78ae;
case 0x6f78b1:c.instructions+=4;goto B6f78b1;
case 0x6f78b4:c.instructions+=3;goto B6f78b4;
case 0x6f78b5:c.instructions+=2;goto B6f78b5;
case 0x6f78b8:c.instructions+=1;goto B6f78b8;
case 0x6f78bb:goto L6f78bb;
case 0x6f78be:c.instructions+=4;goto B6f78be;
case 0x6f78c1:c.instructions+=3;goto B6f78c1;
case 0x6f78c2:c.instructions+=2;goto B6f78c2;
case 0x6f78c5:c.instructions+=1;goto B6f78c5;
case 0x6f78ca:goto L6f78ca;
case 0x6f78cd:c.instructions+=2;goto B6f78cd;
case 0x6f78cf:c.instructions+=1;goto B6f78cf;
case 0x6f78d4:goto L6f78d4;
case 0x6f78d7:c.instructions+=5;goto B6f78d7;
case 0x6f78d8:c.instructions+=4;goto B6f78d8;
case 0x6f78d9:c.instructions+=3;goto B6f78d9;
case 0x6f78da:c.instructions+=2;goto B6f78da;
case 0x6f78db:c.instructions+=1;goto B6f78db;
case 0x6f78dc:goto L6f78dc;
case 0x6f78dd:c.instructions+=7;goto B6f78dd;
case 0x6f78df:c.instructions+=6;goto B6f78df;
case 0x6f78e2:c.instructions+=5;goto B6f78e2;
case 0x6f78e3:c.instructions+=4;goto B6f78e3;
case 0x6f78e6:c.instructions+=3;goto B6f78e6;
case 0x6f78e8:c.instructions+=2;goto B6f78e8;
case 0x6f78e9:c.instructions+=1;goto B6f78e9;
case 0x6f78ee:goto L6f78ee;
case 0x6f78f0:c.instructions+=3;goto B6f78f0;
case 0x6f78f1:c.instructions+=2;goto B6f78f1;
case 0x6f78f2:c.instructions+=1;goto B6f78f2;
case 0x6f78f4:goto L6f78f4;
case 0x6f78f7:c.instructions+=3;goto B6f78f7;
case 0x6f78f9:c.instructions+=2;goto B6f78f9;
case 0x6f78fa:c.instructions+=1;goto B6f78fa;
case 0x6f78ff:goto L6f78ff;
case 0x6f7901:c.instructions+=2;goto B6f7901;
case 0x6f7902:c.instructions+=1;goto B6f7902;
case 0x6f7907:goto L6f7907;
case 0x6f7909:c.instructions+=4;goto B6f7909;
case 0x6f790a:c.instructions+=3;goto B6f790a;
case 0x6f790b:c.instructions+=2;goto B6f790b;
case 0x6f790c:c.instructions+=1;goto B6f790c;
case 0x6f790e:goto L6f790e;
case 0x6f7910:c.instructions+=2;goto B6f7910;
case 0x6f7912:c.instructions+=1;goto B6f7912;
case 0x6f7914:goto L6f7914;
case 0x6f7916:c.instructions+=1;goto B6f7916;
case 0x6f7918:goto L6f7918;
case 0x6f791d:c.instructions+=2;goto B6f791d;
case 0x6f7923:c.instructions+=1;goto B6f7923;
case 0x6f7925:goto L6f7925;
case 0x6f7928:c.instructions+=3;goto B6f7928;
case 0x6f792a:c.instructions+=2;goto B6f792a;
case 0x6f792b:c.instructions+=1;goto B6f792b;
case 0x6f7930:goto L6f7930;
case 0x6f7935:c.instructions+=4;goto B6f7935;
case 0x6f793b:c.instructions+=3;goto B6f793b;
case 0x6f793d:c.instructions+=2;goto B6f793d;
case 0x6f793f:c.instructions+=1;goto B6f793f;
case 0x6f7944:goto L6f7944;
case 0x6f794a:c.instructions+=6;goto B6f794a;
case 0x6f7950:c.instructions+=5;goto B6f7950;
case 0x6f7952:c.instructions+=4;goto B6f7952;
case 0x6f7954:c.instructions+=3;goto B6f7954;
case 0x6f7955:c.instructions+=2;goto B6f7955;
case 0x6f7956:c.instructions+=1;goto B6f7956;
case 0x6f7957:goto L6f7957;
case 0x6f795a:c.instructions+=2;goto B6f795a;
case 0x6f795b:c.instructions+=1;goto B6f795b;
case 0x6f7960:goto L6f7960;
case 0x6f7965:c.instructions+=3;goto B6f7965;
case 0x6f7968:c.instructions+=2;goto B6f7968;
case 0x6f796b:c.instructions+=1;goto B6f796b;
case 0x6f796d:goto L6f796d;
case 0x6f7973:c.instructions+=4;goto B6f7973;
case 0x6f7976:c.instructions+=3;goto B6f7976;
case 0x6f7977:c.instructions+=2;goto B6f7977;
case 0x6f7979:c.instructions+=1;goto B6f7979;
case 0x6f797c:goto L6f797c;
case 0x6f797d:c.instructions+=1;goto B6f797d;
case 0x6f7982:goto L6f7982;
case 0x6f7984:c.instructions+=3;goto B6f7984;
case 0x6f7985:c.instructions+=2;goto B6f7985;
case 0x6f7986:c.instructions+=1;goto B6f7986;
case 0x6f7988:goto L6f7988;
case 0x6f798a:goto L6f798a;
case 0x6f798c:c.instructions+=1;goto B6f798c;
case 0x6f798e:goto L6f798e;
case 0x6f7990:goto L6f7990;
case 0x6f7991:c.instructions+=2;goto B6f7991;
case 0x6f7992:c.instructions+=1;goto B6f7992;
case 0x6f7993:goto L6f7993;
case 0x6f7995:c.instructions+=1;goto B6f7995;
case 0x6f7997:goto L6f7997;
case 0x6f7998:c.instructions+=3;goto B6f7998;
case 0x6f799a:c.instructions+=2;goto B6f799a;
case 0x6f799d:c.instructions+=1;goto B6f799d;
case 0x6f79a2:goto L6f79a2;
case 0x6f79a3:c.instructions+=4;goto B6f79a3;
case 0x6f79a9:c.instructions+=3;goto B6f79a9;
case 0x6f79ab:c.instructions+=2;goto B6f79ab;
case 0x6f79ac:c.instructions+=1;goto B6f79ac;
case 0x6f79af:goto L6f79af;
case 0x6f79b0:c.instructions+=10;goto B6f79b0;
case 0x6f79b2:c.instructions+=9;goto B6f79b2;
case 0x6f79b8:c.instructions+=8;goto B6f79b8;
case 0x6f79bc:c.instructions+=7;goto B6f79bc;
case 0x6f79bd:c.instructions+=6;goto B6f79bd;
case 0x6f79be:c.instructions+=5;goto B6f79be;
case 0x6f79c0:c.instructions+=4;goto B6f79c0;
case 0x6f79c5:c.instructions+=3;goto B6f79c5;
case 0x6f79cb:c.instructions+=2;goto B6f79cb;
case 0x6f79cc:c.instructions+=1;goto B6f79cc;
case 0x6f79ce:goto L6f79ce;
case 0x6f79d0:c.instructions+=2;goto B6f79d0;
case 0x6f79d6:c.instructions+=1;goto B6f79d6;
case 0x6f79dc:goto L6f79dc;
case 0x6f79e1:c.instructions+=4;goto B6f79e1;
case 0x6f79e7:c.instructions+=3;goto B6f79e7;
case 0x6f79ea:c.instructions+=2;goto B6f79ea;
case 0x6f79ec:c.instructions+=1;goto B6f79ec;
case 0x6f79f2:goto L6f79f2;
case 0x6f79f3:c.instructions+=1;goto B6f79f3;
case 0x6f79f8:goto L6f79f8;
case 0x6f79fa:c.instructions+=3;goto B6f79fa;
case 0x6f79fe:c.instructions+=2;goto B6f79fe;
case 0x6f79ff:c.instructions+=1;goto B6f79ff;
case 0x6f7a01:goto L6f7a01;
case 0x6f7a06:goto L6f7a06;
case 0x6f7a09:c.instructions+=5;goto B6f7a09;
case 0x6f7a0f:c.instructions+=4;goto B6f7a0f;
case 0x6f7a10:c.instructions+=3;goto B6f7a10;
case 0x6f7a15:c.instructions+=2;goto B6f7a15;
case 0x6f7a16:c.instructions+=1;goto B6f7a16;
case 0x6f7a1b:goto L6f7a1b;
case 0x6f7a21:c.instructions+=8;goto B6f7a21;
case 0x6f7a23:c.instructions+=7;goto B6f7a23;
case 0x6f7a26:c.instructions+=6;goto B6f7a26;
case 0x6f7a29:c.instructions+=5;goto B6f7a29;
case 0x6f7a2a:c.instructions+=4;goto B6f7a2a;
case 0x6f7a2d:c.instructions+=3;goto B6f7a2d;
case 0x6f7a33:c.instructions+=2;goto B6f7a33;
case 0x6f7a34:c.instructions+=1;goto B6f7a34;
case 0x6f7a37:goto L6f7a37;
case 0x6f7a39:c.instructions+=2;goto B6f7a39;
case 0x6f7a3c:c.instructions+=1;goto B6f7a3c;
case 0x6f7a3e:goto L6f7a3e;
case 0x6f7a3f:c.instructions+=2;goto B6f7a3f;
case 0x6f7a45:c.instructions+=1;goto B6f7a45;
case 0x6f7a47:goto L6f7a47;
case 0x6f7a49:goto L6f7a49;
case 0x6f7a4f:c.instructions+=6;goto B6f7a4f;
case 0x6f7a51:c.instructions+=5;goto B6f7a51;
case 0x6f7a54:c.instructions+=4;goto B6f7a54;
case 0x6f7a55:c.instructions+=3;goto B6f7a55;
case 0x6f7a58:c.instructions+=2;goto B6f7a58;
case 0x6f7a5b:c.instructions+=1;goto B6f7a5b;
case 0x6f7a5e:goto L6f7a5e;
case 0x6f7a60:goto L6f7a60;
case 0x6f7a63:c.instructions+=1;goto B6f7a63;
case 0x6f7a65:goto L6f7a65;
case 0x6f7a69:c.instructions+=1;goto B6f7a69;
case 0x6f7a6b:goto L6f7a6b;
case 0x6f7a71:c.instructions+=3;goto B6f7a71;
case 0x6f7a73:c.instructions+=2;goto B6f7a73;
case 0x6f7a74:c.instructions+=1;goto B6f7a74;
case 0x6f7a77:goto L6f7a77;
case 0x6f7a79:c.instructions+=2;goto B6f7a79;
case 0x6f7a7a:c.instructions+=1;goto B6f7a7a;
case 0x6f7a7c:goto L6f7a7c;
case 0x6f7a81:goto L6f7a81;
case 0x6f7a83:c.instructions+=6;goto B6f7a83;
case 0x6f7a86:c.instructions+=5;goto B6f7a86;
case 0x6f7a89:c.instructions+=4;goto B6f7a89;
case 0x6f7a8f:c.instructions+=3;goto B6f7a8f;
case 0x6f7a91:c.instructions+=2;goto B6f7a91;
case 0x6f7a92:c.instructions+=1;goto B6f7a92;
case 0x6f7a95:goto L6f7a95;
case 0x6f7a98:c.instructions+=5;goto B6f7a98;
case 0x6f7a9b:c.instructions+=4;goto B6f7a9b;
case 0x6f7a9e:c.instructions+=3;goto B6f7a9e;
case 0x6f7aa1:c.instructions+=2;goto B6f7aa1;
case 0x6f7aa4:c.instructions+=1;goto B6f7aa4;
case 0x6f7aa6:goto L6f7aa6;
case 0x6f7aa9:goto L6f7aa9;
case 0x6f7aab:c.instructions+=1;goto B6f7aab;
case 0x6f7aad:goto L6f7aad;
case 0x6f7ab0:goto L6f7ab0;
case 0x6f7ab1:c.instructions+=4;goto B6f7ab1;
case 0x6f7ab2:c.instructions+=3;goto B6f7ab2;
case 0x6f7ab3:c.instructions+=2;goto B6f7ab3;
case 0x6f7ab4:c.instructions+=1;goto B6f7ab4;
case 0x6f7ab5:goto L6f7ab5;
case 0x6f7ab6:c.instructions+=5;goto B6f7ab6;
case 0x6f7ab7:c.instructions+=4;goto B6f7ab7;
case 0x6f7ab9:c.instructions+=3;goto B6f7ab9;
case 0x6f7abb:c.instructions+=2;goto B6f7abb;
case 0x6f7ac1:c.instructions+=1;goto B6f7ac1;
case 0x6f7ac3:goto L6f7ac3;
case 0x6f7ac4:c.instructions+=1;goto B6f7ac4;
case 0x6f7ac9:goto L6f7ac9;
case 0x6f7aca:c.instructions+=3;goto B6f7aca;
case 0x6f7ad0:c.instructions+=2;goto B6f7ad0;
case 0x6f7ad1:c.instructions+=1;goto B6f7ad1;
case 0x6f7ad3:goto L6f7ad3;
case 0x6f7ad9:c.instructions+=2;goto B6f7ad9;
case 0x6f7adc:c.instructions+=1;goto B6f7adc;
case 0x6f7ae1:goto L6f7ae1;
case 0x6f7ae7:c.instructions+=2;goto B6f7ae7;
case 0x6f7aea:c.instructions+=1;goto B6f7aea;
case 0x6f7aef:goto L6f7aef;
case 0x6f7af5:c.instructions+=2;goto B6f7af5;
case 0x6f7af8:c.instructions+=1;goto B6f7af8;
case 0x6f7afd:goto L6f7afd;
case 0x6f7b03:c.instructions+=2;goto B6f7b03;
case 0x6f7b04:c.instructions+=1;goto B6f7b04;
case 0x6f7b09:goto L6f7b09;
case 0x6f7b0e:c.instructions+=3;goto B6f7b0e;
case 0x6f7b10:c.instructions+=2;goto B6f7b10;
case 0x6f7b16:c.instructions+=1;goto B6f7b16;
case 0x6f7b18:goto L6f7b18;
case 0x6f7b1e:c.instructions+=4;goto B6f7b1e;
case 0x6f7b20:c.instructions+=3;goto B6f7b20;
case 0x6f7b21:c.instructions+=2;goto B6f7b21;
case 0x6f7b22:c.instructions+=1;goto B6f7b22;
case 0x6f7b25:goto L6f7b25;
case 0x6f7b2b:goto L6f7b2b;
case 0x6f7b2c:c.instructions+=3;goto B6f7b2c;
case 0x6f7b32:c.instructions+=2;goto B6f7b32;
case 0x6f7b33:c.instructions+=1;goto B6f7b33;
case 0x6f7b34:goto L6f7b34;
case 0x6f7b35:c.instructions+=4;goto B6f7b35;
case 0x6f7b37:c.instructions+=3;goto B6f7b37;
case 0x6f7b38:c.instructions+=2;goto B6f7b38;
case 0x6f7b3a:c.instructions+=1;goto B6f7b3a;
case 0x6f7b3f:goto L6f7b3f;
case 0x6f7b41:c.instructions+=3;goto B6f7b41;
case 0x6f7b43:c.instructions+=2;goto B6f7b43;
case 0x6f7b44:c.instructions+=1;goto B6f7b44;
case 0x6f7b46:goto L6f7b46;
case 0x6f7b49:c.instructions+=1;goto B6f7b49;
case 0x6f7b4e:goto L6f7b4e;
case 0x6f7b4f:c.instructions+=6;goto B6f7b4f;
case 0x6f7b50:c.instructions+=5;goto B6f7b50;
case 0x6f7b53:c.instructions+=4;goto B6f7b53;
case 0x6f7b55:c.instructions+=3;goto B6f7b55;
case 0x6f7b58:c.instructions+=2;goto B6f7b58;
case 0x6f7b5b:c.instructions+=1;goto B6f7b5b;
case 0x6f7b60:goto L6f7b60;
case 0x6f7b62:goto L6f7b62;
case 0x6f7b64:goto L6f7b64;
case 0x6f7b67:c.instructions+=3;goto B6f7b67;
case 0x6f7b68:c.instructions+=2;goto B6f7b68;
case 0x6f7b69:c.instructions+=1;goto B6f7b69;
case 0x6f7b6a:goto L6f7b6a;
case 0x6f7b6b:c.instructions+=8;goto B6f7b6b;
case 0x6f7b6d:c.instructions+=7;goto B6f7b6d;
case 0x6f7b73:c.instructions+=6;goto B6f7b73;
case 0x6f7b74:c.instructions+=5;goto B6f7b74;
case 0x6f7b75:c.instructions+=4;goto B6f7b75;
case 0x6f7b78:c.instructions+=3;goto B6f7b78;
case 0x6f7b7a:c.instructions+=2;goto B6f7b7a;
case 0x6f7b7b:c.instructions+=1;goto B6f7b7b;
case 0x6f7b80:goto L6f7b80;
case 0x6f7b82:c.instructions+=3;goto B6f7b82;
case 0x6f7b83:c.instructions+=2;goto B6f7b83;
case 0x6f7b84:c.instructions+=1;goto B6f7b84;
case 0x6f7b86:goto L6f7b86;
case 0x6f7b8b:c.instructions+=3;goto B6f7b8b;
case 0x6f7b91:c.instructions+=2;goto B6f7b91;
case 0x6f7b93:c.instructions+=1;goto B6f7b93;
case 0x6f7b98:goto L6f7b98;
case 0x6f7b9a:c.instructions+=4;goto B6f7b9a;
case 0x6f7b9b:c.instructions+=3;goto B6f7b9b;
case 0x6f7ba1:c.instructions+=2;goto B6f7ba1;
case 0x6f7ba3:c.instructions+=1;goto B6f7ba3;
case 0x6f7ba6:goto L6f7ba6;
case 0x6f7bac:goto L6f7bac;
case 0x6f7bae:c.instructions+=5;goto B6f7bae;
case 0x6f7baf:c.instructions+=4;goto B6f7baf;
case 0x6f7bb1:c.instructions+=3;goto B6f7bb1;
case 0x6f7bb2:c.instructions+=2;goto B6f7bb2;
case 0x6f7bb4:c.instructions+=1;goto B6f7bb4;
case 0x6f7bb6:goto L6f7bb6;
case 0x6f7bb8:c.instructions+=1;goto B6f7bb8;
case 0x6f7bba:goto L6f7bba;
case 0x6f7bbc:c.instructions+=3;goto B6f7bbc;
case 0x6f7bbd:c.instructions+=2;goto B6f7bbd;
case 0x6f7bbf:c.instructions+=1;goto B6f7bbf;
case 0x6f7bc1:goto L6f7bc1;
case 0x6f7bc2:c.instructions+=3;goto B6f7bc2;
case 0x6f7bc8:c.instructions+=2;goto B6f7bc8;
case 0x6f7bca:c.instructions+=1;goto B6f7bca;
case 0x6f7bcb:goto L6f7bcb;
case 0x6f7bce:c.instructions+=3;goto B6f7bce;
case 0x6f7bcf:c.instructions+=2;goto B6f7bcf;
case 0x6f7bd1:c.instructions+=1;goto B6f7bd1;
case 0x6f7bd3:goto L6f7bd3;
case 0x6f7bd5:c.instructions+=2;goto B6f7bd5;
case 0x6f7bd8:c.instructions+=1;goto B6f7bd8;
case 0x6f7bda:goto L6f7bda;
case 0x6f7bdc:goto L6f7bdc;
case 0x6f7bde:c.instructions+=1;goto B6f7bde;
case 0x6f7be1:goto L6f7be1;
case 0x6f7be3:goto L6f7be3;
case 0x6f7be9:c.instructions+=2;goto B6f7be9;
case 0x6f7bea:c.instructions+=1;goto B6f7bea;
case 0x6f7bec:goto L6f7bec;
case 0x6f7bed:c.instructions+=1;goto B6f7bed;
case 0x6f7bf2:goto L6f7bf2;
case 0x6f7bf3:c.instructions+=1;goto B6f7bf3;
case 0x6f7bf5:goto L6f7bf5;
case 0x6f7bf7:c.instructions+=1;goto B6f7bf7;
case 0x6f7bfc:goto L6f7bfc;
case 0x6f7bfe:c.instructions+=2;goto B6f7bfe;
case 0x6f7bff:c.instructions+=1;goto B6f7bff;
case 0x6f7c01:goto L6f7c01;
case 0x6f7c02:c.instructions+=5;goto B6f7c02;
case 0x6f7c05:c.instructions+=4;goto B6f7c05;
case 0x6f7c07:c.instructions+=3;goto B6f7c07;
case 0x6f7c0a:c.instructions+=2;goto B6f7c0a;
case 0x6f7c0b:c.instructions+=1;goto B6f7c0b;
case 0x6f7c10:goto L6f7c10;
case 0x6f7c12:goto L6f7c12;
case 0x6f7c14:goto L6f7c14;
case 0x6f7c17:c.instructions+=4;goto B6f7c17;
case 0x6f7c18:c.instructions+=3;goto B6f7c18;
case 0x6f7c19:c.instructions+=2;goto B6f7c19;
case 0x6f7c1a:c.instructions+=1;goto B6f7c1a;
case 0x6f7c1b:goto L6f7c1b;
case 0x6f7c1c:c.instructions+=4;goto B6f7c1c;
case 0x6f7c1e:c.instructions+=3;goto B6f7c1e;
case 0x6f7c1f:c.instructions+=2;goto B6f7c1f;
case 0x6f7c21:c.instructions+=1;goto B6f7c21;
case 0x6f7c26:goto L6f7c26;
case 0x6f7c28:c.instructions+=3;goto B6f7c28;
case 0x6f7c2a:c.instructions+=2;goto B6f7c2a;
case 0x6f7c2b:c.instructions+=1;goto B6f7c2b;
case 0x6f7c2d:goto L6f7c2d;
case 0x6f7c30:c.instructions+=1;goto B6f7c30;
case 0x6f7c35:goto L6f7c35;
case 0x6f7c36:c.instructions+=7;goto B6f7c36;
case 0x6f7c37:c.instructions+=6;goto B6f7c37;
case 0x6f7c3a:c.instructions+=5;goto B6f7c3a;
case 0x6f7c3c:c.instructions+=4;goto B6f7c3c;
case 0x6f7c3f:c.instructions+=3;goto B6f7c3f;
case 0x6f7c42:c.instructions+=2;goto B6f7c42;
case 0x6f7c45:c.instructions+=1;goto B6f7c45;
case 0x6f7c4a:goto L6f7c4a;
case 0x6f7c4c:goto L6f7c4c;
case 0x6f7c4e:goto L6f7c4e;
case 0x6f7c51:c.instructions+=3;goto B6f7c51;
case 0x6f7c52:c.instructions+=2;goto B6f7c52;
case 0x6f7c53:c.instructions+=1;goto B6f7c53;
case 0x6f7c54:goto L6f7c54;
case 0x6f7c55:c.instructions+=4;goto B6f7c55;
case 0x6f7c57:c.instructions+=3;goto B6f7c57;
case 0x6f7c58:c.instructions+=2;goto B6f7c58;
case 0x6f7c5b:c.instructions+=1;goto B6f7c5b;
case 0x6f7c60:goto L6f7c60;
case 0x6f7c63:c.instructions+=4;goto B6f7c63;
case 0x6f7c66:c.instructions+=3;goto B6f7c66;
case 0x6f7c67:c.instructions+=2;goto B6f7c67;
case 0x6f7c6a:c.instructions+=1;goto B6f7c6a;
case 0x6f7c6f:goto L6f7c6f;
case 0x6f7c71:c.instructions+=3;goto B6f7c71;
case 0x6f7c74:c.instructions+=2;goto B6f7c74;
case 0x6f7c77:c.instructions+=1;goto B6f7c77;
case 0x6f7c79:goto L6f7c79;
case 0x6f7c7c:c.instructions+=3;goto B6f7c7c;
case 0x6f7c7f:c.instructions+=2;goto B6f7c7f;
case 0x6f7c80:c.instructions+=1;goto B6f7c80;
case 0x6f7c85:goto L6f7c85;
case 0x6f7c88:c.instructions+=1;goto B6f7c88;
case 0x6f7c8d:goto L6f7c8d;
case 0x6f7c8f:c.instructions+=1;goto B6f7c8f;
case 0x6f7c91:goto L6f7c91;
case 0x6f7c94:c.instructions+=7;goto B6f7c94;
case 0x6f7c96:c.instructions+=6;goto B6f7c96;
case 0x6f7c98:c.instructions+=5;goto B6f7c98;
case 0x6f7c9b:c.instructions+=4;goto B6f7c9b;
case 0x6f7c9e:c.instructions+=3;goto B6f7c9e;
case 0x6f7ca0:c.instructions+=2;goto B6f7ca0;
case 0x6f7ca3:c.instructions+=1;goto B6f7ca3;
case 0x6f7ca5:goto L6f7ca5;
case 0x6f7ca6:c.instructions+=2;goto B6f7ca6;
case 0x6f7ca7:c.instructions+=1;goto B6f7ca7;
case 0x6f7ca8:goto L6f7ca8;
case 0x6f7ca9:c.instructions+=9;goto B6f7ca9;
case 0x6f7cab:c.instructions+=8;goto B6f7cab;
case 0x6f7cb1:c.instructions+=7;goto B6f7cb1;
case 0x6f7cb2:c.instructions+=6;goto B6f7cb2;
case 0x6f7cb3:c.instructions+=5;goto B6f7cb3;
case 0x6f7cb6:c.instructions+=4;goto B6f7cb6;
case 0x6f7cb8:c.instructions+=3;goto B6f7cb8;
case 0x6f7cba:c.instructions+=2;goto B6f7cba;
case 0x6f7cbb:c.instructions+=1;goto B6f7cbb;
case 0x6f7cbd:goto L6f7cbd;
case 0x6f7cc2:goto L6f7cc2;
case 0x6f7cc8:c.instructions+=9;goto B6f7cc8;
case 0x6f7ccb:c.instructions+=8;goto B6f7ccb;
case 0x6f7ccc:c.instructions+=7;goto B6f7ccc;
case 0x6f7cd3:c.instructions+=6;goto B6f7cd3;
case 0x6f7cda:c.instructions+=5;goto B6f7cda;
case 0x6f7cdd:c.instructions+=4;goto B6f7cdd;
case 0x6f7cdf:c.instructions+=3;goto B6f7cdf;
case 0x6f7ce0:c.instructions+=2;goto B6f7ce0;
case 0x6f7ce3:c.instructions+=1;goto B6f7ce3;
case 0x6f7ce5:goto L6f7ce5;
case 0x6f7cea:c.instructions+=1;goto B6f7cea;
case 0x6f7cec:goto L6f7cec;
case 0x6f7cef:c.instructions+=2;goto B6f7cef;
case 0x6f7cf0:c.instructions+=1;goto B6f7cf0;
case 0x6f7cf5:goto L6f7cf5;
case 0x6f7cf7:c.instructions+=3;goto B6f7cf7;
case 0x6f7cf8:c.instructions+=2;goto B6f7cf8;
case 0x6f7cf9:c.instructions+=1;goto B6f7cf9;
case 0x6f7cfb:goto L6f7cfb;
case 0x6f7cfd:c.instructions+=1;goto B6f7cfd;
case 0x6f7d02:goto L6f7d02;
case 0x6f7d04:goto L6f7d04;
case 0x6f7d06:goto L6f7d06;
case 0x6f7d0c:c.instructions+=20;goto B6f7d0c;
case 0x6f7d12:c.instructions+=19;goto B6f7d12;
case 0x6f7d18:c.instructions+=18;goto B6f7d18;
case 0x6f7d1b:c.instructions+=17;goto B6f7d1b;
case 0x6f7d21:c.instructions+=16;goto B6f7d21;
case 0x6f7d27:c.instructions+=15;goto B6f7d27;
case 0x6f7d2b:c.instructions+=14;goto B6f7d2b;
case 0x6f7d2e:c.instructions+=13;goto B6f7d2e;
case 0x6f7d34:c.instructions+=12;goto B6f7d34;
case 0x6f7d3a:c.instructions+=11;goto B6f7d3a;
case 0x6f7d3d:c.instructions+=10;goto B6f7d3d;
case 0x6f7d41:c.instructions+=9;goto B6f7d41;
case 0x6f7d44:c.instructions+=8;goto B6f7d44;
case 0x6f7d4a:c.instructions+=7;goto B6f7d4a;
case 0x6f7d50:c.instructions+=6;goto B6f7d50;
case 0x6f7d53:c.instructions+=5;goto B6f7d53;
case 0x6f7d55:c.instructions+=4;goto B6f7d55;
case 0x6f7d58:c.instructions+=3;goto B6f7d58;
case 0x6f7d5d:c.instructions+=2;goto B6f7d5d;
case 0x6f7d63:c.instructions+=1;goto B6f7d63;
case 0x6f7d68:goto L6f7d68;
case 0x6f7d6e:c.instructions+=2;goto B6f7d6e;
case 0x6f7d71:c.instructions+=1;goto B6f7d71;
case 0x6f7d76:goto L6f7d76;
case 0x6f7d7d:c.instructions+=3;goto B6f7d7d;
case 0x6f7d83:c.instructions+=2;goto B6f7d83;
case 0x6f7d89:c.instructions+=1;goto B6f7d89;
case 0x6f7d8b:goto L6f7d8b;
case 0x6f7d8c:c.instructions+=2;goto B6f7d8c;
case 0x6f7d8e:c.instructions+=1;goto B6f7d8e;
case 0x6f7d93:goto L6f7d93;
case 0x6f7d94:c.instructions+=3;goto B6f7d94;
case 0x6f7d97:c.instructions+=2;goto B6f7d97;
case 0x6f7d9d:c.instructions+=1;goto B6f7d9d;
case 0x6f7d9f:goto L6f7d9f;
case 0x6f7da5:c.instructions+=3;goto B6f7da5;
case 0x6f7da7:c.instructions+=2;goto B6f7da7;
case 0x6f7dad:c.instructions+=1;goto B6f7dad;
case 0x6f7daf:goto L6f7daf;
case 0x6f7db0:c.instructions+=2;goto B6f7db0;
case 0x6f7db3:c.instructions+=1;goto B6f7db3;
case 0x6f7db8:goto L6f7db8;
case 0x6f7db9:c.instructions+=3;goto B6f7db9;
case 0x6f7dbc:c.instructions+=2;goto B6f7dbc;
case 0x6f7dc2:c.instructions+=1;goto B6f7dc2;
case 0x6f7dc4:goto L6f7dc4;
case 0x6f7dca:c.instructions+=3;goto B6f7dca;
case 0x6f7dcc:c.instructions+=2;goto B6f7dcc;
case 0x6f7dd2:c.instructions+=1;goto B6f7dd2;
case 0x6f7dd4:goto L6f7dd4;
case 0x6f7dd5:c.instructions+=2;goto B6f7dd5;
case 0x6f7dd8:c.instructions+=1;goto B6f7dd8;
case 0x6f7ddd:goto L6f7ddd;
case 0x6f7dde:c.instructions+=3;goto B6f7dde;
case 0x6f7de4:c.instructions+=2;goto B6f7de4;
case 0x6f7dea:c.instructions+=1;goto B6f7dea;
case 0x6f7dec:goto L6f7dec;
case 0x6f7def:c.instructions+=2;goto B6f7def;
case 0x6f7df6:c.instructions+=1;goto B6f7df6;
case 0x6f7dfb:goto L6f7dfb;
case 0x6f7e00:goto L6f7e00;
case 0x6f7e05:c.instructions+=2;goto B6f7e05;
case 0x6f7e07:c.instructions+=1;goto B6f7e07;
case 0x6f7e0c:goto L6f7e0c;
case 0x6f7e0e:c.instructions+=3;goto B6f7e0e;
case 0x6f7e10:c.instructions+=2;goto B6f7e10;
case 0x6f7e11:c.instructions+=1;goto B6f7e11;
case 0x6f7e13:goto L6f7e13;
case 0x6f7e1a:c.instructions+=1;goto B6f7e1a;
case 0x6f7e1f:goto L6f7e1f;
case 0x6f7e20:c.instructions+=3;goto B6f7e20;
case 0x6f7e22:c.instructions+=2;goto B6f7e22;
case 0x6f7e23:c.instructions+=1;goto B6f7e23;
case 0x6f7e25:goto L6f7e25;
case 0x6f7e2b:c.instructions+=3;goto B6f7e2b;
case 0x6f7e2c:c.instructions+=2;goto B6f7e2c;
case 0x6f7e31:c.instructions+=1;goto B6f7e31;
case 0x6f7e37:goto L6f7e37;
case 0x6f7e3d:c.instructions+=2;goto B6f7e3d;
case 0x6f7e3e:c.instructions+=1;goto B6f7e3e;
case 0x6f7e43:goto L6f7e43;
case 0x6f7e48:c.instructions+=3;goto B6f7e48;
case 0x6f7e4e:c.instructions+=2;goto B6f7e4e;
case 0x6f7e50:c.instructions+=1;goto B6f7e50;
case 0x6f7e55:goto L6f7e55;
case 0x6f7e57:c.instructions+=1;goto B6f7e57;
case 0x6f7e5c:goto L6f7e5c;
case 0x6f7e61:c.instructions+=1;goto B6f7e61;
case 0x6f7e66:goto L6f7e66;
case 0x6f7e69:c.instructions+=7;goto B6f7e69;
case 0x6f7e6a:c.instructions+=6;goto B6f7e6a;
case 0x6f7e6b:c.instructions+=5;goto B6f7e6b;
case 0x6f7e72:c.instructions+=4;goto B6f7e72;
case 0x6f7e74:c.instructions+=3;goto B6f7e74;
case 0x6f7e75:c.instructions+=2;goto B6f7e75;
case 0x6f7e76:c.instructions+=1;goto B6f7e76;
case 0x6f7e77:goto L6f7e77;
case 0x6f7e78:c.instructions+=9;goto B6f7e78;
case 0x6f7e7a:c.instructions+=8;goto B6f7e7a;
case 0x6f7e7d:c.instructions+=7;goto B6f7e7d;
case 0x6f7e80:c.instructions+=6;goto B6f7e80;
case 0x6f7e81:c.instructions+=5;goto B6f7e81;
case 0x6f7e84:c.instructions+=4;goto B6f7e84;
case 0x6f7e85:c.instructions+=3;goto B6f7e85;
case 0x6f7e88:c.instructions+=2;goto B6f7e88;
case 0x6f7e8b:c.instructions+=1;goto B6f7e8b;
case 0x6f7e90:goto L6f7e90;
case 0x6f7e93:c.instructions+=3;goto B6f7e93;
case 0x6f7e96:c.instructions+=2;goto B6f7e96;
case 0x6f7e98:c.instructions+=1;goto B6f7e98;
case 0x6f7e9a:goto L6f7e9a;
case 0x6f7e9d:c.instructions+=3;goto B6f7e9d;
case 0x6f7e9f:c.instructions+=2;goto B6f7e9f;
case 0x6f7ea2:c.instructions+=1;goto B6f7ea2;
case 0x6f7ea5:goto L6f7ea5;
case 0x6f7ea6:c.instructions+=1;goto B6f7ea6;
case 0x6f7ea7:goto L6f7ea7;
case 0x6f7eaa:c.instructions+=1;goto B6f7eaa;
case 0x6f7ead:goto L6f7ead;
case 0x6f7eaf:c.instructions+=1;goto B6f7eaf;
case 0x6f7eb2:goto L6f7eb2;
case 0x6f7eb4:c.instructions+=2;goto B6f7eb4;
case 0x6f7eb6:c.instructions+=1;goto B6f7eb6;
case 0x6f7eb9:goto L6f7eb9;
case 0x6f7ebb:c.instructions+=2;goto B6f7ebb;
case 0x6f7ebd:c.instructions+=1;goto B6f7ebd;
case 0x6f7ec0:goto L6f7ec0;
case 0x6f7ec2:c.instructions+=2;goto B6f7ec2;
case 0x6f7ec4:c.instructions+=1;goto B6f7ec4;
case 0x6f7ec6:goto L6f7ec6;
case 0x6f7ec9:c.instructions+=1;goto B6f7ec9;
case 0x6f7ecb:goto L6f7ecb;
case 0x6f7ecd:goto L6f7ecd;
case 0x6f7ecf:c.instructions+=1;goto B6f7ecf;
case 0x6f7ed1:goto L6f7ed1;
case 0x6f7ed3:c.instructions+=2;goto B6f7ed3;
case 0x6f7ed5:c.instructions+=1;goto B6f7ed5;
case 0x6f7ed7:goto L6f7ed7;
case 0x6f7eda:c.instructions+=3;goto B6f7eda;
case 0x6f7edc:c.instructions+=2;goto B6f7edc;
case 0x6f7ede:c.instructions+=1;goto B6f7ede;
case 0x6f7ee0:goto L6f7ee0;
case 0x6f7ee4:c.instructions+=3;goto B6f7ee4;
case 0x6f7ee7:c.instructions+=2;goto B6f7ee7;
case 0x6f7eeb:c.instructions+=1;goto B6f7eeb;
case 0x6f7eec:goto L6f7eec;
case 0x6f7eed:c.instructions+=4;goto B6f7eed;
case 0x6f7eef:c.instructions+=3;goto B6f7eef;
case 0x6f7ef1:c.instructions+=2;goto B6f7ef1;
case 0x6f7ef3:c.instructions+=1;goto B6f7ef3;
case 0x6f7ef5:goto L6f7ef5;
case 0x6f7ef8:c.instructions+=1;goto B6f7ef8;
case 0x6f7efa:goto L6f7efa;
case 0x6f7efc:goto L6f7efc;
case 0x6f7eff:c.instructions+=5;goto B6f7eff;
case 0x6f7f02:c.instructions+=4;goto B6f7f02;
case 0x6f7f05:c.instructions+=3;goto B6f7f05;
case 0x6f7f07:c.instructions+=2;goto B6f7f07;
case 0x6f7f0b:c.instructions+=1;goto B6f7f0b;
case 0x6f7f0d:goto L6f7f0d;
case 0x6f7f10:goto L6f7f10;
case 0x6f7f11:c.instructions+=1;goto B6f7f11;
case 0x6f7f14:goto L6f7f14;
case 0x6f7f15:c.instructions+=5;goto B6f7f15;
case 0x6f7f17:c.instructions+=4;goto B6f7f17;
case 0x6f7f1a:c.instructions+=3;goto B6f7f1a;
case 0x6f7f1c:c.instructions+=2;goto B6f7f1c;
case 0x6f7f1d:c.instructions+=1;goto B6f7f1d;
case 0x6f7f1f:goto L6f7f1f;
case 0x6f7f22:c.instructions+=1;goto B6f7f22;
case 0x6f7f24:goto L6f7f24;
case 0x6f7f26:goto L6f7f26;
case 0x6f7f29:c.instructions+=6;goto B6f7f29;
case 0x6f7f2c:c.instructions+=5;goto B6f7f2c;
case 0x6f7f2f:c.instructions+=4;goto B6f7f2f;
case 0x6f7f32:c.instructions+=3;goto B6f7f32;
case 0x6f7f34:c.instructions+=2;goto B6f7f34;
case 0x6f7f37:c.instructions+=1;goto B6f7f37;
case 0x6f7f39:goto L6f7f39;
case 0x6f7f3b:c.instructions+=1;goto B6f7f3b;
case 0x6f7f3d:goto L6f7f3d;
case 0x6f7f3f:goto L6f7f3f;
case 0x6f7f40:c.instructions+=2;goto B6f7f40;
case 0x6f7f41:c.instructions+=1;goto B6f7f41;
case 0x6f7f44:goto L6f7f44;
case 0x6f7f46:c.instructions+=2;goto B6f7f46;
case 0x6f7f48:c.instructions+=1;goto B6f7f48;
case 0x6f7f4a:goto L6f7f4a;
case 0x6f7f4d:c.instructions+=1;goto B6f7f4d;
case 0x6f7f4f:goto L6f7f4f;
case 0x6f7f53:c.instructions+=2;goto B6f7f53;
case 0x6f7f56:c.instructions+=1;goto B6f7f56;
case 0x6f7f58:goto L6f7f58;
case 0x6f7f5b:c.instructions+=2;goto B6f7f5b;
case 0x6f7f5d:c.instructions+=1;goto B6f7f5d;
case 0x6f7f5f:goto L6f7f5f;
case 0x6f7f62:c.instructions+=1;goto B6f7f62;
case 0x6f7f64:goto L6f7f64;
case 0x6f7f66:goto L6f7f66;
case 0x6f7f68:goto L6f7f68;
case 0x6f7f6b:c.instructions+=1;goto B6f7f6b;
case 0x6f7f6f:goto L6f7f6f;
case 0x6f7f70:goto L6f7f70;
case 0x6f7f71:c.instructions+=4;goto B6f7f71;
case 0x6f7f73:c.instructions+=3;goto B6f7f73;
case 0x6f7f76:c.instructions+=2;goto B6f7f76;
case 0x6f7f78:c.instructions+=1;goto B6f7f78;
case 0x6f7f7a:goto L6f7f7a;
case 0x6f7f7d:c.instructions+=1;goto B6f7f7d;
case 0x6f7f82:goto L6f7f82;
case 0x6f7f84:goto L6f7f84;
case 0x6f7f88:c.instructions+=2;goto B6f7f88;
case 0x6f7f8b:c.instructions+=1;goto B6f7f8b;
case 0x6f7f8d:goto L6f7f8d;
case 0x6f7f90:goto L6f7f90;
case 0x6f7f91:c.instructions+=6;goto B6f7f91;
case 0x6f7f94:c.instructions+=5;goto B6f7f94;
case 0x6f7f97:c.instructions+=4;goto B6f7f97;
case 0x6f7f99:c.instructions+=3;goto B6f7f99;
case 0x6f7f9c:c.instructions+=2;goto B6f7f9c;
case 0x6f7f9f:c.instructions+=1;goto B6f7f9f;
case 0x6f7fa0:goto L6f7fa0;
case 0x6f7fa1:c.instructions+=1;goto B6f7fa1;
case 0x6f7fa4:goto L6f7fa4;
case 0x6f7fa5:c.instructions+=11;goto B6f7fa5;
case 0x6f7fa7:c.instructions+=10;goto B6f7fa7;
case 0x6f7fa8:c.instructions+=9;goto B6f7fa8;
case 0x6f7faa:c.instructions+=8;goto B6f7faa;
case 0x6f7fab:c.instructions+=7;goto B6f7fab;
case 0x6f7fac:c.instructions+=6;goto B6f7fac;
case 0x6f7faf:c.instructions+=5;goto B6f7faf;
case 0x6f7fb1:c.instructions+=4;goto B6f7fb1;
case 0x6f7fb3:c.instructions+=3;goto B6f7fb3;
case 0x6f7fb4:c.instructions+=2;goto B6f7fb4;
case 0x6f7fb7:c.instructions+=1;goto B6f7fb7;
case 0x6f7fb9:goto L6f7fb9;
case 0x6f7fbc:c.instructions+=3;goto B6f7fbc;
case 0x6f7fbf:c.instructions+=2;goto B6f7fbf;
case 0x6f7fc3:c.instructions+=1;goto B6f7fc3;
case 0x6f7fc5:goto L6f7fc5;
case 0x6f7fc7:c.instructions+=2;goto B6f7fc7;
case 0x6f7fca:c.instructions+=1;goto B6f7fca;
case 0x6f7fcc:goto L6f7fcc;
case 0x6f7fcf:c.instructions+=2;goto B6f7fcf;
case 0x6f7fd1:c.instructions+=1;goto B6f7fd1;
case 0x6f7fd3:goto L6f7fd3;
case 0x6f7fd6:c.instructions+=1;goto B6f7fd6;
case 0x6f7fd8:goto L6f7fd8;
case 0x6f7fda:goto L6f7fda;
case 0x6f7fdc:c.instructions+=1;goto B6f7fdc;
case 0x6f7fde:goto L6f7fde;
case 0x6f7fe0:c.instructions+=1;goto B6f7fe0;
case 0x6f7fe2:goto L6f7fe2;
case 0x6f7fe5:c.instructions+=1;goto B6f7fe5;
case 0x6f7fe7:goto L6f7fe7;
case 0x6f7fe9:c.instructions+=7;goto B6f7fe9;
case 0x6f7feb:c.instructions+=6;goto B6f7feb;
case 0x6f7fee:c.instructions+=5;goto B6f7fee;
case 0x6f7ff0:c.instructions+=4;goto B6f7ff0;
case 0x6f7ff2:c.instructions+=3;goto B6f7ff2;
case 0x6f7ff5:c.instructions+=2;goto B6f7ff5;
case 0x6f7ff7:c.instructions+=1;goto B6f7ff7;
case 0x6f7ff9:goto L6f7ff9;
case 0x6f7ffb:c.instructions+=1;goto B6f7ffb;
case 0x6f7ffd:goto L6f7ffd;
default:missing_instruction(c.pc);}
B6f7000:L6f7000:{c.instructions+=2;NFSU2_TR(0x6f7000);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f7003:{NFSU2_TR(0x6f7003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7010;}}
}
B6f7005:L6f7005:{c.instructions+=2;NFSU2_TR(0x6f7005);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f7009:{NFSU2_TR(0x6f7009);
if(r1(R+518)){{goto L6f7010;}}
}
B6f700b:L6f700b:{c.instructions+=2;NFSU2_TR(0x6f700b);
__builtin_memmove((R+0),(R+8),4);
}
B6f700d:{NFSU2_TR(0x6f700d);
u8 U[1];
w1(U+0,u8(0x2full));
s1(u32(r4(R+0)),r1(U+0));
}
B6f7010:L6f7010:{c.instructions+=3;NFSU2_TR(0x6f7010);
u8 U[1];
w1(U+0,u8(0x3bull));
s1(u32(r4(R+0)),r1(U+0));
}
B6f7013:{NFSU2_TR(0x6f7013);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f7017:{NFSU2_TR(0x6f7017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6f6ff8u,6f6);}
}
B6f7019:L6f7019:{c.instructions+=4;NFSU2_TR(0x6f7019);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f701c:{NFSU2_TR(0x6f701c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6f701f:{NFSU2_TR(0x6f701f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7025:{NFSU2_TR(0x6f7025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f702aull));
TAIL_STATIC(0x75f140u,75f);
}
B6f702a:L6f702a:{c.instructions+=8;NFSU2_TR(0x6f702a);
__builtin_memmove((R+24),gp(0x813ab4),4);
}
B6f7030:{NFSU2_TR(0x6f7030);
__builtin_memmove((R+28),(R+0),4);
}
B6f7032:{NFSU2_TR(0x6f7032);
__builtin_memmove((R+0),(R+24),4);
}
B6f7034:{NFSU2_TR(0x6f7034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7035:{NFSU2_TR(0x6f7035);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6f7038:{NFSU2_TR(0x6f7038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7039:{NFSU2_TR(0x6f7039);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f703c:{NFSU2_TR(0x6f703c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7041ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B6f7041:L6f7041:{c.instructions+=4;NFSU2_TR(0x6f7041);
__builtin_memmove((R+12),(R+16),4);
}
B6f7043:{NFSU2_TR(0x6f7043);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7044:{NFSU2_TR(0x6f7044);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7045:{NFSU2_TR(0x6f7045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f704aull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f704a:L6f704a:{c.instructions+=8;NFSU2_TR(0x6f704a);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f704f:{NFSU2_TR(0x6f704f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7055:{NFSU2_TR(0x6f7055);
__builtin_memmove((R+4),(R+28),4);
}
B6f7057:{NFSU2_TR(0x6f7057);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6f7059:{NFSU2_TR(0x6f7059);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f705a:{NFSU2_TR(0x6f705a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f705b:{NFSU2_TR(0x6f705b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f705c:{NFSU2_TR(0x6f705c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7061ull));
TAIL_STATIC(0x75c840u,75c);
}
B6f7061:L6f7061:{c.instructions+=3;NFSU2_TR(0x6f7061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7064:{NFSU2_TR(0x6f7064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f7067:{NFSU2_TR(0x6f7067);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f706a:L6f706a:{c.instructions+=4;NFSU2_TR(0x6f706a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f706c:{NFSU2_TR(0x6f706c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f706d:{NFSU2_TR(0x6f706d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f706f:{NFSU2_TR(0x6f706f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f706au);}goto L6f706a;}}
}
B6f7071:L6f7071:{c.instructions+=3;NFSU2_TR(0x6f7071);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6f7073:{NFSU2_TR(0x6f7073);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f7077:{NFSU2_TR(0x6f7077);
__builtin_memmove((R+24),(R+0),4);
}
B6f7079:L6f7079:{c.instructions+=4;NFSU2_TR(0x6f7079);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f707b:{NFSU2_TR(0x6f707b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f707c:{NFSU2_TR(0x6f707c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f707e:{NFSU2_TR(0x6f707e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7079u);}goto L6f7079;}}
}
B6f7080:L6f7080:{c.instructions+=3;NFSU2_TR(0x6f7080);
__builtin_memmove((R+28),(R+12),4);
}
B6f7082:{NFSU2_TR(0x6f7082);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f7084:{NFSU2_TR(0x6f7084);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f7085:L6f7085:{c.instructions+=4;NFSU2_TR(0x6f7085);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f7088:{NFSU2_TR(0x6f7088);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f7089:{NFSU2_TR(0x6f7089);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f708b:{NFSU2_TR(0x6f708b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7085u);}goto L6f7085;}}
}
B6f708d:L6f708d:{c.instructions+=2;NFSU2_TR(0x6f708d);
__builtin_memmove((R+4),(R+0),4);
}
B6f708f:{NFSU2_TR(0x6f708f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f7092:L6f7092:{c.instructions+=1;NFSU2_TR(0x6f7092);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f7094;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7092u);}goto L6f7092;}
}
B6f7094:L6f7094:{c.instructions+=3;NFSU2_TR(0x6f7094);
__builtin_memmove((R+4),(R+0),4);
}
B6f7096:{NFSU2_TR(0x6f7096);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f7099:{NFSU2_TR(0x6f7099);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f709a:L6f709a:{c.instructions+=1;NFSU2_TR(0x6f709a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f709c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f709au);}goto L6f709a;}
}
B6f709c:L6f709c:{c.instructions+=1;NFSU2_TR(0x6f709c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f70a1ull));
TAIL_STATIC(0x6f6db2u,6f6);
}
B6f70a1:L6f70a1:{c.instructions+=8;NFSU2_TR(0x6f70a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f70a2:{NFSU2_TR(0x6f70a2);
w1(R+0,u8(0x1ull));
}
B6f70a4:{NFSU2_TR(0x6f70a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+16),(U+0),4);
}
B6f70a7:{NFSU2_TR(0x6f70a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f70a8:{NFSU2_TR(0x6f70a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f70a9:{NFSU2_TR(0x6f70a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f70aa:{NFSU2_TR(0x6f70aa);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f70ab:{NFSU2_TR(0x6f70ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f70ac:L6f70ac:{c.instructions+=5;NFSU2_TR(0x6f70ac);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f70b2:{NFSU2_TR(0x6f70b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70b3:{NFSU2_TR(0x6f70b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70b4:{NFSU2_TR(0x6f70b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f70b7:{NFSU2_TR(0x6f70b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f70bcull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f70bc:L6f70bc:{c.instructions+=3;NFSU2_TR(0x6f70bc);
__builtin_memmove((R+24),gp(0x8ad610),4);
}
B6f70c2:{NFSU2_TR(0x6f70c2);
__builtin_memmove((R+4),(R+24),4);
}
B6f70c4:{NFSU2_TR(0x6f70c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f70c9ull));
{goto L6f7f44;}
}
B6f70c9:L6f70c9:{c.instructions+=3;NFSU2_TR(0x6f70c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f70cc:{NFSU2_TR(0x6f70cc);
__builtin_memmove((R+28),(R+0),4);
}
B6f70ce:{NFSU2_TR(0x6f70ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f70d3ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f70d3:L6f70d3:{c.instructions+=4;NFSU2_TR(0x6f70d3);
__builtin_memmove((R+0),(R+28),4);
}
B6f70d5:{NFSU2_TR(0x6f70d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f70d6:{NFSU2_TR(0x6f70d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f70d7:{NFSU2_TR(0x6f70d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f70d8:L6f70d8:{c.instructions+=11;NFSU2_TR(0x6f70d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70d9:{NFSU2_TR(0x6f70d9);
__builtin_memmove((R+20),(R+16),4);
}
B6f70db:{NFSU2_TR(0x6f70db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70dc:{NFSU2_TR(0x6f70dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70dd:{NFSU2_TR(0x6f70dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f70e0:{NFSU2_TR(0x6f70e0);
__builtin_memmove((R+24),(R+4),4);
}
B6f70e2:{NFSU2_TR(0x6f70e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70e4:{NFSU2_TR(0x6f70e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70e5:{NFSU2_TR(0x6f70e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f70e8:{NFSU2_TR(0x6f70e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f70ec:{NFSU2_TR(0x6f70ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f70f1ull));
{goto L6f7fa4;}
}
B6f70f1:L6f70f1:{c.instructions+=2;NFSU2_TR(0x6f70f1);
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
B6f70f3:{NFSU2_TR(0x6f70f3);
if(r1(R+518)){{goto L6f710c;}}
}
B6f70f5:L6f70f5:{c.instructions+=3;NFSU2_TR(0x6f70f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f70f6:{NFSU2_TR(0x6f70f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f70f9:{NFSU2_TR(0x6f70f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f70feull));
{goto L6f7eec;}
}
B6f70fe:L6f70fe:{c.instructions+=4;NFSU2_TR(0x6f70fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7101:{NFSU2_TR(0x6f7101);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7103:{NFSU2_TR(0x6f7103);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7106:{NFSU2_TR(0x6f7106);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7109ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7109:L6f7109:{c.instructions+=1;NFSU2_TR(0x6f7109);
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
B6f710c:L6f710c:{c.instructions+=4;NFSU2_TR(0x6f710c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f710d:{NFSU2_TR(0x6f710d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f710e:{NFSU2_TR(0x6f710e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f710f:{NFSU2_TR(0x6f710f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7112:L6f7112:{c.instructions+=5;NFSU2_TR(0x6f7112);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7118:{NFSU2_TR(0x6f7118);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7119:{NFSU2_TR(0x6f7119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f711a:{NFSU2_TR(0x6f711a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B6f711d:{NFSU2_TR(0x6f711d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7122ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f7122:L6f7122:{c.instructions+=3;NFSU2_TR(0x6f7122);
__builtin_memmove((R+24),gp(0x8ad610),4);
}
B6f7128:{NFSU2_TR(0x6f7128);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f712b:{NFSU2_TR(0x6f712b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7130ull));
TAIL_STATIC(0x6f6b56u,6f6);
}
B6f7130:L6f7130:{c.instructions+=3;NFSU2_TR(0x6f7130);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7133:{NFSU2_TR(0x6f7133);
__builtin_memmove((R+28),(R+0),4);
}
B6f7135:{NFSU2_TR(0x6f7135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f713aull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f713a:L6f713a:{c.instructions+=5;NFSU2_TR(0x6f713a);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6f713e:{NFSU2_TR(0x6f713e);
__builtin_memmove((R+0),(R+28),4);
}
B6f7140:{NFSU2_TR(0x6f7140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7141:{NFSU2_TR(0x6f7141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7142:{NFSU2_TR(0x6f7142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7143:L6f7143:{c.instructions+=6;NFSU2_TR(0x6f7143);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7144:{NFSU2_TR(0x6f7144);
__builtin_memmove((R+20),(R+16),4);
}
B6f7146:{NFSU2_TR(0x6f7146);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7147:{NFSU2_TR(0x6f7147);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7149:{NFSU2_TR(0x6f7149);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f714c:{NFSU2_TR(0x6f714c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7151ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f7151:L6f7151:{c.instructions+=5;NFSU2_TR(0x6f7151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7152:{NFSU2_TR(0x6f7152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7153:{NFSU2_TR(0x6f7153);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7159:{NFSU2_TR(0x6f7159);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B6f715c:{NFSU2_TR(0x6f715c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7161ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f7161:L6f7161:{c.instructions+=4;NFSU2_TR(0x6f7161);
__builtin_memmove((R+24),gp(0x8ad610),4);
}
B6f7167:{NFSU2_TR(0x6f7167);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f716a:{NFSU2_TR(0x6f716a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f716d:{NFSU2_TR(0x6f716d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7172ull));
TAIL_STATIC(0x6f8041u,6f8);
}
B6f7172:L6f7172:{c.instructions+=4;NFSU2_TR(0x6f7172);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7175:{NFSU2_TR(0x6f7175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7176:{NFSU2_TR(0x6f7176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7177:{NFSU2_TR(0x6f7177);
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f717c:L6f717c:{c.instructions+=5;NFSU2_TR(0x6f717c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f717f:{NFSU2_TR(0x6f717f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7185:{NFSU2_TR(0x6f7185);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7188:{NFSU2_TR(0x6f7188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f718a:{NFSU2_TR(0x6f718a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f718dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f718d:L6f718d:{c.instructions+=2;NFSU2_TR(0x6f718d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f718e:{NFSU2_TR(0x6f718e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7193ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7143u);}goto L6f7143;}
}
B6f7193:L6f7193:{c.instructions+=2;NFSU2_TR(0x6f7193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7194:{NFSU2_TR(0x6f7194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7195:L6f7195:{c.instructions+=7;NFSU2_TR(0x6f7195);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7196:{NFSU2_TR(0x6f7196);
__builtin_memmove((R+20),(R+16),4);
}
B6f7198:{NFSU2_TR(0x6f7198);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7199:{NFSU2_TR(0x6f7199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f719c:{NFSU2_TR(0x6f719c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f719f:{NFSU2_TR(0x6f719f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f71a6:{NFSU2_TR(0x6f71a6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783214),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f71acull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f71ac:L6f71ac:{c.instructions+=2;NFSU2_TR(0x6f71ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f71b0:{NFSU2_TR(0x6f71b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f725a;}}
}
B6f71b6:L6f71b6:{c.instructions+=3;NFSU2_TR(0x6f71b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f71b7:{NFSU2_TR(0x6f71b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f71b8:{NFSU2_TR(0x6f71b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f71bb:L6f71bb:{c.instructions+=2;NFSU2_TR(0x6f71bb);
__builtin_memmove((R+4),(R+12),4);
}
B6f71bd:{NFSU2_TR(0x6f71bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f71c2ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f71c2:L6f71c2:{c.instructions+=4;NFSU2_TR(0x6f71c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f71c5:{NFSU2_TR(0x6f71c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f71c9:{NFSU2_TR(0x6f71c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f71cb:{NFSU2_TR(0x6f71cb);
if(r1(R+518)){{goto L6f71e1;}}
}
B6f71cd:L6f71cd:{c.instructions+=3;NFSU2_TR(0x6f71cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f71d1:{NFSU2_TR(0x6f71d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f71d4:{NFSU2_TR(0x6f71d4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f71e1;}}
}
B6f71d6:L6f71d6:{c.instructions+=2;NFSU2_TR(0x6f71d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f71d9:{NFSU2_TR(0x6f71d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f71deull));
{goto L6f7f44;}
}
B6f71de:L6f71de:{c.instructions+=1;NFSU2_TR(0x6f71de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f71e1:L6f71e1:{c.instructions+=2;NFSU2_TR(0x6f71e1);
__builtin_memmove((R+4),(R+12),4);
}
B6f71e3:{NFSU2_TR(0x6f71e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f71e8ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f71e8:L6f71e8:{c.instructions+=2;NFSU2_TR(0x6f71e8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f71ec:{NFSU2_TR(0x6f71ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f71fa;}}
}
B6f71ee:L6f71ee:{c.instructions+=3;NFSU2_TR(0x6f71ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f71f1:{NFSU2_TR(0x6f71f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f71f2:{NFSU2_TR(0x6f71f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f71f7ull));
TAIL_STATIC(0x6f6335u,6f6);
}
B6f71f7:L6f71f7:{c.instructions+=2;NFSU2_TR(0x6f71f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f71f8:{NFSU2_TR(0x6f71f8);
{goto L6f724e;}
}
B6f71fa:L6f71fa:{c.instructions+=2;NFSU2_TR(0x6f71fa);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6f71fe:{NFSU2_TR(0x6f71fe);
if(r1(R+518)){{goto L6f7208;}}
}
B6f7200:L6f7200:{c.instructions+=4;NFSU2_TR(0x6f7200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7202:{NFSU2_TR(0x6f7202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7203:{NFSU2_TR(0x6f7203);
__builtin_memmove((R+4),(R+28),4);
}
B6f7205:{NFSU2_TR(0x6f7205);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7208ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7208:L6f7208:{c.instructions+=2;NFSU2_TR(0x6f7208);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f720c:{NFSU2_TR(0x6f720c);
if(r1(R+518)){{goto L6f724e;}}
}
B6f720e:L6f720e:{c.instructions+=2;NFSU2_TR(0x6f720e);
__builtin_memmove((R+4),(R+12),4);
}
B6f7210:{NFSU2_TR(0x6f7210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7215ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f7215:L6f7215:{c.instructions+=3;NFSU2_TR(0x6f7215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7216:{NFSU2_TR(0x6f7216);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7219:{NFSU2_TR(0x6f7219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f721eull));
{goto L6f7eec;}
}
B6f721e:L6f721e:{c.instructions+=3;NFSU2_TR(0x6f721e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7222:{NFSU2_TR(0x6f7222);
__builtin_memmove((R+4),(R+12),4);
}
B6f7224:{NFSU2_TR(0x6f7224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7229ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f7229:L6f7229:{c.instructions+=2;NFSU2_TR(0x6f7229);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6f722d:{NFSU2_TR(0x6f722d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7234;}}
}
B6f722f:L6f722f:{c.instructions+=2;NFSU2_TR(0x6f722f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f7232:{NFSU2_TR(0x6f7232);
{goto L6f7238;}
}
B6f7234:L6f7234:{c.instructions+=1;NFSU2_TR(0x6f7234);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6f7238:L6f7238:{c.instructions+=4;NFSU2_TR(0x6f7238);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f723b:{NFSU2_TR(0x6f723b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f723c:{NFSU2_TR(0x6f723c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f723f:{NFSU2_TR(0x6f723f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7242ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7242:L6f7242:{c.instructions+=3;NFSU2_TR(0x6f7242);
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
B6f7245:{NFSU2_TR(0x6f7245);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7248:{NFSU2_TR(0x6f7248);
u8 U[4];
__builtin_memmove((U+0),gp(0x783214),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f724eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f724e:L6f724e:{c.instructions+=2;NFSU2_TR(0x6f724e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7252:{NFSU2_TR(0x6f7252);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f71bbu);}goto L6f71bb;}}
}
B6f7258:L6f7258:{c.instructions+=2;NFSU2_TR(0x6f7258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7259:{NFSU2_TR(0x6f7259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f725a:L6f725a:{c.instructions+=5;NFSU2_TR(0x6f725a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7261:{NFSU2_TR(0x6f7261);
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
B6f7263:{NFSU2_TR(0x6f7263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7264:{NFSU2_TR(0x6f7264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7265:{NFSU2_TR(0x6f7265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7266:L6f7266:{c.instructions+=7;NFSU2_TR(0x6f7266);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7267:{NFSU2_TR(0x6f7267);
__builtin_memmove((R+20),(R+16),4);
}
B6f7269:{NFSU2_TR(0x6f7269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f726a:{NFSU2_TR(0x6f726a);
__builtin_memmove((R+24),gp(0x8ad610),4);
}
B6f7270:{NFSU2_TR(0x6f7270);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7271:{NFSU2_TR(0x6f7271);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7274:{NFSU2_TR(0x6f7274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7279ull));
TAIL_STATIC(0x6f6b56u,6f6);
}
B6f7279:L6f7279:{c.instructions+=6;NFSU2_TR(0x6f7279);
__builtin_memmove((R+28),(R+0),4);
}
B6f727b:{NFSU2_TR(0x6f727b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f727e:{NFSU2_TR(0x6f727e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f727f:{NFSU2_TR(0x6f727f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7282:{NFSU2_TR(0x6f7282);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7288:{NFSU2_TR(0x6f7288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f728dull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f728d:L6f728d:{c.instructions+=9;NFSU2_TR(0x6f728d);
__builtin_memmove((R+0),(R+28),4);
}
B6f728f:{NFSU2_TR(0x6f728f);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f7295:{NFSU2_TR(0x6f7295);
w4(R+4,u32(0x84ull));
}
B6f729a:{NFSU2_TR(0x6f729a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f729b:{NFSU2_TR(0x6f729b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f729c:{NFSU2_TR(0x6f729c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f729c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f729c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6f729e:{NFSU2_TR(0x6f729e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f729f:{NFSU2_TR(0x6f729f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f72a0:{NFSU2_TR(0x6f72a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f72a1:L6f72a1:{c.instructions+=13;NFSU2_TR(0x6f72a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72a2:{NFSU2_TR(0x6f72a2);
__builtin_memmove((R+20),(R+16),4);
}
B6f72a4:{NFSU2_TR(0x6f72a4);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f72a9:{NFSU2_TR(0x6f72a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72aa:{NFSU2_TR(0x6f72aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72ab:{NFSU2_TR(0x6f72ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f72ae:{NFSU2_TR(0x6f72ae);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x84ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6f72b4:{NFSU2_TR(0x6f72b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6f72ba:{NFSU2_TR(0x6f72ba);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f72bc:{NFSU2_TR(0x6f72bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72bd:{NFSU2_TR(0x6f72bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72be:{NFSU2_TR(0x6f72be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f72c1:{NFSU2_TR(0x6f72c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f72c6ull));
TAIL_STATIC(0x6f807cu,6f8);
}
B6f72c6:L6f72c6:{c.instructions+=2;NFSU2_TR(0x6f72c6);
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
B6f72c8:{NFSU2_TR(0x6f72c8);
if(r1(R+518)){{goto L6f7346;}}
}
B6f72ca:L6f72ca:{c.instructions+=2;NFSU2_TR(0x6f72ca);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f72cd:{NFSU2_TR(0x6f72cd);
if(r1(R+518)){{goto L6f732d;}}
}
B6f72cf:L6f72cf:{c.instructions+=5;NFSU2_TR(0x6f72cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72d0:{NFSU2_TR(0x6f72d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f72d3:{NFSU2_TR(0x6f72d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72d4:{NFSU2_TR(0x6f72d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f72db:{NFSU2_TR(0x6f72db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f72e0ull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f72e0:L6f72e0:{c.instructions+=1;NFSU2_TR(0x6f72e0);
{goto L6f72e8;}
}
B6f72e2:L6f72e2:{c.instructions+=2;NFSU2_TR(0x6f72e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72e3:{NFSU2_TR(0x6f72e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f72e8ull));
TAIL_STATIC(0x6f5889u,6f5);
}
B6f72e8:L6f72e8:{c.instructions+=3;NFSU2_TR(0x6f72e8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f72eb:{NFSU2_TR(0x6f72eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f72ec:{NFSU2_TR(0x6f72ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f72e2u);}goto L6f72e2;}}
}
B6f72ee:L6f72ee:{c.instructions+=2;NFSU2_TR(0x6f72ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f72ef:{NFSU2_TR(0x6f72ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f72f4ull));
TAIL_STATIC(0x6f6372u,6f6);
}
B6f72f4:L6f72f4:{c.instructions+=3;NFSU2_TR(0x6f72f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f72f5:{NFSU2_TR(0x6f72f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f72f8:{NFSU2_TR(0x6f72f8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783214),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f72feull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f72fe:L6f72fe:{c.instructions+=2;NFSU2_TR(0x6f72fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7301:{NFSU2_TR(0x6f7301);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7307ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f7307:L6f7307:{c.instructions+=3;NFSU2_TR(0x6f7307);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f730a:{NFSU2_TR(0x6f730a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f730b:{NFSU2_TR(0x6f730b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7310ull));
TAIL_STATIC(0x6f5859u,6f5);
}
B6f7310:L6f7310:{c.instructions+=3;NFSU2_TR(0x6f7310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7311:{NFSU2_TR(0x6f7311);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7314:{NFSU2_TR(0x6f7314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7319ull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f7319:L6f7319:{c.instructions+=2;NFSU2_TR(0x6f7319);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f731c:{NFSU2_TR(0x6f731c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7321ull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f7321:L6f7321:{c.instructions+=3;NFSU2_TR(0x6f7321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7327:{NFSU2_TR(0x6f7327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7329:{NFSU2_TR(0x6f7329);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f732cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f732c:L6f732c:{c.instructions+=1;NFSU2_TR(0x6f732c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f732d:L6f732d:{c.instructions+=3;NFSU2_TR(0x6f732d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f732f:{NFSU2_TR(0x6f732f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7330:{NFSU2_TR(0x6f7330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7335ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f7335:L6f7335:{c.instructions+=6;NFSU2_TR(0x6f7335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7336:{NFSU2_TR(0x6f7336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7337:{NFSU2_TR(0x6f7337);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f733d:{NFSU2_TR(0x6f733d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f733e:{NFSU2_TR(0x6f733e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B6f7341:{NFSU2_TR(0x6f7341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7346ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f7346:L6f7346:{c.instructions+=4;NFSU2_TR(0x6f7346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7347:{NFSU2_TR(0x6f7347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7348:{NFSU2_TR(0x6f7348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7349:{NFSU2_TR(0x6f7349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f734a:L6f734a:{c.instructions+=6;NFSU2_TR(0x6f734a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f734b:{NFSU2_TR(0x6f734b);
__builtin_memmove((R+20),(R+16),4);
}
B6f734d:{NFSU2_TR(0x6f734d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f734e:{NFSU2_TR(0x6f734e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f7350:{NFSU2_TR(0x6f7350);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7352:{NFSU2_TR(0x6f7352);
{goto L6f736c;}
}
B6f7354:L6f7354:{c.instructions+=3;NFSU2_TR(0x6f7354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7357:{NFSU2_TR(0x6f7357);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f735a:{NFSU2_TR(0x6f735a);
if(r1(R+518)){{goto L6f7377;}}
}
B6f735c:L6f735c:{c.instructions+=4;NFSU2_TR(0x6f735c);
__builtin_memmove((R+0),(R+24),4);
}
B6f735e:{NFSU2_TR(0x6f735e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7361:{NFSU2_TR(0x6f7361);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7363:{NFSU2_TR(0x6f7363);
if(r1(R+518)){{goto L6f736a;}}
}
B6f7365:L6f7365:{c.instructions+=2;NFSU2_TR(0x6f7365);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
}
B6f7368:{NFSU2_TR(0x6f7368);
{goto L6f736c;}
}
B6f736a:L6f736a:{c.instructions+=1;NFSU2_TR(0x6f736a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f736c:L6f736c:{c.instructions+=2;NFSU2_TR(0x6f736c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f736e:{NFSU2_TR(0x6f736e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7354u);}goto L6f7354;}}
}
B6f7370:L6f7370:{c.instructions+=1;NFSU2_TR(0x6f7370);
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
B6f7372:L6f7372:{c.instructions+=3;NFSU2_TR(0x6f7372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7373:{NFSU2_TR(0x6f7373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7374:{NFSU2_TR(0x6f7374);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7377:L6f7377:{c.instructions+=2;NFSU2_TR(0x6f7377);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6f737b:{NFSU2_TR(0x6f737b);
if(r1(R+518)){{goto L6f7384;}}
}
B6f737d:L6f737d:{c.instructions+=3;NFSU2_TR(0x6f737d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f737e:{NFSU2_TR(0x6f737e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f737f:{NFSU2_TR(0x6f737f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7384ull));
{goto L6f7fa4;}
}
B6f7384:L6f7384:{c.instructions+=2;NFSU2_TR(0x6f7384);
__builtin_memmove((R+0),(R+24),4);
}
B6f7386:{NFSU2_TR(0x6f7386);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7372u);}goto L6f7372;}
}
B6f7388:L6f7388:{c.instructions+=3;NFSU2_TR(0x6f7388);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f738e:{NFSU2_TR(0x6f738e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f7391:{NFSU2_TR(0x6f7391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7396ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f7396:L6f7396:{c.instructions+=2;NFSU2_TR(0x6f7396);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7399:{NFSU2_TR(0x6f7399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f739eull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f739e:L6f739e:{c.instructions+=4;NFSU2_TR(0x6f739e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6f73a2:{NFSU2_TR(0x6f73a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f73a5:{NFSU2_TR(0x6f73a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73a6:{NFSU2_TR(0x6f73a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f73abull));
TAIL_STATIC(0x6f62e9u,6f6);
}
B6f73ab:L6f73ab:{c.instructions+=6;NFSU2_TR(0x6f73ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f73ac:{NFSU2_TR(0x6f73ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73ae:{NFSU2_TR(0x6f73ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73b0:{NFSU2_TR(0x6f73b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73b2:{NFSU2_TR(0x6f73b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73b4:{NFSU2_TR(0x6f73b4);
u8 U[4];
__builtin_memmove((U+0),gp(0x783210),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f73baull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f73ba:L6f73ba:{c.instructions+=3;NFSU2_TR(0x6f73ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f73bd:{NFSU2_TR(0x6f73bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f73c0:{NFSU2_TR(0x6f73c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f73c5ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f73c5:L6f73c5:{c.instructions+=4;NFSU2_TR(0x6f73c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f73cb:{NFSU2_TR(0x6f73cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f73d2:{NFSU2_TR(0x6f73d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f73d4:{NFSU2_TR(0x6f73d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f73d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f73d7:L6f73d7:{c.instructions+=8;NFSU2_TR(0x6f73d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73d9:{NFSU2_TR(0x6f73d9);
u8 U[4];
__builtin_memmove((U+0),gp(0x813abc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73df:{NFSU2_TR(0x6f73df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f73e2:{NFSU2_TR(0x6f73e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f73e5:{NFSU2_TR(0x6f73e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73e6:{NFSU2_TR(0x6f73e6);
u8 U[4];
w4(U+0,u32(0x6f7195ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73eb:{NFSU2_TR(0x6f73eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73ec:{NFSU2_TR(0x6f73ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f73f1ull));
TAIL_STATIC(0x6f5a40u,6f5);
}
B6f73f1:L6f73f1:{c.instructions+=4;NFSU2_TR(0x6f73f1);
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
B6f73f4:{NFSU2_TR(0x6f73f4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f73f6:{NFSU2_TR(0x6f73f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f73f9:{NFSU2_TR(0x6f73f9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f73ffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f73ff:L6f73ff:{c.instructions+=2;NFSU2_TR(0x6f73ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7402:{NFSU2_TR(0x6f7402);
u8 U[4];
__builtin_memmove((U+0),gp(0x78321c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7408ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f7408:L6f7408:{c.instructions+=3;NFSU2_TR(0x6f7408);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f740e:{NFSU2_TR(0x6f740e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f7411:{NFSU2_TR(0x6f7411);
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f7416:L6f7416:{c.instructions+=11;NFSU2_TR(0x6f7416);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7417:{NFSU2_TR(0x6f7417);
__builtin_memmove((R+20),(R+16),4);
}
B6f7419:{NFSU2_TR(0x6f7419);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f741a:{NFSU2_TR(0x6f741a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f741b:{NFSU2_TR(0x6f741b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f741e:{NFSU2_TR(0x6f741e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f741f:{NFSU2_TR(0x6f741f);
__builtin_memmove((R+28),(R+4),4);
}
B6f7421:{NFSU2_TR(0x6f7421);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f7423:{NFSU2_TR(0x6f7423);
u8 U[4];
w4(U+0,u32(0x7c2ec0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6f7429:{NFSU2_TR(0x6f7429);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f742c:{NFSU2_TR(0x6f742c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7433;}}
}
B6f742e:L6f742e:{c.instructions+=1;NFSU2_TR(0x6f742e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7433ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7388u);}goto L6f7388;}
}
B6f7433:L6f7433:{c.instructions+=16;NFSU2_TR(0x6f7433);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f7436:{NFSU2_TR(0x6f7436);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f743a:{NFSU2_TR(0x6f743a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f743d:{NFSU2_TR(0x6f743d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7440:{NFSU2_TR(0x6f7440);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7441:{NFSU2_TR(0x6f7441);
__builtin_memmove((R+4),(R+28),4);
}
B6f7443:{NFSU2_TR(0x6f7443);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f7446:{NFSU2_TR(0x6f7446);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f7449:{NFSU2_TR(0x6f7449);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f744c:{NFSU2_TR(0x6f744c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w4(U+4,u32(0x6f6c46ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7453:{NFSU2_TR(0x6f7453);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7456:{NFSU2_TR(0x6f7456);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7459:{NFSU2_TR(0x6f7459);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f745c:{NFSU2_TR(0x6f745c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f745f:{NFSU2_TR(0x6f745f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7462:{NFSU2_TR(0x6f7462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7467ull));
TAIL_STATIC(0x6f6c66u,6f6);
}
B6f7467:L6f7467:{c.instructions+=7;NFSU2_TR(0x6f7467);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f746a:{NFSU2_TR(0x6f746a);
__builtin_memmove((R+0),(R+28),4);
}
B6f746c:{NFSU2_TR(0x6f746c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f746d:{NFSU2_TR(0x6f746d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f746e:{NFSU2_TR(0x6f746e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f746f:{NFSU2_TR(0x6f746f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7470:{NFSU2_TR(0x6f7470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7473:L6f7473:{c.instructions+=6;NFSU2_TR(0x6f7473);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7474:{NFSU2_TR(0x6f7474);
__builtin_memmove((R+20),(R+16),4);
}
B6f7476:{NFSU2_TR(0x6f7476);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7478:{NFSU2_TR(0x6f7478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B6f747a:{NFSU2_TR(0x6f747a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f747d:{NFSU2_TR(0x6f747d);
if(r1(R+518)){{goto L6f74b9;}}
}
B6f747f:L6f747f:{c.instructions+=3;NFSU2_TR(0x6f747f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7482:{NFSU2_TR(0x6f7482);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7484:{NFSU2_TR(0x6f7484);
if(r1(R+518)){{goto L6f7493;}}
}
B6f7486:L6f7486:{c.instructions+=3;NFSU2_TR(0x6f7486);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7489:{NFSU2_TR(0x6f7489);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f748c:{NFSU2_TR(0x6f748c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7493;}}
}
B6f748e:L6f748e:{c.instructions+=3;NFSU2_TR(0x6f748e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f7491:{NFSU2_TR(0x6f7491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7492:{NFSU2_TR(0x6f7492);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7493:L6f7493:{c.instructions+=4;NFSU2_TR(0x6f7493);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7495:{NFSU2_TR(0x6f7495);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7498:{NFSU2_TR(0x6f7498);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f749b:{NFSU2_TR(0x6f749b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f74a0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f734au);}goto L6f734a;}
}
B6f74a0:L6f74a0:{c.instructions+=2;NFSU2_TR(0x6f74a0);
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
B6f74a2:{NFSU2_TR(0x6f74a2);
if(r1(R+518)){{goto L6f74ac;}}
}
B6f74a4:L6f74a4:{c.instructions+=3;NFSU2_TR(0x6f74a4);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6f74aa:{NFSU2_TR(0x6f74aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f74ab:{NFSU2_TR(0x6f74ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f74ac:L6f74ac:{c.instructions+=4;NFSU2_TR(0x6f74ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f74ae:{NFSU2_TR(0x6f74ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f74b1:{NFSU2_TR(0x6f74b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f74b4:{NFSU2_TR(0x6f74b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f74b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f734au);}goto L6f734a;}
}
B6f74b9:L6f74b9:{c.instructions+=2;NFSU2_TR(0x6f74b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f74ba:{NFSU2_TR(0x6f74ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f74bb:L6f74bb:{c.instructions+=8;NFSU2_TR(0x6f74bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f74bc:{NFSU2_TR(0x6f74bc);
__builtin_memmove((R+20),(R+16),4);
}
B6f74be:{NFSU2_TR(0x6f74be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f74bf:{NFSU2_TR(0x6f74bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f74c0:{NFSU2_TR(0x6f74c0);
__builtin_memmove((R+24),(R+4),4);
}
B6f74c2:{NFSU2_TR(0x6f74c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f74c3:{NFSU2_TR(0x6f74c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f74c6:{NFSU2_TR(0x6f74c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f74cbull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f74cb:L6f74cb:{c.instructions+=4;NFSU2_TR(0x6f74cb);
__builtin_memmove((R+28),(R+0),4);
}
B6f74cd:{NFSU2_TR(0x6f74cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f74ce:{NFSU2_TR(0x6f74ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f74d1:{NFSU2_TR(0x6f74d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f74d6ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f74d6:L6f74d6:{c.instructions+=9;NFSU2_TR(0x6f74d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f74da:{NFSU2_TR(0x6f74da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f74dd:{NFSU2_TR(0x6f74dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f74e0:{NFSU2_TR(0x6f74e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f74e4:{NFSU2_TR(0x6f74e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f74e7:{NFSU2_TR(0x6f74e7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff00ull))));
}
B6f74ed:{NFSU2_TR(0x6f74ed);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6f74ef:{NFSU2_TR(0x6f74ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f74f1:{NFSU2_TR(0x6f74f1);
if(r1(R+518)){{goto L6f7520;}}
}
B6f74f3:L6f74f3:{c.instructions+=1;NFSU2_TR(0x6f74f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f74f4:L6f74f4:{c.instructions+=7;NFSU2_TR(0x6f74f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f74f8:{NFSU2_TR(0x6f74f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f74fb:{NFSU2_TR(0x6f74fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f74fe:{NFSU2_TR(0x6f74fe);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff00ull))));
}
B6f7504:{NFSU2_TR(0x6f7504);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B6f7506:{NFSU2_TR(0x6f7506);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6f7508:{NFSU2_TR(0x6f7508);
if(r1(R+512)){{goto L6f751f;}}
}
B6f750a:L6f750a:{c.instructions+=4;NFSU2_TR(0x6f750a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f750d:{NFSU2_TR(0x6f750d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7510:{NFSU2_TR(0x6f7510);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7512:{NFSU2_TR(0x6f7512);
if(r1(R+518)){{goto L6f7519;}}
}
B6f7514:L6f7514:{c.instructions+=2;NFSU2_TR(0x6f7514);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
}
B6f7517:{NFSU2_TR(0x6f7517);
{goto L6f751b;}
}
B6f7519:L6f7519:{c.instructions+=1;NFSU2_TR(0x6f7519);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f751b:L6f751b:{c.instructions+=2;NFSU2_TR(0x6f751b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f751d:{NFSU2_TR(0x6f751d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f74f4u);}goto L6f74f4;}}
}
B6f751f:L6f751f:{c.instructions+=1;NFSU2_TR(0x6f751f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7520:L6f7520:{c.instructions+=4;NFSU2_TR(0x6f7520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7521:{NFSU2_TR(0x6f7521);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7524:{NFSU2_TR(0x6f7524);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7527:{NFSU2_TR(0x6f7527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f752cull));
{goto L6f7f70;}
}
B6f752c:L6f752c:{c.instructions+=2;NFSU2_TR(0x6f752c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f752f:{NFSU2_TR(0x6f752f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7534ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f7534:L6f7534:{c.instructions+=3;NFSU2_TR(0x6f7534);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x44ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f7537:{NFSU2_TR(0x6f7537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7538:{NFSU2_TR(0x6f7538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f753dull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f753d:L6f753d:{c.instructions+=5;NFSU2_TR(0x6f753d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f753e:{NFSU2_TR(0x6f753e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f753f:{NFSU2_TR(0x6f753f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7540:{NFSU2_TR(0x6f7540);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7541:{NFSU2_TR(0x6f7541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7542:L6f7542:{c.instructions+=8;NFSU2_TR(0x6f7542);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7543:{NFSU2_TR(0x6f7543);
__builtin_memmove((R+20),(R+16),4);
}
B6f7545:{NFSU2_TR(0x6f7545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7546:{NFSU2_TR(0x6f7546);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7547:{NFSU2_TR(0x6f7547);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7548:{NFSU2_TR(0x6f7548);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7549:{NFSU2_TR(0x6f7549);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f754c:{NFSU2_TR(0x6f754c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7551ull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f7551:L6f7551:{c.instructions+=5;NFSU2_TR(0x6f7551);
__builtin_memmove((R+24),(R+0),4);
}
B6f7553:{NFSU2_TR(0x6f7553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7554:{NFSU2_TR(0x6f7554);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7557:{NFSU2_TR(0x6f7557);
__builtin_memmove((R+4),(R+28),4);
}
B6f7559:{NFSU2_TR(0x6f7559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f755eull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f755e:L6f755e:{c.instructions+=3;NFSU2_TR(0x6f755e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7561:{NFSU2_TR(0x6f7561);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7564:{NFSU2_TR(0x6f7564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7569ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7473u);}goto L6f7473;}
}
B6f7569:L6f7569:{c.instructions+=4;NFSU2_TR(0x6f7569);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f756b:{NFSU2_TR(0x6f756b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f756e:{NFSU2_TR(0x6f756e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f756f:{NFSU2_TR(0x6f756f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7589;}}
}
B6f7571:L6f7571:{c.instructions+=2;NFSU2_TR(0x6f7571);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7573:{NFSU2_TR(0x6f7573);
if(r1(R+518)){{goto L6f7586;}}
}
B6f7575:L6f7575:{c.instructions+=2;NFSU2_TR(0x6f7575);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f7579:{NFSU2_TR(0x6f7579);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7580;}}
}
B6f757b:L6f757b:{c.instructions+=2;NFSU2_TR(0x6f757b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6f757e:{NFSU2_TR(0x6f757e);
{goto L6f7589;}
}
B6f7580:L6f7580:{c.instructions+=2;NFSU2_TR(0x6f7580);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B6f7584:{NFSU2_TR(0x6f7584);
{goto L6f7589;}
}
B6f7586:L6f7586:{c.instructions+=2;NFSU2_TR(0x6f7586);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7588:{NFSU2_TR(0x6f7588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7589:L6f7589:{c.instructions+=2;NFSU2_TR(0x6f7589);
__builtin_memmove((R+4),(R+28),4);
}
B6f758b:{NFSU2_TR(0x6f758b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7590ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f7590:L6f7590:{c.instructions+=6;NFSU2_TR(0x6f7590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7591:{NFSU2_TR(0x6f7591);
__builtin_memmove((R+0),(R+24),4);
}
B6f7593:{NFSU2_TR(0x6f7593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7594:{NFSU2_TR(0x6f7594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7595:{NFSU2_TR(0x6f7595);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7596:{NFSU2_TR(0x6f7596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7597:L6f7597:{c.instructions+=8;NFSU2_TR(0x6f7597);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7598:{NFSU2_TR(0x6f7598);
__builtin_memmove((R+20),(R+16),4);
}
B6f759a:{NFSU2_TR(0x6f759a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f759b:{NFSU2_TR(0x6f759b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f759c:{NFSU2_TR(0x6f759c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f759d:{NFSU2_TR(0x6f759d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f759e:{NFSU2_TR(0x6f759e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f75a1:{NFSU2_TR(0x6f75a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f75a6ull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f75a6:L6f75a6:{c.instructions+=5;NFSU2_TR(0x6f75a6);
__builtin_memmove((R+24),(R+0),4);
}
B6f75a8:{NFSU2_TR(0x6f75a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f75a9:{NFSU2_TR(0x6f75a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f75ac:{NFSU2_TR(0x6f75ac);
__builtin_memmove((R+4),(R+28),4);
}
B6f75ae:{NFSU2_TR(0x6f75ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f75b3ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f75b3:L6f75b3:{c.instructions+=3;NFSU2_TR(0x6f75b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f75b6:{NFSU2_TR(0x6f75b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f75b9:{NFSU2_TR(0x6f75b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f75beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7473u);}goto L6f7473;}
}
B6f75be:L6f75be:{c.instructions+=3;NFSU2_TR(0x6f75be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f75c0:{NFSU2_TR(0x6f75c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f75c1:{NFSU2_TR(0x6f75c1);
if(r1(R+518)){{goto L6f75d1;}}
}
B6f75c3:L6f75c3:{c.instructions+=2;NFSU2_TR(0x6f75c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f75c7:{NFSU2_TR(0x6f75c7);
if(r1(R+518)){{goto L6f75d1;}}
}
B6f75c9:L6f75c9:{c.instructions+=4;NFSU2_TR(0x6f75c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f75cb:{NFSU2_TR(0x6f75cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f75cc:{NFSU2_TR(0x6f75cc);
__builtin_memmove((R+4),(R+0),4);
}
B6f75ce:{NFSU2_TR(0x6f75ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f75d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f75d1:L6f75d1:{c.instructions+=2;NFSU2_TR(0x6f75d1);
__builtin_memmove((R+4),(R+28),4);
}
B6f75d3:{NFSU2_TR(0x6f75d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f75d8ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f75d8:L6f75d8:{c.instructions+=5;NFSU2_TR(0x6f75d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f75d9:{NFSU2_TR(0x6f75d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f75da:{NFSU2_TR(0x6f75da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f75db:{NFSU2_TR(0x6f75db);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f75dc:{NFSU2_TR(0x6f75dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f75dd:L6f75dd:{c.instructions+=5;NFSU2_TR(0x6f75dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f75de:{NFSU2_TR(0x6f75de);
__builtin_memmove((R+20),(R+16),4);
}
B6f75e0:{NFSU2_TR(0x6f75e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f75e1:{NFSU2_TR(0x6f75e1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f75e5:{NFSU2_TR(0x6f75e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f75ec;}}
}
B6f75e7:L6f75e7:{c.instructions+=4;NFSU2_TR(0x6f75e7);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f75e9:{NFSU2_TR(0x6f75e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f75ea:{NFSU2_TR(0x6f75ea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f75eb:{NFSU2_TR(0x6f75eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f75ec:L6f75ec:{c.instructions+=3;NFSU2_TR(0x6f75ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f75ed:{NFSU2_TR(0x6f75ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f75f0:{NFSU2_TR(0x6f75f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f75f5ull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f75f5:L6f75f5:{c.instructions+=4;NFSU2_TR(0x6f75f5);
__builtin_memmove((R+24),(R+0),4);
}
B6f75f7:{NFSU2_TR(0x6f75f7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f75fb:{NFSU2_TR(0x6f75fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f75fc:{NFSU2_TR(0x6f75fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7603;}}
}
B6f75fe:L6f75fe:{c.instructions+=3;NFSU2_TR(0x6f75fe);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7600:{NFSU2_TR(0x6f7600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7601:{NFSU2_TR(0x6f7601);
{goto L6f7679;}
}
B6f7603:L6f7603:{c.instructions+=3;NFSU2_TR(0x6f7603);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7604:{NFSU2_TR(0x6f7604);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7605:{NFSU2_TR(0x6f7605);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7608:L6f7608:{c.instructions+=2;NFSU2_TR(0x6f7608);
__builtin_memmove((R+4),(R+28),4);
}
B6f760a:{NFSU2_TR(0x6f760a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f760full));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f760f:L6f760f:{c.instructions+=3;NFSU2_TR(0x6f760f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7612:{NFSU2_TR(0x6f7612);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7615:{NFSU2_TR(0x6f7615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f761aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7473u);}goto L6f7473;}
}
B6f761a:L6f761a:{c.instructions+=7;NFSU2_TR(0x6f761a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f761b:{NFSU2_TR(0x6f761b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f761d:{NFSU2_TR(0x6f761d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f761f:{NFSU2_TR(0x6f761f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6f7622:{NFSU2_TR(0x6f7622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7625:{NFSU2_TR(0x6f7625);
__builtin_memmove((R+4),(R+28),4);
}
B6f7627:{NFSU2_TR(0x6f7627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f762cull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f762c:L6f762c:{c.instructions+=2;NFSU2_TR(0x6f762c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7630:{NFSU2_TR(0x6f7630);
if(r1(R+518)){{goto L6f766e;}}
}
B6f7632:L6f7632:{c.instructions+=2;NFSU2_TR(0x6f7632);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7634:{NFSU2_TR(0x6f7634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7639ull));
TAIL_STATIC(0x6f58c1u,6f5);
}
B6f7639:L6f7639:{c.instructions+=3;NFSU2_TR(0x6f7639);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f763b:{NFSU2_TR(0x6f763b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f763c:{NFSU2_TR(0x6f763c);
if(r1(R+518)){{goto L6f764d;}}
}
B6f763e:L6f763e:{c.instructions+=1;NFSU2_TR(0x6f763e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7643ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B6f7643:L6f7643:{c.instructions+=2;NFSU2_TR(0x6f7643);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7645:{NFSU2_TR(0x6f7645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f764aull));
TAIL_STATIC(0x6f5889u,6f5);
}
B6f764a:L6f764a:{c.instructions+=2;NFSU2_TR(0x6f764a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f764b:{NFSU2_TR(0x6f764b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7608u);}goto L6f7608;}
}
B6f764d:L6f764d:{c.instructions+=2;NFSU2_TR(0x6f764d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7650:{NFSU2_TR(0x6f7650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7655ull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f7655:L6f7655:{c.instructions+=5;NFSU2_TR(0x6f7655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7656:{NFSU2_TR(0x6f7656);
__builtin_memmove((R+12),(R+0),4);
}
B6f7658:{NFSU2_TR(0x6f7658);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f765a:{NFSU2_TR(0x6f765a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f765d:{NFSU2_TR(0x6f765d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7663ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f7663:L6f7663:{c.instructions+=2;NFSU2_TR(0x6f7663);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7666:{NFSU2_TR(0x6f7666);
u8 U[4];
__builtin_memmove((U+0),gp(0x78321c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f766cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f766c:L6f766c:{c.instructions+=1;NFSU2_TR(0x6f766c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7608u);}goto L6f7608;}
}
B6f766e:L6f766e:{c.instructions+=2;NFSU2_TR(0x6f766e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7671:{NFSU2_TR(0x6f7671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7676ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7542u);}goto L6f7542;}
}
B6f7676:L6f7676:{c.instructions+=3;NFSU2_TR(0x6f7676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7677:{NFSU2_TR(0x6f7677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7678:{NFSU2_TR(0x6f7678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7679:L6f7679:{c.instructions+=3;NFSU2_TR(0x6f7679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f767a:{NFSU2_TR(0x6f767a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f767b:{NFSU2_TR(0x6f767b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f767c:L6f767c:{c.instructions+=7;NFSU2_TR(0x6f767c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f767d:{NFSU2_TR(0x6f767d);
__builtin_memmove((R+20),(R+16),4);
}
B6f767f:{NFSU2_TR(0x6f767f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7680:{NFSU2_TR(0x6f7680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7681:{NFSU2_TR(0x6f7681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7682:{NFSU2_TR(0x6f7682);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7685:{NFSU2_TR(0x6f7685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f768aull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f768a:L6f768a:{c.instructions+=5;NFSU2_TR(0x6f768a);
__builtin_memmove((R+24),(R+0),4);
}
B6f768c:{NFSU2_TR(0x6f768c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f768d:{NFSU2_TR(0x6f768d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7690:{NFSU2_TR(0x6f7690);
__builtin_memmove((R+4),(R+28),4);
}
B6f7692:{NFSU2_TR(0x6f7692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7697ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f7697:L6f7697:{c.instructions+=4;NFSU2_TR(0x6f7697);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7699:{NFSU2_TR(0x6f7699);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f769c:{NFSU2_TR(0x6f769c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f769f:{NFSU2_TR(0x6f769f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f76a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f734au);}goto L6f734a;}
}
B6f76a4:L6f76a4:{c.instructions+=3;NFSU2_TR(0x6f76a4);
__builtin_memmove((R+4),(R+28),4);
}
B6f76a6:{NFSU2_TR(0x6f76a6);
__builtin_memmove((R+24),(R+0),4);
}
B6f76a8:{NFSU2_TR(0x6f76a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f76adull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f76ad:L6f76ad:{c.instructions+=3;NFSU2_TR(0x6f76ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f76af:{NFSU2_TR(0x6f76af);
__builtin_memmove((R+4),(R+24),4);
}
B6f76b1:{NFSU2_TR(0x6f76b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f76b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f76b4:L6f76b4:{c.instructions+=6;NFSU2_TR(0x6f76b4);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f76ba:{NFSU2_TR(0x6f76ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f76be:{NFSU2_TR(0x6f76be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f76c1:{NFSU2_TR(0x6f76c1);
__builtin_memmove((R+28),(R+0),4);
}
B6f76c3:{NFSU2_TR(0x6f76c3);
__builtin_memmove((R+12),(R+8),4);
}
B6f76c5:{NFSU2_TR(0x6f76c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f76caull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f76ca:L6f76ca:{c.instructions+=4;NFSU2_TR(0x6f76ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76cb:{NFSU2_TR(0x6f76cb);
__builtin_memmove((R+24),gp(0x8ad610),4);
}
B6f76d1:{NFSU2_TR(0x6f76d1);
__builtin_memmove((R+4),(R+24),4);
}
B6f76d3:{NFSU2_TR(0x6f76d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f76d8ull));
{goto L6f7f14;}
}
B6f76d8:L6f76d8:{c.instructions+=2;NFSU2_TR(0x6f76d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f76db:{NFSU2_TR(0x6f76db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f76e0ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f76e0:L6f76e0:{c.instructions+=7;NFSU2_TR(0x6f76e0);
__builtin_memmove((R+0),(R+28),4);
}
B6f76e2:{NFSU2_TR(0x6f76e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f76e3:{NFSU2_TR(0x6f76e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f76e4:{NFSU2_TR(0x6f76e4);
__builtin_memmove((R+8),(R+12),4);
}
B6f76e6:{NFSU2_TR(0x6f76e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f76e7:{NFSU2_TR(0x6f76e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f76e8:{NFSU2_TR(0x6f76e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f76e9:L6f76e9:{c.instructions+=4;NFSU2_TR(0x6f76e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76ea:{NFSU2_TR(0x6f76ea);
__builtin_memmove((R+20),(R+16),4);
}
B6f76ec:{NFSU2_TR(0x6f76ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f76ed:{NFSU2_TR(0x6f76ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f767cu);}goto L6f767c;}
}
B6f76f2:L6f76f2:{c.instructions+=8;NFSU2_TR(0x6f76f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76f3:{NFSU2_TR(0x6f76f3);
__builtin_memmove((R+20),(R+16),4);
}
B6f76f5:{NFSU2_TR(0x6f76f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76f6:{NFSU2_TR(0x6f76f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76f7:{NFSU2_TR(0x6f76f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76f8:{NFSU2_TR(0x6f76f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f76f9:{NFSU2_TR(0x6f76f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f76fc:{NFSU2_TR(0x6f76fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7701ull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f7701:L6f7701:{c.instructions+=5;NFSU2_TR(0x6f7701);
__builtin_memmove((R+24),(R+0),4);
}
B6f7703:{NFSU2_TR(0x6f7703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7704:{NFSU2_TR(0x6f7704);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7707:{NFSU2_TR(0x6f7707);
__builtin_memmove((R+4),(R+28),4);
}
B6f7709:{NFSU2_TR(0x6f7709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f770eull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f770e:L6f770e:{c.instructions+=3;NFSU2_TR(0x6f770e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7711:{NFSU2_TR(0x6f7711);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7714:{NFSU2_TR(0x6f7714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7719ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7473u);}goto L6f7473;}
}
B6f7719:L6f7719:{c.instructions+=3;NFSU2_TR(0x6f7719);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f771d:{NFSU2_TR(0x6f771d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f771e:{NFSU2_TR(0x6f771e);
if(r1(R+518)){{goto L6f7728;}}
}
B6f7720:L6f7720:{c.instructions+=3;NFSU2_TR(0x6f7720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7723:{NFSU2_TR(0x6f7723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7726:{NFSU2_TR(0x6f7726);
{goto L6f7739;}
}
B6f7728:L6f7728:{c.instructions+=5;NFSU2_TR(0x6f7728);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f772b:{NFSU2_TR(0x6f772b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6f772f:{NFSU2_TR(0x6f772f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7730:{NFSU2_TR(0x6f7730);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7733:{NFSU2_TR(0x6f7733);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7736ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7736:L6f7736:{c.instructions+=1;NFSU2_TR(0x6f7736);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f7739:L6f7739:{c.instructions+=2;NFSU2_TR(0x6f7739);
__builtin_memmove((R+4),(R+28),4);
}
B6f773b:{NFSU2_TR(0x6f773b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7740ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f7740:L6f7740:{c.instructions+=5;NFSU2_TR(0x6f7740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7741:{NFSU2_TR(0x6f7741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7742:{NFSU2_TR(0x6f7742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7743:{NFSU2_TR(0x6f7743);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7744:{NFSU2_TR(0x6f7744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7745:L6f7745:{c.instructions+=5;NFSU2_TR(0x6f7745);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7746:{NFSU2_TR(0x6f7746);
__builtin_memmove((R+20),(R+16),4);
}
B6f7748:{NFSU2_TR(0x6f7748);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7749:{NFSU2_TR(0x6f7749);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f774c:{NFSU2_TR(0x6f774c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7751ull));
TAIL_STATIC(0x6f6c47u,6f6);
}
B6f7751:L6f7751:{c.instructions+=4;NFSU2_TR(0x6f7751);
__builtin_memmove((R+24),(R+0),4);
}
B6f7753:{NFSU2_TR(0x6f7753);
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
B6f7755:{NFSU2_TR(0x6f7755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7756:{NFSU2_TR(0x6f7756);
if(r1(R+518)){{goto L6f778d;}}
}
B6f7758:L6f7758:{c.instructions+=4;NFSU2_TR(0x6f7758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7759:{NFSU2_TR(0x6f7759);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f775c:{NFSU2_TR(0x6f775c);
__builtin_memmove((R+4),(R+28),4);
}
B6f775e:{NFSU2_TR(0x6f775e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7763ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f7763:L6f7763:{c.instructions+=4;NFSU2_TR(0x6f7763);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7765:{NFSU2_TR(0x6f7765);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7768:{NFSU2_TR(0x6f7768);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f776b:{NFSU2_TR(0x6f776b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7770ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f734au);}goto L6f734a;}
}
B6f7770:L6f7770:{c.instructions+=3;NFSU2_TR(0x6f7770);
__builtin_memmove((R+4),(R+28),4);
}
B6f7772:{NFSU2_TR(0x6f7772);
__builtin_memmove((R+24),(R+0),4);
}
B6f7774:{NFSU2_TR(0x6f7774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7779ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f7779:L6f7779:{c.instructions+=3;NFSU2_TR(0x6f7779);
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
B6f777b:{NFSU2_TR(0x6f777b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f777c:{NFSU2_TR(0x6f777c);
if(r1(R+518)){{goto L6f778d;}}
}
B6f777e:L6f777e:{c.instructions+=6;NFSU2_TR(0x6f777e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f7781:{NFSU2_TR(0x6f7781);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f7784:{NFSU2_TR(0x6f7784);
__builtin_memmove((R+4),(R+24),4);
}
B6f7786:{NFSU2_TR(0x6f7786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7787:{NFSU2_TR(0x6f7787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7788:{NFSU2_TR(0x6f7788);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f74bbu);}goto L6f74bb;}
}
B6f778d:L6f778d:{c.instructions+=3;NFSU2_TR(0x6f778d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f778e:{NFSU2_TR(0x6f778e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f778f:{NFSU2_TR(0x6f778f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7790:L6f7790:{c.instructions+=4;NFSU2_TR(0x6f7790);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7791:{NFSU2_TR(0x6f7791);
__builtin_memmove((R+20),(R+16),4);
}
B6f7793:{NFSU2_TR(0x6f7793);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7795:{NFSU2_TR(0x6f7795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f779aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f779a:L6f779a:{c.instructions+=3;NFSU2_TR(0x6f779a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f779c:{NFSU2_TR(0x6f779c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f779d:{NFSU2_TR(0x6f779d);
if(r1(R+518)){{goto L6f77b5;}}
}
B6f779f:L6f779f:{c.instructions+=7;NFSU2_TR(0x6f779f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f77a2:{NFSU2_TR(0x6f77a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77a5:{NFSU2_TR(0x6f77a5);
__builtin_memmove((R+4),(R+0),4);
}
B6f77a7:{NFSU2_TR(0x6f77a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77aa:{NFSU2_TR(0x6f77aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77ad:{NFSU2_TR(0x6f77ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f77ae:{NFSU2_TR(0x6f77ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f77b3ull));
TAIL_STATIC(0x6f82c4u,6f8);
}
B6f77b3:L6f77b3:{c.instructions+=1;NFSU2_TR(0x6f77b3);
{goto L6f77b7;}
}
B6f77b5:L6f77b5:{c.instructions+=1;NFSU2_TR(0x6f77b5);
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
B6f77b7:L6f77b7:{c.instructions+=3;NFSU2_TR(0x6f77b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f77ba:{NFSU2_TR(0x6f77ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f77bb:{NFSU2_TR(0x6f77bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f77bc:L6f77bc:{c.instructions+=4;NFSU2_TR(0x6f77bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f77bd:{NFSU2_TR(0x6f77bd);
__builtin_memmove((R+20),(R+16),4);
}
B6f77bf:{NFSU2_TR(0x6f77bf);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f77c1:{NFSU2_TR(0x6f77c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f77c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f77c6:L6f77c6:{c.instructions+=3;NFSU2_TR(0x6f77c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f77c8:{NFSU2_TR(0x6f77c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f77c9:{NFSU2_TR(0x6f77c9);
if(r1(R+518)){{goto L6f77ea;}}
}
B6f77cb:L6f77cb:{c.instructions+=10;NFSU2_TR(0x6f77cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f77ce:{NFSU2_TR(0x6f77ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77d1:{NFSU2_TR(0x6f77d1);
__builtin_memmove((R+4),(R+0),4);
}
B6f77d3:{NFSU2_TR(0x6f77d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77d6:{NFSU2_TR(0x6f77d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77d9:{NFSU2_TR(0x6f77d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77dc:{NFSU2_TR(0x6f77dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77df:{NFSU2_TR(0x6f77df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f77e2:{NFSU2_TR(0x6f77e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f77e3:{NFSU2_TR(0x6f77e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f77e8ull));
TAIL_STATIC(0x6f8309u,6f8);
}
B6f77e8:L6f77e8:{c.instructions+=1;NFSU2_TR(0x6f77e8);
{goto L6f77ec;}
}
B6f77ea:L6f77ea:{c.instructions+=1;NFSU2_TR(0x6f77ea);
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
B6f77ec:L6f77ec:{c.instructions+=3;NFSU2_TR(0x6f77ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f77ef:{NFSU2_TR(0x6f77ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f77f0:{NFSU2_TR(0x6f77f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f77f1:L6f77f1:{c.instructions+=4;NFSU2_TR(0x6f77f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f77f2:{NFSU2_TR(0x6f77f2);
__builtin_memmove((R+20),(R+16),4);
}
B6f77f4:{NFSU2_TR(0x6f77f4);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f77f6:{NFSU2_TR(0x6f77f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f77fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f77fb:L6f77fb:{c.instructions+=3;NFSU2_TR(0x6f77fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f77fd:{NFSU2_TR(0x6f77fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f77fe:{NFSU2_TR(0x6f77fe);
if(r1(R+518)){{goto L6f7825;}}
}
B6f7800:L6f7800:{c.instructions+=12;NFSU2_TR(0x6f7800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7803:{NFSU2_TR(0x6f7803);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7806:{NFSU2_TR(0x6f7806);
__builtin_memmove((R+4),(R+0),4);
}
B6f7808:{NFSU2_TR(0x6f7808);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f780b:{NFSU2_TR(0x6f780b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f780e:{NFSU2_TR(0x6f780e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7811:{NFSU2_TR(0x6f7811);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7814:{NFSU2_TR(0x6f7814);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7817:{NFSU2_TR(0x6f7817);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f781a:{NFSU2_TR(0x6f781a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f781d:{NFSU2_TR(0x6f781d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f781e:{NFSU2_TR(0x6f781e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7823ull));
TAIL_STATIC(0x6f8416u,6f8);
}
B6f7823:L6f7823:{c.instructions+=1;NFSU2_TR(0x6f7823);
{goto L6f7827;}
}
B6f7825:L6f7825:{c.instructions+=1;NFSU2_TR(0x6f7825);
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
B6f7827:L6f7827:{c.instructions+=3;NFSU2_TR(0x6f7827);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f782a:{NFSU2_TR(0x6f782a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f782b:{NFSU2_TR(0x6f782b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f782c:L6f782c:{c.instructions+=4;NFSU2_TR(0x6f782c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f782d:{NFSU2_TR(0x6f782d);
__builtin_memmove((R+20),(R+16),4);
}
B6f782f:{NFSU2_TR(0x6f782f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7831:{NFSU2_TR(0x6f7831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7836ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f7836:L6f7836:{c.instructions+=3;NFSU2_TR(0x6f7836);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7838:{NFSU2_TR(0x6f7838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7839:{NFSU2_TR(0x6f7839);
if(r1(R+518)){{goto L6f785a;}}
}
B6f783b:L6f783b:{c.instructions+=10;NFSU2_TR(0x6f783b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f783e:{NFSU2_TR(0x6f783e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7841:{NFSU2_TR(0x6f7841);
__builtin_memmove((R+4),(R+0),4);
}
B6f7843:{NFSU2_TR(0x6f7843);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7846:{NFSU2_TR(0x6f7846);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7849:{NFSU2_TR(0x6f7849);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f784c:{NFSU2_TR(0x6f784c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f784f:{NFSU2_TR(0x6f784f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7852:{NFSU2_TR(0x6f7852);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7853:{NFSU2_TR(0x6f7853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7858ull));
TAIL_STATIC(0x6f852du,6f8);
}
B6f7858:L6f7858:{c.instructions+=1;NFSU2_TR(0x6f7858);
{goto L6f785c;}
}
B6f785a:L6f785a:{c.instructions+=1;NFSU2_TR(0x6f785a);
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
B6f785c:L6f785c:{c.instructions+=3;NFSU2_TR(0x6f785c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f785f:{NFSU2_TR(0x6f785f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7860:{NFSU2_TR(0x6f7860);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7861:L6f7861:{c.instructions+=4;NFSU2_TR(0x6f7861);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7862:{NFSU2_TR(0x6f7862);
__builtin_memmove((R+20),(R+16),4);
}
B6f7864:{NFSU2_TR(0x6f7864);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7866:{NFSU2_TR(0x6f7866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f786bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f786b:L6f786b:{c.instructions+=3;NFSU2_TR(0x6f786b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f786d:{NFSU2_TR(0x6f786d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f786e:{NFSU2_TR(0x6f786e);
if(r1(R+518)){{goto L6f7886;}}
}
B6f7870:L6f7870:{c.instructions+=7;NFSU2_TR(0x6f7870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7873:{NFSU2_TR(0x6f7873);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7876:{NFSU2_TR(0x6f7876);
__builtin_memmove((R+4),(R+0),4);
}
B6f7878:{NFSU2_TR(0x6f7878);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f787b:{NFSU2_TR(0x6f787b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f787e:{NFSU2_TR(0x6f787e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f787f:{NFSU2_TR(0x6f787f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7884ull));
TAIL_STATIC(0x6f8600u,6f8);
}
B6f7884:L6f7884:{c.instructions+=1;NFSU2_TR(0x6f7884);
{goto L6f7888;}
}
B6f7886:L6f7886:{c.instructions+=1;NFSU2_TR(0x6f7886);
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
B6f7888:L6f7888:{c.instructions+=3;NFSU2_TR(0x6f7888);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f788b:{NFSU2_TR(0x6f788b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f788c:{NFSU2_TR(0x6f788c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f788d:L6f788d:{c.instructions+=8;NFSU2_TR(0x6f788d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f788e:{NFSU2_TR(0x6f788e);
__builtin_memmove((R+20),(R+16),4);
}
B6f7890:{NFSU2_TR(0x6f7890);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7891:{NFSU2_TR(0x6f7891);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7892:{NFSU2_TR(0x6f7892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7895:{NFSU2_TR(0x6f7895);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7899:{NFSU2_TR(0x6f7899);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f789a:{NFSU2_TR(0x6f789a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f78a1;}}
}
B6f789c:L6f789c:{c.instructions+=1;NFSU2_TR(0x6f789c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7388u);}goto L6f7388;}
}
B6f78a1:L6f78a1:{c.instructions+=3;NFSU2_TR(0x6f78a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f78a4:{NFSU2_TR(0x6f78a4);
__builtin_memmove((R+4),(R+12),4);
}
B6f78a6:{NFSU2_TR(0x6f78a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78abull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f78ab:L6f78ab:{c.instructions+=6;NFSU2_TR(0x6f78ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f78ae:{NFSU2_TR(0x6f78ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f78b1:{NFSU2_TR(0x6f78b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f78b4:{NFSU2_TR(0x6f78b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78b5:{NFSU2_TR(0x6f78b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f78b8:{NFSU2_TR(0x6f78b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f78bb:L6f78bb:{c.instructions+=5;NFSU2_TR(0x6f78bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f78be:{NFSU2_TR(0x6f78be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x44ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f78c1:{NFSU2_TR(0x6f78c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78c2:{NFSU2_TR(0x6f78c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f78c5:{NFSU2_TR(0x6f78c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78caull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f78ca:L6f78ca:{c.instructions+=3;NFSU2_TR(0x6f78ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f78cd:{NFSU2_TR(0x6f78cd);
__builtin_memmove((R+4),(R+12),4);
}
B6f78cf:{NFSU2_TR(0x6f78cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78d4ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f78d4:L6f78d4:{c.instructions+=6;NFSU2_TR(0x6f78d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f78d7:{NFSU2_TR(0x6f78d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f78d8:{NFSU2_TR(0x6f78d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f78d9:{NFSU2_TR(0x6f78d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f78da:{NFSU2_TR(0x6f78da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f78db:{NFSU2_TR(0x6f78db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f78dc:L6f78dc:{c.instructions+=8;NFSU2_TR(0x6f78dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78dd:{NFSU2_TR(0x6f78dd);
__builtin_memmove((R+20),(R+16),4);
}
B6f78df:{NFSU2_TR(0x6f78df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6f78e2:{NFSU2_TR(0x6f78e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78e3:{NFSU2_TR(0x6f78e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f78e6:{NFSU2_TR(0x6f78e6);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78e8:{NFSU2_TR(0x6f78e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78e9:{NFSU2_TR(0x6f78e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78eeull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f78ee:L6f78ee:{c.instructions+=4;NFSU2_TR(0x6f78ee);
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
B6f78f0:{NFSU2_TR(0x6f78f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f78f1:{NFSU2_TR(0x6f78f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f78f2:{NFSU2_TR(0x6f78f2);
if(r1(R+518)){{goto L6f790e;}}
}
B6f78f4:L6f78f4:{c.instructions+=4;NFSU2_TR(0x6f78f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f78f7:{NFSU2_TR(0x6f78f7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78f9:{NFSU2_TR(0x6f78f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f78fa:{NFSU2_TR(0x6f78fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f78ffull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f78ff:L6f78ff:{c.instructions+=3;NFSU2_TR(0x6f78ff);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7901:{NFSU2_TR(0x6f7901);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7902:{NFSU2_TR(0x6f7902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7907ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f7907:L6f7907:{c.instructions+=5;NFSU2_TR(0x6f7907);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f7909:{NFSU2_TR(0x6f7909);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f790a:{NFSU2_TR(0x6f790a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f790b:{NFSU2_TR(0x6f790b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f790c:{NFSU2_TR(0x6f790c);
{goto L6f7957;}
}
B6f790e:L6f790e:{c.instructions+=3;NFSU2_TR(0x6f790e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6f7910:{NFSU2_TR(0x6f7910);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f7912:{NFSU2_TR(0x6f7912);
if(r1(R+518)){{goto L6f7925;}}
}
B6f7914:L6f7914:{c.instructions+=2;NFSU2_TR(0x6f7914);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5cull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5cull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f7916:{NFSU2_TR(0x6f7916);
if(r1(R+518)){{goto L6f7925;}}
}
B6f7918:L6f7918:{c.instructions+=3;NFSU2_TR(0x6f7918);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f791d:{NFSU2_TR(0x6f791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7923:{NFSU2_TR(0x6f7923);
{goto L6f7990;}
}
B6f7925:L6f7925:{c.instructions+=4;NFSU2_TR(0x6f7925);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7928:{NFSU2_TR(0x6f7928);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f792a:{NFSU2_TR(0x6f792a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f792b:{NFSU2_TR(0x6f792b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7930ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f7930:L6f7930:{c.instructions+=5;NFSU2_TR(0x6f7930);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f7935:{NFSU2_TR(0x6f7935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f793b:{NFSU2_TR(0x6f793b);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f793d:{NFSU2_TR(0x6f793d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f793f:{NFSU2_TR(0x6f793f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7944ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f7944:L6f7944:{c.instructions+=7;NFSU2_TR(0x6f7944);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f794a:{NFSU2_TR(0x6f794a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7950:{NFSU2_TR(0x6f7950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f7952:{NFSU2_TR(0x6f7952);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6f7954:{NFSU2_TR(0x6f7954);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f7955:{NFSU2_TR(0x6f7955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7956:{NFSU2_TR(0x6f7956);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7957:L6f7957:{c.instructions+=3;NFSU2_TR(0x6f7957);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f795a:{NFSU2_TR(0x6f795a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f795b:{NFSU2_TR(0x6f795b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7960ull));
TAIL_STATIC(0x75c840u,75c);
}
B6f7960:L6f7960:{c.instructions+=4;NFSU2_TR(0x6f7960);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f7965:{NFSU2_TR(0x6f7965);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7968:{NFSU2_TR(0x6f7968);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6f796b:{NFSU2_TR(0x6f796b);
{goto L6f798a;}
}
B6f796d:L6f796d:{c.instructions+=5;NFSU2_TR(0x6f796d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7973:{NFSU2_TR(0x6f7973);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7976:{NFSU2_TR(0x6f7976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7977:{NFSU2_TR(0x6f7977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7979:{NFSU2_TR(0x6f7979);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f797cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f797c:L6f797c:{c.instructions+=2;NFSU2_TR(0x6f797c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f797d:{NFSU2_TR(0x6f797d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7982ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6f7982:L6f7982:{c.instructions+=4;NFSU2_TR(0x6f7982);
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
B6f7984:{NFSU2_TR(0x6f7984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7985:{NFSU2_TR(0x6f7985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7986:{NFSU2_TR(0x6f7986);
if(r1(R+518)){{goto L6f7993;}}
}
B6f7988:L6f7988:{c.instructions+=1;NFSU2_TR(0x6f7988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f798a:L6f798a:{c.instructions+=2;NFSU2_TR(0x6f798a);
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
B6f798c:{NFSU2_TR(0x6f798c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f796du);}goto L6f796d;}}
}
B6f798e:L6f798e:{c.instructions+=1;NFSU2_TR(0x6f798e);
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
B6f7990:L6f7990:{c.instructions+=3;NFSU2_TR(0x6f7990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7991:{NFSU2_TR(0x6f7991);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7992:{NFSU2_TR(0x6f7992);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7993:L6f7993:{c.instructions+=2;NFSU2_TR(0x6f7993);
__builtin_memmove((R+0),(R+24),4);
}
B6f7995:{NFSU2_TR(0x6f7995);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7990u);}goto L6f7990;}
}
B6f7997:L6f7997:{c.instructions+=4;NFSU2_TR(0x6f7997);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7998:{NFSU2_TR(0x6f7998);
__builtin_memmove((R+20),(R+16),4);
}
B6f799a:{NFSU2_TR(0x6f799a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f799d:{NFSU2_TR(0x6f799d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f79a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f79a2:L6f79a2:{c.instructions+=5;NFSU2_TR(0x6f79a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f79a3:{NFSU2_TR(0x6f79a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f79a9:{NFSU2_TR(0x6f79a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f79ab:{NFSU2_TR(0x6f79ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f79ac:{NFSU2_TR(0x6f79ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f79af:L6f79af:{c.instructions+=11;NFSU2_TR(0x6f79af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f79b0:{NFSU2_TR(0x6f79b0);
__builtin_memmove((R+20),(R+16),4);
}
B6f79b2:{NFSU2_TR(0x6f79b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6f79b8:{NFSU2_TR(0x6f79b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f79bc:{NFSU2_TR(0x6f79bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f79bd:{NFSU2_TR(0x6f79bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f79be:{NFSU2_TR(0x6f79be);
__builtin_memmove((R+24),(R+0),4);
}
B6f79c0:{NFSU2_TR(0x6f79c0);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f79c5:{NFSU2_TR(0x6f79c5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f79cb:{NFSU2_TR(0x6f79cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f79cc:{NFSU2_TR(0x6f79cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7a49;}}
}
B6f79ce:L6f79ce:{c.instructions+=3;NFSU2_TR(0x6f79ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f79d0:{NFSU2_TR(0x6f79d0);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ab0),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f79d6:{NFSU2_TR(0x6f79d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f7aad;}}
}
B6f79dc:L6f79dc:{c.instructions+=5;NFSU2_TR(0x6f79dc);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f79e1:{NFSU2_TR(0x6f79e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f79e7:{NFSU2_TR(0x6f79e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6f79ea:{NFSU2_TR(0x6f79ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f79ec:{NFSU2_TR(0x6f79ec);
if(r1(R+518)){{goto L6f7aad;}}
}
B6f79f2:L6f79f2:{c.instructions+=2;NFSU2_TR(0x6f79f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f79f3:{NFSU2_TR(0x6f79f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f79f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f79f8:L6f79f8:{c.instructions+=4;NFSU2_TR(0x6f79f8);
__builtin_memmove((R+24),(R+0),4);
}
B6f79fa:{NFSU2_TR(0x6f79fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f79fe:{NFSU2_TR(0x6f79fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f79ff:{NFSU2_TR(0x6f79ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7a06;}}
}
B6f7a01:L6f7a01:{c.instructions+=1;NFSU2_TR(0x6f7a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7388u);}goto L6f7388;}
}
B6f7a06:L6f7a06:{c.instructions+=6;NFSU2_TR(0x6f7a06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7a09:{NFSU2_TR(0x6f7a09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7a0f:{NFSU2_TR(0x6f7a0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a10:{NFSU2_TR(0x6f7a10);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a15:{NFSU2_TR(0x6f7a15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a16:{NFSU2_TR(0x6f7a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a1bull));
TAIL_STATIC(0x75c784u,75c);
}
B6f7a1b:L6f7a1b:{c.instructions+=9;NFSU2_TR(0x6f7a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7a21:{NFSU2_TR(0x6f7a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7a23:{NFSU2_TR(0x6f7a23);
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
B6f7a26:{NFSU2_TR(0x6f7a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f7a29:{NFSU2_TR(0x6f7a29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a2a:{NFSU2_TR(0x6f7a2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7a2d:{NFSU2_TR(0x6f7a2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f7a33:{NFSU2_TR(0x6f7a33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a34:{NFSU2_TR(0x6f7a34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7a37:L6f7a37:{c.instructions+=3;NFSU2_TR(0x6f7a37);
__builtin_memmove((R+12),(R+0),4);
}
B6f7a39:{NFSU2_TR(0x6f7a39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7a3c:{NFSU2_TR(0x6f7a3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7a65;}}
}
B6f7a3e:L6f7a3e:{c.instructions+=3;NFSU2_TR(0x6f7a3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f7a3f:{NFSU2_TR(0x6f7a3f);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ab0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f7a45:{NFSU2_TR(0x6f7a45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f79dcu);}goto L6f79dc;}}
}
B6f7a47:L6f7a47:{c.instructions+=1;NFSU2_TR(0x6f7a47);
{goto L6f7a60;}
}
B6f7a49:L6f7a49:{c.instructions+=7;NFSU2_TR(0x6f7a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7a4f:{NFSU2_TR(0x6f7a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7a51:{NFSU2_TR(0x6f7a51);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f7a54:{NFSU2_TR(0x6f7a54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a55:{NFSU2_TR(0x6f7a55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7a58:{NFSU2_TR(0x6f7a58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7a5b:{NFSU2_TR(0x6f7a5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7a5e:L6f7a5e:{c.instructions+=1;NFSU2_TR(0x6f7a5e);
__builtin_memmove((R+12),(R+0),4);
}
B6f7a60:L6f7a60:{c.instructions+=2;NFSU2_TR(0x6f7a60);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7a63:{NFSU2_TR(0x6f7a63);
if(r1(R+518)){{goto L6f7aad;}}
}
B6f7a65:L6f7a65:{c.instructions+=2;NFSU2_TR(0x6f7a65);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
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
B6f7a69:{NFSU2_TR(0x6f7a69);
if(r1(R+518)){{goto L6f7a7c;}}
}
B6f7a6b:L6f7a6b:{c.instructions+=4;NFSU2_TR(0x6f7a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7a71:{NFSU2_TR(0x6f7a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7a73:{NFSU2_TR(0x6f7a73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a74:{NFSU2_TR(0x6f7a74);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a77ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7a77:L6f7a77:{c.instructions+=3;NFSU2_TR(0x6f7a77);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7a79:{NFSU2_TR(0x6f7a79);
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
B6f7a7a:{NFSU2_TR(0x6f7a7a);
{goto L6f7ab0;}
}
B6f7a7c:L6f7a7c:{c.instructions+=1;NFSU2_TR(0x6f7a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a81ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7112u);}goto L6f7112;}
}
B6f7a81:L6f7a81:{c.instructions+=7;NFSU2_TR(0x6f7a81);
__builtin_memmove((R+28),(R+0),4);
}
B6f7a83:{NFSU2_TR(0x6f7a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7a86:{NFSU2_TR(0x6f7a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7a89:{NFSU2_TR(0x6f7a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7a8f:{NFSU2_TR(0x6f7a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7a91:{NFSU2_TR(0x6f7a91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7a92:{NFSU2_TR(0x6f7a92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7a95ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7a95:L6f7a95:{c.instructions+=6;NFSU2_TR(0x6f7a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7a98:{NFSU2_TR(0x6f7a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7a9b:{NFSU2_TR(0x6f7a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7a9e:{NFSU2_TR(0x6f7a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7aa1:{NFSU2_TR(0x6f7aa1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6f7aa4:{NFSU2_TR(0x6f7aa4);
if(r1(R+518)){{goto L6f7aa9;}}
}
B6f7aa6:L6f7aa6:{c.instructions+=1;NFSU2_TR(0x6f7aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7aa9:L6f7aa9:{c.instructions+=2;NFSU2_TR(0x6f7aa9);
__builtin_memmove((R+0),(R+28),4);
}
B6f7aab:{NFSU2_TR(0x6f7aab);
{goto L6f7ab0;}
}
B6f7aad:L6f7aad:{c.instructions+=1;NFSU2_TR(0x6f7aad);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f7ab0:L6f7ab0:{c.instructions+=5;NFSU2_TR(0x6f7ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7ab1:{NFSU2_TR(0x6f7ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7ab2:{NFSU2_TR(0x6f7ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7ab3:{NFSU2_TR(0x6f7ab3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7ab4:{NFSU2_TR(0x6f7ab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7ab5:L6f7ab5:{c.instructions+=6;NFSU2_TR(0x6f7ab5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7ab6:{NFSU2_TR(0x6f7ab6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7ab7:{NFSU2_TR(0x6f7ab7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f7ab9:{NFSU2_TR(0x6f7ab9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f7abb:{NFSU2_TR(0x6f7abb);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ab8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7ac1:{NFSU2_TR(0x6f7ac1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f7ad3;}}
}
B6f7ac3:L6f7ac3:{c.instructions+=2;NFSU2_TR(0x6f7ac3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7ac4:{NFSU2_TR(0x6f7ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7ac9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f72a1u);}goto L6f72a1;}
}
B6f7ac9:L6f7ac9:{c.instructions+=4;NFSU2_TR(0x6f7ac9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f7aca:{NFSU2_TR(0x6f7aca);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ab8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f7ad0:{NFSU2_TR(0x6f7ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7ad1:{NFSU2_TR(0x6f7ad1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7ac3u);}goto L6f7ac3;}}
}
B6f7ad3:L6f7ad3:{c.instructions+=3;NFSU2_TR(0x6f7ad3);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7ad9:{NFSU2_TR(0x6f7ad9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B6f7adc:{NFSU2_TR(0x6f7adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7ae1ull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f7ae1:L6f7ae1:{c.instructions+=3;NFSU2_TR(0x6f7ae1);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7ae7:{NFSU2_TR(0x6f7ae7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B6f7aea:{NFSU2_TR(0x6f7aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7aefull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f7aef:L6f7aef:{c.instructions+=3;NFSU2_TR(0x6f7aef);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7af5:{NFSU2_TR(0x6f7af5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f7af8:{NFSU2_TR(0x6f7af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7afdull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f7afd:L6f7afd:{c.instructions+=3;NFSU2_TR(0x6f7afd);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7b03:{NFSU2_TR(0x6f7b03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b04:{NFSU2_TR(0x6f7b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b09ull));
TAIL_STATIC(0x6f8169u,6f8);
}
B6f7b09:L6f7b09:{c.instructions+=4;NFSU2_TR(0x6f7b09);
__builtin_memmove((R+0),gp(0x8ad614),4);
}
B6f7b0e:{NFSU2_TR(0x6f7b0e);
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
B6f7b10:{NFSU2_TR(0x6f7b10);
__builtin_memmove(gp(0x8ad610),(R+12),4);
}
B6f7b16:{NFSU2_TR(0x6f7b16);
if(r1(R+518)){{goto L6f7b2b;}}
}
B6f7b18:L6f7b18:{c.instructions+=5;NFSU2_TR(0x6f7b18);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f7b1e:{NFSU2_TR(0x6f7b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f7b20:{NFSU2_TR(0x6f7b20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b21:{NFSU2_TR(0x6f7b21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b22:{NFSU2_TR(0x6f7b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b25ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7b25:L6f7b25:{c.instructions+=1;NFSU2_TR(0x6f7b25);
__builtin_memmove(gp(0x8ad614),(R+12),4);
}
B6f7b2b:L6f7b2b:{c.instructions+=4;NFSU2_TR(0x6f7b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7b2c:{NFSU2_TR(0x6f7b2c);
__builtin_memmove(gp(0x8ad62c),(R+12),1);
}
B6f7b32:{NFSU2_TR(0x6f7b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7b33:{NFSU2_TR(0x6f7b33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7b34:L6f7b34:{c.instructions+=5;NFSU2_TR(0x6f7b34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b35:{NFSU2_TR(0x6f7b35);
__builtin_memmove((R+20),(R+16),4);
}
B6f7b37:{NFSU2_TR(0x6f7b37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b38:{NFSU2_TR(0x6f7b38);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b3a:{NFSU2_TR(0x6f7b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f7b3f:L6f7b3f:{c.instructions+=4;NFSU2_TR(0x6f7b3f);
__builtin_memmove((R+24),(R+0),4);
}
B6f7b41:{NFSU2_TR(0x6f7b41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7b43:{NFSU2_TR(0x6f7b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7b44:{NFSU2_TR(0x6f7b44);
if(r1(R+518)){{goto L6f7b62;}}
}
B6f7b46:L6f7b46:{c.instructions+=2;NFSU2_TR(0x6f7b46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7b49:{NFSU2_TR(0x6f7b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f7b4e:L6f7b4e:{c.instructions+=7;NFSU2_TR(0x6f7b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7b4f:{NFSU2_TR(0x6f7b4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b50:{NFSU2_TR(0x6f7b50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7b53:{NFSU2_TR(0x6f7b53);
__builtin_memmove((R+4),(R+24),4);
}
B6f7b55:{NFSU2_TR(0x6f7b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7b58:{NFSU2_TR(0x6f7b58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7b5b:{NFSU2_TR(0x6f7b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b60ull));
TAIL_STATIC(0x6f8188u,6f8);
}
B6f7b60:L6f7b60:{c.instructions+=1;NFSU2_TR(0x6f7b60);
{goto L6f7b64;}
}
B6f7b62:L6f7b62:{c.instructions+=1;NFSU2_TR(0x6f7b62);
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
B6f7b64:L6f7b64:{c.instructions+=4;NFSU2_TR(0x6f7b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7b67:{NFSU2_TR(0x6f7b67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7b68:{NFSU2_TR(0x6f7b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7b69:{NFSU2_TR(0x6f7b69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7b6a:L6f7b6a:{c.instructions+=9;NFSU2_TR(0x6f7b6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b6b:{NFSU2_TR(0x6f7b6b);
__builtin_memmove((R+20),(R+16),4);
}
B6f7b6d:{NFSU2_TR(0x6f7b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6f7b73:{NFSU2_TR(0x6f7b73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b74:{NFSU2_TR(0x6f7b74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b75:{NFSU2_TR(0x6f7b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7b78:{NFSU2_TR(0x6f7b78);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b7a:{NFSU2_TR(0x6f7b7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7b7b:{NFSU2_TR(0x6f7b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b80ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f7b80:L6f7b80:{c.instructions+=4;NFSU2_TR(0x6f7b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7b82:{NFSU2_TR(0x6f7b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7b83:{NFSU2_TR(0x6f7b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7b84:{NFSU2_TR(0x6f7b84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7bec;}}
}
B6f7b86:L6f7b86:{c.instructions+=4;NFSU2_TR(0x6f7b86);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f7b8b:{NFSU2_TR(0x6f7b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7b91:{NFSU2_TR(0x6f7b91);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f7b93:{NFSU2_TR(0x6f7b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7b98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f7b98:L6f7b98:{c.instructions+=5;NFSU2_TR(0x6f7b98);
__builtin_memmove((R+12),(R+0),4);
}
B6f7b9a:{NFSU2_TR(0x6f7b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7b9b:{NFSU2_TR(0x6f7b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7ba1:{NFSU2_TR(0x6f7ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7ba3:{NFSU2_TR(0x6f7ba3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7ba6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f7ba6:L6f7ba6:{c.instructions+=1;NFSU2_TR(0x6f7ba6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f7bac:L6f7bac:{c.instructions+=6;NFSU2_TR(0x6f7bac);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f7bae:{NFSU2_TR(0x6f7bae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f7baf:{NFSU2_TR(0x6f7baf);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B6f7bb1:{NFSU2_TR(0x6f7bb1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f7bb2:{NFSU2_TR(0x6f7bb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f7bb4:{NFSU2_TR(0x6f7bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7bacu);}goto L6f7bac;}}
}
B6f7bb6:L6f7bb6:{c.instructions+=2;NFSU2_TR(0x6f7bb6);
__builtin_memmove((R+0),(R+24),4);
}
B6f7bb8:{NFSU2_TR(0x6f7bb8);
__builtin_memmove((R+8),(R+24),4);
}
B6f7bba:L6f7bba:{c.instructions+=4;NFSU2_TR(0x6f7bba);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f7bbc:{NFSU2_TR(0x6f7bbc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f7bbd:{NFSU2_TR(0x6f7bbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f7bbf:{NFSU2_TR(0x6f7bbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7bbau);}goto L6f7bba;}}
}
B6f7bc1:L6f7bc1:{c.instructions+=4;NFSU2_TR(0x6f7bc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7bc2:{NFSU2_TR(0x6f7bc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7bc8:{NFSU2_TR(0x6f7bc8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6f7bca:{NFSU2_TR(0x6f7bca);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f7bcb:L6f7bcb:{c.instructions+=4;NFSU2_TR(0x6f7bcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f7bce:{NFSU2_TR(0x6f7bce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f7bcf:{NFSU2_TR(0x6f7bcf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f7bd1:{NFSU2_TR(0x6f7bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7bcbu);}goto L6f7bcb;}}
}
B6f7bd3:L6f7bd3:{c.instructions+=3;NFSU2_TR(0x6f7bd3);
__builtin_memmove((R+4),(R+0),4);
}
B6f7bd5:{NFSU2_TR(0x6f7bd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f7bd8:{NFSU2_TR(0x6f7bd8);
__builtin_memmove((R+24),(R+8),4);
}
B6f7bda:L6f7bda:{c.instructions+=1;NFSU2_TR(0x6f7bda);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f7bdc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7bdau);}goto L6f7bda;}
}
B6f7bdc:L6f7bdc:{c.instructions+=2;NFSU2_TR(0x6f7bdc);
__builtin_memmove((R+4),(R+0),4);
}
B6f7bde:{NFSU2_TR(0x6f7bde);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6f7be1:L6f7be1:{c.instructions+=1;NFSU2_TR(0x6f7be1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f7be3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7be1u);}goto L6f7be1;}
}
B6f7be3:L6f7be3:{c.instructions+=3;NFSU2_TR(0x6f7be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7be9:{NFSU2_TR(0x6f7be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7bea:{NFSU2_TR(0x6f7bea);
{goto L6f7bf5;}
}
B6f7bec:L6f7bec:{c.instructions+=2;NFSU2_TR(0x6f7bec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7bed:{NFSU2_TR(0x6f7bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7bf2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f7bf2:L6f7bf2:{c.instructions+=2;NFSU2_TR(0x6f7bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7bf3:{NFSU2_TR(0x6f7bf3);
__builtin_memmove((R+12),(R+0),4);
}
B6f7bf5:L6f7bf5:{c.instructions+=2;NFSU2_TR(0x6f7bf5);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7bf7:{NFSU2_TR(0x6f7bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7bfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f7bfc:L6f7bfc:{c.instructions+=3;NFSU2_TR(0x6f7bfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7bfe:{NFSU2_TR(0x6f7bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7bff:{NFSU2_TR(0x6f7bff);
if(r1(R+518)){{goto L6f7c12;}}
}
B6f7c01:L6f7c01:{c.instructions+=6;NFSU2_TR(0x6f7c01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c02:{NFSU2_TR(0x6f7c02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c05:{NFSU2_TR(0x6f7c05);
__builtin_memmove((R+4),(R+0),4);
}
B6f7c07:{NFSU2_TR(0x6f7c07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c0a:{NFSU2_TR(0x6f7c0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c0b:{NFSU2_TR(0x6f7c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c10ull));
TAIL_STATIC(0x6f81d5u,6f8);
}
B6f7c10:L6f7c10:{c.instructions+=1;NFSU2_TR(0x6f7c10);
{goto L6f7c14;}
}
B6f7c12:L6f7c12:{c.instructions+=1;NFSU2_TR(0x6f7c12);
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
B6f7c14:L6f7c14:{c.instructions+=5;NFSU2_TR(0x6f7c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7c17:{NFSU2_TR(0x6f7c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7c18:{NFSU2_TR(0x6f7c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7c19:{NFSU2_TR(0x6f7c19);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7c1a:{NFSU2_TR(0x6f7c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7c1b:L6f7c1b:{c.instructions+=5;NFSU2_TR(0x6f7c1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c1c:{NFSU2_TR(0x6f7c1c);
__builtin_memmove((R+20),(R+16),4);
}
B6f7c1e:{NFSU2_TR(0x6f7c1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c1f:{NFSU2_TR(0x6f7c1f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c21:{NFSU2_TR(0x6f7c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c26ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f70acu);}goto L6f70ac;}
}
B6f7c26:L6f7c26:{c.instructions+=4;NFSU2_TR(0x6f7c26);
__builtin_memmove((R+24),(R+0),4);
}
B6f7c28:{NFSU2_TR(0x6f7c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7c2a:{NFSU2_TR(0x6f7c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7c2b:{NFSU2_TR(0x6f7c2b);
if(r1(R+518)){{goto L6f7c4c;}}
}
B6f7c2d:L6f7c2d:{c.instructions+=2;NFSU2_TR(0x6f7c2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c30:{NFSU2_TR(0x6f7c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f7c35:L6f7c35:{c.instructions+=8;NFSU2_TR(0x6f7c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7c36:{NFSU2_TR(0x6f7c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c37:{NFSU2_TR(0x6f7c37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c3a:{NFSU2_TR(0x6f7c3a);
__builtin_memmove((R+4),(R+24),4);
}
B6f7c3c:{NFSU2_TR(0x6f7c3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c3f:{NFSU2_TR(0x6f7c3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c42:{NFSU2_TR(0x6f7c42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c45:{NFSU2_TR(0x6f7c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c4aull));
TAIL_STATIC(0x6f824fu,6f8);
}
B6f7c4a:L6f7c4a:{c.instructions+=1;NFSU2_TR(0x6f7c4a);
{goto L6f7c4e;}
}
B6f7c4c:L6f7c4c:{c.instructions+=1;NFSU2_TR(0x6f7c4c);
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
B6f7c4e:L6f7c4e:{c.instructions+=4;NFSU2_TR(0x6f7c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7c51:{NFSU2_TR(0x6f7c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7c52:{NFSU2_TR(0x6f7c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7c53:{NFSU2_TR(0x6f7c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7c54:L6f7c54:{c.instructions+=5;NFSU2_TR(0x6f7c54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c55:{NFSU2_TR(0x6f7c55);
__builtin_memmove((R+20),(R+16),4);
}
B6f7c57:{NFSU2_TR(0x6f7c57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c58:{NFSU2_TR(0x6f7c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c5b:{NFSU2_TR(0x6f7c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f7c60:L6f7c60:{c.instructions+=5;NFSU2_TR(0x6f7c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7c63:{NFSU2_TR(0x6f7c63);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B6f7c66:{NFSU2_TR(0x6f7c66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c67:{NFSU2_TR(0x6f7c67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c6a:{NFSU2_TR(0x6f7c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f79afu);}goto L6f79af;}
}
B6f7c6f:L6f7c6f:{c.instructions+=4;NFSU2_TR(0x6f7c6f);
__builtin_memmove((R+24),(R+0),4);
}
B6f7c71:{NFSU2_TR(0x6f7c71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f7c74:{NFSU2_TR(0x6f7c74);
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
B6f7c77:{NFSU2_TR(0x6f7c77);
if(r1(R+518)){{goto L6f7c91;}}
}
B6f7c79:L6f7c79:{c.instructions+=4;NFSU2_TR(0x6f7c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c7c:{NFSU2_TR(0x6f7c7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7c7f:{NFSU2_TR(0x6f7c7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7c80:{NFSU2_TR(0x6f7c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c85ull));
TAIL_STATIC(0x6f6d81u,6f6);
}
B6f7c85:L6f7c85:{c.instructions+=2;NFSU2_TR(0x6f7c85);
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
B6f7c88:{NFSU2_TR(0x6f7c88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7c8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f717cu);}goto L6f717c;}
}
B6f7c8d:L6f7c8d:{c.instructions+=2;NFSU2_TR(0x6f7c8d);
w1(R+0,u8(0x1ull));
}
B6f7c8f:{NFSU2_TR(0x6f7c8f);
{goto L6f7ca5;}
}
B6f7c91:L6f7c91:{c.instructions+=8;NFSU2_TR(0x6f7c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7c94:{NFSU2_TR(0x6f7c94);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f7c96:{NFSU2_TR(0x6f7c96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f7c98:{NFSU2_TR(0x6f7c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7c9b:{NFSU2_TR(0x6f7c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7c9e:{NFSU2_TR(0x6f7c9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f7ca0:{NFSU2_TR(0x6f7ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7ca3:{NFSU2_TR(0x6f7ca3);
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
B6f7ca5:L6f7ca5:{c.instructions+=3;NFSU2_TR(0x6f7ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7ca6:{NFSU2_TR(0x6f7ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7ca7:{NFSU2_TR(0x6f7ca7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7ca8:L6f7ca8:{c.instructions+=10;NFSU2_TR(0x6f7ca8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7ca9:{NFSU2_TR(0x6f7ca9);
__builtin_memmove((R+20),(R+16),4);
}
B6f7cab:{NFSU2_TR(0x6f7cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20cull))));
}
B6f7cb1:{NFSU2_TR(0x6f7cb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7cb2:{NFSU2_TR(0x6f7cb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7cb3:{NFSU2_TR(0x6f7cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7cb6:{NFSU2_TR(0x6f7cb6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f7cb8:{NFSU2_TR(0x6f7cb8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6f7cba:{NFSU2_TR(0x6f7cba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7cbb:{NFSU2_TR(0x6f7cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7cec;}}
}
B6f7cbd:L6f7cbd:{c.instructions+=1;NFSU2_TR(0x6f7cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7cc2ull));
TAIL_STATIC(0x6f6d4fu,6f6);
}
B6f7cc2:L6f7cc2:{c.instructions+=10;NFSU2_TR(0x6f7cc2);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f7cc8:{NFSU2_TR(0x6f7cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7ccb:{NFSU2_TR(0x6f7ccb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7ccc:{NFSU2_TR(0x6f7ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7cd3:{NFSU2_TR(0x6f7cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x7c2fccull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7cda:{NFSU2_TR(0x6f7cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7cdd:{NFSU2_TR(0x6f7cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f7cdf:{NFSU2_TR(0x6f7cdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7ce0:{NFSU2_TR(0x6f7ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7ce3:{NFSU2_TR(0x6f7ce3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7ce5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f7ce5:L6f7ce5:{c.instructions+=2;NFSU2_TR(0x6f7ce5);
__builtin_memmove(gp(0x8ad614),(R+0),4);
}
B6f7cea:{NFSU2_TR(0x6f7cea);
__builtin_memmove((R+24),(R+0),4);
}
B6f7cec:L6f7cec:{c.instructions+=3;NFSU2_TR(0x6f7cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7cef:{NFSU2_TR(0x6f7cef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7cf0:{NFSU2_TR(0x6f7cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7cf5ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f7cf5:L6f7cf5:{c.instructions+=4;NFSU2_TR(0x6f7cf5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7cf7:{NFSU2_TR(0x6f7cf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7cf8:{NFSU2_TR(0x6f7cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7cf9:{NFSU2_TR(0x6f7cf9);
if(r1(R+518)){{goto L6f7d04;}}
}
B6f7cfb:L6f7cfb:{c.instructions+=2;NFSU2_TR(0x6f7cfb);
__builtin_memmove((R+4),(R+24),4);
}
B6f7cfd:{NFSU2_TR(0x6f7cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7d02ull));
TAIL_STATIC(0x6f80feu,6f8);
}
B6f7d02:L6f7d02:{c.instructions+=1;NFSU2_TR(0x6f7d02);
{goto L6f7d06;}
}
B6f7d04:L6f7d04:{c.instructions+=1;NFSU2_TR(0x6f7d04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7d06:L6f7d06:{c.instructions+=21;NFSU2_TR(0x6f7d06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7d0c:{NFSU2_TR(0x6f7d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7d12:{NFSU2_TR(0x6f7d12);
__builtin_memmove((R+8),gp(0x813ab0),4);
}
B6f7d18:{NFSU2_TR(0x6f7d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f7d1b:{NFSU2_TR(0x6f7d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7d21:{NFSU2_TR(0x6f7d21);
__builtin_memmove((R+8),gp(0x813ab4),4);
}
B6f7d27:{NFSU2_TR(0x6f7d27);
u8 U[12];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f7d2b:{NFSU2_TR(0x6f7d2b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B6f7d2e:{NFSU2_TR(0x6f7d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7d34:{NFSU2_TR(0x6f7d34);
__builtin_memmove((R+8),gp(0x813aac),4);
}
B6f7d3a:{NFSU2_TR(0x6f7d3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f7d3d:{NFSU2_TR(0x6f7d3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f7d41:{NFSU2_TR(0x6f7d41);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B6f7d44:{NFSU2_TR(0x6f7d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7d4a:{NFSU2_TR(0x6f7d4a);
__builtin_memmove((R+8),gp(0x813aa8),4);
}
B6f7d50:{NFSU2_TR(0x6f7d50);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f7d53:{NFSU2_TR(0x6f7d53);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6f7d55:{NFSU2_TR(0x6f7d55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7d58:{NFSU2_TR(0x6f7d58);
__builtin_memmove(gp(0x8ad610),(R+0),4);
}
B6f7d5d:{NFSU2_TR(0x6f7d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7d63:{NFSU2_TR(0x6f7d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7d68ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f7d68:L6f7d68:{c.instructions+=3;NFSU2_TR(0x6f7d68);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f7d6e:{NFSU2_TR(0x6f7d6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B6f7d71:{NFSU2_TR(0x6f7d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7d76ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f7d76:L6f7d76:{c.instructions+=4;NFSU2_TR(0x6f7d76);
u8 U[8];
__builtin_memmove((U+0),gp(0x813aac),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7d7d:{NFSU2_TR(0x6f7d7d);
__builtin_memmove((R+24),gp(0x8ad610),4);
}
B6f7d83:{NFSU2_TR(0x6f7d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f7d89:{NFSU2_TR(0x6f7d89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f7d9f;}}
}
B6f7d8b:L6f7d8b:{c.instructions+=3;NFSU2_TR(0x6f7d8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7d8c:{NFSU2_TR(0x6f7d8c);
__builtin_memmove((R+4),(R+24),4);
}
B6f7d8e:{NFSU2_TR(0x6f7d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7d93ull));
{goto L6f7f14;}
}
B6f7d93:L6f7d93:{c.instructions+=4;NFSU2_TR(0x6f7d93);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f7d94:{NFSU2_TR(0x6f7d94);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6f7d97:{NFSU2_TR(0x6f7d97);
u8 U[8];
__builtin_memmove((U+0),gp(0x813aac),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f7d9d:{NFSU2_TR(0x6f7d9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7d8bu);}goto L6f7d8b;}}
}
B6f7d9f:L6f7d9f:{c.instructions+=4;NFSU2_TR(0x6f7d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f7da5:{NFSU2_TR(0x6f7da5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f7da7:{NFSU2_TR(0x6f7da7);
u8 U[8];
__builtin_memmove((U+0),gp(0x813aa8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7dad:{NFSU2_TR(0x6f7dad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f7dc4;}}
}
B6f7daf:L6f7daf:{c.instructions+=3;NFSU2_TR(0x6f7daf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7db0:{NFSU2_TR(0x6f7db0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7db3:{NFSU2_TR(0x6f7db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7db8ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f7db8:L6f7db8:{c.instructions+=4;NFSU2_TR(0x6f7db8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f7db9:{NFSU2_TR(0x6f7db9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B6f7dbc:{NFSU2_TR(0x6f7dbc);
u8 U[8];
__builtin_memmove((U+0),gp(0x813aa8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f7dc2:{NFSU2_TR(0x6f7dc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7dafu);}goto L6f7daf;}}
}
B6f7dc4:L6f7dc4:{c.instructions+=4;NFSU2_TR(0x6f7dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f7dca:{NFSU2_TR(0x6f7dca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f7dcc:{NFSU2_TR(0x6f7dcc);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ab8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7dd2:{NFSU2_TR(0x6f7dd2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f7dec;}}
}
B6f7dd4:L6f7dd4:{c.instructions+=3;NFSU2_TR(0x6f7dd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7dd5:{NFSU2_TR(0x6f7dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7dd8:{NFSU2_TR(0x6f7dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7dddull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f7ddd:L6f7ddd:{c.instructions+=4;NFSU2_TR(0x6f7ddd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f7dde:{NFSU2_TR(0x6f7dde);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x84ull))));
}
B6f7de4:{NFSU2_TR(0x6f7de4);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ab8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f7dea:{NFSU2_TR(0x6f7dea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7dd4u);}goto L6f7dd4;}}
}
B6f7dec:L6f7dec:{c.instructions+=3;NFSU2_TR(0x6f7dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7def:{NFSU2_TR(0x6f7def);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7df6:{NFSU2_TR(0x6f7df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7dfbull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f7dfb:L6f7dfb:{c.instructions+=1;NFSU2_TR(0x6f7dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e00ull));
TAIL_STATIC(0x6faedfu,6fa);
}
B6f7e00:L6f7e00:{c.instructions+=3;NFSU2_TR(0x6f7e00);
u8 U[4];
w4(U+0,u32(0x8ad618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e05:{NFSU2_TR(0x6f7e05);
__builtin_memmove((R+28),(R+0),4);
}
B6f7e07:{NFSU2_TR(0x6f7e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7266u);}goto L6f7266;}
}
B6f7e0c:L6f7e0c:{c.instructions+=4;NFSU2_TR(0x6f7e0c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f7e0e:{NFSU2_TR(0x6f7e0e);
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
B6f7e10:{NFSU2_TR(0x6f7e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7e11:{NFSU2_TR(0x6f7e11);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f7e25;}}
}
B6f7e13:L6f7e13:{c.instructions+=2;NFSU2_TR(0x6f7e13);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad6a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6f7e1a:{NFSU2_TR(0x6f7e1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e1full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7266u);}goto L6f7266;}
}
B6f7e1f:L6f7e1f:{c.instructions+=4;NFSU2_TR(0x6f7e1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f7e20:{NFSU2_TR(0x6f7e20);
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
B6f7e22:{NFSU2_TR(0x6f7e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f7e23:{NFSU2_TR(0x6f7e23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7e13u);}goto L6f7e13;}}
}
B6f7e25:L6f7e25:{c.instructions+=4;NFSU2_TR(0x6f7e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7e2b:{NFSU2_TR(0x6f7e2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e2c:{NFSU2_TR(0x6f7e2c);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e31:{NFSU2_TR(0x6f7e31);
u8 U[4];
__builtin_memmove((U+0),gp(0x783220),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e37ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f7e37:L6f7e37:{c.instructions+=3;NFSU2_TR(0x6f7e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7e3d:{NFSU2_TR(0x6f7e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e3e:{NFSU2_TR(0x6f7e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e43ull));
TAIL_STATIC(0x6f6db2u,6f6);
}
B6f7e43:L6f7e43:{c.instructions+=4;NFSU2_TR(0x6f7e43);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f7e48:{NFSU2_TR(0x6f7e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7e4e:{NFSU2_TR(0x6f7e4e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f7e50:{NFSU2_TR(0x6f7e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f78dcu);}goto L6f78dc;}
}
B6f7e55:L6f7e55:{c.instructions+=2;NFSU2_TR(0x6f7e55);
__builtin_memmove((R+24),(R+0),4);
}
B6f7e57:{NFSU2_TR(0x6f7e57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7388u);}goto L6f7388;}
}
B6f7e5c:L6f7e5c:{c.instructions+=2;NFSU2_TR(0x6f7e5c);
u8 U[4];
w4(U+0,u32(0x6f7ab5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e61:{NFSU2_TR(0x6f7e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e66ull));
TAIL_STATIC(0x6f65c1u,6f6);
}
B6f7e66:L6f7e66:{c.instructions+=8;NFSU2_TR(0x6f7e66);
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
B6f7e69:{NFSU2_TR(0x6f7e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7e6a:{NFSU2_TR(0x6f7e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7e6b:{NFSU2_TR(0x6f7e6b);
s1(0x8ad62c,u8(0x1ull));
}
B6f7e72:{NFSU2_TR(0x6f7e72);
w1(R+0,u8(0x1ull));
}
B6f7e74:{NFSU2_TR(0x6f7e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f7e75:{NFSU2_TR(0x6f7e75);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7e76:{NFSU2_TR(0x6f7e76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7e77:L6f7e77:{c.instructions+=10;NFSU2_TR(0x6f7e77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e78:{NFSU2_TR(0x6f7e78);
__builtin_memmove((R+20),(R+16),4);
}
B6f7e7a:{NFSU2_TR(0x6f7e7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6f7e7d:{NFSU2_TR(0x6f7e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7e80:{NFSU2_TR(0x6f7e80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e81:{NFSU2_TR(0x6f7e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f7e84:{NFSU2_TR(0x6f7e84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7e85:{NFSU2_TR(0x6f7e85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7e88:{NFSU2_TR(0x6f7e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7e8b:{NFSU2_TR(0x6f7e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7e90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7c54u);}goto L6f7c54;}
}
B6f7e90:L6f7e90:{c.instructions+=4;NFSU2_TR(0x6f7e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f7e93:{NFSU2_TR(0x6f7e93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f7e96:{NFSU2_TR(0x6f7e96);
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
B6f7e98:{NFSU2_TR(0x6f7e98);
if(r1(R+518)){{goto L6f7ea5;}}
}
B6f7e9a:L6f7e9a:{c.instructions+=4;NFSU2_TR(0x6f7e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7e9d:{NFSU2_TR(0x6f7e9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f7e9f:{NFSU2_TR(0x6f7e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7ea2:{NFSU2_TR(0x6f7ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7ea5:L6f7ea5:{c.instructions+=2;NFSU2_TR(0x6f7ea5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f7ea6:{NFSU2_TR(0x6f7ea6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7ea7:L6f7ea7:{c.instructions+=2;NFSU2_TR(0x6f7ea7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f7eaa:{NFSU2_TR(0x6f7eaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7ead:L6f7ead:{c.instructions+=2;NFSU2_TR(0x6f7ead);
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
B6f7eaf:{NFSU2_TR(0x6f7eaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7eb2:L6f7eb2:{c.instructions+=3;NFSU2_TR(0x6f7eb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7eb4:{NFSU2_TR(0x6f7eb4);
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
B6f7eb6:{NFSU2_TR(0x6f7eb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7eb9:L6f7eb9:{c.instructions+=3;NFSU2_TR(0x6f7eb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7ebb:{NFSU2_TR(0x6f7ebb);
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
B6f7ebd:{NFSU2_TR(0x6f7ebd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7ec0:L6f7ec0:{c.instructions+=3;NFSU2_TR(0x6f7ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7ec2:{NFSU2_TR(0x6f7ec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7ec4:{NFSU2_TR(0x6f7ec4);
if(r1(R+518)){{goto L6f7ecb;}}
}
B6f7ec6:L6f7ec6:{c.instructions+=2;NFSU2_TR(0x6f7ec6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6f7ec9:{NFSU2_TR(0x6f7ec9);
{goto L6f7ecd;}
}
B6f7ecb:L6f7ecb:{c.instructions+=1;NFSU2_TR(0x6f7ecb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7ecd:L6f7ecd:{c.instructions+=2;NFSU2_TR(0x6f7ecd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7ecf:{NFSU2_TR(0x6f7ecf);
if(r1(R+518)){{goto L6f7ee0;}}
}
B6f7ed1:L6f7ed1:{c.instructions+=3;NFSU2_TR(0x6f7ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f7ed3:{NFSU2_TR(0x6f7ed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7ed5:{NFSU2_TR(0x6f7ed5);
if(r1(R+518)){{goto L6f7ee0;}}
}
B6f7ed7:L6f7ed7:{c.instructions+=4;NFSU2_TR(0x6f7ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6f7eda:{NFSU2_TR(0x6f7eda);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7edc:{NFSU2_TR(0x6f7edc);
__builtin_memmove((R+0),(R+8),4);
}
B6f7ede:{NFSU2_TR(0x6f7ede);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7ed1u);}goto L6f7ed1;}}
}
B6f7ee0:L6f7ee0:{c.instructions+=4;NFSU2_TR(0x6f7ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7ee4:{NFSU2_TR(0x6f7ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6f7ee7:{NFSU2_TR(0x6f7ee7);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6f7eeb:{NFSU2_TR(0x6f7eeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7eec:L6f7eec:{c.instructions+=5;NFSU2_TR(0x6f7eec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7eed:{NFSU2_TR(0x6f7eed);
__builtin_memmove((R+20),(R+16),4);
}
B6f7eef:{NFSU2_TR(0x6f7eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7ef1:{NFSU2_TR(0x6f7ef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7ef3:{NFSU2_TR(0x6f7ef3);
if(r1(R+518)){{goto L6f7efa;}}
}
B6f7ef5:L6f7ef5:{c.instructions+=2;NFSU2_TR(0x6f7ef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f7ef8:{NFSU2_TR(0x6f7ef8);
{goto L6f7efc;}
}
B6f7efa:L6f7efa:{c.instructions+=1;NFSU2_TR(0x6f7efa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f7efc:L6f7efc:{c.instructions+=6;NFSU2_TR(0x6f7efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7eff:{NFSU2_TR(0x6f7eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f02:{NFSU2_TR(0x6f7f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f05:{NFSU2_TR(0x6f7f05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f7f07:{NFSU2_TR(0x6f7f07);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f7f0b:{NFSU2_TR(0x6f7f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7f10;}}
}
B6f7f0d:L6f7f0d:{c.instructions+=1;NFSU2_TR(0x6f7f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f10:L6f7f10:{c.instructions+=2;NFSU2_TR(0x6f7f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7f11:{NFSU2_TR(0x6f7f11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7f14:L6f7f14:{c.instructions+=6;NFSU2_TR(0x6f7f14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7f15:{NFSU2_TR(0x6f7f15);
__builtin_memmove((R+20),(R+16),4);
}
B6f7f17:{NFSU2_TR(0x6f7f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7f1a:{NFSU2_TR(0x6f7f1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7f1c:{NFSU2_TR(0x6f7f1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7f1d:{NFSU2_TR(0x6f7f1d);
if(r1(R+518)){{goto L6f7f24;}}
}
B6f7f1f:L6f7f1f:{c.instructions+=2;NFSU2_TR(0x6f7f1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7f22:{NFSU2_TR(0x6f7f22);
{goto L6f7f26;}
}
B6f7f24:L6f7f24:{c.instructions+=1;NFSU2_TR(0x6f7f24);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f7f26:L6f7f26:{c.instructions+=7;NFSU2_TR(0x6f7f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7f29:{NFSU2_TR(0x6f7f29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f7f2c:{NFSU2_TR(0x6f7f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6f7f2f:{NFSU2_TR(0x6f7f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f32:{NFSU2_TR(0x6f7f32);
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
B6f7f34:{NFSU2_TR(0x6f7f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f37:{NFSU2_TR(0x6f7f37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7f3d;}}
}
B6f7f39:L6f7f39:{c.instructions+=2;NFSU2_TR(0x6f7f39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f7f3b:{NFSU2_TR(0x6f7f3b);
{goto L6f7f3f;}
}
B6f7f3d:L6f7f3d:{c.instructions+=1;NFSU2_TR(0x6f7f3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f7f3f:L6f7f3f:{c.instructions+=3;NFSU2_TR(0x6f7f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7f40:{NFSU2_TR(0x6f7f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7f41:{NFSU2_TR(0x6f7f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7f44:L6f7f44:{c.instructions+=3;NFSU2_TR(0x6f7f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f7f46:{NFSU2_TR(0x6f7f46);
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
B6f7f48:{NFSU2_TR(0x6f7f48);
if(r1(R+518)){{goto L6f7f6f;}}
}
B6f7f4a:L6f7f4a:{c.instructions+=2;NFSU2_TR(0x6f7f4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7f4d:{NFSU2_TR(0x6f7f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7f58;}}
}
B6f7f4f:L6f7f4f:{c.instructions+=3;NFSU2_TR(0x6f7f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f53:{NFSU2_TR(0x6f7f53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6f7f56:{NFSU2_TR(0x6f7f56);
{goto L6f7f68;}
}
B6f7f58:L6f7f58:{c.instructions+=3;NFSU2_TR(0x6f7f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7f5b:{NFSU2_TR(0x6f7f5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7f5d:{NFSU2_TR(0x6f7f5d);
if(r1(R+518)){{goto L6f7f64;}}
}
B6f7f5f:L6f7f5f:{c.instructions+=2;NFSU2_TR(0x6f7f5f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
}
B6f7f62:{NFSU2_TR(0x6f7f62);
{goto L6f7f66;}
}
B6f7f64:L6f7f64:{c.instructions+=1;NFSU2_TR(0x6f7f64);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f7f66:L6f7f66:{c.instructions+=1;NFSU2_TR(0x6f7f66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f7f68:L6f7f68:{c.instructions+=2;NFSU2_TR(0x6f7f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f6b:{NFSU2_TR(0x6f7f6b);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6f7f6f:L6f7f6f:{c.instructions+=1;NFSU2_TR(0x6f7f6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7f70:L6f7f70:{c.instructions+=5;NFSU2_TR(0x6f7f70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7f71:{NFSU2_TR(0x6f7f71);
__builtin_memmove((R+20),(R+16),4);
}
B6f7f73:{NFSU2_TR(0x6f7f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f7f76:{NFSU2_TR(0x6f7f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f7f78:{NFSU2_TR(0x6f7f78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7f84;}}
}
B6f7f7a:L6f7f7a:{c.instructions+=2;NFSU2_TR(0x6f7f7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f7f7d:{NFSU2_TR(0x6f7f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f7f82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f7eecu);}goto L6f7eec;}
}
B6f7f82:L6f7f82:{c.instructions+=1;NFSU2_TR(0x6f7f82);
{goto L6f7fa0;}
}
B6f7f84:L6f7f84:{c.instructions+=3;NFSU2_TR(0x6f7f84);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7f88:{NFSU2_TR(0x6f7f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7f8b:{NFSU2_TR(0x6f7f8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7f90;}}
}
B6f7f8d:L6f7f8d:{c.instructions+=1;NFSU2_TR(0x6f7f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f90:L6f7f90:{c.instructions+=7;NFSU2_TR(0x6f7f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7f91:{NFSU2_TR(0x6f7f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7f94:{NFSU2_TR(0x6f7f94);
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6f7f97:{NFSU2_TR(0x6f7f97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f7f99:{NFSU2_TR(0x6f7f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7f9c:{NFSU2_TR(0x6f7f9c);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B6f7f9f:{NFSU2_TR(0x6f7f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f7fa0:L6f7fa0:{c.instructions+=2;NFSU2_TR(0x6f7fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f7fa1:{NFSU2_TR(0x6f7fa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f7fa4:L6f7fa4:{c.instructions+=12;NFSU2_TR(0x6f7fa4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7fa5:{NFSU2_TR(0x6f7fa5);
__builtin_memmove((R+20),(R+16),4);
}
B6f7fa7:{NFSU2_TR(0x6f7fa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7fa8:{NFSU2_TR(0x6f7fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f7faa:{NFSU2_TR(0x6f7faa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7fab:{NFSU2_TR(0x6f7fab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7fac:{NFSU2_TR(0x6f7fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f7faf:{NFSU2_TR(0x6f7faf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f7fb1:{NFSU2_TR(0x6f7fb1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7fb3:{NFSU2_TR(0x6f7fb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f7fb4:{NFSU2_TR(0x6f7fb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f7fb7:{NFSU2_TR(0x6f7fb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7fde;}}
}
B6f7fb9:L6f7fb9:{c.instructions+=4;NFSU2_TR(0x6f7fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f7fbc:{NFSU2_TR(0x6f7fbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7fbf:{NFSU2_TR(0x6f7fbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f7fc3:{NFSU2_TR(0x6f7fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f7fcc;}}
}
B6f7fc5:L6f7fc5:{c.instructions+=3;NFSU2_TR(0x6f7fc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f7fc7:{NFSU2_TR(0x6f7fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f7fca:{NFSU2_TR(0x6f7fca);
TAIL_STATIC(0x6f8033u,6f8);
}
B6f7fcc:L6f7fcc:{c.instructions+=3;NFSU2_TR(0x6f7fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f7fcf:{NFSU2_TR(0x6f7fcf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7fd1:{NFSU2_TR(0x6f7fd1);
if(r1(R+518)){{goto L6f7fd8;}}
}
B6f7fd3:L6f7fd3:{c.instructions+=2;NFSU2_TR(0x6f7fd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B6f7fd6:{NFSU2_TR(0x6f7fd6);
{goto L6f7fda;}
}
B6f7fd8:L6f7fd8:{c.instructions+=1;NFSU2_TR(0x6f7fd8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f7fda:L6f7fda:{c.instructions+=2;NFSU2_TR(0x6f7fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f7fdc:{NFSU2_TR(0x6f7fdc);
TAIL_STATIC(0x6f8033u,6f8);
}
B6f7fde:L6f7fde:{c.instructions+=2;NFSU2_TR(0x6f7fde);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f7fe0:{NFSU2_TR(0x6f7fe0);
if(r1(R+518)){TAIL_STATIC(0x6f8037u,6f8);}
}
B6f7fe2:L6f7fe2:{c.instructions+=2;NFSU2_TR(0x6f7fe2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f7fe5:{NFSU2_TR(0x6f7fe5);
if(r1(R+518)){TAIL_STATIC(0x6f8009u,6f8);}
}
B6f7fe7:L6f7fe7:{c.instructions+=8;NFSU2_TR(0x6f7fe7);
__builtin_memmove((R+0),(R+24),4);
}
B6f7fe9:{NFSU2_TR(0x6f7fe9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f7feb:{NFSU2_TR(0x6f7feb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f7fee:{NFSU2_TR(0x6f7fee);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f7ff0:{NFSU2_TR(0x6f7ff0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B6f7ff2:{NFSU2_TR(0x6f7ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f7ff5:{NFSU2_TR(0x6f7ff5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7ff7:{NFSU2_TR(0x6f7ff7);
if(r1(R+518)){TAIL_STATIC(0x6f8009u,6f8);}
}
B6f7ff9:L6f7ff9:{c.instructions+=2;NFSU2_TR(0x6f7ff9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f7ffb:{NFSU2_TR(0x6f7ffb);
if(r1(R+518)){TAIL_STATIC(0x6f8002u,6f8);}
}
B6f7ffd:L6f7ffd:{c.instructions+=1;NFSU2_TR(0x6f7ffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x6f8000u,6f8);
}
XIT:NFSU2_TR_EXIT(0x6f7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
