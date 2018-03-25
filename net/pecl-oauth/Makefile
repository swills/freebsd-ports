# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pecl-oauth/Makefile 465055 2018-03-20 02:20:07Z dbaio $

PORTNAME=	oauth
PORTVERSION=	1.2.3
PORTREVISION=	2
CATEGORIES=	net pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Php Interface to the OAuth Protocol

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"

PORTSCOUT=	limit:^1.*

.include <bsd.port.mk>
