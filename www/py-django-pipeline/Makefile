# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/www/py-django-pipeline/Makefile 457499 2017-12-29 09:01:54Z antoine $

PORTNAME=	django-pipeline
PORTVERSION=	1.6.13
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Asset (css/js) packaging library for Django

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3200
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}futures>0:devel/py-futures@${FLAVOR}
.endif

.include <bsd.port.post.mk>
