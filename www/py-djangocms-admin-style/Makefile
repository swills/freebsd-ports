# $FreeBSD: head/www/py-djangocms-admin-style/Makefile 469566 2018-05-10 16:25:56Z miwi $

PORTNAME=	djangocms-admin-style
DISTVERSION=	1.2.8
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	freebsd_ports@k-worx.org
COMMENT=	Pretty CSS styles for the django CMS admin interface

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
