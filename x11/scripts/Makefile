# $FreeBSD: head/x11/scripts/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	scripts
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Various X related scripts

RUN_DEPENDS=	ksh:shells/pdksh

XORG_CAT=	app
USE_XORG=	x11
USES=		shebangfix

post-patch:
	@${REINPLACE_CMD} -e 's|XCOMM!/bin/ksh|XCOMM!${ksh_CMD}|' ${WRKSRC}/xauth_switch_to_sun-des-1.cpp

.include <bsd.port.mk>
