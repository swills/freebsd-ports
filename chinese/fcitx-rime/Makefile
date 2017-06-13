# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-rime/Makefile 418259 2016-07-09 04:16:28Z pi $

PORTNAME=	fcitx-rime
PORTVERSION=	0.3.1
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	RIME support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx \
		librime.so:chinese/librime
RUN_DEPENDS=	${LOCALBASE}/share/brise/default.yaml:chinese/brise

USES=		tar:xz cmake gettext pkgconfig
INSTALLS_ICONS=	yes

CMAKE_ARGS+=	-DBRISE_DIR=${LOCALBASE}/share/brise

.include <bsd.port.mk>
