# Created by: Ultima <ultima1252@gmail.com>
# $FreeBSD: head/www/py-django-constance/Makefile 438696 2017-04-17 14:35:00Z lifanov $

PORTNAME=	django-constance
PORTVERSION=	2.0.0
CATEGORIES=	www python
MASTER_SITES=	GH
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima1252@gmail.com
COMMENT=	Dynamic Django settings

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}redis>=0:databases/py-redis \
		${PYTHON_PKGNAMEPREFIX}coverage>=0:devel/py-coverage \
		${PYTHON_PKGNAMEPREFIX}django-picklefield>=0:www/py-django-picklefield \
		${PYTHON_PKGNAMEPREFIX}django18>=1.8:www/py-django18

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	jazzband

.include <bsd.port.mk>
