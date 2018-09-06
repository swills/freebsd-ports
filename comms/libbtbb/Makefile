# Created by: George V. Neville-Neil <gnn@freebsd.org>
# $FreeBSD: head/comms/libbtbb/Makefile 478962 2018-09-04 14:11:56Z gnn $

PORTNAME=	libbtbb
PORTVERSION=	201808R1
CATEGORIES=	comms

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Bluetooth Baseband Library

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYNUMPY}

USES=		cmake:outsource \
		python:2.7,build

USE_GITHUB=	yes
GH_ACCOUNT=	greatscottgadgets
GH_TAGNAME=	2018-08-R1

.include <bsd.port.mk>
