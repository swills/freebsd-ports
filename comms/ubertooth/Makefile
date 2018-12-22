# Created by: George V. Neville-Neil <gnn@freebsd.org>
# $FreeBSD: head/comms/ubertooth/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	ubertooth
PORTVERSION=	201808R1
PORTREVISION=	1
CATEGORIES=	comms

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Bluetooth Baseband Library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/../COPYING

LIB_DEPENDS=	libpyside-python2.7.so:devel/pyside \
		libbtbb.so:comms/libbtbb

BUILD_DEPENDS=	${PYNUMPY}

USES=		cmake:outsource \
		python

USE_GITHUB=	yes
GH_ACCOUNT=	greatscottgadgets
GH_TAGNAME=	2018-08-R1

WRKSRC_SUBDIR=	host
.include <bsd.port.mk>
