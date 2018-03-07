# $FreeBSD: head/devel/py-pyfcm/Makefile 463715 2018-03-06 11:58:52Z olgeni $

PORTNAME=	pyfcm
PORTVERSION=	1.4.5
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
