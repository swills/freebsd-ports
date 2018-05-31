# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-CVST/Makefile 471025 2018-05-28 07:37:24Z tota $

PORTNAME=	CVST
DISTVERSION=	0.2-2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Fast Cross-Validation via Sequential Testing

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-kernlab>0:science/R-cran-kernlab
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
