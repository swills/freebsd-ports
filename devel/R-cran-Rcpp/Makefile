# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-Rcpp/Makefile 481869 2018-10-12 02:55:56Z tota $

PORTNAME=	Rcpp
PORTVERSION=	0.12.19
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
