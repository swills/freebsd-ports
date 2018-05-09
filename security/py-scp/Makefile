# $FreeBSD: head/security/py-scp/Makefile 469238 2018-05-06 16:27:11Z krion $

PORTNAME=	scp
DISTVERSION=	0.11.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sergey@akhmatov.ru
COMMENT=	Scp module for paramiko

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}paramiko>0:security/py-paramiko@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
