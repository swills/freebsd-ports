# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-cheetah3/Makefile 476316 2018-08-03 18:10:01Z antoine $

PORTNAME=	cheetah
PORTVERSION=	3.1.0
PORTREVISION=	0
CATEGORIES=	devel textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	3
DISTNAME=	Cheetah3-${DISTVERSION}

MAINTAINER=	FreeBSD@ShaneWare.Biz
COMMENT=	HTML template engine for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>=2.0.3:textproc/py-markdown@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
