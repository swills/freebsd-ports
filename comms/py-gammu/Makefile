# Created by: vanilla@
# $FreeBSD: head/comms/py-gammu/Makefile 426005 2016-11-13 03:13:37Z vanilla $

PORTNAME=	gammu
PORTVERSION=	2.7
CATEGORIES=	comms python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Python bindings for Gammu library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libGammu.so:comms/gammu

USES=		pkgconfig python:-2.7 tar:bz2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
