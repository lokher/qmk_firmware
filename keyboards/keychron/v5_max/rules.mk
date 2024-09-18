include keyboards/keychron/common/wireless/wireless.mk
include keyboards/keychron/common/keychron_common.mk

VPATH += $(TOP_DIR)/keyboards/keychron

OPT_DEFS += -DEECONFIG_KB_DATA_SIZE=1 -DTRANSPORT_SOFT_SWITCH_ENABLE
