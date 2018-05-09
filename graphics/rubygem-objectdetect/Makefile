# Created by: TAKATSU Tomonari <tota@rtfm.jp>
# $FreeBSD: head/graphics/rubygem-objectdetect/Makefile 469421 2018-05-09 01:44:50Z swills $

PORTNAME=	objectdetect
PORTVERSION=	0.0.3
PORTREVISION=	10
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Simple library for detecting objects in pictures

LICENSE=	MIT

LIB_DEPENDS=	libopencv_video.so:graphics/opencv

USE_RUBY=	yes
USES=		gem pkgconfig

post-patch:
	${REINPLACE_CMD} -E 's|(objectdetect)|\1/version|' ${WRKSRC}/test/test_helper.rb

.include <bsd.port.mk>
