# $FreeBSD: head/www/py-plone.app.linkintegrity/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	plone.app.linkintegrity
PORTVERSION=	1.5.8
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Manage link integrity in Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.uuid>=0:www/py-plone.uuid@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
