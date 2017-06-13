# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-pkgmaker/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	pkgmaker
PORTVERSION=	0.22
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Package development utilities

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-registry>0:devel/R-cran-registry \
		R-cran-digest>0:security/R-cran-digest \
		R-cran-stringr>0:textproc/R-cran-stringr \
		R-cran-xtable>0:textproc/R-cran-xtable

USES=	cran:auto-plist

.include <bsd.port.mk>
