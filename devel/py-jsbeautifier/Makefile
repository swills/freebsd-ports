# Created by: Shaun Amott <shaun@FreeBSD.org>
# $FreeBSD: head/devel/py-jsbeautifier/Makefile 493364 2019-02-19 12:17:30Z bofh $

PORTNAME=	jsbeautifier
PORTVERSION=	1.8.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	shaun@FreeBSD.org
COMMENT=	JavaScript unobfuscator and beautifier

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.6.1:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}editorconfig>=0.12.0:editors/py-editorconfig@${PY_FLAVOR}

USES?=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
