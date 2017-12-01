# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: head/graphics/py-rabbyt/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	rabbyt
PORTVERSION=	0.8.2
PORTREVISION=	2
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP/source/R/Rabbyt \
		http://mirror.amdmi3.ru/distfiles/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Rabbyt-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Fast sprite library for Python

USES=		python:2.7
USE_PYTHON=	distutils autoplist
USE_GL=		gl glu

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/rabbyt/*.so

.include <bsd.port.mk>
