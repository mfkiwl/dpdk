/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(C) 2022 Marvell.
 */

#include "cn9k_worker.h"

#if !defined(CNXK_DIS_TMPLT_FUNC)

#define T(name, sz, flags)                                                     \
	SSO_TX_SEG(cn9k_sso_hws_tx_adptr_enq_seg_##name, sz, flags)

NIX_TX_FASTPATH_MODES_96_111
#undef T

#endif
