# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-editdistance/Makefile 495374 2019-03-11 18:07:28Z sunpoet $

PORTNAME=	editdistance
PORTVERSION=	0.5.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast implementation of the edit distance (Levenshtein distance)

LICENSE=	MIT

USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/editdistance/bycython.so

.include <bsd.port.mk>
