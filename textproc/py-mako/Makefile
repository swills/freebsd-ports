# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: head/textproc/py-mako/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	mako
PORTVERSION=	1.0.7
CATEGORIES=	textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Mako-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Super-fast templating language in Python

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beaker>=1.1:www/py-beaker@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}MarkupSafe>=0.9.2:textproc/py-MarkupSafe@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Babel>0:devel/py-babel@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beaker>=1.1:www/py-beaker@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}MarkupSafe>=0.9.2:textproc/py-MarkupSafe@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Babel>0:devel/py-babel@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
