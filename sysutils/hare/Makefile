# $FreeBSD: head/sysutils/hare/Makefile 474092 2018-07-07 14:27:11Z amdmi3 $

PORTNAME=	hare
DISTVERSION=	1.0
CATEGORIES=	sysutils

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Small C client for sending ssh login notications to a hared server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	jpmens
GH_PROJECT=	hared-hare

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
