# Created by: ijliao
# $FreeBSD: head/sysutils/mcron/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	mcron
PORTVERSION=	1.0.8
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	GNU

MAINTAINER=	johans@FreeBSD.org
COMMENT=	100% compatible replacement for Vixie cron

RUN_DEPENDS=	guile2>=2.0:lang/guile2
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		pkgconfig
GNU_CONFIGURE=	yes
MAKEFILE=	makefile

INFO=		mcron

.include <bsd.port.mk>
