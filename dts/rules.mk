LOCAL_DIR := $(GET_LOCAL_DIR)

ifeq ($(PROJECT), msm8953-secondary)
DTBS += \
	$(LOCAL_DIR)/msm8953-huawei-hwcan.dtb \
	$(LOCAL_DIR)/can-va.dtb \
endif
