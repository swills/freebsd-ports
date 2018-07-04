# $FreeBSD: head/textproc/py-grako/Makefile 473800 2018-07-03 06:16:35Z yuri $

PORTNAME=	grako
DISTVERSION=	3.99.9
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Convert EBNF grammar to PEG/Packrat parser in Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	distutils cython autoplist

.include <bsd.port.mk>
