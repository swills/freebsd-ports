# $FreeBSD: head/www/feedjack/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	feedjack
PORTVERSION=	0.9.16
PORTREVISION=	2
CATEGORIES=	www
MASTER_SITES=	http://www.feedjack.org/download/
DISTNAME=	Feedjack-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Feed aggregator written in Python using the Django framework

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/feedparser.py:textproc/py-feedparser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django18>0:www/py-django18@${PY_FLAVOR}

DIST_SUBDIR=	python
USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
