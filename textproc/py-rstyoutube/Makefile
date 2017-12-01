# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/textproc/py-rstyoutube/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	rstyoutube
PORTVERSION=	0.1.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Embed YouTube videos in reStructuredText documents

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}docutils>=0.11:textproc/py-docutils@${FLAVOR}

USES=	python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
