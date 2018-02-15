# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/www/py-django-constance/Makefile 461676 2018-02-13 00:46:49Z ultima $

PORTNAME=	django-constance
PORTVERSION=	2.1.0
CATEGORIES=	www python
MASTER_SITES=	GH
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Dynamic Django settings

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}redis>=0:databases/py-redis@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coverage>=0:devel/py-coverage@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django-picklefield>=0:www/py-django-picklefield@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django18>=1.8:www/py-django18@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	jazzband

.include <bsd.port.mk>
