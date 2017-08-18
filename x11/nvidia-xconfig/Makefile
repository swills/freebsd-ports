# Created by: Alexander Nedotsukov <bland@FreeBSD.org>
# $FreeBSD: head/x11/nvidia-xconfig/Makefile 448103 2017-08-17 14:09:14Z swills $

PORTNAME=	nvidia-xconfig
PORTVERSION=	384.59
CATEGORIES=	x11

MAINTAINER=	bland@FreeBSD.org
COMMENT=	Tool to manipulate X configuration files for the NVidia driver

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	NVIDIA

USES=		gmake

MAKE_ENV=	NV_VERBOSE= \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		INSTALL_MAN="${INSTALL_MAN}" \
		prefix=${PREFIX}

PLIST_FILES=	bin/nvidia-xconfig \
		man/man1/nvidia-xconfig.1.gz

post-patch:	.SILENT
	${REINPLACE_CMD} -e '/^MANDIR/s|share/||' \
		${WRKSRC}/utils.mk

.include <bsd.port.mk>
