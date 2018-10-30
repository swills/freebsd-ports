# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/py-kyotocabinet/Makefile 483407 2018-10-29 22:12:33Z sunpoet $

PORTNAME=	kyotocabinet
PORTVERSION=	1.22
DISTVERSIONPREFIX=	python-
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	https://fallabs.com/${PORTNAME}/pythonpkg/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python binding of kyotocabinet

LICENSE=	GPLv3

LIB_DEPENDS=	libkyotocabinet.so:databases/kyotocabinet

USE_PYTHON=	autoplist distutils
USES=		python:3.4+

.include <bsd.port.mk>
