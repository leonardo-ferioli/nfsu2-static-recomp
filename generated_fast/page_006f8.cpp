#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f9(u8* __restrict R,Cpu& c);
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 page_6f8(Cpu& c){return body_6f8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f8000:goto L6f8000;
case 0x6f8002:goto L6f8002;
case 0x6f8004:goto L6f8004;
case 0x6f8007:c.instructions+=1;goto B6f8007;
case 0x6f8009:goto L6f8009;
case 0x6f800c:c.instructions+=2;goto B6f800c;
case 0x6f800e:c.instructions+=1;goto B6f800e;
case 0x6f8010:goto L6f8010;
case 0x6f8012:c.instructions+=6;goto B6f8012;
case 0x6f8014:c.instructions+=5;goto B6f8014;
case 0x6f8016:c.instructions+=4;goto B6f8016;
case 0x6f8019:c.instructions+=3;goto B6f8019;
case 0x6f801b:c.instructions+=2;goto B6f801b;
case 0x6f801d:c.instructions+=1;goto B6f801d;
case 0x6f801f:goto L6f801f;
case 0x6f8022:c.instructions+=5;goto B6f8022;
case 0x6f8024:c.instructions+=4;goto B6f8024;
case 0x6f8027:c.instructions+=3;goto B6f8027;
case 0x6f802a:c.instructions+=2;goto B6f802a;
case 0x6f802e:c.instructions+=1;goto B6f802e;
case 0x6f8030:goto L6f8030;
case 0x6f8033:goto L6f8033;
case 0x6f8037:goto L6f8037;
case 0x6f803a:c.instructions+=5;goto B6f803a;
case 0x6f803b:c.instructions+=4;goto B6f803b;
case 0x6f803c:c.instructions+=3;goto B6f803c;
case 0x6f803d:c.instructions+=2;goto B6f803d;
case 0x6f803e:c.instructions+=1;goto B6f803e;
case 0x6f8041:goto L6f8041;
case 0x6f8042:c.instructions+=8;goto B6f8042;
case 0x6f8044:c.instructions+=7;goto B6f8044;
case 0x6f8047:c.instructions+=6;goto B6f8047;
case 0x6f8049:c.instructions+=5;goto B6f8049;
case 0x6f804b:c.instructions+=4;goto B6f804b;
case 0x6f804e:c.instructions+=3;goto B6f804e;
case 0x6f8050:c.instructions+=2;goto B6f8050;
case 0x6f8053:c.instructions+=1;goto B6f8053;
case 0x6f8055:goto L6f8055;
case 0x6f8058:goto L6f8058;
case 0x6f8059:c.instructions+=1;goto B6f8059;
case 0x6f805c:goto L6f805c;
case 0x6f805d:c.instructions+=8;goto B6f805d;
case 0x6f805f:c.instructions+=7;goto B6f805f;
case 0x6f8062:c.instructions+=6;goto B6f8062;
case 0x6f8065:c.instructions+=5;goto B6f8065;
case 0x6f8068:c.instructions+=4;goto B6f8068;
case 0x6f806b:c.instructions+=3;goto B6f806b;
case 0x6f806d:c.instructions+=2;goto B6f806d;
case 0x6f8070:c.instructions+=1;goto B6f8070;
case 0x6f8072:goto L6f8072;
case 0x6f8074:c.instructions+=1;goto B6f8074;
case 0x6f8076:goto L6f8076;
case 0x6f8078:goto L6f8078;
case 0x6f8079:c.instructions+=1;goto B6f8079;
case 0x6f807c:goto L6f807c;
case 0x6f807d:c.instructions+=10;goto B6f807d;
case 0x6f807f:c.instructions+=9;goto B6f807f;
case 0x6f8081:c.instructions+=8;goto B6f8081;
case 0x6f8082:c.instructions+=7;goto B6f8082;
case 0x6f8083:c.instructions+=6;goto B6f8083;
case 0x6f8086:c.instructions+=5;goto B6f8086;
case 0x6f8088:c.instructions+=4;goto B6f8088;
case 0x6f808a:c.instructions+=3;goto B6f808a;
case 0x6f808c:c.instructions+=2;goto B6f808c;
case 0x6f808d:c.instructions+=1;goto B6f808d;
case 0x6f808f:goto L6f808f;
case 0x6f8091:c.instructions+=3;goto B6f8091;
case 0x6f8094:c.instructions+=2;goto B6f8094;
case 0x6f8097:c.instructions+=1;goto B6f8097;
case 0x6f8099:goto L6f8099;
case 0x6f809b:c.instructions+=2;goto B6f809b;
case 0x6f809e:c.instructions+=1;goto B6f809e;
case 0x6f80a0:goto L6f80a0;
case 0x6f80a2:c.instructions+=2;goto B6f80a2;
case 0x6f80a4:c.instructions+=1;goto B6f80a4;
case 0x6f80a6:goto L6f80a6;
case 0x6f80a8:c.instructions+=1;goto B6f80a8;
case 0x6f80aa:goto L6f80aa;
case 0x6f80ac:c.instructions+=1;goto B6f80ac;
case 0x6f80ae:goto L6f80ae;
case 0x6f80b0:c.instructions+=2;goto B6f80b0;
case 0x6f80b2:c.instructions+=1;goto B6f80b2;
case 0x6f80b4:goto L6f80b4;
case 0x6f80b6:c.instructions+=2;goto B6f80b6;
case 0x6f80b8:c.instructions+=1;goto B6f80b8;
case 0x6f80ba:goto L6f80ba;
case 0x6f80bc:c.instructions+=2;goto B6f80bc;
case 0x6f80be:c.instructions+=1;goto B6f80be;
case 0x6f80c0:goto L6f80c0;
case 0x6f80c2:c.instructions+=1;goto B6f80c2;
case 0x6f80c4:goto L6f80c4;
case 0x6f80c7:c.instructions+=5;goto B6f80c7;
case 0x6f80c9:c.instructions+=4;goto B6f80c9;
case 0x6f80cb:c.instructions+=3;goto B6f80cb;
case 0x6f80ce:c.instructions+=2;goto B6f80ce;
case 0x6f80d0:c.instructions+=1;goto B6f80d0;
case 0x6f80d2:goto L6f80d2;
case 0x6f80d5:goto L6f80d5;
case 0x6f80d7:goto L6f80d7;
case 0x6f80d8:c.instructions+=4;goto B6f80d8;
case 0x6f80d9:c.instructions+=3;goto B6f80d9;
case 0x6f80da:c.instructions+=2;goto B6f80da;
case 0x6f80db:c.instructions+=1;goto B6f80db;
case 0x6f80de:goto L6f80de;
case 0x6f80df:c.instructions+=6;goto B6f80df;
case 0x6f80e1:c.instructions+=5;goto B6f80e1;
case 0x6f80e5:c.instructions+=4;goto B6f80e5;
case 0x6f80e6:c.instructions+=3;goto B6f80e6;
case 0x6f80e8:c.instructions+=2;goto B6f80e8;
case 0x6f80ee:c.instructions+=1;goto B6f80ee;
case 0x6f80f0:goto L6f80f0;
case 0x6f80f1:c.instructions+=1;goto B6f80f1;
case 0x6f80f6:goto L6f80f6;
case 0x6f80f7:goto L6f80f7;
case 0x6f80f9:c.instructions+=3;goto B6f80f9;
case 0x6f80fa:c.instructions+=2;goto B6f80fa;
case 0x6f80fb:c.instructions+=1;goto B6f80fb;
case 0x6f80fe:goto L6f80fe;
case 0x6f80ff:c.instructions+=8;goto B6f80ff;
case 0x6f8101:c.instructions+=7;goto B6f8101;
case 0x6f8102:c.instructions+=6;goto B6f8102;
case 0x6f8104:c.instructions+=5;goto B6f8104;
case 0x6f8107:c.instructions+=4;goto B6f8107;
case 0x6f810a:c.instructions+=3;goto B6f810a;
case 0x6f810c:c.instructions+=2;goto B6f810c;
case 0x6f810f:c.instructions+=1;goto B6f810f;
case 0x6f8114:goto L6f8114;
case 0x6f8117:c.instructions+=4;goto B6f8117;
case 0x6f811a:c.instructions+=3;goto B6f811a;
case 0x6f811d:c.instructions+=2;goto B6f811d;
case 0x6f8120:c.instructions+=1;goto B6f8120;
case 0x6f8125:goto L6f8125;
case 0x6f8128:c.instructions+=1;goto B6f8128;
case 0x6f812d:goto L6f812d;
case 0x6f8130:c.instructions+=10;goto B6f8130;
case 0x6f8133:c.instructions+=9;goto B6f8133;
case 0x6f8136:c.instructions+=8;goto B6f8136;
case 0x6f8139:c.instructions+=7;goto B6f8139;
case 0x6f813c:c.instructions+=6;goto B6f813c;
case 0x6f813e:c.instructions+=5;goto B6f813e;
case 0x6f8141:c.instructions+=4;goto B6f8141;
case 0x6f8142:c.instructions+=3;goto B6f8142;
case 0x6f8144:c.instructions+=2;goto B6f8144;
case 0x6f8145:c.instructions+=1;goto B6f8145;
case 0x6f8146:goto L6f8146;
case 0x6f8147:c.instructions+=3;goto B6f8147;
case 0x6f8149:c.instructions+=2;goto B6f8149;
case 0x6f814c:c.instructions+=1;goto B6f814c;
case 0x6f8151:goto L6f8151;
case 0x6f8154:c.instructions+=1;goto B6f8154;
case 0x6f8159:goto L6f8159;
case 0x6f815c:c.instructions+=1;goto B6f815c;
case 0x6f8161:goto L6f8161;
case 0x6f8163:c.instructions+=2;goto B6f8163;
case 0x6f8164:c.instructions+=1;goto B6f8164;
case 0x6f8169:goto L6f8169;
case 0x6f816a:c.instructions+=4;goto B6f816a;
case 0x6f816c:c.instructions+=3;goto B6f816c;
case 0x6f816d:c.instructions+=2;goto B6f816d;
case 0x6f816f:c.instructions+=1;goto B6f816f;
case 0x6f8174:goto L6f8174;
case 0x6f8178:c.instructions+=1;goto B6f8178;
case 0x6f817a:goto L6f817a;
case 0x6f817b:c.instructions+=1;goto B6f817b;
case 0x6f8180:goto L6f8180;
case 0x6f8181:goto L6f8181;
case 0x6f8183:c.instructions+=3;goto B6f8183;
case 0x6f8184:c.instructions+=2;goto B6f8184;
case 0x6f8185:c.instructions+=1;goto B6f8185;
case 0x6f8188:goto L6f8188;
case 0x6f8189:c.instructions+=7;goto B6f8189;
case 0x6f818b:c.instructions+=6;goto B6f818b;
case 0x6f818c:c.instructions+=5;goto B6f818c;
case 0x6f818f:c.instructions+=4;goto B6f818f;
case 0x6f8191:c.instructions+=3;goto B6f8191;
case 0x6f8194:c.instructions+=2;goto B6f8194;
case 0x6f8197:c.instructions+=1;goto B6f8197;
case 0x6f819c:goto L6f819c;
case 0x6f819f:c.instructions+=3;goto B6f819f;
case 0x6f81a1:c.instructions+=2;goto B6f81a1;
case 0x6f81a7:c.instructions+=1;goto B6f81a7;
case 0x6f81ac:goto L6f81ac;
case 0x6f81ae:c.instructions+=1;goto B6f81ae;
case 0x6f81b3:goto L6f81b3;
case 0x6f81b5:c.instructions+=3;goto B6f81b5;
case 0x6f81b6:c.instructions+=2;goto B6f81b6;
case 0x6f81b7:c.instructions+=1;goto B6f81b7;
case 0x6f81ba:goto L6f81ba;
case 0x6f81bb:c.instructions+=6;goto B6f81bb;
case 0x6f81bd:c.instructions+=5;goto B6f81bd;
case 0x6f81c3:c.instructions+=4;goto B6f81c3;
case 0x6f81c5:c.instructions+=3;goto B6f81c5;
case 0x6f81c7:c.instructions+=2;goto B6f81c7;
case 0x6f81ca:c.instructions+=1;goto B6f81ca;
case 0x6f81cd:goto L6f81cd;
case 0x6f81d0:c.instructions+=3;goto B6f81d0;
case 0x6f81d3:c.instructions+=2;goto B6f81d3;
case 0x6f81d4:c.instructions+=1;goto B6f81d4;
case 0x6f81d5:goto L6f81d5;
case 0x6f81d6:c.instructions+=7;goto B6f81d6;
case 0x6f81d8:c.instructions+=6;goto B6f81d8;
case 0x6f81d9:c.instructions+=5;goto B6f81d9;
case 0x6f81dc:c.instructions+=4;goto B6f81dc;
case 0x6f81de:c.instructions+=3;goto B6f81de;
case 0x6f81e1:c.instructions+=2;goto B6f81e1;
case 0x6f81e4:c.instructions+=1;goto B6f81e4;
case 0x6f81e9:goto L6f81e9;
case 0x6f81ec:c.instructions+=3;goto B6f81ec;
case 0x6f81ee:c.instructions+=2;goto B6f81ee;
case 0x6f81f4:c.instructions+=1;goto B6f81f4;
case 0x6f81f9:goto L6f81f9;
case 0x6f81fb:c.instructions+=1;goto B6f81fb;
case 0x6f8200:goto L6f8200;
case 0x6f8202:c.instructions+=3;goto B6f8202;
case 0x6f8203:c.instructions+=2;goto B6f8203;
case 0x6f8204:c.instructions+=1;goto B6f8204;
case 0x6f8207:goto L6f8207;
case 0x6f8208:c.instructions+=8;goto B6f8208;
case 0x6f820a:c.instructions+=7;goto B6f820a;
case 0x6f820d:c.instructions+=6;goto B6f820d;
case 0x6f820e:c.instructions+=5;goto B6f820e;
case 0x6f8210:c.instructions+=4;goto B6f8210;
case 0x6f8216:c.instructions+=3;goto B6f8216;
case 0x6f8219:c.instructions+=2;goto B6f8219;
case 0x6f821b:c.instructions+=1;goto B6f821b;
case 0x6f821e:goto L6f821e;
case 0x6f8220:c.instructions+=7;goto B6f8220;
case 0x6f8222:c.instructions+=6;goto B6f8222;
case 0x6f8224:c.instructions+=5;goto B6f8224;
case 0x6f8226:c.instructions+=4;goto B6f8226;
case 0x6f8229:c.instructions+=3;goto B6f8229;
case 0x6f822a:c.instructions+=2;goto B6f822a;
case 0x6f822b:c.instructions+=1;goto B6f822b;
case 0x6f822e:goto L6f822e;
case 0x6f822f:c.instructions+=6;goto B6f822f;
case 0x6f8231:c.instructions+=5;goto B6f8231;
case 0x6f8237:c.instructions+=4;goto B6f8237;
case 0x6f8239:c.instructions+=3;goto B6f8239;
case 0x6f823b:c.instructions+=2;goto B6f823b;
case 0x6f823e:c.instructions+=1;goto B6f823e;
case 0x6f8241:goto L6f8241;
case 0x6f8243:c.instructions+=4;goto B6f8243;
case 0x6f8244:c.instructions+=3;goto B6f8244;
case 0x6f8247:c.instructions+=2;goto B6f8247;
case 0x6f8248:c.instructions+=1;goto B6f8248;
case 0x6f824a:goto L6f824a;
case 0x6f824c:goto L6f824c;
case 0x6f824e:c.instructions+=1;goto B6f824e;
case 0x6f824f:goto L6f824f;
case 0x6f8250:c.instructions+=7;goto B6f8250;
case 0x6f8252:c.instructions+=6;goto B6f8252;
case 0x6f8253:c.instructions+=5;goto B6f8253;
case 0x6f8256:c.instructions+=4;goto B6f8256;
case 0x6f8258:c.instructions+=3;goto B6f8258;
case 0x6f825b:c.instructions+=2;goto B6f825b;
case 0x6f825e:c.instructions+=1;goto B6f825e;
case 0x6f8263:goto L6f8263;
case 0x6f8266:c.instructions+=3;goto B6f8266;
case 0x6f8268:c.instructions+=2;goto B6f8268;
case 0x6f826e:c.instructions+=1;goto B6f826e;
case 0x6f8273:goto L6f8273;
case 0x6f8276:c.instructions+=4;goto B6f8276;
case 0x6f827a:c.instructions+=3;goto B6f827a;
case 0x6f827c:c.instructions+=2;goto B6f827c;
case 0x6f827f:c.instructions+=1;goto B6f827f;
case 0x6f8284:goto L6f8284;
case 0x6f8286:c.instructions+=3;goto B6f8286;
case 0x6f8287:c.instructions+=2;goto B6f8287;
case 0x6f8288:c.instructions+=1;goto B6f8288;
case 0x6f828b:goto L6f828b;
case 0x6f828c:c.instructions+=7;goto B6f828c;
case 0x6f828d:c.instructions+=6;goto B6f828d;
case 0x6f828f:c.instructions+=5;goto B6f828f;
case 0x6f8295:c.instructions+=4;goto B6f8295;
case 0x6f8297:c.instructions+=3;goto B6f8297;
case 0x6f8299:c.instructions+=2;goto B6f8299;
case 0x6f829c:c.instructions+=1;goto B6f829c;
case 0x6f829f:goto L6f829f;
case 0x6f82a3:c.instructions+=1;goto B6f82a3;
case 0x6f82a5:goto L6f82a5;
case 0x6f82a8:c.instructions+=2;goto B6f82a8;
case 0x6f82ab:c.instructions+=1;goto B6f82ab;
case 0x6f82ad:goto L6f82ad;
case 0x6f82b2:goto L6f82b2;
case 0x6f82b4:c.instructions+=1;goto B6f82b4;
case 0x6f82b6:goto L6f82b6;
case 0x6f82b7:c.instructions+=2;goto B6f82b7;
case 0x6f82b8:c.instructions+=1;goto B6f82b8;
case 0x6f82b9:goto L6f82b9;
case 0x6f82bc:c.instructions+=2;goto B6f82bc;
case 0x6f82bf:c.instructions+=1;goto B6f82bf;
case 0x6f82c1:goto L6f82c1;
case 0x6f82c2:c.instructions+=1;goto B6f82c2;
case 0x6f82c4:goto L6f82c4;
case 0x6f82c5:c.instructions+=7;goto B6f82c5;
case 0x6f82c7:c.instructions+=6;goto B6f82c7;
case 0x6f82c8:c.instructions+=5;goto B6f82c8;
case 0x6f82cb:c.instructions+=4;goto B6f82cb;
case 0x6f82cd:c.instructions+=3;goto B6f82cd;
case 0x6f82d0:c.instructions+=2;goto B6f82d0;
case 0x6f82d3:c.instructions+=1;goto B6f82d3;
case 0x6f82d8:goto L6f82d8;
case 0x6f82db:c.instructions+=4;goto B6f82db;
case 0x6f82dd:c.instructions+=3;goto B6f82dd;
case 0x6f82e3:c.instructions+=2;goto B6f82e3;
case 0x6f82e6:c.instructions+=1;goto B6f82e6;
case 0x6f82eb:goto L6f82eb;
case 0x6f82ed:c.instructions+=3;goto B6f82ed;
case 0x6f82ee:c.instructions+=2;goto B6f82ee;
case 0x6f82ef:c.instructions+=1;goto B6f82ef;
case 0x6f82f2:goto L6f82f2;
case 0x6f82f6:c.instructions+=1;goto B6f82f6;
case 0x6f82f9:goto L6f82f9;
case 0x6f82fa:c.instructions+=2;goto B6f82fa;
case 0x6f82fd:c.instructions+=1;goto B6f82fd;
case 0x6f8302:goto L6f8302;
case 0x6f8304:c.instructions+=4;goto B6f8304;
case 0x6f8305:c.instructions+=3;goto B6f8305;
case 0x6f8307:c.instructions+=2;goto B6f8307;
case 0x6f8308:c.instructions+=1;goto B6f8308;
case 0x6f8309:goto L6f8309;
case 0x6f830a:c.instructions+=7;goto B6f830a;
case 0x6f830c:c.instructions+=6;goto B6f830c;
case 0x6f830d:c.instructions+=5;goto B6f830d;
case 0x6f8310:c.instructions+=4;goto B6f8310;
case 0x6f8312:c.instructions+=3;goto B6f8312;
case 0x6f8315:c.instructions+=2;goto B6f8315;
case 0x6f8318:c.instructions+=1;goto B6f8318;
case 0x6f831d:goto L6f831d;
case 0x6f8320:c.instructions+=16;goto B6f8320;
case 0x6f8324:c.instructions+=15;goto B6f8324;
case 0x6f8328:c.instructions+=14;goto B6f8328;
case 0x6f832b:c.instructions+=13;goto B6f832b;
case 0x6f832e:c.instructions+=12;goto B6f832e;
case 0x6f832f:c.instructions+=11;goto B6f832f;
case 0x6f8332:c.instructions+=10;goto B6f8332;
case 0x6f8335:c.instructions+=9;goto B6f8335;
case 0x6f8338:c.instructions+=8;goto B6f8338;
case 0x6f8339:c.instructions+=7;goto B6f8339;
case 0x6f833c:c.instructions+=6;goto B6f833c;
case 0x6f833f:c.instructions+=5;goto B6f833f;
case 0x6f8341:c.instructions+=4;goto B6f8341;
case 0x6f8347:c.instructions+=3;goto B6f8347;
case 0x6f834a:c.instructions+=2;goto B6f834a;
case 0x6f834d:c.instructions+=1;goto B6f834d;
case 0x6f8352:goto L6f8352;
case 0x6f8354:c.instructions+=3;goto B6f8354;
case 0x6f8355:c.instructions+=2;goto B6f8355;
case 0x6f8356:c.instructions+=1;goto B6f8356;
case 0x6f8359:goto L6f8359;
case 0x6f835c:c.instructions+=2;goto B6f835c;
case 0x6f835f:c.instructions+=1;goto B6f835f;
case 0x6f8360:goto L6f8360;
case 0x6f8361:c.instructions+=18;goto B6f8361;
case 0x6f8363:c.instructions+=17;goto B6f8363;
case 0x6f8364:c.instructions+=16;goto B6f8364;
case 0x6f8365:c.instructions+=15;goto B6f8365;
case 0x6f8367:c.instructions+=14;goto B6f8367;
case 0x6f836a:c.instructions+=13;goto B6f836a;
case 0x6f836d:c.instructions+=12;goto B6f836d;
case 0x6f836e:c.instructions+=11;goto B6f836e;
case 0x6f8371:c.instructions+=10;goto B6f8371;
case 0x6f8374:c.instructions+=9;goto B6f8374;
case 0x6f837a:c.instructions+=8;goto B6f837a;
case 0x6f837d:c.instructions+=7;goto B6f837d;
case 0x6f8383:c.instructions+=6;goto B6f8383;
case 0x6f8385:c.instructions+=5;goto B6f8385;
case 0x6f8387:c.instructions+=4;goto B6f8387;
case 0x6f838a:c.instructions+=3;goto B6f838a;
case 0x6f838d:c.instructions+=2;goto B6f838d;
case 0x6f8390:c.instructions+=1;goto B6f8390;
case 0x6f8393:goto L6f8393;
case 0x6f8396:c.instructions+=7;goto B6f8396;
case 0x6f8399:c.instructions+=6;goto B6f8399;
case 0x6f839c:c.instructions+=5;goto B6f839c;
case 0x6f839f:c.instructions+=4;goto B6f839f;
case 0x6f83a5:c.instructions+=3;goto B6f83a5;
case 0x6f83a7:c.instructions+=2;goto B6f83a7;
case 0x6f83aa:c.instructions+=1;goto B6f83aa;
case 0x6f83ad:goto L6f83ad;
case 0x6f83af:c.instructions+=1;goto B6f83af;
case 0x6f83b1:goto L6f83b1;
case 0x6f83b3:c.instructions+=1;goto B6f83b3;
case 0x6f83b5:goto L6f83b5;
case 0x6f83b7:goto L6f83b7;
case 0x6f83ba:c.instructions+=10;goto B6f83ba;
case 0x6f83bd:c.instructions+=9;goto B6f83bd;
case 0x6f83c0:c.instructions+=8;goto B6f83c0;
case 0x6f83c3:c.instructions+=7;goto B6f83c3;
case 0x6f83c9:c.instructions+=6;goto B6f83c9;
case 0x6f83cf:c.instructions+=5;goto B6f83cf;
case 0x6f83d1:c.instructions+=4;goto B6f83d1;
case 0x6f83d2:c.instructions+=3;goto B6f83d2;
case 0x6f83d5:c.instructions+=2;goto B6f83d5;
case 0x6f83d8:c.instructions+=1;goto B6f83d8;
case 0x6f83db:goto L6f83db;
case 0x6f83dd:c.instructions+=9;goto B6f83dd;
case 0x6f83e0:c.instructions+=8;goto B6f83e0;
case 0x6f83e3:c.instructions+=7;goto B6f83e3;
case 0x6f83e6:c.instructions+=6;goto B6f83e6;
case 0x6f83e9:c.instructions+=5;goto B6f83e9;
case 0x6f83ec:c.instructions+=4;goto B6f83ec;
case 0x6f83ef:c.instructions+=3;goto B6f83ef;
case 0x6f83f2:c.instructions+=2;goto B6f83f2;
case 0x6f83f5:c.instructions+=1;goto B6f83f5;
case 0x6f83f7:goto L6f83f7;
case 0x6f83f9:goto L6f83f9;
case 0x6f83fc:c.instructions+=1;goto B6f83fc;
case 0x6f83fe:goto L6f83fe;
case 0x6f8400:c.instructions+=1;goto B6f8400;
case 0x6f8402:goto L6f8402;
case 0x6f8404:c.instructions+=1;goto B6f8404;
case 0x6f8409:goto L6f8409;
case 0x6f840b:goto L6f840b;
case 0x6f840f:goto L6f840f;
case 0x6f8410:c.instructions+=4;goto B6f8410;
case 0x6f8411:c.instructions+=3;goto B6f8411;
case 0x6f8412:c.instructions+=2;goto B6f8412;
case 0x6f8413:c.instructions+=1;goto B6f8413;
case 0x6f8416:goto L6f8416;
case 0x6f8417:c.instructions+=7;goto B6f8417;
case 0x6f8419:c.instructions+=6;goto B6f8419;
case 0x6f841a:c.instructions+=5;goto B6f841a;
case 0x6f841d:c.instructions+=4;goto B6f841d;
case 0x6f841f:c.instructions+=3;goto B6f841f;
case 0x6f8422:c.instructions+=2;goto B6f8422;
case 0x6f8425:c.instructions+=1;goto B6f8425;
case 0x6f842a:goto L6f842a;
case 0x6f842d:c.instructions+=16;goto B6f842d;
case 0x6f8431:c.instructions+=15;goto B6f8431;
case 0x6f8435:c.instructions+=14;goto B6f8435;
case 0x6f8438:c.instructions+=13;goto B6f8438;
case 0x6f843b:c.instructions+=12;goto B6f843b;
case 0x6f843e:c.instructions+=11;goto B6f843e;
case 0x6f8441:c.instructions+=10;goto B6f8441;
case 0x6f8444:c.instructions+=9;goto B6f8444;
case 0x6f8447:c.instructions+=8;goto B6f8447;
case 0x6f844a:c.instructions+=7;goto B6f844a;
case 0x6f844d:c.instructions+=6;goto B6f844d;
case 0x6f8450:c.instructions+=5;goto B6f8450;
case 0x6f8453:c.instructions+=4;goto B6f8453;
case 0x6f8455:c.instructions+=3;goto B6f8455;
case 0x6f845b:c.instructions+=2;goto B6f845b;
case 0x6f845e:c.instructions+=1;goto B6f845e;
case 0x6f8463:goto L6f8463;
case 0x6f8465:c.instructions+=3;goto B6f8465;
case 0x6f8466:c.instructions+=2;goto B6f8466;
case 0x6f8467:c.instructions+=1;goto B6f8467;
case 0x6f846a:goto L6f846a;
case 0x6f846b:c.instructions+=18;goto B6f846b;
case 0x6f846d:c.instructions+=17;goto B6f846d;
case 0x6f846e:c.instructions+=16;goto B6f846e;
case 0x6f846f:c.instructions+=15;goto B6f846f;
case 0x6f8471:c.instructions+=14;goto B6f8471;
case 0x6f8474:c.instructions+=13;goto B6f8474;
case 0x6f8477:c.instructions+=12;goto B6f8477;
case 0x6f8478:c.instructions+=11;goto B6f8478;
case 0x6f847b:c.instructions+=10;goto B6f847b;
case 0x6f847e:c.instructions+=9;goto B6f847e;
case 0x6f8484:c.instructions+=8;goto B6f8484;
case 0x6f8487:c.instructions+=7;goto B6f8487;
case 0x6f848d:c.instructions+=6;goto B6f848d;
case 0x6f848f:c.instructions+=5;goto B6f848f;
case 0x6f8491:c.instructions+=4;goto B6f8491;
case 0x6f8494:c.instructions+=3;goto B6f8494;
case 0x6f8497:c.instructions+=2;goto B6f8497;
case 0x6f849a:c.instructions+=1;goto B6f849a;
case 0x6f849d:goto L6f849d;
case 0x6f84a0:c.instructions+=8;goto B6f84a0;
case 0x6f84a3:c.instructions+=7;goto B6f84a3;
case 0x6f84a6:c.instructions+=6;goto B6f84a6;
case 0x6f84a9:c.instructions+=5;goto B6f84a9;
case 0x6f84ac:c.instructions+=4;goto B6f84ac;
case 0x6f84b1:c.instructions+=3;goto B6f84b1;
case 0x6f84b3:c.instructions+=2;goto B6f84b3;
case 0x6f84b5:c.instructions+=1;goto B6f84b5;
case 0x6f84b7:goto L6f84b7;
case 0x6f84b9:goto L6f84b9;
case 0x6f84bf:c.instructions+=2;goto B6f84bf;
case 0x6f84c1:c.instructions+=1;goto B6f84c1;
case 0x6f84c4:goto L6f84c4;
case 0x6f84c6:c.instructions+=1;goto B6f84c6;
case 0x6f84c8:goto L6f84c8;
case 0x6f84ca:c.instructions+=1;goto B6f84ca;
case 0x6f84cc:goto L6f84cc;
case 0x6f84ce:goto L6f84ce;
case 0x6f84d1:c.instructions+=10;goto B6f84d1;
case 0x6f84d4:c.instructions+=9;goto B6f84d4;
case 0x6f84d7:c.instructions+=8;goto B6f84d7;
case 0x6f84da:c.instructions+=7;goto B6f84da;
case 0x6f84e0:c.instructions+=6;goto B6f84e0;
case 0x6f84e6:c.instructions+=5;goto B6f84e6;
case 0x6f84e8:c.instructions+=4;goto B6f84e8;
case 0x6f84e9:c.instructions+=3;goto B6f84e9;
case 0x6f84ec:c.instructions+=2;goto B6f84ec;
case 0x6f84ef:c.instructions+=1;goto B6f84ef;
case 0x6f84f2:goto L6f84f2;
case 0x6f84f4:c.instructions+=9;goto B6f84f4;
case 0x6f84f7:c.instructions+=8;goto B6f84f7;
case 0x6f84fa:c.instructions+=7;goto B6f84fa;
case 0x6f84fd:c.instructions+=6;goto B6f84fd;
case 0x6f8500:c.instructions+=5;goto B6f8500;
case 0x6f8503:c.instructions+=4;goto B6f8503;
case 0x6f8506:c.instructions+=3;goto B6f8506;
case 0x6f8509:c.instructions+=2;goto B6f8509;
case 0x6f850c:c.instructions+=1;goto B6f850c;
case 0x6f850e:goto L6f850e;
case 0x6f8510:goto L6f8510;
case 0x6f8513:c.instructions+=1;goto B6f8513;
case 0x6f8515:goto L6f8515;
case 0x6f8517:c.instructions+=1;goto B6f8517;
case 0x6f8519:goto L6f8519;
case 0x6f851b:c.instructions+=1;goto B6f851b;
case 0x6f8520:goto L6f8520;
case 0x6f8522:goto L6f8522;
case 0x6f8526:goto L6f8526;
case 0x6f8527:c.instructions+=4;goto B6f8527;
case 0x6f8528:c.instructions+=3;goto B6f8528;
case 0x6f8529:c.instructions+=2;goto B6f8529;
case 0x6f852a:c.instructions+=1;goto B6f852a;
case 0x6f852d:goto L6f852d;
case 0x6f852e:c.instructions+=7;goto B6f852e;
case 0x6f8530:c.instructions+=6;goto B6f8530;
case 0x6f8531:c.instructions+=5;goto B6f8531;
case 0x6f8534:c.instructions+=4;goto B6f8534;
case 0x6f8536:c.instructions+=3;goto B6f8536;
case 0x6f8539:c.instructions+=2;goto B6f8539;
case 0x6f853c:c.instructions+=1;goto B6f853c;
case 0x6f8541:goto L6f8541;
case 0x6f8544:c.instructions+=14;goto B6f8544;
case 0x6f8547:c.instructions+=13;goto B6f8547;
case 0x6f854a:c.instructions+=12;goto B6f854a;
case 0x6f854b:c.instructions+=11;goto B6f854b;
case 0x6f854e:c.instructions+=10;goto B6f854e;
case 0x6f8551:c.instructions+=9;goto B6f8551;
case 0x6f8554:c.instructions+=8;goto B6f8554;
case 0x6f8555:c.instructions+=7;goto B6f8555;
case 0x6f8558:c.instructions+=6;goto B6f8558;
case 0x6f855b:c.instructions+=5;goto B6f855b;
case 0x6f855d:c.instructions+=4;goto B6f855d;
case 0x6f8563:c.instructions+=3;goto B6f8563;
case 0x6f8566:c.instructions+=2;goto B6f8566;
case 0x6f8569:c.instructions+=1;goto B6f8569;
case 0x6f856e:goto L6f856e;
case 0x6f8570:c.instructions+=3;goto B6f8570;
case 0x6f8571:c.instructions+=2;goto B6f8571;
case 0x6f8572:c.instructions+=1;goto B6f8572;
case 0x6f8575:goto L6f8575;
case 0x6f8576:c.instructions+=10;goto B6f8576;
case 0x6f8578:c.instructions+=9;goto B6f8578;
case 0x6f8579:c.instructions+=8;goto B6f8579;
case 0x6f857b:c.instructions+=7;goto B6f857b;
case 0x6f857e:c.instructions+=6;goto B6f857e;
case 0x6f8581:c.instructions+=5;goto B6f8581;
case 0x6f8584:c.instructions+=4;goto B6f8584;
case 0x6f8587:c.instructions+=3;goto B6f8587;
case 0x6f8588:c.instructions+=2;goto B6f8588;
case 0x6f858b:c.instructions+=1;goto B6f858b;
case 0x6f858d:goto L6f858d;
case 0x6f8590:c.instructions+=1;goto B6f8590;
case 0x6f8592:goto L6f8592;
case 0x6f8595:c.instructions+=10;goto B6f8595;
case 0x6f859b:c.instructions+=9;goto B6f859b;
case 0x6f859c:c.instructions+=8;goto B6f859c;
case 0x6f859e:c.instructions+=7;goto B6f859e;
case 0x6f85a0:c.instructions+=6;goto B6f85a0;
case 0x6f85a2:c.instructions+=5;goto B6f85a2;
case 0x6f85a4:c.instructions+=4;goto B6f85a4;
case 0x6f85a5:c.instructions+=3;goto B6f85a5;
case 0x6f85a6:c.instructions+=2;goto B6f85a6;
case 0x6f85a9:c.instructions+=1;goto B6f85a9;
case 0x6f85ac:goto L6f85ac;
case 0x6f85af:c.instructions+=4;goto B6f85af;
case 0x6f85b2:c.instructions+=3;goto B6f85b2;
case 0x6f85b5:c.instructions+=2;goto B6f85b5;
case 0x6f85b8:c.instructions+=1;goto B6f85b8;
case 0x6f85b9:goto L6f85b9;
case 0x6f85bc:c.instructions+=10;goto B6f85bc;
case 0x6f85bf:c.instructions+=9;goto B6f85bf;
case 0x6f85c5:c.instructions+=8;goto B6f85c5;
case 0x6f85c7:c.instructions+=7;goto B6f85c7;
case 0x6f85c9:c.instructions+=6;goto B6f85c9;
case 0x6f85ca:c.instructions+=5;goto B6f85ca;
case 0x6f85cb:c.instructions+=4;goto B6f85cb;
case 0x6f85ce:c.instructions+=3;goto B6f85ce;
case 0x6f85d1:c.instructions+=2;goto B6f85d1;
case 0x6f85d4:c.instructions+=1;goto B6f85d4;
case 0x6f85d7:goto L6f85d7;
case 0x6f85da:c.instructions+=12;goto B6f85da;
case 0x6f85dd:c.instructions+=11;goto B6f85dd;
case 0x6f85e0:c.instructions+=10;goto B6f85e0;
case 0x6f85e3:c.instructions+=9;goto B6f85e3;
case 0x6f85e6:c.instructions+=8;goto B6f85e6;
case 0x6f85e9:c.instructions+=7;goto B6f85e9;
case 0x6f85ec:c.instructions+=6;goto B6f85ec;
case 0x6f85ed:c.instructions+=5;goto B6f85ed;
case 0x6f85f0:c.instructions+=4;goto B6f85f0;
case 0x6f85f4:c.instructions+=3;goto B6f85f4;
case 0x6f85f5:c.instructions+=2;goto B6f85f5;
case 0x6f85f6:c.instructions+=1;goto B6f85f6;
case 0x6f85f9:goto L6f85f9;
case 0x6f85fc:c.instructions+=2;goto B6f85fc;
case 0x6f85ff:c.instructions+=1;goto B6f85ff;
case 0x6f8600:goto L6f8600;
case 0x6f8601:c.instructions+=7;goto B6f8601;
case 0x6f8603:c.instructions+=6;goto B6f8603;
case 0x6f8604:c.instructions+=5;goto B6f8604;
case 0x6f8607:c.instructions+=4;goto B6f8607;
case 0x6f8609:c.instructions+=3;goto B6f8609;
case 0x6f860c:c.instructions+=2;goto B6f860c;
case 0x6f860f:c.instructions+=1;goto B6f860f;
case 0x6f8614:goto L6f8614;
case 0x6f8617:c.instructions+=4;goto B6f8617;
case 0x6f8619:c.instructions+=3;goto B6f8619;
case 0x6f861f:c.instructions+=2;goto B6f861f;
case 0x6f8622:c.instructions+=1;goto B6f8622;
case 0x6f8627:goto L6f8627;
case 0x6f8629:c.instructions+=3;goto B6f8629;
case 0x6f862a:c.instructions+=2;goto B6f862a;
case 0x6f862b:c.instructions+=1;goto B6f862b;
case 0x6f862e:goto L6f862e;
case 0x6f8631:c.instructions+=6;goto B6f8631;
case 0x6f8634:c.instructions+=5;goto B6f8634;
case 0x6f8637:c.instructions+=4;goto B6f8637;
case 0x6f863a:c.instructions+=3;goto B6f863a;
case 0x6f863d:c.instructions+=2;goto B6f863d;
case 0x6f8641:c.instructions+=1;goto B6f8641;
case 0x6f8644:goto L6f8644;
case 0x6f8647:c.instructions+=2;goto B6f8647;
case 0x6f864a:c.instructions+=1;goto B6f864a;
case 0x6f864b:goto L6f864b;
case 0x6f864c:c.instructions+=7;goto B6f864c;
case 0x6f864e:c.instructions+=6;goto B6f864e;
case 0x6f8651:c.instructions+=5;goto B6f8651;
case 0x6f8652:c.instructions+=4;goto B6f8652;
case 0x6f8654:c.instructions+=3;goto B6f8654;
case 0x6f8659:c.instructions+=2;goto B6f8659;
case 0x6f865c:c.instructions+=1;goto B6f865c;
case 0x6f8661:goto L6f8661;
case 0x6f8664:c.instructions+=3;goto B6f8664;
case 0x6f8665:c.instructions+=2;goto B6f8665;
case 0x6f8666:c.instructions+=1;goto B6f8666;
case 0x6f8668:goto L6f8668;
case 0x6f866a:c.instructions+=2;goto B6f866a;
case 0x6f866b:c.instructions+=1;goto B6f866b;
case 0x6f866d:goto L6f866d;
case 0x6f866f:goto L6f866f;
case 0x6f8671:c.instructions+=6;goto B6f8671;
case 0x6f8674:c.instructions+=5;goto B6f8674;
case 0x6f8677:c.instructions+=4;goto B6f8677;
case 0x6f867b:c.instructions+=3;goto B6f867b;
case 0x6f867c:c.instructions+=2;goto B6f867c;
case 0x6f867d:c.instructions+=1;goto B6f867d;
case 0x6f8680:goto L6f8680;
case 0x6f8681:c.instructions+=7;goto B6f8681;
case 0x6f8683:c.instructions+=6;goto B6f8683;
case 0x6f8686:c.instructions+=5;goto B6f8686;
case 0x6f8687:c.instructions+=4;goto B6f8687;
case 0x6f8689:c.instructions+=3;goto B6f8689;
case 0x6f868c:c.instructions+=2;goto B6f868c;
case 0x6f868f:c.instructions+=1;goto B6f868f;
case 0x6f8694:goto L6f8694;
case 0x6f8697:c.instructions+=11;goto B6f8697;
case 0x6f869a:c.instructions+=10;goto B6f869a;
case 0x6f869d:c.instructions+=9;goto B6f869d;
case 0x6f869f:c.instructions+=8;goto B6f869f;
case 0x6f86a0:c.instructions+=7;goto B6f86a0;
case 0x6f86a2:c.instructions+=6;goto B6f86a2;
case 0x6f86a4:c.instructions+=5;goto B6f86a4;
case 0x6f86a5:c.instructions+=4;goto B6f86a5;
case 0x6f86a8:c.instructions+=3;goto B6f86a8;
case 0x6f86a9:c.instructions+=2;goto B6f86a9;
case 0x6f86aa:c.instructions+=1;goto B6f86aa;
case 0x6f86ad:goto L6f86ad;
case 0x6f86ae:c.instructions+=7;goto B6f86ae;
case 0x6f86b0:c.instructions+=6;goto B6f86b0;
case 0x6f86b1:c.instructions+=5;goto B6f86b1;
case 0x6f86b2:c.instructions+=4;goto B6f86b2;
case 0x6f86b5:c.instructions+=3;goto B6f86b5;
case 0x6f86b7:c.instructions+=2;goto B6f86b7;
case 0x6f86ba:c.instructions+=1;goto B6f86ba;
case 0x6f86bc:goto L6f86bc;
case 0x6f86bd:c.instructions+=2;goto B6f86bd;
case 0x6f86be:c.instructions+=1;goto B6f86be;
case 0x6f86c3:goto L6f86c3;
case 0x6f86c4:c.instructions+=1;goto B6f86c4;
case 0x6f86c5:goto L6f86c5;
case 0x6f86c6:c.instructions+=3;goto B6f86c6;
case 0x6f86cb:c.instructions+=2;goto B6f86cb;
case 0x6f86cc:c.instructions+=1;goto B6f86cc;
case 0x6f86d1:goto L6f86d1;
case 0x6f86d4:c.instructions+=5;goto B6f86d4;
case 0x6f86d5:c.instructions+=4;goto B6f86d5;
case 0x6f86d7:c.instructions+=3;goto B6f86d7;
case 0x6f86d8:c.instructions+=2;goto B6f86d8;
case 0x6f86d9:c.instructions+=1;goto B6f86d9;
case 0x6f86da:goto L6f86da;
case 0x6f86db:c.instructions+=7;goto B6f86db;
case 0x6f86dd:c.instructions+=6;goto B6f86dd;
case 0x6f86de:c.instructions+=5;goto B6f86de;
case 0x6f86e1:c.instructions+=4;goto B6f86e1;
case 0x6f86e4:c.instructions+=3;goto B6f86e4;
case 0x6f86e5:c.instructions+=2;goto B6f86e5;
case 0x6f86ea:c.instructions+=1;goto B6f86ea;
case 0x6f86ec:goto L6f86ec;
case 0x6f86ee:c.instructions+=2;goto B6f86ee;
case 0x6f86ef:c.instructions+=1;goto B6f86ef;
case 0x6f86f4:goto L6f86f4;
case 0x6f86f5:c.instructions+=1;goto B6f86f5;
case 0x6f86f6:goto L6f86f6;
case 0x6f86f8:c.instructions+=3;goto B6f86f8;
case 0x6f86f9:c.instructions+=2;goto B6f86f9;
case 0x6f86fa:c.instructions+=1;goto B6f86fa;
case 0x6f86ff:goto L6f86ff;
case 0x6f8702:c.instructions+=7;goto B6f8702;
case 0x6f8705:c.instructions+=6;goto B6f8705;
case 0x6f8706:c.instructions+=5;goto B6f8706;
case 0x6f870b:c.instructions+=4;goto B6f870b;
case 0x6f870d:c.instructions+=3;goto B6f870d;
case 0x6f870e:c.instructions+=2;goto B6f870e;
case 0x6f870f:c.instructions+=1;goto B6f870f;
case 0x6f8710:goto L6f8710;
case 0x6f8711:c.instructions+=7;goto B6f8711;
case 0x6f8713:c.instructions+=6;goto B6f8713;
case 0x6f8714:c.instructions+=5;goto B6f8714;
case 0x6f8716:c.instructions+=4;goto B6f8716;
case 0x6f8719:c.instructions+=3;goto B6f8719;
case 0x6f871c:c.instructions+=2;goto B6f871c;
case 0x6f871f:c.instructions+=1;goto B6f871f;
case 0x6f8724:goto L6f8724;
case 0x6f8726:c.instructions+=2;goto B6f8726;
case 0x6f8727:c.instructions+=1;goto B6f8727;
case 0x6f872c:goto L6f872c;
case 0x6f872d:c.instructions+=1;goto B6f872d;
case 0x6f8732:goto L6f8732;
case 0x6f8735:c.instructions+=3;goto B6f8735;
case 0x6f8736:c.instructions+=2;goto B6f8736;
case 0x6f8737:c.instructions+=1;goto B6f8737;
case 0x6f8738:goto L6f8738;
case 0x6f8739:c.instructions+=15;goto B6f8739;
case 0x6f873b:c.instructions+=14;goto B6f873b;
case 0x6f873e:c.instructions+=13;goto B6f873e;
case 0x6f873f:c.instructions+=12;goto B6f873f;
case 0x6f8741:c.instructions+=11;goto B6f8741;
case 0x6f8744:c.instructions+=10;goto B6f8744;
case 0x6f8745:c.instructions+=9;goto B6f8745;
case 0x6f8746:c.instructions+=8;goto B6f8746;
case 0x6f8747:c.instructions+=7;goto B6f8747;
case 0x6f874a:c.instructions+=6;goto B6f874a;
case 0x6f874d:c.instructions+=5;goto B6f874d;
case 0x6f874e:c.instructions+=4;goto B6f874e;
case 0x6f874f:c.instructions+=3;goto B6f874f;
case 0x6f8750:c.instructions+=2;goto B6f8750;
case 0x6f8753:c.instructions+=1;goto B6f8753;
case 0x6f8758:goto L6f8758;
case 0x6f875a:c.instructions+=2;goto B6f875a;
case 0x6f875b:c.instructions+=1;goto B6f875b;
case 0x6f8760:goto L6f8760;
case 0x6f8761:c.instructions+=1;goto B6f8761;
case 0x6f8766:goto L6f8766;
case 0x6f8769:c.instructions+=3;goto B6f8769;
case 0x6f876a:c.instructions+=2;goto B6f876a;
case 0x6f876b:c.instructions+=1;goto B6f876b;
case 0x6f876c:goto L6f876c;
case 0x6f876d:c.instructions+=9;goto B6f876d;
case 0x6f876f:c.instructions+=8;goto B6f876f;
case 0x6f8770:c.instructions+=7;goto B6f8770;
case 0x6f8772:c.instructions+=6;goto B6f8772;
case 0x6f8775:c.instructions+=5;goto B6f8775;
case 0x6f8778:c.instructions+=4;goto B6f8778;
case 0x6f877b:c.instructions+=3;goto B6f877b;
case 0x6f877e:c.instructions+=2;goto B6f877e;
case 0x6f8781:c.instructions+=1;goto B6f8781;
case 0x6f8786:goto L6f8786;
case 0x6f8788:c.instructions+=2;goto B6f8788;
case 0x6f8789:c.instructions+=1;goto B6f8789;
case 0x6f878e:goto L6f878e;
case 0x6f878f:c.instructions+=1;goto B6f878f;
case 0x6f8794:goto L6f8794;
case 0x6f8797:c.instructions+=3;goto B6f8797;
case 0x6f8798:c.instructions+=2;goto B6f8798;
case 0x6f8799:c.instructions+=1;goto B6f8799;
case 0x6f879a:goto L6f879a;
case 0x6f879b:c.instructions+=6;goto B6f879b;
case 0x6f879d:c.instructions+=5;goto B6f879d;
case 0x6f879e:c.instructions+=4;goto B6f879e;
case 0x6f87a0:c.instructions+=3;goto B6f87a0;
case 0x6f87a3:c.instructions+=2;goto B6f87a3;
case 0x6f87a6:c.instructions+=1;goto B6f87a6;
case 0x6f87ab:goto L6f87ab;
case 0x6f87ad:c.instructions+=2;goto B6f87ad;
case 0x6f87ae:c.instructions+=1;goto B6f87ae;
case 0x6f87b3:goto L6f87b3;
case 0x6f87b4:c.instructions+=1;goto B6f87b4;
case 0x6f87b9:goto L6f87b9;
case 0x6f87bc:c.instructions+=6;goto B6f87bc;
case 0x6f87be:c.instructions+=5;goto B6f87be;
case 0x6f87c0:c.instructions+=4;goto B6f87c0;
case 0x6f87c2:c.instructions+=3;goto B6f87c2;
case 0x6f87c3:c.instructions+=2;goto B6f87c3;
case 0x6f87c4:c.instructions+=1;goto B6f87c4;
case 0x6f87c5:goto L6f87c5;
case 0x6f87c6:c.instructions+=6;goto B6f87c6;
case 0x6f87c8:c.instructions+=5;goto B6f87c8;
case 0x6f87c9:c.instructions+=4;goto B6f87c9;
case 0x6f87cb:c.instructions+=3;goto B6f87cb;
case 0x6f87ce:c.instructions+=2;goto B6f87ce;
case 0x6f87d1:c.instructions+=1;goto B6f87d1;
case 0x6f87d6:goto L6f87d6;
case 0x6f87d8:c.instructions+=2;goto B6f87d8;
case 0x6f87d9:c.instructions+=1;goto B6f87d9;
case 0x6f87de:goto L6f87de;
case 0x6f87df:c.instructions+=1;goto B6f87df;
case 0x6f87e4:goto L6f87e4;
case 0x6f87e7:c.instructions+=3;goto B6f87e7;
case 0x6f87e8:c.instructions+=2;goto B6f87e8;
case 0x6f87e9:c.instructions+=1;goto B6f87e9;
case 0x6f87ea:goto L6f87ea;
case 0x6f87eb:c.instructions+=6;goto B6f87eb;
case 0x6f87ed:c.instructions+=5;goto B6f87ed;
case 0x6f87ee:c.instructions+=4;goto B6f87ee;
case 0x6f87f0:c.instructions+=3;goto B6f87f0;
case 0x6f87f3:c.instructions+=2;goto B6f87f3;
case 0x6f87f6:c.instructions+=1;goto B6f87f6;
case 0x6f87fb:goto L6f87fb;
case 0x6f87fd:c.instructions+=2;goto B6f87fd;
case 0x6f87fe:c.instructions+=1;goto B6f87fe;
case 0x6f8803:goto L6f8803;
case 0x6f8804:c.instructions+=1;goto B6f8804;
case 0x6f8809:goto L6f8809;
case 0x6f880c:c.instructions+=6;goto B6f880c;
case 0x6f880e:c.instructions+=5;goto B6f880e;
case 0x6f8810:c.instructions+=4;goto B6f8810;
case 0x6f8812:c.instructions+=3;goto B6f8812;
case 0x6f8813:c.instructions+=2;goto B6f8813;
case 0x6f8814:c.instructions+=1;goto B6f8814;
case 0x6f8815:goto L6f8815;
case 0x6f8816:c.instructions+=6;goto B6f8816;
case 0x6f8818:c.instructions+=5;goto B6f8818;
case 0x6f8819:c.instructions+=4;goto B6f8819;
case 0x6f881b:c.instructions+=3;goto B6f881b;
case 0x6f881e:c.instructions+=2;goto B6f881e;
case 0x6f8821:c.instructions+=1;goto B6f8821;
case 0x6f8826:goto L6f8826;
case 0x6f8828:c.instructions+=2;goto B6f8828;
case 0x6f8829:c.instructions+=1;goto B6f8829;
case 0x6f882e:goto L6f882e;
case 0x6f882f:c.instructions+=1;goto B6f882f;
case 0x6f8834:goto L6f8834;
case 0x6f8837:c.instructions+=6;goto B6f8837;
case 0x6f8839:c.instructions+=5;goto B6f8839;
case 0x6f883b:c.instructions+=4;goto B6f883b;
case 0x6f883d:c.instructions+=3;goto B6f883d;
case 0x6f883e:c.instructions+=2;goto B6f883e;
case 0x6f883f:c.instructions+=1;goto B6f883f;
case 0x6f8840:goto L6f8840;
case 0x6f8841:c.instructions+=3;goto B6f8841;
case 0x6f8846:c.instructions+=2;goto B6f8846;
case 0x6f8848:c.instructions+=1;goto B6f8848;
case 0x6f884d:goto L6f884d;
case 0x6f8850:c.instructions+=1;goto B6f8850;
case 0x6f8852:goto L6f8852;
case 0x6f8854:c.instructions+=1;goto B6f8854;
case 0x6f8856:goto L6f8856;
case 0x6f8859:c.instructions+=1;goto B6f8859;
case 0x6f885c:goto L6f885c;
case 0x6f885f:c.instructions+=4;goto B6f885f;
case 0x6f8863:c.instructions+=3;goto B6f8863;
case 0x6f8865:c.instructions+=2;goto B6f8865;
case 0x6f8866:c.instructions+=1;goto B6f8866;
case 0x6f886b:goto L6f886b;
case 0x6f886c:c.instructions+=4;goto B6f886c;
case 0x6f886d:c.instructions+=3;goto B6f886d;
case 0x6f8872:c.instructions+=2;goto B6f8872;
case 0x6f8874:c.instructions+=1;goto B6f8874;
case 0x6f8879:goto L6f8879;
case 0x6f887b:c.instructions+=2;goto B6f887b;
case 0x6f887d:c.instructions+=1;goto B6f887d;
case 0x6f887f:goto L6f887f;
case 0x6f8881:c.instructions+=1;goto B6f8881;
case 0x6f8883:goto L6f8883;
case 0x6f8885:c.instructions+=2;goto B6f8885;
case 0x6f8888:c.instructions+=1;goto B6f8888;
case 0x6f888a:goto L6f888a;
case 0x6f888c:c.instructions+=1;goto B6f888c;
case 0x6f8891:goto L6f8891;
case 0x6f8892:c.instructions+=3;goto B6f8892;
case 0x6f8894:c.instructions+=2;goto B6f8894;
case 0x6f8895:c.instructions+=1;goto B6f8895;
case 0x6f8896:goto L6f8896;
case 0x6f889b:c.instructions+=2;goto B6f889b;
case 0x6f88a1:c.instructions+=1;goto B6f88a1;
case 0x6f88a3:goto L6f88a3;
case 0x6f88a8:goto L6f88a8;
case 0x6f88aa:c.instructions+=4;goto B6f88aa;
case 0x6f88af:c.instructions+=3;goto B6f88af;
case 0x6f88b5:c.instructions+=2;goto B6f88b5;
case 0x6f88b7:c.instructions+=1;goto B6f88b7;
case 0x6f88b8:goto L6f88b8;
case 0x6f88b9:c.instructions+=5;goto B6f88b9;
case 0x6f88bb:c.instructions+=4;goto B6f88bb;
case 0x6f88be:c.instructions+=3;goto B6f88be;
case 0x6f88c3:c.instructions+=2;goto B6f88c3;
case 0x6f88ca:c.instructions+=1;goto B6f88ca;
case 0x6f88cc:goto L6f88cc;
case 0x6f88d2:c.instructions+=1;goto B6f88d2;
case 0x6f88d4:goto L6f88d4;
case 0x6f88d7:c.instructions+=10;goto B6f88d7;
case 0x6f88da:c.instructions+=9;goto B6f88da;
case 0x6f88e0:c.instructions+=8;goto B6f88e0;
case 0x6f88e2:c.instructions+=7;goto B6f88e2;
case 0x6f88e5:c.instructions+=6;goto B6f88e5;
case 0x6f88e7:c.instructions+=5;goto B6f88e7;
case 0x6f88e9:c.instructions+=4;goto B6f88e9;
case 0x6f88eb:c.instructions+=3;goto B6f88eb;
case 0x6f88ed:c.instructions+=2;goto B6f88ed;
case 0x6f88ee:c.instructions+=1;goto B6f88ee;
case 0x6f88ef:goto L6f88ef;
case 0x6f88f1:c.instructions+=2;goto B6f88f1;
case 0x6f88f2:c.instructions+=1;goto B6f88f2;
case 0x6f88f3:goto L6f88f3;
case 0x6f88f4:c.instructions+=5;goto B6f88f4;
case 0x6f88f5:c.instructions+=4;goto B6f88f5;
case 0x6f88f7:c.instructions+=3;goto B6f88f7;
case 0x6f88f9:c.instructions+=2;goto B6f88f9;
case 0x6f88fc:c.instructions+=1;goto B6f88fc;
case 0x6f88fe:goto L6f88fe;
case 0x6f8901:c.instructions+=2;goto B6f8901;
case 0x6f8904:c.instructions+=1;goto B6f8904;
case 0x6f8906:goto L6f8906;
case 0x6f890c:c.instructions+=4;goto B6f890c;
case 0x6f890e:c.instructions+=3;goto B6f890e;
case 0x6f890f:c.instructions+=2;goto B6f890f;
case 0x6f8910:c.instructions+=1;goto B6f8910;
case 0x6f8913:goto L6f8913;
case 0x6f8919:c.instructions+=3;goto B6f8919;
case 0x6f891c:c.instructions+=2;goto B6f891c;
case 0x6f8921:c.instructions+=1;goto B6f8921;
case 0x6f8926:goto L6f8926;
case 0x6f8927:c.instructions+=2;goto B6f8927;
case 0x6f8928:c.instructions+=1;goto B6f8928;
case 0x6f8929:goto L6f8929;
case 0x6f892a:c.instructions+=8;goto B6f892a;
case 0x6f892c:c.instructions+=7;goto B6f892c;
case 0x6f892d:c.instructions+=6;goto B6f892d;
case 0x6f892e:c.instructions+=5;goto B6f892e;
case 0x6f892f:c.instructions+=4;goto B6f892f;
case 0x6f8930:c.instructions+=3;goto B6f8930;
case 0x6f8935:c.instructions+=2;goto B6f8935;
case 0x6f8937:c.instructions+=1;goto B6f8937;
case 0x6f893c:goto L6f893c;
case 0x6f893f:c.instructions+=7;goto B6f893f;
case 0x6f8942:c.instructions+=6;goto B6f8942;
case 0x6f8945:c.instructions+=5;goto B6f8945;
case 0x6f8948:c.instructions+=4;goto B6f8948;
case 0x6f894a:c.instructions+=3;goto B6f894a;
case 0x6f894d:c.instructions+=2;goto B6f894d;
case 0x6f8954:c.instructions+=1;goto B6f8954;
case 0x6f8959:goto L6f8959;
case 0x6f895a:c.instructions+=3;goto B6f895a;
case 0x6f895c:c.instructions+=2;goto B6f895c;
case 0x6f895d:c.instructions+=1;goto B6f895d;
case 0x6f895f:goto L6f895f;
case 0x6f8963:c.instructions+=1;goto B6f8963;
case 0x6f8965:goto L6f8965;
case 0x6f8967:c.instructions+=1;goto B6f8967;
case 0x6f896c:goto L6f896c;
case 0x6f896d:c.instructions+=1;goto B6f896d;
case 0x6f896e:goto L6f896e;
case 0x6f8972:c.instructions+=1;goto B6f8972;
case 0x6f8974:goto L6f8974;
case 0x6f8976:c.instructions+=1;goto B6f8976;
case 0x6f8979:goto L6f8979;
case 0x6f897a:goto L6f897a;
case 0x6f897b:c.instructions+=1;goto B6f897b;
case 0x6f897c:goto L6f897c;
case 0x6f897d:c.instructions+=5;goto B6f897d;
case 0x6f897f:c.instructions+=4;goto B6f897f;
case 0x6f8980:c.instructions+=3;goto B6f8980;
case 0x6f8983:c.instructions+=2;goto B6f8983;
case 0x6f8986:c.instructions+=1;goto B6f8986;
case 0x6f898b:goto L6f898b;
case 0x6f898c:c.instructions+=1;goto B6f898c;
case 0x6f8991:goto L6f8991;
case 0x6f8992:c.instructions+=2;goto B6f8992;
case 0x6f8993:c.instructions+=1;goto B6f8993;
case 0x6f8994:goto L6f8994;
case 0x6f8995:c.instructions+=6;goto B6f8995;
case 0x6f8997:c.instructions+=5;goto B6f8997;
case 0x6f8998:c.instructions+=4;goto B6f8998;
case 0x6f899b:c.instructions+=3;goto B6f899b;
case 0x6f899c:c.instructions+=2;goto B6f899c;
case 0x6f899f:c.instructions+=1;goto B6f899f;
case 0x6f89a4:goto L6f89a4;
case 0x6f89a7:c.instructions+=5;goto B6f89a7;
case 0x6f89aa:c.instructions+=4;goto B6f89aa;
case 0x6f89b0:c.instructions+=3;goto B6f89b0;
case 0x6f89b3:c.instructions+=2;goto B6f89b3;
case 0x6f89b4:c.instructions+=1;goto B6f89b4;
case 0x6f89b6:goto L6f89b6;
case 0x6f89ba:c.instructions+=1;goto B6f89ba;
case 0x6f89bc:goto L6f89bc;
case 0x6f89bf:c.instructions+=6;goto B6f89bf;
case 0x6f89c2:c.instructions+=5;goto B6f89c2;
case 0x6f89c5:c.instructions+=4;goto B6f89c5;
case 0x6f89ca:c.instructions+=3;goto B6f89ca;
case 0x6f89cc:c.instructions+=2;goto B6f89cc;
case 0x6f89cf:c.instructions+=1;goto B6f89cf;
case 0x6f89d1:goto L6f89d1;
case 0x6f89d3:goto L6f89d3;
case 0x6f89d4:c.instructions+=6;goto B6f89d4;
case 0x6f89d6:c.instructions+=5;goto B6f89d6;
case 0x6f89d7:c.instructions+=4;goto B6f89d7;
case 0x6f89d8:c.instructions+=3;goto B6f89d8;
case 0x6f89d9:c.instructions+=2;goto B6f89d9;
case 0x6f89dc:c.instructions+=1;goto B6f89dc;
case 0x6f89e1:goto L6f89e1;
case 0x6f89e4:c.instructions+=3;goto B6f89e4;
case 0x6f89e7:c.instructions+=2;goto B6f89e7;
case 0x6f89eb:c.instructions+=1;goto B6f89eb;
case 0x6f89ed:goto L6f89ed;
case 0x6f89f2:c.instructions+=1;goto B6f89f2;
case 0x6f89f4:goto L6f89f4;
case 0x6f89f5:c.instructions+=3;goto B6f89f5;
case 0x6f89f7:c.instructions+=2;goto B6f89f7;
case 0x6f89fa:c.instructions+=1;goto B6f89fa;
case 0x6f89ff:goto L6f89ff;
case 0x6f8a02:c.instructions+=3;goto B6f8a02;
case 0x6f8a05:c.instructions+=2;goto B6f8a05;
case 0x6f8a09:c.instructions+=1;goto B6f8a09;
case 0x6f8a0b:goto L6f8a0b;
case 0x6f8a10:goto L6f8a10;
case 0x6f8a13:c.instructions+=1;goto B6f8a13;
case 0x6f8a18:goto L6f8a18;
case 0x6f8a19:c.instructions+=1;goto B6f8a19;
case 0x6f8a1a:goto L6f8a1a;
case 0x6f8a1b:c.instructions+=3;goto B6f8a1b;
case 0x6f8a1c:c.instructions+=2;goto B6f8a1c;
case 0x6f8a1d:c.instructions+=1;goto B6f8a1d;
case 0x6f8a1e:goto L6f8a1e;
case 0x6f8a1f:c.instructions+=6;goto B6f8a1f;
case 0x6f8a21:c.instructions+=5;goto B6f8a21;
case 0x6f8a24:c.instructions+=4;goto B6f8a24;
case 0x6f8a25:c.instructions+=3;goto B6f8a25;
case 0x6f8a28:c.instructions+=2;goto B6f8a28;
case 0x6f8a2b:c.instructions+=1;goto B6f8a2b;
case 0x6f8a30:goto L6f8a30;
case 0x6f8a34:c.instructions+=2;goto B6f8a34;
case 0x6f8a35:c.instructions+=1;goto B6f8a35;
case 0x6f8a37:goto L6f8a37;
case 0x6f8a38:c.instructions+=3;goto B6f8a38;
case 0x6f8a3a:c.instructions+=2;goto B6f8a3a;
case 0x6f8a3d:c.instructions+=1;goto B6f8a3d;
case 0x6f8a42:goto L6f8a42;
case 0x6f8a45:c.instructions+=3;goto B6f8a45;
case 0x6f8a48:c.instructions+=2;goto B6f8a48;
case 0x6f8a4c:c.instructions+=1;goto B6f8a4c;
case 0x6f8a52:goto L6f8a52;
case 0x6f8a57:c.instructions+=1;goto B6f8a57;
case 0x6f8a5c:goto L6f8a5c;
case 0x6f8a5f:c.instructions+=35;goto B6f8a5f;
case 0x6f8a63:c.instructions+=34;goto B6f8a63;
case 0x6f8a64:c.instructions+=33;goto B6f8a64;
case 0x6f8a66:c.instructions+=32;goto B6f8a66;
case 0x6f8a69:c.instructions+=31;goto B6f8a69;
case 0x6f8a6c:c.instructions+=30;goto B6f8a6c;
case 0x6f8a6f:c.instructions+=29;goto B6f8a6f;
case 0x6f8a72:c.instructions+=28;goto B6f8a72;
case 0x6f8a75:c.instructions+=27;goto B6f8a75;
case 0x6f8a78:c.instructions+=26;goto B6f8a78;
case 0x6f8a7b:c.instructions+=25;goto B6f8a7b;
case 0x6f8a7e:c.instructions+=24;goto B6f8a7e;
case 0x6f8a81:c.instructions+=23;goto B6f8a81;
case 0x6f8a84:c.instructions+=22;goto B6f8a84;
case 0x6f8a87:c.instructions+=21;goto B6f8a87;
case 0x6f8a8d:c.instructions+=20;goto B6f8a8d;
case 0x6f8a90:c.instructions+=19;goto B6f8a90;
case 0x6f8a93:c.instructions+=18;goto B6f8a93;
case 0x6f8a95:c.instructions+=17;goto B6f8a95;
case 0x6f8a98:c.instructions+=16;goto B6f8a98;
case 0x6f8a99:c.instructions+=15;goto B6f8a99;
case 0x6f8a9c:c.instructions+=14;goto B6f8a9c;
case 0x6f8a9f:c.instructions+=13;goto B6f8a9f;
case 0x6f8aa5:c.instructions+=12;goto B6f8aa5;
case 0x6f8aa8:c.instructions+=11;goto B6f8aa8;
case 0x6f8aa9:c.instructions+=10;goto B6f8aa9;
case 0x6f8ab0:c.instructions+=9;goto B6f8ab0;
case 0x6f8ab7:c.instructions+=8;goto B6f8ab7;
case 0x6f8abe:c.instructions+=7;goto B6f8abe;
case 0x6f8ac5:c.instructions+=6;goto B6f8ac5;
case 0x6f8ac8:c.instructions+=5;goto B6f8ac8;
case 0x6f8acf:c.instructions+=4;goto B6f8acf;
case 0x6f8ad2:c.instructions+=3;goto B6f8ad2;
case 0x6f8ad4:c.instructions+=2;goto B6f8ad4;
case 0x6f8ad5:c.instructions+=1;goto B6f8ad5;
case 0x6f8ad7:goto L6f8ad7;
case 0x6f8ada:c.instructions+=6;goto B6f8ada;
case 0x6f8add:c.instructions+=5;goto B6f8add;
case 0x6f8ae0:c.instructions+=4;goto B6f8ae0;
case 0x6f8ae6:c.instructions+=3;goto B6f8ae6;
case 0x6f8ae8:c.instructions+=2;goto B6f8ae8;
case 0x6f8ae9:c.instructions+=1;goto B6f8ae9;
case 0x6f8aeb:goto L6f8aeb;
case 0x6f8aed:goto L6f8aed;
case 0x6f8aee:c.instructions+=6;goto B6f8aee;
case 0x6f8af0:c.instructions+=5;goto B6f8af0;
case 0x6f8af1:c.instructions+=4;goto B6f8af1;
case 0x6f8af2:c.instructions+=3;goto B6f8af2;
case 0x6f8af5:c.instructions+=2;goto B6f8af5;
case 0x6f8af8:c.instructions+=1;goto B6f8af8;
case 0x6f8afd:goto L6f8afd;
case 0x6f8b00:c.instructions+=3;goto B6f8b00;
case 0x6f8b03:c.instructions+=2;goto B6f8b03;
case 0x6f8b07:c.instructions+=1;goto B6f8b07;
case 0x6f8b09:goto L6f8b09;
case 0x6f8b0e:goto L6f8b0e;
case 0x6f8b11:c.instructions+=1;goto B6f8b11;
case 0x6f8b16:goto L6f8b16;
case 0x6f8b17:c.instructions+=1;goto B6f8b17;
case 0x6f8b18:goto L6f8b18;
case 0x6f8b19:c.instructions+=2;goto B6f8b19;
case 0x6f8b1a:c.instructions+=1;goto B6f8b1a;
case 0x6f8b1b:goto L6f8b1b;
case 0x6f8b1c:c.instructions+=6;goto B6f8b1c;
case 0x6f8b1e:c.instructions+=5;goto B6f8b1e;
case 0x6f8b1f:c.instructions+=4;goto B6f8b1f;
case 0x6f8b22:c.instructions+=3;goto B6f8b22;
case 0x6f8b23:c.instructions+=2;goto B6f8b23;
case 0x6f8b26:c.instructions+=1;goto B6f8b26;
case 0x6f8b2b:goto L6f8b2b;
case 0x6f8b2d:c.instructions+=4;goto B6f8b2d;
case 0x6f8b2f:c.instructions+=3;goto B6f8b2f;
case 0x6f8b30:c.instructions+=2;goto B6f8b30;
case 0x6f8b33:c.instructions+=1;goto B6f8b33;
case 0x6f8b35:goto L6f8b35;
case 0x6f8b3a:goto L6f8b3a;
case 0x6f8b3c:goto L6f8b3c;
case 0x6f8b3f:c.instructions+=1;goto B6f8b3f;
case 0x6f8b41:goto L6f8b41;
case 0x6f8b42:c.instructions+=3;goto B6f8b42;
case 0x6f8b44:c.instructions+=2;goto B6f8b44;
case 0x6f8b45:c.instructions+=1;goto B6f8b45;
case 0x6f8b4a:goto L6f8b4a;
case 0x6f8b4d:c.instructions+=3;goto B6f8b4d;
case 0x6f8b50:c.instructions+=2;goto B6f8b50;
case 0x6f8b53:c.instructions+=1;goto B6f8b53;
case 0x6f8b55:goto L6f8b55;
case 0x6f8b5a:c.instructions+=1;goto B6f8b5a;
case 0x6f8b5c:goto L6f8b5c;
case 0x6f8b5f:c.instructions+=1;goto B6f8b5f;
case 0x6f8b61:goto L6f8b61;
case 0x6f8b64:c.instructions+=3;goto B6f8b64;
case 0x6f8b6a:c.instructions+=2;goto B6f8b6a;
case 0x6f8b6c:c.instructions+=1;goto B6f8b6c;
case 0x6f8b6e:goto L6f8b6e;
case 0x6f8b70:goto L6f8b70;
case 0x6f8b71:c.instructions+=6;goto B6f8b71;
case 0x6f8b73:c.instructions+=5;goto B6f8b73;
case 0x6f8b74:c.instructions+=4;goto B6f8b74;
case 0x6f8b77:c.instructions+=3;goto B6f8b77;
case 0x6f8b7a:c.instructions+=2;goto B6f8b7a;
case 0x6f8b7b:c.instructions+=1;goto B6f8b7b;
case 0x6f8b80:goto L6f8b80;
case 0x6f8b83:c.instructions+=3;goto B6f8b83;
case 0x6f8b86:c.instructions+=2;goto B6f8b86;
case 0x6f8b89:c.instructions+=1;goto B6f8b89;
case 0x6f8b8b:goto L6f8b8b;
case 0x6f8b90:c.instructions+=1;goto B6f8b90;
case 0x6f8b92:goto L6f8b92;
case 0x6f8b93:c.instructions+=3;goto B6f8b93;
case 0x6f8b95:c.instructions+=2;goto B6f8b95;
case 0x6f8b96:c.instructions+=1;goto B6f8b96;
case 0x6f8b9b:goto L6f8b9b;
case 0x6f8b9e:c.instructions+=3;goto B6f8b9e;
case 0x6f8ba1:c.instructions+=2;goto B6f8ba1;
case 0x6f8ba4:c.instructions+=1;goto B6f8ba4;
case 0x6f8ba6:goto L6f8ba6;
case 0x6f8bab:goto L6f8bab;
case 0x6f8bae:c.instructions+=1;goto B6f8bae;
case 0x6f8bb3:goto L6f8bb3;
case 0x6f8bb4:c.instructions+=1;goto B6f8bb4;
case 0x6f8bb5:goto L6f8bb5;
case 0x6f8bb6:c.instructions+=3;goto B6f8bb6;
case 0x6f8bb7:c.instructions+=2;goto B6f8bb7;
case 0x6f8bb8:c.instructions+=1;goto B6f8bb8;
case 0x6f8bb9:goto L6f8bb9;
case 0x6f8bba:c.instructions+=6;goto B6f8bba;
case 0x6f8bbc:c.instructions+=5;goto B6f8bbc;
case 0x6f8bbd:c.instructions+=4;goto B6f8bbd;
case 0x6f8bc0:c.instructions+=3;goto B6f8bc0;
case 0x6f8bc1:c.instructions+=2;goto B6f8bc1;
case 0x6f8bc4:c.instructions+=1;goto B6f8bc4;
case 0x6f8bc9:goto L6f8bc9;
case 0x6f8bcc:c.instructions+=5;goto B6f8bcc;
case 0x6f8bcf:c.instructions+=4;goto B6f8bcf;
case 0x6f8bd5:c.instructions+=3;goto B6f8bd5;
case 0x6f8bd8:c.instructions+=2;goto B6f8bd8;
case 0x6f8bd9:c.instructions+=1;goto B6f8bd9;
case 0x6f8bdb:goto L6f8bdb;
case 0x6f8bdf:c.instructions+=1;goto B6f8bdf;
case 0x6f8be1:goto L6f8be1;
case 0x6f8be4:c.instructions+=6;goto B6f8be4;
case 0x6f8be7:c.instructions+=5;goto B6f8be7;
case 0x6f8bea:c.instructions+=4;goto B6f8bea;
case 0x6f8bef:c.instructions+=3;goto B6f8bef;
case 0x6f8bf1:c.instructions+=2;goto B6f8bf1;
case 0x6f8bf4:c.instructions+=1;goto B6f8bf4;
case 0x6f8bf6:goto L6f8bf6;
case 0x6f8bf8:goto L6f8bf8;
case 0x6f8bf9:c.instructions+=6;goto B6f8bf9;
case 0x6f8bfb:c.instructions+=5;goto B6f8bfb;
case 0x6f8bfc:c.instructions+=4;goto B6f8bfc;
case 0x6f8bfd:c.instructions+=3;goto B6f8bfd;
case 0x6f8bfe:c.instructions+=2;goto B6f8bfe;
case 0x6f8c01:c.instructions+=1;goto B6f8c01;
case 0x6f8c06:goto L6f8c06;
case 0x6f8c09:c.instructions+=3;goto B6f8c09;
case 0x6f8c0c:c.instructions+=2;goto B6f8c0c;
case 0x6f8c10:c.instructions+=1;goto B6f8c10;
case 0x6f8c12:goto L6f8c12;
case 0x6f8c17:c.instructions+=2;goto B6f8c17;
case 0x6f8c1a:c.instructions+=1;goto B6f8c1a;
case 0x6f8c1f:goto L6f8c1f;
case 0x6f8c20:c.instructions+=2;goto B6f8c20;
case 0x6f8c21:c.instructions+=1;goto B6f8c21;
case 0x6f8c23:goto L6f8c23;
case 0x6f8c28:goto L6f8c28;
case 0x6f8c29:c.instructions+=3;goto B6f8c29;
case 0x6f8c2a:c.instructions+=2;goto B6f8c2a;
case 0x6f8c2b:c.instructions+=1;goto B6f8c2b;
case 0x6f8c2c:goto L6f8c2c;
case 0x6f8c2d:c.instructions+=4;goto B6f8c2d;
case 0x6f8c2f:c.instructions+=3;goto B6f8c2f;
case 0x6f8c32:c.instructions+=2;goto B6f8c32;
case 0x6f8c39:c.instructions+=1;goto B6f8c39;
case 0x6f8c3f:goto L6f8c3f;
case 0x6f8c40:c.instructions+=3;goto B6f8c40;
case 0x6f8c43:c.instructions+=2;goto B6f8c43;
case 0x6f8c49:c.instructions+=1;goto B6f8c49;
case 0x6f8c4f:goto L6f8c4f;
case 0x6f8c52:c.instructions+=37;goto B6f8c52;
case 0x6f8c56:c.instructions+=36;goto B6f8c56;
case 0x6f8c58:c.instructions+=35;goto B6f8c58;
case 0x6f8c5b:c.instructions+=34;goto B6f8c5b;
case 0x6f8c5e:c.instructions+=33;goto B6f8c5e;
case 0x6f8c61:c.instructions+=32;goto B6f8c61;
case 0x6f8c64:c.instructions+=31;goto B6f8c64;
case 0x6f8c67:c.instructions+=30;goto B6f8c67;
case 0x6f8c6a:c.instructions+=29;goto B6f8c6a;
case 0x6f8c6d:c.instructions+=28;goto B6f8c6d;
case 0x6f8c70:c.instructions+=27;goto B6f8c70;
case 0x6f8c76:c.instructions+=26;goto B6f8c76;
case 0x6f8c79:c.instructions+=25;goto B6f8c79;
case 0x6f8c7c:c.instructions+=24;goto B6f8c7c;
case 0x6f8c7d:c.instructions+=23;goto B6f8c7d;
case 0x6f8c7f:c.instructions+=22;goto B6f8c7f;
case 0x6f8c80:c.instructions+=21;goto B6f8c80;
case 0x6f8c83:c.instructions+=20;goto B6f8c83;
case 0x6f8c86:c.instructions+=19;goto B6f8c86;
case 0x6f8c89:c.instructions+=18;goto B6f8c89;
case 0x6f8c8c:c.instructions+=17;goto B6f8c8c;
case 0x6f8c8f:c.instructions+=16;goto B6f8c8f;
case 0x6f8c95:c.instructions+=15;goto B6f8c95;
case 0x6f8c98:c.instructions+=14;goto B6f8c98;
case 0x6f8c9b:c.instructions+=13;goto B6f8c9b;
case 0x6f8c9e:c.instructions+=12;goto B6f8c9e;
case 0x6f8c9f:c.instructions+=11;goto B6f8c9f;
case 0x6f8ca6:c.instructions+=10;goto B6f8ca6;
case 0x6f8cad:c.instructions+=9;goto B6f8cad;
case 0x6f8cb4:c.instructions+=8;goto B6f8cb4;
case 0x6f8cbb:c.instructions+=7;goto B6f8cbb;
case 0x6f8cc2:c.instructions+=6;goto B6f8cc2;
case 0x6f8cc5:c.instructions+=5;goto B6f8cc5;
case 0x6f8cc7:c.instructions+=4;goto B6f8cc7;
case 0x6f8cca:c.instructions+=3;goto B6f8cca;
case 0x6f8ccb:c.instructions+=2;goto B6f8ccb;
case 0x6f8cd1:c.instructions+=1;goto B6f8cd1;
case 0x6f8cd3:goto L6f8cd3;
case 0x6f8cd8:c.instructions+=5;goto B6f8cd8;
case 0x6f8cdd:c.instructions+=4;goto B6f8cdd;
case 0x6f8ce1:c.instructions+=3;goto B6f8ce1;
case 0x6f8ce6:c.instructions+=2;goto B6f8ce6;
case 0x6f8ceb:c.instructions+=1;goto B6f8ceb;
case 0x6f8cf0:goto L6f8cf0;
case 0x6f8cf6:c.instructions+=3;goto B6f8cf6;
case 0x6f8cf8:c.instructions+=2;goto B6f8cf8;
case 0x6f8cfa:c.instructions+=1;goto B6f8cfa;
case 0x6f8cfc:goto L6f8cfc;
case 0x6f8cff:goto L6f8cff;
case 0x6f8d02:c.instructions+=6;goto B6f8d02;
case 0x6f8d09:c.instructions+=5;goto B6f8d09;
case 0x6f8d0c:c.instructions+=4;goto B6f8d0c;
case 0x6f8d0d:c.instructions+=3;goto B6f8d0d;
case 0x6f8d10:c.instructions+=2;goto B6f8d10;
case 0x6f8d12:c.instructions+=1;goto B6f8d12;
case 0x6f8d14:goto L6f8d14;
case 0x6f8d19:c.instructions+=1;goto B6f8d19;
case 0x6f8d1a:goto L6f8d1a;
case 0x6f8d1b:goto L6f8d1b;
case 0x6f8d1c:c.instructions+=1;goto B6f8d1c;
case 0x6f8d1d:goto L6f8d1d;
case 0x6f8d1e:c.instructions+=5;goto B6f8d1e;
case 0x6f8d20:c.instructions+=4;goto B6f8d20;
case 0x6f8d21:c.instructions+=3;goto B6f8d21;
case 0x6f8d22:c.instructions+=2;goto B6f8d22;
case 0x6f8d27:c.instructions+=1;goto B6f8d27;
case 0x6f8d2c:goto L6f8d2c;
case 0x6f8d2e:c.instructions+=3;goto B6f8d2e;
case 0x6f8d30:c.instructions+=2;goto B6f8d30;
case 0x6f8d32:c.instructions+=1;goto B6f8d32;
case 0x6f8d34:goto L6f8d34;
case 0x6f8d36:c.instructions+=1;goto B6f8d36;
case 0x6f8d3b:goto L6f8d3b;
case 0x6f8d3e:c.instructions+=15;goto B6f8d3e;
case 0x6f8d3f:c.instructions+=14;goto B6f8d3f;
case 0x6f8d41:c.instructions+=13;goto B6f8d41;
case 0x6f8d42:c.instructions+=12;goto B6f8d42;
case 0x6f8d44:c.instructions+=11;goto B6f8d44;
case 0x6f8d45:c.instructions+=10;goto B6f8d45;
case 0x6f8d48:c.instructions+=9;goto B6f8d48;
case 0x6f8d4b:c.instructions+=8;goto B6f8d4b;
case 0x6f8d4e:c.instructions+=7;goto B6f8d4e;
case 0x6f8d51:c.instructions+=6;goto B6f8d51;
case 0x6f8d54:c.instructions+=5;goto B6f8d54;
case 0x6f8d57:c.instructions+=4;goto B6f8d57;
case 0x6f8d5a:c.instructions+=3;goto B6f8d5a;
case 0x6f8d5d:c.instructions+=2;goto B6f8d5d;
case 0x6f8d60:c.instructions+=1;goto B6f8d60;
case 0x6f8d65:goto L6f8d65;
case 0x6f8d68:c.instructions+=3;goto B6f8d68;
case 0x6f8d6b:c.instructions+=2;goto B6f8d6b;
case 0x6f8d6e:c.instructions+=1;goto B6f8d6e;
case 0x6f8d70:goto L6f8d70;
case 0x6f8d72:c.instructions+=1;goto B6f8d72;
case 0x6f8d74:goto L6f8d74;
case 0x6f8d79:c.instructions+=2;goto B6f8d79;
case 0x6f8d7c:c.instructions+=1;goto B6f8d7c;
case 0x6f8d81:goto L6f8d81;
case 0x6f8d83:c.instructions+=2;goto B6f8d83;
case 0x6f8d84:c.instructions+=1;goto B6f8d84;
case 0x6f8d85:goto L6f8d85;
case 0x6f8d86:c.instructions+=3;goto B6f8d86;
case 0x6f8d87:c.instructions+=2;goto B6f8d87;
case 0x6f8d88:c.instructions+=1;goto B6f8d88;
case 0x6f8d89:goto L6f8d89;
case 0x6f8d8a:c.instructions+=4;goto B6f8d8a;
case 0x6f8d8c:c.instructions+=3;goto B6f8d8c;
case 0x6f8d8d:c.instructions+=2;goto B6f8d8d;
case 0x6f8d92:c.instructions+=1;goto B6f8d92;
case 0x6f8d97:goto L6f8d97;
case 0x6f8d99:c.instructions+=2;goto B6f8d99;
case 0x6f8d9b:c.instructions+=1;goto B6f8d9b;
case 0x6f8da0:goto L6f8da0;
case 0x6f8da2:c.instructions+=15;goto B6f8da2;
case 0x6f8da3:c.instructions+=14;goto B6f8da3;
case 0x6f8da6:c.instructions+=13;goto B6f8da6;
case 0x6f8da9:c.instructions+=12;goto B6f8da9;
case 0x6f8dac:c.instructions+=11;goto B6f8dac;
case 0x6f8daf:c.instructions+=10;goto B6f8daf;
case 0x6f8db2:c.instructions+=9;goto B6f8db2;
case 0x6f8db5:c.instructions+=8;goto B6f8db5;
case 0x6f8db8:c.instructions+=7;goto B6f8db8;
case 0x6f8dba:c.instructions+=6;goto B6f8dba;
case 0x6f8dbd:c.instructions+=5;goto B6f8dbd;
case 0x6f8dc0:c.instructions+=4;goto B6f8dc0;
case 0x6f8dc2:c.instructions+=3;goto B6f8dc2;
case 0x6f8dc5:c.instructions+=2;goto B6f8dc5;
case 0x6f8dc8:c.instructions+=1;goto B6f8dc8;
case 0x6f8dcd:goto L6f8dcd;
case 0x6f8dd0:c.instructions+=3;goto B6f8dd0;
case 0x6f8dd5:c.instructions+=2;goto B6f8dd5;
case 0x6f8dd8:c.instructions+=1;goto B6f8dd8;
case 0x6f8ddd:goto L6f8ddd;
case 0x6f8ddf:c.instructions+=4;goto B6f8ddf;
case 0x6f8de2:c.instructions+=3;goto B6f8de2;
case 0x6f8de3:c.instructions+=2;goto B6f8de3;
case 0x6f8de4:c.instructions+=1;goto B6f8de4;
case 0x6f8de5:goto L6f8de5;
case 0x6f8de6:c.instructions+=5;goto B6f8de6;
case 0x6f8de8:c.instructions+=4;goto B6f8de8;
case 0x6f8de9:c.instructions+=3;goto B6f8de9;
case 0x6f8dea:c.instructions+=2;goto B6f8dea;
case 0x6f8def:c.instructions+=1;goto B6f8def;
case 0x6f8df4:goto L6f8df4;
case 0x6f8df6:c.instructions+=3;goto B6f8df6;
case 0x6f8df8:c.instructions+=2;goto B6f8df8;
case 0x6f8dfa:c.instructions+=1;goto B6f8dfa;
case 0x6f8dfc:goto L6f8dfc;
case 0x6f8dfd:c.instructions+=2;goto B6f8dfd;
case 0x6f8dff:c.instructions+=1;goto B6f8dff;
case 0x6f8e04:goto L6f8e04;
case 0x6f8e07:c.instructions+=15;goto B6f8e07;
case 0x6f8e0a:c.instructions+=14;goto B6f8e0a;
case 0x6f8e0d:c.instructions+=13;goto B6f8e0d;
case 0x6f8e10:c.instructions+=12;goto B6f8e10;
case 0x6f8e13:c.instructions+=11;goto B6f8e13;
case 0x6f8e16:c.instructions+=10;goto B6f8e16;
case 0x6f8e19:c.instructions+=9;goto B6f8e19;
case 0x6f8e1c:c.instructions+=8;goto B6f8e1c;
case 0x6f8e1f:c.instructions+=7;goto B6f8e1f;
case 0x6f8e22:c.instructions+=6;goto B6f8e22;
case 0x6f8e25:c.instructions+=5;goto B6f8e25;
case 0x6f8e28:c.instructions+=4;goto B6f8e28;
case 0x6f8e2b:c.instructions+=3;goto B6f8e2b;
case 0x6f8e31:c.instructions+=2;goto B6f8e31;
case 0x6f8e33:c.instructions+=1;goto B6f8e33;
case 0x6f8e35:goto L6f8e35;
case 0x6f8e37:goto L6f8e37;
case 0x6f8e38:c.instructions+=6;goto B6f8e38;
case 0x6f8e3a:c.instructions+=5;goto B6f8e3a;
case 0x6f8e3b:c.instructions+=4;goto B6f8e3b;
case 0x6f8e3e:c.instructions+=3;goto B6f8e3e;
case 0x6f8e3f:c.instructions+=2;goto B6f8e3f;
case 0x6f8e40:c.instructions+=1;goto B6f8e40;
case 0x6f8e45:goto L6f8e45;
case 0x6f8e48:c.instructions+=4;goto B6f8e48;
case 0x6f8e4b:c.instructions+=3;goto B6f8e4b;
case 0x6f8e4e:c.instructions+=2;goto B6f8e4e;
case 0x6f8e4f:c.instructions+=1;goto B6f8e4f;
case 0x6f8e51:goto L6f8e51;
case 0x6f8e53:c.instructions+=1;goto B6f8e53;
case 0x6f8e55:goto L6f8e55;
case 0x6f8e5a:c.instructions+=2;goto B6f8e5a;
case 0x6f8e5d:c.instructions+=1;goto B6f8e5d;
case 0x6f8e62:goto L6f8e62;
case 0x6f8e64:c.instructions+=2;goto B6f8e64;
case 0x6f8e65:c.instructions+=1;goto B6f8e65;
case 0x6f8e66:goto L6f8e66;
case 0x6f8e67:c.instructions+=3;goto B6f8e67;
case 0x6f8e68:c.instructions+=2;goto B6f8e68;
case 0x6f8e69:c.instructions+=1;goto B6f8e69;
case 0x6f8e6a:goto L6f8e6a;
case 0x6f8e6b:c.instructions+=4;goto B6f8e6b;
case 0x6f8e6d:c.instructions+=3;goto B6f8e6d;
case 0x6f8e6e:c.instructions+=2;goto B6f8e6e;
case 0x6f8e71:c.instructions+=1;goto B6f8e71;
case 0x6f8e76:goto L6f8e76;
case 0x6f8e78:c.instructions+=3;goto B6f8e78;
case 0x6f8e7a:c.instructions+=2;goto B6f8e7a;
case 0x6f8e7b:c.instructions+=1;goto B6f8e7b;
case 0x6f8e7d:goto L6f8e7d;
case 0x6f8e81:c.instructions+=1;goto B6f8e81;
case 0x6f8e83:goto L6f8e83;
case 0x6f8e84:c.instructions+=4;goto B6f8e84;
case 0x6f8e85:c.instructions+=3;goto B6f8e85;
case 0x6f8e8a:c.instructions+=2;goto B6f8e8a;
case 0x6f8e8c:c.instructions+=1;goto B6f8e8c;
case 0x6f8e91:goto L6f8e91;
case 0x6f8e94:c.instructions+=7;goto B6f8e94;
case 0x6f8e96:c.instructions+=6;goto B6f8e96;
case 0x6f8e99:c.instructions+=5;goto B6f8e99;
case 0x6f8e9c:c.instructions+=4;goto B6f8e9c;
case 0x6f8e9f:c.instructions+=3;goto B6f8e9f;
case 0x6f8ea1:c.instructions+=2;goto B6f8ea1;
case 0x6f8ea3:c.instructions+=1;goto B6f8ea3;
case 0x6f8ea8:goto L6f8ea8;
case 0x6f8eaa:c.instructions+=1;goto B6f8eaa;
case 0x6f8eac:goto L6f8eac;
case 0x6f8eaf:c.instructions+=1;goto B6f8eaf;
case 0x6f8eb1:goto L6f8eb1;
case 0x6f8eb2:goto L6f8eb2;
case 0x6f8eb3:c.instructions+=1;goto B6f8eb3;
case 0x6f8eb4:goto L6f8eb4;
case 0x6f8eb5:c.instructions+=2;goto B6f8eb5;
case 0x6f8eb6:c.instructions+=1;goto B6f8eb6;
case 0x6f8eb7:goto L6f8eb7;
case 0x6f8eb8:c.instructions+=6;goto B6f8eb8;
case 0x6f8eba:c.instructions+=5;goto B6f8eba;
case 0x6f8ebb:c.instructions+=4;goto B6f8ebb;
case 0x6f8ec0:c.instructions+=3;goto B6f8ec0;
case 0x6f8ec1:c.instructions+=2;goto B6f8ec1;
case 0x6f8ec3:c.instructions+=1;goto B6f8ec3;
case 0x6f8ec8:goto L6f8ec8;
case 0x6f8ecb:c.instructions+=1;goto B6f8ecb;
case 0x6f8ed0:goto L6f8ed0;
case 0x6f8ed2:c.instructions+=2;goto B6f8ed2;
case 0x6f8ed3:c.instructions+=1;goto B6f8ed3;
case 0x6f8ed5:goto L6f8ed5;
case 0x6f8ed8:c.instructions+=1;goto B6f8ed8;
case 0x6f8eda:goto L6f8eda;
case 0x6f8edc:c.instructions+=3;goto B6f8edc;
case 0x6f8edf:c.instructions+=2;goto B6f8edf;
case 0x6f8ee2:c.instructions+=1;goto B6f8ee2;
case 0x6f8ee4:goto L6f8ee4;
case 0x6f8ee6:c.instructions+=1;goto B6f8ee6;
case 0x6f8eeb:goto L6f8eeb;
case 0x6f8eed:c.instructions+=4;goto B6f8eed;
case 0x6f8eee:c.instructions+=3;goto B6f8eee;
case 0x6f8eef:c.instructions+=2;goto B6f8eef;
case 0x6f8ef0:c.instructions+=1;goto B6f8ef0;
case 0x6f8ef1:goto L6f8ef1;
case 0x6f8ef2:c.instructions+=8;goto B6f8ef2;
case 0x6f8ef4:c.instructions+=7;goto B6f8ef4;
case 0x6f8ef5:c.instructions+=6;goto B6f8ef5;
case 0x6f8ef6:c.instructions+=5;goto B6f8ef6;
case 0x6f8ef7:c.instructions+=4;goto B6f8ef7;
case 0x6f8efc:c.instructions+=3;goto B6f8efc;
case 0x6f8efe:c.instructions+=2;goto B6f8efe;
case 0x6f8f00:c.instructions+=1;goto B6f8f00;
case 0x6f8f05:goto L6f8f05;
case 0x6f8f08:c.instructions+=1;goto B6f8f08;
case 0x6f8f0d:goto L6f8f0d;
case 0x6f8f0f:c.instructions+=3;goto B6f8f0f;
case 0x6f8f11:c.instructions+=2;goto B6f8f11;
case 0x6f8f12:c.instructions+=1;goto B6f8f12;
case 0x6f8f14:goto L6f8f14;
case 0x6f8f17:c.instructions+=2;goto B6f8f17;
case 0x6f8f19:c.instructions+=1;goto B6f8f19;
case 0x6f8f1b:goto L6f8f1b;
case 0x6f8f22:goto L6f8f22;
case 0x6f8f24:c.instructions+=1;goto B6f8f24;
case 0x6f8f29:goto L6f8f29;
case 0x6f8f2b:c.instructions+=2;goto B6f8f2b;
case 0x6f8f2d:c.instructions+=1;goto B6f8f2d;
case 0x6f8f2f:goto L6f8f2f;
case 0x6f8f31:c.instructions+=1;goto B6f8f31;
case 0x6f8f33:goto L6f8f33;
case 0x6f8f36:goto L6f8f36;
case 0x6f8f37:c.instructions+=4;goto B6f8f37;
case 0x6f8f38:c.instructions+=3;goto B6f8f38;
case 0x6f8f39:c.instructions+=2;goto B6f8f39;
case 0x6f8f3a:c.instructions+=1;goto B6f8f3a;
case 0x6f8f3b:goto L6f8f3b;
case 0x6f8f3e:c.instructions+=1;goto B6f8f3e;
case 0x6f8f43:goto L6f8f43;
case 0x6f8f44:goto L6f8f44;
case 0x6f8f47:c.instructions+=1;goto B6f8f47;
case 0x6f8f49:goto L6f8f49;
case 0x6f8f4c:c.instructions+=2;goto B6f8f4c;
case 0x6f8f4f:c.instructions+=1;goto B6f8f4f;
case 0x6f8f51:goto L6f8f51;
case 0x6f8f53:c.instructions+=1;goto B6f8f53;
case 0x6f8f55:goto L6f8f55;
case 0x6f8f57:goto L6f8f57;
case 0x6f8f5a:c.instructions+=2;goto B6f8f5a;
case 0x6f8f5c:c.instructions+=1;goto B6f8f5c;
case 0x6f8f5e:goto L6f8f5e;
case 0x6f8f60:goto L6f8f60;
case 0x6f8f63:goto L6f8f63;
case 0x6f8f65:c.instructions+=1;goto B6f8f65;
case 0x6f8f6a:goto L6f8f6a;
case 0x6f8f6c:c.instructions+=1;goto B6f8f6c;
case 0x6f8f6e:goto L6f8f6e;
case 0x6f8f70:c.instructions+=1;goto B6f8f70;
case 0x6f8f72:goto L6f8f72;
case 0x6f8f75:c.instructions+=2;goto B6f8f75;
case 0x6f8f78:c.instructions+=1;goto B6f8f78;
case 0x6f8f7a:goto L6f8f7a;
case 0x6f8f7d:c.instructions+=2;goto B6f8f7d;
case 0x6f8f7f:c.instructions+=1;goto B6f8f7f;
case 0x6f8f81:goto L6f8f81;
case 0x6f8f84:c.instructions+=1;goto B6f8f84;
case 0x6f8f86:goto L6f8f86;
case 0x6f8f88:c.instructions+=2;goto B6f8f88;
case 0x6f8f89:c.instructions+=1;goto B6f8f89;
case 0x6f8f8b:goto L6f8f8b;
case 0x6f8f8c:c.instructions+=12;goto B6f8f8c;
case 0x6f8f8e:c.instructions+=11;goto B6f8f8e;
case 0x6f8f8f:c.instructions+=10;goto B6f8f8f;
case 0x6f8f90:c.instructions+=9;goto B6f8f90;
case 0x6f8f91:c.instructions+=8;goto B6f8f91;
case 0x6f8f92:c.instructions+=7;goto B6f8f92;
case 0x6f8f93:c.instructions+=6;goto B6f8f93;
case 0x6f8f95:c.instructions+=5;goto B6f8f95;
case 0x6f8f9a:c.instructions+=4;goto B6f8f9a;
case 0x6f8f9c:c.instructions+=3;goto B6f8f9c;
case 0x6f8f9f:c.instructions+=2;goto B6f8f9f;
case 0x6f8fa2:c.instructions+=1;goto B6f8fa2;
case 0x6f8fa7:goto L6f8fa7;
case 0x6f8faa:c.instructions+=1;goto B6f8faa;
case 0x6f8faf:goto L6f8faf;
case 0x6f8fb1:c.instructions+=3;goto B6f8fb1;
case 0x6f8fb3:c.instructions+=2;goto B6f8fb3;
case 0x6f8fb4:c.instructions+=1;goto B6f8fb4;
case 0x6f8fb6:goto L6f8fb6;
case 0x6f8fb9:c.instructions+=6;goto B6f8fb9;
case 0x6f8fbc:c.instructions+=5;goto B6f8fbc;
case 0x6f8fbe:c.instructions+=4;goto B6f8fbe;
case 0x6f8fc1:c.instructions+=3;goto B6f8fc1;
case 0x6f8fc4:c.instructions+=2;goto B6f8fc4;
case 0x6f8fc7:c.instructions+=1;goto B6f8fc7;
case 0x6f8fc9:goto L6f8fc9;
case 0x6f8fcb:c.instructions+=1;goto B6f8fcb;
case 0x6f8fcd:goto L6f8fcd;
case 0x6f8fd4:goto L6f8fd4;
case 0x6f8fd6:c.instructions+=1;goto B6f8fd6;
case 0x6f8fdb:goto L6f8fdb;
case 0x6f8fdd:c.instructions+=2;goto B6f8fdd;
case 0x6f8fdf:c.instructions+=1;goto B6f8fdf;
case 0x6f8fe1:goto L6f8fe1;
case 0x6f8fe4:c.instructions+=1;goto B6f8fe4;
case 0x6f8fe6:goto L6f8fe6;
case 0x6f8fe9:c.instructions+=1;goto B6f8fe9;
case 0x6f8feb:goto L6f8feb;
case 0x6f8fed:c.instructions+=1;goto B6f8fed;
case 0x6f8fef:goto L6f8fef;
case 0x6f8ff0:c.instructions+=1;goto B6f8ff0;
case 0x6f8ff5:goto L6f8ff5;
case 0x6f8ff6:c.instructions+=1;goto B6f8ff6;
case 0x6f8ff8:goto L6f8ff8;
case 0x6f8ffb:c.instructions+=1;goto B6f8ffb;
case 0x6f8ffd:goto L6f8ffd;
case 0x6f8fff:c.instructions+=1;goto B6f8fff;
default:missing_instruction(c.pc);}
B6f8000:L6f8000:{c.instructions+=1;NFSU2_TR(0x6f8000);
{goto L6f8004;}
}
B6f8002:L6f8002:{c.instructions+=1;NFSU2_TR(0x6f8002);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f8004:L6f8004:{c.instructions+=2;NFSU2_TR(0x6f8004);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8007:{NFSU2_TR(0x6f8007);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6f7ff2u,6f7);}
}
B6f8009:L6f8009:{c.instructions+=3;NFSU2_TR(0x6f8009);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f800c:{NFSU2_TR(0x6f800c);
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
B6f800e:{NFSU2_TR(0x6f800e);
if(r1(R+518)){{goto L6f8037;}}
}
B6f8010:L6f8010:{c.instructions+=7;NFSU2_TR(0x6f8010);
__builtin_memmove((R+12),(R+24),4);
}
B6f8012:{NFSU2_TR(0x6f8012);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B6f8014:{NFSU2_TR(0x6f8014);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f8016:{NFSU2_TR(0x6f8016);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8019:{NFSU2_TR(0x6f8019);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+28))));
}
B6f801b:{NFSU2_TR(0x6f801b);
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
B6f801d:{NFSU2_TR(0x6f801d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8037;}}
}
B6f801f:L6f801f:{c.instructions+=6;NFSU2_TR(0x6f801f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8022:{NFSU2_TR(0x6f8022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8024:{NFSU2_TR(0x6f8024);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8027:{NFSU2_TR(0x6f8027);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f802a:{NFSU2_TR(0x6f802a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f802e:{NFSU2_TR(0x6f802e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8033;}}
}
B6f8030:L6f8030:{c.instructions+=1;NFSU2_TR(0x6f8030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8033:L6f8033:{c.instructions+=1;NFSU2_TR(0x6f8033);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B6f8037:L6f8037:{c.instructions+=6;NFSU2_TR(0x6f8037);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f803a:{NFSU2_TR(0x6f803a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f803b:{NFSU2_TR(0x6f803b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f803c:{NFSU2_TR(0x6f803c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f803d:{NFSU2_TR(0x6f803d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f803e:{NFSU2_TR(0x6f803e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8041:L6f8041:{c.instructions+=9;NFSU2_TR(0x6f8041);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8042:{NFSU2_TR(0x6f8042);
__builtin_memmove((R+20),(R+16),4);
}
B6f8044:{NFSU2_TR(0x6f8044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8047:{NFSU2_TR(0x6f8047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f8049:{NFSU2_TR(0x6f8049);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f804b:{NFSU2_TR(0x6f804b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f804e:{NFSU2_TR(0x6f804e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f8050:{NFSU2_TR(0x6f8050);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B6f8053:{NFSU2_TR(0x6f8053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8058;}}
}
B6f8055:L6f8055:{c.instructions+=1;NFSU2_TR(0x6f8055);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8058:L6f8058:{c.instructions+=2;NFSU2_TR(0x6f8058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8059:{NFSU2_TR(0x6f8059);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f805c:L6f805c:{c.instructions+=9;NFSU2_TR(0x6f805c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f805d:{NFSU2_TR(0x6f805d);
__builtin_memmove((R+20),(R+16),4);
}
B6f805f:{NFSU2_TR(0x6f805f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8062:{NFSU2_TR(0x6f8062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8065:{NFSU2_TR(0x6f8065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6f8068:{NFSU2_TR(0x6f8068);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f806b:{NFSU2_TR(0x6f806b);
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
B6f806d:{NFSU2_TR(0x6f806d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8070:{NFSU2_TR(0x6f8070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8076;}}
}
B6f8072:L6f8072:{c.instructions+=2;NFSU2_TR(0x6f8072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f8074:{NFSU2_TR(0x6f8074);
{goto L6f8078;}
}
B6f8076:L6f8076:{c.instructions+=1;NFSU2_TR(0x6f8076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6f8078:L6f8078:{c.instructions+=2;NFSU2_TR(0x6f8078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8079:{NFSU2_TR(0x6f8079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f807c:L6f807c:{c.instructions+=11;NFSU2_TR(0x6f807c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f807d:{NFSU2_TR(0x6f807d);
__builtin_memmove((R+20),(R+16),4);
}
B6f807f:{NFSU2_TR(0x6f807f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f8081:{NFSU2_TR(0x6f8081);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8082:{NFSU2_TR(0x6f8082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8083:{NFSU2_TR(0x6f8083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f8086:{NFSU2_TR(0x6f8086);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f8088:{NFSU2_TR(0x6f8088);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6f808a:{NFSU2_TR(0x6f808a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f808c:{NFSU2_TR(0x6f808c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f808d:{NFSU2_TR(0x6f808d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f80a6;}}
}
B6f808f:L6f808f:{c.instructions+=4;NFSU2_TR(0x6f808f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B6f8091:{NFSU2_TR(0x6f8091);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8094:{NFSU2_TR(0x6f8094);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B6f8097:{NFSU2_TR(0x6f8097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f80a0;}}
}
B6f8099:L6f8099:{c.instructions+=3;NFSU2_TR(0x6f8099);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f809b:{NFSU2_TR(0x6f809b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f809e:{NFSU2_TR(0x6f809e);
{goto L6f80d5;}
}
B6f80a0:L6f80a0:{c.instructions+=3;NFSU2_TR(0x6f80a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f80a2:{NFSU2_TR(0x6f80a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f80a4:{NFSU2_TR(0x6f80a4);
{goto L6f80d5;}
}
B6f80a6:L6f80a6:{c.instructions+=2;NFSU2_TR(0x6f80a6);
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
B6f80a8:{NFSU2_TR(0x6f80a8);
if(r1(R+518)){{goto L6f80d7;}}
}
B6f80aa:L6f80aa:{c.instructions+=2;NFSU2_TR(0x6f80aa);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f80ac:{NFSU2_TR(0x6f80ac);
if(r1(R+518)){{goto L6f80d7;}}
}
B6f80ae:L6f80ae:{c.instructions+=3;NFSU2_TR(0x6f80ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f80b0:{NFSU2_TR(0x6f80b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f80b2:{NFSU2_TR(0x6f80b2);
if(r1(R+518)){{goto L6f80ba;}}
}
B6f80b4:L6f80b4:{c.instructions+=3;NFSU2_TR(0x6f80b4);
__builtin_memmove((R+8),(R+28),4);
}
B6f80b6:{NFSU2_TR(0x6f80b6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f80b8:{NFSU2_TR(0x6f80b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f80aeu);}goto L6f80ae;}}
}
B6f80ba:L6f80ba:{c.instructions+=3;NFSU2_TR(0x6f80ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f80bc:{NFSU2_TR(0x6f80bc);
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
B6f80be:{NFSU2_TR(0x6f80be);
if(r1(R+518)){{goto L6f80d7;}}
}
B6f80c0:L6f80c0:{c.instructions+=2;NFSU2_TR(0x6f80c0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6f80c2:{NFSU2_TR(0x6f80c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f80d7;}}
}
B6f80c4:L6f80c4:{c.instructions+=6;NFSU2_TR(0x6f80c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f80c7:{NFSU2_TR(0x6f80c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f80c9:{NFSU2_TR(0x6f80c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6f80cb:{NFSU2_TR(0x6f80cb);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B6f80ce:{NFSU2_TR(0x6f80ce);
w1(R+0,u8(0x1ull));
}
B6f80d0:{NFSU2_TR(0x6f80d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f80d5;}}
}
B6f80d2:L6f80d2:{c.instructions+=1;NFSU2_TR(0x6f80d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f80d5:L6f80d5:{c.instructions+=1;NFSU2_TR(0x6f80d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f80d7:L6f80d7:{c.instructions+=5;NFSU2_TR(0x6f80d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f80d8:{NFSU2_TR(0x6f80d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f80d9:{NFSU2_TR(0x6f80d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f80da:{NFSU2_TR(0x6f80da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f80db:{NFSU2_TR(0x6f80db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f80de:L6f80de:{c.instructions+=7;NFSU2_TR(0x6f80de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f80df:{NFSU2_TR(0x6f80df);
__builtin_memmove((R+20),(R+16),4);
}
B6f80e1:{NFSU2_TR(0x6f80e1);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6f80e5:{NFSU2_TR(0x6f80e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f80e6:{NFSU2_TR(0x6f80e6);
__builtin_memmove((R+24),(R+4),4);
}
B6f80e8:{NFSU2_TR(0x6f80e8);
u8 U[4];
w4(U+0,u32(0x7a0358ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f80ee:{NFSU2_TR(0x6f80ee);
if(r1(R+518)){{goto L6f80f7;}}
}
B6f80f0:L6f80f0:{c.instructions+=2;NFSU2_TR(0x6f80f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f80f1:{NFSU2_TR(0x6f80f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f80f6ull));
TAIL_STATIC(0x575630u,575);
}
B6f80f6:L6f80f6:{c.instructions+=1;NFSU2_TR(0x6f80f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f80f7:L6f80f7:{c.instructions+=4;NFSU2_TR(0x6f80f7);
__builtin_memmove((R+0),(R+24),4);
}
B6f80f9:{NFSU2_TR(0x6f80f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f80fa:{NFSU2_TR(0x6f80fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f80fb:{NFSU2_TR(0x6f80fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f80fe:L6f80fe:{c.instructions+=9;NFSU2_TR(0x6f80fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f80ff:{NFSU2_TR(0x6f80ff);
__builtin_memmove((R+24),(R+4),4);
}
B6f8101:{NFSU2_TR(0x6f8101);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8102:{NFSU2_TR(0x6f8102);
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
B6f8104:{NFSU2_TR(0x6f8104);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8107:{NFSU2_TR(0x6f8107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f810a:{NFSU2_TR(0x6f810a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f810c:{NFSU2_TR(0x6f810c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f810f:{NFSU2_TR(0x6f810f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8114ull));
TAIL_STATIC(0x6f55b6u,6f5);
}
B6f8114:L6f8114:{c.instructions+=5;NFSU2_TR(0x6f8114);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8117:{NFSU2_TR(0x6f8117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f811a:{NFSU2_TR(0x6f811a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f811d:{NFSU2_TR(0x6f811d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8120:{NFSU2_TR(0x6f8120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8125ull));
TAIL_STATIC(0x6f55b6u,6f5);
}
B6f8125:L6f8125:{c.instructions+=2;NFSU2_TR(0x6f8125);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8128:{NFSU2_TR(0x6f8128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f812dull));
TAIL_STATIC(0x6f55b6u,6f5);
}
B6f812d:L6f812d:{c.instructions+=11;NFSU2_TR(0x6f812d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f8130:{NFSU2_TR(0x6f8130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8133:{NFSU2_TR(0x6f8133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8136:{NFSU2_TR(0x6f8136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8139:{NFSU2_TR(0x6f8139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f813c:{NFSU2_TR(0x6f813c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f813e:{NFSU2_TR(0x6f813e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8141:{NFSU2_TR(0x6f8141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8142:{NFSU2_TR(0x6f8142);
__builtin_memmove((R+0),(R+24),4);
}
B6f8144:{NFSU2_TR(0x6f8144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8145:{NFSU2_TR(0x6f8145);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8146:L6f8146:{c.instructions+=4;NFSU2_TR(0x6f8146);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8147:{NFSU2_TR(0x6f8147);
__builtin_memmove((R+24),(R+4),4);
}
B6f8149:{NFSU2_TR(0x6f8149);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f814c:{NFSU2_TR(0x6f814c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8151ull));
TAIL_STATIC(0x6f6b35u,6f6);
}
B6f8151:L6f8151:{c.instructions+=2;NFSU2_TR(0x6f8151);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8154:{NFSU2_TR(0x6f8154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8159ull));
TAIL_STATIC(0x6f6b35u,6f6);
}
B6f8159:L6f8159:{c.instructions+=2;NFSU2_TR(0x6f8159);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f815c:{NFSU2_TR(0x6f815c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8161ull));
TAIL_STATIC(0x6f6b35u,6f6);
}
B6f8161:L6f8161:{c.instructions+=3;NFSU2_TR(0x6f8161);
__builtin_memmove((R+4),(R+24),4);
}
B6f8163:{NFSU2_TR(0x6f8163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8164:{NFSU2_TR(0x6f8164);
TAIL_STATIC(0x6f7ec0u,6f7);
}
B6f8169:L6f8169:{c.instructions+=5;NFSU2_TR(0x6f8169);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f816a:{NFSU2_TR(0x6f816a);
__builtin_memmove((R+20),(R+16),4);
}
B6f816c:{NFSU2_TR(0x6f816c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f816d:{NFSU2_TR(0x6f816d);
__builtin_memmove((R+24),(R+4),4);
}
B6f816f:{NFSU2_TR(0x6f816f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8174ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8146u);}goto L6f8146;}
}
B6f8174:L6f8174:{c.instructions+=2;NFSU2_TR(0x6f8174);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6f8178:{NFSU2_TR(0x6f8178);
if(r1(R+518)){{goto L6f8181;}}
}
B6f817a:L6f817a:{c.instructions+=2;NFSU2_TR(0x6f817a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f817b:{NFSU2_TR(0x6f817b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8180ull));
TAIL_STATIC(0x575630u,575);
}
B6f8180:L6f8180:{c.instructions+=1;NFSU2_TR(0x6f8180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8181:L6f8181:{c.instructions+=4;NFSU2_TR(0x6f8181);
__builtin_memmove((R+0),(R+24),4);
}
B6f8183:{NFSU2_TR(0x6f8183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8184:{NFSU2_TR(0x6f8184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8185:{NFSU2_TR(0x6f8185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8188:L6f8188:{c.instructions+=8;NFSU2_TR(0x6f8188);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8189:{NFSU2_TR(0x6f8189);
__builtin_memmove((R+20),(R+16),4);
}
B6f818b:{NFSU2_TR(0x6f818b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f818c:{NFSU2_TR(0x6f818c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f818f:{NFSU2_TR(0x6f818f);
__builtin_memmove((R+24),(R+4),4);
}
B6f8191:{NFSU2_TR(0x6f8191);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8194:{NFSU2_TR(0x6f8194);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8197:{NFSU2_TR(0x6f8197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f819cull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f819c:L6f819c:{c.instructions+=4;NFSU2_TR(0x6f819c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f819f:{NFSU2_TR(0x6f819f);
__builtin_memmove((R+4),(R+24),4);
}
B6f81a1:{NFSU2_TR(0x6f81a1);
u8 U[4];
w4(U+0,u32(0x7c2f44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f81a7:{NFSU2_TR(0x6f81a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f81acull));
TAIL_STATIC(0x6f6cbeu,6f6);
}
B6f81ac:L6f81ac:{c.instructions+=2;NFSU2_TR(0x6f81ac);
__builtin_memmove((R+4),(R+24),4);
}
B6f81ae:{NFSU2_TR(0x6f81ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f81b3ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f81b3:L6f81b3:{c.instructions+=4;NFSU2_TR(0x6f81b3);
__builtin_memmove((R+0),(R+24),4);
}
B6f81b5:{NFSU2_TR(0x6f81b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f81b6:{NFSU2_TR(0x6f81b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f81b7:{NFSU2_TR(0x6f81b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f81ba:L6f81ba:{c.instructions+=7;NFSU2_TR(0x6f81ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f81bb:{NFSU2_TR(0x6f81bb);
__builtin_memmove((R+24),(R+4),4);
}
B6f81bd:{NFSU2_TR(0x6f81bd);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f81c3:{NFSU2_TR(0x6f81c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f81c5:{NFSU2_TR(0x6f81c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f81c7:{NFSU2_TR(0x6f81c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f81ca:{NFSU2_TR(0x6f81ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f81cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f81cd:L6f81cd:{c.instructions+=4;NFSU2_TR(0x6f81cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f81d0:{NFSU2_TR(0x6f81d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f81d3:{NFSU2_TR(0x6f81d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f81d4:{NFSU2_TR(0x6f81d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f81d5:L6f81d5:{c.instructions+=8;NFSU2_TR(0x6f81d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f81d6:{NFSU2_TR(0x6f81d6);
__builtin_memmove((R+20),(R+16),4);
}
B6f81d8:{NFSU2_TR(0x6f81d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f81d9:{NFSU2_TR(0x6f81d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f81dc:{NFSU2_TR(0x6f81dc);
__builtin_memmove((R+24),(R+4),4);
}
B6f81de:{NFSU2_TR(0x6f81de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f81e1:{NFSU2_TR(0x6f81e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f81e4:{NFSU2_TR(0x6f81e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f81e9ull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f81e9:L6f81e9:{c.instructions+=4;NFSU2_TR(0x6f81e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f81ec:{NFSU2_TR(0x6f81ec);
__builtin_memmove((R+4),(R+24),4);
}
B6f81ee:{NFSU2_TR(0x6f81ee);
u8 U[4];
w4(U+0,u32(0x7c2f54ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f81f4:{NFSU2_TR(0x6f81f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f81f9ull));
TAIL_STATIC(0x6f6cbeu,6f6);
}
B6f81f9:L6f81f9:{c.instructions+=2;NFSU2_TR(0x6f81f9);
__builtin_memmove((R+4),(R+24),4);
}
B6f81fb:{NFSU2_TR(0x6f81fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8200ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8200:L6f8200:{c.instructions+=4;NFSU2_TR(0x6f8200);
__builtin_memmove((R+0),(R+24),4);
}
B6f8202:{NFSU2_TR(0x6f8202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8203:{NFSU2_TR(0x6f8203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8204:{NFSU2_TR(0x6f8204);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8207:L6f8207:{c.instructions+=9;NFSU2_TR(0x6f8207);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8208:{NFSU2_TR(0x6f8208);
__builtin_memmove((R+20),(R+16),4);
}
B6f820a:{NFSU2_TR(0x6f820a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f820d:{NFSU2_TR(0x6f820d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f820e:{NFSU2_TR(0x6f820e);
__builtin_memmove((R+24),(R+4),4);
}
B6f8210:{NFSU2_TR(0x6f8210);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8216:{NFSU2_TR(0x6f8216);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8219:{NFSU2_TR(0x6f8219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f821b:{NFSU2_TR(0x6f821b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f821eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f821e:L6f821e:{c.instructions+=8;NFSU2_TR(0x6f821e);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6f8220:{NFSU2_TR(0x6f8220);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B6f8222:{NFSU2_TR(0x6f8222);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
}
B6f8224:{NFSU2_TR(0x6f8224);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0xfeull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0xfeull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xfeull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f8226:{NFSU2_TR(0x6f8226);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f8229:{NFSU2_TR(0x6f8229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f822a:{NFSU2_TR(0x6f822a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f822b:{NFSU2_TR(0x6f822b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f822e:L6f822e:{c.instructions+=7;NFSU2_TR(0x6f822e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f822f:{NFSU2_TR(0x6f822f);
__builtin_memmove((R+24),(R+4),4);
}
B6f8231:{NFSU2_TR(0x6f8231);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f8237:{NFSU2_TR(0x6f8237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8239:{NFSU2_TR(0x6f8239);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f823b:{NFSU2_TR(0x6f823b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f823e:{NFSU2_TR(0x6f823e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8241ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f8241:L6f8241:{c.instructions+=5;NFSU2_TR(0x6f8241);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f8243:{NFSU2_TR(0x6f8243);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f8244:{NFSU2_TR(0x6f8244);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f8247:{NFSU2_TR(0x6f8247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8248:{NFSU2_TR(0x6f8248);
if(r1(R+518)){{goto L6f824c;}}
}
B6f824a:L6f824a:{c.instructions+=1;NFSU2_TR(0x6f824a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f824c:L6f824c:{c.instructions+=2;NFSU2_TR(0x6f824c);
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
B6f824e:{NFSU2_TR(0x6f824e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f824f:L6f824f:{c.instructions+=8;NFSU2_TR(0x6f824f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8250:{NFSU2_TR(0x6f8250);
__builtin_memmove((R+20),(R+16),4);
}
B6f8252:{NFSU2_TR(0x6f8252);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8253:{NFSU2_TR(0x6f8253);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8256:{NFSU2_TR(0x6f8256);
__builtin_memmove((R+24),(R+4),4);
}
B6f8258:{NFSU2_TR(0x6f8258);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f825b:{NFSU2_TR(0x6f825b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f825e:{NFSU2_TR(0x6f825e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8263ull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f8263:L6f8263:{c.instructions+=4;NFSU2_TR(0x6f8263);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8266:{NFSU2_TR(0x6f8266);
__builtin_memmove((R+4),(R+24),4);
}
B6f8268:{NFSU2_TR(0x6f8268);
u8 U[4];
w4(U+0,u32(0x7c2f64ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f826e:{NFSU2_TR(0x6f826e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8273ull));
TAIL_STATIC(0x6f6cbeu,6f6);
}
B6f8273:L6f8273:{c.instructions+=5;NFSU2_TR(0x6f8273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8276:{NFSU2_TR(0x6f8276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f827a:{NFSU2_TR(0x6f827a);
__builtin_memmove((R+4),(R+24),4);
}
B6f827c:{NFSU2_TR(0x6f827c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f827f:{NFSU2_TR(0x6f827f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8284ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8284:L6f8284:{c.instructions+=4;NFSU2_TR(0x6f8284);
__builtin_memmove((R+0),(R+24),4);
}
B6f8286:{NFSU2_TR(0x6f8286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8287:{NFSU2_TR(0x6f8287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8288:{NFSU2_TR(0x6f8288);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f828b:L6f828b:{c.instructions+=8;NFSU2_TR(0x6f828b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f828c:{NFSU2_TR(0x6f828c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f828d:{NFSU2_TR(0x6f828d);
__builtin_memmove((R+28),(R+4),4);
}
B6f828f:{NFSU2_TR(0x6f828f);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f8295:{NFSU2_TR(0x6f8295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8297:{NFSU2_TR(0x6f8297);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8299:{NFSU2_TR(0x6f8299);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f829c:{NFSU2_TR(0x6f829c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f829full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f829f:L6f829f:{c.instructions+=2;NFSU2_TR(0x6f829f);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f82a3:{NFSU2_TR(0x6f82a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f82b9;}}
}
B6f82a5:L6f82a5:{c.instructions+=3;NFSU2_TR(0x6f82a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f82a8:{NFSU2_TR(0x6f82a8);
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
B6f82ab:{NFSU2_TR(0x6f82ab);
if(r1(R+518)){{goto L6f82b9;}}
}
B6f82ad:L6f82ad:{c.instructions+=1;NFSU2_TR(0x6f82ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f82b2ull));
TAIL_STATIC(0x6f717cu,6f7);
}
B6f82b2:L6f82b2:{c.instructions+=2;NFSU2_TR(0x6f82b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f82b4:{NFSU2_TR(0x6f82b4);
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
B6f82b6:L6f82b6:{c.instructions+=3;NFSU2_TR(0x6f82b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f82b7:{NFSU2_TR(0x6f82b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f82b8:{NFSU2_TR(0x6f82b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f82b9:L6f82b9:{c.instructions+=3;NFSU2_TR(0x6f82b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f82bc:{NFSU2_TR(0x6f82bc);
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
B6f82bf:{NFSU2_TR(0x6f82bf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f82b2u);}goto L6f82b2;}}
}
B6f82c1:L6f82c1:{c.instructions+=2;NFSU2_TR(0x6f82c1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f82c2:{NFSU2_TR(0x6f82c2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f82b6u);}goto L6f82b6;}
}
B6f82c4:L6f82c4:{c.instructions+=8;NFSU2_TR(0x6f82c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f82c5:{NFSU2_TR(0x6f82c5);
__builtin_memmove((R+20),(R+16),4);
}
B6f82c7:{NFSU2_TR(0x6f82c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f82c8:{NFSU2_TR(0x6f82c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f82cb:{NFSU2_TR(0x6f82cb);
__builtin_memmove((R+24),(R+4),4);
}
B6f82cd:{NFSU2_TR(0x6f82cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f82d0:{NFSU2_TR(0x6f82d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f82d3:{NFSU2_TR(0x6f82d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f82d8ull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f82d8:L6f82d8:{c.instructions+=5;NFSU2_TR(0x6f82d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f82db:{NFSU2_TR(0x6f82db);
__builtin_memmove((R+4),(R+24),4);
}
B6f82dd:{NFSU2_TR(0x6f82dd);
u8 U[4];
w4(U+0,u32(0x7c2f74ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f82e3:{NFSU2_TR(0x6f82e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f82e6:{NFSU2_TR(0x6f82e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f82ebull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f82eb:L6f82eb:{c.instructions+=4;NFSU2_TR(0x6f82eb);
__builtin_memmove((R+0),(R+24),4);
}
B6f82ed:{NFSU2_TR(0x6f82ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f82ee:{NFSU2_TR(0x6f82ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f82ef:{NFSU2_TR(0x6f82ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f82f2:L6f82f2:{c.instructions+=2;NFSU2_TR(0x6f82f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f82f6:{NFSU2_TR(0x6f82f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f82f9:L6f82f9:{c.instructions+=3;NFSU2_TR(0x6f82f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f82fa:{NFSU2_TR(0x6f82fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f82fd:{NFSU2_TR(0x6f82fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8302ull));
TAIL_STATIC(0x6f717cu,6f7);
}
B6f8302:L6f8302:{c.instructions+=5;NFSU2_TR(0x6f8302);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f8304:{NFSU2_TR(0x6f8304);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f8305:{NFSU2_TR(0x6f8305);
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
B6f8307:{NFSU2_TR(0x6f8307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8308:{NFSU2_TR(0x6f8308);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8309:L6f8309:{c.instructions+=8;NFSU2_TR(0x6f8309);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f830a:{NFSU2_TR(0x6f830a);
__builtin_memmove((R+20),(R+16),4);
}
B6f830c:{NFSU2_TR(0x6f830c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f830d:{NFSU2_TR(0x6f830d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8310:{NFSU2_TR(0x6f8310);
__builtin_memmove((R+24),(R+4),4);
}
B6f8312:{NFSU2_TR(0x6f8312);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8315:{NFSU2_TR(0x6f8315);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8318:{NFSU2_TR(0x6f8318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f831dull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f831d:L6f831d:{c.instructions+=17;NFSU2_TR(0x6f831d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8320:{NFSU2_TR(0x6f8320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8324:{NFSU2_TR(0x6f8324);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8328:{NFSU2_TR(0x6f8328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f832b:{NFSU2_TR(0x6f832b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f832e:{NFSU2_TR(0x6f832e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f832f:{NFSU2_TR(0x6f832f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8332:{NFSU2_TR(0x6f8332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8335:{NFSU2_TR(0x6f8335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8338:{NFSU2_TR(0x6f8338);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f8339:{NFSU2_TR(0x6f8339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f833c:{NFSU2_TR(0x6f833c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f833f:{NFSU2_TR(0x6f833f);
__builtin_memmove((R+4),(R+24),4);
}
B6f8341:{NFSU2_TR(0x6f8341);
u8 U[4];
w4(U+0,u32(0x7c2f84ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f8347:{NFSU2_TR(0x6f8347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f834a:{NFSU2_TR(0x6f834a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f834d:{NFSU2_TR(0x6f834d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8352ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8352:L6f8352:{c.instructions+=4;NFSU2_TR(0x6f8352);
__builtin_memmove((R+0),(R+24),4);
}
B6f8354:{NFSU2_TR(0x6f8354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8355:{NFSU2_TR(0x6f8355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8356:{NFSU2_TR(0x6f8356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8359:L6f8359:{c.instructions+=3;NFSU2_TR(0x6f8359);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f835c:{NFSU2_TR(0x6f835c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f835f:{NFSU2_TR(0x6f835f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8360:L6f8360:{c.instructions+=19;NFSU2_TR(0x6f8360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8361:{NFSU2_TR(0x6f8361);
__builtin_memmove((R+20),(R+16),4);
}
B6f8363:{NFSU2_TR(0x6f8363);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8364:{NFSU2_TR(0x6f8364);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8365:{NFSU2_TR(0x6f8365);
__builtin_memmove((R+24),(R+4),4);
}
B6f8367:{NFSU2_TR(0x6f8367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f836a:{NFSU2_TR(0x6f836a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f836d:{NFSU2_TR(0x6f836d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f836e:{NFSU2_TR(0x6f836e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8371:{NFSU2_TR(0x6f8371);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8374:{NFSU2_TR(0x6f8374);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f837a:{NFSU2_TR(0x6f837a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f837d:{NFSU2_TR(0x6f837d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8383:{NFSU2_TR(0x6f8383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6f8385:{NFSU2_TR(0x6f8385);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8387:{NFSU2_TR(0x6f8387);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f838a:{NFSU2_TR(0x6f838a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f838d:{NFSU2_TR(0x6f838d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8390:{NFSU2_TR(0x6f8390);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8393ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f8393:L6f8393:{c.instructions+=8;NFSU2_TR(0x6f8393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8396:{NFSU2_TR(0x6f8396);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8399:{NFSU2_TR(0x6f8399);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f839c:{NFSU2_TR(0x6f839c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f839f:{NFSU2_TR(0x6f839f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f83a5:{NFSU2_TR(0x6f83a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f83a7:{NFSU2_TR(0x6f83a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f83aa:{NFSU2_TR(0x6f83aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f83adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f83ad:L6f83ad:{c.instructions+=2;NFSU2_TR(0x6f83ad);
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
B6f83af:{NFSU2_TR(0x6f83af);
if(r1(R+518)){{goto L6f83b7;}}
}
B6f83b1:L6f83b1:{c.instructions+=2;NFSU2_TR(0x6f83b1);
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
B6f83b3:{NFSU2_TR(0x6f83b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f83b7;}}
}
B6f83b5:L6f83b5:{c.instructions+=1;NFSU2_TR(0x6f83b5);
__builtin_memmove((R+12),(R+0),4);
}
B6f83b7:L6f83b7:{c.instructions+=11;NFSU2_TR(0x6f83b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f83ba:{NFSU2_TR(0x6f83ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f83bd:{NFSU2_TR(0x6f83bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f83c0:{NFSU2_TR(0x6f83c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f83c3:{NFSU2_TR(0x6f83c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f83c9:{NFSU2_TR(0x6f83c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f83cf:{NFSU2_TR(0x6f83cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f83d1:{NFSU2_TR(0x6f83d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f83d2:{NFSU2_TR(0x6f83d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f83d5:{NFSU2_TR(0x6f83d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f83d8:{NFSU2_TR(0x6f83d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f83dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f83db:L6f83db:{c.instructions+=10;NFSU2_TR(0x6f83db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f83dd:{NFSU2_TR(0x6f83dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83e0:{NFSU2_TR(0x6f83e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))-u32(r4(R+4))));
w4(U+4,u32(u32(r4(U+12))-u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83e3:{NFSU2_TR(0x6f83e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83e6:{NFSU2_TR(0x6f83e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83e9:{NFSU2_TR(0x6f83e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83ec:{NFSU2_TR(0x6f83ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83ef:{NFSU2_TR(0x6f83ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f83f2:{NFSU2_TR(0x6f83f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
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
B6f83f5:{NFSU2_TR(0x6f83f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f840b;}}
}
B6f83f7:L6f83f7:{c.instructions+=1;NFSU2_TR(0x6f83f7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f83fe;}}
}
B6f83f9:L6f83f9:{c.instructions+=2;NFSU2_TR(0x6f83f9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
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
B6f83fc:{NFSU2_TR(0x6f83fc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f840b;}}
}
B6f83fe:L6f83fe:{c.instructions+=2;NFSU2_TR(0x6f83fe);
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
B6f8400:{NFSU2_TR(0x6f8400);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f840b;}}
}
B6f8402:L6f8402:{c.instructions+=2;NFSU2_TR(0x6f8402);
__builtin_memmove((R+4),(R+24),4);
}
B6f8404:{NFSU2_TR(0x6f8404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8409ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8409:L6f8409:{c.instructions+=1;NFSU2_TR(0x6f8409);
{goto L6f840f;}
}
B6f840b:L6f840b:{c.instructions+=1;NFSU2_TR(0x6f840b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f840f:L6f840f:{c.instructions+=5;NFSU2_TR(0x6f840f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8410:{NFSU2_TR(0x6f8410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8411:{NFSU2_TR(0x6f8411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8412:{NFSU2_TR(0x6f8412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8413:{NFSU2_TR(0x6f8413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8416:L6f8416:{c.instructions+=8;NFSU2_TR(0x6f8416);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8417:{NFSU2_TR(0x6f8417);
__builtin_memmove((R+20),(R+16),4);
}
B6f8419:{NFSU2_TR(0x6f8419);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f841a:{NFSU2_TR(0x6f841a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f841d:{NFSU2_TR(0x6f841d);
__builtin_memmove((R+24),(R+4),4);
}
B6f841f:{NFSU2_TR(0x6f841f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8422:{NFSU2_TR(0x6f8422);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8425:{NFSU2_TR(0x6f8425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f842aull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f842a:L6f842a:{c.instructions+=17;NFSU2_TR(0x6f842a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f842d:{NFSU2_TR(0x6f842d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8431:{NFSU2_TR(0x6f8431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8435:{NFSU2_TR(0x6f8435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8438:{NFSU2_TR(0x6f8438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f843b:{NFSU2_TR(0x6f843b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f843e:{NFSU2_TR(0x6f843e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8441:{NFSU2_TR(0x6f8441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8444:{NFSU2_TR(0x6f8444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8447:{NFSU2_TR(0x6f8447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f844a:{NFSU2_TR(0x6f844a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f844d:{NFSU2_TR(0x6f844d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8450:{NFSU2_TR(0x6f8450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8453:{NFSU2_TR(0x6f8453);
__builtin_memmove((R+4),(R+24),4);
}
B6f8455:{NFSU2_TR(0x6f8455);
u8 U[4];
w4(U+0,u32(0x7c2f94ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f845b:{NFSU2_TR(0x6f845b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f845e:{NFSU2_TR(0x6f845e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8463ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8463:L6f8463:{c.instructions+=4;NFSU2_TR(0x6f8463);
__builtin_memmove((R+0),(R+24),4);
}
B6f8465:{NFSU2_TR(0x6f8465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8466:{NFSU2_TR(0x6f8466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8467:{NFSU2_TR(0x6f8467);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f846a:L6f846a:{c.instructions+=19;NFSU2_TR(0x6f846a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f846b:{NFSU2_TR(0x6f846b);
__builtin_memmove((R+20),(R+16),4);
}
B6f846d:{NFSU2_TR(0x6f846d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f846e:{NFSU2_TR(0x6f846e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f846f:{NFSU2_TR(0x6f846f);
__builtin_memmove((R+24),(R+4),4);
}
B6f8471:{NFSU2_TR(0x6f8471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8474:{NFSU2_TR(0x6f8474);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8477:{NFSU2_TR(0x6f8477);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8478:{NFSU2_TR(0x6f8478);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f847b:{NFSU2_TR(0x6f847b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f847e:{NFSU2_TR(0x6f847e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8484:{NFSU2_TR(0x6f8484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f8487:{NFSU2_TR(0x6f8487);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f848d:{NFSU2_TR(0x6f848d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6f848f:{NFSU2_TR(0x6f848f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8491:{NFSU2_TR(0x6f8491);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8494:{NFSU2_TR(0x6f8494);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8497:{NFSU2_TR(0x6f8497);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f849a:{NFSU2_TR(0x6f849a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f849dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f849d:L6f849d:{c.instructions+=9;NFSU2_TR(0x6f849d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f84a0:{NFSU2_TR(0x6f84a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f84a3:{NFSU2_TR(0x6f84a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f84a6:{NFSU2_TR(0x6f84a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f84a9:{NFSU2_TR(0x6f84a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f84ac:{NFSU2_TR(0x6f84ac);
__builtin_memmove((R+0),gp(0x813ac8),4);
}
B6f84b1:{NFSU2_TR(0x6f84b1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6f84b3:{NFSU2_TR(0x6f84b3);
__builtin_memmove((R+12),(R+4),4);
}
B6f84b5:{NFSU2_TR(0x6f84b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f84b9;}}
}
B6f84b7:L6f84b7:{c.instructions+=1;NFSU2_TR(0x6f84b7);
__builtin_memmove((R+12),(R+0),4);
}
B6f84b9:L6f84b9:{c.instructions+=3;NFSU2_TR(0x6f84b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f84bf:{NFSU2_TR(0x6f84bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f84c1:{NFSU2_TR(0x6f84c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f84c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f84c4:L6f84c4:{c.instructions+=2;NFSU2_TR(0x6f84c4);
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
B6f84c6:{NFSU2_TR(0x6f84c6);
if(r1(R+518)){{goto L6f84ce;}}
}
B6f84c8:L6f84c8:{c.instructions+=2;NFSU2_TR(0x6f84c8);
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
B6f84ca:{NFSU2_TR(0x6f84ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f84ce;}}
}
B6f84cc:L6f84cc:{c.instructions+=1;NFSU2_TR(0x6f84cc);
__builtin_memmove((R+12),(R+0),4);
}
B6f84ce:L6f84ce:{c.instructions+=11;NFSU2_TR(0x6f84ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f84d1:{NFSU2_TR(0x6f84d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f84d4:{NFSU2_TR(0x6f84d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f84d7:{NFSU2_TR(0x6f84d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f84da:{NFSU2_TR(0x6f84da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f84e0:{NFSU2_TR(0x6f84e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f84e6:{NFSU2_TR(0x6f84e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f84e8:{NFSU2_TR(0x6f84e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f84e9:{NFSU2_TR(0x6f84e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f84ec:{NFSU2_TR(0x6f84ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f84ef:{NFSU2_TR(0x6f84ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f84f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f84f2:L6f84f2:{c.instructions+=10;NFSU2_TR(0x6f84f2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f84f4:{NFSU2_TR(0x6f84f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f84f7:{NFSU2_TR(0x6f84f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))-u32(r4(R+4))));
w4(U+4,u32(u32(r4(U+12))-u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f84fa:{NFSU2_TR(0x6f84fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f84fd:{NFSU2_TR(0x6f84fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8500:{NFSU2_TR(0x6f8500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8503:{NFSU2_TR(0x6f8503);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8506:{NFSU2_TR(0x6f8506);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8509:{NFSU2_TR(0x6f8509);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
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
B6f850c:{NFSU2_TR(0x6f850c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f8522;}}
}
B6f850e:L6f850e:{c.instructions+=1;NFSU2_TR(0x6f850e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f8515;}}
}
B6f8510:L6f8510:{c.instructions+=2;NFSU2_TR(0x6f8510);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
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
B6f8513:{NFSU2_TR(0x6f8513);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f8522;}}
}
B6f8515:L6f8515:{c.instructions+=2;NFSU2_TR(0x6f8515);
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
B6f8517:{NFSU2_TR(0x6f8517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8522;}}
}
B6f8519:L6f8519:{c.instructions+=2;NFSU2_TR(0x6f8519);
__builtin_memmove((R+4),(R+24),4);
}
B6f851b:{NFSU2_TR(0x6f851b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8520ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8520:L6f8520:{c.instructions+=1;NFSU2_TR(0x6f8520);
{goto L6f8526;}
}
B6f8522:L6f8522:{c.instructions+=1;NFSU2_TR(0x6f8522);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f8526:L6f8526:{c.instructions+=5;NFSU2_TR(0x6f8526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8527:{NFSU2_TR(0x6f8527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8528:{NFSU2_TR(0x6f8528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8529:{NFSU2_TR(0x6f8529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f852a:{NFSU2_TR(0x6f852a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f852d:L6f852d:{c.instructions+=8;NFSU2_TR(0x6f852d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f852e:{NFSU2_TR(0x6f852e);
__builtin_memmove((R+20),(R+16),4);
}
B6f8530:{NFSU2_TR(0x6f8530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8531:{NFSU2_TR(0x6f8531);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8534:{NFSU2_TR(0x6f8534);
__builtin_memmove((R+24),(R+4),4);
}
B6f8536:{NFSU2_TR(0x6f8536);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8539:{NFSU2_TR(0x6f8539);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f853c:{NFSU2_TR(0x6f853c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8541ull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f8541:L6f8541:{c.instructions+=15;NFSU2_TR(0x6f8541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8544:{NFSU2_TR(0x6f8544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8547:{NFSU2_TR(0x6f8547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f854a:{NFSU2_TR(0x6f854a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f854b:{NFSU2_TR(0x6f854b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f854e:{NFSU2_TR(0x6f854e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8551:{NFSU2_TR(0x6f8551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8554:{NFSU2_TR(0x6f8554);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f8555:{NFSU2_TR(0x6f8555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8558:{NFSU2_TR(0x6f8558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f855b:{NFSU2_TR(0x6f855b);
__builtin_memmove((R+4),(R+24),4);
}
B6f855d:{NFSU2_TR(0x6f855d);
u8 U[4];
w4(U+0,u32(0x7c2fa4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f8563:{NFSU2_TR(0x6f8563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8566:{NFSU2_TR(0x6f8566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8569:{NFSU2_TR(0x6f8569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f856eull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f856e:L6f856e:{c.instructions+=4;NFSU2_TR(0x6f856e);
__builtin_memmove((R+0),(R+24),4);
}
B6f8570:{NFSU2_TR(0x6f8570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8571:{NFSU2_TR(0x6f8571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8572:{NFSU2_TR(0x6f8572);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8575:L6f8575:{c.instructions+=11;NFSU2_TR(0x6f8575);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8576:{NFSU2_TR(0x6f8576);
__builtin_memmove((R+20),(R+16),4);
}
B6f8578:{NFSU2_TR(0x6f8578);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8579:{NFSU2_TR(0x6f8579);
__builtin_memmove((R+24),(R+4),4);
}
B6f857b:{NFSU2_TR(0x6f857b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f857e:{NFSU2_TR(0x6f857e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8581:{NFSU2_TR(0x6f8581);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8584:{NFSU2_TR(0x6f8584);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f8587:{NFSU2_TR(0x6f8587);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8588:{NFSU2_TR(0x6f8588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f858b:{NFSU2_TR(0x6f858b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8592;}}
}
B6f858d:L6f858d:{c.instructions+=2;NFSU2_TR(0x6f858d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f8590:{NFSU2_TR(0x6f8590);
if(r1(R+518)){{goto L6f85b9;}}
}
B6f8592:L6f8592:{c.instructions+=11;NFSU2_TR(0x6f8592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8595:{NFSU2_TR(0x6f8595);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f859b:{NFSU2_TR(0x6f859b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f859c:{NFSU2_TR(0x6f859c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6f859e:{NFSU2_TR(0x6f859e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85a0:{NFSU2_TR(0x6f85a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85a2:{NFSU2_TR(0x6f85a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85a4:{NFSU2_TR(0x6f85a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85a5:{NFSU2_TR(0x6f85a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85a6:{NFSU2_TR(0x6f85a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f85a9:{NFSU2_TR(0x6f85a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f85acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f85ac:L6f85ac:{c.instructions+=5;NFSU2_TR(0x6f85ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f85af:{NFSU2_TR(0x6f85af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f85b2:{NFSU2_TR(0x6f85b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f85b5:{NFSU2_TR(0x6f85b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f85b8:{NFSU2_TR(0x6f85b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f85b9:L6f85b9:{c.instructions+=11;NFSU2_TR(0x6f85b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f85bc:{NFSU2_TR(0x6f85bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f85bf:{NFSU2_TR(0x6f85bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f85c5:{NFSU2_TR(0x6f85c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f85c7:{NFSU2_TR(0x6f85c7);
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
B6f85c9:{NFSU2_TR(0x6f85c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85ca:{NFSU2_TR(0x6f85ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f85cb:{NFSU2_TR(0x6f85cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f85ce:{NFSU2_TR(0x6f85ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f85d1:{NFSU2_TR(0x6f85d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f85d4:{NFSU2_TR(0x6f85d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f85d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f85d7:L6f85d7:{c.instructions+=13;NFSU2_TR(0x6f85d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f85da:{NFSU2_TR(0x6f85da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f85dd:{NFSU2_TR(0x6f85dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f85e0:{NFSU2_TR(0x6f85e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f85e3:{NFSU2_TR(0x6f85e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f85e6:{NFSU2_TR(0x6f85e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f85e9:{NFSU2_TR(0x6f85e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f85ec:{NFSU2_TR(0x6f85ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f85ed:{NFSU2_TR(0x6f85ed);
u8 U[24];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+4))));
w1(U+16,carry<u32>(r4(U+12),r4(U+8)));
w1(R+512,u8((r1(R+512))||(r1(U+16))));
w1(U+17,scarry<u32>(r4(U+12),r4(U+8)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+17))!=0)));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+18,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+23))==(u8(0x0ull))));
}
B6f85f0:{NFSU2_TR(0x6f85f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f85f4:{NFSU2_TR(0x6f85f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f85f5:{NFSU2_TR(0x6f85f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f85f6:{NFSU2_TR(0x6f85f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f85f9:L6f85f9:{c.instructions+=3;NFSU2_TR(0x6f85f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f85fc:{NFSU2_TR(0x6f85fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f85ff:{NFSU2_TR(0x6f85ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8600:L6f8600:{c.instructions+=8;NFSU2_TR(0x6f8600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8601:{NFSU2_TR(0x6f8601);
__builtin_memmove((R+20),(R+16),4);
}
B6f8603:{NFSU2_TR(0x6f8603);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8604:{NFSU2_TR(0x6f8604);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8607:{NFSU2_TR(0x6f8607);
__builtin_memmove((R+24),(R+4),4);
}
B6f8609:{NFSU2_TR(0x6f8609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f860c:{NFSU2_TR(0x6f860c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f860f:{NFSU2_TR(0x6f860f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8614ull));
TAIL_STATIC(0x6f7416u,6f7);
}
B6f8614:L6f8614:{c.instructions+=5;NFSU2_TR(0x6f8614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8617:{NFSU2_TR(0x6f8617);
__builtin_memmove((R+4),(R+24),4);
}
B6f8619:{NFSU2_TR(0x6f8619);
u8 U[4];
w4(U+0,u32(0x7c2fb4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f861f:{NFSU2_TR(0x6f861f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8622:{NFSU2_TR(0x6f8622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8627ull));
TAIL_STATIC(0x6f74bbu,6f7);
}
B6f8627:L6f8627:{c.instructions+=4;NFSU2_TR(0x6f8627);
__builtin_memmove((R+0),(R+24),4);
}
B6f8629:{NFSU2_TR(0x6f8629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f862a:{NFSU2_TR(0x6f862a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f862b:{NFSU2_TR(0x6f862b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f862e:L6f862e:{c.instructions+=7;NFSU2_TR(0x6f862e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8631:{NFSU2_TR(0x6f8631);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8634:{NFSU2_TR(0x6f8634);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8637:{NFSU2_TR(0x6f8637);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f863a:{NFSU2_TR(0x6f863a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f863d:{NFSU2_TR(0x6f863d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f8641:{NFSU2_TR(0x6f8641);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8644:L6f8644:{c.instructions+=3;NFSU2_TR(0x6f8644);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8647:{NFSU2_TR(0x6f8647);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f864a:{NFSU2_TR(0x6f864a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f864b:L6f864b:{c.instructions+=8;NFSU2_TR(0x6f864b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f864c:{NFSU2_TR(0x6f864c);
__builtin_memmove((R+20),(R+16),4);
}
B6f864e:{NFSU2_TR(0x6f864e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8651:{NFSU2_TR(0x6f8651);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8652:{NFSU2_TR(0x6f8652);
__builtin_memmove((R+24),(R+4),4);
}
B6f8654:{NFSU2_TR(0x6f8654);
u8 U[4];
w4(U+0,u32(0x10001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8659:{NFSU2_TR(0x6f8659);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f865c:{NFSU2_TR(0x6f865c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8661ull));
TAIL_STATIC(0x6f79afu,6f7);
}
B6f8661:L6f8661:{c.instructions+=4;NFSU2_TR(0x6f8661);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8664:{NFSU2_TR(0x6f8664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8665:{NFSU2_TR(0x6f8665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8666:{NFSU2_TR(0x6f8666);
if(r1(R+518)){{goto L6f866d;}}
}
B6f8668:L6f8668:{c.instructions+=3;NFSU2_TR(0x6f8668);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f866a:{NFSU2_TR(0x6f866a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f866b:{NFSU2_TR(0x6f866b);
{goto L6f866f;}
}
B6f866d:L6f866d:{c.instructions+=1;NFSU2_TR(0x6f866d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f866f:L6f866f:{c.instructions+=7;NFSU2_TR(0x6f866f);
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
B6f8671:{NFSU2_TR(0x6f8671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8674:{NFSU2_TR(0x6f8674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8677:{NFSU2_TR(0x6f8677);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f867b:{NFSU2_TR(0x6f867b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f867c:{NFSU2_TR(0x6f867c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f867d:{NFSU2_TR(0x6f867d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8680:L6f8680:{c.instructions+=8;NFSU2_TR(0x6f8680);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8681:{NFSU2_TR(0x6f8681);
__builtin_memmove((R+20),(R+16),4);
}
B6f8683:{NFSU2_TR(0x6f8683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8686:{NFSU2_TR(0x6f8686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8687:{NFSU2_TR(0x6f8687);
__builtin_memmove((R+24),(R+4),4);
}
B6f8689:{NFSU2_TR(0x6f8689);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f868c:{NFSU2_TR(0x6f868c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f868f:{NFSU2_TR(0x6f868f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8694ull));
TAIL_STATIC(0x6f79afu,6f7);
}
B6f8694:L6f8694:{c.instructions+=12;NFSU2_TR(0x6f8694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8697:{NFSU2_TR(0x6f8697);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f869a:{NFSU2_TR(0x6f869a);
__builtin_memmove((R+0),(R+518),1);
}
B6f869d:{NFSU2_TR(0x6f869d);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B6f869f:{NFSU2_TR(0x6f869f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f86a0:{NFSU2_TR(0x6f86a0);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
}
B6f86a2:{NFSU2_TR(0x6f86a2);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0xfeull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0xfeull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xfeull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f86a4:{NFSU2_TR(0x6f86a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f86a5:{NFSU2_TR(0x6f86a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f86a8:{NFSU2_TR(0x6f86a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f86a9:{NFSU2_TR(0x6f86a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f86aa:{NFSU2_TR(0x6f86aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f86ad:L6f86ad:{c.instructions+=8;NFSU2_TR(0x6f86ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86ae:{NFSU2_TR(0x6f86ae);
__builtin_memmove((R+20),(R+16),4);
}
B6f86b0:{NFSU2_TR(0x6f86b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86b1:{NFSU2_TR(0x6f86b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86b2:{NFSU2_TR(0x6f86b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f86b5:{NFSU2_TR(0x6f86b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f86b7:{NFSU2_TR(0x6f86b7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x50ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x50ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f86ba:{NFSU2_TR(0x6f86ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f86c5;}}
}
B6f86bc:L6f86bc:{c.instructions+=3;NFSU2_TR(0x6f86bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86bd:{NFSU2_TR(0x6f86bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86be:{NFSU2_TR(0x6f86be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f86c3ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f86c3:L6f86c3:{c.instructions+=2;NFSU2_TR(0x6f86c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f86c4:{NFSU2_TR(0x6f86c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f86c5:L6f86c5:{c.instructions+=4;NFSU2_TR(0x6f86c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86c6:{NFSU2_TR(0x6f86c6);
u8 U[4];
w4(U+0,u32(0x813aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86cb:{NFSU2_TR(0x6f86cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86cc:{NFSU2_TR(0x6f86cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f86d1ull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f86d1:L6f86d1:{c.instructions+=6;NFSU2_TR(0x6f86d1);
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
B6f86d4:{NFSU2_TR(0x6f86d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f86d5:{NFSU2_TR(0x6f86d5);
w1(R+0,u8(0x1ull));
}
B6f86d7:{NFSU2_TR(0x6f86d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f86d8:{NFSU2_TR(0x6f86d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f86d9:{NFSU2_TR(0x6f86d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f86da:L6f86da:{c.instructions+=8;NFSU2_TR(0x6f86da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86db:{NFSU2_TR(0x6f86db);
__builtin_memmove((R+20),(R+16),4);
}
B6f86dd:{NFSU2_TR(0x6f86dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86de:{NFSU2_TR(0x6f86de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f86e1:{NFSU2_TR(0x6f86e1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x50ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x50ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f86e4:{NFSU2_TR(0x6f86e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86e5:{NFSU2_TR(0x6f86e5);
w4(R+28,u32(0x813aa0ull));
}
B6f86ea:{NFSU2_TR(0x6f86ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f86f6;}}
}
B6f86ec:L6f86ec:{c.instructions+=3;NFSU2_TR(0x6f86ec);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86ee:{NFSU2_TR(0x6f86ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86ef:{NFSU2_TR(0x6f86ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f86f4ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f86f4:L6f86f4:{c.instructions+=2;NFSU2_TR(0x6f86f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f86f5:{NFSU2_TR(0x6f86f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f86f6:L6f86f6:{c.instructions+=4;NFSU2_TR(0x6f86f6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f86f8:{NFSU2_TR(0x6f86f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86f9:{NFSU2_TR(0x6f86f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f86fa:{NFSU2_TR(0x6f86fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f86ffull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f86ff:L6f86ff:{c.instructions+=8;NFSU2_TR(0x6f86ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8702:{NFSU2_TR(0x6f8702);
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
B6f8705:{NFSU2_TR(0x6f8705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8706:{NFSU2_TR(0x6f8706);
__builtin_memmove(gp(0x813af4),(R+0),4);
}
B6f870b:{NFSU2_TR(0x6f870b);
w1(R+0,u8(0x1ull));
}
B6f870d:{NFSU2_TR(0x6f870d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f870e:{NFSU2_TR(0x6f870e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f870f:{NFSU2_TR(0x6f870f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8710:L6f8710:{c.instructions+=8;NFSU2_TR(0x6f8710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8711:{NFSU2_TR(0x6f8711);
__builtin_memmove((R+20),(R+16),4);
}
B6f8713:{NFSU2_TR(0x6f8713);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8714:{NFSU2_TR(0x6f8714);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8716:{NFSU2_TR(0x6f8716);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8719:{NFSU2_TR(0x6f8719);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f871c:{NFSU2_TR(0x6f871c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f871f:{NFSU2_TR(0x6f871f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8724ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B6f8724:L6f8724:{c.instructions+=3;NFSU2_TR(0x6f8724);
__builtin_memmove((R+24),(R+0),4);
}
B6f8726:{NFSU2_TR(0x6f8726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8727:{NFSU2_TR(0x6f8727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f872cull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f872c:L6f872c:{c.instructions+=2;NFSU2_TR(0x6f872c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f872d:{NFSU2_TR(0x6f872d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8732ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f8732:L6f8732:{c.instructions+=4;NFSU2_TR(0x6f8732);
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
B6f8735:{NFSU2_TR(0x6f8735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8736:{NFSU2_TR(0x6f8736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8737:{NFSU2_TR(0x6f8737);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8738:L6f8738:{c.instructions+=16;NFSU2_TR(0x6f8738);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8739:{NFSU2_TR(0x6f8739);
__builtin_memmove((R+20),(R+16),4);
}
B6f873b:{NFSU2_TR(0x6f873b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f873e:{NFSU2_TR(0x6f873e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f873f:{NFSU2_TR(0x6f873f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8741:{NFSU2_TR(0x6f8741);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8744:{NFSU2_TR(0x6f8744);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f8745:{NFSU2_TR(0x6f8745);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8746:{NFSU2_TR(0x6f8746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8747:{NFSU2_TR(0x6f8747);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f874a:{NFSU2_TR(0x6f874a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f874d:{NFSU2_TR(0x6f874d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f874e:{NFSU2_TR(0x6f874e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f874f:{NFSU2_TR(0x6f874f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8750:{NFSU2_TR(0x6f8750);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8753:{NFSU2_TR(0x6f8753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8758ull));
TAIL_STATIC(0x6f77f1u,6f7);
}
B6f8758:L6f8758:{c.instructions+=3;NFSU2_TR(0x6f8758);
__builtin_memmove((R+24),(R+0),4);
}
B6f875a:{NFSU2_TR(0x6f875a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f875b:{NFSU2_TR(0x6f875b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8760ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f8760:L6f8760:{c.instructions+=2;NFSU2_TR(0x6f8760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8761:{NFSU2_TR(0x6f8761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8766ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f8766:L6f8766:{c.instructions+=4;NFSU2_TR(0x6f8766);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f8769:{NFSU2_TR(0x6f8769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f876a:{NFSU2_TR(0x6f876a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f876b:{NFSU2_TR(0x6f876b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f876c:L6f876c:{c.instructions+=10;NFSU2_TR(0x6f876c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f876d:{NFSU2_TR(0x6f876d);
__builtin_memmove((R+20),(R+16),4);
}
B6f876f:{NFSU2_TR(0x6f876f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8770:{NFSU2_TR(0x6f8770);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8772:{NFSU2_TR(0x6f8772);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8775:{NFSU2_TR(0x6f8775);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8778:{NFSU2_TR(0x6f8778);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f877b:{NFSU2_TR(0x6f877b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f877e:{NFSU2_TR(0x6f877e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8781:{NFSU2_TR(0x6f8781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8786ull));
TAIL_STATIC(0x6f782cu,6f7);
}
B6f8786:L6f8786:{c.instructions+=3;NFSU2_TR(0x6f8786);
__builtin_memmove((R+24),(R+0),4);
}
B6f8788:{NFSU2_TR(0x6f8788);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8789:{NFSU2_TR(0x6f8789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f878eull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f878e:L6f878e:{c.instructions+=2;NFSU2_TR(0x6f878e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f878f:{NFSU2_TR(0x6f878f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8794ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f8794:L6f8794:{c.instructions+=4;NFSU2_TR(0x6f8794);
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
B6f8797:{NFSU2_TR(0x6f8797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8798:{NFSU2_TR(0x6f8798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8799:{NFSU2_TR(0x6f8799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f879a:L6f879a:{c.instructions+=7;NFSU2_TR(0x6f879a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f879b:{NFSU2_TR(0x6f879b);
__builtin_memmove((R+20),(R+16),4);
}
B6f879d:{NFSU2_TR(0x6f879d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f879e:{NFSU2_TR(0x6f879e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87a0:{NFSU2_TR(0x6f87a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f87a3:{NFSU2_TR(0x6f87a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f87a6:{NFSU2_TR(0x6f87a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87abull));
TAIL_STATIC(0x6f7790u,6f7);
}
B6f87ab:L6f87ab:{c.instructions+=3;NFSU2_TR(0x6f87ab);
__builtin_memmove((R+24),(R+0),4);
}
B6f87ad:{NFSU2_TR(0x6f87ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87ae:{NFSU2_TR(0x6f87ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87b3ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f87b3:L6f87b3:{c.instructions+=2;NFSU2_TR(0x6f87b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87b4:{NFSU2_TR(0x6f87b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87b9ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f87b9:L6f87b9:{c.instructions+=7;NFSU2_TR(0x6f87b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f87bc:{NFSU2_TR(0x6f87bc);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f87be:{NFSU2_TR(0x6f87be);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f87c0:{NFSU2_TR(0x6f87c0);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f87c2:{NFSU2_TR(0x6f87c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f87c3:{NFSU2_TR(0x6f87c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f87c4:{NFSU2_TR(0x6f87c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f87c5:L6f87c5:{c.instructions+=7;NFSU2_TR(0x6f87c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87c6:{NFSU2_TR(0x6f87c6);
__builtin_memmove((R+20),(R+16),4);
}
B6f87c8:{NFSU2_TR(0x6f87c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87c9:{NFSU2_TR(0x6f87c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87cb:{NFSU2_TR(0x6f87cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f87ce:{NFSU2_TR(0x6f87ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f87d1:{NFSU2_TR(0x6f87d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87d6ull));
TAIL_STATIC(0x6f7861u,6f7);
}
B6f87d6:L6f87d6:{c.instructions+=3;NFSU2_TR(0x6f87d6);
__builtin_memmove((R+24),(R+0),4);
}
B6f87d8:{NFSU2_TR(0x6f87d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87d9:{NFSU2_TR(0x6f87d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87deull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f87de:L6f87de:{c.instructions+=2;NFSU2_TR(0x6f87de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87df:{NFSU2_TR(0x6f87df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87e4ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f87e4:L6f87e4:{c.instructions+=4;NFSU2_TR(0x6f87e4);
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
B6f87e7:{NFSU2_TR(0x6f87e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f87e8:{NFSU2_TR(0x6f87e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f87e9:{NFSU2_TR(0x6f87e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f87ea:L6f87ea:{c.instructions+=7;NFSU2_TR(0x6f87ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87eb:{NFSU2_TR(0x6f87eb);
__builtin_memmove((R+20),(R+16),4);
}
B6f87ed:{NFSU2_TR(0x6f87ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87ee:{NFSU2_TR(0x6f87ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87f0:{NFSU2_TR(0x6f87f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f87f3:{NFSU2_TR(0x6f87f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f87f6:{NFSU2_TR(0x6f87f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f87fbull));
TAIL_STATIC(0x6f7b34u,6f7);
}
B6f87fb:L6f87fb:{c.instructions+=3;NFSU2_TR(0x6f87fb);
__builtin_memmove((R+24),(R+0),4);
}
B6f87fd:{NFSU2_TR(0x6f87fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f87fe:{NFSU2_TR(0x6f87fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8803ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f8803:L6f8803:{c.instructions+=2;NFSU2_TR(0x6f8803);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8804:{NFSU2_TR(0x6f8804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8809ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f8809:L6f8809:{c.instructions+=7;NFSU2_TR(0x6f8809);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f880c:{NFSU2_TR(0x6f880c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f880e:{NFSU2_TR(0x6f880e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f8810:{NFSU2_TR(0x6f8810);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f8812:{NFSU2_TR(0x6f8812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8813:{NFSU2_TR(0x6f8813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8814:{NFSU2_TR(0x6f8814);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8815:L6f8815:{c.instructions+=7;NFSU2_TR(0x6f8815);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8816:{NFSU2_TR(0x6f8816);
__builtin_memmove((R+20),(R+16),4);
}
B6f8818:{NFSU2_TR(0x6f8818);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8819:{NFSU2_TR(0x6f8819);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f881b:{NFSU2_TR(0x6f881b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f881e:{NFSU2_TR(0x6f881e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8821:{NFSU2_TR(0x6f8821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8826ull));
TAIL_STATIC(0x6f7b6au,6f7);
}
B6f8826:L6f8826:{c.instructions+=3;NFSU2_TR(0x6f8826);
__builtin_memmove((R+24),(R+0),4);
}
B6f8828:{NFSU2_TR(0x6f8828);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8829:{NFSU2_TR(0x6f8829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f882eull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f882e:L6f882e:{c.instructions+=2;NFSU2_TR(0x6f882e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f882f:{NFSU2_TR(0x6f882f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8834ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f8834:L6f8834:{c.instructions+=7;NFSU2_TR(0x6f8834);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f8837:{NFSU2_TR(0x6f8837);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f8839:{NFSU2_TR(0x6f8839);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f883b:{NFSU2_TR(0x6f883b);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f883d:{NFSU2_TR(0x6f883d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f883e:{NFSU2_TR(0x6f883e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f883f:{NFSU2_TR(0x6f883f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8840:L6f8840:{c.instructions+=4;NFSU2_TR(0x6f8840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8841:{NFSU2_TR(0x6f8841);
w4(R+12,u32(0x8ad644ull));
}
B6f8846:{NFSU2_TR(0x6f8846);
__builtin_memmove((R+4),(R+12),4);
}
B6f8848:{NFSU2_TR(0x6f8848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f884dull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f884d:L6f884d:{c.instructions+=2;NFSU2_TR(0x6f884d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f8850:{NFSU2_TR(0x6f8850);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8856;}}
}
B6f8852:L6f8852:{c.instructions+=2;NFSU2_TR(0x6f8852);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6f8854:{NFSU2_TR(0x6f8854);
{goto L6f885c;}
}
B6f8856:L6f8856:{c.instructions+=2;NFSU2_TR(0x6f8856);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8859:{NFSU2_TR(0x6f8859);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f885c:L6f885c:{c.instructions+=5;NFSU2_TR(0x6f885c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f885f:{NFSU2_TR(0x6f885f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8863:{NFSU2_TR(0x6f8863);
__builtin_memmove((R+4),(R+12),4);
}
B6f8865:{NFSU2_TR(0x6f8865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8866:{NFSU2_TR(0x6f8866);
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f886b:L6f886b:{c.instructions+=5;NFSU2_TR(0x6f886b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f886c:{NFSU2_TR(0x6f886c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f886d:{NFSU2_TR(0x6f886d);
w4(R+28,u32(0x8ad644ull));
}
B6f8872:{NFSU2_TR(0x6f8872);
__builtin_memmove((R+4),(R+28),4);
}
B6f8874:{NFSU2_TR(0x6f8874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8879ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f8879:L6f8879:{c.instructions+=3;NFSU2_TR(0x6f8879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f887b:{NFSU2_TR(0x6f887b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f887d:{NFSU2_TR(0x6f887d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8883;}}
}
B6f887f:L6f887f:{c.instructions+=2;NFSU2_TR(0x6f887f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f8881:{NFSU2_TR(0x6f8881);
{goto L6f888a;}
}
B6f8883:L6f8883:{c.instructions+=3;NFSU2_TR(0x6f8883);
__builtin_memmove((R+12),(R+0),4);
}
B6f8885:{NFSU2_TR(0x6f8885);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8888:{NFSU2_TR(0x6f8888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f888a:L6f888a:{c.instructions+=2;NFSU2_TR(0x6f888a);
__builtin_memmove((R+4),(R+28),4);
}
B6f888c:{NFSU2_TR(0x6f888c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8891ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f8891:L6f8891:{c.instructions+=4;NFSU2_TR(0x6f8891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8892:{NFSU2_TR(0x6f8892);
__builtin_memmove((R+0),(R+12),4);
}
B6f8894:{NFSU2_TR(0x6f8894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8895:{NFSU2_TR(0x6f8895);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8896:L6f8896:{c.instructions+=3;NFSU2_TR(0x6f8896);
w4(R+0,u32(0x100ull));
}
B6f889b:{NFSU2_TR(0x6f889b);
s4(0x8ad630,u32(u32(m4(0x8ad630))+u32(r4(R+0))));
w1(R+518,u8((m4(0x8ad630))==(u32(0x0ull))));
}
B6f88a1:{NFSU2_TR(0x6f88a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f88a8;}}
}
B6f88a3:L6f88a3:{c.instructions+=1;NFSU2_TR(0x6f88a3);
__builtin_memmove(gp(0x8ad630),(R+0),4);
}
B6f88a8:L6f88a8:{c.instructions+=5;NFSU2_TR(0x6f88a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f88aa:{NFSU2_TR(0x6f88aa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f88af:{NFSU2_TR(0x6f88af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(m4(0x8ad630))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f88b5:{NFSU2_TR(0x6f88b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f88b7:{NFSU2_TR(0x6f88b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f88b8:L6f88b8:{c.instructions+=6;NFSU2_TR(0x6f88b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f88b9:{NFSU2_TR(0x6f88b9);
__builtin_memmove((R+20),(R+16),4);
}
B6f88bb:{NFSU2_TR(0x6f88bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f88be:{NFSU2_TR(0x6f88be);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f88c3:{NFSU2_TR(0x6f88c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6f88ca:{NFSU2_TR(0x6f88ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f88ef;}}
}
B6f88cc:L6f88cc:{c.instructions+=2;NFSU2_TR(0x6f88cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ad63c),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f88d2:{NFSU2_TR(0x6f88d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f88ef;}}
}
B6f88d4:L6f88d4:{c.instructions+=11;NFSU2_TR(0x6f88d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f88d7:{NFSU2_TR(0x6f88d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f88da:{NFSU2_TR(0x6f88da);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8ad640))));
}
B6f88e0:{NFSU2_TR(0x6f88e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f88e2:{NFSU2_TR(0x6f88e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6f88e5:{NFSU2_TR(0x6f88e5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f88e7:{NFSU2_TR(0x6f88e7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f88e9:{NFSU2_TR(0x6f88e9);
w4(R+0,u32(~u32(r4(R+0))));
}
B6f88eb:{NFSU2_TR(0x6f88eb);
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
B6f88ed:{NFSU2_TR(0x6f88ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f88ee:{NFSU2_TR(0x6f88ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f88ef:L6f88ef:{c.instructions+=3;NFSU2_TR(0x6f88ef);
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
B6f88f1:{NFSU2_TR(0x6f88f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f88f2:{NFSU2_TR(0x6f88f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f88f3:L6f88f3:{c.instructions+=6;NFSU2_TR(0x6f88f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f88f4:{NFSU2_TR(0x6f88f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f88f5:{NFSU2_TR(0x6f88f5);
__builtin_memmove((R+24),(R+0),4);
}
B6f88f7:{NFSU2_TR(0x6f88f7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f88f9:{NFSU2_TR(0x6f88f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f88fc:{NFSU2_TR(0x6f88fc);
if(r1(R+518)){{goto L6f8913;}}
}
B6f88fe:L6f88fe:{c.instructions+=3;NFSU2_TR(0x6f88fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8901:{NFSU2_TR(0x6f8901);
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
B6f8904:{NFSU2_TR(0x6f8904);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f8913;}}
}
B6f8906:L6f8906:{c.instructions+=5;NFSU2_TR(0x6f8906);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f890c:{NFSU2_TR(0x6f890c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f890e:{NFSU2_TR(0x6f890e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f890f:{NFSU2_TR(0x6f890f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8910:{NFSU2_TR(0x6f8910);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8913ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f8913:L6f8913:{c.instructions+=4;NFSU2_TR(0x6f8913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xffull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6f8919:{NFSU2_TR(0x6f8919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f891c:{NFSU2_TR(0x6f891c);
w4(R+28,u32(0x8ad634ull));
}
B6f8921:{NFSU2_TR(0x6f8921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8926ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8840u);}goto L6f8840;}
}
B6f8926:L6f8926:{c.instructions+=3;NFSU2_TR(0x6f8926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8927:{NFSU2_TR(0x6f8927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8928:{NFSU2_TR(0x6f8928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8929:L6f8929:{c.instructions+=9;NFSU2_TR(0x6f8929);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f892a:{NFSU2_TR(0x6f892a);
__builtin_memmove((R+20),(R+16),4);
}
B6f892c:{NFSU2_TR(0x6f892c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f892d:{NFSU2_TR(0x6f892d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f892e:{NFSU2_TR(0x6f892e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f892f:{NFSU2_TR(0x6f892f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8930:{NFSU2_TR(0x6f8930);
w4(R+28,u32(0x8ad644ull));
}
B6f8935:{NFSU2_TR(0x6f8935);
__builtin_memmove((R+4),(R+28),4);
}
B6f8937:{NFSU2_TR(0x6f8937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f893cull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f893c:L6f893c:{c.instructions+=8;NFSU2_TR(0x6f893c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f893f:{NFSU2_TR(0x6f893f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f8942:{NFSU2_TR(0x6f8942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8945:{NFSU2_TR(0x6f8945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8948:{NFSU2_TR(0x6f8948);
__builtin_memmove((R+4),(R+28),4);
}
B6f894a:{NFSU2_TR(0x6f894a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f894d:{NFSU2_TR(0x6f894d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8954:{NFSU2_TR(0x6f8954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8959ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f8959:L6f8959:{c.instructions+=4;NFSU2_TR(0x6f8959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f895a:{NFSU2_TR(0x6f895a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f895c:{NFSU2_TR(0x6f895c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f895d:{NFSU2_TR(0x6f895d);
if(r1(R+518)){{goto L6f896e;}}
}
B6f895f:L6f895f:{c.instructions+=2;NFSU2_TR(0x6f895f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B6f8963:{NFSU2_TR(0x6f8963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f897a;}}
}
B6f8965:L6f8965:{c.instructions+=2;NFSU2_TR(0x6f8965);
__builtin_memmove((R+0),(R+24),4);
}
B6f8967:{NFSU2_TR(0x6f8967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f896cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88f3u);}goto L6f88f3;}
}
B6f896c:L6f896c:{c.instructions+=2;NFSU2_TR(0x6f896c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f896d:{NFSU2_TR(0x6f896d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f896e:L6f896e:{c.instructions+=2;NFSU2_TR(0x6f896e);
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
B6f8972:{NFSU2_TR(0x6f8972);
if(r1(R+518)){{goto L6f897a;}}
}
B6f8974:L6f8974:{c.instructions+=2;NFSU2_TR(0x6f8974);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6f8976:{NFSU2_TR(0x6f8976);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8979ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f8979:L6f8979:{c.instructions+=1;NFSU2_TR(0x6f8979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f897a:L6f897a:{c.instructions+=2;NFSU2_TR(0x6f897a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f897b:{NFSU2_TR(0x6f897b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f897c:L6f897c:{c.instructions+=6;NFSU2_TR(0x6f897c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f897d:{NFSU2_TR(0x6f897d);
__builtin_memmove((R+20),(R+16),4);
}
B6f897f:{NFSU2_TR(0x6f897f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8980:{NFSU2_TR(0x6f8980);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f8983:{NFSU2_TR(0x6f8983);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8986:{NFSU2_TR(0x6f8986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f898bull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B6f898b:L6f898b:{c.instructions+=2;NFSU2_TR(0x6f898b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f898c:{NFSU2_TR(0x6f898c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8991ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8929u);}goto L6f8929;}
}
B6f8991:L6f8991:{c.instructions+=3;NFSU2_TR(0x6f8991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8992:{NFSU2_TR(0x6f8992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8993:{NFSU2_TR(0x6f8993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8994:L6f8994:{c.instructions+=7;NFSU2_TR(0x6f8994);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8995:{NFSU2_TR(0x6f8995);
__builtin_memmove((R+20),(R+16),4);
}
B6f8997:{NFSU2_TR(0x6f8997);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8998:{NFSU2_TR(0x6f8998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f899b:{NFSU2_TR(0x6f899b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f899c:{NFSU2_TR(0x6f899c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f899f:{NFSU2_TR(0x6f899f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f89a4ull));
TAIL_STATIC(0x6f767cu,6f7);
}
B6f89a4:L6f89a4:{c.instructions+=6;NFSU2_TR(0x6f89a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f89a7:{NFSU2_TR(0x6f89a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f89aa:{NFSU2_TR(0x6f89aa);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ac8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6f89b0:{NFSU2_TR(0x6f89b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f89b3:{NFSU2_TR(0x6f89b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f89b4:{NFSU2_TR(0x6f89b4);
if(r1(R+512)){{goto L6f89f4;}}
}
B6f89b6:L6f89b6:{c.instructions+=2;NFSU2_TR(0x6f89b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f89ba:{NFSU2_TR(0x6f89ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f89f4;}}
}
B6f89bc:L6f89bc:{c.instructions+=7;NFSU2_TR(0x6f89bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f89bf:{NFSU2_TR(0x6f89bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f89c2:{NFSU2_TR(0x6f89c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f89c5:{NFSU2_TR(0x6f89c5);
__builtin_memmove((R+0),gp(0x813ac8),4);
}
B6f89ca:{NFSU2_TR(0x6f89ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f89cc:{NFSU2_TR(0x6f89cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f89cf:{NFSU2_TR(0x6f89cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f89d3;}}
}
B6f89d1:L6f89d1:{c.instructions+=1;NFSU2_TR(0x6f89d1);
__builtin_memmove((R+4),(R+0),4);
}
B6f89d3:L6f89d3:{c.instructions+=7;NFSU2_TR(0x6f89d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89d4:{NFSU2_TR(0x6f89d4);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89d6:{NFSU2_TR(0x6f89d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89d7:{NFSU2_TR(0x6f89d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89d8:{NFSU2_TR(0x6f89d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89d9:{NFSU2_TR(0x6f89d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f89dc:{NFSU2_TR(0x6f89dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f89e1ull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f89e1:L6f89e1:{c.instructions+=4;NFSU2_TR(0x6f89e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f89e4:{NFSU2_TR(0x6f89e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f89e7:{NFSU2_TR(0x6f89e7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6f89eb:{NFSU2_TR(0x6f89eb);
if(r1(R+518)){{goto L6f8a1a;}}
}
B6f89ed:L6f89ed:{c.instructions+=2;NFSU2_TR(0x6f89ed);
u8 U[4];
w4(U+0,u32(0x6f8994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89f2:{NFSU2_TR(0x6f89f2);
{goto L6f8a10;}
}
B6f89f4:L6f89f4:{c.instructions+=4;NFSU2_TR(0x6f89f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89f5:{NFSU2_TR(0x6f89f5);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f89f7:{NFSU2_TR(0x6f89f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f89fa:{NFSU2_TR(0x6f89fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f89ffull));
TAIL_STATIC(0x6f7790u,6f7);
}
B6f89ff:L6f89ff:{c.instructions+=4;NFSU2_TR(0x6f89ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f8a02:{NFSU2_TR(0x6f8a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a05:{NFSU2_TR(0x6f8a05);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6f8a09:{NFSU2_TR(0x6f8a09);
if(r1(R+518)){{goto L6f8a1a;}}
}
B6f8a0b:L6f8a0b:{c.instructions+=1;NFSU2_TR(0x6f8a0b);
u8 U[4];
w4(U+0,u32(0x6f897cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a10:L6f8a10:{c.instructions+=2;NFSU2_TR(0x6f8a10);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8a13:{NFSU2_TR(0x6f8a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8a18ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8a18:L6f8a18:{c.instructions+=2;NFSU2_TR(0x6f8a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a19:{NFSU2_TR(0x6f8a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a1a:L6f8a1a:{c.instructions+=4;NFSU2_TR(0x6f8a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8a1b:{NFSU2_TR(0x6f8a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8a1c:{NFSU2_TR(0x6f8a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8a1d:{NFSU2_TR(0x6f8a1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8a1e:L6f8a1e:{c.instructions+=7;NFSU2_TR(0x6f8a1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a1f:{NFSU2_TR(0x6f8a1f);
__builtin_memmove((R+20),(R+16),4);
}
B6f8a21:{NFSU2_TR(0x6f8a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B6f8a24:{NFSU2_TR(0x6f8a24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a25:{NFSU2_TR(0x6f8a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f8a28:{NFSU2_TR(0x6f8a28);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8a2b:{NFSU2_TR(0x6f8a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8a30ull));
TAIL_STATIC(0x6f767cu,6f7);
}
B6f8a30:L6f8a30:{c.instructions+=3;NFSU2_TR(0x6f8a30);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8a34:{NFSU2_TR(0x6f8a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a35:{NFSU2_TR(0x6f8a35);
if(r1(R+518)){{goto L6f8a5c;}}
}
B6f8a37:L6f8a37:{c.instructions+=4;NFSU2_TR(0x6f8a37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a38:{NFSU2_TR(0x6f8a38);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a3a:{NFSU2_TR(0x6f8a3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8a3d:{NFSU2_TR(0x6f8a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8a42ull));
TAIL_STATIC(0x6f7790u,6f7);
}
B6f8a42:L6f8a42:{c.instructions+=4;NFSU2_TR(0x6f8a42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f8a45:{NFSU2_TR(0x6f8a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a48:{NFSU2_TR(0x6f8a48);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6f8a4c:{NFSU2_TR(0x6f8a4c);
if(r1(R+518)){{goto L6f8b18;}}
}
B6f8a52:L6f8a52:{c.instructions+=2;NFSU2_TR(0x6f8a52);
u8 U[4];
w4(U+0,u32(0x6f897cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a57:{NFSU2_TR(0x6f8a57);
{goto L6f8b0e;}
}
B6f8a5c:L6f8a5c:{c.instructions+=36;NFSU2_TR(0x6f8a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8a5f:{NFSU2_TR(0x6f8a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a63:{NFSU2_TR(0x6f8a63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8a64:{NFSU2_TR(0x6f8a64);
__builtin_memmove((R+12),(R+4),4);
}
B6f8a66:{NFSU2_TR(0x6f8a66);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f8a69:{NFSU2_TR(0x6f8a69);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x4ull))));
}
B6f8a6c:{NFSU2_TR(0x6f8a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a6f:{NFSU2_TR(0x6f8a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a72:{NFSU2_TR(0x6f8a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a75:{NFSU2_TR(0x6f8a75);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6f8a78:{NFSU2_TR(0x6f8a78);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x2ull))));
}
B6f8a7b:{NFSU2_TR(0x6f8a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a7e:{NFSU2_TR(0x6f8a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a81:{NFSU2_TR(0x6f8a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a84:{NFSU2_TR(0x6f8a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a87:{NFSU2_TR(0x6f8a87);
__builtin_memmove((R+12),gp(0x813acc),4);
}
B6f8a8d:{NFSU2_TR(0x6f8a8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a90:{NFSU2_TR(0x6f8a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a93:{NFSU2_TR(0x6f8a93);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f8a95:{NFSU2_TR(0x6f8a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a98:{NFSU2_TR(0x6f8a98);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f8a99:{NFSU2_TR(0x6f8a99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8a9c:{NFSU2_TR(0x6f8a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8a9f:{NFSU2_TR(0x6f8a9f);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f8aa5:{NFSU2_TR(0x6f8aa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8aa8:{NFSU2_TR(0x6f8aa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8aa9:{NFSU2_TR(0x6f8aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ab0:{NFSU2_TR(0x6f8ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x13full));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ab7:{NFSU2_TR(0x6f8ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8abe:{NFSU2_TR(0x6f8abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x7c2ff0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ac5:{NFSU2_TR(0x6f8ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ac8:{NFSU2_TR(0x6f8ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7c2fe0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8acf:{NFSU2_TR(0x6f8acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ad2:{NFSU2_TR(0x6f8ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f8ad4:{NFSU2_TR(0x6f8ad4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ad5:{NFSU2_TR(0x6f8ad5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8ad7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f8ad7:L6f8ad7:{c.instructions+=7;NFSU2_TR(0x6f8ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8ada:{NFSU2_TR(0x6f8ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8add:{NFSU2_TR(0x6f8add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ae0:{NFSU2_TR(0x6f8ae0);
__builtin_memmove((R+4),gp(0x813ac8),4);
}
B6f8ae6:{NFSU2_TR(0x6f8ae6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8ae8:{NFSU2_TR(0x6f8ae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8ae9:{NFSU2_TR(0x6f8ae9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f8aed;}}
}
B6f8aeb:L6f8aeb:{c.instructions+=1;NFSU2_TR(0x6f8aeb);
__builtin_memmove((R+8),(R+4),4);
}
B6f8aed:L6f8aed:{c.instructions+=7;NFSU2_TR(0x6f8aed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8aee:{NFSU2_TR(0x6f8aee);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8af0:{NFSU2_TR(0x6f8af0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8af1:{NFSU2_TR(0x6f8af1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8af2:{NFSU2_TR(0x6f8af2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8af5:{NFSU2_TR(0x6f8af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8af8:{NFSU2_TR(0x6f8af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8afdull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f8afd:L6f8afd:{c.instructions+=4;NFSU2_TR(0x6f8afd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f8b00:{NFSU2_TR(0x6f8b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8b03:{NFSU2_TR(0x6f8b03);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6f8b07:{NFSU2_TR(0x6f8b07);
if(r1(R+518)){{goto L6f8b18;}}
}
B6f8b09:L6f8b09:{c.instructions+=1;NFSU2_TR(0x6f8b09);
u8 U[4];
w4(U+0,u32(0x6f8994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b0e:L6f8b0e:{c.instructions+=2;NFSU2_TR(0x6f8b0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8b11:{NFSU2_TR(0x6f8b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8b16ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8b16:L6f8b16:{c.instructions+=2;NFSU2_TR(0x6f8b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8b17:{NFSU2_TR(0x6f8b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8b18:L6f8b18:{c.instructions+=3;NFSU2_TR(0x6f8b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8b19:{NFSU2_TR(0x6f8b19);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f8b1a:{NFSU2_TR(0x6f8b1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8b1b:L6f8b1b:{c.instructions+=7;NFSU2_TR(0x6f8b1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b1c:{NFSU2_TR(0x6f8b1c);
__builtin_memmove((R+20),(R+16),4);
}
B6f8b1e:{NFSU2_TR(0x6f8b1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b1f:{NFSU2_TR(0x6f8b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f8b22:{NFSU2_TR(0x6f8b22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b23:{NFSU2_TR(0x6f8b23);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8b26:{NFSU2_TR(0x6f8b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8b2bull));
TAIL_STATIC(0x6f767cu,6f7);
}
B6f8b2b:L6f8b2b:{c.instructions+=5;NFSU2_TR(0x6f8b2b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f8b2d:{NFSU2_TR(0x6f8b2d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8b2f:{NFSU2_TR(0x6f8b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8b30:{NFSU2_TR(0x6f8b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8b33:{NFSU2_TR(0x6f8b33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8b3c;}}
}
B6f8b35:L6f8b35:{c.instructions+=1;NFSU2_TR(0x6f8b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8b3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8929u);}goto L6f8929;}
}
B6f8b3a:L6f8b3a:{c.instructions+=1;NFSU2_TR(0x6f8b3a);
{goto L6f8bb5;}
}
B6f8b3c:L6f8b3c:{c.instructions+=2;NFSU2_TR(0x6f8b3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8b3f:{NFSU2_TR(0x6f8b3f);
if(r1(R+518)){{goto L6f8b5c;}}
}
B6f8b41:L6f8b41:{c.instructions+=4;NFSU2_TR(0x6f8b41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b42:{NFSU2_TR(0x6f8b42);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b44:{NFSU2_TR(0x6f8b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b45:{NFSU2_TR(0x6f8b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8b4aull));
TAIL_STATIC(0x6f7790u,6f7);
}
B6f8b4a:L6f8b4a:{c.instructions+=4;NFSU2_TR(0x6f8b4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f8b4d:{NFSU2_TR(0x6f8b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8b50:{NFSU2_TR(0x6f8b50);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f8b53:{NFSU2_TR(0x6f8b53);
if(r1(R+518)){{goto L6f8bb5;}}
}
B6f8b55:L6f8b55:{c.instructions+=2;NFSU2_TR(0x6f8b55);
u8 U[4];
w4(U+0,u32(0x6f897cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b5a:{NFSU2_TR(0x6f8b5a);
{goto L6f8bab;}
}
B6f8b5c:L6f8b5c:{c.instructions+=2;NFSU2_TR(0x6f8b5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8b5f:{NFSU2_TR(0x6f8b5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8b92;}}
}
B6f8b61:L6f8b61:{c.instructions+=4;NFSU2_TR(0x6f8b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8b64:{NFSU2_TR(0x6f8b64);
__builtin_memmove((R+4),gp(0x813ac8),4);
}
B6f8b6a:{NFSU2_TR(0x6f8b6a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8b6c:{NFSU2_TR(0x6f8b6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f8b70;}}
}
B6f8b6e:L6f8b6e:{c.instructions+=1;NFSU2_TR(0x6f8b6e);
__builtin_memmove((R+8),(R+4),4);
}
B6f8b70:L6f8b70:{c.instructions+=7;NFSU2_TR(0x6f8b70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b71:{NFSU2_TR(0x6f8b71);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b73:{NFSU2_TR(0x6f8b73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b74:{NFSU2_TR(0x6f8b74);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8b77:{NFSU2_TR(0x6f8b77);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8b7a:{NFSU2_TR(0x6f8b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b7b:{NFSU2_TR(0x6f8b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8b80ull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f8b80:L6f8b80:{c.instructions+=4;NFSU2_TR(0x6f8b80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f8b83:{NFSU2_TR(0x6f8b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8b86:{NFSU2_TR(0x6f8b86);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f8b89:{NFSU2_TR(0x6f8b89);
if(r1(R+518)){{goto L6f8bb5;}}
}
B6f8b8b:L6f8b8b:{c.instructions+=2;NFSU2_TR(0x6f8b8b);
u8 U[4];
w4(U+0,u32(0x6f8994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b90:{NFSU2_TR(0x6f8b90);
{goto L6f8bab;}
}
B6f8b92:L6f8b92:{c.instructions+=4;NFSU2_TR(0x6f8b92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b93:{NFSU2_TR(0x6f8b93);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b95:{NFSU2_TR(0x6f8b95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8b96:{NFSU2_TR(0x6f8b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8b9bull));
TAIL_STATIC(0x6f7861u,6f7);
}
B6f8b9b:L6f8b9b:{c.instructions+=4;NFSU2_TR(0x6f8b9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f8b9e:{NFSU2_TR(0x6f8b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ba1:{NFSU2_TR(0x6f8ba1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f8ba4:{NFSU2_TR(0x6f8ba4);
if(r1(R+518)){{goto L6f8bb5;}}
}
B6f8ba6:L6f8ba6:{c.instructions+=1;NFSU2_TR(0x6f8ba6);
u8 U[4];
w4(U+0,u32(0x6f8a1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bab:L6f8bab:{c.instructions+=2;NFSU2_TR(0x6f8bab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8bae:{NFSU2_TR(0x6f8bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8bb3ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8bb3:L6f8bb3:{c.instructions+=2;NFSU2_TR(0x6f8bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8bb4:{NFSU2_TR(0x6f8bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8bb5:L6f8bb5:{c.instructions+=4;NFSU2_TR(0x6f8bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8bb6:{NFSU2_TR(0x6f8bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8bb7:{NFSU2_TR(0x6f8bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8bb8:{NFSU2_TR(0x6f8bb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8bb9:L6f8bb9:{c.instructions+=7;NFSU2_TR(0x6f8bb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bba:{NFSU2_TR(0x6f8bba);
__builtin_memmove((R+20),(R+16),4);
}
B6f8bbc:{NFSU2_TR(0x6f8bbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bbd:{NFSU2_TR(0x6f8bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f8bc0:{NFSU2_TR(0x6f8bc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bc1:{NFSU2_TR(0x6f8bc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8bc4:{NFSU2_TR(0x6f8bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8bc9ull));
TAIL_STATIC(0x6f767cu,6f7);
}
B6f8bc9:L6f8bc9:{c.instructions+=6;NFSU2_TR(0x6f8bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8bcc:{NFSU2_TR(0x6f8bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8bcf:{NFSU2_TR(0x6f8bcf);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ac8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6f8bd5:{NFSU2_TR(0x6f8bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f8bd8:{NFSU2_TR(0x6f8bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8bd9:{NFSU2_TR(0x6f8bd9);
if(r1(R+512)){{goto L6f8c23;}}
}
B6f8bdb:L6f8bdb:{c.instructions+=2;NFSU2_TR(0x6f8bdb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8bdf:{NFSU2_TR(0x6f8bdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8c23;}}
}
B6f8be1:L6f8be1:{c.instructions+=7;NFSU2_TR(0x6f8be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8be4:{NFSU2_TR(0x6f8be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8be7:{NFSU2_TR(0x6f8be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8bea:{NFSU2_TR(0x6f8bea);
__builtin_memmove((R+0),gp(0x813ac8),4);
}
B6f8bef:{NFSU2_TR(0x6f8bef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8bf1:{NFSU2_TR(0x6f8bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8bf4:{NFSU2_TR(0x6f8bf4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f8bf8;}}
}
B6f8bf6:L6f8bf6:{c.instructions+=1;NFSU2_TR(0x6f8bf6);
__builtin_memmove((R+4),(R+0),4);
}
B6f8bf8:L6f8bf8:{c.instructions+=7;NFSU2_TR(0x6f8bf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bf9:{NFSU2_TR(0x6f8bf9);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bfb:{NFSU2_TR(0x6f8bfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bfc:{NFSU2_TR(0x6f8bfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bfd:{NFSU2_TR(0x6f8bfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8bfe:{NFSU2_TR(0x6f8bfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8c01:{NFSU2_TR(0x6f8c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8c06ull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f8c06:L6f8c06:{c.instructions+=4;NFSU2_TR(0x6f8c06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f8c09:{NFSU2_TR(0x6f8c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c0c:{NFSU2_TR(0x6f8c0c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6f8c10:{NFSU2_TR(0x6f8c10);
if(r1(R+518)){{goto L6f8c28;}}
}
B6f8c12:L6f8c12:{c.instructions+=3;NFSU2_TR(0x6f8c12);
u8 U[4];
w4(U+0,u32(0x6f8bb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8c17:{NFSU2_TR(0x6f8c17);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8c1a:{NFSU2_TR(0x6f8c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8c1full));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8c1f:L6f8c1f:{c.instructions+=3;NFSU2_TR(0x6f8c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8c20:{NFSU2_TR(0x6f8c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8c21:{NFSU2_TR(0x6f8c21);
{goto L6f8c28;}
}
B6f8c23:L6f8c23:{c.instructions+=1;NFSU2_TR(0x6f8c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8c28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8929u);}goto L6f8929;}
}
B6f8c28:L6f8c28:{c.instructions+=4;NFSU2_TR(0x6f8c28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8c29:{NFSU2_TR(0x6f8c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8c2a:{NFSU2_TR(0x6f8c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8c2b:{NFSU2_TR(0x6f8c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8c2c:L6f8c2c:{c.instructions+=5;NFSU2_TR(0x6f8c2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8c2d:{NFSU2_TR(0x6f8c2d);
__builtin_memmove((R+20),(R+16),4);
}
B6f8c2f:{NFSU2_TR(0x6f8c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B6f8c32:{NFSU2_TR(0x6f8c32);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad640),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f8c39:{NFSU2_TR(0x6f8c39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8d1b;}}
}
B6f8c3f:L6f8c3f:{c.instructions+=4;NFSU2_TR(0x6f8c3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8c40:{NFSU2_TR(0x6f8c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f8c43:{NFSU2_TR(0x6f8c43);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f8c49:{NFSU2_TR(0x6f8c49);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f8d1a;}}
}
B6f8c4f:L6f8c4f:{c.instructions+=38;NFSU2_TR(0x6f8c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8c52:{NFSU2_TR(0x6f8c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c56:{NFSU2_TR(0x6f8c56);
__builtin_memmove((R+8),(R+0),4);
}
B6f8c58:{NFSU2_TR(0x6f8c58);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6f8c5b:{NFSU2_TR(0x6f8c5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B6f8c5e:{NFSU2_TR(0x6f8c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c61:{NFSU2_TR(0x6f8c61);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6f8c64:{NFSU2_TR(0x6f8c64);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B6f8c67:{NFSU2_TR(0x6f8c67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f8c6a:{NFSU2_TR(0x6f8c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c6d:{NFSU2_TR(0x6f8c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c70:{NFSU2_TR(0x6f8c70);
__builtin_memmove((R+8),gp(0x813acc),4);
}
B6f8c76:{NFSU2_TR(0x6f8c76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f8c79:{NFSU2_TR(0x6f8c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c7c:{NFSU2_TR(0x6f8c7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8c7d:{NFSU2_TR(0x6f8c7d);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f8c7f:{NFSU2_TR(0x6f8c7f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f8c80:{NFSU2_TR(0x6f8c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c83:{NFSU2_TR(0x6f8c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f8c86:{NFSU2_TR(0x6f8c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c89:{NFSU2_TR(0x6f8c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c8c:{NFSU2_TR(0x6f8c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8c8f:{NFSU2_TR(0x6f8c8f);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f8c95:{NFSU2_TR(0x6f8c95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f8c98:{NFSU2_TR(0x6f8c98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f8c9b:{NFSU2_TR(0x6f8c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f8c9e:{NFSU2_TR(0x6f8c9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8c9f:{NFSU2_TR(0x6f8c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8ca6:{NFSU2_TR(0x6f8ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1f2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8cad:{NFSU2_TR(0x6f8cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8cb4:{NFSU2_TR(0x6f8cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x7c2ff0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8cbb:{NFSU2_TR(0x6f8cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7c302cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8cc2:{NFSU2_TR(0x6f8cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8cc5:{NFSU2_TR(0x6f8cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8cc7:{NFSU2_TR(0x6f8cc7);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6f8cca:{NFSU2_TR(0x6f8cca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ccb:{NFSU2_TR(0x6f8ccb);
__builtin_memmove(gp(0x8ad63c),(R+28),4);
}
B6f8cd1:{NFSU2_TR(0x6f8cd1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8cd3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f8cd3:L6f8cd3:{c.instructions+=6;NFSU2_TR(0x6f8cd3);
__builtin_memmove(gp(0x8ad640),(R+0),4);
}
B6f8cd8:{NFSU2_TR(0x6f8cd8);
__builtin_memmove(gp(0x8ad634),(R+0),4);
}
B6f8cdd:{NFSU2_TR(0x6f8cdd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f8ce1:{NFSU2_TR(0x6f8ce1);
w4(R+4,u32(0x8ad644ull));
}
B6f8ce6:{NFSU2_TR(0x6f8ce6);
__builtin_memmove(gp(0x8ad638),(R+0),4);
}
B6f8ceb:{NFSU2_TR(0x6f8ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8cf0ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f8cf0:L6f8cf0:{c.instructions+=4;NFSU2_TR(0x6f8cf0);
__builtin_memmove((R+8),gp(0x8ad640),4);
}
B6f8cf6:{NFSU2_TR(0x6f8cf6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f8cf8:{NFSU2_TR(0x6f8cf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8cfa:{NFSU2_TR(0x6f8cfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f8d14;}}
}
B6f8cfc:L6f8cfc:{c.instructions+=1;NFSU2_TR(0x6f8cfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f8cff:L6f8cff:{c.instructions+=7;NFSU2_TR(0x6f8cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d02:{NFSU2_TR(0x6f8d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d09:{NFSU2_TR(0x6f8d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d0c:{NFSU2_TR(0x6f8d0c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f8d0d:{NFSU2_TR(0x6f8d0d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6f8d10:{NFSU2_TR(0x6f8d10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f8d12:{NFSU2_TR(0x6f8d12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8cffu);}goto L6f8cff;}}
}
B6f8d14:L6f8d14:{c.instructions+=2;NFSU2_TR(0x6f8d14);
u8 U[22];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+16,u32(u32(r4(U+12))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6f8d19:{NFSU2_TR(0x6f8d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8d1a:L6f8d1a:{c.instructions+=1;NFSU2_TR(0x6f8d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8d1b:L6f8d1b:{c.instructions+=2;NFSU2_TR(0x6f8d1b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f8d1c:{NFSU2_TR(0x6f8d1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8d1d:L6f8d1d:{c.instructions+=6;NFSU2_TR(0x6f8d1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d1e:{NFSU2_TR(0x6f8d1e);
__builtin_memmove((R+20),(R+16),4);
}
B6f8d20:{NFSU2_TR(0x6f8d20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d21:{NFSU2_TR(0x6f8d21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d22:{NFSU2_TR(0x6f8d22);
w4(R+24,u32(0x8ad634ull));
}
B6f8d27:{NFSU2_TR(0x6f8d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8d2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f886bu);}goto L6f886b;}
}
B6f8d2c:L6f8d2c:{c.instructions+=4;NFSU2_TR(0x6f8d2c);
__builtin_memmove((R+24),(R+0),4);
}
B6f8d2e:{NFSU2_TR(0x6f8d2e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f8d30:{NFSU2_TR(0x6f8d30);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8d32:{NFSU2_TR(0x6f8d32);
if(r1(R+518)){{goto L6f8d70;}}
}
B6f8d34:L6f8d34:{c.instructions+=2;NFSU2_TR(0x6f8d34);
__builtin_memmove((R+4),(R+24),4);
}
B6f8d36:{NFSU2_TR(0x6f8d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8d3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8896u);}goto L6f8896;}
}
B6f8d3b:L6f8d3b:{c.instructions+=16;NFSU2_TR(0x6f8d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8d3e:{NFSU2_TR(0x6f8d3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d3f:{NFSU2_TR(0x6f8d3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f8d41:{NFSU2_TR(0x6f8d41);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f8d42:{NFSU2_TR(0x6f8d42);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d44:{NFSU2_TR(0x6f8d44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d45:{NFSU2_TR(0x6f8d45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8d48:{NFSU2_TR(0x6f8d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d4b:{NFSU2_TR(0x6f8d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d4e:{NFSU2_TR(0x6f8d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d51:{NFSU2_TR(0x6f8d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d54:{NFSU2_TR(0x6f8d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d57:{NFSU2_TR(0x6f8d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d5a:{NFSU2_TR(0x6f8d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d5d:{NFSU2_TR(0x6f8d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d60:{NFSU2_TR(0x6f8d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8d65ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B6f8d65:L6f8d65:{c.instructions+=4;NFSU2_TR(0x6f8d65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f8d68:{NFSU2_TR(0x6f8d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8d6b:{NFSU2_TR(0x6f8d6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8d6e:{NFSU2_TR(0x6f8d6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8d74;}}
}
B6f8d70:L6f8d70:{c.instructions+=2;NFSU2_TR(0x6f8d70);
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
B6f8d72:{NFSU2_TR(0x6f8d72);
{goto L6f8d85;}
}
B6f8d74:L6f8d74:{c.instructions+=3;NFSU2_TR(0x6f8d74);
u8 U[4];
w4(U+0,u32(0x6f8b1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d79:{NFSU2_TR(0x6f8d79);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8d7c:{NFSU2_TR(0x6f8d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8d81ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8d81:L6f8d81:{c.instructions+=3;NFSU2_TR(0x6f8d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8d83:{NFSU2_TR(0x6f8d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8d84:{NFSU2_TR(0x6f8d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8d85:L6f8d85:{c.instructions+=4;NFSU2_TR(0x6f8d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8d86:{NFSU2_TR(0x6f8d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8d87:{NFSU2_TR(0x6f8d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8d88:{NFSU2_TR(0x6f8d88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8d89:L6f8d89:{c.instructions+=5;NFSU2_TR(0x6f8d89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d8a:{NFSU2_TR(0x6f8d8a);
__builtin_memmove((R+20),(R+16),4);
}
B6f8d8c:{NFSU2_TR(0x6f8d8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8d8d:{NFSU2_TR(0x6f8d8d);
w4(R+24,u32(0x8ad634ull));
}
B6f8d92:{NFSU2_TR(0x6f8d92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8d97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f886bu);}goto L6f886b;}
}
B6f8d97:L6f8d97:{c.instructions+=3;NFSU2_TR(0x6f8d97);
__builtin_memmove((R+24),(R+0),4);
}
B6f8d99:{NFSU2_TR(0x6f8d99);
__builtin_memmove((R+4),(R+24),4);
}
B6f8d9b:{NFSU2_TR(0x6f8d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8da0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8896u);}goto L6f8896;}
}
B6f8da0:L6f8da0:{c.instructions+=16;NFSU2_TR(0x6f8da0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f8da2:{NFSU2_TR(0x6f8da2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8da3:{NFSU2_TR(0x6f8da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8da6:{NFSU2_TR(0x6f8da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8da9:{NFSU2_TR(0x6f8da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8dac:{NFSU2_TR(0x6f8dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8daf:{NFSU2_TR(0x6f8daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8db2:{NFSU2_TR(0x6f8db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8db5:{NFSU2_TR(0x6f8db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8db8:{NFSU2_TR(0x6f8db8);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8dba:{NFSU2_TR(0x6f8dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8dbd:{NFSU2_TR(0x6f8dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8dc0:{NFSU2_TR(0x6f8dc0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8dc2:{NFSU2_TR(0x6f8dc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8dc5:{NFSU2_TR(0x6f8dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8dc8:{NFSU2_TR(0x6f8dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8dcdull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B6f8dcd:L6f8dcd:{c.instructions+=4;NFSU2_TR(0x6f8dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8dd0:{NFSU2_TR(0x6f8dd0);
u8 U[4];
w4(U+0,u32(0x6f8b1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8dd5:{NFSU2_TR(0x6f8dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8dd8:{NFSU2_TR(0x6f8dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8dddull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8ddd:L6f8ddd:{c.instructions+=5;NFSU2_TR(0x6f8ddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8ddf:{NFSU2_TR(0x6f8ddf);
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
B6f8de2:{NFSU2_TR(0x6f8de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8de3:{NFSU2_TR(0x6f8de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8de4:{NFSU2_TR(0x6f8de4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8de5:L6f8de5:{c.instructions+=6;NFSU2_TR(0x6f8de5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8de6:{NFSU2_TR(0x6f8de6);
__builtin_memmove((R+20),(R+16),4);
}
B6f8de8:{NFSU2_TR(0x6f8de8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8de9:{NFSU2_TR(0x6f8de9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8dea:{NFSU2_TR(0x6f8dea);
w4(R+24,u32(0x8ad634ull));
}
B6f8def:{NFSU2_TR(0x6f8def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8df4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f886bu);}goto L6f886b;}
}
B6f8df4:L6f8df4:{c.instructions+=4;NFSU2_TR(0x6f8df4);
__builtin_memmove((R+24),(R+0),4);
}
B6f8df6:{NFSU2_TR(0x6f8df6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f8df8:{NFSU2_TR(0x6f8df8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8dfa:{NFSU2_TR(0x6f8dfa);
if(r1(R+518)){{goto L6f8e51;}}
}
B6f8dfc:L6f8dfc:{c.instructions+=3;NFSU2_TR(0x6f8dfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8dfd:{NFSU2_TR(0x6f8dfd);
__builtin_memmove((R+4),(R+24),4);
}
B6f8dff:{NFSU2_TR(0x6f8dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8e04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8896u);}goto L6f8896;}
}
B6f8e04:L6f8e04:{c.instructions+=16;NFSU2_TR(0x6f8e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8e07:{NFSU2_TR(0x6f8e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8e0a:{NFSU2_TR(0x6f8e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f8e0d:{NFSU2_TR(0x6f8e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f8e10:{NFSU2_TR(0x6f8e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e13:{NFSU2_TR(0x6f8e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e16:{NFSU2_TR(0x6f8e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e19:{NFSU2_TR(0x6f8e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e1c:{NFSU2_TR(0x6f8e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e1f:{NFSU2_TR(0x6f8e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e22:{NFSU2_TR(0x6f8e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e25:{NFSU2_TR(0x6f8e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e28:{NFSU2_TR(0x6f8e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e2b:{NFSU2_TR(0x6f8e2b);
__builtin_memmove((R+4),gp(0x813ac8),4);
}
B6f8e31:{NFSU2_TR(0x6f8e31);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8e33:{NFSU2_TR(0x6f8e33);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f8e37;}}
}
B6f8e35:L6f8e35:{c.instructions+=1;NFSU2_TR(0x6f8e35);
__builtin_memmove((R+0),(R+4),4);
}
B6f8e37:L6f8e37:{c.instructions+=7;NFSU2_TR(0x6f8e37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e38:{NFSU2_TR(0x6f8e38);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e3a:{NFSU2_TR(0x6f8e3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e3b:{NFSU2_TR(0x6f8e3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8e3e:{NFSU2_TR(0x6f8e3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e3f:{NFSU2_TR(0x6f8e3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e40:{NFSU2_TR(0x6f8e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8e45ull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B6f8e45:L6f8e45:{c.instructions+=5;NFSU2_TR(0x6f8e45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f8e48:{NFSU2_TR(0x6f8e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e4b:{NFSU2_TR(0x6f8e4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8e4e:{NFSU2_TR(0x6f8e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8e4f:{NFSU2_TR(0x6f8e4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8e55;}}
}
B6f8e51:L6f8e51:{c.instructions+=2;NFSU2_TR(0x6f8e51);
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
B6f8e53:{NFSU2_TR(0x6f8e53);
{goto L6f8e66;}
}
B6f8e55:L6f8e55:{c.instructions+=3;NFSU2_TR(0x6f8e55);
u8 U[4];
w4(U+0,u32(0x6f8bb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e5a:{NFSU2_TR(0x6f8e5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8e5d:{NFSU2_TR(0x6f8e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8e62ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B6f8e62:L6f8e62:{c.instructions+=3;NFSU2_TR(0x6f8e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f8e64:{NFSU2_TR(0x6f8e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8e65:{NFSU2_TR(0x6f8e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8e66:L6f8e66:{c.instructions+=4;NFSU2_TR(0x6f8e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8e67:{NFSU2_TR(0x6f8e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8e68:{NFSU2_TR(0x6f8e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8e69:{NFSU2_TR(0x6f8e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8e6a:L6f8e6a:{c.instructions+=5;NFSU2_TR(0x6f8e6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e6b:{NFSU2_TR(0x6f8e6b);
__builtin_memmove((R+20),(R+16),4);
}
B6f8e6d:{NFSU2_TR(0x6f8e6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e6e:{NFSU2_TR(0x6f8e6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8e71:{NFSU2_TR(0x6f8e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8e76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88b8u);}goto L6f88b8;}
}
B6f8e76:L6f8e76:{c.instructions+=4;NFSU2_TR(0x6f8e76);
__builtin_memmove((R+24),(R+0),4);
}
B6f8e78:{NFSU2_TR(0x6f8e78);
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
B6f8e7a:{NFSU2_TR(0x6f8e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8e7b:{NFSU2_TR(0x6f8e7b);
if(r1(R+518)){{goto L6f8eb4;}}
}
B6f8e7d:L6f8e7d:{c.instructions+=2;NFSU2_TR(0x6f8e7d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B6f8e81:{NFSU2_TR(0x6f8e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8eb4;}}
}
B6f8e83:L6f8e83:{c.instructions+=5;NFSU2_TR(0x6f8e83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e84:{NFSU2_TR(0x6f8e84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8e85:{NFSU2_TR(0x6f8e85);
w4(R+28,u32(0x8ad644ull));
}
B6f8e8a:{NFSU2_TR(0x6f8e8a);
__builtin_memmove((R+4),(R+28),4);
}
B6f8e8c:{NFSU2_TR(0x6f8e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8e91ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f8e91:L6f8e91:{c.instructions+=8;NFSU2_TR(0x6f8e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f8e94:{NFSU2_TR(0x6f8e94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f8e96:{NFSU2_TR(0x6f8e96);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8e99:{NFSU2_TR(0x6f8e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8e9c:{NFSU2_TR(0x6f8e9c);
__builtin_memmove((R+0),(R+518),1);
}
B6f8e9f:{NFSU2_TR(0x6f8e9f);
__builtin_memmove((R+4),(R+28),4);
}
B6f8ea1:{NFSU2_TR(0x6f8ea1);
__builtin_memmove((R+24),(R+0),4);
}
B6f8ea3:{NFSU2_TR(0x6f8ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8ea8ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f8ea8:L6f8ea8:{c.instructions+=2;NFSU2_TR(0x6f8ea8);
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
B6f8eaa:{NFSU2_TR(0x6f8eaa);
if(r1(R+518)){{goto L6f8eb2;}}
}
B6f8eac:L6f8eac:{c.instructions+=2;NFSU2_TR(0x6f8eac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8eaf:{NFSU2_TR(0x6f8eaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8eb1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f8eb1:L6f8eb1:{c.instructions+=1;NFSU2_TR(0x6f8eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8eb2:L6f8eb2:{c.instructions+=2;NFSU2_TR(0x6f8eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8eb3:{NFSU2_TR(0x6f8eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8eb4:L6f8eb4:{c.instructions+=3;NFSU2_TR(0x6f8eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8eb5:{NFSU2_TR(0x6f8eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8eb6:{NFSU2_TR(0x6f8eb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8eb7:L6f8eb7:{c.instructions+=7;NFSU2_TR(0x6f8eb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8eb8:{NFSU2_TR(0x6f8eb8);
__builtin_memmove((R+20),(R+16),4);
}
B6f8eba:{NFSU2_TR(0x6f8eba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ebb:{NFSU2_TR(0x6f8ebb);
w4(R+24,u32(0x8ad644ull));
}
B6f8ec0:{NFSU2_TR(0x6f8ec0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ec1:{NFSU2_TR(0x6f8ec1);
__builtin_memmove((R+4),(R+24),4);
}
B6f8ec3:{NFSU2_TR(0x6f8ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8ec8ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f8ec8:L6f8ec8:{c.instructions+=2;NFSU2_TR(0x6f8ec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8ecb:{NFSU2_TR(0x6f8ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8ed0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88b8u);}goto L6f88b8;}
}
B6f8ed0:L6f8ed0:{c.instructions+=3;NFSU2_TR(0x6f8ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8ed2:{NFSU2_TR(0x6f8ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8ed3:{NFSU2_TR(0x6f8ed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8eda;}}
}
B6f8ed5:L6f8ed5:{c.instructions+=2;NFSU2_TR(0x6f8ed5);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6f8ed8:{NFSU2_TR(0x6f8ed8);
{goto L6f8ee4;}
}
B6f8eda:L6f8eda:{c.instructions+=4;NFSU2_TR(0x6f8eda);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f8edc:{NFSU2_TR(0x6f8edc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8edf:{NFSU2_TR(0x6f8edf);
__builtin_memmove((R+4),(R+518),1);
}
B6f8ee2:{NFSU2_TR(0x6f8ee2);
__builtin_memmove((R+28),(R+4),4);
}
B6f8ee4:L6f8ee4:{c.instructions+=2;NFSU2_TR(0x6f8ee4);
__builtin_memmove((R+4),(R+24),4);
}
B6f8ee6:{NFSU2_TR(0x6f8ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8eebull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f8eeb:L6f8eeb:{c.instructions+=5;NFSU2_TR(0x6f8eeb);
__builtin_memmove((R+0),(R+28),4);
}
B6f8eed:{NFSU2_TR(0x6f8eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8eee:{NFSU2_TR(0x6f8eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8eef:{NFSU2_TR(0x6f8eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8ef0:{NFSU2_TR(0x6f8ef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8ef1:L6f8ef1:{c.instructions+=9;NFSU2_TR(0x6f8ef1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ef2:{NFSU2_TR(0x6f8ef2);
__builtin_memmove((R+20),(R+16),4);
}
B6f8ef4:{NFSU2_TR(0x6f8ef4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ef5:{NFSU2_TR(0x6f8ef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ef6:{NFSU2_TR(0x6f8ef6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ef7:{NFSU2_TR(0x6f8ef7);
w4(R+28,u32(0x8ad644ull));
}
B6f8efc:{NFSU2_TR(0x6f8efc);
__builtin_memmove((R+4),(R+28),4);
}
B6f8efe:{NFSU2_TR(0x6f8efe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f8f00:{NFSU2_TR(0x6f8f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8f05ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f8f05:L6f8f05:{c.instructions+=2;NFSU2_TR(0x6f8f05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8f08:{NFSU2_TR(0x6f8f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8f0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88b8u);}goto L6f88b8;}
}
B6f8f0d:L6f8f0d:{c.instructions+=4;NFSU2_TR(0x6f8f0d);
__builtin_memmove((R+24),(R+0),4);
}
B6f8f0f:{NFSU2_TR(0x6f8f0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8f11:{NFSU2_TR(0x6f8f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8f12:{NFSU2_TR(0x6f8f12);
if(r1(R+518)){{goto L6f8f22;}}
}
B6f8f14:L6f8f14:{c.instructions+=3;NFSU2_TR(0x6f8f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f8f17:{NFSU2_TR(0x6f8f17);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8f19:{NFSU2_TR(0x6f8f19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8f22;}}
}
B6f8f1b:L6f8f1b:{c.instructions+=1;NFSU2_TR(0x6f8f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8f22:L6f8f22:{c.instructions+=2;NFSU2_TR(0x6f8f22);
__builtin_memmove((R+4),(R+28),4);
}
B6f8f24:{NFSU2_TR(0x6f8f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8f29ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f8f29:L6f8f29:{c.instructions+=3;NFSU2_TR(0x6f8f29);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f8f2b:{NFSU2_TR(0x6f8f2b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8f2d:{NFSU2_TR(0x6f8f2d);
if(r1(R+518)){{goto L6f8f33;}}
}
B6f8f2f:L6f8f2f:{c.instructions+=2;NFSU2_TR(0x6f8f2f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8f31:{NFSU2_TR(0x6f8f31);
if(r1(R+518)){{goto L6f8f44;}}
}
B6f8f33:L6f8f33:{c.instructions+=1;NFSU2_TR(0x6f8f33);
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
B6f8f36:L6f8f36:{c.instructions+=5;NFSU2_TR(0x6f8f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f8f37:{NFSU2_TR(0x6f8f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f8f38:{NFSU2_TR(0x6f8f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f8f39:{NFSU2_TR(0x6f8f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f8f3a:{NFSU2_TR(0x6f8f3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f8f3b:L6f8f3b:{c.instructions+=2;NFSU2_TR(0x6f8f3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8f3e:{NFSU2_TR(0x6f8f3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8f43ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B6f8f43:L6f8f43:{c.instructions+=1;NFSU2_TR(0x6f8f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8f44:L6f8f44:{c.instructions+=2;NFSU2_TR(0x6f8f44);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8f47:{NFSU2_TR(0x6f8f47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8f3bu);}goto L6f8f3b;}}
}
B6f8f49:L6f8f49:{c.instructions+=3;NFSU2_TR(0x6f8f49);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8f4c:{NFSU2_TR(0x6f8f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8f4f:{NFSU2_TR(0x6f8f4f);
if(r1(R+518)){{goto L6f8f6e;}}
}
B6f8f51:L6f8f51:{c.instructions+=2;NFSU2_TR(0x6f8f51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8f53:{NFSU2_TR(0x6f8f53);
if(r1(R+518)){{goto L6f8f57;}}
}
B6f8f55:L6f8f55:{c.instructions+=1;NFSU2_TR(0x6f8f55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f8f57:L6f8f57:{c.instructions+=3;NFSU2_TR(0x6f8f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8f5a:{NFSU2_TR(0x6f8f5a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8f5c:{NFSU2_TR(0x6f8f5c);
if(r1(R+518)){{goto L6f8f60;}}
}
B6f8f5e:L6f8f5e:{c.instructions+=1;NFSU2_TR(0x6f8f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f8f60:L6f8f60:{c.instructions+=1;NFSU2_TR(0x6f8f60);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6f8f63:L6f8f63:{c.instructions+=2;NFSU2_TR(0x6f8f63);
__builtin_memmove((R+0),(R+24),4);
}
B6f8f65:{NFSU2_TR(0x6f8f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8f6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88f3u);}goto L6f88f3;}
}
B6f8f6a:L6f8f6a:{c.instructions+=2;NFSU2_TR(0x6f8f6a);
__builtin_memmove((R+0),(R+28),4);
}
B6f8f6c:{NFSU2_TR(0x6f8f6c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8f36u);}goto L6f8f36;}
}
B6f8f6e:L6f8f6e:{c.instructions+=2;NFSU2_TR(0x6f8f6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8f70:{NFSU2_TR(0x6f8f70);
if(r1(R+518)){{goto L6f8f7a;}}
}
B6f8f72:L6f8f72:{c.instructions+=3;NFSU2_TR(0x6f8f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8f75:{NFSU2_TR(0x6f8f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6f8f78:{NFSU2_TR(0x6f8f78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f8f7a:L6f8f7a:{c.instructions+=3;NFSU2_TR(0x6f8f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8f7d:{NFSU2_TR(0x6f8f7d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8f7f:{NFSU2_TR(0x6f8f7f);
if(r1(R+518)){{goto L6f8f86;}}
}
B6f8f81:L6f8f81:{c.instructions+=2;NFSU2_TR(0x6f8f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f8f84:{NFSU2_TR(0x6f8f84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f8f86:L6f8f86:{c.instructions+=3;NFSU2_TR(0x6f8f86);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f8f88:{NFSU2_TR(0x6f8f88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f8f89:{NFSU2_TR(0x6f8f89);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f8f63u);}goto L6f8f63;}
}
B6f8f8b:L6f8f8b:{c.instructions+=13;NFSU2_TR(0x6f8f8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8f8c:{NFSU2_TR(0x6f8f8c);
__builtin_memmove((R+20),(R+16),4);
}
B6f8f8e:{NFSU2_TR(0x6f8f8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8f8f:{NFSU2_TR(0x6f8f8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8f90:{NFSU2_TR(0x6f8f90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8f91:{NFSU2_TR(0x6f8f91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8f92:{NFSU2_TR(0x6f8f92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8f93:{NFSU2_TR(0x6f8f93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f8f95:{NFSU2_TR(0x6f8f95);
w4(R+28,u32(0x8ad644ull));
}
B6f8f9a:{NFSU2_TR(0x6f8f9a);
__builtin_memmove((R+4),(R+28),4);
}
B6f8f9c:{NFSU2_TR(0x6f8f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8f9f:{NFSU2_TR(0x6f8f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8fa2:{NFSU2_TR(0x6f8fa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8fa7ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f8fa7:L6f8fa7:{c.instructions+=2;NFSU2_TR(0x6f8fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f8faa:{NFSU2_TR(0x6f8faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8fafull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88b8u);}goto L6f88b8;}
}
B6f8faf:L6f8faf:{c.instructions+=4;NFSU2_TR(0x6f8faf);
__builtin_memmove((R+24),(R+0),4);
}
B6f8fb1:{NFSU2_TR(0x6f8fb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8fb3:{NFSU2_TR(0x6f8fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8fb4:{NFSU2_TR(0x6f8fb4);
if(r1(R+518)){{goto L6f8fd4;}}
}
B6f8fb6:L6f8fb6:{c.instructions+=7;NFSU2_TR(0x6f8fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8fb9:{NFSU2_TR(0x6f8fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f8fbc:{NFSU2_TR(0x6f8fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8fbe:{NFSU2_TR(0x6f8fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8fc1:{NFSU2_TR(0x6f8fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f8fc4:{NFSU2_TR(0x6f8fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f8fc7:{NFSU2_TR(0x6f8fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8fcd;}}
}
B6f8fc9:L6f8fc9:{c.instructions+=2;NFSU2_TR(0x6f8fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f8fcb:{NFSU2_TR(0x6f8fcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f8fd4;}}
}
B6f8fcd:L6f8fcd:{c.instructions+=1;NFSU2_TR(0x6f8fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f8fd4:L6f8fd4:{c.instructions+=2;NFSU2_TR(0x6f8fd4);
__builtin_memmove((R+4),(R+28),4);
}
B6f8fd6:{NFSU2_TR(0x6f8fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8fdbull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f8fdb:L6f8fdb:{c.instructions+=3;NFSU2_TR(0x6f8fdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f8fdd:{NFSU2_TR(0x6f8fdd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8fdf:{NFSU2_TR(0x6f8fdf);
if(r1(R+518)){TAIL_STATIC(0x6f9009u,6f9);}
}
B6f8fe1:L6f8fe1:{c.instructions+=2;NFSU2_TR(0x6f8fe1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8fe4:{NFSU2_TR(0x6f8fe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6f9009u,6f9);}
}
B6f8fe6:L6f8fe6:{c.instructions+=2;NFSU2_TR(0x6f8fe6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8fe9:{NFSU2_TR(0x6f8fe9);
if(r1(R+518)){TAIL_STATIC(0x6f9009u,6f9);}
}
B6f8feb:L6f8feb:{c.instructions+=2;NFSU2_TR(0x6f8feb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f8fed:{NFSU2_TR(0x6f8fed);
if(r1(R+518)){{goto L6f8ff8;}}
}
B6f8fef:L6f8fef:{c.instructions+=2;NFSU2_TR(0x6f8fef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f8ff0:{NFSU2_TR(0x6f8ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f8ff5ull));
TAIL_STATIC(0x6f7597u,6f7);
}
B6f8ff5:L6f8ff5:{c.instructions+=2;NFSU2_TR(0x6f8ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f8ff6:{NFSU2_TR(0x6f8ff6);
TAIL_STATIC(0x6f9004u,6f9);
}
B6f8ff8:L6f8ff8:{c.instructions+=2;NFSU2_TR(0x6f8ff8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f8ffb:{NFSU2_TR(0x6f8ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6f9004u,6f9);}
}
B6f8ffd:L6f8ffd:{c.instructions+=2;NFSU2_TR(0x6f8ffd);
__builtin_memmove((R+0),(R+24),4);
}
B6f8fff:{NFSU2_TR(0x6f8fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f9004ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f88f3u);}goto L6f88f3;}
}
XIT:NFSU2_TR_EXIT(0x6f8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
