# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: head/archivers/snappy/Makefile 457139 2017-12-24 10:48:23Z danfe $

PORTNAME=	snappy
PORTVERSION=	1.1.6
CATEGORIES=	archivers

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Fast compressor/decompressor library

LICENSE=	BSD3CLAUSE

USES=		autoreconf libtool pathfix pkgconfig
CONFIGURE_ARGS=	--disable-gtest
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CFLAGS+=	-DNDEBUG
USE_GITHUB=	yes
GH_ACCOUNT=	google
TEST_TARGET=	check

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/lib/libsnappy.so.1.1.6

.include <bsd.port.mk>
