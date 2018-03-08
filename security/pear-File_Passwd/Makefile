# Created by: Antonio Carlos Venancio Junior <antonio@inf.ufsc.br>
# $FreeBSD: head/security/pear-File_Passwd/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	File_Passwd
PORTVERSION=	1.1.7
CATEGORIES=	security pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class to manipulate many kinds of password files

USES=		pear

OPTIONS_DEFINE=	PEAR_CRYPT_CHAP
PEAR_CRYPT_CHAP_DESC=	PEAR::Crypt_CHAP support

PEAR_CRYPT_CHAP_RUN_DEPENDS=	${PEARDIR}/Crypt/CHAP.php:security/pear-Crypt_CHAP@${PHP_FLAVOR}

.include <bsd.port.mk>
