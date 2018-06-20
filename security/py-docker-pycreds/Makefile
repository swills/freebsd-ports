# $FreeBSD: head/security/py-docker-pycreds/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	docker-pycreds
PORTVERSION=	0.2.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lifanov@FreeBSD.org
COMMENT=	Python bindings for the docker credentials store API

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.4:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
