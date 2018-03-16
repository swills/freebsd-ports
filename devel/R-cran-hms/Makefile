# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-hms/Makefile 464465 2018-03-14 07:26:22Z tota $

PORTNAME=	hms
PORTVERSION=	0.4.2
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Pretty Time of Day

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-pkgconfig>0:devel/R-cran-pkgconfig \
		R-cran-rlang>0:devel/R-cran-rlang
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
