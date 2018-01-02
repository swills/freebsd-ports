# $FreeBSD: head/devel/py-nose2/Makefile 456775 2017-12-20 02:34:52Z swills $

PORTNAME=	nose2
PORTVERSION=	0.7.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	daniel@blodan.se
COMMENT=	Next generations of nicer testing for Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/license.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=4.4.1:devel/py-coverage@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.7:devel/py-six@${FLAVOR}

NO_ARCH=	yes
USES=		python:3.4+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
