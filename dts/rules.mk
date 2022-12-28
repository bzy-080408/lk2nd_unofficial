LOCAL_DIR := $(GET_LOCAL_DIR)

ifeq ($(PROJECT), msm8953-secondary)
DTBS += \
	$(LOCAL_DIR)/msm8953-huawei-hwcan.dtb \
	$(LOCAL_DIR)/can-al00-va.dtb \
	$(LOCAL_DIR)/can-al00-vb.dtb \
	$(LOCAL_DIR)/can-al00-vc.dtb \
	$(LOCAL_DIR)/can-al00-vd.dtb \
	$(LOCAL_DIR)/can-cl00-va.dtb \
	$(LOCAL_DIR)/can-l01-va.dtb \
	$(LOCAL_DIR)/can-l01-vb.dtb \
	$(LOCAL_DIR)/can-l01-vc.dtb \
	$(LOCAL_DIR)/can-l01-vd.dtb
endif
