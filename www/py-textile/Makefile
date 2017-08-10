# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: head/www/py-textile/Makefile 447341 2017-08-04 14:40:37Z bofh $

PORTNAME=	textile
PORTVERSION=	2.3.15
CATEGORIES=	www textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Textile markup generator written in Python

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner \
		${PYTHON_PKGNAMEPREFIX}pytest>=2.8:devel/py-pytest

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
