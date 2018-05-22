# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-Rcpp/Makefile 470525 2018-05-21 09:27:35Z tota $

PORTNAME=	Rcpp
PORTVERSION=	0.12.17
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Seamless R and C++ Integration

LICENSE=	GPLv2+

USES=		cran:auto-plist,compiles shebangfix
SHEBANG_FILES=	inst/examples/*/*.sh \
		inst/examples/*/*.r \
		inst/examples/*/*.R
SHEBANG_LANG=	r
r_OLD_CMD=	/usr/bin/r
r_CMD=		${LOCALBASE}/bin/R

.include <bsd.port.mk>
