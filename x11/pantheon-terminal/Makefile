# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/x11/pantheon-terminal/Makefile 443950 2017-06-20 13:05:41Z amdmi3 $

PORTNAME=	pantheon-terminal
PORTVERSION=	0.4.2
CATEGORIES=	x11

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Lightweight, beautiful, and simple terminal from Elementary OS

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgranite.so:x11-toolkits/granite
BUILD_DEPENDS=	valac:lang/vala

USE_GITHUB=	yes
GH_ACCOUNT=	elementary
GH_PROJECT=	terminal

USES=		cmake desktop-file-utils gettext pkgconfig
CMAKE_ARGS=	-DGSETTINGS_COMPILE:BOOL=NO
USE_GNOME=	glib20 gtk30 intltool vte3
GLIB_SCHEMAS=	org.pantheon.terminal.gschema.xml

PORTDOCS=	AUTHORS README.md

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
