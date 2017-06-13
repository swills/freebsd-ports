# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: head/graphics/py-rabbyt/Makefile 441503 2017-05-23 05:03:14Z rezny $

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

USES=		python
USE_PYTHON=	distutils autoplist
USE_GL=		gl glu

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/rabbyt/*.so

.include <bsd.port.mk>
