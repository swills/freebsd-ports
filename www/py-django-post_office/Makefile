# Created by: Ultima <ultima1252@gmail.com>
# $FreeBSD: head/www/py-django-post_office/Makefile 421239 2016-09-01 17:02:23Z pi $

PORTNAME=	django-post_office
PORTVERSION=	2.0.8
DISTVERSIONPREFIX=	v
CATEGORIES=	www python
MASTER_SITES=	GH
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima1252@gmail.com
COMMENT=	Django app to monitor and send mail asynchronously

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django-jsonfield>=0:www/py-django-jsonfield \
		${PYTHON_PKGNAMEPREFIX}django18>=1.4:www/py-django18

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	ui

.include <bsd.port.mk>
