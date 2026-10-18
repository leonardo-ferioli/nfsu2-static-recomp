#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74f(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x741,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x741,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_741(u8* __restrict R,Cpu& c);
u32 page_741(Cpu& c){return body_741(c.regs.data(),c);}
__attribute__((noinline)) u32 body_741(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x741002:goto L741002;
case 0x741004:c.instructions+=2;goto B741004;
case 0x741007:c.instructions+=1;goto B741007;
case 0x741009:goto L741009;
case 0x741010:goto L741010;
case 0x741013:c.instructions+=1;goto B741013;
case 0x741015:goto L741015;
case 0x741017:c.instructions+=1;goto B741017;
case 0x741019:goto L741019;
case 0x74101b:c.instructions+=11;goto B74101b;
case 0x74101d:c.instructions+=10;goto B74101d;
case 0x74101f:c.instructions+=9;goto B74101f;
case 0x741022:c.instructions+=8;goto B741022;
case 0x741025:c.instructions+=7;goto B741025;
case 0x741028:c.instructions+=6;goto B741028;
case 0x741029:c.instructions+=5;goto B741029;
case 0x74102b:c.instructions+=4;goto B74102b;
case 0x74102d:c.instructions+=3;goto B74102d;
case 0x74102e:c.instructions+=2;goto B74102e;
case 0x741031:c.instructions+=1;goto B741031;
case 0x741033:goto L741033;
case 0x741034:c.instructions+=1;goto B741034;
case 0x741040:goto L741040;
case 0x741041:c.instructions+=20;goto B741041;
case 0x741043:c.instructions+=19;goto B741043;
case 0x741048:c.instructions+=18;goto B741048;
case 0x74104a:c.instructions+=17;goto B74104a;
case 0x74104b:c.instructions+=16;goto B74104b;
case 0x74104c:c.instructions+=15;goto B74104c;
case 0x741051:c.instructions+=14;goto B741051;
case 0x741052:c.instructions+=13;goto B741052;
case 0x741057:c.instructions+=12;goto B741057;
case 0x74105c:c.instructions+=11;goto B74105c;
case 0x74105d:c.instructions+=10;goto B74105d;
case 0x74105f:c.instructions+=9;goto B74105f;
case 0x741061:c.instructions+=8;goto B741061;
case 0x741062:c.instructions+=7;goto B741062;
case 0x741064:c.instructions+=6;goto B741064;
case 0x741068:c.instructions+=5;goto B741068;
case 0x74106a:c.instructions+=4;goto B74106a;
case 0x74106b:c.instructions+=3;goto B74106b;
case 0x74106d:c.instructions+=2;goto B74106d;
case 0x741070:c.instructions+=1;goto B741070;
case 0x741073:goto L741073;
case 0x741076:c.instructions+=1;goto B741076;
case 0x741078:goto L741078;
case 0x74107a:c.instructions+=5;goto B74107a;
case 0x74107b:c.instructions+=4;goto B74107b;
case 0x741080:c.instructions+=3;goto B741080;
case 0x741082:c.instructions+=2;goto B741082;
case 0x741084:c.instructions+=1;goto B741084;
case 0x741086:goto L741086;
case 0x741088:c.instructions+=5;goto B741088;
case 0x741089:c.instructions+=4;goto B741089;
case 0x74108e:c.instructions+=3;goto B74108e;
case 0x741090:c.instructions+=2;goto B741090;
case 0x741092:c.instructions+=1;goto B741092;
case 0x741094:goto L741094;
case 0x741099:c.instructions+=1;goto B741099;
case 0x74109b:goto L74109b;
case 0x7410a0:goto L7410a0;
case 0x7410a2:c.instructions+=1;goto B7410a2;
case 0x7410a8:goto L7410a8;
case 0x7410ad:c.instructions+=9;goto B7410ad;
case 0x7410af:c.instructions+=8;goto B7410af;
case 0x7410b1:c.instructions+=7;goto B7410b1;
case 0x7410b4:c.instructions+=6;goto B7410b4;
case 0x7410b6:c.instructions+=5;goto B7410b6;
case 0x7410b9:c.instructions+=4;goto B7410b9;
case 0x7410bb:c.instructions+=3;goto B7410bb;
case 0x7410bd:c.instructions+=2;goto B7410bd;
case 0x7410bf:c.instructions+=1;goto B7410bf;
case 0x7410c1:goto L7410c1;
case 0x7410c2:goto L7410c2;
case 0x7410c5:c.instructions+=49;goto B7410c5;
case 0x7410c7:c.instructions+=48;goto B7410c7;
case 0x7410cd:c.instructions+=47;goto B7410cd;
case 0x7410d2:c.instructions+=46;goto B7410d2;
case 0x7410d4:c.instructions+=45;goto B7410d4;
case 0x7410d7:c.instructions+=44;goto B7410d7;
case 0x7410d9:c.instructions+=43;goto B7410d9;
case 0x7410db:c.instructions+=42;goto B7410db;
case 0x7410de:c.instructions+=41;goto B7410de;
case 0x7410e0:c.instructions+=40;goto B7410e0;
case 0x7410e2:c.instructions+=39;goto B7410e2;
case 0x7410e5:c.instructions+=38;goto B7410e5;
case 0x7410ea:c.instructions+=37;goto B7410ea;
case 0x7410ec:c.instructions+=36;goto B7410ec;
case 0x7410ef:c.instructions+=35;goto B7410ef;
case 0x7410f1:c.instructions+=34;goto B7410f1;
case 0x7410f4:c.instructions+=33;goto B7410f4;
case 0x7410f6:c.instructions+=32;goto B7410f6;
case 0x7410f8:c.instructions+=31;goto B7410f8;
case 0x7410fd:c.instructions+=30;goto B7410fd;
case 0x7410ff:c.instructions+=29;goto B7410ff;
case 0x741102:c.instructions+=28;goto B741102;
case 0x741104:c.instructions+=27;goto B741104;
case 0x741107:c.instructions+=26;goto B741107;
case 0x741109:c.instructions+=25;goto B741109;
case 0x74110b:c.instructions+=24;goto B74110b;
case 0x741110:c.instructions+=23;goto B741110;
case 0x741112:c.instructions+=22;goto B741112;
case 0x741115:c.instructions+=21;goto B741115;
case 0x741117:c.instructions+=20;goto B741117;
case 0x741119:c.instructions+=19;goto B741119;
case 0x74111c:c.instructions+=18;goto B74111c;
case 0x74111e:c.instructions+=17;goto B74111e;
case 0x741120:c.instructions+=16;goto B741120;
case 0x741122:c.instructions+=15;goto B741122;
case 0x741123:c.instructions+=14;goto B741123;
case 0x741126:c.instructions+=13;goto B741126;
case 0x741128:c.instructions+=12;goto B741128;
case 0x74112b:c.instructions+=11;goto B74112b;
case 0x74112d:c.instructions+=10;goto B74112d;
case 0x74112f:c.instructions+=9;goto B74112f;
case 0x741130:c.instructions+=8;goto B741130;
case 0x741133:c.instructions+=7;goto B741133;
case 0x741135:c.instructions+=6;goto B741135;
case 0x741138:c.instructions+=5;goto B741138;
case 0x74113a:c.instructions+=4;goto B74113a;
case 0x74113c:c.instructions+=3;goto B74113c;
case 0x74113e:c.instructions+=2;goto B74113e;
case 0x741142:c.instructions+=1;goto B741142;
case 0x741147:goto L741147;
case 0x74114a:c.instructions+=12;goto B74114a;
case 0x74114d:c.instructions+=11;goto B74114d;
case 0x741150:c.instructions+=10;goto B741150;
case 0x741156:c.instructions+=9;goto B741156;
case 0x741158:c.instructions+=8;goto B741158;
case 0x74115d:c.instructions+=7;goto B74115d;
case 0x741160:c.instructions+=6;goto B741160;
case 0x741163:c.instructions+=5;goto B741163;
case 0x741166:c.instructions+=4;goto B741166;
case 0x741168:c.instructions+=3;goto B741168;
case 0x74116a:c.instructions+=2;goto B74116a;
case 0x74116b:c.instructions+=1;goto B74116b;
case 0x74116d:goto L74116d;
case 0x741170:goto L741170;
case 0x741173:c.instructions+=7;goto B741173;
case 0x741175:c.instructions+=6;goto B741175;
case 0x741178:c.instructions+=5;goto B741178;
case 0x741179:c.instructions+=4;goto B741179;
case 0x74117c:c.instructions+=3;goto B74117c;
case 0x74117e:c.instructions+=2;goto B74117e;
case 0x741180:c.instructions+=1;goto B741180;
case 0x741182:goto L741182;
case 0x741183:c.instructions+=8;goto B741183;
case 0x741186:c.instructions+=7;goto B741186;
case 0x741187:c.instructions+=6;goto B741187;
case 0x74118a:c.instructions+=5;goto B74118a;
case 0x74118b:c.instructions+=4;goto B74118b;
case 0x74118d:c.instructions+=3;goto B74118d;
case 0x74118e:c.instructions+=2;goto B74118e;
case 0x74118f:c.instructions+=1;goto B74118f;
case 0x741190:goto L741190;
case 0x741193:c.instructions+=7;goto B741193;
case 0x741194:c.instructions+=6;goto B741194;
case 0x741195:c.instructions+=5;goto B741195;
case 0x741199:c.instructions+=4;goto B741199;
case 0x74119a:c.instructions+=3;goto B74119a;
case 0x74119b:c.instructions+=2;goto B74119b;
case 0x74119d:c.instructions+=1;goto B74119d;
case 0x7411a0:goto L7411a0;
case 0x7411a2:c.instructions+=12;goto B7411a2;
case 0x7411a4:c.instructions+=11;goto B7411a4;
case 0x7411a6:c.instructions+=10;goto B7411a6;
case 0x7411a8:c.instructions+=9;goto B7411a8;
case 0x7411ab:c.instructions+=8;goto B7411ab;
case 0x7411ad:c.instructions+=7;goto B7411ad;
case 0x7411af:c.instructions+=6;goto B7411af;
case 0x7411b1:c.instructions+=5;goto B7411b1;
case 0x7411b3:c.instructions+=4;goto B7411b3;
case 0x7411b7:c.instructions+=3;goto B7411b7;
case 0x7411b8:c.instructions+=2;goto B7411b8;
case 0x7411ba:c.instructions+=1;goto B7411ba;
case 0x7411bf:goto L7411bf;
case 0x7411c3:c.instructions+=4;goto B7411c3;
case 0x7411c6:c.instructions+=3;goto B7411c6;
case 0x7411c9:c.instructions+=2;goto B7411c9;
case 0x7411cb:c.instructions+=1;goto B7411cb;
case 0x7411cd:goto L7411cd;
case 0x7411d1:c.instructions+=2;goto B7411d1;
case 0x7411d4:c.instructions+=1;goto B7411d4;
case 0x7411d6:goto L7411d6;
case 0x7411da:c.instructions+=2;goto B7411da;
case 0x7411dd:c.instructions+=1;goto B7411dd;
case 0x7411df:goto L7411df;
case 0x7411e3:c.instructions+=2;goto B7411e3;
case 0x7411e6:c.instructions+=1;goto B7411e6;
case 0x7411e8:goto L7411e8;
case 0x7411ec:c.instructions+=2;goto B7411ec;
case 0x7411ef:c.instructions+=1;goto B7411ef;
case 0x7411f1:goto L7411f1;
case 0x7411f5:c.instructions+=2;goto B7411f5;
case 0x7411f8:c.instructions+=1;goto B7411f8;
case 0x7411fa:goto L7411fa;
case 0x7411fc:c.instructions+=1;goto B7411fc;
case 0x7411fe:goto L7411fe;
case 0x741201:c.instructions+=1;goto B741201;
case 0x741203:goto L741203;
case 0x741206:goto L741206;
case 0x741208:c.instructions+=1;goto B741208;
case 0x74120a:goto L74120a;
case 0x74120c:c.instructions+=11;goto B74120c;
case 0x74120e:c.instructions+=10;goto B74120e;
case 0x741211:c.instructions+=9;goto B741211;
case 0x741212:c.instructions+=8;goto B741212;
case 0x741213:c.instructions+=7;goto B741213;
case 0x741215:c.instructions+=6;goto B741215;
case 0x741216:c.instructions+=5;goto B741216;
case 0x741217:c.instructions+=4;goto B741217;
case 0x741219:c.instructions+=3;goto B741219;
case 0x74121a:c.instructions+=2;goto B74121a;
case 0x74121d:c.instructions+=1;goto B74121d;
case 0x741220:goto L741220;
case 0x741221:c.instructions+=10;goto B741221;
case 0x741225:c.instructions+=9;goto B741225;
case 0x741226:c.instructions+=8;goto B741226;
case 0x741228:c.instructions+=7;goto B741228;
case 0x74122a:c.instructions+=6;goto B74122a;
case 0x74122c:c.instructions+=5;goto B74122c;
case 0x74122e:c.instructions+=4;goto B74122e;
case 0x741230:c.instructions+=3;goto B741230;
case 0x741231:c.instructions+=2;goto B741231;
case 0x741233:c.instructions+=1;goto B741233;
case 0x741235:goto L741235;
case 0x741237:c.instructions+=1;goto B741237;
case 0x741239:goto L741239;
case 0x74123b:c.instructions+=8;goto B74123b;
case 0x74123d:c.instructions+=7;goto B74123d;
case 0x741240:c.instructions+=6;goto B741240;
case 0x741242:c.instructions+=5;goto B741242;
case 0x741245:c.instructions+=4;goto B741245;
case 0x741247:c.instructions+=3;goto B741247;
case 0x741248:c.instructions+=2;goto B741248;
case 0x74124b:c.instructions+=1;goto B74124b;
case 0x74124d:goto L74124d;
case 0x74124f:c.instructions+=4;goto B74124f;
case 0x741250:c.instructions+=3;goto B741250;
case 0x741253:c.instructions+=2;goto B741253;
case 0x741256:c.instructions+=1;goto B741256;
case 0x741257:goto L741257;
case 0x74125a:c.instructions+=1;goto B74125a;
case 0x74125c:goto L74125c;
case 0x74125e:c.instructions+=5;goto B74125e;
case 0x74125f:c.instructions+=4;goto B74125f;
case 0x741260:c.instructions+=3;goto B741260;
case 0x741262:c.instructions+=2;goto B741262;
case 0x741263:c.instructions+=1;goto B741263;
case 0x741270:goto L741270;
case 0x741274:c.instructions+=2;goto B741274;
case 0x741276:c.instructions+=1;goto B741276;
case 0x741278:goto L741278;
case 0x74127b:c.instructions+=1;goto B74127b;
case 0x74127c:goto L74127c;
case 0x741280:c.instructions+=3;goto B741280;
case 0x741282:c.instructions+=2;goto B741282;
case 0x741283:c.instructions+=1;goto B741283;
case 0x741289:goto L741289;
case 0x74128b:c.instructions+=2;goto B74128b;
case 0x74128e:c.instructions+=1;goto B74128e;
case 0x741294:goto L741294;
case 0x741297:c.instructions+=5;goto B741297;
case 0x741299:c.instructions+=4;goto B741299;
case 0x74129a:c.instructions+=3;goto B74129a;
case 0x74129b:c.instructions+=2;goto B74129b;
case 0x74129d:c.instructions+=1;goto B74129d;
case 0x74129f:goto L74129f;
case 0x7412a1:c.instructions+=1;goto B7412a1;
case 0x7412a3:goto L7412a3;
case 0x7412a6:c.instructions+=3;goto B7412a6;
case 0x7412a7:c.instructions+=2;goto B7412a7;
case 0x7412a9:c.instructions+=1;goto B7412a9;
case 0x7412ab:goto L7412ab;
case 0x7412ad:c.instructions+=1;goto B7412ad;
case 0x7412af:goto L7412af;
case 0x7412b2:c.instructions+=2;goto B7412b2;
case 0x7412b5:c.instructions+=1;goto B7412b5;
case 0x7412b7:goto L7412b7;
case 0x7412ba:c.instructions+=4;goto B7412ba;
case 0x7412c0:c.instructions+=3;goto B7412c0;
case 0x7412c3:c.instructions+=2;goto B7412c3;
case 0x7412c5:c.instructions+=1;goto B7412c5;
case 0x7412c7:goto L7412c7;
case 0x7412cb:c.instructions+=3;goto B7412cb;
case 0x7412cf:c.instructions+=2;goto B7412cf;
case 0x7412d1:c.instructions+=1;goto B7412d1;
case 0x7412d3:goto L7412d3;
case 0x7412d5:c.instructions+=2;goto B7412d5;
case 0x7412d6:c.instructions+=1;goto B7412d6;
case 0x7412d9:goto L7412d9;
case 0x7412db:c.instructions+=2;goto B7412db;
case 0x7412dd:c.instructions+=1;goto B7412dd;
case 0x7412e2:goto L7412e2;
case 0x7412e4:c.instructions+=1;goto B7412e4;
case 0x7412e6:goto L7412e6;
case 0x7412e8:c.instructions+=2;goto B7412e8;
case 0x7412eb:c.instructions+=1;goto B7412eb;
case 0x7412ed:goto L7412ed;
case 0x7412ee:c.instructions+=1;goto B7412ee;
case 0x7412f0:goto L7412f0;
case 0x7412f3:c.instructions+=2;goto B7412f3;
case 0x7412fa:c.instructions+=1;goto B7412fa;
case 0x7412fc:goto L7412fc;
case 0x7412ff:c.instructions+=5;goto B7412ff;
case 0x741305:c.instructions+=4;goto B741305;
case 0x741308:c.instructions+=3;goto B741308;
case 0x74130e:c.instructions+=2;goto B74130e;
case 0x741310:c.instructions+=1;goto B741310;
case 0x741312:goto L741312;
case 0x741316:c.instructions+=3;goto B741316;
case 0x741318:c.instructions+=2;goto B741318;
case 0x74131a:c.instructions+=1;goto B74131a;
case 0x741320:goto L741320;
case 0x741323:c.instructions+=1;goto B741323;
case 0x741325:goto L741325;
case 0x74132a:c.instructions+=6;goto B74132a;
case 0x74132e:c.instructions+=5;goto B74132e;
case 0x741334:c.instructions+=4;goto B741334;
case 0x74133a:c.instructions+=3;goto B74133a;
case 0x74133b:c.instructions+=2;goto B74133b;
case 0x74133d:c.instructions+=1;goto B74133d;
case 0x74133f:goto L74133f;
case 0x741342:c.instructions+=4;goto B741342;
case 0x741345:c.instructions+=3;goto B741345;
case 0x741347:c.instructions+=2;goto B741347;
case 0x74134a:c.instructions+=1;goto B74134a;
case 0x74134c:goto L74134c;
case 0x741350:goto L741350;
case 0x741353:c.instructions+=3;goto B741353;
case 0x741354:c.instructions+=2;goto B741354;
case 0x741357:c.instructions+=1;goto B741357;
case 0x741359:goto L741359;
case 0x74135d:goto L74135d;
case 0x741360:c.instructions+=1;goto B741360;
case 0x741362:goto L741362;
case 0x741364:c.instructions+=1;goto B741364;
case 0x74136a:goto L74136a;
case 0x74136d:c.instructions+=2;goto B74136d;
case 0x741370:c.instructions+=1;goto B741370;
case 0x741376:goto L741376;
case 0x741379:c.instructions+=4;goto B741379;
case 0x74137f:c.instructions+=3;goto B74137f;
case 0x741382:c.instructions+=2;goto B741382;
case 0x741384:c.instructions+=1;goto B741384;
case 0x74138a:goto L74138a;
case 0x74138e:c.instructions+=3;goto B74138e;
case 0x741392:c.instructions+=2;goto B741392;
case 0x741394:c.instructions+=1;goto B741394;
case 0x74139a:goto L74139a;
case 0x74139c:c.instructions+=5;goto B74139c;
case 0x74139d:c.instructions+=4;goto B74139d;
case 0x7413a0:c.instructions+=3;goto B7413a0;
case 0x7413a2:c.instructions+=2;goto B7413a2;
case 0x7413a4:c.instructions+=1;goto B7413a4;
case 0x7413a6:goto L7413a6;
case 0x7413a9:c.instructions+=3;goto B7413a9;
case 0x7413ab:c.instructions+=2;goto B7413ab;
case 0x7413ad:c.instructions+=1;goto B7413ad;
case 0x7413af:goto L7413af;
case 0x7413b0:goto L7413b0;
case 0x7413b3:c.instructions+=3;goto B7413b3;
case 0x7413b4:c.instructions+=2;goto B7413b4;
case 0x7413b7:c.instructions+=1;goto B7413b7;
case 0x7413b9:goto L7413b9;
case 0x7413bc:c.instructions+=2;goto B7413bc;
case 0x7413c0:c.instructions+=1;goto B7413c0;
case 0x7413c2:goto L7413c2;
case 0x7413c3:goto L7413c3;
case 0x7413c7:c.instructions+=4;goto B7413c7;
case 0x7413c8:c.instructions+=3;goto B7413c8;
case 0x7413ca:c.instructions+=2;goto B7413ca;
case 0x7413cd:c.instructions+=1;goto B7413cd;
case 0x7413cf:goto L7413cf;
case 0x7413d0:goto L7413d0;
case 0x7413d1:c.instructions+=2;goto B7413d1;
case 0x7413d5:c.instructions+=1;goto B7413d5;
case 0x7413d7:goto L7413d7;
case 0x7413d8:c.instructions+=6;goto B7413d8;
case 0x7413da:c.instructions+=5;goto B7413da;
case 0x7413dc:c.instructions+=4;goto B7413dc;
case 0x7413de:c.instructions+=3;goto B7413de;
case 0x7413e1:c.instructions+=2;goto B7413e1;
case 0x7413e3:c.instructions+=1;goto B7413e3;
case 0x7413e5:goto L7413e5;
case 0x7413e8:c.instructions+=3;goto B7413e8;
case 0x7413e9:c.instructions+=2;goto B7413e9;
case 0x7413eb:c.instructions+=1;goto B7413eb;
case 0x7413ed:goto L7413ed;
case 0x7413ee:c.instructions+=2;goto B7413ee;
case 0x7413f0:c.instructions+=1;goto B7413f0;
case 0x7413f2:goto L7413f2;
case 0x7413f6:c.instructions+=4;goto B7413f6;
case 0x7413f8:c.instructions+=3;goto B7413f8;
case 0x7413fa:c.instructions+=2;goto B7413fa;
case 0x7413fc:c.instructions+=1;goto B7413fc;
case 0x7413fe:goto L7413fe;
case 0x7413ff:c.instructions+=5;goto B7413ff;
case 0x741400:c.instructions+=4;goto B741400;
case 0x741401:c.instructions+=3;goto B741401;
case 0x741404:c.instructions+=2;goto B741404;
case 0x741405:c.instructions+=1;goto B741405;
case 0x741406:goto L741406;
case 0x741408:goto L741408;
case 0x74140a:goto L74140a;
case 0x74140e:c.instructions+=3;goto B74140e;
case 0x741410:c.instructions+=2;goto B741410;
case 0x741412:c.instructions+=1;goto B741412;
case 0x741414:goto L741414;
case 0x741416:goto L741416;
case 0x741418:goto L741418;
case 0x741419:c.instructions+=5;goto B741419;
case 0x74141a:c.instructions+=4;goto B74141a;
case 0x74141b:c.instructions+=3;goto B74141b;
case 0x74141d:c.instructions+=2;goto B74141d;
case 0x74141e:c.instructions+=1;goto B74141e;
case 0x74141f:goto L74141f;
case 0x741421:c.instructions+=1;goto B741421;
case 0x741423:goto L741423;
case 0x741425:c.instructions+=6;goto B741425;
case 0x741427:c.instructions+=5;goto B741427;
case 0x741428:c.instructions+=4;goto B741428;
case 0x741429:c.instructions+=3;goto B741429;
case 0x74142b:c.instructions+=2;goto B74142b;
case 0x74142c:c.instructions+=1;goto B74142c;
case 0x741431:goto L741431;
case 0x741434:c.instructions+=1;goto B741434;
case 0x741436:goto L741436;
case 0x741438:goto L741438;
case 0x74143a:c.instructions+=8;goto B74143a;
case 0x74143c:c.instructions+=7;goto B74143c;
case 0x74143e:c.instructions+=6;goto B74143e;
case 0x74143f:c.instructions+=5;goto B74143f;
case 0x741441:c.instructions+=4;goto B741441;
case 0x741443:c.instructions+=3;goto B741443;
case 0x741444:c.instructions+=2;goto B741444;
case 0x741445:c.instructions+=1;goto B741445;
case 0x74144a:goto L74144a;
case 0x74144d:goto L74144d;
case 0x741451:c.instructions+=4;goto B741451;
case 0x741453:c.instructions+=3;goto B741453;
case 0x741455:c.instructions+=2;goto B741455;
case 0x741458:c.instructions+=1;goto B741458;
case 0x74145a:goto L74145a;
case 0x74145c:goto L74145c;
case 0x74145e:c.instructions+=1;goto B74145e;
case 0x741461:goto L741461;
case 0x741463:goto L741463;
case 0x741467:c.instructions+=1;goto B741467;
case 0x741469:goto L741469;
case 0x741470:c.instructions+=1;goto B741470;
case 0x741472:goto L741472;
case 0x741477:c.instructions+=6;goto B741477;
case 0x74147a:c.instructions+=5;goto B74147a;
case 0x74147b:c.instructions+=4;goto B74147b;
case 0x74147c:c.instructions+=3;goto B74147c;
case 0x74147d:c.instructions+=2;goto B74147d;
case 0x74147e:c.instructions+=1;goto B74147e;
case 0x74147f:goto L74147f;
case 0x741484:c.instructions+=7;goto B741484;
case 0x741488:c.instructions+=6;goto B741488;
case 0x74148b:c.instructions+=5;goto B74148b;
case 0x74148c:c.instructions+=4;goto B74148c;
case 0x74148d:c.instructions+=3;goto B74148d;
case 0x74148e:c.instructions+=2;goto B74148e;
case 0x74148f:c.instructions+=1;goto B74148f;
case 0x741490:goto L741490;
case 0x741493:c.instructions+=2;goto B741493;
case 0x741494:c.instructions+=1;goto B741494;
case 0x7414a0:goto L7414a0;
case 0x7414a1:c.instructions+=3;goto B7414a1;
case 0x7414a5:c.instructions+=2;goto B7414a5;
case 0x7414a7:c.instructions+=1;goto B7414a7;
case 0x7414ad:goto L7414ad;
case 0x7414af:c.instructions+=2;goto B7414af;
case 0x7414b1:c.instructions+=1;goto B7414b1;
case 0x7414b7:goto L7414b7;
case 0x7414bb:c.instructions+=2;goto B7414bb;
case 0x7414bd:c.instructions+=1;goto B7414bd;
case 0x7414c3:goto L7414c3;
case 0x7414c6:c.instructions+=1;goto B7414c6;
case 0x7414cc:goto L7414cc;
case 0x7414ce:c.instructions+=2;goto B7414ce;
case 0x7414cf:c.instructions+=1;goto B7414cf;
case 0x7414d0:goto L7414d0;
case 0x7414d3:c.instructions+=3;goto B7414d3;
case 0x7414d4:c.instructions+=2;goto B7414d4;
case 0x7414d6:c.instructions+=1;goto B7414d6;
case 0x7414d8:goto L7414d8;
case 0x7414d9:c.instructions+=6;goto B7414d9;
case 0x7414da:c.instructions+=5;goto B7414da;
case 0x7414db:c.instructions+=4;goto B7414db;
case 0x7414df:c.instructions+=3;goto B7414df;
case 0x7414e1:c.instructions+=2;goto B7414e1;
case 0x7414e4:c.instructions+=1;goto B7414e4;
case 0x7414e6:goto L7414e6;
case 0x7414ea:c.instructions+=1;goto B7414ea;
case 0x7414f0:goto L7414f0;
case 0x7414f2:c.instructions+=1;goto B7414f2;
case 0x7414f4:goto L7414f4;
case 0x7414f6:c.instructions+=1;goto B7414f6;
case 0x7414f8:goto L7414f8;
case 0x7414fc:c.instructions+=1;goto B7414fc;
case 0x7414fe:goto L7414fe;
case 0x741501:c.instructions+=1;goto B741501;
case 0x741503:goto L741503;
case 0x741505:c.instructions+=2;goto B741505;
case 0x741507:c.instructions+=1;goto B741507;
case 0x741509:goto L741509;
case 0x74150b:c.instructions+=2;goto B74150b;
case 0x74150d:c.instructions+=1;goto B74150d;
case 0x741511:goto L741511;
case 0x741513:c.instructions+=1;goto B741513;
case 0x741515:goto L741515;
case 0x741518:c.instructions+=5;goto B741518;
case 0x74151b:c.instructions+=4;goto B74151b;
case 0x741521:c.instructions+=3;goto B741521;
case 0x741527:c.instructions+=2;goto B741527;
case 0x74152b:c.instructions+=1;goto B74152b;
case 0x74152d:goto L74152d;
case 0x74152f:c.instructions+=1;goto B74152f;
case 0x741531:goto L741531;
case 0x741533:c.instructions+=1;goto B741533;
case 0x741535:goto L741535;
case 0x741539:c.instructions+=1;goto B741539;
case 0x74153b:goto L74153b;
case 0x74153c:c.instructions+=3;goto B74153c;
case 0x74153d:c.instructions+=2;goto B74153d;
case 0x74153f:c.instructions+=1;goto B74153f;
case 0x741541:goto L741541;
case 0x741544:c.instructions+=4;goto B741544;
case 0x741545:c.instructions+=3;goto B741545;
case 0x741546:c.instructions+=2;goto B741546;
case 0x741548:c.instructions+=1;goto B741548;
case 0x74154a:goto L74154a;
case 0x74154c:goto L74154c;
case 0x74154d:c.instructions+=4;goto B74154d;
case 0x74154e:c.instructions+=3;goto B74154e;
case 0x74154f:c.instructions+=2;goto B74154f;
case 0x741550:c.instructions+=1;goto B741550;
case 0x741551:goto L741551;
case 0x741554:c.instructions+=3;goto B741554;
case 0x741557:c.instructions+=2;goto B741557;
case 0x74155a:c.instructions+=1;goto B74155a;
case 0x74155c:goto L74155c;
case 0x74155d:c.instructions+=5;goto B74155d;
case 0x741560:c.instructions+=4;goto B741560;
case 0x741561:c.instructions+=3;goto B741561;
case 0x741562:c.instructions+=2;goto B741562;
case 0x741563:c.instructions+=1;goto B741563;
case 0x741564:goto L741564;
case 0x741566:c.instructions+=2;goto B741566;
case 0x741567:c.instructions+=1;goto B741567;
case 0x741570:goto L741570;
case 0x741576:c.instructions+=10;goto B741576;
case 0x74157b:c.instructions+=9;goto B74157b;
case 0x741582:c.instructions+=8;goto B741582;
case 0x741589:c.instructions+=7;goto B741589;
case 0x741590:c.instructions+=6;goto B741590;
case 0x741591:c.instructions+=5;goto B741591;
case 0x741592:c.instructions+=4;goto B741592;
case 0x741596:c.instructions+=3;goto B741596;
case 0x74159b:c.instructions+=2;goto B74159b;
case 0x74159c:c.instructions+=1;goto B74159c;
case 0x7415a1:goto L7415a1;
case 0x7415a8:c.instructions+=4;goto B7415a8;
case 0x7415ac:c.instructions+=3;goto B7415ac;
case 0x7415ad:c.instructions+=2;goto B7415ad;
case 0x7415ae:c.instructions+=1;goto B7415ae;
case 0x7415b3:goto L7415b3;
case 0x7415ba:c.instructions+=1;goto B7415ba;
case 0x7415bf:goto L7415bf;
case 0x7415c5:c.instructions+=1;goto B7415c5;
case 0x7415d0:goto L7415d0;
case 0x7415d4:c.instructions+=5;goto B7415d4;
case 0x7415d5:c.instructions+=4;goto B7415d5;
case 0x7415d9:c.instructions+=3;goto B7415d9;
case 0x7415da:c.instructions+=2;goto B7415da;
case 0x7415db:c.instructions+=1;goto B7415db;
case 0x7415e0:goto L7415e0;
case 0x7415e3:c.instructions+=2;goto B7415e3;
case 0x7415e5:c.instructions+=1;goto B7415e5;
case 0x7415e7:goto L7415e7;
case 0x7415ea:c.instructions+=2;goto B7415ea;
case 0x7415eb:c.instructions+=1;goto B7415eb;
case 0x7415ec:goto L7415ec;
case 0x7415ee:c.instructions+=4;goto B7415ee;
case 0x7415ef:c.instructions+=3;goto B7415ef;
case 0x7415f1:c.instructions+=2;goto B7415f1;
case 0x7415f3:c.instructions+=1;goto B7415f3;
case 0x7415f5:goto L7415f5;
case 0x7415f8:c.instructions+=1;goto B7415f8;
case 0x7415fa:goto L7415fa;
case 0x7415fb:c.instructions+=2;goto B7415fb;
case 0x7415fd:c.instructions+=1;goto B7415fd;
case 0x7415ff:goto L7415ff;
case 0x741601:c.instructions+=1;goto B741601;
case 0x741603:goto L741603;
case 0x741606:c.instructions+=3;goto B741606;
case 0x741607:c.instructions+=2;goto B741607;
case 0x741609:c.instructions+=1;goto B741609;
case 0x74160b:goto L74160b;
case 0x74160d:c.instructions+=2;goto B74160d;
case 0x74160f:c.instructions+=1;goto B74160f;
case 0x741611:goto L741611;
case 0x741613:c.instructions+=1;goto B741613;
case 0x741615:goto L741615;
case 0x741618:c.instructions+=3;goto B741618;
case 0x741619:c.instructions+=2;goto B741619;
case 0x74161b:c.instructions+=1;goto B74161b;
case 0x74161d:goto L74161d;
case 0x74161f:c.instructions+=2;goto B74161f;
case 0x741621:c.instructions+=1;goto B741621;
case 0x741623:goto L741623;
case 0x741625:c.instructions+=5;goto B741625;
case 0x741628:c.instructions+=4;goto B741628;
case 0x741629:c.instructions+=3;goto B741629;
case 0x74162a:c.instructions+=2;goto B74162a;
case 0x74162c:c.instructions+=1;goto B74162c;
case 0x74162e:goto L74162e;
case 0x741630:c.instructions+=1;goto B741630;
case 0x741632:goto L741632;
case 0x741635:c.instructions+=1;goto B741635;
case 0x741637:goto L741637;
case 0x741638:c.instructions+=2;goto B741638;
case 0x74163a:c.instructions+=1;goto B74163a;
case 0x74163c:goto L74163c;
case 0x74163d:c.instructions+=4;goto B74163d;
case 0x741640:c.instructions+=3;goto B741640;
case 0x741642:c.instructions+=2;goto B741642;
case 0x741643:c.instructions+=1;goto B741643;
case 0x741650:goto L741650;
case 0x741654:c.instructions+=6;goto B741654;
case 0x741657:c.instructions+=5;goto B741657;
case 0x741658:c.instructions+=4;goto B741658;
case 0x74165c:c.instructions+=3;goto B74165c;
case 0x74165d:c.instructions+=2;goto B74165d;
case 0x74165f:c.instructions+=1;goto B74165f;
case 0x741661:goto L741661;
case 0x741665:goto L741665;
case 0x741667:c.instructions+=2;goto B741667;
case 0x741669:c.instructions+=1;goto B741669;
case 0x74166b:goto L74166b;
case 0x74166c:c.instructions+=5;goto B74166c;
case 0x74166f:c.instructions+=4;goto B74166f;
case 0x741670:c.instructions+=3;goto B741670;
case 0x741671:c.instructions+=2;goto B741671;
case 0x741674:c.instructions+=1;goto B741674;
case 0x741676:goto L741676;
case 0x741678:c.instructions+=1;goto B741678;
case 0x74167a:goto L74167a;
case 0x74167d:goto L74167d;
case 0x74167e:c.instructions+=3;goto B74167e;
case 0x741680:c.instructions+=2;goto B741680;
case 0x741681:c.instructions+=1;goto B741681;
case 0x741690:goto L741690;
case 0x741696:c.instructions+=9;goto B741696;
case 0x74169d:c.instructions+=8;goto B74169d;
case 0x74169f:c.instructions+=7;goto B74169f;
case 0x7416a4:c.instructions+=6;goto B7416a4;
case 0x7416a5:c.instructions+=5;goto B7416a5;
case 0x7416a6:c.instructions+=4;goto B7416a6;
case 0x7416ad:c.instructions+=3;goto B7416ad;
case 0x7416b4:c.instructions+=2;goto B7416b4;
case 0x7416b8:c.instructions+=1;goto B7416b8;
case 0x7416ba:goto L7416ba;
case 0x7416bd:c.instructions+=1;goto B7416bd;
case 0x7416bf:goto L7416bf;
case 0x7416c1:c.instructions+=2;goto B7416c1;
case 0x7416c3:c.instructions+=1;goto B7416c3;
case 0x7416c5:goto L7416c5;
case 0x7416c9:c.instructions+=2;goto B7416c9;
case 0x7416cb:c.instructions+=1;goto B7416cb;
case 0x7416d0:goto L7416d0;
case 0x7416d2:c.instructions+=4;goto B7416d2;
case 0x7416d6:c.instructions+=3;goto B7416d6;
case 0x7416d7:c.instructions+=2;goto B7416d7;
case 0x7416d9:c.instructions+=1;goto B7416d9;
case 0x7416db:goto L7416db;
case 0x7416de:c.instructions+=1;goto B7416de;
case 0x7416df:goto L7416df;
case 0x7416e6:c.instructions+=3;goto B7416e6;
case 0x7416e8:c.instructions+=2;goto B7416e8;
case 0x7416ea:c.instructions+=1;goto B7416ea;
case 0x7416ec:goto L7416ec;
case 0x7416ef:c.instructions+=2;goto B7416ef;
case 0x7416f2:c.instructions+=1;goto B7416f2;
case 0x7416f4:goto L7416f4;
case 0x7416f6:c.instructions+=3;goto B7416f6;
case 0x7416f9:c.instructions+=2;goto B7416f9;
case 0x7416fc:c.instructions+=1;goto B7416fc;
case 0x7416fe:goto L7416fe;
case 0x7416ff:c.instructions+=1;goto B7416ff;
case 0x741700:goto L741700;
case 0x741701:c.instructions+=7;goto B741701;
case 0x741706:c.instructions+=6;goto B741706;
case 0x741708:c.instructions+=5;goto B741708;
case 0x741709:c.instructions+=4;goto B741709;
case 0x74170c:c.instructions+=3;goto B74170c;
case 0x74170e:c.instructions+=2;goto B74170e;
case 0x741710:c.instructions+=1;goto B741710;
case 0x741712:goto L741712;
case 0x741713:goto L741713;
case 0x741715:c.instructions+=2;goto B741715;
case 0x741717:c.instructions+=1;goto B741717;
case 0x741719:goto L741719;
case 0x74171a:c.instructions+=4;goto B74171a;
case 0x74171d:c.instructions+=3;goto B74171d;
case 0x74171f:c.instructions+=2;goto B74171f;
case 0x741721:c.instructions+=1;goto B741721;
case 0x741723:goto L741723;
case 0x741725:c.instructions+=5;goto B741725;
case 0x741728:c.instructions+=4;goto B741728;
case 0x741729:c.instructions+=3;goto B741729;
case 0x74172a:c.instructions+=2;goto B74172a;
case 0x74172c:c.instructions+=1;goto B74172c;
case 0x74172e:goto L74172e;
case 0x741735:c.instructions+=6;goto B741735;
case 0x741739:c.instructions+=5;goto B741739;
case 0x74173a:c.instructions+=4;goto B74173a;
case 0x74173b:c.instructions+=3;goto B74173b;
case 0x74173c:c.instructions+=2;goto B74173c;
case 0x74173f:c.instructions+=1;goto B74173f;
case 0x741744:goto L741744;
case 0x74174b:c.instructions+=4;goto B74174b;
case 0x74174e:c.instructions+=3;goto B74174e;
case 0x74174f:c.instructions+=2;goto B74174f;
case 0x741750:c.instructions+=1;goto B741750;
case 0x741755:goto L741755;
case 0x74175b:c.instructions+=1;goto B74175b;
case 0x741760:goto L741760;
case 0x741766:c.instructions+=9;goto B741766;
case 0x74176b:c.instructions+=8;goto B74176b;
case 0x741772:c.instructions+=7;goto B741772;
case 0x741774:c.instructions+=6;goto B741774;
case 0x741775:c.instructions+=5;goto B741775;
case 0x74177c:c.instructions+=4;goto B74177c;
case 0x74177d:c.instructions+=3;goto B74177d;
case 0x741784:c.instructions+=2;goto B741784;
case 0x741788:c.instructions+=1;goto B741788;
case 0x74178a:goto L74178a;
case 0x74178d:c.instructions+=1;goto B74178d;
case 0x74178f:goto L74178f;
case 0x741791:c.instructions+=2;goto B741791;
case 0x741793:c.instructions+=1;goto B741793;
case 0x741795:goto L741795;
case 0x741799:c.instructions+=2;goto B741799;
case 0x74179b:c.instructions+=1;goto B74179b;
case 0x7417a0:goto L7417a0;
case 0x7417a2:c.instructions+=4;goto B7417a2;
case 0x7417a6:c.instructions+=3;goto B7417a6;
case 0x7417a7:c.instructions+=2;goto B7417a7;
case 0x7417a9:c.instructions+=1;goto B7417a9;
case 0x7417ab:goto L7417ab;
case 0x7417ae:c.instructions+=1;goto B7417ae;
case 0x7417af:goto L7417af;
case 0x7417b6:c.instructions+=3;goto B7417b6;
case 0x7417b8:c.instructions+=2;goto B7417b8;
case 0x7417bd:c.instructions+=1;goto B7417bd;
case 0x7417bf:goto L7417bf;
case 0x7417c0:goto L7417c0;
case 0x7417c2:c.instructions+=2;goto B7417c2;
case 0x7417c4:c.instructions+=1;goto B7417c4;
case 0x7417c6:goto L7417c6;
case 0x7417c9:c.instructions+=1;goto B7417c9;
case 0x7417cb:goto L7417cb;
case 0x7417cd:c.instructions+=1;goto B7417cd;
case 0x7417ce:goto L7417ce;
case 0x7417d0:c.instructions+=3;goto B7417d0;
case 0x7417d1:c.instructions+=2;goto B7417d1;
case 0x7417d3:c.instructions+=1;goto B7417d3;
case 0x7417d5:goto L7417d5;
case 0x7417dc:c.instructions+=6;goto B7417dc;
case 0x7417df:c.instructions+=5;goto B7417df;
case 0x7417e3:c.instructions+=4;goto B7417e3;
case 0x7417e4:c.instructions+=3;goto B7417e4;
case 0x7417e5:c.instructions+=2;goto B7417e5;
case 0x7417e6:c.instructions+=1;goto B7417e6;
case 0x7417eb:goto L7417eb;
case 0x7417f2:c.instructions+=4;goto B7417f2;
case 0x7417f5:c.instructions+=3;goto B7417f5;
case 0x7417f6:c.instructions+=2;goto B7417f6;
case 0x7417f7:c.instructions+=1;goto B7417f7;
case 0x7417fc:goto L7417fc;
case 0x741802:c.instructions+=1;goto B741802;
case 0x741810:goto L741810;
case 0x741816:c.instructions+=9;goto B741816;
case 0x74181d:c.instructions+=8;goto B74181d;
case 0x74181f:c.instructions+=7;goto B74181f;
case 0x741824:c.instructions+=6;goto B741824;
case 0x741825:c.instructions+=5;goto B741825;
case 0x741826:c.instructions+=4;goto B741826;
case 0x74182d:c.instructions+=3;goto B74182d;
case 0x741834:c.instructions+=2;goto B741834;
case 0x741838:c.instructions+=1;goto B741838;
case 0x74183a:goto L74183a;
case 0x74183d:c.instructions+=1;goto B74183d;
case 0x74183f:goto L74183f;
case 0x741841:c.instructions+=2;goto B741841;
case 0x741843:c.instructions+=1;goto B741843;
case 0x741845:goto L741845;
case 0x741849:c.instructions+=2;goto B741849;
case 0x74184b:c.instructions+=1;goto B74184b;
case 0x741850:goto L741850;
case 0x741852:c.instructions+=4;goto B741852;
case 0x741856:c.instructions+=3;goto B741856;
case 0x741857:c.instructions+=2;goto B741857;
case 0x741859:c.instructions+=1;goto B741859;
case 0x74185b:goto L74185b;
case 0x74185e:c.instructions+=1;goto B74185e;
case 0x74185f:goto L74185f;
case 0x741860:c.instructions+=11;goto B741860;
case 0x741867:c.instructions+=10;goto B741867;
case 0x74186b:c.instructions+=9;goto B74186b;
case 0x74186e:c.instructions+=8;goto B74186e;
case 0x741870:c.instructions+=7;goto B741870;
case 0x741873:c.instructions+=6;goto B741873;
case 0x741875:c.instructions+=5;goto B741875;
case 0x741878:c.instructions+=4;goto B741878;
case 0x74187a:c.instructions+=3;goto B74187a;
case 0x74187c:c.instructions+=2;goto B74187c;
case 0x741880:c.instructions+=1;goto B741880;
case 0x741882:goto L741882;
case 0x741884:c.instructions+=1;goto B741884;
case 0x741886:goto L741886;
case 0x741889:c.instructions+=7;goto B741889;
case 0x74188a:c.instructions+=6;goto B74188a;
case 0x74188f:c.instructions+=5;goto B74188f;
case 0x741891:c.instructions+=4;goto B741891;
case 0x741894:c.instructions+=3;goto B741894;
case 0x741896:c.instructions+=2;goto B741896;
case 0x741898:c.instructions+=1;goto B741898;
case 0x74189a:goto L74189a;
case 0x74189d:c.instructions+=8;goto B74189d;
case 0x74189e:c.instructions+=7;goto B74189e;
case 0x7418a3:c.instructions+=6;goto B7418a3;
case 0x7418a5:c.instructions+=5;goto B7418a5;
case 0x7418a7:c.instructions+=4;goto B7418a7;
case 0x7418a9:c.instructions+=3;goto B7418a9;
case 0x7418ab:c.instructions+=2;goto B7418ab;
case 0x7418af:c.instructions+=1;goto B7418af;
case 0x7418b0:goto L7418b0;
case 0x7418b2:c.instructions+=6;goto B7418b2;
case 0x7418b4:c.instructions+=5;goto B7418b4;
case 0x7418b5:c.instructions+=4;goto B7418b5;
case 0x7418b8:c.instructions+=3;goto B7418b8;
case 0x7418b9:c.instructions+=2;goto B7418b9;
case 0x7418bc:c.instructions+=1;goto B7418bc;
case 0x7418be:goto L7418be;
case 0x7418c1:c.instructions+=1;goto B7418c1;
case 0x7418c3:goto L7418c3;
case 0x7418c6:c.instructions+=7;goto B7418c6;
case 0x7418c7:c.instructions+=6;goto B7418c7;
case 0x7418cc:c.instructions+=5;goto B7418cc;
case 0x7418ce:c.instructions+=4;goto B7418ce;
case 0x7418d0:c.instructions+=3;goto B7418d0;
case 0x7418d2:c.instructions+=2;goto B7418d2;
case 0x7418d3:c.instructions+=1;goto B7418d3;
case 0x7418d5:goto L7418d5;
case 0x7418d8:c.instructions+=8;goto B7418d8;
case 0x7418d9:c.instructions+=7;goto B7418d9;
case 0x7418de:c.instructions+=6;goto B7418de;
case 0x7418e0:c.instructions+=5;goto B7418e0;
case 0x7418e2:c.instructions+=4;goto B7418e2;
case 0x7418e4:c.instructions+=3;goto B7418e4;
case 0x7418e6:c.instructions+=2;goto B7418e6;
case 0x7418ea:c.instructions+=1;goto B7418ea;
case 0x7418eb:goto L7418eb;
case 0x7418ee:c.instructions+=8;goto B7418ee;
case 0x7418f0:c.instructions+=7;goto B7418f0;
case 0x7418f1:c.instructions+=6;goto B7418f1;
case 0x7418f4:c.instructions+=5;goto B7418f4;
case 0x7418f5:c.instructions+=4;goto B7418f5;
case 0x7418f8:c.instructions+=3;goto B7418f8;
case 0x7418fa:c.instructions+=2;goto B7418fa;
case 0x7418fb:c.instructions+=1;goto B7418fb;
case 0x7418fd:goto L7418fd;
case 0x741900:c.instructions+=1;goto B741900;
case 0x741902:goto L741902;
case 0x741905:c.instructions+=7;goto B741905;
case 0x741906:c.instructions+=6;goto B741906;
case 0x74190b:c.instructions+=5;goto B74190b;
case 0x74190d:c.instructions+=4;goto B74190d;
case 0x74190f:c.instructions+=3;goto B74190f;
case 0x741911:c.instructions+=2;goto B741911;
case 0x741912:c.instructions+=1;goto B741912;
case 0x741914:goto L741914;
case 0x741917:c.instructions+=7;goto B741917;
case 0x741918:c.instructions+=6;goto B741918;
case 0x74191d:c.instructions+=5;goto B74191d;
case 0x74191f:c.instructions+=4;goto B74191f;
case 0x741921:c.instructions+=3;goto B741921;
case 0x741923:c.instructions+=2;goto B741923;
case 0x741924:c.instructions+=1;goto B741924;
case 0x741926:goto L741926;
case 0x74192a:c.instructions+=8;goto B74192a;
case 0x74192c:c.instructions+=7;goto B74192c;
case 0x74192e:c.instructions+=6;goto B74192e;
case 0x74192f:c.instructions+=5;goto B74192f;
case 0x741932:c.instructions+=4;goto B741932;
case 0x741933:c.instructions+=3;goto B741933;
case 0x741936:c.instructions+=2;goto B741936;
case 0x741938:c.instructions+=1;goto B741938;
case 0x74193a:goto L74193a;
case 0x74193d:c.instructions+=1;goto B74193d;
case 0x74193f:goto L74193f;
case 0x741942:c.instructions+=7;goto B741942;
case 0x741943:c.instructions+=6;goto B741943;
case 0x741948:c.instructions+=5;goto B741948;
case 0x74194a:c.instructions+=4;goto B74194a;
case 0x74194c:c.instructions+=3;goto B74194c;
case 0x74194e:c.instructions+=2;goto B74194e;
case 0x74194f:c.instructions+=1;goto B74194f;
case 0x741951:goto L741951;
case 0x741954:c.instructions+=7;goto B741954;
case 0x741955:c.instructions+=6;goto B741955;
case 0x74195a:c.instructions+=5;goto B74195a;
case 0x74195c:c.instructions+=4;goto B74195c;
case 0x74195e:c.instructions+=3;goto B74195e;
case 0x741960:c.instructions+=2;goto B741960;
case 0x741961:c.instructions+=1;goto B741961;
case 0x741963:goto L741963;
case 0x741965:c.instructions+=8;goto B741965;
case 0x741967:c.instructions+=7;goto B741967;
case 0x74196e:c.instructions+=6;goto B74196e;
case 0x741972:c.instructions+=5;goto B741972;
case 0x741973:c.instructions+=4;goto B741973;
case 0x741974:c.instructions+=3;goto B741974;
case 0x741975:c.instructions+=2;goto B741975;
case 0x741979:c.instructions+=1;goto B741979;
case 0x74197e:goto L74197e;
case 0x741985:c.instructions+=4;goto B741985;
case 0x741988:c.instructions+=3;goto B741988;
case 0x741989:c.instructions+=2;goto B741989;
case 0x74198a:c.instructions+=1;goto B74198a;
case 0x74198f:goto L74198f;
case 0x741995:c.instructions+=1;goto B741995;
case 0x7419a0:goto L7419a0;
case 0x7419a6:c.instructions+=8;goto B7419a6;
case 0x7419ab:c.instructions+=7;goto B7419ab;
case 0x7419b2:c.instructions+=6;goto B7419b2;
case 0x7419b4:c.instructions+=5;goto B7419b4;
case 0x7419bb:c.instructions+=4;goto B7419bb;
case 0x7419bc:c.instructions+=3;goto B7419bc;
case 0x7419c3:c.instructions+=2;goto B7419c3;
case 0x7419c7:c.instructions+=1;goto B7419c7;
case 0x7419c9:goto L7419c9;
case 0x7419cc:c.instructions+=1;goto B7419cc;
case 0x7419ce:goto L7419ce;
case 0x7419d0:c.instructions+=2;goto B7419d0;
case 0x7419d2:c.instructions+=1;goto B7419d2;
case 0x7419d4:goto L7419d4;
case 0x7419d5:c.instructions+=4;goto B7419d5;
case 0x7419d9:c.instructions+=3;goto B7419d9;
case 0x7419db:c.instructions+=2;goto B7419db;
case 0x7419dc:c.instructions+=1;goto B7419dc;
case 0x7419e0:goto L7419e0;
case 0x7419e2:c.instructions+=4;goto B7419e2;
case 0x7419e6:c.instructions+=3;goto B7419e6;
case 0x7419e7:c.instructions+=2;goto B7419e7;
case 0x7419e9:c.instructions+=1;goto B7419e9;
case 0x7419eb:goto L7419eb;
case 0x7419ee:c.instructions+=1;goto B7419ee;
case 0x7419ef:goto L7419ef;
case 0x7419f6:c.instructions+=2;goto B7419f6;
case 0x7419f8:c.instructions+=1;goto B7419f8;
case 0x7419fa:goto L7419fa;
case 0x741a00:goto L741a00;
case 0x741a06:c.instructions+=1;goto B741a06;
case 0x741a08:goto L741a08;
case 0x741a0a:c.instructions+=3;goto B741a0a;
case 0x741a0d:c.instructions+=2;goto B741a0d;
case 0x741a0f:c.instructions+=1;goto B741a0f;
case 0x741a10:goto L741a10;
case 0x741a13:c.instructions+=2;goto B741a13;
case 0x741a15:c.instructions+=1;goto B741a15;
case 0x741a17:goto L741a17;
case 0x741a1e:c.instructions+=6;goto B741a1e;
case 0x741a21:c.instructions+=5;goto B741a21;
case 0x741a25:c.instructions+=4;goto B741a25;
case 0x741a26:c.instructions+=3;goto B741a26;
case 0x741a27:c.instructions+=2;goto B741a27;
case 0x741a28:c.instructions+=1;goto B741a28;
case 0x741a2d:goto L741a2d;
case 0x741a34:c.instructions+=3;goto B741a34;
case 0x741a37:c.instructions+=2;goto B741a37;
case 0x741a38:c.instructions+=1;goto B741a38;
case 0x741a3d:goto L741a3d;
case 0x741a43:c.instructions+=1;goto B741a43;
case 0x741a50:goto L741a50;
case 0x741a55:c.instructions+=1;goto B741a55;
case 0x741a5a:goto L741a5a;
case 0x741a5f:c.instructions+=7;goto B741a5f;
case 0x741a60:c.instructions+=6;goto B741a60;
case 0x741a61:c.instructions+=5;goto B741a61;
case 0x741a68:c.instructions+=4;goto B741a68;
case 0x741a6a:c.instructions+=3;goto B741a6a;
case 0x741a71:c.instructions+=2;goto B741a71;
case 0x741a73:c.instructions+=1;goto B741a73;
case 0x741a75:goto L741a75;
case 0x741a7c:c.instructions+=4;goto B741a7c;
case 0x741a83:c.instructions+=3;goto B741a83;
case 0x741a84:c.instructions+=2;goto B741a84;
case 0x741a85:c.instructions+=1;goto B741a85;
case 0x741a8a:goto L741a8a;
case 0x741a8d:c.instructions+=5;goto B741a8d;
case 0x741a8e:c.instructions+=4;goto B741a8e;
case 0x741a90:c.instructions+=3;goto B741a90;
case 0x741a91:c.instructions+=2;goto B741a91;
case 0x741a98:c.instructions+=1;goto B741a98;
case 0x741a9d:goto L741a9d;
case 0x741aa3:c.instructions+=1;goto B741aa3;
case 0x741aa4:goto L741aa4;
case 0x741aab:c.instructions+=4;goto B741aab;
case 0x741aad:c.instructions+=3;goto B741aad;
case 0x741aae:c.instructions+=2;goto B741aae;
case 0x741ab2:c.instructions+=1;goto B741ab2;
case 0x741ab4:goto L741ab4;
case 0x741abb:c.instructions+=2;goto B741abb;
case 0x741abe:c.instructions+=1;goto B741abe;
case 0x741ac0:goto L741ac0;
case 0x741ac2:c.instructions+=2;goto B741ac2;
case 0x741ac4:c.instructions+=1;goto B741ac4;
case 0x741ac6:goto L741ac6;
case 0x741aca:c.instructions+=2;goto B741aca;
case 0x741acc:c.instructions+=1;goto B741acc;
case 0x741ad0:goto L741ad0;
case 0x741ad2:c.instructions+=4;goto B741ad2;
case 0x741ad6:c.instructions+=3;goto B741ad6;
case 0x741ad7:c.instructions+=2;goto B741ad7;
case 0x741ad9:c.instructions+=1;goto B741ad9;
case 0x741adb:goto L741adb;
case 0x741ade:c.instructions+=1;goto B741ade;
case 0x741adf:goto L741adf;
case 0x741ae0:c.instructions+=6;goto B741ae0;
case 0x741ae2:c.instructions+=5;goto B741ae2;
case 0x741ae9:c.instructions+=4;goto B741ae9;
case 0x741aeb:c.instructions+=3;goto B741aeb;
case 0x741aed:c.instructions+=2;goto B741aed;
case 0x741aef:c.instructions+=1;goto B741aef;
case 0x741af1:goto L741af1;
case 0x741af3:goto L741af3;
case 0x741af6:c.instructions+=1;goto B741af6;
case 0x741af8:goto L741af8;
case 0x741afb:c.instructions+=3;goto B741afb;
case 0x741afc:c.instructions+=2;goto B741afc;
case 0x741afe:c.instructions+=1;goto B741afe;
case 0x741b00:goto L741b00;
case 0x741b03:c.instructions+=1;goto B741b03;
case 0x741b05:goto L741b05;
case 0x741b08:c.instructions+=2;goto B741b08;
case 0x741b0b:c.instructions+=1;goto B741b0b;
case 0x741b0c:goto L741b0c;
case 0x741b0e:c.instructions+=2;goto B741b0e;
case 0x741b0f:c.instructions+=1;goto B741b0f;
case 0x741b11:goto L741b11;
case 0x741b13:c.instructions+=1;goto B741b13;
case 0x741b15:goto L741b15;
case 0x741b18:c.instructions+=2;goto B741b18;
case 0x741b1a:c.instructions+=1;goto B741b1a;
case 0x741b1c:goto L741b1c;
case 0x741b1e:c.instructions+=1;goto B741b1e;
case 0x741b20:goto L741b20;
case 0x741b22:c.instructions+=1;goto B741b22;
case 0x741b24:goto L741b24;
case 0x741b26:c.instructions+=1;goto B741b26;
case 0x741b28:goto L741b28;
case 0x741b2a:c.instructions+=1;goto B741b2a;
case 0x741b2c:goto L741b2c;
case 0x741b2e:c.instructions+=1;goto B741b2e;
case 0x741b30:goto L741b30;
case 0x741b32:c.instructions+=1;goto B741b32;
case 0x741b34:goto L741b34;
case 0x741b36:c.instructions+=3;goto B741b36;
case 0x741b37:c.instructions+=2;goto B741b37;
case 0x741b38:c.instructions+=1;goto B741b38;
case 0x741b3a:goto L741b3a;
case 0x741b3d:c.instructions+=1;goto B741b3d;
case 0x741b3f:goto L741b3f;
case 0x741b42:c.instructions+=8;goto B741b42;
case 0x741b45:c.instructions+=7;goto B741b45;
case 0x741b4b:c.instructions+=6;goto B741b4b;
case 0x741b51:c.instructions+=5;goto B741b51;
case 0x741b52:c.instructions+=4;goto B741b52;
case 0x741b54:c.instructions+=3;goto B741b54;
case 0x741b55:c.instructions+=2;goto B741b55;
case 0x741b57:c.instructions+=1;goto B741b57;
case 0x741b58:goto L741b58;
case 0x741b5b:goto L741b5b;
case 0x741b5e:c.instructions+=3;goto B741b5e;
case 0x741b5f:c.instructions+=2;goto B741b5f;
case 0x741b61:c.instructions+=1;goto B741b61;
case 0x741b63:goto L741b63;
case 0x741b65:c.instructions+=1;goto B741b65;
case 0x741b67:goto L741b67;
case 0x741b68:c.instructions+=5;goto B741b68;
case 0x741b69:c.instructions+=4;goto B741b69;
case 0x741b6e:c.instructions+=3;goto B741b6e;
case 0x741b6f:c.instructions+=2;goto B741b6f;
case 0x741b76:c.instructions+=1;goto B741b76;
case 0x741b7b:goto L741b7b;
case 0x741b81:c.instructions+=1;goto B741b81;
case 0x741b82:goto L741b82;
case 0x741b85:c.instructions+=1;goto B741b85;
case 0x741b87:goto L741b87;
case 0x741b8a:c.instructions+=1;goto B741b8a;
case 0x741b8b:goto L741b8b;
case 0x741b92:c.instructions+=7;goto B741b92;
case 0x741b99:c.instructions+=6;goto B741b99;
case 0x741b9c:c.instructions+=5;goto B741b9c;
case 0x741ba0:c.instructions+=4;goto B741ba0;
case 0x741ba1:c.instructions+=3;goto B741ba1;
case 0x741ba2:c.instructions+=2;goto B741ba2;
case 0x741ba3:c.instructions+=1;goto B741ba3;
case 0x741ba8:goto L741ba8;
case 0x741baf:c.instructions+=5;goto B741baf;
case 0x741bb2:c.instructions+=4;goto B741bb2;
case 0x741bb3:c.instructions+=3;goto B741bb3;
case 0x741bb4:c.instructions+=2;goto B741bb4;
case 0x741bb5:c.instructions+=1;goto B741bb5;
case 0x741bba:goto L741bba;
case 0x741bc0:c.instructions+=1;goto B741bc0;
case 0x741bd0:goto L741bd0;
case 0x741bd5:c.instructions+=1;goto B741bd5;
case 0x741bda:goto L741bda;
case 0x741bdf:c.instructions+=10;goto B741bdf;
case 0x741be6:c.instructions+=9;goto B741be6;
case 0x741be8:c.instructions+=8;goto B741be8;
case 0x741be9:c.instructions+=7;goto B741be9;
case 0x741bf0:c.instructions+=6;goto B741bf0;
case 0x741bf1:c.instructions+=5;goto B741bf1;
case 0x741bf8:c.instructions+=4;goto B741bf8;
case 0x741bf9:c.instructions+=3;goto B741bf9;
case 0x741c00:c.instructions+=2;goto B741c00;
case 0x741c04:c.instructions+=1;goto B741c04;
case 0x741c06:goto L741c06;
case 0x741c0a:c.instructions+=1;goto B741c0a;
case 0x741c0c:goto L741c0c;
case 0x741c0e:c.instructions+=2;goto B741c0e;
case 0x741c10:c.instructions+=1;goto B741c10;
case 0x741c12:goto L741c12;
case 0x741c16:c.instructions+=1;goto B741c16;
case 0x741c18:goto L741c18;
case 0x741c1a:c.instructions+=4;goto B741c1a;
case 0x741c1e:c.instructions+=3;goto B741c1e;
case 0x741c1f:c.instructions+=2;goto B741c1f;
case 0x741c21:c.instructions+=1;goto B741c21;
case 0x741c23:goto L741c23;
case 0x741c26:c.instructions+=1;goto B741c26;
case 0x741c27:goto L741c27;
case 0x741c2e:c.instructions+=7;goto B741c2e;
case 0x741c31:c.instructions+=6;goto B741c31;
case 0x741c32:c.instructions+=5;goto B741c32;
case 0x741c39:c.instructions+=4;goto B741c39;
case 0x741c3b:c.instructions+=3;goto B741c3b;
case 0x741c3f:c.instructions+=2;goto B741c3f;
case 0x741c41:c.instructions+=1;goto B741c41;
case 0x741c43:goto L741c43;
case 0x741c44:c.instructions+=5;goto B741c44;
case 0x741c45:c.instructions+=4;goto B741c45;
case 0x741c48:c.instructions+=3;goto B741c48;
case 0x741c49:c.instructions+=2;goto B741c49;
case 0x741c50:c.instructions+=1;goto B741c50;
case 0x741c55:goto L741c55;
case 0x741c5b:c.instructions+=1;goto B741c5b;
case 0x741c5c:goto L741c5c;
case 0x741c5e:c.instructions+=1;goto B741c5e;
case 0x741c60:goto L741c60;
case 0x741c63:c.instructions+=9;goto B741c63;
case 0x741c69:c.instructions+=8;goto B741c69;
case 0x741c6f:c.instructions+=7;goto B741c6f;
case 0x741c71:c.instructions+=6;goto B741c71;
case 0x741c72:c.instructions+=5;goto B741c72;
case 0x741c74:c.instructions+=4;goto B741c74;
case 0x741c75:c.instructions+=3;goto B741c75;
case 0x741c76:c.instructions+=2;goto B741c76;
case 0x741c77:c.instructions+=1;goto B741c77;
case 0x741c79:goto L741c79;
case 0x741c7d:c.instructions+=6;goto B741c7d;
case 0x741c80:c.instructions+=5;goto B741c80;
case 0x741c87:c.instructions+=4;goto B741c87;
case 0x741c88:c.instructions+=3;goto B741c88;
case 0x741c89:c.instructions+=2;goto B741c89;
case 0x741c8a:c.instructions+=1;goto B741c8a;
case 0x741c8f:goto L741c8f;
case 0x741c96:c.instructions+=5;goto B741c96;
case 0x741c99:c.instructions+=4;goto B741c99;
case 0x741c9a:c.instructions+=3;goto B741c9a;
case 0x741c9b:c.instructions+=2;goto B741c9b;
case 0x741c9c:c.instructions+=1;goto B741c9c;
case 0x741ca1:goto L741ca1;
case 0x741ca7:c.instructions+=1;goto B741ca7;
case 0x741cb0:goto L741cb0;
case 0x741cb5:c.instructions+=1;goto B741cb5;
case 0x741cba:goto L741cba;
case 0x741cbf:c.instructions+=10;goto B741cbf;
case 0x741cc0:c.instructions+=9;goto B741cc0;
case 0x741cc1:c.instructions+=8;goto B741cc1;
case 0x741cc8:c.instructions+=7;goto B741cc8;
case 0x741ccf:c.instructions+=6;goto B741ccf;
case 0x741cd6:c.instructions+=5;goto B741cd6;
case 0x741cd8:c.instructions+=4;goto B741cd8;
case 0x741cd9:c.instructions+=3;goto B741cd9;
case 0x741cda:c.instructions+=2;goto B741cda;
case 0x741cdc:c.instructions+=1;goto B741cdc;
case 0x741cde:goto L741cde;
case 0x741ce1:c.instructions+=1;goto B741ce1;
case 0x741ce3:goto L741ce3;
case 0x741ce8:goto L741ce8;
case 0x741cef:c.instructions+=3;goto B741cef;
case 0x741cf1:c.instructions+=2;goto B741cf1;
case 0x741cf5:c.instructions+=1;goto B741cf5;
case 0x741cf7:goto L741cf7;
case 0x741cfe:c.instructions+=2;goto B741cfe;
case 0x741d00:c.instructions+=1;goto B741d00;
case 0x741d02:goto L741d02;
case 0x741d04:c.instructions+=2;goto B741d04;
case 0x741d06:c.instructions+=1;goto B741d06;
case 0x741d08:goto L741d08;
case 0x741d0c:c.instructions+=2;goto B741d0c;
case 0x741d0e:c.instructions+=1;goto B741d0e;
case 0x741d10:goto L741d10;
case 0x741d12:c.instructions+=4;goto B741d12;
case 0x741d16:c.instructions+=3;goto B741d16;
case 0x741d17:c.instructions+=2;goto B741d17;
case 0x741d19:c.instructions+=1;goto B741d19;
case 0x741d1b:goto L741d1b;
case 0x741d1e:c.instructions+=1;goto B741d1e;
case 0x741d1f:goto L741d1f;
case 0x741d22:c.instructions+=6;goto B741d22;
case 0x741d25:c.instructions+=5;goto B741d25;
case 0x741d28:c.instructions+=4;goto B741d28;
case 0x741d2a:c.instructions+=3;goto B741d2a;
case 0x741d2c:c.instructions+=2;goto B741d2c;
case 0x741d2e:c.instructions+=1;goto B741d2e;
case 0x741d30:goto L741d30;
case 0x741d32:c.instructions+=9;goto B741d32;
case 0x741d34:c.instructions+=8;goto B741d34;
case 0x741d37:c.instructions+=7;goto B741d37;
case 0x741d3a:c.instructions+=6;goto B741d3a;
case 0x741d3c:c.instructions+=5;goto B741d3c;
case 0x741d3e:c.instructions+=4;goto B741d3e;
case 0x741d41:c.instructions+=3;goto B741d41;
case 0x741d42:c.instructions+=2;goto B741d42;
case 0x741d44:c.instructions+=1;goto B741d44;
case 0x741d46:goto L741d46;
case 0x741d48:goto L741d48;
case 0x741d4b:c.instructions+=10;goto B741d4b;
case 0x741d51:c.instructions+=9;goto B741d51;
case 0x741d53:c.instructions+=8;goto B741d53;
case 0x741d59:c.instructions+=7;goto B741d59;
case 0x741d5a:c.instructions+=6;goto B741d5a;
case 0x741d5c:c.instructions+=5;goto B741d5c;
case 0x741d5f:c.instructions+=4;goto B741d5f;
case 0x741d60:c.instructions+=3;goto B741d60;
case 0x741d61:c.instructions+=2;goto B741d61;
case 0x741d63:c.instructions+=1;goto B741d63;
case 0x741d65:goto L741d65;
case 0x741d6c:c.instructions+=7;goto B741d6c;
case 0x741d73:c.instructions+=6;goto B741d73;
case 0x741d76:c.instructions+=5;goto B741d76;
case 0x741d7a:c.instructions+=4;goto B741d7a;
case 0x741d7b:c.instructions+=3;goto B741d7b;
case 0x741d7c:c.instructions+=2;goto B741d7c;
case 0x741d7d:c.instructions+=1;goto B741d7d;
case 0x741d82:goto L741d82;
case 0x741d89:c.instructions+=6;goto B741d89;
case 0x741d8c:c.instructions+=5;goto B741d8c;
case 0x741d8d:c.instructions+=4;goto B741d8d;
case 0x741d8e:c.instructions+=3;goto B741d8e;
case 0x741d8f:c.instructions+=2;goto B741d8f;
case 0x741d90:c.instructions+=1;goto B741d90;
case 0x741d95:goto L741d95;
case 0x741d9b:c.instructions+=1;goto B741d9b;
case 0x741da0:goto L741da0;
case 0x741da6:c.instructions+=5;goto B741da6;
case 0x741dab:c.instructions+=4;goto B741dab;
case 0x741db2:c.instructions+=3;goto B741db2;
case 0x741db9:c.instructions+=2;goto B741db9;
case 0x741dbb:c.instructions+=1;goto B741dbb;
case 0x741dbd:goto L741dbd;
case 0x741dc2:goto L741dc2;
case 0x741dc5:c.instructions+=2;goto B741dc5;
case 0x741dc6:c.instructions+=1;goto B741dc6;
case 0x741dcb:goto L741dcb;
case 0x741dce:c.instructions+=2;goto B741dce;
case 0x741dd0:c.instructions+=1;goto B741dd0;
case 0x741dd2:goto L741dd2;
case 0x741dd5:c.instructions+=2;goto B741dd5;
case 0x741ddc:c.instructions+=1;goto B741ddc;
case 0x741de1:goto L741de1;
case 0x741de7:c.instructions+=1;goto B741de7;
case 0x741de8:goto L741de8;
case 0x741de9:c.instructions+=6;goto B741de9;
case 0x741df0:c.instructions+=5;goto B741df0;
case 0x741df2:c.instructions+=4;goto B741df2;
case 0x741df3:c.instructions+=3;goto B741df3;
case 0x741dfa:c.instructions+=2;goto B741dfa;
case 0x741dfe:c.instructions+=1;goto B741dfe;
case 0x741e00:goto L741e00;
case 0x741e03:c.instructions+=1;goto B741e03;
case 0x741e05:goto L741e05;
case 0x741e07:c.instructions+=2;goto B741e07;
case 0x741e09:c.instructions+=1;goto B741e09;
case 0x741e0b:goto L741e0b;
case 0x741e0c:c.instructions+=3;goto B741e0c;
case 0x741e10:c.instructions+=2;goto B741e10;
case 0x741e12:c.instructions+=1;goto B741e12;
case 0x741e13:goto L741e13;
case 0x741e15:c.instructions+=4;goto B741e15;
case 0x741e19:c.instructions+=3;goto B741e19;
case 0x741e1a:c.instructions+=2;goto B741e1a;
case 0x741e1c:c.instructions+=1;goto B741e1c;
case 0x741e1e:goto L741e1e;
case 0x741e21:c.instructions+=1;goto B741e21;
case 0x741e22:goto L741e22;
case 0x741e24:c.instructions+=16;goto B741e24;
case 0x741e25:c.instructions+=15;goto B741e25;
case 0x741e28:c.instructions+=14;goto B741e28;
case 0x741e29:c.instructions+=13;goto B741e29;
case 0x741e2c:c.instructions+=12;goto B741e2c;
case 0x741e2d:c.instructions+=11;goto B741e2d;
case 0x741e30:c.instructions+=10;goto B741e30;
case 0x741e31:c.instructions+=9;goto B741e31;
case 0x741e34:c.instructions+=8;goto B741e34;
case 0x741e37:c.instructions+=7;goto B741e37;
case 0x741e38:c.instructions+=6;goto B741e38;
case 0x741e39:c.instructions+=5;goto B741e39;
case 0x741e3e:c.instructions+=4;goto B741e3e;
case 0x741e3f:c.instructions+=3;goto B741e3f;
case 0x741e44:c.instructions+=2;goto B741e44;
case 0x741e45:c.instructions+=1;goto B741e45;
case 0x741e4a:goto L741e4a;
case 0x741e51:c.instructions+=5;goto B741e51;
case 0x741e55:c.instructions+=4;goto B741e55;
case 0x741e56:c.instructions+=3;goto B741e56;
case 0x741e57:c.instructions+=2;goto B741e57;
case 0x741e58:c.instructions+=1;goto B741e58;
case 0x741e5d:goto L741e5d;
case 0x741e64:c.instructions+=4;goto B741e64;
case 0x741e67:c.instructions+=3;goto B741e67;
case 0x741e68:c.instructions+=2;goto B741e68;
case 0x741e69:c.instructions+=1;goto B741e69;
case 0x741e6e:goto L741e6e;
case 0x741e74:c.instructions+=1;goto B741e74;
case 0x741e80:goto L741e80;
case 0x741e84:c.instructions+=5;goto B741e84;
case 0x741e85:c.instructions+=4;goto B741e85;
case 0x741e89:c.instructions+=3;goto B741e89;
case 0x741e8a:c.instructions+=2;goto B741e8a;
case 0x741e8b:c.instructions+=1;goto B741e8b;
case 0x741e90:goto L741e90;
case 0x741e93:c.instructions+=2;goto B741e93;
case 0x741e95:c.instructions+=1;goto B741e95;
case 0x741e97:goto L741e97;
case 0x741e98:c.instructions+=1;goto B741e98;
case 0x741e99:goto L741e99;
case 0x741e9b:c.instructions+=1;goto B741e9b;
case 0x741e9d:goto L741e9d;
case 0x741e9f:c.instructions+=1;goto B741e9f;
case 0x741ea0:goto L741ea0;
case 0x741ea3:c.instructions+=1;goto B741ea3;
case 0x741ea5:goto L741ea5;
case 0x741ea6:c.instructions+=2;goto B741ea6;
case 0x741ea8:c.instructions+=1;goto B741ea8;
case 0x741eaa:goto L741eaa;
case 0x741eae:c.instructions+=5;goto B741eae;
case 0x741eb2:c.instructions+=4;goto B741eb2;
case 0x741eb3:c.instructions+=3;goto B741eb3;
case 0x741eb4:c.instructions+=2;goto B741eb4;
case 0x741eb5:c.instructions+=1;goto B741eb5;
case 0x741eba:goto L741eba;
case 0x741ebd:c.instructions+=2;goto B741ebd;
case 0x741ebe:c.instructions+=1;goto B741ebe;
case 0x741ec0:goto L741ec0;
case 0x741ec1:c.instructions+=6;goto B741ec1;
case 0x741ec5:c.instructions+=5;goto B741ec5;
case 0x741ec7:c.instructions+=4;goto B741ec7;
case 0x741ec8:c.instructions+=3;goto B741ec8;
case 0x741eca:c.instructions+=2;goto B741eca;
case 0x741ecc:c.instructions+=1;goto B741ecc;
case 0x741ece:goto L741ece;
case 0x741ecf:c.instructions+=3;goto B741ecf;
case 0x741ed3:c.instructions+=2;goto B741ed3;
case 0x741ed4:c.instructions+=1;goto B741ed4;
case 0x741ed8:goto L741ed8;
case 0x741eda:c.instructions+=2;goto B741eda;
case 0x741edc:c.instructions+=1;goto B741edc;
case 0x741ede:goto L741ede;
case 0x741edf:c.instructions+=1;goto B741edf;
case 0x741ee1:goto L741ee1;
case 0x741ee3:c.instructions+=1;goto B741ee3;
case 0x741ee5:goto L741ee5;
case 0x741ee7:c.instructions+=1;goto B741ee7;
case 0x741ee9:goto L741ee9;
case 0x741eea:c.instructions+=3;goto B741eea;
case 0x741eeb:c.instructions+=2;goto B741eeb;
case 0x741eec:c.instructions+=1;goto B741eec;
case 0x741ef1:goto L741ef1;
case 0x741ef4:c.instructions+=2;goto B741ef4;
case 0x741ef6:c.instructions+=1;goto B741ef6;
case 0x741ef8:goto L741ef8;
case 0x741ef9:goto L741ef9;
case 0x741efc:c.instructions+=1;goto B741efc;
case 0x741efe:goto L741efe;
case 0x741f00:goto L741f00;
case 0x741f03:c.instructions+=3;goto B741f03;
case 0x741f04:c.instructions+=2;goto B741f04;
case 0x741f06:c.instructions+=1;goto B741f06;
case 0x741f08:goto L741f08;
case 0x741f0b:c.instructions+=1;goto B741f0b;
case 0x741f0d:goto L741f0d;
case 0x741f0e:c.instructions+=5;goto B741f0e;
case 0x741f0f:c.instructions+=4;goto B741f0f;
case 0x741f11:c.instructions+=3;goto B741f11;
case 0x741f12:c.instructions+=2;goto B741f12;
case 0x741f13:c.instructions+=1;goto B741f13;
case 0x741f14:goto L741f14;
case 0x741f16:c.instructions+=3;goto B741f16;
case 0x741f17:c.instructions+=2;goto B741f17;
case 0x741f18:c.instructions+=1;goto B741f18;
case 0x741f20:goto L741f20;
case 0x741f21:c.instructions+=12;goto B741f21;
case 0x741f22:c.instructions+=11;goto B741f22;
case 0x741f26:c.instructions+=10;goto B741f26;
case 0x741f28:c.instructions+=9;goto B741f28;
case 0x741f2a:c.instructions+=8;goto B741f2a;
case 0x741f2b:c.instructions+=7;goto B741f2b;
case 0x741f2c:c.instructions+=6;goto B741f2c;
case 0x741f30:c.instructions+=5;goto B741f30;
case 0x741f31:c.instructions+=4;goto B741f31;
case 0x741f35:c.instructions+=3;goto B741f35;
case 0x741f39:c.instructions+=2;goto B741f39;
case 0x741f41:c.instructions+=1;goto B741f41;
case 0x741f43:goto L741f43;
case 0x741f47:goto L741f47;
case 0x741f48:c.instructions+=2;goto B741f48;
case 0x741f4b:c.instructions+=1;goto B741f4b;
case 0x741f4d:goto L741f4d;
case 0x741f4f:c.instructions+=1;goto B741f4f;
case 0x741f51:goto L741f51;
case 0x741f56:c.instructions+=6;goto B741f56;
case 0x741f58:c.instructions+=5;goto B741f58;
case 0x741f5a:c.instructions+=4;goto B741f5a;
case 0x741f5b:c.instructions+=3;goto B741f5b;
case 0x741f5c:c.instructions+=2;goto B741f5c;
case 0x741f5e:c.instructions+=1;goto B741f5e;
case 0x741f60:goto L741f60;
case 0x741f62:c.instructions+=1;goto B741f62;
case 0x741f64:goto L741f64;
case 0x741f67:c.instructions+=3;goto B741f67;
case 0x741f68:c.instructions+=2;goto B741f68;
case 0x741f6a:c.instructions+=1;goto B741f6a;
case 0x741f6c:goto L741f6c;
case 0x741f6e:goto L741f6e;
case 0x741f70:c.instructions+=1;goto B741f70;
case 0x741f72:goto L741f72;
case 0x741f74:c.instructions+=3;goto B741f74;
case 0x741f75:c.instructions+=2;goto B741f75;
case 0x741f76:c.instructions+=1;goto B741f76;
case 0x741f78:goto L741f78;
case 0x741f7a:c.instructions+=2;goto B741f7a;
case 0x741f7c:c.instructions+=1;goto B741f7c;
case 0x741f7e:goto L741f7e;
case 0x741f81:c.instructions+=4;goto B741f81;
case 0x741f82:c.instructions+=3;goto B741f82;
case 0x741f85:c.instructions+=2;goto B741f85;
case 0x741f89:c.instructions+=1;goto B741f89;
case 0x741f8b:goto L741f8b;
case 0x741f8c:c.instructions+=1;goto B741f8c;
case 0x741f8d:goto L741f8d;
case 0x741f8f:c.instructions+=2;goto B741f8f;
case 0x741f92:c.instructions+=1;goto B741f92;
case 0x741f94:goto L741f94;
case 0x741f97:c.instructions+=6;goto B741f97;
case 0x741f9a:c.instructions+=5;goto B741f9a;
case 0x741f9b:c.instructions+=4;goto B741f9b;
case 0x741fa0:c.instructions+=3;goto B741fa0;
case 0x741fa1:c.instructions+=2;goto B741fa1;
case 0x741fa2:c.instructions+=1;goto B741fa2;
case 0x741fa7:goto L741fa7;
case 0x741faa:c.instructions+=2;goto B741faa;
case 0x741fac:c.instructions+=1;goto B741fac;
case 0x741fae:goto L741fae;
case 0x741fb0:c.instructions+=1;goto B741fb0;
case 0x741fb2:goto L741fb2;
case 0x741fb4:c.instructions+=2;goto B741fb4;
case 0x741fb6:c.instructions+=1;goto B741fb6;
case 0x741fb8:goto L741fb8;
case 0x741fba:c.instructions+=1;goto B741fba;
case 0x741fbc:goto L741fbc;
case 0x741fbf:goto L741fbf;
case 0x741fc3:c.instructions+=7;goto B741fc3;
case 0x741fc5:c.instructions+=6;goto B741fc5;
case 0x741fc6:c.instructions+=5;goto B741fc6;
case 0x741fc7:c.instructions+=4;goto B741fc7;
case 0x741fc8:c.instructions+=3;goto B741fc8;
case 0x741fc9:c.instructions+=2;goto B741fc9;
case 0x741fca:c.instructions+=1;goto B741fca;
case 0x741fcb:goto L741fcb;
case 0x741fcd:c.instructions+=1;goto B741fcd;
case 0x741fcf:goto L741fcf;
case 0x741fd2:c.instructions+=6;goto B741fd2;
case 0x741fd5:c.instructions+=5;goto B741fd5;
case 0x741fd6:c.instructions+=4;goto B741fd6;
case 0x741fdb:c.instructions+=3;goto B741fdb;
case 0x741fdc:c.instructions+=2;goto B741fdc;
case 0x741fdd:c.instructions+=1;goto B741fdd;
case 0x741fe2:goto L741fe2;
case 0x741fe4:goto L741fe4;
case 0x741fe6:c.instructions+=1;goto B741fe6;
case 0x741fe8:goto L741fe8;
case 0x741feb:c.instructions+=6;goto B741feb;
case 0x741fee:c.instructions+=5;goto B741fee;
case 0x741fef:c.instructions+=4;goto B741fef;
case 0x741ff4:c.instructions+=3;goto B741ff4;
case 0x741ff5:c.instructions+=2;goto B741ff5;
case 0x741ff6:c.instructions+=1;goto B741ff6;
case 0x741ffb:goto L741ffb;
case 0x741ffd:goto L741ffd;
case 0x741fff:c.instructions+=1;goto B741fff;
default:missing_instruction(c.pc);}
B741002:L741002:{c.instructions+=3;NFSU2_TR(0x741002);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B741004:{NFSU2_TR(0x741004);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741007:{NFSU2_TR(0x741007);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L741033;}}
}
B741009:L741009:{c.instructions+=1;NFSU2_TR(0x741009);
__builtin_memmove((R+16),(R+16),4);
}
B741010:L741010:{c.instructions+=2;NFSU2_TR(0x741010);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x39ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741013:{NFSU2_TR(0x741013);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L741033;}}
}
B741015:L741015:{c.instructions+=2;NFSU2_TR(0x741015);
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
B741017:{NFSU2_TR(0x741017);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741033;}}
}
B741019:L741019:{c.instructions+=12;NFSU2_TR(0x741019);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74101b:{NFSU2_TR(0x74101b);
__builtin_memmove((R+8),(R+4),1);
}
B74101d:{NFSU2_TR(0x74101d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74101f:{NFSU2_TR(0x74101f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B741022:{NFSU2_TR(0x741022);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B741025:{NFSU2_TR(0x741025);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B741028:{NFSU2_TR(0x741028);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741029:{NFSU2_TR(0x741029);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74102b:{NFSU2_TR(0x74102b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74102d:{NFSU2_TR(0x74102d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B74102e:{NFSU2_TR(0x74102e);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741031:{NFSU2_TR(0x741031);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741010u);}goto L741010;}}
}
B741033:L741033:{c.instructions+=2;NFSU2_TR(0x741033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741034:{NFSU2_TR(0x741034);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741040:L741040:{c.instructions+=21;NFSU2_TR(0x741040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741041:{NFSU2_TR(0x741041);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B741043:{NFSU2_TR(0x741043);
w4(R+4,u32(0x15180ull));
}
B741048:{NFSU2_TR(0x741048);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x741048);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x741048);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B74104a:{NFSU2_TR(0x74104a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74104b:{NFSU2_TR(0x74104b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74104c:{NFSU2_TR(0x74104c);
w4(R+4,u32(0x3cull));
}
B741051:{NFSU2_TR(0x741051);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741052:{NFSU2_TR(0x741052);
w4(R+24,u32(0x3cull));
}
B741057:{NFSU2_TR(0x741057);
w4(R+12,u32(0x7b2ull));
}
B74105c:{NFSU2_TR(0x74105c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74105d:{NFSU2_TR(0x74105d);
__builtin_memmove((R+20),(R+0),4);
}
B74105f:{NFSU2_TR(0x74105f);
__builtin_memmove((R+0),(R+8),4);
}
B741061:{NFSU2_TR(0x741061);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741062:{NFSU2_TR(0x741062);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741062);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741062);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B741064:{NFSU2_TR(0x741064);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741068:{NFSU2_TR(0x741068);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B74106a:{NFSU2_TR(0x74106a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74106b:{NFSU2_TR(0x74106b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74106b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74106b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74106d:{NFSU2_TR(0x74106d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741070:{NFSU2_TR(0x741070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741073:L741073:{c.instructions+=2;NFSU2_TR(0x741073);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741076:{NFSU2_TR(0x741076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74109b;}}
}
B741078:L741078:{c.instructions+=6;NFSU2_TR(0x741078);
__builtin_memmove((R+0),(R+12),4);
}
B74107a:{NFSU2_TR(0x74107a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74107b:{NFSU2_TR(0x74107b);
w4(R+24,u32(0x64ull));
}
B741080:{NFSU2_TR(0x741080);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741080);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741080);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B741082:{NFSU2_TR(0x741082);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741084:{NFSU2_TR(0x741084);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741094;}}
}
B741086:L741086:{c.instructions+=6;NFSU2_TR(0x741086);
__builtin_memmove((R+0),(R+12),4);
}
B741088:{NFSU2_TR(0x741088);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741089:{NFSU2_TR(0x741089);
w4(R+24,u32(0x190ull));
}
B74108e:{NFSU2_TR(0x74108e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74108e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74108e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B741090:{NFSU2_TR(0x741090);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741092:{NFSU2_TR(0x741092);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74109b;}}
}
B741094:L741094:{c.instructions+=2;NFSU2_TR(0x741094);
w4(R+0,u32(0x16eull));
}
B741099:{NFSU2_TR(0x741099);
{goto L7410a0;}
}
B74109b:L74109b:{c.instructions+=1;NFSU2_TR(0x74109b);
w4(R+0,u32(0x16dull));
}
B7410a0:L7410a0:{c.instructions+=2;NFSU2_TR(0x7410a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7410a2:{NFSU2_TR(0x7410a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L741147;}}
}
B7410a8:L7410a8:{c.instructions+=10;NFSU2_TR(0x7410a8);
w4(R+0,u32(0xb30f6353ull));
}
B7410ad:{NFSU2_TR(0x7410ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B7410af:{NFSU2_TR(0x7410af);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B7410b1:{NFSU2_TR(0x7410b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7410b4:{NFSU2_TR(0x7410b4);
__builtin_memmove((R+4),(R+8),4);
}
B7410b6:{NFSU2_TR(0x7410b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7410b9:{NFSU2_TR(0x7410b9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7410bb:{NFSU2_TR(0x7410bb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B7410bd:{NFSU2_TR(0x7410bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7410bf:{NFSU2_TR(0x7410bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7410c2;}}
}
B7410c1:L7410c1:{c.instructions+=1;NFSU2_TR(0x7410c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7410c2:L7410c2:{c.instructions+=50;NFSU2_TR(0x7410c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B7410c5:{NFSU2_TR(0x7410c5);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B7410c7:{NFSU2_TR(0x7410c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x16dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7410cd:{NFSU2_TR(0x7410cd);
w4(R+0,u32(0x51eb851full));
}
B7410d2:{NFSU2_TR(0x7410d2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B7410d4:{NFSU2_TR(0x7410d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7410d7:{NFSU2_TR(0x7410d7);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7410d9:{NFSU2_TR(0x7410d9);
__builtin_memmove((R+0),(R+8),4);
}
B7410db:{NFSU2_TR(0x7410db);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7410de:{NFSU2_TR(0x7410de);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7410e0:{NFSU2_TR(0x7410e0);
__builtin_memmove((R+12),(R+0),4);
}
B7410e2:{NFSU2_TR(0x7410e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B7410e5:{NFSU2_TR(0x7410e5);
w4(R+0,u32(0x51eb851full));
}
B7410ea:{NFSU2_TR(0x7410ea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B7410ec:{NFSU2_TR(0x7410ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7410ef:{NFSU2_TR(0x7410ef);
__builtin_memmove((R+0),(R+8),4);
}
B7410f1:{NFSU2_TR(0x7410f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7410f4:{NFSU2_TR(0x7410f4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7410f6:{NFSU2_TR(0x7410f6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B7410f8:{NFSU2_TR(0x7410f8);
w4(R+0,u32(0x51eb851full));
}
B7410fd:{NFSU2_TR(0x7410fd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B7410ff:{NFSU2_TR(0x7410ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B741102:{NFSU2_TR(0x741102);
__builtin_memmove((R+0),(R+8),4);
}
B741104:{NFSU2_TR(0x741104);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B741107:{NFSU2_TR(0x741107);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B741109:{NFSU2_TR(0x741109);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B74110b:{NFSU2_TR(0x74110b);
w4(R+0,u32(0x51eb851full));
}
B741110:{NFSU2_TR(0x741110);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B741112:{NFSU2_TR(0x741112);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B741115:{NFSU2_TR(0x741115);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B741117:{NFSU2_TR(0x741117);
__builtin_memmove((R+0),(R+8),4);
}
B741119:{NFSU2_TR(0x741119);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B74111c:{NFSU2_TR(0x74111c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B74111e:{NFSU2_TR(0x74111e);
__builtin_memmove((R+12),(R+0),4);
}
B741120:{NFSU2_TR(0x741120);
__builtin_memmove((R+0),(R+28),4);
}
B741122:{NFSU2_TR(0x741122);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741123:{NFSU2_TR(0x741123);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B741126:{NFSU2_TR(0x741126);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B741128:{NFSU2_TR(0x741128);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B74112b:{NFSU2_TR(0x74112b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B74112d:{NFSU2_TR(0x74112d);
__builtin_memmove((R+0),(R+24),4);
}
B74112f:{NFSU2_TR(0x74112f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741130:{NFSU2_TR(0x741130);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B741133:{NFSU2_TR(0x741133);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B741135:{NFSU2_TR(0x741135);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B741138:{NFSU2_TR(0x741138);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B74113a:{NFSU2_TR(0x74113a);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B74113c:{NFSU2_TR(0x74113c);
__builtin_memmove((R+12),(R+4),4);
}
B74113e:{NFSU2_TR(0x74113e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741142:{NFSU2_TR(0x741142);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741073u);}goto L741073;}
}
B741147:L741147:{c.instructions+=13;NFSU2_TR(0x741147);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B74114a:{NFSU2_TR(0x74114a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B74114d:{NFSU2_TR(0x74114d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B741150:{NFSU2_TR(0x741150);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffff894ull))));
}
B741156:{NFSU2_TR(0x741156);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B741158:{NFSU2_TR(0x741158);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d27b8ull))));
}
B74115d:{NFSU2_TR(0x74115d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741160:{NFSU2_TR(0x741160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741163:{NFSU2_TR(0x741163);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741166:{NFSU2_TR(0x741166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B741168:{NFSU2_TR(0x741168);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74116a:{NFSU2_TR(0x74116a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74116b:{NFSU2_TR(0x74116b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L741182;}}
}
B74116d:L74116d:{c.instructions+=1;NFSU2_TR(0x74116d);
__builtin_memmove((R+4),(R+4),4);
}
B741170:L741170:{c.instructions+=8;NFSU2_TR(0x741170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B741173:{NFSU2_TR(0x741173);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B741175:{NFSU2_TR(0x741175);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B741178:{NFSU2_TR(0x741178);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B741179:{NFSU2_TR(0x741179);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74117c:{NFSU2_TR(0x74117c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74117e:{NFSU2_TR(0x74117e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B741180:{NFSU2_TR(0x741180);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741170u);}goto L741170;}}
}
B741182:L741182:{c.instructions+=9;NFSU2_TR(0x741182);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741183:{NFSU2_TR(0x741183);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741186:{NFSU2_TR(0x741186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741187:{NFSU2_TR(0x741187);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74118a:{NFSU2_TR(0x74118a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74118b:{NFSU2_TR(0x74118b);
__builtin_memmove((R+0),(R+4),4);
}
B74118d:{NFSU2_TR(0x74118d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74118e:{NFSU2_TR(0x74118e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74118f:{NFSU2_TR(0x74118f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741190:L741190:{c.instructions+=8;NFSU2_TR(0x741190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B741193:{NFSU2_TR(0x741193);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741194:{NFSU2_TR(0x741194);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741195:{NFSU2_TR(0x741195);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B741199:{NFSU2_TR(0x741199);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74119a:{NFSU2_TR(0x74119a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74119b:{NFSU2_TR(0x74119b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B74119d:{NFSU2_TR(0x74119d);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B7411a0:L7411a0:{c.instructions+=13;NFSU2_TR(0x7411a0);
__builtin_memmove((R+24),(R+12),4);
}
B7411a2:{NFSU2_TR(0x7411a2);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+28))));
}
B7411a4:{NFSU2_TR(0x7411a4);
__builtin_memmove((R+0),(R+12),4);
}
B7411a6:{NFSU2_TR(0x7411a6);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7411a8:{NFSU2_TR(0x7411a8);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
}
B7411ab:{NFSU2_TR(0x7411ab);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7411ad:{NFSU2_TR(0x7411ad);
__builtin_memmove((R+4),(R+28),4);
}
B7411af:{NFSU2_TR(0x7411af);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7411b1:{NFSU2_TR(0x7411b1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B7411b3:{NFSU2_TR(0x7411b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7411b7:{NFSU2_TR(0x7411b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7411b8:{NFSU2_TR(0x7411b8);
__builtin_memmove((R+0),(R+24),4);
}
B7411ba:{NFSU2_TR(0x7411ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7411bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741040u);}goto L741040;}
}
B7411bf:L7411bf:{c.instructions+=5;NFSU2_TR(0x7411bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7411c3:{NFSU2_TR(0x7411c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7411c6:{NFSU2_TR(0x7411c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7411c9:{NFSU2_TR(0x7411c9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7411cb:{NFSU2_TR(0x7411cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7411fa;}}
}
B7411cd:L7411cd:{c.instructions+=3;NFSU2_TR(0x7411cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7411d1:{NFSU2_TR(0x7411d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7411d4:{NFSU2_TR(0x7411d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7411fa;}}
}
B7411d6:L7411d6:{c.instructions+=3;NFSU2_TR(0x7411d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7411da:{NFSU2_TR(0x7411da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7411dd:{NFSU2_TR(0x7411dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7411fa;}}
}
B7411df:L7411df:{c.instructions+=3;NFSU2_TR(0x7411df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7411e3:{NFSU2_TR(0x7411e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7411e6:{NFSU2_TR(0x7411e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7411fa;}}
}
B7411e8:L7411e8:{c.instructions+=3;NFSU2_TR(0x7411e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7411ec:{NFSU2_TR(0x7411ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7411ef:{NFSU2_TR(0x7411ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7411fa;}}
}
B7411f1:L7411f1:{c.instructions+=3;NFSU2_TR(0x7411f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7411f5:{NFSU2_TR(0x7411f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7411f8:{NFSU2_TR(0x7411f8);
if(r1(R+518)){{goto L74120a;}}
}
B7411fa:L7411fa:{c.instructions+=2;NFSU2_TR(0x7411fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7411fc:{NFSU2_TR(0x7411fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741203;}}
}
B7411fe:L7411fe:{c.instructions+=2;NFSU2_TR(0x7411fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B741201:{NFSU2_TR(0x741201);
{goto L741206;}
}
B741203:L741203:{c.instructions+=1;NFSU2_TR(0x741203);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741206:L741206:{c.instructions+=2;NFSU2_TR(0x741206);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741208:{NFSU2_TR(0x741208);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7411a0u);}goto L7411a0;}}
}
B74120a:L74120a:{c.instructions+=12;NFSU2_TR(0x74120a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74120c:{NFSU2_TR(0x74120c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74120e:{NFSU2_TR(0x74120e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B741211:{NFSU2_TR(0x741211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741212:{NFSU2_TR(0x741212);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B741213:{NFSU2_TR(0x741213);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B741215:{NFSU2_TR(0x741215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741216:{NFSU2_TR(0x741216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741217:{NFSU2_TR(0x741217);
__builtin_memmove((R+0),(R+4),4);
}
B741219:{NFSU2_TR(0x741219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74121a:{NFSU2_TR(0x74121a);
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
B74121d:{NFSU2_TR(0x74121d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741220:L741220:{c.instructions+=11;NFSU2_TR(0x741220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741221:{NFSU2_TR(0x741221);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B741225:{NFSU2_TR(0x741225);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741226:{NFSU2_TR(0x741226);
__builtin_memmove((R+24),(R+0),4);
}
B741228:{NFSU2_TR(0x741228);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74122a:{NFSU2_TR(0x74122a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74122c:{NFSU2_TR(0x74122c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74122e:{NFSU2_TR(0x74122e);
w1(R+512,u8((r1(R+0))<(u8(0x80ull))));
}
B741230:{NFSU2_TR(0x741230);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741231:{NFSU2_TR(0x741231);
__builtin_memmove((R+28),(R+12),4);
}
B741233:{NFSU2_TR(0x741233);
if(r1(R+512)){{goto L74125c;}}
}
B741235:L741235:{c.instructions+=2;NFSU2_TR(0x741235);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741237:{NFSU2_TR(0x741237);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74125c;}}
}
B741239:L741239:{c.instructions+=9;NFSU2_TR(0x741239);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74123b:{NFSU2_TR(0x74123b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74123d:{NFSU2_TR(0x74123d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B741240:{NFSU2_TR(0x741240);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B741242:{NFSU2_TR(0x741242);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7ull))));
}
B741245:{NFSU2_TR(0x741245);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B741247:{NFSU2_TR(0x741247);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741248:{NFSU2_TR(0x741248);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74124b:{NFSU2_TR(0x74124b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L741257;}}
}
B74124d:L74124d:{c.instructions+=5;NFSU2_TR(0x74124d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B74124f:{NFSU2_TR(0x74124f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741250:{NFSU2_TR(0x741250);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B741253:{NFSU2_TR(0x741253);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B741256:{NFSU2_TR(0x741256);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B741257:L741257:{c.instructions+=2;NFSU2_TR(0x741257);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x80ull))));
}
B74125a:{NFSU2_TR(0x74125a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741235u);}goto L741235;}}
}
B74125c:L74125c:{c.instructions+=6;NFSU2_TR(0x74125c);
__builtin_memmove((R+0),(R+28),4);
}
B74125e:{NFSU2_TR(0x74125e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74125f:{NFSU2_TR(0x74125f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741260:{NFSU2_TR(0x741260);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741262:{NFSU2_TR(0x741262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741263:{NFSU2_TR(0x741263);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741270:L741270:{c.instructions+=3;NFSU2_TR(0x741270);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741274:{NFSU2_TR(0x741274);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741276:{NFSU2_TR(0x741276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74127c;}}
}
B741278:L741278:{c.instructions+=2;NFSU2_TR(0x741278);
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
B74127b:{NFSU2_TR(0x74127b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74127c:L74127c:{c.instructions+=4;NFSU2_TR(0x74127c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741280:{NFSU2_TR(0x741280);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741282:{NFSU2_TR(0x741282);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741283:{NFSU2_TR(0x741283);
if(r1(R+518)){{goto L741490;}}
}
B741289:L741289:{c.instructions+=3;NFSU2_TR(0x741289);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B74128b:{NFSU2_TR(0x74128b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74128e:{NFSU2_TR(0x74128e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741490;}}
}
B741294:L741294:{c.instructions+=6;NFSU2_TR(0x741294);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B741297:{NFSU2_TR(0x741297);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B741299:{NFSU2_TR(0x741299);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74129a:{NFSU2_TR(0x74129a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74129b:{NFSU2_TR(0x74129b);
__builtin_memmove((R+0),(R+8),4);
}
B74129d:{NFSU2_TR(0x74129d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7412e2;}}
}
B74129f:L74129f:{c.instructions+=2;NFSU2_TR(0x74129f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7412a1:{NFSU2_TR(0x7412a1);
if(r1(R+518)){{goto L7412d9;}}
}
B7412a3:L7412a3:{c.instructions+=4;NFSU2_TR(0x7412a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7412a6:{NFSU2_TR(0x7412a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7412a7:{NFSU2_TR(0x7412a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7412a9:{NFSU2_TR(0x7412a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412a3u);}goto L7412a3;}}
}
B7412ab:L7412ab:{c.instructions+=2;NFSU2_TR(0x7412ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7412ad:{NFSU2_TR(0x7412ad);
if(r1(R+518)){{goto L7412d9;}}
}
B7412af:L7412af:{c.instructions+=3;NFSU2_TR(0x7412af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7412b2:{NFSU2_TR(0x7412b2);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B7412b5:{NFSU2_TR(0x7412b5);
if(r1(R+512)){{goto L7412d9;}}
}
B7412b7:L7412b7:{c.instructions+=5;NFSU2_TR(0x7412b7);
w4(R+24,u32(r1(R+4)));
}
B7412ba:{NFSU2_TR(0x7412ba);
__builtin_memmove((R+4),gp(0x819b60),1);
}
B7412c0:{NFSU2_TR(0x7412c0);
w4(R+28,u32(s32(s8(r1(R+4)))));
}
B7412c3:{NFSU2_TR(0x7412c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7412c5:{NFSU2_TR(0x7412c5);
if(r1(R+518)){{goto L7412d9;}}
}
B7412c7:L7412c7:{c.instructions+=4;NFSU2_TR(0x7412c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7412cb:{NFSU2_TR(0x7412cb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B7412cf:{NFSU2_TR(0x7412cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B7412d1:{NFSU2_TR(0x7412d1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7412d9;}}
}
B7412d3:L7412d3:{c.instructions+=3;NFSU2_TR(0x7412d3);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7412d5:{NFSU2_TR(0x7412d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7412d6:{NFSU2_TR(0x7412d6);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7412d9:L7412d9:{c.instructions+=3;NFSU2_TR(0x7412d9);
__builtin_memmove((R+4),(R+0),4);
}
B7412db:{NFSU2_TR(0x7412db);
__builtin_memmove((R+12),(R+0),4);
}
B7412dd:{NFSU2_TR(0x7412dd);
{goto L7413c3;}
}
B7412e2:L7412e2:{c.instructions+=2;NFSU2_TR(0x7412e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7412e4:{NFSU2_TR(0x7412e4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412d9u);}goto L7412d9;}}
}
B7412e6:L7412e6:{c.instructions+=3;NFSU2_TR(0x7412e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7412e8:{NFSU2_TR(0x7412e8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7412eb:{NFSU2_TR(0x7412eb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L7412f0;}}
}
B7412ed:L7412ed:{c.instructions+=2;NFSU2_TR(0x7412ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7412ee:{NFSU2_TR(0x7412ee);
{goto L74135d;}
}
B7412f0:L7412f0:{c.instructions+=3;NFSU2_TR(0x7412f0);
w4(R+4,u32(r1(R+4)));
}
B7412f3:{NFSU2_TR(0x7412f3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7412fa:{NFSU2_TR(0x7412fa);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412d9u);}goto L7412d9;}}
}
B7412fc:L7412fc:{c.instructions+=6;NFSU2_TR(0x7412fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B7412ff:{NFSU2_TR(0x7412ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B741305:{NFSU2_TR(0x741305);
w4(R+8,u32(s32(s8(r1(R+12)))));
}
B741308:{NFSU2_TR(0x741308);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74130e:{NFSU2_TR(0x74130e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B741310:{NFSU2_TR(0x741310);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74133f;}}
}
B741312:L741312:{c.instructions+=4;NFSU2_TR(0x741312);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741316:{NFSU2_TR(0x741316);
__builtin_memmove((R+28),(R+0),4);
}
B741318:{NFSU2_TR(0x741318);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B74131a:{NFSU2_TR(0x74131a);
__builtin_memmove((R+12),(R+12),4);
}
B741320:L741320:{c.instructions+=2;NFSU2_TR(0x741320);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x2ull))));
}
B741323:{NFSU2_TR(0x741323);
if(r1(R+512)){{goto L74133f;}}
}
B741325:L741325:{c.instructions+=7;NFSU2_TR(0x741325);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B74132a:{NFSU2_TR(0x74132a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B74132e:{NFSU2_TR(0x74132e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B741334:{NFSU2_TR(0x741334);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74133a:{NFSU2_TR(0x74133a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74133b:{NFSU2_TR(0x74133b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74133d:{NFSU2_TR(0x74133d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741320u);}goto L741320;}}
}
B74133f:L74133f:{c.instructions+=5;NFSU2_TR(0x74133f);
w4(R+8,u32(r1(R+8)));
}
B741342:{NFSU2_TR(0x741342);
w4(R+4,u32(r1(R+4)));
}
B741345:{NFSU2_TR(0x741345);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B741347:{NFSU2_TR(0x741347);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74134a:{NFSU2_TR(0x74134a);
if(r1(R+518)){{goto L7413a6;}}
}
B74134c:L74134c:{c.instructions+=1;NFSU2_TR(0x74134c);
__builtin_memmove((R+16),(R+16),4);
}
B741350:L741350:{c.instructions+=4;NFSU2_TR(0x741350);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B741353:{NFSU2_TR(0x741353);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741354:{NFSU2_TR(0x741354);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B741357:{NFSU2_TR(0x741357);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741350u);}goto L741350;}}
}
B741359:L741359:{c.instructions+=1;NFSU2_TR(0x741359);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74135d:L74135d:{c.instructions+=2;NFSU2_TR(0x74135d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B741360:{NFSU2_TR(0x741360);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412e6u);}goto L7412e6;}}
}
B741362:L741362:{c.instructions+=2;NFSU2_TR(0x741362);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741364:{NFSU2_TR(0x741364);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412d9u);}goto L7412d9;}}
}
B74136a:L74136a:{c.instructions+=3;NFSU2_TR(0x74136a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74136d:{NFSU2_TR(0x74136d);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B741370:{NFSU2_TR(0x741370);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412d9u);}goto L7412d9;}}
}
B741376:L741376:{c.instructions+=5;NFSU2_TR(0x741376);
w4(R+24,u32(r1(R+4)));
}
B741379:{NFSU2_TR(0x741379);
__builtin_memmove((R+4),gp(0x819b60),1);
}
B74137f:{NFSU2_TR(0x74137f);
w4(R+28,u32(s32(s8(r1(R+4)))));
}
B741382:{NFSU2_TR(0x741382);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741384:{NFSU2_TR(0x741384);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412d9u);}goto L7412d9;}}
}
B74138a:L74138a:{c.instructions+=4;NFSU2_TR(0x74138a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74138e:{NFSU2_TR(0x74138e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B741392:{NFSU2_TR(0x741392);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B741394:{NFSU2_TR(0x741394);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7412d9u);}goto L7412d9;}}
}
B74139a:L74139a:{c.instructions+=6;NFSU2_TR(0x74139a);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B74139c:{NFSU2_TR(0x74139c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74139d:{NFSU2_TR(0x74139d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7413a0:{NFSU2_TR(0x7413a0);
__builtin_memmove((R+4),(R+0),4);
}
B7413a2:{NFSU2_TR(0x7413a2);
__builtin_memmove((R+12),(R+0),4);
}
B7413a4:{NFSU2_TR(0x7413a4);
{goto L7413c3;}
}
B7413a6:L7413a6:{c.instructions+=4;NFSU2_TR(0x7413a6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x20ull))));
}
B7413a9:{NFSU2_TR(0x7413a9);
__builtin_memmove((R+4),(R+0),4);
}
B7413ab:{NFSU2_TR(0x7413ab);
__builtin_memmove((R+12),(R+0),4);
}
B7413ad:{NFSU2_TR(0x7413ad);
if(r1(R+512)){{goto L7413b9;}}
}
B7413af:L7413af:{c.instructions+=1;NFSU2_TR(0x7413af);
}
B7413b0:L7413b0:{c.instructions+=4;NFSU2_TR(0x7413b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7413b3:{NFSU2_TR(0x7413b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7413b4:{NFSU2_TR(0x7413b4);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B7413b7:{NFSU2_TR(0x7413b7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7413b0u);}goto L7413b0;}}
}
B7413b9:L7413b9:{c.instructions+=3;NFSU2_TR(0x7413b9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x0ull))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7413bc:{NFSU2_TR(0x7413bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7413c0:{NFSU2_TR(0x7413c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7413c3;}}
}
B7413c2:L7413c2:{c.instructions+=1;NFSU2_TR(0x7413c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7413c3:L7413c3:{c.instructions+=5;NFSU2_TR(0x7413c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7413c7:{NFSU2_TR(0x7413c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7413c8:{NFSU2_TR(0x7413c8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7413ca:{NFSU2_TR(0x7413ca);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x20ull))));
}
B7413cd:{NFSU2_TR(0x7413cd);
if(r1(R+512)){{goto L7413d7;}}
}
B7413cf:L7413cf:{c.instructions+=1;NFSU2_TR(0x7413cf);
}
B7413d0:L7413d0:{c.instructions+=3;NFSU2_TR(0x7413d0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B7413d1:{NFSU2_TR(0x7413d1);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(R+512,u8((r1(U+9))<(u8(0x20ull))));
}
B7413d5:{NFSU2_TR(0x7413d5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7413d0u);}goto L7413d0;}}
}
B7413d7:L7413d7:{c.instructions+=7;NFSU2_TR(0x7413d7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B7413d8:{NFSU2_TR(0x7413d8);
__builtin_memmove((R+24),(R+20),4);
}
B7413da:{NFSU2_TR(0x7413da);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B7413dc:{NFSU2_TR(0x7413dc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7413de:{NFSU2_TR(0x7413de);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7413e1:{NFSU2_TR(0x7413e1);
__builtin_memmove((R+28),(R+4),4);
}
B7413e3:{NFSU2_TR(0x7413e3);
if(r1(R+518)){{goto L7413ed;}}
}
B7413e5:L7413e5:{c.instructions+=4;NFSU2_TR(0x7413e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7413e8:{NFSU2_TR(0x7413e8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7413e9:{NFSU2_TR(0x7413e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7413eb:{NFSU2_TR(0x7413eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7413e5u);}goto L7413e5;}}
}
B7413ed:L7413ed:{c.instructions+=3;NFSU2_TR(0x7413ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7413ee:{NFSU2_TR(0x7413ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7413f0:{NFSU2_TR(0x7413f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741408;}}
}
B7413f2:L7413f2:{c.instructions+=5;NFSU2_TR(0x7413f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7413f6:{NFSU2_TR(0x7413f6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7413f8:{NFSU2_TR(0x7413f8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7413fa:{NFSU2_TR(0x7413fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7413fc:{NFSU2_TR(0x7413fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L741406;}}
}
B7413fe:L7413fe:{c.instructions+=6;NFSU2_TR(0x7413fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7413ff:{NFSU2_TR(0x7413ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741400:{NFSU2_TR(0x741400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741401:{NFSU2_TR(0x741401);
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
B741404:{NFSU2_TR(0x741404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741405:{NFSU2_TR(0x741405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741406:L741406:{c.instructions+=1;NFSU2_TR(0x741406);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741408:L741408:{c.instructions+=1;NFSU2_TR(0x741408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74141f;}}
}
B74140a:L74140a:{c.instructions+=4;NFSU2_TR(0x74140a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74140e:{NFSU2_TR(0x74140e);
__builtin_memmove((R+4),(R+20),4);
}
B741410:{NFSU2_TR(0x741410);
__builtin_memmove((R+24),(R+12),4);
}
B741412:{NFSU2_TR(0x741412);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B741414:L741414:{c.instructions+=1;NFSU2_TR(0x741414);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L741416;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741414u);}goto L741414;}}
}
B741416:L741416:{c.instructions+=1;NFSU2_TR(0x741416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74144d;}}
}
B741418:L741418:{c.instructions+=6;NFSU2_TR(0x741418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741419:{NFSU2_TR(0x741419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74141a:{NFSU2_TR(0x74141a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74141b:{NFSU2_TR(0x74141b);
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
B74141d:{NFSU2_TR(0x74141d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74141e:{NFSU2_TR(0x74141e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74141f:L74141f:{c.instructions+=2;NFSU2_TR(0x74141f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741421:{NFSU2_TR(0x741421);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741436;}}
}
B741423:L741423:{c.instructions+=7;NFSU2_TR(0x741423);
__builtin_memmove((R+0),(R+28),4);
}
B741425:{NFSU2_TR(0x741425);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B741427:{NFSU2_TR(0x741427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741428:{NFSU2_TR(0x741428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741429:{NFSU2_TR(0x741429);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B74142b:{NFSU2_TR(0x74142b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74142c:{NFSU2_TR(0x74142c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741431ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B741431:L741431:{c.instructions+=2;NFSU2_TR(0x741431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741434:{NFSU2_TR(0x741434);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B741436:L741436:{c.instructions+=1;NFSU2_TR(0x741436);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74144d;}}
}
B741438:L741438:{c.instructions+=9;NFSU2_TR(0x741438);
__builtin_memmove((R+8),(R+24),4);
}
B74143a:{NFSU2_TR(0x74143a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B74143c:{NFSU2_TR(0x74143c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B74143e:{NFSU2_TR(0x74143e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74143f:{NFSU2_TR(0x74143f);
__builtin_memmove((R+0),(R+12),4);
}
B741441:{NFSU2_TR(0x741441);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B741443:{NFSU2_TR(0x741443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741444:{NFSU2_TR(0x741444);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741445:{NFSU2_TR(0x741445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74144aull));
TAIL_STATIC(0x75cfd0u,75c);
}
B74144a:L74144a:{c.instructions+=1;NFSU2_TR(0x74144a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74144d:L74144d:{c.instructions+=5;NFSU2_TR(0x74144d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741451:{NFSU2_TR(0x741451);
__builtin_memmove((R+4),(R+20),4);
}
B741453:{NFSU2_TR(0x741453);
__builtin_memmove((R+8),(R+4),4);
}
B741455:{NFSU2_TR(0x741455);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B741458:{NFSU2_TR(0x741458);
__builtin_memmove((R+28),(R+12),4);
}
B74145a:L74145a:{c.instructions+=1;NFSU2_TR(0x74145a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74145c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74145au);}goto L74145a;}
}
B74145c:L74145c:{c.instructions+=2;NFSU2_TR(0x74145c);
__builtin_memmove((R+4),(R+8),4);
}
B74145e:{NFSU2_TR(0x74145e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B741461:L741461:{c.instructions+=1;NFSU2_TR(0x741461);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L741463;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741461u);}goto L741461;}
}
B741463:L741463:{c.instructions+=2;NFSU2_TR(0x741463);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x0ull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B741467:{NFSU2_TR(0x741467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74147f;}}
}
B741469:L741469:{c.instructions+=2;NFSU2_TR(0x741469);
u8 U[5];
__builtin_memmove((U+3),gp(0x819b60),1);
w1(R+512,u8((r1(U+3))<(u8(0xaull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xaull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xaull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741470:{NFSU2_TR(0x741470);
if(r1(R+518)){{goto L74147f;}}
}
B741472:L741472:{c.instructions+=7;NFSU2_TR(0x741472);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B741477:{NFSU2_TR(0x741477);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B74147a:{NFSU2_TR(0x74147a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74147b:{NFSU2_TR(0x74147b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74147c:{NFSU2_TR(0x74147c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74147d:{NFSU2_TR(0x74147d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74147e:{NFSU2_TR(0x74147e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74147f:L74147f:{c.instructions+=8;NFSU2_TR(0x74147f);
__builtin_memmove((R+0),gp(0x819b60),1);
}
B741484:{NFSU2_TR(0x741484);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B741488:{NFSU2_TR(0x741488);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B74148b:{NFSU2_TR(0x74148b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74148c:{NFSU2_TR(0x74148c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74148d:{NFSU2_TR(0x74148d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74148e:{NFSU2_TR(0x74148e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74148f:{NFSU2_TR(0x74148f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741490:L741490:{c.instructions+=3;NFSU2_TR(0x741490);
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
B741493:{NFSU2_TR(0x741493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741494:{NFSU2_TR(0x741494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7414a0:L7414a0:{c.instructions+=4;NFSU2_TR(0x7414a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7414a1:{NFSU2_TR(0x7414a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7414a5:{NFSU2_TR(0x7414a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7414a7:{NFSU2_TR(0x7414a7);
if(r1(R+518)){{goto L741564;}}
}
B7414ad:L7414ad:{c.instructions+=3;NFSU2_TR(0x7414ad);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7414af:{NFSU2_TR(0x7414af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7414b1:{NFSU2_TR(0x7414b1);
if(r1(R+518)){{goto L741564;}}
}
B7414b7:L7414b7:{c.instructions+=3;NFSU2_TR(0x7414b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7414bb:{NFSU2_TR(0x7414bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7414bd:{NFSU2_TR(0x7414bd);
if(r1(R+518)){{goto L741564;}}
}
B7414c3:L7414c3:{c.instructions+=2;NFSU2_TR(0x7414c3);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7414c6:{NFSU2_TR(0x7414c6);
if(r1(R+518)){{goto L741564;}}
}
B7414cc:L7414cc:{c.instructions+=3;NFSU2_TR(0x7414cc);
__builtin_memmove((R+4),(R+8),4);
}
B7414ce:{NFSU2_TR(0x7414ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7414cf:{NFSU2_TR(0x7414cf);
}
B7414d0:L7414d0:{c.instructions+=4;NFSU2_TR(0x7414d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7414d3:{NFSU2_TR(0x7414d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7414d4:{NFSU2_TR(0x7414d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7414d6:{NFSU2_TR(0x7414d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7414d0u);}goto L7414d0;}}
}
B7414d8:L7414d8:{c.instructions+=7;NFSU2_TR(0x7414d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7414d9:{NFSU2_TR(0x7414d9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7414da:{NFSU2_TR(0x7414da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7414db:{NFSU2_TR(0x7414db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7414df:{NFSU2_TR(0x7414df);
__builtin_memmove((R+20),(R+28),4);
}
B7414e1:{NFSU2_TR(0x7414e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B7414e4:{NFSU2_TR(0x7414e4);
{goto L7414f0;}
}
B7414e6:L7414e6:{c.instructions+=2;NFSU2_TR(0x7414e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7414ea:{NFSU2_TR(0x7414ea);
__builtin_memmove((R+12),(R+12),4);
}
B7414f0:L7414f0:{c.instructions+=2;NFSU2_TR(0x7414f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7414f2:{NFSU2_TR(0x7414f2);
if(r1(R+518)){{goto L7414f8;}}
}
B7414f4:L7414f4:{c.instructions+=2;NFSU2_TR(0x7414f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7414f6:{NFSU2_TR(0x7414f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741541;}}
}
B7414f8:L7414f8:{c.instructions+=2;NFSU2_TR(0x7414f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x20ull))));
}
B7414fc:{NFSU2_TR(0x7414fc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L741503;}}
}
B7414fe:L7414fe:{c.instructions+=2;NFSU2_TR(0x7414fe);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x20ull))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B741501:{NFSU2_TR(0x741501);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74154a;}}
}
B741503:L741503:{c.instructions+=3;NFSU2_TR(0x741503);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B741505:{NFSU2_TR(0x741505);
__builtin_memmove((R+0),(R+24),4);
}
B741507:{NFSU2_TR(0x741507);
if(r1(R+512)){{goto L741541;}}
}
B741509:L741509:{c.instructions+=3;NFSU2_TR(0x741509);
__builtin_memmove((R+12),(R+24),4);
}
B74150b:{NFSU2_TR(0x74150b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B74150d:{NFSU2_TR(0x74150d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B741511:L741511:{c.instructions+=2;NFSU2_TR(0x741511);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B741513:{NFSU2_TR(0x741513);
if(r1(R+512)){{goto L741541;}}
}
B741515:L741515:{c.instructions+=6;NFSU2_TR(0x741515);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B741518:{NFSU2_TR(0x741518);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B74151b:{NFSU2_TR(0x74151b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741521:{NFSU2_TR(0x741521);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7d2498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B741527:{NFSU2_TR(0x741527);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74152b:{NFSU2_TR(0x74152b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741541;}}
}
B74152d:L74152d:{c.instructions+=2;NFSU2_TR(0x74152d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74152f:{NFSU2_TR(0x74152f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74153b;}}
}
B741531:L741531:{c.instructions+=2;NFSU2_TR(0x741531);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741533:{NFSU2_TR(0x741533);
if(r1(R+518)){{goto L741551;}}
}
B741535:L741535:{c.instructions+=2;NFSU2_TR(0x741535);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x20ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B741539:{NFSU2_TR(0x741539);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741551;}}
}
B74153b:L74153b:{c.instructions+=4;NFSU2_TR(0x74153b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B74153c:{NFSU2_TR(0x74153c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B74153d:{NFSU2_TR(0x74153d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B74153f:{NFSU2_TR(0x74153f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741511u);}goto L741511;}}
}
B741541:L741541:{c.instructions+=5;NFSU2_TR(0x741541);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741544:{NFSU2_TR(0x741544);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B741545:{NFSU2_TR(0x741545);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741546:{NFSU2_TR(0x741546);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741548:{NFSU2_TR(0x741548);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7414e6u);}goto L7414e6;}}
}
B74154a:L74154a:{c.instructions+=1;NFSU2_TR(0x74154a);
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
B74154c:L74154c:{c.instructions+=5;NFSU2_TR(0x74154c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74154d:{NFSU2_TR(0x74154d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74154e:{NFSU2_TR(0x74154e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74154f:{NFSU2_TR(0x74154f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741550:{NFSU2_TR(0x741550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741551:L741551:{c.instructions+=4;NFSU2_TR(0x741551);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B741554:{NFSU2_TR(0x741554);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x20ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x20ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741557:{NFSU2_TR(0x741557);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74155a:{NFSU2_TR(0x74155a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74154cu);}goto L74154c;}}
}
B74155c:L74155c:{c.instructions+=6;NFSU2_TR(0x74155c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74155d:{NFSU2_TR(0x74155d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B741560:{NFSU2_TR(0x741560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741561:{NFSU2_TR(0x741561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741562:{NFSU2_TR(0x741562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741563:{NFSU2_TR(0x741563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741564:L741564:{c.instructions+=3;NFSU2_TR(0x741564);
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
B741566:{NFSU2_TR(0x741566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741567:{NFSU2_TR(0x741567);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741570:L741570:{c.instructions+=11;NFSU2_TR(0x741570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B741576:{NFSU2_TR(0x741576);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74157b:{NFSU2_TR(0x74157b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741582:{NFSU2_TR(0x741582);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741589:{NFSU2_TR(0x741589);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741590:{NFSU2_TR(0x741590);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741591:{NFSU2_TR(0x741591);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741592:{NFSU2_TR(0x741592);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B741596:{NFSU2_TR(0x741596);
u8 U[4];
w4(U+0,u32(0x78f6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74159b:{NFSU2_TR(0x74159b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74159c:{NFSU2_TR(0x74159c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7415a1ull));
TAIL_STATIC(0x75c784u,75c);
}
B7415a1:L7415a1:{c.instructions+=5;NFSU2_TR(0x7415a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7415a8:{NFSU2_TR(0x7415a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7415ac:{NFSU2_TR(0x7415ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7415ad:{NFSU2_TR(0x7415ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7415ae:{NFSU2_TR(0x7415ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7415b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7414a0u);}goto L7414a0;}
}
B7415b3:L7415b3:{c.instructions+=2;NFSU2_TR(0x7415b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7415ba:{NFSU2_TR(0x7415ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7415bfull));
TAIL_STATIC(0x76115eu,761);
}
B7415bf:L7415bf:{c.instructions+=2;NFSU2_TR(0x7415bf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x11cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7415c5:{NFSU2_TR(0x7415c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7415d0:L7415d0:{c.instructions+=6;NFSU2_TR(0x7415d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7415d4:{NFSU2_TR(0x7415d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7415d5:{NFSU2_TR(0x7415d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7415d9:{NFSU2_TR(0x7415d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7415da:{NFSU2_TR(0x7415da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7415db:{NFSU2_TR(0x7415db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7415e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7414a0u);}goto L7414a0;}
}
B7415e0:L7415e0:{c.instructions+=3;NFSU2_TR(0x7415e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7415e3:{NFSU2_TR(0x7415e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7415e5:{NFSU2_TR(0x7415e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7415ec;}}
}
B7415e7:L7415e7:{c.instructions+=3;NFSU2_TR(0x7415e7);
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
B7415ea:{NFSU2_TR(0x7415ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7415eb:{NFSU2_TR(0x7415eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7415ec:L7415ec:{c.instructions+=5;NFSU2_TR(0x7415ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7415ee:{NFSU2_TR(0x7415ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7415ef:{NFSU2_TR(0x7415ef);
__builtin_memmove((R+4),(R+0),4);
}
B7415f1:{NFSU2_TR(0x7415f1);
w1(R+12,u8(0x20ull));
}
B7415f3:{NFSU2_TR(0x7415f3);
if(r1(R+518)){{goto L7415ff;}}
}
B7415f5:L7415f5:{c.instructions+=2;NFSU2_TR(0x7415f5);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7415f8:{NFSU2_TR(0x7415f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7415ff;}}
}
B7415fa:L7415fa:{c.instructions+=3;NFSU2_TR(0x7415fa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7415fb:{NFSU2_TR(0x7415fb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7415fd:{NFSU2_TR(0x7415fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7415f5u);}goto L7415f5;}}
}
B7415ff:L7415ff:{c.instructions+=2;NFSU2_TR(0x7415ff);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(r1(R+12))));
}
B741601:{NFSU2_TR(0x741601);
if(r1(R+512)){{goto L74160b;}}
}
B741603:L741603:{c.instructions+=4;NFSU2_TR(0x741603);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741606:{NFSU2_TR(0x741606);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741607:{NFSU2_TR(0x741607);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
}
B741609:{NFSU2_TR(0x741609);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741603u);}goto L741603;}}
}
B74160b:L74160b:{c.instructions+=3;NFSU2_TR(0x74160b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74160d:{NFSU2_TR(0x74160d);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74160f:{NFSU2_TR(0x74160f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74161d;}}
}
B741611:L741611:{c.instructions+=2;NFSU2_TR(0x741611);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
}
B741613:{NFSU2_TR(0x741613);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74161d;}}
}
B741615:L741615:{c.instructions+=4;NFSU2_TR(0x741615);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741618:{NFSU2_TR(0x741618);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741619:{NFSU2_TR(0x741619);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74161b:{NFSU2_TR(0x74161b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741611u);}goto L741611;}}
}
B74161d:L74161d:{c.instructions+=3;NFSU2_TR(0x74161d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74161f:{NFSU2_TR(0x74161f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741621:{NFSU2_TR(0x741621);
if(r1(R+518)){{goto L74162e;}}
}
B741623:L741623:{c.instructions+=6;NFSU2_TR(0x741623);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741625:{NFSU2_TR(0x741625);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741628:{NFSU2_TR(0x741628);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741629:{NFSU2_TR(0x741629);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74162a:{NFSU2_TR(0x74162a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74162c:{NFSU2_TR(0x74162c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741623u);}goto L741623;}}
}
B74162e:L74162e:{c.instructions+=2;NFSU2_TR(0x74162e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741630:{NFSU2_TR(0x741630);
if(r1(R+518)){{goto L74163c;}}
}
B741632:L741632:{c.instructions+=2;NFSU2_TR(0x741632);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B741635:{NFSU2_TR(0x741635);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74163c;}}
}
B741637:L741637:{c.instructions+=3;NFSU2_TR(0x741637);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B741638:{NFSU2_TR(0x741638);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74163a:{NFSU2_TR(0x74163a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741632u);}goto L741632;}}
}
B74163c:L74163c:{c.instructions+=5;NFSU2_TR(0x74163c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74163d:{NFSU2_TR(0x74163d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B741640:{NFSU2_TR(0x741640);
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
B741642:{NFSU2_TR(0x741642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741643:{NFSU2_TR(0x741643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741650:L741650:{c.instructions+=7;NFSU2_TR(0x741650);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741654:{NFSU2_TR(0x741654);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741657:{NFSU2_TR(0x741657);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741658:{NFSU2_TR(0x741658);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74165c:{NFSU2_TR(0x74165c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74165d:{NFSU2_TR(0x74165d);
__builtin_memmove((R+4),(R+0),4);
}
B74165f:{NFSU2_TR(0x74165f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741676;}}
}
B741661:L741661:{c.instructions+=1;NFSU2_TR(0x741661);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B741665:L741665:{c.instructions+=3;NFSU2_TR(0x741665);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B741667:{NFSU2_TR(0x741667);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741669:{NFSU2_TR(0x741669);
if(r1(R+518)){{goto L741676;}}
}
B74166b:L74166b:{c.instructions+=6;NFSU2_TR(0x74166b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74166c:{NFSU2_TR(0x74166c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74166f:{NFSU2_TR(0x74166f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741670:{NFSU2_TR(0x741670);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B741671:{NFSU2_TR(0x741671);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741674:{NFSU2_TR(0x741674);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741665u);}goto L741665;}}
}
B741676:L741676:{c.instructions+=2;NFSU2_TR(0x741676);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741678:{NFSU2_TR(0x741678);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74167d;}}
}
B74167a:L74167a:{c.instructions+=1;NFSU2_TR(0x74167a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74167d:L74167d:{c.instructions+=4;NFSU2_TR(0x74167d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74167e:{NFSU2_TR(0x74167e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741680:{NFSU2_TR(0x741680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741681:{NFSU2_TR(0x741681);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741690:L741690:{c.instructions+=10;NFSU2_TR(0x741690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x124ull))));
}
B741696:{NFSU2_TR(0x741696);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74169d:{NFSU2_TR(0x74169d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74169f:{NFSU2_TR(0x74169f);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7416a4:{NFSU2_TR(0x7416a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7416a5:{NFSU2_TR(0x7416a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7416a6:{NFSU2_TR(0x7416a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7416ad:{NFSU2_TR(0x7416ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7416b4:{NFSU2_TR(0x7416b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7416b8:{NFSU2_TR(0x7416b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7416bf;}}
}
B7416ba:L7416ba:{c.instructions+=2;NFSU2_TR(0x7416ba);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B7416bd:{NFSU2_TR(0x7416bd);
{goto L7416df;}
}
B7416bf:L7416bf:{c.instructions+=3;NFSU2_TR(0x7416bf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7416c1:{NFSU2_TR(0x7416c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7416c3:{NFSU2_TR(0x7416c3);
if(r1(R+518)){{goto L7416db;}}
}
B7416c5:L7416c5:{c.instructions+=3;NFSU2_TR(0x7416c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7416c9:{NFSU2_TR(0x7416c9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B7416cb:{NFSU2_TR(0x7416cb);
{goto L7416d0;}
}
B7416d0:L7416d0:{c.instructions+=5;NFSU2_TR(0x7416d0);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7416d2:{NFSU2_TR(0x7416d2);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B7416d6:{NFSU2_TR(0x7416d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7416d7:{NFSU2_TR(0x7416d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7416d9:{NFSU2_TR(0x7416d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7416d0u);}goto L7416d0;}}
}
B7416db:L7416db:{c.instructions+=2;NFSU2_TR(0x7416db);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+4)),r1(U+0));
}
B7416de:{NFSU2_TR(0x7416de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7416df:L7416df:{c.instructions+=4;NFSU2_TR(0x7416df);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7416e6:{NFSU2_TR(0x7416e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7416e8:{NFSU2_TR(0x7416e8);
__builtin_memmove((R+24),(R+4),4);
}
B7416ea:{NFSU2_TR(0x7416ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7416f4;}}
}
B7416ec:L7416ec:{c.instructions+=3;NFSU2_TR(0x7416ec);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+4)),r1(U+0));
}
B7416ef:{NFSU2_TR(0x7416ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7416f2:{NFSU2_TR(0x7416f2);
w4(R+0,u32(0-u32(r4(R+0))));
}
B7416f4:L7416f4:{c.instructions+=4;NFSU2_TR(0x7416f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7416f6:{NFSU2_TR(0x7416f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((R+4),(U+0),4);
}
B7416f9:{NFSU2_TR(0x7416f9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B7416fc:{NFSU2_TR(0x7416fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741713;}}
}
B7416fe:L7416fe:{c.instructions+=2;NFSU2_TR(0x7416fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7416ff:{NFSU2_TR(0x7416ff);
}
B741700:L741700:{c.instructions+=8;NFSU2_TR(0x741700);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741701:{NFSU2_TR(0x741701);
w4(R+12,u32(0xaull));
}
B741706:{NFSU2_TR(0x741706);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741706);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741706);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B741708:{NFSU2_TR(0x741708);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B741709:{NFSU2_TR(0x741709);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B74170c:{NFSU2_TR(0x74170c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74170e:{NFSU2_TR(0x74170e);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741710:{NFSU2_TR(0x741710);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741700u);}goto L741700;}}
}
B741712:L741712:{c.instructions+=1;NFSU2_TR(0x741712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741713:L741713:{c.instructions+=3;NFSU2_TR(0x741713);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741715:{NFSU2_TR(0x741715);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741717:{NFSU2_TR(0x741717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741723;}}
}
B741719:L741719:{c.instructions+=5;NFSU2_TR(0x741719);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B74171a:{NFSU2_TR(0x74171a);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+4)),r1(U+0));
}
B74171d:{NFSU2_TR(0x74171d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74171f:{NFSU2_TR(0x74171f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741721:{NFSU2_TR(0x741721);
if(r1(R+518)){{goto L74172e;}}
}
B741723:L741723:{c.instructions+=6;NFSU2_TR(0x741723);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B741725:{NFSU2_TR(0x741725);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741728:{NFSU2_TR(0x741728);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741729:{NFSU2_TR(0x741729);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74172a:{NFSU2_TR(0x74172a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74172c:{NFSU2_TR(0x74172c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741723u);}goto L741723;}}
}
B74172e:L74172e:{c.instructions+=7;NFSU2_TR(0x74172e);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741735:{NFSU2_TR(0x741735);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B741739:{NFSU2_TR(0x741739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74173a:{NFSU2_TR(0x74173a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74173b:{NFSU2_TR(0x74173b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74173c:{NFSU2_TR(0x74173c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74173f:{NFSU2_TR(0x74173f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741744ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741744:L741744:{c.instructions+=5;NFSU2_TR(0x741744);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74174b:{NFSU2_TR(0x74174b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74174e:{NFSU2_TR(0x74174e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74174f:{NFSU2_TR(0x74174f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741750:{NFSU2_TR(0x741750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741755ull));
TAIL_STATIC(0x76115eu,761);
}
B741755:L741755:{c.instructions+=2;NFSU2_TR(0x741755);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x124ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x124ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x124ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74175b:{NFSU2_TR(0x74175b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741760:L741760:{c.instructions+=10;NFSU2_TR(0x741760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x124ull))));
}
B741766:{NFSU2_TR(0x741766);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74176b:{NFSU2_TR(0x74176b);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741772:{NFSU2_TR(0x741772);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741774:{NFSU2_TR(0x741774);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741775:{NFSU2_TR(0x741775);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74177c:{NFSU2_TR(0x74177c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74177d:{NFSU2_TR(0x74177d);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B741784:{NFSU2_TR(0x741784);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B741788:{NFSU2_TR(0x741788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74178f;}}
}
B74178a:L74178a:{c.instructions+=2;NFSU2_TR(0x74178a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B74178d:{NFSU2_TR(0x74178d);
{goto L7417af;}
}
B74178f:L74178f:{c.instructions+=3;NFSU2_TR(0x74178f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B741791:{NFSU2_TR(0x741791);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741793:{NFSU2_TR(0x741793);
if(r1(R+518)){{goto L7417ab;}}
}
B741795:L741795:{c.instructions+=3;NFSU2_TR(0x741795);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B741799:{NFSU2_TR(0x741799);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B74179b:{NFSU2_TR(0x74179b);
{goto L7417a0;}
}
B7417a0:L7417a0:{c.instructions+=5;NFSU2_TR(0x7417a0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7417a2:{NFSU2_TR(0x7417a2);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B7417a6:{NFSU2_TR(0x7417a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7417a7:{NFSU2_TR(0x7417a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7417a9:{NFSU2_TR(0x7417a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7417a0u);}goto L7417a0;}}
}
B7417ab:L7417ab:{c.instructions+=2;NFSU2_TR(0x7417ab);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+0)),r1(U+0));
}
B7417ae:{NFSU2_TR(0x7417ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7417af:L7417af:{c.instructions+=4;NFSU2_TR(0x7417af);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7417b6:{NFSU2_TR(0x7417b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7417b8:{NFSU2_TR(0x7417b8);
w4(R+24,u32(0x7d2698ull));
}
B7417bd:{NFSU2_TR(0x7417bd);
if(r1(R+518)){{goto L7417d5;}}
}
B7417bf:L7417bf:{c.instructions+=1;NFSU2_TR(0x7417bf);
}
B7417c0:L7417c0:{c.instructions+=3;NFSU2_TR(0x7417c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7417c2:{NFSU2_TR(0x7417c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7417c4:{NFSU2_TR(0x7417c4);
if(r1(R+518)){{goto L7417d5;}}
}
B7417c6:L7417c6:{c.instructions+=2;NFSU2_TR(0x7417c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7417c9:{NFSU2_TR(0x7417c9);
if(r1(R+518)){{goto L7417ce;}}
}
B7417cb:L7417cb:{c.instructions+=2;NFSU2_TR(0x7417cb);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7417cd:{NFSU2_TR(0x7417cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7417ce:L7417ce:{c.instructions+=4;NFSU2_TR(0x7417ce);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7417d0:{NFSU2_TR(0x7417d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7417d1:{NFSU2_TR(0x7417d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7417d3:{NFSU2_TR(0x7417d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7417c0u);}goto L7417c0;}}
}
B7417d5:L7417d5:{c.instructions+=7;NFSU2_TR(0x7417d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7417dc:{NFSU2_TR(0x7417dc);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7417df:{NFSU2_TR(0x7417df);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7417e3:{NFSU2_TR(0x7417e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7417e4:{NFSU2_TR(0x7417e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7417e5:{NFSU2_TR(0x7417e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7417e6:{NFSU2_TR(0x7417e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7417ebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B7417eb:L7417eb:{c.instructions+=5;NFSU2_TR(0x7417eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7417f2:{NFSU2_TR(0x7417f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7417f5:{NFSU2_TR(0x7417f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7417f6:{NFSU2_TR(0x7417f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7417f7:{NFSU2_TR(0x7417f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7417fcull));
TAIL_STATIC(0x76115eu,761);
}
B7417fc:L7417fc:{c.instructions+=2;NFSU2_TR(0x7417fc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x124ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x124ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x124ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741802:{NFSU2_TR(0x741802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741810:L741810:{c.instructions+=10;NFSU2_TR(0x741810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B741816:{NFSU2_TR(0x741816);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74181d:{NFSU2_TR(0x74181d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74181f:{NFSU2_TR(0x74181f);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B741824:{NFSU2_TR(0x741824);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741825:{NFSU2_TR(0x741825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741826:{NFSU2_TR(0x741826);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74182d:{NFSU2_TR(0x74182d);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741834:{NFSU2_TR(0x741834);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B741838:{NFSU2_TR(0x741838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74183f;}}
}
B74183a:L74183a:{c.instructions+=2;NFSU2_TR(0x74183a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B74183d:{NFSU2_TR(0x74183d);
{goto L74185f;}
}
B74183f:L74183f:{c.instructions+=3;NFSU2_TR(0x74183f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741841:{NFSU2_TR(0x741841);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741843:{NFSU2_TR(0x741843);
if(r1(R+518)){{goto L74185b;}}
}
B741845:L741845:{c.instructions+=3;NFSU2_TR(0x741845);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B741849:{NFSU2_TR(0x741849);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B74184b:{NFSU2_TR(0x74184b);
{goto L741850;}
}
B741850:L741850:{c.instructions+=5;NFSU2_TR(0x741850);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B741852:{NFSU2_TR(0x741852);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B741856:{NFSU2_TR(0x741856);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741857:{NFSU2_TR(0x741857);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741859:{NFSU2_TR(0x741859);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741850u);}goto L741850;}}
}
B74185b:L74185b:{c.instructions+=2;NFSU2_TR(0x74185b);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+24)),r1(U+0));
}
B74185e:{NFSU2_TR(0x74185e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74185f:L74185f:{c.instructions+=12;NFSU2_TR(0x74185f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741860:{NFSU2_TR(0x741860);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B741867:{NFSU2_TR(0x741867);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74186b:{NFSU2_TR(0x74186b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B74186e:{NFSU2_TR(0x74186e);
__builtin_memmove((R+8),(R+12),1);
}
B741870:{NFSU2_TR(0x741870);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B741873:{NFSU2_TR(0x741873);
__builtin_memmove((R+0),(R+12),4);
}
B741875:{NFSU2_TR(0x741875);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B741878:{NFSU2_TR(0x741878);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x9ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74187a:{NFSU2_TR(0x74187a);
__builtin_memmove((R+4),(R+24),4);
}
B74187c:{NFSU2_TR(0x74187c);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B741880:{NFSU2_TR(0x741880);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7418b0;}}
}
B741882:L741882:{c.instructions+=2;NFSU2_TR(0x741882);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x63ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x63ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741884:{NFSU2_TR(0x741884);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74189a;}}
}
B741886:L741886:{c.instructions+=8;NFSU2_TR(0x741886);
w4(R+0,u32(r1(R+0)));
}
B741889:{NFSU2_TR(0x741889);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74188a:{NFSU2_TR(0x74188a);
w4(R+4,u32(0x64ull));
}
B74188f:{NFSU2_TR(0x74188f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74188f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74188f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B741891:{NFSU2_TR(0x741891);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B741894:{NFSU2_TR(0x741894);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B741896:{NFSU2_TR(0x741896);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B741898:{NFSU2_TR(0x741898);
__builtin_memmove((R+0),(R+8),1);
}
B74189a:L74189a:{c.instructions+=9;NFSU2_TR(0x74189a);
w4(R+0,u32(r1(R+0)));
}
B74189d:{NFSU2_TR(0x74189d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74189e:{NFSU2_TR(0x74189e);
w4(R+24,u32(0xaull));
}
B7418a3:{NFSU2_TR(0x7418a3);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7418a3);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7418a3);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7418a5:{NFSU2_TR(0x7418a5);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B7418a7:{NFSU2_TR(0x7418a7);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7418a9:{NFSU2_TR(0x7418a9);
__builtin_memmove((R+0),(R+8),1);
}
B7418ab:{NFSU2_TR(0x7418ab);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7418af:{NFSU2_TR(0x7418af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418b0:L7418b0:{c.instructions+=7;NFSU2_TR(0x7418b0);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B7418b2:{NFSU2_TR(0x7418b2);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7418b4:{NFSU2_TR(0x7418b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418b5:{NFSU2_TR(0x7418b5);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+4)),r1(U+0));
}
B7418b8:{NFSU2_TR(0x7418b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418b9:{NFSU2_TR(0x7418b9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x9ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7418bc:{NFSU2_TR(0x7418bc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7418eb;}}
}
B7418be:L7418be:{c.instructions+=2;NFSU2_TR(0x7418be);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x63ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x63ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7418c1:{NFSU2_TR(0x7418c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7418d5;}}
}
B7418c3:L7418c3:{c.instructions+=8;NFSU2_TR(0x7418c3);
w4(R+0,u32(r1(R+12)));
}
B7418c6:{NFSU2_TR(0x7418c6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7418c7:{NFSU2_TR(0x7418c7);
w4(R+24,u32(0x64ull));
}
B7418cc:{NFSU2_TR(0x7418cc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7418cc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7418cc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7418ce:{NFSU2_TR(0x7418ce);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B7418d0:{NFSU2_TR(0x7418d0);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7418d2:{NFSU2_TR(0x7418d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418d3:{NFSU2_TR(0x7418d3);
__builtin_memmove((R+12),(R+8),1);
}
B7418d5:L7418d5:{c.instructions+=9;NFSU2_TR(0x7418d5);
w4(R+0,u32(r1(R+12)));
}
B7418d8:{NFSU2_TR(0x7418d8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7418d9:{NFSU2_TR(0x7418d9);
w4(R+24,u32(0xaull));
}
B7418de:{NFSU2_TR(0x7418de);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7418de);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7418de);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7418e0:{NFSU2_TR(0x7418e0);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B7418e2:{NFSU2_TR(0x7418e2);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7418e4:{NFSU2_TR(0x7418e4);
__builtin_memmove((R+12),(R+8),1);
}
B7418e6:{NFSU2_TR(0x7418e6);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7418ea:{NFSU2_TR(0x7418ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418eb:L7418eb:{c.instructions+=9;NFSU2_TR(0x7418eb);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x30ull))));
}
B7418ee:{NFSU2_TR(0x7418ee);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7418f0:{NFSU2_TR(0x7418f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418f1:{NFSU2_TR(0x7418f1);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+4)),r1(U+0));
}
B7418f4:{NFSU2_TR(0x7418f4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7418f5:{NFSU2_TR(0x7418f5);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x9ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7418f8:{NFSU2_TR(0x7418f8);
__builtin_memmove((R+0),(R+8),1);
}
B7418fa:{NFSU2_TR(0x7418fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7418fb:{NFSU2_TR(0x7418fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741926;}}
}
B7418fd:L7418fd:{c.instructions+=2;NFSU2_TR(0x7418fd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x63ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x63ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B741900:{NFSU2_TR(0x741900);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741914;}}
}
B741902:L741902:{c.instructions+=8;NFSU2_TR(0x741902);
w4(R+0,u32(r1(R+8)));
}
B741905:{NFSU2_TR(0x741905);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741906:{NFSU2_TR(0x741906);
w4(R+24,u32(0x64ull));
}
B74190b:{NFSU2_TR(0x74190b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74190b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74190b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74190d:{NFSU2_TR(0x74190d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B74190f:{NFSU2_TR(0x74190f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741911:{NFSU2_TR(0x741911);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741912:{NFSU2_TR(0x741912);
__builtin_memmove((R+0),(R+8),1);
}
B741914:L741914:{c.instructions+=8;NFSU2_TR(0x741914);
w4(R+0,u32(r1(R+0)));
}
B741917:{NFSU2_TR(0x741917);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741918:{NFSU2_TR(0x741918);
w4(R+24,u32(0xaull));
}
B74191d:{NFSU2_TR(0x74191d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74191d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74191d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74191f:{NFSU2_TR(0x74191f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B741921:{NFSU2_TR(0x741921);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741923:{NFSU2_TR(0x741923);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741924:{NFSU2_TR(0x741924);
__builtin_memmove((R+0),(R+8),1);
}
B741926:L741926:{c.instructions+=9;NFSU2_TR(0x741926);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74192a:{NFSU2_TR(0x74192a);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B74192c:{NFSU2_TR(0x74192c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74192e:{NFSU2_TR(0x74192e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74192f:{NFSU2_TR(0x74192f);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+4)),r1(U+0));
}
B741932:{NFSU2_TR(0x741932);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741933:{NFSU2_TR(0x741933);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x9ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B741936:{NFSU2_TR(0x741936);
__builtin_memmove((R+0),(R+8),1);
}
B741938:{NFSU2_TR(0x741938);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741963;}}
}
B74193a:L74193a:{c.instructions+=2;NFSU2_TR(0x74193a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x63ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x63ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74193d:{NFSU2_TR(0x74193d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741951;}}
}
B74193f:L74193f:{c.instructions+=8;NFSU2_TR(0x74193f);
w4(R+0,u32(r1(R+8)));
}
B741942:{NFSU2_TR(0x741942);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741943:{NFSU2_TR(0x741943);
w4(R+24,u32(0x64ull));
}
B741948:{NFSU2_TR(0x741948);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741948);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x741948);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74194a:{NFSU2_TR(0x74194a);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B74194c:{NFSU2_TR(0x74194c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74194e:{NFSU2_TR(0x74194e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74194f:{NFSU2_TR(0x74194f);
__builtin_memmove((R+0),(R+8),1);
}
B741951:L741951:{c.instructions+=8;NFSU2_TR(0x741951);
w4(R+0,u32(r1(R+0)));
}
B741954:{NFSU2_TR(0x741954);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B741955:{NFSU2_TR(0x741955);
w4(R+24,u32(0xaull));
}
B74195a:{NFSU2_TR(0x74195a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74195a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74195a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74195c:{NFSU2_TR(0x74195c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B74195e:{NFSU2_TR(0x74195e);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741960:{NFSU2_TR(0x741960);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741961:{NFSU2_TR(0x741961);
__builtin_memmove((R+0),(R+8),1);
}
B741963:L741963:{c.instructions+=9;NFSU2_TR(0x741963);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B741965:{NFSU2_TR(0x741965);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741967:{NFSU2_TR(0x741967);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74196e:{NFSU2_TR(0x74196e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B741972:{NFSU2_TR(0x741972);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741973:{NFSU2_TR(0x741973);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741974:{NFSU2_TR(0x741974);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741975:{NFSU2_TR(0x741975);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B741979:{NFSU2_TR(0x741979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74197eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B74197e:L74197e:{c.instructions+=5;NFSU2_TR(0x74197e);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741985:{NFSU2_TR(0x741985);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741988:{NFSU2_TR(0x741988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741989:{NFSU2_TR(0x741989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74198a:{NFSU2_TR(0x74198a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74198full));
TAIL_STATIC(0x76115eu,761);
}
B74198f:L74198f:{c.instructions+=2;NFSU2_TR(0x74198f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x128ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x128ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x128ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741995:{NFSU2_TR(0x741995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7419a0:L7419a0:{c.instructions+=9;NFSU2_TR(0x7419a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x124ull))));
}
B7419a6:{NFSU2_TR(0x7419a6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7419ab:{NFSU2_TR(0x7419ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7419b2:{NFSU2_TR(0x7419b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7419b4:{NFSU2_TR(0x7419b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7419bb:{NFSU2_TR(0x7419bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7419bc:{NFSU2_TR(0x7419bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7419c3:{NFSU2_TR(0x7419c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7419c7:{NFSU2_TR(0x7419c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7419ce;}}
}
B7419c9:L7419c9:{c.instructions+=2;NFSU2_TR(0x7419c9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B7419cc:{NFSU2_TR(0x7419cc);
{goto L7419ef;}
}
B7419ce:L7419ce:{c.instructions+=3;NFSU2_TR(0x7419ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7419d0:{NFSU2_TR(0x7419d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7419d2:{NFSU2_TR(0x7419d2);
if(r1(R+518)){{goto L7419eb;}}
}
B7419d4:L7419d4:{c.instructions+=5;NFSU2_TR(0x7419d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7419d5:{NFSU2_TR(0x7419d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7419d9:{NFSU2_TR(0x7419d9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7419db:{NFSU2_TR(0x7419db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7419dc:{NFSU2_TR(0x7419dc);
__builtin_memmove((R+16),(R+16),4);
}
B7419e0:L7419e0:{c.instructions+=5;NFSU2_TR(0x7419e0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7419e2:{NFSU2_TR(0x7419e2);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B7419e6:{NFSU2_TR(0x7419e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7419e7:{NFSU2_TR(0x7419e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7419e9:{NFSU2_TR(0x7419e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7419e0u);}goto L7419e0;}}
}
B7419eb:L7419eb:{c.instructions+=2;NFSU2_TR(0x7419eb);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+0)),r1(U+0));
}
B7419ee:{NFSU2_TR(0x7419ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7419ef:L7419ef:{c.instructions+=3;NFSU2_TR(0x7419ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7419f6:{NFSU2_TR(0x7419f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7419f8:{NFSU2_TR(0x7419f8);
if(r1(R+518)){{goto L741a17;}}
}
B7419fa:L7419fa:{c.instructions+=1;NFSU2_TR(0x7419fa);
__builtin_memmove((R+12),(R+12),4);
}
B741a00:L741a00:{c.instructions+=2;NFSU2_TR(0x741a00);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741a06:{NFSU2_TR(0x741a06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741a10;}}
}
B741a08:L741a08:{c.instructions+=4;NFSU2_TR(0x741a08);
__builtin_memmove((R+8),(R+4),4);
}
B741a0a:{NFSU2_TR(0x741a0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B741a0d:{NFSU2_TR(0x741a0d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B741a0f:{NFSU2_TR(0x741a0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741a10:L741a10:{c.instructions+=3;NFSU2_TR(0x741a10);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B741a13:{NFSU2_TR(0x741a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741a15:{NFSU2_TR(0x741a15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741a00u);}goto L741a00;}}
}
B741a17:L741a17:{c.instructions+=7;NFSU2_TR(0x741a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741a1e:{NFSU2_TR(0x741a1e);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B741a21:{NFSU2_TR(0x741a21);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B741a25:{NFSU2_TR(0x741a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a26:{NFSU2_TR(0x741a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a27:{NFSU2_TR(0x741a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a28:{NFSU2_TR(0x741a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741a2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741a2d:L741a2d:{c.instructions+=4;NFSU2_TR(0x741a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741a34:{NFSU2_TR(0x741a34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741a37:{NFSU2_TR(0x741a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741a38:{NFSU2_TR(0x741a38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741a3dull));
TAIL_STATIC(0x76115eu,761);
}
B741a3d:L741a3d:{c.instructions+=2;NFSU2_TR(0x741a3d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x124ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x124ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x124ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741a43:{NFSU2_TR(0x741a43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741a50:L741a50:{c.instructions+=2;NFSU2_TR(0x741a50);
w4(R+0,u32(0x1204ull));
}
B741a55:{NFSU2_TR(0x741a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741a5aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B741a5a:L741a5a:{c.instructions+=8;NFSU2_TR(0x741a5a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B741a5f:{NFSU2_TR(0x741a5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a60:{NFSU2_TR(0x741a60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a61:{NFSU2_TR(0x741a61);
u8 U[8];
w4(U+0,u32(u32(u32(0x121cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B741a68:{NFSU2_TR(0x741a68);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741a6a:{NFSU2_TR(0x741a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1208ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741a71:{NFSU2_TR(0x741a71);
__builtin_memmove((R+20),(R+28),4);
}
B741a73:{NFSU2_TR(0x741a73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741aa4;}}
}
B741a75:L741a75:{c.instructions+=5;NFSU2_TR(0x741a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x1218ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741a7c:{NFSU2_TR(0x741a7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1210ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741a83:{NFSU2_TR(0x741a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a84:{NFSU2_TR(0x741a84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741a85:{NFSU2_TR(0x741a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741a8aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7415d0u);}goto L7415d0;}
}
B741a8a:L741a8a:{c.instructions+=6;NFSU2_TR(0x741a8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B741a8d:{NFSU2_TR(0x741a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741a8e:{NFSU2_TR(0x741a8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B741a90:{NFSU2_TR(0x741a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741a91:{NFSU2_TR(0x741a91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1200ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741a98:{NFSU2_TR(0x741a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741a9dull));
TAIL_STATIC(0x76115eu,761);
}
B741a9d:L741a9d:{c.instructions+=2;NFSU2_TR(0x741a9d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741aa3:{NFSU2_TR(0x741aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741aa4:L741aa4:{c.instructions+=5;NFSU2_TR(0x741aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1218ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741aab:{NFSU2_TR(0x741aab);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741aad:{NFSU2_TR(0x741aad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741aae:{NFSU2_TR(0x741aae);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B741ab2:{NFSU2_TR(0x741ab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741ac0;}}
}
B741ab4:L741ab4:{c.instructions+=3;NFSU2_TR(0x741ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741abb:{NFSU2_TR(0x741abb);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B741abe:{NFSU2_TR(0x741abe);
{goto L741adf;}
}
B741ac0:L741ac0:{c.instructions+=3;NFSU2_TR(0x741ac0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B741ac2:{NFSU2_TR(0x741ac2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741ac4:{NFSU2_TR(0x741ac4);
if(r1(R+518)){{goto L741adb;}}
}
B741ac6:L741ac6:{c.instructions+=3;NFSU2_TR(0x741ac6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B741aca:{NFSU2_TR(0x741aca);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B741acc:{NFSU2_TR(0x741acc);
__builtin_memmove((R+16),(R+16),4);
}
B741ad0:L741ad0:{c.instructions+=5;NFSU2_TR(0x741ad0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B741ad2:{NFSU2_TR(0x741ad2);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B741ad6:{NFSU2_TR(0x741ad6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741ad7:{NFSU2_TR(0x741ad7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741ad9:{NFSU2_TR(0x741ad9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741ad0u);}goto L741ad0;}}
}
B741adb:L741adb:{c.instructions+=2;NFSU2_TR(0x741adb);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+0)),r1(U+0));
}
B741ade:{NFSU2_TR(0x741ade);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741adf:L741adf:{c.instructions+=7;NFSU2_TR(0x741adf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ae0:{NFSU2_TR(0x741ae0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B741ae2:{NFSU2_TR(0x741ae2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1210ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B741ae9:{NFSU2_TR(0x741ae9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B741aeb:{NFSU2_TR(0x741aeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741aed:{NFSU2_TR(0x741aed);
__builtin_memmove((R+4),(R+0),4);
}
B741aef:{NFSU2_TR(0x741aef);
if(r1(R+518)){{goto L741b00;}}
}
B741af1:L741af1:{c.instructions+=1;NFSU2_TR(0x741af1);
__builtin_memmove((R+8),(R+12),1);
}
B741af3:L741af3:{c.instructions+=2;NFSU2_TR(0x741af3);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B741af6:{NFSU2_TR(0x741af6);
if(r1(R+518)){{goto L741b05;}}
}
B741af8:L741af8:{c.instructions+=4;NFSU2_TR(0x741af8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741afb:{NFSU2_TR(0x741afb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741afc:{NFSU2_TR(0x741afc);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741afe:{NFSU2_TR(0x741afe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741af3u);}goto L741af3;}}
}
B741b00:L741b00:{c.instructions+=2;NFSU2_TR(0x741b00);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B741b03:{NFSU2_TR(0x741b03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741b0c;}}
}
B741b05:L741b05:{c.instructions+=3;NFSU2_TR(0x741b05);
u8 U[1];
w1(U+0,u8(0x22ull));
s1(u32(r4(R+0)),r1(U+0));
}
B741b08:{NFSU2_TR(0x741b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B741b0b:{NFSU2_TR(0x741b0b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B741b0c:L741b0c:{c.instructions+=3;NFSU2_TR(0x741b0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b0e:{NFSU2_TR(0x741b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741b0f:{NFSU2_TR(0x741b0f);
if(r1(R+518)){{goto L741b63;}}
}
B741b11:L741b11:{c.instructions+=2;NFSU2_TR(0x741b11);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741b13:{NFSU2_TR(0x741b13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741b67;}}
}
B741b15:L741b15:{c.instructions+=3;NFSU2_TR(0x741b15);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741b18:{NFSU2_TR(0x741b18);
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
}
B741b1a:{NFSU2_TR(0x741b1a);
if(r1(R+512)){{goto L741b3a;}}
}
B741b1c:L741b1c:{c.instructions+=2;NFSU2_TR(0x741b1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b1e:{NFSU2_TR(0x741b1e);
if(r1(R+518)){{goto L741b3a;}}
}
B741b20:L741b20:{c.instructions+=2;NFSU2_TR(0x741b20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b22:{NFSU2_TR(0x741b22);
if(r1(R+518)){{goto L741b3a;}}
}
B741b24:L741b24:{c.instructions+=2;NFSU2_TR(0x741b24);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b26:{NFSU2_TR(0x741b26);
if(r1(R+518)){{goto L741b3a;}}
}
B741b28:L741b28:{c.instructions+=2;NFSU2_TR(0x741b28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b2a:{NFSU2_TR(0x741b2a);
if(r1(R+518)){{goto L741b3a;}}
}
B741b2c:L741b2c:{c.instructions+=2;NFSU2_TR(0x741b2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b2e:{NFSU2_TR(0x741b2e);
if(r1(R+518)){{goto L741b3a;}}
}
B741b30:L741b30:{c.instructions+=2;NFSU2_TR(0x741b30);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b32:{NFSU2_TR(0x741b32);
if(r1(R+518)){{goto L741b3a;}}
}
B741b34:L741b34:{c.instructions+=4;NFSU2_TR(0x741b34);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741b36:{NFSU2_TR(0x741b36);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741b37:{NFSU2_TR(0x741b37);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B741b38:{NFSU2_TR(0x741b38);
{goto L741b5b;}
}
B741b3a:L741b3a:{c.instructions+=2;NFSU2_TR(0x741b3a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B741b3d:{NFSU2_TR(0x741b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L741b58;}}
}
B741b3f:L741b3f:{c.instructions+=9;NFSU2_TR(0x741b3f);
u8 U[1];
w1(U+0,u8(0x25ull));
s1(u32(r4(R+4)),r1(U+0));
}
B741b42:{NFSU2_TR(0x741b42);
w4(R+0,u32(r1(R+0)));
}
B741b45:{NFSU2_TR(0x741b45);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2098ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741b4b:{NFSU2_TR(0x741b4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741b51:{NFSU2_TR(0x741b51);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741b52:{NFSU2_TR(0x741b52);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741b54:{NFSU2_TR(0x741b54);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741b55:{NFSU2_TR(0x741b55);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741b57:{NFSU2_TR(0x741b57);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741b58:L741b58:{c.instructions+=1;NFSU2_TR(0x741b58);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x3ull))));
}
B741b5b:L741b5b:{c.instructions+=4;NFSU2_TR(0x741b5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741b5e:{NFSU2_TR(0x741b5e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B741b5f:{NFSU2_TR(0x741b5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741b61:{NFSU2_TR(0x741b61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741b11u);}goto L741b11;}}
}
B741b63:L741b63:{c.instructions+=2;NFSU2_TR(0x741b63);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741b65:{NFSU2_TR(0x741b65);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L741b82;}}
}
B741b67:L741b67:{c.instructions+=6;NFSU2_TR(0x741b67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741b68:{NFSU2_TR(0x741b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741b69:{NFSU2_TR(0x741b69);
w4(R+0,u32(0xffffffffull));
}
B741b6e:{NFSU2_TR(0x741b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741b6f:{NFSU2_TR(0x741b6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1200ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741b76:{NFSU2_TR(0x741b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741b7bull));
TAIL_STATIC(0x76115eu,761);
}
B741b7b:L741b7b:{c.instructions+=2;NFSU2_TR(0x741b7b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741b81:{NFSU2_TR(0x741b81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741b82:L741b82:{c.instructions+=2;NFSU2_TR(0x741b82);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B741b85:{NFSU2_TR(0x741b85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741b8b;}}
}
B741b87:L741b87:{c.instructions+=2;NFSU2_TR(0x741b87);
u8 U[1];
w1(U+0,u8(0x22ull));
s1(u32(r4(R+4)),r1(U+0));
}
B741b8a:{NFSU2_TR(0x741b8a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741b8b:L741b8b:{c.instructions+=8;NFSU2_TR(0x741b8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1218ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741b92:{NFSU2_TR(0x741b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x1214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741b99:{NFSU2_TR(0x741b99);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B741b9c:{NFSU2_TR(0x741b9c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B741ba0:{NFSU2_TR(0x741ba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ba1:{NFSU2_TR(0x741ba1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ba2:{NFSU2_TR(0x741ba2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ba3:{NFSU2_TR(0x741ba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741ba8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741ba8:L741ba8:{c.instructions+=6;NFSU2_TR(0x741ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1218ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741baf:{NFSU2_TR(0x741baf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741bb2:{NFSU2_TR(0x741bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741bb3:{NFSU2_TR(0x741bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741bb4:{NFSU2_TR(0x741bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741bb5:{NFSU2_TR(0x741bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741bbaull));
TAIL_STATIC(0x76115eu,761);
}
B741bba:L741bba:{c.instructions+=2;NFSU2_TR(0x741bba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741bc0:{NFSU2_TR(0x741bc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741bd0:L741bd0:{c.instructions+=2;NFSU2_TR(0x741bd0);
w4(R+0,u32(0x2104ull));
}
B741bd5:{NFSU2_TR(0x741bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741bdaull));
TAIL_STATIC(0x75c4d0u,75c);
}
B741bda:L741bda:{c.instructions+=11;NFSU2_TR(0x741bda);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B741bdf:{NFSU2_TR(0x741bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741be6:{NFSU2_TR(0x741be6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741be8:{NFSU2_TR(0x741be8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741be9:{NFSU2_TR(0x741be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x210cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B741bf0:{NFSU2_TR(0x741bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741bf1:{NFSU2_TR(0x741bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741bf8:{NFSU2_TR(0x741bf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741bf9:{NFSU2_TR(0x741bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B741c00:{NFSU2_TR(0x741c00);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B741c04:{NFSU2_TR(0x741c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741c0c;}}
}
B741c06:L741c06:{c.instructions+=2;NFSU2_TR(0x741c06);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B741c0a:{NFSU2_TR(0x741c0a);
{goto L741c27;}
}
B741c0c:L741c0c:{c.instructions+=3;NFSU2_TR(0x741c0c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B741c0e:{NFSU2_TR(0x741c0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741c10:{NFSU2_TR(0x741c10);
if(r1(R+518)){{goto L741c23;}}
}
B741c12:L741c12:{c.instructions+=2;NFSU2_TR(0x741c12);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B741c16:{NFSU2_TR(0x741c16);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B741c18:L741c18:{c.instructions+=5;NFSU2_TR(0x741c18);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B741c1a:{NFSU2_TR(0x741c1a);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B741c1e:{NFSU2_TR(0x741c1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741c1f:{NFSU2_TR(0x741c1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741c21:{NFSU2_TR(0x741c21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741c18u);}goto L741c18;}}
}
B741c23:L741c23:{c.instructions+=2;NFSU2_TR(0x741c23);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+0)),r1(U+0));
}
B741c26:{NFSU2_TR(0x741c26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741c27:L741c27:{c.instructions+=8;NFSU2_TR(0x741c27);
u8 U[8];
w4(U+0,u32(u32(u32(0x2124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741c2e:{NFSU2_TR(0x741c2e);
u8 U[1];
w1(U+0,u8(0x24ull));
s1(u32(r4(R+0)),r1(U+0));
}
B741c31:{NFSU2_TR(0x741c31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741c32:{NFSU2_TR(0x741c32);
u8 U[4];
w4(U+0,u32(u32(u32(0x210cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B741c39:{NFSU2_TR(0x741c39);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B741c3b:{NFSU2_TR(0x741c3b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B741c3f:{NFSU2_TR(0x741c3f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741c41:{NFSU2_TR(0x741c41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741c5c;}}
}
B741c43:L741c43:{c.instructions+=6;NFSU2_TR(0x741c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741c44:{NFSU2_TR(0x741c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741c45:{NFSU2_TR(0x741c45);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B741c48:{NFSU2_TR(0x741c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741c49:{NFSU2_TR(0x741c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x2100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741c50:{NFSU2_TR(0x741c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741c55ull));
TAIL_STATIC(0x76115eu,761);
}
B741c55:L741c55:{c.instructions+=2;NFSU2_TR(0x741c55);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741c5b:{NFSU2_TR(0x741c5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741c5c:L741c5c:{c.instructions+=2;NFSU2_TR(0x741c5c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741c5e:{NFSU2_TR(0x741c5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741c79;}}
}
B741c60:L741c60:{c.instructions+=10;NFSU2_TR(0x741c60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B741c63:{NFSU2_TR(0x741c63);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2098ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B741c69:{NFSU2_TR(0x741c69);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B741c6f:{NFSU2_TR(0x741c6f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B741c71:{NFSU2_TR(0x741c71);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741c72:{NFSU2_TR(0x741c72);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B741c74:{NFSU2_TR(0x741c74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741c75:{NFSU2_TR(0x741c75);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741c76:{NFSU2_TR(0x741c76);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B741c77:{NFSU2_TR(0x741c77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741c60u);}goto L741c60;}}
}
B741c79:L741c79:{c.instructions+=7;NFSU2_TR(0x741c79);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B741c7d:{NFSU2_TR(0x741c7d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B741c80:{NFSU2_TR(0x741c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x2118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741c87:{NFSU2_TR(0x741c87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741c88:{NFSU2_TR(0x741c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741c89:{NFSU2_TR(0x741c89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741c8a:{NFSU2_TR(0x741c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741c8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741c8f:L741c8f:{c.instructions+=6;NFSU2_TR(0x741c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741c96:{NFSU2_TR(0x741c96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741c99:{NFSU2_TR(0x741c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741c9a:{NFSU2_TR(0x741c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741c9b:{NFSU2_TR(0x741c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741c9c:{NFSU2_TR(0x741c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741ca1ull));
TAIL_STATIC(0x76115eu,761);
}
B741ca1:L741ca1:{c.instructions+=2;NFSU2_TR(0x741ca1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741ca7:{NFSU2_TR(0x741ca7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741cb0:L741cb0:{c.instructions+=2;NFSU2_TR(0x741cb0);
w4(R+0,u32(0x2104ull));
}
B741cb5:{NFSU2_TR(0x741cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741cbaull));
TAIL_STATIC(0x75c4d0u,75c);
}
B741cba:L741cba:{c.instructions+=11;NFSU2_TR(0x741cba);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B741cbf:{NFSU2_TR(0x741cbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741cc0:{NFSU2_TR(0x741cc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741cc1:{NFSU2_TR(0x741cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B741cc8:{NFSU2_TR(0x741cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741ccf:{NFSU2_TR(0x741ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x211cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741cd6:{NFSU2_TR(0x741cd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741cd8:{NFSU2_TR(0x741cd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741cd9:{NFSU2_TR(0x741cd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741cda:{NFSU2_TR(0x741cda);
__builtin_memmove((R+12),(R+0),4);
}
B741cdc:{NFSU2_TR(0x741cdc);
if(r1(R+518)){{goto L741ce3;}}
}
B741cde:L741cde:{c.instructions+=2;NFSU2_TR(0x741cde);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B741ce1:{NFSU2_TR(0x741ce1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741ce8;}}
}
B741ce3:L741ce3:{c.instructions+=1;NFSU2_TR(0x741ce3);
w4(R+12,u32(0x7d2818ull));
}
B741ce8:L741ce8:{c.instructions+=4;NFSU2_TR(0x741ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741cef:{NFSU2_TR(0x741cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741cf1:{NFSU2_TR(0x741cf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B741cf5:{NFSU2_TR(0x741cf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741d02;}}
}
B741cf7:L741cf7:{c.instructions+=3;NFSU2_TR(0x741cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741cfe:{NFSU2_TR(0x741cfe);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741d00:{NFSU2_TR(0x741d00);
{goto L741d1f;}
}
B741d02:L741d02:{c.instructions+=3;NFSU2_TR(0x741d02);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B741d04:{NFSU2_TR(0x741d04);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741d06:{NFSU2_TR(0x741d06);
if(r1(R+518)){{goto L741d1b;}}
}
B741d08:L741d08:{c.instructions+=3;NFSU2_TR(0x741d08);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B741d0c:{NFSU2_TR(0x741d0c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B741d0e:{NFSU2_TR(0x741d0e);
__builtin_memmove((R+28),(R+28),4);
}
B741d10:L741d10:{c.instructions+=5;NFSU2_TR(0x741d10);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B741d12:{NFSU2_TR(0x741d12);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B741d16:{NFSU2_TR(0x741d16);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741d17:{NFSU2_TR(0x741d17);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741d19:{NFSU2_TR(0x741d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741d10u);}goto L741d10;}}
}
B741d1b:L741d1b:{c.instructions+=2;NFSU2_TR(0x741d1b);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+0)),r1(U+0));
}
B741d1e:{NFSU2_TR(0x741d1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B741d1f:L741d1f:{c.instructions+=7;NFSU2_TR(0x741d1f);
u8 U[1];
w1(U+0,u8(0x24ull));
s1(u32(r4(R+0)),r1(U+0));
}
B741d22:{NFSU2_TR(0x741d22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B741d25:{NFSU2_TR(0x741d25);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741d28:{NFSU2_TR(0x741d28);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B741d2a:{NFSU2_TR(0x741d2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741d2c:{NFSU2_TR(0x741d2c);
__builtin_memmove((R+28),(R+12),4);
}
B741d2e:{NFSU2_TR(0x741d2e);
if(r1(R+518)){{goto L741d65;}}
}
B741d30:L741d30:{c.instructions+=10;NFSU2_TR(0x741d30);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+8))));
}
B741d32:{NFSU2_TR(0x741d32);
__builtin_memmove((R+8),(R+0),1);
}
B741d34:{NFSU2_TR(0x741d34);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r4(U+0))));
}
B741d37:{NFSU2_TR(0x741d37);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B741d3a:{NFSU2_TR(0x741d3a);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+0))));
}
B741d3c:{NFSU2_TR(0x741d3c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(R+8,u8(u32(r1(R+8))^u32(r1(U+0))));
}
B741d3e:{NFSU2_TR(0x741d3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741d41:{NFSU2_TR(0x741d41);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741d42:{NFSU2_TR(0x741d42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741d44:{NFSU2_TR(0x741d44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741d48;}}
}
B741d46:L741d46:{c.instructions+=1;NFSU2_TR(0x741d46);
__builtin_memmove((R+28),(R+12),4);
}
B741d48:L741d48:{c.instructions+=11;NFSU2_TR(0x741d48);
w4(R+24,u32(r1(R+8)));
}
B741d4b:{NFSU2_TR(0x741d4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7d2098ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741d51:{NFSU2_TR(0x741d51);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741d53:{NFSU2_TR(0x741d53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7d2198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741d59:{NFSU2_TR(0x741d59);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741d5a:{NFSU2_TR(0x741d5a);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741d5c:{NFSU2_TR(0x741d5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741d5f:{NFSU2_TR(0x741d5f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741d60:{NFSU2_TR(0x741d60);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B741d61:{NFSU2_TR(0x741d61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741d63:{NFSU2_TR(0x741d63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741d30u);}goto L741d30;}}
}
B741d65:L741d65:{c.instructions+=8;NFSU2_TR(0x741d65);
u8 U[8];
w4(U+0,u32(u32(u32(0x211cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741d6c:{NFSU2_TR(0x741d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741d73:{NFSU2_TR(0x741d73);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B741d76:{NFSU2_TR(0x741d76);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B741d7a:{NFSU2_TR(0x741d7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741d7b:{NFSU2_TR(0x741d7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741d7c:{NFSU2_TR(0x741d7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741d7d:{NFSU2_TR(0x741d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741d82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741d82:L741d82:{c.instructions+=7;NFSU2_TR(0x741d82);
u8 U[8];
w4(U+0,u32(u32(u32(0x211cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741d89:{NFSU2_TR(0x741d89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741d8c:{NFSU2_TR(0x741d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741d8d:{NFSU2_TR(0x741d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741d8e:{NFSU2_TR(0x741d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741d8f:{NFSU2_TR(0x741d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741d90:{NFSU2_TR(0x741d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741d95ull));
TAIL_STATIC(0x76115eu,761);
}
B741d95:L741d95:{c.instructions+=2;NFSU2_TR(0x741d95);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741d9b:{NFSU2_TR(0x741d9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741da0:L741da0:{c.instructions+=6;NFSU2_TR(0x741da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x148ull))));
}
B741da6:{NFSU2_TR(0x741da6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B741dab:{NFSU2_TR(0x741dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741db2:{NFSU2_TR(0x741db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741db9:{NFSU2_TR(0x741db9);
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
B741dbb:{NFSU2_TR(0x741dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741dc2;}}
}
B741dbd:L741dbd:{c.instructions+=1;NFSU2_TR(0x741dbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741dc2ull));
TAIL_STATIC(0x74f5f0u,74f);
}
B741dc2:L741dc2:{c.instructions+=3;NFSU2_TR(0x741dc2);
__builtin_memmove((R+4),(R+16),4);
}
B741dc5:{NFSU2_TR(0x741dc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741dc6:{NFSU2_TR(0x741dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741dcbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741040u);}goto L741040;}
}
B741dcb:L741dcb:{c.instructions+=3;NFSU2_TR(0x741dcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B741dce:{NFSU2_TR(0x741dce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741dd0:{NFSU2_TR(0x741dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741de8;}}
}
B741dd2:L741dd2:{c.instructions+=3;NFSU2_TR(0x741dd2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B741dd5:{NFSU2_TR(0x741dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741ddc:{NFSU2_TR(0x741ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741de1ull));
TAIL_STATIC(0x76115eu,761);
}
B741de1:L741de1:{c.instructions+=2;NFSU2_TR(0x741de1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x148ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x148ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x148ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741de7:{NFSU2_TR(0x741de7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741de8:L741de8:{c.instructions+=7;NFSU2_TR(0x741de8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741de9:{NFSU2_TR(0x741de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741df0:{NFSU2_TR(0x741df0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741df2:{NFSU2_TR(0x741df2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741df3:{NFSU2_TR(0x741df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B741dfa:{NFSU2_TR(0x741dfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B741dfe:{NFSU2_TR(0x741dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741e05;}}
}
B741e00:L741e00:{c.instructions+=2;NFSU2_TR(0x741e00);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B741e03:{NFSU2_TR(0x741e03);
{goto L741e22;}
}
B741e05:L741e05:{c.instructions+=3;NFSU2_TR(0x741e05);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B741e07:{NFSU2_TR(0x741e07);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741e09:{NFSU2_TR(0x741e09);
if(r1(R+518)){{goto L741e1e;}}
}
B741e0b:L741e0b:{c.instructions+=4;NFSU2_TR(0x741e0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e0c:{NFSU2_TR(0x741e0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B741e10:{NFSU2_TR(0x741e10);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B741e12:{NFSU2_TR(0x741e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741e13:L741e13:{c.instructions+=5;NFSU2_TR(0x741e13);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B741e15:{NFSU2_TR(0x741e15);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B741e19:{NFSU2_TR(0x741e19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741e1a:{NFSU2_TR(0x741e1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741e1c:{NFSU2_TR(0x741e1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741e13u);}goto L741e13;}}
}
B741e1e:L741e1e:{c.instructions+=2;NFSU2_TR(0x741e1e);
u8 U[1];
w1(U+0,u8(0x3dull));
s1(u32(r4(R+4)),r1(U+0));
}
B741e21:{NFSU2_TR(0x741e21);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B741e22:L741e22:{c.instructions+=17;NFSU2_TR(0x741e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B741e24:{NFSU2_TR(0x741e24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e25:{NFSU2_TR(0x741e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741e28:{NFSU2_TR(0x741e28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e29:{NFSU2_TR(0x741e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741e2c:{NFSU2_TR(0x741e2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e2d:{NFSU2_TR(0x741e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741e30:{NFSU2_TR(0x741e30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e31:{NFSU2_TR(0x741e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741e34:{NFSU2_TR(0x741e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741e37:{NFSU2_TR(0x741e37);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B741e38:{NFSU2_TR(0x741e38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e39:{NFSU2_TR(0x741e39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x76cull))));
}
B741e3e:{NFSU2_TR(0x741e3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e3f:{NFSU2_TR(0x741e3f);
u8 U[4];
w4(U+0,u32(0x7d281cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e44:{NFSU2_TR(0x741e44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e45:{NFSU2_TR(0x741e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741e4aull));
TAIL_STATIC(0x75c784u,75c);
}
B741e4a:L741e4a:{c.instructions+=6;NFSU2_TR(0x741e4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741e51:{NFSU2_TR(0x741e51);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B741e55:{NFSU2_TR(0x741e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e56:{NFSU2_TR(0x741e56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e57:{NFSU2_TR(0x741e57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e58:{NFSU2_TR(0x741e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741e5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741e5d:L741e5d:{c.instructions+=5;NFSU2_TR(0x741e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741e64:{NFSU2_TR(0x741e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B741e67:{NFSU2_TR(0x741e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741e68:{NFSU2_TR(0x741e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741e69:{NFSU2_TR(0x741e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741e6eull));
TAIL_STATIC(0x76115eu,761);
}
B741e6e:L741e6e:{c.instructions+=2;NFSU2_TR(0x741e6e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x148ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x148ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x148ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741e74:{NFSU2_TR(0x741e74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741e80:L741e80:{c.instructions+=6;NFSU2_TR(0x741e80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741e84:{NFSU2_TR(0x741e84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e85:{NFSU2_TR(0x741e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741e89:{NFSU2_TR(0x741e89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e8a:{NFSU2_TR(0x741e8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741e8b:{NFSU2_TR(0x741e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741e90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7414a0u);}goto L7414a0;}
}
B741e90:L741e90:{c.instructions+=3;NFSU2_TR(0x741e90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B741e93:{NFSU2_TR(0x741e93);
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
B741e95:{NFSU2_TR(0x741e95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741e99;}}
}
B741e97:L741e97:{c.instructions+=2;NFSU2_TR(0x741e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741e98:{NFSU2_TR(0x741e98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741e99:L741e99:{c.instructions+=2;NFSU2_TR(0x741e99);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741e9b:{NFSU2_TR(0x741e9b);
if(r1(R+518)){{goto L741eaa;}}
}
B741e9d:L741e9d:{c.instructions+=2;NFSU2_TR(0x741e9d);
w1(R+4,u8(0x20ull));
}
B741e9f:{NFSU2_TR(0x741e9f);
}
B741ea0:L741ea0:{c.instructions+=2;NFSU2_TR(0x741ea0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+4))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B741ea3:{NFSU2_TR(0x741ea3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L741eaa;}}
}
B741ea5:L741ea5:{c.instructions+=3;NFSU2_TR(0x741ea5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B741ea6:{NFSU2_TR(0x741ea6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741ea8:{NFSU2_TR(0x741ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741ea0u);}goto L741ea0;}}
}
B741eaa:L741eaa:{c.instructions+=6;NFSU2_TR(0x741eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741eae:{NFSU2_TR(0x741eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741eb2:{NFSU2_TR(0x741eb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741eb3:{NFSU2_TR(0x741eb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741eb4:{NFSU2_TR(0x741eb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741eb5:{NFSU2_TR(0x741eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741ebaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741eba:L741eba:{c.instructions+=3;NFSU2_TR(0x741eba);
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
B741ebd:{NFSU2_TR(0x741ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741ebe:{NFSU2_TR(0x741ebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741ec0:L741ec0:{c.instructions+=7;NFSU2_TR(0x741ec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ec1:{NFSU2_TR(0x741ec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741ec5:{NFSU2_TR(0x741ec5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741ec7:{NFSU2_TR(0x741ec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ec8:{NFSU2_TR(0x741ec8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B741eca:{NFSU2_TR(0x741eca);
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
B741ecc:{NFSU2_TR(0x741ecc);
if(r1(R+518)){{goto L741f14;}}
}
B741ece:L741ece:{c.instructions+=4;NFSU2_TR(0x741ece);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ecf:{NFSU2_TR(0x741ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B741ed3:{NFSU2_TR(0x741ed3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ed4:{NFSU2_TR(0x741ed4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B741ed8:L741ed8:{c.instructions+=3;NFSU2_TR(0x741ed8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741eda:{NFSU2_TR(0x741eda);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741edc:{NFSU2_TR(0x741edc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L741ee1;}}
}
B741ede:L741ede:{c.instructions+=2;NFSU2_TR(0x741ede);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741edf:{NFSU2_TR(0x741edf);
{goto L741f08;}
}
B741ee1:L741ee1:{c.instructions+=2;NFSU2_TR(0x741ee1);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3dull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3dull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741ee3:{NFSU2_TR(0x741ee3);
if(r1(R+518)){{goto L741f0d;}}
}
B741ee5:L741ee5:{c.instructions+=2;NFSU2_TR(0x741ee5);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3aull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3aull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3aull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B741ee7:{NFSU2_TR(0x741ee7);
if(r1(R+518)){{goto L741f0d;}}
}
B741ee9:L741ee9:{c.instructions+=4;NFSU2_TR(0x741ee9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741eea:{NFSU2_TR(0x741eea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741eeb:{NFSU2_TR(0x741eeb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741eec:{NFSU2_TR(0x741eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741ef1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741270u);}goto L741270;}
}
B741ef1:L741ef1:{c.instructions+=3;NFSU2_TR(0x741ef1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B741ef4:{NFSU2_TR(0x741ef4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741ef6:{NFSU2_TR(0x741ef6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741ef9;}}
}
B741ef8:L741ef8:{c.instructions+=1;NFSU2_TR(0x741ef8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741ef9:L741ef9:{c.instructions+=2;NFSU2_TR(0x741ef9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x20ull))));
}
B741efc:{NFSU2_TR(0x741efc);
if(r1(R+512)){{goto L741f08;}}
}
B741efe:L741efe:{c.instructions+=1;NFSU2_TR(0x741efe);
__builtin_memmove((R+28),(R+28),4);
}
B741f00:L741f00:{c.instructions+=4;NFSU2_TR(0x741f00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741f03:{NFSU2_TR(0x741f03);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741f04:{NFSU2_TR(0x741f04);
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
}
B741f06:{NFSU2_TR(0x741f06);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741f00u);}goto L741f00;}}
}
B741f08:L741f08:{c.instructions+=2;NFSU2_TR(0x741f08);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B741f0b:{NFSU2_TR(0x741f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741ed8u);}goto L741ed8;}}
}
B741f0d:L741f0d:{c.instructions+=6;NFSU2_TR(0x741f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741f0e:{NFSU2_TR(0x741f0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741f0f:{NFSU2_TR(0x741f0f);
__builtin_memmove((R+0),(R+28),4);
}
B741f11:{NFSU2_TR(0x741f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741f12:{NFSU2_TR(0x741f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741f13:{NFSU2_TR(0x741f13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741f14:L741f14:{c.instructions+=4;NFSU2_TR(0x741f14);
__builtin_memmove((R+0),(R+28),4);
}
B741f16:{NFSU2_TR(0x741f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741f17:{NFSU2_TR(0x741f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741f18:{NFSU2_TR(0x741f18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741f20:L741f20:{c.instructions+=13;NFSU2_TR(0x741f20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741f21:{NFSU2_TR(0x741f21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741f22:{NFSU2_TR(0x741f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B741f26:{NFSU2_TR(0x741f26);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741f28:{NFSU2_TR(0x741f28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f2a:{NFSU2_TR(0x741f2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741f2b:{NFSU2_TR(0x741f2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741f2c:{NFSU2_TR(0x741f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B741f30:{NFSU2_TR(0x741f30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741f31:{NFSU2_TR(0x741f31);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B741f35:{NFSU2_TR(0x741f35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741f39:{NFSU2_TR(0x741f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B741f41:{NFSU2_TR(0x741f41);
if(r1(R+518)){{goto L741fb8;}}
}
B741f43:L741f43:{c.instructions+=1;NFSU2_TR(0x741f43);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B741f47:L741f47:{c.instructions+=3;NFSU2_TR(0x741f47);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B741f48:{NFSU2_TR(0x741f48);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B741f4b:{NFSU2_TR(0x741f4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741fb8;}}
}
B741f4d:L741f4d:{c.instructions+=2;NFSU2_TR(0x741f4d);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f4f:{NFSU2_TR(0x741f4f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L741f6e;}}
}
B741f51:L741f51:{c.instructions+=7;NFSU2_TR(0x741f51);
__builtin_memmove((R+0),gp(0x819b60),1);
}
B741f56:{NFSU2_TR(0x741f56);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B741f58:{NFSU2_TR(0x741f58);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741f5a:{NFSU2_TR(0x741f5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741f5b:{NFSU2_TR(0x741f5b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B741f5c:{NFSU2_TR(0x741f5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f5e:{NFSU2_TR(0x741f5e);
if(r1(R+518)){{goto L741fb2;}}
}
B741f60:L741f60:{c.instructions+=2;NFSU2_TR(0x741f60);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f62:{NFSU2_TR(0x741f62);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L741fb2;}}
}
B741f64:L741f64:{c.instructions+=4;NFSU2_TR(0x741f64);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B741f67:{NFSU2_TR(0x741f67);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B741f68:{NFSU2_TR(0x741f68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f6a:{NFSU2_TR(0x741f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741f60u);}goto L741f60;}}
}
B741f6c:L741f6c:{c.instructions+=1;NFSU2_TR(0x741f6c);
{goto L741fb2;}
}
B741f6e:L741f6e:{c.instructions+=2;NFSU2_TR(0x741f6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f70:{NFSU2_TR(0x741f70);
if(r1(R+518)){{goto L741f78;}}
}
B741f72:L741f72:{c.instructions+=4;NFSU2_TR(0x741f72);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B741f74:{NFSU2_TR(0x741f74);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B741f75:{NFSU2_TR(0x741f75);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B741f76:{NFSU2_TR(0x741f76);
{goto L741fb2;}
}
B741f78:L741f78:{c.instructions+=3;NFSU2_TR(0x741f78);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741f7a:{NFSU2_TR(0x741f7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f7c:{NFSU2_TR(0x741f7c);
if(r1(R+518)){{goto L741fb2;}}
}
B741f7e:L741f7e:{c.instructions+=5;NFSU2_TR(0x741f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B741f81:{NFSU2_TR(0x741f81);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B741f82:{NFSU2_TR(0x741f82);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B741f85:{NFSU2_TR(0x741f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B741f89:{NFSU2_TR(0x741f89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741f8d;}}
}
B741f8b:L741f8b:{c.instructions+=2;NFSU2_TR(0x741f8b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B741f8c:{NFSU2_TR(0x741f8c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B741f8d:L741f8d:{c.instructions+=3;NFSU2_TR(0x741f8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741f8f:{NFSU2_TR(0x741f8f);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B741f92:{NFSU2_TR(0x741f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741fcb;}}
}
B741f94:L741f94:{c.instructions+=7;NFSU2_TR(0x741f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B741f97:{NFSU2_TR(0x741f97);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B741f9a:{NFSU2_TR(0x741f9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741f9b:{NFSU2_TR(0x741f9b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fa0:{NFSU2_TR(0x741fa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fa1:{NFSU2_TR(0x741fa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fa2:{NFSU2_TR(0x741fa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741fa7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741a50u);}goto L741a50;}
}
B741fa7:L741fa7:{c.instructions+=3;NFSU2_TR(0x741fa7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B741faa:{NFSU2_TR(0x741faa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741fac:{NFSU2_TR(0x741fac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741fb2;}}
}
B741fae:L741fae:{c.instructions+=2;NFSU2_TR(0x741fae);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B741fb0:{NFSU2_TR(0x741fb0);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B741fb2:L741fb2:{c.instructions+=3;NFSU2_TR(0x741fb2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B741fb4:{NFSU2_TR(0x741fb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741fb6:{NFSU2_TR(0x741fb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741f47u);}goto L741f47;}}
}
B741fb8:L741fb8:{c.instructions+=2;NFSU2_TR(0x741fb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B741fba:{NFSU2_TR(0x741fba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L741fbf;}}
}
B741fbc:L741fbc:{c.instructions+=1;NFSU2_TR(0x741fbc);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B741fbf:L741fbf:{c.instructions+=8;NFSU2_TR(0x741fbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741fc3:{NFSU2_TR(0x741fc3);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B741fc5:{NFSU2_TR(0x741fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B741fc6:{NFSU2_TR(0x741fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B741fc7:{NFSU2_TR(0x741fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B741fc8:{NFSU2_TR(0x741fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B741fc9:{NFSU2_TR(0x741fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B741fca:{NFSU2_TR(0x741fca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B741fcb:L741fcb:{c.instructions+=2;NFSU2_TR(0x741fcb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x64ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741fcd:{NFSU2_TR(0x741fcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741fe4;}}
}
B741fcf:L741fcf:{c.instructions+=7;NFSU2_TR(0x741fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B741fd2:{NFSU2_TR(0x741fd2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B741fd5:{NFSU2_TR(0x741fd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fd6:{NFSU2_TR(0x741fd6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fdb:{NFSU2_TR(0x741fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fdc:{NFSU2_TR(0x741fdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fdd:{NFSU2_TR(0x741fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741fe2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741690u);}goto L741690;}
}
B741fe2:L741fe2:{c.instructions+=1;NFSU2_TR(0x741fe2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741fa7u);}goto L741fa7;}
}
B741fe4:L741fe4:{c.instructions+=2;NFSU2_TR(0x741fe4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741fe6:{NFSU2_TR(0x741fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L741ffd;}}
}
B741fe8:L741fe8:{c.instructions+=7;NFSU2_TR(0x741fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B741feb:{NFSU2_TR(0x741feb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B741fee:{NFSU2_TR(0x741fee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741fef:{NFSU2_TR(0x741fef);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ff4:{NFSU2_TR(0x741ff4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ff5:{NFSU2_TR(0x741ff5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B741ff6:{NFSU2_TR(0x741ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x741ffbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741810u);}goto L741810;}
}
B741ffb:L741ffb:{c.instructions+=1;NFSU2_TR(0x741ffb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x741fa7u);}goto L741fa7;}
}
B741ffd:L741ffd:{c.instructions+=2;NFSU2_TR(0x741ffd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x66ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B741fff:{NFSU2_TR(0x741fff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x742016u,742);}
TAIL_STATIC(0x742001u,742);
}
XIT:NFSU2_TR_EXIT(0x741,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
