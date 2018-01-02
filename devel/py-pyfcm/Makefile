# $FreeBSD: head/devel/py-pyfcm/Makefile 456977 2017-12-22 13:45:31Z olgeni $

PORTNAME=	pyfcm
PORTVERSION=	1.4.3
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
