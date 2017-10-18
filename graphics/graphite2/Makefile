# $FreeBSD: head/graphics/graphite2/Makefile 450507 2017-09-24 18:49:11Z sunpoet $

PORTNAME=	graphite2
PORTVERSION=	1.3.10
CATEGORIES=	graphics print

MAINTAINER=	office@FreeBSD.org
COMMENT=	Rendering capabilities for complex non-Roman writing systems

LICENSE=	GPLv2 LGPL21 MPL20
LICENSE_COMB=	dual

USE_GITHUB=	yes
GH_ACCOUNT=	silnrsi
GH_PROJECT=	graphite

USES=		cmake
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,/pkgconfig,data/pkgconfig,g' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
