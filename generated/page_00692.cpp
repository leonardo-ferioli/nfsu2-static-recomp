#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_692(Cpu& c){switch(c.pc){
case 0x692002:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692006;}
case 0x692006:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69200a;}
case 0x69200a:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692013;}
case 0x692013:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692017;}
case 0x692017:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69201b;}
case 0x69201b:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69201f;}
case 0x69201f:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692028;}
case 0x692028:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69202c;}
case 0x69202c:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692030;}
case 0x692030:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692034;}
case 0x692034:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692038;}
case 0x692038:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69203b;}
case 0x69203b:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692043;}
case 0x692043:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692047;}
case 0x692047:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69204a;}
case 0x69204a:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692052;}
case 0x692052:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692055;}
case 0x692055:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69205d;}
case 0x69205d:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692060;}
case 0x692060:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692063;}
case 0x692063:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692067;}
case 0x692067:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69206a;}
case 0x69206a:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692073;}
case 0x692073:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69207b;}
case 0x69207b:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69207f;}
case 0x69207f:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692082;}
case 0x692082:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69208b;}
case 0x69208b:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69208f;}
case 0x69208f:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692093;}
case 0x692093:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692097;}
case 0x692097:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6920a0;}
case 0x6920a0:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6920a4;}
case 0x6920a4:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6920a8;}
case 0x6920a8:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6920ac;}
case 0x6920ac:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6920b5;}
case 0x6920b5:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6920b9;}
case 0x6920b9:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6920bd;}
case 0x6920bd:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6920c1;}
case 0x6920c1:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6920c5;}
case 0x6920c5:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6920c9;}
case 0x6920c9:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6920d1;}
case 0x6920d1:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6920d5;}
case 0x6920d5:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6920d8;}
case 0x6920d8:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6920e0;}
case 0x6920e0:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6920e3;}
case 0x6920e3:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6920eb;}
case 0x6920eb:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6920ee;}
case 0x6920ee:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6920f1;}
case 0x6920f1:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6920f5;}
case 0x6920f5:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6920f8;}
case 0x6920f8:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692101;}
case 0x692101:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692109;}
case 0x692109:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69210d;}
case 0x69210d:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692110;}
case 0x692110:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692119;}
case 0x692119:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69211d;}
case 0x69211d:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692121;}
case 0x692121:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692125;}
case 0x692125:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69212e;}
case 0x69212e:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692132;}
case 0x692132:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692136;}
case 0x692136:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69213a;}
case 0x69213a:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692143;}
case 0x692143:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692147;}
case 0x692147:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69214b;}
case 0x69214b:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69214f;}
case 0x69214f:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692153;}
case 0x692153:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692157;}
case 0x692157:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69215f;}
case 0x69215f:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692163;}
case 0x692163:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692166;}
case 0x692166:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69216e;}
case 0x69216e:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692171;}
case 0x692171:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692179;}
case 0x692179:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69217c;}
case 0x69217c:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69217f;}
case 0x69217f:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692183;}
case 0x692183:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692186;}
case 0x692186:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69218f;}
case 0x69218f:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692197;}
case 0x692197:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69219b;}
case 0x69219b:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69219e;}
case 0x69219e:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6921a7;}
case 0x6921a7:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6921ab;}
case 0x6921ab:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6921af;}
case 0x6921af:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6921b3;}
case 0x6921b3:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6921bc;}
case 0x6921bc:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6921c0;}
case 0x6921c0:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6921c4;}
case 0x6921c4:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6921c8;}
case 0x6921c8:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6921d1;}
case 0x6921d1:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6921d5;}
case 0x6921d5:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6921d9;}
case 0x6921d9:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6921dd;}
case 0x6921dd:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6921e1;}
case 0x6921e1:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6921e4;}
case 0x6921e4:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6921e8;}
case 0x6921e8:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6921ec;}
case 0x6921ec:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6921ef;}
case 0x6921ef:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6921f4;}
case 0x6921f4:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6921f7;}
case 0x6921f7:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6921fc;}
case 0x6921fc:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6921ff;}
case 0x6921ff:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692202;}
case 0x692202:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692206;}
case 0x692206:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692209;}
case 0x692209:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69220f;}
case 0x69220f:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692214;}
case 0x692214:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692218;}
case 0x692218:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69221b;}
case 0x69221b:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692221;}
case 0x692221:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692225;}
case 0x692225:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692229;}
case 0x692229:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69222d;}
case 0x69222d:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692233;}
case 0x692233:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692237;}
case 0x692237:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69223b;}
case 0x69223b:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69223f;}
case 0x69223f:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692245;}
case 0x692245:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692249;}
case 0x692249:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69224d;}
case 0x69224d:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692251;}
case 0x692251:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692255;}
case 0x692255:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692258;}
case 0x692258:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69225c;}
case 0x69225c:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692260;}
case 0x692260:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692263;}
case 0x692263:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692268;}
case 0x692268:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69226b;}
case 0x69226b:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692270;}
case 0x692270:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692273;}
case 0x692273:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692276;}
case 0x692276:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x69227a;}
case 0x69227a:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69227d;}
case 0x69227d:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692283;}
case 0x692283:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692288;}
case 0x692288:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69228c;}
case 0x69228c:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69228f;}
case 0x69228f:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692295;}
case 0x692295:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692299;}
case 0x692299:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x69229d;}
case 0x69229d:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6922a1;}
case 0x6922a1:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6922a7;}
case 0x6922a7:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6922ab;}
case 0x6922ab:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6922af;}
case 0x6922af:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6922b3;}
case 0x6922b3:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6922b9;}
case 0x6922b9:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6922bd;}
case 0x6922bd:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6922c1;}
case 0x6922c1:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6922c5;}
case 0x6922c5:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6922c9;}
case 0x6922c9:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6922cd;}
case 0x6922cd:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6922d1;}
case 0x6922d1:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6922d5;}
case 0x6922d5:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6922d8;}
case 0x6922d8:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6922dd;}
case 0x6922dd:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6922e0;}
case 0x6922e0:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6922e5;}
case 0x6922e5:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6922e8;}
case 0x6922e8:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6922eb;}
case 0x6922eb:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6922ef;}
case 0x6922ef:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6922f2;}
case 0x6922f2:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6922f8;}
case 0x6922f8:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6922fd;}
case 0x6922fd:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692301;}
case 0x692301:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692304;}
case 0x692304:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69230a;}
case 0x69230a:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69230e;}
case 0x69230e:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692312;}
case 0x692312:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692316;}
case 0x692316:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69231c;}
case 0x69231c:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692320;}
case 0x692320:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692324;}
case 0x692324:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692328;}
case 0x692328:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69232e;}
case 0x69232e:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692332;}
case 0x692332:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692336;}
case 0x692336:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69233a;}
case 0x69233a:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69233e;}
case 0x69233e:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692342;}
case 0x692342:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692346;}
case 0x692346:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69234a;}
case 0x69234a:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69234d;}
case 0x69234d:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692352;}
case 0x692352:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692355;}
case 0x692355:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69235a;}
case 0x69235a:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69235d;}
case 0x69235d:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692360;}
case 0x692360:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692364;}
case 0x692364:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692367;}
case 0x692367:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69236d;}
case 0x69236d:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692372;}
case 0x692372:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692376;}
case 0x692376:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692379;}
case 0x692379:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69237f;}
case 0x69237f:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692383;}
case 0x692383:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692387;}
case 0x692387:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69238b;}
case 0x69238b:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692391;}
case 0x692391:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692395;}
case 0x692395:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692399;}
case 0x692399:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69239d;}
case 0x69239d:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6923a3;}
case 0x6923a3:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6923a7;}
case 0x6923a7:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6923ab;}
case 0x6923ab:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6923af;}
case 0x6923af:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6923b3;}
case 0x6923b3:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6923b6;}
case 0x6923b6:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6923ba;}
case 0x6923ba:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6923bf;}
case 0x6923bf:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6923c2;}
case 0x6923c2:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6923c7;}
case 0x6923c7:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6923ca;}
case 0x6923ca:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6923cf;}
case 0x6923cf:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6923d2;}
case 0x6923d2:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6923d5;}
case 0x6923d5:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6923d9;}
case 0x6923d9:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6923dc;}
case 0x6923dc:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6923e2;}
case 0x6923e2:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6923e7;}
case 0x6923e7:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6923eb;}
case 0x6923eb:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6923ee;}
case 0x6923ee:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6923f4;}
case 0x6923f4:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6923f8;}
case 0x6923f8:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6923fc;}
case 0x6923fc:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692400;}
case 0x692400:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692406;}
case 0x692406:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69240a;}
case 0x69240a:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69240e;}
case 0x69240e:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692412;}
case 0x692412:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692418;}
case 0x692418:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69241c;}
case 0x69241c:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692420;}
case 0x692420:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692424;}
case 0x692424:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692428;}
case 0x692428:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69242b;}
case 0x69242b:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692430;}
case 0x692430:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692434;}
case 0x692434:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692437;}
case 0x692437:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69243c;}
case 0x69243c:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69243f;}
case 0x69243f:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692444;}
case 0x692444:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692447;}
case 0x692447:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69244a;}
case 0x69244a:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x69244e;}
case 0x69244e:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692451;}
case 0x692451:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692457;}
case 0x692457:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69245c;}
case 0x69245c:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692460;}
case 0x692460:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692463;}
case 0x692463:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692469;}
case 0x692469:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69246d;}
case 0x69246d:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692471;}
case 0x692471:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692475;}
case 0x692475:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69247b;}
case 0x69247b:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69247f;}
case 0x69247f:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692483;}
case 0x692483:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692487;}
case 0x692487:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69248d;}
case 0x69248d:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692491;}
case 0x692491:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692495;}
case 0x692495:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692499;}
case 0x692499:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69249d;}
case 0x69249d:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6924a1;}
case 0x6924a1:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6924a6;}
case 0x6924a6:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6924aa;}
case 0x6924aa:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6924ad;}
case 0x6924ad:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6924b2;}
case 0x6924b2:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6924b5;}
case 0x6924b5:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6924ba;}
case 0x6924ba:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6924bd;}
case 0x6924bd:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6924c0;}
case 0x6924c0:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6924c4;}
case 0x6924c4:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6924c7;}
case 0x6924c7:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6924cd;}
case 0x6924cd:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6924d2;}
case 0x6924d2:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6924d6;}
case 0x6924d6:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6924d9;}
case 0x6924d9:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6924df;}
case 0x6924df:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6924e3;}
case 0x6924e3:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6924e7;}
case 0x6924e7:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6924eb;}
case 0x6924eb:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6924f1;}
case 0x6924f1:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6924f5;}
case 0x6924f5:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6924f9;}
case 0x6924f9:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6924fd;}
case 0x6924fd:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692503;}
case 0x692503:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692507;}
case 0x692507:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69250b;}
case 0x69250b:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69250f;}
case 0x69250f:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692513;}
case 0x692513:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692517;}
case 0x692517:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69251c;}
case 0x69251c:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692520;}
case 0x692520:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692523;}
case 0x692523:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692528;}
case 0x692528:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69252b;}
case 0x69252b:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692530;}
case 0x692530:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692533;}
case 0x692533:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692536;}
case 0x692536:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x69253a;}
case 0x69253a:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69253d;}
case 0x69253d:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692543;}
case 0x692543:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692548;}
case 0x692548:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69254c;}
case 0x69254c:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69254f;}
case 0x69254f:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692555;}
case 0x692555:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692559;}
case 0x692559:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x69255d;}
case 0x69255d:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692561;}
case 0x692561:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692567;}
case 0x692567:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69256b;}
case 0x69256b:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69256f;}
case 0x69256f:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692573;}
case 0x692573:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692579;}
case 0x692579:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69257d;}
case 0x69257d:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692581;}
case 0x692581:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692585;}
case 0x692585:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692589;}
case 0x692589:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69258c;}
case 0x69258c:{ // MOVQ MM1,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692590;}
case 0x692590:{ // MOVD MM2,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692594;}
case 0x692594:{ // MOVD MM3,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692598;}
case 0x692598:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69259c;}
case 0x69259c:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x6925a0;}
case 0x6925a0:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6925a4;}
case 0x6925a4:{ // MOVD dword ptr [EAX + 0x38],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6925a8;}
case 0x6925a8:{ // JMP 0x00692a92
return 0x692a92;
return 0x6925ad;}
case 0x6925ad:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6925b0;}
case 0x6925b0:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925b5;}
case 0x6925b5:{ // MOVQ MM1,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925ba;}
case 0x6925ba:{ // MOVQ MM3,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925bf;}
case 0x6925bf:{ // MOVQ MM4,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925c4;}
case 0x6925c4:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6925c7;}
case 0x6925c7:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6925ca;}
case 0x6925ca:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6925cd;}
case 0x6925cd:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6925d0;}
case 0x6925d0:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6925d3;}
case 0x6925d3:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6925d7;}
case 0x6925d7:{ // MOVQ MM6,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925dc;}
case 0x6925dc:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6925df;}
case 0x6925df:{ // MOVQ MM7,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925e4;}
case 0x6925e4:{ // MOVQ MM0,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925e9;}
case 0x6925e9:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6925ec;}
case 0x6925ec:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6925ef;}
case 0x6925ef:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6925f3;}
case 0x6925f3:{ // MOVQ qword ptr [EAX + 0x38],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6925f7;}
case 0x6925f7:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6925fa;}
case 0x6925fa:{ // MOVQ MM4,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6925ff;}
case 0x6925ff:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x692602;}
case 0x692602:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x692605;}
case 0x692605:{ // MOVQ qword ptr [EAX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692609;}
case 0x692609:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x69260c;}
case 0x69260c:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x69260f;}
case 0x69260f:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692613;}
case 0x692613:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692617;}
case 0x692617:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69261b;}
case 0x69261b:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69261e;}
case 0x69261e:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692622;}
case 0x692622:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692626;}
case 0x692626:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692629;}
case 0x692629:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69262e;}
case 0x69262e:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692631;}
case 0x692631:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692636;}
case 0x692636:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692639;}
case 0x692639:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69263c;}
case 0x69263c:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692640;}
case 0x692640:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692643;}
case 0x692643:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692649;}
case 0x692649:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69264e;}
case 0x69264e:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692652;}
case 0x692652:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692655;}
case 0x692655:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69265b;}
case 0x69265b:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69265f;}
case 0x69265f:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692663;}
case 0x692663:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692667;}
case 0x692667:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69266d;}
case 0x69266d:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692671;}
case 0x692671:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692675;}
case 0x692675:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692679;}
case 0x692679:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69267f;}
case 0x69267f:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692683;}
case 0x692683:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692687;}
case 0x692687:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69268b;}
case 0x69268b:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69268f;}
case 0x69268f:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692692;}
case 0x692692:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692696;}
case 0x692696:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69269a;}
case 0x69269a:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69269d;}
case 0x69269d:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6926a2;}
case 0x6926a2:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6926a5;}
case 0x6926a5:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6926aa;}
case 0x6926aa:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6926ad;}
case 0x6926ad:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6926b0;}
case 0x6926b0:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6926b4;}
case 0x6926b4:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6926b7;}
case 0x6926b7:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6926bd;}
case 0x6926bd:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6926c2;}
case 0x6926c2:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6926c6;}
case 0x6926c6:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6926c9;}
case 0x6926c9:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6926cf;}
case 0x6926cf:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6926d3;}
case 0x6926d3:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6926d7;}
case 0x6926d7:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6926db;}
case 0x6926db:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6926e1;}
case 0x6926e1:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6926e5;}
case 0x6926e5:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6926e9;}
case 0x6926e9:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6926ed;}
case 0x6926ed:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6926f3;}
case 0x6926f3:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6926f7;}
case 0x6926f7:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6926fb;}
case 0x6926fb:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6926ff;}
case 0x6926ff:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692703;}
case 0x692703:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692707;}
case 0x692707:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69270b;}
case 0x69270b:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69270f;}
case 0x69270f:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692712;}
case 0x692712:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692717;}
case 0x692717:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69271a;}
case 0x69271a:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69271f;}
case 0x69271f:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692722;}
case 0x692722:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692725;}
case 0x692725:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692729;}
case 0x692729:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69272c;}
case 0x69272c:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692732;}
case 0x692732:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692737;}
case 0x692737:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69273b;}
case 0x69273b:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69273e;}
case 0x69273e:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692744;}
case 0x692744:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692748;}
case 0x692748:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x69274c;}
case 0x69274c:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692750;}
case 0x692750:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692756;}
case 0x692756:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69275a;}
case 0x69275a:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69275e;}
case 0x69275e:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692762;}
case 0x692762:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692768;}
case 0x692768:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69276c;}
case 0x69276c:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692770;}
case 0x692770:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692774;}
case 0x692774:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692778;}
case 0x692778:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69277c;}
case 0x69277c:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692780;}
case 0x692780:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692784;}
case 0x692784:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692787;}
case 0x692787:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69278c;}
case 0x69278c:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69278f;}
case 0x69278f:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692794;}
case 0x692794:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692797;}
case 0x692797:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69279a;}
case 0x69279a:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x69279e;}
case 0x69279e:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6927a1;}
case 0x6927a1:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6927a7;}
case 0x6927a7:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6927ac;}
case 0x6927ac:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6927b0;}
case 0x6927b0:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6927b3;}
case 0x6927b3:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6927b9;}
case 0x6927b9:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6927bd;}
case 0x6927bd:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6927c1;}
case 0x6927c1:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6927c5;}
case 0x6927c5:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6927cb;}
case 0x6927cb:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6927cf;}
case 0x6927cf:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6927d3;}
case 0x6927d3:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6927d7;}
case 0x6927d7:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6927dd;}
case 0x6927dd:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6927e1;}
case 0x6927e1:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6927e5;}
case 0x6927e5:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6927e9;}
case 0x6927e9:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6927ed;}
case 0x6927ed:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6927f0;}
case 0x6927f0:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6927f4;}
case 0x6927f4:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6927f9;}
case 0x6927f9:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6927fc;}
case 0x6927fc:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692801;}
case 0x692801:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692804;}
case 0x692804:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692809;}
case 0x692809:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69280c;}
case 0x69280c:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69280f;}
case 0x69280f:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692813;}
case 0x692813:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692816;}
case 0x692816:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69281c;}
case 0x69281c:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692821;}
case 0x692821:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692825;}
case 0x692825:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692828;}
case 0x692828:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69282e;}
case 0x69282e:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692832;}
case 0x692832:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692836;}
case 0x692836:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69283a;}
case 0x69283a:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692840;}
case 0x692840:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692844;}
case 0x692844:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692848;}
case 0x692848:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69284c;}
case 0x69284c:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692852;}
case 0x692852:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692856;}
case 0x692856:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69285a;}
case 0x69285a:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69285e;}
case 0x69285e:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692862;}
case 0x692862:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692865;}
case 0x692865:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69286a;}
case 0x69286a:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69286e;}
case 0x69286e:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692871;}
case 0x692871:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692876;}
case 0x692876:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692879;}
case 0x692879:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69287e;}
case 0x69287e:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692881;}
case 0x692881:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692884;}
case 0x692884:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692888;}
case 0x692888:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69288b;}
case 0x69288b:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692891;}
case 0x692891:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692896;}
case 0x692896:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69289a;}
case 0x69289a:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69289d;}
case 0x69289d:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6928a3;}
case 0x6928a3:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6928a7;}
case 0x6928a7:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6928ab;}
case 0x6928ab:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6928af;}
case 0x6928af:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6928b5;}
case 0x6928b5:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6928b9;}
case 0x6928b9:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6928bd;}
case 0x6928bd:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6928c1;}
case 0x6928c1:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6928c7;}
case 0x6928c7:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6928cb;}
case 0x6928cb:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6928cf;}
case 0x6928cf:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6928d3;}
case 0x6928d3:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6928d7;}
case 0x6928d7:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6928db;}
case 0x6928db:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6928e0;}
case 0x6928e0:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6928e4;}
case 0x6928e4:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6928e7;}
case 0x6928e7:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6928ec;}
case 0x6928ec:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6928ef;}
case 0x6928ef:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6928f4;}
case 0x6928f4:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6928f7;}
case 0x6928f7:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6928fa;}
case 0x6928fa:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6928fe;}
case 0x6928fe:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692901;}
case 0x692901:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692907;}
case 0x692907:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69290c;}
case 0x69290c:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692910;}
case 0x692910:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692913;}
case 0x692913:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692919;}
case 0x692919:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69291d;}
case 0x69291d:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692921;}
case 0x692921:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692925;}
case 0x692925:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69292b;}
case 0x69292b:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69292f;}
case 0x69292f:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692933;}
case 0x692933:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692937;}
case 0x692937:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69293d;}
case 0x69293d:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692941;}
case 0x692941:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692945;}
case 0x692945:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692949;}
case 0x692949:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69294d;}
case 0x69294d:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692951;}
case 0x692951:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692956;}
case 0x692956:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69295a;}
case 0x69295a:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69295d;}
case 0x69295d:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692962;}
case 0x692962:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692965;}
case 0x692965:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69296a;}
case 0x69296a:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69296d;}
case 0x69296d:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692970;}
case 0x692970:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692974;}
case 0x692974:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692977;}
case 0x692977:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69297d;}
case 0x69297d:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692982;}
case 0x692982:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692986;}
case 0x692986:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692989;}
case 0x692989:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69298f;}
case 0x69298f:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692993;}
case 0x692993:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692997;}
case 0x692997:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69299b;}
case 0x69299b:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6929a1;}
case 0x6929a1:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6929a5;}
case 0x6929a5:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6929a9;}
case 0x6929a9:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6929ad;}
case 0x6929ad:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6929b3;}
case 0x6929b3:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6929b7;}
case 0x6929b7:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6929bb;}
case 0x6929bb:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6929bf;}
case 0x6929bf:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6929c3;}
case 0x6929c3:{ // JMP 0x00692a92
return 0x692a92;
return 0x6929c8;}
case 0x6929c8:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6929cb;}
case 0x6929cb:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6929cd;}
case 0x6929cd:{ // JZ 0x00692a27
if(r<1>(c,0x206)){return 0x692a27;}
return 0x6929cf;}
case 0x6929cf:{ // MOVQ MM1,qword ptr [0x007b7158]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7158)));
return 0x6929d6;}
case 0x6929d6:{ // MOVQ MM4,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6929d9;}
case 0x6929d9:{ // MOVD MM5,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6929dd;}
case 0x6929dd:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6929e0;}
case 0x6929e0:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6929e4;}
case 0x6929e4:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x6929e7;}
case 0x6929e7:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6929ea;}
case 0x6929ea:{ // PUNPCKLDQ MM5,MM1
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6929ed;}
case 0x6929ed:{ // PFSUB MM1,MM2
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x6929f1;}
case 0x6929f1:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6929f5;}
case 0x6929f5:{ // PFSUB MM6,MM3
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x6929f9;}
case 0x6929f9:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6929fd;}
case 0x6929fd:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a01;}
case 0x692a01:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a05;}
case 0x692a05:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x692a09;}
case 0x692a09:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x692a0c;}
case 0x692a0c:{ // PFMUL MM6,MM5
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692a10;}
case 0x692a10:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692a13;}
case 0x692a13:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x692a16;}
case 0x692a16:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692a19;}
case 0x692a19:{ // MOVQ qword ptr [EAX + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a1d;}
case 0x692a1d:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a21;}
case 0x692a21:{ // MOVQ qword ptr [EAX + 0x38],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a25;}
case 0x692a25:{ // JMP 0x00692a92
return 0x692a92;
return 0x692a27;}
case 0x692a27:{ // MOVQ MM1,qword ptr [0x007b7138]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7138)));
return 0x692a2e;}
case 0x692a2e:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692a31;}
case 0x692a31:{ // MOVD MM4,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692a35;}
case 0x692a35:{ // PXOR MM5,MM5
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1150)));
return 0x692a38;}
case 0x692a38:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x692a3b;}
case 0x692a3b:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x692a3e;}
case 0x692a3e:{ // MOVQ MM0,MM5
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x692a41;}
case 0x692a41:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692a44;}
case 0x692a44:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692a47;}
case 0x692a47:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a4b;}
case 0x692a4b:{ // MOVQ qword ptr [EAX + 0x10],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a4f;}
case 0x692a4f:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a53;}
case 0x692a53:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a57;}
case 0x692a57:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a5b;}
case 0x692a5b:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a5f;}
case 0x692a5f:{ // MOVQ qword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a63;}
case 0x692a63:{ // JMP 0x00692a92
return 0x692a92;
return 0x692a65;}
case 0x692a65:{ // MOVD MM1,dword ptr [0x007b7148]
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(m<4>(c,0x7b7148)));
return 0x692a6c;}
case 0x692a6c:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x692a6f;}
case 0x692a6f:{ // PSWAPD MM2,MM1
wr<8>(c,0x1120,user_op(c,524544,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692a73;}
case 0x692a73:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692a76;}
case 0x692a76:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a7a;}
case 0x692a7a:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a7e;}
case 0x692a7e:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a82;}
case 0x692a82:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a86;}
case 0x692a86:{ // MOVQ qword ptr [EAX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a8a;}
case 0x692a8a:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a8e;}
case 0x692a8e:{ // MOVQ qword ptr [EAX + 0x38],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692a92;}
case 0x692a92:{ // MOV ECX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x692a95;}
case 0x692a95:{ // MOV EDX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x692a98;}
case 0x692a98:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x692a9a;}
case 0x692a9a:{ // JZ 0x00692f48
if(r<1>(c,0x206)){return 0x692f48;}
return 0x692aa0;}
case 0x692aa0:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692aa3;}
case 0x692aa3:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692aa7;}
case 0x692aa7:{ // PSWAPD MM3,MM0
wr<8>(c,0x1130,user_op(c,524544,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x692aab;}
case 0x692aab:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x692aae;}
case 0x692aae:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x692ab1;}
case 0x692ab1:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x692ab5;}
case 0x692ab5:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x692ab8;}
case 0x692ab8:{ // PUNPCKHDQ MM6,MM1
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692abb;}
case 0x692abb:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x692abf;}
case 0x692abf:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x692ac2;}
case 0x692ac2:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x692ac6;}
case 0x692ac6:{ // PUNPCKLDQ MM5,MM1
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692ac9;}
case 0x692ac9:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692acd;}
case 0x692acd:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x692ad1;}
case 0x692ad1:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x692ad5;}
case 0x692ad5:{ // PFMUL MM6,MM5
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692ad9;}
case 0x692ad9:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x692adc;}
case 0x692adc:{ // PFSUBR MM0,qword ptr [0x007b7158]
wr<8>(c,0x1100,user_op(c,524528,{r<8>(c,0x1100),m<8>(c,0x7b7158)}));
return 0x692ae4;}
case 0x692ae4:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x692ae7;}
case 0x692ae7:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692aea;}
case 0x692aea:{ // PFPNACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524543,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x692aee;}
case 0x692aee:{ // PFACC MM4,MM4
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x692af2;}
case 0x692af2:{ // PFPNACC MM6,MM6
wr<8>(c,0x1160,user_op(c,524543,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x692af6;}
case 0x692af6:{ // PFPNACC MM2,MM2
wr<8>(c,0x1120,user_op(c,524543,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x692afa;}
case 0x692afa:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x692afe;}
case 0x692afe:{ // PSWAPD MM5,MM2
wr<8>(c,0x1150,user_op(c,524544,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692b02;}
case 0x692b02:{ // PFSUBR MM4,qword ptr [0x007b7158]
wr<8>(c,0x1140,user_op(c,524528,{r<8>(c,0x1140),m<8>(c,0x7b7158)}));
return 0x692b0a;}
case 0x692b0a:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x692b0d;}
case 0x692b0d:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x692b10;}
case 0x692b10:{ // MOVQ qword ptr [ESP + 0x70],MM7
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b15;}
case 0x692b15:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x692b18;}
case 0x692b18:{ // PUNPCKLDQ MM2,MM7
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x692b1b;}
case 0x692b1b:{ // PUNPCKHDQ MM4,MM7
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x692b1e;}
case 0x692b1e:{ // PUNPCKHDQ MM0,MM6
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x692b21;}
case 0x692b21:{ // MOVQ qword ptr [ESP + 0x60],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b26;}
case 0x692b26:{ // PUNPCKHDQ MM3,MM7
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x692b29;}
case 0x692b29:{ // MOVQ qword ptr [ESP + 0x48],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b2e;}
case 0x692b2e:{ // PUNPCKLDQ MM6,MM1
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692b31;}
case 0x692b31:{ // MOVQ qword ptr [ESP + 0x68],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b36;}
case 0x692b36:{ // PUNPCKLDQ MM7,dword ptr [0x007b7158]
wr<4>(c,0x1174,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x692b3d;}
case 0x692b3d:{ // MOVQ qword ptr [ESP + 0x40],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b42;}
case 0x692b42:{ // MOVQ qword ptr [ESP + 0x50],MM6
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b47;}
case 0x692b47:{ // MOVQ qword ptr [ESP + 0x58],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b4c;}
case 0x692b4c:{ // MOVQ qword ptr [ESP + 0x78],MM7
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x692b51;}
case 0x692b51:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x692b53;}
case 0x692b53:{ // JZ 0x00692d72
if(r<1>(c,0x206)){return 0x692d72;}
return 0x692b59;}
case 0x692b59:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b5d;}
case 0x692b5d:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692b61;}
case 0x692b61:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b64;}
case 0x692b64:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692b68;}
case 0x692b68:{ // PFSUB MM0,MM2
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x692b6c;}
case 0x692b6c:{ // PFSUB MM1,MM3
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x692b70;}
case 0x692b70:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692b74;}
case 0x692b74:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x692b78;}
case 0x692b78:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b7b;}
case 0x692b7b:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b7f;}
case 0x692b7f:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b84;}
case 0x692b84:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692b87;}
case 0x692b87:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b8c;}
case 0x692b8c:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692b8f;}
case 0x692b8f:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692b94;}
case 0x692b94:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692b97;}
case 0x692b97:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692b9a;}
case 0x692b9a:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692b9e;}
case 0x692b9e:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692ba1;}
case 0x692ba1:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692ba7;}
case 0x692ba7:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692bac;}
case 0x692bac:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692bb0;}
case 0x692bb0:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692bb3;}
case 0x692bb3:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692bb9;}
case 0x692bb9:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692bbd;}
case 0x692bbd:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692bc1;}
case 0x692bc1:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692bc5;}
case 0x692bc5:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692bcb;}
case 0x692bcb:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692bcf;}
case 0x692bcf:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692bd3;}
case 0x692bd3:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692bd7;}
case 0x692bd7:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692bdd;}
case 0x692bdd:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692be1;}
case 0x692be1:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692be5;}
case 0x692be5:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692be9;}
case 0x692be9:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692bed;}
case 0x692bed:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692bf0;}
case 0x692bf0:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692bf5;}
case 0x692bf5:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692bf9;}
case 0x692bf9:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692bfc;}
case 0x692bfc:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c01;}
case 0x692c01:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692c04;}
case 0x692c04:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c09;}
case 0x692c09:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692c0c;}
case 0x692c0c:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692c0f;}
case 0x692c0f:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692c13;}
case 0x692c13:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692c16;}
case 0x692c16:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692c1c;}
case 0x692c1c:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c21;}
case 0x692c21:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692c25;}
case 0x692c25:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692c28;}
case 0x692c28:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692c2e;}
case 0x692c2e:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692c32;}
case 0x692c32:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692c36;}
case 0x692c36:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692c3a;}
case 0x692c3a:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692c40;}
case 0x692c40:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692c44;}
case 0x692c44:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692c48;}
case 0x692c48:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692c4c;}
case 0x692c4c:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692c52;}
case 0x692c52:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692c56;}
case 0x692c56:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c5a;}
case 0x692c5a:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692c5e;}
case 0x692c5e:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c62;}
case 0x692c62:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692c66;}
case 0x692c66:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c6b;}
case 0x692c6b:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692c6f;}
case 0x692c6f:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692c72;}
case 0x692c72:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c77;}
case 0x692c77:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692c7a;}
case 0x692c7a:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c7f;}
case 0x692c7f:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692c82;}
case 0x692c82:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692c85;}
case 0x692c85:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692c89;}
case 0x692c89:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692c8c;}
case 0x692c8c:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692c92;}
case 0x692c92:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692c97;}
case 0x692c97:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692c9b;}
case 0x692c9b:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692c9e;}
case 0x692c9e:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692ca4;}
case 0x692ca4:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692ca8;}
case 0x692ca8:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692cac;}
case 0x692cac:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692cb0;}
case 0x692cb0:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692cb6;}
case 0x692cb6:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692cba;}
case 0x692cba:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692cbe;}
case 0x692cbe:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692cc2;}
case 0x692cc2:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692cc8;}
case 0x692cc8:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692ccc;}
case 0x692ccc:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692cd0;}
case 0x692cd0:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692cd4;}
case 0x692cd4:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692cd8;}
case 0x692cd8:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692cdc;}
case 0x692cdc:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692ce1;}
case 0x692ce1:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692ce5;}
case 0x692ce5:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692ce8;}
case 0x692ce8:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692ced;}
case 0x692ced:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692cf0;}
case 0x692cf0:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692cf5;}
case 0x692cf5:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692cf8;}
case 0x692cf8:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692cfb;}
case 0x692cfb:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692cff;}
case 0x692cff:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692d02;}
case 0x692d02:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692d08;}
case 0x692d08:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d0d;}
case 0x692d0d:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692d11;}
case 0x692d11:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692d14;}
case 0x692d14:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692d1a;}
case 0x692d1a:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692d1e;}
case 0x692d1e:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692d22;}
case 0x692d22:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692d26;}
case 0x692d26:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692d2c;}
case 0x692d2c:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692d30;}
case 0x692d30:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692d34;}
case 0x692d34:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692d38;}
case 0x692d38:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692d3e;}
case 0x692d3e:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692d42;}
case 0x692d42:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692d46;}
case 0x692d46:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692d4a;}
case 0x692d4a:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692d4e;}
case 0x692d4e:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d52;}
case 0x692d52:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692d56;}
case 0x692d56:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d59;}
case 0x692d59:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692d5d;}
case 0x692d5d:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x692d61;}
case 0x692d61:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x692d65;}
case 0x692d65:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692d69;}
case 0x692d69:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x692d6d;}
case 0x692d6d:{ // JMP 0x00692f48
return 0x692f48;
return 0x692d72;}
case 0x692d72:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d75;}
case 0x692d75:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d79;}
case 0x692d79:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d7e;}
case 0x692d7e:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692d81;}
case 0x692d81:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d86;}
case 0x692d86:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692d89;}
case 0x692d89:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692d8e;}
case 0x692d8e:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692d91;}
case 0x692d91:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692d94;}
case 0x692d94:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692d98;}
case 0x692d98:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692d9b;}
case 0x692d9b:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692da1;}
case 0x692da1:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692da6;}
case 0x692da6:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692daa;}
case 0x692daa:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692dad;}
case 0x692dad:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692db3;}
case 0x692db3:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692db7;}
case 0x692db7:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692dbb;}
case 0x692dbb:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692dbf;}
case 0x692dbf:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692dc5;}
case 0x692dc5:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692dc9;}
case 0x692dc9:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692dcd;}
case 0x692dcd:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692dd1;}
case 0x692dd1:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692dd7;}
case 0x692dd7:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692ddb;}
case 0x692ddb:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692ddf;}
case 0x692ddf:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692de3;}
case 0x692de3:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692de7;}
case 0x692de7:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x692dea;}
case 0x692dea:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692def;}
case 0x692def:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692df3;}
case 0x692df3:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692df6;}
case 0x692df6:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692dfb;}
case 0x692dfb:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692dfe;}
case 0x692dfe:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e03;}
case 0x692e03:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692e06;}
case 0x692e06:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692e09;}
case 0x692e09:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692e0d;}
case 0x692e0d:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692e10;}
case 0x692e10:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692e16;}
case 0x692e16:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e1b;}
case 0x692e1b:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692e1f;}
case 0x692e1f:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692e22;}
case 0x692e22:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692e28;}
case 0x692e28:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692e2c;}
case 0x692e2c:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692e30;}
case 0x692e30:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692e34;}
case 0x692e34:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692e3a;}
case 0x692e3a:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692e3e;}
case 0x692e3e:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692e42;}
case 0x692e42:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692e46;}
case 0x692e46:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692e4c;}
case 0x692e4c:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692e50;}
case 0x692e50:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e54;}
case 0x692e54:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692e58;}
case 0x692e58:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e5c;}
case 0x692e5c:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692e60;}
case 0x692e60:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e65;}
case 0x692e65:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692e69;}
case 0x692e69:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692e6c;}
case 0x692e6c:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e71;}
case 0x692e71:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692e74;}
case 0x692e74:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e79;}
case 0x692e79:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692e7c;}
case 0x692e7c:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692e7f;}
case 0x692e7f:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692e83;}
case 0x692e83:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692e86;}
case 0x692e86:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692e8c;}
case 0x692e8c:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692e91;}
case 0x692e91:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692e95;}
case 0x692e95:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692e98;}
case 0x692e98:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692e9e;}
case 0x692e9e:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692ea2;}
case 0x692ea2:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692ea6;}
case 0x692ea6:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692eaa;}
case 0x692eaa:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692eb0;}
case 0x692eb0:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692eb4;}
case 0x692eb4:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692eb8;}
case 0x692eb8:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692ebc;}
case 0x692ebc:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692ec2;}
case 0x692ec2:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692ec6;}
case 0x692ec6:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692eca;}
case 0x692eca:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692ece;}
case 0x692ece:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692ed2;}
case 0x692ed2:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692ed6;}
case 0x692ed6:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692edb;}
case 0x692edb:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692edf;}
case 0x692edf:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x692ee2;}
case 0x692ee2:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692ee7;}
case 0x692ee7:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x692eea;}
case 0x692eea:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692eef;}
case 0x692eef:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x692ef2;}
case 0x692ef2:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x692ef5;}
case 0x692ef5:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692ef9;}
case 0x692ef9:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692efc;}
case 0x692efc:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x692f02;}
case 0x692f02:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f07;}
case 0x692f07:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x692f0b;}
case 0x692f0b:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x692f0e;}
case 0x692f0e:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x692f14;}
case 0x692f14:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692f18;}
case 0x692f18:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x692f1c;}
case 0x692f1c:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692f20;}
case 0x692f20:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x692f26;}
case 0x692f26:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x692f2a;}
case 0x692f2a:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x692f2e;}
case 0x692f2e:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x692f32;}
case 0x692f32:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x692f38;}
case 0x692f38:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x692f3c;}
case 0x692f3c:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x692f40;}
case 0x692f40:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692f44;}
case 0x692f44:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692f48;}
case 0x692f48:{ // MOV ECX,dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x692f4b;}
case 0x692f4b:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x692f4d;}
case 0x692f4d:{ // JZ 0x00692f6e
if(r<1>(c,0x206)){return 0x692f6e;}
return 0x692f4f;}
case 0x692f4f:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f53;}
case 0x692f53:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692f57;}
case 0x692f57:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f5a;}
case 0x692f5a:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x692f5e;}
case 0x692f5e:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x692f62;}
case 0x692f62:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x692f66;}
case 0x692f66:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x692f6a;}
case 0x692f6a:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x692f6e;}
case 0x692f6e:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x692f70;}
case 0x692f70:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x692f71;}
case 0x692f71:{ // FEMMS
user_op(c,251,{});
return 0x692f73;}
case 0x692f73:{ // RET 0x1c
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
return uint32_t(r<4>(c,0x284));
return 0x692f76;}
case 0x692f76:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x692f7a;}
case 0x692f7a:{ // SUB ESP,0x40
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x692f7d;}
case 0x692f7d:{ // MOVQ MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f81;}
case 0x692f81:{ // MOVQ MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f85;}
case 0x692f85:{ // PSWAPD MM5,MM1
wr<8>(c,0x1150,user_op(c,524544,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x692f89;}
case 0x692f89:{ // MOVQ MM3,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f8d;}
case 0x692f8d:{ // PSWAPD MM4,MM2
wr<8>(c,0x1140,user_op(c,524544,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x692f91;}
case 0x692f91:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692f94;}
case 0x692f94:{ // PSWAPD MM6,MM3
wr<8>(c,0x1160,user_op(c,524544,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x692f98;}
case 0x692f98:{ // PSWAPD MM7,MM2
wr<8>(c,0x1170,user_op(c,524544,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x692f9c;}
case 0x692f9c:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x692fa0;}
case 0x692fa0:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x692fa4;}
case 0x692fa4:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x692fa8;}
case 0x692fa8:{ // PSWAPD MM0,MM3
wr<8>(c,0x1100,user_op(c,524544,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x692fac;}
case 0x692fac:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x692fb0;}
case 0x692fb0:{ // PFNACC MM5,MM4
wr<8>(c,0x1150,user_op(c,524542,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692fb4;}
case 0x692fb4:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x692fb8;}
case 0x692fb8:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692fbc;}
case 0x692fbc:{ // PFNACC MM6,MM7
wr<8>(c,0x1160,user_op(c,524542,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x692fc0;}
case 0x692fc0:{ // PFNACC MM1,MM2
wr<8>(c,0x1110,user_op(c,524542,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x692fc4;}
case 0x692fc4:{ // MOVQ MM0,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692fc8;}
case 0x692fc8:{ // MOVQ MM2,MM6
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x692fcb;}
case 0x692fcb:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x692fce;}
case 0x692fce:{ // MOVQ MM7,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x692fd2;}
case 0x692fd2:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x692fd5;}
case 0x692fd5:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x692fd8;}
case 0x692fd8:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x692fdb;}
case 0x692fdb:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x692fdf;}
case 0x692fdf:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x692fe2;}
case 0x692fe2:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x692fe7;}
case 0x692fe7:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x692feb;}
case 0x692feb:{ // PFADD MM2,MM4
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x692fef;}
case 0x692fef:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x692ff2;}
case 0x692ff2:{ // PFSUB MM2,MM3
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x692ff6;}
case 0x692ff6:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x692ff9;}
case 0x692ff9:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x692ffc;}
case 0x692ffc:{ // MOVQ qword ptr [ESP + 0x8],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693001;}
default:missing_instruction(c.pc);}}
}
