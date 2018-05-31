# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-purrr/Makefile 471129 2018-05-30 10:27:44Z tota $

PORTNAME=	purrr
PORTVERSION=	0.2.5
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Functional Programming Tools

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

CRAN_DEPENDS=	R-cran-magrittr>=1.5:devel/R-cran-magrittr \
		R-cran-rlang>=0.1:devel/R-cran-rlang \
		R-cran-tibble>0:devel/R-cran-tibble
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
