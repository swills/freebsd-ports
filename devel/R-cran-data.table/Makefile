# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-data.table/Makefile 481736 2018-10-10 12:37:12Z tota $

PORTNAME=	data.table
DISTVERSION=	1.11.8
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Extension of Data.frame

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_FreeBSD_11_i386=	unable to load datatable.so
BROKEN_FreeBSD_12_i386=	unable to load datatable.so

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
