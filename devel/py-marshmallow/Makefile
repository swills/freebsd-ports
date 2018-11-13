# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-marshmallow/Makefile 483920 2018-11-03 22:16:49Z sunpoet $

PORTNAME=	marshmallow
DISTVERSION=	3.0.0b20
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simplified object serialization for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=0:devel/py-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}simplejson>=0:devel/py-simplejson@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
