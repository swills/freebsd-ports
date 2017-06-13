# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/security/pear-File_SMBPasswd/Makefile 443317 2017-06-11 07:44:39Z sunpoet $

PORTNAME=	File_SMBPasswd
PORTVERSION=	1.0.3
CATEGORIES=	security www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class for managing SAMBA style password files

BUILD_DEPENDS=	${PEARDIR}/Crypt/CHAP.php:security/pear-Crypt_CHAP
RUN_DEPENDS=	${PEARDIR}/Crypt/CHAP.php:security/pear-Crypt_CHAP

USES=		pear php
USE_PHP=	hash

.include <bsd.port.mk>
