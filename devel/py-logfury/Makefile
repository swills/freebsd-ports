# Created by: gordon@FreeBSD.org
# $FreeBSD: head/devel/py-logfury/Makefile 457499 2017-12-29 09:01:54Z antoine $

PORTNAME=	logfury
PORTVERSION=	0.1.2
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gordon@FreeBSD.org
COMMENT=	Toolkit for logging of library method calls

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.10:devel/py-six@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}funcsigs>=1.0.2:devel/py-funcsigs@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes
GH_ACCOUNT=	ppolewicz

.include <bsd.port.mk>
