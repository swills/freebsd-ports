# Created by: ijliao
# $FreeBSD: head/www/py-mechanize/Makefile 496056 2019-03-17 12:53:27Z lwhsu $

PORTNAME=	mechanize
PORTVERSION=	0.4.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Stateful programmatic web browsing in Python

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}html5lib>=0.9:www/py-html5lib@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}html5-parser>0:www/py-html5-parser@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
