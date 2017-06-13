# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/py-kyotocabinet/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	kyotocabinet
PORTVERSION=	1.22
DISTVERSIONPREFIX=	python-
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	http://fallabs.com/${PORTNAME}/pythonpkg/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python binding of kyotocabinet

LICENSE=	GPLv3

LIB_DEPENDS=	libkyotocabinet.so:databases/kyotocabinet

USE_PYTHON=	autoplist distutils
USES=		python:3

.include <bsd.port.mk>
