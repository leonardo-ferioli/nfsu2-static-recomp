#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_762(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x761,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x761,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_761(u8* __restrict R,Cpu& c);
u32 page_761(Cpu& c){return body_761(c.regs.data(),c);}
__attribute__((noinline)) u32 body_761(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x761000:goto L761000;
case 0x761002:goto L761002;
case 0x761003:goto L761003;
case 0x761005:goto L761005;
case 0x761006:c.instructions+=1;goto B761006;
case 0x761010:goto L761010;
case 0x761013:c.instructions+=9;goto B761013;
case 0x761015:c.instructions+=8;goto B761015;
case 0x761018:c.instructions+=7;goto B761018;
case 0x76101b:c.instructions+=6;goto B76101b;
case 0x76101e:c.instructions+=5;goto B76101e;
case 0x761021:c.instructions+=4;goto B761021;
case 0x761024:c.instructions+=3;goto B761024;
case 0x761027:c.instructions+=2;goto B761027;
case 0x76102a:c.instructions+=1;goto B76102a;
case 0x76102c:goto L76102c;
case 0x76102d:goto L76102d;
case 0x76102f:goto L76102f;
case 0x761030:c.instructions+=1;goto B761030;
case 0x761038:goto L761038;
case 0x76103b:c.instructions+=11;goto B76103b;
case 0x76103d:c.instructions+=10;goto B76103d;
case 0x761040:c.instructions+=9;goto B761040;
case 0x761043:c.instructions+=8;goto B761043;
case 0x761046:c.instructions+=7;goto B761046;
case 0x761049:c.instructions+=6;goto B761049;
case 0x76104c:c.instructions+=5;goto B76104c;
case 0x76104f:c.instructions+=4;goto B76104f;
case 0x761052:c.instructions+=3;goto B761052;
case 0x761055:c.instructions+=2;goto B761055;
case 0x761058:c.instructions+=1;goto B761058;
case 0x76105e:goto L76105e;
case 0x76105f:goto L76105f;
case 0x761061:goto L761061;
case 0x761062:c.instructions+=1;goto B761062;
case 0x76108c:goto L76108c;
case 0x761090:c.instructions+=17;goto B761090;
case 0x761094:c.instructions+=16;goto B761094;
case 0x761098:c.instructions+=15;goto B761098;
case 0x76109c:c.instructions+=14;goto B76109c;
case 0x7610a0:c.instructions+=13;goto B7610a0;
case 0x7610a4:c.instructions+=12;goto B7610a4;
case 0x7610a8:c.instructions+=11;goto B7610a8;
case 0x7610ac:c.instructions+=10;goto B7610ac;
case 0x7610b0:c.instructions+=9;goto B7610b0;
case 0x7610b4:c.instructions+=8;goto B7610b4;
case 0x7610b8:c.instructions+=7;goto B7610b8;
case 0x7610bc:c.instructions+=6;goto B7610bc;
case 0x7610c0:c.instructions+=5;goto B7610c0;
case 0x7610c4:c.instructions+=4;goto B7610c4;
case 0x7610cb:c.instructions+=3;goto B7610cb;
case 0x7610cd:c.instructions+=2;goto B7610cd;
case 0x7610cf:c.instructions+=1;goto B7610cf;
case 0x7610e8:goto L7610e8;
case 0x7610eb:c.instructions+=4;goto B7610eb;
case 0x7610ec:c.instructions+=3;goto B7610ec;
case 0x7610ed:c.instructions+=2;goto B7610ed;
case 0x7610ee:c.instructions+=1;goto B7610ee;
case 0x7610f0:goto L7610f0;
case 0x7610f3:c.instructions+=6;goto B7610f3;
case 0x7610f6:c.instructions+=5;goto B7610f6;
case 0x7610f9:c.instructions+=4;goto B7610f9;
case 0x7610fa:c.instructions+=3;goto B7610fa;
case 0x7610fb:c.instructions+=2;goto B7610fb;
case 0x7610fc:c.instructions+=1;goto B7610fc;
case 0x761100:goto L761100;
case 0x761103:c.instructions+=8;goto B761103;
case 0x761106:c.instructions+=7;goto B761106;
case 0x761109:c.instructions+=6;goto B761109;
case 0x76110c:c.instructions+=5;goto B76110c;
case 0x76110f:c.instructions+=4;goto B76110f;
case 0x761110:c.instructions+=3;goto B761110;
case 0x761111:c.instructions+=2;goto B761111;
case 0x761112:c.instructions+=1;goto B761112;
case 0x761114:goto L761114;
case 0x761117:c.instructions+=10;goto B761117;
case 0x76111a:c.instructions+=9;goto B76111a;
case 0x76111d:c.instructions+=8;goto B76111d;
case 0x761120:c.instructions+=7;goto B761120;
case 0x761123:c.instructions+=6;goto B761123;
case 0x761126:c.instructions+=5;goto B761126;
case 0x761129:c.instructions+=4;goto B761129;
case 0x76112a:c.instructions+=3;goto B76112a;
case 0x76112b:c.instructions+=2;goto B76112b;
case 0x76112c:c.instructions+=1;goto B76112c;
case 0x76112d:goto L76112d;
case 0x76112f:c.instructions+=2;goto B76112f;
case 0x761134:c.instructions+=1;goto B761134;
case 0x761139:goto L761139;
case 0x76113d:c.instructions+=3;goto B76113d;
case 0x76113f:c.instructions+=2;goto B76113f;
case 0x761141:c.instructions+=1;goto B761141;
case 0x761146:goto L761146;
case 0x761147:c.instructions+=2;goto B761147;
case 0x761148:c.instructions+=1;goto B761148;
case 0x76114a:goto L76114a;
case 0x76114c:c.instructions+=2;goto B76114c;
case 0x76114d:c.instructions+=1;goto B76114d;
case 0x761151:goto L761151;
case 0x761155:c.instructions+=2;goto B761155;
case 0x761157:c.instructions+=1;goto B761157;
case 0x76115e:goto L76115e;
case 0x761164:c.instructions+=1;goto B761164;
case 0x761166:goto L761166;
case 0x761167:goto L761167;
case 0x76116c:goto L76116c;
case 0x76116d:c.instructions+=8;goto B76116d;
case 0x76116f:c.instructions+=7;goto B76116f;
case 0x761170:c.instructions+=6;goto B761170;
case 0x761171:c.instructions+=5;goto B761171;
case 0x761172:c.instructions+=4;goto B761172;
case 0x761174:c.instructions+=3;goto B761174;
case 0x761177:c.instructions+=2;goto B761177;
case 0x76117a:c.instructions+=1;goto B76117a;
case 0x76117c:goto L76117c;
case 0x761181:c.instructions+=2;goto B761181;
case 0x761183:c.instructions+=1;goto B761183;
case 0x761185:goto L761185;
case 0x761188:c.instructions+=2;goto B761188;
case 0x76118a:c.instructions+=1;goto B76118a;
case 0x76118c:goto L76118c;
case 0x76118f:c.instructions+=1;goto B76118f;
case 0x761191:goto L761191;
case 0x761192:c.instructions+=9;goto B761192;
case 0x761194:c.instructions+=8;goto B761194;
case 0x761195:c.instructions+=7;goto B761195;
case 0x761196:c.instructions+=6;goto B761196;
case 0x761198:c.instructions+=5;goto B761198;
case 0x761199:c.instructions+=4;goto B761199;
case 0x76119b:c.instructions+=3;goto B76119b;
case 0x76119d:c.instructions+=2;goto B76119d;
case 0x7611a0:c.instructions+=1;goto B7611a0;
case 0x7611a2:goto L7611a2;
case 0x7611a5:c.instructions+=2;goto B7611a5;
case 0x7611a8:c.instructions+=1;goto B7611a8;
case 0x7611a9:goto L7611a9;
case 0x7611ac:c.instructions+=1;goto B7611ac;
case 0x7611ae:goto L7611ae;
case 0x7611b0:c.instructions+=1;goto B7611b0;
case 0x7611b2:goto L7611b2;
case 0x7611b5:c.instructions+=3;goto B7611b5;
case 0x7611b8:c.instructions+=2;goto B7611b8;
case 0x7611bf:c.instructions+=1;goto B7611bf;
case 0x7611c1:goto L7611c1;
case 0x7611c4:c.instructions+=1;goto B7611c4;
case 0x7611c6:goto L7611c6;
case 0x7611c7:goto L7611c7;
case 0x7611ca:c.instructions+=8;goto B7611ca;
case 0x7611d0:c.instructions+=7;goto B7611d0;
case 0x7611d3:c.instructions+=6;goto B7611d3;
case 0x7611d5:c.instructions+=5;goto B7611d5;
case 0x7611dc:c.instructions+=4;goto B7611dc;
case 0x7611de:c.instructions+=3;goto B7611de;
case 0x7611e1:c.instructions+=2;goto B7611e1;
case 0x7611e4:c.instructions+=1;goto B7611e4;
case 0x7611e6:goto L7611e6;
case 0x7611e8:c.instructions+=1;goto B7611e8;
case 0x7611ea:goto L7611ea;
case 0x7611ec:c.instructions+=1;goto B7611ec;
case 0x7611ee:goto L7611ee;
case 0x7611f1:goto L7611f1;
case 0x7611f2:c.instructions+=3;goto B7611f2;
case 0x7611f3:c.instructions+=2;goto B7611f3;
case 0x7611f4:c.instructions+=1;goto B7611f4;
case 0x7611f5:goto L7611f5;
case 0x7611f7:c.instructions+=1;goto B7611f7;
case 0x7611f9:goto L7611f9;
case 0x7611fb:c.instructions+=1;goto B7611fb;
case 0x7611fd:goto L7611fd;
case 0x761200:c.instructions+=3;goto B761200;
case 0x761203:c.instructions+=2;goto B761203;
case 0x761205:c.instructions+=1;goto B761205;
case 0x761207:goto L761207;
case 0x761209:c.instructions+=7;goto B761209;
case 0x76120a:c.instructions+=6;goto B76120a;
case 0x76120c:c.instructions+=5;goto B76120c;
case 0x76120e:c.instructions+=4;goto B76120e;
case 0x761211:c.instructions+=3;goto B761211;
case 0x761214:c.instructions+=2;goto B761214;
case 0x761216:c.instructions+=1;goto B761216;
case 0x761218:goto L761218;
case 0x76121a:goto L76121a;
case 0x76121c:c.instructions+=1;goto B76121c;
case 0x76121e:goto L76121e;
case 0x761220:c.instructions+=3;goto B761220;
case 0x761223:c.instructions+=2;goto B761223;
case 0x761226:c.instructions+=1;goto B761226;
case 0x761228:goto L761228;
case 0x76122a:c.instructions+=1;goto B76122a;
case 0x76122c:goto L76122c;
case 0x76122e:c.instructions+=1;goto B76122e;
case 0x761230:goto L761230;
case 0x761232:goto L761232;
case 0x761234:c.instructions+=1;goto B761234;
case 0x761236:goto L761236;
case 0x761238:c.instructions+=1;goto B761238;
case 0x76123a:goto L76123a;
case 0x76123c:c.instructions+=3;goto B76123c;
case 0x76123f:c.instructions+=2;goto B76123f;
case 0x761241:c.instructions+=1;goto B761241;
case 0x761243:goto L761243;
case 0x761245:c.instructions+=7;goto B761245;
case 0x761246:c.instructions+=6;goto B761246;
case 0x761248:c.instructions+=5;goto B761248;
case 0x76124a:c.instructions+=4;goto B76124a;
case 0x76124d:c.instructions+=3;goto B76124d;
case 0x761250:c.instructions+=2;goto B761250;
case 0x761252:c.instructions+=1;goto B761252;
case 0x761254:goto L761254;
case 0x761256:goto L761256;
case 0x761258:c.instructions+=1;goto B761258;
case 0x76125a:goto L76125a;
case 0x76125c:c.instructions+=3;goto B76125c;
case 0x76125f:c.instructions+=2;goto B76125f;
case 0x761262:c.instructions+=1;goto B761262;
case 0x761264:goto L761264;
case 0x761266:c.instructions+=1;goto B761266;
case 0x761268:goto L761268;
case 0x76126a:c.instructions+=1;goto B76126a;
case 0x76126c:goto L76126c;
case 0x76126e:goto L76126e;
case 0x761270:c.instructions+=1;goto B761270;
case 0x761272:goto L761272;
case 0x761274:c.instructions+=1;goto B761274;
case 0x76127a:goto L76127a;
case 0x76127c:c.instructions+=3;goto B76127c;
case 0x76127f:c.instructions+=2;goto B76127f;
case 0x761281:c.instructions+=1;goto B761281;
case 0x761283:goto L761283;
case 0x761285:c.instructions+=7;goto B761285;
case 0x761286:c.instructions+=6;goto B761286;
case 0x761288:c.instructions+=5;goto B761288;
case 0x76128a:c.instructions+=4;goto B76128a;
case 0x76128d:c.instructions+=3;goto B76128d;
case 0x761290:c.instructions+=2;goto B761290;
case 0x761292:c.instructions+=1;goto B761292;
case 0x761294:goto L761294;
case 0x761296:goto L761296;
case 0x761298:c.instructions+=1;goto B761298;
case 0x76129e:goto L76129e;
case 0x7612a0:c.instructions+=4;goto B7612a0;
case 0x7612a2:c.instructions+=3;goto B7612a2;
case 0x7612a5:c.instructions+=2;goto B7612a5;
case 0x7612a8:c.instructions+=1;goto B7612a8;
case 0x7612aa:goto L7612aa;
case 0x7612ac:c.instructions+=1;goto B7612ac;
case 0x7612ae:goto L7612ae;
case 0x7612b0:c.instructions+=1;goto B7612b0;
case 0x7612b6:goto L7612b6;
case 0x7612b8:goto L7612b8;
case 0x7612ba:c.instructions+=1;goto B7612ba;
case 0x7612bc:goto L7612bc;
case 0x7612be:c.instructions+=1;goto B7612be;
case 0x7612c4:goto L7612c4;
case 0x7612c8:c.instructions+=1;goto B7612c8;
case 0x7612ca:goto L7612ca;
case 0x7612cf:goto L7612cf;
case 0x7612d4:c.instructions+=4;goto B7612d4;
case 0x7612d7:c.instructions+=3;goto B7612d7;
case 0x7612da:c.instructions+=2;goto B7612da;
case 0x7612db:c.instructions+=1;goto B7612db;
case 0x7612e0:goto L7612e0;
case 0x7612e2:c.instructions+=2;goto B7612e2;
case 0x7612e3:c.instructions+=1;goto B7612e3;
case 0x7612e9:goto L7612e9;
case 0x7612ec:c.instructions+=2;goto B7612ec;
case 0x7612ee:c.instructions+=1;goto B7612ee;
case 0x7612f0:goto L7612f0;
case 0x7612f2:goto L7612f2;
case 0x7612f6:c.instructions+=1;goto B7612f6;
case 0x7612f8:goto L7612f8;
case 0x7612fd:c.instructions+=4;goto B7612fd;
case 0x761300:c.instructions+=3;goto B761300;
case 0x761303:c.instructions+=2;goto B761303;
case 0x761304:c.instructions+=1;goto B761304;
case 0x761309:goto L761309;
case 0x76130a:c.instructions+=1;goto B76130a;
case 0x76130c:goto L76130c;
case 0x76130f:c.instructions+=2;goto B76130f;
case 0x761310:c.instructions+=1;goto B761310;
case 0x761315:goto L761315;
case 0x761317:c.instructions+=2;goto B761317;
case 0x761318:c.instructions+=1;goto B761318;
case 0x76131e:goto L76131e;
case 0x761320:c.instructions+=3;goto B761320;
case 0x761322:c.instructions+=2;goto B761322;
case 0x761325:c.instructions+=1;goto B761325;
case 0x761326:goto L761326;
case 0x761328:goto L761328;
case 0x76132d:goto L76132d;
case 0x761331:c.instructions+=2;goto B761331;
case 0x761333:c.instructions+=1;goto B761333;
case 0x761338:goto L761338;
case 0x761339:c.instructions+=1;goto B761339;
case 0x76133a:goto L76133a;
case 0x76133b:c.instructions+=6;goto B76133b;
case 0x76133d:c.instructions+=5;goto B76133d;
case 0x76133e:c.instructions+=4;goto B76133e;
case 0x76133f:c.instructions+=3;goto B76133f;
case 0x761342:c.instructions+=2;goto B761342;
case 0x761343:c.instructions+=1;goto B761343;
case 0x761349:goto L761349;
case 0x76134c:c.instructions+=8;goto B76134c;
case 0x76134f:c.instructions+=7;goto B76134f;
case 0x761351:c.instructions+=6;goto B761351;
case 0x761356:c.instructions+=5;goto B761356;
case 0x76135b:c.instructions+=4;goto B76135b;
case 0x761361:c.instructions+=3;goto B761361;
case 0x761362:c.instructions+=2;goto B761362;
case 0x761363:c.instructions+=1;goto B761363;
case 0x761368:goto L761368;
case 0x76136b:c.instructions+=2;goto B76136b;
case 0x76136d:c.instructions+=1;goto B76136d;
case 0x76136f:goto L76136f;
case 0x761371:goto L761371;
case 0x761372:c.instructions+=1;goto B761372;
case 0x761373:goto L761373;
case 0x761377:c.instructions+=6;goto B761377;
case 0x761378:c.instructions+=5;goto B761378;
case 0x761379:c.instructions+=4;goto B761379;
case 0x76137b:c.instructions+=3;goto B76137b;
case 0x76137c:c.instructions+=2;goto B76137c;
case 0x76137e:c.instructions+=1;goto B76137e;
case 0x761383:goto L761383;
case 0x761385:c.instructions+=2;goto B761385;
case 0x761387:c.instructions+=1;goto B761387;
case 0x761389:goto L761389;
case 0x76138b:c.instructions+=1;goto B76138b;
case 0x761390:goto L761390;
case 0x761394:c.instructions+=1;goto B761394;
case 0x761396:goto L761396;
case 0x761398:c.instructions+=1;goto B761398;
case 0x76139d:goto L76139d;
case 0x76139f:c.instructions+=4;goto B76139f;
case 0x7613a0:c.instructions+=3;goto B7613a0;
case 0x7613a3:c.instructions+=2;goto B7613a3;
case 0x7613a8:c.instructions+=1;goto B7613a8;
case 0x7613aa:goto L7613aa;
case 0x7613ad:goto L7613ad;
case 0x7613af:c.instructions+=10;goto B7613af;
case 0x7613b0:c.instructions+=9;goto B7613b0;
case 0x7613b5:c.instructions+=8;goto B7613b5;
case 0x7613b7:c.instructions+=7;goto B7613b7;
case 0x7613b9:c.instructions+=6;goto B7613b9;
case 0x7613bf:c.instructions+=5;goto B7613bf;
case 0x7613c1:c.instructions+=4;goto B7613c1;
case 0x7613c8:c.instructions+=3;goto B7613c8;
case 0x7613cd:c.instructions+=2;goto B7613cd;
case 0x7613cf:c.instructions+=1;goto B7613cf;
case 0x7613d1:goto L7613d1;
case 0x7613d3:c.instructions+=3;goto B7613d3;
case 0x7613d4:c.instructions+=2;goto B7613d4;
case 0x7613d6:c.instructions+=1;goto B7613d6;
case 0x7613d8:goto L7613d8;
case 0x7613da:c.instructions+=4;goto B7613da;
case 0x7613df:c.instructions+=3;goto B7613df;
case 0x7613e0:c.instructions+=2;goto B7613e0;
case 0x7613e2:c.instructions+=1;goto B7613e2;
case 0x7613e4:goto L7613e4;
case 0x7613e5:c.instructions+=2;goto B7613e5;
case 0x7613e7:c.instructions+=1;goto B7613e7;
case 0x7613e9:goto L7613e9;
case 0x7613eb:c.instructions+=1;goto B7613eb;
case 0x7613ec:goto L7613ec;
case 0x7613ee:c.instructions+=10;goto B7613ee;
case 0x7613f1:c.instructions+=9;goto B7613f1;
case 0x7613f2:c.instructions+=8;goto B7613f2;
case 0x7613f7:c.instructions+=7;goto B7613f7;
case 0x7613f9:c.instructions+=6;goto B7613f9;
case 0x7613fe:c.instructions+=5;goto B7613fe;
case 0x761401:c.instructions+=4;goto B761401;
case 0x761407:c.instructions+=3;goto B761407;
case 0x761409:c.instructions+=2;goto B761409;
case 0x76140b:c.instructions+=1;goto B76140b;
case 0x76140d:goto L76140d;
case 0x761412:goto L761412;
case 0x761415:c.instructions+=4;goto B761415;
case 0x761417:c.instructions+=3;goto B761417;
case 0x761418:c.instructions+=2;goto B761418;
case 0x76141b:c.instructions+=1;goto B76141b;
case 0x76141d:goto L76141d;
case 0x76141f:goto L76141f;
case 0x761420:c.instructions+=2;goto B761420;
case 0x761423:c.instructions+=1;goto B761423;
case 0x761425:goto L761425;
case 0x761426:c.instructions+=32;goto B761426;
case 0x761429:c.instructions+=31;goto B761429;
case 0x76142c:c.instructions+=30;goto B76142c;
case 0x761431:c.instructions+=29;goto B761431;
case 0x761434:c.instructions+=28;goto B761434;
case 0x761438:c.instructions+=27;goto B761438;
case 0x76143a:c.instructions+=26;goto B76143a;
case 0x76143b:c.instructions+=25;goto B76143b;
case 0x76143d:c.instructions+=24;goto B76143d;
case 0x76143f:c.instructions+=23;goto B76143f;
case 0x761440:c.instructions+=22;goto B761440;
case 0x761442:c.instructions+=21;goto B761442;
case 0x761445:c.instructions+=20;goto B761445;
case 0x761446:c.instructions+=19;goto B761446;
case 0x761448:c.instructions+=18;goto B761448;
case 0x76144a:c.instructions+=17;goto B76144a;
case 0x76144f:c.instructions+=16;goto B76144f;
case 0x761452:c.instructions+=15;goto B761452;
case 0x761453:c.instructions+=14;goto B761453;
case 0x761455:c.instructions+=13;goto B761455;
case 0x761456:c.instructions+=12;goto B761456;
case 0x761459:c.instructions+=11;goto B761459;
case 0x76145f:c.instructions+=10;goto B76145f;
case 0x761461:c.instructions+=9;goto B761461;
case 0x761463:c.instructions+=8;goto B761463;
case 0x761464:c.instructions+=7;goto B761464;
case 0x761466:c.instructions+=6;goto B761466;
case 0x761469:c.instructions+=5;goto B761469;
case 0x76146c:c.instructions+=4;goto B76146c;
case 0x76146e:c.instructions+=3;goto B76146e;
case 0x761472:c.instructions+=2;goto B761472;
case 0x761474:c.instructions+=1;goto B761474;
case 0x761476:goto L761476;
case 0x761477:c.instructions+=3;goto B761477;
case 0x761478:c.instructions+=2;goto B761478;
case 0x761479:c.instructions+=1;goto B761479;
case 0x76147a:goto L76147a;
case 0x76147b:c.instructions+=11;goto B76147b;
case 0x76147d:c.instructions+=10;goto B76147d;
case 0x761483:c.instructions+=9;goto B761483;
case 0x761488:c.instructions+=8;goto B761488;
case 0x76148b:c.instructions+=7;goto B76148b;
case 0x76148e:c.instructions+=6;goto B76148e;
case 0x76148f:c.instructions+=5;goto B76148f;
case 0x761490:c.instructions+=4;goto B761490;
case 0x761493:c.instructions+=3;goto B761493;
case 0x761495:c.instructions+=2;goto B761495;
case 0x761496:c.instructions+=1;goto B761496;
case 0x761498:goto L761498;
case 0x76149f:c.instructions+=1;goto B76149f;
case 0x7614a1:goto L7614a1;
case 0x7614a2:c.instructions+=2;goto B7614a2;
case 0x7614a5:c.instructions+=1;goto B7614a5;
case 0x7614a7:goto L7614a7;
case 0x7614a9:c.instructions+=3;goto B7614a9;
case 0x7614ac:c.instructions+=2;goto B7614ac;
case 0x7614b2:c.instructions+=1;goto B7614b2;
case 0x7614b8:goto L7614b8;
case 0x7614bd:c.instructions+=2;goto B7614bd;
case 0x7614c0:c.instructions+=1;goto B7614c0;
case 0x7614c6:goto L7614c6;
case 0x7614c8:c.instructions+=1;goto B7614c8;
case 0x7614ca:goto L7614ca;
case 0x7614d1:c.instructions+=1;goto B7614d1;
case 0x7614d7:goto L7614d7;
case 0x7614dd:c.instructions+=1;goto B7614dd;
case 0x7614e3:goto L7614e3;
case 0x7614e8:c.instructions+=5;goto B7614e8;
case 0x7614ee:c.instructions+=4;goto B7614ee;
case 0x7614ef:c.instructions+=3;goto B7614ef;
case 0x7614f0:c.instructions+=2;goto B7614f0;
case 0x7614f3:c.instructions+=1;goto B7614f3;
case 0x7614f9:goto L7614f9;
case 0x7614fb:c.instructions+=1;goto B7614fb;
case 0x7614fd:goto L7614fd;
case 0x761503:c.instructions+=3;goto B761503;
case 0x761508:c.instructions+=2;goto B761508;
case 0x761509:c.instructions+=1;goto B761509;
case 0x76150e:goto L76150e;
case 0x76150f:c.instructions+=1;goto B76150f;
case 0x761510:goto L761510;
case 0x761516:c.instructions+=3;goto B761516;
case 0x761517:c.instructions+=2;goto B761517;
case 0x76151d:c.instructions+=1;goto B76151d;
case 0x761522:goto L761522;
case 0x761523:c.instructions+=3;goto B761523;
case 0x761526:c.instructions+=2;goto B761526;
case 0x761527:c.instructions+=1;goto B761527;
case 0x761529:goto L761529;
case 0x76152f:c.instructions+=2;goto B76152f;
case 0x761530:c.instructions+=1;goto B761530;
case 0x761535:goto L761535;
case 0x761537:c.instructions+=7;goto B761537;
case 0x76153d:c.instructions+=6;goto B76153d;
case 0x761540:c.instructions+=5;goto B761540;
case 0x761542:c.instructions+=4;goto B761542;
case 0x761544:c.instructions+=3;goto B761544;
case 0x761549:c.instructions+=2;goto B761549;
case 0x76154a:c.instructions+=1;goto B76154a;
case 0x76154f:goto L76154f;
case 0x761552:goto L761552;
case 0x761553:c.instructions+=1;goto B761553;
case 0x761558:goto L761558;
case 0x76155e:c.instructions+=2;goto B76155e;
case 0x761560:c.instructions+=1;goto B761560;
case 0x761565:goto L761565;
case 0x761569:c.instructions+=5;goto B761569;
case 0x76156a:c.instructions+=4;goto B76156a;
case 0x76156d:c.instructions+=3;goto B76156d;
case 0x76156e:c.instructions+=2;goto B76156e;
case 0x761571:c.instructions+=1;goto B761571;
case 0x761576:goto L761576;
case 0x761578:c.instructions+=3;goto B761578;
case 0x76157d:c.instructions+=2;goto B76157d;
case 0x76157e:c.instructions+=1;goto B76157e;
case 0x761583:goto L761583;
case 0x761584:c.instructions+=2;goto B761584;
case 0x761585:c.instructions+=1;goto B761585;
case 0x76158a:goto L76158a;
case 0x76158f:c.instructions+=2;goto B76158f;
case 0x761590:c.instructions+=1;goto B761590;
case 0x761595:goto L761595;
case 0x76159b:c.instructions+=2;goto B76159b;
case 0x76159c:c.instructions+=1;goto B76159c;
case 0x7615a1:goto L7615a1;
case 0x7615a6:c.instructions+=3;goto B7615a6;
case 0x7615ab:c.instructions+=2;goto B7615ab;
case 0x7615ac:c.instructions+=1;goto B7615ac;
case 0x7615b1:goto L7615b1;
case 0x7615b4:c.instructions+=1;goto B7615b4;
case 0x7615b6:goto L7615b6;
case 0x7615b7:c.instructions+=5;goto B7615b7;
case 0x7615ba:c.instructions+=4;goto B7615ba;
case 0x7615bb:c.instructions+=3;goto B7615bb;
case 0x7615c1:c.instructions+=2;goto B7615c1;
case 0x7615c3:c.instructions+=1;goto B7615c3;
case 0x7615c8:goto L7615c8;
case 0x7615c9:c.instructions+=4;goto B7615c9;
case 0x7615ca:c.instructions+=3;goto B7615ca;
case 0x7615cc:c.instructions+=2;goto B7615cc;
case 0x7615ce:c.instructions+=1;goto B7615ce;
case 0x7615d4:goto L7615d4;
case 0x7615d5:c.instructions+=1;goto B7615d5;
case 0x7615db:goto L7615db;
case 0x7615e1:c.instructions+=3;goto B7615e1;
case 0x7615e4:c.instructions+=2;goto B7615e4;
case 0x7615e7:c.instructions+=1;goto B7615e7;
case 0x7615ec:goto L7615ec;
case 0x7615ed:c.instructions+=4;goto B7615ed;
case 0x7615ee:c.instructions+=3;goto B7615ee;
case 0x7615ef:c.instructions+=2;goto B7615ef;
case 0x7615f0:c.instructions+=1;goto B7615f0;
case 0x7615f1:goto L7615f1;
case 0x7615f6:c.instructions+=2;goto B7615f6;
case 0x7615f9:c.instructions+=1;goto B7615f9;
case 0x7615fb:goto L7615fb;
case 0x7615fd:c.instructions+=1;goto B7615fd;
case 0x7615ff:goto L7615ff;
case 0x761606:c.instructions+=1;goto B761606;
case 0x761608:goto L761608;
case 0x76160d:c.instructions+=1;goto B76160d;
case 0x761612:goto L761612;
case 0x761617:c.instructions+=3;goto B761617;
case 0x761619:c.instructions+=2;goto B761619;
case 0x76161a:c.instructions+=1;goto B76161a;
case 0x76161c:goto L76161c;
case 0x76161e:goto L76161e;
case 0x761623:c.instructions+=1;goto B761623;
case 0x761628:goto L761628;
case 0x761629:goto L761629;
case 0x76162a:goto L76162a;
case 0x76162b:c.instructions+=6;goto B76162b;
case 0x76162d:c.instructions+=5;goto B76162d;
case 0x76162e:c.instructions+=4;goto B76162e;
case 0x76162f:c.instructions+=3;goto B76162f;
case 0x761630:c.instructions+=2;goto B761630;
case 0x761631:c.instructions+=1;goto B761631;
case 0x761636:goto L761636;
case 0x761639:c.instructions+=4;goto B761639;
case 0x76163b:c.instructions+=3;goto B76163b;
case 0x76163e:c.instructions+=2;goto B76163e;
case 0x761643:c.instructions+=1;goto B761643;
case 0x761645:goto L761645;
case 0x761647:c.instructions+=1;goto B761647;
case 0x761649:goto L761649;
case 0x76164c:c.instructions+=4;goto B76164c;
case 0x76164f:c.instructions+=3;goto B76164f;
case 0x761652:c.instructions+=2;goto B761652;
case 0x761654:c.instructions+=1;goto B761654;
case 0x761656:goto L761656;
case 0x761659:c.instructions+=3;goto B761659;
case 0x76165c:c.instructions+=2;goto B76165c;
case 0x76165e:c.instructions+=1;goto B76165e;
case 0x761660:goto L761660;
case 0x761662:c.instructions+=1;goto B761662;
case 0x761664:goto L761664;
case 0x761666:goto L761666;
case 0x761668:c.instructions+=1;goto B761668;
case 0x76166e:goto L76166e;
case 0x761671:c.instructions+=3;goto B761671;
case 0x761673:c.instructions+=2;goto B761673;
case 0x761676:c.instructions+=1;goto B761676;
case 0x76167c:goto L76167c;
case 0x76167f:c.instructions+=1;goto B76167f;
case 0x761681:goto L761681;
case 0x761685:c.instructions+=3;goto B761685;
case 0x761687:c.instructions+=2;goto B761687;
case 0x761688:c.instructions+=1;goto B761688;
case 0x76168d:goto L76168d;
case 0x761690:c.instructions+=1;goto B761690;
case 0x761696:goto L761696;
case 0x761699:c.instructions+=6;goto B761699;
case 0x76169c:c.instructions+=5;goto B76169c;
case 0x76169f:c.instructions+=4;goto B76169f;
case 0x7616a2:c.instructions+=3;goto B7616a2;
case 0x7616a5:c.instructions+=2;goto B7616a5;
case 0x7616a8:c.instructions+=1;goto B7616a8;
case 0x7616ae:goto L7616ae;
case 0x7616b4:c.instructions+=4;goto B7616b4;
case 0x7616b9:c.instructions+=3;goto B7616b9;
case 0x7616bb:c.instructions+=2;goto B7616bb;
case 0x7616bd:c.instructions+=1;goto B7616bd;
case 0x7616bf:goto L7616bf;
case 0x7616c2:c.instructions+=1;goto B7616c2;
case 0x7616c5:goto L7616c5;
case 0x7616c8:c.instructions+=8;goto B7616c8;
case 0x7616cd:c.instructions+=7;goto B7616cd;
case 0x7616d3:c.instructions+=6;goto B7616d3;
case 0x7616d9:c.instructions+=5;goto B7616d9;
case 0x7616da:c.instructions+=4;goto B7616da;
case 0x7616dc:c.instructions+=3;goto B7616dc;
case 0x7616df:c.instructions+=2;goto B7616df;
case 0x7616e1:c.instructions+=1;goto B7616e1;
case 0x7616e3:goto L7616e3;
case 0x7616e6:goto L7616e6;
case 0x7616e8:c.instructions+=3;goto B7616e8;
case 0x7616ee:c.instructions+=2;goto B7616ee;
case 0x7616f1:c.instructions+=1;goto B7616f1;
case 0x7616f3:goto L7616f3;
case 0x7616fa:c.instructions+=1;goto B7616fa;
case 0x7616fc:goto L7616fc;
case 0x761702:c.instructions+=1;goto B761702;
case 0x761704:goto L761704;
case 0x76170b:c.instructions+=1;goto B76170b;
case 0x76170d:goto L76170d;
case 0x761713:c.instructions+=1;goto B761713;
case 0x761715:goto L761715;
case 0x76171c:c.instructions+=1;goto B76171c;
case 0x76171e:goto L76171e;
case 0x761724:c.instructions+=1;goto B761724;
case 0x761726:goto L761726;
case 0x76172d:c.instructions+=1;goto B76172d;
case 0x76172f:goto L76172f;
case 0x761735:c.instructions+=1;goto B761735;
case 0x761737:goto L761737;
case 0x76173e:c.instructions+=1;goto B76173e;
case 0x761740:goto L761740;
case 0x761746:c.instructions+=1;goto B761746;
case 0x761748:goto L761748;
case 0x76174f:c.instructions+=1;goto B76174f;
case 0x761751:goto L761751;
case 0x761757:c.instructions+=1;goto B761757;
case 0x761759:goto L761759;
case 0x761760:goto L761760;
case 0x761763:c.instructions+=2;goto B761763;
case 0x761765:c.instructions+=1;goto B761765;
case 0x761767:goto L761767;
case 0x761768:c.instructions+=2;goto B761768;
case 0x76176b:c.instructions+=1;goto B76176b;
case 0x76176d:goto L76176d;
case 0x761771:c.instructions+=2;goto B761771;
case 0x761772:c.instructions+=1;goto B761772;
case 0x761774:goto L761774;
case 0x761777:c.instructions+=2;goto B761777;
case 0x761778:c.instructions+=1;goto B761778;
case 0x76177b:goto L76177b;
case 0x76177e:c.instructions+=1;goto B76177e;
case 0x761780:goto L761780;
case 0x761783:c.instructions+=1;goto B761783;
case 0x761789:goto L761789;
case 0x76178a:c.instructions+=4;goto B76178a;
case 0x76178b:c.instructions+=3;goto B76178b;
case 0x76178c:c.instructions+=2;goto B76178c;
case 0x76178d:c.instructions+=1;goto B76178d;
case 0x76178e:goto L76178e;
case 0x76178f:c.instructions+=5;goto B76178f;
case 0x761791:c.instructions+=4;goto B761791;
case 0x761797:c.instructions+=3;goto B761797;
case 0x761798:c.instructions+=2;goto B761798;
case 0x761799:c.instructions+=1;goto B761799;
case 0x76179b:goto L76179b;
case 0x7617a0:goto L7617a0;
case 0x7617a6:c.instructions+=3;goto B7617a6;
case 0x7617a8:c.instructions+=2;goto B7617a8;
case 0x7617aa:c.instructions+=1;goto B7617aa;
case 0x7617ac:goto L7617ac;
case 0x7617ae:goto L7617ae;
case 0x7617b0:c.instructions+=1;goto B7617b0;
case 0x7617b2:goto L7617b2;
case 0x7617b3:goto L7617b3;
case 0x7617b4:c.instructions+=1;goto B7617b4;
case 0x7617b9:goto L7617b9;
case 0x7617ba:c.instructions+=1;goto B7617ba;
case 0x7617be:goto L7617be;
case 0x7617c0:c.instructions+=2;goto B7617c0;
case 0x7617c2:c.instructions+=1;goto B7617c2;
case 0x7617c4:goto L7617c4;
case 0x7617cb:c.instructions+=2;goto B7617cb;
case 0x7617cc:c.instructions+=1;goto B7617cc;
case 0x7617d1:goto L7617d1;
case 0x7617d3:c.instructions+=4;goto B7617d3;
case 0x7617d5:c.instructions+=3;goto B7617d5;
case 0x7617d6:c.instructions+=2;goto B7617d6;
case 0x7617dc:c.instructions+=1;goto B7617dc;
case 0x7617de:goto L7617de;
case 0x7617e1:c.instructions+=1;goto B7617e1;
case 0x7617e3:goto L7617e3;
case 0x7617e9:c.instructions+=2;goto B7617e9;
case 0x7617ea:c.instructions+=1;goto B7617ea;
case 0x7617ec:goto L7617ec;
case 0x7617ed:c.instructions+=1;goto B7617ed;
case 0x7617f2:goto L7617f2;
case 0x7617f4:c.instructions+=4;goto B7617f4;
case 0x7617f5:c.instructions+=3;goto B7617f5;
case 0x7617f8:c.instructions+=2;goto B7617f8;
case 0x7617f9:c.instructions+=1;goto B7617f9;
case 0x7617fb:goto L7617fb;
case 0x7617fc:c.instructions+=1;goto B7617fc;
case 0x761801:goto L761801;
case 0x761803:c.instructions+=3;goto B761803;
case 0x761804:c.instructions+=2;goto B761804;
case 0x761806:c.instructions+=1;goto B761806;
case 0x761808:goto L761808;
case 0x761809:c.instructions+=2;goto B761809;
case 0x76180a:c.instructions+=1;goto B76180a;
case 0x76180f:goto L76180f;
case 0x761810:c.instructions+=2;goto B761810;
case 0x761811:c.instructions+=1;goto B761811;
case 0x761814:goto L761814;
case 0x761816:goto L761816;
case 0x761818:c.instructions+=1;goto B761818;
case 0x76181a:goto L76181a;
case 0x761820:c.instructions+=1;goto B761820;
case 0x761825:goto L761825;
case 0x76182b:c.instructions+=3;goto B76182b;
case 0x76182d:c.instructions+=2;goto B76182d;
case 0x761837:c.instructions+=1;goto B761837;
case 0x761839:goto L761839;
case 0x76183a:c.instructions+=1;goto B76183a;
case 0x76183b:goto L76183b;
case 0x76183c:c.instructions+=3;goto B76183c;
case 0x76183d:c.instructions+=2;goto B76183d;
case 0x76183e:c.instructions+=1;goto B76183e;
case 0x76183f:goto L76183f;
case 0x761845:c.instructions+=1;goto B761845;
case 0x76184a:goto L76184a;
case 0x761850:c.instructions+=2;goto B761850;
case 0x761853:c.instructions+=1;goto B761853;
case 0x761855:goto L761855;
case 0x761856:c.instructions+=11;goto B761856;
case 0x761858:c.instructions+=10;goto B761858;
case 0x761859:c.instructions+=9;goto B761859;
case 0x76185a:c.instructions+=8;goto B76185a;
case 0x76185d:c.instructions+=7;goto B76185d;
case 0x76185f:c.instructions+=6;goto B76185f;
case 0x761862:c.instructions+=5;goto B761862;
case 0x761863:c.instructions+=4;goto B761863;
case 0x761865:c.instructions+=3;goto B761865;
case 0x761867:c.instructions+=2;goto B761867;
case 0x76186d:c.instructions+=1;goto B76186d;
case 0x76186f:goto L76186f;
case 0x761872:c.instructions+=2;goto B761872;
case 0x761876:c.instructions+=1;goto B761876;
case 0x761878:goto L761878;
case 0x76187b:c.instructions+=1;goto B76187b;
case 0x76187d:goto L76187d;
case 0x76187f:c.instructions+=6;goto B76187f;
case 0x761881:c.instructions+=5;goto B761881;
case 0x761884:c.instructions+=4;goto B761884;
case 0x761885:c.instructions+=3;goto B761885;
case 0x761887:c.instructions+=2;goto B761887;
case 0x761889:c.instructions+=1;goto B761889;
case 0x76188b:goto L76188b;
case 0x76188d:c.instructions+=2;goto B76188d;
case 0x76188f:c.instructions+=1;goto B76188f;
case 0x761891:goto L761891;
case 0x761893:c.instructions+=2;goto B761893;
case 0x761895:c.instructions+=1;goto B761895;
case 0x761896:goto L761896;
case 0x761898:c.instructions+=4;goto B761898;
case 0x76189b:c.instructions+=3;goto B76189b;
case 0x76189c:c.instructions+=2;goto B76189c;
case 0x7618a3:c.instructions+=1;goto B7618a3;
case 0x7618a5:goto L7618a5;
case 0x7618a7:c.instructions+=2;goto B7618a7;
case 0x7618a9:c.instructions+=1;goto B7618a9;
case 0x7618ab:goto L7618ab;
case 0x7618ad:c.instructions+=2;goto B7618ad;
case 0x7618af:c.instructions+=1;goto B7618af;
case 0x7618b0:goto L7618b0;
case 0x7618b1:goto L7618b1;
case 0x7618b3:c.instructions+=2;goto B7618b3;
case 0x7618b6:c.instructions+=1;goto B7618b6;
case 0x7618b8:goto L7618b8;
case 0x7618ba:c.instructions+=1;goto B7618ba;
case 0x7618bc:goto L7618bc;
case 0x7618bf:c.instructions+=1;goto B7618bf;
case 0x7618c1:goto L7618c1;
case 0x7618c4:c.instructions+=1;goto B7618c4;
case 0x7618c6:goto L7618c6;
case 0x7618c8:c.instructions+=1;goto B7618c8;
case 0x7618ca:goto L7618ca;
case 0x7618ce:goto L7618ce;
case 0x7618d2:goto L7618d2;
case 0x7618d5:c.instructions+=1;goto B7618d5;
case 0x7618db:goto L7618db;
case 0x7618dd:c.instructions+=2;goto B7618dd;
case 0x7618e0:c.instructions+=1;goto B7618e0;
case 0x7618e2:goto L7618e2;
case 0x7618e5:c.instructions+=1;goto B7618e5;
case 0x7618e7:goto L7618e7;
case 0x7618e8:c.instructions+=1;goto B7618e8;
case 0x7618ea:goto L7618ea;
case 0x7618eb:c.instructions+=1;goto B7618eb;
case 0x7618ed:goto L7618ed;
case 0x7618f0:c.instructions+=1;goto B7618f0;
case 0x7618f6:goto L7618f6;
case 0x7618fa:c.instructions+=1;goto B7618fa;
case 0x7618fc:goto L7618fc;
case 0x7618ff:c.instructions+=2;goto B7618ff;
case 0x761903:c.instructions+=1;goto B761903;
case 0x761905:goto L761905;
case 0x761907:goto L761907;
case 0x761909:c.instructions+=3;goto B761909;
case 0x76190a:c.instructions+=2;goto B76190a;
case 0x76190c:c.instructions+=1;goto B76190c;
case 0x76190e:goto L76190e;
case 0x76190f:c.instructions+=1;goto B76190f;
case 0x761910:goto L761910;
case 0x761913:c.instructions+=1;goto B761913;
case 0x761915:goto L761915;
case 0x761918:c.instructions+=1;goto B761918;
case 0x76191a:goto L76191a;
case 0x76191d:c.instructions+=1;goto B76191d;
case 0x76191f:goto L76191f;
case 0x761923:c.instructions+=1;goto B761923;
case 0x761925:goto L761925;
case 0x761928:c.instructions+=2;goto B761928;
case 0x76192b:c.instructions+=1;goto B76192b;
case 0x76192d:goto L76192d;
case 0x76192f:c.instructions+=1;goto B76192f;
case 0x761931:goto L761931;
case 0x761933:goto L761933;
case 0x761935:c.instructions+=3;goto B761935;
case 0x761938:c.instructions+=2;goto B761938;
case 0x76193b:c.instructions+=1;goto B76193b;
case 0x76193e:goto L76193e;
case 0x761940:goto L761940;
case 0x761942:c.instructions+=1;goto B761942;
case 0x761944:goto L761944;
case 0x761946:c.instructions+=1;goto B761946;
case 0x761948:goto L761948;
case 0x76194b:c.instructions+=1;goto B76194b;
case 0x76194c:goto L76194c;
case 0x76194e:c.instructions+=2;goto B76194e;
case 0x76194f:c.instructions+=1;goto B76194f;
case 0x761951:goto L761951;
case 0x761953:c.instructions+=2;goto B761953;
case 0x761955:c.instructions+=1;goto B761955;
case 0x761957:goto L761957;
case 0x76195b:c.instructions+=1;goto B76195b;
case 0x76195d:goto L76195d;
case 0x761960:c.instructions+=1;goto B761960;
case 0x761962:goto L761962;
case 0x761965:c.instructions+=1;goto B761965;
case 0x761967:goto L761967;
case 0x761969:c.instructions+=1;goto B761969;
case 0x76196b:goto L76196b;
case 0x76196d:c.instructions+=1;goto B76196d;
case 0x76196f:goto L76196f;
case 0x761972:c.instructions+=2;goto B761972;
case 0x761979:c.instructions+=1;goto B761979;
case 0x76197b:goto L76197b;
case 0x76197d:c.instructions+=3;goto B76197d;
case 0x76197e:c.instructions+=2;goto B76197e;
case 0x76197f:c.instructions+=1;goto B76197f;
case 0x761981:goto L761981;
case 0x761983:c.instructions+=3;goto B761983;
case 0x761985:c.instructions+=2;goto B761985;
case 0x761986:c.instructions+=1;goto B761986;
case 0x761988:goto L761988;
case 0x76198b:c.instructions+=2;goto B76198b;
case 0x761992:c.instructions+=1;goto B761992;
case 0x761994:goto L761994;
case 0x761995:c.instructions+=1;goto B761995;
case 0x761997:goto L761997;
case 0x761999:goto L761999;
case 0x76199a:c.instructions+=1;goto B76199a;
case 0x76199f:goto L76199f;
case 0x7619a1:c.instructions+=1;goto B7619a1;
case 0x7619a3:goto L7619a3;
case 0x7619a6:c.instructions+=1;goto B7619a6;
case 0x7619a7:goto L7619a7;
case 0x7619a9:c.instructions+=2;goto B7619a9;
case 0x7619ac:c.instructions+=1;goto B7619ac;
case 0x7619b1:goto L7619b1;
case 0x7619b4:c.instructions+=2;goto B7619b4;
case 0x7619b6:c.instructions+=1;goto B7619b6;
case 0x7619b8:goto L7619b8;
case 0x7619bb:goto L7619bb;
case 0x7619bd:c.instructions+=4;goto B7619bd;
case 0x7619be:c.instructions+=3;goto B7619be;
case 0x7619bf:c.instructions+=2;goto B7619bf;
case 0x7619c0:c.instructions+=1;goto B7619c0;
case 0x7619c1:goto L7619c1;
case 0x7619c2:c.instructions+=9;goto B7619c2;
case 0x7619c4:c.instructions+=8;goto B7619c4;
case 0x7619c5:c.instructions+=7;goto B7619c5;
case 0x7619c6:c.instructions+=6;goto B7619c6;
case 0x7619c7:c.instructions+=5;goto B7619c7;
case 0x7619c8:c.instructions+=4;goto B7619c8;
case 0x7619c9:c.instructions+=3;goto B7619c9;
case 0x7619cb:c.instructions+=2;goto B7619cb;
case 0x7619d1:c.instructions+=1;goto B7619d1;
case 0x7619d3:goto L7619d3;
case 0x7619d8:goto L7619d8;
case 0x7619df:c.instructions+=5;goto B7619df;
case 0x7619e4:c.instructions+=4;goto B7619e4;
case 0x7619e9:c.instructions+=3;goto B7619e9;
case 0x7619ea:c.instructions+=2;goto B7619ea;
case 0x7619eb:c.instructions+=1;goto B7619eb;
case 0x7619f1:goto L7619f1;
case 0x7619f6:c.instructions+=3;goto B7619f6;
case 0x7619f8:c.instructions+=2;goto B7619f8;
case 0x7619fe:c.instructions+=1;goto B7619fe;
case 0x761a00:goto L761a00;
case 0x761a03:c.instructions+=2;goto B761a03;
case 0x761a05:c.instructions+=1;goto B761a05;
case 0x761a07:goto L761a07;
case 0x761a09:goto L761a09;
case 0x761a0c:c.instructions+=6;goto B761a0c;
case 0x761a0d:c.instructions+=5;goto B761a0d;
case 0x761a0e:c.instructions+=4;goto B761a0e;
case 0x761a11:c.instructions+=3;goto B761a11;
case 0x761a13:c.instructions+=2;goto B761a13;
case 0x761a15:c.instructions+=1;goto B761a15;
case 0x761a1a:goto L761a1a;
case 0x761a1d:c.instructions+=5;goto B761a1d;
case 0x761a20:c.instructions+=4;goto B761a20;
case 0x761a23:c.instructions+=3;goto B761a23;
case 0x761a25:c.instructions+=2;goto B761a25;
case 0x761a26:c.instructions+=1;goto B761a26;
case 0x761a2b:goto L761a2b;
case 0x761a2d:c.instructions+=3;goto B761a2d;
case 0x761a30:c.instructions+=2;goto B761a30;
case 0x761a32:c.instructions+=1;goto B761a32;
case 0x761a34:goto L761a34;
case 0x761a37:c.instructions+=1;goto B761a37;
case 0x761a39:goto L761a39;
case 0x761a3c:c.instructions+=6;goto B761a3c;
case 0x761a3d:c.instructions+=5;goto B761a3d;
case 0x761a40:c.instructions+=4;goto B761a40;
case 0x761a41:c.instructions+=3;goto B761a41;
case 0x761a44:c.instructions+=2;goto B761a44;
case 0x761a46:c.instructions+=1;goto B761a46;
case 0x761a4b:goto L761a4b;
case 0x761a4e:c.instructions+=6;goto B761a4e;
case 0x761a4f:c.instructions+=5;goto B761a4f;
case 0x761a50:c.instructions+=4;goto B761a50;
case 0x761a55:c.instructions+=3;goto B761a55;
case 0x761a56:c.instructions+=2;goto B761a56;
case 0x761a5c:c.instructions+=1;goto B761a5c;
case 0x761a5e:goto L761a5e;
case 0x761a5f:c.instructions+=4;goto B761a5f;
case 0x761a60:c.instructions+=3;goto B761a60;
case 0x761a61:c.instructions+=2;goto B761a61;
case 0x761a62:c.instructions+=1;goto B761a62;
case 0x761a63:goto L761a63;
case 0x761a64:c.instructions+=13;goto B761a64;
case 0x761a65:c.instructions+=12;goto B761a65;
case 0x761a6a:c.instructions+=11;goto B761a6a;
case 0x761a6b:c.instructions+=10;goto B761a6b;
case 0x761a6c:c.instructions+=9;goto B761a6c;
case 0x761a6d:c.instructions+=8;goto B761a6d;
case 0x761a6e:c.instructions+=7;goto B761a6e;
case 0x761a74:c.instructions+=6;goto B761a74;
case 0x761a76:c.instructions+=5;goto B761a76;
case 0x761a78:c.instructions+=4;goto B761a78;
case 0x761a7a:c.instructions+=3;goto B761a7a;
case 0x761a7c:c.instructions+=2;goto B761a7c;
case 0x761a7d:c.instructions+=1;goto B761a7d;
case 0x761a7f:goto L761a7f;
case 0x761a81:goto L761a81;
case 0x761a83:c.instructions+=2;goto B761a83;
case 0x761a85:c.instructions+=1;goto B761a85;
case 0x761a87:goto L761a87;
case 0x761a91:c.instructions+=1;goto B761a91;
case 0x761a93:goto L761a93;
case 0x761a99:goto L761a99;
case 0x761a9c:c.instructions+=1;goto B761a9c;
case 0x761a9e:goto L761a9e;
case 0x761aa0:c.instructions+=2;goto B761aa0;
case 0x761aa5:c.instructions+=1;goto B761aa5;
case 0x761aa7:goto L761aa7;
case 0x761aac:goto L761aac;
case 0x761aaf:c.instructions+=1;goto B761aaf;
case 0x761ab1:goto L761ab1;
case 0x761ab3:c.instructions+=1;goto B761ab3;
case 0x761ab5:goto L761ab5;
case 0x761ab7:goto L761ab7;
case 0x761ab9:c.instructions+=2;goto B761ab9;
case 0x761abb:c.instructions+=1;goto B761abb;
case 0x761abd:goto L761abd;
case 0x761ac0:c.instructions+=2;goto B761ac0;
case 0x761ac2:c.instructions+=1;goto B761ac2;
case 0x761ac4:goto L761ac4;
case 0x761ac6:c.instructions+=2;goto B761ac6;
case 0x761ac9:c.instructions+=1;goto B761ac9;
case 0x761acb:goto L761acb;
case 0x761acd:c.instructions+=2;goto B761acd;
case 0x761ad0:c.instructions+=1;goto B761ad0;
case 0x761ad2:goto L761ad2;
case 0x761ad8:c.instructions+=13;goto B761ad8;
case 0x761ad9:c.instructions+=12;goto B761ad9;
case 0x761ada:c.instructions+=11;goto B761ada;
case 0x761adb:c.instructions+=10;goto B761adb;
case 0x761add:c.instructions+=9;goto B761add;
case 0x761ade:c.instructions+=8;goto B761ade;
case 0x761ae0:c.instructions+=7;goto B761ae0;
case 0x761ae1:c.instructions+=6;goto B761ae1;
case 0x761ae2:c.instructions+=5;goto B761ae2;
case 0x761ae3:c.instructions+=4;goto B761ae3;
case 0x761ae4:c.instructions+=3;goto B761ae4;
case 0x761ae5:c.instructions+=2;goto B761ae5;
case 0x761ae9:c.instructions+=1;goto B761ae9;
case 0x761aeb:goto L761aeb;
case 0x761aed:c.instructions+=2;goto B761aed;
case 0x761aef:c.instructions+=1;goto B761aef;
case 0x761af1:goto L761af1;
case 0x761af2:c.instructions+=1;goto B761af2;
case 0x761af7:goto L761af7;
case 0x761af9:c.instructions+=3;goto B761af9;
case 0x761afa:c.instructions+=2;goto B761afa;
case 0x761afe:c.instructions+=1;goto B761afe;
case 0x761b00:goto L761b00;
case 0x761b01:c.instructions+=8;goto B761b01;
case 0x761b02:c.instructions+=7;goto B761b02;
case 0x761b03:c.instructions+=6;goto B761b03;
case 0x761b04:c.instructions+=5;goto B761b04;
case 0x761b08:c.instructions+=4;goto B761b08;
case 0x761b09:c.instructions+=3;goto B761b09;
case 0x761b0a:c.instructions+=2;goto B761b0a;
case 0x761b0b:c.instructions+=1;goto B761b0b;
case 0x761b0d:goto L761b0d;
case 0x761b0f:c.instructions+=1;goto B761b0f;
case 0x761b11:goto L761b11;
case 0x761b15:c.instructions+=1;goto B761b15;
case 0x761b1a:goto L761b1a;
case 0x761b1b:c.instructions+=1;goto B761b1b;
case 0x761b1f:goto L761b1f;
case 0x761b23:goto L761b23;
case 0x761b24:c.instructions+=1;goto B761b24;
case 0x761b2a:goto L761b2a;
case 0x761b2c:c.instructions+=1;goto B761b2c;
case 0x761b2e:goto L761b2e;
case 0x761b30:c.instructions+=1;goto B761b30;
case 0x761b32:goto L761b32;
case 0x761b34:c.instructions+=1;goto B761b34;
case 0x761b36:goto L761b36;
case 0x761b38:c.instructions+=1;goto B761b38;
case 0x761b3a:goto L761b3a;
case 0x761b40:goto L761b40;
case 0x761b42:c.instructions+=2;goto B761b42;
case 0x761b44:c.instructions+=1;goto B761b44;
case 0x761b46:goto L761b46;
case 0x761b48:c.instructions+=1;goto B761b48;
case 0x761b4a:goto L761b4a;
case 0x761b4b:c.instructions+=2;goto B761b4b;
case 0x761b4d:c.instructions+=1;goto B761b4d;
case 0x761b4f:goto L761b4f;
case 0x761b50:c.instructions+=2;goto B761b50;
case 0x761b52:c.instructions+=1;goto B761b52;
case 0x761b54:goto L761b54;
case 0x761b56:c.instructions+=4;goto B761b56;
case 0x761b57:c.instructions+=3;goto B761b57;
case 0x761b59:c.instructions+=2;goto B761b59;
case 0x761b5a:c.instructions+=1;goto B761b5a;
case 0x761b5f:goto L761b5f;
case 0x761b61:c.instructions+=3;goto B761b61;
case 0x761b63:c.instructions+=2;goto B761b63;
case 0x761b64:c.instructions+=1;goto B761b64;
case 0x761b66:goto L761b66;
case 0x761b68:c.instructions+=1;goto B761b68;
case 0x761b6a:goto L761b6a;
case 0x761b6b:c.instructions+=3;goto B761b6b;
case 0x761b6c:c.instructions+=2;goto B761b6c;
case 0x761b6d:c.instructions+=1;goto B761b6d;
case 0x761b72:goto L761b72;
case 0x761b75:goto L761b75;
case 0x761b76:c.instructions+=1;goto B761b76;
case 0x761b7c:goto L761b7c;
case 0x761b7e:goto L761b7e;
case 0x761b7f:c.instructions+=6;goto B761b7f;
case 0x761b80:c.instructions+=5;goto B761b80;
case 0x761b81:c.instructions+=4;goto B761b81;
case 0x761b82:c.instructions+=3;goto B761b82;
case 0x761b83:c.instructions+=2;goto B761b83;
case 0x761b84:c.instructions+=1;goto B761b84;
case 0x761b85:goto L761b85;
case 0x761b88:c.instructions+=4;goto B761b88;
case 0x761b89:c.instructions+=3;goto B761b89;
case 0x761b8e:c.instructions+=2;goto B761b8e;
case 0x761b8f:c.instructions+=1;goto B761b8f;
case 0x761b94:goto L761b94;
case 0x761b96:c.instructions+=2;goto B761b96;
case 0x761b97:c.instructions+=1;goto B761b97;
case 0x761b99:goto L761b99;
case 0x761b9c:c.instructions+=1;goto B761b9c;
case 0x761ba1:goto L761ba1;
case 0x761ba6:c.instructions+=3;goto B761ba6;
case 0x761bb0:c.instructions+=2;goto B761bb0;
case 0x761bb6:c.instructions+=1;goto B761bb6;
case 0x761bb8:goto L761bb8;
case 0x761bbc:c.instructions+=6;goto B761bbc;
case 0x761bbf:c.instructions+=5;goto B761bbf;
case 0x761bc3:c.instructions+=4;goto B761bc3;
case 0x761bc7:c.instructions+=3;goto B761bc7;
case 0x761bcd:c.instructions+=2;goto B761bcd;
case 0x761bd0:c.instructions+=1;goto B761bd0;
case 0x761bd6:goto L761bd6;
case 0x761bd8:c.instructions+=1;goto B761bd8;
case 0x761bda:goto L761bda;
case 0x761bdb:c.instructions+=5;goto B761bdb;
case 0x761bdc:c.instructions+=4;goto B761bdc;
case 0x761bdd:c.instructions+=3;goto B761bdd;
case 0x761be1:c.instructions+=2;goto B761be1;
case 0x761be2:c.instructions+=1;goto B761be2;
case 0x761be8:goto L761be8;
case 0x761bee:c.instructions+=1;goto B761bee;
case 0x761bf4:goto L761bf4;
case 0x761bf8:c.instructions+=2;goto B761bf8;
case 0x761bfa:c.instructions+=1;goto B761bfa;
case 0x761c00:goto L761c00;
case 0x761c02:c.instructions+=6;goto B761c02;
case 0x761c05:c.instructions+=5;goto B761c05;
case 0x761c08:c.instructions+=4;goto B761c08;
case 0x761c0c:c.instructions+=3;goto B761c0c;
case 0x761c11:c.instructions+=2;goto B761c11;
case 0x761c13:c.instructions+=1;goto B761c13;
case 0x761c15:goto L761c15;
case 0x761c17:goto L761c17;
case 0x761c1d:c.instructions+=1;goto B761c1d;
case 0x761c1f:goto L761c1f;
case 0x761c24:goto L761c24;
case 0x761c25:c.instructions+=1;goto B761c25;
case 0x761c2a:goto L761c2a;
case 0x761c2c:c.instructions+=2;goto B761c2c;
case 0x761c2d:c.instructions+=1;goto B761c2d;
case 0x761c2f:goto L761c2f;
case 0x761c36:c.instructions+=3;goto B761c36;
case 0x761c38:c.instructions+=2;goto B761c38;
case 0x761c3e:c.instructions+=1;goto B761c3e;
case 0x761c40:goto L761c40;
case 0x761c44:c.instructions+=6;goto B761c44;
case 0x761c47:c.instructions+=5;goto B761c47;
case 0x761c4b:c.instructions+=4;goto B761c4b;
case 0x761c4f:c.instructions+=3;goto B761c4f;
case 0x761c51:c.instructions+=2;goto B761c51;
case 0x761c54:c.instructions+=1;goto B761c54;
case 0x761c56:goto L761c56;
case 0x761c58:c.instructions+=1;goto B761c58;
case 0x761c5a:goto L761c5a;
case 0x761c5d:c.instructions+=2;goto B761c5d;
case 0x761c63:c.instructions+=1;goto B761c63;
case 0x761c65:goto L761c65;
case 0x761c67:goto L761c67;
case 0x761c6d:goto L761c6d;
case 0x761c6f:c.instructions+=2;goto B761c6f;
case 0x761c71:c.instructions+=1;goto B761c71;
case 0x761c73:goto L761c73;
case 0x761c77:c.instructions+=3;goto B761c77;
case 0x761c79:c.instructions+=2;goto B761c79;
case 0x761c7c:c.instructions+=1;goto B761c7c;
case 0x761c7e:goto L761c7e;
case 0x761c81:c.instructions+=2;goto B761c81;
case 0x761c84:c.instructions+=1;goto B761c84;
case 0x761c86:goto L761c86;
case 0x761c89:c.instructions+=1;goto B761c89;
case 0x761c8b:goto L761c8b;
case 0x761c8c:c.instructions+=1;goto B761c8c;
case 0x761c92:goto L761c92;
case 0x761c94:c.instructions+=1;goto B761c94;
case 0x761c96:goto L761c96;
case 0x761c98:c.instructions+=15;goto B761c98;
case 0x761c9a:c.instructions+=14;goto B761c9a;
case 0x761c9d:c.instructions+=13;goto B761c9d;
case 0x761ca0:c.instructions+=12;goto B761ca0;
case 0x761ca3:c.instructions+=11;goto B761ca3;
case 0x761caa:c.instructions+=10;goto B761caa;
case 0x761cad:c.instructions+=9;goto B761cad;
case 0x761cb1:c.instructions+=8;goto B761cb1;
case 0x761cb3:c.instructions+=7;goto B761cb3;
case 0x761cb5:c.instructions+=6;goto B761cb5;
case 0x761cb8:c.instructions+=5;goto B761cb8;
case 0x761cbb:c.instructions+=4;goto B761cbb;
case 0x761cbe:c.instructions+=3;goto B761cbe;
case 0x761cc3:c.instructions+=2;goto B761cc3;
case 0x761cc4:c.instructions+=1;goto B761cc4;
case 0x761cc9:goto L761cc9;
case 0x761ccb:c.instructions+=3;goto B761ccb;
case 0x761ccc:c.instructions+=2;goto B761ccc;
case 0x761ccd:c.instructions+=1;goto B761ccd;
case 0x761ccf:goto L761ccf;
case 0x761cd2:goto L761cd2;
case 0x761cd7:c.instructions+=4;goto B761cd7;
case 0x761cd8:c.instructions+=3;goto B761cd8;
case 0x761cd9:c.instructions+=2;goto B761cd9;
case 0x761cdb:c.instructions+=1;goto B761cdb;
case 0x761cdd:goto L761cdd;
case 0x761cdf:goto L761cdf;
case 0x761ce5:c.instructions+=4;goto B761ce5;
case 0x761ce8:c.instructions+=3;goto B761ce8;
case 0x761ceb:c.instructions+=2;goto B761ceb;
case 0x761cee:c.instructions+=1;goto B761cee;
case 0x761cf0:goto L761cf0;
case 0x761cf2:c.instructions+=2;goto B761cf2;
case 0x761cf6:c.instructions+=1;goto B761cf6;
case 0x761cf8:goto L761cf8;
case 0x761cfa:c.instructions+=2;goto B761cfa;
case 0x761cfb:c.instructions+=1;goto B761cfb;
case 0x761cfd:goto L761cfd;
case 0x761d00:c.instructions+=1;goto B761d00;
case 0x761d02:goto L761d02;
case 0x761d04:c.instructions+=4;goto B761d04;
case 0x761d05:c.instructions+=3;goto B761d05;
case 0x761d07:c.instructions+=2;goto B761d07;
case 0x761d09:c.instructions+=1;goto B761d09;
case 0x761d0c:goto L761d0c;
case 0x761d0d:c.instructions+=1;goto B761d0d;
case 0x761d13:goto L761d13;
case 0x761d15:c.instructions+=2;goto B761d15;
case 0x761d18:c.instructions+=1;goto B761d18;
case 0x761d1a:goto L761d1a;
case 0x761d1b:c.instructions+=1;goto B761d1b;
case 0x761d21:goto L761d21;
case 0x761d23:c.instructions+=1;goto B761d23;
case 0x761d25:goto L761d25;
case 0x761d2a:c.instructions+=3;goto B761d2a;
case 0x761d2d:c.instructions+=2;goto B761d2d;
case 0x761d2f:c.instructions+=1;goto B761d2f;
case 0x761d31:goto L761d31;
case 0x761d35:c.instructions+=1;goto B761d35;
case 0x761d37:goto L761d37;
case 0x761d3a:c.instructions+=1;goto B761d3a;
case 0x761d3c:goto L761d3c;
case 0x761d40:goto L761d40;
case 0x761d43:c.instructions+=3;goto B761d43;
case 0x761d48:c.instructions+=2;goto B761d48;
case 0x761d49:c.instructions+=1;goto B761d49;
case 0x761d4e:goto L761d4e;
case 0x761d50:c.instructions+=3;goto B761d50;
case 0x761d51:c.instructions+=2;goto B761d51;
case 0x761d52:c.instructions+=1;goto B761d52;
case 0x761d54:goto L761d54;
case 0x761d57:c.instructions+=1;goto B761d57;
case 0x761d59:goto L761d59;
case 0x761d5d:c.instructions+=1;goto B761d5d;
case 0x761d5f:goto L761d5f;
case 0x761d63:goto L761d63;
case 0x761d64:c.instructions+=2;goto B761d64;
case 0x761d67:c.instructions+=1;goto B761d67;
case 0x761d6d:goto L761d6d;
case 0x761d73:c.instructions+=1;goto B761d73;
case 0x761d79:goto L761d79;
case 0x761d7b:goto L761d7b;
case 0x761d7c:c.instructions+=2;goto B761d7c;
case 0x761d7d:c.instructions+=1;goto B761d7d;
case 0x761d7e:goto L761d7e;
case 0x761d7f:c.instructions+=2;goto B761d7f;
case 0x761d82:c.instructions+=1;goto B761d82;
case 0x761d83:goto L761d83;
case 0x761d85:c.instructions+=2;goto B761d85;
case 0x761d8a:c.instructions+=1;goto B761d8a;
case 0x761d8f:goto L761d8f;
case 0x761d96:goto L761d96;
case 0x761d9d:c.instructions+=1;goto B761d9d;
case 0x761d9f:goto L761d9f;
case 0x761da3:c.instructions+=4;goto B761da3;
case 0x761da6:c.instructions+=3;goto B761da6;
case 0x761da8:c.instructions+=2;goto B761da8;
case 0x761daa:c.instructions+=1;goto B761daa;
case 0x761dac:goto L761dac;
case 0x761dae:goto L761dae;
case 0x761db0:goto L761db0;
case 0x761db2:c.instructions+=2;goto B761db2;
case 0x761db3:c.instructions+=1;goto B761db3;
case 0x761db7:goto L761db7;
case 0x761dbb:c.instructions+=2;goto B761dbb;
case 0x761dbf:c.instructions+=1;goto B761dbf;
case 0x761dc1:goto L761dc1;
case 0x761dc6:goto L761dc6;
case 0x761dc7:goto L761dc7;
case 0x761dc9:c.instructions+=2;goto B761dc9;
case 0x761dce:c.instructions+=1;goto B761dce;
case 0x761dd3:goto L761dd3;
case 0x761dda:goto L761dda;
case 0x761de1:c.instructions+=1;goto B761de1;
case 0x761de3:goto L761de3;
case 0x761de7:c.instructions+=4;goto B761de7;
case 0x761dea:c.instructions+=3;goto B761dea;
case 0x761dec:c.instructions+=2;goto B761dec;
case 0x761dee:c.instructions+=1;goto B761dee;
case 0x761df0:goto L761df0;
case 0x761df2:goto L761df2;
case 0x761df4:goto L761df4;
case 0x761df6:c.instructions+=2;goto B761df6;
case 0x761df7:c.instructions+=1;goto B761df7;
case 0x761dfb:goto L761dfb;
case 0x761dff:c.instructions+=2;goto B761dff;
case 0x761e03:c.instructions+=1;goto B761e03;
case 0x761e05:goto L761e05;
case 0x761e0a:goto L761e0a;
case 0x761e0b:goto L761e0b;
case 0x761e10:goto L761e10;
case 0x761e15:c.instructions+=2;goto B761e15;
case 0x761e18:c.instructions+=1;goto B761e18;
case 0x761e1a:goto L761e1a;
case 0x761e1b:c.instructions+=1;goto B761e1b;
case 0x761e21:goto L761e21;
case 0x761e28:goto L761e28;
case 0x761e29:goto L761e29;
case 0x761e2d:c.instructions+=3;goto B761e2d;
case 0x761e34:c.instructions+=2;goto B761e34;
case 0x761e3b:c.instructions+=1;goto B761e3b;
case 0x761e3c:goto L761e3c;
case 0x761e3d:c.instructions+=2;goto B761e3d;
case 0x761e3e:c.instructions+=1;goto B761e3e;
case 0x761e44:goto L761e44;
case 0x761e4a:c.instructions+=2;goto B761e4a;
case 0x761e4c:c.instructions+=1;goto B761e4c;
case 0x761e52:goto L761e52;
case 0x761e54:c.instructions+=2;goto B761e54;
case 0x761e56:c.instructions+=1;goto B761e56;
case 0x761e58:goto L761e58;
case 0x761e5d:c.instructions+=2;goto B761e5d;
case 0x761e5f:c.instructions+=1;goto B761e5f;
case 0x761e64:goto L761e64;
case 0x761e66:c.instructions+=4;goto B761e66;
case 0x761e68:c.instructions+=3;goto B761e68;
case 0x761e69:c.instructions+=2;goto B761e69;
case 0x761e6a:c.instructions+=1;goto B761e6a;
case 0x761e6c:goto L761e6c;
case 0x761e6d:c.instructions+=2;goto B761e6d;
case 0x761e73:c.instructions+=1;goto B761e73;
case 0x761e79:goto L761e79;
case 0x761e7b:c.instructions+=1;goto B761e7b;
case 0x761e7d:goto L761e7d;
case 0x761e84:c.instructions+=2;goto B761e84;
case 0x761e8b:c.instructions+=1;goto B761e8b;
case 0x761e91:goto L761e91;
case 0x761e95:c.instructions+=2;goto B761e95;
case 0x761e97:c.instructions+=1;goto B761e97;
case 0x761e99:goto L761e99;
case 0x761e9b:c.instructions+=1;goto B761e9b;
case 0x761ea0:goto L761ea0;
case 0x761ea1:goto L761ea1;
case 0x761ea2:c.instructions+=1;goto B761ea2;
case 0x761ea8:goto L761ea8;
case 0x761eaa:c.instructions+=3;goto B761eaa;
case 0x761eab:c.instructions+=2;goto B761eab;
case 0x761eac:c.instructions+=1;goto B761eac;
case 0x761ead:goto L761ead;
case 0x761eaf:c.instructions+=2;goto B761eaf;
case 0x761eb4:c.instructions+=1;goto B761eb4;
case 0x761eb9:goto L761eb9;
case 0x761ebe:c.instructions+=2;goto B761ebe;
case 0x761ec1:c.instructions+=1;goto B761ec1;
case 0x761ec7:goto L761ec7;
case 0x761eca:c.instructions+=2;goto B761eca;
case 0x761ecc:c.instructions+=1;goto B761ecc;
case 0x761ece:goto L761ece;
case 0x761ecf:c.instructions+=1;goto B761ecf;
case 0x761ed5:goto L761ed5;
case 0x761ed7:c.instructions+=3;goto B761ed7;
case 0x761eda:c.instructions+=2;goto B761eda;
case 0x761edc:c.instructions+=1;goto B761edc;
case 0x761ee2:goto L761ee2;
case 0x761ee5:c.instructions+=2;goto B761ee5;
case 0x761ee7:c.instructions+=1;goto B761ee7;
case 0x761ee9:goto L761ee9;
case 0x761eea:c.instructions+=1;goto B761eea;
case 0x761eef:goto L761eef;
case 0x761ef0:goto L761ef0;
case 0x761ef3:c.instructions+=2;goto B761ef3;
case 0x761ef5:c.instructions+=1;goto B761ef5;
case 0x761ef7:goto L761ef7;
case 0x761ef8:c.instructions+=1;goto B761ef8;
case 0x761efd:goto L761efd;
case 0x761efe:goto L761efe;
case 0x761f01:c.instructions+=2;goto B761f01;
case 0x761f03:c.instructions+=1;goto B761f03;
case 0x761f05:goto L761f05;
case 0x761f06:c.instructions+=1;goto B761f06;
case 0x761f0b:goto L761f0b;
case 0x761f0c:goto L761f0c;
case 0x761f0f:c.instructions+=2;goto B761f0f;
case 0x761f11:c.instructions+=1;goto B761f11;
case 0x761f13:goto L761f13;
case 0x761f14:c.instructions+=1;goto B761f14;
case 0x761f19:goto L761f19;
case 0x761f1a:goto L761f1a;
case 0x761f1d:c.instructions+=2;goto B761f1d;
case 0x761f1f:c.instructions+=1;goto B761f1f;
case 0x761f21:goto L761f21;
case 0x761f22:c.instructions+=1;goto B761f22;
case 0x761f27:goto L761f27;
case 0x761f28:goto L761f28;
case 0x761f2b:c.instructions+=2;goto B761f2b;
case 0x761f2d:c.instructions+=1;goto B761f2d;
case 0x761f2f:goto L761f2f;
case 0x761f30:c.instructions+=1;goto B761f30;
case 0x761f35:goto L761f35;
case 0x761f36:goto L761f36;
case 0x761f39:c.instructions+=2;goto B761f39;
case 0x761f3e:c.instructions+=1;goto B761f3e;
case 0x761f40:goto L761f40;
case 0x761f41:c.instructions+=1;goto B761f41;
case 0x761f46:goto L761f46;
case 0x761f47:goto L761f47;
case 0x761f49:c.instructions+=1;goto B761f49;
case 0x761f4e:goto L761f4e;
case 0x761f4f:c.instructions+=5;goto B761f4f;
case 0x761f53:c.instructions+=4;goto B761f53;
case 0x761f56:c.instructions+=3;goto B761f56;
case 0x761f59:c.instructions+=2;goto B761f59;
case 0x761f5b:c.instructions+=1;goto B761f5b;
case 0x761f5d:goto L761f5d;
case 0x761f5f:c.instructions+=1;goto B761f5f;
case 0x761f61:goto L761f61;
case 0x761f67:c.instructions+=1;goto B761f67;
case 0x761f69:goto L761f69;
case 0x761f6a:c.instructions+=1;goto B761f6a;
case 0x761f6f:goto L761f6f;
case 0x761f70:goto L761f70;
case 0x761f74:c.instructions+=1;goto B761f74;
case 0x761f79:goto L761f79;
case 0x761f7b:c.instructions+=1;goto B761f7b;
case 0x761f80:goto L761f80;
case 0x761f81:c.instructions+=5;goto B761f81;
case 0x761f88:c.instructions+=4;goto B761f88;
case 0x761f8b:c.instructions+=3;goto B761f8b;
case 0x761f8e:c.instructions+=2;goto B761f8e;
case 0x761f90:c.instructions+=1;goto B761f90;
case 0x761f92:goto L761f92;
case 0x761f94:c.instructions+=3;goto B761f94;
case 0x761f97:c.instructions+=2;goto B761f97;
case 0x761f99:c.instructions+=1;goto B761f99;
case 0x761f9b:goto L761f9b;
case 0x761f9d:goto L761f9d;
case 0x761fa0:c.instructions+=2;goto B761fa0;
case 0x761fa2:c.instructions+=1;goto B761fa2;
case 0x761fa4:goto L761fa4;
case 0x761fa6:goto L761fa6;
case 0x761fa9:c.instructions+=2;goto B761fa9;
case 0x761fab:c.instructions+=1;goto B761fab;
case 0x761fad:goto L761fad;
case 0x761faf:goto L761faf;
case 0x761fb2:c.instructions+=2;goto B761fb2;
case 0x761fb4:c.instructions+=1;goto B761fb4;
case 0x761fb6:goto L761fb6;
case 0x761fb8:goto L761fb8;
case 0x761fbb:c.instructions+=3;goto B761fbb;
case 0x761fc1:c.instructions+=2;goto B761fc1;
case 0x761fc7:c.instructions+=1;goto B761fc7;
case 0x761fc9:goto L761fc9;
case 0x761fce:c.instructions+=1;goto B761fce;
case 0x761fd0:goto L761fd0;
case 0x761fd3:c.instructions+=1;goto B761fd3;
case 0x761fd5:goto L761fd5;
case 0x761fd6:c.instructions+=1;goto B761fd6;
case 0x761fdb:goto L761fdb;
case 0x761fdc:goto L761fdc;
case 0x761fe0:c.instructions+=1;goto B761fe0;
case 0x761fe5:goto L761fe5;
case 0x761fe6:c.instructions+=1;goto B761fe6;
case 0x761feb:goto L761feb;
case 0x761fec:goto L761fec;
case 0x761fee:c.instructions+=2;goto B761fee;
case 0x761ff4:c.instructions+=1;goto B761ff4;
case 0x761ffa:goto L761ffa;
case 0x761fff:goto L761fff;
default:missing_instruction(c.pc);}
B761000:L761000:{c.instructions+=1;NFSU2_TR(0x761000);
if(r1(R+512)){TAIL_STATIC(0x760fb4u,760);}
}
B761002:L761002:{c.instructions+=1;NFSU2_TR(0x761002);
w1(R+522,u8(0x1ull));
}
B761003:L761003:{c.instructions+=1;NFSU2_TR(0x761003);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L761005;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761003u);}goto L761003;}
}
B761005:L761005:{c.instructions+=2;NFSU2_TR(0x761005);
w1(R+522,u8(0x0ull));
}
B761006:{NFSU2_TR(0x761006);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7610d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B761010:L761010:{c.instructions+=10;NFSU2_TR(0x761010);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761013:{NFSU2_TR(0x761013);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B761015:{NFSU2_TR(0x761015);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761018:{NFSU2_TR(0x761018);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76101b:{NFSU2_TR(0x76101b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76101e:{NFSU2_TR(0x76101e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761021:{NFSU2_TR(0x761021);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x2ull))));
}
B761024:{NFSU2_TR(0x761024);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B761027:{NFSU2_TR(0x761027);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B76102a:{NFSU2_TR(0x76102a);
if(r1(R+512)){TAIL_STATIC(0x760fb4u,760);}
}
B76102c:L76102c:{c.instructions+=1;NFSU2_TR(0x76102c);
w1(R+522,u8(0x1ull));
}
B76102d:L76102d:{c.instructions+=1;NFSU2_TR(0x76102d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76102f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76102du);}goto L76102d;}
}
B76102f:L76102f:{c.instructions+=2;NFSU2_TR(0x76102f);
w1(R+522,u8(0x0ull));
}
B761030:{NFSU2_TR(0x761030);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7610d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B761038:L761038:{c.instructions+=12;NFSU2_TR(0x761038);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76103b:{NFSU2_TR(0x76103b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B76103d:{NFSU2_TR(0x76103d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761040:{NFSU2_TR(0x761040);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761043:{NFSU2_TR(0x761043);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761046:{NFSU2_TR(0x761046);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761049:{NFSU2_TR(0x761049);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76104c:{NFSU2_TR(0x76104c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76104f:{NFSU2_TR(0x76104f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x3ull))));
}
B761052:{NFSU2_TR(0x761052);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x3ull))));
}
B761055:{NFSU2_TR(0x761055);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B761058:{NFSU2_TR(0x761058);
if(r1(R+512)){TAIL_STATIC(0x760fb4u,760);}
}
B76105e:L76105e:{c.instructions+=1;NFSU2_TR(0x76105e);
w1(R+522,u8(0x1ull));
}
B76105f:L76105f:{c.instructions+=1;NFSU2_TR(0x76105f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L761061;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76105fu);}goto L76105f;}
}
B761061:L761061:{c.instructions+=2;NFSU2_TR(0x761061);
w1(R+522,u8(0x0ull));
}
B761062:{NFSU2_TR(0x761062);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7610d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B76108c:L76108c:{c.instructions+=18;NFSU2_TR(0x76108c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B761090:{NFSU2_TR(0x761090);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B761094:{NFSU2_TR(0x761094);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B761098:{NFSU2_TR(0x761098);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B76109c:{NFSU2_TR(0x76109c);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7610a0:{NFSU2_TR(0x7610a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7610a4:{NFSU2_TR(0x7610a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7610a8:{NFSU2_TR(0x7610a8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7610ac:{NFSU2_TR(0x7610ac);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7610b0:{NFSU2_TR(0x7610b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7610b4:{NFSU2_TR(0x7610b4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7610b8:{NFSU2_TR(0x7610b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7610bc:{NFSU2_TR(0x7610bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7610c0:{NFSU2_TR(0x7610c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7610c4:{NFSU2_TR(0x7610c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7610cb:{NFSU2_TR(0x7610cb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7610cd:{NFSU2_TR(0x7610cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7610cf:{NFSU2_TR(0x7610cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7610d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7610e8:L7610e8:{c.instructions+=5;NFSU2_TR(0x7610e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7610eb:{NFSU2_TR(0x7610eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7610ec:{NFSU2_TR(0x7610ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7610ed:{NFSU2_TR(0x7610ed);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7610ee:{NFSU2_TR(0x7610ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7610f0:L7610f0:{c.instructions+=7;NFSU2_TR(0x7610f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7610f3:{NFSU2_TR(0x7610f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7610f6:{NFSU2_TR(0x7610f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7610f9:{NFSU2_TR(0x7610f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7610fa:{NFSU2_TR(0x7610fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7610fb:{NFSU2_TR(0x7610fb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7610fc:{NFSU2_TR(0x7610fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761100:L761100:{c.instructions+=9;NFSU2_TR(0x761100);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761103:{NFSU2_TR(0x761103);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761106:{NFSU2_TR(0x761106);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761109:{NFSU2_TR(0x761109);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76110c:{NFSU2_TR(0x76110c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76110f:{NFSU2_TR(0x76110f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761110:{NFSU2_TR(0x761110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761111:{NFSU2_TR(0x761111);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B761112:{NFSU2_TR(0x761112);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761114:L761114:{c.instructions+=11;NFSU2_TR(0x761114);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761117:{NFSU2_TR(0x761117);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76111a:{NFSU2_TR(0x76111a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76111d:{NFSU2_TR(0x76111d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761120:{NFSU2_TR(0x761120);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B761123:{NFSU2_TR(0x761123);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761126:{NFSU2_TR(0x761126);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761129:{NFSU2_TR(0x761129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76112a:{NFSU2_TR(0x76112a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76112b:{NFSU2_TR(0x76112b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76112c:{NFSU2_TR(0x76112c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76112d:L76112d:{c.instructions+=3;NFSU2_TR(0x76112d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76112f:{NFSU2_TR(0x76112f);
u8 U[4];
w4(U+0,u32(0x7d3e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761134:{NFSU2_TR(0x761134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761139ull));
TAIL_STATIC(0x760da0u,760);
}
B761139:L761139:{c.instructions+=4;NFSU2_TR(0x761139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76113d:{NFSU2_TR(0x76113d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76113f:{NFSU2_TR(0x76113f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761141:{NFSU2_TR(0x761141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761146ull));
TAIL_STATIC(0x76c25cu,76c);
}
B761146:L761146:{c.instructions+=3;NFSU2_TR(0x761146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761147:{NFSU2_TR(0x761147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761148:{NFSU2_TR(0x761148);
{goto L761151;}
}
B76114a:L76114a:{c.instructions+=3;NFSU2_TR(0x76114a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76114c:{NFSU2_TR(0x76114c);
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
B76114d:{NFSU2_TR(0x76114d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761151:L761151:{c.instructions+=3;NFSU2_TR(0x761151);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B761155:{NFSU2_TR(0x761155);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761157:{NFSU2_TR(0x761157);
u8 U[4];
__builtin_memmove((U+0),gp(0x783294),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76115dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76115e:L76115e:{c.instructions+=2;NFSU2_TR(0x76115e);
u8 U[14];
__builtin_memmove((U+6),gp(0x81a1d0),4);
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
B761164:{NFSU2_TR(0x761164);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761167;}}
}
B761166:L761166:{c.instructions+=1;NFSU2_TR(0x761166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761167:L761167:{c.instructions+=1;NFSU2_TR(0x761167);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76112du);}goto L76112d;}
}
B76116c:L76116c:{c.instructions+=9;NFSU2_TR(0x76116c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76116d:{NFSU2_TR(0x76116d);
__builtin_memmove((R+20),(R+16),4);
}
B76116f:{NFSU2_TR(0x76116f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761170:{NFSU2_TR(0x761170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761171:{NFSU2_TR(0x761171);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761172:{NFSU2_TR(0x761172);
__builtin_memmove((R+28),(R+0),4);
}
B761174:{NFSU2_TR(0x761174);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761177:{NFSU2_TR(0x761177);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76117a:{NFSU2_TR(0x76117a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7611ee;}}
}
B76117c:L76117c:{c.instructions+=3;NFSU2_TR(0x76117c);
w4(R+24,u32(0x8bull));
}
B761181:{NFSU2_TR(0x761181);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761183:{NFSU2_TR(0x761183);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7611ee;}}
}
B761185:L761185:{c.instructions+=3;NFSU2_TR(0x761185);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761188:{NFSU2_TR(0x761188);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76118a:{NFSU2_TR(0x76118a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L761191;}}
}
B76118c:L76118c:{c.instructions+=2;NFSU2_TR(0x76118c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76118f:{NFSU2_TR(0x76118f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7611b2;}}
}
B761191:L761191:{c.instructions+=10;NFSU2_TR(0x761191);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761192:{NFSU2_TR(0x761192);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761194:{NFSU2_TR(0x761194);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B761195:{NFSU2_TR(0x761195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761196:{NFSU2_TR(0x761196);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761196);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761196);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B761198:{NFSU2_TR(0x761198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761199:{NFSU2_TR(0x761199);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B76119b:{NFSU2_TR(0x76119b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76119d:{NFSU2_TR(0x76119d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7611a0:{NFSU2_TR(0x7611a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7611a9;}}
}
B7611a2:L7611a2:{c.instructions+=3;NFSU2_TR(0x7611a2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B7611a5:{NFSU2_TR(0x7611a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7611a8:{NFSU2_TR(0x7611a8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7611a9:L7611a9:{c.instructions+=2;NFSU2_TR(0x7611a9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7611ac:{NFSU2_TR(0x7611ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7611ee;}}
}
B7611ae:L7611ae:{c.instructions+=2;NFSU2_TR(0x7611ae);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7611b0:{NFSU2_TR(0x7611b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7611ee;}}
}
B7611b2:L7611b2:{c.instructions+=4;NFSU2_TR(0x7611b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7611b5:{NFSU2_TR(0x7611b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7611b8:{NFSU2_TR(0x7611b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x81ac74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7611bf:{NFSU2_TR(0x7611bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7611c7;}}
}
B7611c1:L7611c1:{c.instructions+=2;NFSU2_TR(0x7611c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7611c4:{NFSU2_TR(0x7611c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7611c7;}}
}
B7611c6:L7611c6:{c.instructions+=1;NFSU2_TR(0x7611c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7611c7:L7611c7:{c.instructions+=9;NFSU2_TR(0x7611c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B7611ca:{NFSU2_TR(0x7611ca);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x16dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7611d0:{NFSU2_TR(0x7611d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7611d3:{NFSU2_TR(0x7611d3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7611d5:{NFSU2_TR(0x7611d5);
u8 U[12];
w4(U+0,u32(u32(u32(0xffff9c21ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7611dc:{NFSU2_TR(0x7611dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7611de:{NFSU2_TR(0x7611de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7611e1:{NFSU2_TR(0x7611e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7611e4:{NFSU2_TR(0x7611e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7611f5;}}
}
B7611e6:L7611e6:{c.instructions+=2;NFSU2_TR(0x7611e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7611e8:{NFSU2_TR(0x7611e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7611fd;}}
}
B7611ea:L7611ea:{c.instructions+=2;NFSU2_TR(0x7611ea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7611ec:{NFSU2_TR(0x7611ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7611fd;}}
}
B7611ee:L7611ee:{c.instructions+=1;NFSU2_TR(0x7611ee);
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
B7611f1:L7611f1:{c.instructions+=4;NFSU2_TR(0x7611f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7611f2:{NFSU2_TR(0x7611f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7611f3:{NFSU2_TR(0x7611f3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7611f4:{NFSU2_TR(0x7611f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7611f5:L7611f5:{c.instructions+=2;NFSU2_TR(0x7611f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7611f7:{NFSU2_TR(0x7611f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7611fd;}}
}
B7611f9:L7611f9:{c.instructions+=2;NFSU2_TR(0x7611f9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7611fb:{NFSU2_TR(0x7611fb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B7611fd:L7611fd:{c.instructions+=4;NFSU2_TR(0x7611fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B761200:{NFSU2_TR(0x761200);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B761203:{NFSU2_TR(0x761203);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761205:{NFSU2_TR(0x761205);
if(r1(R+518)){{goto L761218;}}
}
B761207:L761207:{c.instructions+=8;NFSU2_TR(0x761207);
__builtin_memmove((R+0),(R+4),4);
}
B761209:{NFSU2_TR(0x761209);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76120a:{NFSU2_TR(0x76120a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76120a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76120a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76120c:{NFSU2_TR(0x76120c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76120e:{NFSU2_TR(0x76120e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761211:{NFSU2_TR(0x761211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B761214:{NFSU2_TR(0x761214);
__builtin_memmove((R+0),(R+8),4);
}
B761216:{NFSU2_TR(0x761216);
{goto L76121a;}
}
B761218:L761218:{c.instructions+=1;NFSU2_TR(0x761218);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76121a:L76121a:{c.instructions+=2;NFSU2_TR(0x76121a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76121c:{NFSU2_TR(0x76121c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76121e:L76121e:{c.instructions+=4;NFSU2_TR(0x76121e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761220:{NFSU2_TR(0x761220);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761223:{NFSU2_TR(0x761223);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B761226:{NFSU2_TR(0x761226);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L761232;}}
}
B761228:L761228:{c.instructions+=2;NFSU2_TR(0x761228);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76122a:{NFSU2_TR(0x76122a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76123a;}}
}
B76122c:L76122c:{c.instructions+=2;NFSU2_TR(0x76122c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76122e:{NFSU2_TR(0x76122e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B761230:L761230:{c.instructions+=1;NFSU2_TR(0x761230);
{goto L76123a;}
}
B761232:L761232:{c.instructions+=2;NFSU2_TR(0x761232);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761234:{NFSU2_TR(0x761234);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76123a;}}
}
B761236:L761236:{c.instructions+=2;NFSU2_TR(0x761236);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761238:{NFSU2_TR(0x761238);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76123a:L76123a:{c.instructions+=4;NFSU2_TR(0x76123a);
__builtin_memmove((R+4),(R+24),4);
}
B76123c:{NFSU2_TR(0x76123c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B76123f:{NFSU2_TR(0x76123f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761241:{NFSU2_TR(0x761241);
if(r1(R+518)){{goto L761254;}}
}
B761243:L761243:{c.instructions+=8;NFSU2_TR(0x761243);
__builtin_memmove((R+0),(R+4),4);
}
B761245:{NFSU2_TR(0x761245);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B761246:{NFSU2_TR(0x761246);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761246);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761246);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B761248:{NFSU2_TR(0x761248);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76124a:{NFSU2_TR(0x76124a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76124d:{NFSU2_TR(0x76124d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B761250:{NFSU2_TR(0x761250);
__builtin_memmove((R+0),(R+8),4);
}
B761252:{NFSU2_TR(0x761252);
{goto L761256;}
}
B761254:L761254:{c.instructions+=1;NFSU2_TR(0x761254);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761256:L761256:{c.instructions+=2;NFSU2_TR(0x761256);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761258:{NFSU2_TR(0x761258);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76125a:L76125a:{c.instructions+=4;NFSU2_TR(0x76125a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76125c:{NFSU2_TR(0x76125c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76125f:{NFSU2_TR(0x76125f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B761262:{NFSU2_TR(0x761262);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76126e;}}
}
B761264:L761264:{c.instructions+=2;NFSU2_TR(0x761264);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761266:{NFSU2_TR(0x761266);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76127a;}}
}
B761268:L761268:{c.instructions+=2;NFSU2_TR(0x761268);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76126a:{NFSU2_TR(0x76126a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76126c:L76126c:{c.instructions+=1;NFSU2_TR(0x76126c);
{goto L76127a;}
}
B76126e:L76126e:{c.instructions+=2;NFSU2_TR(0x76126e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761270:{NFSU2_TR(0x761270);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76127a;}}
}
B761272:L761272:{c.instructions+=2;NFSU2_TR(0x761272);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761274:{NFSU2_TR(0x761274);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76127a:L76127a:{c.instructions+=4;NFSU2_TR(0x76127a);
__builtin_memmove((R+4),(R+24),4);
}
B76127c:{NFSU2_TR(0x76127c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B76127f:{NFSU2_TR(0x76127f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761281:{NFSU2_TR(0x761281);
if(r1(R+518)){{goto L761294;}}
}
B761283:L761283:{c.instructions+=8;NFSU2_TR(0x761283);
__builtin_memmove((R+0),(R+4),4);
}
B761285:{NFSU2_TR(0x761285);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B761286:{NFSU2_TR(0x761286);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761286);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761286);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B761288:{NFSU2_TR(0x761288);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76128a:{NFSU2_TR(0x76128a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76128d:{NFSU2_TR(0x76128d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B761290:{NFSU2_TR(0x761290);
__builtin_memmove((R+0),(R+8),4);
}
B761292:{NFSU2_TR(0x761292);
{goto L761296;}
}
B761294:L761294:{c.instructions+=1;NFSU2_TR(0x761294);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761296:L761296:{c.instructions+=2;NFSU2_TR(0x761296);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761298:{NFSU2_TR(0x761298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76129e:L76129e:{c.instructions+=5;NFSU2_TR(0x76129e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7612a0:{NFSU2_TR(0x7612a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7612a2:{NFSU2_TR(0x7612a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7612a5:{NFSU2_TR(0x7612a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7612a8:{NFSU2_TR(0x7612a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7612b8;}}
}
B7612aa:L7612aa:{c.instructions+=2;NFSU2_TR(0x7612aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7612ac:{NFSU2_TR(0x7612ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7612c4;}}
}
B7612ae:L7612ae:{c.instructions+=2;NFSU2_TR(0x7612ae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7612b0:{NFSU2_TR(0x7612b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B7612b6:L7612b6:{c.instructions+=1;NFSU2_TR(0x7612b6);
{goto L7612c4;}
}
B7612b8:L7612b8:{c.instructions+=2;NFSU2_TR(0x7612b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7612ba:{NFSU2_TR(0x7612ba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7612c4;}}
}
B7612bc:L7612bc:{c.instructions+=2;NFSU2_TR(0x7612bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7612be:{NFSU2_TR(0x7612be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B7612c4:L7612c4:{c.instructions+=2;NFSU2_TR(0x7612c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7612c8:{NFSU2_TR(0x7612c8);
if(r1(R+518)){{goto L76130c;}}
}
B7612ca:L7612ca:{c.instructions+=1;NFSU2_TR(0x7612ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7612cfull));
TAIL_STATIC(0x76698cu,766);
}
B7612cf:L7612cf:{c.instructions+=5;NFSU2_TR(0x7612cf);
__builtin_memmove((R+0),gp(0x81a760),4);
}
B7612d4:{NFSU2_TR(0x7612d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7612d7:{NFSU2_TR(0x7612d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7612da:{NFSU2_TR(0x7612da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7612db:{NFSU2_TR(0x7612db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7612e0ull));
TAIL_STATIC(0x75fa2eu,75f);
}
B7612e0:L7612e0:{c.instructions+=3;NFSU2_TR(0x7612e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7612e2:{NFSU2_TR(0x7612e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7612e3:{NFSU2_TR(0x7612e3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B7612e9:L7612e9:{c.instructions+=3;NFSU2_TR(0x7612e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7612ec:{NFSU2_TR(0x7612ec);
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
B7612ee:{NFSU2_TR(0x7612ee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7612f8;}}
}
B7612f0:L7612f0:{c.instructions+=1;NFSU2_TR(0x7612f0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76131e;}}
}
B7612f2:L7612f2:{c.instructions+=2;NFSU2_TR(0x7612f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
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
B7612f6:{NFSU2_TR(0x7612f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76131e;}}
}
B7612f8:L7612f8:{c.instructions+=5;NFSU2_TR(0x7612f8);
__builtin_memmove((R+0),gp(0x81a768),4);
}
B7612fd:{NFSU2_TR(0x7612fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B761300:{NFSU2_TR(0x761300);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B761303:{NFSU2_TR(0x761303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761304:{NFSU2_TR(0x761304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761309ull));
TAIL_STATIC(0x75fa2eu,75f);
}
B761309:L761309:{c.instructions+=2;NFSU2_TR(0x761309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76130a:{NFSU2_TR(0x76130a);
{goto L76131e;}
}
B76130c:L76130c:{c.instructions+=3;NFSU2_TR(0x76130c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76130f:{NFSU2_TR(0x76130f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761310:{NFSU2_TR(0x761310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761315ull));
{goto L761373;}
}
B761315:L761315:{c.instructions+=3;NFSU2_TR(0x761315);
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
B761317:{NFSU2_TR(0x761317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761318:{NFSU2_TR(0x761318);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611eeu);}goto L7611ee;}}
}
B76131e:L76131e:{c.instructions+=4;NFSU2_TR(0x76131e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761320:{NFSU2_TR(0x761320);
__builtin_memmove((R+24),(R+0),4);
}
B761322:{NFSU2_TR(0x761322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761325:{NFSU2_TR(0x761325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761326:L761326:{c.instructions+=1;NFSU2_TR(0x761326);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L761328;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761326u);}goto L761326;}
}
B761328:L761328:{c.instructions+=1;NFSU2_TR(0x761328);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7611f1u);}goto L7611f1;}
}
B76132d:L76132d:{c.instructions+=3;NFSU2_TR(0x76132d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761331:{NFSU2_TR(0x761331);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761333:{NFSU2_TR(0x761333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761338ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76116cu);}goto L76116c;}
}
B761338:L761338:{c.instructions+=2;NFSU2_TR(0x761338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761339:{NFSU2_TR(0x761339);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76133a:L76133a:{c.instructions+=7;NFSU2_TR(0x76133a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76133b:{NFSU2_TR(0x76133b);
__builtin_memmove((R+20),(R+16),4);
}
B76133d:{NFSU2_TR(0x76133d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76133e:{NFSU2_TR(0x76133e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76133f:{NFSU2_TR(0x76133f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B761342:{NFSU2_TR(0x761342);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761343:{NFSU2_TR(0x761343);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761349ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761349:L761349:{c.instructions+=9;NFSU2_TR(0x761349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76134c:{NFSU2_TR(0x76134c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76134f:{NFSU2_TR(0x76134f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761351:{NFSU2_TR(0x761351);
w1(R+512,carry<u32>(r4(R+0),u32(0x2ac18000ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ac18000ull))));
}
B761356:{NFSU2_TR(0x761356);
u8 U[4];
w4(U+0,u32(0x989680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76135b:{NFSU2_TR(0x76135b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))+u32(u32(0xfe624e21ull))));
w4(R+4,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B761361:{NFSU2_TR(0x761361);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761362:{NFSU2_TR(0x761362);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761363:{NFSU2_TR(0x761363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761368ull));
TAIL_STATIC(0x75f750u,75f);
}
B761368:L761368:{c.instructions+=3;NFSU2_TR(0x761368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76136b:{NFSU2_TR(0x76136b);
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
B76136d:{NFSU2_TR(0x76136d);
if(r1(R+518)){{goto L761371;}}
}
B76136f:L76136f:{c.instructions+=1;NFSU2_TR(0x76136f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B761371:L761371:{c.instructions+=2;NFSU2_TR(0x761371);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B761372:{NFSU2_TR(0x761372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761373:L761373:{c.instructions+=7;NFSU2_TR(0x761373);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761377:{NFSU2_TR(0x761377);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761378:{NFSU2_TR(0x761378);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761379:{NFSU2_TR(0x761379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76137b:{NFSU2_TR(0x76137b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76137c:{NFSU2_TR(0x76137c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76137e:{NFSU2_TR(0x76137e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761383ull));
{goto L761e3c;}
}
B761383:L761383:{c.instructions+=3;NFSU2_TR(0x761383);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B761385:{NFSU2_TR(0x761385);
__builtin_memmove((R+28),(R+0),4);
}
B761387:{NFSU2_TR(0x761387);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L761390;}}
}
B761389:L761389:{c.instructions+=2;NFSU2_TR(0x761389);
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
B76138b:{NFSU2_TR(0x76138b);
{goto L761476;}
}
B761390:L761390:{c.instructions+=2;NFSU2_TR(0x761390);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B761394:{NFSU2_TR(0x761394);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7613aa;}}
}
B761396:L761396:{c.instructions+=2;NFSU2_TR(0x761396);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761398:{NFSU2_TR(0x761398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76139dull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76139d:L76139d:{c.instructions+=5;NFSU2_TR(0x76139d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76139f:{NFSU2_TR(0x76139f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7613a0:{NFSU2_TR(0x7613a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7613a3:{NFSU2_TR(0x7613a3);
w4(R+4,u32(0x8b8488ull));
}
B7613a8:{NFSU2_TR(0x7613a8);
if(r1(R+518)){{goto L7613ad;}}
}
B7613aa:L7613aa:{c.instructions+=1;NFSU2_TR(0x7613aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7613ad:L7613ad:{c.instructions+=11;NFSU2_TR(0x7613ad);
__builtin_memmove((R+0),(R+24),4);
}
B7613af:{NFSU2_TR(0x7613af);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7613b0:{NFSU2_TR(0x7613b0);
w4(R+28,u32(0x7861f80ull));
}
B7613b5:{NFSU2_TR(0x7613b5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7613b5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7613b5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7613b7:{NFSU2_TR(0x7613b7);
__builtin_memmove((R+8),(R+0),4);
}
B7613b9:{NFSU2_TR(0x7613b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xf879e080ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7613bf:{NFSU2_TR(0x7613bf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7613c1:{NFSU2_TR(0x7613c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x46ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7613c8:{NFSU2_TR(0x7613c8);
w4(R+0,u32(0x1e13380ull));
}
B7613cd:{NFSU2_TR(0x7613cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7613cf:{NFSU2_TR(0x7613cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7613ec;}}
}
B7613d1:L7613d1:{c.instructions+=4;NFSU2_TR(0x7613d1);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B7613d3:{NFSU2_TR(0x7613d3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7613d4:{NFSU2_TR(0x7613d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7613d6:{NFSU2_TR(0x7613d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7613ec;}}
}
B7613d8:L7613d8:{c.instructions+=5;NFSU2_TR(0x7613d8);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B7613da:{NFSU2_TR(0x7613da);
w4(R+0,u32(0x1e28500ull));
}
B7613df:{NFSU2_TR(0x7613df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7613e0:{NFSU2_TR(0x7613e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7613e2:{NFSU2_TR(0x7613e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7613e9;}}
}
B7613e4:L7613e4:{c.instructions+=3;NFSU2_TR(0x7613e4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7613e5:{NFSU2_TR(0x7613e5);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B7613e7:{NFSU2_TR(0x7613e7);
{goto L7613ec;}
}
B7613e9:L7613e9:{c.instructions+=2;NFSU2_TR(0x7613e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7613eb:{NFSU2_TR(0x7613eb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7613ec:L7613ec:{c.instructions+=11;NFSU2_TR(0x7613ec);
__builtin_memmove((R+0),(R+24),4);
}
B7613ee:{NFSU2_TR(0x7613ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7613f1:{NFSU2_TR(0x7613f1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7613f2:{NFSU2_TR(0x7613f2);
w4(R+28,u32(0x15180ull));
}
B7613f7:{NFSU2_TR(0x7613f7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7613f7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7613f7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7613f9:{NFSU2_TR(0x7613f9);
w4(R+28,u32(0x81ac40ull));
}
B7613fe:{NFSU2_TR(0x7613fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761401:{NFSU2_TR(0x761401);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xfffeae80ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B761407:{NFSU2_TR(0x761407);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B761409:{NFSU2_TR(0x761409);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76140b:{NFSU2_TR(0x76140b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761412;}}
}
B76140d:L76140d:{c.instructions+=1;NFSU2_TR(0x76140d);
w4(R+28,u32(0x81ac74ull));
}
B761412:L761412:{c.instructions+=5;NFSU2_TR(0x761412);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761415:{NFSU2_TR(0x761415);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B761417:{NFSU2_TR(0x761417);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B761418:{NFSU2_TR(0x761418);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76141b:{NFSU2_TR(0x76141b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L761425;}}
}
B76141d:L76141d:{c.instructions+=1;NFSU2_TR(0x76141d);
__builtin_memmove((R+12),(R+0),4);
}
B76141f:L76141f:{c.instructions+=3;NFSU2_TR(0x76141f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B761420:{NFSU2_TR(0x761420);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+12)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B761423:{NFSU2_TR(0x761423);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76141fu);}goto L76141f;}}
}
B761425:L761425:{c.instructions+=33;NFSU2_TR(0x761425);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B761426:{NFSU2_TR(0x761426);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761429:{NFSU2_TR(0x761429);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+8))));
}
B76142c:{NFSU2_TR(0x76142c);
w4(R+28,u32(0x15180ull));
}
B761431:{NFSU2_TR(0x761431);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761434:{NFSU2_TR(0x761434);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761438:{NFSU2_TR(0x761438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76143a:{NFSU2_TR(0x76143a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76143b:{NFSU2_TR(0x76143b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76143b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76143b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76143d:{NFSU2_TR(0x76143d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76143f:{NFSU2_TR(0x76143f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761440:{NFSU2_TR(0x761440);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761442:{NFSU2_TR(0x761442);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B761445:{NFSU2_TR(0x761445);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B761446:{NFSU2_TR(0x761446);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761446);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761446);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B761448:{NFSU2_TR(0x761448);
__builtin_memmove((R+0),(R+24),4);
}
B76144a:{NFSU2_TR(0x76144a);
w4(R+28,u32(0xe10ull));
}
B76144f:{NFSU2_TR(0x76144f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761452:{NFSU2_TR(0x761452);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B761453:{NFSU2_TR(0x761453);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761453);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761453);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B761455:{NFSU2_TR(0x761455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761456:{NFSU2_TR(0x761456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761459:{NFSU2_TR(0x761459);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xfffff1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76145f:{NFSU2_TR(0x76145f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B761461:{NFSU2_TR(0x761461);
__builtin_memmove((R+0),(R+24),4);
}
B761463:{NFSU2_TR(0x761463);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B761464:{NFSU2_TR(0x761464);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761464);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x761464);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B761466:{NFSU2_TR(0x761466);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761469:{NFSU2_TR(0x761469);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76146c:{NFSU2_TR(0x76146c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B76146e:{NFSU2_TR(0x76146e);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
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
B761472:{NFSU2_TR(0x761472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B761474:{NFSU2_TR(0x761474);
__builtin_memmove((R+0),(R+4),4);
}
B761476:L761476:{c.instructions+=4;NFSU2_TR(0x761476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761477:{NFSU2_TR(0x761477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761478:{NFSU2_TR(0x761478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761479:{NFSU2_TR(0x761479);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76147a:L76147a:{c.instructions+=12;NFSU2_TR(0x76147a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76147b:{NFSU2_TR(0x76147b);
__builtin_memmove((R+20),(R+16),4);
}
B76147d:{NFSU2_TR(0x76147d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B761483:{NFSU2_TR(0x761483);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B761488:{NFSU2_TR(0x761488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76148b:{NFSU2_TR(0x76148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76148e:{NFSU2_TR(0x76148e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76148f:{NFSU2_TR(0x76148f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761490:{NFSU2_TR(0x761490);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761493:{NFSU2_TR(0x761493);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B761495:{NFSU2_TR(0x761495);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761496:{NFSU2_TR(0x761496);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761498:L761498:{c.instructions+=2;NFSU2_TR(0x761498);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a1d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B76149f:{NFSU2_TR(0x76149f);
if(r1(R+518)){{goto L7614a7;}}
}
B7614a1:L7614a1:{c.instructions+=3;NFSU2_TR(0x7614a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7614a2:{NFSU2_TR(0x7614a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x12ull))));
}
B7614a5:{NFSU2_TR(0x7614a5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761498u);}goto L761498;}}
}
B7614a7:L7614a7:{c.instructions+=4;NFSU2_TR(0x7614a7);
__builtin_memmove((R+24),(R+0),4);
}
B7614a9:{NFSU2_TR(0x7614a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7614ac:{NFSU2_TR(0x7614ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81a1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7614b2:{NFSU2_TR(0x7614b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7615db;}}
}
B7614b8:L7614b8:{c.instructions+=3;NFSU2_TR(0x7614b8);
__builtin_memmove((R+0),gp(0x8b8420),4);
}
B7614bd:{NFSU2_TR(0x7614bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7614c0:{NFSU2_TR(0x7614c0);
if(r1(R+518)){{goto L7615b6;}}
}
B7614c6:L7614c6:{c.instructions+=2;NFSU2_TR(0x7614c6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7614c8:{NFSU2_TR(0x7614c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7614d7;}}
}
B7614ca:L7614ca:{c.instructions+=2;NFSU2_TR(0x7614ca);
u8 U[8];
__builtin_memmove((U+0),gp(0x819c58),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7614d1:{NFSU2_TR(0x7614d1);
if(r1(R+518)){{goto L7615b6;}}
}
B7614d7:L7614d7:{c.instructions+=2;NFSU2_TR(0x7614d7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7614dd:{NFSU2_TR(0x7614dd);
if(r1(R+518)){{goto L7615db;}}
}
B7614e3:L7614e3:{c.instructions+=6;NFSU2_TR(0x7614e3);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7614e8:{NFSU2_TR(0x7614e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7614ee:{NFSU2_TR(0x7614ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7614ef:{NFSU2_TR(0x7614ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7614f0:{NFSU2_TR(0x7614f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7614f3:{NFSU2_TR(0x7614f3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783134),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7614f9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7614f9:L7614f9:{c.instructions+=2;NFSU2_TR(0x7614f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7614fb:{NFSU2_TR(0x7614fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761510;}}
}
B7614fd:L7614fd:{c.instructions+=4;NFSU2_TR(0x7614fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B761503:{NFSU2_TR(0x761503);
u8 U[4];
w4(U+0,u32(0x7d3d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761508:{NFSU2_TR(0x761508);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761509:{NFSU2_TR(0x761509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76150eull));
TAIL_STATIC(0x766ac0u,766);
}
B76150e:L76150e:{c.instructions+=2;NFSU2_TR(0x76150e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76150f:{NFSU2_TR(0x76150f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761510:L761510:{c.instructions+=4;NFSU2_TR(0x761510);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B761516:{NFSU2_TR(0x761516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761517:{NFSU2_TR(0x761517);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76151d:{NFSU2_TR(0x76151d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761522ull));
TAIL_STATIC(0x766bc0u,766);
}
B761522:L761522:{c.instructions+=4;NFSU2_TR(0x761522);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B761523:{NFSU2_TR(0x761523);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3cull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761526:{NFSU2_TR(0x761526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761527:{NFSU2_TR(0x761527);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L761552;}}
}
B761529:L761529:{c.instructions+=3;NFSU2_TR(0x761529);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76152f:{NFSU2_TR(0x76152f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761530:{NFSU2_TR(0x761530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761535ull));
TAIL_STATIC(0x766bc0u,766);
}
B761535:L761535:{c.instructions+=8;NFSU2_TR(0x761535);
__builtin_memmove((R+28),(R+0),4);
}
B761537:{NFSU2_TR(0x761537);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76153d:{NFSU2_TR(0x76153d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3bull))));
}
B761540:{NFSU2_TR(0x761540);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761542:{NFSU2_TR(0x761542);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B761544:{NFSU2_TR(0x761544);
u8 U[4];
w4(U+0,u32(0x7d3d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761549:{NFSU2_TR(0x761549);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76154a:{NFSU2_TR(0x76154a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76154full));
TAIL_STATIC(0x75c840u,75c);
}
B76154f:L76154f:{c.instructions+=1;NFSU2_TR(0x76154f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B761552:L761552:{c.instructions+=2;NFSU2_TR(0x761552);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761553:{NFSU2_TR(0x761553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761558ull));
TAIL_STATIC(0x766bc0u,766);
}
B761558:L761558:{c.instructions+=3;NFSU2_TR(0x761558);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81a1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76155e:{NFSU2_TR(0x76155e);
__builtin_memmove((R+12),(R+0),4);
}
B761560:{NFSU2_TR(0x761560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761565ull));
TAIL_STATIC(0x766bc0u,766);
}
B761565:L761565:{c.instructions+=6;NFSU2_TR(0x761565);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B761569:{NFSU2_TR(0x761569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76156a:{NFSU2_TR(0x76156a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76156d:{NFSU2_TR(0x76156d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76156e:{NFSU2_TR(0x76156e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B761571:{NFSU2_TR(0x761571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761576ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B761576:L761576:{c.instructions+=4;NFSU2_TR(0x761576);
__builtin_memmove((R+12),(R+16),4);
}
B761578:{NFSU2_TR(0x761578);
u8 U[4];
w4(U+0,u32(0x7d4168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76157d:{NFSU2_TR(0x76157d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76157e:{NFSU2_TR(0x76157e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761583ull));
TAIL_STATIC(0x766ac0u,766);
}
B761583:L761583:{c.instructions+=3;NFSU2_TR(0x761583);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761584:{NFSU2_TR(0x761584);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761585:{NFSU2_TR(0x761585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76158aull));
TAIL_STATIC(0x766ad0u,766);
}
B76158a:L76158a:{c.instructions+=3;NFSU2_TR(0x76158a);
u8 U[4];
w4(U+0,u32(0x7d3d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76158f:{NFSU2_TR(0x76158f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761590:{NFSU2_TR(0x761590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761595ull));
TAIL_STATIC(0x766ad0u,766);
}
B761595:L761595:{c.instructions+=3;NFSU2_TR(0x761595);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81a1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76159b:{NFSU2_TR(0x76159b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76159c:{NFSU2_TR(0x76159c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7615a1ull));
TAIL_STATIC(0x766ad0u,766);
}
B7615a1:L7615a1:{c.instructions+=4;NFSU2_TR(0x7615a1);
u8 U[4];
w4(U+0,u32(0x12010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615a6:{NFSU2_TR(0x7615a6);
u8 U[4];
w4(U+0,u32(0x7d3d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615ab:{NFSU2_TR(0x7615ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615ac:{NFSU2_TR(0x7615ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7615b1ull));
TAIL_STATIC(0x76ae4eu,76a);
}
B7615b1:L7615b1:{c.instructions+=2;NFSU2_TR(0x7615b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B7615b4:{NFSU2_TR(0x7615b4);
{goto L7615db;}
}
B7615b6:L7615b6:{c.instructions+=6;NFSU2_TR(0x7615b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615b7:{NFSU2_TR(0x7615b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7615ba:{NFSU2_TR(0x7615ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615bb:{NFSU2_TR(0x7615bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81a1dcull))));
__builtin_memmove((R+24),(U+0),4);
}
B7615c1:{NFSU2_TR(0x7615c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7615c3:{NFSU2_TR(0x7615c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7615c8ull));
TAIL_STATIC(0x766bc0u,766);
}
B7615c8:L7615c8:{c.instructions+=5;NFSU2_TR(0x7615c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7615c9:{NFSU2_TR(0x7615c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615ca:{NFSU2_TR(0x7615ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7615cc:{NFSU2_TR(0x7615cc);
u8 U[4];
w4(U+0,u32(0xfffffff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615ce:{NFSU2_TR(0x7615ce);
u8 U[4];
__builtin_memmove((U+0),gp(0x783108),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7615d4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7615d4:L7615d4:{c.instructions+=2;NFSU2_TR(0x7615d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7615d5:{NFSU2_TR(0x7615d5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7615dbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7615db:L7615db:{c.instructions+=4;NFSU2_TR(0x7615db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+16),(U+0),4);
}
B7615e1:{NFSU2_TR(0x7615e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7615e4:{NFSU2_TR(0x7615e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B7615e7:{NFSU2_TR(0x7615e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7615ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76115eu);}goto L76115e;}
}
B7615ec:L7615ec:{c.instructions+=5;NFSU2_TR(0x7615ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7615ed:{NFSU2_TR(0x7615ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7615ee:{NFSU2_TR(0x7615ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7615ef:{NFSU2_TR(0x7615ef);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7615f0:{NFSU2_TR(0x7615f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7615f1:L7615f1:{c.instructions+=3;NFSU2_TR(0x7615f1);
__builtin_memmove((R+0),gp(0x8b8420),4);
}
B7615f6:{NFSU2_TR(0x7615f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7615f9:{NFSU2_TR(0x7615f9);
if(r1(R+518)){{goto L761608;}}
}
B7615fb:L7615fb:{c.instructions+=2;NFSU2_TR(0x7615fb);
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
B7615fd:{NFSU2_TR(0x7615fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761629;}}
}
B7615ff:L7615ff:{c.instructions+=2;NFSU2_TR(0x7615ff);
u8 U[14];
__builtin_memmove((U+6),gp(0x819c58),4);
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
B761606:{NFSU2_TR(0x761606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761629;}}
}
B761608:L761608:{c.instructions+=2;NFSU2_TR(0x761608);
u8 U[4];
w4(U+0,u32(0xfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76160d:{NFSU2_TR(0x76160d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761612ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76147au);}goto L76147a;}
}
B761612:L761612:{c.instructions+=4;NFSU2_TR(0x761612);
__builtin_memmove((R+0),gp(0x8b84ac),4);
}
B761617:{NFSU2_TR(0x761617);
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
B761619:{NFSU2_TR(0x761619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76161a:{NFSU2_TR(0x76161a);
if(r1(R+518)){{goto L76161e;}}
}
B76161c:L76161c:{c.instructions+=1;NFSU2_TR(0x76161c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76161eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76161e:L76161e:{c.instructions+=2;NFSU2_TR(0x76161e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761623:{NFSU2_TR(0x761623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761628ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76147au);}goto L76147a;}
}
B761628:L761628:{c.instructions+=1;NFSU2_TR(0x761628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761629:L761629:{c.instructions+=1;NFSU2_TR(0x761629);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76162a:L76162a:{c.instructions+=7;NFSU2_TR(0x76162a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76162b:{NFSU2_TR(0x76162b);
__builtin_memmove((R+20),(R+16),4);
}
B76162d:{NFSU2_TR(0x76162d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76162e:{NFSU2_TR(0x76162e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76162f:{NFSU2_TR(0x76162f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761630:{NFSU2_TR(0x761630);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761631:{NFSU2_TR(0x761631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761636ull));
{goto L761e3c;}
}
B761636:L761636:{c.instructions+=5;NFSU2_TR(0x761636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B761639:{NFSU2_TR(0x761639);
__builtin_memmove((R+24),(R+0),4);
}
B76163b:{NFSU2_TR(0x76163b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76163e:{NFSU2_TR(0x76163e);
__builtin_memmove((R+0),gp(0x81a2ec),4);
}
B761643:{NFSU2_TR(0x761643);
__builtin_memmove((R+4),(R+8),4);
}
B761645:L761645:{c.instructions+=2;NFSU2_TR(0x761645);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B761647:{NFSU2_TR(0x761647);
if(r1(R+518)){{goto L761656;}}
}
B761649:L761649:{c.instructions+=5;NFSU2_TR(0x761649);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B76164c:{NFSU2_TR(0x76164c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B76164f:{NFSU2_TR(0x76164f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B761652:{NFSU2_TR(0x761652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B761654:{NFSU2_TR(0x761654);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761645u);}goto L761645;}}
}
B761656:L761656:{c.instructions+=4;NFSU2_TR(0x761656);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B761659:{NFSU2_TR(0x761659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76165c:{NFSU2_TR(0x76165c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B76165e:{NFSU2_TR(0x76165e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L761664;}}
}
B761660:L761660:{c.instructions+=2;NFSU2_TR(0x761660);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B761662:{NFSU2_TR(0x761662);
if(r1(R+518)){{goto L761666;}}
}
B761664:L761664:{c.instructions+=1;NFSU2_TR(0x761664);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B761666:L761666:{c.instructions+=2;NFSU2_TR(0x761666);
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
B761668:{NFSU2_TR(0x761668);
if(r1(R+518)){{goto L761780;}}
}
B76166e:L76166e:{c.instructions+=4;NFSU2_TR(0x76166e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B761671:{NFSU2_TR(0x761671);
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
B761673:{NFSU2_TR(0x761673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761676:{NFSU2_TR(0x761676);
if(r1(R+518)){{goto L761780;}}
}
B76167c:L76167c:{c.instructions+=2;NFSU2_TR(0x76167c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76167f:{NFSU2_TR(0x76167f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76168d;}}
}
B761681:L761681:{c.instructions+=4;NFSU2_TR(0x761681);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761685:{NFSU2_TR(0x761685);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761687:{NFSU2_TR(0x761687);
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
B761688:{NFSU2_TR(0x761688);
{goto L761789;}
}
B76168d:L76168d:{c.instructions+=2;NFSU2_TR(0x76168d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761690:{NFSU2_TR(0x761690);
if(r1(R+518)){{goto L76177b;}}
}
B761696:L761696:{c.instructions+=7;NFSU2_TR(0x761696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761699:{NFSU2_TR(0x761699);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76169c:{NFSU2_TR(0x76169c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76169f:{NFSU2_TR(0x76169f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7616a2:{NFSU2_TR(0x7616a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7616a5:{NFSU2_TR(0x7616a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7616a8:{NFSU2_TR(0x7616a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76176d;}}
}
B7616ae:L7616ae:{c.instructions+=5;NFSU2_TR(0x7616ae);
__builtin_memmove((R+8),gp(0x81a2e0),4);
}
B7616b4:{NFSU2_TR(0x7616b4);
__builtin_memmove((R+0),gp(0x81a2e4),4);
}
B7616b9:{NFSU2_TR(0x7616b9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7616bb:{NFSU2_TR(0x7616bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7616bd:{NFSU2_TR(0x7616bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7616e6;}}
}
B7616bf:L7616bf:{c.instructions+=2;NFSU2_TR(0x7616bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7616c2:{NFSU2_TR(0x7616c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7616c5:L7616c5:{c.instructions+=9;NFSU2_TR(0x7616c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7616c8:{NFSU2_TR(0x7616c8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B7616cd:{NFSU2_TR(0x7616cd);
__builtin_memmove((R+28),gp(0x81a2e0),4);
}
B7616d3:{NFSU2_TR(0x7616d3);
__builtin_memmove((R+12),gp(0x81a2e4),4);
}
B7616d9:{NFSU2_TR(0x7616d9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7616da:{NFSU2_TR(0x7616da);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B7616dc:{NFSU2_TR(0x7616dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B7616df:{NFSU2_TR(0x7616df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7616e1:{NFSU2_TR(0x7616e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7616c5u);}goto L7616c5;}}
}
B7616e3:L7616e3:{c.instructions+=1;NFSU2_TR(0x7616e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7616e6:L7616e6:{c.instructions+=4;NFSU2_TR(0x7616e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7616e8:{NFSU2_TR(0x7616e8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc000008eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc000008eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc000008eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7616ee:{NFSU2_TR(0x7616ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7616f1:{NFSU2_TR(0x7616f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7616fc;}}
}
B7616f3:L7616f3:{c.instructions+=2;NFSU2_TR(0x7616f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x83ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7616fa:{NFSU2_TR(0x7616fa);
{goto L761760;}
}
B7616fc:L7616fc:{c.instructions+=2;NFSU2_TR(0x7616fc);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0000090ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0000090ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0000090ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761702:{NFSU2_TR(0x761702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76170d;}}
}
B761704:L761704:{c.instructions+=2;NFSU2_TR(0x761704);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x81ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76170b:{NFSU2_TR(0x76170b);
{goto L761760;}
}
B76170d:L76170d:{c.instructions+=2;NFSU2_TR(0x76170d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0000091ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0000091ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0000091ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761713:{NFSU2_TR(0x761713);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76171e;}}
}
B761715:L761715:{c.instructions+=2;NFSU2_TR(0x761715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x84ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76171c:{NFSU2_TR(0x76171c);
{goto L761760;}
}
B76171e:L76171e:{c.instructions+=2;NFSU2_TR(0x76171e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0000093ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0000093ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0000093ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761724:{NFSU2_TR(0x761724);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76172f;}}
}
B761726:L761726:{c.instructions+=2;NFSU2_TR(0x761726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x85ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76172d:{NFSU2_TR(0x76172d);
{goto L761760;}
}
B76172f:L76172f:{c.instructions+=2;NFSU2_TR(0x76172f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc000008dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc000008dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc000008dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761735:{NFSU2_TR(0x761735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761740;}}
}
B761737:L761737:{c.instructions+=2;NFSU2_TR(0x761737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x82ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76173e:{NFSU2_TR(0x76173e);
{goto L761760;}
}
B761740:L761740:{c.instructions+=2;NFSU2_TR(0x761740);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc000008full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc000008full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc000008full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761746:{NFSU2_TR(0x761746);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761751;}}
}
B761748:L761748:{c.instructions+=2;NFSU2_TR(0x761748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x86ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76174f:{NFSU2_TR(0x76174f);
{goto L761760;}
}
B761751:L761751:{c.instructions+=2;NFSU2_TR(0x761751);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0000092ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0000092ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0000092ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761757:{NFSU2_TR(0x761757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761760;}}
}
B761759:L761759:{c.instructions+=1;NFSU2_TR(0x761759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x8aull));
s4(u32(r4(U+0)),r4(U+4));
}
B761760:L761760:{c.instructions+=3;NFSU2_TR(0x761760);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B761763:{NFSU2_TR(0x761763);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761765:{NFSU2_TR(0x761765);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761767ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761767:L761767:{c.instructions+=3;NFSU2_TR(0x761767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761768:{NFSU2_TR(0x761768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76176b:{NFSU2_TR(0x76176b);
{goto L761774;}
}
B76176d:L76176d:{c.instructions+=3;NFSU2_TR(0x76176d);
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
B761771:{NFSU2_TR(0x761771);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761772:{NFSU2_TR(0x761772);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761774ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761774:L761774:{c.instructions+=3;NFSU2_TR(0x761774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761777:{NFSU2_TR(0x761777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761778:{NFSU2_TR(0x761778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76177b:L76177b:{c.instructions+=2;NFSU2_TR(0x76177b);
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
B76177e:{NFSU2_TR(0x76177e);
{goto L761789;}
}
B761780:L761780:{c.instructions+=2;NFSU2_TR(0x761780);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B761783:{NFSU2_TR(0x761783);
u8 U[4];
__builtin_memmove((U+0),gp(0x783104),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761789ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761789:L761789:{c.instructions+=5;NFSU2_TR(0x761789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76178a:{NFSU2_TR(0x76178a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76178b:{NFSU2_TR(0x76178b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76178c:{NFSU2_TR(0x76178c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76178d:{NFSU2_TR(0x76178d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76178e:L76178e:{c.instructions+=6;NFSU2_TR(0x76178e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76178f:{NFSU2_TR(0x76178f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B761791:{NFSU2_TR(0x761791);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5f0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761797:{NFSU2_TR(0x761797);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761798:{NFSU2_TR(0x761798);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761799:{NFSU2_TR(0x761799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7617a0;}}
}
B76179b:L76179b:{c.instructions+=1;NFSU2_TR(0x76179b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7617a0ull));
TAIL_STATIC(0x765f57u,765);
}
B7617a0:L7617a0:{c.instructions+=4;NFSU2_TR(0x7617a0);
__builtin_memmove((R+24),gp(0x8b8418),4);
}
B7617a6:{NFSU2_TR(0x7617a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7617a8:{NFSU2_TR(0x7617a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7617aa:{NFSU2_TR(0x7617aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7617be;}}
}
B7617ac:L7617ac:{c.instructions+=1;NFSU2_TR(0x7617ac);
{goto L7617de;}
}
B7617ae:L7617ae:{c.instructions+=2;NFSU2_TR(0x7617ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7617b0:{NFSU2_TR(0x7617b0);
if(r1(R+518)){{goto L7617b3;}}
}
B7617b2:L7617b2:{c.instructions+=1;NFSU2_TR(0x7617b2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7617b3:L7617b3:{c.instructions+=2;NFSU2_TR(0x7617b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7617b4:{NFSU2_TR(0x7617b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7617b9ull));
TAIL_STATIC(0x766bc0u,766);
}
B7617b9:L7617b9:{c.instructions+=2;NFSU2_TR(0x7617b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7617ba:{NFSU2_TR(0x7617ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B7617be:L7617be:{c.instructions+=3;NFSU2_TR(0x7617be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7617c0:{NFSU2_TR(0x7617c0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7617c2:{NFSU2_TR(0x7617c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7617aeu);}goto L7617ae;}}
}
B7617c4:L7617c4:{c.instructions+=3;NFSU2_TR(0x7617c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7617cb:{NFSU2_TR(0x7617cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7617cc:{NFSU2_TR(0x7617cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7617d1ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7617d1:L7617d1:{c.instructions+=5;NFSU2_TR(0x7617d1);
__builtin_memmove((R+28),(R+0),4);
}
B7617d3:{NFSU2_TR(0x7617d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7617d5:{NFSU2_TR(0x7617d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7617d6:{NFSU2_TR(0x7617d6);
__builtin_memmove(gp(0x8b8450),(R+28),4);
}
B7617dc:{NFSU2_TR(0x7617dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7617e3;}}
}
B7617de:L7617de:{c.instructions+=2;NFSU2_TR(0x7617de);
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
B7617e1:{NFSU2_TR(0x7617e1);
{goto L76183b;}
}
B7617e3:L7617e3:{c.instructions+=3;NFSU2_TR(0x7617e3);
__builtin_memmove((R+24),gp(0x8b8418),4);
}
B7617e9:{NFSU2_TR(0x7617e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7617ea:{NFSU2_TR(0x7617ea);
{goto L761816;}
}
B7617ec:L7617ec:{c.instructions+=2;NFSU2_TR(0x7617ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7617ed:{NFSU2_TR(0x7617ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7617f2ull));
TAIL_STATIC(0x766bc0u,766);
}
B7617f2:L7617f2:{c.instructions+=5;NFSU2_TR(0x7617f2);
__builtin_memmove((R+20),(R+0),4);
}
B7617f4:{NFSU2_TR(0x7617f4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B7617f5:{NFSU2_TR(0x7617f5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7617f8:{NFSU2_TR(0x7617f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7617f9:{NFSU2_TR(0x7617f9);
if(r1(R+518)){{goto L761814;}}
}
B7617fb:L7617fb:{c.instructions+=2;NFSU2_TR(0x7617fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7617fc:{NFSU2_TR(0x7617fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761801ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B761801:L761801:{c.instructions+=4;NFSU2_TR(0x761801);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761803:{NFSU2_TR(0x761803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761804:{NFSU2_TR(0x761804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B761806:{NFSU2_TR(0x761806);
if(r1(R+518)){{goto L76183f;}}
}
B761808:L761808:{c.instructions+=3;NFSU2_TR(0x761808);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761809:{NFSU2_TR(0x761809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76180a:{NFSU2_TR(0x76180a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76180full));
TAIL_STATIC(0x766ac0u,766);
}
B76180f:L76180f:{c.instructions+=3;NFSU2_TR(0x76180f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761810:{NFSU2_TR(0x761810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761811:{NFSU2_TR(0x761811);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B761814:L761814:{c.instructions+=1;NFSU2_TR(0x761814);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B761816:L761816:{c.instructions+=2;NFSU2_TR(0x761816);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761818:{NFSU2_TR(0x761818);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7617ecu);}goto L7617ec;}}
}
B76181a:L76181a:{c.instructions+=2;NFSU2_TR(0x76181a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8418),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761820:{NFSU2_TR(0x761820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761825ull));
TAIL_STATIC(0x75c6dau,75c);
}
B761825:L761825:{c.instructions+=4;NFSU2_TR(0x761825);
__builtin_memmove(gp(0x8b8418),(R+12),4);
}
B76182b:{NFSU2_TR(0x76182b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B76182d:{NFSU2_TR(0x76182d);
s4(0x8bb5e4,u32(0x1ull));
}
B761837:{NFSU2_TR(0x761837);
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
B761839:L761839:{c.instructions+=2;NFSU2_TR(0x761839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76183a:{NFSU2_TR(0x76183a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76183b:L76183b:{c.instructions+=4;NFSU2_TR(0x76183b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76183c:{NFSU2_TR(0x76183c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76183d:{NFSU2_TR(0x76183d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76183e:{NFSU2_TR(0x76183e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76183f:L76183f:{c.instructions+=2;NFSU2_TR(0x76183f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8450),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761845:{NFSU2_TR(0x761845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76184aull));
TAIL_STATIC(0x75c6dau,75c);
}
B76184a:L76184a:{c.instructions+=3;NFSU2_TR(0x76184a);
__builtin_memmove(gp(0x8b8450),(R+12),4);
}
B761850:{NFSU2_TR(0x761850);
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
B761853:{NFSU2_TR(0x761853);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761839u);}goto L761839;}
}
B761855:L761855:{c.instructions+=12;NFSU2_TR(0x761855);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761856:{NFSU2_TR(0x761856);
__builtin_memmove((R+20),(R+16),4);
}
B761858:{NFSU2_TR(0x761858);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761859:{NFSU2_TR(0x761859);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76185a:{NFSU2_TR(0x76185a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76185d:{NFSU2_TR(0x76185d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76185f:{NFSU2_TR(0x76185f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B761862:{NFSU2_TR(0x761862);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761863:{NFSU2_TR(0x761863);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B761865:{NFSU2_TR(0x761865);
__builtin_memmove((R+28),(R+4),4);
}
B761867:{NFSU2_TR(0x761867);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B76186d:{NFSU2_TR(0x76186d);
if(r1(R+518)){{goto L761878;}}
}
B76186f:L76186f:{c.instructions+=3;NFSU2_TR(0x76186f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761872:{NFSU2_TR(0x761872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761876:{NFSU2_TR(0x761876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B761878:L761878:{c.instructions+=2;NFSU2_TR(0x761878);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76187b:{NFSU2_TR(0x76187b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76188b;}}
}
B76187d:L76187d:{c.instructions+=7;NFSU2_TR(0x76187d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76187f:{NFSU2_TR(0x76187f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761881:{NFSU2_TR(0x761881);
__builtin_memmove((R+4),(R+518),1);
}
B761884:{NFSU2_TR(0x761884);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B761885:{NFSU2_TR(0x761885);
__builtin_memmove((R+8),(R+4),4);
}
B761887:{NFSU2_TR(0x761887);
w1(R+4,u8(0x22ull));
}
B761889:{NFSU2_TR(0x761889);
{goto L7618b8;}
}
B76188b:L76188b:{c.instructions+=3;NFSU2_TR(0x76188b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B76188d:{NFSU2_TR(0x76188d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76188f:{NFSU2_TR(0x76188f);
if(r1(R+518)){{goto L761896;}}
}
B761891:L761891:{c.instructions+=3;NFSU2_TR(0x761891);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B761893:{NFSU2_TR(0x761893);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B761895:{NFSU2_TR(0x761895);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B761896:L761896:{c.instructions+=5;NFSU2_TR(0x761896);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B761898:{NFSU2_TR(0x761898);
w4(R+12,u32(r1(R+4)));
}
B76189b:{NFSU2_TR(0x76189b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76189c:{NFSU2_TR(0x76189c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7618a3:{NFSU2_TR(0x7618a3);
if(r1(R+518)){{goto L7618b1;}}
}
B7618a5:L7618a5:{c.instructions+=3;NFSU2_TR(0x7618a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7618a7:{NFSU2_TR(0x7618a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7618a9:{NFSU2_TR(0x7618a9);
if(r1(R+518)){{goto L7618b0;}}
}
B7618ab:L7618ab:{c.instructions+=3;NFSU2_TR(0x7618ab);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B7618ad:{NFSU2_TR(0x7618ad);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B7618af:{NFSU2_TR(0x7618af);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7618b0:L7618b0:{c.instructions+=1;NFSU2_TR(0x7618b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7618b1:L7618b1:{c.instructions+=3;NFSU2_TR(0x7618b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7618b3:{NFSU2_TR(0x7618b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7618b6:{NFSU2_TR(0x7618b6);
if(r1(R+518)){{goto L7618ea;}}
}
B7618b8:L7618b8:{c.instructions+=2;NFSU2_TR(0x7618b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7618ba:{NFSU2_TR(0x7618ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761878u);}goto L761878;}}
}
B7618bc:L7618bc:{c.instructions+=2;NFSU2_TR(0x7618bc);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7618bf:{NFSU2_TR(0x7618bf);
if(r1(R+518)){{goto L7618c6;}}
}
B7618c1:L7618c1:{c.instructions+=2;NFSU2_TR(0x7618c1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7618c4:{NFSU2_TR(0x7618c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761878u);}goto L761878;}}
}
B7618c6:L7618c6:{c.instructions+=2;NFSU2_TR(0x7618c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7618c8:{NFSU2_TR(0x7618c8);
if(r1(R+518)){{goto L7618ce;}}
}
B7618ca:L7618ca:{c.instructions+=1;NFSU2_TR(0x7618ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7618ce:L7618ce:{c.instructions+=1;NFSU2_TR(0x7618ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7618d2:L7618d2:{c.instructions+=2;NFSU2_TR(0x7618d2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7618d5:{NFSU2_TR(0x7618d5);
if(r1(R+518)){{goto L7619b1;}}
}
B7618db:L7618db:{c.instructions+=3;NFSU2_TR(0x7618db);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7618dd:{NFSU2_TR(0x7618dd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7618e0:{NFSU2_TR(0x7618e0);
if(r1(R+518)){{goto L7618e7;}}
}
B7618e2:L7618e2:{c.instructions+=2;NFSU2_TR(0x7618e2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7618e5:{NFSU2_TR(0x7618e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7618ed;}}
}
B7618e7:L7618e7:{c.instructions+=2;NFSU2_TR(0x7618e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7618e8:{NFSU2_TR(0x7618e8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7618dbu);}goto L7618db;}
}
B7618ea:L7618ea:{c.instructions+=2;NFSU2_TR(0x7618ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7618eb:{NFSU2_TR(0x7618eb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7618ceu);}goto L7618ce;}
}
B7618ed:L7618ed:{c.instructions+=2;NFSU2_TR(0x7618ed);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7618f0:{NFSU2_TR(0x7618f0);
if(r1(R+518)){{goto L7619b1;}}
}
B7618f6:L7618f6:{c.instructions+=2;NFSU2_TR(0x7618f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7618fa:{NFSU2_TR(0x7618fa);
if(r1(R+518)){{goto L761905;}}
}
B7618fc:L7618fc:{c.instructions+=3;NFSU2_TR(0x7618fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7618ff:{NFSU2_TR(0x7618ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761903:{NFSU2_TR(0x761903);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B761905:L761905:{c.instructions+=1;NFSU2_TR(0x761905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B761907:L761907:{c.instructions+=4;NFSU2_TR(0x761907);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B761909:{NFSU2_TR(0x761909);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76190a:{NFSU2_TR(0x76190a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76190c:{NFSU2_TR(0x76190c);
{goto L761910;}
}
B76190e:L76190e:{c.instructions+=2;NFSU2_TR(0x76190e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76190f:{NFSU2_TR(0x76190f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B761910:L761910:{c.instructions+=2;NFSU2_TR(0x761910);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761913:{NFSU2_TR(0x761913);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76190eu);}goto L76190e;}}
}
B761915:L761915:{c.instructions+=2;NFSU2_TR(0x761915);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761918:{NFSU2_TR(0x761918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761940;}}
}
B76191a:L76191a:{c.instructions+=2;NFSU2_TR(0x76191a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76191d:{NFSU2_TR(0x76191d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76193e;}}
}
B76191f:L76191f:{c.instructions+=2;NFSU2_TR(0x76191f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B761923:{NFSU2_TR(0x761923);
if(r1(R+518)){{goto L761931;}}
}
B761925:L761925:{c.instructions+=3;NFSU2_TR(0x761925);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761928:{NFSU2_TR(0x761928);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76192b:{NFSU2_TR(0x76192b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761931;}}
}
B76192d:L76192d:{c.instructions+=2;NFSU2_TR(0x76192d);
__builtin_memmove((R+0),(R+4),4);
}
B76192f:{NFSU2_TR(0x76192f);
{goto L761933;}
}
B761931:L761931:{c.instructions+=1;NFSU2_TR(0x761931);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B761933:L761933:{c.instructions+=4;NFSU2_TR(0x761933);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B761935:{NFSU2_TR(0x761935);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B761938:{NFSU2_TR(0x761938);
__builtin_memmove((R+4),(R+518),1);
}
B76193b:{NFSU2_TR(0x76193b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76193e:L76193e:{c.instructions+=1;NFSU2_TR(0x76193e);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B761940:L761940:{c.instructions+=2;NFSU2_TR(0x761940);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761942:{NFSU2_TR(0x761942);
if(r1(R+518)){{goto L761951;}}
}
B761944:L761944:{c.instructions+=2;NFSU2_TR(0x761944);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761946:{NFSU2_TR(0x761946);
if(r1(R+518)){{goto L76194c;}}
}
B761948:L761948:{c.instructions+=2;NFSU2_TR(0x761948);
u8 U[1];
w1(U+0,u8(0x5cull));
s1(u32(r4(R+28)),r1(U+0));
}
B76194b:{NFSU2_TR(0x76194b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76194c:L76194c:{c.instructions+=3;NFSU2_TR(0x76194c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B76194e:{NFSU2_TR(0x76194e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B76194f:{NFSU2_TR(0x76194f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761944u);}goto L761944;}}
}
B761951:L761951:{c.instructions+=3;NFSU2_TR(0x761951);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B761953:{NFSU2_TR(0x761953);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B761955:{NFSU2_TR(0x761955);
if(r1(R+518)){{goto L76199f;}}
}
B761957:L761957:{c.instructions+=2;NFSU2_TR(0x761957);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76195b:{NFSU2_TR(0x76195b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761967;}}
}
B76195d:L76195d:{c.instructions+=2;NFSU2_TR(0x76195d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B761960:{NFSU2_TR(0x761960);
if(r1(R+518)){{goto L76199f;}}
}
B761962:L761962:{c.instructions+=2;NFSU2_TR(0x761962);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B761965:{NFSU2_TR(0x761965);
if(r1(R+518)){{goto L76199f;}}
}
B761967:L761967:{c.instructions+=2;NFSU2_TR(0x761967);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761969:{NFSU2_TR(0x761969);
if(r1(R+518)){{goto L761999;}}
}
B76196b:L76196b:{c.instructions+=2;NFSU2_TR(0x76196b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76196d:{NFSU2_TR(0x76196d);
if(r1(R+518)){{goto L761988;}}
}
B76196f:L76196f:{c.instructions+=3;NFSU2_TR(0x76196f);
w4(R+8,u32(r1(R+4)));
}
B761972:{NFSU2_TR(0x761972);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B761979:{NFSU2_TR(0x761979);
if(r1(R+518)){{goto L761981;}}
}
B76197b:L76197b:{c.instructions+=4;NFSU2_TR(0x76197b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B76197d:{NFSU2_TR(0x76197d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76197e:{NFSU2_TR(0x76197e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76197f:{NFSU2_TR(0x76197f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B761981:L761981:{c.instructions+=4;NFSU2_TR(0x761981);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B761983:{NFSU2_TR(0x761983);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B761985:{NFSU2_TR(0x761985);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B761986:{NFSU2_TR(0x761986);
{goto L761997;}
}
B761988:L761988:{c.instructions+=3;NFSU2_TR(0x761988);
w4(R+4,u32(r1(R+4)));
}
B76198b:{NFSU2_TR(0x76198b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B761992:{NFSU2_TR(0x761992);
if(r1(R+518)){{goto L761997;}}
}
B761994:L761994:{c.instructions+=2;NFSU2_TR(0x761994);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B761995:{NFSU2_TR(0x761995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B761997:L761997:{c.instructions+=1;NFSU2_TR(0x761997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B761999:L761999:{c.instructions+=2;NFSU2_TR(0x761999);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76199a:{NFSU2_TR(0x76199a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761907u);}goto L761907;}
}
B76199f:L76199f:{c.instructions+=2;NFSU2_TR(0x76199f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7619a1:{NFSU2_TR(0x7619a1);
if(r1(R+518)){{goto L7619a7;}}
}
B7619a3:L7619a3:{c.instructions+=2;NFSU2_TR(0x7619a3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+28)),r1(U+0));
}
B7619a6:{NFSU2_TR(0x7619a6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7619a7:L7619a7:{c.instructions+=3;NFSU2_TR(0x7619a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7619a9:{NFSU2_TR(0x7619a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7619ac:{NFSU2_TR(0x7619ac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7618d2u);}goto L7618d2;}
}
B7619b1:L7619b1:{c.instructions+=3;NFSU2_TR(0x7619b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7619b4:{NFSU2_TR(0x7619b4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7619b6:{NFSU2_TR(0x7619b6);
if(r1(R+518)){{goto L7619bb;}}
}
B7619b8:L7619b8:{c.instructions+=1;NFSU2_TR(0x7619b8);
u8 U[4];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B7619bb:L7619bb:{c.instructions+=5;NFSU2_TR(0x7619bb);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B7619bd:{NFSU2_TR(0x7619bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7619be:{NFSU2_TR(0x7619be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7619bf:{NFSU2_TR(0x7619bf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7619c0:{NFSU2_TR(0x7619c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7619c1:L7619c1:{c.instructions+=10;NFSU2_TR(0x7619c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619c2:{NFSU2_TR(0x7619c2);
__builtin_memmove((R+20),(R+16),4);
}
B7619c4:{NFSU2_TR(0x7619c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619c5:{NFSU2_TR(0x7619c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619c6:{NFSU2_TR(0x7619c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619c7:{NFSU2_TR(0x7619c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619c8:{NFSU2_TR(0x7619c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619c9:{NFSU2_TR(0x7619c9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7619cb:{NFSU2_TR(0x7619cb);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5f0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7619d1:{NFSU2_TR(0x7619d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7619d8;}}
}
B7619d3:L7619d3:{c.instructions+=1;NFSU2_TR(0x7619d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7619d8ull));
TAIL_STATIC(0x765f57u,765);
}
B7619d8:L7619d8:{c.instructions+=6;NFSU2_TR(0x7619d8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s1(0x8b85b4,u8(u32(m1(0x8b85b4))&u32(u8(0x0ull))));
w1(R+519,u8(s8(m1(0x8b85b4))<s8(u8(0x0ull))));
w1(R+518,u8((m1(0x8b85b4))==(u8(0x0ull))));
w1(U+0,u8(u32(m1(0x8b85b4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7619df:{NFSU2_TR(0x7619df);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619e4:{NFSU2_TR(0x7619e4);
w4(R+24,u32(0x8b84b0ull));
}
B7619e9:{NFSU2_TR(0x7619e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619ea:{NFSU2_TR(0x7619ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7619eb:{NFSU2_TR(0x7619eb);
u8 U[4];
__builtin_memmove((U+0),gp(0x783134),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7619f1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7619f1:L7619f1:{c.instructions+=4;NFSU2_TR(0x7619f1);
__builtin_memmove((R+0),gp(0x8bb5f4),4);
}
B7619f6:{NFSU2_TR(0x7619f6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7619f8:{NFSU2_TR(0x7619f8);
__builtin_memmove(gp(0x8b8460),(R+24),4);
}
B7619fe:{NFSU2_TR(0x7619fe);
if(r1(R+518)){{goto L761a07;}}
}
B761a00:L761a00:{c.instructions+=3;NFSU2_TR(0x761a00);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761a03:{NFSU2_TR(0x761a03);
__builtin_memmove((R+12),(R+0),4);
}
B761a05:{NFSU2_TR(0x761a05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761a09;}}
}
B761a07:L761a07:{c.instructions+=1;NFSU2_TR(0x761a07);
__builtin_memmove((R+12),(R+24),4);
}
B761a09:L761a09:{c.instructions+=7;NFSU2_TR(0x761a09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B761a0c:{NFSU2_TR(0x761a0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a0d:{NFSU2_TR(0x761a0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a0e:{NFSU2_TR(0x761a0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761a11:{NFSU2_TR(0x761a11);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B761a13:{NFSU2_TR(0x761a13);
__builtin_memmove((R+0),(R+12),4);
}
B761a15:{NFSU2_TR(0x761a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761a1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761855u);}goto L761855;}
}
B761a1a:L761a1a:{c.instructions+=6;NFSU2_TR(0x761a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B761a1d:{NFSU2_TR(0x761a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761a20:{NFSU2_TR(0x761a20);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B761a23:{NFSU2_TR(0x761a23);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B761a25:{NFSU2_TR(0x761a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a26:{NFSU2_TR(0x761a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761a2bull));
TAIL_STATIC(0x75c6c8u,75c);
}
B761a2b:L761a2b:{c.instructions+=4;NFSU2_TR(0x761a2b);
__builtin_memmove((R+28),(R+0),4);
}
B761a2d:{NFSU2_TR(0x761a2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B761a30:{NFSU2_TR(0x761a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761a32:{NFSU2_TR(0x761a32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761a39;}}
}
B761a34:L761a34:{c.instructions+=2;NFSU2_TR(0x761a34);
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
B761a37:{NFSU2_TR(0x761a37);
{goto L761a5e;}
}
B761a39:L761a39:{c.instructions+=7;NFSU2_TR(0x761a39);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B761a3c:{NFSU2_TR(0x761a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a3d:{NFSU2_TR(0x761a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B761a40:{NFSU2_TR(0x761a40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a41:{NFSU2_TR(0x761a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761a44:{NFSU2_TR(0x761a44);
__builtin_memmove((R+0),(R+12),4);
}
B761a46:{NFSU2_TR(0x761a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761a4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761855u);}goto L761855;}
}
B761a4b:L761a4b:{c.instructions+=7;NFSU2_TR(0x761a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761a4e:{NFSU2_TR(0x761a4e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B761a4f:{NFSU2_TR(0x761a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761a50:{NFSU2_TR(0x761a50);
__builtin_memmove(gp(0x8b8444),(R+0),4);
}
B761a55:{NFSU2_TR(0x761a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761a56:{NFSU2_TR(0x761a56);
__builtin_memmove(gp(0x8b8448),(R+28),4);
}
B761a5c:{NFSU2_TR(0x761a5c);
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
B761a5e:L761a5e:{c.instructions+=5;NFSU2_TR(0x761a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761a5f:{NFSU2_TR(0x761a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761a60:{NFSU2_TR(0x761a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761a61:{NFSU2_TR(0x761a61);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B761a62:{NFSU2_TR(0x761a62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761a63:L761a63:{c.instructions+=14;NFSU2_TR(0x761a63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a64:{NFSU2_TR(0x761a64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a65:{NFSU2_TR(0x761a65);
__builtin_memmove((R+0),gp(0x8b85b8),4);
}
B761a6a:{NFSU2_TR(0x761a6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a6b:{NFSU2_TR(0x761a6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a6c:{NFSU2_TR(0x761a6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a6d:{NFSU2_TR(0x761a6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a6e:{NFSU2_TR(0x761a6e);
__builtin_memmove((R+28),gp(0x7830f4),4);
}
B761a74:{NFSU2_TR(0x761a74);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B761a76:{NFSU2_TR(0x761a76);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B761a78:{NFSU2_TR(0x761a78);
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
B761a7a:{NFSU2_TR(0x761a7a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761a7c:{NFSU2_TR(0x761a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B761a7d:{NFSU2_TR(0x761a7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761aac;}}
}
B761a7f:L761a7f:{c.instructions+=1;NFSU2_TR(0x761a7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761a81ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761a81:L761a81:{c.instructions+=3;NFSU2_TR(0x761a81);
__builtin_memmove((R+24),(R+0),4);
}
B761a83:{NFSU2_TR(0x761a83);
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
B761a85:{NFSU2_TR(0x761a85);
if(r1(R+518)){{goto L761a93;}}
}
B761a87:L761a87:{c.instructions+=2;NFSU2_TR(0x761a87);
s4(0x8b85b8,u32(0x1ull));
}
B761a91:{NFSU2_TR(0x761a91);
{goto L761ab1;}
}
B761a93:L761a93:{c.instructions+=1;NFSU2_TR(0x761a93);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761a99ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761a99:L761a99:{c.instructions+=2;NFSU2_TR(0x761a99);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x78ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761a9c:{NFSU2_TR(0x761a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761aa7;}}
}
B761a9e:L761a9e:{c.instructions+=3;NFSU2_TR(0x761a9e);
__builtin_memmove((R+0),(R+20),4);
}
B761aa0:{NFSU2_TR(0x761aa0);
__builtin_memmove(gp(0x8b85b8),(R+0),4);
}
B761aa5:{NFSU2_TR(0x761aa5);
{goto L761aac;}
}
B761aa7:L761aa7:{c.instructions+=1;NFSU2_TR(0x761aa7);
__builtin_memmove((R+0),gp(0x8b85b8),4);
}
B761aac:L761aac:{c.instructions+=2;NFSU2_TR(0x761aac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761aaf:{NFSU2_TR(0x761aaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761b2e;}}
}
B761ab1:L761ab1:{c.instructions+=2;NFSU2_TR(0x761ab1);
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
B761ab3:{NFSU2_TR(0x761ab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761abd;}}
}
B761ab5:L761ab5:{c.instructions+=1;NFSU2_TR(0x761ab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761ab7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761ab7:L761ab7:{c.instructions+=3;NFSU2_TR(0x761ab7);
__builtin_memmove((R+24),(R+0),4);
}
B761ab9:{NFSU2_TR(0x761ab9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761abb:{NFSU2_TR(0x761abb);
if(r1(R+518)){{goto L761b36;}}
}
B761abd:L761abd:{c.instructions+=3;NFSU2_TR(0x761abd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B761ac0:{NFSU2_TR(0x761ac0);
__builtin_memmove((R+0),(R+24),4);
}
B761ac2:{NFSU2_TR(0x761ac2);
if(r1(R+518)){{goto L761ad2;}}
}
B761ac4:L761ac4:{c.instructions+=3;NFSU2_TR(0x761ac4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B761ac6:{NFSU2_TR(0x761ac6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B761ac9:{NFSU2_TR(0x761ac9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761ac4u);}goto L761ac4;}}
}
B761acb:L761acb:{c.instructions+=3;NFSU2_TR(0x761acb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B761acd:{NFSU2_TR(0x761acd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B761ad0:{NFSU2_TR(0x761ad0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761ac4u);}goto L761ac4;}}
}
B761ad2:L761ad2:{c.instructions+=14;NFSU2_TR(0x761ad2);
__builtin_memmove((R+28),gp(0x78319c),4);
}
B761ad8:{NFSU2_TR(0x761ad8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ad9:{NFSU2_TR(0x761ad9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ada:{NFSU2_TR(0x761ada);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761adb:{NFSU2_TR(0x761adb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B761add:{NFSU2_TR(0x761add);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ade:{NFSU2_TR(0x761ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B761ae0:{NFSU2_TR(0x761ae0);
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
B761ae1:{NFSU2_TR(0x761ae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ae2:{NFSU2_TR(0x761ae2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ae3:{NFSU2_TR(0x761ae3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ae4:{NFSU2_TR(0x761ae4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ae5:{NFSU2_TR(0x761ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761ae9:{NFSU2_TR(0x761ae9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761aebull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761aeb:L761aeb:{c.instructions+=3;NFSU2_TR(0x761aeb);
__builtin_memmove((R+20),(R+0),4);
}
B761aed:{NFSU2_TR(0x761aed);
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
B761aef:{NFSU2_TR(0x761aef);
if(r1(R+518)){{goto L761b23;}}
}
B761af1:L761af1:{c.instructions+=2;NFSU2_TR(0x761af1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761af2:{NFSU2_TR(0x761af2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761af7ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B761af7:L761af7:{c.instructions+=4;NFSU2_TR(0x761af7);
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
B761af9:{NFSU2_TR(0x761af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761afa:{NFSU2_TR(0x761afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761afe:{NFSU2_TR(0x761afe);
if(r1(R+518)){{goto L761b23;}}
}
B761b00:L761b00:{c.instructions+=9;NFSU2_TR(0x761b00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b01:{NFSU2_TR(0x761b01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b02:{NFSU2_TR(0x761b02);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b03:{NFSU2_TR(0x761b03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b04:{NFSU2_TR(0x761b04);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B761b08:{NFSU2_TR(0x761b08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b09:{NFSU2_TR(0x761b09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b0a:{NFSU2_TR(0x761b0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b0b:{NFSU2_TR(0x761b0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b0dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761b0d:L761b0d:{c.instructions+=2;NFSU2_TR(0x761b0d);
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
B761b0f:{NFSU2_TR(0x761b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761b1f;}}
}
B761b11:L761b11:{c.instructions+=2;NFSU2_TR(0x761b11);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B761b15:{NFSU2_TR(0x761b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b1aull));
TAIL_STATIC(0x75c6dau,75c);
}
B761b1a:L761b1a:{c.instructions+=2;NFSU2_TR(0x761b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761b1b:{NFSU2_TR(0x761b1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761b1f:L761b1f:{c.instructions+=1;NFSU2_TR(0x761b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B761b23:L761b23:{c.instructions+=2;NFSU2_TR(0x761b23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b24:{NFSU2_TR(0x761b24);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830f8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b2aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761b2a:L761b2a:{c.instructions+=2;NFSU2_TR(0x761b2a);
__builtin_memmove((R+0),(R+12),4);
}
B761b2c:{NFSU2_TR(0x761b2c);
{goto L761b7e;}
}
B761b2e:L761b2e:{c.instructions+=2;NFSU2_TR(0x761b2e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B761b30:{NFSU2_TR(0x761b30);
if(r1(R+518)){{goto L761b3a;}}
}
B761b32:L761b32:{c.instructions+=2;NFSU2_TR(0x761b32);
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
B761b34:{NFSU2_TR(0x761b34);
if(r1(R+518)){{goto L761b3a;}}
}
B761b36:L761b36:{c.instructions+=2;NFSU2_TR(0x761b36);
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
B761b38:{NFSU2_TR(0x761b38);
{goto L761b7e;}
}
B761b3a:L761b3a:{c.instructions+=1;NFSU2_TR(0x761b3a);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830fc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b40ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761b40:L761b40:{c.instructions+=3;NFSU2_TR(0x761b40);
__builtin_memmove((R+24),(R+0),4);
}
B761b42:{NFSU2_TR(0x761b42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761b44:{NFSU2_TR(0x761b44);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761b36u);}goto L761b36;}}
}
B761b46:L761b46:{c.instructions+=2;NFSU2_TR(0x761b46);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761b48:{NFSU2_TR(0x761b48);
if(r1(R+518)){{goto L761b54;}}
}
B761b4a:L761b4a:{c.instructions+=3;NFSU2_TR(0x761b4a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B761b4b:{NFSU2_TR(0x761b4b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761b4d:{NFSU2_TR(0x761b4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761b4au);}goto L761b4a;}}
}
B761b4f:L761b4f:{c.instructions+=3;NFSU2_TR(0x761b4f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B761b50:{NFSU2_TR(0x761b50);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B761b52:{NFSU2_TR(0x761b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761b4au);}goto L761b4a;}}
}
B761b54:L761b54:{c.instructions+=5;NFSU2_TR(0x761b54);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B761b56:{NFSU2_TR(0x761b56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B761b57:{NFSU2_TR(0x761b57);
__builtin_memmove((R+20),(R+0),4);
}
B761b59:{NFSU2_TR(0x761b59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b5a:{NFSU2_TR(0x761b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b5full));
TAIL_STATIC(0x75c6c8u,75c);
}
B761b5f:L761b5f:{c.instructions+=4;NFSU2_TR(0x761b5f);
__builtin_memmove((R+28),(R+0),4);
}
B761b61:{NFSU2_TR(0x761b61);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761b63:{NFSU2_TR(0x761b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761b64:{NFSU2_TR(0x761b64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761b6a;}}
}
B761b66:L761b66:{c.instructions+=2;NFSU2_TR(0x761b66);
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
B761b68:{NFSU2_TR(0x761b68);
{goto L761b75;}
}
B761b6a:L761b6a:{c.instructions+=4;NFSU2_TR(0x761b6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b6b:{NFSU2_TR(0x761b6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b6c:{NFSU2_TR(0x761b6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b6d:{NFSU2_TR(0x761b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b72ull));
TAIL_STATIC(0x760df0u,760);
}
B761b72:L761b72:{c.instructions+=1;NFSU2_TR(0x761b72);
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
B761b75:L761b75:{c.instructions+=2;NFSU2_TR(0x761b75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b76:{NFSU2_TR(0x761b76);
u8 U[4];
__builtin_memmove((U+0),gp(0x783100),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b7cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761b7c:L761b7c:{c.instructions+=1;NFSU2_TR(0x761b7c);
__builtin_memmove((R+0),(R+28),4);
}
B761b7e:L761b7e:{c.instructions+=7;NFSU2_TR(0x761b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761b7f:{NFSU2_TR(0x761b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761b80:{NFSU2_TR(0x761b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B761b81:{NFSU2_TR(0x761b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761b82:{NFSU2_TR(0x761b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761b83:{NFSU2_TR(0x761b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761b84:{NFSU2_TR(0x761b84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761b85:L761b85:{c.instructions+=5;NFSU2_TR(0x761b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B761b88:{NFSU2_TR(0x761b88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b89:{NFSU2_TR(0x761b89);
w4(R+12,u32(0x480ull));
}
B761b8e:{NFSU2_TR(0x761b8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761b8f:{NFSU2_TR(0x761b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761b94ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B761b94:L761b94:{c.instructions+=3;NFSU2_TR(0x761b94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761b96:{NFSU2_TR(0x761b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761b97:{NFSU2_TR(0x761b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761ba1;}}
}
B761b99:L761b99:{c.instructions+=2;NFSU2_TR(0x761b99);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B761b9c:{NFSU2_TR(0x761b9c);
{goto L761d7e;}
}
B761ba1:L761ba1:{c.instructions+=4;NFSU2_TR(0x761ba1);
__builtin_memmove(gp(0x8ba4c0),(R+0),4);
}
B761ba6:{NFSU2_TR(0x761ba6);
s4(0x8ba4ac,u32(0x20ull));
}
B761bb0:{NFSU2_TR(0x761bb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761bb6:{NFSU2_TR(0x761bb6);
{goto L761bd6;}
}
B761bb8:L761bb8:{c.instructions+=7;NFSU2_TR(0x761bb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B761bbc:{NFSU2_TR(0x761bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B761bbf:{NFSU2_TR(0x761bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761bc3:{NFSU2_TR(0x761bc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B761bc7:{NFSU2_TR(0x761bc7);
__builtin_memmove((R+4),gp(0x8ba4c0),4);
}
B761bcd:{NFSU2_TR(0x761bcd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B761bd0:{NFSU2_TR(0x761bd0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x480ull))));
}
B761bd6:L761bd6:{c.instructions+=2;NFSU2_TR(0x761bd6);
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
B761bd8:{NFSU2_TR(0x761bd8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761bb8u);}goto L761bb8;}}
}
B761bda:L761bda:{c.instructions+=6;NFSU2_TR(0x761bda);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761bdb:{NFSU2_TR(0x761bdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761bdc:{NFSU2_TR(0x761bdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761bdd:{NFSU2_TR(0x761bdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B761be1:{NFSU2_TR(0x761be1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761be2:{NFSU2_TR(0x761be2);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761be8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761be8:L761be8:{c.instructions+=2;NFSU2_TR(0x761be8);
u8 U[10];
w4(U+0,u32(u32(u32(0x46ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B761bee:{NFSU2_TR(0x761bee);
if(r1(R+518)){{goto L761cdd;}}
}
B761bf4:L761bf4:{c.instructions+=3;NFSU2_TR(0x761bf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761bf8:{NFSU2_TR(0x761bf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761bfa:{NFSU2_TR(0x761bfa);
if(r1(R+518)){{goto L761cdd;}}
}
B761c00:L761c00:{c.instructions+=7;NFSU2_TR(0x761c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B761c02:{NFSU2_TR(0x761c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B761c05:{NFSU2_TR(0x761c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B761c08:{NFSU2_TR(0x761c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761c0c:{NFSU2_TR(0x761c0c);
w4(R+0,u32(0x800ull));
}
B761c11:{NFSU2_TR(0x761c11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B761c13:{NFSU2_TR(0x761c13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L761c17;}}
}
B761c15:L761c15:{c.instructions+=1;NFSU2_TR(0x761c15);
__builtin_memmove((R+28),(R+0),4);
}
B761c17:L761c17:{c.instructions+=2;NFSU2_TR(0x761c17);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba4ac),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B761c1d:{NFSU2_TR(0x761c1d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L761c6d;}}
}
B761c1f:L761c1f:{c.instructions+=1;NFSU2_TR(0x761c1f);
w4(R+24,u32(0x8ba4c4ull));
}
B761c24:L761c24:{c.instructions+=2;NFSU2_TR(0x761c24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761c25:{NFSU2_TR(0x761c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761c2aull));
TAIL_STATIC(0x75c6c8u,75c);
}
B761c2a:L761c2a:{c.instructions+=3;NFSU2_TR(0x761c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761c2c:{NFSU2_TR(0x761c2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761c2d:{NFSU2_TR(0x761c2d);
if(r1(R+518)){{goto L761c67;}}
}
B761c2f:L761c2f:{c.instructions+=4;NFSU2_TR(0x761c2f);
s4(0x8ba4ac,u32(u32(m4(0x8ba4ac))+u32(u32(0x20ull))));
}
B761c36:{NFSU2_TR(0x761c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B761c38:{NFSU2_TR(0x761c38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761c3e:{NFSU2_TR(0x761c3e);
{goto L761c56;}
}
B761c40:L761c40:{c.instructions+=7;NFSU2_TR(0x761c40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B761c44:{NFSU2_TR(0x761c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B761c47:{NFSU2_TR(0x761c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761c4b:{NFSU2_TR(0x761c4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B761c4f:{NFSU2_TR(0x761c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B761c51:{NFSU2_TR(0x761c51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B761c54:{NFSU2_TR(0x761c54);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B761c56:L761c56:{c.instructions+=2;NFSU2_TR(0x761c56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B761c58:{NFSU2_TR(0x761c58);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761c40u);}goto L761c40;}}
}
B761c5a:L761c5a:{c.instructions+=3;NFSU2_TR(0x761c5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B761c5d:{NFSU2_TR(0x761c5d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba4ac),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B761c63:{NFSU2_TR(0x761c63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761c24u);}goto L761c24;}}
}
B761c65:L761c65:{c.instructions+=1;NFSU2_TR(0x761c65);
{goto L761c6d;}
}
B761c67:L761c67:{c.instructions+=1;NFSU2_TR(0x761c67);
__builtin_memmove((R+28),gp(0x8ba4ac),4);
}
B761c6d:L761c6d:{c.instructions+=3;NFSU2_TR(0x761c6d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B761c6f:{NFSU2_TR(0x761c6f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761c71:{NFSU2_TR(0x761c71);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L761cdd;}}
}
B761c73:L761c73:{c.instructions+=4;NFSU2_TR(0x761c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761c77:{NFSU2_TR(0x761c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B761c79:{NFSU2_TR(0x761c79);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761c7c:{NFSU2_TR(0x761c7c);
if(r1(R+518)){{goto L761cd2;}}
}
B761c7e:L761c7e:{c.instructions+=3;NFSU2_TR(0x761c7e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+4),(U+0),1);
}
B761c81:{NFSU2_TR(0x761c81);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B761c84:{NFSU2_TR(0x761c84);
if(r1(R+518)){{goto L761cd2;}}
}
B761c86:L761c86:{c.instructions+=2;NFSU2_TR(0x761c86);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B761c89:{NFSU2_TR(0x761c89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761c96;}}
}
B761c8b:L761c8b:{c.instructions+=2;NFSU2_TR(0x761c8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761c8c:{NFSU2_TR(0x761c8c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761c92ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761c92:L761c92:{c.instructions+=2;NFSU2_TR(0x761c92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761c94:{NFSU2_TR(0x761c94);
if(r1(R+518)){{goto L761cd2;}}
}
B761c96:L761c96:{c.instructions+=16;NFSU2_TR(0x761c96);
__builtin_memmove((R+4),(R+12),4);
}
B761c98:{NFSU2_TR(0x761c98);
__builtin_memmove((R+0),(R+12),4);
}
B761c9a:{NFSU2_TR(0x761c9a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B761c9d:{NFSU2_TR(0x761c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B761ca0:{NFSU2_TR(0x761ca0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B761ca3:{NFSU2_TR(0x761ca3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B761caa:{NFSU2_TR(0x761caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B761cad:{NFSU2_TR(0x761cad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761cb1:{NFSU2_TR(0x761cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B761cb3:{NFSU2_TR(0x761cb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B761cb5:{NFSU2_TR(0x761cb5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B761cb8:{NFSU2_TR(0x761cb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B761cbb:{NFSU2_TR(0x761cbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B761cbe:{NFSU2_TR(0x761cbe);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761cc3:{NFSU2_TR(0x761cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761cc4:{NFSU2_TR(0x761cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761cc9ull));
TAIL_STATIC(0x76c3b6u,76c);
}
B761cc9:L761cc9:{c.instructions+=4;NFSU2_TR(0x761cc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761ccb:{NFSU2_TR(0x761ccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761ccc:{NFSU2_TR(0x761ccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761ccd:{NFSU2_TR(0x761ccd);
if(r1(R+518)){{goto L761cfd;}}
}
B761ccf:L761ccf:{c.instructions+=1;NFSU2_TR(0x761ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761cd2:L761cd2:{c.instructions+=5;NFSU2_TR(0x761cd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761cd7:{NFSU2_TR(0x761cd7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B761cd8:{NFSU2_TR(0x761cd8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B761cd9:{NFSU2_TR(0x761cd9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B761cdb:{NFSU2_TR(0x761cdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761c73u);}goto L761c73;}}
}
B761cdd:L761cdd:{c.instructions+=1;NFSU2_TR(0x761cdd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B761cdf:L761cdf:{c.instructions+=5;NFSU2_TR(0x761cdf);
__builtin_memmove((R+4),gp(0x8ba4c0),4);
}
B761ce5:{NFSU2_TR(0x761ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B761ce8:{NFSU2_TR(0x761ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B761ceb:{NFSU2_TR(0x761ceb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B761cee:{NFSU2_TR(0x761cee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761d5f;}}
}
B761cf0:L761cf0:{c.instructions+=3;NFSU2_TR(0x761cf0);
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
B761cf2:{NFSU2_TR(0x761cf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x81ull));
s1(u32(r4(U+0)),r1(U+4));
}
B761cf6:{NFSU2_TR(0x761cf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761d02;}}
}
B761cf8:L761cf8:{c.instructions+=3;NFSU2_TR(0x761cf8);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761cfa:{NFSU2_TR(0x761cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B761cfb:{NFSU2_TR(0x761cfb);
{goto L761d0c;}
}
B761cfd:L761cfd:{c.instructions+=2;NFSU2_TR(0x761cfd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B761d00:{NFSU2_TR(0x761d00);
{goto L761d7b;}
}
B761d02:L761d02:{c.instructions+=5;NFSU2_TR(0x761d02);
__builtin_memmove((R+0),(R+12),4);
}
B761d04:{NFSU2_TR(0x761d04);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B761d05:{NFSU2_TR(0x761d05);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B761d07:{NFSU2_TR(0x761d07);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B761d09:{NFSU2_TR(0x761d09);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff5ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff5ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761d0c:L761d0c:{c.instructions+=2;NFSU2_TR(0x761d0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d0d:{NFSU2_TR(0x761d0d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783108),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761d13ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761d13:L761d13:{c.instructions+=3;NFSU2_TR(0x761d13);
__builtin_memmove((R+28),(R+0),4);
}
B761d15:{NFSU2_TR(0x761d15);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B761d18:{NFSU2_TR(0x761d18);
if(r1(R+518)){{goto L761d59;}}
}
B761d1a:L761d1a:{c.instructions+=2;NFSU2_TR(0x761d1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d1b:{NFSU2_TR(0x761d1b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761d21ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761d21:L761d21:{c.instructions+=2;NFSU2_TR(0x761d21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761d23:{NFSU2_TR(0x761d23);
if(r1(R+518)){{goto L761d59;}}
}
B761d25:L761d25:{c.instructions+=4;NFSU2_TR(0x761d25);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B761d2a:{NFSU2_TR(0x761d2a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761d2d:{NFSU2_TR(0x761d2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B761d2f:{NFSU2_TR(0x761d2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761d37;}}
}
B761d31:L761d31:{c.instructions+=2;NFSU2_TR(0x761d31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B761d35:{NFSU2_TR(0x761d35);
{goto L761d40;}
}
B761d37:L761d37:{c.instructions+=2;NFSU2_TR(0x761d37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761d3a:{NFSU2_TR(0x761d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761d40;}}
}
B761d3c:L761d3c:{c.instructions+=1;NFSU2_TR(0x761d3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B761d40:L761d40:{c.instructions+=4;NFSU2_TR(0x761d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B761d43:{NFSU2_TR(0x761d43);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d48:{NFSU2_TR(0x761d48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d49:{NFSU2_TR(0x761d49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761d4eull));
TAIL_STATIC(0x76c3b6u,76c);
}
B761d4e:L761d4e:{c.instructions+=4;NFSU2_TR(0x761d4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761d50:{NFSU2_TR(0x761d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761d51:{NFSU2_TR(0x761d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761d52:{NFSU2_TR(0x761d52);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761cfdu);}goto L761cfd;}}
}
B761d54:L761d54:{c.instructions+=2;NFSU2_TR(0x761d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761d57:{NFSU2_TR(0x761d57);
{goto L761d63;}
}
B761d59:L761d59:{c.instructions+=2;NFSU2_TR(0x761d59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B761d5d:{NFSU2_TR(0x761d5d);
{goto L761d63;}
}
B761d5f:L761d5f:{c.instructions+=1;NFSU2_TR(0x761d5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B761d63:L761d63:{c.instructions+=3;NFSU2_TR(0x761d63);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B761d64:{NFSU2_TR(0x761d64);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761d67:{NFSU2_TR(0x761d67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761cdfu);}goto L761cdf;}}
}
B761d6d:L761d6d:{c.instructions+=2;NFSU2_TR(0x761d6d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d73:{NFSU2_TR(0x761d73);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761d79ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761d79:L761d79:{c.instructions+=1;NFSU2_TR(0x761d79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761d7b:L761d7b:{c.instructions+=3;NFSU2_TR(0x761d7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B761d7c:{NFSU2_TR(0x761d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761d7d:{NFSU2_TR(0x761d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B761d7e:L761d7e:{c.instructions+=3;NFSU2_TR(0x761d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761d7f:{NFSU2_TR(0x761d7f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761d82:{NFSU2_TR(0x761d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761d83:L761d83:{c.instructions+=3;NFSU2_TR(0x761d83);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d85:{NFSU2_TR(0x761d85);
u8 U[4];
w4(U+0,u32(0x7d4188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761d8a:{NFSU2_TR(0x761d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761d8full));
TAIL_STATIC(0x760da0u,760);
}
B761d8f:L761d8f:{c.instructions+=1;NFSU2_TR(0x761d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7dd7dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B761d96:L761d96:{c.instructions+=2;NFSU2_TR(0x761d96);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x7dd7dcull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x7dd7dcull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7dd7dcull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B761d9d:{NFSU2_TR(0x761d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L761dc1;}}
}
B761d9f:L761d9f:{c.instructions+=5;NFSU2_TR(0x761d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761da3:{NFSU2_TR(0x761da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761da6:{NFSU2_TR(0x761da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B761da8:{NFSU2_TR(0x761da8);
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
B761daa:{NFSU2_TR(0x761daa);
if(r1(R+518)){{goto L761db7;}}
}
B761dac:L761dac:{c.instructions+=1;NFSU2_TR(0x761dac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761daeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761dae:L761dae:{c.instructions+=1;NFSU2_TR(0x761dae);
{goto L761db7;}
}
B761db0:L761db0:{c.instructions+=3;NFSU2_TR(0x761db0);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761db2:{NFSU2_TR(0x761db2);
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
B761db3:{NFSU2_TR(0x761db3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761db7:L761db7:{c.instructions+=3;NFSU2_TR(0x761db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761dbb:{NFSU2_TR(0x761dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761dbf:{NFSU2_TR(0x761dbf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761d96u);}goto L761d96;}
}
B761dc1:L761dc1:{c.instructions+=1;NFSU2_TR(0x761dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761dc6ull));
TAIL_STATIC(0x760ddbu,760);
}
B761dc6:L761dc6:{c.instructions+=1;NFSU2_TR(0x761dc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761dc7:L761dc7:{c.instructions+=3;NFSU2_TR(0x761dc7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761dc9:{NFSU2_TR(0x761dc9);
u8 U[4];
w4(U+0,u32(0x7d4198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761dce:{NFSU2_TR(0x761dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761dd3ull));
TAIL_STATIC(0x760da0u,760);
}
B761dd3:L761dd3:{c.instructions+=1;NFSU2_TR(0x761dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7dd7e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B761dda:L761dda:{c.instructions+=2;NFSU2_TR(0x761dda);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x7dd7e4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x7dd7e4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7dd7e4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B761de1:{NFSU2_TR(0x761de1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L761e05;}}
}
B761de3:L761de3:{c.instructions+=5;NFSU2_TR(0x761de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761de7:{NFSU2_TR(0x761de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761dea:{NFSU2_TR(0x761dea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B761dec:{NFSU2_TR(0x761dec);
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
B761dee:{NFSU2_TR(0x761dee);
if(r1(R+518)){{goto L761dfb;}}
}
B761df0:L761df0:{c.instructions+=1;NFSU2_TR(0x761df0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761df2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761df2:L761df2:{c.instructions+=1;NFSU2_TR(0x761df2);
{goto L761dfb;}
}
B761df4:L761df4:{c.instructions+=3;NFSU2_TR(0x761df4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B761df6:{NFSU2_TR(0x761df6);
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
B761df7:{NFSU2_TR(0x761df7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761dfb:L761dfb:{c.instructions+=3;NFSU2_TR(0x761dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761dff:{NFSU2_TR(0x761dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761e03:{NFSU2_TR(0x761e03);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x761ddau);}goto L761dda;}
}
B761e05:L761e05:{c.instructions+=1;NFSU2_TR(0x761e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e0aull));
TAIL_STATIC(0x760ddbu,760);
}
B761e0a:L761e0a:{c.instructions+=1;NFSU2_TR(0x761e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761e0b:L761e0b:{c.instructions+=1;NFSU2_TR(0x761e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e10ull));
TAIL_STATIC(0x763108u,763);
}
B761e10:L761e10:{c.instructions+=3;NFSU2_TR(0x761e10);
__builtin_memmove((R+0),gp(0x81a314),4);
}
B761e15:{NFSU2_TR(0x761e15);
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
B761e18:{NFSU2_TR(0x761e18);
if(r1(R+518)){{goto L761e28;}}
}
B761e1a:L761e1a:{c.instructions+=2;NFSU2_TR(0x761e1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e1b:{NFSU2_TR(0x761e1b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830e8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e21ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761e21:L761e21:{c.instructions+=1;NFSU2_TR(0x761e21);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x81a314,u32(u32(m4(0x81a314))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(m4(0x81a314))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x81a314))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x81a314))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B761e28:L761e28:{c.instructions+=1;NFSU2_TR(0x761e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761e29:L761e29:{c.instructions+=4;NFSU2_TR(0x761e29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761e2d:{NFSU2_TR(0x761e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x81a268ull));
s4(u32(r4(U+0)),r4(U+4));
}
B761e34:{NFSU2_TR(0x761e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B761e3b:{NFSU2_TR(0x761e3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761e3c:L761e3c:{c.instructions+=3;NFSU2_TR(0x761e3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e3d:{NFSU2_TR(0x761e3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e3e:{NFSU2_TR(0x761e3e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e44ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761e44:L761e44:{c.instructions+=3;NFSU2_TR(0x761e44);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e4a:{NFSU2_TR(0x761e4a);
__builtin_memmove((R+12),(R+0),4);
}
B761e4c:{NFSU2_TR(0x761e4c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e52ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761e52:L761e52:{c.instructions+=3;NFSU2_TR(0x761e52);
__builtin_memmove((R+24),(R+0),4);
}
B761e54:{NFSU2_TR(0x761e54);
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
B761e56:{NFSU2_TR(0x761e56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761ea1;}}
}
B761e58:L761e58:{c.instructions+=3;NFSU2_TR(0x761e58);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e5d:{NFSU2_TR(0x761e5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e5f:{NFSU2_TR(0x761e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e64ull));
TAIL_STATIC(0x76ace0u,76a);
}
B761e64:L761e64:{c.instructions+=5;NFSU2_TR(0x761e64);
__builtin_memmove((R+24),(R+0),4);
}
B761e66:{NFSU2_TR(0x761e66);
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
B761e68:{NFSU2_TR(0x761e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761e69:{NFSU2_TR(0x761e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761e6a:{NFSU2_TR(0x761e6a);
if(r1(R+518)){{goto L761e99;}}
}
B761e6c:L761e6c:{c.instructions+=3;NFSU2_TR(0x761e6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e6d:{NFSU2_TR(0x761e6d);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e73:{NFSU2_TR(0x761e73);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e79ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761e79:L761e79:{c.instructions+=2;NFSU2_TR(0x761e79);
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
B761e7b:{NFSU2_TR(0x761e7b);
if(r1(R+518)){{goto L761e99;}}
}
B761e7d:L761e7d:{c.instructions+=3;NFSU2_TR(0x761e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x81a268ull));
s4(u32(r4(U+0)),r4(U+4));
}
B761e84:{NFSU2_TR(0x761e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B761e8b:{NFSU2_TR(0x761e8b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761e91ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761e91:L761e91:{c.instructions+=3;NFSU2_TR(0x761e91);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B761e95:{NFSU2_TR(0x761e95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B761e97:{NFSU2_TR(0x761e97);
{goto L761ea1;}
}
B761e99:L761e99:{c.instructions+=2;NFSU2_TR(0x761e99);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761e9b:{NFSU2_TR(0x761e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761ea0ull));
TAIL_STATIC(0x75bc7eu,75b);
}
B761ea0:L761ea0:{c.instructions+=1;NFSU2_TR(0x761ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761ea1:L761ea1:{c.instructions+=2;NFSU2_TR(0x761ea1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ea2:{NFSU2_TR(0x761ea2);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830e4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761ea8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761ea8:L761ea8:{c.instructions+=4;NFSU2_TR(0x761ea8);
__builtin_memmove((R+0),(R+24),4);
}
B761eaa:{NFSU2_TR(0x761eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B761eab:{NFSU2_TR(0x761eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B761eac:{NFSU2_TR(0x761eac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B761ead:L761ead:{c.instructions+=3;NFSU2_TR(0x761ead);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761eaf:{NFSU2_TR(0x761eaf);
u8 U[4];
w4(U+0,u32(0x7d41a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761eb4:{NFSU2_TR(0x761eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761eb9ull));
TAIL_STATIC(0x760da0u,760);
}
B761eb9:L761eb9:{c.instructions+=3;NFSU2_TR(0x761eb9);
__builtin_memmove((R+0),gp(0x81a314),4);
}
B761ebe:{NFSU2_TR(0x761ebe);
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
B761ec1:{NFSU2_TR(0x761ec1);
if(r1(R+518)){{goto L761ffa;}}
}
B761ec7:L761ec7:{c.instructions+=3;NFSU2_TR(0x761ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B761eca:{NFSU2_TR(0x761eca);
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
B761ecc:{NFSU2_TR(0x761ecc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761ee2;}}
}
B761ece:L761ece:{c.instructions+=2;NFSU2_TR(0x761ece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ecf:{NFSU2_TR(0x761ecf);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761ed5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761ed5:L761ed5:{c.instructions+=4;NFSU2_TR(0x761ed5);
__builtin_memmove((R+24),(R+0),4);
}
B761ed7:{NFSU2_TR(0x761ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761eda:{NFSU2_TR(0x761eda);
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
B761edc:{NFSU2_TR(0x761edc);
if(r1(R+518)){{goto L761fec;}}
}
B761ee2:L761ee2:{c.instructions+=3;NFSU2_TR(0x761ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761ee5:{NFSU2_TR(0x761ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761ee7:{NFSU2_TR(0x761ee7);
if(r1(R+518)){{goto L761ef0;}}
}
B761ee9:L761ee9:{c.instructions+=2;NFSU2_TR(0x761ee9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761eea:{NFSU2_TR(0x761eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761eefull));
TAIL_STATIC(0x75c6dau,75c);
}
B761eef:L761eef:{c.instructions+=1;NFSU2_TR(0x761eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761ef0:L761ef0:{c.instructions+=3;NFSU2_TR(0x761ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761ef3:{NFSU2_TR(0x761ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761ef5:{NFSU2_TR(0x761ef5);
if(r1(R+518)){{goto L761efe;}}
}
B761ef7:L761ef7:{c.instructions+=2;NFSU2_TR(0x761ef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ef8:{NFSU2_TR(0x761ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761efdull));
TAIL_STATIC(0x75c6dau,75c);
}
B761efd:L761efd:{c.instructions+=1;NFSU2_TR(0x761efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761efe:L761efe:{c.instructions+=3;NFSU2_TR(0x761efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f01:{NFSU2_TR(0x761f01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f03:{NFSU2_TR(0x761f03);
if(r1(R+518)){{goto L761f0c;}}
}
B761f05:L761f05:{c.instructions+=2;NFSU2_TR(0x761f05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f06:{NFSU2_TR(0x761f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f0bull));
TAIL_STATIC(0x75c6dau,75c);
}
B761f0b:L761f0b:{c.instructions+=1;NFSU2_TR(0x761f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f0c:L761f0c:{c.instructions+=3;NFSU2_TR(0x761f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f0f:{NFSU2_TR(0x761f0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f11:{NFSU2_TR(0x761f11);
if(r1(R+518)){{goto L761f1a;}}
}
B761f13:L761f13:{c.instructions+=2;NFSU2_TR(0x761f13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f14:{NFSU2_TR(0x761f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f19ull));
TAIL_STATIC(0x75c6dau,75c);
}
B761f19:L761f19:{c.instructions+=1;NFSU2_TR(0x761f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f1a:L761f1a:{c.instructions+=3;NFSU2_TR(0x761f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f1d:{NFSU2_TR(0x761f1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f1f:{NFSU2_TR(0x761f1f);
if(r1(R+518)){{goto L761f28;}}
}
B761f21:L761f21:{c.instructions+=2;NFSU2_TR(0x761f21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f22:{NFSU2_TR(0x761f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f27ull));
TAIL_STATIC(0x75c6dau,75c);
}
B761f27:L761f27:{c.instructions+=1;NFSU2_TR(0x761f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f28:L761f28:{c.instructions+=3;NFSU2_TR(0x761f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f2b:{NFSU2_TR(0x761f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f2d:{NFSU2_TR(0x761f2d);
if(r1(R+518)){{goto L761f36;}}
}
B761f2f:L761f2f:{c.instructions+=2;NFSU2_TR(0x761f2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f30:{NFSU2_TR(0x761f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f35ull));
TAIL_STATIC(0x75c6dau,75c);
}
B761f35:L761f35:{c.instructions+=1;NFSU2_TR(0x761f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f36:L761f36:{c.instructions+=3;NFSU2_TR(0x761f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f39:{NFSU2_TR(0x761f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81a268ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f3e:{NFSU2_TR(0x761f3e);
if(r1(R+518)){{goto L761f47;}}
}
B761f40:L761f40:{c.instructions+=2;NFSU2_TR(0x761f40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f41:{NFSU2_TR(0x761f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f46ull));
TAIL_STATIC(0x75c6dau,75c);
}
B761f46:L761f46:{c.instructions+=1;NFSU2_TR(0x761f46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f47:L761f47:{c.instructions+=2;NFSU2_TR(0x761f47);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f49:{NFSU2_TR(0x761f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f4eull));
TAIL_STATIC(0x7631f1u,763);
}
B761f4e:L761f4e:{c.instructions+=6;NFSU2_TR(0x761f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f4f:{NFSU2_TR(0x761f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761f53:{NFSU2_TR(0x761f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f56:{NFSU2_TR(0x761f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761f59:{NFSU2_TR(0x761f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f5b:{NFSU2_TR(0x761f5b);
if(r1(R+518)){{goto L761f70;}}
}
B761f5d:L761f5d:{c.instructions+=2;NFSU2_TR(0x761f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f5f:{NFSU2_TR(0x761f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761f70;}}
}
B761f61:L761f61:{c.instructions+=2;NFSU2_TR(0x761f61);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba23c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761f67:{NFSU2_TR(0x761f67);
if(r1(R+518)){{goto L761f70;}}
}
B761f69:L761f69:{c.instructions+=2;NFSU2_TR(0x761f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f6a:{NFSU2_TR(0x761f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f6full));
TAIL_STATIC(0x75c6dau,75c);
}
B761f6f:L761f6f:{c.instructions+=1;NFSU2_TR(0x761f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f70:L761f70:{c.instructions+=2;NFSU2_TR(0x761f70);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B761f74:{NFSU2_TR(0x761f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f79ull));
TAIL_STATIC(0x762003u,762);
}
B761f79:L761f79:{c.instructions+=2;NFSU2_TR(0x761f79);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761f7b:{NFSU2_TR(0x761f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761f80ull));
TAIL_STATIC(0x7631f1u,763);
}
B761f80:L761f80:{c.instructions+=6;NFSU2_TR(0x761f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761f81:{NFSU2_TR(0x761f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B761f88:{NFSU2_TR(0x761f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B761f8b:{NFSU2_TR(0x761f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B761f8e:{NFSU2_TR(0x761f8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f90:{NFSU2_TR(0x761f90);
if(r1(R+518)){{goto L761fdc;}}
}
B761f92:L761f92:{c.instructions+=4;NFSU2_TR(0x761f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B761f94:{NFSU2_TR(0x761f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761f97:{NFSU2_TR(0x761f97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761f99:{NFSU2_TR(0x761f99);
if(r1(R+518)){{goto L761f9d;}}
}
B761f9b:L761f9b:{c.instructions+=1;NFSU2_TR(0x761f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B761f9d:L761f9d:{c.instructions+=3;NFSU2_TR(0x761f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761fa0:{NFSU2_TR(0x761fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761fa2:{NFSU2_TR(0x761fa2);
if(r1(R+518)){{goto L761fa6;}}
}
B761fa4:L761fa4:{c.instructions+=1;NFSU2_TR(0x761fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B761fa6:L761fa6:{c.instructions+=3;NFSU2_TR(0x761fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761fa9:{NFSU2_TR(0x761fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761fab:{NFSU2_TR(0x761fab);
if(r1(R+518)){{goto L761faf;}}
}
B761fad:L761fad:{c.instructions+=1;NFSU2_TR(0x761fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B761faf:L761faf:{c.instructions+=3;NFSU2_TR(0x761faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761fb2:{NFSU2_TR(0x761fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761fb4:{NFSU2_TR(0x761fb4);
if(r1(R+518)){{goto L761fb8;}}
}
B761fb6:L761fb6:{c.instructions+=1;NFSU2_TR(0x761fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B761fb8:L761fb8:{c.instructions+=4;NFSU2_TR(0x761fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B761fbb:{NFSU2_TR(0x761fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B761fc1:{NFSU2_TR(0x761fc1);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B761fc7:{NFSU2_TR(0x761fc7);
if(r1(R+518)){{goto L761fdc;}}
}
B761fc9:L761fc9:{c.instructions+=2;NFSU2_TR(0x761fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x819cd0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B761fce:{NFSU2_TR(0x761fce);
if(r1(R+518)){{goto L761fdc;}}
}
B761fd0:L761fd0:{c.instructions+=2;NFSU2_TR(0x761fd0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B761fd3:{NFSU2_TR(0x761fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L761fdc;}}
}
B761fd5:L761fd5:{c.instructions+=2;NFSU2_TR(0x761fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761fd6:{NFSU2_TR(0x761fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761fdbull));
TAIL_STATIC(0x75e103u,75e);
}
B761fdb:L761fdb:{c.instructions+=1;NFSU2_TR(0x761fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761fdc:L761fdc:{c.instructions+=2;NFSU2_TR(0x761fdc);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B761fe0:{NFSU2_TR(0x761fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761fe5ull));
TAIL_STATIC(0x76200fu,762);
}
B761fe5:L761fe5:{c.instructions+=2;NFSU2_TR(0x761fe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761fe6:{NFSU2_TR(0x761fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761febull));
TAIL_STATIC(0x75c6dau,75c);
}
B761feb:L761feb:{c.instructions+=1;NFSU2_TR(0x761feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B761fec:L761fec:{c.instructions+=3;NFSU2_TR(0x761fec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761fee:{NFSU2_TR(0x761fee);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B761ff4:{NFSU2_TR(0x761ff4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761ffaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B761ffa:L761ffa:{c.instructions+=1;NFSU2_TR(0x761ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x761fffull));
TAIL_STATIC(0x760ddbu,760);
}
B761fff:L761fff:{c.instructions+=1;NFSU2_TR(0x761fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x761,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
