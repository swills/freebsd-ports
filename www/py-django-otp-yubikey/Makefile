# Created by: Carlo Strub <cs@FreeBSD.org>
# $FreeBSD: head/www/py-django-otp-yubikey/Makefile 493443 2019-02-20 20:34:50Z cs $

PORTNAME=	django-otp-yubikey
PORTVERSION=	0.5.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Plugin that verifies YubiKey OTP tokens

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}YubiOTP>=0.2.1:security/py-YubiOTP@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django-otp>0.4.0:www/py-django-otp@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
