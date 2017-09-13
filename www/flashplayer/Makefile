# $FreeBSD: head/www/flashplayer/Makefile 449707 2017-09-12 19:46:51Z jkim $

PORTNAME=	flashplayer
PORTVERSION=	27.0
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
