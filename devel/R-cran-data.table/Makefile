# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-data.table/Makefile 483807 2018-11-02 13:32:34Z rene $

PORTNAME=	data.table
DISTVERSION=	1.11.8
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Extension of Data.frame

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_i386=	unable to load datatable.so

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
