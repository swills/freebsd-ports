# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-classInt/Makefile 464332 2018-03-13 00:41:13Z tota $

PORTNAME=	classInt
DISTVERSION=	0.1-24
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Choose Univariate Class Intervals

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-e1071>0:science/R-cran-e1071
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
