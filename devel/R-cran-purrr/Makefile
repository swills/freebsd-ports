# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-purrr/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	purrr
PORTVERSION=	0.2.4
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Functional Programming Tools

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

CRAN_DEPENDS=	R-cran-magrittr>=1.5:devel/R-cran-magrittr \
		R-cran-tibble>0:devel/R-cran-tibble \
		R-cran-rlang>=0.1:devel/R-cran-rlang
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
