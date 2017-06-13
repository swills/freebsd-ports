# Created by: Gustau Perez i Querol <gustau.perez@gmail.com>
# $FreeBSD: head/misc/cinnamon-translations/Makefile 438033 2017-04-08 11:05:19Z amdmi3 $
#   $MCom: ports/trunk/misc/cinnamon-translations/Makefile 19857 2014-09-13 09:46:37Z gusi $

PORTNAME=	cinnamon-translations
PORTVERSION=	2.4.2
CATEGORIES=	misc x11 gnome
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Translations for the cinnamon desktop

USE_GITHUB=	yes
GH_ACCOUNT=	linuxmint

USES=		gettext-tools
NO_CONFIGURE=	yes
INSTALL_TARGET=	all
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|usr/share|${STAGEDIR}${PREFIX}/share|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
