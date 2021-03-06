/*
 * Copyright (c) 2018 MariaDB Corporation Ab
 *
 * Use of this software is governed by the Business Source License included
 * in the LICENSE.TXT file and at www.mariadb.com/bsl11.
 *
 * Change Date: 2024-08-24
 *
 * On the date above, in accordance with the Business Source License, use
 * of this software will be governed by version 2 or later of the General
 * Public License.
 */
#pragma once

#include <maxscale/dcb.hh>

MXS_BEGIN_DECLS

void dcb_free_all_memory(DCB* dcb);
void dcb_final_close(DCB* dcb);

MXS_END_DECLS
