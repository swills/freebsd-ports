# $FreeBSD: head/net-mgmt/mdata-client/Makefile 481387 2018-10-06 18:40:18Z swills $

PORTNAME=	mdata-client
PORTVERSION=	20151001
CATEGORIES=	net-mgmt

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Metadata tools for use within guests of the SmartOS

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	SmartOS only runs on amd64

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	joyent

.include <bsd.port.mk>
