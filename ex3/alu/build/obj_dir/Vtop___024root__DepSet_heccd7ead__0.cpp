// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->in = ((0x200U & ((IData)(vlSelf->a) << 5U)) 
                  | ((0x100U & ((IData)(vlSelf->b) 
                                << 4U)) | ((0xf0U & 
                                            ((IData)(vlSelf->a) 
                                             << 4U)) 
                                           | (0xfU 
                                              & (IData)(vlSelf->b)))));
    if (((((((((0U == (IData)(vlSelf->button)) | (1U 
                                                  == (IData)(vlSelf->button))) 
              | (2U == (IData)(vlSelf->button))) | 
             (3U == (IData)(vlSelf->button))) | (4U 
                                                 == (IData)(vlSelf->button))) 
           | (5U == (IData)(vlSelf->button))) | (6U 
                                                 == (IData)(vlSelf->button))) 
         | (7U == (IData)(vlSelf->button)))) {
        if ((0U == (IData)(vlSelf->button))) {
            vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                             ? 0x7eU : 0x7fU);
            if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                vlSelf->__Vfunc_top__DOT__seg_led__4__x 
                    = (0xfU & VL_DIV_III(32, (0xfU 
                                              & (IData)(vlSelf->b)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__4__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__4__x))
                            ? 0U : 4U));
                vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__4__Vfuncout;
                vlSelf->__Vfunc_top__DOT__seg_led__5__x 
                    = (0xfU & VL_MODDIV_III(32, ((0xfU 
                                                  & (IData)(vlSelf->b)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__5__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__5__x))
                            ? 0U : 4U));
                vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__5__Vfuncout;
            } else {
                vlSelf->segD = 1U;
                vlSelf->__Vfunc_top__DOT__seg_led__7__x 
                    = (0xfU & (IData)(vlSelf->b));
                vlSelf->__Vfunc_top__DOT__seg_led__7__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__7__x))
                            ? 0U : 4U));
                vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__7__Vfuncout;
            }
            if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                vlSelf->__Vfunc_top__DOT__seg_led__0__x 
                    = (0xfU & VL_DIV_III(32, (0xfU 
                                              & (IData)(vlSelf->a)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__0__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__0__x))
                            ? 0U : 4U));
                vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__0__Vfuncout;
                vlSelf->__Vfunc_top__DOT__seg_led__1__x 
                    = (0xfU & VL_MODDIV_III(32, ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__1__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__1__x))
                            ? 0U : 4U));
                vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__1__Vfuncout;
            } else {
                vlSelf->segA = 1U;
                vlSelf->__Vfunc_top__DOT__seg_led__3__x 
                    = (0xfU & (IData)(vlSelf->a));
                vlSelf->__Vfunc_top__DOT__seg_led__3__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__3__x))
                            ? 0U : 4U));
                vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__3__Vfuncout;
            }
            vlSelf->s = (0x1fU & ((IData)(vlSelf->a) 
                                  + (IData)(vlSelf->b)));
            vlSelf->out_c = (1U & (((IData)(vlSelf->a) 
                                    + (IData)(vlSelf->b)) 
                                   >> 5U));
            vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->b) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->s) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->a) 
                                        >> 3U))));
            vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->s)))));
            vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                             ? 0x7eU : 0x7fU);
            if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                vlSelf->__Vfunc_top__DOT__seg_led__8__x 
                    = (0xfU & VL_DIV_III(32, (0xfU 
                                              & (IData)(vlSelf->s)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__8__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__8__x))
                            ? 0U : 4U));
                vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__8__Vfuncout;
                vlSelf->__Vfunc_top__DOT__seg_led__9__x 
                    = (0xfU & VL_MODDIV_III(32, ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__9__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__9__x))
                            ? 0U : 4U));
                vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__9__Vfuncout;
            } else {
                vlSelf->__Vfunc_top__DOT__seg_led__11__x 
                    = (0xfU & (IData)(vlSelf->s));
                vlSelf->segG = 1U;
                vlSelf->__Vfunc_top__DOT__seg_led__11__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__11__x))
                            ? 0U : 4U));
                vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__11__Vfuncout;
            }
        } else if ((1U == (IData)(vlSelf->button))) {
            vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                             ? 0x7eU : 0x7fU);
            if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                vlSelf->__Vfunc_top__DOT__seg_led__16__x 
                    = (0xfU & VL_DIV_III(32, (0xfU 
                                              & (IData)(vlSelf->b)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__16__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__16__x))
                            ? 0U : 4U));
                vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__16__Vfuncout;
                vlSelf->__Vfunc_top__DOT__seg_led__17__x 
                    = (0xfU & VL_MODDIV_III(32, ((0xfU 
                                                  & (IData)(vlSelf->b)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__17__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__17__x))
                            ? 0U : 4U));
                vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__17__Vfuncout;
            } else {
                vlSelf->segD = 1U;
                vlSelf->__Vfunc_top__DOT__seg_led__19__x 
                    = (0xfU & (IData)(vlSelf->b));
                vlSelf->__Vfunc_top__DOT__seg_led__19__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__19__x))
                            ? 0U : 4U));
                vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__19__Vfuncout;
            }
            if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                vlSelf->__Vfunc_top__DOT__seg_led__12__x 
                    = (0xfU & VL_DIV_III(32, (0xfU 
                                              & (IData)(vlSelf->a)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__12__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__12__x))
                            ? 0U : 4U));
                vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__12__Vfuncout;
                vlSelf->__Vfunc_top__DOT__seg_led__13__x 
                    = (0xfU & VL_MODDIV_III(32, ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__13__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__13__x))
                            ? 0U : 4U));
                vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__13__Vfuncout;
            } else {
                vlSelf->segA = 1U;
                vlSelf->__Vfunc_top__DOT__seg_led__15__x 
                    = (0xfU & (IData)(vlSelf->a));
                vlSelf->__Vfunc_top__DOT__seg_led__15__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__15__x))
                            ? 0U : 4U));
                vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__15__Vfuncout;
            }
            vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                = ((0xffffffe0U & vlSelf->top__DOT__unnamedblk1__DOT__diff_b) 
                   | (IData)(vlSelf->b));
            vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                = ((0xfffffffeU & vlSelf->top__DOT__unnamedblk1__DOT__diff_b) 
                   | (1U & (~ vlSelf->top__DOT__unnamedblk1__DOT__diff_b)));
            vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                = ((0xfffffffdU & vlSelf->top__DOT__unnamedblk1__DOT__diff_b) 
                   | (2U & ((~ (vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                                >> 1U)) << 1U)));
            vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                = ((0xfffffffbU & vlSelf->top__DOT__unnamedblk1__DOT__diff_b) 
                   | (4U & ((~ (vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                                >> 2U)) << 2U)));
            vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                = ((0xfffffff7U & vlSelf->top__DOT__unnamedblk1__DOT__diff_b) 
                   | (8U & ((~ (vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                                >> 3U)) << 3U)));
            vlSelf->top__DOT__unnamedblk1__DOT__diff_b 
                = ((IData)(1U) + vlSelf->top__DOT__unnamedblk1__DOT__diff_b);
            if (((0U == (IData)(vlSelf->a)) & (0U == 
                                               (0xfU 
                                                & vlSelf->top__DOT__unnamedblk1__DOT__diff_b)))) {
                vlSelf->out_c = 0U;
                vlSelf->s = 0U;
            } else if (((0U != (IData)(vlSelf->a)) 
                        & (0U == (0xfU & vlSelf->top__DOT__unnamedblk1__DOT__diff_b)))) {
                vlSelf->out_c = (1U & (((IData)(vlSelf->a) 
                                        + (0x1fU & vlSelf->top__DOT__unnamedblk1__DOT__diff_b)) 
                                       >> 5U));
                vlSelf->s = (0x1fU & ((IData)(vlSelf->a) 
                                      + vlSelf->top__DOT__unnamedblk1__DOT__diff_b));
            } else {
                vlSelf->out_c = (1U & (((IData)(vlSelf->a) 
                                        + (0x1fU & vlSelf->top__DOT__unnamedblk1__DOT__diff_b)) 
                                       >> 5U));
                vlSelf->s = (0x1fU & ((IData)(vlSelf->a) 
                                      + vlSelf->top__DOT__unnamedblk1__DOT__diff_b));
                if ((0x10U & (IData)(vlSelf->s))) {
                    vlSelf->top__DOT____Vlvbound_hf0824abe__0 
                        = (1U & (~ (IData)(vlSelf->s)));
                    vlSelf->s = ((0x1eU & (IData)(vlSelf->s)) 
                                 | (IData)(vlSelf->top__DOT____Vlvbound_hf0824abe__0));
                    vlSelf->top__DOT____Vlvbound_hf0824abe__0 
                        = (1U & (~ ((IData)(vlSelf->s) 
                                    >> 1U)));
                    vlSelf->s = ((0x1dU & (IData)(vlSelf->s)) 
                                 | ((IData)(vlSelf->top__DOT____Vlvbound_hf0824abe__0) 
                                    << 1U));
                    vlSelf->top__DOT____Vlvbound_hf0824abe__0 
                        = (1U & (~ ((IData)(vlSelf->s) 
                                    >> 2U)));
                    vlSelf->s = ((0x1bU & (IData)(vlSelf->s)) 
                                 | ((IData)(vlSelf->top__DOT____Vlvbound_hf0824abe__0) 
                                    << 2U));
                    vlSelf->top__DOT____Vlvbound_hf0824abe__0 
                        = (1U & (~ ((IData)(vlSelf->s) 
                                    >> 3U)));
                    vlSelf->s = ((0x17U & (IData)(vlSelf->s)) 
                                 | ((IData)(vlSelf->top__DOT____Vlvbound_hf0824abe__0) 
                                    << 3U));
                    vlSelf->s = (0x1fU & ((IData)(1U) 
                                          + (IData)(vlSelf->s)));
                }
            }
            vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->b) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->s) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->a) 
                                        >> 3U))));
            vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->s)))));
            vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                             ? 0x7eU : 0x7fU);
            if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                vlSelf->__Vfunc_top__DOT__seg_led__20__x 
                    = (0xfU & VL_DIV_III(32, (0xfU 
                                              & (IData)(vlSelf->s)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__20__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__20__x))
                            ? 0U : 4U));
                vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__20__Vfuncout;
                vlSelf->__Vfunc_top__DOT__seg_led__21__x 
                    = (0xfU & VL_MODDIV_III(32, ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                vlSelf->__Vfunc_top__DOT__seg_led__21__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__21__x))
                            ? 0U : 4U));
                vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__21__Vfuncout;
            } else {
                vlSelf->__Vfunc_top__DOT__seg_led__23__x 
                    = (0xfU & (IData)(vlSelf->s));
                vlSelf->segG = 1U;
                vlSelf->__Vfunc_top__DOT__seg_led__23__Vfuncout 
                    = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x)) 
                              | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))) 
                             | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))) 
                            | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))) 
                           | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))) 
                          | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))) 
                         | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))) 
                        | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x)))
                        ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                                     ? 0x4fU : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                        : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__23__x))
                            ? 0U : 4U));
                vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__23__Vfuncout;
            }
        } else {
            if ((2U == (IData)(vlSelf->button))) {
                vlSelf->segC = 0x7fU;
                if ((0xaU < (0xfU & (IData)(vlSelf->a)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__24__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__24__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__24__x))
                                ? 0U : 4U));
                    vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__24__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__25__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__25__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__25__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__25__Vfuncout;
                } else {
                    vlSelf->segA = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__27__x 
                        = (0xfU & (IData)(vlSelf->a));
                    vlSelf->__Vfunc_top__DOT__seg_led__27__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__27__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__27__Vfuncout;
                }
                vlSelf->s = ((0x10U & (IData)(vlSelf->s)) 
                             | (0xfU & (~ (IData)(vlSelf->a))));
                vlSelf->out_c = 0U;
                vlSelf->zero = 0U;
                vlSelf->overflow = 0U;
                vlSelf->segF = 0x7fU;
                if ((0xaU < (0xfU & (IData)(vlSelf->s)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__28__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__28__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__28__x))
                                ? 0U : 4U));
                    vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__28__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__29__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__29__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__29__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__29__Vfuncout;
                } else {
                    vlSelf->__Vfunc_top__DOT__seg_led__31__x 
                        = (0xfU & (IData)(vlSelf->s));
                    vlSelf->segG = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__31__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__31__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__31__Vfuncout;
                }
            } else if ((3U == (IData)(vlSelf->button))) {
                vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__32__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__32__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__32__x))
                                ? 0U : 4U));
                    vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__32__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__33__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__33__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__33__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__33__Vfuncout;
                } else {
                    vlSelf->segA = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__35__x 
                        = (0xfU & (IData)(vlSelf->a));
                    vlSelf->__Vfunc_top__DOT__seg_led__35__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__35__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__35__Vfuncout;
                }
                vlSelf->s = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
                vlSelf->out_c = 0U;
                vlSelf->zero = 0U;
                vlSelf->overflow = 0U;
                vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__40__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__40__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__40__x))
                                ? 0U : 4U));
                    vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__40__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__41__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__41__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__41__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__41__Vfuncout;
                } else {
                    vlSelf->__Vfunc_top__DOT__seg_led__43__x 
                        = (0xfU & (IData)(vlSelf->s));
                    vlSelf->segG = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__43__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__43__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__43__Vfuncout;
                }
            } else if ((4U == (IData)(vlSelf->button))) {
                vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__44__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__44__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__44__x))
                                ? 0U : 4U));
                    vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__44__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__45__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__45__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__45__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__45__Vfuncout;
                } else {
                    vlSelf->segA = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__47__x 
                        = (0xfU & (IData)(vlSelf->a));
                    vlSelf->__Vfunc_top__DOT__seg_led__47__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__47__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__47__Vfuncout;
                }
                vlSelf->s = ((IData)(vlSelf->a) | (IData)(vlSelf->b));
                vlSelf->out_c = 0U;
                vlSelf->zero = 0U;
                vlSelf->overflow = 0U;
                vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__52__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__52__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__52__x))
                                ? 0U : 4U));
                    vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__52__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__53__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__53__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__53__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__53__Vfuncout;
                } else {
                    vlSelf->__Vfunc_top__DOT__seg_led__55__x 
                        = (0xfU & (IData)(vlSelf->s));
                    vlSelf->segG = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__55__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__55__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__55__Vfuncout;
                }
            } else if ((5U == (IData)(vlSelf->button))) {
                vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__56__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__56__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__56__x))
                                ? 0U : 4U));
                    vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__56__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__57__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__57__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__57__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__57__Vfuncout;
                } else {
                    vlSelf->segA = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__59__x 
                        = (0xfU & (IData)(vlSelf->a));
                    vlSelf->__Vfunc_top__DOT__seg_led__59__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__59__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__59__Vfuncout;
                }
                vlSelf->s = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
                vlSelf->out_c = 0U;
                vlSelf->zero = 0U;
                vlSelf->overflow = 0U;
                vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__64__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__64__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__64__x))
                                ? 0U : 4U));
                    vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__64__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__65__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__65__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__65__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__65__Vfuncout;
                } else {
                    vlSelf->__Vfunc_top__DOT__seg_led__67__x 
                        = (0xfU & (IData)(vlSelf->s));
                    vlSelf->segG = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__67__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__67__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__67__Vfuncout;
                }
            } else if ((6U == (IData)(vlSelf->button))) {
                if ((((1U & ((IData)(vlSelf->a) >> 4U)) 
                      == (1U & ((IData)(vlSelf->b) 
                                >> 4U))) & (~ ((IData)(vlSelf->a) 
                                               >> 4U)))) {
                    vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                     ? 0x7eU : 0x7fU);
                    if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__68__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__68__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__68__x))
                                    ? 0U : 4U));
                        vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__68__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__69__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->a)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__69__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__69__x))
                                    ? 0U : 4U));
                        vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__69__Vfuncout;
                    } else {
                        vlSelf->segA = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__71__x 
                            = (0xfU & (IData)(vlSelf->a));
                        vlSelf->__Vfunc_top__DOT__seg_led__71__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__71__x))
                                    ? 0U : 4U));
                        vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__71__Vfuncout;
                    }
                    vlSelf->s = (((IData)(vlSelf->a) 
                                  < (IData)(vlSelf->b))
                                  ? 1U : 0U);
                    vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                     ? 0x7eU : 0x7fU);
                    if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__76__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__76__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__76__x))
                                    ? 0U : 4U));
                        vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__76__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__77__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->s)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__77__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__77__x))
                                    ? 0U : 4U));
                        vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__77__Vfuncout;
                    } else {
                        vlSelf->__Vfunc_top__DOT__seg_led__79__x 
                            = (0xfU & (IData)(vlSelf->s));
                        vlSelf->segG = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__79__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__79__x))
                                    ? 0U : 4U));
                        vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__79__Vfuncout;
                    }
                } else if ((((1U & ((IData)(vlSelf->a) 
                                    >> 4U)) == (1U 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U))) 
                            & ((IData)(vlSelf->a) >> 4U))) {
                    vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                     ? 0x7eU : 0x7fU);
                    if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__80__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__80__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__80__x))
                                    ? 0U : 4U));
                        vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__80__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__81__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->a)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__81__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__81__x))
                                    ? 0U : 4U));
                        vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__81__Vfuncout;
                    } else {
                        vlSelf->segA = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__83__x 
                            = (0xfU & (IData)(vlSelf->a));
                        vlSelf->__Vfunc_top__DOT__seg_led__83__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__83__x))
                                    ? 0U : 4U));
                        vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__83__Vfuncout;
                    }
                    vlSelf->s = (((IData)(vlSelf->a) 
                                  < (IData)(vlSelf->b))
                                  ? 0U : 1U);
                    vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                     ? 0x7eU : 0x7fU);
                    if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__88__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__88__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__88__x))
                                    ? 0U : 4U));
                        vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__88__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__89__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->s)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__89__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__89__x))
                                    ? 0U : 4U));
                        vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__89__Vfuncout;
                    } else {
                        vlSelf->__Vfunc_top__DOT__seg_led__91__x 
                            = (0xfU & (IData)(vlSelf->s));
                        vlSelf->segG = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__91__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__91__x))
                                    ? 0U : 4U));
                        vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__91__Vfuncout;
                    }
                } else if (((1U & ((IData)(vlSelf->a) 
                                   >> 4U)) != (1U & 
                                               ((IData)(vlSelf->b) 
                                                >> 4U)))) {
                    vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                     ? 0x7eU : 0x7fU);
                    if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__92__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__92__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__92__x))
                                    ? 0U : 4U));
                        vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__92__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__93__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->a)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__93__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__93__x))
                                    ? 0U : 4U));
                        vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__93__Vfuncout;
                    } else {
                        vlSelf->segA = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__95__x 
                            = (0xfU & (IData)(vlSelf->a));
                        vlSelf->__Vfunc_top__DOT__seg_led__95__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__95__x))
                                    ? 0U : 4U));
                        vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__95__Vfuncout;
                    }
                    vlSelf->s = (((IData)(vlSelf->a) 
                                  < (IData)(vlSelf->b))
                                  ? 0U : 1U);
                    vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                     ? 0x7eU : 0x7fU);
                    if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__100__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__100__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__100__x))
                                    ? 0U : 4U));
                        vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__100__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__101__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->s)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__101__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__101__x))
                                    ? 0U : 4U));
                        vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__101__Vfuncout;
                    } else {
                        vlSelf->__Vfunc_top__DOT__seg_led__103__x 
                            = (0xfU & (IData)(vlSelf->s));
                        vlSelf->segG = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__103__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__103__x))
                                    ? 0U : 4U));
                        vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__103__Vfuncout;
                    }
                }
                vlSelf->zero = 0U;
                vlSelf->overflow = 0U;
                vlSelf->out_c = 0U;
            } else {
                vlSelf->segC = ((0x10U & (IData)(vlSelf->b))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->a)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__104__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->a)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__104__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__104__x))
                                ? 0U : 4U));
                    vlSelf->segA = vlSelf->__Vfunc_top__DOT__seg_led__104__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__105__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->a)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__105__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__105__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__105__Vfuncout;
                } else {
                    vlSelf->segA = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__107__x 
                        = (0xfU & (IData)(vlSelf->a));
                    vlSelf->__Vfunc_top__DOT__seg_led__107__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__107__x))
                                ? 0U : 4U));
                    vlSelf->segB = vlSelf->__Vfunc_top__DOT__seg_led__107__Vfuncout;
                }
                vlSelf->s = (((IData)(vlSelf->a) == (IData)(vlSelf->b))
                              ? 1U : 0U);
                vlSelf->zero = 0U;
                vlSelf->overflow = 0U;
                vlSelf->out_c = 0U;
                vlSelf->segF = ((0x10U & (IData)(vlSelf->s))
                                 ? 0x7eU : 0x7fU);
                if ((0xaU <= (0xfU & (IData)(vlSelf->s)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__112__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->s)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__112__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__112__x))
                                ? 0U : 4U));
                    vlSelf->segG = vlSelf->__Vfunc_top__DOT__seg_led__112__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__113__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->s)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__113__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__113__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__113__Vfuncout;
                } else {
                    vlSelf->__Vfunc_top__DOT__seg_led__115__x 
                        = (0xfU & (IData)(vlSelf->s));
                    vlSelf->segG = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__115__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__115__x))
                                ? 0U : 4U));
                    vlSelf->segH = vlSelf->__Vfunc_top__DOT__seg_led__115__Vfuncout;
                }
            }
            if ((2U != (IData)(vlSelf->button))) {
                if ((3U == (IData)(vlSelf->button))) {
                    if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__36__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->b)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__36__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__36__x))
                                    ? 0U : 4U));
                        vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__36__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__37__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->b)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__37__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__37__x))
                                    ? 0U : 4U));
                        vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__37__Vfuncout;
                    } else {
                        vlSelf->segD = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__39__x 
                            = (0xfU & (IData)(vlSelf->b));
                        vlSelf->__Vfunc_top__DOT__seg_led__39__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__39__x))
                                    ? 0U : 4U));
                        vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__39__Vfuncout;
                    }
                } else if ((4U == (IData)(vlSelf->button))) {
                    if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__48__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->b)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__48__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__48__x))
                                    ? 0U : 4U));
                        vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__48__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__49__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->b)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__49__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__49__x))
                                    ? 0U : 4U));
                        vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__49__Vfuncout;
                    } else {
                        vlSelf->segD = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__51__x 
                            = (0xfU & (IData)(vlSelf->b));
                        vlSelf->__Vfunc_top__DOT__seg_led__51__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__51__x))
                                    ? 0U : 4U));
                        vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__51__Vfuncout;
                    }
                } else if ((5U == (IData)(vlSelf->button))) {
                    if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                        vlSelf->__Vfunc_top__DOT__seg_led__60__x 
                            = (0xfU & VL_DIV_III(32, 
                                                 (0xfU 
                                                  & (IData)(vlSelf->b)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__60__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__60__x))
                                    ? 0U : 4U));
                        vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__60__Vfuncout;
                        vlSelf->__Vfunc_top__DOT__seg_led__61__x 
                            = (0xfU & VL_MODDIV_III(32, 
                                                    ((0xfU 
                                                      & (IData)(vlSelf->b)) 
                                                     - (IData)(0xaU)), (IData)(0xaU)));
                        vlSelf->__Vfunc_top__DOT__seg_led__61__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__61__x))
                                    ? 0U : 4U));
                        vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__61__Vfuncout;
                    } else {
                        vlSelf->segD = 1U;
                        vlSelf->__Vfunc_top__DOT__seg_led__63__x 
                            = (0xfU & (IData)(vlSelf->b));
                        vlSelf->__Vfunc_top__DOT__seg_led__63__Vfuncout 
                            = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x)) 
                                      | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))) 
                                     | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))) 
                                    | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))) 
                                   | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))) 
                                  | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))) 
                                 | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))) 
                                | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x)))
                                ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                    ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                             ? 0x4fU
                                             : ((2U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                                   ? 0x4cU
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                                    ? 0x24U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                                     ? 0x20U
                                                     : 0xfU)))))))
                                : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__63__x))
                                    ? 0U : 4U));
                        vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__63__Vfuncout;
                    }
                } else if ((6U == (IData)(vlSelf->button))) {
                    if ((((1U & ((IData)(vlSelf->a) 
                                 >> 4U)) == (1U & ((IData)(vlSelf->b) 
                                                   >> 4U))) 
                         & (~ ((IData)(vlSelf->a) >> 4U)))) {
                        if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                            vlSelf->__Vfunc_top__DOT__seg_led__72__x 
                                = (0xfU & VL_DIV_III(32, 
                                                     (0xfU 
                                                      & (IData)(vlSelf->b)), (IData)(0xaU)));
                            vlSelf->__Vfunc_top__DOT__seg_led__72__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__72__x))
                                        ? 0U : 4U));
                            vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__72__Vfuncout;
                            vlSelf->__Vfunc_top__DOT__seg_led__73__x 
                                = (0xfU & VL_MODDIV_III(32, 
                                                        ((0xfU 
                                                          & (IData)(vlSelf->b)) 
                                                         - (IData)(0xaU)), (IData)(0xaU)));
                            vlSelf->__Vfunc_top__DOT__seg_led__73__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__73__x))
                                        ? 0U : 4U));
                            vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__73__Vfuncout;
                        } else {
                            vlSelf->segD = 1U;
                            vlSelf->__Vfunc_top__DOT__seg_led__75__x 
                                = (0xfU & (IData)(vlSelf->b));
                            vlSelf->__Vfunc_top__DOT__seg_led__75__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__75__x))
                                        ? 0U : 4U));
                            vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__75__Vfuncout;
                        }
                    } else if ((((1U & ((IData)(vlSelf->a) 
                                        >> 4U)) == 
                                 (1U & ((IData)(vlSelf->b) 
                                        >> 4U))) & 
                                ((IData)(vlSelf->a) 
                                 >> 4U))) {
                        if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                            vlSelf->__Vfunc_top__DOT__seg_led__84__x 
                                = (0xfU & VL_DIV_III(32, 
                                                     (0xfU 
                                                      & (IData)(vlSelf->b)), (IData)(0xaU)));
                            vlSelf->__Vfunc_top__DOT__seg_led__84__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__84__x))
                                        ? 0U : 4U));
                            vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__84__Vfuncout;
                            vlSelf->__Vfunc_top__DOT__seg_led__85__x 
                                = (0xfU & VL_MODDIV_III(32, 
                                                        ((0xfU 
                                                          & (IData)(vlSelf->b)) 
                                                         - (IData)(0xaU)), (IData)(0xaU)));
                            vlSelf->__Vfunc_top__DOT__seg_led__85__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__85__x))
                                        ? 0U : 4U));
                            vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__85__Vfuncout;
                        } else {
                            vlSelf->segD = 1U;
                            vlSelf->__Vfunc_top__DOT__seg_led__87__x 
                                = (0xfU & (IData)(vlSelf->b));
                            vlSelf->__Vfunc_top__DOT__seg_led__87__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__87__x))
                                        ? 0U : 4U));
                            vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__87__Vfuncout;
                        }
                    } else if (((1U & ((IData)(vlSelf->a) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 4U)))) {
                        if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                            vlSelf->__Vfunc_top__DOT__seg_led__96__x 
                                = (0xfU & VL_DIV_III(32, 
                                                     (0xfU 
                                                      & (IData)(vlSelf->b)), (IData)(0xaU)));
                            vlSelf->__Vfunc_top__DOT__seg_led__96__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__96__x))
                                        ? 0U : 4U));
                            vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__96__Vfuncout;
                            vlSelf->__Vfunc_top__DOT__seg_led__97__x 
                                = (0xfU & VL_MODDIV_III(32, 
                                                        ((0xfU 
                                                          & (IData)(vlSelf->b)) 
                                                         - (IData)(0xaU)), (IData)(0xaU)));
                            vlSelf->__Vfunc_top__DOT__seg_led__97__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__97__x))
                                        ? 0U : 4U));
                            vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__97__Vfuncout;
                        } else {
                            vlSelf->segD = 1U;
                            vlSelf->__Vfunc_top__DOT__seg_led__99__x 
                                = (0xfU & (IData)(vlSelf->b));
                            vlSelf->__Vfunc_top__DOT__seg_led__99__Vfuncout 
                                = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x)) 
                                          | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))) 
                                         | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))) 
                                        | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))) 
                                       | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))) 
                                      | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))) 
                                     | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))) 
                                    | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x)))
                                    ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                                 ? 0x4fU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                                    : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__99__x))
                                        ? 0U : 4U));
                            vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__99__Vfuncout;
                        }
                    }
                } else if ((0xaU <= (0xfU & (IData)(vlSelf->b)))) {
                    vlSelf->__Vfunc_top__DOT__seg_led__108__x 
                        = (0xfU & VL_DIV_III(32, (0xfU 
                                                  & (IData)(vlSelf->b)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__108__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__108__x))
                                ? 0U : 4U));
                    vlSelf->segD = vlSelf->__Vfunc_top__DOT__seg_led__108__Vfuncout;
                    vlSelf->__Vfunc_top__DOT__seg_led__109__x 
                        = (0xfU & VL_MODDIV_III(32, 
                                                ((0xfU 
                                                  & (IData)(vlSelf->b)) 
                                                 - (IData)(0xaU)), (IData)(0xaU)));
                    vlSelf->__Vfunc_top__DOT__seg_led__109__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__109__x))
                                ? 0U : 4U));
                    vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__109__Vfuncout;
                } else {
                    vlSelf->segD = 1U;
                    vlSelf->__Vfunc_top__DOT__seg_led__111__x 
                        = (0xfU & (IData)(vlSelf->b));
                    vlSelf->__Vfunc_top__DOT__seg_led__111__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))) 
                                | (3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))) 
                               | (4U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))) 
                              | (5U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))) 
                             | (6U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))) 
                            | (7U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                ? 1U : ((1U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                         ? 0x4fU : 
                                        ((2U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                          ? 0x12U : 
                                         ((3U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                           ? 6U : (
                                                   (4U 
                                                    == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                                      ? 0x20U
                                                      : 0xfU)))))))
                            : ((8U == (IData)(vlSelf->__Vfunc_top__DOT__seg_led__111__x))
                                ? 0U : 4U));
                    vlSelf->segE = vlSelf->__Vfunc_top__DOT__seg_led__111__Vfuncout;
                }
            }
        }
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/ysyx-workbench/npc/my_test/ex3/alu/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/arvail/ysyx-workbench/npc/my_test/ex3/alu/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/ysyx-workbench/npc/my_test/ex3/alu/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->button & 0xf8U))) {
        Verilated::overWidthError("button");}
    if (VL_UNLIKELY((vlSelf->a & 0xe0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xe0U))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
