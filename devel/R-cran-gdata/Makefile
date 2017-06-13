# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-gdata/Makefile 443414 2017-06-12 03:48:19Z tota $

PORTNAME=	gdata
PORTVERSION=	2.18.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Various R programming tools for data manipulation

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-gtools>0:devel/R-cran-gtools

USES=		cran:auto-plist perl5 shebangfix
USE_PERL5=	run

SHEBANG_FILES=	inst/perl/*.pl

.include <bsd.port.mk>
