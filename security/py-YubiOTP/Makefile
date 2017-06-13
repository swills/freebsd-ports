# Created by: Carlo Strub <cs@FreeBSD.org>
# $FreeBSD: head/security/py-YubiOTP/Makefile 416759 2016-06-11 21:59:56Z cs $

PORTNAME=	YubiOTP
PORTVERSION=	0.2.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Library for verifying YubiKey OTP tokens

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six \
		${PYTHON_PKGNAMEPREFIX}pycrypto>0:security/py-pycrypto

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
