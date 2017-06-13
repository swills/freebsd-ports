# Created by: gahr@FreeBSD.org
# $FreeBSD: head/devel/tclvfs/Makefile 413646 2016-04-19 14:20:01Z gahr $

PORTNAME=	tclvfs
PORTVERSION=	20080503
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Tcl VirtualFileSystem layer

LIB_DEPENDS=	libTrf2.1.4.so:devel/tcl-trf

USES+=		gmake tcl:tea
TCL_PKG=	vfs1.3

.include <bsd.port.mk>
