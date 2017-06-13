# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/neXtaw/Makefile 408899 2016-02-14 21:47:00Z amdmi3 $

PORTNAME=	neXtaw
PORTVERSION=	0.15.1
PORTREVISION=	5
CATEGORIES=	x11-toolkits
MASTER_SITES=	http://siag.nu/pub/neXtaw/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Athena Widgets with N*XTSTEP appearance

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool localbase
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_XORG=	xmu x11 xext

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/CHANGES ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/FAQ ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
