# Created by: Shaun Amott <shaun@FreeBSD.org>
# $FreeBSD: head/devel/py-jsbeautifier/Makefile 438328 2017-04-12 02:32:08Z shaun $

PORTNAME=	jsbeautifier
PORTVERSION=	1.6.12
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	shaun@FreeBSD.org
COMMENT=	JavaScript unobfuscator and beautifier

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.6.1:devel/py-six \
		${PYTHON_PKGNAMEPREFIX}editorconfig>=0.12.0:editors/py-editorconfig

USES?=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
