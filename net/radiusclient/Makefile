# Created by: maurice
# $FreeBSD: head/net/radiusclient/Makefile 487187 2018-12-10 16:50:08Z rene $

PORTNAME=	radiusclient
PORTVERSION=	0.5.6
PORTREVISION=	3
CATEGORIES=	net
MASTER_SITES=	SF/radiusclient-ng.berlios
DISTNAME=	${PORTNAME}-ng-${PORTVERSION}

MAINTAINER=	sobomax@FreeBSD.org
COMMENT=	Client library and basic utilities for RADIUS AAA

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake libtool
USE_LDCONFIG=	yes
ETCDIR=		${PREFIX}/etc/${PORTNAME}-ng

.include <bsd.port.mk>
