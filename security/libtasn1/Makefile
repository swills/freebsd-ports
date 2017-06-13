# Created by: Sergei Kolobov <sergei@kolobov.com>
# $FreeBSD: head/security/libtasn1/Makefile 442505 2017-06-03 16:02:26Z novel $

PORTNAME=	libtasn1
PORTVERSION=	4.12
CATEGORIES=	security
MASTER_SITES=	GNU

MAINTAINER=	novel@FreeBSD.org
COMMENT=	ASN.1 structure parser library

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USE_LDCONFIG=	yes
USES=		cpe pkgconfig pathfix gmake libtool
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CPE_VENDOR=	gnu

OPTIONS_DEFINE=	DOCS

DOCS=		AUTHORS NEWS README THANKS doc/TODO \
		doc/libtasn1.html doc/libtasn1.pdf doc/libtasn1.ps
INFO=		libtasn1

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
