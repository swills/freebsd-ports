# Created by: Wen heping <wenheping@gmail.com>
# $FreeBSD: head/databases/pear-DB_ldap2/Makefile 443161 2017-06-11 07:28:53Z sunpoet $

PORTNAME=	DB_ldap2
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	databases net pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR DB compliant interface to LDAP v2 and v3 database

BUILD_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB
RUN_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB

USE_PHP=	ldap
USES=		pear php

.include <bsd.port.mk>
