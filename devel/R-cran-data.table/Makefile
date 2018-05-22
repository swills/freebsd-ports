# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-data.table/Makefile 470189 2018-05-17 02:18:52Z tota $

PORTNAME=	data.table
DISTVERSION=	1.11.2
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Extension of Data.frame

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libomp.so:devel/openmp

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
