# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/textproc/R-cran-markdown/Makefile 440293 2017-05-06 22:44:18Z tota $

PORTNAME=	markdown
PORTVERSION=	0.8
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Markdown Rendering for R

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-mime>=0.3:misc/R-cran-mime
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
