# $FreeBSD: head/multimedia/py-av/Makefile 488543 2018-12-27 13:52:06Z swills $

PORTNAME=	av
PORTVERSION=	6.1.0
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Pythonic binding for FFmpeg

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libavutil.so:multimedia/ffmpeg

USES=		python pkgconfig
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
