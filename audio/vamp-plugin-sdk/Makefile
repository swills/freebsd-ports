# Created by: mathias.picker@gmx.de
# $FreeBSD: head/audio/vamp-plugin-sdk/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	vamp-plugin-sdk
PORTVERSION=	2.7.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	https://code.soundsoftware.ac.uk/attachments/download/2206/

MAINTAINER=	uddka@student.kit.edu
COMMENT=	Vamp audio analysis plugin SDK

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsndfile.so:audio/libsndfile

GNU_CONFIGURE=	yes
USES=		compiler:c++11-lang gmake pathfix pkgconfig
USE_LDCONFIG=	yes

post-install:
	${STRIP_CMD} \
		${STAGEDIR}${PREFIX}/bin/* \
		${STAGEDIR}${PREFIX}/lib/*.so \
		${STAGEDIR}${PREFIX}/lib/vamp/*.so

.include <bsd.port.mk>
