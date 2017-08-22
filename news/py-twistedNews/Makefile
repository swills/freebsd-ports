# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: head/news/py-twistedNews/Makefile 448402 2017-08-20 12:29:21Z sunpoet $

PORTNAME=	twistedNews
PORTVERSION=	15.2.1
CATEGORIES=	news devel python
MASTER_SITES=	http://twistedmatrix.com/Releases/News/${PORTVERSION:R}/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TwistedNews-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	NNTP protocol implementation with client and server

LICENSE=	MIT

DEPRECATED=	Use devel/py-twisted instead
EXPIRATION_DATE=2017-09-30

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python:2 tar:bzip2 twisted

.include <bsd.port.mk>
