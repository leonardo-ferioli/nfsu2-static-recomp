#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_65e(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_662(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_667(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x666,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x666,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_666(u8* __restrict R,Cpu& c);
u32 page_666(Cpu& c){return body_666(c.regs.data(),c);}
__attribute__((noinline)) u32 body_666(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x666001:goto L666001;
case 0x666003:c.instructions+=10;goto B666003;
case 0x666004:c.instructions+=9;goto B666004;
case 0x666005:c.instructions+=8;goto B666005;
case 0x666006:c.instructions+=7;goto B666006;
case 0x666007:c.instructions+=6;goto B666007;
case 0x66600a:c.instructions+=5;goto B66600a;
case 0x66600d:c.instructions+=4;goto B66600d;
case 0x66600f:c.instructions+=3;goto B66600f;
case 0x666011:c.instructions+=2;goto B666011;
case 0x666013:c.instructions+=1;goto B666013;
case 0x666015:goto L666015;
case 0x666017:c.instructions+=1;goto B666017;
case 0x666019:goto L666019;
case 0x66601c:goto L66601c;
case 0x66601e:c.instructions+=9;goto B66601e;
case 0x666021:c.instructions+=8;goto B666021;
case 0x666024:c.instructions+=7;goto B666024;
case 0x666027:c.instructions+=6;goto B666027;
case 0x66602a:c.instructions+=5;goto B66602a;
case 0x66602c:c.instructions+=4;goto B66602c;
case 0x66602e:c.instructions+=3;goto B66602e;
case 0x666032:c.instructions+=2;goto B666032;
case 0x666036:c.instructions+=1;goto B666036;
case 0x666038:goto L666038;
case 0x66603c:c.instructions+=2;goto B66603c;
case 0x666040:c.instructions+=1;goto B666040;
case 0x666042:goto L666042;
case 0x666049:c.instructions+=1;goto B666049;
case 0x66604b:goto L66604b;
case 0x66604f:goto L66604f;
case 0x666051:c.instructions+=9;goto B666051;
case 0x666055:c.instructions+=8;goto B666055;
case 0x666059:c.instructions+=7;goto B666059;
case 0x66605c:c.instructions+=6;goto B66605c;
case 0x66605d:c.instructions+=5;goto B66605d;
case 0x66605e:c.instructions+=4;goto B66605e;
case 0x666061:c.instructions+=3;goto B666061;
case 0x666064:c.instructions+=2;goto B666064;
case 0x666065:c.instructions+=1;goto B666065;
case 0x66606a:goto L66606a;
case 0x66606c:c.instructions+=2;goto B66606c;
case 0x66606e:c.instructions+=1;goto B66606e;
case 0x666070:goto L666070;
case 0x666074:c.instructions+=6;goto B666074;
case 0x666077:c.instructions+=5;goto B666077;
case 0x666078:c.instructions+=4;goto B666078;
case 0x66607b:c.instructions+=3;goto B66607b;
case 0x66607e:c.instructions+=2;goto B66607e;
case 0x66607f:c.instructions+=1;goto B66607f;
case 0x666084:goto L666084;
case 0x666086:goto L666086;
case 0x666089:c.instructions+=3;goto B666089;
case 0x66608f:c.instructions+=2;goto B66608f;
case 0x666092:c.instructions+=1;goto B666092;
case 0x666094:goto L666094;
case 0x666099:c.instructions+=2;goto B666099;
case 0x66609f:c.instructions+=1;goto B66609f;
case 0x6660a4:goto L6660a4;
case 0x6660a7:c.instructions+=2;goto B6660a7;
case 0x6660a8:c.instructions+=1;goto B6660a8;
case 0x6660a9:goto L6660a9;
case 0x6660ab:c.instructions+=5;goto B6660ab;
case 0x6660ac:c.instructions+=4;goto B6660ac;
case 0x6660ad:c.instructions+=3;goto B6660ad;
case 0x6660ae:c.instructions+=2;goto B6660ae;
case 0x6660af:c.instructions+=1;goto B6660af;
case 0x6660b2:goto L6660b2;
case 0x6660b4:c.instructions+=9;goto B6660b4;
case 0x6660b5:c.instructions+=8;goto B6660b5;
case 0x6660b7:c.instructions+=7;goto B6660b7;
case 0x6660b8:c.instructions+=6;goto B6660b8;
case 0x6660b9:c.instructions+=5;goto B6660b9;
case 0x6660bc:c.instructions+=4;goto B6660bc;
case 0x6660bf:c.instructions+=3;goto B6660bf;
case 0x6660c1:c.instructions+=2;goto B6660c1;
case 0x6660c4:c.instructions+=1;goto B6660c4;
case 0x6660c6:goto L6660c6;
case 0x6660cb:c.instructions+=1;goto B6660cb;
case 0x6660cd:goto L6660cd;
case 0x6660cf:c.instructions+=3;goto B6660cf;
case 0x6660d0:c.instructions+=2;goto B6660d0;
case 0x6660d2:c.instructions+=1;goto B6660d2;
case 0x6660d4:goto L6660d4;
case 0x6660d5:c.instructions+=5;goto B6660d5;
case 0x6660db:c.instructions+=4;goto B6660db;
case 0x6660de:c.instructions+=3;goto B6660de;
case 0x6660e0:c.instructions+=2;goto B6660e0;
case 0x6660e2:c.instructions+=1;goto B6660e2;
case 0x6660e4:goto L6660e4;
case 0x6660e6:c.instructions+=1;goto B6660e6;
case 0x6660eb:goto L6660eb;
case 0x6660ee:goto L6660ee;
case 0x6660f4:c.instructions+=2;goto B6660f4;
case 0x6660fa:c.instructions+=1;goto B6660fa;
case 0x6660fb:goto L6660fb;
case 0x6660fc:c.instructions+=4;goto B6660fc;
case 0x6660fe:c.instructions+=3;goto B6660fe;
case 0x6660ff:c.instructions+=2;goto B6660ff;
case 0x666100:c.instructions+=1;goto B666100;
case 0x666103:goto L666103;
case 0x666105:c.instructions+=8;goto B666105;
case 0x666106:c.instructions+=7;goto B666106;
case 0x666108:c.instructions+=6;goto B666108;
case 0x666109:c.instructions+=5;goto B666109;
case 0x66610a:c.instructions+=4;goto B66610a;
case 0x66610c:c.instructions+=3;goto B66610c;
case 0x66610e:c.instructions+=2;goto B66610e;
case 0x666110:c.instructions+=1;goto B666110;
case 0x666115:goto L666115;
case 0x666117:c.instructions+=2;goto B666117;
case 0x666118:c.instructions+=1;goto B666118;
case 0x66611a:goto L66611a;
case 0x66611c:c.instructions+=1;goto B66611c;
case 0x666121:goto L666121;
case 0x666123:goto L666123;
case 0x666125:goto L666125;
case 0x666127:c.instructions+=1;goto B666127;
case 0x666129:goto L666129;
case 0x66612e:c.instructions+=1;goto B66612e;
case 0x666130:goto L666130;
case 0x666133:c.instructions+=8;goto B666133;
case 0x666136:c.instructions+=7;goto B666136;
case 0x666139:c.instructions+=6;goto B666139;
case 0x66613c:c.instructions+=5;goto B66613c;
case 0x666142:c.instructions+=4;goto B666142;
case 0x666148:c.instructions+=3;goto B666148;
case 0x66614a:c.instructions+=2;goto B66614a;
case 0x66614d:c.instructions+=1;goto B66614d;
case 0x66614f:goto L66614f;
case 0x666151:c.instructions+=4;goto B666151;
case 0x666152:c.instructions+=3;goto B666152;
case 0x666153:c.instructions+=2;goto B666153;
case 0x666154:c.instructions+=1;goto B666154;
case 0x666157:goto L666157;
case 0x666159:c.instructions+=8;goto B666159;
case 0x66615a:c.instructions+=7;goto B66615a;
case 0x66615c:c.instructions+=6;goto B66615c;
case 0x66615d:c.instructions+=5;goto B66615d;
case 0x66615e:c.instructions+=4;goto B66615e;
case 0x666160:c.instructions+=3;goto B666160;
case 0x666162:c.instructions+=2;goto B666162;
case 0x666164:c.instructions+=1;goto B666164;
case 0x666169:goto L666169;
case 0x66616b:c.instructions+=2;goto B66616b;
case 0x66616c:c.instructions+=1;goto B66616c;
case 0x66616e:goto L66616e;
case 0x666170:c.instructions+=1;goto B666170;
case 0x666175:goto L666175;
case 0x666177:goto L666177;
case 0x666179:goto L666179;
case 0x66617b:c.instructions+=1;goto B66617b;
case 0x66617d:goto L66617d;
case 0x666182:c.instructions+=1;goto B666182;
case 0x666184:goto L666184;
case 0x666187:c.instructions+=8;goto B666187;
case 0x66618a:c.instructions+=7;goto B66618a;
case 0x66618d:c.instructions+=6;goto B66618d;
case 0x666190:c.instructions+=5;goto B666190;
case 0x666196:c.instructions+=4;goto B666196;
case 0x66619c:c.instructions+=3;goto B66619c;
case 0x66619e:c.instructions+=2;goto B66619e;
case 0x6661a1:c.instructions+=1;goto B6661a1;
case 0x6661a3:goto L6661a3;
case 0x6661a5:c.instructions+=4;goto B6661a5;
case 0x6661a6:c.instructions+=3;goto B6661a6;
case 0x6661a7:c.instructions+=2;goto B6661a7;
case 0x6661a8:c.instructions+=1;goto B6661a8;
case 0x6661ab:goto L6661ab;
case 0x6661ad:c.instructions+=8;goto B6661ad;
case 0x6661ae:c.instructions+=7;goto B6661ae;
case 0x6661b0:c.instructions+=6;goto B6661b0;
case 0x6661b1:c.instructions+=5;goto B6661b1;
case 0x6661b2:c.instructions+=4;goto B6661b2;
case 0x6661b4:c.instructions+=3;goto B6661b4;
case 0x6661b6:c.instructions+=2;goto B6661b6;
case 0x6661b8:c.instructions+=1;goto B6661b8;
case 0x6661bd:goto L6661bd;
case 0x6661bf:c.instructions+=2;goto B6661bf;
case 0x6661c0:c.instructions+=1;goto B6661c0;
case 0x6661c2:goto L6661c2;
case 0x6661c4:c.instructions+=1;goto B6661c4;
case 0x6661c9:goto L6661c9;
case 0x6661cb:goto L6661cb;
case 0x6661cd:goto L6661cd;
case 0x6661cf:c.instructions+=1;goto B6661cf;
case 0x6661d1:goto L6661d1;
case 0x6661d6:c.instructions+=1;goto B6661d6;
case 0x6661d8:goto L6661d8;
case 0x6661db:c.instructions+=8;goto B6661db;
case 0x6661de:c.instructions+=7;goto B6661de;
case 0x6661e1:c.instructions+=6;goto B6661e1;
case 0x6661e4:c.instructions+=5;goto B6661e4;
case 0x6661ea:c.instructions+=4;goto B6661ea;
case 0x6661f0:c.instructions+=3;goto B6661f0;
case 0x6661f2:c.instructions+=2;goto B6661f2;
case 0x6661f5:c.instructions+=1;goto B6661f5;
case 0x6661f7:goto L6661f7;
case 0x6661f9:c.instructions+=4;goto B6661f9;
case 0x6661fa:c.instructions+=3;goto B6661fa;
case 0x6661fb:c.instructions+=2;goto B6661fb;
case 0x6661fc:c.instructions+=1;goto B6661fc;
case 0x6661ff:goto L6661ff;
case 0x666201:c.instructions+=9;goto B666201;
case 0x666202:c.instructions+=8;goto B666202;
case 0x666204:c.instructions+=7;goto B666204;
case 0x666207:c.instructions+=6;goto B666207;
case 0x66620b:c.instructions+=5;goto B66620b;
case 0x66620f:c.instructions+=4;goto B66620f;
case 0x666210:c.instructions+=3;goto B666210;
case 0x666212:c.instructions+=2;goto B666212;
case 0x666215:c.instructions+=1;goto B666215;
case 0x66621a:goto L66621a;
case 0x66621c:c.instructions+=2;goto B66621c;
case 0x66621d:c.instructions+=1;goto B66621d;
case 0x66621f:goto L66621f;
case 0x666221:c.instructions+=1;goto B666221;
case 0x666226:goto L666226;
case 0x666228:c.instructions+=1;goto B666228;
case 0x66622a:goto L66622a;
case 0x66622c:goto L66622c;
case 0x66622e:c.instructions+=1;goto B66622e;
case 0x666230:goto L666230;
case 0x666237:c.instructions+=1;goto B666237;
case 0x666239:goto L666239;
case 0x66623a:c.instructions+=3;goto B66623a;
case 0x66623d:c.instructions+=2;goto B66623d;
case 0x66623f:c.instructions+=1;goto B66623f;
case 0x666241:goto L666241;
case 0x666243:c.instructions+=3;goto B666243;
case 0x666246:c.instructions+=2;goto B666246;
case 0x666247:c.instructions+=1;goto B666247;
case 0x66624c:goto L66624c;
case 0x66624e:c.instructions+=3;goto B66624e;
case 0x66624f:c.instructions+=2;goto B66624f;
case 0x666252:c.instructions+=1;goto B666252;
case 0x666254:goto L666254;
case 0x66625b:c.instructions+=1;goto B66625b;
case 0x66625d:goto L66625d;
case 0x666260:c.instructions+=4;goto B666260;
case 0x666261:c.instructions+=3;goto B666261;
case 0x666264:c.instructions+=2;goto B666264;
case 0x666266:c.instructions+=1;goto B666266;
case 0x666269:goto L666269;
case 0x66626b:goto L66626b;
case 0x66626e:c.instructions+=12;goto B66626e;
case 0x666271:c.instructions+=11;goto B666271;
case 0x666274:c.instructions+=10;goto B666274;
case 0x666277:c.instructions+=9;goto B666277;
case 0x66627a:c.instructions+=8;goto B66627a;
case 0x66627d:c.instructions+=7;goto B66627d;
case 0x666283:c.instructions+=6;goto B666283;
case 0x666288:c.instructions+=5;goto B666288;
case 0x66628a:c.instructions+=4;goto B66628a;
case 0x66628d:c.instructions+=3;goto B66628d;
case 0x66628f:c.instructions+=2;goto B66628f;
case 0x666291:c.instructions+=1;goto B666291;
case 0x666292:goto L666292;
case 0x666294:c.instructions+=2;goto B666294;
case 0x666295:c.instructions+=1;goto B666295;
case 0x666297:goto L666297;
case 0x666299:c.instructions+=2;goto B666299;
case 0x66629b:c.instructions+=1;goto B66629b;
case 0x6662a0:goto L6662a0;
case 0x6662a3:c.instructions+=3;goto B6662a3;
case 0x6662a4:c.instructions+=2;goto B6662a4;
case 0x6662a5:c.instructions+=1;goto B6662a5;
case 0x6662a8:goto L6662a8;
case 0x6662aa:c.instructions+=9;goto B6662aa;
case 0x6662ab:c.instructions+=8;goto B6662ab;
case 0x6662ad:c.instructions+=7;goto B6662ad;
case 0x6662b0:c.instructions+=6;goto B6662b0;
case 0x6662b4:c.instructions+=5;goto B6662b4;
case 0x6662b8:c.instructions+=4;goto B6662b8;
case 0x6662b9:c.instructions+=3;goto B6662b9;
case 0x6662bb:c.instructions+=2;goto B6662bb;
case 0x6662be:c.instructions+=1;goto B6662be;
case 0x6662c3:goto L6662c3;
case 0x6662c5:c.instructions+=2;goto B6662c5;
case 0x6662c6:c.instructions+=1;goto B6662c6;
case 0x6662c8:goto L6662c8;
case 0x6662ca:c.instructions+=1;goto B6662ca;
case 0x6662cf:goto L6662cf;
case 0x6662d1:c.instructions+=1;goto B6662d1;
case 0x6662d3:goto L6662d3;
case 0x6662d5:goto L6662d5;
case 0x6662d7:c.instructions+=1;goto B6662d7;
case 0x6662d9:goto L6662d9;
case 0x6662e0:c.instructions+=1;goto B6662e0;
case 0x6662e2:goto L6662e2;
case 0x6662e3:c.instructions+=3;goto B6662e3;
case 0x6662e6:c.instructions+=2;goto B6662e6;
case 0x6662e8:c.instructions+=1;goto B6662e8;
case 0x6662ea:goto L6662ea;
case 0x6662ec:c.instructions+=3;goto B6662ec;
case 0x6662ef:c.instructions+=2;goto B6662ef;
case 0x6662f0:c.instructions+=1;goto B6662f0;
case 0x6662f5:goto L6662f5;
case 0x6662f7:c.instructions+=3;goto B6662f7;
case 0x6662f8:c.instructions+=2;goto B6662f8;
case 0x6662fb:c.instructions+=1;goto B6662fb;
case 0x6662fd:goto L6662fd;
case 0x666304:c.instructions+=1;goto B666304;
case 0x666306:goto L666306;
case 0x666309:c.instructions+=4;goto B666309;
case 0x66630a:c.instructions+=3;goto B66630a;
case 0x66630d:c.instructions+=2;goto B66630d;
case 0x66630f:c.instructions+=1;goto B66630f;
case 0x666312:goto L666312;
case 0x666314:goto L666314;
case 0x666317:c.instructions+=12;goto B666317;
case 0x66631a:c.instructions+=11;goto B66631a;
case 0x66631d:c.instructions+=10;goto B66631d;
case 0x666320:c.instructions+=9;goto B666320;
case 0x666323:c.instructions+=8;goto B666323;
case 0x666326:c.instructions+=7;goto B666326;
case 0x66632c:c.instructions+=6;goto B66632c;
case 0x666331:c.instructions+=5;goto B666331;
case 0x666333:c.instructions+=4;goto B666333;
case 0x666336:c.instructions+=3;goto B666336;
case 0x666338:c.instructions+=2;goto B666338;
case 0x66633a:c.instructions+=1;goto B66633a;
case 0x66633b:goto L66633b;
case 0x66633d:c.instructions+=2;goto B66633d;
case 0x66633e:c.instructions+=1;goto B66633e;
case 0x666340:goto L666340;
case 0x666342:c.instructions+=2;goto B666342;
case 0x666344:c.instructions+=1;goto B666344;
case 0x666349:goto L666349;
case 0x66634c:c.instructions+=3;goto B66634c;
case 0x66634d:c.instructions+=2;goto B66634d;
case 0x66634e:c.instructions+=1;goto B66634e;
case 0x666351:goto L666351;
case 0x666353:c.instructions+=9;goto B666353;
case 0x666354:c.instructions+=8;goto B666354;
case 0x666356:c.instructions+=7;goto B666356;
case 0x666359:c.instructions+=6;goto B666359;
case 0x66635d:c.instructions+=5;goto B66635d;
case 0x666361:c.instructions+=4;goto B666361;
case 0x666362:c.instructions+=3;goto B666362;
case 0x666364:c.instructions+=2;goto B666364;
case 0x666367:c.instructions+=1;goto B666367;
case 0x66636c:goto L66636c;
case 0x66636e:c.instructions+=2;goto B66636e;
case 0x66636f:c.instructions+=1;goto B66636f;
case 0x666371:goto L666371;
case 0x666373:c.instructions+=1;goto B666373;
case 0x666378:goto L666378;
case 0x66637a:c.instructions+=1;goto B66637a;
case 0x66637c:goto L66637c;
case 0x66637e:goto L66637e;
case 0x666380:c.instructions+=1;goto B666380;
case 0x666382:goto L666382;
case 0x666389:c.instructions+=1;goto B666389;
case 0x66638b:goto L66638b;
case 0x66638c:c.instructions+=3;goto B66638c;
case 0x66638f:c.instructions+=2;goto B66638f;
case 0x666391:c.instructions+=1;goto B666391;
case 0x666393:goto L666393;
case 0x666395:c.instructions+=3;goto B666395;
case 0x666398:c.instructions+=2;goto B666398;
case 0x666399:c.instructions+=1;goto B666399;
case 0x66639e:goto L66639e;
case 0x6663a0:c.instructions+=3;goto B6663a0;
case 0x6663a1:c.instructions+=2;goto B6663a1;
case 0x6663a4:c.instructions+=1;goto B6663a4;
case 0x6663a6:goto L6663a6;
case 0x6663ad:c.instructions+=1;goto B6663ad;
case 0x6663af:goto L6663af;
case 0x6663b2:c.instructions+=4;goto B6663b2;
case 0x6663b3:c.instructions+=3;goto B6663b3;
case 0x6663b6:c.instructions+=2;goto B6663b6;
case 0x6663b8:c.instructions+=1;goto B6663b8;
case 0x6663bb:goto L6663bb;
case 0x6663bd:goto L6663bd;
case 0x6663c0:c.instructions+=12;goto B6663c0;
case 0x6663c3:c.instructions+=11;goto B6663c3;
case 0x6663c6:c.instructions+=10;goto B6663c6;
case 0x6663c9:c.instructions+=9;goto B6663c9;
case 0x6663cc:c.instructions+=8;goto B6663cc;
case 0x6663cf:c.instructions+=7;goto B6663cf;
case 0x6663d5:c.instructions+=6;goto B6663d5;
case 0x6663da:c.instructions+=5;goto B6663da;
case 0x6663dc:c.instructions+=4;goto B6663dc;
case 0x6663df:c.instructions+=3;goto B6663df;
case 0x6663e1:c.instructions+=2;goto B6663e1;
case 0x6663e3:c.instructions+=1;goto B6663e3;
case 0x6663e4:goto L6663e4;
case 0x6663e6:c.instructions+=2;goto B6663e6;
case 0x6663e7:c.instructions+=1;goto B6663e7;
case 0x6663e9:goto L6663e9;
case 0x6663eb:c.instructions+=2;goto B6663eb;
case 0x6663ed:c.instructions+=1;goto B6663ed;
case 0x6663f2:goto L6663f2;
case 0x6663f5:c.instructions+=3;goto B6663f5;
case 0x6663f6:c.instructions+=2;goto B6663f6;
case 0x6663f7:c.instructions+=1;goto B6663f7;
case 0x6663fa:goto L6663fa;
case 0x6663fc:c.instructions+=9;goto B6663fc;
case 0x6663fd:c.instructions+=8;goto B6663fd;
case 0x6663ff:c.instructions+=7;goto B6663ff;
case 0x666400:c.instructions+=6;goto B666400;
case 0x666401:c.instructions+=5;goto B666401;
case 0x666405:c.instructions+=4;goto B666405;
case 0x666406:c.instructions+=3;goto B666406;
case 0x666408:c.instructions+=2;goto B666408;
case 0x66640b:c.instructions+=1;goto B66640b;
case 0x666410:goto L666410;
case 0x666412:c.instructions+=2;goto B666412;
case 0x666413:c.instructions+=1;goto B666413;
case 0x666415:goto L666415;
case 0x666417:c.instructions+=1;goto B666417;
case 0x66641c:goto L66641c;
case 0x66641e:c.instructions+=1;goto B66641e;
case 0x666420:goto L666420;
case 0x666422:goto L666422;
case 0x666424:c.instructions+=1;goto B666424;
case 0x666426:goto L666426;
case 0x66642d:c.instructions+=1;goto B66642d;
case 0x66642f:goto L66642f;
case 0x666431:c.instructions+=1;goto B666431;
case 0x666436:goto L666436;
case 0x666438:c.instructions+=2;goto B666438;
case 0x666439:c.instructions+=1;goto B666439;
case 0x66643b:goto L66643b;
case 0x666442:c.instructions+=1;goto B666442;
case 0x666444:goto L666444;
case 0x666447:c.instructions+=19;goto B666447;
case 0x666448:c.instructions+=18;goto B666448;
case 0x66644b:c.instructions+=17;goto B66644b;
case 0x66644c:c.instructions+=16;goto B66644c;
case 0x66644e:c.instructions+=15;goto B66644e;
case 0x66644f:c.instructions+=14;goto B66644f;
case 0x666450:c.instructions+=13;goto B666450;
case 0x666451:c.instructions+=12;goto B666451;
case 0x666452:c.instructions+=11;goto B666452;
case 0x666455:c.instructions+=10;goto B666455;
case 0x666458:c.instructions+=9;goto B666458;
case 0x66645e:c.instructions+=8;goto B66645e;
case 0x666461:c.instructions+=7;goto B666461;
case 0x666466:c.instructions+=6;goto B666466;
case 0x666468:c.instructions+=5;goto B666468;
case 0x66646b:c.instructions+=4;goto B66646b;
case 0x66646c:c.instructions+=3;goto B66646c;
case 0x66646e:c.instructions+=2;goto B66646e;
case 0x666470:c.instructions+=1;goto B666470;
case 0x666471:goto L666471;
case 0x666473:c.instructions+=1;goto B666473;
case 0x666475:goto L666475;
case 0x666477:c.instructions+=2;goto B666477;
case 0x666479:c.instructions+=1;goto B666479;
case 0x66647e:goto L66647e;
case 0x666481:c.instructions+=3;goto B666481;
case 0x666482:c.instructions+=2;goto B666482;
case 0x666483:c.instructions+=1;goto B666483;
case 0x666486:goto L666486;
case 0x666488:c.instructions+=11;goto B666488;
case 0x666489:c.instructions+=10;goto B666489;
case 0x66648b:c.instructions+=9;goto B66648b;
case 0x66648e:c.instructions+=8;goto B66648e;
case 0x66648f:c.instructions+=7;goto B66648f;
case 0x666490:c.instructions+=6;goto B666490;
case 0x666492:c.instructions+=5;goto B666492;
case 0x666494:c.instructions+=4;goto B666494;
case 0x666497:c.instructions+=3;goto B666497;
case 0x66649a:c.instructions+=2;goto B66649a;
case 0x66649d:c.instructions+=1;goto B66649d;
case 0x6664a2:goto L6664a2;
case 0x6664a4:c.instructions+=2;goto B6664a4;
case 0x6664a5:c.instructions+=1;goto B6664a5;
case 0x6664a7:goto L6664a7;
case 0x6664a9:c.instructions+=1;goto B6664a9;
case 0x6664ae:goto L6664ae;
case 0x6664b0:c.instructions+=1;goto B6664b0;
case 0x6664b2:goto L6664b2;
case 0x6664b4:goto L6664b4;
case 0x6664b6:c.instructions+=1;goto B6664b6;
case 0x6664b8:goto L6664b8;
case 0x6664bf:c.instructions+=1;goto B6664bf;
case 0x6664c1:goto L6664c1;
case 0x6664c4:c.instructions+=1;goto B6664c4;
case 0x6664c6:goto L6664c6;
case 0x6664c9:c.instructions+=3;goto B6664c9;
case 0x6664cc:c.instructions+=2;goto B6664cc;
case 0x6664cd:c.instructions+=1;goto B6664cd;
case 0x6664d2:goto L6664d2;
case 0x6664d4:c.instructions+=3;goto B6664d4;
case 0x6664d5:c.instructions+=2;goto B6664d5;
case 0x6664d8:c.instructions+=1;goto B6664d8;
case 0x6664da:goto L6664da;
case 0x6664e1:c.instructions+=1;goto B6664e1;
case 0x6664e3:goto L6664e3;
case 0x6664e6:c.instructions+=6;goto B6664e6;
case 0x6664e9:c.instructions+=5;goto B6664e9;
case 0x6664ec:c.instructions+=4;goto B6664ec;
case 0x6664ee:c.instructions+=3;goto B6664ee;
case 0x6664f1:c.instructions+=2;goto B6664f1;
case 0x6664f2:c.instructions+=1;goto B6664f2;
case 0x6664f5:goto L6664f5;
case 0x6664f7:goto L6664f7;
case 0x6664f9:c.instructions+=2;goto B6664f9;
case 0x6664fc:c.instructions+=1;goto B6664fc;
case 0x6664ff:goto L6664ff;
case 0x666501:goto L666501;
case 0x666504:c.instructions+=12;goto B666504;
case 0x666507:c.instructions+=11;goto B666507;
case 0x66650a:c.instructions+=10;goto B66650a;
case 0x66650d:c.instructions+=9;goto B66650d;
case 0x666510:c.instructions+=8;goto B666510;
case 0x666513:c.instructions+=7;goto B666513;
case 0x666519:c.instructions+=6;goto B666519;
case 0x66651e:c.instructions+=5;goto B66651e;
case 0x666520:c.instructions+=4;goto B666520;
case 0x666523:c.instructions+=3;goto B666523;
case 0x666525:c.instructions+=2;goto B666525;
case 0x666527:c.instructions+=1;goto B666527;
case 0x666528:goto L666528;
case 0x66652a:c.instructions+=1;goto B66652a;
case 0x66652c:goto L66652c;
case 0x66652e:c.instructions+=2;goto B66652e;
case 0x666530:c.instructions+=1;goto B666530;
case 0x666535:goto L666535;
case 0x666538:c.instructions+=4;goto B666538;
case 0x666539:c.instructions+=3;goto B666539;
case 0x66653a:c.instructions+=2;goto B66653a;
case 0x66653b:c.instructions+=1;goto B66653b;
case 0x66653e:goto L66653e;
case 0x666540:c.instructions+=9;goto B666540;
case 0x666541:c.instructions+=8;goto B666541;
case 0x666543:c.instructions+=7;goto B666543;
case 0x666544:c.instructions+=6;goto B666544;
case 0x666545:c.instructions+=5;goto B666545;
case 0x666549:c.instructions+=4;goto B666549;
case 0x66654a:c.instructions+=3;goto B66654a;
case 0x66654c:c.instructions+=2;goto B66654c;
case 0x66654f:c.instructions+=1;goto B66654f;
case 0x666554:goto L666554;
case 0x666556:c.instructions+=2;goto B666556;
case 0x666557:c.instructions+=1;goto B666557;
case 0x666559:goto L666559;
case 0x66655b:c.instructions+=1;goto B66655b;
case 0x666560:goto L666560;
case 0x666562:c.instructions+=1;goto B666562;
case 0x666564:goto L666564;
case 0x666566:goto L666566;
case 0x666568:c.instructions+=1;goto B666568;
case 0x66656a:goto L66656a;
case 0x666571:c.instructions+=1;goto B666571;
case 0x666573:goto L666573;
case 0x666575:c.instructions+=1;goto B666575;
case 0x66657a:goto L66657a;
case 0x66657c:c.instructions+=2;goto B66657c;
case 0x66657d:c.instructions+=1;goto B66657d;
case 0x66657f:goto L66657f;
case 0x666586:c.instructions+=1;goto B666586;
case 0x666588:goto L666588;
case 0x666589:c.instructions+=5;goto B666589;
case 0x66658c:c.instructions+=4;goto B66658c;
case 0x66658d:c.instructions+=3;goto B66658d;
case 0x66658f:c.instructions+=2;goto B66658f;
case 0x666590:c.instructions+=1;goto B666590;
case 0x666592:goto L666592;
case 0x666594:goto L666594;
case 0x666597:c.instructions+=11;goto B666597;
case 0x66659a:c.instructions+=10;goto B66659a;
case 0x66659d:c.instructions+=9;goto B66659d;
case 0x6665a3:c.instructions+=8;goto B6665a3;
case 0x6665a6:c.instructions+=7;goto B6665a6;
case 0x6665ab:c.instructions+=6;goto B6665ab;
case 0x6665ad:c.instructions+=5;goto B6665ad;
case 0x6665b0:c.instructions+=4;goto B6665b0;
case 0x6665b1:c.instructions+=3;goto B6665b1;
case 0x6665b3:c.instructions+=2;goto B6665b3;
case 0x6665b5:c.instructions+=1;goto B6665b5;
case 0x6665b6:goto L6665b6;
case 0x6665b8:c.instructions+=1;goto B6665b8;
case 0x6665ba:goto L6665ba;
case 0x6665bc:c.instructions+=2;goto B6665bc;
case 0x6665be:c.instructions+=1;goto B6665be;
case 0x6665c3:goto L6665c3;
case 0x6665c6:c.instructions+=3;goto B6665c6;
case 0x6665c7:c.instructions+=2;goto B6665c7;
case 0x6665c8:c.instructions+=1;goto B6665c8;
case 0x6665cb:goto L6665cb;
case 0x6665cd:c.instructions+=11;goto B6665cd;
case 0x6665ce:c.instructions+=10;goto B6665ce;
case 0x6665d0:c.instructions+=9;goto B6665d0;
case 0x6665d3:c.instructions+=8;goto B6665d3;
case 0x6665d4:c.instructions+=7;goto B6665d4;
case 0x6665d5:c.instructions+=6;goto B6665d5;
case 0x6665d7:c.instructions+=5;goto B6665d7;
case 0x6665d9:c.instructions+=4;goto B6665d9;
case 0x6665dc:c.instructions+=3;goto B6665dc;
case 0x6665df:c.instructions+=2;goto B6665df;
case 0x6665e2:c.instructions+=1;goto B6665e2;
case 0x6665e7:goto L6665e7;
case 0x6665e9:c.instructions+=2;goto B6665e9;
case 0x6665ea:c.instructions+=1;goto B6665ea;
case 0x6665ec:goto L6665ec;
case 0x6665ee:c.instructions+=1;goto B6665ee;
case 0x6665f3:goto L6665f3;
case 0x6665f5:c.instructions+=1;goto B6665f5;
case 0x6665f7:goto L6665f7;
case 0x6665f9:goto L6665f9;
case 0x6665fb:c.instructions+=1;goto B6665fb;
case 0x6665fd:goto L6665fd;
case 0x666604:c.instructions+=1;goto B666604;
case 0x666606:goto L666606;
case 0x666609:c.instructions+=1;goto B666609;
case 0x66660b:goto L66660b;
case 0x66660e:c.instructions+=3;goto B66660e;
case 0x666611:c.instructions+=2;goto B666611;
case 0x666612:c.instructions+=1;goto B666612;
case 0x666617:goto L666617;
case 0x666619:c.instructions+=3;goto B666619;
case 0x66661a:c.instructions+=2;goto B66661a;
case 0x66661d:c.instructions+=1;goto B66661d;
case 0x66661f:goto L66661f;
case 0x666626:c.instructions+=1;goto B666626;
case 0x666628:goto L666628;
case 0x66662b:c.instructions+=6;goto B66662b;
case 0x66662e:c.instructions+=5;goto B66662e;
case 0x666631:c.instructions+=4;goto B666631;
case 0x666633:c.instructions+=3;goto B666633;
case 0x666636:c.instructions+=2;goto B666636;
case 0x666637:c.instructions+=1;goto B666637;
case 0x66663a:goto L66663a;
case 0x66663c:goto L66663c;
case 0x66663e:c.instructions+=2;goto B66663e;
case 0x666641:c.instructions+=1;goto B666641;
case 0x666644:goto L666644;
case 0x666646:goto L666646;
case 0x666649:c.instructions+=12;goto B666649;
case 0x66664c:c.instructions+=11;goto B66664c;
case 0x66664f:c.instructions+=10;goto B66664f;
case 0x666652:c.instructions+=9;goto B666652;
case 0x666655:c.instructions+=8;goto B666655;
case 0x666658:c.instructions+=7;goto B666658;
case 0x66665e:c.instructions+=6;goto B66665e;
case 0x666663:c.instructions+=5;goto B666663;
case 0x666665:c.instructions+=4;goto B666665;
case 0x666668:c.instructions+=3;goto B666668;
case 0x66666a:c.instructions+=2;goto B66666a;
case 0x66666c:c.instructions+=1;goto B66666c;
case 0x66666d:goto L66666d;
case 0x66666f:c.instructions+=1;goto B66666f;
case 0x666671:goto L666671;
case 0x666673:c.instructions+=2;goto B666673;
case 0x666675:c.instructions+=1;goto B666675;
case 0x66667a:goto L66667a;
case 0x66667d:c.instructions+=4;goto B66667d;
case 0x66667e:c.instructions+=3;goto B66667e;
case 0x66667f:c.instructions+=2;goto B66667f;
case 0x666680:c.instructions+=1;goto B666680;
case 0x666683:goto L666683;
case 0x666685:c.instructions+=9;goto B666685;
case 0x666686:c.instructions+=8;goto B666686;
case 0x666688:c.instructions+=7;goto B666688;
case 0x66668b:c.instructions+=6;goto B66668b;
case 0x66668f:c.instructions+=5;goto B66668f;
case 0x666693:c.instructions+=4;goto B666693;
case 0x666694:c.instructions+=3;goto B666694;
case 0x666696:c.instructions+=2;goto B666696;
case 0x666699:c.instructions+=1;goto B666699;
case 0x66669e:goto L66669e;
case 0x6666a0:c.instructions+=2;goto B6666a0;
case 0x6666a1:c.instructions+=1;goto B6666a1;
case 0x6666a3:goto L6666a3;
case 0x6666a5:c.instructions+=1;goto B6666a5;
case 0x6666aa:goto L6666aa;
case 0x6666ac:c.instructions+=1;goto B6666ac;
case 0x6666ae:goto L6666ae;
case 0x6666b0:goto L6666b0;
case 0x6666b2:c.instructions+=1;goto B6666b2;
case 0x6666b4:goto L6666b4;
case 0x6666bb:c.instructions+=1;goto B6666bb;
case 0x6666bd:goto L6666bd;
case 0x6666c1:c.instructions+=1;goto B6666c1;
case 0x6666c3:goto L6666c3;
case 0x6666c6:c.instructions+=3;goto B6666c6;
case 0x6666c9:c.instructions+=2;goto B6666c9;
case 0x6666ca:c.instructions+=1;goto B6666ca;
case 0x6666cf:goto L6666cf;
case 0x6666d1:c.instructions+=3;goto B6666d1;
case 0x6666d2:c.instructions+=2;goto B6666d2;
case 0x6666d5:c.instructions+=1;goto B6666d5;
case 0x6666d7:goto L6666d7;
case 0x6666de:c.instructions+=1;goto B6666de;
case 0x6666e0:goto L6666e0;
case 0x6666e2:c.instructions+=2;goto B6666e2;
case 0x6666e5:c.instructions+=1;goto B6666e5;
case 0x6666e7:goto L6666e7;
case 0x6666ea:c.instructions+=2;goto B6666ea;
case 0x6666eb:c.instructions+=1;goto B6666eb;
case 0x6666ec:goto L6666ec;
case 0x6666ef:c.instructions+=7;goto B6666ef;
case 0x6666f2:c.instructions+=6;goto B6666f2;
case 0x6666f4:c.instructions+=5;goto B6666f4;
case 0x6666f6:c.instructions+=4;goto B6666f6;
case 0x6666f7:c.instructions+=3;goto B6666f7;
case 0x6666f8:c.instructions+=2;goto B6666f8;
case 0x6666fb:c.instructions+=1;goto B6666fb;
case 0x6666fe:goto L6666fe;
case 0x666700:goto L666700;
case 0x666702:goto L666702;
case 0x666703:c.instructions+=1;goto B666703;
case 0x666704:goto L666704;
case 0x666707:c.instructions+=12;goto B666707;
case 0x66670a:c.instructions+=11;goto B66670a;
case 0x66670d:c.instructions+=10;goto B66670d;
case 0x666710:c.instructions+=9;goto B666710;
case 0x666713:c.instructions+=8;goto B666713;
case 0x666716:c.instructions+=7;goto B666716;
case 0x666719:c.instructions+=6;goto B666719;
case 0x66671f:c.instructions+=5;goto B66671f;
case 0x666724:c.instructions+=4;goto B666724;
case 0x666726:c.instructions+=3;goto B666726;
case 0x666729:c.instructions+=2;goto B666729;
case 0x66672b:c.instructions+=1;goto B66672b;
case 0x66672d:goto L66672d;
case 0x66672f:c.instructions+=1;goto B66672f;
case 0x666731:goto L666731;
case 0x666733:c.instructions+=2;goto B666733;
case 0x666735:c.instructions+=1;goto B666735;
case 0x66673a:goto L66673a;
case 0x66673d:c.instructions+=3;goto B66673d;
case 0x66673e:c.instructions+=2;goto B66673e;
case 0x66673f:c.instructions+=1;goto B66673f;
case 0x666742:goto L666742;
case 0x666744:c.instructions+=9;goto B666744;
case 0x666745:c.instructions+=8;goto B666745;
case 0x666747:c.instructions+=7;goto B666747;
case 0x666748:c.instructions+=6;goto B666748;
case 0x66674c:c.instructions+=5;goto B66674c;
case 0x66674d:c.instructions+=4;goto B66674d;
case 0x66674e:c.instructions+=3;goto B66674e;
case 0x666750:c.instructions+=2;goto B666750;
case 0x666752:c.instructions+=1;goto B666752;
case 0x666757:goto L666757;
case 0x666759:c.instructions+=2;goto B666759;
case 0x66675a:c.instructions+=1;goto B66675a;
case 0x66675c:goto L66675c;
case 0x66675e:c.instructions+=1;goto B66675e;
case 0x666763:goto L666763;
case 0x666765:c.instructions+=1;goto B666765;
case 0x666767:goto L666767;
case 0x666769:goto L666769;
case 0x66676b:c.instructions+=1;goto B66676b;
case 0x66676d:goto L66676d;
case 0x666774:c.instructions+=1;goto B666774;
case 0x666776:goto L666776;
case 0x666777:c.instructions+=2;goto B666777;
case 0x666779:c.instructions+=1;goto B666779;
case 0x66677e:goto L66677e;
case 0x666780:c.instructions+=3;goto B666780;
case 0x666782:c.instructions+=2;goto B666782;
case 0x666783:c.instructions+=1;goto B666783;
case 0x666785:goto L666785;
case 0x66678c:c.instructions+=1;goto B66678c;
case 0x66678e:goto L66678e;
case 0x666791:c.instructions+=2;goto B666791;
case 0x666792:c.instructions+=1;goto B666792;
case 0x666797:goto L666797;
case 0x66679a:c.instructions+=8;goto B66679a;
case 0x66679d:c.instructions+=7;goto B66679d;
case 0x6667a3:c.instructions+=6;goto B6667a3;
case 0x6667a6:c.instructions+=5;goto B6667a6;
case 0x6667ac:c.instructions+=4;goto B6667ac;
case 0x6667ae:c.instructions+=3;goto B6667ae;
case 0x6667b1:c.instructions+=2;goto B6667b1;
case 0x6667b3:c.instructions+=1;goto B6667b3;
case 0x6667b5:goto L6667b5;
case 0x6667b7:c.instructions+=2;goto B6667b7;
case 0x6667b8:c.instructions+=1;goto B6667b8;
case 0x6667ba:goto L6667ba;
case 0x6667bc:c.instructions+=2;goto B6667bc;
case 0x6667be:c.instructions+=1;goto B6667be;
case 0x6667c3:goto L6667c3;
case 0x6667c6:c.instructions+=4;goto B6667c6;
case 0x6667c7:c.instructions+=3;goto B6667c7;
case 0x6667c8:c.instructions+=2;goto B6667c8;
case 0x6667c9:c.instructions+=1;goto B6667c9;
case 0x6667cc:goto L6667cc;
case 0x6667ce:c.instructions+=9;goto B6667ce;
case 0x6667cf:c.instructions+=8;goto B6667cf;
case 0x6667d1:c.instructions+=7;goto B6667d1;
case 0x6667d4:c.instructions+=6;goto B6667d4;
case 0x6667d8:c.instructions+=5;goto B6667d8;
case 0x6667dc:c.instructions+=4;goto B6667dc;
case 0x6667dd:c.instructions+=3;goto B6667dd;
case 0x6667df:c.instructions+=2;goto B6667df;
case 0x6667e2:c.instructions+=1;goto B6667e2;
case 0x6667e7:goto L6667e7;
case 0x6667e9:c.instructions+=2;goto B6667e9;
case 0x6667ea:c.instructions+=1;goto B6667ea;
case 0x6667ec:goto L6667ec;
case 0x6667ee:c.instructions+=1;goto B6667ee;
case 0x6667f3:goto L6667f3;
case 0x6667f5:c.instructions+=1;goto B6667f5;
case 0x6667f7:goto L6667f7;
case 0x6667f9:goto L6667f9;
case 0x6667fb:c.instructions+=1;goto B6667fb;
case 0x6667fd:goto L6667fd;
case 0x666804:c.instructions+=1;goto B666804;
case 0x666809:goto L666809;
case 0x66680a:c.instructions+=3;goto B66680a;
case 0x66680d:c.instructions+=2;goto B66680d;
case 0x66680f:c.instructions+=1;goto B66680f;
case 0x666811:goto L666811;
case 0x666813:c.instructions+=3;goto B666813;
case 0x666816:c.instructions+=2;goto B666816;
case 0x666817:c.instructions+=1;goto B666817;
case 0x66681c:goto L66681c;
case 0x66681e:c.instructions+=3;goto B66681e;
case 0x66681f:c.instructions+=2;goto B66681f;
case 0x666822:c.instructions+=1;goto B666822;
case 0x666824:goto L666824;
case 0x66682b:c.instructions+=1;goto B66682b;
case 0x66682d:goto L66682d;
case 0x66682f:c.instructions+=1;goto B66682f;
case 0x666831:goto L666831;
case 0x666834:c.instructions+=5;goto B666834;
case 0x666835:c.instructions+=4;goto B666835;
case 0x666838:c.instructions+=3;goto B666838;
case 0x66683b:c.instructions+=2;goto B66683b;
case 0x66683d:c.instructions+=1;goto B66683d;
case 0x666840:goto L666840;
case 0x666843:c.instructions+=4;goto B666843;
case 0x666846:c.instructions+=3;goto B666846;
case 0x666847:c.instructions+=2;goto B666847;
case 0x666848:c.instructions+=1;goto B666848;
case 0x66684d:goto L66684d;
case 0x666851:c.instructions+=2;goto B666851;
case 0x666854:c.instructions+=1;goto B666854;
case 0x666856:goto L666856;
case 0x666857:goto L666857;
case 0x66685a:c.instructions+=11;goto B66685a;
case 0x66685d:c.instructions+=10;goto B66685d;
case 0x666860:c.instructions+=9;goto B666860;
case 0x666863:c.instructions+=8;goto B666863;
case 0x666866:c.instructions+=7;goto B666866;
case 0x66686c:c.instructions+=6;goto B66686c;
case 0x66686f:c.instructions+=5;goto B66686f;
case 0x666874:c.instructions+=4;goto B666874;
case 0x666876:c.instructions+=3;goto B666876;
case 0x666879:c.instructions+=2;goto B666879;
case 0x66687b:c.instructions+=1;goto B66687b;
case 0x66687d:goto L66687d;
case 0x66687f:c.instructions+=2;goto B66687f;
case 0x666880:c.instructions+=1;goto B666880;
case 0x666882:goto L666882;
case 0x666884:c.instructions+=2;goto B666884;
case 0x666886:c.instructions+=1;goto B666886;
case 0x66688b:goto L66688b;
case 0x66688e:c.instructions+=3;goto B66688e;
case 0x66688f:c.instructions+=2;goto B66688f;
case 0x666890:c.instructions+=1;goto B666890;
case 0x666893:goto L666893;
case 0x666895:c.instructions+=11;goto B666895;
case 0x666896:c.instructions+=10;goto B666896;
case 0x666898:c.instructions+=9;goto B666898;
case 0x66689b:c.instructions+=8;goto B66689b;
case 0x66689c:c.instructions+=7;goto B66689c;
case 0x66689d:c.instructions+=6;goto B66689d;
case 0x66689f:c.instructions+=5;goto B66689f;
case 0x6668a1:c.instructions+=4;goto B6668a1;
case 0x6668a4:c.instructions+=3;goto B6668a4;
case 0x6668a7:c.instructions+=2;goto B6668a7;
case 0x6668aa:c.instructions+=1;goto B6668aa;
case 0x6668af:goto L6668af;
case 0x6668b1:c.instructions+=2;goto B6668b1;
case 0x6668b2:c.instructions+=1;goto B6668b2;
case 0x6668b4:goto L6668b4;
case 0x6668b6:c.instructions+=1;goto B6668b6;
case 0x6668bb:goto L6668bb;
case 0x6668bd:c.instructions+=1;goto B6668bd;
case 0x6668bf:goto L6668bf;
case 0x6668c1:goto L6668c1;
case 0x6668c3:c.instructions+=1;goto B6668c3;
case 0x6668c5:goto L6668c5;
case 0x6668cc:c.instructions+=1;goto B6668cc;
case 0x6668ce:goto L6668ce;
case 0x6668cf:c.instructions+=3;goto B6668cf;
case 0x6668d2:c.instructions+=2;goto B6668d2;
case 0x6668d4:c.instructions+=1;goto B6668d4;
case 0x6668d6:goto L6668d6;
case 0x6668d8:c.instructions+=3;goto B6668d8;
case 0x6668db:c.instructions+=2;goto B6668db;
case 0x6668dc:c.instructions+=1;goto B6668dc;
case 0x6668e1:goto L6668e1;
case 0x6668e3:c.instructions+=3;goto B6668e3;
case 0x6668e4:c.instructions+=2;goto B6668e4;
case 0x6668e7:c.instructions+=1;goto B6668e7;
case 0x6668e9:goto L6668e9;
case 0x6668f0:c.instructions+=1;goto B6668f0;
case 0x6668f2:goto L6668f2;
case 0x6668f4:c.instructions+=1;goto B6668f4;
case 0x6668f6:goto L6668f6;
case 0x6668f9:c.instructions+=1;goto B6668f9;
case 0x6668fc:goto L6668fc;
case 0x6668ff:c.instructions+=3;goto B6668ff;
case 0x666902:c.instructions+=2;goto B666902;
case 0x666905:c.instructions+=1;goto B666905;
case 0x66690a:goto L66690a;
case 0x66690e:c.instructions+=3;goto B66690e;
case 0x66690f:c.instructions+=2;goto B66690f;
case 0x666911:c.instructions+=1;goto B666911;
case 0x666913:goto L666913;
case 0x666916:c.instructions+=11;goto B666916;
case 0x666919:c.instructions+=10;goto B666919;
case 0x66691c:c.instructions+=9;goto B66691c;
case 0x66691f:c.instructions+=8;goto B66691f;
case 0x666922:c.instructions+=7;goto B666922;
case 0x666928:c.instructions+=6;goto B666928;
case 0x66692b:c.instructions+=5;goto B66692b;
case 0x666930:c.instructions+=4;goto B666930;
case 0x666932:c.instructions+=3;goto B666932;
case 0x666935:c.instructions+=2;goto B666935;
case 0x666937:c.instructions+=1;goto B666937;
case 0x666939:goto L666939;
case 0x66693b:c.instructions+=2;goto B66693b;
case 0x66693c:c.instructions+=1;goto B66693c;
case 0x66693e:goto L66693e;
case 0x666940:c.instructions+=2;goto B666940;
case 0x666942:c.instructions+=1;goto B666942;
case 0x666947:goto L666947;
case 0x66694a:c.instructions+=4;goto B66694a;
case 0x66694b:c.instructions+=3;goto B66694b;
case 0x66694c:c.instructions+=2;goto B66694c;
case 0x66694d:c.instructions+=1;goto B66694d;
case 0x666950:goto L666950;
case 0x666952:c.instructions+=11;goto B666952;
case 0x666953:c.instructions+=10;goto B666953;
case 0x666955:c.instructions+=9;goto B666955;
case 0x666958:c.instructions+=8;goto B666958;
case 0x666959:c.instructions+=7;goto B666959;
case 0x66695a:c.instructions+=6;goto B66695a;
case 0x66695c:c.instructions+=5;goto B66695c;
case 0x66695e:c.instructions+=4;goto B66695e;
case 0x666961:c.instructions+=3;goto B666961;
case 0x666964:c.instructions+=2;goto B666964;
case 0x666967:c.instructions+=1;goto B666967;
case 0x66696c:goto L66696c;
case 0x66696e:c.instructions+=2;goto B66696e;
case 0x66696f:c.instructions+=1;goto B66696f;
case 0x666971:goto L666971;
case 0x666973:c.instructions+=1;goto B666973;
case 0x666978:goto L666978;
case 0x66697a:c.instructions+=1;goto B66697a;
case 0x66697c:goto L66697c;
case 0x66697e:goto L66697e;
case 0x666980:c.instructions+=2;goto B666980;
case 0x666981:c.instructions+=1;goto B666981;
case 0x666983:goto L666983;
case 0x66698a:c.instructions+=1;goto B66698a;
case 0x66698f:goto L66698f;
case 0x666992:c.instructions+=2;goto B666992;
case 0x666994:c.instructions+=1;goto B666994;
case 0x666996:goto L666996;
case 0x666998:c.instructions+=1;goto B666998;
case 0x66699b:goto L66699b;
case 0x66699d:c.instructions+=3;goto B66699d;
case 0x66699e:c.instructions+=2;goto B66699e;
case 0x6669a0:c.instructions+=1;goto B6669a0;
case 0x6669a2:goto L6669a2;
case 0x6669a4:c.instructions+=6;goto B6669a4;
case 0x6669a7:c.instructions+=5;goto B6669a7;
case 0x6669a8:c.instructions+=4;goto B6669a8;
case 0x6669a9:c.instructions+=3;goto B6669a9;
case 0x6669aa:c.instructions+=2;goto B6669aa;
case 0x6669ad:c.instructions+=1;goto B6669ad;
case 0x6669b2:goto L6669b2;
case 0x6669b4:c.instructions+=2;goto B6669b4;
case 0x6669b7:c.instructions+=1;goto B6669b7;
case 0x6669bd:goto L6669bd;
case 0x6669c0:c.instructions+=3;goto B6669c0;
case 0x6669c2:c.instructions+=2;goto B6669c2;
case 0x6669c3:c.instructions+=1;goto B6669c3;
case 0x6669c6:goto L6669c6;
case 0x6669c9:c.instructions+=3;goto B6669c9;
case 0x6669cb:c.instructions+=2;goto B6669cb;
case 0x6669cd:c.instructions+=1;goto B6669cd;
case 0x6669d0:goto L6669d0;
case 0x6669d2:goto L6669d2;
case 0x6669d4:c.instructions+=1;goto B6669d4;
case 0x6669d7:goto L6669d7;
case 0x6669d9:goto L6669d9;
case 0x6669db:goto L6669db;
case 0x6669dd:c.instructions+=1;goto B6669dd;
case 0x6669e2:goto L6669e2;
case 0x6669e4:c.instructions+=2;goto B6669e4;
case 0x6669e5:c.instructions+=1;goto B6669e5;
case 0x6669e7:goto L6669e7;
case 0x6669e9:c.instructions+=8;goto B6669e9;
case 0x6669ee:c.instructions+=7;goto B6669ee;
case 0x6669ef:c.instructions+=6;goto B6669ef;
case 0x6669f0:c.instructions+=5;goto B6669f0;
case 0x6669f3:c.instructions+=4;goto B6669f3;
case 0x6669f5:c.instructions+=3;goto B6669f5;
case 0x6669f6:c.instructions+=2;goto B6669f6;
case 0x6669f8:c.instructions+=1;goto B6669f8;
case 0x6669fd:goto L6669fd;
case 0x6669ff:c.instructions+=1;goto B6669ff;
case 0x666a01:goto L666a01;
case 0x666a03:goto L666a03;
case 0x666a05:c.instructions+=1;goto B666a05;
case 0x666a0b:goto L666a0b;
case 0x666a11:c.instructions+=14;goto B666a11;
case 0x666a14:c.instructions+=13;goto B666a14;
case 0x666a17:c.instructions+=12;goto B666a17;
case 0x666a1a:c.instructions+=11;goto B666a1a;
case 0x666a1d:c.instructions+=10;goto B666a1d;
case 0x666a20:c.instructions+=9;goto B666a20;
case 0x666a23:c.instructions+=8;goto B666a23;
case 0x666a29:c.instructions+=7;goto B666a29;
case 0x666a2c:c.instructions+=6;goto B666a2c;
case 0x666a33:c.instructions+=5;goto B666a33;
case 0x666a38:c.instructions+=4;goto B666a38;
case 0x666a3a:c.instructions+=3;goto B666a3a;
case 0x666a3d:c.instructions+=2;goto B666a3d;
case 0x666a3f:c.instructions+=1;goto B666a3f;
case 0x666a41:goto L666a41;
case 0x666a44:c.instructions+=2;goto B666a44;
case 0x666a46:c.instructions+=1;goto B666a46;
case 0x666a48:goto L666a48;
case 0x666a4a:c.instructions+=2;goto B666a4a;
case 0x666a4b:c.instructions+=1;goto B666a4b;
case 0x666a4e:goto L666a4e;
case 0x666a51:goto L666a51;
case 0x666a53:c.instructions+=2;goto B666a53;
case 0x666a54:c.instructions+=1;goto B666a54;
case 0x666a56:goto L666a56;
case 0x666a58:c.instructions+=2;goto B666a58;
case 0x666a5a:c.instructions+=1;goto B666a5a;
case 0x666a5f:goto L666a5f;
case 0x666a62:c.instructions+=4;goto B666a62;
case 0x666a63:c.instructions+=3;goto B666a63;
case 0x666a64:c.instructions+=2;goto B666a64;
case 0x666a65:c.instructions+=1;goto B666a65;
case 0x666a68:goto L666a68;
case 0x666a6a:c.instructions+=11;goto B666a6a;
case 0x666a6b:c.instructions+=10;goto B666a6b;
case 0x666a6d:c.instructions+=9;goto B666a6d;
case 0x666a6e:c.instructions+=8;goto B666a6e;
case 0x666a6f:c.instructions+=7;goto B666a6f;
case 0x666a70:c.instructions+=6;goto B666a70;
case 0x666a71:c.instructions+=5;goto B666a71;
case 0x666a73:c.instructions+=4;goto B666a73;
case 0x666a75:c.instructions+=3;goto B666a75;
case 0x666a78:c.instructions+=2;goto B666a78;
case 0x666a7b:c.instructions+=1;goto B666a7b;
case 0x666a80:goto L666a80;
case 0x666a82:c.instructions+=2;goto B666a82;
case 0x666a83:c.instructions+=1;goto B666a83;
case 0x666a85:goto L666a85;
case 0x666a87:c.instructions+=1;goto B666a87;
case 0x666a8c:goto L666a8c;
case 0x666a8e:c.instructions+=1;goto B666a8e;
case 0x666a90:goto L666a90;
case 0x666a92:goto L666a92;
case 0x666a94:c.instructions+=1;goto B666a94;
case 0x666a96:goto L666a96;
case 0x666a9d:c.instructions+=1;goto B666a9d;
case 0x666a9f:goto L666a9f;
case 0x666aa0:c.instructions+=2;goto B666aa0;
case 0x666aa2:c.instructions+=1;goto B666aa2;
case 0x666aa7:goto L666aa7;
case 0x666aa9:c.instructions+=4;goto B666aa9;
case 0x666aaa:c.instructions+=3;goto B666aaa;
case 0x666aac:c.instructions+=2;goto B666aac;
case 0x666aad:c.instructions+=1;goto B666aad;
case 0x666aaf:goto L666aaf;
case 0x666ab4:c.instructions+=6;goto B666ab4;
case 0x666ab5:c.instructions+=5;goto B666ab5;
case 0x666ab8:c.instructions+=4;goto B666ab8;
case 0x666aba:c.instructions+=3;goto B666aba;
case 0x666abb:c.instructions+=2;goto B666abb;
case 0x666abd:c.instructions+=1;goto B666abd;
case 0x666ac2:goto L666ac2;
case 0x666ac4:c.instructions+=1;goto B666ac4;
case 0x666ac6:goto L666ac6;
case 0x666ac7:c.instructions+=3;goto B666ac7;
case 0x666ac9:c.instructions+=2;goto B666ac9;
case 0x666ad0:c.instructions+=1;goto B666ad0;
case 0x666ad5:goto L666ad5;
case 0x666ad6:goto L666ad6;
case 0x666ad9:c.instructions+=4;goto B666ad9;
case 0x666ada:c.instructions+=3;goto B666ada;
case 0x666adb:c.instructions+=2;goto B666adb;
case 0x666adc:c.instructions+=1;goto B666adc;
case 0x666adf:goto L666adf;
case 0x666ae2:c.instructions+=2;goto B666ae2;
case 0x666ae4:c.instructions+=1;goto B666ae4;
case 0x666ae6:goto L666ae6;
case 0x666ae8:c.instructions+=2;goto B666ae8;
case 0x666ae9:c.instructions+=1;goto B666ae9;
case 0x666aec:goto L666aec;
case 0x666aef:goto L666aef;
case 0x666af2:c.instructions+=12;goto B666af2;
case 0x666af5:c.instructions+=11;goto B666af5;
case 0x666afb:c.instructions+=10;goto B666afb;
case 0x666afe:c.instructions+=9;goto B666afe;
case 0x666b01:c.instructions+=8;goto B666b01;
case 0x666b07:c.instructions+=7;goto B666b07;
case 0x666b0a:c.instructions+=6;goto B666b0a;
case 0x666b0d:c.instructions+=5;goto B666b0d;
case 0x666b12:c.instructions+=4;goto B666b12;
case 0x666b14:c.instructions+=3;goto B666b14;
case 0x666b17:c.instructions+=2;goto B666b17;
case 0x666b19:c.instructions+=1;goto B666b19;
case 0x666b1b:goto L666b1b;
case 0x666b1d:c.instructions+=11;goto B666b1d;
case 0x666b1e:c.instructions+=10;goto B666b1e;
case 0x666b20:c.instructions+=9;goto B666b20;
case 0x666b21:c.instructions+=8;goto B666b21;
case 0x666b22:c.instructions+=7;goto B666b22;
case 0x666b23:c.instructions+=6;goto B666b23;
case 0x666b24:c.instructions+=5;goto B666b24;
case 0x666b26:c.instructions+=4;goto B666b26;
case 0x666b28:c.instructions+=3;goto B666b28;
case 0x666b2b:c.instructions+=2;goto B666b2b;
case 0x666b2e:c.instructions+=1;goto B666b2e;
case 0x666b33:goto L666b33;
case 0x666b35:c.instructions+=2;goto B666b35;
case 0x666b36:c.instructions+=1;goto B666b36;
case 0x666b38:goto L666b38;
case 0x666b3a:c.instructions+=1;goto B666b3a;
case 0x666b3f:goto L666b3f;
case 0x666b41:c.instructions+=1;goto B666b41;
case 0x666b43:goto L666b43;
case 0x666b45:goto L666b45;
case 0x666b47:c.instructions+=1;goto B666b47;
case 0x666b49:goto L666b49;
case 0x666b50:c.instructions+=1;goto B666b50;
case 0x666b52:goto L666b52;
case 0x666b53:c.instructions+=2;goto B666b53;
case 0x666b55:c.instructions+=1;goto B666b55;
case 0x666b5a:goto L666b5a;
case 0x666b5c:c.instructions+=4;goto B666b5c;
case 0x666b5d:c.instructions+=3;goto B666b5d;
case 0x666b5f:c.instructions+=2;goto B666b5f;
case 0x666b60:c.instructions+=1;goto B666b60;
case 0x666b62:goto L666b62;
case 0x666b67:c.instructions+=6;goto B666b67;
case 0x666b68:c.instructions+=5;goto B666b68;
case 0x666b6b:c.instructions+=4;goto B666b6b;
case 0x666b6d:c.instructions+=3;goto B666b6d;
case 0x666b6e:c.instructions+=2;goto B666b6e;
case 0x666b70:c.instructions+=1;goto B666b70;
case 0x666b75:goto L666b75;
case 0x666b77:c.instructions+=1;goto B666b77;
case 0x666b79:goto L666b79;
case 0x666b7a:c.instructions+=3;goto B666b7a;
case 0x666b7c:c.instructions+=2;goto B666b7c;
case 0x666b83:c.instructions+=1;goto B666b83;
case 0x666b88:goto L666b88;
case 0x666b89:goto L666b89;
case 0x666b8c:c.instructions+=4;goto B666b8c;
case 0x666b8d:c.instructions+=3;goto B666b8d;
case 0x666b8e:c.instructions+=2;goto B666b8e;
case 0x666b8f:c.instructions+=1;goto B666b8f;
case 0x666b92:goto L666b92;
case 0x666b95:c.instructions+=2;goto B666b95;
case 0x666b97:c.instructions+=1;goto B666b97;
case 0x666b99:goto L666b99;
case 0x666b9b:c.instructions+=2;goto B666b9b;
case 0x666b9c:c.instructions+=1;goto B666b9c;
case 0x666b9f:goto L666b9f;
case 0x666ba2:goto L666ba2;
case 0x666ba5:c.instructions+=12;goto B666ba5;
case 0x666ba8:c.instructions+=11;goto B666ba8;
case 0x666bae:c.instructions+=10;goto B666bae;
case 0x666bb1:c.instructions+=9;goto B666bb1;
case 0x666bb4:c.instructions+=8;goto B666bb4;
case 0x666bba:c.instructions+=7;goto B666bba;
case 0x666bbd:c.instructions+=6;goto B666bbd;
case 0x666bc0:c.instructions+=5;goto B666bc0;
case 0x666bc5:c.instructions+=4;goto B666bc5;
case 0x666bc7:c.instructions+=3;goto B666bc7;
case 0x666bca:c.instructions+=2;goto B666bca;
case 0x666bcc:c.instructions+=1;goto B666bcc;
case 0x666bce:goto L666bce;
case 0x666bd0:c.instructions+=11;goto B666bd0;
case 0x666bd1:c.instructions+=10;goto B666bd1;
case 0x666bd3:c.instructions+=9;goto B666bd3;
case 0x666bd4:c.instructions+=8;goto B666bd4;
case 0x666bd5:c.instructions+=7;goto B666bd5;
case 0x666bd6:c.instructions+=6;goto B666bd6;
case 0x666bd7:c.instructions+=5;goto B666bd7;
case 0x666bd9:c.instructions+=4;goto B666bd9;
case 0x666bdb:c.instructions+=3;goto B666bdb;
case 0x666bde:c.instructions+=2;goto B666bde;
case 0x666be1:c.instructions+=1;goto B666be1;
case 0x666be6:goto L666be6;
case 0x666be8:c.instructions+=2;goto B666be8;
case 0x666be9:c.instructions+=1;goto B666be9;
case 0x666beb:goto L666beb;
case 0x666bed:c.instructions+=1;goto B666bed;
case 0x666bf2:goto L666bf2;
case 0x666bf4:c.instructions+=1;goto B666bf4;
case 0x666bf6:goto L666bf6;
case 0x666bf8:goto L666bf8;
case 0x666bfa:c.instructions+=1;goto B666bfa;
case 0x666bfc:goto L666bfc;
case 0x666c03:c.instructions+=1;goto B666c03;
case 0x666c05:goto L666c05;
case 0x666c06:c.instructions+=2;goto B666c06;
case 0x666c08:c.instructions+=1;goto B666c08;
case 0x666c0d:goto L666c0d;
case 0x666c0f:c.instructions+=4;goto B666c0f;
case 0x666c10:c.instructions+=3;goto B666c10;
case 0x666c12:c.instructions+=2;goto B666c12;
case 0x666c13:c.instructions+=1;goto B666c13;
case 0x666c15:goto L666c15;
case 0x666c1a:c.instructions+=6;goto B666c1a;
case 0x666c1b:c.instructions+=5;goto B666c1b;
case 0x666c1e:c.instructions+=4;goto B666c1e;
case 0x666c20:c.instructions+=3;goto B666c20;
case 0x666c21:c.instructions+=2;goto B666c21;
case 0x666c23:c.instructions+=1;goto B666c23;
case 0x666c28:goto L666c28;
case 0x666c2a:c.instructions+=1;goto B666c2a;
case 0x666c2c:goto L666c2c;
case 0x666c2d:c.instructions+=3;goto B666c2d;
case 0x666c2f:c.instructions+=2;goto B666c2f;
case 0x666c36:c.instructions+=1;goto B666c36;
case 0x666c3b:goto L666c3b;
case 0x666c3c:goto L666c3c;
case 0x666c3f:c.instructions+=4;goto B666c3f;
case 0x666c40:c.instructions+=3;goto B666c40;
case 0x666c41:c.instructions+=2;goto B666c41;
case 0x666c42:c.instructions+=1;goto B666c42;
case 0x666c45:goto L666c45;
case 0x666c48:c.instructions+=2;goto B666c48;
case 0x666c4a:c.instructions+=1;goto B666c4a;
case 0x666c4c:goto L666c4c;
case 0x666c4e:c.instructions+=2;goto B666c4e;
case 0x666c4f:c.instructions+=1;goto B666c4f;
case 0x666c52:goto L666c52;
case 0x666c55:goto L666c55;
case 0x666c58:c.instructions+=12;goto B666c58;
case 0x666c5b:c.instructions+=11;goto B666c5b;
case 0x666c61:c.instructions+=10;goto B666c61;
case 0x666c64:c.instructions+=9;goto B666c64;
case 0x666c67:c.instructions+=8;goto B666c67;
case 0x666c6d:c.instructions+=7;goto B666c6d;
case 0x666c70:c.instructions+=6;goto B666c70;
case 0x666c73:c.instructions+=5;goto B666c73;
case 0x666c78:c.instructions+=4;goto B666c78;
case 0x666c7a:c.instructions+=3;goto B666c7a;
case 0x666c7d:c.instructions+=2;goto B666c7d;
case 0x666c7f:c.instructions+=1;goto B666c7f;
case 0x666c81:goto L666c81;
case 0x666c83:c.instructions+=11;goto B666c83;
case 0x666c84:c.instructions+=10;goto B666c84;
case 0x666c86:c.instructions+=9;goto B666c86;
case 0x666c89:c.instructions+=8;goto B666c89;
case 0x666c8a:c.instructions+=7;goto B666c8a;
case 0x666c8b:c.instructions+=6;goto B666c8b;
case 0x666c8d:c.instructions+=5;goto B666c8d;
case 0x666c8f:c.instructions+=4;goto B666c8f;
case 0x666c92:c.instructions+=3;goto B666c92;
case 0x666c95:c.instructions+=2;goto B666c95;
case 0x666c98:c.instructions+=1;goto B666c98;
case 0x666c9d:goto L666c9d;
case 0x666c9f:c.instructions+=2;goto B666c9f;
case 0x666ca0:c.instructions+=1;goto B666ca0;
case 0x666ca2:goto L666ca2;
case 0x666ca4:c.instructions+=1;goto B666ca4;
case 0x666ca9:goto L666ca9;
case 0x666cab:c.instructions+=1;goto B666cab;
case 0x666cad:goto L666cad;
case 0x666caf:goto L666caf;
case 0x666cb1:c.instructions+=1;goto B666cb1;
case 0x666cb3:goto L666cb3;
case 0x666cba:c.instructions+=1;goto B666cba;
case 0x666cbf:goto L666cbf;
case 0x666cc2:c.instructions+=2;goto B666cc2;
case 0x666cc3:c.instructions+=1;goto B666cc3;
case 0x666cc5:goto L666cc5;
case 0x666cc8:c.instructions+=1;goto B666cc8;
case 0x666ccd:goto L666ccd;
case 0x666ccf:c.instructions+=3;goto B666ccf;
case 0x666cd0:c.instructions+=2;goto B666cd0;
case 0x666cd3:c.instructions+=1;goto B666cd3;
case 0x666cd5:goto L666cd5;
case 0x666cdc:c.instructions+=1;goto B666cdc;
case 0x666ce1:goto L666ce1;
case 0x666ce4:c.instructions+=4;goto B666ce4;
case 0x666ce7:c.instructions+=3;goto B666ce7;
case 0x666ce9:c.instructions+=2;goto B666ce9;
case 0x666ceb:c.instructions+=1;goto B666ceb;
case 0x666cee:goto L666cee;
case 0x666cf0:goto L666cf0;
case 0x666cf2:c.instructions+=1;goto B666cf2;
case 0x666cf5:goto L666cf5;
case 0x666cf7:goto L666cf7;
case 0x666cf9:goto L666cf9;
case 0x666cfc:c.instructions+=14;goto B666cfc;
case 0x666cfe:c.instructions+=13;goto B666cfe;
case 0x666d00:c.instructions+=12;goto B666d00;
case 0x666d04:c.instructions+=11;goto B666d04;
case 0x666d07:c.instructions+=10;goto B666d07;
case 0x666d0a:c.instructions+=9;goto B666d0a;
case 0x666d0d:c.instructions+=8;goto B666d0d;
case 0x666d10:c.instructions+=7;goto B666d10;
case 0x666d11:c.instructions+=6;goto B666d11;
case 0x666d14:c.instructions+=5;goto B666d14;
case 0x666d15:c.instructions+=4;goto B666d15;
case 0x666d16:c.instructions+=3;goto B666d16;
case 0x666d19:c.instructions+=2;goto B666d19;
case 0x666d1a:c.instructions+=1;goto B666d1a;
case 0x666d1f:goto L666d1f;
case 0x666d21:c.instructions+=2;goto B666d21;
case 0x666d24:c.instructions+=1;goto B666d24;
case 0x666d2a:goto L666d2a;
case 0x666d2d:c.instructions+=4;goto B666d2d;
case 0x666d30:c.instructions+=3;goto B666d30;
case 0x666d37:c.instructions+=2;goto B666d37;
case 0x666d38:c.instructions+=1;goto B666d38;
case 0x666d3d:goto L666d3d;
case 0x666d3f:c.instructions+=2;goto B666d3f;
case 0x666d40:c.instructions+=1;goto B666d40;
case 0x666d42:goto L666d42;
case 0x666d45:c.instructions+=8;goto B666d45;
case 0x666d4a:c.instructions+=7;goto B666d4a;
case 0x666d4b:c.instructions+=6;goto B666d4b;
case 0x666d4d:c.instructions+=5;goto B666d4d;
case 0x666d50:c.instructions+=4;goto B666d50;
case 0x666d52:c.instructions+=3;goto B666d52;
case 0x666d53:c.instructions+=2;goto B666d53;
case 0x666d56:c.instructions+=1;goto B666d56;
case 0x666d5b:goto L666d5b;
case 0x666d5e:c.instructions+=2;goto B666d5e;
case 0x666d61:c.instructions+=1;goto B666d61;
case 0x666d63:goto L666d63;
case 0x666d66:goto L666d66;
case 0x666d69:c.instructions+=1;goto B666d69;
case 0x666d6f:goto L666d6f;
case 0x666d71:c.instructions+=9;goto B666d71;
case 0x666d75:c.instructions+=8;goto B666d75;
case 0x666d78:c.instructions+=7;goto B666d78;
case 0x666d7b:c.instructions+=6;goto B666d7b;
case 0x666d7c:c.instructions+=5;goto B666d7c;
case 0x666d7d:c.instructions+=4;goto B666d7d;
case 0x666d80:c.instructions+=3;goto B666d80;
case 0x666d81:c.instructions+=2;goto B666d81;
case 0x666d84:c.instructions+=1;goto B666d84;
case 0x666d89:goto L666d89;
case 0x666d8b:c.instructions+=2;goto B666d8b;
case 0x666d8e:c.instructions+=1;goto B666d8e;
case 0x666d90:goto L666d90;
case 0x666d93:c.instructions+=17;goto B666d93;
case 0x666d96:c.instructions+=16;goto B666d96;
case 0x666d99:c.instructions+=15;goto B666d99;
case 0x666d9c:c.instructions+=14;goto B666d9c;
case 0x666d9e:c.instructions+=13;goto B666d9e;
case 0x666da1:c.instructions+=12;goto B666da1;
case 0x666da4:c.instructions+=11;goto B666da4;
case 0x666da7:c.instructions+=10;goto B666da7;
case 0x666daa:c.instructions+=9;goto B666daa;
case 0x666dad:c.instructions+=8;goto B666dad;
case 0x666db0:c.instructions+=7;goto B666db0;
case 0x666db5:c.instructions+=6;goto B666db5;
case 0x666db7:c.instructions+=5;goto B666db7;
case 0x666dba:c.instructions+=4;goto B666dba;
case 0x666dbc:c.instructions+=3;goto B666dbc;
case 0x666dbf:c.instructions+=2;goto B666dbf;
case 0x666dc2:c.instructions+=1;goto B666dc2;
case 0x666dc4:goto L666dc4;
case 0x666dc7:c.instructions+=2;goto B666dc7;
case 0x666dc8:c.instructions+=1;goto B666dc8;
case 0x666dca:goto L666dca;
case 0x666dcd:c.instructions+=1;goto B666dcd;
case 0x666dd2:goto L666dd2;
case 0x666dd3:goto L666dd3;
case 0x666dd6:c.instructions+=2;goto B666dd6;
case 0x666dd8:c.instructions+=1;goto B666dd8;
case 0x666dda:goto L666dda;
case 0x666ddc:c.instructions+=1;goto B666ddc;
case 0x666de1:goto L666de1;
case 0x666de3:c.instructions+=1;goto B666de3;
case 0x666de5:goto L666de5;
case 0x666de7:c.instructions+=2;goto B666de7;
case 0x666de9:c.instructions+=1;goto B666de9;
case 0x666dee:goto L666dee;
case 0x666df1:c.instructions+=4;goto B666df1;
case 0x666df2:c.instructions+=3;goto B666df2;
case 0x666df3:c.instructions+=2;goto B666df3;
case 0x666df4:c.instructions+=1;goto B666df4;
case 0x666df7:goto L666df7;
case 0x666df9:c.instructions+=21;goto B666df9;
case 0x666dfa:c.instructions+=20;goto B666dfa;
case 0x666dfc:c.instructions+=19;goto B666dfc;
case 0x666e02:c.instructions+=18;goto B666e02;
case 0x666e03:c.instructions+=17;goto B666e03;
case 0x666e06:c.instructions+=16;goto B666e06;
case 0x666e09:c.instructions+=15;goto B666e09;
case 0x666e0a:c.instructions+=14;goto B666e0a;
case 0x666e0b:c.instructions+=13;goto B666e0b;
case 0x666e0d:c.instructions+=12;goto B666e0d;
case 0x666e10:c.instructions+=11;goto B666e10;
case 0x666e16:c.instructions+=10;goto B666e16;
case 0x666e19:c.instructions+=9;goto B666e19;
case 0x666e1c:c.instructions+=8;goto B666e1c;
case 0x666e1f:c.instructions+=7;goto B666e1f;
case 0x666e22:c.instructions+=6;goto B666e22;
case 0x666e24:c.instructions+=5;goto B666e24;
case 0x666e27:c.instructions+=4;goto B666e27;
case 0x666e2a:c.instructions+=3;goto B666e2a;
case 0x666e2d:c.instructions+=2;goto B666e2d;
case 0x666e30:c.instructions+=1;goto B666e30;
case 0x666e32:goto L666e32;
case 0x666e35:c.instructions+=1;goto B666e35;
case 0x666e37:goto L666e37;
case 0x666e3a:c.instructions+=1;goto B666e3a;
case 0x666e3d:goto L666e3d;
case 0x666e40:c.instructions+=13;goto B666e40;
case 0x666e46:c.instructions+=12;goto B666e46;
case 0x666e49:c.instructions+=11;goto B666e49;
case 0x666e4c:c.instructions+=10;goto B666e4c;
case 0x666e4f:c.instructions+=9;goto B666e4f;
case 0x666e52:c.instructions+=8;goto B666e52;
case 0x666e55:c.instructions+=7;goto B666e55;
case 0x666e58:c.instructions+=6;goto B666e58;
case 0x666e5b:c.instructions+=5;goto B666e5b;
case 0x666e61:c.instructions+=4;goto B666e61;
case 0x666e64:c.instructions+=3;goto B666e64;
case 0x666e67:c.instructions+=2;goto B666e67;
case 0x666e6a:c.instructions+=1;goto B666e6a;
case 0x666e6c:goto L666e6c;
case 0x666e6f:c.instructions+=1;goto B666e6f;
case 0x666e71:goto L666e71;
case 0x666e74:c.instructions+=1;goto B666e74;
case 0x666e77:goto L666e77;
case 0x666e7a:c.instructions+=15;goto B666e7a;
case 0x666e80:c.instructions+=14;goto B666e80;
case 0x666e83:c.instructions+=13;goto B666e83;
case 0x666e86:c.instructions+=12;goto B666e86;
case 0x666e89:c.instructions+=11;goto B666e89;
case 0x666e8c:c.instructions+=10;goto B666e8c;
case 0x666e8f:c.instructions+=9;goto B666e8f;
case 0x666e92:c.instructions+=8;goto B666e92;
case 0x666e95:c.instructions+=7;goto B666e95;
case 0x666e9b:c.instructions+=6;goto B666e9b;
case 0x666e9e:c.instructions+=5;goto B666e9e;
case 0x666ea1:c.instructions+=4;goto B666ea1;
case 0x666ea4:c.instructions+=3;goto B666ea4;
case 0x666eaa:c.instructions+=2;goto B666eaa;
case 0x666ead:c.instructions+=1;goto B666ead;
case 0x666eaf:goto L666eaf;
case 0x666eb2:c.instructions+=1;goto B666eb2;
case 0x666eb4:goto L666eb4;
case 0x666eb7:c.instructions+=1;goto B666eb7;
case 0x666eb9:goto L666eb9;
case 0x666ebc:c.instructions+=1;goto B666ebc;
case 0x666ebf:goto L666ebf;
case 0x666ec2:c.instructions+=3;goto B666ec2;
case 0x666ec5:c.instructions+=2;goto B666ec5;
case 0x666ec8:c.instructions+=1;goto B666ec8;
case 0x666eca:goto L666eca;
case 0x666ecd:c.instructions+=1;goto B666ecd;
case 0x666ecf:goto L666ecf;
case 0x666ed2:c.instructions+=1;goto B666ed2;
case 0x666ed4:goto L666ed4;
case 0x666ed7:c.instructions+=1;goto B666ed7;
case 0x666eda:goto L666eda;
case 0x666ee0:c.instructions+=10;goto B666ee0;
case 0x666ee3:c.instructions+=9;goto B666ee3;
case 0x666ee6:c.instructions+=8;goto B666ee6;
case 0x666ee9:c.instructions+=7;goto B666ee9;
case 0x666eec:c.instructions+=6;goto B666eec;
case 0x666eef:c.instructions+=5;goto B666eef;
case 0x666ef2:c.instructions+=4;goto B666ef2;
case 0x666ef5:c.instructions+=3;goto B666ef5;
case 0x666ef8:c.instructions+=2;goto B666ef8;
case 0x666efb:c.instructions+=1;goto B666efb;
case 0x666efe:goto L666efe;
case 0x666f01:c.instructions+=7;goto B666f01;
case 0x666f04:c.instructions+=6;goto B666f04;
case 0x666f07:c.instructions+=5;goto B666f07;
case 0x666f0a:c.instructions+=4;goto B666f0a;
case 0x666f0c:c.instructions+=3;goto B666f0c;
case 0x666f0d:c.instructions+=2;goto B666f0d;
case 0x666f0f:c.instructions+=1;goto B666f0f;
case 0x666f15:goto L666f15;
case 0x666f18:c.instructions+=1;goto B666f18;
case 0x666f1a:goto L666f1a;
case 0x666f1d:c.instructions+=3;goto B666f1d;
case 0x666f20:c.instructions+=2;goto B666f20;
case 0x666f23:c.instructions+=1;goto B666f23;
case 0x666f25:goto L666f25;
case 0x666f26:c.instructions+=2;goto B666f26;
case 0x666f28:c.instructions+=1;goto B666f28;
case 0x666f2d:goto L666f2d;
case 0x666f2f:c.instructions+=2;goto B666f2f;
case 0x666f32:c.instructions+=1;goto B666f32;
case 0x666f38:goto L666f38;
case 0x666f3a:c.instructions+=2;goto B666f3a;
case 0x666f3c:c.instructions+=1;goto B666f3c;
case 0x666f3d:goto L666f3d;
case 0x666f41:c.instructions+=3;goto B666f41;
case 0x666f45:c.instructions+=2;goto B666f45;
case 0x666f48:c.instructions+=1;goto B666f48;
case 0x666f4e:goto L666f4e;
case 0x666f55:goto L666f55;
case 0x666f58:c.instructions+=5;goto B666f58;
case 0x666f5b:c.instructions+=4;goto B666f5b;
case 0x666f5f:c.instructions+=3;goto B666f5f;
case 0x666f64:c.instructions+=2;goto B666f64;
case 0x666f67:c.instructions+=1;goto B666f67;
case 0x666f69:goto L666f69;
case 0x666f6e:c.instructions+=1;goto B666f6e;
case 0x666f70:goto L666f70;
case 0x666f74:c.instructions+=1;goto B666f74;
case 0x666f76:goto L666f76;
case 0x666f78:c.instructions+=4;goto B666f78;
case 0x666f7b:c.instructions+=3;goto B666f7b;
case 0x666f7d:c.instructions+=2;goto B666f7d;
case 0x666f80:c.instructions+=1;goto B666f80;
case 0x666f85:goto L666f85;
case 0x666f87:c.instructions+=2;goto B666f87;
case 0x666f8a:c.instructions+=1;goto B666f8a;
case 0x666f90:goto L666f90;
case 0x666f92:goto L666f92;
case 0x666f95:c.instructions+=2;goto B666f95;
case 0x666f97:c.instructions+=1;goto B666f97;
case 0x666f99:goto L666f99;
case 0x666f9b:c.instructions+=2;goto B666f9b;
case 0x666f9c:c.instructions+=1;goto B666f9c;
case 0x666f9f:goto L666f9f;
case 0x666fa2:c.instructions+=2;goto B666fa2;
case 0x666fa6:c.instructions+=1;goto B666fa6;
case 0x666fa8:goto L666fa8;
case 0x666fac:c.instructions+=2;goto B666fac;
case 0x666faf:c.instructions+=1;goto B666faf;
case 0x666fb1:goto L666fb1;
case 0x666fb4:c.instructions+=4;goto B666fb4;
case 0x666fb6:c.instructions+=3;goto B666fb6;
case 0x666fb9:c.instructions+=2;goto B666fb9;
case 0x666fbc:c.instructions+=1;goto B666fbc;
case 0x666fc1:goto L666fc1;
case 0x666fc3:c.instructions+=2;goto B666fc3;
case 0x666fc6:c.instructions+=1;goto B666fc6;
case 0x666fcc:goto L666fcc;
case 0x666fcf:c.instructions+=4;goto B666fcf;
case 0x666fd3:c.instructions+=3;goto B666fd3;
case 0x666fd6:c.instructions+=2;goto B666fd6;
case 0x666fd9:c.instructions+=1;goto B666fd9;
case 0x666fdb:goto L666fdb;
case 0x666fde:c.instructions+=1;goto B666fde;
case 0x666fe0:goto L666fe0;
case 0x666fe3:c.instructions+=5;goto B666fe3;
case 0x666fe7:c.instructions+=4;goto B666fe7;
case 0x666feb:c.instructions+=3;goto B666feb;
case 0x666fef:c.instructions+=2;goto B666fef;
case 0x666ff2:c.instructions+=1;goto B666ff2;
case 0x666ff8:goto L666ff8;
case 0x666ffa:c.instructions+=1;goto B666ffa;
case 0x666ffb:goto L666ffb;
case 0x666ffd:c.instructions+=1;goto B666ffd;
default:missing_instruction(c.pc);}
B666001:L666001:{c.instructions+=11;NFSU2_TR(0x666001);
__builtin_memmove((R+28),(R+12),4);
}
B666003:{NFSU2_TR(0x666003);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B666004:{NFSU2_TR(0x666004);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B666005:{NFSU2_TR(0x666005);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B666006:{NFSU2_TR(0x666006);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B666007:{NFSU2_TR(0x666007);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66600a:{NFSU2_TR(0x66600a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66600d:{NFSU2_TR(0x66600d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B66600f:{NFSU2_TR(0x66600f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B666011:{NFSU2_TR(0x666011);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B666013:{NFSU2_TR(0x666013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666019;}}
}
B666015:L666015:{c.instructions+=2;NFSU2_TR(0x666015);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B666017:{NFSU2_TR(0x666017);
{goto L66601c;}
}
B666019:L666019:{c.instructions+=1;NFSU2_TR(0x666019);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66601c:L66601c:{c.instructions+=10;NFSU2_TR(0x66601c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66601e:{NFSU2_TR(0x66601e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666021:{NFSU2_TR(0x666021);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666024:{NFSU2_TR(0x666024);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666027:{NFSU2_TR(0x666027);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B66602a:{NFSU2_TR(0x66602a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66602c:{NFSU2_TR(0x66602c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66602e:{NFSU2_TR(0x66602e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B666032:{NFSU2_TR(0x666032);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B666036:{NFSU2_TR(0x666036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66604b;}}
}
B666038:L666038:{c.instructions+=3;NFSU2_TR(0x666038);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B66603c:{NFSU2_TR(0x66603c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+8))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B666040:{NFSU2_TR(0x666040);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66604b;}}
}
B666042:L666042:{c.instructions+=2;NFSU2_TR(0x666042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B666049:{NFSU2_TR(0x666049);
{goto L66604f;}
}
B66604b:L66604b:{c.instructions+=1;NFSU2_TR(0x66604b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66604f:L66604f:{c.instructions+=10;NFSU2_TR(0x66604f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B666051:{NFSU2_TR(0x666051);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B666055:{NFSU2_TR(0x666055);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B666059:{NFSU2_TR(0x666059);
__builtin_memmove((R+8),(R+518),1);
}
B66605c:{NFSU2_TR(0x66605c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66605d:{NFSU2_TR(0x66605d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66605e:{NFSU2_TR(0x66605e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666061:{NFSU2_TR(0x666061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666064:{NFSU2_TR(0x666064);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666065:{NFSU2_TR(0x666065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66606aull));
TAIL_STATIC(0x6642f2u,664);
}
B66606a:L66606a:{c.instructions+=3;NFSU2_TR(0x66606a);
__builtin_memmove((R+28),(R+0),4);
}
B66606c:{NFSU2_TR(0x66606c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66606e:{NFSU2_TR(0x66606e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L666086;}}
}
B666070:L666070:{c.instructions+=7;NFSU2_TR(0x666070);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B666074:{NFSU2_TR(0x666074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666077:{NFSU2_TR(0x666077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666078:{NFSU2_TR(0x666078);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66607b:{NFSU2_TR(0x66607b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66607e:{NFSU2_TR(0x66607e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66607f:{NFSU2_TR(0x66607f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666084ull));
TAIL_STATIC(0x66453au,664);
}
B666084:L666084:{c.instructions+=1;NFSU2_TR(0x666084);
__builtin_memmove((R+28),(R+0),4);
}
B666086:L666086:{c.instructions+=4;NFSU2_TR(0x666086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666089:{NFSU2_TR(0x666089);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66608f:{NFSU2_TR(0x66608f);
u8 U[5];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+4,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B666092:{NFSU2_TR(0x666092);
if(r1(R+518)){{goto L6660a9;}}
}
B666094:L666094:{c.instructions+=3;NFSU2_TR(0x666094);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666099:{NFSU2_TR(0x666099);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66609f:{NFSU2_TR(0x66609f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6660a4ull));
TAIL_STATIC(0x75db6au,75d);
}
B6660a4:L6660a4:{c.instructions+=3;NFSU2_TR(0x6660a4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffeull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6660a7:{NFSU2_TR(0x6660a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6660a8:{NFSU2_TR(0x6660a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6660a9:L6660a9:{c.instructions+=6;NFSU2_TR(0x6660a9);
__builtin_memmove((R+0),(R+28),4);
}
B6660ab:{NFSU2_TR(0x6660ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6660ac:{NFSU2_TR(0x6660ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6660ad:{NFSU2_TR(0x6660ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6660ae:{NFSU2_TR(0x6660ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6660af:{NFSU2_TR(0x6660af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6660b2:L6660b2:{c.instructions+=10;NFSU2_TR(0x6660b2);
__builtin_memmove((R+28),(R+28),4);
}
B6660b4:{NFSU2_TR(0x6660b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6660b5:{NFSU2_TR(0x6660b5);
__builtin_memmove((R+20),(R+16),4);
}
B6660b7:{NFSU2_TR(0x6660b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6660b8:{NFSU2_TR(0x6660b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6660b9:{NFSU2_TR(0x6660b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6660bc:{NFSU2_TR(0x6660bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6660bf:{NFSU2_TR(0x6660bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6660c1:{NFSU2_TR(0x6660c1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6660c4:{NFSU2_TR(0x6660c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6660cd;}}
}
B6660c6:L6660c6:{c.instructions+=2;NFSU2_TR(0x6660c6);
w4(R+12,u32(0x8876086cull));
}
B6660cb:{NFSU2_TR(0x6660cb);
{goto L6660fb;}
}
B6660cd:L6660cd:{c.instructions+=4;NFSU2_TR(0x6660cd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6660cf:{NFSU2_TR(0x6660cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6660d0:{NFSU2_TR(0x6660d0);
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
B6660d2:{NFSU2_TR(0x6660d2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6660c6u);}goto L6660c6;}}
}
B6660d4:L6660d4:{c.instructions+=6;NFSU2_TR(0x6660d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6660d5:{NFSU2_TR(0x6660d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6660db:{NFSU2_TR(0x6660db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6660de:{NFSU2_TR(0x6660de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6660e0:{NFSU2_TR(0x6660e0);
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
B6660e2:{NFSU2_TR(0x6660e2);
if(r1(R+518)){{goto L6660ee;}}
}
B6660e4:L6660e4:{c.instructions+=2;NFSU2_TR(0x6660e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6660e6:{NFSU2_TR(0x6660e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6660ebull));
TAIL_STATIC(0x66519eu,665);
}
B6660eb:L6660eb:{c.instructions+=1;NFSU2_TR(0x6660eb);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6660ee:L6660ee:{c.instructions+=3;NFSU2_TR(0x6660ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6660f4:{NFSU2_TR(0x6660f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6660fa:{NFSU2_TR(0x6660fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6660fb:L6660fb:{c.instructions+=5;NFSU2_TR(0x6660fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6660fc:{NFSU2_TR(0x6660fc);
__builtin_memmove((R+0),(R+12),4);
}
B6660fe:{NFSU2_TR(0x6660fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6660ff:{NFSU2_TR(0x6660ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B666100:{NFSU2_TR(0x666100);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666103:L666103:{c.instructions+=9;NFSU2_TR(0x666103);
__builtin_memmove((R+28),(R+28),4);
}
B666105:{NFSU2_TR(0x666105);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666106:{NFSU2_TR(0x666106);
__builtin_memmove((R+20),(R+16),4);
}
B666108:{NFSU2_TR(0x666108);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666109:{NFSU2_TR(0x666109);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66610a:{NFSU2_TR(0x66610a);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66610c:{NFSU2_TR(0x66610c);
__builtin_memmove((R+24),(R+4),4);
}
B66610e:{NFSU2_TR(0x66610e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666110:{NFSU2_TR(0x666110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666115ull));
TAIL_STATIC(0x575620u,575);
}
B666115:L666115:{c.instructions+=3;NFSU2_TR(0x666115);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666117:{NFSU2_TR(0x666117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666118:{NFSU2_TR(0x666118);
if(r1(R+518)){{goto L666123;}}
}
B66611a:L66611a:{c.instructions+=2;NFSU2_TR(0x66611a);
__builtin_memmove((R+4),(R+0),4);
}
B66611c:{NFSU2_TR(0x66611c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666121ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666121:L666121:{c.instructions+=1;NFSU2_TR(0x666121);
{goto L666125;}
}
B666123:L666123:{c.instructions+=1;NFSU2_TR(0x666123);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B666125:L666125:{c.instructions+=2;NFSU2_TR(0x666125);
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
B666127:{NFSU2_TR(0x666127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666130;}}
}
B666129:L666129:{c.instructions+=2;NFSU2_TR(0x666129);
w4(R+28,u32(0x8007000eull));
}
B66612e:{NFSU2_TR(0x66612e);
{goto L66614f;}
}
B666130:L666130:{c.instructions+=9;NFSU2_TR(0x666130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666133:{NFSU2_TR(0x666133);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666136:{NFSU2_TR(0x666136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666139:{NFSU2_TR(0x666139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66613c:{NFSU2_TR(0x66613c);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B666142:{NFSU2_TR(0x666142);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B666148:{NFSU2_TR(0x666148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66614a:{NFSU2_TR(0x66614a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66614d:{NFSU2_TR(0x66614d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66614f:L66614f:{c.instructions+=5;NFSU2_TR(0x66614f);
__builtin_memmove((R+0),(R+28),4);
}
B666151:{NFSU2_TR(0x666151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666152:{NFSU2_TR(0x666152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666153:{NFSU2_TR(0x666153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B666154:{NFSU2_TR(0x666154);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666157:L666157:{c.instructions+=9;NFSU2_TR(0x666157);
__builtin_memmove((R+28),(R+28),4);
}
B666159:{NFSU2_TR(0x666159);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66615a:{NFSU2_TR(0x66615a);
__builtin_memmove((R+20),(R+16),4);
}
B66615c:{NFSU2_TR(0x66615c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66615d:{NFSU2_TR(0x66615d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66615e:{NFSU2_TR(0x66615e);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666160:{NFSU2_TR(0x666160);
__builtin_memmove((R+24),(R+4),4);
}
B666162:{NFSU2_TR(0x666162);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666164:{NFSU2_TR(0x666164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666169ull));
TAIL_STATIC(0x575620u,575);
}
B666169:L666169:{c.instructions+=3;NFSU2_TR(0x666169);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66616b:{NFSU2_TR(0x66616b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66616c:{NFSU2_TR(0x66616c);
if(r1(R+518)){{goto L666177;}}
}
B66616e:L66616e:{c.instructions+=2;NFSU2_TR(0x66616e);
__builtin_memmove((R+4),(R+0),4);
}
B666170:{NFSU2_TR(0x666170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666175ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666175:L666175:{c.instructions+=1;NFSU2_TR(0x666175);
{goto L666179;}
}
B666177:L666177:{c.instructions+=1;NFSU2_TR(0x666177);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B666179:L666179:{c.instructions+=2;NFSU2_TR(0x666179);
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
B66617b:{NFSU2_TR(0x66617b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666184;}}
}
B66617d:L66617d:{c.instructions+=2;NFSU2_TR(0x66617d);
w4(R+28,u32(0x8007000eull));
}
B666182:{NFSU2_TR(0x666182);
{goto L6661a3;}
}
B666184:L666184:{c.instructions+=9;NFSU2_TR(0x666184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666187:{NFSU2_TR(0x666187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66618a:{NFSU2_TR(0x66618a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66618d:{NFSU2_TR(0x66618d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666190:{NFSU2_TR(0x666190);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+0)),r4(U+0));
}
B666196:{NFSU2_TR(0x666196);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B66619c:{NFSU2_TR(0x66619c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66619e:{NFSU2_TR(0x66619e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6661a1:{NFSU2_TR(0x6661a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6661a3:L6661a3:{c.instructions+=5;NFSU2_TR(0x6661a3);
__builtin_memmove((R+0),(R+28),4);
}
B6661a5:{NFSU2_TR(0x6661a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6661a6:{NFSU2_TR(0x6661a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6661a7:{NFSU2_TR(0x6661a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6661a8:{NFSU2_TR(0x6661a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6661ab:L6661ab:{c.instructions+=9;NFSU2_TR(0x6661ab);
__builtin_memmove((R+28),(R+28),4);
}
B6661ad:{NFSU2_TR(0x6661ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6661ae:{NFSU2_TR(0x6661ae);
__builtin_memmove((R+20),(R+16),4);
}
B6661b0:{NFSU2_TR(0x6661b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6661b1:{NFSU2_TR(0x6661b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6661b2:{NFSU2_TR(0x6661b2);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6661b4:{NFSU2_TR(0x6661b4);
__builtin_memmove((R+24),(R+4),4);
}
B6661b6:{NFSU2_TR(0x6661b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6661b8:{NFSU2_TR(0x6661b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6661bdull));
TAIL_STATIC(0x575620u,575);
}
B6661bd:L6661bd:{c.instructions+=3;NFSU2_TR(0x6661bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6661bf:{NFSU2_TR(0x6661bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6661c0:{NFSU2_TR(0x6661c0);
if(r1(R+518)){{goto L6661cb;}}
}
B6661c2:L6661c2:{c.instructions+=2;NFSU2_TR(0x6661c2);
__builtin_memmove((R+4),(R+0),4);
}
B6661c4:{NFSU2_TR(0x6661c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6661c9ull));
TAIL_STATIC(0x65eb78u,65e);
}
B6661c9:L6661c9:{c.instructions+=1;NFSU2_TR(0x6661c9);
{goto L6661cd;}
}
B6661cb:L6661cb:{c.instructions+=1;NFSU2_TR(0x6661cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6661cd:L6661cd:{c.instructions+=2;NFSU2_TR(0x6661cd);
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
B6661cf:{NFSU2_TR(0x6661cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6661d8;}}
}
B6661d1:L6661d1:{c.instructions+=2;NFSU2_TR(0x6661d1);
w4(R+28,u32(0x8007000eull));
}
B6661d6:{NFSU2_TR(0x6661d6);
{goto L6661f7;}
}
B6661d8:L6661d8:{c.instructions+=9;NFSU2_TR(0x6661d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6661db:{NFSU2_TR(0x6661db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6661de:{NFSU2_TR(0x6661de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6661e1:{NFSU2_TR(0x6661e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6661e4:{NFSU2_TR(0x6661e4);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6661ea:{NFSU2_TR(0x6661ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6661f0:{NFSU2_TR(0x6661f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6661f2:{NFSU2_TR(0x6661f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6661f5:{NFSU2_TR(0x6661f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6661f7:L6661f7:{c.instructions+=5;NFSU2_TR(0x6661f7);
__builtin_memmove((R+0),(R+28),4);
}
B6661f9:{NFSU2_TR(0x6661f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6661fa:{NFSU2_TR(0x6661fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6661fb:{NFSU2_TR(0x6661fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6661fc:{NFSU2_TR(0x6661fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6661ff:L6661ff:{c.instructions+=10;NFSU2_TR(0x6661ff);
__builtin_memmove((R+28),(R+28),4);
}
B666201:{NFSU2_TR(0x666201);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666202:{NFSU2_TR(0x666202);
__builtin_memmove((R+20),(R+16),4);
}
B666204:{NFSU2_TR(0x666204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B666207:{NFSU2_TR(0x666207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66620b:{NFSU2_TR(0x66620b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66620f:{NFSU2_TR(0x66620f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666210:{NFSU2_TR(0x666210);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666212:{NFSU2_TR(0x666212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666215:{NFSU2_TR(0x666215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66621aull));
TAIL_STATIC(0x575620u,575);
}
B66621a:L66621a:{c.instructions+=3;NFSU2_TR(0x66621a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66621c:{NFSU2_TR(0x66621c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66621d:{NFSU2_TR(0x66621d);
if(r1(R+518)){{goto L66622a;}}
}
B66621f:L66621f:{c.instructions+=2;NFSU2_TR(0x66621f);
__builtin_memmove((R+4),(R+0),4);
}
B666221:{NFSU2_TR(0x666221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666226ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666226:L666226:{c.instructions+=2;NFSU2_TR(0x666226);
__builtin_memmove((R+12),(R+0),4);
}
B666228:{NFSU2_TR(0x666228);
{goto L66622c;}
}
B66622a:L66622a:{c.instructions+=1;NFSU2_TR(0x66622a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66622c:L66622c:{c.instructions+=2;NFSU2_TR(0x66622c);
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
B66622e:{NFSU2_TR(0x66622e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666239;}}
}
B666230:L666230:{c.instructions+=2;NFSU2_TR(0x666230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666237:{NFSU2_TR(0x666237);
{goto L6662a0;}
}
B666239:L666239:{c.instructions+=4;NFSU2_TR(0x666239);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66623a:{NFSU2_TR(0x66623a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66623d:{NFSU2_TR(0x66623d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66623f:{NFSU2_TR(0x66623f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66625d;}}
}
B666241:L666241:{c.instructions+=4;NFSU2_TR(0x666241);
__builtin_memmove((R+0),(R+24),4);
}
B666243:{NFSU2_TR(0x666243);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666246:{NFSU2_TR(0x666246);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666247:{NFSU2_TR(0x666247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66624cull));
TAIL_STATIC(0x575620u,575);
}
B66624c:L66624c:{c.instructions+=4;NFSU2_TR(0x66624c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66624e:{NFSU2_TR(0x66624e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66624f:{NFSU2_TR(0x66624f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666252:{NFSU2_TR(0x666252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66625d;}}
}
B666254:L666254:{c.instructions+=2;NFSU2_TR(0x666254);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66625b:{NFSU2_TR(0x66625b);
{goto L666292;}
}
B66625d:L66625d:{c.instructions+=5;NFSU2_TR(0x66625d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666260:{NFSU2_TR(0x666260);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666261:{NFSU2_TR(0x666261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B666264:{NFSU2_TR(0x666264);
__builtin_memmove((R+4),(R+24),4);
}
B666266:{NFSU2_TR(0x666266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666269:L666269:{c.instructions+=1;NFSU2_TR(0x666269);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66626b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666269u);}goto L666269;}
}
B66626b:L66626b:{c.instructions+=13;NFSU2_TR(0x66626b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66626e:{NFSU2_TR(0x66626e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666271:{NFSU2_TR(0x666271);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666274:{NFSU2_TR(0x666274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666277:{NFSU2_TR(0x666277);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66627a:{NFSU2_TR(0x66627a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66627d:{NFSU2_TR(0x66627d);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+12)),r4(U+0));
}
B666283:{NFSU2_TR(0x666283);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666288:{NFSU2_TR(0x666288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66628a:{NFSU2_TR(0x66628a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66628d:{NFSU2_TR(0x66628d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66628f:{NFSU2_TR(0x66628f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666291:{NFSU2_TR(0x666291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666292:L666292:{c.instructions+=3;NFSU2_TR(0x666292);
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
B666294:{NFSU2_TR(0x666294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666295:{NFSU2_TR(0x666295);
if(r1(R+518)){{goto L6662a0;}}
}
B666297:L666297:{c.instructions+=3;NFSU2_TR(0x666297);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666299:{NFSU2_TR(0x666299);
__builtin_memmove((R+4),(R+12),4);
}
B66629b:{NFSU2_TR(0x66629b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6662a0ull));
TAIL_STATIC(0x66519eu,665);
}
B6662a0:L6662a0:{c.instructions+=4;NFSU2_TR(0x6662a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6662a3:{NFSU2_TR(0x6662a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6662a4:{NFSU2_TR(0x6662a4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6662a5:{NFSU2_TR(0x6662a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6662a8:L6662a8:{c.instructions+=10;NFSU2_TR(0x6662a8);
__builtin_memmove((R+28),(R+28),4);
}
B6662aa:{NFSU2_TR(0x6662aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6662ab:{NFSU2_TR(0x6662ab);
__builtin_memmove((R+20),(R+16),4);
}
B6662ad:{NFSU2_TR(0x6662ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6662b0:{NFSU2_TR(0x6662b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6662b4:{NFSU2_TR(0x6662b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6662b8:{NFSU2_TR(0x6662b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6662b9:{NFSU2_TR(0x6662b9);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6662bb:{NFSU2_TR(0x6662bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6662be:{NFSU2_TR(0x6662be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6662c3ull));
TAIL_STATIC(0x575620u,575);
}
B6662c3:L6662c3:{c.instructions+=3;NFSU2_TR(0x6662c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6662c5:{NFSU2_TR(0x6662c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6662c6:{NFSU2_TR(0x6662c6);
if(r1(R+518)){{goto L6662d3;}}
}
B6662c8:L6662c8:{c.instructions+=2;NFSU2_TR(0x6662c8);
__builtin_memmove((R+4),(R+0),4);
}
B6662ca:{NFSU2_TR(0x6662ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6662cfull));
TAIL_STATIC(0x65eb78u,65e);
}
B6662cf:L6662cf:{c.instructions+=2;NFSU2_TR(0x6662cf);
__builtin_memmove((R+12),(R+0),4);
}
B6662d1:{NFSU2_TR(0x6662d1);
{goto L6662d5;}
}
B6662d3:L6662d3:{c.instructions+=1;NFSU2_TR(0x6662d3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6662d5:L6662d5:{c.instructions+=2;NFSU2_TR(0x6662d5);
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
B6662d7:{NFSU2_TR(0x6662d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6662e2;}}
}
B6662d9:L6662d9:{c.instructions+=2;NFSU2_TR(0x6662d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6662e0:{NFSU2_TR(0x6662e0);
{goto L666349;}
}
B6662e2:L6662e2:{c.instructions+=4;NFSU2_TR(0x6662e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6662e3:{NFSU2_TR(0x6662e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6662e6:{NFSU2_TR(0x6662e6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6662e8:{NFSU2_TR(0x6662e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666306;}}
}
B6662ea:L6662ea:{c.instructions+=4;NFSU2_TR(0x6662ea);
__builtin_memmove((R+0),(R+24),4);
}
B6662ec:{NFSU2_TR(0x6662ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6662ef:{NFSU2_TR(0x6662ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6662f0:{NFSU2_TR(0x6662f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6662f5ull));
TAIL_STATIC(0x575620u,575);
}
B6662f5:L6662f5:{c.instructions+=4;NFSU2_TR(0x6662f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6662f7:{NFSU2_TR(0x6662f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6662f8:{NFSU2_TR(0x6662f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6662fb:{NFSU2_TR(0x6662fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666306;}}
}
B6662fd:L6662fd:{c.instructions+=2;NFSU2_TR(0x6662fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666304:{NFSU2_TR(0x666304);
{goto L66633b;}
}
B666306:L666306:{c.instructions+=5;NFSU2_TR(0x666306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666309:{NFSU2_TR(0x666309);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66630a:{NFSU2_TR(0x66630a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66630d:{NFSU2_TR(0x66630d);
__builtin_memmove((R+4),(R+24),4);
}
B66630f:{NFSU2_TR(0x66630f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666312:L666312:{c.instructions+=1;NFSU2_TR(0x666312);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L666314;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666312u);}goto L666312;}
}
B666314:L666314:{c.instructions+=13;NFSU2_TR(0x666314);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666317:{NFSU2_TR(0x666317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66631a:{NFSU2_TR(0x66631a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66631d:{NFSU2_TR(0x66631d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666320:{NFSU2_TR(0x666320);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666323:{NFSU2_TR(0x666323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666326:{NFSU2_TR(0x666326);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B66632c:{NFSU2_TR(0x66632c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666331:{NFSU2_TR(0x666331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666333:{NFSU2_TR(0x666333);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666336:{NFSU2_TR(0x666336);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666338:{NFSU2_TR(0x666338);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66633a:{NFSU2_TR(0x66633a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66633b:L66633b:{c.instructions+=3;NFSU2_TR(0x66633b);
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
B66633d:{NFSU2_TR(0x66633d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66633e:{NFSU2_TR(0x66633e);
if(r1(R+518)){{goto L666349;}}
}
B666340:L666340:{c.instructions+=3;NFSU2_TR(0x666340);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666342:{NFSU2_TR(0x666342);
__builtin_memmove((R+4),(R+12),4);
}
B666344:{NFSU2_TR(0x666344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666349ull));
TAIL_STATIC(0x66519eu,665);
}
B666349:L666349:{c.instructions+=4;NFSU2_TR(0x666349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66634c:{NFSU2_TR(0x66634c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66634d:{NFSU2_TR(0x66634d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66634e:{NFSU2_TR(0x66634e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666351:L666351:{c.instructions+=10;NFSU2_TR(0x666351);
__builtin_memmove((R+28),(R+28),4);
}
B666353:{NFSU2_TR(0x666353);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666354:{NFSU2_TR(0x666354);
__builtin_memmove((R+20),(R+16),4);
}
B666356:{NFSU2_TR(0x666356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B666359:{NFSU2_TR(0x666359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66635d:{NFSU2_TR(0x66635d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666361:{NFSU2_TR(0x666361);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666362:{NFSU2_TR(0x666362);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666364:{NFSU2_TR(0x666364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666367:{NFSU2_TR(0x666367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66636cull));
TAIL_STATIC(0x575620u,575);
}
B66636c:L66636c:{c.instructions+=3;NFSU2_TR(0x66636c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66636e:{NFSU2_TR(0x66636e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66636f:{NFSU2_TR(0x66636f);
if(r1(R+518)){{goto L66637c;}}
}
B666371:L666371:{c.instructions+=2;NFSU2_TR(0x666371);
__builtin_memmove((R+4),(R+0),4);
}
B666373:{NFSU2_TR(0x666373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666378ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666378:L666378:{c.instructions+=2;NFSU2_TR(0x666378);
__builtin_memmove((R+12),(R+0),4);
}
B66637a:{NFSU2_TR(0x66637a);
{goto L66637e;}
}
B66637c:L66637c:{c.instructions+=1;NFSU2_TR(0x66637c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66637e:L66637e:{c.instructions+=2;NFSU2_TR(0x66637e);
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
B666380:{NFSU2_TR(0x666380);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66638b;}}
}
B666382:L666382:{c.instructions+=2;NFSU2_TR(0x666382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666389:{NFSU2_TR(0x666389);
{goto L6663f2;}
}
B66638b:L66638b:{c.instructions+=4;NFSU2_TR(0x66638b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66638c:{NFSU2_TR(0x66638c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66638f:{NFSU2_TR(0x66638f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666391:{NFSU2_TR(0x666391);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6663af;}}
}
B666393:L666393:{c.instructions+=4;NFSU2_TR(0x666393);
__builtin_memmove((R+0),(R+24),4);
}
B666395:{NFSU2_TR(0x666395);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666398:{NFSU2_TR(0x666398);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666399:{NFSU2_TR(0x666399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66639eull));
TAIL_STATIC(0x575620u,575);
}
B66639e:L66639e:{c.instructions+=4;NFSU2_TR(0x66639e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6663a0:{NFSU2_TR(0x6663a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6663a1:{NFSU2_TR(0x6663a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6663a4:{NFSU2_TR(0x6663a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6663af;}}
}
B6663a6:L6663a6:{c.instructions+=2;NFSU2_TR(0x6663a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6663ad:{NFSU2_TR(0x6663ad);
{goto L6663e4;}
}
B6663af:L6663af:{c.instructions+=5;NFSU2_TR(0x6663af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6663b2:{NFSU2_TR(0x6663b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6663b3:{NFSU2_TR(0x6663b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6663b6:{NFSU2_TR(0x6663b6);
__builtin_memmove((R+4),(R+24),4);
}
B6663b8:{NFSU2_TR(0x6663b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6663bb:L6663bb:{c.instructions+=1;NFSU2_TR(0x6663bb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6663bd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6663bbu);}goto L6663bb;}
}
B6663bd:L6663bd:{c.instructions+=13;NFSU2_TR(0x6663bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6663c0:{NFSU2_TR(0x6663c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6663c3:{NFSU2_TR(0x6663c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6663c6:{NFSU2_TR(0x6663c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6663c9:{NFSU2_TR(0x6663c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6663cc:{NFSU2_TR(0x6663cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6663cf:{NFSU2_TR(0x6663cf);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6663d5:{NFSU2_TR(0x6663d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B6663da:{NFSU2_TR(0x6663da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6663dc:{NFSU2_TR(0x6663dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6663df:{NFSU2_TR(0x6663df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6663e1:{NFSU2_TR(0x6663e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6663e3:{NFSU2_TR(0x6663e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6663e4:L6663e4:{c.instructions+=3;NFSU2_TR(0x6663e4);
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
B6663e6:{NFSU2_TR(0x6663e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6663e7:{NFSU2_TR(0x6663e7);
if(r1(R+518)){{goto L6663f2;}}
}
B6663e9:L6663e9:{c.instructions+=3;NFSU2_TR(0x6663e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6663eb:{NFSU2_TR(0x6663eb);
__builtin_memmove((R+4),(R+12),4);
}
B6663ed:{NFSU2_TR(0x6663ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6663f2ull));
TAIL_STATIC(0x66519eu,665);
}
B6663f2:L6663f2:{c.instructions+=4;NFSU2_TR(0x6663f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6663f5:{NFSU2_TR(0x6663f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6663f6:{NFSU2_TR(0x6663f6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6663f7:{NFSU2_TR(0x6663f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6663fa:L6663fa:{c.instructions+=10;NFSU2_TR(0x6663fa);
__builtin_memmove((R+28),(R+28),4);
}
B6663fc:{NFSU2_TR(0x6663fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6663fd:{NFSU2_TR(0x6663fd);
__builtin_memmove((R+20),(R+16),4);
}
B6663ff:{NFSU2_TR(0x6663ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666400:{NFSU2_TR(0x666400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666401:{NFSU2_TR(0x666401);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666405:{NFSU2_TR(0x666405);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666406:{NFSU2_TR(0x666406);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666408:{NFSU2_TR(0x666408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66640b:{NFSU2_TR(0x66640b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666410ull));
TAIL_STATIC(0x575620u,575);
}
B666410:L666410:{c.instructions+=3;NFSU2_TR(0x666410);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666412:{NFSU2_TR(0x666412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666413:{NFSU2_TR(0x666413);
if(r1(R+518)){{goto L666420;}}
}
B666415:L666415:{c.instructions+=2;NFSU2_TR(0x666415);
__builtin_memmove((R+4),(R+0),4);
}
B666417:{NFSU2_TR(0x666417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66641cull));
TAIL_STATIC(0x65eb78u,65e);
}
B66641c:L66641c:{c.instructions+=2;NFSU2_TR(0x66641c);
__builtin_memmove((R+12),(R+0),4);
}
B66641e:{NFSU2_TR(0x66641e);
{goto L666422;}
}
B666420:L666420:{c.instructions+=1;NFSU2_TR(0x666420);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666422:L666422:{c.instructions+=2;NFSU2_TR(0x666422);
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
B666424:{NFSU2_TR(0x666424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66642f;}}
}
B666426:L666426:{c.instructions+=2;NFSU2_TR(0x666426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66642d:{NFSU2_TR(0x66642d);
{goto L66647e;}
}
B66642f:L66642f:{c.instructions+=2;NFSU2_TR(0x66642f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666431:{NFSU2_TR(0x666431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666436ull));
TAIL_STATIC(0x575620u,575);
}
B666436:L666436:{c.instructions+=3;NFSU2_TR(0x666436);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666438:{NFSU2_TR(0x666438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666439:{NFSU2_TR(0x666439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666444;}}
}
B66643b:L66643b:{c.instructions+=2;NFSU2_TR(0x66643b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666442:{NFSU2_TR(0x666442);
{goto L666471;}
}
B666444:L666444:{c.instructions+=20;NFSU2_TR(0x666444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666447:{NFSU2_TR(0x666447);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666448:{NFSU2_TR(0x666448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66644b:{NFSU2_TR(0x66644b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66644c:{NFSU2_TR(0x66644c);
__builtin_memmove((R+28),(R+0),4);
}
B66644e:{NFSU2_TR(0x66644e);
u8 U[40];
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
}
B66644f:{NFSU2_TR(0x66644f);
u8 U[40];
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
}
B666450:{NFSU2_TR(0x666450);
u8 U[40];
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
}
B666451:{NFSU2_TR(0x666451);
u8 U[40];
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
}
B666452:{NFSU2_TR(0x666452);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666455:{NFSU2_TR(0x666455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666458:{NFSU2_TR(0x666458);
u8 U[4];
w4(U+0,u32(0x7ull));
s4(u32(r4(R+12)),r4(U+0));
}
B66645e:{NFSU2_TR(0x66645e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666461:{NFSU2_TR(0x666461);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666466:{NFSU2_TR(0x666466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666468:{NFSU2_TR(0x666468);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66646b:{NFSU2_TR(0x66646b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66646c:{NFSU2_TR(0x66646c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66646e:{NFSU2_TR(0x66646e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666470:{NFSU2_TR(0x666470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666471:L666471:{c.instructions+=2;NFSU2_TR(0x666471);
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
B666473:{NFSU2_TR(0x666473);
if(r1(R+518)){{goto L66647e;}}
}
B666475:L666475:{c.instructions+=3;NFSU2_TR(0x666475);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666477:{NFSU2_TR(0x666477);
__builtin_memmove((R+4),(R+12),4);
}
B666479:{NFSU2_TR(0x666479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66647eull));
TAIL_STATIC(0x66519eu,665);
}
B66647e:L66647e:{c.instructions+=4;NFSU2_TR(0x66647e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666481:{NFSU2_TR(0x666481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666482:{NFSU2_TR(0x666482);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666483:{NFSU2_TR(0x666483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666486:L666486:{c.instructions+=12;NFSU2_TR(0x666486);
__builtin_memmove((R+28),(R+28),4);
}
B666488:{NFSU2_TR(0x666488);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666489:{NFSU2_TR(0x666489);
__builtin_memmove((R+20),(R+16),4);
}
B66648b:{NFSU2_TR(0x66648b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66648e:{NFSU2_TR(0x66648e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66648f:{NFSU2_TR(0x66648f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666490:{NFSU2_TR(0x666490);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B666492:{NFSU2_TR(0x666492);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666494:{NFSU2_TR(0x666494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666497:{NFSU2_TR(0x666497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66649a:{NFSU2_TR(0x66649a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66649d:{NFSU2_TR(0x66649d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6664a2ull));
TAIL_STATIC(0x575620u,575);
}
B6664a2:L6664a2:{c.instructions+=3;NFSU2_TR(0x6664a2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6664a4:{NFSU2_TR(0x6664a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6664a5:{NFSU2_TR(0x6664a5);
if(r1(R+518)){{goto L6664b2;}}
}
B6664a7:L6664a7:{c.instructions+=2;NFSU2_TR(0x6664a7);
__builtin_memmove((R+4),(R+0),4);
}
B6664a9:{NFSU2_TR(0x6664a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6664aeull));
TAIL_STATIC(0x65eb78u,65e);
}
B6664ae:L6664ae:{c.instructions+=2;NFSU2_TR(0x6664ae);
__builtin_memmove((R+12),(R+0),4);
}
B6664b0:{NFSU2_TR(0x6664b0);
{goto L6664b4;}
}
B6664b2:L6664b2:{c.instructions+=1;NFSU2_TR(0x6664b2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6664b4:L6664b4:{c.instructions+=2;NFSU2_TR(0x6664b4);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6664b6:{NFSU2_TR(0x6664b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6664c1;}}
}
B6664b8:L6664b8:{c.instructions+=2;NFSU2_TR(0x6664b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6664bf:{NFSU2_TR(0x6664bf);
{goto L666535;}
}
B6664c1:L6664c1:{c.instructions+=2;NFSU2_TR(0x6664c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6664c4:{NFSU2_TR(0x6664c4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6664e3;}}
}
B6664c6:L6664c6:{c.instructions+=4;NFSU2_TR(0x6664c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6664c9:{NFSU2_TR(0x6664c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6664cc:{NFSU2_TR(0x6664cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6664cd:{NFSU2_TR(0x6664cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6664d2ull));
TAIL_STATIC(0x575620u,575);
}
B6664d2:L6664d2:{c.instructions+=4;NFSU2_TR(0x6664d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6664d4:{NFSU2_TR(0x6664d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6664d5:{NFSU2_TR(0x6664d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6664d8:{NFSU2_TR(0x6664d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6664e3;}}
}
B6664da:L6664da:{c.instructions+=2;NFSU2_TR(0x6664da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6664e1:{NFSU2_TR(0x6664e1);
{goto L666528;}
}
B6664e3:L6664e3:{c.instructions+=7;NFSU2_TR(0x6664e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6664e6:{NFSU2_TR(0x6664e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6664e9:{NFSU2_TR(0x6664e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6664ec:{NFSU2_TR(0x6664ec);
__builtin_memmove((R+0),(R+4),4);
}
B6664ee:{NFSU2_TR(0x6664ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6664f1:{NFSU2_TR(0x6664f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6664f2:{NFSU2_TR(0x6664f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6664f5:L6664f5:{c.instructions+=1;NFSU2_TR(0x6664f5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6664f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6664f5u);}goto L6664f5;}
}
B6664f7:L6664f7:{c.instructions+=3;NFSU2_TR(0x6664f7);
__builtin_memmove((R+4),(R+0),4);
}
B6664f9:{NFSU2_TR(0x6664f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6664fc:{NFSU2_TR(0x6664fc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6664ff:L6664ff:{c.instructions+=1;NFSU2_TR(0x6664ff);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L666501;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6664ffu);}goto L6664ff;}
}
B666501:L666501:{c.instructions+=13;NFSU2_TR(0x666501);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666504:{NFSU2_TR(0x666504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666507:{NFSU2_TR(0x666507);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66650a:{NFSU2_TR(0x66650a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66650d:{NFSU2_TR(0x66650d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666510:{NFSU2_TR(0x666510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666513:{NFSU2_TR(0x666513);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B666519:{NFSU2_TR(0x666519);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B66651e:{NFSU2_TR(0x66651e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666520:{NFSU2_TR(0x666520);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666523:{NFSU2_TR(0x666523);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666525:{NFSU2_TR(0x666525);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666527:{NFSU2_TR(0x666527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666528:L666528:{c.instructions+=2;NFSU2_TR(0x666528);
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
B66652a:{NFSU2_TR(0x66652a);
if(r1(R+518)){{goto L666535;}}
}
B66652c:L66652c:{c.instructions+=3;NFSU2_TR(0x66652c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66652e:{NFSU2_TR(0x66652e);
__builtin_memmove((R+4),(R+12),4);
}
B666530:{NFSU2_TR(0x666530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666535ull));
TAIL_STATIC(0x66519eu,665);
}
B666535:L666535:{c.instructions+=5;NFSU2_TR(0x666535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666538:{NFSU2_TR(0x666538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666539:{NFSU2_TR(0x666539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66653a:{NFSU2_TR(0x66653a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66653b:{NFSU2_TR(0x66653b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66653e:L66653e:{c.instructions+=10;NFSU2_TR(0x66653e);
__builtin_memmove((R+28),(R+28),4);
}
B666540:{NFSU2_TR(0x666540);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666541:{NFSU2_TR(0x666541);
__builtin_memmove((R+20),(R+16),4);
}
B666543:{NFSU2_TR(0x666543);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666544:{NFSU2_TR(0x666544);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666545:{NFSU2_TR(0x666545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666549:{NFSU2_TR(0x666549);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66654a:{NFSU2_TR(0x66654a);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66654c:{NFSU2_TR(0x66654c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66654f:{NFSU2_TR(0x66654f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666554ull));
TAIL_STATIC(0x575620u,575);
}
B666554:L666554:{c.instructions+=3;NFSU2_TR(0x666554);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666556:{NFSU2_TR(0x666556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666557:{NFSU2_TR(0x666557);
if(r1(R+518)){{goto L666564;}}
}
B666559:L666559:{c.instructions+=2;NFSU2_TR(0x666559);
__builtin_memmove((R+4),(R+0),4);
}
B66655b:{NFSU2_TR(0x66655b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666560ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666560:L666560:{c.instructions+=2;NFSU2_TR(0x666560);
__builtin_memmove((R+12),(R+0),4);
}
B666562:{NFSU2_TR(0x666562);
{goto L666566;}
}
B666564:L666564:{c.instructions+=1;NFSU2_TR(0x666564);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666566:L666566:{c.instructions+=2;NFSU2_TR(0x666566);
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
B666568:{NFSU2_TR(0x666568);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666573;}}
}
B66656a:L66656a:{c.instructions+=2;NFSU2_TR(0x66656a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666571:{NFSU2_TR(0x666571);
{goto L6665c3;}
}
B666573:L666573:{c.instructions+=2;NFSU2_TR(0x666573);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666575:{NFSU2_TR(0x666575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66657aull));
TAIL_STATIC(0x575620u,575);
}
B66657a:L66657a:{c.instructions+=3;NFSU2_TR(0x66657a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66657c:{NFSU2_TR(0x66657c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66657d:{NFSU2_TR(0x66657d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666588;}}
}
B66657f:L66657f:{c.instructions+=2;NFSU2_TR(0x66657f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666586:{NFSU2_TR(0x666586);
{goto L6665b6;}
}
B666588:L666588:{c.instructions+=6;NFSU2_TR(0x666588);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666589:{NFSU2_TR(0x666589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66658c:{NFSU2_TR(0x66658c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66658d:{NFSU2_TR(0x66658d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66658f:{NFSU2_TR(0x66658f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666590:{NFSU2_TR(0x666590);
__builtin_memmove((R+28),(R+0),4);
}
B666592:L666592:{c.instructions+=1;NFSU2_TR(0x666592);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L666594;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666592u);}goto L666592;}
}
B666594:L666594:{c.instructions+=12;NFSU2_TR(0x666594);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666597:{NFSU2_TR(0x666597);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66659a:{NFSU2_TR(0x66659a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66659d:{NFSU2_TR(0x66659d);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6665a3:{NFSU2_TR(0x6665a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6665a6:{NFSU2_TR(0x6665a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B6665ab:{NFSU2_TR(0x6665ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6665ad:{NFSU2_TR(0x6665ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6665b0:{NFSU2_TR(0x6665b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6665b1:{NFSU2_TR(0x6665b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6665b3:{NFSU2_TR(0x6665b3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6665b5:{NFSU2_TR(0x6665b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6665b6:L6665b6:{c.instructions+=2;NFSU2_TR(0x6665b6);
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
B6665b8:{NFSU2_TR(0x6665b8);
if(r1(R+518)){{goto L6665c3;}}
}
B6665ba:L6665ba:{c.instructions+=3;NFSU2_TR(0x6665ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6665bc:{NFSU2_TR(0x6665bc);
__builtin_memmove((R+4),(R+12),4);
}
B6665be:{NFSU2_TR(0x6665be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6665c3ull));
TAIL_STATIC(0x66519eu,665);
}
B6665c3:L6665c3:{c.instructions+=4;NFSU2_TR(0x6665c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6665c6:{NFSU2_TR(0x6665c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6665c7:{NFSU2_TR(0x6665c7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6665c8:{NFSU2_TR(0x6665c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6665cb:L6665cb:{c.instructions+=12;NFSU2_TR(0x6665cb);
__builtin_memmove((R+28),(R+28),4);
}
B6665cd:{NFSU2_TR(0x6665cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6665ce:{NFSU2_TR(0x6665ce);
__builtin_memmove((R+20),(R+16),4);
}
B6665d0:{NFSU2_TR(0x6665d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6665d3:{NFSU2_TR(0x6665d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6665d4:{NFSU2_TR(0x6665d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6665d5:{NFSU2_TR(0x6665d5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6665d7:{NFSU2_TR(0x6665d7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6665d9:{NFSU2_TR(0x6665d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6665dc:{NFSU2_TR(0x6665dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6665df:{NFSU2_TR(0x6665df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6665e2:{NFSU2_TR(0x6665e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6665e7ull));
TAIL_STATIC(0x575620u,575);
}
B6665e7:L6665e7:{c.instructions+=3;NFSU2_TR(0x6665e7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6665e9:{NFSU2_TR(0x6665e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6665ea:{NFSU2_TR(0x6665ea);
if(r1(R+518)){{goto L6665f7;}}
}
B6665ec:L6665ec:{c.instructions+=2;NFSU2_TR(0x6665ec);
__builtin_memmove((R+4),(R+0),4);
}
B6665ee:{NFSU2_TR(0x6665ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6665f3ull));
TAIL_STATIC(0x65eb78u,65e);
}
B6665f3:L6665f3:{c.instructions+=2;NFSU2_TR(0x6665f3);
__builtin_memmove((R+12),(R+0),4);
}
B6665f5:{NFSU2_TR(0x6665f5);
{goto L6665f9;}
}
B6665f7:L6665f7:{c.instructions+=1;NFSU2_TR(0x6665f7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6665f9:L6665f9:{c.instructions+=2;NFSU2_TR(0x6665f9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6665fb:{NFSU2_TR(0x6665fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666606;}}
}
B6665fd:L6665fd:{c.instructions+=2;NFSU2_TR(0x6665fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666604:{NFSU2_TR(0x666604);
{goto L66667a;}
}
B666606:L666606:{c.instructions+=2;NFSU2_TR(0x666606);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666609:{NFSU2_TR(0x666609);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666628;}}
}
B66660b:L66660b:{c.instructions+=4;NFSU2_TR(0x66660b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66660e:{NFSU2_TR(0x66660e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666611:{NFSU2_TR(0x666611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666612:{NFSU2_TR(0x666612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666617ull));
TAIL_STATIC(0x575620u,575);
}
B666617:L666617:{c.instructions+=4;NFSU2_TR(0x666617);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666619:{NFSU2_TR(0x666619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66661a:{NFSU2_TR(0x66661a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66661d:{NFSU2_TR(0x66661d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666628;}}
}
B66661f:L66661f:{c.instructions+=2;NFSU2_TR(0x66661f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666626:{NFSU2_TR(0x666626);
{goto L66666d;}
}
B666628:L666628:{c.instructions+=7;NFSU2_TR(0x666628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66662b:{NFSU2_TR(0x66662b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66662e:{NFSU2_TR(0x66662e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B666631:{NFSU2_TR(0x666631);
__builtin_memmove((R+0),(R+4),4);
}
B666633:{NFSU2_TR(0x666633);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B666636:{NFSU2_TR(0x666636);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666637:{NFSU2_TR(0x666637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66663a:L66663a:{c.instructions+=1;NFSU2_TR(0x66663a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66663c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66663au);}goto L66663a;}
}
B66663c:L66663c:{c.instructions+=3;NFSU2_TR(0x66663c);
__builtin_memmove((R+4),(R+0),4);
}
B66663e:{NFSU2_TR(0x66663e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666641:{NFSU2_TR(0x666641);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B666644:L666644:{c.instructions+=1;NFSU2_TR(0x666644);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L666646;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666644u);}goto L666644;}
}
B666646:L666646:{c.instructions+=13;NFSU2_TR(0x666646);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666649:{NFSU2_TR(0x666649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66664c:{NFSU2_TR(0x66664c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66664f:{NFSU2_TR(0x66664f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666652:{NFSU2_TR(0x666652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666655:{NFSU2_TR(0x666655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666658:{NFSU2_TR(0x666658);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+12)),r4(U+0));
}
B66665e:{NFSU2_TR(0x66665e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666663:{NFSU2_TR(0x666663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666665:{NFSU2_TR(0x666665);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666668:{NFSU2_TR(0x666668);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66666a:{NFSU2_TR(0x66666a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66666c:{NFSU2_TR(0x66666c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66666d:L66666d:{c.instructions+=2;NFSU2_TR(0x66666d);
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
B66666f:{NFSU2_TR(0x66666f);
if(r1(R+518)){{goto L66667a;}}
}
B666671:L666671:{c.instructions+=3;NFSU2_TR(0x666671);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666673:{NFSU2_TR(0x666673);
__builtin_memmove((R+4),(R+12),4);
}
B666675:{NFSU2_TR(0x666675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66667aull));
TAIL_STATIC(0x66519eu,665);
}
B66667a:L66667a:{c.instructions+=5;NFSU2_TR(0x66667a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66667d:{NFSU2_TR(0x66667d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66667e:{NFSU2_TR(0x66667e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66667f:{NFSU2_TR(0x66667f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666680:{NFSU2_TR(0x666680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666683:L666683:{c.instructions+=10;NFSU2_TR(0x666683);
__builtin_memmove((R+28),(R+28),4);
}
B666685:{NFSU2_TR(0x666685);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666686:{NFSU2_TR(0x666686);
__builtin_memmove((R+20),(R+16),4);
}
B666688:{NFSU2_TR(0x666688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66668b:{NFSU2_TR(0x66668b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66668f:{NFSU2_TR(0x66668f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666693:{NFSU2_TR(0x666693);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666694:{NFSU2_TR(0x666694);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666696:{NFSU2_TR(0x666696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666699:{NFSU2_TR(0x666699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66669eull));
TAIL_STATIC(0x575620u,575);
}
B66669e:L66669e:{c.instructions+=3;NFSU2_TR(0x66669e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6666a0:{NFSU2_TR(0x6666a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6666a1:{NFSU2_TR(0x6666a1);
if(r1(R+518)){{goto L6666ae;}}
}
B6666a3:L6666a3:{c.instructions+=2;NFSU2_TR(0x6666a3);
__builtin_memmove((R+4),(R+0),4);
}
B6666a5:{NFSU2_TR(0x6666a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6666aaull));
TAIL_STATIC(0x65eb78u,65e);
}
B6666aa:L6666aa:{c.instructions+=2;NFSU2_TR(0x6666aa);
__builtin_memmove((R+12),(R+0),4);
}
B6666ac:{NFSU2_TR(0x6666ac);
{goto L6666b0;}
}
B6666ae:L6666ae:{c.instructions+=1;NFSU2_TR(0x6666ae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6666b0:L6666b0:{c.instructions+=2;NFSU2_TR(0x6666b0);
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
B6666b2:{NFSU2_TR(0x6666b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6666bd;}}
}
B6666b4:L6666b4:{c.instructions+=2;NFSU2_TR(0x6666b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6666bb:{NFSU2_TR(0x6666bb);
{goto L66673a;}
}
B6666bd:L6666bd:{c.instructions+=2;NFSU2_TR(0x6666bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6666c1:{NFSU2_TR(0x6666c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6666e0;}}
}
B6666c3:L6666c3:{c.instructions+=4;NFSU2_TR(0x6666c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6666c6:{NFSU2_TR(0x6666c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6666c9:{NFSU2_TR(0x6666c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6666ca:{NFSU2_TR(0x6666ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6666cfull));
TAIL_STATIC(0x575620u,575);
}
B6666cf:L6666cf:{c.instructions+=4;NFSU2_TR(0x6666cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6666d1:{NFSU2_TR(0x6666d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6666d2:{NFSU2_TR(0x6666d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6666d5:{NFSU2_TR(0x6666d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6666e0;}}
}
B6666d7:L6666d7:{c.instructions+=2;NFSU2_TR(0x6666d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6666de:{NFSU2_TR(0x6666de);
{goto L66672d;}
}
B6666e0:L6666e0:{c.instructions+=3;NFSU2_TR(0x6666e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6666e2:{NFSU2_TR(0x6666e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6666e5:{NFSU2_TR(0x6666e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666704;}}
}
B6666e7:L6666e7:{c.instructions+=3;NFSU2_TR(0x6666e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6666ea:{NFSU2_TR(0x6666ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6666eb:{NFSU2_TR(0x6666eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6666ec:L6666ec:{c.instructions+=8;NFSU2_TR(0x6666ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6666ef:{NFSU2_TR(0x6666ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6666f2:{NFSU2_TR(0x6666f2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6666f4:{NFSU2_TR(0x6666f4);
__builtin_memmove((R+28),(R+8),4);
}
B6666f6:{NFSU2_TR(0x6666f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6666f7:{NFSU2_TR(0x6666f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6666f8:{NFSU2_TR(0x6666f8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B6666fb:{NFSU2_TR(0x6666fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6666fe:L6666fe:{c.instructions+=1;NFSU2_TR(0x6666fe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L666700;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6666feu);}goto L6666fe;}
}
B666700:L666700:{c.instructions+=1;NFSU2_TR(0x666700);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6666ecu);}goto L6666ec;}}
}
B666702:L666702:{c.instructions+=2;NFSU2_TR(0x666702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666703:{NFSU2_TR(0x666703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666704:L666704:{c.instructions+=13;NFSU2_TR(0x666704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666707:{NFSU2_TR(0x666707);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66670a:{NFSU2_TR(0x66670a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66670d:{NFSU2_TR(0x66670d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666710:{NFSU2_TR(0x666710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666713:{NFSU2_TR(0x666713);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666716:{NFSU2_TR(0x666716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666719:{NFSU2_TR(0x666719);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+12)),r4(U+0));
}
B66671f:{NFSU2_TR(0x66671f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666724:{NFSU2_TR(0x666724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666726:{NFSU2_TR(0x666726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666729:{NFSU2_TR(0x666729);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66672b:{NFSU2_TR(0x66672b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66672d:L66672d:{c.instructions+=2;NFSU2_TR(0x66672d);
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
B66672f:{NFSU2_TR(0x66672f);
if(r1(R+518)){{goto L66673a;}}
}
B666731:L666731:{c.instructions+=3;NFSU2_TR(0x666731);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666733:{NFSU2_TR(0x666733);
__builtin_memmove((R+4),(R+12),4);
}
B666735:{NFSU2_TR(0x666735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66673aull));
TAIL_STATIC(0x66519eu,665);
}
B66673a:L66673a:{c.instructions+=4;NFSU2_TR(0x66673a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66673d:{NFSU2_TR(0x66673d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66673e:{NFSU2_TR(0x66673e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66673f:{NFSU2_TR(0x66673f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666742:L666742:{c.instructions+=10;NFSU2_TR(0x666742);
__builtin_memmove((R+28),(R+28),4);
}
B666744:{NFSU2_TR(0x666744);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666745:{NFSU2_TR(0x666745);
__builtin_memmove((R+20),(R+16),4);
}
B666747:{NFSU2_TR(0x666747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666748:{NFSU2_TR(0x666748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66674c:{NFSU2_TR(0x66674c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66674d:{NFSU2_TR(0x66674d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66674e:{NFSU2_TR(0x66674e);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666750:{NFSU2_TR(0x666750);
__builtin_memmove((R+12),(R+4),4);
}
B666752:{NFSU2_TR(0x666752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666757ull));
TAIL_STATIC(0x575620u,575);
}
B666757:L666757:{c.instructions+=3;NFSU2_TR(0x666757);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666759:{NFSU2_TR(0x666759);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66675a:{NFSU2_TR(0x66675a);
if(r1(R+518)){{goto L666767;}}
}
B66675c:L66675c:{c.instructions+=2;NFSU2_TR(0x66675c);
__builtin_memmove((R+4),(R+0),4);
}
B66675e:{NFSU2_TR(0x66675e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666763ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666763:L666763:{c.instructions+=2;NFSU2_TR(0x666763);
__builtin_memmove((R+24),(R+0),4);
}
B666765:{NFSU2_TR(0x666765);
{goto L666769;}
}
B666767:L666767:{c.instructions+=1;NFSU2_TR(0x666767);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B666769:L666769:{c.instructions+=2;NFSU2_TR(0x666769);
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
B66676b:{NFSU2_TR(0x66676b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666776;}}
}
B66676d:L66676d:{c.instructions+=2;NFSU2_TR(0x66676d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666774:{NFSU2_TR(0x666774);
{goto L6667c3;}
}
B666776:L666776:{c.instructions+=3;NFSU2_TR(0x666776);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666777:{NFSU2_TR(0x666777);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666779:{NFSU2_TR(0x666779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66677eull));
TAIL_STATIC(0x575620u,575);
}
B66677e:L66677e:{c.instructions+=4;NFSU2_TR(0x66677e);
__builtin_memmove((R+28),(R+0),4);
}
B666780:{NFSU2_TR(0x666780);
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
B666782:{NFSU2_TR(0x666782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666783:{NFSU2_TR(0x666783);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66678e;}}
}
B666785:L666785:{c.instructions+=2;NFSU2_TR(0x666785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66678c:{NFSU2_TR(0x66678c);
{goto L6667b5;}
}
B66678e:L66678e:{c.instructions+=3;NFSU2_TR(0x66678e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666791:{NFSU2_TR(0x666791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666792:{NFSU2_TR(0x666792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666797ull));
TAIL_STATIC(0x63d12cu,63d);
}
B666797:L666797:{c.instructions+=9;NFSU2_TR(0x666797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66679a:{NFSU2_TR(0x66679a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66679d:{NFSU2_TR(0x66679d);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6667a3:{NFSU2_TR(0x6667a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6667a6:{NFSU2_TR(0x6667a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6667ac:{NFSU2_TR(0x6667ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6667ae:{NFSU2_TR(0x6667ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6667b1:{NFSU2_TR(0x6667b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6667b3:{NFSU2_TR(0x6667b3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6667b5:L6667b5:{c.instructions+=3;NFSU2_TR(0x6667b5);
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
B6667b7:{NFSU2_TR(0x6667b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6667b8:{NFSU2_TR(0x6667b8);
if(r1(R+518)){{goto L6667c3;}}
}
B6667ba:L6667ba:{c.instructions+=3;NFSU2_TR(0x6667ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6667bc:{NFSU2_TR(0x6667bc);
__builtin_memmove((R+4),(R+24),4);
}
B6667be:{NFSU2_TR(0x6667be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6667c3ull));
TAIL_STATIC(0x66519eu,665);
}
B6667c3:L6667c3:{c.instructions+=5;NFSU2_TR(0x6667c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6667c6:{NFSU2_TR(0x6667c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6667c7:{NFSU2_TR(0x6667c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6667c8:{NFSU2_TR(0x6667c8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6667c9:{NFSU2_TR(0x6667c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6667cc:L6667cc:{c.instructions+=10;NFSU2_TR(0x6667cc);
__builtin_memmove((R+28),(R+28),4);
}
B6667ce:{NFSU2_TR(0x6667ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6667cf:{NFSU2_TR(0x6667cf);
__builtin_memmove((R+20),(R+16),4);
}
B6667d1:{NFSU2_TR(0x6667d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6667d4:{NFSU2_TR(0x6667d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6667d8:{NFSU2_TR(0x6667d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6667dc:{NFSU2_TR(0x6667dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6667dd:{NFSU2_TR(0x6667dd);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6667df:{NFSU2_TR(0x6667df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6667e2:{NFSU2_TR(0x6667e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6667e7ull));
TAIL_STATIC(0x575620u,575);
}
B6667e7:L6667e7:{c.instructions+=3;NFSU2_TR(0x6667e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6667e9:{NFSU2_TR(0x6667e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6667ea:{NFSU2_TR(0x6667ea);
if(r1(R+518)){{goto L6667f7;}}
}
B6667ec:L6667ec:{c.instructions+=2;NFSU2_TR(0x6667ec);
__builtin_memmove((R+4),(R+0),4);
}
B6667ee:{NFSU2_TR(0x6667ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6667f3ull));
TAIL_STATIC(0x65eb78u,65e);
}
B6667f3:L6667f3:{c.instructions+=2;NFSU2_TR(0x6667f3);
__builtin_memmove((R+24),(R+0),4);
}
B6667f5:{NFSU2_TR(0x6667f5);
{goto L6667f9;}
}
B6667f7:L6667f7:{c.instructions+=1;NFSU2_TR(0x6667f7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6667f9:L6667f9:{c.instructions+=2;NFSU2_TR(0x6667f9);
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
B6667fb:{NFSU2_TR(0x6667fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666809;}}
}
B6667fd:L6667fd:{c.instructions+=2;NFSU2_TR(0x6667fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666804:{NFSU2_TR(0x666804);
{goto L66688b;}
}
B666809:L666809:{c.instructions+=4;NFSU2_TR(0x666809);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66680a:{NFSU2_TR(0x66680a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66680d:{NFSU2_TR(0x66680d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66680f:{NFSU2_TR(0x66680f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666857;}}
}
B666811:L666811:{c.instructions+=4;NFSU2_TR(0x666811);
__builtin_memmove((R+0),(R+12),4);
}
B666813:{NFSU2_TR(0x666813);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666816:{NFSU2_TR(0x666816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666817:{NFSU2_TR(0x666817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66681cull));
TAIL_STATIC(0x575620u,575);
}
B66681c:L66681c:{c.instructions+=4;NFSU2_TR(0x66681c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66681e:{NFSU2_TR(0x66681e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66681f:{NFSU2_TR(0x66681f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666822:{NFSU2_TR(0x666822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66682d;}}
}
B666824:L666824:{c.instructions+=2;NFSU2_TR(0x666824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66682b:{NFSU2_TR(0x66682b);
{goto L66687d;}
}
B66682d:L66682d:{c.instructions+=2;NFSU2_TR(0x66682d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66682f:{NFSU2_TR(0x66682f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666857;}}
}
B666831:L666831:{c.instructions+=6;NFSU2_TR(0x666831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666834:{NFSU2_TR(0x666834);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666835:{NFSU2_TR(0x666835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B666838:{NFSU2_TR(0x666838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66683b:{NFSU2_TR(0x66683b);
u8 U[6];
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66683d:{NFSU2_TR(0x66683d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666840:L666840:{c.instructions+=5;NFSU2_TR(0x666840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666843:{NFSU2_TR(0x666843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B666846:{NFSU2_TR(0x666846);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666847:{NFSU2_TR(0x666847);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666848:{NFSU2_TR(0x666848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66684dull));
TAIL_STATIC(0x63d12cu,63d);
}
B66684d:L66684d:{c.instructions+=3;NFSU2_TR(0x66684d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x40ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666851:{NFSU2_TR(0x666851);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B666854:{NFSU2_TR(0x666854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666840u);}goto L666840;}}
}
B666856:L666856:{c.instructions+=1;NFSU2_TR(0x666856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666857:L666857:{c.instructions+=12;NFSU2_TR(0x666857);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66685a:{NFSU2_TR(0x66685a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66685d:{NFSU2_TR(0x66685d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666860:{NFSU2_TR(0x666860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666863:{NFSU2_TR(0x666863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666866:{NFSU2_TR(0x666866);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+24)),r4(U+0));
}
B66686c:{NFSU2_TR(0x66686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66686f:{NFSU2_TR(0x66686f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666874:{NFSU2_TR(0x666874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666876:{NFSU2_TR(0x666876);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666879:{NFSU2_TR(0x666879);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66687b:{NFSU2_TR(0x66687b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66687d:L66687d:{c.instructions+=3;NFSU2_TR(0x66687d);
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
B66687f:{NFSU2_TR(0x66687f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666880:{NFSU2_TR(0x666880);
if(r1(R+518)){{goto L66688b;}}
}
B666882:L666882:{c.instructions+=3;NFSU2_TR(0x666882);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666884:{NFSU2_TR(0x666884);
__builtin_memmove((R+4),(R+24),4);
}
B666886:{NFSU2_TR(0x666886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66688bull));
TAIL_STATIC(0x66519eu,665);
}
B66688b:L66688b:{c.instructions+=4;NFSU2_TR(0x66688b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66688e:{NFSU2_TR(0x66688e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66688f:{NFSU2_TR(0x66688f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666890:{NFSU2_TR(0x666890);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666893:L666893:{c.instructions+=12;NFSU2_TR(0x666893);
__builtin_memmove((R+28),(R+28),4);
}
B666895:{NFSU2_TR(0x666895);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666896:{NFSU2_TR(0x666896);
__builtin_memmove((R+20),(R+16),4);
}
B666898:{NFSU2_TR(0x666898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66689b:{NFSU2_TR(0x66689b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66689c:{NFSU2_TR(0x66689c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66689d:{NFSU2_TR(0x66689d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66689f:{NFSU2_TR(0x66689f);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6668a1:{NFSU2_TR(0x6668a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6668a4:{NFSU2_TR(0x6668a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6668a7:{NFSU2_TR(0x6668a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6668aa:{NFSU2_TR(0x6668aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6668afull));
TAIL_STATIC(0x575620u,575);
}
B6668af:L6668af:{c.instructions+=3;NFSU2_TR(0x6668af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6668b1:{NFSU2_TR(0x6668b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6668b2:{NFSU2_TR(0x6668b2);
if(r1(R+518)){{goto L6668bf;}}
}
B6668b4:L6668b4:{c.instructions+=2;NFSU2_TR(0x6668b4);
__builtin_memmove((R+4),(R+0),4);
}
B6668b6:{NFSU2_TR(0x6668b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6668bbull));
TAIL_STATIC(0x65eb78u,65e);
}
B6668bb:L6668bb:{c.instructions+=2;NFSU2_TR(0x6668bb);
__builtin_memmove((R+24),(R+0),4);
}
B6668bd:{NFSU2_TR(0x6668bd);
{goto L6668c1;}
}
B6668bf:L6668bf:{c.instructions+=1;NFSU2_TR(0x6668bf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6668c1:L6668c1:{c.instructions+=2;NFSU2_TR(0x6668c1);
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
B6668c3:{NFSU2_TR(0x6668c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6668ce;}}
}
B6668c5:L6668c5:{c.instructions+=2;NFSU2_TR(0x6668c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6668cc:{NFSU2_TR(0x6668cc);
{goto L666947;}
}
B6668ce:L6668ce:{c.instructions+=4;NFSU2_TR(0x6668ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6668cf:{NFSU2_TR(0x6668cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6668d2:{NFSU2_TR(0x6668d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6668d4:{NFSU2_TR(0x6668d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6668f2;}}
}
B6668d6:L6668d6:{c.instructions+=4;NFSU2_TR(0x6668d6);
__builtin_memmove((R+0),(R+28),4);
}
B6668d8:{NFSU2_TR(0x6668d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6668db:{NFSU2_TR(0x6668db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6668dc:{NFSU2_TR(0x6668dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6668e1ull));
TAIL_STATIC(0x575620u,575);
}
B6668e1:L6668e1:{c.instructions+=4;NFSU2_TR(0x6668e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6668e3:{NFSU2_TR(0x6668e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6668e4:{NFSU2_TR(0x6668e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6668e7:{NFSU2_TR(0x6668e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6668f2;}}
}
B6668e9:L6668e9:{c.instructions+=2;NFSU2_TR(0x6668e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6668f0:{NFSU2_TR(0x6668f0);
{goto L666939;}
}
B6668f2:L6668f2:{c.instructions+=2;NFSU2_TR(0x6668f2);
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
B6668f4:{NFSU2_TR(0x6668f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666913;}}
}
B6668f6:L6668f6:{c.instructions+=2;NFSU2_TR(0x6668f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6668f9:{NFSU2_TR(0x6668f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6668fc:L6668fc:{c.instructions+=4;NFSU2_TR(0x6668fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6668ff:{NFSU2_TR(0x6668ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B666902:{NFSU2_TR(0x666902);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666905:{NFSU2_TR(0x666905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66690aull));
TAIL_STATIC(0x63d12cu,63d);
}
B66690a:L66690a:{c.instructions+=4;NFSU2_TR(0x66690a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66690e:{NFSU2_TR(0x66690e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66690f:{NFSU2_TR(0x66690f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B666911:{NFSU2_TR(0x666911);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6668fcu);}goto L6668fc;}}
}
B666913:L666913:{c.instructions+=12;NFSU2_TR(0x666913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666916:{NFSU2_TR(0x666916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666919:{NFSU2_TR(0x666919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66691c:{NFSU2_TR(0x66691c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66691f:{NFSU2_TR(0x66691f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666922:{NFSU2_TR(0x666922);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+24)),r4(U+0));
}
B666928:{NFSU2_TR(0x666928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66692b:{NFSU2_TR(0x66692b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666930:{NFSU2_TR(0x666930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666932:{NFSU2_TR(0x666932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666935:{NFSU2_TR(0x666935);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666937:{NFSU2_TR(0x666937);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B666939:L666939:{c.instructions+=3;NFSU2_TR(0x666939);
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
B66693b:{NFSU2_TR(0x66693b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66693c:{NFSU2_TR(0x66693c);
if(r1(R+518)){{goto L666947;}}
}
B66693e:L66693e:{c.instructions+=3;NFSU2_TR(0x66693e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666940:{NFSU2_TR(0x666940);
__builtin_memmove((R+4),(R+24),4);
}
B666942:{NFSU2_TR(0x666942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666947ull));
TAIL_STATIC(0x66519eu,665);
}
B666947:L666947:{c.instructions+=5;NFSU2_TR(0x666947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66694a:{NFSU2_TR(0x66694a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66694b:{NFSU2_TR(0x66694b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66694c:{NFSU2_TR(0x66694c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66694d:{NFSU2_TR(0x66694d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666950:L666950:{c.instructions+=12;NFSU2_TR(0x666950);
__builtin_memmove((R+28),(R+28),4);
}
B666952:{NFSU2_TR(0x666952);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666953:{NFSU2_TR(0x666953);
__builtin_memmove((R+20),(R+16),4);
}
B666955:{NFSU2_TR(0x666955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B666958:{NFSU2_TR(0x666958);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666959:{NFSU2_TR(0x666959);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66695a:{NFSU2_TR(0x66695a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66695c:{NFSU2_TR(0x66695c);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66695e:{NFSU2_TR(0x66695e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666961:{NFSU2_TR(0x666961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666964:{NFSU2_TR(0x666964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666967:{NFSU2_TR(0x666967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66696cull));
TAIL_STATIC(0x575620u,575);
}
B66696c:L66696c:{c.instructions+=3;NFSU2_TR(0x66696c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66696e:{NFSU2_TR(0x66696e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66696f:{NFSU2_TR(0x66696f);
if(r1(R+518)){{goto L66697c;}}
}
B666971:L666971:{c.instructions+=2;NFSU2_TR(0x666971);
__builtin_memmove((R+4),(R+0),4);
}
B666973:{NFSU2_TR(0x666973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666978ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666978:L666978:{c.instructions+=2;NFSU2_TR(0x666978);
__builtin_memmove((R+12),(R+0),4);
}
B66697a:{NFSU2_TR(0x66697a);
{goto L66697e;}
}
B66697c:L66697c:{c.instructions+=1;NFSU2_TR(0x66697c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66697e:L66697e:{c.instructions+=3;NFSU2_TR(0x66697e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666980:{NFSU2_TR(0x666980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666981:{NFSU2_TR(0x666981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66698f;}}
}
B666983:L666983:{c.instructions+=2;NFSU2_TR(0x666983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66698a:{NFSU2_TR(0x66698a);
{goto L666a41;}
}
B66698f:L66698f:{c.instructions+=3;NFSU2_TR(0x66698f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666992:{NFSU2_TR(0x666992);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666994:{NFSU2_TR(0x666994);
if(r1(R+518)){{goto L6669db;}}
}
B666996:L666996:{c.instructions+=2;NFSU2_TR(0x666996);
__builtin_memmove((R+0),(R+24),4);
}
B666998:{NFSU2_TR(0x666998);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66699b:L66699b:{c.instructions+=4;NFSU2_TR(0x66699b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66699d:{NFSU2_TR(0x66699d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66699e:{NFSU2_TR(0x66699e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6669a0:{NFSU2_TR(0x6669a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66699bu);}goto L66699b;}}
}
B6669a2:L6669a2:{c.instructions+=7;NFSU2_TR(0x6669a2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6669a4:{NFSU2_TR(0x6669a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6669a7:{NFSU2_TR(0x6669a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6669a8:{NFSU2_TR(0x6669a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669a9:{NFSU2_TR(0x6669a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669aa:{NFSU2_TR(0x6669aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6669ad:{NFSU2_TR(0x6669ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6669b2ull));
TAIL_STATIC(0x670f08u,670);
}
B6669b2:L6669b2:{c.instructions+=3;NFSU2_TR(0x6669b2);
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
B6669b4:{NFSU2_TR(0x6669b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6669b7:{NFSU2_TR(0x6669b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L666a4e;}}
}
B6669bd:L6669bd:{c.instructions+=4;NFSU2_TR(0x6669bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6669c0:{NFSU2_TR(0x6669c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6669c2:{NFSU2_TR(0x6669c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669c3:{NFSU2_TR(0x6669c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6669c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6669c6:L6669c6:{c.instructions+=4;NFSU2_TR(0x6669c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6669c9:{NFSU2_TR(0x6669c9);
__builtin_memmove((R+28),(R+0),4);
}
B6669cb:{NFSU2_TR(0x6669cb);
__builtin_memmove((R+0),(R+4),4);
}
B6669cd:{NFSU2_TR(0x6669cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6669d0:L6669d0:{c.instructions+=1;NFSU2_TR(0x6669d0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6669d2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6669d0u);}goto L6669d0;}
}
B6669d2:L6669d2:{c.instructions+=2;NFSU2_TR(0x6669d2);
__builtin_memmove((R+4),(R+0),4);
}
B6669d4:{NFSU2_TR(0x6669d4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6669d7:L6669d7:{c.instructions+=1;NFSU2_TR(0x6669d7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6669d9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6669d7u);}goto L6669d7;}
}
B6669d9:L6669d9:{c.instructions+=1;NFSU2_TR(0x6669d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6669db:L6669db:{c.instructions+=2;NFSU2_TR(0x6669db);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669dd:{NFSU2_TR(0x6669dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6669e2ull));
TAIL_STATIC(0x575620u,575);
}
B6669e2:L6669e2:{c.instructions+=3;NFSU2_TR(0x6669e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6669e4:{NFSU2_TR(0x6669e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6669e5:{NFSU2_TR(0x6669e5);
if(r1(R+518)){{goto L666a01;}}
}
B6669e7:L6669e7:{c.instructions+=9;NFSU2_TR(0x6669e7);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6669e9:{NFSU2_TR(0x6669e9);
u8 U[4];
w4(U+0,u32(0x65ee33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669ee:{NFSU2_TR(0x6669ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6669ef:{NFSU2_TR(0x6669ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669f0:{NFSU2_TR(0x6669f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6669f3:{NFSU2_TR(0x6669f3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669f5:{NFSU2_TR(0x6669f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6669f6:{NFSU2_TR(0x6669f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6669f8:{NFSU2_TR(0x6669f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6669fdull));
TAIL_STATIC(0x401650u,401);
}
B6669fd:L6669fd:{c.instructions+=2;NFSU2_TR(0x6669fd);
__builtin_memmove((R+0),(R+24),4);
}
B6669ff:{NFSU2_TR(0x6669ff);
{goto L666a03;}
}
B666a01:L666a01:{c.instructions+=1;NFSU2_TR(0x666a01);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B666a03:L666a03:{c.instructions+=2;NFSU2_TR(0x666a03);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666a05:{NFSU2_TR(0x666a05);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666983u);}goto L666983;}}
}
B666a0b:L666a0b:{c.instructions+=15;NFSU2_TR(0x666a0b);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B666a11:{NFSU2_TR(0x666a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666a14:{NFSU2_TR(0x666a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a17:{NFSU2_TR(0x666a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666a1a:{NFSU2_TR(0x666a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a1d:{NFSU2_TR(0x666a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a20:{NFSU2_TR(0x666a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666a23:{NFSU2_TR(0x666a23);
u8 U[4];
w4(U+0,u32(0xbull));
s4(u32(r4(R+12)),r4(U+0));
}
B666a29:{NFSU2_TR(0x666a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a2c:{NFSU2_TR(0x666a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B666a33:{NFSU2_TR(0x666a33);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666a38:{NFSU2_TR(0x666a38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666a3a:{NFSU2_TR(0x666a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a3d:{NFSU2_TR(0x666a3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666a3f:{NFSU2_TR(0x666a3f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666a41:L666a41:{c.instructions+=3;NFSU2_TR(0x666a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666a44:{NFSU2_TR(0x666a44);
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
B666a46:{NFSU2_TR(0x666a46);
if(r1(R+518)){{goto L666a51;}}
}
B666a48:L666a48:{c.instructions+=3;NFSU2_TR(0x666a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666a4a:{NFSU2_TR(0x666a4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a4b:{NFSU2_TR(0x666a4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666a4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B666a4e:L666a4e:{c.instructions+=1;NFSU2_TR(0x666a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a51:L666a51:{c.instructions+=3;NFSU2_TR(0x666a51);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B666a53:{NFSU2_TR(0x666a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666a54:{NFSU2_TR(0x666a54);
if(r1(R+518)){{goto L666a5f;}}
}
B666a56:L666a56:{c.instructions+=3;NFSU2_TR(0x666a56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a58:{NFSU2_TR(0x666a58);
__builtin_memmove((R+4),(R+12),4);
}
B666a5a:{NFSU2_TR(0x666a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666a5full));
TAIL_STATIC(0x66519eu,665);
}
B666a5f:L666a5f:{c.instructions+=5;NFSU2_TR(0x666a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666a62:{NFSU2_TR(0x666a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666a63:{NFSU2_TR(0x666a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666a64:{NFSU2_TR(0x666a64);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666a65:{NFSU2_TR(0x666a65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666a68:L666a68:{c.instructions+=12;NFSU2_TR(0x666a68);
__builtin_memmove((R+28),(R+28),4);
}
B666a6a:{NFSU2_TR(0x666a6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a6b:{NFSU2_TR(0x666a6b);
__builtin_memmove((R+20),(R+16),4);
}
B666a6d:{NFSU2_TR(0x666a6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a6e:{NFSU2_TR(0x666a6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a6f:{NFSU2_TR(0x666a6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a70:{NFSU2_TR(0x666a70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a71:{NFSU2_TR(0x666a71);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666a73:{NFSU2_TR(0x666a73);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666a75:{NFSU2_TR(0x666a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a78:{NFSU2_TR(0x666a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666a7b:{NFSU2_TR(0x666a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666a80ull));
TAIL_STATIC(0x575620u,575);
}
B666a80:L666a80:{c.instructions+=3;NFSU2_TR(0x666a80);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666a82:{NFSU2_TR(0x666a82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666a83:{NFSU2_TR(0x666a83);
if(r1(R+518)){{goto L666a90;}}
}
B666a85:L666a85:{c.instructions+=2;NFSU2_TR(0x666a85);
__builtin_memmove((R+4),(R+0),4);
}
B666a87:{NFSU2_TR(0x666a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666a8cull));
TAIL_STATIC(0x65eb78u,65e);
}
B666a8c:L666a8c:{c.instructions+=2;NFSU2_TR(0x666a8c);
__builtin_memmove((R+24),(R+0),4);
}
B666a8e:{NFSU2_TR(0x666a8e);
{goto L666a92;}
}
B666a90:L666a90:{c.instructions+=1;NFSU2_TR(0x666a90);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B666a92:L666a92:{c.instructions+=2;NFSU2_TR(0x666a92);
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
B666a94:{NFSU2_TR(0x666a94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666a9f;}}
}
B666a96:L666a96:{c.instructions+=2;NFSU2_TR(0x666a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666a9d:{NFSU2_TR(0x666a9d);
{goto L666ad6;}
}
B666a9f:L666a9f:{c.instructions+=3;NFSU2_TR(0x666a9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666aa0:{NFSU2_TR(0x666aa0);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666aa2:{NFSU2_TR(0x666aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666aa7ull));
TAIL_STATIC(0x575620u,575);
}
B666aa7:L666aa7:{c.instructions+=5;NFSU2_TR(0x666aa7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666aa9:{NFSU2_TR(0x666aa9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B666aaa:{NFSU2_TR(0x666aaa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666aac:{NFSU2_TR(0x666aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666aad:{NFSU2_TR(0x666aad);
if(r1(R+518)){{goto L666ac2;}}
}
B666aaf:L666aaf:{c.instructions+=7;NFSU2_TR(0x666aaf);
u8 U[4];
w4(U+0,u32(0x65ee33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666ab4:{NFSU2_TR(0x666ab4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666ab5:{NFSU2_TR(0x666ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666ab8:{NFSU2_TR(0x666ab8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666aba:{NFSU2_TR(0x666aba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666abb:{NFSU2_TR(0x666abb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666abd:{NFSU2_TR(0x666abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666ac2ull));
TAIL_STATIC(0x401650u,401);
}
B666ac2:L666ac2:{c.instructions+=2;NFSU2_TR(0x666ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666ac4:{NFSU2_TR(0x666ac4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666adf;}}
}
B666ac6:L666ac6:{c.instructions+=4;NFSU2_TR(0x666ac6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666ac7:{NFSU2_TR(0x666ac7);
__builtin_memmove((R+4),(R+24),4);
}
B666ac9:{NFSU2_TR(0x666ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666ad0:{NFSU2_TR(0x666ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666ad5ull));
TAIL_STATIC(0x66519eu,665);
}
B666ad5:L666ad5:{c.instructions+=1;NFSU2_TR(0x666ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666ad6:L666ad6:{c.instructions+=5;NFSU2_TR(0x666ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ad9:{NFSU2_TR(0x666ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666ada:{NFSU2_TR(0x666ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666adb:{NFSU2_TR(0x666adb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666adc:{NFSU2_TR(0x666adc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666adf:L666adf:{c.instructions+=3;NFSU2_TR(0x666adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ae2:{NFSU2_TR(0x666ae2);
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
B666ae4:{NFSU2_TR(0x666ae4);
if(r1(R+518)){{goto L666aef;}}
}
B666ae6:L666ae6:{c.instructions+=3;NFSU2_TR(0x666ae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666ae8:{NFSU2_TR(0x666ae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666ae9:{NFSU2_TR(0x666ae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666aecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B666aec:L666aec:{c.instructions+=1;NFSU2_TR(0x666aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666aef:L666aef:{c.instructions+=13;NFSU2_TR(0x666aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666af2:{NFSU2_TR(0x666af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666af5:{NFSU2_TR(0x666af5);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+28)),r4(U+0));
}
B666afb:{NFSU2_TR(0x666afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666afe:{NFSU2_TR(0x666afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666b01:{NFSU2_TR(0x666b01);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+24)),r4(U+0));
}
B666b07:{NFSU2_TR(0x666b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666b0a:{NFSU2_TR(0x666b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666b0d:{NFSU2_TR(0x666b0d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B666b12:{NFSU2_TR(0x666b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666b14:{NFSU2_TR(0x666b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666b17:{NFSU2_TR(0x666b17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666b19:{NFSU2_TR(0x666b19);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666ad5u);}goto L666ad5;}
}
B666b1b:L666b1b:{c.instructions+=12;NFSU2_TR(0x666b1b);
__builtin_memmove((R+28),(R+28),4);
}
B666b1d:{NFSU2_TR(0x666b1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b1e:{NFSU2_TR(0x666b1e);
__builtin_memmove((R+20),(R+16),4);
}
B666b20:{NFSU2_TR(0x666b20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b21:{NFSU2_TR(0x666b21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b22:{NFSU2_TR(0x666b22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b23:{NFSU2_TR(0x666b23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b24:{NFSU2_TR(0x666b24);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666b26:{NFSU2_TR(0x666b26);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b28:{NFSU2_TR(0x666b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666b2b:{NFSU2_TR(0x666b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666b2e:{NFSU2_TR(0x666b2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666b33ull));
TAIL_STATIC(0x575620u,575);
}
B666b33:L666b33:{c.instructions+=3;NFSU2_TR(0x666b33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666b35:{NFSU2_TR(0x666b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666b36:{NFSU2_TR(0x666b36);
if(r1(R+518)){{goto L666b43;}}
}
B666b38:L666b38:{c.instructions+=2;NFSU2_TR(0x666b38);
__builtin_memmove((R+4),(R+0),4);
}
B666b3a:{NFSU2_TR(0x666b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666b3full));
TAIL_STATIC(0x65eb78u,65e);
}
B666b3f:L666b3f:{c.instructions+=2;NFSU2_TR(0x666b3f);
__builtin_memmove((R+24),(R+0),4);
}
B666b41:{NFSU2_TR(0x666b41);
{goto L666b45;}
}
B666b43:L666b43:{c.instructions+=1;NFSU2_TR(0x666b43);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B666b45:L666b45:{c.instructions+=2;NFSU2_TR(0x666b45);
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
B666b47:{NFSU2_TR(0x666b47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666b52;}}
}
B666b49:L666b49:{c.instructions+=2;NFSU2_TR(0x666b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666b50:{NFSU2_TR(0x666b50);
{goto L666b89;}
}
B666b52:L666b52:{c.instructions+=3;NFSU2_TR(0x666b52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b53:{NFSU2_TR(0x666b53);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b55:{NFSU2_TR(0x666b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666b5aull));
TAIL_STATIC(0x575620u,575);
}
B666b5a:L666b5a:{c.instructions+=5;NFSU2_TR(0x666b5a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666b5c:{NFSU2_TR(0x666b5c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B666b5d:{NFSU2_TR(0x666b5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666b5f:{NFSU2_TR(0x666b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666b60:{NFSU2_TR(0x666b60);
if(r1(R+518)){{goto L666b75;}}
}
B666b62:L666b62:{c.instructions+=7;NFSU2_TR(0x666b62);
u8 U[4];
w4(U+0,u32(0x65ee33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b67:{NFSU2_TR(0x666b67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b68:{NFSU2_TR(0x666b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666b6b:{NFSU2_TR(0x666b6b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b6d:{NFSU2_TR(0x666b6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b6e:{NFSU2_TR(0x666b6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666b70:{NFSU2_TR(0x666b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666b75ull));
TAIL_STATIC(0x401650u,401);
}
B666b75:L666b75:{c.instructions+=2;NFSU2_TR(0x666b75);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666b77:{NFSU2_TR(0x666b77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666b92;}}
}
B666b79:L666b79:{c.instructions+=4;NFSU2_TR(0x666b79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b7a:{NFSU2_TR(0x666b7a);
__builtin_memmove((R+4),(R+24),4);
}
B666b7c:{NFSU2_TR(0x666b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666b83:{NFSU2_TR(0x666b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666b88ull));
TAIL_STATIC(0x66519eu,665);
}
B666b88:L666b88:{c.instructions+=1;NFSU2_TR(0x666b88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666b89:L666b89:{c.instructions+=5;NFSU2_TR(0x666b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666b8c:{NFSU2_TR(0x666b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666b8d:{NFSU2_TR(0x666b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666b8e:{NFSU2_TR(0x666b8e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666b8f:{NFSU2_TR(0x666b8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666b92:L666b92:{c.instructions+=3;NFSU2_TR(0x666b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666b95:{NFSU2_TR(0x666b95);
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
B666b97:{NFSU2_TR(0x666b97);
if(r1(R+518)){{goto L666ba2;}}
}
B666b99:L666b99:{c.instructions+=3;NFSU2_TR(0x666b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666b9b:{NFSU2_TR(0x666b9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666b9c:{NFSU2_TR(0x666b9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666b9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B666b9f:L666b9f:{c.instructions+=1;NFSU2_TR(0x666b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ba2:L666ba2:{c.instructions+=13;NFSU2_TR(0x666ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666ba5:{NFSU2_TR(0x666ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ba8:{NFSU2_TR(0x666ba8);
u8 U[4];
w4(U+0,u32(0xfull));
s4(u32(r4(R+28)),r4(U+0));
}
B666bae:{NFSU2_TR(0x666bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666bb1:{NFSU2_TR(0x666bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666bb4:{NFSU2_TR(0x666bb4);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+24)),r4(U+0));
}
B666bba:{NFSU2_TR(0x666bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666bbd:{NFSU2_TR(0x666bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666bc0:{NFSU2_TR(0x666bc0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B666bc5:{NFSU2_TR(0x666bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666bc7:{NFSU2_TR(0x666bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666bca:{NFSU2_TR(0x666bca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666bcc:{NFSU2_TR(0x666bcc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666b88u);}goto L666b88;}
}
B666bce:L666bce:{c.instructions+=12;NFSU2_TR(0x666bce);
__builtin_memmove((R+28),(R+28),4);
}
B666bd0:{NFSU2_TR(0x666bd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666bd1:{NFSU2_TR(0x666bd1);
__builtin_memmove((R+20),(R+16),4);
}
B666bd3:{NFSU2_TR(0x666bd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666bd4:{NFSU2_TR(0x666bd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666bd5:{NFSU2_TR(0x666bd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666bd6:{NFSU2_TR(0x666bd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666bd7:{NFSU2_TR(0x666bd7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666bd9:{NFSU2_TR(0x666bd9);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666bdb:{NFSU2_TR(0x666bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666bde:{NFSU2_TR(0x666bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666be1:{NFSU2_TR(0x666be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666be6ull));
TAIL_STATIC(0x575620u,575);
}
B666be6:L666be6:{c.instructions+=3;NFSU2_TR(0x666be6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666be8:{NFSU2_TR(0x666be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666be9:{NFSU2_TR(0x666be9);
if(r1(R+518)){{goto L666bf6;}}
}
B666beb:L666beb:{c.instructions+=2;NFSU2_TR(0x666beb);
__builtin_memmove((R+4),(R+0),4);
}
B666bed:{NFSU2_TR(0x666bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666bf2ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666bf2:L666bf2:{c.instructions+=2;NFSU2_TR(0x666bf2);
__builtin_memmove((R+24),(R+0),4);
}
B666bf4:{NFSU2_TR(0x666bf4);
{goto L666bf8;}
}
B666bf6:L666bf6:{c.instructions+=1;NFSU2_TR(0x666bf6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B666bf8:L666bf8:{c.instructions+=2;NFSU2_TR(0x666bf8);
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
B666bfa:{NFSU2_TR(0x666bfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666c05;}}
}
B666bfc:L666bfc:{c.instructions+=2;NFSU2_TR(0x666bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666c03:{NFSU2_TR(0x666c03);
{goto L666c3c;}
}
B666c05:L666c05:{c.instructions+=3;NFSU2_TR(0x666c05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c06:{NFSU2_TR(0x666c06);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c08:{NFSU2_TR(0x666c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666c0dull));
TAIL_STATIC(0x575620u,575);
}
B666c0d:L666c0d:{c.instructions+=5;NFSU2_TR(0x666c0d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666c0f:{NFSU2_TR(0x666c0f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B666c10:{NFSU2_TR(0x666c10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666c12:{NFSU2_TR(0x666c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666c13:{NFSU2_TR(0x666c13);
if(r1(R+518)){{goto L666c28;}}
}
B666c15:L666c15:{c.instructions+=7;NFSU2_TR(0x666c15);
u8 U[4];
w4(U+0,u32(0x65ee33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c1a:{NFSU2_TR(0x666c1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c1b:{NFSU2_TR(0x666c1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666c1e:{NFSU2_TR(0x666c1e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c20:{NFSU2_TR(0x666c20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c21:{NFSU2_TR(0x666c21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666c23:{NFSU2_TR(0x666c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666c28ull));
TAIL_STATIC(0x401650u,401);
}
B666c28:L666c28:{c.instructions+=2;NFSU2_TR(0x666c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B666c2a:{NFSU2_TR(0x666c2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666c45;}}
}
B666c2c:L666c2c:{c.instructions+=4;NFSU2_TR(0x666c2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c2d:{NFSU2_TR(0x666c2d);
__builtin_memmove((R+4),(R+24),4);
}
B666c2f:{NFSU2_TR(0x666c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666c36:{NFSU2_TR(0x666c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666c3bull));
TAIL_STATIC(0x66519eu,665);
}
B666c3b:L666c3b:{c.instructions+=1;NFSU2_TR(0x666c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666c3c:L666c3c:{c.instructions+=5;NFSU2_TR(0x666c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666c3f:{NFSU2_TR(0x666c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666c40:{NFSU2_TR(0x666c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666c41:{NFSU2_TR(0x666c41);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666c42:{NFSU2_TR(0x666c42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666c45:L666c45:{c.instructions+=3;NFSU2_TR(0x666c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666c48:{NFSU2_TR(0x666c48);
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
B666c4a:{NFSU2_TR(0x666c4a);
if(r1(R+518)){{goto L666c55;}}
}
B666c4c:L666c4c:{c.instructions+=3;NFSU2_TR(0x666c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666c4e:{NFSU2_TR(0x666c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c4f:{NFSU2_TR(0x666c4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666c52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B666c52:L666c52:{c.instructions+=1;NFSU2_TR(0x666c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666c55:L666c55:{c.instructions+=13;NFSU2_TR(0x666c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c58:{NFSU2_TR(0x666c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666c5b:{NFSU2_TR(0x666c5b);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+28)),r4(U+0));
}
B666c61:{NFSU2_TR(0x666c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c64:{NFSU2_TR(0x666c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666c67:{NFSU2_TR(0x666c67);
u8 U[4];
w4(U+0,u32(0xeull));
s4(u32(r4(R+24)),r4(U+0));
}
B666c6d:{NFSU2_TR(0x666c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c70:{NFSU2_TR(0x666c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c73:{NFSU2_TR(0x666c73);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B666c78:{NFSU2_TR(0x666c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666c7a:{NFSU2_TR(0x666c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c7d:{NFSU2_TR(0x666c7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666c7f:{NFSU2_TR(0x666c7f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666c3bu);}goto L666c3b;}
}
B666c81:L666c81:{c.instructions+=12;NFSU2_TR(0x666c81);
__builtin_memmove((R+28),(R+28),4);
}
B666c83:{NFSU2_TR(0x666c83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c84:{NFSU2_TR(0x666c84);
__builtin_memmove((R+20),(R+16),4);
}
B666c86:{NFSU2_TR(0x666c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B666c89:{NFSU2_TR(0x666c89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c8a:{NFSU2_TR(0x666c8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c8b:{NFSU2_TR(0x666c8b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666c8d:{NFSU2_TR(0x666c8d);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666c8f:{NFSU2_TR(0x666c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c92:{NFSU2_TR(0x666c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c95:{NFSU2_TR(0x666c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666c98:{NFSU2_TR(0x666c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666c9dull));
TAIL_STATIC(0x575620u,575);
}
B666c9d:L666c9d:{c.instructions+=3;NFSU2_TR(0x666c9d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666c9f:{NFSU2_TR(0x666c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666ca0:{NFSU2_TR(0x666ca0);
if(r1(R+518)){{goto L666cad;}}
}
B666ca2:L666ca2:{c.instructions+=2;NFSU2_TR(0x666ca2);
__builtin_memmove((R+4),(R+0),4);
}
B666ca4:{NFSU2_TR(0x666ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666ca9ull));
TAIL_STATIC(0x65eb78u,65e);
}
B666ca9:L666ca9:{c.instructions+=2;NFSU2_TR(0x666ca9);
__builtin_memmove((R+12),(R+0),4);
}
B666cab:{NFSU2_TR(0x666cab);
{goto L666caf;}
}
B666cad:L666cad:{c.instructions+=1;NFSU2_TR(0x666cad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666caf:L666caf:{c.instructions+=2;NFSU2_TR(0x666caf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B666cb1:{NFSU2_TR(0x666cb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666cbf;}}
}
B666cb3:L666cb3:{c.instructions+=2;NFSU2_TR(0x666cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666cba:{NFSU2_TR(0x666cba);
{goto L666dee;}
}
B666cbf:L666cbf:{c.instructions+=3;NFSU2_TR(0x666cbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666cc2:{NFSU2_TR(0x666cc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666cc3:{NFSU2_TR(0x666cc3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666cf9;}}
}
B666cc5:L666cc5:{c.instructions+=2;NFSU2_TR(0x666cc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666cc8:{NFSU2_TR(0x666cc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666ccdull));
TAIL_STATIC(0x575620u,575);
}
B666ccd:L666ccd:{c.instructions+=4;NFSU2_TR(0x666ccd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666ccf:{NFSU2_TR(0x666ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666cd0:{NFSU2_TR(0x666cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666cd3:{NFSU2_TR(0x666cd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666ce1;}}
}
B666cd5:L666cd5:{c.instructions+=2;NFSU2_TR(0x666cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B666cdc:{NFSU2_TR(0x666cdc);
{goto L666dc4;}
}
B666ce1:L666ce1:{c.instructions+=5;NFSU2_TR(0x666ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666ce4:{NFSU2_TR(0x666ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666ce7:{NFSU2_TR(0x666ce7);
__builtin_memmove((R+28),(R+0),4);
}
B666ce9:{NFSU2_TR(0x666ce9);
__builtin_memmove((R+0),(R+4),4);
}
B666ceb:{NFSU2_TR(0x666ceb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B666cee:L666cee:{c.instructions+=1;NFSU2_TR(0x666cee);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L666cf0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666ceeu);}goto L666cee;}
}
B666cf0:L666cf0:{c.instructions+=2;NFSU2_TR(0x666cf0);
__builtin_memmove((R+4),(R+0),4);
}
B666cf2:{NFSU2_TR(0x666cf2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B666cf5:L666cf5:{c.instructions+=1;NFSU2_TR(0x666cf5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L666cf7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666cf5u);}goto L666cf5;}
}
B666cf7:L666cf7:{c.instructions+=1;NFSU2_TR(0x666cf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B666cf9:L666cf9:{c.instructions+=15;NFSU2_TR(0x666cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666cfc:{NFSU2_TR(0x666cfc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B666cfe:{NFSU2_TR(0x666cfe);
w4(R+24,u32(~u32(r4(R+24))));
}
B666d00:{NFSU2_TR(0x666d00);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666d04:{NFSU2_TR(0x666d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666d07:{NFSU2_TR(0x666d07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B666d0a:{NFSU2_TR(0x666d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d0d:{NFSU2_TR(0x666d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d10:{NFSU2_TR(0x666d10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d11:{NFSU2_TR(0x666d11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666d14:{NFSU2_TR(0x666d14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d15:{NFSU2_TR(0x666d15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d16:{NFSU2_TR(0x666d16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666d19:{NFSU2_TR(0x666d19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d1a:{NFSU2_TR(0x666d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666d1full));
TAIL_STATIC(0x65ee13u,65e);
}
B666d1f:L666d1f:{c.instructions+=3;NFSU2_TR(0x666d1f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B666d21:{NFSU2_TR(0x666d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d24:{NFSU2_TR(0x666d24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L666dc4;}}
}
B666d2a:L666d2a:{c.instructions+=5;NFSU2_TR(0x666d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666d2d:{NFSU2_TR(0x666d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d30:{NFSU2_TR(0x666d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B666d37:{NFSU2_TR(0x666d37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d38:{NFSU2_TR(0x666d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666d3dull));
TAIL_STATIC(0x575620u,575);
}
B666d3d:L666d3d:{c.instructions+=3;NFSU2_TR(0x666d3d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666d3f:{NFSU2_TR(0x666d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666d40:{NFSU2_TR(0x666d40);
if(r1(R+518)){{goto L666d63;}}
}
B666d42:L666d42:{c.instructions+=9;NFSU2_TR(0x666d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666d45:{NFSU2_TR(0x666d45);
u8 U[4];
w4(U+0,u32(0x65ee33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d4a:{NFSU2_TR(0x666d4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d4b:{NFSU2_TR(0x666d4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666d4d:{NFSU2_TR(0x666d4d);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B666d50:{NFSU2_TR(0x666d50);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d52:{NFSU2_TR(0x666d52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d53:{NFSU2_TR(0x666d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d56:{NFSU2_TR(0x666d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666d5bull));
TAIL_STATIC(0x401650u,401);
}
B666d5b:L666d5b:{c.instructions+=3;NFSU2_TR(0x666d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666d5e:{NFSU2_TR(0x666d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d61:{NFSU2_TR(0x666d61);
{goto L666d66;}
}
B666d63:L666d63:{c.instructions+=1;NFSU2_TR(0x666d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d66:L666d66:{c.instructions+=2;NFSU2_TR(0x666d66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666d69:{NFSU2_TR(0x666d69);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666cd5u);}goto L666cd5;}}
}
B666d6f:L666d6f:{c.instructions+=10;NFSU2_TR(0x666d6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B666d71:{NFSU2_TR(0x666d71);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666d75:{NFSU2_TR(0x666d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666d78:{NFSU2_TR(0x666d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B666d7b:{NFSU2_TR(0x666d7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d7c:{NFSU2_TR(0x666d7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d7d:{NFSU2_TR(0x666d7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666d80:{NFSU2_TR(0x666d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666d81:{NFSU2_TR(0x666d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666d84:{NFSU2_TR(0x666d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666d89ull));
TAIL_STATIC(0x65ee13u,65e);
}
B666d89:L666d89:{c.instructions+=3;NFSU2_TR(0x666d89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B666d8b:{NFSU2_TR(0x666d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d8e:{NFSU2_TR(0x666d8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L666dc4;}}
}
B666d90:L666d90:{c.instructions+=18;NFSU2_TR(0x666d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666d93:{NFSU2_TR(0x666d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d96:{NFSU2_TR(0x666d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666d99:{NFSU2_TR(0x666d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666d9c:{NFSU2_TR(0x666d9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B666d9e:{NFSU2_TR(0x666d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666da1:{NFSU2_TR(0x666da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666da4:{NFSU2_TR(0x666da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666da7:{NFSU2_TR(0x666da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666daa:{NFSU2_TR(0x666daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666dad:{NFSU2_TR(0x666dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666db0:{NFSU2_TR(0x666db0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B666db5:{NFSU2_TR(0x666db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B666db7:{NFSU2_TR(0x666db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666dba:{NFSU2_TR(0x666dba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B666dbc:{NFSU2_TR(0x666dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666dbf:{NFSU2_TR(0x666dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666dc2:{NFSU2_TR(0x666dc2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B666dc4:L666dc4:{c.instructions+=3;NFSU2_TR(0x666dc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666dc7:{NFSU2_TR(0x666dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B666dc8:{NFSU2_TR(0x666dc8);
if(r1(R+518)){{goto L666dd3;}}
}
B666dca:L666dca:{c.instructions+=2;NFSU2_TR(0x666dca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666dcd:{NFSU2_TR(0x666dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666dd2ull));
TAIL_STATIC(0x575630u,575);
}
B666dd2:L666dd2:{c.instructions+=1;NFSU2_TR(0x666dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B666dd3:L666dd3:{c.instructions+=3;NFSU2_TR(0x666dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666dd6:{NFSU2_TR(0x666dd6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B666dd8:{NFSU2_TR(0x666dd8);
if(r1(R+518)){{goto L666de1;}}
}
B666dda:L666dda:{c.instructions+=2;NFSU2_TR(0x666dda);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666ddc:{NFSU2_TR(0x666ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666de1ull));
TAIL_STATIC(0x66238cu,662);
}
B666de1:L666de1:{c.instructions+=2;NFSU2_TR(0x666de1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B666de3:{NFSU2_TR(0x666de3);
if(r1(R+518)){{goto L666dee;}}
}
B666de5:L666de5:{c.instructions+=3;NFSU2_TR(0x666de5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666de7:{NFSU2_TR(0x666de7);
__builtin_memmove((R+4),(R+12),4);
}
B666de9:{NFSU2_TR(0x666de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666deeull));
TAIL_STATIC(0x66519eu,665);
}
B666dee:L666dee:{c.instructions+=5;NFSU2_TR(0x666dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666df1:{NFSU2_TR(0x666df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B666df2:{NFSU2_TR(0x666df2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B666df3:{NFSU2_TR(0x666df3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B666df4:{NFSU2_TR(0x666df4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B666df7:L666df7:{c.instructions+=22;NFSU2_TR(0x666df7);
__builtin_memmove((R+28),(R+28),4);
}
B666df9:{NFSU2_TR(0x666df9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666dfa:{NFSU2_TR(0x666dfa);
__builtin_memmove((R+20),(R+16),4);
}
B666dfc:{NFSU2_TR(0x666dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B666e02:{NFSU2_TR(0x666e02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666e03:{NFSU2_TR(0x666e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B666e06:{NFSU2_TR(0x666e06);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B666e09:{NFSU2_TR(0x666e09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666e0a:{NFSU2_TR(0x666e0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666e0b:{NFSU2_TR(0x666e0b);
__builtin_memmove((R+28),(R+4),4);
}
B666e0d:{NFSU2_TR(0x666e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B666e10:{NFSU2_TR(0x666e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e16:{NFSU2_TR(0x666e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666e19:{NFSU2_TR(0x666e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666e1c:{NFSU2_TR(0x666e1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666e1f:{NFSU2_TR(0x666e1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B666e22:{NFSU2_TR(0x666e22);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B666e24:{NFSU2_TR(0x666e24);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666e27:{NFSU2_TR(0x666e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e2a:{NFSU2_TR(0x666e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e2d:{NFSU2_TR(0x666e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e30:{NFSU2_TR(0x666e30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666e37;}}
}
B666e32:L666e32:{c.instructions+=2;NFSU2_TR(0x666e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e35:{NFSU2_TR(0x666e35);
{goto L666e3d;}
}
B666e37:L666e37:{c.instructions+=2;NFSU2_TR(0x666e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e3a:{NFSU2_TR(0x666e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e3d:L666e3d:{c.instructions+=14;NFSU2_TR(0x666e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e40:{NFSU2_TR(0x666e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e46:{NFSU2_TR(0x666e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B666e49:{NFSU2_TR(0x666e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666e4c:{NFSU2_TR(0x666e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B666e4f:{NFSU2_TR(0x666e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B666e52:{NFSU2_TR(0x666e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e55:{NFSU2_TR(0x666e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666e58:{NFSU2_TR(0x666e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666e5b:{NFSU2_TR(0x666e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e61:{NFSU2_TR(0x666e61);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666e64:{NFSU2_TR(0x666e64);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B666e67:{NFSU2_TR(0x666e67);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666e6a:{NFSU2_TR(0x666e6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666e71;}}
}
B666e6c:L666e6c:{c.instructions+=2;NFSU2_TR(0x666e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e6f:{NFSU2_TR(0x666e6f);
{goto L666e77;}
}
B666e71:L666e71:{c.instructions+=2;NFSU2_TR(0x666e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e74:{NFSU2_TR(0x666e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e77:L666e77:{c.instructions+=16;NFSU2_TR(0x666e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e7a:{NFSU2_TR(0x666e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e80:{NFSU2_TR(0x666e80);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B666e83:{NFSU2_TR(0x666e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666e86:{NFSU2_TR(0x666e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B666e89:{NFSU2_TR(0x666e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B666e8c:{NFSU2_TR(0x666e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666e8f:{NFSU2_TR(0x666e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666e92:{NFSU2_TR(0x666e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666e95:{NFSU2_TR(0x666e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666e9b:{NFSU2_TR(0x666e9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B666e9e:{NFSU2_TR(0x666e9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B666ea1:{NFSU2_TR(0x666ea1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666ea4:{NFSU2_TR(0x666ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666eaa:{NFSU2_TR(0x666eaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B666ead:{NFSU2_TR(0x666ead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666eca;}}
}
B666eaf:L666eaf:{c.instructions+=2;NFSU2_TR(0x666eaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666eb2:{NFSU2_TR(0x666eb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666eb9;}}
}
B666eb4:L666eb4:{c.instructions+=2;NFSU2_TR(0x666eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666eb7:{NFSU2_TR(0x666eb7);
{goto L666ebf;}
}
B666eb9:L666eb9:{c.instructions+=2;NFSU2_TR(0x666eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666ebc:{NFSU2_TR(0x666ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666ebf:L666ebf:{c.instructions+=4;NFSU2_TR(0x666ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ec2:{NFSU2_TR(0x666ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B666ec5:{NFSU2_TR(0x666ec5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B666ec8:{NFSU2_TR(0x666ec8);
{goto L666efe;}
}
B666eca:L666eca:{c.instructions+=2;NFSU2_TR(0x666eca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666ecd:{NFSU2_TR(0x666ecd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666ed4;}}
}
B666ecf:L666ecf:{c.instructions+=2;NFSU2_TR(0x666ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ed2:{NFSU2_TR(0x666ed2);
{goto L666eda;}
}
B666ed4:L666ed4:{c.instructions+=2;NFSU2_TR(0x666ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ed7:{NFSU2_TR(0x666ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666eda:L666eda:{c.instructions+=11;NFSU2_TR(0x666eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666ee0:{NFSU2_TR(0x666ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666ee3:{NFSU2_TR(0x666ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ee6:{NFSU2_TR(0x666ee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B666ee9:{NFSU2_TR(0x666ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666eec:{NFSU2_TR(0x666eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B666eef:{NFSU2_TR(0x666eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666ef2:{NFSU2_TR(0x666ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B666ef5:{NFSU2_TR(0x666ef5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B666ef8:{NFSU2_TR(0x666ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666efb:{NFSU2_TR(0x666efb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B666efe:L666efe:{c.instructions+=8;NFSU2_TR(0x666efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666f01:{NFSU2_TR(0x666f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B666f04:{NFSU2_TR(0x666f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B666f07:{NFSU2_TR(0x666f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666f0a:{NFSU2_TR(0x666f0a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B666f0c:{NFSU2_TR(0x666f0c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B666f0d:{NFSU2_TR(0x666f0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B666f0f:{NFSU2_TR(0x666f0f);
if(r1(R+518)){TAIL_STATIC(0x667c93u,667);}
}
B666f15:L666f15:{c.instructions+=2;NFSU2_TR(0x666f15);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B666f18:{NFSU2_TR(0x666f18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L666f25;}}
}
B666f1a:L666f1a:{c.instructions+=4;NFSU2_TR(0x666f1a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B666f1d:{NFSU2_TR(0x666f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666f20:{NFSU2_TR(0x666f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666f23:{NFSU2_TR(0x666f23);
{goto L666f3d;}
}
B666f25:L666f25:{c.instructions+=3;NFSU2_TR(0x666f25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666f26:{NFSU2_TR(0x666f26);
__builtin_memmove((R+4),(R+28),4);
}
B666f28:{NFSU2_TR(0x666f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666f2dull));
TAIL_STATIC(0x661221u,661);
}
B666f2d:L666f2d:{c.instructions+=3;NFSU2_TR(0x666f2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B666f2f:{NFSU2_TR(0x666f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666f32:{NFSU2_TR(0x666f32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x667d3eu,667);}
}
B666f38:L666f38:{c.instructions+=3;NFSU2_TR(0x666f38);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B666f3a:{NFSU2_TR(0x666f3a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B666f3c:{NFSU2_TR(0x666f3c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B666f3d:L666f3d:{c.instructions+=4;NFSU2_TR(0x666f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666f41:{NFSU2_TR(0x666f41);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B666f45:{NFSU2_TR(0x666f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666f48:{NFSU2_TR(0x666f48);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666ffb;}}
}
B666f4e:L666f4e:{c.instructions+=1;NFSU2_TR(0x666f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B666f55:L666f55:{c.instructions+=6;NFSU2_TR(0x666f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666f58:{NFSU2_TR(0x666f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B666f5b:{NFSU2_TR(0x666f5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B666f5f:{NFSU2_TR(0x666f5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xb4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B666f64:{NFSU2_TR(0x666f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666f67:{NFSU2_TR(0x666f67);
if(r1(R+518)){{goto L666f92;}}
}
B666f69:L666f69:{c.instructions+=2;NFSU2_TR(0x666f69);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xb5ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B666f6e:{NFSU2_TR(0x666f6e);
if(r1(R+518)){{goto L666f92;}}
}
B666f70:L666f70:{c.instructions+=2;NFSU2_TR(0x666f70);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B666f74:{NFSU2_TR(0x666f74);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666fe0;}}
}
B666f76:L666f76:{c.instructions+=5;NFSU2_TR(0x666f76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666f78:{NFSU2_TR(0x666f78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666f7b:{NFSU2_TR(0x666f7b);
__builtin_memmove((R+4),(R+28),4);
}
B666f7d:{NFSU2_TR(0x666f7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666f80:{NFSU2_TR(0x666f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666f85ull));
TAIL_STATIC(0x6611a2u,661);
}
B666f85:L666f85:{c.instructions+=3;NFSU2_TR(0x666f85);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B666f87:{NFSU2_TR(0x666f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666f8a:{NFSU2_TR(0x666f8a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x667d3eu,667);}
}
B666f90:L666f90:{c.instructions+=1;NFSU2_TR(0x666f90);
{goto L666fdb;}
}
B666f92:L666f92:{c.instructions+=3;NFSU2_TR(0x666f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B666f95:{NFSU2_TR(0x666f95);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B666f97:{NFSU2_TR(0x666f97);
if(r1(R+518)){{goto L666fa8;}}
}
B666f99:L666f99:{c.instructions+=3;NFSU2_TR(0x666f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B666f9b:{NFSU2_TR(0x666f9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B666f9c:{NFSU2_TR(0x666f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666f9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B666f9f:L666f9f:{c.instructions+=3;NFSU2_TR(0x666f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666fa2:{NFSU2_TR(0x666fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666fa6:{NFSU2_TR(0x666fa6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B666fa8:L666fa8:{c.instructions+=3;NFSU2_TR(0x666fa8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B666fac:{NFSU2_TR(0x666fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666faf:{NFSU2_TR(0x666faf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L666fe0;}}
}
B666fb1:L666fb1:{c.instructions+=5;NFSU2_TR(0x666fb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666fb4:{NFSU2_TR(0x666fb4);
__builtin_memmove((R+4),(R+28),4);
}
B666fb6:{NFSU2_TR(0x666fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666fb9:{NFSU2_TR(0x666fb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B666fbc:{NFSU2_TR(0x666fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x666fc1ull));
TAIL_STATIC(0x6611a2u,661);
}
B666fc1:L666fc1:{c.instructions+=3;NFSU2_TR(0x666fc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B666fc3:{NFSU2_TR(0x666fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B666fc6:{NFSU2_TR(0x666fc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x667d3eu,667);}
}
B666fcc:L666fcc:{c.instructions+=5;NFSU2_TR(0x666fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666fcf:{NFSU2_TR(0x666fcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B666fd3:{NFSU2_TR(0x666fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666fd6:{NFSU2_TR(0x666fd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B666fd9:{NFSU2_TR(0x666fd9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666fb1u);}goto L666fb1;}}
}
B666fdb:L666fdb:{c.instructions+=2;NFSU2_TR(0x666fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B666fde:{NFSU2_TR(0x666fde);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B666fe0:L666fe0:{c.instructions+=6;NFSU2_TR(0x666fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666fe3:{NFSU2_TR(0x666fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x64ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B666fe7:{NFSU2_TR(0x666fe7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B666feb:{NFSU2_TR(0x666feb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B666fef:{NFSU2_TR(0x666fef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B666ff2:{NFSU2_TR(0x666ff2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x666f55u);}goto L666f55;}}
}
B666ff8:L666ff8:{c.instructions+=2;NFSU2_TR(0x666ff8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B666ffa:{NFSU2_TR(0x666ffa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B666ffb:L666ffb:{c.instructions+=2;NFSU2_TR(0x666ffb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B666ffd:{NFSU2_TR(0x666ffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
TAIL_STATIC(0x667000u,667);
}
XIT:NFSU2_TR_EXIT(0x666,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
