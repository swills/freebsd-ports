# $FreeBSD: head/net-mgmt/mdata-client/Makefile 473692 2018-07-02 00:47:14Z linimon $

PORTNAME=	mdata-client
PORTVERSION=	20151001
CATEGORIES=	net-mgmt

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Metadata tools for use within guests of the SmartOS

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_mips=		fails to compile: unrecognized command line option "-Wno-typedef-redefinition"
BROKEN_mips64=		fails to compile: unrecognized command line option "-Wno-typedef-redefinition"
BROKEN_powerpc64=	fails to compile: unrecognized command line option "-Wno-typedef-redefinition"

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	joyent

.include <bsd.port.mk>
