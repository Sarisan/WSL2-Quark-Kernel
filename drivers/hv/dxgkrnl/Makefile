# SPDX-License-Identifier: GPL-2.0
# Makefile for the hyper-v compute device driver (dxgkrnl).

subdir-ccflags-y += -Wno-empty-body

obj-$(CONFIG_DXGKRNL)	+= dxgkrnl.o
dxgkrnl-y := dxgmodule.o hmgr.o misc.o dxgadapter.o ioctl.o dxgvmbus.o dxgprocess.o
