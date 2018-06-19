# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-pkgmaker/Makefile 471022 2018-05-28 06:56:11Z tota $

PORTNAME=	pkgmaker
PORTVERSION=	0.27
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Package development utilities

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-registry>0:devel/R-cran-registry \
		R-cran-digest>0:security/R-cran-digest \
		R-cran-stringr>0:textproc/R-cran-stringr \
		R-cran-xtable>0:textproc/R-cran-xtable \
		R-cran-withr>0:devel/R-cran-withr \
		R-cran-bibtex>=0.4:textproc/R-cran-bibtex
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
