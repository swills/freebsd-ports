# Created by: brett@peloton.physics.montana.edu
# $FreeBSD: head/print/asprint/Makefile 418840 2016-07-20 15:33:20Z mat $

PORTNAME=	asprint
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	print
MASTER_SITES=	AFTERSTEP/apps/asprint
DISTNAME=	asprint

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple browser to allow a user to print

PLIST_FILES=	bin/asprint
USE_XORG=	xmu xpm xt xaw x11
ALL_TARGET=	asprint
MAKEFILE=	makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/asprint ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
