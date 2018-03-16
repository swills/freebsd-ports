# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/textproc/R-cran-markdown/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	markdown
PORTVERSION=	0.8
PORTREVISION=	2
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
