# Created by: Hye-Shik Chang <perky@FreeBSD.org>
# $FreeBSD: head/devel/py-cheetah/Makefile 473171 2018-06-24 01:06:12Z yuri $

PORTNAME=	cheetah
PORTVERSION=	2.4.4
PORTREVISION=	1
CATEGORIES=	devel textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Cheetah-${DISTVERSION}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	HTML template engine for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>=2.0.3:textproc/py-markdown@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
