# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/science/rubygem-rgeo-shapefile/Makefile 493599 2019-02-22 19:55:05Z sunpoet $

PORTNAME=	rgeo-shapefile
PORTVERSION=	1.2.0
CATEGORIES=	science rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	RGeo module for reading the ESRI shapefile format

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-dbf>=3.0:databases/rubygem-dbf \
		rubygem-rgeo>=1.0:science/rubygem-rgeo

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
