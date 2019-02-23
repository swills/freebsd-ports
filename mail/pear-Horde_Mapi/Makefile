# $FreeBSD: head/mail/pear-Horde_Mapi/Makefile 493581 2019-02-22 19:12:48Z joneum $

PORTNAME=	Horde_Mapi
PORTVERSION=	1.0.10
CATEGORIES=	mail www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde MAPI utility library

USES=	horde
USE_HORDE_RUN=	Horde_Date \
		Horde_Exception

USE_PHP+=	bcmath

RUN_DEPENDS+=	${PEARDIR}/Math/BigInteger.php:math/pear-Math_BigInteger@${PHP_FLAVOR}

.include <bsd.port.mk>
