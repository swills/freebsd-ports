# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-data.table/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	data.table
DISTVERSION=	1.11.8
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Extension of Data.frame

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_i386=	unable to load datatable.so

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
