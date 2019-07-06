/*
 * Copyright (c) 2015-2016 Travis Geiselbrecht
 *
 * Use of this source code is governed by a MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT
 */
#pragma once

#include <lk/compiler.h>
#include <lk/list.h>

__BEGIN_CDECLS

struct arch_aspace {
    /* pointer to the translation table */
    paddr_t tt_phys;
    uint32_t *tt_virt;

    /* range of address space */
    vaddr_t base;
    size_t size;

    /* list of pages allocated for these page tables */
    struct list_node pt_page_list;
};

__END_CDECLS
