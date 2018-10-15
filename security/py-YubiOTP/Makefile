# Created by: Carlo Strub <cs@FreeBSD.org>
# $FreeBSD: head/security/py-YubiOTP/Makefile 481844 2018-10-11 18:45:22Z cs $

PORTNAME=	YubiOTP
PORTVERSION=	0.2.2
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Library for verifying YubiKey OTP tokens

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pycrypto>0:security/py-pycrypto@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
