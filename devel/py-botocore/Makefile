# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: head/devel/py-botocore/Makefile 453218 2017-10-31 08:31:09Z bhughes $

PORTNAME=	botocore
PORTVERSION=	1.7.36
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bhughes@FreeBSD.org
COMMENT=	Low-level, core functionality of boto 3

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=2.1:devel/py-dateutil \
		${PYTHON_PKGNAMEPREFIX}jmespath>=0.7.1:devel/py-jmespath \
		${PYTHON_PKGNAMEPREFIX}docutils>=0.10:textproc/py-docutils

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
