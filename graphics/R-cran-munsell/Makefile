# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/graphics/R-cran-munsell/Makefile 472757 2018-06-19 05:49:52Z tota $

PORTNAME=	munsell
PORTVERSION=	0.5.0
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Munsell colour system

LICENSE=	MIT CW
LICENSE_COMB=	multi
LICENSE_NAME_CW=	Charlotte Wickham COPYRIGHT
LICENSE_FILE_CW=	${WRKSRC}/LICENSE
LICENSE_PERMS_CW=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

CRAN_DEPENDS=	R-cran-colorspace>0:graphics/R-cran-colorspace
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
