# Created by: Markus Brueffer <markus@FreeBSD.org>
# $FreeBSD: head/deskutils/kchmviewer/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	kchmviewer
PORTVERSION=	7.7
PORTREVISION=	3
CATEGORIES=	deskutils kde
MASTER_SITES=	SF

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE viewer for CHM files

LIB_DEPENDS=	libchm.so:misc/chmlib \
		libzip.so:archivers/libzip

USES=		dos2unix qmake:outsource qt:5 
USE_QT=		core dbus gui network printsupport webkit widgets xml \
		buildtools_build qmake_build
USE_XORG=	x11

DOS2UNIX_GLOB=	*.cpp *.h *.pro *.ui

.include <bsd.port.mk>
