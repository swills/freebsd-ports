# $FreeBSD: head/textproc/py-sphinxcontrib-newsfeed/Makefile 481464 2018-10-07 17:30:09Z rigoletto $

PORTNAME=	sphinxcontrib-newsfeed
PORTVERSION=	0.1.4
CATEGORIES=	textproc
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rigoletto@FreeBSD.org
COMMENT=	News Feed extension for Sphinx

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=0:textproc/py-sphinx@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
