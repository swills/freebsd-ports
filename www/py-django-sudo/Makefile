# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-sudo/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	sudo
PORTVERSION=	2.1.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Sudo mode is an extra layer of security for Django

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
