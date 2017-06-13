# Created by: Hajimu UMEMOTO <ume@FreeBSD.org>
# $FreeBSD: head/audio/gkrellmms2/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	gkrellmms
PORTVERSION=	2.1.22
PORTREVISION=	13
CATEGORIES=	audio
MASTER_SITES=	http://gkrellm.luon.net/files/
PKGNAMESUFFIX=	2

MAINTAINER=	ume@FreeBSD.org
COMMENT=	GKrellM XMMS Plugin

BUILD_DEPENDS=	${LOCALBASE}/include/gkrellm2/gkrellm.h:sysutils/gkrellm2
LIB_DEPENDS=	libxmms.so:multimedia/xmms
RUN_DEPENDS=	gkrellm:sysutils/gkrellm2

WRKSRC=		${WRKDIR}/gkrellmms

PLIST_FILES=	libexec/gkrellm2/plugins/gkrellmms.so \
		share/locale/da/LC_MESSAGES/gkrellmms.mo \
		share/locale/es/LC_MESSAGES/gkrellmms.mo \
		share/locale/fr/LC_MESSAGES/gkrellmms.mo \
		share/locale/nl/LC_MESSAGES/gkrellmms.mo \
		share/locale/ru/LC_MESSAGES/gkrellmms.mo

USES=		gettext gmake pkgconfig

MAKE_ENV+=	PLUGIN_DIR=${PREFIX}/libexec/gkrellm2/plugins \
		LOCALEDIR=${PREFIX}/share/locale \
		enable_nls=1

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/libexec/gkrellm2/plugins

.include <bsd.port.mk>
