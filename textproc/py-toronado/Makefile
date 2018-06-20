# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/textproc/py-toronado/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	toronado
PORTVERSION=	0.0.11
CATEGORIES=	textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Fast lxml-based CSS stylesheet inliner

RUN_DEPENDS:=	${PYTHON_PKGNAMEPREFIX}cssselect>=0:www/py-cssselect@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cssutils>=0:www/py-cssutils@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
