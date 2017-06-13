# Created by: lon_kamikaze@gmx.de
# $FreeBSD: head/cad/freehdl/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	freehdl
PORTVERSION=	0.0.7
PORTREVISION=	3
CATEGORIES=	cad
MASTER_SITES=	http://freehdl.seul.org/~enaroska/

MAINTAINER=	kamikaze@bsdforen.de
COMMENT=	Free VHDL simulator

USES=		gmake pathfix libtool makeinfo perl5 pkgconfig
USE_LDCONFIG=	yes
USE_GCC=	any
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	SYSTEM_LIBTOOL=${FALSE}
INSTALL_TARGET=	install-strip

INFO=		fire

.include <bsd.port.mk>
