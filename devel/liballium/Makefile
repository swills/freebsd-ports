# Created by: Fabian Keil <fk@fabiankeil.de>
# $FreeBSD: head/devel/liballium/Makefile 460705 2018-02-02 15:24:51Z amdmi3 $

PORTNAME=	liballium
PORTVERSION=	0.0.1
CATEGORIES=	devel security

MAINTAINER=	fk@fabiankeil.de
COMMENT=	Tor pluggable transports utility library

USE_GITHUB=	yes
GH_ACCOUNT=	Yawning
GH_TAGNAME=	0c9b50f

GNU_CONFIGURE=	yes
USES=		autoreconf libtool pathfix pkgconfig
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYING ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
