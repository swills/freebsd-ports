# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/www/py-google/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	google
DISTVERSION=	2.0.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python bindings to the Google search engine

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4:www/py-beautifulsoup@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
