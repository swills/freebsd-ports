# $FreeBSD: head/audio/artyfx-lv2/Makefile 471079 2018-05-29 06:20:22Z yuri $

PORTNAME=	artyfx
DISTVERSIONPREFIX=	release-
DISTVERSION=	1.3-14
DISTVERSIONSUFFIX=	-gb247969
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	ArtyFX plugin bundle

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	lv2>0:audio/lv2
LIB_DEPENDS=	libsndfile.so:audio/libsndfile

USES=		cmake:outsource localbase:ldflags pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	openAVproductions
GH_PROJECT=	openAV-ArtyFX
USE_GNOME=	cairo
USE_XORG=	x11

.include <bsd.port.mk>
