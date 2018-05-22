# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/py-django-jsonfield2/Makefile 470064 2018-05-15 23:58:26Z sunpoet $

PORTNAME=	jsonfield2
PORTVERSION=	3.0.0
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Reusable Django field to store validated JSON in your model

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python:3.4+

GH_ACCOUNT=	rpkilby
USE_GITHUB=	yes

.include <bsd.port.mk>
