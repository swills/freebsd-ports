# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/devel/py-pika-pool/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pika-pool
PORTVERSION=	0.1.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Pika connection pooling

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pika>=0.9.0:devel/py-pika@${FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
