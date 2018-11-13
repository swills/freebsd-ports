# $FreeBSD: head/textproc/fcitx-table-other/Makefile 484610 2018-11-10 13:16:05Z swills $

PORTNAME=	fcitx-table-other
DISTVERSION=	0.2.3
CATEGORIES=	textproc
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Table-based input methods for Fcitx

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx
BUILD_DEPENDS=	bash:shells/bash

USES=		cmake:outsource gettext tar:xz
NO_ARCH=	yes
STRIP=		# ninja breaks without this: unknown target 'install/strip'

.include <bsd.port.mk>
