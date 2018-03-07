# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/textproc/py-pyhamcrest/Makefile 463464 2018-03-03 07:16:13Z ultima $

PORTNAME=	PyHamcrest
DISTVERSION=	1.9.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Hamcrest matchers for Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.4:devel/py-six@${FLAVOR}

USES=		python:2.7-3.4
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
