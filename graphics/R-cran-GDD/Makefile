# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/graphics/R-cran-GDD/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	GDD
DISTVERSION=	0.1-13.1
PORTREVISION=	12
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Graphics device for R for creating bitmap output

LICENSE=	GPLv2

BUILD_DEPENDS=	libgd>=2.0.35_8,1:graphics/gd
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
