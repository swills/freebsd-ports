# $FreeBSD: head/graphics/py-gizeh/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	gizeh
DISTVERSION=	0.1.10
PORTREVISION=	1
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
