# $FreeBSD: head/www/flashplayer/Makefile 443623 2017-06-15 18:10:19Z jkim $

PORTNAME=	flashplayer
PORTVERSION=	26.0
CATEGORIES=	www multimedia
DISTFILES=

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Native wrapper around Linux Flash Player

RUN_DEPENDS=	${LOCALBASE}/lib/browser_plugins/linux-flashplayer/libflashplayer.so:www/linux-flashplayer \
		nspluginwrapper:www/nspluginwrapper

NO_ARCH=	yes
NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes

PLIST_FILES=	"@postexec ${LOCALBASE}/bin/nspluginwrapper -i ${LOCALBASE}/lib/browser_plugins/linux-flashplayer/libflashplayer.so" \
		"@rmtry lib/browser_plugins/npwrapper.libflashplayer.so"

.include <bsd.port.mk>
