# Created by: vanilla@
# $FreeBSD: head/comms/py-gammu/Makefile 449656 2017-09-11 15:20:54Z vanilla $

PORTNAME=	gammu
PORTVERSION=	2.9
CATEGORIES=	comms python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Python bindings for Gammu library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libGammu.so:comms/gammu

USES=		pkgconfig python:-2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
