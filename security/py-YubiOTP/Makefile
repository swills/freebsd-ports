# Created by: Carlo Strub <cs@FreeBSD.org>
# $FreeBSD: head/security/py-YubiOTP/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	YubiOTP
PORTVERSION=	0.2.1
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
