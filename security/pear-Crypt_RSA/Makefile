# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/security/pear-Crypt_RSA/Makefile 443313 2017-06-11 07:44:19Z sunpoet $

PORTNAME=	Crypt_RSA
PORTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	security www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class allows you to use two-key strong cryptography

USES=		pear

OPTIONS_DEFINE=	BCMATH GMP
BCMATH_DESC=	PHP BCMath extension support
GMP_DESC=	PHP GMP extension support

BCMATH_USE=	PHP=bcmath
GMP_USE=	PHP=gmp

.include <bsd.port.mk>
