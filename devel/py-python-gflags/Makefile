# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: head/devel/py-python-gflags/Makefile 431127 2017-01-10 19:24:35Z sunpoet $

PORTNAME=	python-gflags
PORTVERSION=	3.1.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Commandline flags module for Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USES=		python shebangfix
USE_PYTHON=	autoplist concurrent distutils

SHEBANG_FILES=	gflags2man.py

.include <bsd.port.mk>
