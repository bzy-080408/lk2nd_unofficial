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
	$(LOCAL_DIR)/chq_al00a_va.dtb \
	$(LOCAL_DIR)/dub_al00a_va.dtb \
	$(LOCAL_DIR)/dub_al20_va.dtb \
	$(LOCAL_DIR)/dub_lx1.dtb \
	$(LOCAL_DIR)/dub_lx2.dtb \
	$(LOCAL_DIR)/dub_lx3.dtb \
	$(LOCAL_DIR)/dub-al10b-va.dtb \
	$(LOCAL_DIR)/dub-al10a-va.dtb \
	$(LOCAL_DIR)/dub-tl10b.dtb \
	$(LOCAL_DIR)/dub-tl20-va.dtb \
	
	$(LOCAL_DIR)/xiaomi_oxyged.dtb \
	$(LOCAL_DIR)/xiaomi-vince.dtb \
	$(LOCAL_DIR)/xiaomi-daisy.dtb \
	$(LOCAL_DIR)/xiaomi-tissot.dtb \
	$(LOCAL_DIR)/lenovo-kuntao-p0.dtb \
	$(LOCAL_DIR)/lenovo-kuntao-p2b1.dtb \
	$(LOCAL_DIR)/meizu-m1721.dtb \
	$(LOCAL_DIR)/oppo-r9s.dtb 

endif
