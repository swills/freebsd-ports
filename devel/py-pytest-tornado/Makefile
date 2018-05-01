# $FreeBSD: head/devel/py-pytest-tornado/Makefile 468041 2018-04-22 17:30:19Z jbeich $

PORTNAME=	pytest-tornado
PORTVERSION=	0.5.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Py.test plugin providing fixtures and markers for tornado

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tornado>=4:www/py-tornado@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
