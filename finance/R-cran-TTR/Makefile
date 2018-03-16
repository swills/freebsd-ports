# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/finance/R-cran-TTR/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	TTR
DISTVERSION=	0.23-2
PORTREVISION=	1
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Technical Trading Rules

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-xts>=0.10.0:math/R-cran-xts \
		R-cran-zoo>0:math/R-cran-zoo \
		R-cran-curl>0:ftp/R-cran-curl
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
