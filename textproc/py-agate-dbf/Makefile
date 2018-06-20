# $FreeBSD: head/textproc/py-agate-dbf/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	agate-dbf
PORTVERSION=	0.2.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Support reading dbf files for agate

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}agate>=1.5.0:textproc/py-agate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dbfread>=2.0.5:textproc/py-dbfread@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
