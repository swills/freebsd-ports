# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/audio/oaml/Makefile 476017 2018-07-31 19:17:33Z amdmi3 $

PORTNAME=	oaml
PORTVERSION=	1.3.4
DISTVERSIONPREFIX=	v
CATEGORIES=	audio

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Open Adaptive Music Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libogg.so:audio/libogg \
		libvorbis.so:audio/libvorbis \
		libvorbisfile.so:audio/libvorbis

USE_GITHUB=	yes
GH_ACCOUNT=	oamldev

USES=		cmake
CMAKE_ARGS=	-DENABLE_UNITYPLUGIN:BOOL=OFF

PORTDOCS=	*

OPTIONS_DEFINE=		DOCS SOXR
OPTIONS_DEFAULT=	SOXR
SOXR_LIB_DEPENDS=	libsoxr.so:audio/libsoxr
SOXR_CMAKE_BOOL=	ENABLE_SOXR

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
