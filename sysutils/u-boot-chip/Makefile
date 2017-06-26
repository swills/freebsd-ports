# $FreeBSD: head/sysutils/u-boot-chip/Makefile 444326 2017-06-25 22:51:23Z linimon $

PKGNAMESUFFIX=	-chip

COMMENT=	Cross-build U-Boot loader for NextThingCo CHIP

LICENSE=	GPLv2

MASTERDIR=	${.CURDIR}/../u-boot-olimex-a20-som-evb
DESCR=		${.CURDIR}/pkg-descr
MODEL=		sun5i-r8-chip
BOARD_CONFIG=	CHIP_defconfig

.include "${MASTERDIR}/Makefile"
