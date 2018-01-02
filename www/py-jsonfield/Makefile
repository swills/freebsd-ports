# Created by: René Ladan <rene@FreeBSD.org>
# $FreeBSD: head/www/py-jsonfield/Makefile 457802 2018-01-01 20:58:47Z sunpoet $

PORTNAME=	jsonfield
PORTVERSION=	2.0.2
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Reusable JSONField model for Django to store validated JSON

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
