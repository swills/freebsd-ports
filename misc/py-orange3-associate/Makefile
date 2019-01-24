# $FreeBSD: head/misc/py-orange3-associate/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	orange3-associate
DISTVERSION=	1.1.5-5
PORTREVISION=	2
DISTVERSIONSUFFIX=	-ge82d0db
CATEGORIES=	misc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Orange 3 add-on: Frequent itemsets and association rules mining

LICENSE=	GPLv3+

RUN_DEPENDS=	orange3>0:misc/orange3 \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.12.0:science/py-scipy@${PY_FLAVOR}

USES=		python:3.4+
USE_GITHUB=	yes
GH_ACCOUNT=	biolab
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
