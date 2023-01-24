LOCAL_DIR := $(GET_LOCAL_DIR)

ifeq ($(PROJECT), msm8952-secondary)
DTBS += \
	$(LOCAL_DIR)/BAH-AL00.dtb \
	$(LOCAL_DIR)/BAH-L01.dtb \
	$(LOCAL_DIR)/BAH-L09.dtb \
	$(LOCAL_DIR)/CPN-AL00.dtb \
	$(LOCAL_DIR)/APN-L01.dtb \
	$(LOCAL_DIR)/CPN-L09.dtb \
	$(LOCAL_DIR)/CPN-L0J.dtb \
	$(LOCAL_DIR)/CPN-W09.dtb 


endif
