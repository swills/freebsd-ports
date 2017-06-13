# Created by: Kris Moore <kmoore@FreeBSD.org>
# $FreeBSD: head/textproc/py-sphinx-intl/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	sphinx-intl
PORTVERSION=	0.9.5
PORTREVISION=	2
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	Sphinx-intl translation features

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=1.1.3:textproc/py-sphinx \
		${PKGNAMEPREFIX}polib>=1.0.6:devel/py-polib \
		${PKGNAMEPREFIX}six>=1.8.0:devel/py-six

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
