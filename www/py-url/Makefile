# $FreeBSD: head/www/py-url/Makefile 491837 2019-02-01 18:55:18Z kai $

PORTNAME=	url
DISTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	URL parsing, sanitizing and normalizing

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}

USES=		compiler:c++11-lang python
USE_PYTHON=	cython distutils autoplist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/url/url.so

.include <bsd.port.mk>
