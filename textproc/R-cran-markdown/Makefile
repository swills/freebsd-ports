# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/textproc/R-cran-markdown/Makefile 443845 2017-06-18 18:09:16Z dbn $

PORTNAME=	markdown
PORTVERSION=	0.8
PORTREVISION=	1
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Markdown Rendering for R

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-mime>=0.3:misc/R-cran-mime
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
