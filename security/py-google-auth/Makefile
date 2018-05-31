# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/security/py-google-auth/Makefile 471158 2018-05-30 19:47:57Z sunpoet $

PORTNAME=	google-auth
PORTVERSION=	1.4.2
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google Authentication Library

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cachetools>=2.0.0:devel/py-cachetools@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyasn1-modules>=0.2.1:devel/py-pyasn1-modules@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}rsa>=3.1.4:security/py-rsa@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.9.0:devel/py-six@${FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
