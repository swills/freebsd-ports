# $FreeBSD: head/archivers/snzip/Makefile 429532 2016-12-26 15:14:42Z rene $

PORTNAME=	snzip
PORTVERSION=	1.0.4
CATEGORIES=	archivers

MAINTAINER=	mizhka@gmail.com
COMMENT=	Compression/decompression tool based on snappy library

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsnappy.so:archivers/snappy

OPTIONS_DEFINE=	DOCS

USE_GITHUB=	yes
GH_ACCOUNT=	kubo

USES=		autoreconf
CONFIGURE_ARGS=	--with-snappy=${LOCALBASE}
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/snzip
PORTDOCS=	*

.include <bsd.port.mk>
