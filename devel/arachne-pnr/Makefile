# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD: head/devel/arachne-pnr/Makefile 480456 2018-09-23 05:59:30Z linimon $

PORTNAME=	arachne-pnr
PORTVERSION=	g20180310
CATEGORIES=	devel

MAINTAINER=	jsorocil@gmail.com
COMMENT=	Place and route tool for FPGAs

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	icestorm>=g0:devel/icestorm

USES=		compiler:c++11-lang gmake

USE_GITHUB=	yes
GH_ACCOUNT=	cseed
GH_TAGNAME=	6701132cbd5c7b31edd0ff18ca6727eb3691186b

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/arachne-pnr

.include <bsd.port.mk>
