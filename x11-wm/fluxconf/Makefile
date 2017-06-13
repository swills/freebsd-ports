# Created by: hendrik@scholz.net
# $FreeBSD: head/x11-wm/fluxconf/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	fluxconf
PORTVERSION=	0.9.9
PORTREVISION=	9
CATEGORIES=	x11-wm
MASTER_SITES=	http://devaux.fabien.free.fr/flux/

MAINTAINER=	alfredoj69@gmail.com
COMMENT=	Fluxbox window manager configuration program

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CFLAGS+=	-Wno-error

PORTDOCS=	fluxconf.png fluxkeys.png fluxmenu.png index.html
PLIST_FILES=	bin/fluxbare bin/fluxconf bin/fluxkeys bin/fluxmenu \
		share/locale/fi/LC_MESSAGES/fluxconf.mo \
		share/locale/fr/LC_MESSAGES/fluxconf.mo

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/docs/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
