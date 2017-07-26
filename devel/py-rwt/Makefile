# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-rwt/Makefile 446600 2017-07-25 16:21:45Z sunpoet $

PORTNAME=	rwt
PORTVERSION=	3.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	RWT (Run With This) provides on-demand dependency resolution

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>=1.15.0:devel/py-setuptools_scm
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>=0:devel/py-pip

NO_ARCH=	yes
USE_PYTHON=	concurrent distutils
USES=		python

.include <bsd.port.mk>
