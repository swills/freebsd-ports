# $FreeBSD: head/devel/py-pyfcm/Makefile 461700 2018-02-13 12:06:27Z olgeni $

PORTNAME=	pyfcm
PORTVERSION=	1.4.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olgeni@FreeBSD.org

COMMENT=	Python client for Firebase Cloud Messaging

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
