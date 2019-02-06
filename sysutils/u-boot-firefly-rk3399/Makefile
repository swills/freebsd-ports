# $FreeBSD: head/sysutils/u-boot-firefly-rk3399/Makefile 492255 2019-02-05 15:58:29Z manu $

MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		firefly-rk3399
BOARD_CONFIG=	firefly-rk3399_defconfig
FAMILY=		rk3399

PATCHFILES+=	1020889/raw \
		1036621/raw

UBOOT_EXTRA_TARGETS=	u-boot.itb

.include "${MASTERDIR}/Makefile"
