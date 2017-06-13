# $FreeBSD: head/www/plone/Makefile 413516 2016-04-17 17:00:55Z rm $

PORTNAME=	plone
PORTVERSION=	4.3.9
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
DISTNAME=	Plone-${PORTVERSION}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Plone Content Management System

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFPlacefulWorkflow>=0:devel/py-Products.CMFPlacefulWorkflow \
		${PYTHON_PKGNAMEPREFIX}Products.CMFPlone>=0:www/py-Products.CMFPlone \
		${PYTHON_PKGNAMEPREFIX}plone.app.caching>=0:www/py-plone.app.caching \
		${PYTHON_PKGNAMEPREFIX}plone.app.dexterity>0:www/py-plone.app.dexterity \
		${PYTHON_PKGNAMEPREFIX}plone.app.iterate>=0:www/py-plone.app.iterate \
		${PYTHON_PKGNAMEPREFIX}plone.app.openid>=0:security/py-plone.app.openid \
		${PYTHON_PKGNAMEPREFIX}plone.app.theming>0:www/py-plone.app.theming \
		${PYTHON_PKGNAMEPREFIX}wicked>=0:textproc/py-wicked

OPTIONS_DEFINE=		LDAP
LDAP_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.app.ldap>=1.2.6:www/py-plone.app.ldap

NO_ARCH=	yes
USES=		cpe python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
