# $FreeBSD: head/net-mgmt/mdata-client/Makefile 472693 2018-06-18 14:00:43Z linimon $

PORTNAME=	mdata-client
PORTVERSION=	20151001
CATEGORIES=	net-mgmt

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Metadata tools for use within guests of the SmartOS

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_powerpc64=	fails to compile: unrecognized command line option "-Wno-typedef-redefinition"

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	joyent

.include <bsd.port.mk>
