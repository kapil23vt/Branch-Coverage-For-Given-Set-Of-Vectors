// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    // Coverage Declarations
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "ex2.v", 33, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "ex2.v", 49, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "ex2.v", 56, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "ex2.v", 66, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "ex2.v", 71, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "ex2.v", 77, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ex2.v", 79, 0, ".ex2", "v_line/ex2", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ex2.v", 74, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "ex2.v", 68, 0, ".ex2", "v_line/ex2", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "ex2.v", 65, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "ex2.v", 62, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "ex2.v", 54, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "ex2.v", 90, 0, ".ex2", "v_line/ex2", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "ex2.v", 44, 0, ".ex2", "v_line/ex2", "else");
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

// Coverage
void Vtop::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    static uint32_t fake_zero_count = 0;
    if (!enable) countp = &fake_zero_count;
    *countp = 0;
    VL_COVER_INSERT(countp,  "filename",filenamep,  "lineno",lineno,  "column",column,
	"hier",string(name())+hierp,  "page",pagep,  "comment",commentp);
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__ex2__DOT__rx_reg,7,0);
    VL_SIG8(__Vdly__ex2__DOT__rx_sample_cnt,3,0);
    VL_SIG8(__Vdly__ex2__DOT__rx_cnt,3,0);
    VL_SIG8(__Vdly__ex2__DOT__rx_d1,0,0);
    VL_SIG8(__Vdly__ex2__DOT__rx_d2,0,0);
    VL_SIG8(__Vdly__ex2__DOT__rx_busy,0,0);
    //char	__VpadToAlign10[2];
    // Body
    __Vdly__ex2__DOT__rx_reg = vlTOPp->ex2__DOT__rx_reg;
    __Vdly__ex2__DOT__rx_sample_cnt = vlTOPp->ex2__DOT__rx_sample_cnt;
    __Vdly__ex2__DOT__rx_cnt = vlTOPp->ex2__DOT__rx_cnt;
    __Vdly__ex2__DOT__rx_d1 = vlTOPp->ex2__DOT__rx_d1;
    __Vdly__ex2__DOT__rx_d2 = vlTOPp->ex2__DOT__rx_d2;
    __Vdly__ex2__DOT__rx_busy = vlTOPp->ex2__DOT__rx_busy;
    // ALWAYS at ex2.v:32
    if (vlTOPp->reset) {
	++(vlSymsp->__Vcoverage[0]);
	__Vdly__ex2__DOT__rx_reg = 0U;
	vlTOPp->rx_data = 0U;
	__Vdly__ex2__DOT__rx_sample_cnt = 0U;
	__Vdly__ex2__DOT__rx_cnt = 0U;
	__Vdly__ex2__DOT__rx_d1 = 1U;
	__Vdly__ex2__DOT__rx_d2 = 1U;
	__Vdly__ex2__DOT__rx_busy = 0U;
	vlTOPp->rx_empty = 1U;
    } else {
	++(vlSymsp->__Vcoverage[13]);
	__Vdly__ex2__DOT__rx_d1 = vlTOPp->rx_in;
	if (vlTOPp->uld_rx_data) {
	    ++(vlSymsp->__Vcoverage[1]);
	    vlTOPp->rx_data = vlTOPp->ex2__DOT__rx_reg;
	    vlTOPp->rx_empty = 1U;
	}
	if (vlTOPp->rx_enable) {
	    ++(vlSymsp->__Vcoverage[11]);
	    if ((1U & ((~ (IData)(vlTOPp->ex2__DOT__rx_busy)) 
		       & (~ (IData)(vlTOPp->ex2__DOT__rx_d2))))) {
		++(vlSymsp->__Vcoverage[2]);
		__Vdly__ex2__DOT__rx_busy = 1U;
		__Vdly__ex2__DOT__rx_sample_cnt = 1U;
		__Vdly__ex2__DOT__rx_cnt = 0U;
	    }
	    if (vlTOPp->ex2__DOT__rx_busy) {
		__Vdly__ex2__DOT__rx_sample_cnt = 
		    (0xfU & ((IData)(1U) + (IData)(vlTOPp->ex2__DOT__rx_sample_cnt)));
		++(vlSymsp->__Vcoverage[10]);
		if ((7U == (IData)(vlTOPp->ex2__DOT__rx_sample_cnt))) {
		    ++(vlSymsp->__Vcoverage[9]);
		    if (((IData)(vlTOPp->ex2__DOT__rx_d2) 
			 & (0U == (IData)(vlTOPp->ex2__DOT__rx_cnt)))) {
			++(vlSymsp->__Vcoverage[3]);
			__Vdly__ex2__DOT__rx_busy = 0U;
		    } else {
			__Vdly__ex2__DOT__rx_cnt = 
			    (0xfU & ((IData)(1U) + (IData)(vlTOPp->ex2__DOT__rx_cnt)));
			++(vlSymsp->__Vcoverage[8]);
			if (((0U < (IData)(vlTOPp->ex2__DOT__rx_cnt)) 
			     & (9U > (IData)(vlTOPp->ex2__DOT__rx_cnt)))) {
			    ++(vlSymsp->__Vcoverage[4]);
			    __Vdly__ex2__DOT__rx_reg 
				= (((~ ((IData)(1U) 
					<< (7U & ((IData)(vlTOPp->ex2__DOT__rx_cnt) 
						  - (IData)(1U))))) 
				    & (IData)(__Vdly__ex2__DOT__rx_reg)) 
				   | ((IData)(vlTOPp->ex2__DOT__rx_d2) 
				      << (7U & ((IData)(vlTOPp->ex2__DOT__rx_cnt) 
						- (IData)(1U)))));
			}
			if ((9U == (IData)(vlTOPp->ex2__DOT__rx_cnt))) {
			    ++(vlSymsp->__Vcoverage[7]);
			    __Vdly__ex2__DOT__rx_busy = 0U;
			    if (vlTOPp->ex2__DOT__rx_d2) {
				++(vlSymsp->__Vcoverage[6]);
				vlTOPp->rx_empty = 0U;
			    } else {
				++(vlSymsp->__Vcoverage[5]);
			    }
			}
		    }
		}
	    }
	}
	if ((1U & (~ (IData)(vlTOPp->rx_enable)))) {
	    ++(vlSymsp->__Vcoverage[12]);
	    __Vdly__ex2__DOT__rx_busy = 0U;
	}
	__Vdly__ex2__DOT__rx_d2 = vlTOPp->ex2__DOT__rx_d1;
    }
    vlTOPp->ex2__DOT__rx_reg = __Vdly__ex2__DOT__rx_reg;
    vlTOPp->ex2__DOT__rx_busy = __Vdly__ex2__DOT__rx_busy;
    vlTOPp->ex2__DOT__rx_d2 = __Vdly__ex2__DOT__rx_d2;
    vlTOPp->ex2__DOT__rx_sample_cnt = __Vdly__ex2__DOT__rx_sample_cnt;
    vlTOPp->ex2__DOT__rx_cnt = __Vdly__ex2__DOT__rx_cnt;
    vlTOPp->ex2__DOT__rx_d1 = __Vdly__ex2__DOT__rx_d1;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))) 
	 | ((IData)(vlTOPp->rxclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rxclk))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__rxclk = vlTOPp->rxclk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    rxclk = VL_RAND_RESET_I(1);
    uld_rx_data = VL_RAND_RESET_I(1);
    rx_data = VL_RAND_RESET_I(8);
    rx_enable = VL_RAND_RESET_I(1);
    rx_in = VL_RAND_RESET_I(1);
    rx_empty = VL_RAND_RESET_I(1);
    ex2__DOT__rx_reg = VL_RAND_RESET_I(8);
    ex2__DOT__rx_sample_cnt = VL_RAND_RESET_I(4);
    ex2__DOT__rx_cnt = VL_RAND_RESET_I(4);
    ex2__DOT__rx_d1 = VL_RAND_RESET_I(1);
    ex2__DOT__rx_d2 = VL_RAND_RESET_I(1);
    ex2__DOT__rx_busy = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__rxclk = VL_RAND_RESET_I(1);
}

void Vtop::set_input_with_reset (vector<bool> vecIn) {
    rx_enable = vecIn[0];
    rx_in = vecIn[1];
    uld_rx_data = vecIn[2];
    reset = vecIn[3];
}
uint32_t Vtop::get_cov_pt_value(uint32_t id) {
    return __VlSymsp->__Vcoverage[id];
}

void Vtop::sim_init() {
    rxclk = 0;
    reset = 0;
}

void Vtop::toggle_clock() {
    rxclk = !rxclk;
}

uint32_t Vtop::num_branch_cov_pts() {
    return 14;
}
