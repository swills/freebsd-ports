# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/py-django-debug-toolbar/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-debug-toolbar
PORTVERSION=	1.8
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Configurable set of panels to display debug information

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=1.4.2:www/py-django18@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlparse>0:databases/py-sqlparse@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
