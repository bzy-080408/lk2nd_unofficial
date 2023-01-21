LOCAL_DIR := $(GET_LOCAL_DIR)

ifeq ($(PROJECT), msm8953-secondary)
DTBS += \
	$(LOCAL_DIR)/can-al00-va.dtb \
	$(LOCAL_DIR)/can-al00-vb.dtb \
	$(LOCAL_DIR)/can-al00-vc.dtb \
	$(LOCAL_DIR)/can-al00-vd.dtb \
	$(LOCAL_DIR)/can-cl00-va.dtb \
	$(LOCAL_DIR)/can-l01-va.dtb \
	$(LOCAL_DIR)/can-l01-vb.dtb \
	$(LOCAL_DIR)/can-l01-vc.dtb \
	$(LOCAL_DIR)/can-l01-vd.dtb \
	$(LOCAL_DIR)/can-l02-va.dtb \
	$(LOCAL_DIR)/can-l02-vb.dtb \
	$(LOCAL_DIR)/can-l03-va.dtb \
	$(LOCAL_DIR)/can-l03-vb.dtb \
	$(LOCAL_DIR)/can-l03-vc.dtb \
	$(LOCAL_DIR)/can-tl00-va.dtb \
	$(LOCAL_DIR)/mla-al00-vb.dtb \
	$(LOCAL_DIR)/mla-al00-vc.dtb \
	$(LOCAL_DIR)/mla-al00-vd.dtb \
	$(LOCAL_DIR)/mla-al00-ve.dtb \
	$(LOCAL_DIR)/mla-tl00-va.dtb \
	$(LOCAL_DIR)/mla-l01-va.dtb \
	$(LOCAL_DIR)/mla-l01-vb.dtb \
	$(LOCAL_DIR)/mla-l02-va.dtb \
	$(LOCAL_DIR)/mla-l03-va.dtb \
	$(LOCAL_DIR)/xiaomi_oxyged.dtb
endif
