# $FreeBSD: head/devel/py-Products.MIMETools/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Products.MIMETools
PORTVERSION=	2.13.0
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Provides the <!--#mime--> tag for DocumentTemplate

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}DocumentTemplate>=0:devel/py-DocumentTemplate

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
