# $FreeBSD: head/sysutils/py-hpilo/Makefile 478943 2018-09-04 09:49:52Z pizzamig $

PORTNAME=	hpilo
PORTVERSION=	4.3
CATEGORIES=	sysutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Python cli to interact with HP iLO management interface

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=	python

USE_GITHUB=	yes
GH_ACCOUNT=	seveas
GH_PROJECT=	python-hpilo

USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
