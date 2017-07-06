# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/www/py-django-post_office/Makefile 445116 2017-07-06 01:36:47Z ultima $

PORTNAME=	django-post_office
PORTVERSION=	3.0.0
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
NO_ARCH=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	ui
GH_TAGNAME=	v3.0

.include <bsd.port.mk>
