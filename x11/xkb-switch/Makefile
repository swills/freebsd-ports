# Created by: Dmitri Goutnik <dg@syrec.org>
# $FreeBSD: head/x11/xkb-switch/Makefile 436691 2017-03-22 11:55:48Z robak $

PORTNAME=	xkb-switch
PORTVERSION=	1.5.0
CATEGORIES=	x11

MAINTAINER=	dg@syrec.org
COMMENT=	Switch your X keyboard layouts from the command line

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	ierton

USES=		cmake
USE_XORG=	x11 xkbfile
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

PLIST_FILES=	bin/xkb-switch \
		lib/libxkbswitch.so

PORTDOCS=	README.md

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
