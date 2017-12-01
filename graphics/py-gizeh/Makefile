# $FreeBSD: head/graphics/py-gizeh/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	gizeh
DISTVERSION=	0.1.10
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Simple vector graphics in Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cairocffi>0:graphics/py-cairocffi@${FLAVOR} \
		${PYNUMPY}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
