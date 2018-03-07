# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/www/py-django-contact-form/Makefile 463771 2018-03-06 22:45:36Z rene $

PORTNAME=	django-contact-form
PORTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Generic contact-form application for Django

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.11:www/py-django@${FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}akismet>=0:devel/py-akismet@${FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
