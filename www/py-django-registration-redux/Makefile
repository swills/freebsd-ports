# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/www/py-django-registration-redux/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-registration-redux
PORTVERSION=	1.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	User-registration application for Django

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

CONFLICTS_INSTALL=	pootle-[0-9]* py??-django-registration-[0-9]*

.include <bsd.port.mk>
