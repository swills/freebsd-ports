# Created by: John Marino <marino@FreeBSD.org>
# $FreeBSD: head/textproc/py-sphinxcontrib-adadomain/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	sphinxcontrib-adadomain
PORTVERSION=	0.1
PORTREVISION=	3
CATEGORIES=	textproc
MASTER_SITES=	https://pypi.python.org/packages/source/s/${PORTNAME}/ \
		LOCAL/marino
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sphinx Adadomain Extension

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=1.1.3:textproc/py-sphinx@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
