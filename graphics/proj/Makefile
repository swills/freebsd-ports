# Created by: jedgar@FreeBSD.org
# $FreeBSD$

PORTNAME=	proj
PORTVERSION=	7.0.0
PORTEPOCH=	1
CATEGORIES=	graphics geography
MASTER_SITES=	https://download.osgeo.org/proj/

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Cartographic Projections library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsqlite3.so:databases/sqlite3 \
		libtiff.so:graphics/tiff \
		libcurl.so:ftp/curl

USES=		compiler:c++11-lang gmake libtool pathfix pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
