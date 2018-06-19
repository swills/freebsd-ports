# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/ftp/rubygem-curb/Makefile 471168 2018-05-30 19:48:49Z sunpoet $

PORTNAME=	curb
PORTVERSION=	0.9.6
CATEGORIES=	ftp rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for libcurl

LICENSE=	RUBY
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
