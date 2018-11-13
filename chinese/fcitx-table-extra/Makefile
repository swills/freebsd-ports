# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-table-extra/Makefile 484688 2018-11-11 11:47:33Z wen $

PORTNAME=	fcitx-table-extra
PORTVERSION=	0.3.8
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Table-based input methods for Fcitx

LICENSE=	GPLv2

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx

USES=		tar:xz cmake gettext
INSTALLS_ICONS=	yes
STRIP=

.include <bsd.port.mk>
