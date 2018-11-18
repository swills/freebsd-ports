# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/textproc/zxing-cpp/Makefile 485000 2018-11-15 04:04:44Z linimon $

PORTNAME=	zxing-cpp
DISTVERSION=	0.20180320
CATEGORIES=	textproc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	ZXing C++ Library for QR code recognition

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libopencv_core.so:graphics/opencv-core \
		libopencv_photo.so:graphics/opencv

USES=		cmake:outsource compiler:c++11-lang iconv
USE_GITHUB=	yes
GH_ACCOUNT=	glassechidna
GH_TAGNAME=	5aad474

CMAKE_ARGS=	-DBUILD_SHARED_LIBS=ON

.include <bsd.port.mk>
