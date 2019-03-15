# $FreeBSD: head/security/py-scp/Makefile 495451 2019-03-12 13:06:56Z meta $

PORTNAME=	scp
DISTVERSION=	0.13.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sergey@akhmatov.ru
COMMENT=	Scp module for paramiko

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}paramiko>0:security/py-paramiko@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
