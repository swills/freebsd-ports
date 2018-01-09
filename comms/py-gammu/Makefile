# Created by: vanilla@
# $FreeBSD: head/comms/py-gammu/Makefile 458232 2018-01-06 08:09:12Z vanilla $

PORTNAME=	gammu
PORTVERSION=	2.11
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
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
