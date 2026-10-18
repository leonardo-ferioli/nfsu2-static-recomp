#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74f(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x742,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x742,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_742(u8* __restrict R,Cpu& c);
u32 page_742(Cpu& c){return body_742(c.regs.data(),c);}
__attribute__((noinline)) u32 body_742(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x742001:goto L742001;
case 0x742004:c.instructions+=6;goto B742004;
case 0x742007:c.instructions+=5;goto B742007;
case 0x742008:c.instructions+=4;goto B742008;
case 0x74200d:c.instructions+=3;goto B74200d;
case 0x74200e:c.instructions+=2;goto B74200e;
case 0x74200f:c.instructions+=1;goto B74200f;
case 0x742014:goto L742014;
case 0x742016:goto L742016;
case 0x742018:c.instructions+=1;goto B742018;
case 0x74201a:goto L74201a;
case 0x74201d:c.instructions+=6;goto B74201d;
case 0x742020:c.instructions+=5;goto B742020;
case 0x742021:c.instructions+=4;goto B742021;
case 0x742026:c.instructions+=3;goto B742026;
case 0x742027:c.instructions+=2;goto B742027;
case 0x742028:c.instructions+=1;goto B742028;
case 0x74202d:goto L74202d;
case 0x742032:goto L742032;
case 0x742034:c.instructions+=1;goto B742034;
case 0x742036:goto L742036;
case 0x742039:c.instructions+=3;goto B742039;
case 0x74203c:c.instructions+=2;goto B74203c;
case 0x742040:c.instructions+=1;goto B742040;
case 0x742045:goto L742045;
case 0x742047:c.instructions+=1;goto B742047;
case 0x742049:goto L742049;
case 0x74204c:c.instructions+=5;goto B74204c;
case 0x742050:c.instructions+=4;goto B742050;
case 0x742053:c.instructions+=3;goto B742053;
case 0x742054:c.instructions+=2;goto B742054;
case 0x742055:c.instructions+=1;goto B742055;
case 0x74205a:goto L74205a;
case 0x74205d:c.instructions+=2;goto B74205d;
case 0x74205f:c.instructions+=1;goto B74205f;
case 0x742061:goto L742061;
case 0x742062:c.instructions+=4;goto B742062;
case 0x742063:c.instructions+=3;goto B742063;
case 0x742064:c.instructions+=2;goto B742064;
case 0x742065:c.instructions+=1;goto B742065;
case 0x74206a:goto L74206a;
case 0x74206d:c.instructions+=1;goto B74206d;
case 0x742072:goto L742072;
case 0x742077:c.instructions+=1;goto B742077;
case 0x74207c:goto L74207c;
case 0x74207e:c.instructions+=1;goto B74207e;
case 0x742084:goto L742084;
case 0x742087:c.instructions+=4;goto B742087;
case 0x742089:c.instructions+=3;goto B742089;
case 0x74208c:c.instructions+=2;goto B74208c;
case 0x74208e:c.instructions+=1;goto B74208e;
case 0x742094:goto L742094;
case 0x742096:c.instructions+=1;goto B742096;
case 0x74209c:goto L74209c;
case 0x74209e:c.instructions+=6;goto B74209e;
case 0x7420a1:c.instructions+=5;goto B7420a1;
case 0x7420a2:c.instructions+=4;goto B7420a2;
case 0x7420a3:c.instructions+=3;goto B7420a3;
case 0x7420a4:c.instructions+=2;goto B7420a4;
case 0x7420a6:c.instructions+=1;goto B7420a6;
case 0x7420a8:goto L7420a8;
case 0x7420b0:goto L7420b0;
case 0x7420b4:c.instructions+=2;goto B7420b4;
case 0x7420b6:c.instructions+=1;goto B7420b6;
case 0x7420b8:goto L7420b8;
case 0x7420bc:c.instructions+=1;goto B7420bc;
case 0x7420bd:goto L7420bd;
case 0x7420bf:c.instructions+=4;goto B7420bf;
case 0x7420c1:c.instructions+=3;goto B7420c1;
case 0x7420c2:c.instructions+=2;goto B7420c2;
case 0x7420c7:c.instructions+=1;goto B7420c7;
case 0x7420c9:goto L7420c9;
case 0x7420ca:c.instructions+=1;goto B7420ca;
case 0x7420cc:goto L7420cc;
case 0x7420ce:c.instructions+=1;goto B7420ce;
case 0x7420d0:goto L7420d0;
case 0x7420d1:c.instructions+=1;goto B7420d1;
case 0x7420d4:goto L7420d4;
case 0x7420d6:c.instructions+=4;goto B7420d6;
case 0x7420d8:c.instructions+=3;goto B7420d8;
case 0x7420da:c.instructions+=2;goto B7420da;
case 0x7420dd:c.instructions+=1;goto B7420dd;
case 0x7420df:goto L7420df;
case 0x7420e0:goto L7420e0;
case 0x7420e3:c.instructions+=1;goto B7420e3;
case 0x7420e5:goto L7420e5;
case 0x7420e8:c.instructions+=6;goto B7420e8;
case 0x7420eb:c.instructions+=5;goto B7420eb;
case 0x7420ec:c.instructions+=4;goto B7420ec;
case 0x7420ef:c.instructions+=3;goto B7420ef;
case 0x7420f1:c.instructions+=2;goto B7420f1;
case 0x7420f4:c.instructions+=1;goto B7420f4;
case 0x7420f6:goto L7420f6;
case 0x7420f9:c.instructions+=2;goto B7420f9;
case 0x7420fa:c.instructions+=1;goto B7420fa;
case 0x742100:goto L742100;
case 0x742104:c.instructions+=2;goto B742104;
case 0x742106:c.instructions+=1;goto B742106;
case 0x742108:goto L742108;
case 0x74210c:c.instructions+=1;goto B74210c;
case 0x74210d:goto L74210d;
case 0x742110:c.instructions+=4;goto B742110;
case 0x742117:c.instructions+=3;goto B742117;
case 0x742119:c.instructions+=2;goto B742119;
case 0x74211b:c.instructions+=1;goto B74211b;
case 0x74211d:goto L74211d;
case 0x74211e:c.instructions+=1;goto B74211e;
case 0x742120:goto L742120;
case 0x742125:c.instructions+=7;goto B742125;
case 0x742127:c.instructions+=6;goto B742127;
case 0x74212b:c.instructions+=5;goto B74212b;
case 0x742132:c.instructions+=4;goto B742132;
case 0x742134:c.instructions+=3;goto B742134;
case 0x742135:c.instructions+=2;goto B742135;
case 0x742137:c.instructions+=1;goto B742137;
case 0x742139:goto L742139;
case 0x74213a:goto L74213a;
case 0x742140:goto L742140;
case 0x742141:c.instructions+=3;goto B742141;
case 0x742145:c.instructions+=2;goto B742145;
case 0x742147:c.instructions+=1;goto B742147;
case 0x742149:goto L742149;
case 0x74214d:goto L74214d;
case 0x74214e:c.instructions+=1;goto B74214e;
case 0x74214f:goto L74214f;
case 0x742151:goto L742151;
case 0x742153:c.instructions+=3;goto B742153;
case 0x742155:c.instructions+=2;goto B742155;
case 0x742158:c.instructions+=1;goto B742158;
case 0x74215a:goto L74215a;
case 0x74215d:c.instructions+=1;goto B74215d;
case 0x74215f:goto L74215f;
case 0x742161:c.instructions+=8;goto B742161;
case 0x742167:c.instructions+=7;goto B742167;
case 0x74216a:c.instructions+=6;goto B74216a;
case 0x74216d:c.instructions+=5;goto B74216d;
case 0x742172:c.instructions+=4;goto B742172;
case 0x742175:c.instructions+=3;goto B742175;
case 0x742177:c.instructions+=2;goto B742177;
case 0x742178:c.instructions+=1;goto B742178;
case 0x74217a:goto L74217a;
case 0x74217d:c.instructions+=1;goto B74217d;
case 0x74217f:goto L74217f;
case 0x742182:c.instructions+=2;goto B742182;
case 0x742183:c.instructions+=1;goto B742183;
case 0x742190:goto L742190;
case 0x742194:c.instructions+=2;goto B742194;
case 0x742196:c.instructions+=1;goto B742196;
case 0x742198:goto L742198;
case 0x74219a:c.instructions+=2;goto B74219a;
case 0x74219c:c.instructions+=1;goto B74219c;
case 0x74219e:goto L74219e;
case 0x7421a0:c.instructions+=1;goto B7421a0;
case 0x7421a2:goto L7421a2;
case 0x7421a7:goto L7421a7;
case 0x7421a9:c.instructions+=2;goto B7421a9;
case 0x7421ac:c.instructions+=1;goto B7421ac;
case 0x7421ae:goto L7421ae;
case 0x7421b1:c.instructions+=1;goto B7421b1;
case 0x7421b3:goto L7421b3;
case 0x7421b6:c.instructions+=5;goto B7421b6;
case 0x7421b9:c.instructions+=4;goto B7421b9;
case 0x7421bb:c.instructions+=3;goto B7421bb;
case 0x7421bc:c.instructions+=2;goto B7421bc;
case 0x7421c1:c.instructions+=1;goto B7421c1;
case 0x7421c3:goto L7421c3;
case 0x7421c4:goto L7421c4;
case 0x7421c8:goto L7421c8;
case 0x7421d0:goto L7421d0;
case 0x7421d1:c.instructions+=8;goto B7421d1;
case 0x7421d5:c.instructions+=7;goto B7421d5;
case 0x7421d6:c.instructions+=6;goto B7421d6;
case 0x7421d8:c.instructions+=5;goto B7421d8;
case 0x7421da:c.instructions+=4;goto B7421da;
case 0x7421db:c.instructions+=3;goto B7421db;
case 0x7421dc:c.instructions+=2;goto B7421dc;
case 0x7421e0:c.instructions+=1;goto B7421e0;
case 0x7421e2:goto L7421e2;
case 0x7421e5:c.instructions+=1;goto B7421e5;
case 0x7421e7:goto L7421e7;
case 0x7421ec:c.instructions+=2;goto B7421ec;
case 0x7421f0:c.instructions+=1;goto B7421f0;
case 0x7421f1:goto L7421f1;
case 0x7421f5:c.instructions+=3;goto B7421f5;
case 0x7421f7:c.instructions+=2;goto B7421f7;
case 0x7421fb:c.instructions+=1;goto B7421fb;
case 0x7421fd:goto L7421fd;
case 0x742200:goto L742200;
case 0x742202:c.instructions+=2;goto B742202;
case 0x742204:c.instructions+=1;goto B742204;
case 0x742206:goto L742206;
case 0x742208:c.instructions+=1;goto B742208;
case 0x74220a:goto L74220a;
case 0x74220d:c.instructions+=2;goto B74220d;
case 0x74220f:c.instructions+=1;goto B74220f;
case 0x742211:goto L742211;
case 0x742212:c.instructions+=1;goto B742212;
case 0x742214:goto L742214;
case 0x742217:c.instructions+=2;goto B742217;
case 0x742219:c.instructions+=1;goto B742219;
case 0x74221b:goto L74221b;
case 0x74221c:c.instructions+=3;goto B74221c;
case 0x74221d:c.instructions+=2;goto B74221d;
case 0x74221f:c.instructions+=1;goto B74221f;
case 0x742221:goto L742221;
case 0x742223:c.instructions+=1;goto B742223;
case 0x742225:goto L742225;
case 0x742229:c.instructions+=2;goto B742229;
case 0x74222b:c.instructions+=1;goto B74222b;
case 0x74222d:goto L74222d;
case 0x74222e:c.instructions+=5;goto B74222e;
case 0x74222f:c.instructions+=4;goto B74222f;
case 0x742232:c.instructions+=3;goto B742232;
case 0x742233:c.instructions+=2;goto B742233;
case 0x742234:c.instructions+=1;goto B742234;
case 0x742235:goto L742235;
case 0x742239:c.instructions+=2;goto B742239;
case 0x74223b:c.instructions+=1;goto B74223b;
case 0x74223d:goto L74223d;
case 0x742240:goto L742240;
case 0x742242:c.instructions+=3;goto B742242;
case 0x742243:c.instructions+=2;goto B742243;
case 0x742245:c.instructions+=1;goto B742245;
case 0x742247:goto L742247;
case 0x742248:c.instructions+=5;goto B742248;
case 0x742249:c.instructions+=4;goto B742249;
case 0x74224b:c.instructions+=3;goto B74224b;
case 0x74224c:c.instructions+=2;goto B74224c;
case 0x74224d:c.instructions+=1;goto B74224d;
case 0x74224e:goto L74224e;
case 0x742252:c.instructions+=3;goto B742252;
case 0x742257:c.instructions+=2;goto B742257;
case 0x742259:c.instructions+=1;goto B742259;
case 0x74225b:goto L74225b;
case 0x742260:goto L742260;
case 0x742262:c.instructions+=2;goto B742262;
case 0x742264:c.instructions+=1;goto B742264;
case 0x742266:goto L742266;
case 0x742267:c.instructions+=5;goto B742267;
case 0x74226a:c.instructions+=4;goto B74226a;
case 0x74226b:c.instructions+=3;goto B74226b;
case 0x74226c:c.instructions+=2;goto B74226c;
case 0x74226e:c.instructions+=1;goto B74226e;
case 0x742270:goto L742270;
case 0x742271:c.instructions+=6;goto B742271;
case 0x742274:c.instructions+=5;goto B742274;
case 0x742275:c.instructions+=4;goto B742275;
case 0x742278:c.instructions+=3;goto B742278;
case 0x742279:c.instructions+=2;goto B742279;
case 0x74227a:c.instructions+=1;goto B74227a;
case 0x74227b:goto L74227b;
case 0x74227f:c.instructions+=2;goto B74227f;
case 0x742281:c.instructions+=1;goto B742281;
case 0x742283:goto L742283;
case 0x742285:c.instructions+=3;goto B742285;
case 0x742287:c.instructions+=2;goto B742287;
case 0x742289:c.instructions+=1;goto B742289;
case 0x74228f:goto L74228f;
case 0x742290:goto L742290;
case 0x742292:c.instructions+=2;goto B742292;
case 0x742295:c.instructions+=1;goto B742295;
case 0x74229b:goto L74229b;
case 0x74229e:c.instructions+=2;goto B74229e;
case 0x7422a0:c.instructions+=1;goto B7422a0;
case 0x7422a6:goto L7422a6;
case 0x7422a9:c.instructions+=1;goto B7422a9;
case 0x7422ab:goto L7422ab;
case 0x7422af:c.instructions+=1;goto B7422af;
case 0x7422b1:goto L7422b1;
case 0x7422b5:c.instructions+=1;goto B7422b5;
case 0x7422b7:goto L7422b7;
case 0x7422ba:goto L7422ba;
case 0x7422bd:c.instructions+=4;goto B7422bd;
case 0x7422be:c.instructions+=3;goto B7422be;
case 0x7422bf:c.instructions+=2;goto B7422bf;
case 0x7422c1:c.instructions+=1;goto B7422c1;
case 0x7422c3:goto L7422c3;
case 0x7422c4:c.instructions+=4;goto B7422c4;
case 0x7422c5:c.instructions+=3;goto B7422c5;
case 0x7422c6:c.instructions+=2;goto B7422c6;
case 0x7422c7:c.instructions+=1;goto B7422c7;
case 0x7422c8:goto L7422c8;
case 0x7422c9:c.instructions+=3;goto B7422c9;
case 0x7422cd:c.instructions+=2;goto B7422cd;
case 0x7422d0:c.instructions+=1;goto B7422d0;
case 0x7422d2:goto L7422d2;
case 0x7422d3:c.instructions+=6;goto B7422d3;
case 0x7422d4:c.instructions+=5;goto B7422d4;
case 0x7422d5:c.instructions+=4;goto B7422d5;
case 0x7422d8:c.instructions+=3;goto B7422d8;
case 0x7422d9:c.instructions+=2;goto B7422d9;
case 0x7422da:c.instructions+=1;goto B7422da;
case 0x7422db:goto L7422db;
case 0x7422e0:c.instructions+=3;goto B7422e0;
case 0x7422e2:c.instructions+=2;goto B7422e2;
case 0x7422e4:c.instructions+=1;goto B7422e4;
case 0x7422e6:goto L7422e6;
case 0x7422e8:c.instructions+=2;goto B7422e8;
case 0x7422ea:c.instructions+=1;goto B7422ea;
case 0x7422ec:goto L7422ec;
case 0x7422ef:c.instructions+=1;goto B7422ef;
case 0x7422f1:goto L7422f1;
case 0x7422f4:c.instructions+=2;goto B7422f4;
case 0x7422f8:c.instructions+=1;goto B7422f8;
case 0x7422fa:goto L7422fa;
case 0x7422fd:c.instructions+=1;goto B7422fd;
case 0x7422ff:goto L7422ff;
case 0x742302:c.instructions+=2;goto B742302;
case 0x742304:c.instructions+=1;goto B742304;
case 0x742306:goto L742306;
case 0x742308:c.instructions+=3;goto B742308;
case 0x742309:c.instructions+=2;goto B742309;
case 0x74230c:c.instructions+=1;goto B74230c;
case 0x74230e:goto L74230e;
case 0x742311:c.instructions+=1;goto B742311;
case 0x742313:goto L742313;
case 0x742316:c.instructions+=2;goto B742316;
case 0x742319:c.instructions+=1;goto B742319;
case 0x74231b:goto L74231b;
case 0x74231e:c.instructions+=8;goto B74231e;
case 0x742324:c.instructions+=7;goto B742324;
case 0x742327:c.instructions+=6;goto B742327;
case 0x74232d:c.instructions+=5;goto B74232d;
case 0x74232f:c.instructions+=4;goto B74232f;
case 0x742333:c.instructions+=3;goto B742333;
case 0x742334:c.instructions+=2;goto B742334;
case 0x742337:c.instructions+=1;goto B742337;
case 0x742339:goto L742339;
case 0x74233d:goto L74233d;
case 0x74233f:c.instructions+=2;goto B74233f;
case 0x742340:c.instructions+=1;goto B742340;
case 0x742341:goto L742341;
case 0x742342:c.instructions+=2;goto B742342;
case 0x742344:c.instructions+=1;goto B742344;
case 0x742346:goto L742346;
case 0x742349:c.instructions+=2;goto B742349;
case 0x74234c:c.instructions+=1;goto B74234c;
case 0x74234d:goto L74234d;
case 0x74234e:c.instructions+=4;goto B74234e;
case 0x74234f:c.instructions+=3;goto B74234f;
case 0x742350:c.instructions+=2;goto B742350;
case 0x742351:c.instructions+=1;goto B742351;
case 0x742360:goto L742360;
case 0x742364:c.instructions+=4;goto B742364;
case 0x742366:c.instructions+=3;goto B742366;
case 0x742367:c.instructions+=2;goto B742367;
case 0x742368:c.instructions+=1;goto B742368;
case 0x74236a:goto L74236a;
case 0x74236e:c.instructions+=2;goto B74236e;
case 0x742370:c.instructions+=1;goto B742370;
case 0x742372:goto L742372;
case 0x742373:c.instructions+=3;goto B742373;
case 0x742376:c.instructions+=2;goto B742376;
case 0x742377:c.instructions+=1;goto B742377;
case 0x742378:goto L742378;
case 0x74237c:c.instructions+=2;goto B74237c;
case 0x74237e:c.instructions+=1;goto B74237e;
case 0x742380:goto L742380;
case 0x742383:goto L742383;
case 0x742385:c.instructions+=3;goto B742385;
case 0x742386:c.instructions+=2;goto B742386;
case 0x742388:c.instructions+=1;goto B742388;
case 0x74238a:goto L74238a;
case 0x74238b:c.instructions+=3;goto B74238b;
case 0x74238d:c.instructions+=2;goto B74238d;
case 0x74238e:c.instructions+=1;goto B74238e;
case 0x74238f:goto L74238f;
case 0x742393:c.instructions+=3;goto B742393;
case 0x742398:c.instructions+=2;goto B742398;
case 0x74239a:c.instructions+=1;goto B74239a;
case 0x74239c:goto L74239c;
case 0x7423a0:goto L7423a0;
case 0x7423a2:c.instructions+=2;goto B7423a2;
case 0x7423a4:c.instructions+=1;goto B7423a4;
case 0x7423a6:goto L7423a6;
case 0x7423a7:c.instructions+=5;goto B7423a7;
case 0x7423aa:c.instructions+=4;goto B7423aa;
case 0x7423ab:c.instructions+=3;goto B7423ab;
case 0x7423ac:c.instructions+=2;goto B7423ac;
case 0x7423ae:c.instructions+=1;goto B7423ae;
case 0x7423b0:goto L7423b0;
case 0x7423b1:c.instructions+=4;goto B7423b1;
case 0x7423b4:c.instructions+=3;goto B7423b4;
case 0x7423b7:c.instructions+=2;goto B7423b7;
case 0x7423b8:c.instructions+=1;goto B7423b8;
case 0x7423b9:goto L7423b9;
case 0x7423bb:c.instructions+=3;goto B7423bb;
case 0x7423bd:c.instructions+=2;goto B7423bd;
case 0x7423be:c.instructions+=1;goto B7423be;
case 0x7423c0:goto L7423c0;
case 0x7423c4:c.instructions+=2;goto B7423c4;
case 0x7423c6:c.instructions+=1;goto B7423c6;
case 0x7423c8:goto L7423c8;
case 0x7423cb:c.instructions+=3;goto B7423cb;
case 0x7423ce:c.instructions+=2;goto B7423ce;
case 0x7423d1:c.instructions+=1;goto B7423d1;
case 0x7423d3:goto L7423d3;
case 0x7423d6:c.instructions+=3;goto B7423d6;
case 0x7423d7:c.instructions+=2;goto B7423d7;
case 0x7423da:c.instructions+=1;goto B7423da;
case 0x7423dc:goto L7423dc;
case 0x7423de:c.instructions+=10;goto B7423de;
case 0x7423df:c.instructions+=9;goto B7423df;
case 0x7423e2:c.instructions+=8;goto B7423e2;
case 0x7423e3:c.instructions+=7;goto B7423e3;
case 0x7423e6:c.instructions+=6;goto B7423e6;
case 0x7423e7:c.instructions+=5;goto B7423e7;
case 0x7423e9:c.instructions+=4;goto B7423e9;
case 0x7423ea:c.instructions+=3;goto B7423ea;
case 0x7423ed:c.instructions+=2;goto B7423ed;
case 0x7423ee:c.instructions+=1;goto B7423ee;
case 0x7423ef:goto L7423ef;
case 0x7423f3:c.instructions+=2;goto B7423f3;
case 0x7423f6:c.instructions+=1;goto B7423f6;
case 0x7423f8:goto L7423f8;
case 0x7423f9:c.instructions+=4;goto B7423f9;
case 0x7423fa:c.instructions+=3;goto B7423fa;
case 0x7423fd:c.instructions+=2;goto B7423fd;
case 0x7423fe:c.instructions+=1;goto B7423fe;
case 0x7423ff:goto L7423ff;
case 0x742400:c.instructions+=3;goto B742400;
case 0x742403:c.instructions+=2;goto B742403;
case 0x742404:c.instructions+=1;goto B742404;
case 0x742409:goto L742409;
case 0x74240c:c.instructions+=5;goto B74240c;
case 0x742410:c.instructions+=4;goto B742410;
case 0x742411:c.instructions+=3;goto B742411;
case 0x742412:c.instructions+=2;goto B742412;
case 0x742413:c.instructions+=1;goto B742413;
case 0x742414:goto L742414;
case 0x742416:c.instructions+=1;goto B742416;
case 0x742418:goto L742418;
case 0x74241a:c.instructions+=3;goto B74241a;
case 0x74241e:c.instructions+=2;goto B74241e;
case 0x74241f:c.instructions+=1;goto B74241f;
case 0x742421:goto L742421;
case 0x742426:c.instructions+=1;goto B742426;
case 0x74242a:goto L74242a;
case 0x74242e:c.instructions+=2;goto B74242e;
case 0x742430:c.instructions+=1;goto B742430;
case 0x742432:goto L742432;
case 0x742434:c.instructions+=3;goto B742434;
case 0x742436:c.instructions+=2;goto B742436;
case 0x742438:c.instructions+=1;goto B742438;
case 0x74243e:goto L74243e;
case 0x742440:goto L742440;
case 0x742442:c.instructions+=2;goto B742442;
case 0x742445:c.instructions+=1;goto B742445;
case 0x74244b:goto L74244b;
case 0x74244e:c.instructions+=1;goto B74244e;
case 0x742450:goto L742450;
case 0x742454:c.instructions+=1;goto B742454;
case 0x742456:goto L742456;
case 0x74245a:c.instructions+=1;goto B74245a;
case 0x74245c:goto L74245c;
case 0x74245f:goto L74245f;
case 0x742462:c.instructions+=4;goto B742462;
case 0x742463:c.instructions+=3;goto B742463;
case 0x742464:c.instructions+=2;goto B742464;
case 0x742466:c.instructions+=1;goto B742466;
case 0x742468:goto L742468;
case 0x742469:c.instructions+=3;goto B742469;
case 0x74246a:c.instructions+=2;goto B74246a;
case 0x74246b:c.instructions+=1;goto B74246b;
case 0x74246c:goto L74246c;
case 0x74246d:c.instructions+=3;goto B74246d;
case 0x742471:c.instructions+=2;goto B742471;
case 0x742474:c.instructions+=1;goto B742474;
case 0x742476:goto L742476;
case 0x742477:c.instructions+=5;goto B742477;
case 0x742478:c.instructions+=4;goto B742478;
case 0x742479:c.instructions+=3;goto B742479;
case 0x74247c:c.instructions+=2;goto B74247c;
case 0x74247d:c.instructions+=1;goto B74247d;
case 0x74247e:goto L74247e;
case 0x742483:c.instructions+=3;goto B742483;
case 0x742485:c.instructions+=2;goto B742485;
case 0x742487:c.instructions+=1;goto B742487;
case 0x742489:goto L742489;
case 0x742490:goto L742490;
case 0x742492:c.instructions+=2;goto B742492;
case 0x742496:c.instructions+=1;goto B742496;
case 0x742498:goto L742498;
case 0x74249b:c.instructions+=1;goto B74249b;
case 0x74249d:goto L74249d;
case 0x7424a0:c.instructions+=1;goto B7424a0;
case 0x7424a2:goto L7424a2;
case 0x7424a5:c.instructions+=2;goto B7424a5;
case 0x7424a7:c.instructions+=1;goto B7424a7;
case 0x7424a9:goto L7424a9;
case 0x7424ab:c.instructions+=3;goto B7424ab;
case 0x7424ac:c.instructions+=2;goto B7424ac;
case 0x7424af:c.instructions+=1;goto B7424af;
case 0x7424b1:goto L7424b1;
case 0x7424b4:c.instructions+=1;goto B7424b4;
case 0x7424b6:goto L7424b6;
case 0x7424b9:c.instructions+=2;goto B7424b9;
case 0x7424bc:c.instructions+=1;goto B7424bc;
case 0x7424be:goto L7424be;
case 0x7424c1:c.instructions+=7;goto B7424c1;
case 0x7424c7:c.instructions+=6;goto B7424c7;
case 0x7424ca:c.instructions+=5;goto B7424ca;
case 0x7424d0:c.instructions+=4;goto B7424d0;
case 0x7424d2:c.instructions+=3;goto B7424d2;
case 0x7424d3:c.instructions+=2;goto B7424d3;
case 0x7424d6:c.instructions+=1;goto B7424d6;
case 0x7424d8:goto L7424d8;
case 0x7424da:c.instructions+=2;goto B7424da;
case 0x7424db:c.instructions+=1;goto B7424db;
case 0x7424dc:goto L7424dc;
case 0x7424dd:c.instructions+=2;goto B7424dd;
case 0x7424df:c.instructions+=1;goto B7424df;
case 0x7424e1:goto L7424e1;
case 0x7424e4:c.instructions+=2;goto B7424e4;
case 0x7424e7:c.instructions+=1;goto B7424e7;
case 0x7424e8:goto L7424e8;
case 0x7424e9:c.instructions+=3;goto B7424e9;
case 0x7424ea:c.instructions+=2;goto B7424ea;
case 0x7424eb:c.instructions+=1;goto B7424eb;
case 0x7424f0:goto L7424f0;
case 0x7424f4:c.instructions+=2;goto B7424f4;
case 0x7424f6:c.instructions+=1;goto B7424f6;
case 0x7424fc:goto L7424fc;
case 0x7424fe:c.instructions+=2;goto B7424fe;
case 0x742501:c.instructions+=1;goto B742501;
case 0x742503:goto L742503;
case 0x742506:c.instructions+=1;goto B742506;
case 0x74250c:goto L74250c;
case 0x74250d:c.instructions+=3;goto B74250d;
case 0x742511:c.instructions+=2;goto B742511;
case 0x742513:c.instructions+=1;goto B742513;
case 0x742515:goto L742515;
case 0x742517:c.instructions+=2;goto B742517;
case 0x74251a:c.instructions+=1;goto B74251a;
case 0x74251c:goto L74251c;
case 0x74251f:c.instructions+=3;goto B74251f;
case 0x742520:c.instructions+=2;goto B742520;
case 0x742523:c.instructions+=1;goto B742523;
case 0x742525:goto L742525;
case 0x742529:c.instructions+=1;goto B742529;
case 0x74252b:goto L74252b;
case 0x74252e:c.instructions+=4;goto B74252e;
case 0x742531:c.instructions+=3;goto B742531;
case 0x742532:c.instructions+=2;goto B742532;
case 0x742535:c.instructions+=1;goto B742535;
case 0x742537:goto L742537;
case 0x742538:c.instructions+=1;goto B742538;
case 0x742539:goto L742539;
case 0x74253c:c.instructions+=3;goto B74253c;
case 0x74253f:c.instructions+=2;goto B74253f;
case 0x742542:c.instructions+=1;goto B742542;
case 0x742544:goto L742544;
case 0x742547:c.instructions+=3;goto B742547;
case 0x742548:c.instructions+=2;goto B742548;
case 0x74254b:c.instructions+=1;goto B74254b;
case 0x74254d:goto L74254d;
case 0x74254f:c.instructions+=8;goto B74254f;
case 0x742550:c.instructions+=7;goto B742550;
case 0x742553:c.instructions+=6;goto B742553;
case 0x742554:c.instructions+=5;goto B742554;
case 0x742557:c.instructions+=4;goto B742557;
case 0x742559:c.instructions+=3;goto B742559;
case 0x74255c:c.instructions+=2;goto B74255c;
case 0x74255d:c.instructions+=1;goto B74255d;
case 0x74255e:goto L74255e;
case 0x74255f:c.instructions+=3;goto B74255f;
case 0x742563:c.instructions+=2;goto B742563;
case 0x742566:c.instructions+=1;goto B742566;
case 0x742568:goto L742568;
case 0x74256b:c.instructions+=1;goto B74256b;
case 0x74256c:goto L74256c;
case 0x74256d:c.instructions+=1;goto B74256d;
case 0x74256e:goto L74256e;
case 0x742570:c.instructions+=3;goto B742570;
case 0x742573:c.instructions+=2;goto B742573;
case 0x742574:c.instructions+=1;goto B742574;
case 0x742576:goto L742576;
case 0x742577:c.instructions+=2;goto B742577;
case 0x742579:c.instructions+=1;goto B742579;
case 0x74257b:goto L74257b;
case 0x742580:goto L742580;
case 0x742582:c.instructions+=2;goto B742582;
case 0x742585:c.instructions+=1;goto B742585;
case 0x742587:goto L742587;
case 0x74258a:c.instructions+=2;goto B74258a;
case 0x74258d:c.instructions+=1;goto B74258d;
case 0x74258f:goto L74258f;
case 0x742592:c.instructions+=8;goto B742592;
case 0x742598:c.instructions+=7;goto B742598;
case 0x74259b:c.instructions+=6;goto B74259b;
case 0x7425a1:c.instructions+=5;goto B7425a1;
case 0x7425a2:c.instructions+=4;goto B7425a2;
case 0x7425a6:c.instructions+=3;goto B7425a6;
case 0x7425a9:c.instructions+=2;goto B7425a9;
case 0x7425ab:c.instructions+=1;goto B7425ab;
case 0x7425ad:goto L7425ad;
case 0x7425ae:c.instructions+=3;goto B7425ae;
case 0x7425af:c.instructions+=2;goto B7425af;
case 0x7425b0:c.instructions+=1;goto B7425b0;
case 0x7425b1:goto L7425b1;
case 0x7425b4:c.instructions+=3;goto B7425b4;
case 0x7425b5:c.instructions+=2;goto B7425b5;
case 0x7425b7:c.instructions+=1;goto B7425b7;
case 0x7425bc:goto L7425bc;
case 0x7425bf:goto L7425bf;
case 0x7425c0:c.instructions+=3;goto B7425c0;
case 0x7425c1:c.instructions+=2;goto B7425c1;
case 0x7425c2:c.instructions+=1;goto B7425c2;
case 0x7425c3:goto L7425c3;
case 0x7425c6:c.instructions+=1;goto B7425c6;
case 0x7425d0:goto L7425d0;
case 0x7425d6:c.instructions+=7;goto B7425d6;
case 0x7425db:c.instructions+=6;goto B7425db;
case 0x7425e2:c.instructions+=5;goto B7425e2;
case 0x7425e9:c.instructions+=4;goto B7425e9;
case 0x7425f0:c.instructions+=3;goto B7425f0;
case 0x7425f2:c.instructions+=2;goto B7425f2;
case 0x7425f5:c.instructions+=1;goto B7425f5;
case 0x7425f7:goto L7425f7;
case 0x7425fd:c.instructions+=2;goto B7425fd;
case 0x742601:c.instructions+=1;goto B742601;
case 0x742603:goto L742603;
case 0x742606:c.instructions+=1;goto B742606;
case 0x74260a:goto L74260a;
case 0x74260b:c.instructions+=4;goto B74260b;
case 0x74260c:c.instructions+=3;goto B74260c;
case 0x742613:c.instructions+=2;goto B742613;
case 0x742615:c.instructions+=1;goto B742615;
case 0x742617:goto L742617;
case 0x742622:c.instructions+=1;goto B742622;
case 0x742629:goto L742629;
case 0x74262b:c.instructions+=1;goto B74262b;
case 0x74262d:goto L74262d;
case 0x742631:c.instructions+=3;goto B742631;
case 0x742633:c.instructions+=2;goto B742633;
case 0x74263a:c.instructions+=1;goto B74263a;
case 0x74263e:goto L74263e;
case 0x742645:c.instructions+=3;goto B742645;
case 0x742647:c.instructions+=2;goto B742647;
case 0x742649:c.instructions+=1;goto B742649;
case 0x74264f:goto L74264f;
case 0x742650:c.instructions+=1;goto B742650;
case 0x742651:goto L742651;
case 0x742653:c.instructions+=1;goto B742653;
case 0x742655:goto L742655;
case 0x742656:c.instructions+=2;goto B742656;
case 0x74265d:c.instructions+=1;goto B74265d;
case 0x742660:goto L742660;
case 0x742662:c.instructions+=2;goto B742662;
case 0x742664:c.instructions+=1;goto B742664;
case 0x742666:goto L742666;
case 0x742667:c.instructions+=2;goto B742667;
case 0x742669:c.instructions+=1;goto B742669;
case 0x74266b:goto L74266b;
case 0x742672:goto L742672;
case 0x742674:c.instructions+=4;goto B742674;
case 0x742676:c.instructions+=3;goto B742676;
case 0x742678:c.instructions+=2;goto B742678;
case 0x74267a:c.instructions+=1;goto B74267a;
case 0x74267c:goto L74267c;
case 0x742680:goto L742680;
case 0x742682:c.instructions+=1;goto B742682;
case 0x742684:goto L742684;
case 0x742687:c.instructions+=6;goto B742687;
case 0x74268b:c.instructions+=5;goto B74268b;
case 0x74268c:c.instructions+=4;goto B74268c;
case 0x74268f:c.instructions+=3;goto B74268f;
case 0x742691:c.instructions+=2;goto B742691;
case 0x742693:c.instructions+=1;goto B742693;
case 0x742695:goto L742695;
case 0x74269c:goto L74269c;
case 0x74269e:c.instructions+=3;goto B74269e;
case 0x7426a0:c.instructions+=2;goto B7426a0;
case 0x7426a3:c.instructions+=1;goto B7426a3;
case 0x7426a5:goto L7426a5;
case 0x7426a7:c.instructions+=2;goto B7426a7;
case 0x7426a9:c.instructions+=1;goto B7426a9;
case 0x7426ab:goto L7426ab;
case 0x7426b0:goto L7426b0;
case 0x7426b4:goto L7426b4;
case 0x7426b7:c.instructions+=1;goto B7426b7;
case 0x7426b9:goto L7426b9;
case 0x7426be:goto L7426be;
case 0x7426c1:c.instructions+=1;goto B7426c1;
case 0x7426c3:goto L7426c3;
case 0x7426c8:goto L7426c8;
case 0x7426cb:c.instructions+=1;goto B7426cb;
case 0x7426cd:goto L7426cd;
case 0x7426d2:c.instructions+=1;goto B7426d2;
case 0x7426d4:goto L7426d4;
case 0x7426d6:c.instructions+=1;goto B7426d6;
case 0x7426dc:goto L7426dc;
case 0x7426de:c.instructions+=2;goto B7426de;
case 0x7426e1:c.instructions+=1;goto B7426e1;
case 0x7426e3:goto L7426e3;
case 0x7426e4:c.instructions+=1;goto B7426e4;
case 0x7426eb:goto L7426eb;
case 0x7426ed:c.instructions+=1;goto B7426ed;
case 0x7426f0:goto L7426f0;
case 0x7426f2:c.instructions+=2;goto B7426f2;
case 0x7426f5:c.instructions+=1;goto B7426f5;
case 0x7426f7:goto L7426f7;
case 0x7426fa:c.instructions+=7;goto B7426fa;
case 0x742701:c.instructions+=6;goto B742701;
case 0x742704:c.instructions+=5;goto B742704;
case 0x742706:c.instructions+=4;goto B742706;
case 0x742707:c.instructions+=3;goto B742707;
case 0x742708:c.instructions+=2;goto B742708;
case 0x74270a:c.instructions+=1;goto B74270a;
case 0x74270c:goto L74270c;
case 0x74270e:goto L74270e;
case 0x742710:c.instructions+=2;goto B742710;
case 0x742717:c.instructions+=1;goto B742717;
case 0x742719:goto L742719;
case 0x74271c:c.instructions+=1;goto B74271c;
case 0x74271e:goto L74271e;
case 0x74271f:goto L74271f;
case 0x742726:goto L742726;
case 0x742729:c.instructions+=1;goto B742729;
case 0x74272b:goto L74272b;
case 0x74272d:goto L74272d;
case 0x742730:c.instructions+=1;goto B742730;
case 0x742732:goto L742732;
case 0x742736:c.instructions+=3;goto B742736;
case 0x742738:c.instructions+=2;goto B742738;
case 0x742739:c.instructions+=1;goto B742739;
case 0x74273d:goto L74273d;
case 0x742740:c.instructions+=1;goto B742740;
case 0x742742:goto L742742;
case 0x742746:c.instructions+=3;goto B742746;
case 0x742749:c.instructions+=2;goto B742749;
case 0x74274c:c.instructions+=1;goto B74274c;
case 0x742750:goto L742750;
case 0x742753:c.instructions+=1;goto B742753;
case 0x742755:goto L742755;
case 0x742759:c.instructions+=3;goto B742759;
case 0x74275b:c.instructions+=2;goto B74275b;
case 0x74275e:c.instructions+=1;goto B74275e;
case 0x742762:goto L742762;
case 0x742765:c.instructions+=1;goto B742765;
case 0x74276b:goto L74276b;
case 0x74276d:c.instructions+=1;goto B74276d;
case 0x742773:goto L742773;
case 0x742777:c.instructions+=3;goto B742777;
case 0x74277c:c.instructions+=2;goto B74277c;
case 0x74277e:c.instructions+=1;goto B74277e;
case 0x742780:goto L742780;
case 0x742782:c.instructions+=2;goto B742782;
case 0x742784:c.instructions+=1;goto B742784;
case 0x742786:goto L742786;
case 0x742788:c.instructions+=1;goto B742788;
case 0x74278a:goto L74278a;
case 0x74278d:c.instructions+=2;goto B74278d;
case 0x74278f:c.instructions+=1;goto B74278f;
case 0x742791:goto L742791;
case 0x742793:c.instructions+=1;goto B742793;
case 0x742795:goto L742795;
case 0x742799:c.instructions+=8;goto B742799;
case 0x74279d:c.instructions+=7;goto B74279d;
case 0x7427a3:c.instructions+=6;goto B7427a3;
case 0x7427a9:c.instructions+=5;goto B7427a9;
case 0x7427ac:c.instructions+=4;goto B7427ac;
case 0x7427ae:c.instructions+=3;goto B7427ae;
case 0x7427af:c.instructions+=2;goto B7427af;
case 0x7427b0:c.instructions+=1;goto B7427b0;
case 0x7427b2:goto L7427b2;
case 0x7427b3:c.instructions+=4;goto B7427b3;
case 0x7427b5:c.instructions+=3;goto B7427b5;
case 0x7427b6:c.instructions+=2;goto B7427b6;
case 0x7427b7:c.instructions+=1;goto B7427b7;
case 0x7427b9:goto L7427b9;
case 0x7427bb:c.instructions+=2;goto B7427bb;
case 0x7427c2:c.instructions+=1;goto B7427c2;
case 0x7427c4:goto L7427c4;
case 0x7427c8:c.instructions+=7;goto B7427c8;
case 0x7427cb:c.instructions+=6;goto B7427cb;
case 0x7427cd:c.instructions+=5;goto B7427cd;
case 0x7427cf:c.instructions+=4;goto B7427cf;
case 0x7427d1:c.instructions+=3;goto B7427d1;
case 0x7427d3:c.instructions+=2;goto B7427d3;
case 0x7427d6:c.instructions+=1;goto B7427d6;
case 0x7427d8:goto L7427d8;
case 0x7427da:goto L7427da;
case 0x7427dc:c.instructions+=1;goto B7427dc;
case 0x7427df:goto L7427df;
case 0x7427e1:goto L7427e1;
case 0x7427e8:c.instructions+=1;goto B7427e8;
case 0x7427ea:goto L7427ea;
case 0x7427ee:c.instructions+=6;goto B7427ee;
case 0x7427f0:c.instructions+=5;goto B7427f0;
case 0x7427f2:c.instructions+=4;goto B7427f2;
case 0x7427f4:c.instructions+=3;goto B7427f4;
case 0x7427fb:c.instructions+=2;goto B7427fb;
case 0x7427ff:c.instructions+=1;goto B7427ff;
case 0x742801:goto L742801;
case 0x742802:c.instructions+=1;goto B742802;
case 0x742809:goto L742809;
case 0x74280d:c.instructions+=2;goto B74280d;
case 0x742811:c.instructions+=1;goto B742811;
case 0x742813:goto L742813;
case 0x742816:c.instructions+=4;goto B742816;
case 0x742817:c.instructions+=3;goto B742817;
case 0x742819:c.instructions+=2;goto B742819;
case 0x742820:c.instructions+=1;goto B742820;
case 0x742822:goto L742822;
case 0x742823:c.instructions+=1;goto B742823;
case 0x74282a:goto L74282a;
case 0x74282c:c.instructions+=2;goto B74282c;
case 0x74282e:c.instructions+=1;goto B74282e;
case 0x742834:goto L742834;
case 0x742835:c.instructions+=1;goto B742835;
case 0x742836:goto L742836;
case 0x74283d:c.instructions+=6;goto B74283d;
case 0x742841:c.instructions+=5;goto B742841;
case 0x742843:c.instructions+=4;goto B742843;
case 0x74284a:c.instructions+=3;goto B74284a;
case 0x74284b:c.instructions+=2;goto B74284b;
case 0x74284c:c.instructions+=1;goto B74284c;
case 0x742851:goto L742851;
case 0x742857:c.instructions+=1;goto B742857;
case 0x742860:goto L742860;
case 0x742863:c.instructions+=7;goto B742863;
case 0x742864:c.instructions+=6;goto B742864;
case 0x742865:c.instructions+=5;goto B742865;
case 0x742866:c.instructions+=4;goto B742866;
case 0x74286a:c.instructions+=3;goto B74286a;
case 0x74286c:c.instructions+=2;goto B74286c;
case 0x74286e:c.instructions+=1;goto B74286e;
case 0x742874:goto L742874;
case 0x742876:c.instructions+=2;goto B742876;
case 0x742879:c.instructions+=1;goto B742879;
case 0x74287b:goto L74287b;
case 0x74287e:c.instructions+=3;goto B74287e;
case 0x74287f:c.instructions+=2;goto B74287f;
case 0x742882:c.instructions+=1;goto B742882;
case 0x742888:goto L742888;
case 0x742890:goto L742890;
case 0x742893:c.instructions+=7;goto B742893;
case 0x74289a:c.instructions+=6;goto B74289a;
case 0x74289d:c.instructions+=5;goto B74289d;
case 0x7428a0:c.instructions+=4;goto B7428a0;
case 0x7428a2:c.instructions+=3;goto B7428a2;
case 0x7428a3:c.instructions+=2;goto B7428a3;
case 0x7428a6:c.instructions+=1;goto B7428a6;
case 0x7428a8:goto L7428a8;
case 0x7428ad:goto L7428ad;
case 0x7428b0:c.instructions+=1;goto B7428b0;
case 0x7428b6:goto L7428b6;
case 0x7428b9:c.instructions+=1;goto B7428b9;
case 0x7428bf:goto L7428bf;
case 0x7428c1:c.instructions+=3;goto B7428c1;
case 0x7428c5:c.instructions+=2;goto B7428c5;
case 0x7428c7:c.instructions+=1;goto B7428c7;
case 0x7428cc:goto L7428cc;
case 0x7428cf:c.instructions+=1;goto B7428cf;
case 0x7428d1:goto L7428d1;
case 0x7428d5:c.instructions+=1;goto B7428d5;
case 0x7428da:goto L7428da;
case 0x7428dd:c.instructions+=1;goto B7428dd;
case 0x7428e3:goto L7428e3;
case 0x7428e5:c.instructions+=14;goto B7428e5;
case 0x7428e9:c.instructions+=13;goto B7428e9;
case 0x7428ed:c.instructions+=12;goto B7428ed;
case 0x7428f1:c.instructions+=11;goto B7428f1;
case 0x7428f5:c.instructions+=10;goto B7428f5;
case 0x7428f9:c.instructions+=9;goto B7428f9;
case 0x7428fd:c.instructions+=8;goto B7428fd;
case 0x742901:c.instructions+=7;goto B742901;
case 0x742905:c.instructions+=6;goto B742905;
case 0x742909:c.instructions+=5;goto B742909;
case 0x74290e:c.instructions+=4;goto B74290e;
case 0x742912:c.instructions+=3;goto B742912;
case 0x742914:c.instructions+=2;goto B742914;
case 0x74291c:c.instructions+=1;goto B74291c;
case 0x742921:goto L742921;
case 0x742923:c.instructions+=2;goto B742923;
case 0x742926:c.instructions+=1;goto B742926;
case 0x742928:goto L742928;
case 0x74292b:c.instructions+=1;goto B74292b;
case 0x74292d:goto L74292d;
case 0x74292f:c.instructions+=1;goto B74292f;
case 0x742931:goto L742931;
case 0x742932:goto L742932;
case 0x742937:c.instructions+=2;goto B742937;
case 0x74293b:c.instructions+=1;goto B74293b;
case 0x742940:goto L742940;
case 0x742942:c.instructions+=2;goto B742942;
case 0x742945:c.instructions+=1;goto B742945;
case 0x742947:goto L742947;
case 0x74294a:c.instructions+=1;goto B74294a;
case 0x74294c:goto L74294c;
case 0x74294e:c.instructions+=1;goto B74294e;
case 0x742950:goto L742950;
case 0x742951:goto L742951;
case 0x742956:c.instructions+=2;goto B742956;
case 0x74295a:c.instructions+=1;goto B74295a;
case 0x74295f:goto L74295f;
case 0x742961:c.instructions+=2;goto B742961;
case 0x742964:c.instructions+=1;goto B742964;
case 0x742966:goto L742966;
case 0x742969:c.instructions+=1;goto B742969;
case 0x74296b:goto L74296b;
case 0x74296d:c.instructions+=1;goto B74296d;
case 0x74296f:goto L74296f;
case 0x742970:goto L742970;
case 0x742975:c.instructions+=2;goto B742975;
case 0x742979:c.instructions+=1;goto B742979;
case 0x74297e:goto L74297e;
case 0x742980:c.instructions+=2;goto B742980;
case 0x742983:c.instructions+=1;goto B742983;
case 0x742985:goto L742985;
case 0x742988:c.instructions+=1;goto B742988;
case 0x74298a:goto L74298a;
case 0x74298c:c.instructions+=1;goto B74298c;
case 0x74298e:goto L74298e;
case 0x74298f:goto L74298f;
case 0x742994:c.instructions+=2;goto B742994;
case 0x742998:c.instructions+=1;goto B742998;
case 0x74299d:goto L74299d;
case 0x74299f:c.instructions+=2;goto B74299f;
case 0x7429a2:c.instructions+=1;goto B7429a2;
case 0x7429a4:goto L7429a4;
case 0x7429a7:c.instructions+=1;goto B7429a7;
case 0x7429a9:goto L7429a9;
case 0x7429ab:c.instructions+=1;goto B7429ab;
case 0x7429ad:goto L7429ad;
case 0x7429ae:goto L7429ae;
case 0x7429b3:c.instructions+=2;goto B7429b3;
case 0x7429b7:c.instructions+=1;goto B7429b7;
case 0x7429bc:goto L7429bc;
case 0x7429c0:c.instructions+=3;goto B7429c0;
case 0x7429c5:c.instructions+=2;goto B7429c5;
case 0x7429c9:c.instructions+=1;goto B7429c9;
case 0x7429cb:goto L7429cb;
case 0x7429d0:c.instructions+=1;goto B7429d0;
case 0x7429d2:goto L7429d2;
case 0x7429d5:c.instructions+=1;goto B7429d5;
case 0x7429d7:goto L7429d7;
case 0x7429da:c.instructions+=1;goto B7429da;
case 0x7429dc:goto L7429dc;
case 0x7429e0:c.instructions+=2;goto B7429e0;
case 0x7429e3:c.instructions+=1;goto B7429e3;
case 0x7429e5:goto L7429e5;
case 0x7429e8:c.instructions+=1;goto B7429e8;
case 0x7429ea:goto L7429ea;
case 0x7429ec:goto L7429ec;
case 0x7429f0:c.instructions+=2;goto B7429f0;
case 0x7429f2:c.instructions+=1;goto B7429f2;
case 0x7429f4:goto L7429f4;
case 0x7429f7:c.instructions+=1;goto B7429f7;
case 0x7429f9:goto L7429f9;
case 0x7429fd:c.instructions+=2;goto B7429fd;
case 0x7429ff:c.instructions+=1;goto B7429ff;
case 0x742a01:goto L742a01;
case 0x742a04:c.instructions+=1;goto B742a04;
case 0x742a06:goto L742a06;
case 0x742a0a:c.instructions+=2;goto B742a0a;
case 0x742a0c:c.instructions+=1;goto B742a0c;
case 0x742a0e:goto L742a0e;
case 0x742a11:c.instructions+=1;goto B742a11;
case 0x742a13:goto L742a13;
case 0x742a15:c.instructions+=1;goto B742a15;
case 0x742a17:goto L742a17;
case 0x742a1b:c.instructions+=6;goto B742a1b;
case 0x742a1c:c.instructions+=5;goto B742a1c;
case 0x742a21:c.instructions+=4;goto B742a21;
case 0x742a22:c.instructions+=3;goto B742a22;
case 0x742a26:c.instructions+=2;goto B742a26;
case 0x742a2a:c.instructions+=1;goto B742a2a;
case 0x742a2f:goto L742a2f;
case 0x742a32:goto L742a32;
case 0x742a34:c.instructions+=1;goto B742a34;
case 0x742a36:goto L742a36;
case 0x742a3a:c.instructions+=2;goto B742a3a;
case 0x742a3c:c.instructions+=1;goto B742a3c;
case 0x742a3e:goto L742a3e;
case 0x742a43:goto L742a43;
case 0x742a44:c.instructions+=4;goto B742a44;
case 0x742a45:c.instructions+=3;goto B742a45;
case 0x742a46:c.instructions+=2;goto B742a46;
case 0x742a49:c.instructions+=1;goto B742a49;
case 0x742a50:goto L742a50;
case 0x742a53:c.instructions+=6;goto B742a53;
case 0x742a58:c.instructions+=5;goto B742a58;
case 0x742a59:c.instructions+=4;goto B742a59;
case 0x742a5d:c.instructions+=3;goto B742a5d;
case 0x742a5f:c.instructions+=2;goto B742a5f;
case 0x742a64:c.instructions+=1;goto B742a64;
case 0x742a68:goto L742a68;
case 0x742a6a:goto L742a6a;
case 0x742a6f:c.instructions+=1;goto B742a6f;
case 0x742a73:goto L742a73;
case 0x742a77:c.instructions+=2;goto B742a77;
case 0x742a78:c.instructions+=1;goto B742a78;
case 0x742a7d:goto L742a7d;
case 0x742a7f:c.instructions+=2;goto B742a7f;
case 0x742a83:c.instructions+=1;goto B742a83;
case 0x742a85:goto L742a85;
case 0x742a87:c.instructions+=3;goto B742a87;
case 0x742a89:c.instructions+=2;goto B742a89;
case 0x742a8d:c.instructions+=1;goto B742a8d;
case 0x742a8f:goto L742a8f;
case 0x742a92:c.instructions+=3;goto B742a92;
case 0x742a93:c.instructions+=2;goto B742a93;
case 0x742a97:c.instructions+=1;goto B742a97;
case 0x742a9c:goto L742a9c;
case 0x742a9f:c.instructions+=1;goto B742a9f;
case 0x742aa0:goto L742aa0;
case 0x742aa2:c.instructions+=1;goto B742aa2;
case 0x742aa4:goto L742aa4;
case 0x742aa7:c.instructions+=3;goto B742aa7;
case 0x742aa9:c.instructions+=2;goto B742aa9;
case 0x742aae:c.instructions+=1;goto B742aae;
case 0x742ab2:goto L742ab2;
case 0x742ab4:goto L742ab4;
case 0x742aba:c.instructions+=17;goto B742aba;
case 0x742abf:c.instructions+=16;goto B742abf;
case 0x742ac3:c.instructions+=15;goto B742ac3;
case 0x742ac9:c.instructions+=14;goto B742ac9;
case 0x742acd:c.instructions+=13;goto B742acd;
case 0x742ad3:c.instructions+=12;goto B742ad3;
case 0x742ad7:c.instructions+=11;goto B742ad7;
case 0x742adb:c.instructions+=10;goto B742adb;
case 0x742ae1:c.instructions+=9;goto B742ae1;
case 0x742ae5:c.instructions+=8;goto B742ae5;
case 0x742ae9:c.instructions+=7;goto B742ae9;
case 0x742aed:c.instructions+=6;goto B742aed;
case 0x742aee:c.instructions+=5;goto B742aee;
case 0x742af3:c.instructions+=4;goto B742af3;
case 0x742af7:c.instructions+=3;goto B742af7;
case 0x742afb:c.instructions+=2;goto B742afb;
case 0x742b02:c.instructions+=1;goto B742b02;
case 0x742b07:goto L742b07;
case 0x742b09:c.instructions+=1;goto B742b09;
case 0x742b0b:goto L742b0b;
case 0x742b0f:c.instructions+=3;goto B742b0f;
case 0x742b11:c.instructions+=2;goto B742b11;
case 0x742b12:c.instructions+=1;goto B742b12;
case 0x742b17:goto L742b17;
case 0x742b1a:c.instructions+=1;goto B742b1a;
case 0x742b20:goto L742b20;
case 0x742b25:c.instructions+=2;goto B742b25;
case 0x742b27:c.instructions+=1;goto B742b27;
case 0x742b29:goto L742b29;
case 0x742b2c:c.instructions+=1;goto B742b2c;
case 0x742b2d:goto L742b2d;
case 0x742b2f:c.instructions+=1;goto B742b2f;
case 0x742b34:goto L742b34;
case 0x742b37:c.instructions+=5;goto B742b37;
case 0x742b41:c.instructions+=4;goto B742b41;
case 0x742b4b:c.instructions+=3;goto B742b4b;
case 0x742b55:c.instructions+=2;goto B742b55;
case 0x742b57:c.instructions+=1;goto B742b57;
case 0x742b60:goto L742b60;
case 0x742b66:c.instructions+=5;goto B742b66;
case 0x742b6b:c.instructions+=4;goto B742b6b;
case 0x742b72:c.instructions+=3;goto B742b72;
case 0x742b79:c.instructions+=2;goto B742b79;
case 0x742b7e:c.instructions+=1;goto B742b7e;
case 0x742b80:goto L742b80;
case 0x742b85:c.instructions+=2;goto B742b85;
case 0x742b8c:c.instructions+=1;goto B742b8c;
case 0x742b91:goto L742b91;
case 0x742b97:c.instructions+=1;goto B742b97;
case 0x742b98:goto L742b98;
case 0x742b9f:c.instructions+=1;goto B742b9f;
case 0x742ba5:goto L742ba5;
case 0x742baa:c.instructions+=1;goto B742baa;
case 0x742bac:goto L742bac;
case 0x742bb1:c.instructions+=2;goto B742bb1;
case 0x742bb8:c.instructions+=1;goto B742bb8;
case 0x742bbd:goto L742bbd;
case 0x742bc3:c.instructions+=1;goto B742bc3;
case 0x742bc4:goto L742bc4;
case 0x742bc9:c.instructions+=1;goto B742bc9;
case 0x742bcb:goto L742bcb;
case 0x742bd0:c.instructions+=2;goto B742bd0;
case 0x742bd7:c.instructions+=1;goto B742bd7;
case 0x742bdc:goto L742bdc;
case 0x742be2:c.instructions+=1;goto B742be2;
case 0x742be3:goto L742be3;
case 0x742be8:c.instructions+=1;goto B742be8;
case 0x742bea:goto L742bea;
case 0x742bef:goto L742bef;
case 0x742bf6:c.instructions+=1;goto B742bf6;
case 0x742bfb:goto L742bfb;
case 0x742c01:c.instructions+=1;goto B742c01;
case 0x742c02:goto L742c02;
case 0x742c07:c.instructions+=1;goto B742c07;
case 0x742c09:goto L742c09;
case 0x742c0c:c.instructions+=2;goto B742c0c;
case 0x742c0d:c.instructions+=1;goto B742c0d;
case 0x742c12:goto L742c12;
case 0x742c19:c.instructions+=8;goto B742c19;
case 0x742c1d:c.instructions+=7;goto B742c1d;
case 0x742c22:c.instructions+=6;goto B742c22;
case 0x742c24:c.instructions+=5;goto B742c24;
case 0x742c28:c.instructions+=4;goto B742c28;
case 0x742c2b:c.instructions+=3;goto B742c2b;
case 0x742c30:c.instructions+=2;goto B742c30;
case 0x742c37:c.instructions+=1;goto B742c37;
case 0x742c3c:goto L742c3c;
case 0x742c42:c.instructions+=1;goto B742c42;
case 0x742c43:goto L742c43;
case 0x742c4a:c.instructions+=2;goto B742c4a;
case 0x742c4d:c.instructions+=1;goto B742c4d;
case 0x742c52:goto L742c52;
case 0x742c58:c.instructions+=1;goto B742c58;
case 0x742c60:goto L742c60;
case 0x742c65:goto L742c65;
case 0x742c6a:goto L742c6a;
case 0x742c74:c.instructions+=2;goto B742c74;
case 0x742c76:c.instructions+=1;goto B742c76;
case 0x742c80:goto L742c80;
case 0x742c85:c.instructions+=2;goto B742c85;
case 0x742c87:c.instructions+=1;goto B742c87;
case 0x742c8d:goto L742c8d;
case 0x742c8f:c.instructions+=3;goto B742c8f;
case 0x742c94:c.instructions+=2;goto B742c94;
case 0x742c99:c.instructions+=1;goto B742c99;
case 0x742c9e:goto L742c9e;
case 0x742ca1:c.instructions+=2;goto B742ca1;
case 0x742ca3:c.instructions+=1;goto B742ca3;
case 0x742ca9:goto L742ca9;
case 0x742cb0:c.instructions+=49;goto B742cb0;
case 0x742cb2:c.instructions+=48;goto B742cb2;
case 0x742cb5:c.instructions+=47;goto B742cb5;
case 0x742cbb:c.instructions+=46;goto B742cbb;
case 0x742cc0:c.instructions+=45;goto B742cc0;
case 0x742cc7:c.instructions+=44;goto B742cc7;
case 0x742cca:c.instructions+=43;goto B742cca;
case 0x742cd0:c.instructions+=42;goto B742cd0;
case 0x742cd2:c.instructions+=41;goto B742cd2;
case 0x742cd5:c.instructions+=40;goto B742cd5;
case 0x742cdb:c.instructions+=39;goto B742cdb;
case 0x742ce0:c.instructions+=38;goto B742ce0;
case 0x742ce7:c.instructions+=37;goto B742ce7;
case 0x742cea:c.instructions+=36;goto B742cea;
case 0x742cf0:c.instructions+=35;goto B742cf0;
case 0x742cf6:c.instructions+=34;goto B742cf6;
case 0x742cf8:c.instructions+=33;goto B742cf8;
case 0x742cfb:c.instructions+=32;goto B742cfb;
case 0x742d01:c.instructions+=31;goto B742d01;
case 0x742d06:c.instructions+=30;goto B742d06;
case 0x742d0d:c.instructions+=29;goto B742d0d;
case 0x742d10:c.instructions+=28;goto B742d10;
case 0x742d16:c.instructions+=27;goto B742d16;
case 0x742d1c:c.instructions+=26;goto B742d1c;
case 0x742d1e:c.instructions+=25;goto B742d1e;
case 0x742d21:c.instructions+=24;goto B742d21;
case 0x742d27:c.instructions+=23;goto B742d27;
case 0x742d2c:c.instructions+=22;goto B742d2c;
case 0x742d33:c.instructions+=21;goto B742d33;
case 0x742d36:c.instructions+=20;goto B742d36;
case 0x742d3c:c.instructions+=19;goto B742d3c;
case 0x742d42:c.instructions+=18;goto B742d42;
case 0x742d44:c.instructions+=17;goto B742d44;
case 0x742d47:c.instructions+=16;goto B742d47;
case 0x742d4d:c.instructions+=15;goto B742d4d;
case 0x742d52:c.instructions+=14;goto B742d52;
case 0x742d59:c.instructions+=13;goto B742d59;
case 0x742d5c:c.instructions+=12;goto B742d5c;
case 0x742d62:c.instructions+=11;goto B742d62;
case 0x742d68:c.instructions+=10;goto B742d68;
case 0x742d6a:c.instructions+=9;goto B742d6a;
case 0x742d6d:c.instructions+=8;goto B742d6d;
case 0x742d70:c.instructions+=7;goto B742d70;
case 0x742d76:c.instructions+=6;goto B742d76;
case 0x742d7c:c.instructions+=5;goto B742d7c;
case 0x742d82:c.instructions+=4;goto B742d82;
case 0x742d89:c.instructions+=3;goto B742d89;
case 0x742d8f:c.instructions+=2;goto B742d8f;
case 0x742d94:c.instructions+=1;goto B742d94;
case 0x742d9b:goto L742d9b;
case 0x742da0:c.instructions+=1;goto B742da0;
case 0x742db0:goto L742db0;
case 0x742db2:c.instructions+=3;goto B742db2;
case 0x742db4:c.instructions+=2;goto B742db4;
case 0x742db9:c.instructions+=1;goto B742db9;
case 0x742dbe:goto L742dbe;
case 0x742dc1:c.instructions+=2;goto B742dc1;
case 0x742dc3:c.instructions+=1;goto B742dc3;
case 0x742dc5:goto L742dc5;
case 0x742dca:goto L742dca;
case 0x742dd0:c.instructions+=1;goto B742dd0;
case 0x742dd2:goto L742dd2;
case 0x742dd7:goto L742dd7;
case 0x742dda:c.instructions+=1;goto B742dda;
case 0x742ddf:goto L742ddf;
case 0x742de0:c.instructions+=1;goto B742de0;
case 0x742de5:goto L742de5;
case 0x742de8:c.instructions+=1;goto B742de8;
case 0x742dea:goto L742dea;
case 0x742def:goto L742def;
case 0x742df0:c.instructions+=3;goto B742df0;
case 0x742df3:c.instructions+=2;goto B742df3;
case 0x742df4:c.instructions+=1;goto B742df4;
case 0x742df6:goto L742df6;
case 0x742df9:goto L742df9;
case 0x742dfc:c.instructions+=2;goto B742dfc;
case 0x742e02:c.instructions+=1;goto B742e02;
case 0x742e04:goto L742e04;
case 0x742e05:goto L742e05;
case 0x742e10:goto L742e10;
case 0x742e15:c.instructions+=1;goto B742e15;
case 0x742e17:goto L742e17;
case 0x742e19:c.instructions+=1;goto B742e19;
case 0x742e1b:goto L742e1b;
case 0x742e1d:c.instructions+=1;goto B742e1d;
case 0x742e20:goto L742e20;
case 0x742e23:c.instructions+=2;goto B742e23;
case 0x742e28:c.instructions+=1;goto B742e28;
case 0x742e2a:goto L742e2a;
case 0x742e30:goto L742e30;
case 0x742e35:c.instructions+=1;goto B742e35;
case 0x742e37:goto L742e37;
case 0x742e39:c.instructions+=1;goto B742e39;
case 0x742e3a:goto L742e3a;
case 0x742e3e:c.instructions+=5;goto B742e3e;
case 0x742e40:c.instructions+=4;goto B742e40;
case 0x742e41:c.instructions+=3;goto B742e41;
case 0x742e43:c.instructions+=2;goto B742e43;
case 0x742e44:c.instructions+=1;goto B742e44;
case 0x742e49:goto L742e49;
case 0x742e4a:c.instructions+=1;goto B742e4a;
case 0x742e4f:goto L742e4f;
case 0x742e53:c.instructions+=4;goto B742e53;
case 0x742e55:c.instructions+=3;goto B742e55;
case 0x742e58:c.instructions+=2;goto B742e58;
case 0x742e5d:c.instructions+=1;goto B742e5d;
case 0x742e60:goto L742e60;
case 0x742e64:c.instructions+=2;goto B742e64;
case 0x742e66:c.instructions+=1;goto B742e66;
case 0x742e68:goto L742e68;
case 0x742e6a:c.instructions+=1;goto B742e6a;
case 0x742e6c:goto L742e6c;
case 0x742e6e:c.instructions+=2;goto B742e6e;
case 0x742e6f:c.instructions+=1;goto B742e6f;
case 0x742e74:goto L742e74;
case 0x742e78:c.instructions+=4;goto B742e78;
case 0x742e79:c.instructions+=3;goto B742e79;
case 0x742e7e:c.instructions+=2;goto B742e7e;
case 0x742e7f:c.instructions+=1;goto B742e7f;
case 0x742e84:goto L742e84;
case 0x742e87:c.instructions+=2;goto B742e87;
case 0x742e8c:c.instructions+=1;goto B742e8c;
case 0x742e8d:goto L742e8d;
case 0x742e8f:c.instructions+=1;goto B742e8f;
case 0x742e90:goto L742e90;
case 0x742e91:c.instructions+=8;goto B742e91;
case 0x742e95:c.instructions+=7;goto B742e95;
case 0x742e98:c.instructions+=6;goto B742e98;
case 0x742e99:c.instructions+=5;goto B742e99;
case 0x742e9d:c.instructions+=4;goto B742e9d;
case 0x742ea0:c.instructions+=3;goto B742ea0;
case 0x742ea3:c.instructions+=2;goto B742ea3;
case 0x742ea8:c.instructions+=1;goto B742ea8;
case 0x742eaa:goto L742eaa;
case 0x742ead:c.instructions+=5;goto B742ead;
case 0x742eb0:c.instructions+=4;goto B742eb0;
case 0x742eb1:c.instructions+=3;goto B742eb1;
case 0x742eb3:c.instructions+=2;goto B742eb3;
case 0x742eb4:c.instructions+=1;goto B742eb4;
case 0x742eb5:goto L742eb5;
case 0x742eb9:c.instructions+=1;goto B742eb9;
case 0x742ebb:goto L742ebb;
case 0x742ec0:goto L742ec0;
case 0x742ec1:c.instructions+=5;goto B742ec1;
case 0x742ec4:c.instructions+=4;goto B742ec4;
case 0x742ec5:c.instructions+=3;goto B742ec5;
case 0x742ec8:c.instructions+=2;goto B742ec8;
case 0x742ec9:c.instructions+=1;goto B742ec9;
case 0x742ece:goto L742ece;
case 0x742ed1:c.instructions+=3;goto B742ed1;
case 0x742ed2:c.instructions+=2;goto B742ed2;
case 0x742ed3:c.instructions+=1;goto B742ed3;
case 0x742ee0:goto L742ee0;
case 0x742ee1:c.instructions+=7;goto B742ee1;
case 0x742ee2:c.instructions+=6;goto B742ee2;
case 0x742ee6:c.instructions+=5;goto B742ee6;
case 0x742ee7:c.instructions+=4;goto B742ee7;
case 0x742ee8:c.instructions+=3;goto B742ee8;
case 0x742eec:c.instructions+=2;goto B742eec;
case 0x742eee:c.instructions+=1;goto B742eee;
case 0x742ef0:goto L742ef0;
case 0x742ef4:c.instructions+=3;goto B742ef4;
case 0x742ef6:c.instructions+=2;goto B742ef6;
case 0x742ef9:c.instructions+=1;goto B742ef9;
case 0x742efb:goto L742efb;
case 0x742f00:goto L742f00;
case 0x742f03:c.instructions+=1;goto B742f03;
case 0x742f05:goto L742f05;
case 0x742f09:c.instructions+=9;goto B742f09;
case 0x742f0b:c.instructions+=8;goto B742f0b;
case 0x742f0d:c.instructions+=7;goto B742f0d;
case 0x742f10:c.instructions+=6;goto B742f10;
case 0x742f12:c.instructions+=5;goto B742f12;
case 0x742f13:c.instructions+=4;goto B742f13;
case 0x742f17:c.instructions+=3;goto B742f17;
case 0x742f19:c.instructions+=2;goto B742f19;
case 0x742f1c:c.instructions+=1;goto B742f1c;
case 0x742f1e:goto L742f1e;
case 0x742f21:c.instructions+=7;goto B742f21;
case 0x742f23:c.instructions+=6;goto B742f23;
case 0x742f26:c.instructions+=5;goto B742f26;
case 0x742f29:c.instructions+=4;goto B742f29;
case 0x742f2a:c.instructions+=3;goto B742f2a;
case 0x742f2d:c.instructions+=2;goto B742f2d;
case 0x742f2f:c.instructions+=1;goto B742f2f;
case 0x742f31:goto L742f31;
case 0x742f32:c.instructions+=3;goto B742f32;
case 0x742f33:c.instructions+=2;goto B742f33;
case 0x742f36:c.instructions+=1;goto B742f36;
case 0x742f38:goto L742f38;
case 0x742f39:c.instructions+=5;goto B742f39;
case 0x742f3a:c.instructions+=4;goto B742f3a;
case 0x742f3b:c.instructions+=3;goto B742f3b;
case 0x742f3d:c.instructions+=2;goto B742f3d;
case 0x742f3e:c.instructions+=1;goto B742f3e;
case 0x742f3f:goto L742f3f;
case 0x742f40:c.instructions+=9;goto B742f40;
case 0x742f41:c.instructions+=8;goto B742f41;
case 0x742f44:c.instructions+=7;goto B742f44;
case 0x742f47:c.instructions+=6;goto B742f47;
case 0x742f4a:c.instructions+=5;goto B742f4a;
case 0x742f4d:c.instructions+=4;goto B742f4d;
case 0x742f4e:c.instructions+=3;goto B742f4e;
case 0x742f51:c.instructions+=2;goto B742f51;
case 0x742f52:c.instructions+=1;goto B742f52;
case 0x742f60:goto L742f60;
case 0x742f64:c.instructions+=5;goto B742f64;
case 0x742f66:c.instructions+=4;goto B742f66;
case 0x742f67:c.instructions+=3;goto B742f67;
case 0x742f6b:c.instructions+=2;goto B742f6b;
case 0x742f6d:c.instructions+=1;goto B742f6d;
case 0x742f6f:goto L742f6f;
case 0x742f72:c.instructions+=1;goto B742f72;
case 0x742f74:goto L742f74;
case 0x742f77:goto L742f77;
case 0x742f79:c.instructions+=2;goto B742f79;
case 0x742f7a:c.instructions+=1;goto B742f7a;
case 0x742f7b:goto L742f7b;
case 0x742f7c:c.instructions+=5;goto B742f7c;
case 0x742f7d:c.instructions+=4;goto B742f7d;
case 0x742f81:c.instructions+=3;goto B742f81;
case 0x742f85:c.instructions+=2;goto B742f85;
case 0x742f88:c.instructions+=1;goto B742f88;
case 0x742f8a:goto L742f8a;
case 0x742f8b:c.instructions+=13;goto B742f8b;
case 0x742f90:c.instructions+=12;goto B742f90;
case 0x742f92:c.instructions+=11;goto B742f92;
case 0x742f97:c.instructions+=10;goto B742f97;
case 0x742f9a:c.instructions+=9;goto B742f9a;
case 0x742f9c:c.instructions+=8;goto B742f9c;
case 0x742f9e:c.instructions+=7;goto B742f9e;
case 0x742fa0:c.instructions+=6;goto B742fa0;
case 0x742fa1:c.instructions+=5;goto B742fa1;
case 0x742fa3:c.instructions+=4;goto B742fa3;
case 0x742fa5:c.instructions+=3;goto B742fa5;
case 0x742fa7:c.instructions+=2;goto B742fa7;
case 0x742fa8:c.instructions+=1;goto B742fa8;
case 0x742faa:goto L742faa;
case 0x742fad:c.instructions+=1;goto B742fad;
case 0x742faf:goto L742faf;
case 0x742fb0:c.instructions+=6;goto B742fb0;
case 0x742fb5:c.instructions+=5;goto B742fb5;
case 0x742fb7:c.instructions+=4;goto B742fb7;
case 0x742fb9:c.instructions+=3;goto B742fb9;
case 0x742fbb:c.instructions+=2;goto B742fbb;
case 0x742fbc:c.instructions+=1;goto B742fbc;
case 0x742fbe:goto L742fbe;
case 0x742fc0:c.instructions+=7;goto B742fc0;
case 0x742fc2:c.instructions+=6;goto B742fc2;
case 0x742fc3:c.instructions+=5;goto B742fc3;
case 0x742fc6:c.instructions+=4;goto B742fc6;
case 0x742fca:c.instructions+=3;goto B742fca;
case 0x742fcb:c.instructions+=2;goto B742fcb;
case 0x742fce:c.instructions+=1;goto B742fce;
case 0x742fd0:goto L742fd0;
case 0x742fd1:c.instructions+=13;goto B742fd1;
case 0x742fd6:c.instructions+=12;goto B742fd6;
case 0x742fd8:c.instructions+=11;goto B742fd8;
case 0x742fdd:c.instructions+=10;goto B742fdd;
case 0x742fdf:c.instructions+=9;goto B742fdf;
case 0x742fe1:c.instructions+=8;goto B742fe1;
case 0x742fe3:c.instructions+=7;goto B742fe3;
case 0x742fe4:c.instructions+=6;goto B742fe4;
case 0x742fe6:c.instructions+=5;goto B742fe6;
case 0x742fe7:c.instructions+=4;goto B742fe7;
case 0x742fe9:c.instructions+=3;goto B742fe9;
case 0x742feb:c.instructions+=2;goto B742feb;
case 0x742fec:c.instructions+=1;goto B742fec;
case 0x742fee:goto L742fee;
case 0x742ff1:c.instructions+=1;goto B742ff1;
case 0x742ff3:goto L742ff3;
case 0x742ff4:c.instructions+=5;goto B742ff4;
case 0x742ff9:c.instructions+=4;goto B742ff9;
case 0x742ffb:c.instructions+=3;goto B742ffb;
case 0x742ffd:c.instructions+=2;goto B742ffd;
case 0x742fff:c.instructions+=1;goto B742fff;
default:missing_instruction(c.pc);}
B742001:L742001:{c.instructions+=7;NFSU2_TR(0x742001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742004:{NFSU2_TR(0x742004);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B742007:{NFSU2_TR(0x742007);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742008:{NFSU2_TR(0x742008);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74200d:{NFSU2_TR(0x74200d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74200e:{NFSU2_TR(0x74200e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74200f:{NFSU2_TR(0x74200f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742014ull));
TAIL_STATIC(0x741760u,741);
}
B742014:L742014:{c.instructions+=1;NFSU2_TR(0x742014);
TAIL_STATIC(0x741fa7u,741);
}
B742016:L742016:{c.instructions+=2;NFSU2_TR(0x742016);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x65ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742018:{NFSU2_TR(0x742018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742032;}}
}
B74201a:L74201a:{c.instructions+=7;NFSU2_TR(0x74201a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74201d:{NFSU2_TR(0x74201d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B742020:{NFSU2_TR(0x742020);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742021:{NFSU2_TR(0x742021);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742026:{NFSU2_TR(0x742026);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742027:{NFSU2_TR(0x742027);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742028:{NFSU2_TR(0x742028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74202dull));
TAIL_STATIC(0x741da0u,741);
}
B74202d:L74202d:{c.instructions+=1;NFSU2_TR(0x74202d);
TAIL_STATIC(0x741fa7u,741);
}
B742032:L742032:{c.instructions+=2;NFSU2_TR(0x742032);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x69ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742034:{NFSU2_TR(0x742034);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742045;}}
}
B742036:L742036:{c.instructions+=4;NFSU2_TR(0x742036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742039:{NFSU2_TR(0x742039);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74203c:{NFSU2_TR(0x74203c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742040:{NFSU2_TR(0x742040);
TAIL_STATIC(0x741fb2u,741);
}
B742045:L742045:{c.instructions+=2;NFSU2_TR(0x742045);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742047:{NFSU2_TR(0x742047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74207c;}}
}
B742049:L742049:{c.instructions+=6;NFSU2_TR(0x742049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74204c:{NFSU2_TR(0x74204c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B742050:{NFSU2_TR(0x742050);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B742053:{NFSU2_TR(0x742053);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742054:{NFSU2_TR(0x742054);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742055:{NFSU2_TR(0x742055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74205aull));
TAIL_STATIC(0x7414a0u,741);
}
B74205a:L74205a:{c.instructions+=3;NFSU2_TR(0x74205a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74205d:{NFSU2_TR(0x74205d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74205f:{NFSU2_TR(0x74205f);
if(r1(R+518)){{goto L742072;}}
}
B742061:L742061:{c.instructions+=5;NFSU2_TR(0x742061);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B742062:{NFSU2_TR(0x742062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742063:{NFSU2_TR(0x742063);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742064:{NFSU2_TR(0x742064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742065:{NFSU2_TR(0x742065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74206aull));
TAIL_STATIC(0x741270u,741);
}
B74206a:L74206a:{c.instructions+=2;NFSU2_TR(0x74206a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74206d:{NFSU2_TR(0x74206d);
TAIL_STATIC(0x741faau,741);
}
B742072:L742072:{c.instructions+=2;NFSU2_TR(0x742072);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742077:{NFSU2_TR(0x742077);
TAIL_STATIC(0x741f9bu,741);
}
B74207c:L74207c:{c.instructions+=2;NFSU2_TR(0x74207c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x72ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74207e:{NFSU2_TR(0x74207e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x741fb2u,741);}
}
B742084:L742084:{c.instructions+=5;NFSU2_TR(0x742084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742087:{NFSU2_TR(0x742087);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742089:{NFSU2_TR(0x742089);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74208c:{NFSU2_TR(0x74208c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74208e:{NFSU2_TR(0x74208e);
if(r1(R+518)){TAIL_STATIC(0x741fb2u,741);}
}
B742094:L742094:{c.instructions+=2;NFSU2_TR(0x742094);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742096:{NFSU2_TR(0x742096);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x741fb2u,741);}
}
B74209c:L74209c:{c.instructions+=7;NFSU2_TR(0x74209c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B74209e:{NFSU2_TR(0x74209e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7420a1:{NFSU2_TR(0x7420a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7420a2:{NFSU2_TR(0x7420a2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7420a3:{NFSU2_TR(0x7420a3);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B7420a4:{NFSU2_TR(0x7420a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7420a6:{NFSU2_TR(0x7420a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742094u);}goto L742094;}}
}
B7420a8:L7420a8:{c.instructions+=1;NFSU2_TR(0x7420a8);
TAIL_STATIC(0x741fb2u,741);
}
B7420b0:L7420b0:{c.instructions+=3;NFSU2_TR(0x7420b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7420b4:{NFSU2_TR(0x7420b4);
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
B7420b6:{NFSU2_TR(0x7420b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7420bd;}}
}
B7420b8:L7420b8:{c.instructions+=2;NFSU2_TR(0x7420b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7420bc:{NFSU2_TR(0x7420bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7420bd:L7420bd:{c.instructions+=5;NFSU2_TR(0x7420bd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7420bf:{NFSU2_TR(0x7420bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7420c1:{NFSU2_TR(0x7420c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7420c2:{NFSU2_TR(0x7420c2);
w4(R+24,u32(0x1ull));
}
B7420c7:{NFSU2_TR(0x7420c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7420cc;}}
}
B7420c9:L7420c9:{c.instructions+=2;NFSU2_TR(0x7420c9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7420ca:{NFSU2_TR(0x7420ca);
{goto L7420d4;}
}
B7420cc:L7420cc:{c.instructions+=2;NFSU2_TR(0x7420cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7420ce:{NFSU2_TR(0x7420ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7420d4;}}
}
B7420d0:L7420d0:{c.instructions+=2;NFSU2_TR(0x7420d0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7420d1:{NFSU2_TR(0x7420d1);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B7420d4:L7420d4:{c.instructions+=5;NFSU2_TR(0x7420d4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7420d6:{NFSU2_TR(0x7420d6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7420d8:{NFSU2_TR(0x7420d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7420da:{NFSU2_TR(0x7420da);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7420dd:{NFSU2_TR(0x7420dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7420f6;}}
}
B7420df:L7420df:{c.instructions+=1;NFSU2_TR(0x7420df);
}
B7420e0:L7420e0:{c.instructions+=2;NFSU2_TR(0x7420e0);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+3),u8(0x39ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7420e3:{NFSU2_TR(0x7420e3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7420f6;}}
}
B7420e5:L7420e5:{c.instructions+=7;NFSU2_TR(0x7420e5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B7420e8:{NFSU2_TR(0x7420e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7420eb:{NFSU2_TR(0x7420eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7420ec:{NFSU2_TR(0x7420ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7420ef:{NFSU2_TR(0x7420ef);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7420f1:{NFSU2_TR(0x7420f1);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7420f4:{NFSU2_TR(0x7420f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7420e0u);}goto L7420e0;}}
}
B7420f6:L7420f6:{c.instructions+=3;NFSU2_TR(0x7420f6);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+24)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B7420f9:{NFSU2_TR(0x7420f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7420fa:{NFSU2_TR(0x7420fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742100:L742100:{c.instructions+=3;NFSU2_TR(0x742100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B742104:{NFSU2_TR(0x742104);
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
B742106:{NFSU2_TR(0x742106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74210d;}}
}
B742108:L742108:{c.instructions+=2;NFSU2_TR(0x742108);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74210c:{NFSU2_TR(0x74210c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74210d:L74210d:{c.instructions+=5;NFSU2_TR(0x74210d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B742110:{NFSU2_TR(0x742110);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d26b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B742117:{NFSU2_TR(0x742117);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742119:{NFSU2_TR(0x742119);
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
B74211b:{NFSU2_TR(0x74211b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74213a;}}
}
B74211d:L74211d:{c.instructions+=2;NFSU2_TR(0x74211d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74211e:{NFSU2_TR(0x74211e);
__builtin_memmove((R+28),(R+28),4);
}
B742120:L742120:{c.instructions+=8;NFSU2_TR(0x742120);
w4(R+24,u32(0x1ull));
}
B742125:{NFSU2_TR(0x742125);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B742127:{NFSU2_TR(0x742127);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B74212b:{NFSU2_TR(0x74212b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d26b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B742132:{NFSU2_TR(0x742132);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B742134:{NFSU2_TR(0x742134);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B742135:{NFSU2_TR(0x742135);
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
B742137:{NFSU2_TR(0x742137);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742120u);}goto L742120;}}
}
B742139:L742139:{c.instructions+=1;NFSU2_TR(0x742139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74213a:L74213a:{c.instructions+=1;NFSU2_TR(0x74213a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742140:L742140:{c.instructions+=4;NFSU2_TR(0x742140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742141:{NFSU2_TR(0x742141);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B742145:{NFSU2_TR(0x742145);
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
B742147:{NFSU2_TR(0x742147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74214f;}}
}
B742149:L742149:{c.instructions+=1;NFSU2_TR(0x742149);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74214d:L74214d:{c.instructions+=2;NFSU2_TR(0x74214d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74214e:{NFSU2_TR(0x74214e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74214f:L74214f:{c.instructions+=1;NFSU2_TR(0x74214f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742151:L742151:{c.instructions+=4;NFSU2_TR(0x742151);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B742153:{NFSU2_TR(0x742153);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B742155:{NFSU2_TR(0x742155);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742158:{NFSU2_TR(0x742158);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74217a;}}
}
B74215a:L74215a:{c.instructions+=2;NFSU2_TR(0x74215a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74215d:{NFSU2_TR(0x74215d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74217a;}}
}
B74215f:L74215f:{c.instructions+=9;NFSU2_TR(0x74215f);
__builtin_memmove((R+4),(R+0),4);
}
B742161:{NFSU2_TR(0x742161);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B742167:{NFSU2_TR(0x742167);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B74216a:{NFSU2_TR(0x74216a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74216d:{NFSU2_TR(0x74216d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff00ull))));
}
B742172:{NFSU2_TR(0x742172);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B742175:{NFSU2_TR(0x742175);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B742177:{NFSU2_TR(0x742177);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742178:{NFSU2_TR(0x742178);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742151u);}goto L742151;}
}
B74217a:L74217a:{c.instructions+=2;NFSU2_TR(0x74217a);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x2eull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2eull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2eull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74217d:{NFSU2_TR(0x74217d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74214du);}goto L74214d;}}
}
B74217f:L74217f:{c.instructions+=3;NFSU2_TR(0x74217f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B742182:{NFSU2_TR(0x742182);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742183:{NFSU2_TR(0x742183);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742151u);}goto L742151;}
}
B742190:L742190:{c.instructions+=3;NFSU2_TR(0x742190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B742194:{NFSU2_TR(0x742194);
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
B742196:{NFSU2_TR(0x742196);
if(r1(R+518)){{goto L7421c4;}}
}
B742198:L742198:{c.instructions+=3;NFSU2_TR(0x742198);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74219a:{NFSU2_TR(0x74219a);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74219c:{NFSU2_TR(0x74219c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7421c4;}}
}
B74219e:L74219e:{c.instructions+=2;NFSU2_TR(0x74219e);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x7full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x7full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7421a0:{NFSU2_TR(0x7421a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7421c4;}}
}
B7421a2:L7421a2:{c.instructions+=1;NFSU2_TR(0x7421a2);
w4(R+0,u32(0x20202020ull));
}
B7421a7:L7421a7:{c.instructions+=3;NFSU2_TR(0x7421a7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7421a9:{NFSU2_TR(0x7421a9);
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
B7421ac:{NFSU2_TR(0x7421ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7421c8;}}
}
B7421ae:L7421ae:{c.instructions+=2;NFSU2_TR(0x7421ae);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x7full))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x7full)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x7full))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7421b1:{NFSU2_TR(0x7421b1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7421c8;}}
}
B7421b3:L7421b3:{c.instructions+=6;NFSU2_TR(0x7421b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7421b6:{NFSU2_TR(0x7421b6);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B7421b9:{NFSU2_TR(0x7421b9);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B7421bb:{NFSU2_TR(0x7421bb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7421bc:{NFSU2_TR(0x7421bc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x20ffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x20ffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x20ffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7421c1:{NFSU2_TR(0x7421c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7421a7u);}goto L7421a7;}}
}
B7421c3:L7421c3:{c.instructions+=1;NFSU2_TR(0x7421c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7421c4:L7421c4:{c.instructions+=1;NFSU2_TR(0x7421c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7421c8:L7421c8:{c.instructions+=1;NFSU2_TR(0x7421c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7421d0:L7421d0:{c.instructions+=9;NFSU2_TR(0x7421d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7421d1:{NFSU2_TR(0x7421d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7421d5:{NFSU2_TR(0x7421d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7421d6:{NFSU2_TR(0x7421d6);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B7421d8:{NFSU2_TR(0x7421d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7421da:{NFSU2_TR(0x7421da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7421db:{NFSU2_TR(0x7421db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7421dc:{NFSU2_TR(0x7421dc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7421e0:{NFSU2_TR(0x7421e0);
if(r1(R+518)){{goto L742225;}}
}
B7421e2:L7421e2:{c.instructions+=2;NFSU2_TR(0x7421e2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7421e5:{NFSU2_TR(0x7421e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7421f1;}}
}
B7421e7:L7421e7:{c.instructions+=3;NFSU2_TR(0x7421e7);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x22ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7421ec:{NFSU2_TR(0x7421ec);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7421f0:{NFSU2_TR(0x7421f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7421f1:L7421f1:{c.instructions+=4;NFSU2_TR(0x7421f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7421f5:{NFSU2_TR(0x7421f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7421f7:{NFSU2_TR(0x7421f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7421fb:{NFSU2_TR(0x7421fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742221;}}
}
B7421fd:L7421fd:{c.instructions+=1;NFSU2_TR(0x7421fd);
__builtin_memmove((R+4),(R+4),4);
}
B742200:L742200:{c.instructions+=3;NFSU2_TR(0x742200);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742202:{NFSU2_TR(0x742202);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742204:{NFSU2_TR(0x742204);
if(r1(R+518)){{goto L742214;}}
}
B742206:L742206:{c.instructions+=2;NFSU2_TR(0x742206);
w1(R+512,u8((r1(R+0))<(u8(0x20ull))));
}
B742208:{NFSU2_TR(0x742208);
if(r1(R+512)){{goto L742214;}}
}
B74220a:L74220a:{c.instructions+=3;NFSU2_TR(0x74220a);
w4(R+12,u32(r1(R+0)));
}
B74220d:{NFSU2_TR(0x74220d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74220f:{NFSU2_TR(0x74220f);
if(r1(R+518)){{goto L742214;}}
}
B742211:L742211:{c.instructions+=2;NFSU2_TR(0x742211);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742212:{NFSU2_TR(0x742212);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742200u);}goto L742200;}
}
B742214:L742214:{c.instructions+=3;NFSU2_TR(0x742214);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B742217:{NFSU2_TR(0x742217);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742219:{NFSU2_TR(0x742219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742225;}}
}
B74221b:L74221b:{c.instructions+=4;NFSU2_TR(0x74221b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74221c:{NFSU2_TR(0x74221c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B74221d:{NFSU2_TR(0x74221d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74221f:{NFSU2_TR(0x74221f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742200u);}goto L742200;}}
}
B742221:L742221:{c.instructions+=2;NFSU2_TR(0x742221);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742223:{NFSU2_TR(0x742223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74227b;}}
}
B742225:L742225:{c.instructions+=3;NFSU2_TR(0x742225);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742229:{NFSU2_TR(0x742229);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74222b:{NFSU2_TR(0x74222b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742235;}}
}
B74222d:L74222d:{c.instructions+=6;NFSU2_TR(0x74222d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74222e:{NFSU2_TR(0x74222e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74222f:{NFSU2_TR(0x74222f);
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
B742232:{NFSU2_TR(0x742232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742233:{NFSU2_TR(0x742233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B742234:{NFSU2_TR(0x742234);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742235:L742235:{c.instructions+=3;NFSU2_TR(0x742235);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B742239:{NFSU2_TR(0x742239);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74223b:{NFSU2_TR(0x74223b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74224e;}}
}
B74223d:L74223d:{c.instructions+=1;NFSU2_TR(0x74223d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B742240:L742240:{c.instructions+=4;NFSU2_TR(0x742240);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742242:{NFSU2_TR(0x742242);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742243:{NFSU2_TR(0x742243);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742245:{NFSU2_TR(0x742245);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742240u);}goto L742240;}}
}
B742247:L742247:{c.instructions+=6;NFSU2_TR(0x742247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742248:{NFSU2_TR(0x742248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742249:{NFSU2_TR(0x742249);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74224b:{NFSU2_TR(0x74224b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74224c:{NFSU2_TR(0x74224c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74224d:{NFSU2_TR(0x74224d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74224e:L74224e:{c.instructions+=4;NFSU2_TR(0x74224e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742252:{NFSU2_TR(0x742252);
w4(R+4,u32(0x1ull));
}
B742257:{NFSU2_TR(0x742257);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B742259:{NFSU2_TR(0x742259);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742270;}}
}
B74225b:L74225b:{c.instructions+=1;NFSU2_TR(0x74225b);
{goto L742260;}
}
B742260:L742260:{c.instructions+=3;NFSU2_TR(0x742260);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B742262:{NFSU2_TR(0x742262);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B742264:{NFSU2_TR(0x742264);
if(r1(R+518)){{goto L742270;}}
}
B742266:L742266:{c.instructions+=6;NFSU2_TR(0x742266);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742267:{NFSU2_TR(0x742267);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74226a:{NFSU2_TR(0x74226a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74226b:{NFSU2_TR(0x74226b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74226c:{NFSU2_TR(0x74226c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B74226e:{NFSU2_TR(0x74226e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742260u);}goto L742260;}}
}
B742270:L742270:{c.instructions+=7;NFSU2_TR(0x742270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742271:{NFSU2_TR(0x742271);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B742274:{NFSU2_TR(0x742274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742275:{NFSU2_TR(0x742275);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B742278:{NFSU2_TR(0x742278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742279:{NFSU2_TR(0x742279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74227a:{NFSU2_TR(0x74227a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74227b:L74227b:{c.instructions+=3;NFSU2_TR(0x74227b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74227f:{NFSU2_TR(0x74227f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742281:{NFSU2_TR(0x742281);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7422c8;}}
}
B742283:L742283:{c.instructions+=4;NFSU2_TR(0x742283);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B742285:{NFSU2_TR(0x742285);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742287:{NFSU2_TR(0x742287);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B742289:{NFSU2_TR(0x742289);
if(r1(R+518)){{goto L74234d;}}
}
B74228f:L74228f:{c.instructions+=1;NFSU2_TR(0x74228f);
}
B742290:L742290:{c.instructions+=3;NFSU2_TR(0x742290);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B742292:{NFSU2_TR(0x742292);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B742295:{NFSU2_TR(0x742295);
if(r1(R+512)){{goto L74234d;}}
}
B74229b:L74229b:{c.instructions+=3;NFSU2_TR(0x74229b);
w4(R+24,u32(r1(R+12)));
}
B74229e:{NFSU2_TR(0x74229e);
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
B7422a0:{NFSU2_TR(0x7422a0);
if(r1(R+518)){{goto L74234d;}}
}
B7422a6:L7422a6:{c.instructions+=2;NFSU2_TR(0x7422a6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7422a9:{NFSU2_TR(0x7422a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7422ba;}}
}
B7422ab:L7422ab:{c.instructions+=2;NFSU2_TR(0x7422ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x20ull))));
}
B7422af:{NFSU2_TR(0x7422af);
if(r1(R+512)){{goto L7422ba;}}
}
B7422b1:L7422b1:{c.instructions+=2;NFSU2_TR(0x7422b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x20ull))));
}
B7422b5:{NFSU2_TR(0x7422b5);
if(r1(R+512)){{goto L7422ba;}}
}
B7422b7:L7422b7:{c.instructions+=1;NFSU2_TR(0x7422b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B7422ba:L7422ba:{c.instructions+=5;NFSU2_TR(0x7422ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7422bd:{NFSU2_TR(0x7422bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7422be:{NFSU2_TR(0x7422be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7422bf:{NFSU2_TR(0x7422bf);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7422c1:{NFSU2_TR(0x7422c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742290u);}goto L742290;}}
}
B7422c3:L7422c3:{c.instructions+=5;NFSU2_TR(0x7422c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7422c4:{NFSU2_TR(0x7422c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7422c5:{NFSU2_TR(0x7422c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7422c6:{NFSU2_TR(0x7422c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7422c7:{NFSU2_TR(0x7422c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7422c8:L7422c8:{c.instructions+=4;NFSU2_TR(0x7422c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7422c9:{NFSU2_TR(0x7422c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7422cd:{NFSU2_TR(0x7422cd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7422d0:{NFSU2_TR(0x7422d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7422db;}}
}
B7422d2:L7422d2:{c.instructions+=7;NFSU2_TR(0x7422d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7422d3:{NFSU2_TR(0x7422d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7422d4:{NFSU2_TR(0x7422d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7422d5:{NFSU2_TR(0x7422d5);
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
B7422d8:{NFSU2_TR(0x7422d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7422d9:{NFSU2_TR(0x7422d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7422da:{NFSU2_TR(0x7422da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7422db:L7422db:{c.instructions+=4;NFSU2_TR(0x7422db);
w4(R+28,u32(0x1ull));
}
B7422e0:{NFSU2_TR(0x7422e0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B7422e2:{NFSU2_TR(0x7422e2);
__builtin_memmove((R+0),(R+4),4);
}
B7422e4:{NFSU2_TR(0x7422e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742346;}}
}
B7422e6:L7422e6:{c.instructions+=3;NFSU2_TR(0x7422e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B7422e8:{NFSU2_TR(0x7422e8);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7422ea:{NFSU2_TR(0x7422ea);
if(r1(R+518)){{goto L742346;}}
}
B7422ec:L7422ec:{c.instructions+=2;NFSU2_TR(0x7422ec);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B7422ef:{NFSU2_TR(0x7422ef);
if(r1(R+512)){{goto L742346;}}
}
B7422f1:L7422f1:{c.instructions+=3;NFSU2_TR(0x7422f1);
w4(R+4,u32(r1(R+12)));
}
B7422f4:{NFSU2_TR(0x7422f4);
u8 U[22];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7422f8:{NFSU2_TR(0x7422f8);
if(r1(R+518)){{goto L742346;}}
}
B7422fa:L7422fa:{c.instructions+=2;NFSU2_TR(0x7422fa);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7422fd:{NFSU2_TR(0x7422fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74233d;}}
}
B7422ff:L7422ff:{c.instructions+=3;NFSU2_TR(0x7422ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B742302:{NFSU2_TR(0x742302);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742304:{NFSU2_TR(0x742304);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74230e;}}
}
B742306:L742306:{c.instructions+=4;NFSU2_TR(0x742306);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B742308:{NFSU2_TR(0x742308);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742309:{NFSU2_TR(0x742309);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B74230c:{NFSU2_TR(0x74230c);
{goto L742341;}
}
B74230e:L74230e:{c.instructions+=2;NFSU2_TR(0x74230e);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B742311:{NFSU2_TR(0x742311);
if(r1(R+512)){{goto L74233d;}}
}
B742313:L742313:{c.instructions+=3;NFSU2_TR(0x742313);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742316:{NFSU2_TR(0x742316);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B742319:{NFSU2_TR(0x742319);
if(r1(R+512)){{goto L742339;}}
}
B74231b:L74231b:{c.instructions+=9;NFSU2_TR(0x74231b);
w4(R+8,u32(r1(R+8)));
}
B74231e:{NFSU2_TR(0x74231e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742324:{NFSU2_TR(0x742324);
w4(R+4,u32(r1(R+4)));
}
B742327:{NFSU2_TR(0x742327);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
}
B74232d:{NFSU2_TR(0x74232d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B74232f:{NFSU2_TR(0x74232f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742333:{NFSU2_TR(0x742333);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742334:{NFSU2_TR(0x742334);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B742337:{NFSU2_TR(0x742337);
{goto L742341;}
}
B742339:L742339:{c.instructions+=1;NFSU2_TR(0x742339);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74233d:L74233d:{c.instructions+=3;NFSU2_TR(0x74233d);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B74233f:{NFSU2_TR(0x74233f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742340:{NFSU2_TR(0x742340);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742341:L742341:{c.instructions+=3;NFSU2_TR(0x742341);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B742342:{NFSU2_TR(0x742342);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B742344:{NFSU2_TR(0x742344);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7422e6u);}goto L7422e6;}}
}
B742346:L742346:{c.instructions+=3;NFSU2_TR(0x742346);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B742349:{NFSU2_TR(0x742349);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B74234c:{NFSU2_TR(0x74234c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74234d:L74234d:{c.instructions+=5;NFSU2_TR(0x74234d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74234e:{NFSU2_TR(0x74234e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74234f:{NFSU2_TR(0x74234f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742350:{NFSU2_TR(0x742350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B742351:{NFSU2_TR(0x742351);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742360:L742360:{c.instructions+=5;NFSU2_TR(0x742360);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742364:{NFSU2_TR(0x742364);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742366:{NFSU2_TR(0x742366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742367:{NFSU2_TR(0x742367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742368:{NFSU2_TR(0x742368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7423b9;}}
}
B74236a:L74236a:{c.instructions+=3;NFSU2_TR(0x74236a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74236e:{NFSU2_TR(0x74236e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742370:{NFSU2_TR(0x742370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742378;}}
}
B742372:L742372:{c.instructions+=4;NFSU2_TR(0x742372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742373:{NFSU2_TR(0x742373);
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
B742376:{NFSU2_TR(0x742376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742377:{NFSU2_TR(0x742377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742378:L742378:{c.instructions+=3;NFSU2_TR(0x742378);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74237c:{NFSU2_TR(0x74237c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74237e:{NFSU2_TR(0x74237e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74238f;}}
}
B742380:L742380:{c.instructions+=1;NFSU2_TR(0x742380);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B742383:L742383:{c.instructions+=4;NFSU2_TR(0x742383);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742385:{NFSU2_TR(0x742385);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742386:{NFSU2_TR(0x742386);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742388:{NFSU2_TR(0x742388);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742383u);}goto L742383;}}
}
B74238a:L74238a:{c.instructions+=4;NFSU2_TR(0x74238a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74238b:{NFSU2_TR(0x74238b);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74238d:{NFSU2_TR(0x74238d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74238e:{NFSU2_TR(0x74238e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74238f:L74238f:{c.instructions+=4;NFSU2_TR(0x74238f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742393:{NFSU2_TR(0x742393);
w4(R+4,u32(0x1ull));
}
B742398:{NFSU2_TR(0x742398);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B74239a:{NFSU2_TR(0x74239a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7423b0;}}
}
B74239c:L74239c:{c.instructions+=1;NFSU2_TR(0x74239c);
__builtin_memmove((R+16),(R+16),4);
}
B7423a0:L7423a0:{c.instructions+=3;NFSU2_TR(0x7423a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7423a2:{NFSU2_TR(0x7423a2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7423a4:{NFSU2_TR(0x7423a4);
if(r1(R+518)){{goto L7423b0;}}
}
B7423a6:L7423a6:{c.instructions+=6;NFSU2_TR(0x7423a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7423a7:{NFSU2_TR(0x7423a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7423aa:{NFSU2_TR(0x7423aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7423ab:{NFSU2_TR(0x7423ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7423ac:{NFSU2_TR(0x7423ac);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B7423ae:{NFSU2_TR(0x7423ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7423a0u);}goto L7423a0;}}
}
B7423b0:L7423b0:{c.instructions+=5;NFSU2_TR(0x7423b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7423b1:{NFSU2_TR(0x7423b1);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B7423b4:{NFSU2_TR(0x7423b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B7423b7:{NFSU2_TR(0x7423b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7423b8:{NFSU2_TR(0x7423b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7423b9:L7423b9:{c.instructions+=4;NFSU2_TR(0x7423b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7423bb:{NFSU2_TR(0x7423bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7423bd:{NFSU2_TR(0x7423bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7423be:{NFSU2_TR(0x7423be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742414;}}
}
B7423c0:L7423c0:{c.instructions+=3;NFSU2_TR(0x7423c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7423c4:{NFSU2_TR(0x7423c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7423c6:{NFSU2_TR(0x7423c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7423ef;}}
}
B7423c8:L7423c8:{c.instructions+=4;NFSU2_TR(0x7423c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7423cb:{NFSU2_TR(0x7423cb);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B7423ce:{NFSU2_TR(0x7423ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7423d1:{NFSU2_TR(0x7423d1);
if(r1(R+512)){{goto L7423dc;}}
}
B7423d3:L7423d3:{c.instructions+=4;NFSU2_TR(0x7423d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7423d6:{NFSU2_TR(0x7423d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7423d7:{NFSU2_TR(0x7423d7);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B7423da:{NFSU2_TR(0x7423da);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7423d3u);}goto L7423d3;}}
}
B7423dc:L7423dc:{c.instructions+=11;NFSU2_TR(0x7423dc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7423de:{NFSU2_TR(0x7423de);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7423df:{NFSU2_TR(0x7423df);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7423e2:{NFSU2_TR(0x7423e2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7423e3:{NFSU2_TR(0x7423e3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B7423e6:{NFSU2_TR(0x7423e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7423e7:{NFSU2_TR(0x7423e7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7423e9:{NFSU2_TR(0x7423e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7423ea:{NFSU2_TR(0x7423ea);
u8 U[47];
w4(U+39,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B7423ed:{NFSU2_TR(0x7423ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7423ee:{NFSU2_TR(0x7423ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7423ef:L7423ef:{c.instructions+=3;NFSU2_TR(0x7423ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7423f3:{NFSU2_TR(0x7423f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7423f6:{NFSU2_TR(0x7423f6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7423ff;}}
}
B7423f8:L7423f8:{c.instructions+=5;NFSU2_TR(0x7423f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7423f9:{NFSU2_TR(0x7423f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7423fa:{NFSU2_TR(0x7423fa);
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
B7423fd:{NFSU2_TR(0x7423fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7423fe:{NFSU2_TR(0x7423fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7423ff:L7423ff:{c.instructions+=4;NFSU2_TR(0x7423ff);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B742400:{NFSU2_TR(0x742400);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B742403:{NFSU2_TR(0x742403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742404:{NFSU2_TR(0x742404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742409ull));
TAIL_STATIC(0x741220u,741);
}
B742409:L742409:{c.instructions+=6;NFSU2_TR(0x742409);
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
B74240c:{NFSU2_TR(0x74240c);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B742410:{NFSU2_TR(0x742410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742411:{NFSU2_TR(0x742411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742412:{NFSU2_TR(0x742412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742413:{NFSU2_TR(0x742413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742414:L742414:{c.instructions+=2;NFSU2_TR(0x742414);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742416:{NFSU2_TR(0x742416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742421;}}
}
B742418:L742418:{c.instructions+=4;NFSU2_TR(0x742418);
__builtin_memmove((R+12),(R+0),1);
}
B74241a:{NFSU2_TR(0x74241a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74241e:{NFSU2_TR(0x74241e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74241f:{NFSU2_TR(0x74241f);
{goto L74242a;}
}
B742421:L742421:{c.instructions+=2;NFSU2_TR(0x742421);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B742426:{NFSU2_TR(0x742426);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74242a:L74242a:{c.instructions+=3;NFSU2_TR(0x74242a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74242e:{NFSU2_TR(0x74242e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742430:{NFSU2_TR(0x742430);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74246c;}}
}
B742432:L742432:{c.instructions+=4;NFSU2_TR(0x742432);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B742434:{NFSU2_TR(0x742434);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742436:{NFSU2_TR(0x742436);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B742438:{NFSU2_TR(0x742438);
if(r1(R+518)){{goto L7424e8;}}
}
B74243e:L74243e:{c.instructions+=1;NFSU2_TR(0x74243e);
__builtin_memmove((R+28),(R+28),4);
}
B742440:L742440:{c.instructions+=3;NFSU2_TR(0x742440);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B742442:{NFSU2_TR(0x742442);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B742445:{NFSU2_TR(0x742445);
if(r1(R+512)){{goto L7424e8;}}
}
B74244b:L74244b:{c.instructions+=2;NFSU2_TR(0x74244b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74244e:{NFSU2_TR(0x74244e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74245f;}}
}
B742450:L742450:{c.instructions+=2;NFSU2_TR(0x742450);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x20ull))));
}
B742454:{NFSU2_TR(0x742454);
if(r1(R+512)){{goto L74245f;}}
}
B742456:L742456:{c.instructions+=2;NFSU2_TR(0x742456);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x20ull))));
}
B74245a:{NFSU2_TR(0x74245a);
if(r1(R+512)){{goto L74245f;}}
}
B74245c:L74245c:{c.instructions+=1;NFSU2_TR(0x74245c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B74245f:L74245f:{c.instructions+=5;NFSU2_TR(0x74245f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742462:{NFSU2_TR(0x742462);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742463:{NFSU2_TR(0x742463);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742464:{NFSU2_TR(0x742464);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B742466:{NFSU2_TR(0x742466);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742440u);}goto L742440;}}
}
B742468:L742468:{c.instructions+=4;NFSU2_TR(0x742468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742469:{NFSU2_TR(0x742469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74246a:{NFSU2_TR(0x74246a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74246b:{NFSU2_TR(0x74246b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74246c:L74246c:{c.instructions+=4;NFSU2_TR(0x74246c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74246d:{NFSU2_TR(0x74246d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B742471:{NFSU2_TR(0x742471);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B742474:{NFSU2_TR(0x742474);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74247e;}}
}
B742476:L742476:{c.instructions+=6;NFSU2_TR(0x742476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B742477:{NFSU2_TR(0x742477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742478:{NFSU2_TR(0x742478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742479:{NFSU2_TR(0x742479);
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
B74247c:{NFSU2_TR(0x74247c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74247d:{NFSU2_TR(0x74247d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74247e:L74247e:{c.instructions+=4;NFSU2_TR(0x74247e);
w4(R+28,u32(0x1ull));
}
B742483:{NFSU2_TR(0x742483);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B742485:{NFSU2_TR(0x742485);
__builtin_memmove((R+0),(R+4),4);
}
B742487:{NFSU2_TR(0x742487);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7424e1;}}
}
B742489:L742489:{c.instructions+=1;NFSU2_TR(0x742489);
__builtin_memmove((R+16),(R+16),4);
}
B742490:L742490:{c.instructions+=3;NFSU2_TR(0x742490);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B742492:{NFSU2_TR(0x742492);
u8 U[10];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+8))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+8)));
w1(U+9,u8(u32(r1(R+12))-u32(r1(U+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B742496:{NFSU2_TR(0x742496);
if(r1(R+518)){{goto L7424e1;}}
}
B742498:L742498:{c.instructions+=2;NFSU2_TR(0x742498);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B74249b:{NFSU2_TR(0x74249b);
if(r1(R+512)){{goto L7424e1;}}
}
B74249d:L74249d:{c.instructions+=2;NFSU2_TR(0x74249d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7424a0:{NFSU2_TR(0x7424a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7424d8;}}
}
B7424a2:L7424a2:{c.instructions+=3;NFSU2_TR(0x7424a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7424a5:{NFSU2_TR(0x7424a5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7424a7:{NFSU2_TR(0x7424a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7424b1;}}
}
B7424a9:L7424a9:{c.instructions+=4;NFSU2_TR(0x7424a9);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B7424ab:{NFSU2_TR(0x7424ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7424ac:{NFSU2_TR(0x7424ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7424af:{NFSU2_TR(0x7424af);
{goto L7424dc;}
}
B7424b1:L7424b1:{c.instructions+=2;NFSU2_TR(0x7424b1);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B7424b4:{NFSU2_TR(0x7424b4);
if(r1(R+512)){{goto L7424d8;}}
}
B7424b6:L7424b6:{c.instructions+=3;NFSU2_TR(0x7424b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7424b9:{NFSU2_TR(0x7424b9);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B7424bc:{NFSU2_TR(0x7424bc);
if(r1(R+512)){{goto L7424d8;}}
}
B7424be:L7424be:{c.instructions+=8;NFSU2_TR(0x7424be);
w4(R+8,u32(r1(R+8)));
}
B7424c1:{NFSU2_TR(0x7424c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7424c7:{NFSU2_TR(0x7424c7);
w4(R+4,u32(r1(R+4)));
}
B7424ca:{NFSU2_TR(0x7424ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
}
B7424d0:{NFSU2_TR(0x7424d0);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B7424d2:{NFSU2_TR(0x7424d2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7424d3:{NFSU2_TR(0x7424d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B7424d6:{NFSU2_TR(0x7424d6);
{goto L7424dc;}
}
B7424d8:L7424d8:{c.instructions+=3;NFSU2_TR(0x7424d8);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B7424da:{NFSU2_TR(0x7424da);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7424db:{NFSU2_TR(0x7424db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7424dc:L7424dc:{c.instructions+=3;NFSU2_TR(0x7424dc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7424dd:{NFSU2_TR(0x7424dd);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B7424df:{NFSU2_TR(0x7424df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742490u);}goto L742490;}}
}
B7424e1:L7424e1:{c.instructions+=3;NFSU2_TR(0x7424e1);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B7424e4:{NFSU2_TR(0x7424e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B7424e7:{NFSU2_TR(0x7424e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7424e8:L7424e8:{c.instructions+=4;NFSU2_TR(0x7424e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7424e9:{NFSU2_TR(0x7424e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7424ea:{NFSU2_TR(0x7424ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7424eb:{NFSU2_TR(0x7424eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7424f0:L7424f0:{c.instructions+=3;NFSU2_TR(0x7424f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7424f4:{NFSU2_TR(0x7424f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7424f6:{NFSU2_TR(0x7424f6);
if(r1(R+518)){{goto L7425c3;}}
}
B7424fc:L7424fc:{c.instructions+=3;NFSU2_TR(0x7424fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7424fe:{NFSU2_TR(0x7424fe);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742501:{NFSU2_TR(0x742501);
if(r1(R+518)){{goto L74250c;}}
}
B742503:L742503:{c.instructions+=2;NFSU2_TR(0x742503);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742506:{NFSU2_TR(0x742506);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7425c3;}}
}
B74250c:L74250c:{c.instructions+=4;NFSU2_TR(0x74250c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74250d:{NFSU2_TR(0x74250d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742511:{NFSU2_TR(0x742511);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742513:{NFSU2_TR(0x742513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74255e;}}
}
B742515:L742515:{c.instructions+=3;NFSU2_TR(0x742515);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742517:{NFSU2_TR(0x742517);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74251a:{NFSU2_TR(0x74251a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742539;}}
}
B74251c:L74251c:{c.instructions+=4;NFSU2_TR(0x74251c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74251f:{NFSU2_TR(0x74251f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742520:{NFSU2_TR(0x742520);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B742523:{NFSU2_TR(0x742523);
if(r1(R+512)){{goto L74256c;}}
}
B742525:L742525:{c.instructions+=2;NFSU2_TR(0x742525);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x30ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B742529:{NFSU2_TR(0x742529);
if(r1(R+512)){{goto L74256c;}}
}
B74252b:L74252b:{c.instructions+=5;NFSU2_TR(0x74252b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74252e:{NFSU2_TR(0x74252e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B742531:{NFSU2_TR(0x742531);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742532:{NFSU2_TR(0x742532);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B742535:{NFSU2_TR(0x742535);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742525u);}goto L742525;}}
}
B742537:L742537:{c.instructions+=2;NFSU2_TR(0x742537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742538:{NFSU2_TR(0x742538);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742539:L742539:{c.instructions+=4;NFSU2_TR(0x742539);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74253c:{NFSU2_TR(0x74253c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B74253f:{NFSU2_TR(0x74253f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B742542:{NFSU2_TR(0x742542);
if(r1(R+512)){{goto L74254d;}}
}
B742544:L742544:{c.instructions+=4;NFSU2_TR(0x742544);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742547:{NFSU2_TR(0x742547);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742548:{NFSU2_TR(0x742548);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B74254b:{NFSU2_TR(0x74254b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742544u);}goto L742544;}}
}
B74254d:L74254d:{c.instructions+=9;NFSU2_TR(0x74254d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B74254f:{NFSU2_TR(0x74254f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B742550:{NFSU2_TR(0x742550);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B742553:{NFSU2_TR(0x742553);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742554:{NFSU2_TR(0x742554);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B742557:{NFSU2_TR(0x742557);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742559:{NFSU2_TR(0x742559);
u8 U[47];
w4(U+39,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B74255c:{NFSU2_TR(0x74255c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74255d:{NFSU2_TR(0x74255d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74255e:L74255e:{c.instructions+=4;NFSU2_TR(0x74255e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74255f:{NFSU2_TR(0x74255f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B742563:{NFSU2_TR(0x742563);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B742566:{NFSU2_TR(0x742566);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74256e;}}
}
B742568:L742568:{c.instructions+=2;NFSU2_TR(0x742568);
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
B74256b:{NFSU2_TR(0x74256b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74256c:L74256c:{c.instructions+=2;NFSU2_TR(0x74256c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74256d:{NFSU2_TR(0x74256d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74256e:L74256e:{c.instructions+=4;NFSU2_TR(0x74256e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742570:{NFSU2_TR(0x742570);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742573:{NFSU2_TR(0x742573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742574:{NFSU2_TR(0x742574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7425b1;}}
}
B742576:L742576:{c.instructions+=3;NFSU2_TR(0x742576);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742577:{NFSU2_TR(0x742577);
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
B742579:{NFSU2_TR(0x742579);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7425bf;}}
}
B74257b:L74257b:{c.instructions+=1;NFSU2_TR(0x74257b);
{goto L742580;}
}
B742580:L742580:{c.instructions+=3;NFSU2_TR(0x742580);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B742582:{NFSU2_TR(0x742582);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B742585:{NFSU2_TR(0x742585);
if(r1(R+512)){{goto L7425bf;}}
}
B742587:L742587:{c.instructions+=3;NFSU2_TR(0x742587);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74258a:{NFSU2_TR(0x74258a);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B74258d:{NFSU2_TR(0x74258d);
if(r1(R+512)){{goto L7425bf;}}
}
B74258f:L74258f:{c.instructions+=9;NFSU2_TR(0x74258f);
w4(R+8,u32(r1(R+8)));
}
B742592:{NFSU2_TR(0x742592);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742598:{NFSU2_TR(0x742598);
w4(R+12,u32(r1(R+12)));
}
B74259b:{NFSU2_TR(0x74259b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7d2298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
}
B7425a1:{NFSU2_TR(0x7425a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7425a2:{NFSU2_TR(0x7425a2);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7425a6:{NFSU2_TR(0x7425a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B7425a9:{NFSU2_TR(0x7425a9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B7425ab:{NFSU2_TR(0x7425ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742580u);}goto L742580;}}
}
B7425ad:L7425ad:{c.instructions+=4;NFSU2_TR(0x7425ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7425ae:{NFSU2_TR(0x7425ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7425af:{NFSU2_TR(0x7425af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7425b0:{NFSU2_TR(0x7425b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7425b1:L7425b1:{c.instructions+=4;NFSU2_TR(0x7425b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7425b4:{NFSU2_TR(0x7425b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7425b5:{NFSU2_TR(0x7425b5);
__builtin_memmove((R+12),(R+28),4);
}
B7425b7:{NFSU2_TR(0x7425b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7425bcull));
TAIL_STATIC(0x741220u,741);
}
B7425bc:L7425bc:{c.instructions+=1;NFSU2_TR(0x7425bc);
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
B7425bf:L7425bf:{c.instructions+=4;NFSU2_TR(0x7425bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7425c0:{NFSU2_TR(0x7425c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7425c1:{NFSU2_TR(0x7425c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7425c2:{NFSU2_TR(0x7425c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7425c3:L7425c3:{c.instructions+=2;NFSU2_TR(0x7425c3);
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
B7425c6:{NFSU2_TR(0x7425c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7425d0:L7425d0:{c.instructions+=8;NFSU2_TR(0x7425d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B7425d6:{NFSU2_TR(0x7425d6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7425db:{NFSU2_TR(0x7425db);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7425e2:{NFSU2_TR(0x7425e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7425e9:{NFSU2_TR(0x7425e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7425f0:{NFSU2_TR(0x7425f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7425f2:{NFSU2_TR(0x7425f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B7425f5:{NFSU2_TR(0x7425f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L742603;}}
}
B7425f7:L7425f7:{c.instructions+=3;NFSU2_TR(0x7425f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B7425fd:{NFSU2_TR(0x7425fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742601:{NFSU2_TR(0x742601);
{goto L74260a;}
}
B742603:L742603:{c.instructions+=2;NFSU2_TR(0x742603);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B742606:{NFSU2_TR(0x742606);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74260a:L74260a:{c.instructions+=5;NFSU2_TR(0x74260a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74260b:{NFSU2_TR(0x74260b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74260c:{NFSU2_TR(0x74260c);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742613:{NFSU2_TR(0x742613);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742615:{NFSU2_TR(0x742615);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742629;}}
}
B742617:L742617:{c.instructions+=2;NFSU2_TR(0x742617);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B742622:{NFSU2_TR(0x742622);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742629:L742629:{c.instructions+=2;NFSU2_TR(0x742629);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74262b:{NFSU2_TR(0x74262b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74263e;}}
}
B74262d:L74262d:{c.instructions+=4;NFSU2_TR(0x74262d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B742631:{NFSU2_TR(0x742631);
__builtin_memmove((R+4),(R+0),4);
}
B742633:{NFSU2_TR(0x742633);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74263a:{NFSU2_TR(0x74263a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74263e:L74263e:{c.instructions+=4;NFSU2_TR(0x74263e);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B742645:{NFSU2_TR(0x742645);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742647:{NFSU2_TR(0x742647);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742649:{NFSU2_TR(0x742649);
if(r1(R+518)){{goto L742836;}}
}
B74264f:L74264f:{c.instructions+=2;NFSU2_TR(0x74264f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742650:{NFSU2_TR(0x742650);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742651:L742651:{c.instructions+=2;NFSU2_TR(0x742651);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x23ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742653:{NFSU2_TR(0x742653);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742672;}}
}
B742655:L742655:{c.instructions+=3;NFSU2_TR(0x742655);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742656:{NFSU2_TR(0x742656);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74265d:{NFSU2_TR(0x74265d);
__builtin_memmove((R+4),(R+4),4);
}
B742660:L742660:{c.instructions+=3;NFSU2_TR(0x742660);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742662:{NFSU2_TR(0x742662);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742664:{NFSU2_TR(0x742664);
if(r1(R+518)){{goto L74266b;}}
}
B742666:L742666:{c.instructions+=3;NFSU2_TR(0x742666);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742667:{NFSU2_TR(0x742667);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742669:{NFSU2_TR(0x742669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742660u);}goto L742660;}}
}
B74266b:L74266b:{c.instructions+=1;NFSU2_TR(0x74266b);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742672:L742672:{c.instructions+=5;NFSU2_TR(0x742672);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742674:{NFSU2_TR(0x742674);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742676:{NFSU2_TR(0x742676);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B742678:{NFSU2_TR(0x742678);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B74267a:{NFSU2_TR(0x74267a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74269c;}}
}
B74267c:L74267c:{c.instructions+=1;NFSU2_TR(0x74267c);
__builtin_memmove((R+16),(R+16),4);
}
B742680:L742680:{c.instructions+=2;NFSU2_TR(0x742680);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742682:{NFSU2_TR(0x742682);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742695;}}
}
B742684:L742684:{c.instructions+=7;NFSU2_TR(0x742684);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B742687:{NFSU2_TR(0x742687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74268b:{NFSU2_TR(0x74268b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74268c:{NFSU2_TR(0x74268c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B74268f:{NFSU2_TR(0x74268f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742691:{NFSU2_TR(0x742691);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B742693:{NFSU2_TR(0x742693);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742680u);}goto L742680;}}
}
B742695:L742695:{c.instructions+=1;NFSU2_TR(0x742695);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74269c:L74269c:{c.instructions+=4;NFSU2_TR(0x74269c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74269e:{NFSU2_TR(0x74269e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7426a0:{NFSU2_TR(0x7426a0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7426a3:{NFSU2_TR(0x7426a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7426b4;}}
}
B7426a5:L7426a5:{c.instructions+=3;NFSU2_TR(0x7426a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7426a7:{NFSU2_TR(0x7426a7);
__builtin_memmove((R+0),(R+20),4);
}
B7426a9:{NFSU2_TR(0x7426a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7426b0;}}
}
B7426ab:L7426ab:{c.instructions+=1;NFSU2_TR(0x7426ab);
w4(R+0,u32(0x1ull));
}
B7426b0:L7426b0:{c.instructions+=1;NFSU2_TR(0x7426b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7426b4:L7426b4:{c.instructions+=2;NFSU2_TR(0x7426b4);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x62ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7426b7:{NFSU2_TR(0x7426b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7426be;}}
}
B7426b9:L7426b9:{c.instructions+=1;NFSU2_TR(0x7426b9);
w4(R+4,u32(0x2ull));
}
B7426be:L7426be:{c.instructions+=2;NFSU2_TR(0x7426be);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x77ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7426c1:{NFSU2_TR(0x7426c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7426c8;}}
}
B7426c3:L7426c3:{c.instructions+=1;NFSU2_TR(0x7426c3);
w4(R+4,u32(0x4ull));
}
B7426c8:L7426c8:{c.instructions+=2;NFSU2_TR(0x7426c8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x6cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7426cb:{NFSU2_TR(0x7426cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7426d4;}}
}
B7426cd:L7426cd:{c.instructions+=2;NFSU2_TR(0x7426cd);
w4(R+4,u32(0x8ull));
}
B7426d2:{NFSU2_TR(0x7426d2);
{goto L7426dc;}
}
B7426d4:L7426d4:{c.instructions+=2;NFSU2_TR(0x7426d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7426d6:{NFSU2_TR(0x7426d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742762;}}
}
B7426dc:L7426dc:{c.instructions+=3;NFSU2_TR(0x7426dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B7426de:{NFSU2_TR(0x7426de);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7426e1:{NFSU2_TR(0x7426e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7426eb;}}
}
B7426e3:L7426e3:{c.instructions+=2;NFSU2_TR(0x7426e3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7426e4:{NFSU2_TR(0x7426e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7426eb:L7426eb:{c.instructions+=2;NFSU2_TR(0x7426eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7426ed:{NFSU2_TR(0x7426ed);
__builtin_memmove((R+4),(R+4),4);
}
B7426f0:L7426f0:{c.instructions+=3;NFSU2_TR(0x7426f0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7426f2:{NFSU2_TR(0x7426f2);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7426f5:{NFSU2_TR(0x7426f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74270e;}}
}
B7426f7:L7426f7:{c.instructions+=8;NFSU2_TR(0x7426f7);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B7426fa:{NFSU2_TR(0x7426fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7d2398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B742701:{NFSU2_TR(0x742701);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B742704:{NFSU2_TR(0x742704);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B742706:{NFSU2_TR(0x742706);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B742707:{NFSU2_TR(0x742707);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B742708:{NFSU2_TR(0x742708);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74270a:{NFSU2_TR(0x74270a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7426f0u);}goto L7426f0;}}
}
B74270c:L74270c:{c.instructions+=1;NFSU2_TR(0x74270c);
{goto L74271f;}
}
B74270e:L74270e:{c.instructions+=3;NFSU2_TR(0x74270e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742710:{NFSU2_TR(0x742710);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742717:{NFSU2_TR(0x742717);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742726;}}
}
B742719:L742719:{c.instructions+=2;NFSU2_TR(0x742719);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74271c:{NFSU2_TR(0x74271c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742726;}}
}
B74271e:L74271e:{c.instructions+=1;NFSU2_TR(0x74271e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74271f:L74271f:{c.instructions+=1;NFSU2_TR(0x74271f);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742726:L742726:{c.instructions+=2;NFSU2_TR(0x742726);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742729:{NFSU2_TR(0x742729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74272d;}}
}
B74272b:L74272b:{c.instructions+=1;NFSU2_TR(0x74272b);
w4(R+0,u32(0-u32(r4(R+0))));
}
B74272d:L74272d:{c.instructions+=2;NFSU2_TR(0x74272d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x62ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B742730:{NFSU2_TR(0x742730);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74273d;}}
}
B742732:L742732:{c.instructions+=4;NFSU2_TR(0x742732);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742736:{NFSU2_TR(0x742736);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742738:{NFSU2_TR(0x742738);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742739:{NFSU2_TR(0x742739);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74273d:L74273d:{c.instructions+=2;NFSU2_TR(0x74273d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x77ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B742740:{NFSU2_TR(0x742740);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742750;}}
}
B742742:L742742:{c.instructions+=4;NFSU2_TR(0x742742);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742746:{NFSU2_TR(0x742746);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B742749:{NFSU2_TR(0x742749);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B74274c:{NFSU2_TR(0x74274c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742750:L742750:{c.instructions+=2;NFSU2_TR(0x742750);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x6cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B742753:{NFSU2_TR(0x742753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742762;}}
}
B742755:L742755:{c.instructions+=4;NFSU2_TR(0x742755);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742759:{NFSU2_TR(0x742759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B74275b:{NFSU2_TR(0x74275b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B74275e:{NFSU2_TR(0x74275e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742762:L742762:{c.instructions+=2;NFSU2_TR(0x742762);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B742765:{NFSU2_TR(0x742765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742809;}}
}
B74276b:L74276b:{c.instructions+=2;NFSU2_TR(0x74276b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74276d:{NFSU2_TR(0x74276d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742809;}}
}
B742773:L742773:{c.instructions+=4;NFSU2_TR(0x742773);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742777:{NFSU2_TR(0x742777);
w4(R+8,u32(0x1ull));
}
B74277c:{NFSU2_TR(0x74277c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74277e:{NFSU2_TR(0x74277e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B742780:L742780:{c.instructions+=3;NFSU2_TR(0x742780);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B742782:{NFSU2_TR(0x742782);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B742784:{NFSU2_TR(0x742784);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74278a;}}
}
B742786:L742786:{c.instructions+=2;NFSU2_TR(0x742786);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742788:{NFSU2_TR(0x742788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7427b9;}}
}
B74278a:L74278a:{c.instructions+=3;NFSU2_TR(0x74278a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B74278d:{NFSU2_TR(0x74278d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74278f:{NFSU2_TR(0x74278f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7427b9;}}
}
B742791:L742791:{c.instructions+=2;NFSU2_TR(0x742791);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x25ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742793:{NFSU2_TR(0x742793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7427b2;}}
}
B742795:L742795:{c.instructions+=9;NFSU2_TR(0x742795);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B742799:{NFSU2_TR(0x742799);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B74279d:{NFSU2_TR(0x74279d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7427a3:{NFSU2_TR(0x7427a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7d2398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
}
B7427a9:{NFSU2_TR(0x7427a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B7427ac:{NFSU2_TR(0x7427ac);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7427ae:{NFSU2_TR(0x7427ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7427af:{NFSU2_TR(0x7427af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7427b0:{NFSU2_TR(0x7427b0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742780u);}goto L742780;}
}
B7427b2:L7427b2:{c.instructions+=5;NFSU2_TR(0x7427b2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7427b3:{NFSU2_TR(0x7427b3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7427b5:{NFSU2_TR(0x7427b5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7427b6:{NFSU2_TR(0x7427b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7427b7:{NFSU2_TR(0x7427b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742780u);}goto L742780;}
}
B7427b9:L7427b9:{c.instructions+=3;NFSU2_TR(0x7427b9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7427bb:{NFSU2_TR(0x7427bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7427c2:{NFSU2_TR(0x7427c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7427ea;}}
}
B7427c4:L7427c4:{c.instructions+=8;NFSU2_TR(0x7427c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7427c8:{NFSU2_TR(0x7427c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7427cb:{NFSU2_TR(0x7427cb);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B7427cd:{NFSU2_TR(0x7427cd);
__builtin_memmove((R+8),(R+20),4);
}
B7427cf:{NFSU2_TR(0x7427cf);
__builtin_memmove((R+4),(R+20),4);
}
B7427d1:{NFSU2_TR(0x7427d1);
__builtin_memmove((R+12),(R+4),4);
}
B7427d3:{NFSU2_TR(0x7427d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7427d6:{NFSU2_TR(0x7427d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7427d8:L7427d8:{c.instructions+=1;NFSU2_TR(0x7427d8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7427da;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7427d8u);}goto L7427d8;}
}
B7427da:L7427da:{c.instructions+=2;NFSU2_TR(0x7427da);
__builtin_memmove((R+4),(R+12),4);
}
B7427dc:{NFSU2_TR(0x7427dc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7427df:L7427df:{c.instructions+=1;NFSU2_TR(0x7427df);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L7427e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7427dfu);}goto L7427df;}
}
B7427e1:L7427e1:{c.instructions+=2;NFSU2_TR(0x7427e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7427e8:{NFSU2_TR(0x7427e8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7427ea:L7427ea:{c.instructions+=7;NFSU2_TR(0x7427ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7427ee:{NFSU2_TR(0x7427ee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7427f0:{NFSU2_TR(0x7427f0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B7427f2:{NFSU2_TR(0x7427f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7427f4:{NFSU2_TR(0x7427f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7427fb:{NFSU2_TR(0x7427fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7427ff:{NFSU2_TR(0x7427ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742809;}}
}
B742801:L742801:{c.instructions+=2;NFSU2_TR(0x742801);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B742802:{NFSU2_TR(0x742802);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742809:L742809:{c.instructions+=3;NFSU2_TR(0x742809);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74280d:{NFSU2_TR(0x74280d);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B742811:{NFSU2_TR(0x742811);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L742834;}}
}
B742813:L742813:{c.instructions+=5;NFSU2_TR(0x742813);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742816:{NFSU2_TR(0x742816);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742817:{NFSU2_TR(0x742817);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742819:{NFSU2_TR(0x742819);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742820:{NFSU2_TR(0x742820);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74282a;}}
}
B742822:L742822:{c.instructions+=2;NFSU2_TR(0x742822);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B742823:{NFSU2_TR(0x742823);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74282a:L74282a:{c.instructions+=3;NFSU2_TR(0x74282a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74282c:{NFSU2_TR(0x74282c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74282e:{NFSU2_TR(0x74282e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742651u);}goto L742651;}}
}
B742834:L742834:{c.instructions+=2;NFSU2_TR(0x742834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B742835:{NFSU2_TR(0x742835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742836:L742836:{c.instructions+=7;NFSU2_TR(0x742836);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74283d:{NFSU2_TR(0x74283d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742841:{NFSU2_TR(0x742841);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B742843:{NFSU2_TR(0x742843);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74284a:{NFSU2_TR(0x74284a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74284b:{NFSU2_TR(0x74284b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74284c:{NFSU2_TR(0x74284c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742851ull));
TAIL_STATIC(0x76115eu,761);
}
B742851:L742851:{c.instructions+=2;NFSU2_TR(0x742851);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742857:{NFSU2_TR(0x742857);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742860:L742860:{c.instructions+=8;NFSU2_TR(0x742860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B742863:{NFSU2_TR(0x742863);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742864:{NFSU2_TR(0x742864);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742865:{NFSU2_TR(0x742865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742866:{NFSU2_TR(0x742866);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74286a:{NFSU2_TR(0x74286a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74286c:{NFSU2_TR(0x74286c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74286e:{NFSU2_TR(0x74286e);
if(r1(R+518)){{goto L742a36;}}
}
B742874:L742874:{c.instructions+=3;NFSU2_TR(0x742874);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B742876:{NFSU2_TR(0x742876);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742879:{NFSU2_TR(0x742879);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7428ad;}}
}
B74287b:L74287b:{c.instructions+=4;NFSU2_TR(0x74287b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74287e:{NFSU2_TR(0x74287e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74287f:{NFSU2_TR(0x74287f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742882:{NFSU2_TR(0x742882);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L742a36;}}
}
B742888:L742888:{c.instructions+=1;NFSU2_TR(0x742888);
{goto L742890;}
}
B742890:L742890:{c.instructions+=8;NFSU2_TR(0x742890);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B742893:{NFSU2_TR(0x742893);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74289a:{NFSU2_TR(0x74289a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74289d:{NFSU2_TR(0x74289d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7428a0:{NFSU2_TR(0x7428a0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B7428a2:{NFSU2_TR(0x7428a2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7428a3:{NFSU2_TR(0x7428a3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7428a6:{NFSU2_TR(0x7428a6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742890u);}goto L742890;}}
}
B7428a8:L7428a8:{c.instructions+=1;NFSU2_TR(0x7428a8);
{goto L742a32;}
}
B7428ad:L7428ad:{c.instructions+=2;NFSU2_TR(0x7428ad);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7428b0:{NFSU2_TR(0x7428b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L742a36;}}
}
B7428b6:L7428b6:{c.instructions+=2;NFSU2_TR(0x7428b6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7428b9:{NFSU2_TR(0x7428b9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742a36;}}
}
B7428bf:L7428bf:{c.instructions+=4;NFSU2_TR(0x7428bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7428c1:{NFSU2_TR(0x7428c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7428c5:{NFSU2_TR(0x7428c5);
__builtin_memmove((R+0),(R+28),4);
}
B7428c7:{NFSU2_TR(0x7428c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7428ccull));
TAIL_STATIC(0x740ff0u,740);
}
B7428cc:L7428cc:{c.instructions+=2;NFSU2_TR(0x7428cc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x20ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7428cf:{NFSU2_TR(0x7428cf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7428da;}}
}
B7428d1:L7428d1:{c.instructions+=2;NFSU2_TR(0x7428d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7428d5:{NFSU2_TR(0x7428d5);
{goto L742a32;}
}
B7428da:L7428da:{c.instructions+=2;NFSU2_TR(0x7428da);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7428dd:{NFSU2_TR(0x7428dd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742a36;}}
}
B7428e3:L7428e3:{c.instructions+=15;NFSU2_TR(0x7428e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7428e5:{NFSU2_TR(0x7428e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7428e9:{NFSU2_TR(0x7428e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7428ed:{NFSU2_TR(0x7428ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7428f1:{NFSU2_TR(0x7428f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7428f5:{NFSU2_TR(0x7428f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7428f9:{NFSU2_TR(0x7428f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7428fd:{NFSU2_TR(0x7428fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742901:{NFSU2_TR(0x742901);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742905:{NFSU2_TR(0x742905);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742909:{NFSU2_TR(0x742909);
w4(R+4,u32(0x4ull));
}
B74290e:{NFSU2_TR(0x74290e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B742912:{NFSU2_TR(0x742912);
__builtin_memmove((R+0),(R+28),4);
}
B742914:{NFSU2_TR(0x742914);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B74291c:{NFSU2_TR(0x74291c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742921ull));
TAIL_STATIC(0x740ff0u,740);
}
B742921:L742921:{c.instructions+=3;NFSU2_TR(0x742921);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742923:{NFSU2_TR(0x742923);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742926:{NFSU2_TR(0x742926);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74292d;}}
}
B742928:L742928:{c.instructions+=2;NFSU2_TR(0x742928);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74292b:{NFSU2_TR(0x74292b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742932;}}
}
B74292d:L74292d:{c.instructions+=2;NFSU2_TR(0x74292d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74292f:{NFSU2_TR(0x74292f);
if(r1(R+518)){{goto L742932;}}
}
B742931:L742931:{c.instructions+=1;NFSU2_TR(0x742931);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742932:L742932:{c.instructions+=3;NFSU2_TR(0x742932);
w4(R+4,u32(0x2ull));
}
B742937:{NFSU2_TR(0x742937);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74293b:{NFSU2_TR(0x74293b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742940ull));
TAIL_STATIC(0x740ff0u,740);
}
B742940:L742940:{c.instructions+=3;NFSU2_TR(0x742940);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742942:{NFSU2_TR(0x742942);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742945:{NFSU2_TR(0x742945);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74294c;}}
}
B742947:L742947:{c.instructions+=2;NFSU2_TR(0x742947);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74294a:{NFSU2_TR(0x74294a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742951;}}
}
B74294c:L74294c:{c.instructions+=2;NFSU2_TR(0x74294c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74294e:{NFSU2_TR(0x74294e);
if(r1(R+518)){{goto L742951;}}
}
B742950:L742950:{c.instructions+=1;NFSU2_TR(0x742950);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742951:L742951:{c.instructions+=3;NFSU2_TR(0x742951);
w4(R+4,u32(0x2ull));
}
B742956:{NFSU2_TR(0x742956);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74295a:{NFSU2_TR(0x74295a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74295full));
TAIL_STATIC(0x740ff0u,740);
}
B74295f:L74295f:{c.instructions+=3;NFSU2_TR(0x74295f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742961:{NFSU2_TR(0x742961);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742964:{NFSU2_TR(0x742964);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74296b;}}
}
B742966:L742966:{c.instructions+=2;NFSU2_TR(0x742966);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742969:{NFSU2_TR(0x742969);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742970;}}
}
B74296b:L74296b:{c.instructions+=2;NFSU2_TR(0x74296b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74296d:{NFSU2_TR(0x74296d);
if(r1(R+518)){{goto L742970;}}
}
B74296f:L74296f:{c.instructions+=1;NFSU2_TR(0x74296f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B742970:L742970:{c.instructions+=3;NFSU2_TR(0x742970);
w4(R+4,u32(0x2ull));
}
B742975:{NFSU2_TR(0x742975);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B742979:{NFSU2_TR(0x742979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74297eull));
TAIL_STATIC(0x740ff0u,740);
}
B74297e:L74297e:{c.instructions+=3;NFSU2_TR(0x74297e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742980:{NFSU2_TR(0x742980);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742983:{NFSU2_TR(0x742983);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74298a;}}
}
B742985:L742985:{c.instructions+=2;NFSU2_TR(0x742985);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742988:{NFSU2_TR(0x742988);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74298f;}}
}
B74298a:L74298a:{c.instructions+=2;NFSU2_TR(0x74298a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74298c:{NFSU2_TR(0x74298c);
if(r1(R+518)){{goto L74298f;}}
}
B74298e:L74298e:{c.instructions+=1;NFSU2_TR(0x74298e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74298f:L74298f:{c.instructions+=3;NFSU2_TR(0x74298f);
w4(R+4,u32(0x2ull));
}
B742994:{NFSU2_TR(0x742994);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B742998:{NFSU2_TR(0x742998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74299dull));
TAIL_STATIC(0x740ff0u,740);
}
B74299d:L74299d:{c.instructions+=3;NFSU2_TR(0x74299d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74299f:{NFSU2_TR(0x74299f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7429a2:{NFSU2_TR(0x7429a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7429a9;}}
}
B7429a4:L7429a4:{c.instructions+=2;NFSU2_TR(0x7429a4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7429a7:{NFSU2_TR(0x7429a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7429ae;}}
}
B7429a9:L7429a9:{c.instructions+=2;NFSU2_TR(0x7429a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7429ab:{NFSU2_TR(0x7429ab);
if(r1(R+518)){{goto L7429ae;}}
}
B7429ad:L7429ad:{c.instructions+=1;NFSU2_TR(0x7429ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7429ae:L7429ae:{c.instructions+=3;NFSU2_TR(0x7429ae);
w4(R+4,u32(0x2ull));
}
B7429b3:{NFSU2_TR(0x7429b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7429b7:{NFSU2_TR(0x7429b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7429bcull));
TAIL_STATIC(0x740ff0u,740);
}
B7429bc:L7429bc:{c.instructions+=4;NFSU2_TR(0x7429bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7429c0:{NFSU2_TR(0x7429c0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7b2ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7b2ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7429c5:{NFSU2_TR(0x7429c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7429c9:{NFSU2_TR(0x7429c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7429ea;}}
}
B7429cb:L7429cb:{c.instructions+=2;NFSU2_TR(0x7429cb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x83bull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x83bull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7429d0:{NFSU2_TR(0x7429d0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7429ea;}}
}
B7429d2:L7429d2:{c.instructions+=2;NFSU2_TR(0x7429d2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7429d5:{NFSU2_TR(0x7429d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7429ea;}}
}
B7429d7:L7429d7:{c.instructions+=2;NFSU2_TR(0x7429d7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7429da:{NFSU2_TR(0x7429da);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7429ea;}}
}
B7429dc:L7429dc:{c.instructions+=3;NFSU2_TR(0x7429dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7429e0:{NFSU2_TR(0x7429e0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7429e3:{NFSU2_TR(0x7429e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7429ea;}}
}
B7429e5:L7429e5:{c.instructions+=2;NFSU2_TR(0x7429e5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7429e8:{NFSU2_TR(0x7429e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7429ec;}}
}
B7429ea:L7429ea:{c.instructions+=1;NFSU2_TR(0x7429ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7429ec:L7429ec:{c.instructions+=3;NFSU2_TR(0x7429ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7429f0:{NFSU2_TR(0x7429f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7429f2:{NFSU2_TR(0x7429f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L742a36;}}
}
B7429f4:L7429f4:{c.instructions+=2;NFSU2_TR(0x7429f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7429f7:{NFSU2_TR(0x7429f7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742a36;}}
}
B7429f9:L7429f9:{c.instructions+=3;NFSU2_TR(0x7429f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7429fd:{NFSU2_TR(0x7429fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7429ff:{NFSU2_TR(0x7429ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L742a36;}}
}
B742a01:L742a01:{c.instructions+=2;NFSU2_TR(0x742a01);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742a04:{NFSU2_TR(0x742a04);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742a36;}}
}
B742a06:L742a06:{c.instructions+=3;NFSU2_TR(0x742a06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742a0a:{NFSU2_TR(0x742a0a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B742a0c:{NFSU2_TR(0x742a0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L742a36;}}
}
B742a0e:L742a0e:{c.instructions+=2;NFSU2_TR(0x742a0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742a11:{NFSU2_TR(0x742a11);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742a36;}}
}
B742a13:L742a13:{c.instructions+=2;NFSU2_TR(0x742a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742a15:{NFSU2_TR(0x742a15);
if(r1(R+518)){{goto L742a36;}}
}
B742a17:L742a17:{c.instructions+=7;NFSU2_TR(0x742a17);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B742a1b:{NFSU2_TR(0x742a1b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B742a1c:{NFSU2_TR(0x742a1c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x76cull))));
}
B742a21:{NFSU2_TR(0x742a21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742a22:{NFSU2_TR(0x742a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742a26:{NFSU2_TR(0x742a26);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742a2a:{NFSU2_TR(0x742a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742a2full));
TAIL_STATIC(0x741190u,741);
}
B742a2f:L742a2f:{c.instructions+=1;NFSU2_TR(0x742a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B742a32:L742a32:{c.instructions+=2;NFSU2_TR(0x742a32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742a34:{NFSU2_TR(0x742a34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742a43;}}
}
B742a36:L742a36:{c.instructions+=3;NFSU2_TR(0x742a36);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742a3a:{NFSU2_TR(0x742a3a);
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
B742a3c:{NFSU2_TR(0x742a3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742a43;}}
}
B742a3e:L742a3e:{c.instructions+=1;NFSU2_TR(0x742a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742a43ull));
TAIL_STATIC(0x74f5f0u,74f);
}
B742a43:L742a43:{c.instructions+=5;NFSU2_TR(0x742a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742a44:{NFSU2_TR(0x742a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742a45:{NFSU2_TR(0x742a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742a46:{NFSU2_TR(0x742a46);
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
B742a49:{NFSU2_TR(0x742a49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742a50:L742a50:{c.instructions+=7;NFSU2_TR(0x742a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B742a53:{NFSU2_TR(0x742a53);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B742a58:{NFSU2_TR(0x742a58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742a59:{NFSU2_TR(0x742a59);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742a5d:{NFSU2_TR(0x742a5d);
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
B742a5f:{NFSU2_TR(0x742a5f);
w4(R+4,u32(0x10ull));
}
B742a64:{NFSU2_TR(0x742a64);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B742a68:L742a68:{c.instructions+=1;NFSU2_TR(0x742a68);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L742a6a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742a68u);}goto L742a68;}
}
B742a6a:L742a6a:{c.instructions+=2;NFSU2_TR(0x742a6a);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x32ull));
s1(u32(r4(U+0)),r1(U+4));
}
B742a6f:{NFSU2_TR(0x742a6f);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742a73:L742a73:{c.instructions+=3;NFSU2_TR(0x742a73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B742a77:{NFSU2_TR(0x742a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742a78:{NFSU2_TR(0x742a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742a7dull));
TAIL_STATIC(0x770d58u,770);
}
B742a7d:L742a7d:{c.instructions+=3;NFSU2_TR(0x742a7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742a7f:{NFSU2_TR(0x742a7f);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742a83:{NFSU2_TR(0x742a83);
if(r1(R+518)){{goto L742aa0;}}
}
B742a85:L742a85:{c.instructions+=4;NFSU2_TR(0x742a85);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B742a87:{NFSU2_TR(0x742a87);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xaull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xaull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B742a89:{NFSU2_TR(0x742a89);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742a8d:{NFSU2_TR(0x742a8d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742a73u);}goto L742a73;}}
}
B742a8f:L742a8f:{c.instructions+=4;NFSU2_TR(0x742a8f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B742a92:{NFSU2_TR(0x742a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742a93:{NFSU2_TR(0x742a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742a97:{NFSU2_TR(0x742a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742a9cull));
TAIL_STATIC(0x76115eu,761);
}
B742a9c:L742a9c:{c.instructions+=2;NFSU2_TR(0x742a9c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742a9f:{NFSU2_TR(0x742a9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742aa0:L742aa0:{c.instructions+=2;NFSU2_TR(0x742aa0);
w1(R+512,u8((r1(R+0))<(u8(0xaull))));
}
B742aa2:{NFSU2_TR(0x742aa2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742a8fu);}goto L742a8f;}}
}
B742aa4:L742aa4:{c.instructions+=4;NFSU2_TR(0x742aa4);
w4(R+8,u32(r1(R+0)));
}
B742aa7:{NFSU2_TR(0x742aa7);
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
B742aa9:{NFSU2_TR(0x742aa9);
w4(R+4,u32(0x10ull));
}
B742aae:{NFSU2_TR(0x742aae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B742ab2:L742ab2:{c.instructions+=1;NFSU2_TR(0x742ab2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L742ab4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742ab2u);}goto L742ab2;}
}
B742ab4:L742ab4:{c.instructions+=18;NFSU2_TR(0x742ab4);
__builtin_memmove((R+4),gp(0x7d2844),4);
}
B742aba:{NFSU2_TR(0x742aba);
__builtin_memmove((R+0),gp(0x7d284c),4);
}
B742abf:{NFSU2_TR(0x742abf);
u8 U[8];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742ac3:{NFSU2_TR(0x742ac3);
__builtin_memmove((R+4),gp(0x7d2850),4);
}
B742ac9:{NFSU2_TR(0x742ac9);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742acd:{NFSU2_TR(0x742acd);
__builtin_memmove((R+8),gp(0x7d2848),4);
}
B742ad3:{NFSU2_TR(0x742ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742ad7:{NFSU2_TR(0x742ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742adb:{NFSU2_TR(0x742adb);
__builtin_memmove((R+8),gp(0x7d2854),1);
}
B742ae1:{NFSU2_TR(0x742ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742ae5:{NFSU2_TR(0x742ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742ae9:{NFSU2_TR(0x742ae9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B742aed:{NFSU2_TR(0x742aed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742aee:{NFSU2_TR(0x742aee);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x33ull));
s1(u32(r4(U+0)),r1(U+4));
}
B742af3:{NFSU2_TR(0x742af3);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742af7:{NFSU2_TR(0x742af7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742afb:{NFSU2_TR(0x742afb);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w2(U+4,u16(0xf0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B742b02:{NFSU2_TR(0x742b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742b07ull));
TAIL_STATIC(0x770d58u,770);
}
B742b07:L742b07:{c.instructions+=2;NFSU2_TR(0x742b07);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742b09:{NFSU2_TR(0x742b09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742a8fu);}goto L742a8f;}}
}
B742b0b:L742b0b:{c.instructions+=4;NFSU2_TR(0x742b0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742b0f:{NFSU2_TR(0x742b0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742b11:{NFSU2_TR(0x742b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742b12:{NFSU2_TR(0x742b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742b17ull));
TAIL_STATIC(0x76115eu,761);
}
B742b17:L742b17:{c.instructions+=2;NFSU2_TR(0x742b17);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742b1a:{NFSU2_TR(0x742b1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742b20:L742b20:{c.instructions+=3;NFSU2_TR(0x742b20);
__builtin_memmove((R+0),gp(0x8b7bd4),4);
}
B742b25:{NFSU2_TR(0x742b25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742b27:{NFSU2_TR(0x742b27);
if(r1(R+518)){{goto L742b2d;}}
}
B742b29:L742b29:{c.instructions+=2;NFSU2_TR(0x742b29);
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
B742b2c:{NFSU2_TR(0x742b2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742b2d:L742b2d:{c.instructions+=2;NFSU2_TR(0x742b2d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742b2f:{NFSU2_TR(0x742b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742b34ull));
TAIL_STATIC(0x74a1a0u,74a);
}
B742b34:L742b34:{c.instructions+=6;NFSU2_TR(0x742b34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B742b37:{NFSU2_TR(0x742b37);
s4(0x8b7bd4,u32(0x1ull));
}
B742b41:{NFSU2_TR(0x742b41);
s4(0x8b7bd8,u32(0x0ull));
}
B742b4b:{NFSU2_TR(0x742b4b);
s4(0x8b7bdc,u32(0x0ull));
}
B742b55:{NFSU2_TR(0x742b55);
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
B742b57:{NFSU2_TR(0x742b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742b60:L742b60:{c.instructions+=6;NFSU2_TR(0x742b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
}
B742b66:{NFSU2_TR(0x742b66);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B742b6b:{NFSU2_TR(0x742b6b);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742b72:{NFSU2_TR(0x742b72);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742b79:{NFSU2_TR(0x742b79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6f70656eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742b7e:{NFSU2_TR(0x742b7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742b98;}}
}
B742b80:L742b80:{c.instructions+=3;NFSU2_TR(0x742b80);
__builtin_memmove((R+0),gp(0x8b7bd4),4);
}
B742b85:{NFSU2_TR(0x742b85);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742b8c:{NFSU2_TR(0x742b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742b91ull));
TAIL_STATIC(0x76115eu,761);
}
B742b91:L742b91:{c.instructions+=2;NFSU2_TR(0x742b91);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742b97:{NFSU2_TR(0x742b97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742b98:L742b98:{c.instructions+=2;NFSU2_TR(0x742b98);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b7bd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742b9f:{NFSU2_TR(0x742b9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742c43;}}
}
B742ba5:L742ba5:{c.instructions+=2;NFSU2_TR(0x742ba5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6f6e6c6eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742baa:{NFSU2_TR(0x742baa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742bc4;}}
}
B742bac:L742bac:{c.instructions+=3;NFSU2_TR(0x742bac);
__builtin_memmove((R+0),gp(0x8b7bdc),4);
}
B742bb1:{NFSU2_TR(0x742bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742bb8:{NFSU2_TR(0x742bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742bbdull));
TAIL_STATIC(0x76115eu,761);
}
B742bbd:L742bbd:{c.instructions+=2;NFSU2_TR(0x742bbd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742bc3:{NFSU2_TR(0x742bc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742bc4:L742bc4:{c.instructions+=2;NFSU2_TR(0x742bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x636f6e6eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742bc9:{NFSU2_TR(0x742bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742be3;}}
}
B742bcb:L742bcb:{c.instructions+=3;NFSU2_TR(0x742bcb);
__builtin_memmove((R+0),gp(0x8b7bd8),4);
}
B742bd0:{NFSU2_TR(0x742bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742bd7:{NFSU2_TR(0x742bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742bdcull));
TAIL_STATIC(0x76115eu,761);
}
B742bdc:L742bdc:{c.instructions+=2;NFSU2_TR(0x742bdc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742be2:{NFSU2_TR(0x742be2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742be3:L742be3:{c.instructions+=2;NFSU2_TR(0x742be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61646472ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742be8:{NFSU2_TR(0x742be8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742c02;}}
}
B742bea:L742bea:{c.instructions+=1;NFSU2_TR(0x742bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742befull));
TAIL_STATIC(0x74ad60u,74a);
}
B742bef:L742bef:{c.instructions+=2;NFSU2_TR(0x742bef);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742bf6:{NFSU2_TR(0x742bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742bfbull));
TAIL_STATIC(0x76115eu,761);
}
B742bfb:L742bfb:{c.instructions+=2;NFSU2_TR(0x742bfb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742c01:{NFSU2_TR(0x742c01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742c02:L742c02:{c.instructions+=2;NFSU2_TR(0x742c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d616378ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742c07:{NFSU2_TR(0x742c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742c43;}}
}
B742c09:L742c09:{c.instructions+=3;NFSU2_TR(0x742c09);
__builtin_memmove((R+0),(R+16),4);
}
B742c0c:{NFSU2_TR(0x742c0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742c0d:{NFSU2_TR(0x742c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742c12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742a50u);}goto L742a50;}
}
B742c12:L742c12:{c.instructions+=9;NFSU2_TR(0x742c12);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742c19:{NFSU2_TR(0x742c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B742c1d:{NFSU2_TR(0x742c1d);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B742c22:{NFSU2_TR(0x742c22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B742c24:{NFSU2_TR(0x742c24);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B742c28:{NFSU2_TR(0x742c28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B742c2b:{NFSU2_TR(0x742c2b);
w4(R+0,u32(0x1ull));
}
B742c30:{NFSU2_TR(0x742c30);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742c37:{NFSU2_TR(0x742c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742c3cull));
TAIL_STATIC(0x76115eu,761);
}
B742c3c:L742c3c:{c.instructions+=2;NFSU2_TR(0x742c3c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742c42:{NFSU2_TR(0x742c42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742c43:L742c43:{c.instructions+=3;NFSU2_TR(0x742c43);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742c4a:{NFSU2_TR(0x742c4a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B742c4d:{NFSU2_TR(0x742c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742c52ull));
TAIL_STATIC(0x76115eu,761);
}
B742c52:L742c52:{c.instructions+=2;NFSU2_TR(0x742c52);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742c58:{NFSU2_TR(0x742c58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742c60:L742c60:{c.instructions+=1;NFSU2_TR(0x742c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742c65ull));
{goto L742e10;}
}
B742c65:L742c65:{c.instructions+=1;NFSU2_TR(0x742c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742c6aull));
TAIL_STATIC(0x74ad10u,74a);
}
B742c6a:L742c6a:{c.instructions+=3;NFSU2_TR(0x742c6a);
s4(0x8b7bd4,u32(0x0ull));
}
B742c74:{NFSU2_TR(0x742c74);
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
B742c76:{NFSU2_TR(0x742c76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742c80:L742c80:{c.instructions+=3;NFSU2_TR(0x742c80);
__builtin_memmove((R+0),gp(0x8b7c70),1);
}
B742c85:{NFSU2_TR(0x742c85);
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
B742c87:{NFSU2_TR(0x742c87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742d9b;}}
}
B742c8d:L742c8d:{c.instructions+=4;NFSU2_TR(0x742c8d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742c8f:{NFSU2_TR(0x742c8f);
u8 U[4];
w4(U+0,u32(0x8b7c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742c94:{NFSU2_TR(0x742c94);
u8 U[4];
w4(U+0,u32(0x6d616378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742c99:{NFSU2_TR(0x742c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742c9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742b60u);}goto L742b60;}
}
B742c9e:L742c9e:{c.instructions+=3;NFSU2_TR(0x742c9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B742ca1:{NFSU2_TR(0x742ca1);
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
B742ca3:{NFSU2_TR(0x742ca3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742d9b;}}
}
B742ca9:L742ca9:{c.instructions+=50;NFSU2_TR(0x742ca9);
w4(R+0,u32(m1(0x8b7c60)));
}
B742cb0:{NFSU2_TR(0x742cb0);
__builtin_memmove((R+4),(R+0),4);
}
B742cb2:{NFSU2_TR(0x742cb2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B742cb5:{NFSU2_TR(0x742cb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742cbb:{NFSU2_TR(0x742cbb);
__builtin_memmove(gp(0x8b7c72),(R+0),1);
}
B742cc0:{NFSU2_TR(0x742cc0);
w4(R+0,u32(m1(0x8b7c61)));
}
B742cc7:{NFSU2_TR(0x742cc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B742cca:{NFSU2_TR(0x742cca);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742cd0:{NFSU2_TR(0x742cd0);
__builtin_memmove((R+4),(R+0),4);
}
B742cd2:{NFSU2_TR(0x742cd2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B742cd5:{NFSU2_TR(0x742cd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742cdb:{NFSU2_TR(0x742cdb);
__builtin_memmove(gp(0x8b7c74),(R+0),1);
}
B742ce0:{NFSU2_TR(0x742ce0);
w4(R+0,u32(m1(0x8b7c62)));
}
B742ce7:{NFSU2_TR(0x742ce7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B742cea:{NFSU2_TR(0x742cea);
__builtin_memmove(gp(0x8b7c71),(R+8),1);
}
B742cf0:{NFSU2_TR(0x742cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742cf6:{NFSU2_TR(0x742cf6);
__builtin_memmove((R+4),(R+0),4);
}
B742cf8:{NFSU2_TR(0x742cf8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B742cfb:{NFSU2_TR(0x742cfb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742d01:{NFSU2_TR(0x742d01);
__builtin_memmove(gp(0x8b7c76),(R+0),1);
}
B742d06:{NFSU2_TR(0x742d06);
w4(R+0,u32(m1(0x8b7c63)));
}
B742d0d:{NFSU2_TR(0x742d0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B742d10:{NFSU2_TR(0x742d10);
__builtin_memmove(gp(0x8b7c73),(R+8),1);
}
B742d16:{NFSU2_TR(0x742d16);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742d1c:{NFSU2_TR(0x742d1c);
__builtin_memmove((R+4),(R+0),4);
}
B742d1e:{NFSU2_TR(0x742d1e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B742d21:{NFSU2_TR(0x742d21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742d27:{NFSU2_TR(0x742d27);
__builtin_memmove(gp(0x8b7c78),(R+0),1);
}
B742d2c:{NFSU2_TR(0x742d2c);
w4(R+0,u32(m1(0x8b7c64)));
}
B742d33:{NFSU2_TR(0x742d33);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B742d36:{NFSU2_TR(0x742d36);
__builtin_memmove(gp(0x8b7c75),(R+8),1);
}
B742d3c:{NFSU2_TR(0x742d3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742d42:{NFSU2_TR(0x742d42);
__builtin_memmove((R+4),(R+0),4);
}
B742d44:{NFSU2_TR(0x742d44);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B742d47:{NFSU2_TR(0x742d47);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742d4d:{NFSU2_TR(0x742d4d);
__builtin_memmove(gp(0x8b7c7a),(R+0),1);
}
B742d52:{NFSU2_TR(0x742d52);
w4(R+0,u32(m1(0x8b7c65)));
}
B742d59:{NFSU2_TR(0x742d59);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B742d5c:{NFSU2_TR(0x742d5c);
__builtin_memmove(gp(0x8b7c77),(R+8),1);
}
B742d62:{NFSU2_TR(0x742d62);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742d68:{NFSU2_TR(0x742d68);
__builtin_memmove((R+4),(R+0),4);
}
B742d6a:{NFSU2_TR(0x742d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B742d6d:{NFSU2_TR(0x742d6d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742d70:{NFSU2_TR(0x742d70);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B742d76:{NFSU2_TR(0x742d76);
__builtin_memmove(gp(0x8b7c79),(R+8),1);
}
B742d7c:{NFSU2_TR(0x742d7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d2858ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B742d82:{NFSU2_TR(0x742d82);
s1(0x8b7c70,u8(0x24ull));
}
B742d89:{NFSU2_TR(0x742d89);
__builtin_memmove(gp(0x8b7c7b),(R+8),1);
}
B742d8f:{NFSU2_TR(0x742d8f);
__builtin_memmove(gp(0x8b7c7c),(R+0),1);
}
B742d94:{NFSU2_TR(0x742d94);
s1(0x8b7c7d,u8(0x0ull));
}
B742d9b:L742d9b:{c.instructions+=2;NFSU2_TR(0x742d9b);
w4(R+0,u32(0x8b7c70ull));
}
B742da0:{NFSU2_TR(0x742da0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742db0:L742db0:{c.instructions+=4;NFSU2_TR(0x742db0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742db2:{NFSU2_TR(0x742db2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742db4:{NFSU2_TR(0x742db4);
u8 U[4];
w4(U+0,u32(0x6f70656eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742db9:{NFSU2_TR(0x742db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742dbeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742b60u);}goto L742b60;}
}
B742dbe:L742dbe:{c.instructions+=3;NFSU2_TR(0x742dbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B742dc1:{NFSU2_TR(0x742dc1);
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
B742dc3:{NFSU2_TR(0x742dc3);
if(r1(R+518)){{goto L742ddf;}}
}
B742dc5:L742dc5:{c.instructions+=1;NFSU2_TR(0x742dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742dcaull));
TAIL_STATIC(0x74b730u,74b);
}
B742dca:L742dca:{c.instructions+=2;NFSU2_TR(0x742dca);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b7c80),4);
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
B742dd0:{NFSU2_TR(0x742dd0);
if(r1(R+512)){{goto L742e05;}}
}
B742dd2:L742dd2:{c.instructions+=1;NFSU2_TR(0x742dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742dd7ull));
TAIL_STATIC(0x74b730u,74b);
}
B742dd7:L742dd7:{c.instructions+=2;NFSU2_TR(0x742dd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B742dda:{NFSU2_TR(0x742dda);
__builtin_memmove(gp(0x8b7c80),(R+0),4);
}
B742ddf:L742ddf:{c.instructions+=2;NFSU2_TR(0x742ddf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742de0:{NFSU2_TR(0x742de0);
w4(R+24,u32(0x8b7be0ull));
}
B742de5:L742de5:{c.instructions+=2;NFSU2_TR(0x742de5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B742de8:{NFSU2_TR(0x742de8);
if(r1(R+518)){{goto L742df9;}}
}
B742dea:L742dea:{c.instructions+=1;NFSU2_TR(0x742dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742defull));
TAIL_STATIC(0x74b730u,74b);
}
B742def:L742def:{c.instructions+=4;NFSU2_TR(0x742def);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742df0:{NFSU2_TR(0x742df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742df3:{NFSU2_TR(0x742df3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742df4:{NFSU2_TR(0x742df4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742df6ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B742df6:L742df6:{c.instructions+=1;NFSU2_TR(0x742df6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B742df9:L742df9:{c.instructions+=3;NFSU2_TR(0x742df9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B742dfc:{NFSU2_TR(0x742dfc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b7c60ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b7c60ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b7c60ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742e02:{NFSU2_TR(0x742e02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742de5u);}goto L742de5;}}
}
B742e04:L742e04:{c.instructions+=1;NFSU2_TR(0x742e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742e05:L742e05:{c.instructions+=1;NFSU2_TR(0x742e05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742e10:L742e10:{c.instructions+=2;NFSU2_TR(0x742e10);
w4(R+0,u32(0x8b7be0ull));
}
B742e15:{NFSU2_TR(0x742e15);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B742e17:L742e17:{c.instructions+=2;NFSU2_TR(0x742e17);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B742e19:{NFSU2_TR(0x742e19);
if(r1(R+518)){{goto L742e20;}}
}
B742e1b:L742e1b:{c.instructions+=2;NFSU2_TR(0x742e1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B742e1d:{NFSU2_TR(0x742e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B742e20:L742e20:{c.instructions+=3;NFSU2_TR(0x742e20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B742e23:{NFSU2_TR(0x742e23);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8b7c60ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b7c60ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8b7c60ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B742e28:{NFSU2_TR(0x742e28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742e17u);}goto L742e17;}}
}
B742e2a:L742e2a:{c.instructions+=1;NFSU2_TR(0x742e2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742e30:L742e30:{c.instructions+=2;NFSU2_TR(0x742e30);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B742e35:{NFSU2_TR(0x742e35);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L742e3a;}}
}
B742e37:L742e37:{c.instructions+=2;NFSU2_TR(0x742e37);
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
B742e39:{NFSU2_TR(0x742e39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742e3a:L742e3a:{c.instructions+=6;NFSU2_TR(0x742e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742e3e:{NFSU2_TR(0x742e3e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e40:{NFSU2_TR(0x742e40);
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
B742e41:{NFSU2_TR(0x742e41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e43:{NFSU2_TR(0x742e43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e44:{NFSU2_TR(0x742e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742e49ull));
TAIL_STATIC(0x760d08u,760);
}
B742e49:L742e49:{c.instructions+=2;NFSU2_TR(0x742e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e4a:{NFSU2_TR(0x742e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742e4full));
TAIL_STATIC(0x743110u,743);
}
B742e4f:L742e4f:{c.instructions+=5;NFSU2_TR(0x742e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742e53:{NFSU2_TR(0x742e53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B742e55:{NFSU2_TR(0x742e55);
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
B742e58:{NFSU2_TR(0x742e58);
w4(R+0,u32(0x1ull));
}
B742e5d:{NFSU2_TR(0x742e5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742e60:L742e60:{c.instructions+=3;NFSU2_TR(0x742e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742e64:{NFSU2_TR(0x742e64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742e66:{NFSU2_TR(0x742e66);
if(r1(R+518)){{goto L742e8d;}}
}
B742e68:L742e68:{c.instructions+=2;NFSU2_TR(0x742e68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B742e6a:{NFSU2_TR(0x742e6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742e8d;}}
}
B742e6c:L742e6c:{c.instructions+=3;NFSU2_TR(0x742e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B742e6e:{NFSU2_TR(0x742e6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e6f:{NFSU2_TR(0x742e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742e74ull));
TAIL_STATIC(0x7430c0u,743);
}
B742e74:L742e74:{c.instructions+=5;NFSU2_TR(0x742e74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B742e78:{NFSU2_TR(0x742e78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e79:{NFSU2_TR(0x742e79);
u8 U[4];
w4(U+0,u32(0x7d2868ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e7e:{NFSU2_TR(0x742e7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e7f:{NFSU2_TR(0x742e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742e84ull));
TAIL_STATIC(0x75c784u,75c);
}
B742e84:L742e84:{c.instructions+=3;NFSU2_TR(0x742e84);
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
B742e87:{NFSU2_TR(0x742e87);
w4(R+0,u32(0x1ull));
}
B742e8c:{NFSU2_TR(0x742e8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742e8d:L742e8d:{c.instructions+=2;NFSU2_TR(0x742e8d);
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
B742e8f:{NFSU2_TR(0x742e8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742e90:L742e90:{c.instructions+=9;NFSU2_TR(0x742e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e91:{NFSU2_TR(0x742e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B742e95:{NFSU2_TR(0x742e95);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B742e98:{NFSU2_TR(0x742e98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742e99:{NFSU2_TR(0x742e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742e9d:{NFSU2_TR(0x742e9d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B742ea0:{NFSU2_TR(0x742ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B742ea3:{NFSU2_TR(0x742ea3);
w4(R+8,u32(0xeull));
}
B742ea8:{NFSU2_TR(0x742ea8);
if(r1(R+518)){{goto L742eb5;}}
}
B742eaa:L742eaa:{c.instructions+=6;NFSU2_TR(0x742eaa);
w4(R+4,u32(r2(R+4)));
}
B742ead:{NFSU2_TR(0x742ead);
w4(R+0,u32(r2(R+0)));
}
B742eb0:{NFSU2_TR(0x742eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742eb1:{NFSU2_TR(0x742eb1);
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
B742eb3:{NFSU2_TR(0x742eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742eb4:{NFSU2_TR(0x742eb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742eb5:L742eb5:{c.instructions+=2;NFSU2_TR(0x742eb5);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B742eb9:{NFSU2_TR(0x742eb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742ec0;}}
}
B742ebb:L742ebb:{c.instructions+=1;NFSU2_TR(0x742ebb);
w4(R+8,u32(0x6ull));
}
B742ec0:L742ec0:{c.instructions+=6;NFSU2_TR(0x742ec0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ec1:{NFSU2_TR(0x742ec1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B742ec4:{NFSU2_TR(0x742ec4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ec5:{NFSU2_TR(0x742ec5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B742ec8:{NFSU2_TR(0x742ec8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ec9:{NFSU2_TR(0x742ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x742eceull));
TAIL_STATIC(0x74b6d0u,74b);
}
B742ece:L742ece:{c.instructions+=4;NFSU2_TR(0x742ece);
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
B742ed1:{NFSU2_TR(0x742ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742ed2:{NFSU2_TR(0x742ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742ed3:{NFSU2_TR(0x742ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742ee0:L742ee0:{c.instructions+=8;NFSU2_TR(0x742ee0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ee1:{NFSU2_TR(0x742ee1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ee2:{NFSU2_TR(0x742ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B742ee6:{NFSU2_TR(0x742ee6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ee7:{NFSU2_TR(0x742ee7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742ee8:{NFSU2_TR(0x742ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742eec:{NFSU2_TR(0x742eec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B742eee:{NFSU2_TR(0x742eee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B742ef0:L742ef0:{c.instructions+=4;NFSU2_TR(0x742ef0);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B742ef4:{NFSU2_TR(0x742ef4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742ef6:{NFSU2_TR(0x742ef6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742ef9:{NFSU2_TR(0x742ef9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L742f1e;}}
}
B742efb:L742efb:{c.instructions+=1;NFSU2_TR(0x742efb);
{goto L742f00;}
}
B742f00:L742f00:{c.instructions+=2;NFSU2_TR(0x742f00);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B742f03:{NFSU2_TR(0x742f03);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L742f1e;}}
}
B742f05:L742f05:{c.instructions+=10;NFSU2_TR(0x742f05);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B742f09:{NFSU2_TR(0x742f09);
w1(R+12,u8(0xaull));
}
B742f0b:{NFSU2_TR(0x742f0b);
u8 U[4];
w2(U+0,u16(s16(s8(r1(R+0)))));
w2(U+2,u16(s16(s8(r1(R+12)))));
w2(R+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B742f0d:{NFSU2_TR(0x742f0d);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B742f10:{NFSU2_TR(0x742f10);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+4))));
}
B742f12:{NFSU2_TR(0x742f12);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B742f13:{NFSU2_TR(0x742f13);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B742f17:{NFSU2_TR(0x742f17);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B742f19:{NFSU2_TR(0x742f19);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B742f1c:{NFSU2_TR(0x742f1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742f00u);}goto L742f00;}}
}
B742f1e:L742f1e:{c.instructions+=8;NFSU2_TR(0x742f1e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B742f21:{NFSU2_TR(0x742f21);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B742f23:{NFSU2_TR(0x742f23);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B742f26:{NFSU2_TR(0x742f26);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B742f29:{NFSU2_TR(0x742f29);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B742f2a:{NFSU2_TR(0x742f2a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2eull))));
}
B742f2d:{NFSU2_TR(0x742f2d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742f2f:{NFSU2_TR(0x742f2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L742f3f;}}
}
B742f31:L742f31:{c.instructions+=4;NFSU2_TR(0x742f31);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B742f32:{NFSU2_TR(0x742f32);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B742f33:{NFSU2_TR(0x742f33);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B742f36:{NFSU2_TR(0x742f36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x742ef0u);}goto L742ef0;}}
}
B742f38:L742f38:{c.instructions+=6;NFSU2_TR(0x742f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742f39:{NFSU2_TR(0x742f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742f3a:{NFSU2_TR(0x742f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B742f3b:{NFSU2_TR(0x742f3b);
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
B742f3d:{NFSU2_TR(0x742f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742f3e:{NFSU2_TR(0x742f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742f3f:L742f3f:{c.instructions+=10;NFSU2_TR(0x742f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742f40:{NFSU2_TR(0x742f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B742f41:{NFSU2_TR(0x742f41);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742f44:{NFSU2_TR(0x742f44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742f47:{NFSU2_TR(0x742f47);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742f4a:{NFSU2_TR(0x742f4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B742f4d:{NFSU2_TR(0x742f4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B742f4e:{NFSU2_TR(0x742f4e);
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
B742f51:{NFSU2_TR(0x742f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B742f52:{NFSU2_TR(0x742f52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742f60:L742f60:{c.instructions+=6;NFSU2_TR(0x742f60);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B742f64:{NFSU2_TR(0x742f64);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B742f66:{NFSU2_TR(0x742f66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742f67:{NFSU2_TR(0x742f67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B742f6b:{NFSU2_TR(0x742f6b);
__builtin_memmove((R+4),(R+28),4);
}
B742f6d:{NFSU2_TR(0x742f6d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742f77;}}
}
B742f6f:L742f6f:{c.instructions+=2;NFSU2_TR(0x742f6f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B742f72:{NFSU2_TR(0x742f72);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L742f7b;}}
}
B742f74:L742f74:{c.instructions+=1;NFSU2_TR(0x742f74);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B742f77:L742f77:{c.instructions+=3;NFSU2_TR(0x742f77);
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
B742f79:{NFSU2_TR(0x742f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B742f7a:{NFSU2_TR(0x742f7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B742f7b:L742f7b:{c.instructions+=6;NFSU2_TR(0x742f7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742f7c:{NFSU2_TR(0x742f7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B742f7d:{NFSU2_TR(0x742f7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B742f81:{NFSU2_TR(0x742f81);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B742f85:{NFSU2_TR(0x742f85);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x63ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742f88:{NFSU2_TR(0x742f88);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742faa;}}
}
B742f8a:L742f8a:{c.instructions+=14;NFSU2_TR(0x742f8a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742f8b:{NFSU2_TR(0x742f8b);
w4(R+4,u32(0x64ull));
}
B742f90:{NFSU2_TR(0x742f90);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742f90);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742f90);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B742f92:{NFSU2_TR(0x742f92);
w4(R+12,u32(0xaull));
}
B742f97:{NFSU2_TR(0x742f97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B742f9a:{NFSU2_TR(0x742f9a);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742f9c:{NFSU2_TR(0x742f9c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B742f9e:{NFSU2_TR(0x742f9e);
__builtin_memmove((R+0),(R+8),4);
}
B742fa0:{NFSU2_TR(0x742fa0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742fa1:{NFSU2_TR(0x742fa1);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fa1);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fa1);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B742fa3:{NFSU2_TR(0x742fa3);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742fa5:{NFSU2_TR(0x742fa5);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742fa7:{NFSU2_TR(0x742fa7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742fa8:{NFSU2_TR(0x742fa8);
__builtin_memmove((R+0),(R+8),4);
}
B742faa:L742faa:{c.instructions+=2;NFSU2_TR(0x742faa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742fad:{NFSU2_TR(0x742fad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742fbe;}}
}
B742faf:L742faf:{c.instructions+=7;NFSU2_TR(0x742faf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742fb0:{NFSU2_TR(0x742fb0);
w4(R+12,u32(0xaull));
}
B742fb5:{NFSU2_TR(0x742fb5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fb5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fb5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B742fb7:{NFSU2_TR(0x742fb7);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742fb9:{NFSU2_TR(0x742fb9);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742fbb:{NFSU2_TR(0x742fbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742fbc:{NFSU2_TR(0x742fbc);
__builtin_memmove((R+0),(R+8),4);
}
B742fbe:L742fbe:{c.instructions+=8;NFSU2_TR(0x742fbe);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742fc0:{NFSU2_TR(0x742fc0);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742fc2:{NFSU2_TR(0x742fc2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742fc3:{NFSU2_TR(0x742fc3);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+4)),r1(U+0));
}
B742fc6:{NFSU2_TR(0x742fc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B742fca:{NFSU2_TR(0x742fca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742fcb:{NFSU2_TR(0x742fcb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x63ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742fce:{NFSU2_TR(0x742fce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L742fee;}}
}
B742fd0:L742fd0:{c.instructions+=14;NFSU2_TR(0x742fd0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742fd1:{NFSU2_TR(0x742fd1);
w4(R+12,u32(0x64ull));
}
B742fd6:{NFSU2_TR(0x742fd6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fd6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fd6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B742fd8:{NFSU2_TR(0x742fd8);
w4(R+12,u32(0xaull));
}
B742fdd:{NFSU2_TR(0x742fdd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742fdf:{NFSU2_TR(0x742fdf);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742fe1:{NFSU2_TR(0x742fe1);
__builtin_memmove((R+0),(R+8),4);
}
B742fe3:{NFSU2_TR(0x742fe3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742fe4:{NFSU2_TR(0x742fe4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fe4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742fe4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B742fe6:{NFSU2_TR(0x742fe6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742fe7:{NFSU2_TR(0x742fe7);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742fe9:{NFSU2_TR(0x742fe9);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742feb:{NFSU2_TR(0x742feb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B742fec:{NFSU2_TR(0x742fec);
__builtin_memmove((R+0),(R+8),4);
}
B742fee:L742fee:{c.instructions+=2;NFSU2_TR(0x742fee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B742ff1:{NFSU2_TR(0x742ff1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x743002u,743);}
}
B742ff3:L742ff3:{c.instructions+=6;NFSU2_TR(0x742ff3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B742ff4:{NFSU2_TR(0x742ff4);
w4(R+12,u32(0xaull));
}
B742ff9:{NFSU2_TR(0x742ff9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742ff9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x742ff9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B742ffb:{NFSU2_TR(0x742ffb);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B742ffd:{NFSU2_TR(0x742ffd);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B742fff:{NFSU2_TR(0x742fff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
TAIL_STATIC(0x743000u,743);
}
XIT:NFSU2_TR_EXIT(0x742,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
