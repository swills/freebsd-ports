# $FreeBSD: head/devel/py-pycompilation/Makefile 480124 2018-09-19 23:38:57Z yuri $

PORTNAME=	pycompilation
DISTVERSION=	0.4.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Package for compilation (meta programming)

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}appdirs>0:devel/py-appdirs@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils cython_run autoplist

.include <bsd.port.mk>
