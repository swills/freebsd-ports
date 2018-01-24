# $FreeBSD: head/net/libilbc/Makefile 459635 2018-01-22 06:41:18Z danfe $

PORTNAME=	libilbc
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.2
CATEGORIES=	net

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Internet Low Bit Rate codec (RFC3951)

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS=	ilbc-r[0-9]*

USE_GITHUB=	yes
GH_ACCOUNT=	TimothyGu

USES=		cmake pathfix
USE_LDCONFIG=	yes

.include <bsd.port.mk>
