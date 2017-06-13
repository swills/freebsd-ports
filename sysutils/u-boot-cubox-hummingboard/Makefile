# $FreeBSD: head/sysutils/u-boot-cubox-hummingboard/Makefile 435808 2017-03-09 22:44:33Z ian $

MAINTAINER=	imp@FreeBSD.org
MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		cubox-hummingboard
BOARD_CONFIG=	mx6cuboxi_defconfig
FAMILY=		imx6

IMXFILE=	u-boot.imx
UBOOT_PLIST=	${IMXFILE}

ALL_TARGET=	u-boot-with-spl.imx

pre-install: .PHONY
	@${CP} ${WRKSRC}/u-boot-with-spl.imx ${WRKSRC}/${IMXFILE}

.include "${MASTERDIR}/Makefile"
