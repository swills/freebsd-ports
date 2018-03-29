# $FreeBSD: head/sysutils/hare/Makefile 465743 2018-03-27 19:13:11Z dvl $

PORTNAME=	hare
DISTVERSION=	1.0
CATEGORIES=	sysutils

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Small C client for sending ssh login notications to a hared server

LICENSE=	MIT
LICENSE=	LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	jpmens
GH_PROJECT=	hared-hare

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
