# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/security/py-pyelliptic/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	pyelliptic
PORTVERSION=	1.5.8
CATEGORIES=	security python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python OpenSSL wrapper

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>=0:security/py-openssl@${FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	yann2192

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
