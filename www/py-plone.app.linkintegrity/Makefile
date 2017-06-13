# $FreeBSD: head/www/py-plone.app.linkintegrity/Makefile 413428 2016-04-16 10:36:51Z rm $

PORTNAME=	plone.app.linkintegrity
PORTVERSION=	1.5.8
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Manage link integrity in Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.uuid>=0:www/py-plone.uuid

NO_ARCH=	yes
USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
