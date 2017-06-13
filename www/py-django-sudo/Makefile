# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-sudo/Makefile 423421 2016-10-06 16:48:43Z tj $

PORTNAME=	sudo
PORTVERSION=	2.1.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Sudo mode is an extra layer of security for Django

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
