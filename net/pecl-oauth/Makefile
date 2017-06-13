# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pecl-oauth/Makefile 440442 2017-05-08 17:21:49Z dbaio $

PORTNAME=	oauth
PORTVERSION=	1.2.3
PORTREVISION=	2
CATEGORIES=	net pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Php Interface to the OAuth Protocol

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

PORTSCOUT=	limit:^1.*

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"

USES=		php:pecl
IGNORE_WITH_PHP=	70 71

.include <bsd.port.mk>
