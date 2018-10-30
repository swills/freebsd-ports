# $FreeBSD: head/www/qhttpengine/Makefile 483484 2018-10-30 12:15:47Z linimon $

PORTNAME=	qhttpengine
DISTVERSION=	1.0.1-5
DISTVERSIONSUFFIX=	-g43f55df
CATEGORIES=	www

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	HTTP server for Qt applications

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake:outsource compiler:c++11-lang qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	nitroshare
USE_QT=		core network buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
