# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/science/R-cran-udunits2/Makefile 444440 2017-06-27 03:36:03Z tota $

PORTNAME=	udunits2
PORTVERSION=	0.13
CATEGORIES=	science
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Udunits-2 Bindings for R

LICENSE=	GPLv2

LIB_DEPENDS=	libudunits2.so:science/udunits \
		libexpat.so:textproc/expat2

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
