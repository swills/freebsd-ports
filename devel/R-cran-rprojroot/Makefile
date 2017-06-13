# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-rprojroot/Makefile 440031 2017-05-03 19:08:35Z tota $

PORTNAME=	rprojroot
DISTVERSION=	1.2
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Finding Files in Project Subdirectories

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-backports>0:math/R-cran-backports
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
