# $FreeBSD: head/security/py-flask-httpauth/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Flask-HTTPAuth
PORTVERSION=	3.2.3
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Basic and Digest HTTP authentication for Flask routes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>0:www/py-flask@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
