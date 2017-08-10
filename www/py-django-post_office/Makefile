# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/www/py-django-post_office/Makefile 447179 2017-08-02 21:52:29Z ultima $

PORTNAME=	django-post_office
PORTVERSION=	3.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=	www python
MASTER_SITES=	GH
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Django app to monitor and send mail asynchronously

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django-jsonfield>=0:www/py-django-jsonfield \
		${PYTHON_PKGNAMEPREFIX}django18>=1.8:www/py-django18

USES=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes
GH_ACCOUNT=	ui

NO_ARCH=	yes

.include <bsd.port.mk>
