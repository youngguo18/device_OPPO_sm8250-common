/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t PENM00_CN_info = {
    .prjversion_value = "20161",

    .device = "OP4EC1",
    .model = "PENM00",
    .name = "OPPO Reno6 Pro+ 5G",

    .sku = "OP4EC1",
};

static const variant_info_t PENM00_CNLZ_info = {
    .prjversion_value = "20135",

    .device = "OP4EA7",
    .model = "PDRM00",
    .name = "OPPO Reno5 Pro+ 5G",

    .sku = "OP4EC1",
};

static const variant_info_t PENM00_GLOBAL_info = {
    .prjversion_value = "20351",

    .device = "OP4F7FL1",
    .model = "CPH2247",
    .name = "OPPO Reno6 Pro 5G",

    .sku = "OP4EC1",
};

static const std::vector<variant_info_t> variants = {
    PENM00_CN_info,
    PENM00_CNLZ_info,
    PENM00_GLOBAL_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
