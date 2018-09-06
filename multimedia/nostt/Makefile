# $FreeBSD: head/multimedia/nostt/Makefile 479045 2018-09-05 22:01:55Z sunpoet $

PORTNAME=	nostt
DISTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	multimedia

MAINTAINER=	ik@sjmulder.nl
COMMENT=	Command line NOS Teletekst reader, the Dutch public teletext system

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libjson-c.so:devel/json-c

USES=		localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	sjmulder

PLIST_FILES=	bin/nostt \
		man/man1/nostt.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nostt ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/nostt.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
