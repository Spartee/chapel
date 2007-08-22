/***************************************************************
This code was generated by  Spiral 5.0 beta, www.spiral.net --
Copyright (c) 2005, Carnegie Mellon University
All rights reserved.
The code is distributed under a BSD style license
(see http://www.opensource.org/licenses/bsd-license.php)

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

* Redistributions of source code must retain the above copyright
  notice, reference to Spiral, this list of conditions and the
  following disclaimer.
* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the following
  disclaimer in the documentation and/or other materials provided
  with the distribution.
* Neither the name of Carnegie Mellon University nor the name of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*AS IS* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************/

#include "omega64c.h"

void init_fft32() {

}

void fft32(_Complex double  *Y, _Complex double  *X) {
    _Complex double a13984, a13985, a13986, a13987, a13988, a13989, a13990, a13991, a13992, a13993, a13994, a13995, a13996, a13997, a13998, a13999, a14000, a14001, a14002, a14003, a14004, a14005, a14006, a14007, a14008, a14009, a14010, a14011, a14012, a14013, a14014, a14015, a14016, a14017, a14018, a14019, a14020, a14021, a14022, a14023, a14024, a14025, a14026, a14027, a14028, s3567, s3568, s3569, s3570, s3571, s3572, s3573, s3574, s3575, s3576, s3577, s3578, s3579, s3580, s3581, s3582, s3583, s3584, s3585, s3586, s3587, s3588, s3589, s3590, s3591, s3592, s3593, s3594, s3595, s3596, s3597, s3598, t15143, t15144, t15145, t15146, t15147, t15148, t15149, t15150, t15151, t15152, t15153, t15154, t15155, t15156, t15157, t15158, t15159, t15160, t15161, t15162, t15163, t15164, t15165, t15166, t15167, t15168, t15169, t15170, t15171, t15172, t15173, t15174, t15175, t15176, t15177, t15178, t15179, t15180, t15181, t15182, t15183, t15184, t15185, t15186, t15187, t15188, t15189, t15190, t15191, t15192, t15193, t15194, t15195, t15196, t15197, t15198, t15199, t15200, t15201, t15202, t15203, t15204, t15205, t15206, t15207, t15208, t15209, t15210, t15211, t15212, t15213, t15214, t15215, t15216, t15217, t15218, t15219, t15220, t15221, t15222, t15223, t15224, t15225;
    a13984 = *(X);
    a13985 = *((X + 16));
    t15143 = (a13984 + a13985);
    t15144 = (a13984 - a13985);
    a13986 = *((X + 8));
    a13987 = *((X + 24));
    t15145 = (a13986 + a13987);
    t15146 = (t15143 + t15145);
    t15147 = (t15143 - t15145);
    a13988 = (__I__*(a13986 - a13987));
    t15148 = (t15144 + a13988);
    t15149 = (t15144 - a13988);
    a13989 = *((X + 4));
    a13990 = *((X + 20));
    t15150 = (a13989 + a13990);
    s3567 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(a13989 - a13990));
    a13991 = *((X + 12));
    a13992 = *((X + 28));
    t15151 = (a13991 + a13992);
    s3568 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(a13991 - a13992));
    t15152 = (t15150 + t15151);
    s3569 = (__I__*(t15150 - t15151));
    t15153 = (s3567 + s3568);
    s3570 = (__I__*(s3567 - s3568));
    t15154 = (t15146 + t15152);
    t15155 = (t15146 - t15152);
    t15156 = (t15148 + t15153);
    t15157 = (t15148 - t15153);
    t15158 = (t15147 + s3569);
    t15159 = (t15147 - s3569);
    t15160 = (t15149 + s3570);
    t15161 = (t15149 - s3570);
    a13993 = *((X + 1));
    a13994 = *((X + 17));
    t15162 = (a13993 + a13994);
    t15163 = (a13993 - a13994);
    a13995 = *((X + 9));
    a13996 = *((X + 25));
    t15164 = (a13995 + a13996);
    t15165 = (t15162 + t15164);
    t15166 = (t15162 - t15164);
    a13997 = (__I__*(a13995 - a13996));
    t15167 = (t15163 + a13997);
    t15168 = (t15163 - a13997);
    a13998 = *((X + 5));
    a13999 = *((X + 21));
    t15169 = (a13998 + a13999);
    s3571 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(a13998 - a13999));
    a14000 = *((X + 13));
    a14001 = *((X + 29));
    t15170 = (a14000 + a14001);
    s3572 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(a14000 - a14001));
    t15171 = (t15169 + t15170);
    s3573 = (__I__*(t15169 - t15170));
    t15172 = (s3571 + s3572);
    s3574 = (__I__*(s3571 - s3572));
    t15173 = (t15165 + t15171);
    s3575 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(t15165 - t15171));
    s3576 = ((0.98078528040323043 + __I__ * 0.19509032201612825)*(t15167 + t15172));
    s3577 = ((0.55557023301960218 + __I__ * 0.83146961230254524)*(t15167 - t15172));
    s3578 = ((0.92387953251128674 + __I__ * 0.38268343236508978)*(t15166 + s3573));
    s3579 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t15166 - s3573));
    s3580 = ((0.83146961230254524 + __I__ * 0.55557023301960218)*(t15168 + s3574));
    s3581 = ((0.19509032201612825 + __I__ * 0.98078528040323043)*(t15168 - s3574));
    a14002 = *((X + 2));
    a14003 = *((X + 18));
    t15174 = (a14002 + a14003);
    t15175 = (a14002 - a14003);
    a14004 = *((X + 10));
    a14005 = *((X + 26));
    t15176 = (a14004 + a14005);
    t15177 = (t15174 + t15176);
    s3582 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(t15174 - t15176));
    a14006 = (__I__*(a14004 - a14005));
    s3583 = ((0.92387953251128674 + __I__ * 0.38268343236508978)*(t15175 + a14006));
    s3584 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t15175 - a14006));
    a14007 = *((X + 6));
    a14008 = *((X + 22));
    t15178 = (a14007 + a14008);
    t15179 = (a14007 - a14008);
    a14009 = *((X + 14));
    a14010 = *((X + 30));
    t15180 = (a14009 + a14010);
    t15181 = (t15178 + t15180);
    s3585 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(t15178 - t15180));
    a14011 = (__I__*(a14009 - a14010));
    s3586 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t15179 + a14011));
    s3587 = ((-0.92387953251128674 - __I__ * 0.38268343236508978)*(t15179 - a14011));
    t15182 = (t15177 + t15181);
    t15183 = ((__I__*t15177) + ((- __I__)*t15181));
    t15184 = (s3583 + s3586);
    t15185 = ((__I__*s3583) + ((- __I__)*s3586));
    t15186 = (s3582 + s3585);
    t15187 = ((__I__*s3582) + ((- __I__)*s3585));
    t15188 = (s3584 + s3587);
    t15189 = ((__I__*s3584) + ((- __I__)*s3587));
    a14012 = *((X + 3));
    a14013 = *((X + 19));
    t15190 = (a14012 + a14013);
    t15191 = (a14012 - a14013);
    a14014 = *((X + 11));
    a14015 = *((X + 27));
    t15192 = (a14014 + a14015);
    t15193 = (t15190 + t15192);
    t15194 = (t15190 - t15192);
    a14016 = (__I__*(a14014 - a14015));
    t15195 = (t15191 + a14016);
    t15196 = (t15191 - a14016);
    a14017 = *((X + 7));
    a14018 = *((X + 23));
    t15197 = (a14017 + a14018);
    s3588 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(a14017 - a14018));
    a14019 = *((X + 15));
    a14020 = *((X + 31));
    t15198 = (a14019 + a14020);
    s3589 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(a14019 - a14020));
    t15199 = (t15197 + t15198);
    s3590 = (__I__*(t15197 - t15198));
    t15200 = (s3588 + s3589);
    s3591 = (__I__*(s3588 - s3589));
    t15201 = (t15193 + t15199);
    s3592 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(t15193 - t15199));
    s3593 = ((0.83146961230254524 + __I__ * 0.55557023301960218)*(t15195 + t15200));
    s3594 = ((-0.98078528040323043 + __I__ * 0.19509032201612825)*(t15195 - t15200));
    s3595 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t15194 + s3590));
    s3596 = ((-0.92387953251128674 - __I__ * 0.38268343236508978)*(t15194 - s3590));
    s3597 = ((-0.19509032201612825 + __I__ * 0.98078528040323043)*(t15196 + s3591));
    s3598 = ((-0.55557023301960218 - __I__ * 0.83146961230254524)*(t15196 - s3591));
    t15202 = (t15154 + t15182);
    t15203 = (t15154 - t15182);
    t15204 = (t15173 + t15201);
    *(Y) = (t15202 + t15204);
    *((Y + 16)) = (t15202 - t15204);
    a14021 = (__I__*(t15173 - t15201));
    *((Y + 8)) = (t15203 + a14021);
    *((Y + 24)) = (t15203 - a14021);
    t15205 = (t15156 + t15184);
    t15206 = (t15156 - t15184);
    t15207 = (s3576 + s3593);
    *((Y + 1)) = (t15205 + t15207);
    *((Y + 17)) = (t15205 - t15207);
    a14022 = (__I__*(s3576 - s3593));
    *((Y + 9)) = (t15206 + a14022);
    *((Y + 25)) = (t15206 - a14022);
    t15208 = (t15158 + t15186);
    t15209 = (t15158 - t15186);
    t15210 = (s3578 + s3595);
    *((Y + 2)) = (t15208 + t15210);
    *((Y + 18)) = (t15208 - t15210);
    a14023 = (__I__*(s3578 - s3595));
    *((Y + 10)) = (t15209 + a14023);
    *((Y + 26)) = (t15209 - a14023);
    t15211 = (t15160 + t15188);
    t15212 = (t15160 - t15188);
    t15213 = (s3580 + s3597);
    *((Y + 3)) = (t15211 + t15213);
    *((Y + 19)) = (t15211 - t15213);
    a14024 = (__I__*(s3580 - s3597));
    *((Y + 11)) = (t15212 + a14024);
    *((Y + 27)) = (t15212 - a14024);
    t15214 = (t15155 + t15183);
    t15215 = (t15155 - t15183);
    t15216 = (s3575 + s3592);
    *((Y + 4)) = (t15214 + t15216);
    *((Y + 20)) = (t15214 - t15216);
    a14025 = (__I__*(s3575 - s3592));
    *((Y + 12)) = (t15215 + a14025);
    *((Y + 28)) = (t15215 - a14025);
    t15217 = (t15157 + t15185);
    t15218 = (t15157 - t15185);
    t15219 = (s3577 + s3594);
    *((Y + 5)) = (t15217 + t15219);
    *((Y + 21)) = (t15217 - t15219);
    a14026 = (__I__*(s3577 - s3594));
    *((Y + 13)) = (t15218 + a14026);
    *((Y + 29)) = (t15218 - a14026);
    t15220 = (t15159 + t15187);
    t15221 = (t15159 - t15187);
    t15222 = (s3579 + s3596);
    *((Y + 6)) = (t15220 + t15222);
    *((Y + 22)) = (t15220 - t15222);
    a14027 = (__I__*(s3579 - s3596));
    *((Y + 14)) = (t15221 + a14027);
    *((Y + 30)) = (t15221 - a14027);
    t15223 = (t15161 + t15189);
    t15224 = (t15161 - t15189);
    t15225 = (s3581 + s3598);
    *((Y + 7)) = (t15223 + t15225);
    *((Y + 23)) = (t15223 - t15225);
    a14028 = (__I__*(s3581 - s3598));
    *((Y + 15)) = (t15224 + a14028);
    *((Y + 31)) = (t15224 - a14028);

}
