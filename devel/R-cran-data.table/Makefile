# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-data.table/Makefile 480849 2018-09-28 10:37:46Z tota $

PORTNAME=	data.table
DISTVERSION=	1.11.6
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
