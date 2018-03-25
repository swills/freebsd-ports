# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/textproc/py-elasticsearch/Makefile 465211 2018-03-21 19:02:48Z sunpoet $

PORTNAME=	elasticsearch
PORTVERSION=	6.2.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Official Python low-level client for Elasticsearch

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}urllib3>=1.21.1:net/py-urllib3@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
