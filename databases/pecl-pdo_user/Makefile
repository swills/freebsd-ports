# Created by: Jui-Nan Lin <jnlin@freebsd.cs.nctu.edu.tw>
# $FreeBSD: head/databases/pecl-pdo_user/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	pdo_user
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	databases www
DISTNAME=	PDO_USER-${PORTVERSION}

MAINTAINER=	jnlin@freebsd.cs.nctu.edu.tw
COMMENT=	PECL classes provides a Userspace interface for PDO drivers

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

WRKSRC=		${WRKDIR}/PDO_USER-${PORTVERSION}

USES=		php:pecl
USE_PHP=	pdo:build
IGNORE_WITH_PHP=	71 72 73

.include <bsd.port.mk>
