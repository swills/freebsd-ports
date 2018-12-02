# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/science/rubygem-rgeo-proj4/Makefile 486282 2018-11-30 20:04:25Z sunpoet $

PORTNAME=	rgeo-proj4
PORTVERSION=	2.0.0
CATEGORIES=	science rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Proj.4 extension for RGeo

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libproj.so:graphics/proj
RUN_DEPENDS=	rubygem-rgeo>=2.0:science/rubygem-rgeo

USES=		gem
USE_RUBY=	yes

CONFIGURE_ARGS=	--with-proj-dir=${LOCALBASE}

.include <bsd.port.mk>
