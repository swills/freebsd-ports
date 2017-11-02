# Created by: girgen@FreeBSD.org
# $FreeBSD: head/security/pecl-krb5/Makefile 453381 2017-11-02 21:41:47Z olgeni $

PORTNAME=	krb5
PORTVERSION=	1.1.1
CATEGORIES=	security pear

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	PECL classes for PAM integration

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libkrb5support.so:security/krb5

USES=		php:pecl

CONFIGURE_ARGS=	--with-krb5config=${LOCALBASE}/bin/krb5-config

.include <bsd.port.mk>
